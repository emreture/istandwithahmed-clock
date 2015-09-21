//******************************************************************************
//  Simple digital clock
//
//  Description: Support #IStandWithAhmed and demonstrate the PCD8544 library.
//
//  License: This source code is distributed under the zlib/libpng license.
//
//  ACLK = LFXT1 = 32768Hz, MCLK = SMCLK = 1 MHz.
//
//                MSP430G2553
//             -----------------
//         /|\|              XIN|-
//          | |                 | 32kHz
//          --|RST          XOUT|-
//            |                 |
//    SCLCK<--|P1.5         P2.0|-->D/C
//            |                 |
//     SDIN<--|P1.7         P2.1|-->SCE
//            |                 |
//            |             P2.2|-->RES
//
//  M. Emre TÜRE
//  emreture.net
//  September 2015
//  Built with CCS Version 5.5.0
//******************************************************************************

#include "pcd8544.h"

volatile uint16_t hour = 0;
volatile uint16_t minute = 0;
volatile uint16_t seconds = 0;
volatile uint16_t ticks = 0;
scroll_t msg;
scroll_t header;
extern font_t sinclairFont;
extern font_t groteskBold16x32Font;
extern const uint8_t bitmap_ahmed[];
bitmap_t bitmap = {84, 6, (uint8_t*)bitmap_ahmed};

void main(void)
{
	// Set watchdog timer interval 16 milliseconds.
	WDTCTL = WDT_ADLY_16;
	// Check clock calibration constant.
	if (CALBC1_16MHZ==0xFF)
	{
		while(1);
	}
	// Set master clock to 16 MHz.
	BCSCTL1 = CALBC1_16MHZ;
	DCOCTL = CALDCO_16MHZ;
	// Configure pins.
	P1DIR = 0xFF;
	P1OUT = 0;
	P1SEL = 0;
	P1SEL2 = 0;
	P2DIR = 0xFF;
	P2OUT = 0;
	P2SEL = 0xC0;// Enable 32kHz LFXT1.
	P2SEL2 = 0;
	P3DIR = 0xFF;
	P3OUT = 0;
	P3SEL = 0;
	P3SEL2 = 0;
	// Use Pin2.0 for DC, Pin2.1 for SCE, Pin2.2 for RES and USCI_B0 peripheral
	// for SPI communication.
	PCD8544_Init(&P2OUT, &P2DIR, BIT0, BIT1, BIT2, USCI_B0);
	// Show splash screen.
	drawBitmap(0, 0, &bitmap);
	delay(3);
	cls();
	// Enable watchdog timer interrupt.
	IE1 |= WDTIE;
	IFG1 &= ~WDTIFG;
	// Init scrolling texts.
	initScrollingText(&msg, "        \
This is not a bomb. It's a simple digital clock, which is probably forbidden \
to carry in Texas, made using Texas Instruments' msp430g2 launchpad. It's \
not as cool as Ahmed's clock but it's OK... Keep up the good work Ahmed and \
never forget \"It is by means of disasters and sicknesses that life is \
refined, perfected, strengthened and advanced; that it yields results, attains \
perfection and fulfills its own purpose\" and stop to think what results this \
disaster has yielded. Finally re-consider your thoughts about bringing your \
inventions to school again."
			, 2, 0, PCD8544_HPIXELS);
	initScrollingText(&header, "               I stand with Ahmed... https://github.com/emreture/istandwithahmed-clock", 1, 0, PCD8544_HPIXELS);
	setFont(&groteskBold16x32Font);
	// Enable interrupts and enter low power mode.
	_BIS_SR(LPM2_bits + GIE);
	// Main loop won't be executed.
	while(1)
	{
		;
	}
}

#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=WDT_VECTOR
__interrupt void WDT_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(WDT_VECTOR))) WDT_ISR (void)
#else
#error Compiler not supported!
#endif
{
	if (++ticks == 64)
	{
		ticks = 0;
		if (++seconds == 60)
		{
			seconds = 0;
			if (++minute == 60)
			{
				minute = 0;
				if (++hour == 24) hour = 0;
			}
		}
		// Print time.
		setFont(&sinclairFont);
		PCD8544_SetAddress(0, 10);
		printInt(hour, 2);
		printChr(':');
		printInt(minute, 2);
		printChr(':');
		printInt(seconds, 2);
		setFont(&groteskBold16x32Font);
	}

	scrollText(&msg);
	if (ticks % 4 == 0)
	{
		setFont(0);
		scrollText(&header);
		setFont(&groteskBold16x32Font);
	}
}
