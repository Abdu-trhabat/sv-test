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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
 unsigned char var_1_18;
 signed char var_1_19;
 float var_1_20;
 float var_1_21;
 unsigned short int var_1_22;
 double var_1_23;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 0,
 0,
 0,
 8,
 128,
 64,
 100,
 5,
 100,
 32,
 64,
 50,
 8,
 0,
 0,
 255.5,
 255.5,
 64,
 32.5
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
float* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
float* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
unsigned short int* WrapperStruct00_var_1_22_Pointer = &(WrapperStruct00.var_1_22);
double* WrapperStruct00_var_1_23_Pointer = &(WrapperStruct00.var_1_23);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_6_Pointer))) {
  (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) + (((((*(WrapperStruct00_var_1_12_Pointer))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer))))));
 } else {
  (*(WrapperStruct00_var_1_11_Pointer)) = (((64 + (*(WrapperStruct00_var_1_14_Pointer))) + ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))) - ((*(WrapperStruct00_var_1_17_Pointer)) + (*(WrapperStruct00_var_1_18_Pointer))));
 }
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_4_Pointer));
 if ((*(WrapperStruct00_var_1_5_Pointer)) || stepLocal_0) {
  (*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 }
 (*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_21_Pointer));
 (*(WrapperStruct00_var_1_22_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
 (*(WrapperStruct00_var_1_23_Pointer)) = 0.010000000000000009;
 if ((*(WrapperStruct00_var_1_20_Pointer)) < (*(WrapperStruct00_var_1_20_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer)));
 } else {
  if ((*(WrapperStruct00_var_1_20_Pointer)) >= (*(WrapperStruct00_var_1_20_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 if ((*(WrapperStruct00_var_1_23_Pointer)) < (((((*(WrapperStruct00_var_1_20_Pointer))) > ((*(WrapperStruct00_var_1_20_Pointer)))) ? ((*(WrapperStruct00_var_1_20_Pointer))) : ((*(WrapperStruct00_var_1_20_Pointer)))))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)));
 }
}
void updateVariables() {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 127);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 32);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 32);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 64);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 32);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 64);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 63);
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_21 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((((((*(WrapperStruct00_var_1_20_Pointer)) < (*(WrapperStruct00_var_1_20_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))))) : (((*(WrapperStruct00_var_1_20_Pointer)) >= (*(WrapperStruct00_var_1_20_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer)))))) && (((*(WrapperStruct00_var_1_23_Pointer)) < (((((*(WrapperStruct00_var_1_20_Pointer))) > ((*(WrapperStruct00_var_1_20_Pointer)))) ? ((*(WrapperStruct00_var_1_20_Pointer))) : ((*(WrapperStruct00_var_1_20_Pointer)))))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_10_Pointer)) + (((((*(WrapperStruct00_var_1_12_Pointer))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (((64 + (*(WrapperStruct00_var_1_14_Pointer))) + ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))) - ((*(WrapperStruct00_var_1_17_Pointer)) + (*(WrapperStruct00_var_1_18_Pointer)))))))) && (((*(WrapperStruct00_var_1_5_Pointer)) || ((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_19_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_15_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((float) (*(WrapperStruct00_var_1_21_Pointer))))) && ((*(WrapperStruct00_var_1_22_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_18_Pointer))))) && ((*(WrapperStruct00_var_1_23_Pointer)) == ((double) 0.010000000000000009))
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
