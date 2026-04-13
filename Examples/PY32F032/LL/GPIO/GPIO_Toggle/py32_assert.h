/**
  ******************************************************************************
  * @file    py32_assert.h
  * @brief   PY32 assert file.
  ******************************************************************************
  */

#ifndef __PY32_ASSERT_H
#define __PY32_ASSERT_H

#ifdef __cplusplus
extern "C" {
#endif

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

#endif /* __PY32_ASSERT_H */
