################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -f

# All of the sources participating in the build are defined here
-include sources.mk
-include examples/scanner/output/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
libRF24Debug.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: libRF24Debug.a secondary-outputs

# Tool invocations
libRF24Debug.a: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR Archiver'
	avr-ar -r  "libRF24Debug.a" $(OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

libRF24Debug.lss: libRF24Debug.a
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S libRF24Debug.a  >"libRF24Debug.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: libRF24Debug.a
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p libRF24Debug.a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(LSS)$(S_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(ARCHIVES)$(CPP_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) libRF24Debug.a
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
