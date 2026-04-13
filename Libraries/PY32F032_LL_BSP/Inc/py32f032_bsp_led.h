#ifndef __PY32F032_BSP_LED_H
#define __PY32F032_BSP_LED_H

#ifdef __cplusplus
extern "C" {
#endif

#include "py32f032_ll_bus.h"
#include "py32f032_ll_gpio.h"

void BSP_LED_Init(void);
void BSP_LED_On(void);
void BSP_LED_Off(void);
void BSP_LED_Toggle(void);

#ifdef __cplusplus
}
#endif

#endif /* __PY32F032_BSP_LED_H */
