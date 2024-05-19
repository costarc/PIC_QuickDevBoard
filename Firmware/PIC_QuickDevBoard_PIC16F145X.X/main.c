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

#include "mcc_generated_files/system/system.h"
#include <stdio.h>

int hour = 0;
int minute = 0;
int second = 0;
int ms = 0;

void Timer_CallBack_Function(void) {
    ms++;
    if (ms == 1000) {
        ms = 0;
        second++;
        if (second == 60) {
            second = 0;
            minute++;
            if (minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }
        printf("%d:%d:%d\n",hour,minute,second);
        IO_RB7_Toggle();
    }
}

/*
    Main application
*/

int main(void)
{
    printf("--> Starting ...\n");
    SYSTEM_Initialize();
    Timer0_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    Timer0_OverflowCallbackRegister(Timer_CallBack_Function);
    
    while(1)
    {  

    RB4 = 1;
    if (BUTTON_GetValue() == 0)
        __delay_ms(100);
    else
        __delay_ms(500);
    RB4 = 0;
    if (BUTTON_GetValue() == 0)
        __delay_ms(100);
    else
        __delay_ms(500);
    }    
}