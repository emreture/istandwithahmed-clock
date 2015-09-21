//******************************************************************************
//  PCD8544 Library for MSP430G2xx3 MCUs
//  This source code is distributed under the zlib/libpng license.
//  2014 - M. Emre TÜRE - emreture.net
//******************************************************************************

#include "pcd8544.h"

typedef struct
{
	uint8_t	DC;
	uint8_t SCE;
	uint8_t RES;
	volatile unsigned char *POUT;
	volatile unsigned char *PDIR;
	USCI_t		USCISelect;
	printMode_t	printMode;
	font_t		*font;
	uint8_t		row;
	uint8_t		x;
} PCD8544Context_t;

PCD8544Context_t *pcd8544;
extern font_t	PCD8544_defaultFont;

// Pass SCE = 0 if not used.
void PCD8544_Init(volatile unsigned char *signalPort, volatile unsigned char *signalPortDir, uint8_t DC, uint8_t SCE, uint8_t RES, USCI_t USCI)
{
	pcd8544 = (PCD8544Context_t*)malloc(sizeof(PCD8544Context_t));
	pcd8544->POUT = signalPort;
	pcd8544->PDIR = signalPortDir;
	pcd8544->DC = DC;
	pcd8544->SCE = SCE;
	pcd8544->RES = RES;
	pcd8544->printMode = PRINT_NORMAL;
	pcd8544->font = &PCD8544_defaultFont;
	// Apply RES signal for 100 ms
	*pcd8544->POUT &= ~(pcd8544->DC + pcd8544->SCE + pcd8544->RES);
	*pcd8544->PDIR |= pcd8544->DC + pcd8544->SCE + pcd8544->RES;
	delayms(100);
	*pcd8544->POUT |= pcd8544->RES;
	// Configure USCI SPI
	setUSCI(USCI);
	// Setup PCD8544
	PCD8544_Send(PCD8544_CMD, PCD8544_FUNCTIONSET | PCD8544_EXTENDEDCMDSET);
	PCD8544_Send(PCD8544_CMD, PCD8544_SETVOP | 0x3f);// AKA contrast. Default 0x3f
	PCD8544_Send(PCD8544_CMD, PCD8544_SETTEMP | PCD8544_TEMP0);// default PCD8544_TEMP0
	PCD8544_Send(PCD8544_CMD, PCD8544_SETBIAS | PCD8544_BIAS4);// default PCD8544_BIAS4
	PCD8544_Send(PCD8544_CMD, PCD8544_FUNCTIONSET | PCD8544_ACTIVE | PCD8544_HADDRESSING | PCD8544_BASICCMDSET);
	PCD8544_Send(PCD8544_CMD, PCD8544_DISPLAYCONTROL | PCD8544_NORMALMODE);
	return;
}

void setUSCI(USCI_t USCI)
{
	pcd8544->USCISelect = USCI;
	switch (pcd8544->USCISelect)
	{
	case USCI_A0:
		P1SEL |= BIT2 + BIT4;
		P1SEL2 |= BIT2 + BIT4;
		UCA0CTL1 |= UCSSEL_2 + UCSWRST;// SMCLK, disable USCI_A
		UCA0CTL0 |= UCCKPH + UCMSB + UCMST + UCMODE_0 + UCSYNC;// 3-pin, SPI master, SPI Mode 0
		UCA0BR0 = 1;// Set baud rate
		UCA0BR1 = 0;// to maximum.
		UCA0MCTL = 0;
		UCA0CTL1 &= ~UCSWRST;// USCI reset released for operation.
		break;
	case USCI_B0:
		P1SEL |= BIT5 + BIT7;
		P1SEL2 |= BIT5 + BIT7;
		UCB0CTL1 |= UCSSEL_2 + UCSWRST;// SMCLK, disable USCI_B
		UCB0CTL0 |= UCCKPH + UCMSB + UCMST + UCMODE_0 + UCSYNC;// 3-pin, SPI master, SPI Mode 0
		UCB0BR0 = 1;// Set baud rate
		UCB0BR1 = 0;// to maximum.
		//UCB0MCTL = 0; There is no modulation control register in USCI_Bx.
		UCB0CTL1 &= ~UCSWRST;// USCI reset released for operation.
		break;
	}
}

void PCD8544_Send(uint8_t DC, uint8_t data)
{
	if (DC) *pcd8544->POUT |= pcd8544->DC; else *pcd8544->POUT &= ~pcd8544->DC;
	*pcd8544->POUT &= ~pcd8544->SCE;
	switch (pcd8544->USCISelect)
	{
	case USCI_A0:
		while(!(IFG2 & UCA0TXIFG));
		UCA0TXBUF = data;
		break;
	case USCI_B0:
		while(!(IFG2 & UCB0TXIFG));
		UCB0TXBUF = data;
		break;
	}
	*pcd8544->POUT |= pcd8544->SCE;
	return;
}

void PCD8544_SetAddress(uint8_t row, uint8_t x)
{
	if (row >= PCD8544_VBANKS) row %= PCD8544_VBANKS;
	if (x >= PCD8544_HPIXELS) x %= PCD8544_HPIXELS;
	PCD8544_Send(PCD8544_CMD, PCD8544_SETXADDRESS | x);
	PCD8544_Send(PCD8544_CMD, PCD8544_SETYADDRESS | row);
	pcd8544->x = x;
	pcd8544->row = row;
	return;
}

void cls()
{
	uint_fast16_t i;
	
	PCD8544_SetAddress(0, 0);
	for (i = PCD8544_MAXBYTES; i > 0; i--) PCD8544_Send(PCD8544_DATA, pcd8544->printMode == PRINT_NORMAL ? 0 : 255);
	return;
}

void cursor(uint8_t row, uint8_t column)
{
	PCD8544_SetAddress(row, column * pcd8544->font->width);
	return;
}

void printChr(char c)
{
	static uint_fast8_t i, j;
	static uint8_t oldRow;
	static uint8_t oldX;
	static uint8_t cr; // Carriage return

	oldRow = pcd8544->row;
	oldX = pcd8544->x;
	cr = 0;

	if (c < pcd8544->font->firstISO8859Char || c > pcd8544->font->lastISO8859Char) c = mapChar(c);
	for(i = 0; i < pcd8544->font->height; i++)
	{
		PCD8544_SetAddress(oldRow + i, oldX);
		for(j = 0; j < pcd8544->font->width; j++)
		{
			// PRINT_INVERSE means data = ~data or data = data ^ 0xff
			PCD8544_Send(PCD8544_DATA, pcd8544->printMode == PRINT_NORMAL ? pcd8544->font->data[(c - pcd8544->font->firstISO8859Char) * pcd8544->font->width * pcd8544->font->height + j + pcd8544->font->width * i ] : ~pcd8544->font->data[(c - pcd8544->font->firstISO8859Char) * pcd8544->font->width * pcd8544->font->height + j + pcd8544->font->width * i ]);
			pcd8544->x++;
			if (pcd8544->x == PCD8544_HPIXELS)
			{
				cr += pcd8544->font->height;
				pcd8544->x = 0;
			}
		}
	}
	PCD8544_SetAddress(oldRow + cr, pcd8544->x);
}

void print(char *str)
{
	static uint_fast16_t i;
	
	i = 0;
	while(str[i]) printChr(str[i++]);
	return;
}

void printAt(uint8_t row, uint8_t column, char *str)
{
	cursor(row, column);
	print(str);
	return;
}

void printInt(uint16_t integer, uint8_t digits)
{
	if (!digits)
	{
		if (integer < 10) digits = 1;
		else if (integer < 100) digits = 2;
		else if (integer < 1000) digits = 3;
		else if (integer < 10000) digits = 4;
		else if (integer < 100000) digits = 5;
	}
	switch (digits)
	{
		case 5:
		printChr((integer % 100000) / 10000 + 0x30);
		case 4:
		printChr((integer % 10000) / 1000 + 0x30);
		case 3:
		printChr((integer % 1000) / 100 + 0x30);
		case 2:
		printChr((integer % 100) / 10 + 0x30);
		case 1:
		printChr(integer % 10 + 0x30);
		break;
	}
	return;
}

void printHex(uint16_t integer, uint8_t digits)
{
	static char hex;
	
	if (!digits)
	{
		if (integer < 16) digits = 1;
		else if (integer < 256) digits = 2;
		else if (integer < 4096) digits = 3;
		else if (integer < 65536) digits = 4;
	}
	switch (digits)
	{
		case 4:
		hex = (integer % 65536) / 4096 + 0x30;
		if (hex > 0x39) hex += 7;
		printChr(hex);
		case 3:
		hex = (integer % 4096) / 256 + 0x30;
		if (hex > 0x39) hex += 7;
		printChr(hex);
		case 2:
		hex = (integer % 256) / 16 + 0x30;
		if (hex > 0x39) hex += 7;
		printChr(hex);
		case 1:
		hex = (integer % 16) + 0x30;
		if (hex > 0x39) hex += 7;
		printChr(hex);
		break;
	}
	return;
}

void printAlignedAt(uint8_t row, align_t align, char *str)
{
	static uint_fast16_t len;
	
	len = 0;
	while (str[len++]);
	len--;
	switch(align)
	{
		case ALIGN_LEFT:
		PCD8544_SetAddress(row, 0);
		break;
		case ALIGN_CENTER:
		PCD8544_SetAddress(row, (PCD8544_HPIXELS - len * pcd8544->font->width) / 2);
		break;
		case ALIGN_RIGHT:
		PCD8544_SetAddress(row, PCD8544_HPIXELS - len * pcd8544->font->width);
		break;
	}
	print(str);
	return;
}

void setPrintMode(printMode_t printMode)
{
	pcd8544->printMode = printMode;
	return;
}

void initScrollingText(scroll_t *scroll, char *text, uint8_t row, uint8_t x, uint8_t width)
{
	if (!scroll) return;
	
	uint_fast16_t len = 0;
	
	while (text[len++]);
	scroll->text = text;
	scroll->textLen = len - 1;
	if (row >= PCD8544_VBANKS) scroll->row = row % PCD8544_VBANKS; else scroll->row = row;
	if (x >= PCD8544_HPIXELS) scroll->x = x % PCD8544_HPIXELS; else scroll->x = x;
	if (x + width > PCD8544_HPIXELS) scroll->width = PCD8544_HPIXELS - x; else scroll->width = width;
	scroll->textOffset = 0;
	scroll->charOffset = 0;
	return;
}

void scrollText(scroll_t *scroll)
{
	if (!scroll) return;

	static uint8_t oldRow;
	static uint8_t oldX;
	static uint_fast8_t i, j;
	static char c;
	static uint_fast16_t textOffset;
	static uint_fast16_t charOffset;

	oldRow = pcd8544->row;
	oldX = pcd8544->x;

	for(i = 0; i < pcd8544->font->height; i++)
	{
		PCD8544_SetAddress(scroll->row + i, scroll->x);
		textOffset = scroll->textOffset;
		charOffset = scroll->charOffset;
		c = scroll->text[textOffset];
		for (j = 0; j < scroll->width; j++)
		{
			if (c < pcd8544->font->firstISO8859Char || c > pcd8544->font->lastISO8859Char) c = mapChar(c);
			PCD8544_Send(PCD8544_DATA, pcd8544->printMode == PRINT_NORMAL ? pcd8544->font->data[(c - pcd8544->font->firstISO8859Char) * pcd8544->font->width * pcd8544->font->height + pcd8544->font->width * i + charOffset] : ~pcd8544->font->data[(c - pcd8544->font->firstISO8859Char) * pcd8544->font->width * pcd8544->font->height + pcd8544->font->width * i + charOffset]);
			charOffset++;
			if (charOffset == pcd8544->font->width)
			{
				charOffset = 0;
				textOffset++;
				if (textOffset == scroll->textLen) textOffset = 0;
				c = scroll->text[textOffset];
			}
		}
	}
	scroll->charOffset++;
	if (scroll->charOffset == pcd8544->font->width)
	{
		scroll->charOffset = 0;
		scroll->textOffset++;
		if (scroll->textOffset == scroll->textLen) scroll->textOffset = 0;
	}
	PCD8544_SetAddress(oldRow, oldX);
	return;
}

void drawBitmap(uint8_t row, uint8_t x, bitmap_t *bitmap)
{
	if (!bitmap) return;
	
	static uint_fast8_t i, j;
	static uint_fast16_t offset;

	for (i = 0; i < bitmap->height; i++)
	{
		if (row + i >= PCD8544_VBANKS) return;
		PCD8544_SetAddress(row + i, x);
		offset = i * bitmap->width;
		for (j = 0; j < bitmap->width; j++)
		{
			if (x + j >= PCD8544_HPIXELS) break;
			PCD8544_Send(PCD8544_DATA, bitmap->data[offset++]);
			pcd8544->x++;
		}
	}
	return;
}

void setFont(font_t *font)
{
	if (!font) pcd8544->font = &PCD8544_defaultFont; else pcd8544->font = font;
	return;
}

char mapChar(char c)
{
	static uint_fast16_t i;
	
	for (i = 0; i < pcd8544->font->mapSize; i++)
	{
		if (c == pcd8544->font->map[i][0]) return pcd8544->font->map[i][1];
	}
	return pcd8544->font->unknownChar;
}
