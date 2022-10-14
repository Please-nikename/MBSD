/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller_CalDistance0.c
 *
 * Code generated for Simulink model 'Controller_CalDistance0'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Jun  5 21:57:10 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controller_CalDistance0.h"
#include "Controller_CalDistance0_private.h"

P_Controller_CalDistance0_T Controller_CalDistance0_P = {
  /* Expression: 0.1
   * Referenced by: '<Root>/Constant'
   */
  0.1,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<Root>/Pulse Generator'
   */
  500000.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<Root>/Pulse Generator'
   */
  250000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator1'
   */
  1.0,

  /* Computed Parameter: PulseGenerator1_Period
   * Referenced by: '<Root>/Pulse Generator1'
   */
  1.0E+6,

  /* Computed Parameter: PulseGenerator1_Duty
   * Referenced by: '<Root>/Pulse Generator1'
   */
  500000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator1'
   */
  0.0,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<Root>/Memory'
   */
  1.0F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  0.00431034481F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<Root>/Gain1'
   */
  0.0001F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<Root>/Gain3'
   */
  0.0001F
};

/* Named constants for Chart: '<Root>/Chart' */
#define Controller_C_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Controller_CalDista_IN_STANE_BY ((uint8_T)2U)
#define Controller_CalDistan_IN_CONFIRM ((uint8_T)1U)
#define Controller_CalDistance0_IN_WAIT ((uint8_T)3U)
#define Controller_CalDistance0_P()
/* Named constants for Chart: '<Root>/Chart1' */
#define Controller_CalDista_IN_Trig_Off ((uint8_T)1U)
#define Controller_CalDistan_IN_Trig_On ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Chart2' */
#define Controller_CalDistance0_IN_OFF ((uint8_T)1U)
#define Controller_CalDistance_IN_START ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Chart3' */
#define Controller_CalDista_IN_STAND_BY ((uint8_T)2U)
#define Controller_CalDistan_IN_CINFIRM ((uint8_T)1U)

/* Named constants for Chart: '<Root>/Chart4' */
#define Controller_CalDist_IN_CONFIRM_n ((uint8_T)2U)
#define Controller_CalDista_IN_SATND_BY ((uint8_T)3U)
#define Controller_CalDistance_IN_CHECK ((uint8_T)1U)

/* Named constants for Chart: '<Root>/Time_counter' */
#define Controller_CalDis_IN_Initiation ((uint8_T)1U)
#define Controller_CalDista_IN_Stand_by ((uint8_T)4U)
#define Controller_CalDistance0_IN_ON  ((uint8_T)3U)
#define Controller_CalDistance_IN_OFF_f ((uint8_T)2U)

/* Model step function */
void Controller_CalDistance0_step(RT_MODEL_Controller_CalDistan_T *const
  Controller_CalDistance0_M, real32_T Controller_CalDistance0_U_Echo_sig,
  real32_T *Controller_CalDistance0_Y_trig, real32_T
  *Controller_CalDistance0_Y_Out_sig)
{
  B_Controller_CalDistance0_T *Controller_CalDistance0_B =
    Controller_CalDistance0_M->blockIO;
  DW_Controller_CalDistance0_T *Controller_CalDistance0_DW =
    Controller_CalDistance0_M->dwork;
  real_T rtb_Product2;
  real_T rtb_PulseGenerator1;
  real32_T rtb_Gain;
  int16_T rtb_LEVEL;

  /* Outport: '<Root>/trig' incorporates:
   *  Memory: '<Root>/Memory'
   */
  *Controller_CalDistance0_Y_trig =
    Controller_CalDistance0_DW->Memory_PreviousInput;

  /* Chart: '<Root>/Chart1' */
  if (Controller_CalDistance0_DW->temporalCounter_i1_l < MAX_uint16_T) {
    Controller_CalDistance0_DW->temporalCounter_i1_l++;
  }

  if (Controller_CalDistance0_DW->is_active_c5_Controller_CalDist == 0U) {
    Controller_CalDistance0_DW->is_active_c5_Controller_CalDist = 1U;
    Controller_CalDistance0_DW->is_c5_Controller_CalDistance0 =
      Controller_CalDistan_IN_Trig_On;
    Controller_CalDistance0_DW->temporalCounter_i1_l = 0U;

    /* Update for Memory: '<Root>/Memory' */
    Controller_CalDistance0_DW->Memory_PreviousInput = 1.0F;
  } else if (Controller_CalDistance0_DW->is_c5_Controller_CalDistance0 ==
             Controller_CalDista_IN_Trig_Off) {
    /* Update for Memory: '<Root>/Memory' */
    Controller_CalDistance0_DW->Memory_PreviousInput = 0.0F;
    if (Controller_CalDistance0_DW->temporalCounter_i1_l >= 60000U) {
      Controller_CalDistance0_DW->is_c5_Controller_CalDistance0 =
        Controller_CalDistan_IN_Trig_On;
      Controller_CalDistance0_DW->temporalCounter_i1_l = 0U;

      /* Update for Memory: '<Root>/Memory' */
      Controller_CalDistance0_DW->Memory_PreviousInput = 1.0F;
    }
  } else {
    /* Update for Memory: '<Root>/Memory' */
    /* case IN_Trig_On: */
    Controller_CalDistance0_DW->Memory_PreviousInput = 1.0F;
    if (Controller_CalDistance0_DW->temporalCounter_i1_l >= 10U) {
      Controller_CalDistance0_DW->is_c5_Controller_CalDistance0 =
        Controller_CalDista_IN_Trig_Off;
      Controller_CalDistance0_DW->temporalCounter_i1_l = 0U;

      /* Update for Memory: '<Root>/Memory' */
      Controller_CalDistance0_DW->Memory_PreviousInput = 0.0F;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* Chart: '<Root>/Time_counter' incorporates:
   *  Inport: '<Root>/Echo_sig'
   */
  if (Controller_CalDistance0_DW->is_active_c7_Controller_CalDist == 0U) {
    Controller_CalDistance0_DW->is_active_c7_Controller_CalDist = 1U;
    Controller_CalDistance0_DW->is_c7_Controller_CalDistance0 =
      Controller_CalDis_IN_Initiation;
    Controller_CalDistance0_DW->Timer = 0.0F;
    Controller_CalDistance0_B->Counter = 0.0F;
  } else {
    switch (Controller_CalDistance0_DW->is_c7_Controller_CalDistance0) {
     case Controller_CalDis_IN_Initiation:
      Controller_CalDistance0_DW->is_c7_Controller_CalDistance0 =
        Controller_CalDista_IN_Stand_by;
      Controller_CalDistance0_DW->Timer++;
      break;

     case Controller_CalDistance_IN_OFF_f:
      if (Controller_CalDistance0_DW->Timer < 4.0F) {
        Controller_CalDistance0_DW->is_c7_Controller_CalDistance0 =
          Controller_CalDista_IN_Stand_by;
        Controller_CalDistance0_DW->Timer++;
      }
      break;

     case Controller_CalDistance0_IN_ON:
      if (Controller_CalDistance0_U_Echo_sig == 0.0F) {
        Controller_CalDistance0_DW->is_c7_Controller_CalDistance0 =
          Controller_CalDistance_IN_OFF_f;
      } else {
        Controller_CalDistance0_B->Counter++;
      }
      break;

     default:
      /* case IN_Stand_by: */
      if (Controller_CalDistance0_U_Echo_sig == 1.0F) {
        Controller_CalDistance0_DW->is_c7_Controller_CalDistance0 =
          Controller_CalDistance0_IN_ON;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Time_counter' */

  /* Gain: '<Root>/Gain' */
  rtb_Gain = Controller_CalDistance0_P.Gain_Gain *
    Controller_CalDistance0_B->Counter;

  /* Chart: '<Root>/Chart2' incorporates:
   *  Constant: '<Root>/Constant'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain3'
   *  Sum: '<Root>/Sum'
   */
  if (Controller_CalDistance0_DW->temporalCounter_i1_b < MAX_uint32_T) {
    Controller_CalDistance0_DW->temporalCounter_i1_b++;
  }

  if (Controller_CalDistance0_DW->is_active_c2_Controller_CalDist == 0U) {
    Controller_CalDistance0_DW->is_active_c2_Controller_CalDist = 1U;
    Controller_CalDistance0_DW->is_LEVEL_1_ON = Controller_CalDistance_IN_START;
    Controller_CalDistance0_DW->temporalCounter_i1_b = 0UL;
    rtb_LEVEL = 1;
  } else if (Controller_CalDistance0_DW->is_LEVEL_1_ON ==
             Controller_CalDistance0_IN_OFF) {
    rtb_LEVEL = 0;
    if (Controller_CalDistance0_DW->temporalCounter_i1_b >= (uint32_T)ceil
        ((real32_T)(Controller_CalDistance0_P.Constant_Value -
                    Controller_CalDistance0_P.Gain3_Gain * rtb_Gain) / 1.0E-6 -
         1.0E-14)) {
      Controller_CalDistance0_DW->is_LEVEL_1_ON =
        Controller_CalDistance_IN_START;
      Controller_CalDistance0_DW->temporalCounter_i1_b = 0UL;
      rtb_LEVEL = 1;
    }
  } else {
    /* case IN_START: */
    rtb_LEVEL = 1;
    if (Controller_CalDistance0_DW->temporalCounter_i1_b >= (uint32_T)ceil
        (Controller_CalDistance0_P.Gain1_Gain * rtb_Gain / 1.0E-6 - 1.0E-14)) {
      Controller_CalDistance0_DW->is_LEVEL_1_ON = Controller_CalDistance0_IN_OFF;
      Controller_CalDistance0_DW->temporalCounter_i1_b = 0UL;
      rtb_LEVEL = 0;
    }
  }

  /* End of Chart: '<Root>/Chart2' */

  /* Chart: '<Root>/Chart' */
  if (Controller_CalDistance0_DW->temporalCounter_i1_e < 131071UL) {
    Controller_CalDistance0_DW->temporalCounter_i1_e++;
  }

  if (Controller_CalDistance0_DW->is_active_c1_Controller_CalDist == 0U) {
    Controller_CalDistance0_DW->is_active_c1_Controller_CalDist = 1U;
    Controller_CalDistance0_DW->is_c1_Controller_CalDistance0 =
      Controller_CalDistance0_IN_WAIT;
    Controller_CalDistance0_DW->temporalCounter_i1_e = 0UL;
  } else {
    switch (Controller_CalDistance0_DW->is_c1_Controller_CalDistance0) {
     case Controller_CalDistan_IN_CONFIRM:
      Controller_CalDistance0_B->CONDITION_c = 1.0F;
      break;

     case Controller_CalDista_IN_STANE_BY:
      Controller_CalDistance0_B->CONDITION_c = 0.0F;
      if ((rtb_Gain >= 10.0F) && (rtb_Gain < 100.0F)) {
        Controller_CalDistance0_DW->is_c1_Controller_CalDistance0 =
          Controller_CalDistan_IN_CONFIRM;
        Controller_CalDistance0_B->CONDITION_c = 1.0F;
      }
      break;

     default:
      /* case IN_WAIT: */
      if (Controller_CalDistance0_DW->temporalCounter_i1_e >= 100001UL) {
        Controller_CalDistance0_DW->is_c1_Controller_CalDistance0 =
          Controller_CalDista_IN_STANE_BY;
        Controller_CalDistance0_B->CONDITION_c = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Chart: '<Root>/Chart3' */
  if (Controller_CalDistance0_DW->temporalCounter_i1_m < 262143UL) {
    Controller_CalDistance0_DW->temporalCounter_i1_m++;
  }

  if (Controller_CalDistance0_DW->is_active_c4_Controller_CalDist == 0U) {
    Controller_CalDistance0_DW->is_active_c4_Controller_CalDist = 1U;
    Controller_CalDistance0_DW->is_c4_Controller_CalDistance0 =
      Controller_CalDistance0_IN_WAIT;
    Controller_CalDistance0_DW->temporalCounter_i1_m = 0UL;
  } else {
    switch (Controller_CalDistance0_DW->is_c4_Controller_CalDistance0) {
     case Controller_CalDistan_IN_CINFIRM:
      Controller_CalDistance0_B->CONDITION_g = 1.0F;
      break;

     case Controller_CalDista_IN_STAND_BY:
      Controller_CalDistance0_B->CONDITION_g = 0.0F;
      if (((rtb_Gain > 0.0F) && (rtb_Gain < 10.0F)) || (rtb_Gain > 100.0F)) {
        Controller_CalDistance0_DW->is_c4_Controller_CalDistance0 =
          Controller_CalDistan_IN_CINFIRM;
        Controller_CalDistance0_B->CONDITION_g = 1.0F;
      }
      break;

     default:
      /* case IN_WAIT: */
      if (Controller_CalDistance0_DW->temporalCounter_i1_m >= 200001UL) {
        Controller_CalDistance0_DW->is_c4_Controller_CalDistance0 =
          Controller_CalDista_IN_STAND_BY;
        Controller_CalDistance0_B->CONDITION_g = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart3' */

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_Product2 = (Controller_CalDistance0_DW->clockTickCounter <
                  Controller_CalDistance0_P.PulseGenerator_Duty) &&
    (Controller_CalDistance0_DW->clockTickCounter >= 0L) ?
    Controller_CalDistance0_P.PulseGenerator_Amp : 0.0;
  if (Controller_CalDistance0_DW->clockTickCounter >=
      Controller_CalDistance0_P.PulseGenerator_Period - 1.0) {
    Controller_CalDistance0_DW->clockTickCounter = 0L;
  } else {
    Controller_CalDistance0_DW->clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Chart: '<Root>/Chart4' */
  if (Controller_CalDistance0_DW->temporalCounter_i1 < 131071UL) {
    Controller_CalDistance0_DW->temporalCounter_i1++;
  }

  if (Controller_CalDistance0_DW->is_active_c6_Controller_CalDist == 0U) {
    Controller_CalDistance0_DW->is_active_c6_Controller_CalDist = 1U;
    Controller_CalDistance0_DW->is_c6_Controller_CalDistance0 =
      Controller_CalDista_IN_SATND_BY;
    Controller_CalDistance0_DW->temporalCounter_i1 = 0UL;
  } else {
    switch (Controller_CalDistance0_DW->is_c6_Controller_CalDistance0) {
     case Controller_CalDistance_IN_CHECK:
      if (rtb_Gain == 0.0F) {
        Controller_CalDistance0_DW->is_c6_Controller_CalDistance0 =
          Controller_CalDist_IN_CONFIRM_n;
        Controller_CalDistance0_B->CONDITION = 1.0F;
      }
      break;

     case Controller_CalDist_IN_CONFIRM_n:
      Controller_CalDistance0_B->CONDITION = 1.0F;
      break;

     default:
      /* case IN_SATND_BY: */
      if (Controller_CalDistance0_DW->temporalCounter_i1 >= 70001UL) {
        Controller_CalDistance0_DW->is_c6_Controller_CalDistance0 =
          Controller_CalDistance_IN_CHECK;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart4' */

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  rtb_PulseGenerator1 = (Controller_CalDistance0_DW->clockTickCounter_n <
    Controller_CalDistance0_P.PulseGenerator1_Duty) &&
    (Controller_CalDistance0_DW->clockTickCounter_n >= 0L) ?
    Controller_CalDistance0_P.PulseGenerator1_Amp : 0.0;
  if (Controller_CalDistance0_DW->clockTickCounter_n >=
      Controller_CalDistance0_P.PulseGenerator1_Period - 1.0) {
    Controller_CalDistance0_DW->clockTickCounter_n = 0L;
  } else {
    Controller_CalDistance0_DW->clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

  /* Outport: '<Root>/Out_sig' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  Product: '<Root>/Product'
   *  Product: '<Root>/Product1'
   *  Product: '<Root>/Product2'
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Add1'
   */
  *Controller_CalDistance0_Y_Out_sig = (real32_T)((real32_T)rtb_LEVEL *
    Controller_CalDistance0_B->CONDITION_c +
    Controller_CalDistance0_B->CONDITION_g * rtb_Product2) + (real32_T)
    (Controller_CalDistance0_B->CONDITION * rtb_PulseGenerator1);
}

/* Model initialize function */
void Controller_CalDistance0_initialize(RT_MODEL_Controller_CalDistan_T *const
  Controller_CalDistance0_M, real32_T *Controller_CalDistance0_U_Echo_sig,
  real32_T *Controller_CalDistance0_Y_trig, real32_T
  *Controller_CalDistance0_Y_Out_sig)
{
  DW_Controller_CalDistance0_T *Controller_CalDistance0_DW =
    Controller_CalDistance0_M->dwork;
  B_Controller_CalDistance0_T *Controller_CalDistance0_B =
    Controller_CalDistance0_M->blockIO;

  /* Registration code */

  /* block I/O */
  (void) memset(((void *) Controller_CalDistance0_B), 0,
                sizeof(B_Controller_CalDistance0_T));

  /* states (dwork) */
  (void) memset((void *)Controller_CalDistance0_DW, 0,
                sizeof(DW_Controller_CalDistance0_T));

  /* external inputs */
  *Controller_CalDistance0_U_Echo_sig = 0.0F;

  /* external outputs */
  (*Controller_CalDistance0_Y_trig) = 0.0F;
  (*Controller_CalDistance0_Y_Out_sig) = 0.0F;

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  Controller_CalDistance0_DW->clockTickCounter = 0L;

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  Controller_CalDistance0_DW->clockTickCounter_n = 0L;

  /* InitializeConditions for Memory: '<Root>/Memory' */
  Controller_CalDistance0_DW->Memory_PreviousInput =
    Controller_CalDistance0_P.Memory_InitialCondition;

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  Controller_CalDistance0_DW->temporalCounter_i1_l = 0U;
  Controller_CalDistance0_DW->is_active_c5_Controller_CalDist = 0U;
  Controller_CalDistance0_DW->is_c5_Controller_CalDistance0 =
    Controller_C_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Time_counter' */
  Controller_CalDistance0_DW->is_active_c7_Controller_CalDist = 0U;
  Controller_CalDistance0_DW->is_c7_Controller_CalDistance0 =
    Controller_C_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart2' */
  Controller_CalDistance0_DW->is_LEVEL_1_ON = Controller_C_IN_NO_ACTIVE_CHILD;
  Controller_CalDistance0_DW->temporalCounter_i1_b = 0UL;
  Controller_CalDistance0_DW->is_active_c2_Controller_CalDist = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Controller_CalDistance0_DW->temporalCounter_i1_e = 0UL;
  Controller_CalDistance0_DW->is_active_c1_Controller_CalDist = 0U;
  Controller_CalDistance0_DW->is_c1_Controller_CalDistance0 =
    Controller_C_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart3' */
  Controller_CalDistance0_DW->temporalCounter_i1_m = 0UL;
  Controller_CalDistance0_DW->is_active_c4_Controller_CalDist = 0U;
  Controller_CalDistance0_DW->is_c4_Controller_CalDistance0 =
    Controller_C_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart4' */
  Controller_CalDistance0_DW->temporalCounter_i1 = 0UL;
  Controller_CalDistance0_DW->is_active_c6_Controller_CalDist = 0U;
  Controller_CalDistance0_DW->is_c6_Controller_CalDistance0 =
    Controller_C_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void Controller_CalDistance0_terminate(RT_MODEL_Controller_CalDistan_T *const
  Controller_CalDistance0_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Controller_CalDistance0_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
