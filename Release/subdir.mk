################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main.c \
../myADC.c \
../mySPI.c \
../mySmartSensor.c \
../myUART.c 

OBJS += \
./main.o \
./myADC.o \
./mySPI.o \
./mySmartSensor.o \
./myUART.o 

C_DEPS += \
./main.d \
./myADC.d \
./mySPI.d \
./mySmartSensor.d \
./myUART.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega328 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


