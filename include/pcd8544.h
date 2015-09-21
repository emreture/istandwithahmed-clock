//******************************************************************************
//  PCD8544 Library for MSP430G2xx3 MCUs
//  This source code is distributed under the zlib/libpng license.
//  2014 - M. Emre TÜRE - emreture.net
//******************************************************************************

#ifndef PCD8544_H_
#define PCD8544_H_

#include <stdlib.h>
#include <stdint.h>
#include <msp430.h>
#include "delay.h"

// Commands (H=0 or H=1  H: Extended instruction set control)
#define PCD8544_NOP				0x00
#define PCD8544_FUNCTIONSET		0x20
// Commands (H=0)
#define PCD8544_DISPLAYCONTROL	0x08
#define PCD8544_SETYADDRESS		0x40
#define PCD8544_SETXADDRESS		0x80
// Commands (H=1)
#define PCD8544_SETTEMP			0x04
#define PCD8544_SETBIAS			0x10
#define PCD8544_SETVOP			0x80

// Function set bits
#define PCD8544_POWERDOWN		0x04
#define PCD8544_ACTIVE			0x00
#define PCD8544_VADDRESSING		0x02
#define PCD8544_HADDRESSING		0x00
#define PCD8544_EXTENDEDCMDSET	0x01
#define PCD8544_BASICCMDSET		0x00

// Display control bits
#define PCD8544_DISPLAYBLANK	0x00
#define PCD8544_NORMALMODE		0x04
#define PCD8544_DISPLAYALLON	0x01
#define PCD8544_INVERSEMODE		0x05

// Temperature control bits
#define PCD8544_TEMP0			0x00
#define PCD8544_TEMP1			0x01
#define PCD8544_TEMP2			0x02
#define PCD8544_TEMP3			0x03

// Bias control bits
#define PCD8544_BIAS0			0x00
#define PCD8544_BIAS1			0x01
#define PCD8544_BIAS2			0x02
#define PCD8544_BIAS3			0x03
#define PCD8544_BIAS4			0x04
#define PCD8544_BIAS5			0x05
#define PCD8544_BIAS6			0x06
#define PCD8544_BIAS7			0x07

// Mode select (DC)
#define PCD8544_CMD		0
#define PCD8544_DATA	1

#define PCD8544_HPIXELS		84
#define PCD8544_VBANKS		6
#define PCD8544_MAXBYTES	504 // PCD8544_HPIXELS * PCD8544_VBANKS

// USCI select for SPI (MSP430G2xx3 specific)
typedef enum {USCI_A0, USCI_B0} USCI_t;

typedef enum {ALIGN_LEFT, ALIGN_CENTER, ALIGN_RIGHT} align_t;

typedef enum {PRINT_NORMAL, PRINT_INVERSE} printMode_t;

typedef struct
{
	char 		*text;		// public
	uint16_t	textLen;	// protected
	uint8_t		row;		// public
	uint8_t		x;			// public
	uint8_t		width;		// public.
	uint16_t	textOffset;	// protected
	uint8_t		charOffset;	// protected
} scroll_t;

typedef struct
{
	uint8_t	width;	// in pixels
	uint8_t	height;	// in rows
	uint8_t	*data;
} bitmap_t;

typedef struct
{
	uint8_t	width;	// in pixels
	uint8_t	height;	// in rows.
	uint8_t	firstISO8859Char;
	uint8_t	lastISO8859Char;
	char (*map)[2];
	uint8_t	mapSize;
	char unknownChar;
	uint8_t	*data;
} font_t;

void PCD8544_Init(volatile unsigned char *signalPort, volatile unsigned char *signalPortDir, uint8_t DC, uint8_t SCE, uint8_t RES, USCI_t USCI);
void PCD8544_Send(uint8_t DC, uint8_t data);
void PCD8544_SetAddress(uint8_t row, uint8_t x);
void cls();
void cursor(uint8_t row, uint8_t column);
void printChr(char c);
void print(char *str);
void printAt(uint8_t row, uint8_t column, char *str);
void printInt(uint16_t integer, uint8_t digits);
void printHex(uint16_t integer, uint8_t digits);
void printAlignedAt(uint8_t row, align_t align, char *str);
void setPrintMode(printMode_t printMode);
void initScrollingText(scroll_t *scroll, char *text, uint8_t row, uint8_t x, uint8_t width);
void scrollText(scroll_t *scroll);
void drawBitmap(uint8_t row, uint8_t x, bitmap_t *bitmap);
void setFont(font_t *font);
char mapChar(char c);
void setUSCI(USCI_t USCI);

#endif // PCD8544_H_
