#ifndef __MS32C001_BSP_LED_H
#define __MS32C001_BSP_LED_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ms32c0xx_hal.h"

void BSP_LED_Init(void);
void BSP_LED_On(void);
void BSP_LED_Off(void);
void BSP_LED_Toggle(void);

#ifdef __cplusplus
}
#endif

#endif /* __MS32C001_BSP_LED_H */
