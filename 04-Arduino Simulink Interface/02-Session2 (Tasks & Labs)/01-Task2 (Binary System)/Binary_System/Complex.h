/*
 * File: Complex.h
 *
 * Code generated for Simulink model 'Complex'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jun 16 05:16:31 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Complex_h_
#define Complex_h_
#ifndef Complex_COMMON_INCLUDES_
#define Complex_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* Complex_COMMON_INCLUDES_ */

#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define Complex_M                      (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#ifndef struct_tag_bpMNyLZPCJBeBnOB7xlwFB
#define struct_tag_bpMNyLZPCJBeBnOB7xlwFB

struct tag_bpMNyLZPCJBeBnOB7xlwFB
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_bpMNyLZPCJBeBnOB7xlwFB */

#ifndef typedef_c_arduinodriver_ArduinoDigitalI
#define typedef_c_arduinodriver_ArduinoDigitalI

typedef struct tag_bpMNyLZPCJBeBnOB7xlwFB c_arduinodriver_ArduinoDigitalI;

#endif                             /* typedef_c_arduinodriver_ArduinoDigitalI */

#ifndef struct_tag_Re0UPoyV6elc8rAtddQIvE
#define struct_tag_Re0UPoyV6elc8rAtddQIvE

struct tag_Re0UPoyV6elc8rAtddQIvE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_arduinodriver_ArduinoDigitalI DigitalIODriverObj;
};

#endif                                 /* struct_tag_Re0UPoyV6elc8rAtddQIvE */

#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct tag_Re0UPoyV6elc8rAtddQIvE codertarget_arduinobase_blocks_;

#endif                             /* typedef_codertarget_arduinobase_blocks_ */

#ifndef struct_tag_bpMNyLZPCJBeBnOB7xlwFB
#define struct_tag_bpMNyLZPCJBeBnOB7xlwFB

struct tag_bpMNyLZPCJBeBnOB7xlwFB
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_bpMNyLZPCJBeBnOB7xlwFB */

#ifndef typedef_b_arduinodriver_ArduinoDigitalI
#define typedef_b_arduinodriver_ArduinoDigitalI

typedef struct tag_bpMNyLZPCJBeBnOB7xlwFB b_arduinodriver_ArduinoDigitalI;

#endif                             /* typedef_b_arduinodriver_ArduinoDigitalI */

#ifndef struct_tag_ldqgYDWP5Rq6U8J4ptL7cG
#define struct_tag_ldqgYDWP5Rq6U8J4ptL7cG

struct tag_ldqgYDWP5Rq6U8J4ptL7cG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigitalI DigitalIODriverObj;
};

#endif                                 /* struct_tag_ldqgYDWP5Rq6U8J4ptL7cG */

#ifndef typedef_codertarget_arduinobase_block_a
#define typedef_codertarget_arduinobase_block_a

typedef struct tag_ldqgYDWP5Rq6U8J4ptL7cG codertarget_arduinobase_block_a;

#endif                             /* typedef_codertarget_arduinobase_block_a */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_block_a obj_j;/* '<Root>/Digital Output4' */
  codertarget_arduinobase_block_a obj_n;/* '<Root>/Digital Output3' */
  codertarget_arduinobase_block_a obj_i;/* '<Root>/Digital Output2' */
  codertarget_arduinobase_block_a obj_ib;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_block_a obj_l;/* '<Root>/Digital Output' */
  codertarget_arduinobase_blocks_ obj; /* '<Root>/Digital Input4' */
  codertarget_arduinobase_blocks_ obj_h;/* '<Root>/Digital Input3' */
  codertarget_arduinobase_blocks_ obj_h5;/* '<Root>/Digital Input2' */
  codertarget_arduinobase_blocks_ obj_g;/* '<Root>/Digital Input1' */
  codertarget_arduinobase_blocks_ obj_p;/* '<Root>/Digital Input' */
  real_T OU1;                          /* '<Root>/Binary_System' */
  real_T OU2;                          /* '<Root>/Binary_System' */
  real_T OU3;                          /* '<Root>/Binary_System' */
  real_T OU4;                          /* '<Root>/Binary_System' */
  real_T OU5;                          /* '<Root>/Binary_System' */
  uint8_T is_active_c3_Complex;        /* '<Root>/Binary_System' */
  uint8_T is_c3_Complex;               /* '<Root>/Binary_System' */
} DW;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals and states (default storage) */
#ifdef __cplusplus
extern "C" {
#endif
extern DW rtDW;

/* External function called from main */
extern void Complex_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Complex_initialize(void);
extern void Complex_step0(void);       /* Sample time: [0.001s, 0.0s] */
extern void Complex_step1(void);       /* Sample time: [0.1s, 0.0s] */

/* Real-time Model object */
extern RT_MODEL *const rtM;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;
#ifdef __cplusplus
}
#endif

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
 * '<Root>' : 'Complex'
 * '<S1>'   : 'Complex/Binary_System'
 */
#endif                                 /* Complex_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
