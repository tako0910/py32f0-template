/**
  ******************************************************************************
  * @file    py32f032_hal_conf.h
  * @author  MCU Application Team
  * @brief   HAL configuration file for GPIO_Toggle example.
  ******************************************************************************
  */

#ifndef __PY32F032_HAL_CONF_H
#define __PY32F032_HAL_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED

#if !defined(HSI_VALUE)
#define HSI_VALUE ((uint32_t)8000000)
#endif

#if !defined(HSE_VALUE)
#define HSE_VALUE ((uint32_t)24000000)
#endif

#if !defined(HSE_STARTUP_TIMEOUT)
#define HSE_STARTUP_TIMEOUT ((uint32_t)200)
#endif

#if !defined(LSI_VALUE)
#define LSI_VALUE ((uint32_t)32768)
#endif

#if !defined(LSE_VALUE)
#define LSE_VALUE ((uint32_t)32768)
#endif

#if !defined(LSE_STARTUP_TIMEOUT)
#define LSE_STARTUP_TIMEOUT ((uint32_t)5000)
#endif

#define VDD_VALUE ((uint32_t)3300)
#define PRIORITY_HIGHEST 0
#define PRIORITY_HIGH 1
#define PRIORITY_LOW 2
#define PRIORITY_LOWEST 3
#define TICK_INT_PRIORITY ((uint32_t)PRIORITY_LOWEST)
#define USE_RTOS 0
#define PREFETCH_ENABLE 0

/* #define USE_FULL_ASSERT 1U */

#define USE_SPI_CRC 0U

#ifdef HAL_MODULE_ENABLED
#include "py32f0xx_hal.h"
#endif

#ifdef HAL_CORTEX_MODULE_ENABLED
#include "py32f032_hal_cortex.h"
#endif

#ifdef HAL_FLASH_MODULE_ENABLED
#include "py32f032_hal_flash.h"
#endif

#ifdef HAL_PWR_MODULE_ENABLED
#include "py32f032_hal_pwr.h"
#endif

#ifdef HAL_RCC_MODULE_ENABLED
#include "py32f032_hal_rcc.h"
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
#include "py32f032_hal_gpio.h"
#endif

#ifdef HAL_DMA_MODULE_ENABLED
#include "py32f032_hal_dma.h"
#endif

#include "py32f032_hal_def.h"

#ifdef USE_FULL_ASSERT
#include <stdint.h>
#define assert_param(expr) ((expr) ? (void)0U : assert_failed((uint8_t *)__FILE__, __LINE__))
void assert_failed(uint8_t *file, uint32_t line);
#else
#define assert_param(expr) ((void)0U)
#endif

#ifdef __cplusplus
}
#endif

#endif /* __PY32F032_HAL_CONF_H */
