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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_3;
 signed short int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 double var_1_10;
 double var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 unsigned long int var_1_15;
 unsigned char var_1_16;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -4,
 32,
 -1,
 1,
 0,
 0,
 1,
 0,
 25.7,
 256.5,
 0.0,
 31.1,
 256.6,
 8,
 16
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
void initially(void) {
}
void step(void) {
 signed short int stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
 if (stepLocal_0 > (((*(WrapperStruct00_var_1_4_Pointer)) / -256) * 32)) {
  if ((*(WrapperStruct00_var_1_6_Pointer))) {
   (*(WrapperStruct00_var_1_5_Pointer)) = (! ((*(WrapperStruct00_var_1_7_Pointer)) && (*(WrapperStruct00_var_1_8_Pointer))));
  } else {
   (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
 if ((*(WrapperStruct00_var_1_7_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) - ((((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer))))));
 }
 if ((*(WrapperStruct00_var_1_10_Pointer)) < 63.75) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (10 - (*(WrapperStruct00_var_1_3_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (4 + (*(WrapperStruct00_var_1_4_Pointer)));
 }
 if (! ((*(WrapperStruct00_var_1_13_Pointer)) < (127.125 / (*(WrapperStruct00_var_1_12_Pointer))))) {
  if ((*(WrapperStruct00_var_1_1_Pointer)) <= (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer))) + (-2 << (*(WrapperStruct00_var_1_16_Pointer))))) {
   (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32766);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 4611686.018427382800e+12F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 30);
}
void updateLastVariables() {
}
int property() {
 return (((((*(WrapperStruct00_var_1_10_Pointer)) < 63.75) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (10 - (*(WrapperStruct00_var_1_3_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (4 + (*(WrapperStruct00_var_1_4_Pointer)))))) && (((*(WrapperStruct00_var_1_3_Pointer)) > (((*(WrapperStruct00_var_1_4_Pointer)) / -256) * 32)) ? ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (! ((*(WrapperStruct00_var_1_7_Pointer)) && (*(WrapperStruct00_var_1_8_Pointer)))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_8_Pointer))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_9_Pointer)))))) && ((*(WrapperStruct00_var_1_7_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((double) ((*(WrapperStruct00_var_1_11_Pointer)) - ((((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)))))))) : 1)) && ((! ((*(WrapperStruct00_var_1_13_Pointer)) < (127.125 / (*(WrapperStruct00_var_1_12_Pointer))))) ? (((*(WrapperStruct00_var_1_1_Pointer)) <= (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer))) + (-2 << (*(WrapperStruct00_var_1_16_Pointer))))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_3_Pointer)))) : 1) : 1)
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
