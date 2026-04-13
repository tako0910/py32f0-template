/**
  ******************************************************************************
  * @file    py32f032_hal_msp.c
  * @author  MCU Application Team
  * @brief   This file provides code for the MSP Initialization.
  ******************************************************************************
  */

#include "main.h"

void HAL_MspInit(void)
{
  __HAL_RCC_SYSCFG_CLK_ENABLE();
  __HAL_RCC_PWR_CLK_ENABLE();
}
