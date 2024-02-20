# PIC_QuickDevBoard
Small and simple PIC16F85 &amp; PIC24FJ Development Board with Programming Support for PICKit

Rev 2.0

Fabrication
-----------
Measures: 61.65 x 65.54

Usage
-----

Power Requirements - PIC16
--------------------------

For correct programing, erasing and verifying the PIC, the external porwer must be provided via the USB connector or the PIN Header.

PIC16 requires 5V - if the PIN Header is used for power, 5V should be provided in this connector.
USB connector will provide the correct 5V for the PIC16.

Power Requirements - PIC24
--------------------------

For correct programing, erasing and verifying the PIC, the external porwer must be provided via the USB connector or the PIN Header.

PIC24 requires 3.3V - if the PIN Header is used for power, 3.3V must be provided in this connector - no conversion is done for voltages provided via this connector.
USB connector will provide the correct 3.3V for the PIC24 via coversion using the LD1117 converter in the board.


Operation * Programming
-----------------------

To develop & program PIC16, set the three jumpers in position PIC16 (left)
To develop & program PIC24, set the three jumpers in position PIC24 (right)

To program the PIC24, remove jumper "Program". Re-insert after programming.

Development Resources
---------------------
All  I/O pins are exposed thorugh the Pin Headers in the board.
Additionaly, a Pushb Button and a LED are available for quick tests and experiments.
Push Button is connected to RA0
LED is connected to RA1

These components can be removed from the board if they are not needed or if they interfere with normal operation of these signals in the Pin Headers.


