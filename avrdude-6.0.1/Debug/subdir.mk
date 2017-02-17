################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arduino.c \
../avr.c \
../avr910.c \
../avrftdi.c \
../avrftdi_tpi.c \
../avrpart.c \
../bitbang.c \
../buspirate.c \
../butterfly.c \
../config.c \
../config_gram.c \
../confwin.c \
../crc16.c \
../fileio.c \
../ft245r.c \
../jtag3.c \
../jtagmkI.c \
../jtagmkII.c \
../lexer.c \
../linuxgpio.c \
../lists.c \
../main.c \
../par.c \
../pgm.c \
../pgm_type.c \
../pickit2.c \
../pindefs.c \
../ppi.c \
../ppiwin.c \
../safemode.c \
../ser_avrdoper.c \
../ser_posix.c \
../ser_win32.c \
../serbb_posix.c \
../serbb_win32.c \
../stk500.c \
../stk500generic.c \
../stk500v2.c \
../term.c \
../update.c \
../usb_libusb.c \
../usbasp.c \
../usbtiny.c \
../wiring.c 

O_SRCS += \
../avrdude-main.o \
../avrdude-term.o \
../libavrdude_a-arduino.o \
../libavrdude_a-avr.o \
../libavrdude_a-avr910.o \
../libavrdude_a-avrftdi.o \
../libavrdude_a-avrftdi_tpi.o \
../libavrdude_a-avrpart.o \
../libavrdude_a-bitbang.o \
../libavrdude_a-buspirate.o \
../libavrdude_a-butterfly.o \
../libavrdude_a-config.o \
../libavrdude_a-config_gram.o \
../libavrdude_a-confwin.o \
../libavrdude_a-crc16.o \
../libavrdude_a-fileio.o \
../libavrdude_a-ft245r.o \
../libavrdude_a-jtag3.o \
../libavrdude_a-jtagmkI.o \
../libavrdude_a-jtagmkII.o \
../libavrdude_a-lexer.o \
../libavrdude_a-linuxgpio.o \
../libavrdude_a-lists.o \
../libavrdude_a-par.o \
../libavrdude_a-pgm.o \
../libavrdude_a-pgm_type.o \
../libavrdude_a-pickit2.o \
../libavrdude_a-pindefs.o \
../libavrdude_a-ppi.o \
../libavrdude_a-ppiwin.o \
../libavrdude_a-safemode.o \
../libavrdude_a-ser_avrdoper.o \
../libavrdude_a-ser_posix.o \
../libavrdude_a-ser_win32.o \
../libavrdude_a-serbb_posix.o \
../libavrdude_a-serbb_win32.o \
../libavrdude_a-stk500.o \
../libavrdude_a-stk500generic.o \
../libavrdude_a-stk500v2.o \
../libavrdude_a-update.o \
../libavrdude_a-usb_libusb.o \
../libavrdude_a-usbasp.o \
../libavrdude_a-usbtiny.o \
../libavrdude_a-wiring.o 

OBJS += \
./arduino.o \
./avr.o \
./avr910.o \
./avrftdi.o \
./avrftdi_tpi.o \
./avrpart.o \
./bitbang.o \
./buspirate.o \
./butterfly.o \
./config.o \
./config_gram.o \
./confwin.o \
./crc16.o \
./fileio.o \
./ft245r.o \
./jtag3.o \
./jtagmkI.o \
./jtagmkII.o \
./lexer.o \
./linuxgpio.o \
./lists.o \
./main.o \
./par.o \
./pgm.o \
./pgm_type.o \
./pickit2.o \
./pindefs.o \
./ppi.o \
./ppiwin.o \
./safemode.o \
./ser_avrdoper.o \
./ser_posix.o \
./ser_win32.o \
./serbb_posix.o \
./serbb_win32.o \
./stk500.o \
./stk500generic.o \
./stk500v2.o \
./term.o \
./update.o \
./usb_libusb.o \
./usbasp.o \
./usbtiny.o \
./wiring.o 

C_DEPS += \
./arduino.d \
./avr.d \
./avr910.d \
./avrftdi.d \
./avrftdi_tpi.d \
./avrpart.d \
./bitbang.d \
./buspirate.d \
./butterfly.d \
./config.d \
./config_gram.d \
./confwin.d \
./crc16.d \
./fileio.d \
./ft245r.d \
./jtag3.d \
./jtagmkI.d \
./jtagmkII.d \
./lexer.d \
./linuxgpio.d \
./lists.d \
./main.d \
./par.d \
./pgm.d \
./pgm_type.d \
./pickit2.d \
./pindefs.d \
./ppi.d \
./ppiwin.d \
./safemode.d \
./ser_avrdoper.d \
./ser_posix.d \
./ser_win32.d \
./serbb_posix.d \
./serbb_win32.d \
./stk500.d \
./stk500generic.d \
./stk500v2.d \
./term.d \
./update.d \
./usb_libusb.d \
./usbasp.d \
./usbtiny.d \
./wiring.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -I"/Users/banerjees/AVR/Arduino_WS/avrdude/avrdude/avrdude-6.0.1" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


