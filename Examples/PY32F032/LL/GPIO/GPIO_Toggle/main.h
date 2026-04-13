/**
  ******************************************************************************
  * @file    main.h
  * @author  MCU Application Team
  * @brief   Header for main.c file.
  ******************************************************************************
  */

#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "py32f032_ll_rcc.h"
#include "py32f032_ll_bus.h"
#include "py32f032_ll_system.h"
#include "py32f032_ll_cortex.h"
#include "py32f032_ll_utils.h"
#include "py32f032_ll_pwr.h"
#include "py32f032_ll_gpio.h"
#include "py32f032_bsp_led.h"

#if defined(USE_FULL_ASSERT)
#include "py32_assert.h"
#endif

void APP_ErrorHandler(void);

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
