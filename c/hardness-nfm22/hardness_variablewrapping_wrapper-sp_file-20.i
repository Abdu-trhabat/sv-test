// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 unsigned char var_1_2;
 float var_1_3;
 float var_1_4;
 float var_1_5;
 float var_1_6;
 double var_1_7;
 double var_1_8;
 unsigned long int var_1_9;
 unsigned char var_1_10;
 unsigned long int var_1_11;
 unsigned long int var_1_12;
 unsigned long int var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0.6,
 0,
 0.0,
 2.95,
 8.5,
 999999999999.4,
 10.2,
 4.6,
 256,
 0,
 3724367395,
 25,
 1,
 1,
 128,
 100
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))) - (*(WrapperStruct00_var_1_5_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer)));
 }
 (*(WrapperStruct00_var_1_7_Pointer)) = ((15.5 + (*(WrapperStruct00_var_1_4_Pointer))) - ((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))));
 unsigned long int stepLocal_2 = (*(WrapperStruct00_var_1_13_Pointer));
 signed long int stepLocal_1 = 5;
 if (stepLocal_1 >= (*(WrapperStruct00_var_1_11_Pointer))) {
  if ((*(WrapperStruct00_var_1_1_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) {
   (*(WrapperStruct00_var_1_14_Pointer)) = (128 - 16);
  } else {
   if (stepLocal_2 >= (((((*(WrapperStruct00_var_1_12_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) {
    (*(WrapperStruct00_var_1_14_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer)));
   } else {
    (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
   }
  }
 }
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if ((*(WrapperStruct00_var_1_10_Pointer)) || stepLocal_0) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) - (*(WrapperStruct00_var_1_14_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) + (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 4611686.018427382800e+12F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 3221225470);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1073741823);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 254);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 127);
}
void updateLastVariables() {
}
int property() {
 return ((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))) - (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer)))))) && ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) ((15.5 + (*(WrapperStruct00_var_1_4_Pointer))) - ((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))))))) && (((*(WrapperStruct00_var_1_10_Pointer)) || (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) (((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) - (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_14_Pointer)) + (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))))) && ((5 >= (*(WrapperStruct00_var_1_11_Pointer))) ? (((*(WrapperStruct00_var_1_1_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (128 - 16))) : (((*(WrapperStruct00_var_1_13_Pointer)) >= (((((*(WrapperStruct00_var_1_12_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)))))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_16_Pointer)))))) : 1)
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
