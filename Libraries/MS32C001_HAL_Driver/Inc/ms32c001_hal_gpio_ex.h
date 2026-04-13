/**
  ******************************************************************************
  * @file    ms32c001_hal_gpio_ex.h
  * @author  MCU Application Team
  * @brief   Header file of GPIO HAL Extended module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 MS Semiconductor Co.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by MS under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MS32C001_HAL_GPIO_EX_H
#define __MS32C001_HAL_GPIO_EX_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "ms32c001_hal_def.h"

/** @addtogroup MS32C001_HAL_Driver
  * @{
  */

/** @defgroup GPIOEx GPIOEx
  * @brief GPIO Extended HAL module driver
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/** @defgroup GPIOEx_Exported_Constants GPIOEx Exported Constants
  * @{
  */

/** @defgroup GPIOEx_Alternate_function_selection GPIOEx Alternate function selection
  * @{
  */

/**
  * @brief   AF 0 selection
  */
#define GPIO_AF0_SWJ           (0x0000000U)   /*!< SWJ (SWD) Alternate Function mapping */


/**
  * @brief   AF 2 selection
  */
#define GPIO_AF2_TIM1          (0x0000002U)   /*!< TIM1 Alternate Function mapping */

/**
  * @brief   AF 3 selection
  */
#define GPIO_AF3_TIM1          (0x0000003U)   /*!< TIM1 Alternate Function mapping*/

/**
  * @brief   AF 4 selection
  */
#define GPIO_AF4_MCO           (0x0000004U)   /*!< MCO Alternate Function mapping*/
/**
  * @brief   AF 5 selection
  */
#define GPIO_AF5_TIM14         (0x0000005U)   /*!< TIM14 Alternate Function mapping*/


/**
  * @brief   AF 7 selection
  */
#define GPIO_AF7_EVENTOUT      (0x0000007U)   /*!< EVENTOUT Alternate Function mapping */
#define IS_GPIO_AF(AF)         ((AF) <= (uint8_t)0x07)
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup GPIOEx_Exported_Macros GPIOEx Exported Macros
  * @{
  */

/** @defgroup GPIOEx_Get_Port_Index GPIOEx Get Port Index
  * @{
  */

#define GPIO_GET_INDEX(__GPIOx__)    (((__GPIOx__) == (GPIOA))? 0uL :\
                                      ((__GPIOx__) == (GPIOB))? 1uL : 2uL)


/**
  * @}
  */

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __MS32C001_HAL_GPIO_EX_H */

/************************ (C) COPYRIGHT MS *****END OF FILE******************/
