/*
 * File: APP_Model_Detector.h
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

#ifndef APP_Model_Detector_h_
#define APP_Model_Detector_h_
#ifndef APP_Model_Detector_COMMON_INCLUDES_
#define APP_Model_Detector_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* APP_Model_Detector_COMMON_INCLUDES_ */

#ifndef DEFINED_TYPEDEF_FOR_APP_Modes_
#define DEFINED_TYPEDEF_FOR_APP_Modes_

typedef enum {
  Normal = 0,                          /* Default value */
  Downgraded_Sen_1,
  Downgraded_Sen_2,
  Failure
} APP_Modes;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T APP_bSensor1_Failure;       /* '<Root>/APP_bSensor1_Failure' */
  real32_T APP_bSensor2_Failure;       /* '<Root>/APP_bSensor2_Failure' */
  real32_T APP_bCoherency_Failure;     /* '<Root>/APP_bCoherency_Failure' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  APP_Modes APP_OperationMode;         /* '<Root>/APP_OperationMode' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void APP_Model_Detector_initialize(void);
extern void APP_Model_Detector_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('Reactive_System_Wiper/APP_Model_Detector')    - opens subsystem Reactive_System_Wiper/APP_Model_Detector
 * hilite_system('Reactive_System_Wiper/APP_Model_Detector/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Reactive_System_Wiper'
 * '<S1>'   : 'Reactive_System_Wiper/APP_Model_Detector'
 */
#endif                                 /* APP_Model_Detector_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
