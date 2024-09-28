/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ThrottlePositionActuator"
   ARXML schema: "R22-11"
   File generated on: "Mon Aug 12 17:48:48 2024"  */

#include "Rte_ThrottlePositionActuator.h"

/* Parameters */
MyStruct_Actuator Rte_CData_HBridgeCmd_LkupTbl_data = {
  { -100.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F, -40.0F, -30.0F, -20.0F,
    -10.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F },

  { -2048, -1843, -1638, -1434, -1229, -1024, -819, -614, -410, -205, 0, 205,
    410, 614, 819, 1024, 1229, 1434, 1638, 1843, 2048 }
} ;

MyStruct_Actuator* Rte_CData_HBridgeCmd_LkupTbl(void)
{
  return &Rte_CData_HBridgeCmd_LkupTbl_data;
}
