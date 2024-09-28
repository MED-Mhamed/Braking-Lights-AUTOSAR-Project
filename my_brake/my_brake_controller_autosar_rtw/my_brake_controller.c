/*
 * File: my_brake_controller.c
 *
 * Code generated for Simulink model 'my_brake_controller'.
 *
 * Model version                  : 10.3
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Aug 12 17:49:28 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "my_brake_controller.h"
#include "Platform_Types.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_my_brake_controller_T my_brake_controller_ARID_DEF;/* '<S40>/Integrator' */

/* Model step function */
void Runnable_Step(void)
{
  float32 rtb_DeadZone;
  float32 rtb_IntegralGain;
  float32 rtb_Sum;
  sint8 tmp;
  sint8 tmp_0;

  /* Outputs for Atomic SubSystem: '<Root>/Runnable_Step_sys' */
  /* Gain: '<S37>/Integral Gain' incorporates:
   *  Inport generated from: '<Root>/In Bus Element'
   *  Inport generated from: '<Root>/In Bus Element1'
   *  Sum: '<S1>/Subtract'
   */
  rtb_IntegralGain = Rte_IRead_Runnable_Step_APP_Percent_Value() -
    Rte_IRead_Runnable_Step_TPS_Percent_Value();

  /* Sum: '<S49>/Sum' incorporates:
   *  Delay: '<S33>/UD'
   *  DiscreteIntegrator: '<S40>/Integrator'
   *  Sum: '<S33>/Diff'
   */
  rtb_Sum = (rtb_IntegralGain + my_brake_controller_ARID_DEF.Integrator_DSTATE)
    + (0.0F - my_brake_controller_ARID_DEF.UD_DSTATE);

  /* DeadZone: '<S30>/DeadZone' */
  if (rtb_Sum > 100.0F) {
    /* DeadZone: '<S30>/DeadZone' */
    rtb_DeadZone = rtb_Sum - 100.0F;
  } else if (rtb_Sum >= -100.0F) {
    /* DeadZone: '<S30>/DeadZone' */
    rtb_DeadZone = 0.0F;
  } else {
    /* DeadZone: '<S30>/DeadZone' */
    rtb_DeadZone = rtb_Sum - -100.0F;
  }

  /* End of DeadZone: '<S30>/DeadZone' */

  /* Gain: '<S37>/Integral Gain' */
  rtb_IntegralGain *= 2.0F;

  /* Switch: '<S28>/Switch1' incorporates:
   *  Constant: '<S28>/Clamping_zero'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S28>/Constant2'
   *  RelationalOperator: '<S28>/fix for DT propagation issue'
   */
  if (rtb_DeadZone > 0.0F) {
    tmp = 1;
  } else {
    tmp = -1;
  }

  /* Switch: '<S28>/Switch2' incorporates:
   *  Constant: '<S28>/Clamping_zero'
   *  Constant: '<S28>/Constant3'
   *  Constant: '<S28>/Constant4'
   *  RelationalOperator: '<S28>/fix for DT propagation issue1'
   */
  if (rtb_IntegralGain > 0.0F) {
    tmp_0 = 1;
  } else {
    tmp_0 = -1;
  }

  /* Switch: '<S28>/Switch' incorporates:
   *  Constant: '<S28>/Clamping_zero'
   *  Constant: '<S28>/Constant1'
   *  Logic: '<S28>/AND3'
   *  RelationalOperator: '<S28>/Equal1'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  Switch: '<S28>/Switch1'
   *  Switch: '<S28>/Switch2'
   */
  if ((rtb_DeadZone != 0.0F) && (tmp == tmp_0)) {
    rtb_IntegralGain = 0.0F;
  }

  /* Update for DiscreteIntegrator: '<S40>/Integrator' incorporates:
   *  Switch: '<S28>/Switch'
   */
  my_brake_controller_ARID_DEF.Integrator_DSTATE += 0.005F * rtb_IntegralGain;

  /* Update for Delay: '<S33>/UD' */
  my_brake_controller_ARID_DEF.UD_DSTATE = 0.0F;

  /* Saturate: '<S47>/Saturation' */
  if (rtb_Sum > 100.0F) {
    rtb_Sum = 100.0F;
  } else if (rtb_Sum < -100.0F) {
    rtb_Sum = -100.0F;
  }

  /* Outport generated from: '<Root>/Out Bus Element' incorporates:
   *  Saturate: '<S47>/Saturation'
   */
  Rte_IWrite_Runnable_Step_ThrCmd_Percent_Value(rtb_Sum);

  /* End of Outputs for SubSystem: '<Root>/Runnable_Step_sys' */
}

/* Model initialize function */
void Controller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
