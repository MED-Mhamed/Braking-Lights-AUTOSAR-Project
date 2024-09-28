/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "Controller"
   ARXML schema: "R22-11"
   File generated on: "Mon Aug 12 17:49:31 2024"  */

#ifndef Rte_Controller_h
#define Rte_Controller_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_Runnable_Step_APP_Percent_Value Rte_IRead_Controller_Runnable_Step_APP_Percent_Value

float32 Rte_IRead_Runnable_Step_APP_Percent_Value(void);

#define Rte_IRead_Runnable_Step_TPS_Percent_Value Rte_IRead_Controller_Runnable_Step_TPS_Percent_Value

float32 Rte_IRead_Runnable_Step_TPS_Percent_Value(void);

#define Rte_IWrite_Runnable_Step_ThrCmd_Percent_Value Rte_IWrite_Controller_Runnable_Step_ThrCmd_Percent_Value

void Rte_IWrite_Runnable_Step_ThrCmd_Percent_Value(float32 u);

#define Rte_IWriteRef_Runnable_Step_ThrCmd_Percent_Value Rte_IWriteRef_Controller_Runnable_Step_ThrCmd_Percent_Value

float32* Rte_IWriteRef_Runnable_Step_ThrCmd_Percent_Value(void);

/* Entry point functions */
extern FUNC(void, Controller_CODE) Controller_Init(void);
extern FUNC(void, Controller_CODE) Runnable_Step(void);

#endif
