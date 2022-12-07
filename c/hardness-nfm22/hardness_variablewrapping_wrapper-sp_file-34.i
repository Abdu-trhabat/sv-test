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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 double var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 signed char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed char var_1_17;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 16.6,
 1,
 1,
 10.6,
 0,
 1,
 0,
 0,
 10,
 100,
 64,
 100,
 -4,
 32,
 4,
 64
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char last_1_WrapperStruct00_var_1_5 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_WrapperStruct00_var_1_5) {
  if (last_1_WrapperStruct00_var_1_5) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_4_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
  }
 }
 if ((*(WrapperStruct00_var_1_1_Pointer)) >= (- ((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_1_Pointer))))) {
  (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 }
 if ((*(WrapperStruct00_var_1_3_Pointer)) || (256 >= ((*(WrapperStruct00_var_1_17_Pointer)) + 4))) {
  (*(WrapperStruct00_var_1_5_Pointer)) = (((*(WrapperStruct00_var_1_2_Pointer)) || (*(WrapperStruct00_var_1_3_Pointer))) || (*(WrapperStruct00_var_1_7_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_5_Pointer)) = (! (! ((*(WrapperStruct00_var_1_8_Pointer)) || (*(WrapperStruct00_var_1_9_Pointer)))));
 }
 signed long int stepLocal_1 = ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_12_Pointer))) - (((((*(WrapperStruct00_var_1_13_Pointer))) < (1)) ? ((*(WrapperStruct00_var_1_13_Pointer))) : (1)));
 signed char stepLocal_0 = (*(WrapperStruct00_var_1_17_Pointer));
 if (-10 >= stepLocal_0) {
  if (stepLocal_1 > (~ (*(WrapperStruct00_var_1_17_Pointer)))) {
   (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 128);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 64);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 126);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
}
int property() {
 return (((last_1_WrapperStruct00_var_1_5 ? (last_1_WrapperStruct00_var_1_5 ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_4_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer))))))) : 1) : 1) && (((*(WrapperStruct00_var_1_3_Pointer)) || (256 >= ((*(WrapperStruct00_var_1_17_Pointer)) + 4))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_2_Pointer)) || (*(WrapperStruct00_var_1_3_Pointer))) || (*(WrapperStruct00_var_1_7_Pointer))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (! (! ((*(WrapperStruct00_var_1_8_Pointer)) || (*(WrapperStruct00_var_1_9_Pointer))))))))) && ((-10 >= (*(WrapperStruct00_var_1_17_Pointer))) ? (((((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_12_Pointer))) - (((((*(WrapperStruct00_var_1_13_Pointer))) < (1)) ? ((*(WrapperStruct00_var_1_13_Pointer))) : (1)))) > (~ (*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_16_Pointer))))) : 1)) && (((*(WrapperStruct00_var_1_1_Pointer)) >= (- ((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_1_Pointer))))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_15_Pointer)))) : 1)
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
