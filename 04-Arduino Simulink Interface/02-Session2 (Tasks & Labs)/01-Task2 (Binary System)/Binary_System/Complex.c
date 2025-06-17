/*
 * File: Complex.c
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

#include "Complex.h"
#include "rtwtypes.h"
#include <math.h>

/* Named constants for Chart: '<Root>/Binary_System' */
#define IN_Start                       ((uint8_T)1U)
#define IN_System                      ((uint8_T)2U)

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
extern real_T rt_roundd_snf(real_T u);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Complex_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(rtM, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function for TID0 */
void Complex_step0(void)               /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void Complex_step1(void)               /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;
  uint8_T tmp_0;
  boolean_T c_value;
  boolean_T c_value_0;
  boolean_T c_value_1;
  boolean_T c_value_2;
  boolean_T c_value_3;

  /* MATLABSystem: '<Root>/Digital Input4' */
  c_value = readDigitalPin(6);

  /* MATLABSystem: '<Root>/Digital Input' */
  c_value_0 = readDigitalPin(2);

  /* MATLABSystem: '<Root>/Digital Input1' */
  c_value_1 = readDigitalPin(3);

  /* MATLABSystem: '<Root>/Digital Input2' */
  c_value_2 = readDigitalPin(4);

  /* MATLABSystem: '<Root>/Digital Input3' */
  c_value_3 = readDigitalPin(5);

  /* Chart: '<Root>/Binary_System' incorporates:
   *  MATLABSystem: '<Root>/Digital Input'
   *  MATLABSystem: '<Root>/Digital Input1'
   *  MATLABSystem: '<Root>/Digital Input2'
   *  MATLABSystem: '<Root>/Digital Input3'
   *  MATLABSystem: '<Root>/Digital Input4'
   * */
  if (rtDW.is_active_c3_Complex == 0) {
    rtDW.is_active_c3_Complex = 1U;
    rtDW.is_c3_Complex = IN_Start;
    rtDW.OU1 = 0.0;
    rtDW.OU2 = 0.0;
    rtDW.OU3 = 0.0;
    rtDW.OU4 = 0.0;
    rtDW.OU5 = 0.0;
  } else if (rtDW.is_c3_Complex == IN_Start) {
    if (c_value_0 || c_value_1 || c_value_2 || c_value_3) {
      rtDW.is_c3_Complex = IN_System;
      rtDW.OU1 = 1.0;
    }

    /* case IN_System: */
  } else if (c_value) {
    rtDW.is_c3_Complex = IN_Start;
    rtDW.OU1 = 0.0;
    rtDW.OU2 = 0.0;
    rtDW.OU3 = 0.0;
    rtDW.OU4 = 0.0;
    rtDW.OU5 = 0.0;
  } else {
    rtDW.OU1 = 1.0;
    rtDW.OU2 = 1.0;
    rtDW.OU3 = 1.0;
    rtDW.OU4 = 1.0;
    rtDW.OU5 = 1.0;
  }

  /* End of Chart: '<Root>/Binary_System' */

  /* MATLABSystem: '<Root>/Digital Output' */
  tmp = rt_roundd_snf(rtDW.OU1);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(7, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  tmp = rt_roundd_snf(rtDW.OU2);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(8, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output1' */

  /* MATLABSystem: '<Root>/Digital Output2' */
  tmp = rt_roundd_snf(rtDW.OU3);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(9, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output2' */

  /* MATLABSystem: '<Root>/Digital Output3' */
  tmp = rt_roundd_snf(rtDW.OU4);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(10, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output3' */

  /* MATLABSystem: '<Root>/Digital Output4' */
  tmp = rt_roundd_snf(rtDW.OU5);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(11, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output4' */
}

/* Model initialize function */
void Complex_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Input4' */
  rtDW.obj.matlabCodegenIsDeleted = false;
  rtDW.obj.isInitialized = 1L;
  digitalIOSetup(6, 0);
  rtDW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  rtDW.obj_p.matlabCodegenIsDeleted = false;
  rtDW.obj_p.isInitialized = 1L;
  digitalIOSetup(2, 0);
  rtDW.obj_p.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input1' */
  rtDW.obj_g.matlabCodegenIsDeleted = false;
  rtDW.obj_g.isInitialized = 1L;
  digitalIOSetup(3, 0);
  rtDW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input2' */
  rtDW.obj_h5.matlabCodegenIsDeleted = false;
  rtDW.obj_h5.isInitialized = 1L;
  digitalIOSetup(4, 0);
  rtDW.obj_h5.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input3' */
  rtDW.obj_h.matlabCodegenIsDeleted = false;
  rtDW.obj_h.isInitialized = 1L;
  digitalIOSetup(5, 0);
  rtDW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  rtDW.obj_l.matlabCodegenIsDeleted = false;
  rtDW.obj_l.isInitialized = 1L;
  digitalIOSetup(7, 1);
  rtDW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  rtDW.obj_ib.matlabCodegenIsDeleted = false;
  rtDW.obj_ib.isInitialized = 1L;
  digitalIOSetup(8, 1);
  rtDW.obj_ib.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output2' */
  rtDW.obj_i.matlabCodegenIsDeleted = false;
  rtDW.obj_i.isInitialized = 1L;
  digitalIOSetup(9, 1);
  rtDW.obj_i.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output3' */
  rtDW.obj_n.matlabCodegenIsDeleted = false;
  rtDW.obj_n.isInitialized = 1L;
  digitalIOSetup(10, 1);
  rtDW.obj_n.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output4' */
  rtDW.obj_j.matlabCodegenIsDeleted = false;
  rtDW.obj_j.isInitialized = 1L;
  digitalIOSetup(11, 1);
  rtDW.obj_j.isSetupComplete = true;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
