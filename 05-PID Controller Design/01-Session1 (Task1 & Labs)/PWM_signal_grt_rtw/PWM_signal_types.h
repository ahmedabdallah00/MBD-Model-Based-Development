/*
 * PWM_signal_types.h
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

#ifndef PWM_signal_types_h_
#define PWM_signal_types_h_
#include "MW_SVD.h"
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<Root>/PWM1' */
#include "MW_SVD.h"
#ifndef struct_tag_pMPPJgn69ckPBhypf3vQzD
#define struct_tag_pMPPJgn69ckPBhypf3vQzD

struct tag_pMPPJgn69ckPBhypf3vQzD
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_pMPPJgn69ckPBhypf3vQzD */

#ifndef typedef_e_arduinodriver_ArduinoAnalog_T
#define typedef_e_arduinodriver_ArduinoAnalog_T

typedef struct tag_pMPPJgn69ckPBhypf3vQzD e_arduinodriver_ArduinoAnalog_T;

#endif                             /* typedef_e_arduinodriver_ArduinoAnalog_T */

#ifndef struct_tag_FIY6N64L77TlG9jHBRqBuB
#define struct_tag_FIY6N64L77TlG9jHBRqBuB

struct tag_FIY6N64L77TlG9jHBRqBuB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_arduinodriver_ArduinoAnalog_T AnalogInDriverObj;
};

#endif                                 /* struct_tag_FIY6N64L77TlG9jHBRqBuB */

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_FIY6N64L77TlG9jHBRqBuB codertarget_arduinobase_inter_T;

#endif                             /* typedef_codertarget_arduinobase_inter_T */

#ifndef struct_tag_7VFuPw0vSNrn5pRgG8Mc4C
#define struct_tag_7VFuPw0vSNrn5pRgG8Mc4C

struct tag_7VFuPw0vSNrn5pRgG8Mc4C
{
  MW_Handle_Type MW_PWM_HANDLE;
};

#endif                                 /* struct_tag_7VFuPw0vSNrn5pRgG8Mc4C */

#ifndef typedef_e_matlabshared_ioclient_perip_T
#define typedef_e_matlabshared_ioclient_perip_T

typedef struct tag_7VFuPw0vSNrn5pRgG8Mc4C e_matlabshared_ioclient_perip_T;

#endif                             /* typedef_e_matlabshared_ioclient_perip_T */

#ifndef struct_tag_RWocY1aAVmuibq0rYX5t0G
#define struct_tag_RWocY1aAVmuibq0rYX5t0G

struct tag_RWocY1aAVmuibq0rYX5t0G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_matlabshared_ioclient_perip_T PWMDriverObj;
};

#endif                                 /* struct_tag_RWocY1aAVmuibq0rYX5t0G */

#ifndef typedef_codertarget_arduinobase_int_a_T
#define typedef_codertarget_arduinobase_int_a_T

typedef struct tag_RWocY1aAVmuibq0rYX5t0G codertarget_arduinobase_int_a_T;

#endif                             /* typedef_codertarget_arduinobase_int_a_T */

#ifndef SS_UINT64
#define SS_UINT64                      21
#endif

#ifndef SS_INT64
#define SS_INT64                       22
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PWM_signal_T RT_MODEL_PWM_signal_T;

#endif                                 /* PWM_signal_types_h_ */
