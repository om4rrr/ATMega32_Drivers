################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/SevenSegment/SevenSegment_PreCompile/Seven_Segment_prog.c 

OBJS += \
./HAL/SevenSegment/SevenSegment_PreCompile/Seven_Segment_prog.o 

C_DEPS += \
./HAL/SevenSegment/SevenSegment_PreCompile/Seven_Segment_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/SevenSegment/SevenSegment_PreCompile/%.o: ../HAL/SevenSegment/SevenSegment_PreCompile/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


