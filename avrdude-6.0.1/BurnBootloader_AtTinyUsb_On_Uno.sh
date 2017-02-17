#!/bin/sh

# Build...
make atmega328 LED_START_FLASHES=10

#Burn Fuses
avrdude -C/Applications/Arduino.app/Contents/Java/hardware/tools/avr/etc/avrdude.conf -v -patmega328p -cusbtiny -e -Ulock:w:0x3F:m -Uefuse:w:0x05:m -Uhfuse:w:0xDE:m -Ulfuse:w:0xFF:m

#Upload Bootloader
avrdude -C/Applications/Arduino.app/Contents/Java/hardware/tools/avr/etc/avrdude.conf -v -v -patmega328p -cusbtiny -Uflash:w:optiboot_atmega328.hex:i -Ulock:w:0x0F:m

#Upload Sketch
avrdude -Cavrdude.conf -v -v -v -v -psujeet328p -carduino -P/dev/cu.usbmodem1421 -b115200 -D -Uflash:w:Blink.hex:i
