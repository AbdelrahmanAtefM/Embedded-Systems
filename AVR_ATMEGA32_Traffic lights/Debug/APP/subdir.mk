################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/main.c 

OBJS += \
./APP/main.o 

C_DEPS += \
./APP/main.d 


# Each subdirectory must supply rules for building sources it contributes
APP/%.o: ../APP/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\Embedded Systems\nti\AVR\trainnig\APP" -I"E:\Embedded Systems\nti\AVR\trainnig\HAL\SSD" -I"E:\Embedded Systems\nti\AVR\trainnig\HAL" -I"E:\Embedded Systems\nti\AVR\trainnig\HAL\LED" -I"E:\Embedded Systems\nti\AVR\trainnig\LIB" -I"E:\Embedded Systems\nti\AVR\trainnig\MCAL" -I"E:\Embedded Systems\nti\AVR\trainnig\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


