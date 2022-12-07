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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch18Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 signed short int var_1_7;
 signed short int var_1_8;
 float var_1_9;
 float var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned long int var_1_14;
 unsigned char var_1_15;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 99.25,
 18477,
 5,
 5.8,
 0.5,
 16,
 50,
 1,
 256,
 0
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char last_1_WrapperStruct00_var_1_11 = 16;
unsigned long int last_1_WrapperStruct00_var_1_14 = 256;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_3 = (*(WrapperStruct00_var_1_8_Pointer));
 unsigned long int stepLocal_2 = last_1_WrapperStruct00_var_1_14;
 if (last_1_WrapperStruct00_var_1_14 > stepLocal_3) {
  if (((last_1_WrapperStruct00_var_1_11 - (*(WrapperStruct00_var_1_8_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer))) > stepLocal_2) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (((((*(WrapperStruct00_var_1_12_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
  }
 }
 if (((*(WrapperStruct00_var_1_11_Pointer)) & (*(WrapperStruct00_var_1_7_Pointer))) > (((*(WrapperStruct00_var_1_12_Pointer)) * last_1_WrapperStruct00_var_1_14) * ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))))) {
  if ((*(WrapperStruct00_var_1_15_Pointer)) && ((*(WrapperStruct00_var_1_9_Pointer)) > (*(WrapperStruct00_var_1_10_Pointer)))) {
   (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
 }
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_11_Pointer));
 unsigned long int stepLocal_0 = (*(WrapperStruct00_var_1_11_Pointer)) ^ (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))));
 if (stepLocal_0 != (*(WrapperStruct00_var_1_11_Pointer))) {
  if (stepLocal_1 == ((*(WrapperStruct00_var_1_11_Pointer)) - ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_9_Pointer))) < ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))));
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = 10.5f;
 }
}
void updateVariables() {
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 16383);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 254);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
 last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}
int property() {
 return (((((*(WrapperStruct00_var_1_11_Pointer)) ^ (((((*(WrapperStruct00_var_1_11_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))) != (*(WrapperStruct00_var_1_11_Pointer))) ? (((*(WrapperStruct00_var_1_11_Pointer)) == ((*(WrapperStruct00_var_1_11_Pointer)) - ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_9_Pointer))) < ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) 10.5f))) && ((last_1_WrapperStruct00_var_1_14 > (*(WrapperStruct00_var_1_8_Pointer))) ? ((((last_1_WrapperStruct00_var_1_11 - (*(WrapperStruct00_var_1_8_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer))) > last_1_WrapperStruct00_var_1_14) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_12_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer))))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer))))) : 1)) && ((((*(WrapperStruct00_var_1_11_Pointer)) & (*(WrapperStruct00_var_1_7_Pointer))) > (((*(WrapperStruct00_var_1_12_Pointer)) * last_1_WrapperStruct00_var_1_14) * ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))))) ? (((*(WrapperStruct00_var_1_15_Pointer)) && ((*(WrapperStruct00_var_1_9_Pointer)) > (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_7_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_7_Pointer)))))
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
