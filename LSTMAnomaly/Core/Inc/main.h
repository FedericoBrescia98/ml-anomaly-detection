/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AUDIO_RST_Pin GPIO_PIN_3
#define AUDIO_RST_GPIO_Port GPIOE
#define SAI1_FS_Pin GPIO_PIN_4
#define SAI1_FS_GPIO_Port GPIOE
#define SAI1_SCK_Pin GPIO_PIN_5
#define SAI1_SCK_GPIO_Port GPIOE
#define SAI1_SD_Pin GPIO_PIN_6
#define SAI1_SD_GPIO_Port GPIOE
#define MFX_IRQ_OUT_Pin GPIO_PIN_13
#define MFX_IRQ_OUT_GPIO_Port GPIOC
#define MAG_INT_Pin GPIO_PIN_1
#define MAG_INT_GPIO_Port GPIOC
#define MAG_DRDY_Pin GPIO_PIN_2
#define MAG_DRDY_GPIO_Port GPIOC
#define JOY_CENTER_Pin GPIO_PIN_0
#define JOY_CENTER_GPIO_Port GPIOA
#define JOY_LEFT_Pin GPIO_PIN_1
#define JOY_LEFT_GPIO_Port GPIOA
#define JOY_RIGHT_Pin GPIO_PIN_2
#define JOY_RIGHT_GPIO_Port GPIOA
#define JOY_UP_Pin GPIO_PIN_3
#define JOY_UP_GPIO_Port GPIOA
#define MFX_WAKEUP_Pin GPIO_PIN_4
#define MFX_WAKEUP_GPIO_Port GPIOA
#define JOY_DOWN_Pin GPIO_PIN_5
#define JOY_DOWN_GPIO_Port GPIOA
#define LD_R_Pin GPIO_PIN_2
#define LD_R_GPIO_Port GPIOB
#define AUDIO_DIN_Pin GPIO_PIN_7
#define AUDIO_DIN_GPIO_Port GPIOE
#define LD_G_Pin GPIO_PIN_8
#define LD_G_GPIO_Port GPIOE
#define AUDIO_CLK_Pin GPIO_PIN_9
#define AUDIO_CLK_GPIO_Port GPIOE
#define QSPI_D2_Pin GPIO_PIN_14
#define QSPI_D2_GPIO_Port GPIOE
#define QSPI_D3_Pin GPIO_PIN_15
#define QSPI_D3_GPIO_Port GPIOE
#define OTG_FS_PowerSwitchOn_Pin GPIO_PIN_9
#define OTG_FS_PowerSwitchOn_GPIO_Port GPIOC
#define OTG_FS_DM_Pin GPIO_PIN_11
#define OTG_FS_DM_GPIO_Port GPIOA
#define OTG_FS_DP_Pin GPIO_PIN_12
#define OTG_FS_DP_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define OTG_FS_OverCurrent_Pin GPIO_PIN_10
#define OTG_FS_OverCurrent_GPIO_Port GPIOC
#define OTG_FS_VBUS_Pin GPIO_PIN_11
#define OTG_FS_VBUS_GPIO_Port GPIOC
#define EXT_RST_Pin GPIO_PIN_0
#define EXT_RST_GPIO_Port GPIOD
#define GYRO_INT1_Pin GPIO_PIN_2
#define GYRO_INT1_GPIO_Port GPIOD
#define MEMS_MISO_Pin GPIO_PIN_3
#define MEMS_MISO_GPIO_Port GPIOD
#define MEMS_MOSI_Pin GPIO_PIN_4
#define MEMS_MOSI_GPIO_Port GPIOD
#define USART_TX_Pin GPIO_PIN_5
#define USART_TX_GPIO_Port GPIOD
#define USART_RX_Pin GPIO_PIN_6
#define USART_RX_GPIO_Port GPIOD
#define GYRO_CS_Pin GPIO_PIN_7
#define GYRO_CS_GPIO_Port GPIOD
#define M3V3_REG_ON_Pin GPIO_PIN_3
#define M3V3_REG_ON_GPIO_Port GPIOB
#define I2C1_SCL_Pin GPIO_PIN_6
#define I2C1_SCL_GPIO_Port GPIOB
#define GYRO_INT2_Pin GPIO_PIN_8
#define GYRO_INT2_GPIO_Port GPIOB
#define XL_CS_Pin GPIO_PIN_0
#define XL_CS_GPIO_Port GPIOE
#define XL_INT_Pin GPIO_PIN_1
#define XL_INT_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
