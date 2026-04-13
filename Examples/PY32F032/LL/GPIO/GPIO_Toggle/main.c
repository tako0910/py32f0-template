/**
  ******************************************************************************
  * @file    main.c
  * @author  MCU Application Team
  * @brief   Main program body
  ******************************************************************************
  */

#include "main.h"

static void APP_SystemClockConfig(void);

int main(void)
{
  LL_APB1_GRP2_EnableClock(LL_APB1_GRP2_PERIPH_SYSCFG);
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_PWR);

  APP_SystemClockConfig();
  BSP_LED_Init();
  BSP_LED_Off();

  while (1)
  {
    BSP_LED_Toggle();
    LL_mDelay(500);
  }
}

static void APP_SystemClockConfig(void)
{
  LL_RCC_HSI_Enable();
  while (LL_RCC_HSI_IsReady() != 1)
  {
  }

  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_HSISYS);
  while (LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_HSISYS)
  {
  }

  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_1);
  LL_Init1msTick(8000000);
  LL_SetSystemCoreClock(8000000);
}

void APP_ErrorHandler(void)
{
  while (1)
  {
  }
}

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{
  (void)file;
  (void)line;
  while (1)
  {
  }
}
#endif
