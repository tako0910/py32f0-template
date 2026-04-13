#include "ms32c001_bsp_led.h"

#define BSP_LED_GPIO_PORT GPIOA
#define BSP_LED_GPIO_PIN  LL_GPIO_PIN_1

void BSP_LED_Init(void)
{
  LL_IOP_GRP1_EnableClock(LL_IOP_GRP1_PERIPH_GPIOA);
  LL_GPIO_SetPinMode(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN, LL_GPIO_MODE_OUTPUT);
  BSP_LED_Off();
}

void BSP_LED_On(void)
{
  LL_GPIO_SetOutputPin(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN);
}

void BSP_LED_Off(void)
{
  LL_GPIO_ResetOutputPin(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN);
}

void BSP_LED_Toggle(void)
{
  LL_GPIO_TogglePin(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN);
}
