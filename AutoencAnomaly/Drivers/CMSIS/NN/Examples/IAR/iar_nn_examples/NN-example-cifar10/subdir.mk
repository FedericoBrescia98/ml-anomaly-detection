################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/arm_nnexamples_cifar10.cpp 

OBJS += \
./Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/arm_nnexamples_cifar10.o 

CPP_DEPS += \
./Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/arm_nnexamples_cifar10.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/%.o Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/%.su: ../Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/%.cpp Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -DTFLM_RUNTIME -DCMSIS_NN -DTFLM_RUNTIME_USE_ALL_OPERATORS=0 -DTF_LITE_STATIC_MEMORY -DTF_LITE_DISABLE_X86_NEON -DTF_LITE_MCU_DEBUG_LOG -DARM_MATH -DARM_MATH_DSP -DARM_MATH_LOOPUNROLL -DARM_MATH_CM4 -D__FPU_PRESENT=1U -c -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../X-CUBE-AI/App -I../Middlewares/tensorflow/third_party/cmsis/CMSIS/DSP/Include/dsp -I../Middlewares/tensorflow/third_party/cmsis/CMSIS/NN/Include -I../Middlewares/tensorflow/third_party/cmsis/CMSIS/DSP/Include -I../Middlewares/tensorflow -I../Middlewares/tensorflow/third_party/flatbuffers/include -I../Middlewares/tensorflow/third_party/cmsis/CMSIS/Core/Include -I../Middlewares/tensorflow/third_party/gemmlowp -I../Middlewares/tensorflow/third_party/cmsis -I../Middlewares/tensorflow/third_party/ruy -I"../USB_HOST/App " -O3 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-NN-2f-Examples-2f-IAR-2f-iar_nn_examples-2f-NN-2d-example-2d-cifar10

clean-Drivers-2f-CMSIS-2f-NN-2f-Examples-2f-IAR-2f-iar_nn_examples-2f-NN-2d-example-2d-cifar10:
	-$(RM) ./Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/arm_nnexamples_cifar10.d ./Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/arm_nnexamples_cifar10.o ./Drivers/CMSIS/NN/Examples/IAR/iar_nn_examples/NN-example-cifar10/arm_nnexamples_cifar10.su

.PHONY: clean-Drivers-2f-CMSIS-2f-NN-2f-Examples-2f-IAR-2f-iar_nn_examples-2f-NN-2d-example-2d-cifar10

