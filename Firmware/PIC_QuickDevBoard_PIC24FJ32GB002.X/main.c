/*
MIT License

Copyright (c) 2024 Ronivon Costa

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include "hardwareprofile.h"

typedef uint32_t DWORD;   // DWORD = unsigned 32 bit value
typedef uint16_t WORD;    // WORD = unsigned 16 bit value
typedef uint8_t BYTE;     // BYTE = unsigned 8 bit value

#define PS2CLOCK_DELAY (DWORD) 2    // Gives a clock of about 13.60Khz 
#define PS2CLOCK_DELAY_HALF (DWORD) 1
#define PS2CLOCK_SENDINTERVAL  2  // Interval to wait after sending a key
// Description: An approximate calculation of how many times to loop to delay 1 ms in the Delayms function
#define DELAY_PRESCALER   (BYTE)      100  // this is an approximate value to get 1000ms ticks
#define DELAY_OVERHEAD    (BYTE)      5
#define MILLISECDELAY     (WORD)      ((GetInstructionClock()/DELAY_PRESCALER/(WORD)1000) - DELAY_OVERHEAD)

void __delay_ms(DWORD milliseconds)
{
    DWORD    ms;
    DWORD   count;
    
    ms = milliseconds;
    while (ms--)
    {
        count = MILLISECDELAY;
        while (count--);
    }
    Nop();
    return;
}

int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    while (1) {
 
        LED_SetHigh();
        if (BUTTON_GetValue() == 0)
            __delay_ms(100);
        else
            __delay_ms(500);
        LED_SetLow();
        if (BUTTON_GetValue() == 0)
            __delay_ms(100);
        else
            __delay_ms(500);
    }   

}
