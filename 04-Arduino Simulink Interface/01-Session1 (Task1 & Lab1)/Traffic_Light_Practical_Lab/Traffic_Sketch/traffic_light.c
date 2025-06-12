/*
 * File: traffic_light.c
 *
 * Code generated for Simulink model 'traffic_light'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jun 12 09:02:12 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "traffic_light.h"
#include "rtwtypes.h"
#include <math.h>

/* Named constants for Chart: '<Root>/Traffic_Led_State' */
#define IN_FaultMode                   ((uint8_T)1U)
#define IN_Go                          ((uint8_T)1U)
#define IN_NO_ACTIVE_CHILD             ((uint8_T)0U)
#define IN_NormalMode                  ((uint8_T)2U)
#define IN_OFF                         ((uint8_T)1U)
#define IN_ON                          ((uint8_T)2U)
#define IN_PTS                         ((uint8_T)2U)
#define IN_Stop                        ((uint8_T)3U)

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
void traffic_light_SetEventsForThisBaseStep(boolean_T *eventFlags)
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
void traffic_light_step0(void)         /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void traffic_light_step1(void)         /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;
  uint8_T tmp_0;
  boolean_T c_value;

  /* MATLABSystem: '<Root>/Digital Input' */
  c_value = readDigitalPin(8);

  /* Chart: '<Root>/Traffic_Led_State' incorporates:
   *  MATLABSystem: '<Root>/Digital Input'
   * */
  if (rtDW.temporalCounter_i1 < 15) {
    rtDW.temporalCounter_i1++;
  }

  if (rtDW.is_active_c4_traffic_light == 0) {
    rtDW.is_active_c4_traffic_light = 1U;
    rtDW.is_c4_traffic_light = IN_NormalMode;
    rtDW.is_NormalMode = IN_Stop;
    rtDW.RLed = 1.0;
  } else if (rtDW.is_c4_traffic_light == IN_FaultMode) {
    if (!c_value) {
      rtDW.is_FaultMode = IN_NO_ACTIVE_CHILD;
      rtDW.is_c4_traffic_light = IN_NormalMode;
      rtDW.is_NormalMode = IN_Stop;
      rtDW.RLed = 1.0;
    } else if (rtDW.is_FaultMode == IN_OFF) {
      if (rtDW.temporalCounter_i1 >= 10) {
        rtDW.temporalCounter_i1 = 0U;
        rtDW.is_FaultMode = IN_ON;
        rtDW.RLed = 1.0;
      }

      /* case IN_ON: */
    } else if (rtDW.temporalCounter_i1 >= 10) {
      rtDW.temporalCounter_i1 = 0U;
      rtDW.is_FaultMode = IN_OFF;
      rtDW.RLed = 0.0;
    }

    /* case IN_NormalMode: */
  } else if (c_value) {
    switch (rtDW.is_NormalMode) {
     case IN_Go:
      rtDW.GLed = 0.0;
      rtDW.is_NormalMode = IN_NO_ACTIVE_CHILD;
      break;

     case IN_PTS:
      rtDW.YLed = 0.0;
      rtDW.is_NormalMode = IN_NO_ACTIVE_CHILD;
      break;

     case IN_Stop:
      rtDW.is_NormalMode = IN_NO_ACTIVE_CHILD;
      break;
    }

    rtDW.is_c4_traffic_light = IN_FaultMode;
    rtDW.temporalCounter_i1 = 0U;
    rtDW.is_FaultMode = IN_ON;
    rtDW.RLed = 1.0;
  } else {
    switch (rtDW.is_NormalMode) {
     case IN_Go:
      if (rtDW.temporalCounter_i1 >= 10) {
        rtDW.GLed = 0.0;
        rtDW.is_NormalMode = IN_PTS;
        rtDW.YLed = 1.0;
      }
      break;

     case IN_PTS:
      rtDW.YLed = 0.0;
      rtDW.is_NormalMode = IN_Stop;
      rtDW.RLed = 1.0;
      break;

     default:
      /* case IN_Stop: */
      rtDW.RLed = 0.0;
      rtDW.temporalCounter_i1 = 0U;
      rtDW.is_NormalMode = IN_Go;
      rtDW.GLed = 1.0;
      break;
    }
  }

  /* End of Chart: '<Root>/Traffic_Led_State' */

  /* MATLABSystem: '<Root>/Digital Output' */
  tmp = rt_roundd_snf(rtDW.RLed);
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

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  tmp = rt_roundd_snf(rtDW.GLed);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(6, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output1' */

  /* MATLABSystem: '<Root>/Digital Output2' */
  tmp = rt_roundd_snf(rtDW.YLed);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(2, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output2' */
}

/* Model initialize function */
void traffic_light_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Input' */
  rtDW.obj.matlabCodegenIsDeleted = false;
  rtDW.obj.isInitialized = 1L;
  digitalIOSetup(8, 2.0);
  rtDW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  rtDW.obj_j.matlabCodegenIsDeleted = false;
  rtDW.obj_j.isInitialized = 1L;
  digitalIOSetup(9, 1);
  rtDW.obj_j.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  rtDW.obj_b.matlabCodegenIsDeleted = false;
  rtDW.obj_b.isInitialized = 1L;
  digitalIOSetup(6, 1);
  rtDW.obj_b.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output2' */
  rtDW.obj_l.matlabCodegenIsDeleted = false;
  rtDW.obj_l.isInitialized = 1L;
  digitalIOSetup(2, 1);
  rtDW.obj_l.isSetupComplete = true;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
