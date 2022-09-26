/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define red1_Pin GPIO_PIN_2
#define red1_GPIO_Port GPIOA
#define green1_Pin GPIO_PIN_3
#define green1_GPIO_Port GPIOA
#define yellow1_Pin GPIO_PIN_4
#define yellow1_GPIO_Port GPIOA
#define red2_Pin GPIO_PIN_5
#define red2_GPIO_Port GPIOA
#define green2_Pin GPIO_PIN_6
#define green2_GPIO_Port GPIOA
#define yellow2_Pin GPIO_PIN_7
#define yellow2_GPIO_Port GPIOA
#define red3_Pin GPIO_PIN_8
#define red3_GPIO_Port GPIOA
#define green3_Pin GPIO_PIN_9
#define green3_GPIO_Port GPIOA
#define yellow3_Pin GPIO_PIN_10
#define yellow3_GPIO_Port GPIOA
#define red4_Pin GPIO_PIN_11
#define red4_GPIO_Port GPIOA
#define green4_Pin GPIO_PIN_12
#define green4_GPIO_Port GPIOA
#define yellow4_Pin GPIO_PIN_13
#define yellow4_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
