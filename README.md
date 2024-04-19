# PIC_QuickDevBoard
Small and simple PIC16F85 &amp; PIC24FJ Development Board with Programming Support for PICKit

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

Default Demonstration Firmware
------------------------------
The default firmware (in folder Firmware\PIC_QuickDevBoard_<PIC Model>\dist\default\production\) blinks the onboard LED and also all PORTs in the breakout headers. The blink is done every half second.
When the push button (RA0) is pressed, the onboard LED will blink every 10 ms, and all the other outputs (blonks) are stopped.
To see the signal (blink leds) on all PORTs, connect a led using wire jumpers to each pin in the breakout (do not forget to connect the gnd to the other pin in the LED).
