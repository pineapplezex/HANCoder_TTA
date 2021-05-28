/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_GTSync_private.h
 *
 * Code generated for Simulink model 'HANcoder_E407_GTSync'.
 *
 * Model version                  : 1.160
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri May 28 21:44:30 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_GTSync_private_h_
#define RTW_HEADER_HANcoder_E407_GTSync_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "HANcoder_E407_GTSync.h"

void CanDrvByteSwap_x(uint8_t *b, size_t n);
extern void ResetFreeRunningCounter1(boolean_T rtu_Trigger,
  rtZCE_ResetFreeRunningCounter1 *localZCE);

#endif                                 /* RTW_HEADER_HANcoder_E407_GTSync_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
