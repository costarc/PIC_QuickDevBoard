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
#include "hardwareprofile.h"

typedef uint32_t DWORD;   // DWORD = unsigned 32 bit value
typedef uint16_t WORD;    // WORD = unsigned 16 bit value
typedef uint8_t BYTE;     // BYTE = unsigned 8 bit value

// Description: An approximate calculation of how many times to loop to delay 1 ms in the Delayms function
#define DELAY_PRESCALER   (BYTE)      100  // this is an approximate value to get 1000ms ticks
#define DELAY_OVERHEAD    (BYTE)      5
#define MILLISECDELAY     (WORD)      ((GetInstructionClock()/DELAY_PRESCALER/(WORD)1000) - DELAY_OVERHEAD)


void Delayms(DWORD milliseconds)
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

void SetAllOutput() {
    _TRISA0 = 0;
    _TRISA1 = 0;
    _TRISA2 = 0;
    _TRISA3 = 0;
    _TRISA4 = 0;
    _TRISB0 = 0;
    _TRISB1 = 0;
    _TRISB2 = 0;
    _TRISB3 = 0;
    _TRISB4 = 0;
    _TRISB5 = 0;
    _TRISB7 = 0;
    _TRISB8 = 0;
    _TRISB9 = 0;
    _TRISB10 = 0;
    _TRISB11 = 0;
    _TRISB13 = 0;
    _TRISB14 = 0;
    _TRISB15 = 0;
    Delayms(10);
}

void tesfFlashAll() {
     SetAllOutput();
    _LATA0 = 1;
    _LATA1 = 1;
    _LATA2 = 1;
    _LATA3 = 1;
    _LATA4 = 1;       
    _LATB0 = 1;
    _LATB1 = 1;
    _LATB2 = 1;
    _LATB3 = 1;
    _LATB4 = 1;
    _LATB5 = 1;
    _LATB7 = 1;
    _LATB8 = 1;
    _LATB9 = 1;
    _LATB10 = 1;
    _LATB11 = 1;
    _LATB13 = 1;
    _LATB14 = 1;
    _LATB15 = 1;
    Delayms(500);
    _LATA0 = 0;
    _LATA1 = 0;
    _LATA2 = 0;
    _LATA3 = 0;
    _LATA4 = 0; 
    _LATB0 = 0;
    _LATB1 = 0;
    _LATB2 = 0;
    _LATB3 = 0;
    _LATB4 = 0;
    _LATB5 = 0;
    _LATB7 = 0;
    _LATB8 = 0;
    _LATB9 = 0;
    _LATB10 = 0;
    _LATB11 = 0;
    _LATB13 = 0;
    _LATB14 = 0;
    _LATB15 = 0;
    Delayms(500);
}

void testPushButton() {
    _TRISA0 = 1;
    _TRISA1 = 0;
    Delayms(10);
    _RA1 = _RA0;
}

int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
   
     
    while (1) {
        tesfFlashAll();
        //testPushButton();
    }

    return 1;
}
/**
 End of File
*/