/* 
 * File:   main.c
 * Author: roniv
 *
 * Created on February 16, 2024, 12:26 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <pic16f84a.h>

typedef uint32_t DWORD;   // DWORD = unsigned 32 bit value
typedef uint16_t WORD;    // WORD = unsigned 16 bit value
typedef uint8_t BYTE;     // BYTE = unsigned 8 bit value

void Delayms(DWORD milliseconds)
{
    DWORD    ms;
    DWORD   count;
    
    ms = milliseconds;
    while (ms--)
    {
        count = 10;
        while (count--);
    }
    //Nop();
    return;
}

void onboardDemo(unsigned int delay) {
    PORTAbits.RA1 = 1;
    Delayms(delay);
    PORTAbits.RA1 = 0;
    Delayms(delay);
}

int main(int argc, char** argv) {
    // RA0 - Push Button (Input)
    // RA1 - LED (Output)
    
    
    
    while (1) {
        TRISA = 0b00111101;
        while (PORTAbits.RA0) {
            onboardDemo(500);
        }
        
        onboardDemo(50);
        
    }
}
