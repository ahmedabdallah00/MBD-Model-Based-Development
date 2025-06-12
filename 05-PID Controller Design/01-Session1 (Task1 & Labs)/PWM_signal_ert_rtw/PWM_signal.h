/*
 * File: PWM_signal.h
 *
 * Code generated for Simulink model 'PWM_signal'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun 10 09:55:36 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef PWM_signal_h_
#define PWM_signal_h_
#ifndef PWM_signal_COMMON_INCLUDES_
#define PWM_signal_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_PWM.h"
#endif                                 /* PWM_signal_COMMON_INCLUDES_ */

#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<Root>/PWM1' */
#include "MW_SVD.h"
#ifndef struct_tag_pMPPJgn69ckPBhypf3vQzD
#define struct_tag_pMPPJgn69ckPBhypf3vQzD

struct tag_pMPPJgn69ckPBhypf3vQzD
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_pMPPJgn69ckPBhypf3vQzD */

#ifndef typedef_e_arduinodriver_ArduinoAnalogIn
#define typedef_e_arduinodriver_ArduinoAnalogIn

typedef struct tag_pMPPJgn69ckPBhypf3vQzD e_arduinodriver_ArduinoAnalogIn;

#endif                             /* typedef_e_arduinodriver_ArduinoAnalogIn */

#ifndef struct_tag_FIY6N64L77TlG9jHBRqBuB
#define struct_tag_FIY6N64L77TlG9jHBRqBuB

struct tag_FIY6N64L77TlG9jHBRqBuB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_arduinodriver_ArduinoAnalogIn AnalogInDriverObj;
};

#endif                                 /* struct_tag_FIY6N64L77TlG9jHBRqBuB */

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct tag_FIY6N64L77TlG9jHBRqBuB codertarget_arduinobase_interna;

#endif                             /* typedef_codertarget_arduinobase_interna */

#ifndef struct_tag_7VFuPw0vSNrn5pRgG8Mc4C
#define struct_tag_7VFuPw0vSNrn5pRgG8Mc4C

struct tag_7VFuPw0vSNrn5pRgG8Mc4C
{
  MW_Handle_Type MW_PWM_HANDLE;
};

#endif                                 /* struct_tag_7VFuPw0vSNrn5pRgG8Mc4C */

#ifndef typedef_e_matlabshared_ioclient_periphe
#define typedef_e_matlabshared_ioclient_periphe

typedef struct tag_7VFuPw0vSNrn5pRgG8Mc4C e_matlabshared_ioclient_periphe;

#endif                             /* typedef_e_matlabshared_ioclient_periphe */

#ifndef struct_tag_RWocY1aAVmuibq0rYX5t0G
#define struct_tag_RWocY1aAVmuibq0rYX5t0G

struct tag_RWocY1aAVmuibq0rYX5t0G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_matlabshared_ioclient_periphe PWMDriverObj;
};

#endif                                 /* struct_tag_RWocY1aAVmuibq0rYX5t0G */

#ifndef typedef_codertarget_arduinobase_inter_a
#define typedef_codertarget_arduinobase_inter_a

typedef struct tag_RWocY1aAVmuibq0rYX5t0G codertarget_arduinobase_inter_a;

#endif                             /* typedef_codertarget_arduinobase_inter_a */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_a obj_l;/* '<Root>/PWM1' */
  codertarget_arduinobase_interna obj; /* '<Root>/Analog Input' */
} DW;

/* Block signals and states (default storage) */
extern DW rtDW;

/* Model entry point functions */
extern void PWM_signal_initialize(void);
extern void PWM_signal_step(void);

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
 * '<Root>' : 'PWM_signal'
 */
#endif                                 /* PWM_signal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
