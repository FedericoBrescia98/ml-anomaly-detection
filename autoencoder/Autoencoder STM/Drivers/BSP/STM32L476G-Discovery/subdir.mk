################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_audio.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_compass.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_glass_lcd.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_gyroscope.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_idd.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_qspi.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_audio.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_eeprom.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_glass_lcd.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_idd.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_io.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_lcd.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_nor.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_qspi.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sd.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sram.c \
../Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_ts.c 

C_DEPS += \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_audio.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_compass.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_glass_lcd.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_gyroscope.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_idd.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_qspi.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_audio.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_eeprom.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_glass_lcd.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_idd.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_io.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_lcd.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_nor.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_qspi.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sd.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sram.d \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_ts.d 

OBJS += \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_audio.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_compass.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_glass_lcd.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_gyroscope.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_idd.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_qspi.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_audio.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_eeprom.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_glass_lcd.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_idd.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_io.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_lcd.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_nor.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_qspi.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sd.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sram.o \
./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_ts.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32L476G-Discovery/%.o Drivers/BSP/STM32L476G-Discovery/%.su: ../Drivers/BSP/STM32L476G-Discovery/%.c Drivers/BSP/STM32L476G-Discovery/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"../USB_HOST/App " -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32L476G-2d-Discovery

clean-Drivers-2f-BSP-2f-STM32L476G-2d-Discovery:
	-$(RM) ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_audio.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_audio.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_audio.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_compass.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_compass.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_compass.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_glass_lcd.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_glass_lcd.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_glass_lcd.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_gyroscope.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_gyroscope.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_gyroscope.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_idd.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_idd.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_idd.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_qspi.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_qspi.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_discovery_qspi.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_audio.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_audio.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_audio.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_eeprom.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_eeprom.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_eeprom.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_glass_lcd.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_glass_lcd.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_glass_lcd.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_idd.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_idd.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_idd.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_io.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_io.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_io.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_lcd.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_lcd.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_lcd.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_nor.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_nor.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_nor.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_qspi.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_qspi.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_qspi.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sd.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sd.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sd.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sram.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sram.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_sram.su ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_ts.d ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_ts.o ./Drivers/BSP/STM32L476G-Discovery/stm32l476g_eval_ts.su

.PHONY: clean-Drivers-2f-BSP-2f-STM32L476G-2d-Discovery

