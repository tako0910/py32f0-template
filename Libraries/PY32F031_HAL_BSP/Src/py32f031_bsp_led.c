#include "py32f031_bsp_led.h"

#define BSP_LED_GPIO_PORT GPIOB
#define BSP_LED_GPIO_PIN  GPIO_PIN_2

void BSP_LED_Init(void)
{
  GPIO_InitTypeDef gpio_init = {0};

  __HAL_RCC_GPIOB_CLK_ENABLE();

  gpio_init.Pin = BSP_LED_GPIO_PIN;
  gpio_init.Mode = GPIO_MODE_OUTPUT_PP;
  gpio_init.Pull = GPIO_PULLUP;
  gpio_init.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(BSP_LED_GPIO_PORT, &gpio_init);

  BSP_LED_Off();
}

void BSP_LED_On(void)
{
  HAL_GPIO_WritePin(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN, GPIO_PIN_RESET);
}

void BSP_LED_Off(void)
{
  HAL_GPIO_WritePin(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN, GPIO_PIN_SET);
}

void BSP_LED_Toggle(void)
{
  HAL_GPIO_TogglePin(BSP_LED_GPIO_PORT, BSP_LED_GPIO_PIN);
}
