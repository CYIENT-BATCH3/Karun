/WAP to blink leds for fixed pattern, using 2 switches 2 patterns 
#pragma config OSC = HS      // Oscillator Selection bits (HS oscillator with PLL enabled/Clock frequency = (4 x FOSC))
#pragma config OSCS = ON       // Oscillator System Clock Switch Enable bit (Oscillator system clock switch option is disabled (main oscillator is source))

// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOR = OFF         // Brown-out Reset Enable bit (Brown-out Reset enabled)
#pragma config BORV = 25        // Brown-out Reset Voltage bits (VBOR set to 2.5V)

// CONFIG2H
#pragma config WDT = OFF         // Watchdog Timer Enable bit (WDT enabled)
#pragma config WDTPS = 128      // Watchdog Timer Postscale Select bits (1:128)

// CONFIG4L
#pragma config STVR = OFF        // Stack Full/Underflow Reset Enable bit (Stack Full/Underflow will cause Reset)
#pragma config LVP = OFF         // Low-Voltage ICSP Enable bit (Low-Voltage ICSP enabled)

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000200-001FFFh) not code protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (002000-003FFFh) not code protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (004000-005FFFh) not code protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) not code protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot Block (000000-0001FFh) not code protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000200-001FFFh) not write protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (002000-003FFFh) not write protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (004000-005FFFh) not write protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) not write protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0001FFh) not write protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000200-001FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (002000-003FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (004000-005FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) not protected from Table Reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0001FFh) not protected from Table Reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 20000000	//define crystal frequency
void main()			//start main()
{
    TRISBbits.RB0=1;		//configure RB0 as input		
    TRISBbits.RB1=1;		//configure RB1 as input
    TRISCbits.RC0=0;		//configure RC0 as output
    TRISCbits.RC1=0;		//configure RC1 as output
    PORTCbits.RC0=0;		//make led1 off initially
    PORTCbits.RC1=0;		//make led2 off initially
    RBPU=0;
    while(1)			//while() for infinite execution
    {
        if(PORTBbits.RB0==0)		//if switch_1 is pressed blink led1 for 5 times and led2 for 3 times
        {
            for(int i=0;i<5;i++)	//define a for loop to blink led for 5 times
            {
                PORTCbits.RC0=1;
                __delay_ms(1000);
                PORTCbits.RC0=0;
                __delay_ms(1000);
            }
        
            for(int i=0;i<3;i++)	//define for loop blink led1 for 3 times
            {
                PORTCbits.RC1=1;
                __delay_ms(1000);
                PORTCbits.RC1=0;
                __delay_ms(1000);
            }
        }
         if(PORTBbits.RB1==0)		//if switch_2 is pressed blink led1 for 3 times and led2 for 5 times
        {
            for(int i=0;i<3;i++)	//define a for loop to blink led for 3 times
            {
                PORTCbits.RC0=1;
                __delay_ms(1000);
                PORTCbits.RC0=0;
                __delay_ms(1000);
            }
        
            for(int i=0;i<5;i++)	//define for loop blink led1 for 5 times
            {
                PORTCbits.RC1=1;
                __delay_ms(1000);
                PORTCbits.RC1=0;
                __delay_ms(1000);
            }
        }
    }
}
Footer
