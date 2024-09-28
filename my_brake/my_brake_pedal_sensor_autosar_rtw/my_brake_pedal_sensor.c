/*
 * File: my_brake_pedal_sensor.c
 *
 * Code generated for Simulink model 'my_brake_pedal_sensor'.
 *
 * Model version                  : 9.3
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Aug 12 17:49:41 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "my_brake_pedal_sensor.h"
#include "Platform_Types.h"
#include "my_brake_pedal_sensor_private.h"

float32 look1_iflf_linlcpw(float32 u0, const float32 bp0[], const float32 table[],
  uint32 maxIndex)
{
  float32 frac;
  float32 yL_0d0;
  uint32 bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    /* Linear Search */
    for (bpIdx = maxIndex >> 1U; u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[bpIdx];
  return (table[bpIdx + 1U] - yL_0d0) * frac + yL_0d0;
}

/* Model step function */
void Runnable_Step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Runnable_Step_sys' */
  /* Outport generated from: '<Root>/Out Bus Element' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion2'
   *  Inport generated from: '<Root>/In Bus Element'
   *  Lookup_n-D: '<S1>/Setpoint Lookup'
   */
  Rte_IWrite_Runnable_Step_APP_Percent_Value(look1_iflf_linlcpw
    (Rte_IRead_Runnable_Step_APP_HwIO_Value(),
     (Rte_CData_SetpointPercent_LkupTbl())->BP1,
     (Rte_CData_SetpointPercent_LkupTbl())->Table, 10U));

  /* End of Outputs for SubSystem: '<Root>/Runnable_Step_sys' */
}

/* Model initialize function */
void AccelerationPedalSensor_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
