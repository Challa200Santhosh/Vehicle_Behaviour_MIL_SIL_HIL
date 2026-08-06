/*
 * File: Vehicel_Behavior_Modeling_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef VEHICEL_BEHAVIOR_MODELING_CA_H
#define VEHICEL_BEHAVIOR_MODELING_CA_H

/* preprocessor validation checks */
#include "Vehicel_Behavior_Modeling_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Vehicel_Behavior_Modeling_HWRes;
extern CA_PWS_TestResults CA_Vehicel_Behavior_Modeling_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Vehicel_Behavior_Modeling_ExpHW;
extern CA_HWImpl CA_Vehicel_Behavior_Modeling_ActHW;

/* entry point function to run tests */
void Vehicel_Behavior_Modeling_caRunTests(void);

#endif                                 /* VEHICEL_BEHAVIOR_MODELING_CA_H */
