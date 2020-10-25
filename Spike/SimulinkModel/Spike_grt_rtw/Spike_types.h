/*
 * Spike_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Spike".
 *
 * Model version              : 1.162
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Sun Oct 25 15:00:48 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Spike_types_h_
#define RTW_HEADER_Spike_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLAB Function: '<Root>/WriteToFile' */
#include <stdio.h>

/* Custom Type definition for MATLAB Function: '<Root>/Read Throttle' */
#include <stdio.h>
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T_Spike_T
#define typedef_emxArray_char_T_Spike_T

typedef struct emxArray_char_T emxArray_char_T_Spike_T;

#endif                                 /*typedef_emxArray_char_T_Spike_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T_Spike_T
#define typedef_emxArray_boolean_T_Spike_T

typedef struct emxArray_boolean_T emxArray_boolean_T_Spike_T;

#endif                                 /*typedef_emxArray_boolean_T_Spike_T*/

#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T_Spike_T
#define typedef_emxArray_uint8_T_Spike_T

typedef struct emxArray_uint8_T emxArray_uint8_T_Spike_T;

#endif                                 /*typedef_emxArray_uint8_T_Spike_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T_Spike_T
#define typedef_emxArray_real_T_Spike_T

typedef struct emxArray_real_T emxArray_real_T_Spike_T;

#endif                                 /*typedef_emxArray_real_T_Spike_T*/

/* Parameters (default storage) */
typedef struct P_Spike_T_ P_Spike_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Spike_T RT_MODEL_Spike_T;

#endif                                 /* RTW_HEADER_Spike_types_h_ */
