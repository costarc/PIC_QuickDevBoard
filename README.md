# PIC_QuickDevBoard
Small and simple PIC16F &amp; PIC24F Development Board with Programming Support for PICKit

Rev 2.3
- Added demo project for all three suported PIC models
- Changed LED to PORT RB4 to be compatible with the 3 PICs supported by the board
- Added missing terminals in the mini-usb custom footprint
- Changed LED resistor from 270R to 470R to avoid led light too bright
- Changed PIC16F84 /MCLR pull-up resistor from 270R to 10K

Rev 2.2
- Adjustments to mini-usb footprint
- Fixed power rails to PC16F145X that was not allowing programming the microcontroller

Rev 2.1
- Updated footprint for USB-Micro to move it to the comopnent side (vcc - gnd was inverted)
- Fix for 5V PICs (16F) with addtion o extra jumpers
- Inverted PICKIT pin header for better alignment (cosmetic change)

Rev 2.0
- Initial production version

Fabrication
-----------
Measures: 70.90 x 81.30

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

To develop & program A PIC device, set the three jumpers in position PIC24F, PIC16F14 OR PIC16F84 depending on which device you are being used.

To program the PIC24, remove jumper "Program". Re-insert after programming.

Development Resources
---------------------
All  I/O pins are exposed thorugh the Pin Headers in the board.
Additionaly, a Pushb Button and a LED are available for quick tests and experiments.
Push Button is connected to RA0
LED is connected to RB4

These components can be removed from the board if they are not needed or if they interfere with normal operation of these signals in the Pin Headers.

Default Demonstration Firmware
------------------------------
The demonstration firmware works the same for all models - the LED on RB4 will blink slowly, but if the push button is pressed it will blink faster.
