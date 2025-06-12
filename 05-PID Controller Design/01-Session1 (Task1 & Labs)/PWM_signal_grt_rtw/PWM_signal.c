/*
 * PWM_signal.c
 *
 * Code generation for model "PWM_signal".
 *
 * Model version              : 1.2
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Tue Jun 10 10:02:34 2025
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PWM_signal.h"
#include "rtwtypes.h"
#include "PWM_signal_private.h"
#include <string.h>
#include "rt_nonfinite.h"

/* Block states (default storage) */
DW_PWM_signal_T PWM_signal_DW;

/* Real-time model */
static RT_MODEL_PWM_signal_T PWM_signal_M_;
RT_MODEL_PWM_signal_T *const PWM_signal_M = &PWM_signal_M_;

/* Model step function */
void PWM_signal_step(void)
{
  real_T u0;
  uint16_T b_varargout_1;

  /* MATLABSystem: '<Root>/Analog Input' */
  PWM_signal_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle
    (58UL);
  MW_AnalogInSingle_ReadResult
    (PWM_signal_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &b_varargout_1,
     MW_ANALOGIN_UINT16);

  /* MATLABSystem: '<Root>/PWM1' */
  PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(6UL);

  /* Start for MATLABSystem: '<Root>/PWM1' incorporates:
   *  Gain: '<Root>/Gain'
   *  MATLABSystem: '<Root>/Analog Input'
   * */
  u0 = 65344.0 * (real_T)b_varargout_1 * 3.814697265625E-6;
  if (!(u0 <= 255.0)) {
    u0 = 255.0;
  }

  /* MATLABSystem: '<Root>/PWM1' */
  MW_PWM_SetDutyCycle(PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE, u0);

  /* Matfile logging */
  rt_UpdateTXYLogVars(PWM_signal_M->rtwLogInfo, (&PWM_signal_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(PWM_signal_M)!=-1) &&
        !((rtmGetTFinal(PWM_signal_M)-PWM_signal_M->Timing.taskTime0) >
          PWM_signal_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(PWM_signal_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PWM_signal_M->Timing.clockTick0)) {
    ++PWM_signal_M->Timing.clockTickH0;
  }

  PWM_signal_M->Timing.taskTime0 = PWM_signal_M->Timing.clockTick0 *
    PWM_signal_M->Timing.stepSize0 + PWM_signal_M->Timing.clockTickH0 *
    PWM_signal_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void PWM_signal_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PWM_signal_M, 0,
                sizeof(RT_MODEL_PWM_signal_T));
  rtmSetTFinal(PWM_signal_M, 10.0);
  PWM_signal_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    PWM_signal_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(PWM_signal_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(PWM_signal_M->rtwLogInfo, (NULL));
    rtliSetLogT(PWM_signal_M->rtwLogInfo, "tout");
    rtliSetLogX(PWM_signal_M->rtwLogInfo, "");
    rtliSetLogXFinal(PWM_signal_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(PWM_signal_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(PWM_signal_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(PWM_signal_M->rtwLogInfo, 0);
    rtliSetLogDecimation(PWM_signal_M->rtwLogInfo, 1);
    rtliSetLogY(PWM_signal_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(PWM_signal_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(PWM_signal_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&PWM_signal_DW, 0,
                sizeof(DW_PWM_signal_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(PWM_signal_M->rtwLogInfo, 0.0, rtmGetTFinal
    (PWM_signal_M), PWM_signal_M->Timing.stepSize0, (&rtmGetErrorStatus
    (PWM_signal_M)));

  /* Start for MATLABSystem: '<Root>/Analog Input' */
  PWM_signal_DW.obj.matlabCodegenIsDeleted = false;
  PWM_signal_DW.objisempty_n = true;
  PWM_signal_DW.obj.isInitialized = 1L;
  PWM_signal_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(58UL);
  PWM_signal_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/PWM1' */
  PWM_signal_DW.obj_l.matlabCodegenIsDeleted = false;
  PWM_signal_DW.objisempty = true;
  PWM_signal_DW.obj_l.isInitialized = 1L;
  PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(6UL, 0.0, 0.0);
  PWM_signal_DW.obj_l.isSetupComplete = true;
}

/* Model terminate function */
void PWM_signal_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  if (!PWM_signal_DW.obj.matlabCodegenIsDeleted) {
    PWM_signal_DW.obj.matlabCodegenIsDeleted = true;
    if ((PWM_signal_DW.obj.isInitialized == 1L) &&
        PWM_signal_DW.obj.isSetupComplete) {
      PWM_signal_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(58UL);
      MW_AnalogIn_Close(PWM_signal_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/PWM1' */
  if (!PWM_signal_DW.obj_l.matlabCodegenIsDeleted) {
    PWM_signal_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((PWM_signal_DW.obj_l.isInitialized == 1L) &&
        PWM_signal_DW.obj_l.isSetupComplete) {
      PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(6UL);
      MW_PWM_SetDutyCycle(PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(6UL);
      MW_PWM_Close(PWM_signal_DW.obj_l.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM1' */
}
