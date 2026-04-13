/**
  ******************************************************************************
  * @file    main.c
  * @author  MCU Application Team
  * @brief   Main program body
  ******************************************************************************
  */

#include "main.h"

int main(void)
{
  HAL_Init();
  BSP_LED_Init();

  while (1)
  {
    HAL_Delay(250);
    BSP_LED_Toggle();
  }
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
