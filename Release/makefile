################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
SPI_SLAVE_MEGA2.lss \

FLASH_IMAGE += \
SPI_SLAVE_MEGA2.hex \

EEPROM_IMAGE += \
SPI_SLAVE_MEGA2.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: SPI_SLAVE_MEGA2.elf secondary-outputs

# Tool invocations
SPI_SLAVE_MEGA2.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SPI_SLAVE_MEGA2.map -mmcu=atmega328 -o "SPI_SLAVE_MEGA2.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SPI_SLAVE_MEGA2.lss: SPI_SLAVE_MEGA2.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SPI_SLAVE_MEGA2.elf  >"SPI_SLAVE_MEGA2.lss"
	@echo 'Finished building: $@'
	@echo ' '

SPI_SLAVE_MEGA2.hex: SPI_SLAVE_MEGA2.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SPI_SLAVE_MEGA2.elf  "SPI_SLAVE_MEGA2.hex"
	@echo 'Finished building: $@'
	@echo ' '

SPI_SLAVE_MEGA2.eep: SPI_SLAVE_MEGA2.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex SPI_SLAVE_MEGA2.elf  "SPI_SLAVE_MEGA2.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SPI_SLAVE_MEGA2.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t SPI_SLAVE_MEGA2.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SPI_SLAVE_MEGA2.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
