################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests.c \
../Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests_common_data.c 

C_DEPS += \
./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests.d \
./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests_common_data.d 

OBJS += \
./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests.o \
./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests_common_data.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/%.o Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/%.su: ../Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/%.c Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"../USB_HOST/App " -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-DSP-2f-DSP_Lib_TestSuite-2f-Common-2f-src-2f-fast_math_tests

clean-Drivers-2f-CMSIS-2f-DSP-2f-DSP_Lib_TestSuite-2f-Common-2f-src-2f-fast_math_tests:
	-$(RM) ./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests.d ./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests.o ./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests.su ./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests_common_data.d ./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests_common_data.o ./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/src/fast_math_tests/fast_math_tests_common_data.su

.PHONY: clean-Drivers-2f-CMSIS-2f-DSP-2f-DSP_Lib_TestSuite-2f-Common-2f-src-2f-fast_math_tests

