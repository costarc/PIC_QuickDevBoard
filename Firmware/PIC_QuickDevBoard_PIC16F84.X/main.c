#include <xc.h>

// Configuration bits
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// Define _XTAL_FREQ if using delay functions
#define _XTAL_FREQ 9804000  // 9.804 MHz crystal oscillator

void main(void) {
    TRISA0 = 1;  // Set RA0 as input (button)
    TRISB4 = 0;  // Set RB4 as output (LED)
    RB4 = 0;     // Initialize LED off
    
    int delay = 500;
    while (1) {
        RB4 = 1;     // Turn on LED
        if (RA0 == 0) // If button is pressed (active low)
            __delay_ms(100); // Delay for 100ms (LED on duration)
        else
            __delay_ms(500); // Delay for 500ms (LED on duration)
         
        RB4 = 0;     // Turn off LED
        if (RA0 == 0) // If button is pressed (active low)
            __delay_ms(100); // Delay for 100ms (LED on duration)
        else
            __delay_ms(500); // Delay for 500ms (LED on duration)
    }
}