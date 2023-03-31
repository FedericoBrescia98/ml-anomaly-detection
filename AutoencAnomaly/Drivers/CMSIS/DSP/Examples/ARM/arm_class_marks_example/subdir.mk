################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/arm_class_marks_example_f32.c 

C_DEPS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/arm_class_marks_example_f32.d 

OBJS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/arm_class_marks_example_f32.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/%.o Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/%.su: ../Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/%.c Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"../USB_HOST/App " -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_class_marks_example

clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_class_marks_example:
	-$(RM) ./Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/arm_class_marks_example_f32.d ./Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/arm_class_marks_example_f32.o ./Drivers/CMSIS/DSP/Examples/ARM/arm_class_marks_example/arm_class_marks_example_f32.su

.PHONY: clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_class_marks_example

