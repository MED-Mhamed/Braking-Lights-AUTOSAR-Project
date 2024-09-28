/*
 * File: my_brake_actuator.c
 *
 * Code generated for Simulink model 'my_brake_actuator'.
 *
 * Model version                  : 9.3
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Aug 12 17:48:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "my_brake_actuator.h"
#include "my_brake_actuator_private.h"

uint32 plook_u32f_linckan(float32 u, const float32 bp[], uint32 maxIndex)
{
  uint32 bpIndex;

  /* Prelookup - Index only
     Index Search method: 'linear'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = linsearch_u32f(u, bp, maxIndex >> 1U);
    if ((bpIndex < maxIndex) && (bp[bpIndex + 1U] - u <= u - bp[bpIndex])) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

uint32 linsearch_u32f(float32 u, const float32 bp[], uint32 startIndex)
{
  uint32 bpIndex;

  /* Linear Search */
  for (bpIndex = startIndex; u < bp[bpIndex]; bpIndex--) {
  }

  while (u >= bp[bpIndex + 1U]) {
    bpIndex++;
  }

  return bpIndex;
}

/* Model step function */
void Runnable_Step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Runnable_Step_sys' */
  /* Outport generated from: '<Root>/Out Bus Element' incorporates:
   *  Inport generated from: '<Root>/In Bus Element'
   *  Lookup_n-D: '<S1>/HBridgeDriver Lookup'
   */
  Rte_IWrite_Runnable_Step_ThrCmd_HwIO_Value((Rte_CData_HBridgeCmd_LkupTbl())
    ->Table[plook_u32f_linckan(Rte_IRead_Runnable_Step_ThrCmd_Percent_Value(),
    (Rte_CData_HBridgeCmd_LkupTbl())->BP1, 20U)]);

  /* End of Outputs for SubSystem: '<Root>/Runnable_Step_sys' */
}

/* Model initialize function */
void ThrottlePositionActuator_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
