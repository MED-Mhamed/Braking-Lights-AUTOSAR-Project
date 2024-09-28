/*
 * File: my_brake_controller.h
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

#ifndef my_brake_controller_h_
#define my_brake_controller_h_
#ifndef my_brake_controller_COMMON_INCLUDES_
#define my_brake_controller_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_Controller.h"
#endif                                /* my_brake_controller_COMMON_INCLUDES_ */

#include "my_brake_controller_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  float32 Integrator_DSTATE;           /* '<S40>/Integrator' */
  float32 UD_DSTATE;                   /* '<S33>/UD' */
} ARID_DEF_my_brake_controller_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_my_brake_controller_T my_brake_controller_ARID_DEF;/* '<S40>/Integrator' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S33>/DTDup' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S45>/Proportional Gain' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'my_brake_controller'
 * '<S1>'   : 'my_brake_controller/Runnable_Step_sys'
 * '<S2>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller'
 * '<S3>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Anti-windup'
 * '<S4>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/D Gain'
 * '<S5>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/External Derivative'
 * '<S6>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Filter'
 * '<S7>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Filter ICs'
 * '<S8>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/I Gain'
 * '<S9>'   : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Ideal P Gain'
 * '<S10>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S11>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Integrator'
 * '<S12>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Integrator ICs'
 * '<S13>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/N Copy'
 * '<S14>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/N Gain'
 * '<S15>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/P Copy'
 * '<S16>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Parallel P Gain'
 * '<S17>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Reset Signal'
 * '<S18>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Saturation'
 * '<S19>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Saturation Fdbk'
 * '<S20>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Sum'
 * '<S21>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Sum Fdbk'
 * '<S22>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tracking Mode'
 * '<S23>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tracking Mode Sum'
 * '<S24>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tsamp - Integral'
 * '<S25>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tsamp - Ngain'
 * '<S26>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/postSat Signal'
 * '<S27>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/preSat Signal'
 * '<S28>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S29>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S30>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S31>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S32>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/External Derivative/Error'
 * '<S33>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Filter/Differentiator'
 * '<S34>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Filter/Differentiator/Tsamp'
 * '<S35>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S36>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S37>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S38>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S39>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S40>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Integrator/Discrete'
 * '<S41>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S42>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S43>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/N Gain/Passthrough'
 * '<S44>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/P Copy/Disabled'
 * '<S45>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S46>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Reset Signal/Disabled'
 * '<S47>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Saturation/Enabled'
 * '<S48>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S49>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Sum/Sum_PID'
 * '<S50>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S51>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S52>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S53>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S54>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S55>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S56>'  : 'my_brake_controller/Runnable_Step_sys/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* my_brake_controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
