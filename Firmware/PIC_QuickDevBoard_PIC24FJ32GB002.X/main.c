/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  PIC24FJ32GB002
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB 	          :  MPLAB X v6.05
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
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
