/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicel_Behavior_Modeling.c
 *
 * Code generated for Simulink model 'Vehicel_Behavior_Modeling'.
 *
 * Model version                  : 3.10
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jul 28 16:21:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Vehicel_Behavior_Modeling.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_Vehicel_Behavior_Modeling_T Vehicel_Behavior_Modeling_DW;

/* Real-time model */
static RT_MODEL_Vehicel_Behavior_Mod_T Vehicel_Behavior_Modeling_M_;
RT_MODEL_Vehicel_Behavior_Mod_T *const Vehicel_Behavior_Modeling_M =
  &Vehicel_Behavior_Modeling_M_;

/* Model step function */
void Vehicel_Behavior_Modeling_step(void)
{
  real_T rtb_Delay;
  real_T rtb_Delay1;
  real_T rtb_Gain3;
  real_T rtb_Subtract1;
  int32_T rtb_IndicatorRight;
  int32_T turning;

  /* Delay: '<S12>/Delay' */
  rtb_Delay = Vehicel_Behavior_Modeling_DW.Delay_DSTATE[0];

  /* Delay: '<S12>/Delay1' */
  rtb_Delay1 = Vehicel_Behavior_Modeling_DW.Delay1_DSTATE[0];

  /* Gain: '<S7>/Gain3' incorporates:
   *  Constant: '<S1>/InputSteeringAngle'
   *  Constant: '<S7>/Constant2'
   *  Gain: '<S7>/Gain1'
   *  Sum: '<S7>/Subtract'
   */
  rtb_Gain3 = (Vehicel_Behavior_Modeling_P.Gain1_Gain_b *
               Vehicel_Behavior_Modeling_P.InputSteeringAngle_Value -
               Vehicel_Behavior_Modeling_P.Constant2_Value_b) *
    Vehicel_Behavior_Modeling_P.Gain3_Gain_l;

  /* DataTypeConversion: '<S6>/Data Type Conversion2' incorporates:
   *  Constant: '<S1>/InputIndicator'
   *  Constant: '<S6>/Constant4'
   *  Product: '<S6>/Divide'
   */
  rtb_Subtract1 = ceil(Vehicel_Behavior_Modeling_P.InputIndicator_Value /
                       Vehicel_Behavior_Modeling_P.Constant4_Value_k);
  if (rtIsNaN(rtb_Subtract1) || rtIsInf(rtb_Subtract1)) {
    rtb_Subtract1 = 0.0;
  } else {
    rtb_Subtract1 = fmod(rtb_Subtract1, 4.294967296E+9);
  }

  /* Sum: '<S6>/Subtract1' incorporates:
   *  Constant: '<S6>/Constant1'
   *  DataTypeConversion: '<S6>/Data Type Conversion2'
   */
  rtb_Subtract1 = (real_T)(rtb_Subtract1 < 0.0 ? -(int32_T)(uint32_T)
    -rtb_Subtract1 : (int32_T)(uint32_T)rtb_Subtract1) -
    Vehicel_Behavior_Modeling_P.Constant1_Value_i;

  /* Switch: '<S12>/Switch' incorporates:
   *  Memory: '<S12>/Memory1'
   *  RelationalOperator: '<S12>/Relational Operator'
   */
  if (rtb_Subtract1 != Vehicel_Behavior_Modeling_DW.Memory1_PreviousInput) {
    /* Switch: '<S12>/Switch' */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput = rtb_Subtract1;
  }

  /* End of Switch: '<S12>/Switch' */

  /* MATLAB Function: '<S12>/MATLAB Function' incorporates:
   *  Memory: '<S12>/Memory'
   */
  turning = 0;
  if (rtb_Gain3 > Vehicel_Behavior_Modeling_DW.Memory_PreviousInput) {
    turning = 1;
  } else if (rtb_Gain3 < Vehicel_Behavior_Modeling_DW.Memory_PreviousInput) {
    turning = -1;
  }

  if ((Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput == 1.0) && (turning ==
       -1)) {
    /* Switch: '<S12>/Switch' */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput = 0.0;
  } else if ((Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput == -1.0) &&
             (turning == 1)) {
    /* Switch: '<S12>/Switch' */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput = 0.0;
  }

  turning = (Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput == -1.0);
  rtb_IndicatorRight = (Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput ==
                        1.0);

  /* End of MATLAB Function: '<S12>/MATLAB Function' */

  /* MultiPortSwitch: '<S12>/Multiport Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Gain: '<S12>/Gain1'
   *  Sum: '<S12>/Sum'
   */
  switch ((int32_T)((Vehicel_Behavior_Modeling_P.Gain1_Gain_i * (real_T)turning
                     + (real_T)rtb_IndicatorRight) +
                    Vehicel_Behavior_Modeling_P.Constant_Value_p)) {
   case 1:
    /* Update for Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/Constant1'
     *  Memory: '<S12>/Memory2'
     */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput =
      Vehicel_Behavior_Modeling_P.Constant1_Value_k;
    break;

   case 2:
    /* Update for Switch: '<S12>/Switch' incorporates:
     *  Memory: '<S12>/Memory2'
     */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput = rtb_IndicatorRight;
    break;

   default:
    /* Update for Switch: '<S12>/Switch' incorporates:
     *  Gain: '<S12>/Gain2'
     *  Memory: '<S12>/Memory2'
     */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput =
      Vehicel_Behavior_Modeling_P.Gain2_Gain_f * (real_T)turning;
    break;
  }

  /* End of MultiPortSwitch: '<S12>/Multiport Switch' */
  for (turning = 0; turning < 1499; turning++) {
    /* Update for Delay: '<S12>/Delay' */
    Vehicel_Behavior_Modeling_DW.Delay_DSTATE[turning] =
      Vehicel_Behavior_Modeling_DW.Delay_DSTATE[turning + 1];

    /* Update for Delay: '<S12>/Delay1' */
    Vehicel_Behavior_Modeling_DW.Delay1_DSTATE[turning] =
      Vehicel_Behavior_Modeling_DW.Delay1_DSTATE[turning + 1];
  }

  /* Update for Delay: '<S12>/Delay' */
  Vehicel_Behavior_Modeling_DW.Delay_DSTATE[1499] = rtb_Gain3;

  /* Update for Delay: '<S12>/Delay1' */
  Vehicel_Behavior_Modeling_DW.Delay1_DSTATE[1499] = rtb_Subtract1;

  /* Update for Memory: '<S12>/Memory' */
  Vehicel_Behavior_Modeling_DW.Memory_PreviousInput = rtb_Delay;

  /* Update for Memory: '<S12>/Memory1' */
  Vehicel_Behavior_Modeling_DW.Memory1_PreviousInput = rtb_Delay1;
}

/* Model initialize function */
void Vehicel_Behavior_Modeling_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    for (i = 0; i < 1500; i++) {
      /* InitializeConditions for Delay: '<S12>/Delay' */
      Vehicel_Behavior_Modeling_DW.Delay_DSTATE[i] =
        Vehicel_Behavior_Modeling_P.Delay_InitialCondition;

      /* InitializeConditions for Delay: '<S12>/Delay1' */
      Vehicel_Behavior_Modeling_DW.Delay1_DSTATE[i] =
        Vehicel_Behavior_Modeling_P.Delay1_InitialCondition;
    }

    /* InitializeConditions for Memory: '<S12>/Memory' */
    Vehicel_Behavior_Modeling_DW.Memory_PreviousInput =
      Vehicel_Behavior_Modeling_P.Memory_InitialCondition;

    /* InitializeConditions for Memory: '<S12>/Memory1' */
    Vehicel_Behavior_Modeling_DW.Memory1_PreviousInput =
      Vehicel_Behavior_Modeling_P.Memory1_InitialCondition;

    /* InitializeConditions for Switch: '<S12>/Switch' incorporates:
     *  Memory: '<S12>/Memory2'
     */
    Vehicel_Behavior_Modeling_DW.Memory2_PreviousInput =
      Vehicel_Behavior_Modeling_P.Memory2_InitialCondition;
  }
}

/* Model terminate function */
void Vehicel_Behavior_Modeling_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
