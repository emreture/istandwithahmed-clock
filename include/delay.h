#ifndef DELAY_H_
#define DELAY_H_

#include "config.h"

//Clock signals in Hz
#ifndef FREQ_MCLK
#error FREQ_MCLK not defined!
#endif

#ifndef FREQ_SMCLK
#define FREQ_SMCLK		FREQ_MCLK //Default sub-main clock frequency in Hz
#endif

#ifndef FREQ_ACLK
#define FREQ_ACLK		  32768UL //Default auxiliary clock frequency in Hz
#endif

//Clock signal dividers
#ifndef DIV_MCLK
#define DIV_MCLK	1 //Default MCLK divider. MCLK is divided by 1, 2, 4 or 8
#endif

#ifndef DIV_SMCLK
#define DIV_SMCLK	1 //Default SMCLK divider. SMCLK is divided by 1, 2, 4 or 8
#endif

#ifndef DIV_ACLK
#define DIV_ACLK	1 //Default ACLK divider. ACLK is divided by 1, 2, 4 or 8
#endif

//CPU frequency
#define FREQ_CPU	(FREQ_MCLK / DIV_MCLK)

//Delay macros
//NOTE: When a value larger than 196605 (65535 * 3) is passed to
//      __delay_cycles() two nested loops are used instead of one.
//      This causes more delay than expected.
//      See http://www.embeddedrelated.com/groups/msp430/show/38282.php
//      and http://electronics.stackexchange.com/questions/52810/how-does-delay-cycles-work

#define delay(seconds)			__delay_cycles(seconds * FREQ_CPU) //Delays slightly more than intended. See the NOTE above.
#define delayms(miliseconds)	__delay_cycles(miliseconds * FREQ_CPU / 1000)
#define delayus(microseconds)	__delay_cycles(microseconds * FREQ_CPU / 1000000)

#endif //DELAY_H_
