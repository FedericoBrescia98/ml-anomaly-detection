################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/cs43l22/cs43l22.c 

C_DEPS += \
./Drivers/BSP/Components/cs43l22/cs43l22.d 

OBJS += \
./Drivers/BSP/Components/cs43l22/cs43l22.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/cs43l22/%.o Drivers/BSP/Components/cs43l22/%.su: ../Drivers/BSP/Components/cs43l22/%.c Drivers/BSP/Components/cs43l22/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"../USB_HOST/App " -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-cs43l22

clean-Drivers-2f-BSP-2f-Components-2f-cs43l22:
	-$(RM) ./Drivers/BSP/Components/cs43l22/cs43l22.d ./Drivers/BSP/Components/cs43l22/cs43l22.o ./Drivers/BSP/Components/cs43l22/cs43l22.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-cs43l22

