/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller_CalDistance0.h
 *
 * Code generated for Simulink model 'Controller_CalDistance0'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Jun  5 10:17:06 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Controller_CalDistance0_h_
#define RTW_HEADER_Controller_CalDistance0_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Controller_CalDistance0_COMMON_INCLUDES_
#define Controller_CalDistance0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                            /* Controller_CalDistance0_COMMON_INCLUDES_ */

#include "Controller_CalDistance0_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T Counter;                    /* '<Root>/Time_counter' */
  real32_T CONDITION;                  /* '<Root>/Chart4' */
  real32_T CONDITION_g;                /* '<Root>/Chart3' */
  real32_T CONDITION_c;                /* '<Root>/Chart' */
} B_Controller_CalDistance0_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T Memory_PreviousInput;       /* '<Root>/Memory' */
  real32_T Timer;                      /* '<Root>/Time_counter' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T clockTickCounter_n;          /* '<Root>/Pulse Generator1' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart4' */
  uint32_T temporalCounter_i1_m;       /* '<Root>/Chart3' */
  uint32_T temporalCounter_i1_b;       /* '<Root>/Chart2' */
  uint32_T temporalCounter_i1_e;       /* '<Root>/Chart' */
  uint16_T temporalCounter_i1_l;       /* '<Root>/Chart1' */
  uint8_T is_active_c7_Controller_CalDist;/* '<Root>/Time_counter' */
  uint8_T is_c7_Controller_CalDistance0;/* '<Root>/Time_counter' */
  uint8_T is_active_c6_Controller_CalDist;/* '<Root>/Chart4' */
  uint8_T is_c6_Controller_CalDistance0;/* '<Root>/Chart4' */
  uint8_T is_active_c4_Controller_CalDist;/* '<Root>/Chart3' */
  uint8_T is_c4_Controller_CalDistance0;/* '<Root>/Chart3' */
  uint8_T is_active_c2_Controller_CalDist;/* '<Root>/Chart2' */
  uint8_T is_LEVEL_1_ON;               /* '<Root>/Chart2' */
  uint8_T is_active_c5_Controller_CalDist;/* '<Root>/Chart1' */
  uint8_T is_c5_Controller_CalDistance0;/* '<Root>/Chart1' */
  uint8_T is_active_c1_Controller_CalDist;/* '<Root>/Chart' */
  uint8_T is_c1_Controller_CalDistance0;/* '<Root>/Chart' */
} DW_Controller_CalDistance0_T;

/* Parameters (default storage) */
struct P_Controller_CalDistance0_T_ {
  real_T Constant_Value;               /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<Root>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<Root>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<Root>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<Root>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real32_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<Root>/Memory'
                                   */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<Root>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Controller_CalDistanc_T {
  const char_T *errorStatus;
  B_Controller_CalDistance0_T *blockIO;
  DW_Controller_CalDistance0_T *dwork;
};

/* Block parameters (default storage) */
extern P_Controller_CalDistance0_T Controller_CalDistance0_P;

/* Model entry point functions */
extern void Controller_CalDistance0_initialize(RT_MODEL_Controller_CalDistan_T *
  const Controller_CalDistance0_M, real32_T *Controller_CalDistance0_U_Echo_sig,
  real32_T *Controller_CalDistance0_Y_trig, real32_T
  *Controller_CalDistance0_Y_Out_sig);
extern void Controller_CalDistance0_step(RT_MODEL_Controller_CalDistan_T *const
  Controller_CalDistance0_M, real32_T Controller_CalDistance0_U_Echo_sig,
  real32_T *Controller_CalDistance0_Y_trig, real32_T
  *Controller_CalDistance0_Y_Out_sig);
extern void Controller_CalDistance0_terminate(RT_MODEL_Controller_CalDistan_T *
  const Controller_CalDistance0_M);
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope4' : Unused code path elimination
 */

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
 * '<Root>' : 'Controller_CalDistance0'
 * '<S1>'   : 'Controller_CalDistance0/Chart'
 * '<S2>'   : 'Controller_CalDistance0/Chart1'
 * '<S3>'   : 'Controller_CalDistance0/Chart2'
 * '<S4>'   : 'Controller_CalDistance0/Chart3'
 * '<S5>'   : 'Controller_CalDistance0/Chart4'
 * '<S6>'   : 'Controller_CalDistance0/Time_counter'
 */
#endif                               /* RTW_HEADER_Controller_CalDistance0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
