/*
 * File: APP_Model_Detector.c
 *
 * Code generated for Simulink model 'APP_Model_Detector'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jul  2 07:28:51 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: STMicroelectronics->ST10/Super10
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "APP_Model_Detector.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void APP_Model_Detector_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/APP_Model_Detector' */
  /* Switch: '<S1>/Switch2' incorporates:
   *  Inport: '<Root>/APP_bCoherency_Failure'
   */
  if (rtU.APP_bCoherency_Failure != 0.0F) {
    /* Switch: '<S1>/Switch' incorporates:
     *  Inport: '<Root>/APP_bSensor1_Failure'
     *  Inport: '<Root>/APP_bSensor2_Failure'
     *  Logic: '<S1>/AND'
     *  Logic: '<S1>/AND1'
     *  Logic: '<S1>/NOT'
     *  Logic: '<S1>/NOT1'
     *  Switch: '<S1>/Switch1'
     */
    if ((!(rtU.APP_bSensor1_Failure != 0.0F)) && (rtU.APP_bSensor2_Failure !=
         0.0F)) {
      /* Outport: '<Root>/APP_OperationMode' incorporates:
       *  Constant: '<S1>/Downgraded_Mode_Sen_1'
       */
      rtY.APP_OperationMode = Downgraded_Sen_1;
    } else if ((!(rtU.APP_bSensor2_Failure != 0.0F)) &&
               (rtU.APP_bSensor1_Failure != 0.0F)) {
      /* Switch: '<S1>/Switch1' incorporates:
       *  Constant: '<S1>/Downgraded_Mode_Sen_2'
       *  Outport: '<Root>/APP_OperationMode'
       */
      rtY.APP_OperationMode = Downgraded_Sen_2;
    } else {
      /* Outport: '<Root>/APP_OperationMode' incorporates:
       *  Constant: '<S1>/Failure_Mode_Sen_3'
       *  Switch: '<S1>/Switch1'
       */
      rtY.APP_OperationMode = Failure;
    }

    /* End of Switch: '<S1>/Switch' */
  } else {
    /* Outport: '<Root>/APP_OperationMode' incorporates:
     *  Constant: '<S1>/Normal'
     */
    rtY.APP_OperationMode = Normal;
  }

  /* End of Switch: '<S1>/Switch2' */
  /* End of Outputs for SubSystem: '<Root>/APP_Model_Detector' */
}

/* Model initialize function */
void APP_Model_Detector_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
