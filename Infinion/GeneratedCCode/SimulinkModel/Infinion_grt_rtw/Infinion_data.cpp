/*
 * Infinion_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Infinion".
 *
 * Model version              : 1.234
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Dec 18 19:45:28 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Infinion.h"
#include "Infinion_private.h"

/* Block parameters (default storage) */
P_Infinion_T InfinionModelClass::Infinion_P = {
  { 0.0, 0.0 },
  0.69,
  0.69,

  { 10.0, 0.0, 0.0 },
  2.4,
  2.4,
  0.3,
  0.3,
  180.0,
  90.0,
  180.0,
  180.0,
  90.0,
  180.0,

  { 0.0, 0.0, 0.0 },

  { 0.33, 0.0, 0.0, 0.0, 0.4, 0.0, 0.0, 0.0, 0.66 },
  1.9,

  { 0.0, 0.0, 0.0 },
  0.0,

  { 0.0, 0.0, 20.0 },
  -90.0,
  -1.0,
  90.0,
  180.0,
  -180.0,
  180.0,
  -180.0,
  0.0,
  180.0,
  -90.0,
  -1.0,
  90.0,
  360.0,
  180.0,
  -180.0,
  360.0,
  180.0,
  -180.0,
  -1.0,
  21.322,
  1.0,
  6.378137E+6,
  1.0,
  1.0,
  0.0033528106647474805,
  1.0,
  1.0,
  1.0,
  360.0,
  -157.924,
  180.0,
  0.0,
  360.0,
  0.0,
  -1.0,
  3.1415926535897931,
  -3.1415926535897931,
  1.2754,
  0.5,
  0.0,

  { -15.0, -10.0, -5.0, -2.5, 0.0, 2.5, 5.0, 10.0, 15.0 },
  343.0,

  { 0.02, 0.04, 0.06 },

  { 10.0, 50.0, 100.0 },

  { -0.053259, -0.036256, -0.018128, -0.0090639, 0.0, 0.0090639, 0.018128,
    0.036256, 0.053259, -0.053459, -0.036392, -0.018196, -0.0090979, 0.0,
    0.0090979, 0.018196, 0.036392, 0.053459, -0.053535, -0.036443, -0.018222,
    -0.0091109, 0.0, 0.0091109, 0.018222, 0.036443, 0.053535, -0.053258,
    -0.036255, -0.018128, -0.0090638, 0.0, 0.0090638, 0.018128, 0.036255,
    0.053258, -0.053458, -0.036391, -0.018195, -0.0090977, 0.0, 0.0090977,
    0.018195, 0.036391, 0.053458, -0.053534, -0.036443, -0.018221, -0.0091107,
    0.0, 0.0091107, 0.018221, 0.036443, 0.053534, -0.053257, -0.036254,
    -0.018127, -0.0090636, 0.0, 0.0090636, 0.018127, 0.036254, 0.053257,
    -0.053456, -0.03639, -0.018195, -0.0090975, 0.0, 0.0090975, 0.018195,
    0.03639, 0.053456, -0.053533, -0.036442, -0.018221, -0.0091105, 0.0,
    0.0091105, 0.018221, 0.036442, 0.053533 },

  { -16.0, -12.0, -8.0, -4.0, -2.0, 0.0, 2.0, 4.0, 8.0, 12.0, 16.0, 20.0 },

  { -0.01228, -0.00818, -0.004215, -0.0005361, 0.001208, 0.003048, 0.00498,
    0.006987, 0.01115, 0.01491, 0.01717, 0.01638, -0.008362, -0.005568,
    -0.002869, -0.0003649, 0.0008222, 0.002075, 0.00339, 0.004756, 0.007591,
    0.01015, 0.01169, 0.01115, -0.004181, -0.002784, -0.001434, -0.0001825,
    0.0004111, 0.001038, 0.001695, 0.002378, 0.003796, 0.005075, 0.005843,
    0.005575, -0.002091, -0.001392, -0.0007172, -9.123E-5, 0.0002056, 0.0005188,
    0.0008475, 0.001189, 0.001898, 0.002537, 0.002922, 0.002787, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002091, 0.001392, 0.0007172,
    9.123E-5, -0.0002056, -0.0005188, -0.0008475, -0.001189, -0.001898,
    -0.002537, -0.002922, -0.002787, 0.004181, 0.002784, 0.001434, 0.0001825,
    -0.0004111, -0.001038, -0.001695, -0.002378, -0.003796, -0.005075, -0.005843,
    -0.005575, 0.008362, 0.005568, 0.002869, 0.0003649, -0.0008222, -0.002075,
    -0.00339, -0.004756, -0.007591, -0.01015, -0.01169, -0.01115, 0.01228,
    0.00818, 0.004215, 0.0005361, -0.001208, -0.003048, -0.00498, -0.006987,
    -0.01115, -0.01491, -0.01717, -0.01638, -0.01233, -0.008208, -0.004229,
    -0.0005379, 0.001212, 0.003059, 0.004997, 0.007011, 0.01119, 0.01496,
    0.01723, 0.01645, -0.008391, -0.005587, -0.002879, -0.0003661, 0.000825,
    0.002082, 0.003402, 0.004772, 0.007618, 0.01019, 0.01173, 0.0112, -0.004196,
    -0.002794, -0.001439, -0.0001831, 0.0004125, 0.001041, 0.001701, 0.002386,
    0.003809, 0.005093, 0.005865, 0.005599, -0.002098, -0.001397, -0.0007197,
    -9.154E-5, 0.0002062, 0.0005205, 0.0008504, 0.001193, 0.001904, 0.002546,
    0.002932, 0.0028, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.002098, 0.001397, 0.0007197, 9.154E-5, -0.0002062, -0.0005205, -0.0008504,
    -0.001193, -0.001904, -0.002546, -0.002932, -0.0028, 0.004196, 0.002794,
    0.001439, 0.0001831, -0.0004125, -0.001041, -0.001701, -0.002386, -0.003809,
    -0.005093, -0.005865, -0.005599, 0.008391, 0.005587, 0.002879, 0.0003661,
    -0.000825, -0.002082, -0.003402, -0.004772, -0.007618, -0.01019, -0.01173,
    -0.0112, 0.01233, 0.008208, 0.004229, 0.0005379, -0.001212, -0.003059,
    -0.004997, -0.007011, -0.01119, -0.01496, -0.01723, -0.01645, -0.01235,
    -0.008224, -0.004237, -0.000539, 0.001214, 0.003065, 0.005007, 0.007024,
    0.01121, 0.01499, 0.01726, 0.01647, -0.008407, -0.005598, -0.002884,
    -0.0003669, 0.0008267, 0.002086, 0.003408, 0.004782, 0.007632, 0.0102,
    0.01175, 0.01121, -0.004203, -0.002799, -0.001442, -0.0001834, 0.0004133,
    0.001043, 0.001704, 0.002391, 0.003816, 0.005101, 0.005874, 0.005605,
    -0.002102, -0.001399, -0.0007211, -9.172E-5, 0.0002067, 0.0005215, 0.0008521,
    0.001195, 0.001908, 0.002551, 0.002937, 0.002802, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002102, 0.001399, 0.0007211, 9.172E-5,
    -0.0002067, -0.0005215, -0.0008521, -0.001195, -0.001908, -0.002551,
    -0.002937, -0.002802, 0.004203, 0.002799, 0.001442, 0.0001834, -0.0004133,
    -0.001043, -0.001704, -0.002391, -0.003816, -0.005101, -0.005874, -0.005605,
    0.008407, 0.005598, 0.002884, 0.0003669, -0.0008267, -0.002086, -0.003408,
    -0.004782, -0.007632, -0.0102, -0.01175, -0.01121, 0.01235, 0.008224,
    0.004237, 0.000539, -0.001214, -0.003065, -0.005007, -0.007024, -0.01121,
    -0.01499, -0.01726, -0.01647, -0.01228, -0.00818, -0.004215, -0.0005361,
    0.001208, 0.003048, 0.00498, 0.006987, 0.01115, 0.01491, 0.01717, 0.01638,
    -0.008362, -0.005568, -0.002869, -0.0003649, 0.0008222, 0.002075, 0.00339,
    0.004756, 0.007591, 0.01015, 0.01169, 0.01115, -0.004181, -0.002784,
    -0.001434, -0.0001825, 0.0004111, 0.001037, 0.001695, 0.002378, 0.003796,
    0.005074, 0.005843, 0.005575, -0.002091, -0.001392, -0.0007172, -9.123E-5,
    0.0002055, 0.0005187, 0.0008475, 0.001189, 0.001898, 0.002537, 0.002922,
    0.002787, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.002091, 0.001392, 0.0007172, 9.123E-5, -0.0002055, -0.0005187, -0.0008475,
    -0.001189, -0.001898, -0.002537, -0.002922, -0.002787, 0.004181, 0.002784,
    0.001434, 0.0001825, -0.0004111, -0.001037, -0.001695, -0.002378, -0.003796,
    -0.005074, -0.005843, -0.005575, 0.008362, 0.005568, 0.002869, 0.0003649,
    -0.0008222, -0.002075, -0.00339, -0.004756, -0.007591, -0.01015, -0.01169,
    -0.01115, 0.01228, 0.00818, 0.004215, 0.0005361, -0.001208, -0.003048,
    -0.00498, -0.006987, -0.01115, -0.01491, -0.01717, -0.01638, -0.01233,
    -0.008208, -0.004229, -0.0005379, 0.001212, 0.003059, 0.004997, 0.007011,
    0.01119, 0.01496, 0.01723, 0.01645, -0.008391, -0.005587, -0.002879,
    -0.0003661, 0.000825, 0.002082, 0.003402, 0.004772, 0.007617, 0.01019,
    0.01173, 0.0112, -0.004195, -0.002794, -0.001439, -0.0001831, 0.0004125,
    0.001041, 0.001701, 0.002386, 0.003809, 0.005093, 0.005864, 0.005599,
    -0.002098, -0.001397, -0.0007197, -9.153E-5, 0.0002062, 0.0005205, 0.0008504,
    0.001193, 0.001904, 0.002546, 0.002932, 0.0028, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002098, 0.001397, 0.0007197, 9.153E-5,
    -0.0002062, -0.0005205, -0.0008504, -0.001193, -0.001904, -0.002546,
    -0.002932, -0.0028, 0.004195, 0.002794, 0.001439, 0.0001831, -0.0004125,
    -0.001041, -0.001701, -0.002386, -0.003809, -0.005093, -0.005864, -0.005599,
    0.008391, 0.005587, 0.002879, 0.0003661, -0.000825, -0.002082, -0.003402,
    -0.004772, -0.007617, -0.01019, -0.01173, -0.0112, 0.01233, 0.008208,
    0.004229, 0.0005379, -0.001212, -0.003059, -0.004997, -0.007011, -0.01119,
    -0.01496, -0.01723, -0.01645, -0.01235, -0.008223, -0.004237, -0.000539,
    0.001214, 0.003065, 0.005007, 0.007024, 0.01121, 0.01499, 0.01726, 0.01647,
    -0.008407, -0.005598, -0.002884, -0.0003669, 0.0008266, 0.002086, 0.003408,
    0.004782, 0.007632, 0.0102, 0.01175, 0.01121, -0.004203, -0.002799,
    -0.001442, -0.0001834, 0.0004133, 0.001043, 0.001704, 0.002391, 0.003816,
    0.005101, 0.005874, 0.005605, -0.002102, -0.001399, -0.0007211, -9.172E-5,
    0.0002067, 0.0005215, 0.0008521, 0.001195, 0.001908, 0.002551, 0.002937,
    0.002802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.002102, 0.001399, 0.0007211, 9.172E-5, -0.0002067, -0.0005215, -0.0008521,
    -0.001195, -0.001908, -0.002551, -0.002937, -0.002802, 0.004203, 0.002799,
    0.001442, 0.0001834, -0.0004133, -0.001043, -0.001704, -0.002391, -0.003816,
    -0.005101, -0.005874, -0.005605, 0.008407, 0.005598, 0.002884, 0.0003669,
    -0.0008266, -0.002086, -0.003408, -0.004782, -0.007632, -0.0102, -0.01175,
    -0.01121, 0.01235, 0.008223, 0.004237, 0.000539, -0.001214, -0.003065,
    -0.005007, -0.007024, -0.01121, -0.01499, -0.01726, -0.01647, -0.01228,
    -0.008179, -0.004214, -0.0005361, 0.001208, 0.003048, 0.00498, 0.006987,
    0.01115, 0.01491, 0.01717, 0.01638, -0.008362, -0.005568, -0.002869,
    -0.0003649, 0.0008222, 0.002075, 0.00339, 0.004756, 0.007591, 0.01015,
    0.01169, 0.01115, -0.004181, -0.002784, -0.001434, -0.0001825, 0.0004111,
    0.001037, 0.001695, 0.002378, 0.003795, 0.005074, 0.005843, 0.005575,
    -0.00209, -0.001392, -0.0007172, -9.123E-5, 0.0002055, 0.0005187, 0.0008475,
    0.001189, 0.001898, 0.002537, 0.002921, 0.002787, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00209, 0.001392, 0.0007172, 9.123E-5,
    -0.0002055, -0.0005187, -0.0008475, -0.001189, -0.001898, -0.002537,
    -0.002921, -0.002787, 0.004181, 0.002784, 0.001434, 0.0001825, -0.0004111,
    -0.001037, -0.001695, -0.002378, -0.003795, -0.005074, -0.005843, -0.005575,
    0.008362, 0.005568, 0.002869, 0.0003649, -0.0008222, -0.002075, -0.00339,
    -0.004756, -0.007591, -0.01015, -0.01169, -0.01115, 0.01228, 0.008179,
    0.004214, 0.0005361, -0.001208, -0.003048, -0.00498, -0.006987, -0.01115,
    -0.01491, -0.01717, -0.01638, -0.01233, -0.008207, -0.004229, -0.0005379,
    0.001212, 0.003058, 0.004997, 0.007011, 0.01119, 0.01496, 0.01723, 0.01645,
    -0.008391, -0.005587, -0.002879, -0.0003661, 0.000825, 0.002082, 0.003402,
    0.004772, 0.007617, 0.01019, 0.01173, 0.0112, -0.004195, -0.002793,
    -0.001439, -0.0001831, 0.0004125, 0.001041, 0.001701, 0.002386, 0.003809,
    0.005093, 0.005864, 0.005599, -0.002098, -0.001397, -0.0007197, -9.153E-5,
    0.0002062, 0.0005205, 0.0008504, 0.001193, 0.001904, 0.002546, 0.002932,
    0.002799, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.002098, 0.001397, 0.0007197, 9.153E-5, -0.0002062, -0.0005205, -0.0008504,
    -0.001193, -0.001904, -0.002546, -0.002932, -0.002799, 0.004195, 0.002793,
    0.001439, 0.0001831, -0.0004125, -0.001041, -0.001701, -0.002386, -0.003809,
    -0.005093, -0.005864, -0.005599, 0.008391, 0.005587, 0.002879, 0.0003661,
    -0.000825, -0.002082, -0.003402, -0.004772, -0.007617, -0.01019, -0.01173,
    -0.0112, 0.01233, 0.008207, 0.004229, 0.0005379, -0.001212, -0.003058,
    -0.004997, -0.007011, -0.01119, -0.01496, -0.01723, -0.01645, -0.01235,
    -0.008223, -0.004237, -0.000539, 0.001214, 0.003065, 0.005007, 0.007024,
    0.01121, 0.01499, 0.01726, 0.01647, -0.008407, -0.005598, -0.002884,
    -0.0003669, 0.0008266, 0.002086, 0.003408, 0.004781, 0.007632, 0.0102,
    0.01175, 0.01121, -0.004203, -0.002799, -0.001442, -0.0001834, 0.0004133,
    0.001043, 0.001704, 0.002391, 0.003816, 0.005101, 0.005874, 0.005605,
    -0.002102, -0.001399, -0.0007211, -9.172E-5, 0.0002067, 0.0005215, 0.0008521,
    0.001195, 0.001908, 0.002551, 0.002937, 0.002802, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002102, 0.001399, 0.0007211, 9.172E-5,
    -0.0002067, -0.0005215, -0.0008521, -0.001195, -0.001908, -0.002551,
    -0.002937, -0.002802, 0.004203, 0.002799, 0.001442, 0.0001834, -0.0004133,
    -0.001043, -0.001704, -0.002391, -0.003816, -0.005101, -0.005874, -0.005605,
    0.008407, 0.005598, 0.002884, 0.0003669, -0.0008266, -0.002086, -0.003408,
    -0.004781, -0.007632, -0.0102, -0.01175, -0.01121, 0.01235, 0.008223,
    0.004237, 0.000539, -0.001214, -0.003065, -0.005007, -0.007024, -0.01121,
    -0.01499, -0.01726, -0.01647 },
  -1.0,

  { -25.0, -16.0, -8.0, 0.0, 8.0, 16.0, 25.0 },

  { 0.0112, 0.00951, 0.00791, 0.00624, 0.00537, 0.00451, 0.00364, 0.0028,
    0.00109, -0.000819, -0.00317, -0.00621, 0.0116, 0.00989, 0.00825, 0.00653,
    0.00564, 0.00475, 0.00387, 0.003, 0.00125, -0.000714, -0.00313, -0.00625,
    0.0118, 0.0101, 0.00846, 0.00672, 0.00581, 0.00491, 0.00401, 0.00313,
    0.00135, -0.000648, -0.0031, -0.00627, 0.0111, 0.0095, 0.0079, 0.00623,
    0.00536, 0.0045, 0.00364, 0.00279, 0.00109, -0.000821, -0.00317, -0.00621,
    0.0116, 0.00988, 0.00824, 0.00652, 0.00563, 0.00475, 0.00386, 0.00299,
    0.00125, -0.000717, -0.00313, -0.00624, 0.0118, 0.0101, 0.00845, 0.00671,
    0.0058, 0.00491, 0.004, 0.00312, 0.00135, -0.00065, -0.0031, -0.00627,
    0.0111, 0.00949, 0.00789, 0.00623, 0.00536, 0.0045, 0.00363, 0.00279,
    0.00109, -0.000822, -0.00317, -0.00621, 0.0116, 0.00988, 0.00823, 0.00652,
    0.00563, 0.00474, 0.00386, 0.00299, 0.00124, -0.000719, -0.00313, -0.00624,
    0.0118, 0.0101, 0.00844, 0.0067, 0.0058, 0.0049, 0.004, 0.00312, 0.00134,
    -0.000653, -0.0031, -0.00627, 0.0102, 0.00863, 0.00713, 0.00557, 0.00475,
    0.00395, 0.00314, 0.00234, 0.000749, -0.00104, -0.00324, -0.00609, 0.0106,
    0.00898, 0.00744, 0.00583, 0.00499, 0.00416, 0.00333, 0.00252, 0.00088,
    -0.000961, -0.00322, -0.00615, 0.0108, 0.0092, 0.00763, 0.00599, 0.00514,
    0.0043, 0.00346, 0.00263, 0.000964, -0.000908, -0.00321, -0.00618, 0.0102,
    0.00863, 0.00713, 0.00556, 0.00475, 0.00394, 0.00313, 0.00234, 0.000746,
    -0.00105, -0.00325, -0.00609, 0.0106, 0.00897, 0.00743, 0.00582, 0.00499,
    0.00416, 0.00333, 0.00252, 0.000877, -0.000963, -0.00322, -0.00614, 0.0108,
    0.00919, 0.00762, 0.00599, 0.00514, 0.0043, 0.00345, 0.00263, 0.000961,
    -0.00091, -0.00321, -0.00618, 0.0102, 0.00862, 0.00712, 0.00556, 0.00475,
    0.00394, 0.00313, 0.00234, 0.000744, -0.00105, -0.00325, -0.00609, 0.0105,
    0.00896, 0.00742, 0.00582, 0.00498, 0.00415, 0.00332, 0.00251, 0.000874,
    -0.000965, -0.00322, -0.00614, 0.0108, 0.00918, 0.00761, 0.00598, 0.00513,
    0.00429, 0.00345, 0.00262, 0.000957, -0.000913, -0.00321, -0.00618, 0.00452,
    0.00368, 0.00286, 0.00201, 0.00157, 0.00112, 0.000683, 0.000252, -0.000618,
    -0.0016, -0.0028, -0.00435, 0.00468, 0.00381, 0.00297, 0.0021, 0.00164,
    0.00119, 0.000734, 0.000291, -0.000602, -0.00161, -0.00284, -0.00443,
    0.00477, 0.0039, 0.00304, 0.00215, 0.00169, 0.00123, 0.000767, 0.000317,
    -0.000591, -0.00161, -0.00286, -0.00449, 0.00452, 0.00368, 0.00286, 0.00201,
    0.00156, 0.00112, 0.000682, 0.000251, -0.000619, -0.0016, -0.00279, -0.00435,
    0.00467, 0.00381, 0.00297, 0.00209, 0.00164, 0.00119, 0.000733, 0.000291,
    -0.000603, -0.00161, -0.00284, -0.00443, 0.00477, 0.00389, 0.00304, 0.00215,
    0.00169, 0.00123, 0.000766, 0.000316, -0.000592, -0.00161, -0.00286,
    -0.00448, 0.00451, 0.00368, 0.00286, 0.00201, 0.00156, 0.00112, 0.000681,
    0.00025, -0.000619, -0.0016, -0.00279, -0.00435, 0.00467, 0.00381, 0.00297,
    0.00209, 0.00164, 0.00119, 0.000732, 0.00029, -0.000603, -0.00161, -0.00284,
    -0.00443, 0.00477, 0.00389, 0.00304, 0.00215, 0.00168, 0.00123, 0.000765,
    0.000315, -0.000592, -0.00161, -0.00286, -0.00448, -4.11E-6, -3.06E-6,
    -2.04E-6, -9.72E-7, -4.17E-7, 1.33E-7, 6.86E-7, 1.22E-6, 2.31E-6, 3.53E-6,
    5.03E-6, 6.97E-6, -4.22E-6, -3.14E-6, -2.09E-6, -9.98E-7, -4.28E-7, 1.37E-7,
    7.05E-7, 1.26E-6, 2.37E-6, 3.63E-6, 5.17E-6, 7.16E-6, -4.29E-6, -3.2E-6,
    -2.13E-6, -1.01E-6, -4.35E-7, 1.39E-7, 7.16E-7, 1.28E-6, 2.41E-6, 3.69E-6,
    5.26E-6, 7.28E-6, -4.11E-6, -3.06E-6, -2.04E-6, -9.71E-7, -4.17E-7, 1.33E-7,
    6.85E-7, 1.22E-6, 2.31E-6, 3.53E-6, 5.03E-6, 6.97E-6, -4.22E-6, -3.14E-6,
    -2.09E-6, -9.98E-7, -4.28E-7, 1.37E-7, 7.04E-7, 1.26E-6, 2.37E-6, 3.63E-6,
    5.17E-6, 7.16E-6, -4.29E-6, -3.19E-6, -2.13E-6, -1.01E-6, -4.35E-7, 1.39E-7,
    7.15E-7, 1.28E-6, 2.41E-6, 3.69E-6, 5.25E-6, 7.28E-6, -4.11E-6, -3.06E-6,
    -2.04E-6, -9.71E-7, -4.17E-7, 1.33E-7, 6.85E-7, 1.22E-6, 2.31E-6, 3.53E-6,
    5.03E-6, 6.96E-6, -4.22E-6, -3.14E-6, -2.09E-6, -9.97E-7, -4.28E-7, 1.37E-7,
    7.04E-7, 1.26E-6, 2.37E-6, 3.63E-6, 5.16E-6, 7.16E-6, -4.29E-6, -3.19E-6,
    -2.13E-6, -1.01E-6, -4.35E-7, 1.39E-7, 7.15E-7, 1.28E-6, 2.41E-6, 3.69E-6,
    5.25E-6, 7.28E-6, -0.00206, -0.00122, -0.000402, 0.000451, 0.000895, 0.00134,
    0.00178, 0.00221, 0.00308, 0.00406, 0.00526, 0.00681, -0.00208, -0.00122,
    -0.00038, 0.000496, 0.000952, 0.0014, 0.00186, 0.0023, 0.00319, 0.0042,
    0.00543, 0.00702, -0.0021, -0.00122, -0.000366, 0.000525, 0.000988, 0.00145,
    0.00191, 0.00236, 0.00327, 0.00429, 0.00554, 0.00716, -0.00206, -0.00122,
    -0.000403, 0.00045, 0.000894, 0.00133, 0.00178, 0.00221, 0.00308, 0.00405,
    0.00525, 0.0068, -0.00208, -0.00122, -0.000381, 0.000495, 0.000951, 0.0014,
    0.00186, 0.0023, 0.00319, 0.0042, 0.00543, 0.00702, -0.0021, -0.00122,
    -0.000366, 0.000524, 0.000987, 0.00145, 0.00191, 0.00236, 0.00326, 0.00428,
    0.00554, 0.00716, -0.00206, -0.00122, -0.000403, 0.000449, 0.000893, 0.00133,
    0.00177, 0.0022, 0.00307, 0.00405, 0.00525, 0.0068, -0.00208, -0.00122,
    -0.000381, 0.000494, 0.00095, 0.0014, 0.00185, 0.0023, 0.00319, 0.00419,
    0.00542, 0.00702, -0.0021, -0.00122, -0.000367, 0.000523, 0.000985, 0.00144,
    0.00191, 0.00235, 0.00326, 0.00428, 0.00553, 0.00715, -0.0019, -0.000356,
    0.00114, 0.00271, 0.00352, 0.00433, 0.00514, 0.00593, 0.00753, 0.00932,
    0.0115, 0.0144, -0.00184, -0.000255, 0.00129, 0.00289, 0.00373, 0.00456,
    0.00539, 0.00621, 0.00784, 0.00969, 0.0119, 0.0149, -0.0018, -0.00019,
    0.00138, 0.00301, 0.00386, 0.0047, 0.00555, 0.00638, 0.00804, 0.00991,
    0.0122, 0.0152, -0.0019, -0.000358, 0.00114, 0.00271, 0.00352, 0.00433,
    0.00514, 0.00593, 0.00752, 0.00932, 0.0115, 0.0144, -0.00184, -0.000257,
    0.00128, 0.00289, 0.00373, 0.00456, 0.00539, 0.0062, 0.00784, 0.00968,
    0.0119, 0.0149, -0.0018, -0.000193, 0.00137, 0.00301, 0.00386, 0.0047,
    0.00554, 0.00637, 0.00804, 0.00991, 0.0122, 0.0152, -0.0019, -0.00036,
    0.00114, 0.0027, 0.00352, 0.00432, 0.00513, 0.00592, 0.00752, 0.00931,
    0.0115, 0.0144, -0.00184, -0.00026, 0.00128, 0.00289, 0.00372, 0.00455,
    0.00538, 0.00619, 0.00783, 0.00967, 0.0119, 0.0148, -0.0018, -0.000195,
    0.00137, 0.003, 0.00385, 0.00469, 0.00554, 0.00636, 0.00803, 0.0099, 0.0122,
    0.0152, -0.00173, -8.48E-5, 0.00152, 0.00319, 0.00406, 0.00492, 0.00578,
    0.00663, 0.00833, 0.0102, 0.0126, 0.0156, -0.00165, 3.9E-5, 0.00168, 0.0034,
    0.00429, 0.00518, 0.00607, 0.00693, 0.00868, 0.0106, 0.0131, 0.0162, -0.0016,
    0.000118, 0.00179, 0.00353, 0.00444, 0.00534, 0.00624, 0.00712, 0.0089,
    0.0109, 0.0133, 0.0165, -0.00173, -8.74E-5, 0.00151, 0.00318, 0.00405,
    0.00491, 0.00578, 0.00662, 0.00832, 0.0102, 0.0126, 0.0156, -0.00165,
    3.63E-5, 0.00168, 0.00339, 0.00429, 0.00517, 0.00606, 0.00693, 0.00867,
    0.0106, 0.013, 0.0162, -0.0016, 0.000115, 0.00179, 0.00353, 0.00443, 0.00533,
    0.00624, 0.00712, 0.00889, 0.0109, 0.0133, 0.0165, -0.00173, -8.93E-5,
    0.00151, 0.00318, 0.00405, 0.00491, 0.00577, 0.00662, 0.00832, 0.0102,
    0.0126, 0.0156, -0.00165, 3.33E-5, 0.00168, 0.00339, 0.00428, 0.00517,
    0.00605, 0.00692, 0.00867, 0.0106, 0.013, 0.0162, -0.0016, 0.000112, 0.00178,
    0.00352, 0.00443, 0.00533, 0.00623, 0.00711, 0.00889, 0.0109, 0.0133, 0.0165
  },
  0.0,

  { -0.095, -0.089, -0.049, 0.0, 0.049, 0.089, 0.095, -0.098, -0.092, -0.05, 0.0,
    0.05, 0.092, 0.098, -0.099, -0.093, -0.051, 0.0, 0.051, 0.093, 0.099, -0.095,
    -0.089, -0.049, 0.0, 0.049, 0.089, 0.095, -0.098, -0.092, -0.05, 0.0, 0.05,
    0.092, 0.098, -0.099, -0.093, -0.051, 0.0, 0.051, 0.093, 0.099, -0.095,
    -0.089, -0.049, 0.0, 0.049, 0.089, 0.095, -0.098, -0.092, -0.05, 0.0, 0.05,
    0.092, 0.098, -0.099, -0.093, -0.051, 0.0, 0.051, 0.093, 0.099 },

  { 0.2447, 0.227, 0.1236, -0.0002, -0.1236, -0.227, -0.2447, 0.2507, 0.2326,
    0.1267, -0.0002, -0.1267, -0.2326, -0.2507, 0.2537, 0.2354, 0.1282, -0.0002,
    -0.1282, -0.2354, -0.2537, 0.2415, 0.224, 0.122, -0.0002, -0.122, -0.224,
    -0.2415, 0.2428, 0.2252, 0.1226, -0.0002, -0.1226, -0.2252, -0.2428, 0.2361,
    0.2189, 0.1192, -0.0001, -0.1192, -0.2189, -0.2361, 0.2121, 0.1965, 0.107,
    -0.0001, -0.107, -0.1965, -0.2122, 0.1989, 0.1845, 0.1005, -0.0001, -0.1005,
    -0.1845, -0.1989, 0.1816, 0.1687, 0.0919, -0.0001, -0.0919, -0.1687, -0.1816
  },
  0.0,
  -1.0,

  { -16.0, -8.0, 0.0, 8.0, 16.0 },

  { 0.0917, 0.0486, -0.0001, -0.0486, -0.0917, 0.0941, 0.0499, -0.0001, -0.0499,
    -0.0941, 0.0941, 0.0499, -0.0001, -0.0499, -0.0941, 0.0917, 0.0486, -0.0001,
    -0.0486, -0.0917, 0.0941, 0.0499, -0.0001, -0.0499, -0.0941, 0.0941, 0.0499,
    -0.0001, -0.0499, -0.0941, 0.0917, 0.0486, -0.0001, -0.0486, -0.0917, 0.0941,
    0.0499, -0.0001, -0.0499, -0.0941, 0.0941, 0.0499, -0.0001, -0.0499, -0.0941
  },

  { 1.0, 1.0, 1.0 },
  0.0,

  { -16.0, -12.0, -8.0, -4.0, -2.0, 0.0, 2.0, 4.0, 8.0, 12.0, 16.0, 20.0 },

  { 0.02, 0.04, 0.06 },

  { 10.0, 50.0, 100.0 },

  { 0.119, 0.071, 0.044, 0.032, 0.031, 0.034, 0.04, 0.051, 0.087, 0.136, 0.177,
    0.18, 0.114, 0.067, 0.04, 0.028, 0.028, 0.03, 0.037, 0.048, 0.084, 0.132,
    0.173, 0.175, 0.112, 0.065, 0.039, 0.027, 0.026, 0.029, 0.035, 0.046, 0.082,
    0.13, 0.171, 0.173, 0.119, 0.071, 0.044, 0.032, 0.031, 0.034, 0.04, 0.051,
    0.087, 0.136, 0.177, 0.18, 0.114, 0.067, 0.04, 0.028, 0.028, 0.03, 0.037,
    0.048, 0.084, 0.132, 0.173, 0.175, 0.112, 0.065, 0.039, 0.027, 0.026, 0.029,
    0.035, 0.046, 0.082, 0.13, 0.171, 0.173, 0.119, 0.071, 0.044, 0.032, 0.031,
    0.034, 0.04, 0.051, 0.087, 0.136, 0.177, 0.18, 0.114, 0.067, 0.041, 0.028,
    0.028, 0.03, 0.037, 0.048, 0.084, 0.132, 0.173, 0.175, 0.112, 0.065, 0.039,
    0.027, 0.026, 0.029, 0.035, 0.046, 0.082, 0.13, 0.171, 0.173 },
  0.0,

  { -1.4, -0.939, -0.507, -0.098, 0.098, 0.304, 0.519, 0.742, 1.205, 1.629,
    1.904, 1.867, -1.401, -0.939, -0.508, -0.098, 0.098, 0.304, 0.519, 0.742,
    1.205, 1.629, 1.904, 1.868, -1.403, -0.94, -0.508, -0.098, 0.098, 0.304,
    0.519, 0.742, 1.205, 1.63, 1.904, 1.868, -1.4, -0.939, -0.507, -0.098, 0.098,
    0.304, 0.519, 0.742, 1.205, 1.629, 1.904, 1.867, -1.401, -0.939, -0.508,
    -0.098, 0.098, 0.304, 0.519, 0.742, 1.205, 1.629, 1.904, 1.868, -1.403,
    -0.94, -0.508, -0.098, 0.098, 0.304, 0.519, 0.742, 1.205, 1.63, 1.904, 1.868,
    -1.4, -0.939, -0.507, -0.098, 0.098, 0.304, 0.519, 0.742, 1.205, 1.629,
    1.904, 1.867, -1.401, -0.939, -0.508, -0.098, 0.098, 0.304, 0.519, 0.742,
    1.205, 1.629, 1.904, 1.868, -1.403, -0.94, -0.508, -0.098, 0.098, 0.304,
    0.519, 0.742, 1.205, 1.63, 1.904, 1.868 },
  -1.0,

  { -1.0, -1.0, -1.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { -0.041, -0.015, -0.003, 0.409, -0.713, -0.327, -0.254, -0.225, -0.207,
    -0.218, -0.252, -0.252, -0.042, -0.016, -0.005, 0.417, -0.719, -0.329,
    -0.255, -0.226, -0.208, -0.218, -0.252, -0.252, -0.043, -0.016, -0.006, 0.42,
    -0.721, -0.33, -0.256, -0.227, -0.208, -0.218, -0.253, -0.253, -0.041,
    -0.015, -0.003, 0.409, -0.713, -0.327, -0.254, -0.225, -0.207, -0.218,
    -0.252, -0.252, -0.042, -0.016, -0.005, 0.417, -0.719, -0.329, -0.255,
    -0.226, -0.208, -0.218, -0.252, -0.252, -0.043, -0.016, -0.006, 0.42, -0.721,
    -0.33, -0.256, -0.227, -0.208, -0.218, -0.253, -0.253, -0.041, -0.015,
    -0.003, 0.409, -0.713, -0.327, -0.254, -0.225, -0.207, -0.218, -0.252,
    -0.252, -0.042, -0.016, -0.005, 0.417, -0.719, -0.329, -0.255, -0.226,
    -0.208, -0.218, -0.252, -0.252, -0.043, -0.016, -0.006, 0.42, -0.721, -0.33,
    -0.256, -0.227, -0.208, -0.218, -0.253, -0.253 },
  0.3,
  0.0,
  0.0,
  0.0,

  { 0.0, 0.0, 0.0 },

  { 0.001061, 0.0005229, 1.036E-6, -0.0004811, -0.0007087, -0.0009486, -0.001201,
    -0.001463, -0.00201, -0.002506, -0.002804, -0.002691, 0.00106, 0.0005219,
    1.772E-7, -0.0004819, -0.0007094, -0.0009492, -0.001201, -0.001464,
    -0.002011, -0.002507, -0.002805, -0.002694, 0.00106, 0.0005217, -2.813E-7,
    -0.0004826, -0.0007103, -0.0009502, -0.001202, -0.001465, -0.002012,
    -0.002508, -0.002806, -0.002694, 0.001061, 0.0005229, 1.035E-6, -0.0004811,
    -0.0007087, -0.0009486, -0.001201, -0.001463, -0.00201, -0.002506, -0.002804,
    -0.002691, 0.00106, 0.0005219, 1.769E-7, -0.0004819, -0.0007094, -0.0009492,
    -0.001201, -0.001464, -0.002011, -0.002507, -0.002805, -0.002694, 0.00106,
    0.0005217, -2.817E-7, -0.0004826, -0.0007103, -0.0009502, -0.001202,
    -0.001465, -0.002012, -0.002508, -0.002806, -0.002694, 0.001061, 0.0005229,
    1.035E-6, -0.0004811, -0.0007087, -0.0009486, -0.001201, -0.001463, -0.00201,
    -0.002506, -0.002804, -0.002691, 0.00106, 0.0005219, 1.764E-7, -0.0004819,
    -0.0007094, -0.0009492, -0.001201, -0.001464, -0.002011, -0.002507,
    -0.002805, -0.002694, 0.00106, 0.0005217, -2.821E-7, -0.0004826, -0.0007103,
    -0.0009502, -0.001202, -0.001465, -0.002012, -0.002508, -0.002806, -0.002694
  },

  { 0.056, 0.0136, 0.0017, -0.0409, -0.0691, -0.0995, -0.1323, -0.1678, -0.2501,
    -0.3532, -0.4743, -0.4743, 0.0577, 0.0146, 0.0027, -0.0415, -0.0697, -0.1001,
    -0.1328, -0.1683, -0.2505, -0.3534, -0.474, -0.474, 0.0589, 0.0153, 0.0033,
    -0.0418, -0.07, -0.1004, -0.1331, -0.1686, -0.2508, -0.3537, -0.4742,
    -0.4742, 0.0559, 0.0136, 0.0017, -0.0409, -0.0691, -0.0995, -0.1323, -0.1678,
    -0.25, -0.3532, -0.4743, -0.4743, 0.0577, 0.0146, 0.0027, -0.0415, -0.0697,
    -0.1001, -0.1328, -0.1683, -0.2505, -0.3534, -0.474, -0.474, 0.0588, 0.0153,
    0.0033, -0.0418, -0.07, -0.1004, -0.1331, -0.1686, -0.2508, -0.3537, -0.4742,
    -0.4742, 0.0559, 0.0136, 0.0017, -0.0409, -0.0691, -0.0995, -0.1323, -0.1677,
    -0.25, -0.3532, -0.4743, -0.4743, 0.0577, 0.0146, 0.0027, -0.0415, -0.0697,
    -0.1001, -0.1328, -0.1683, -0.2505, -0.3534, -0.474, -0.474, 0.0588, 0.0153,
    0.0033, -0.0418, -0.07, -0.1004, -0.1331, -0.1686, -0.2508, -0.3537, -0.4742,
    -0.4742 },

  { 0.001603, 0.001603, 0.001603, 0.001603, 0.001603, 0.001603, 0.001603,
    0.001603, 0.001603, 0.001603, 0.001603, 0.001603, 0.001787, 0.001787,
    0.001787, 0.001787, 0.001787, 0.001787, 0.001787, 0.001787, 0.001787,
    0.001787, 0.001787, 0.001787, 0.001895, 0.001895, 0.001895, 0.001895,
    0.001895, 0.001895, 0.001895, 0.001895, 0.001895, 0.001895, 0.001895,
    0.001895, 0.001602, 0.001602, 0.001602, 0.001602, 0.001602, 0.001602,
    0.001602, 0.001602, 0.001602, 0.001602, 0.001602, 0.001602, 0.001786,
    0.001786, 0.001786, 0.001786, 0.001786, 0.001786, 0.001786, 0.001786,
    0.001786, 0.001786, 0.001786, 0.001786, 0.001894, 0.001894, 0.001894,
    0.001894, 0.001894, 0.001894, 0.001894, 0.001894, 0.001894, 0.001894,
    0.001894, 0.001894, 0.0016, 0.0016, 0.0016, 0.0016, 0.0016, 0.0016, 0.0016,
    0.0016, 0.0016, 0.0016, 0.0016, 0.0016, 0.001785, 0.001785, 0.001785,
    0.001785, 0.001785, 0.001785, 0.001785, 0.001785, 0.001785, 0.001785,
    0.001785, 0.001785, 0.001893, 0.001893, 0.001893, 0.001893, 0.001893,
    0.001893, 0.001893, 0.001893, 0.001893, 0.001893, 0.001893, 0.001893 },
  -1.0,

  { 1U, 9U, 27U },

  { 1U, 12U, 108U, 324U },

  { 1U, 12U, 36U, 108U },

  { 1U, 7U, 21U },

  { 1U, 7U, 21U },

  { 1U, 5U, 15U },

  { 1U, 12U, 36U },

  { 1U, 12U, 36U },

  { 1U, 12U, 36U },

  { 1U, 12U, 36U },

  { 1U, 12U, 36U },

  { 1U, 12U, 36U }
};