/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicel_Behavior_Modeling.h
 *
 * Code generated for Simulink model 'Vehicel_Behavior_Modeling'.
 *
 * Model version                  : 3.12
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Aug  6 14:21:02 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Vehicel_Behavior_Modeling_h_
#define Vehicel_Behavior_Modeling_h_
#ifndef Vehicel_Behavior_Modeling_COMMON_INCLUDES_
#define Vehicel_Behavior_Modeling_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                          /* Vehicel_Behavior_Modeling_COMMON_INCLUDES_ */

#include "Vehicel_Behavior_Modeling_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[1500];           /* '<S12>/Delay' */
  real_T Delay1_DSTATE[1500];          /* '<S12>/Delay1' */
  real_T Memory_PreviousInput;         /* '<S12>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S12>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S12>/Memory2' */
} DW_Vehicel_Behavior_Modeling_T;

/* Parameters (default storage) */
struct P_Vehicel_Behavior_Modeling_T_ {
  real_T BackwardSpeed_Value;          /* Expression: -1
                                        * Referenced by: '<S11>/BackwardSpeed'
                                        */
  real_T InputCarONOFF_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/InputCarON//OFF'
                                        */
  real_T InputCarGears_Value;          /* Expression: 484.3313494873047
                                        * Referenced by: '<S1>/InputCarGears'
                                        */
  real_T Constant1_Value;              /* Expression: 511.5
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Neutral_Value;                /* Expression: 0
                                        * Referenced by: '<S11>/Neutral'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Gain4_Gain;                   /* Expression: 5
                                        * Referenced by: '<S3>/Gain4'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S5>/Switch'
                                        */
  real_T Gain3_Gain;                   /* Expression: 5
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real_T InputCarAcceleration_Value;   /* Expression: 30.78376901626587
                                        * Referenced by: '<S1>/InputCarAcceleration '
                                        */
  real_T Constant2_Value;              /* Expression: 1023
                                        * Referenced by: '<S9>/Constant2'
                                        */
  real_T forwardmaxspeed_Value;        /* Expression: 20
                                        * Referenced by: '<S9>/forward max speed'
                                        */
  real_T InputCarBreak_Value;          /* Expression: 0.49341
                                        * Referenced by: '<S1>/InputCarBreak'
                                        */
  real_T mintorqforbreak_Value;        /* Expression: 200
                                        * Referenced by: '<S9>/min torq for break'
                                        */
  real_T maxspeedforhandbrack_Value;   /* Expression: 10
                                        * Referenced by: '<S10>/max speed for hand brack'
                                        */
  real_T InputCarHandBreak_Value;      /* Expression: 1
                                        * Referenced by: '<S1>/InputCarHandBreak'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S10>/Constant4'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S10>/Switch1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 5
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 2.55
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1/25.5*0.5
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Gain5_Gain;                   /* Expression: 5
                                        * Referenced by: '<S3>/Gain5'
                                        */
  real_T Gain2_Gain;                   /* Expression: 5
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S12>/Delay'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S12>/Delay1'
                                        */
  real_T InputSteeringAngle_Value;     /* Expression: 818.2781399536133
                                        * Referenced by: '<S1>/InputSteeringAngle'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: 0.0049
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T Constant2_Value_b;            /* Expression: 2.5
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 72
                                        * Referenced by: '<S7>/Gain3'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 0.155
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T AddConstant_Bias;             /* Expression: 28
                                        * Referenced by: '<S2>/Add Constant'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 1/11.2
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S12>/Memory'
                                        */
  real_T InputIndicator_Value;         /* Expression: 682
                                        * Referenced by: '<S1>/InputIndicator'
                                        */
  real_T Constant4_Value_k;            /* Expression: 341
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real_T Constant1_Value_i;            /* Expression: 2
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S12>/Memory1'
                                        */
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S12>/Memory2'
                                        */
  real_T Gain6_Gain;                   /* Expression: 5
                                        * Referenced by: '<S3>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 5
                                        * Referenced by: '<S3>/Gain7'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 2
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: 0
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: -1
                                        * Referenced by: '<S12>/Gain2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Vehicel_Behavior_Mode_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_Vehicel_Behavior_Modeling_T Vehicel_Behavior_Modeling_P;

/* Block states (default storage) */
extern DW_Vehicel_Behavior_Modeling_T Vehicel_Behavior_Modeling_DW;

/* Model entry point functions */
extern void Vehicel_Behavior_Modeling_initialize(void);
extern void Vehicel_Behavior_Modeling_step(void);
extern void Vehicel_Behavior_Modeling_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Vehicel_Behavior_Mod_T *const Vehicel_Behavior_Modeling_M;

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
 * '<Root>' : 'Vehicel_Behavior_Modeling'
 * '<S1>'   : 'Vehicel_Behavior_Modeling/Subsystem'
 * '<S2>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino'
 * '<S3>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/SignalConverstion'
 * '<S4>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/SignalConverterCarEngineSpeed'
 * '<S5>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/SignalConverterCraGearGain'
 * '<S6>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/signalConverterForIndicator'
 * '<S7>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/signalConverterForSteeringAngle'
 * '<S8>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/system'
 * '<S9>'   : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/system/Accleration and Break'
 * '<S10>'  : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/system/Engine'
 * '<S11>'  : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/system/Gear Box'
 * '<S12>'  : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/system/Steering and indicator '
 * '<S13>'  : 'Vehicel_Behavior_Modeling/Subsystem/Subsystem_Arduino/system/Steering and indicator /MATLAB Function'
 */
#endif                                 /* Vehicel_Behavior_Modeling_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
