/*
 * File: Automated_Irrigation_Control_System.c
 *
 * Code generated for Simulink model 'Automated_Irrigation_Control_System'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu May 29 11:01:58 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Automated_Irrigation_Control_System.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void Automated_Irrigation_Control_System_step(void)
{
  /* Outport: '<Root>/Switch_pump' incorporates:
   *  Constant: '<S2>/Constant'
   *  Gain: '<Root>/Gain'
   *  Inport: '<Root>/moisture_sensor'
   *  RelationalOperator: '<S2>/Compare'
   */
  rtY.Switch_pump = (0.0196078431372549 * rtU.moisture_sensor <= 3.0);
}

/* Model initialize function */
void Automated_Irrigation_Control_System_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
