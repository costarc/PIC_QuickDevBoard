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
/*
 * 
 */
int main(int argc, char** argv) {
    // RA0 - Push Button (Input)
    // RA1 - LED (Output)
    
    TRISA = 0b00111101;
    
    while (1) {
        PORTAbits.RA1 = PORTAbits.RA0;
    }
    return (EXIT_SUCCESS);
}

