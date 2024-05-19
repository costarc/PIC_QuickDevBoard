/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define BUTTON_TRIS                 TRISAbits.
#define BUTTON_LAT                  LATAbits.
#define BUTTON_PORT                 PORTAbits.RA0
#define BUTTON_WPU                  WPUAbits.
#define BUTTON_OD                   ODCONAbits.
#define BUTTON_ANS                  ANSELAbits.
#define BUTTON_SetHigh()            do { LATAbits. = 1; } while(0)
#define BUTTON_SetLow()             do { LATAbits. = 0; } while(0)
#define BUTTON_Toggle()             do { LATAbits. = ~LATAbits.; } while(0)
#define BUTTON_GetValue()           PORTAbits.RA0
#define BUTTON_SetDigitalInput()    do { TRISAbits. = 1; } while(0)
#define BUTTON_SetDigitalOutput()   do { TRISAbits. = 0; } while(0)
#define BUTTON_SetPullup()          do { WPUAbits. = 1; } while(0)
#define BUTTON_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define BUTTON_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define BUTTON_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define BUTTON_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define BUTTON_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)
// get/set IO_RB4 aliases
#define LED_TRIS                 TRISBbits.TRISB4
#define LED_LAT                  LATBbits.LATB4
#define LED_PORT                 PORTBbits.RB4
#define LED_WPU                  WPUBbits.WPUB4
#define LED_OD                   ODCONBbits.
#define LED_ANS                  ANSELBbits.ANSB4
#define LED_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_GetValue()           PORTBbits.RB4
#define LED_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.
#define IO_RB7_ANS                  ANSELBbits.
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/