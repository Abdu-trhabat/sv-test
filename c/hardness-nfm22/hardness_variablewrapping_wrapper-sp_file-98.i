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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 double var_1_2;
 double var_1_3;
 double var_1_4;
 signed short int var_1_6;
 signed long int var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 unsigned long int var_1_12;
 unsigned long int var_1_13;
 unsigned long int var_1_14;
 unsigned long int var_1_15;
 unsigned long int var_1_16;
};
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 4.8,
 63.5,
 9999999.5,
 0.6,
 10,
 -1,
 4.4,
 7.25,
 7.5,
 2.3,
 128,
 0,
 4078799264,
 500,
 25
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned long int last_1_WrapperStruct00_var_1_15 = 500;
void initially(void) {
}
void step(void) {
 (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)));
 if (((((-128) < (last_1_WrapperStruct00_var_1_15)) ? (-128) : (last_1_WrapperStruct00_var_1_15))) < (*(WrapperStruct00_var_1_13_Pointer))) {
  if (last_1_WrapperStruct00_var_1_15 > (*(WrapperStruct00_var_1_7_Pointer))) {
   (*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
 }
 unsigned long int stepLocal_0 = ((*(WrapperStruct00_var_1_15_Pointer)) >> (*(WrapperStruct00_var_1_6_Pointer))) / (*(WrapperStruct00_var_1_7_Pointer));
 if (8 < stepLocal_0) {
  (*(WrapperStruct00_var_1_4_Pointer)) = ((((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))) + (((((*(WrapperStruct00_var_1_10_Pointer))) < (1.9)) ? ((*(WrapperStruct00_var_1_10_Pointer))) : (1.9)))) + (99.125 + (*(WrapperStruct00_var_1_11_Pointer))));
 }
 if ((*(WrapperStruct00_var_1_2_Pointer)) < (*(WrapperStruct00_var_1_8_Pointer))) {
  if (((- (*(WrapperStruct00_var_1_15_Pointer))) <= (*(WrapperStruct00_var_1_6_Pointer))) || ((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_10_Pointer)))) {
   (*(WrapperStruct00_var_1_12_Pointer)) = (((((*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)));
  }
 }
}
void updateVariables() {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -230584.3009213691390e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -230584.3009213691390e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 4294967294);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 4294967294);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483647);
}
void updateLastVariables() {
 last_1_WrapperStruct00_var_1_15 = WrapperStruct00.var_1_15;
}
int property() {
 return ((((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))))) && ((8 < (((*(WrapperStruct00_var_1_15_Pointer)) >> (*(WrapperStruct00_var_1_6_Pointer))) / (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer)) == ((double) ((((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))) + (((((*(WrapperStruct00_var_1_10_Pointer))) < (1.9)) ? ((*(WrapperStruct00_var_1_10_Pointer))) : (1.9)))) + (99.125 + (*(WrapperStruct00_var_1_11_Pointer)))))) : 1)) && (((*(WrapperStruct00_var_1_2_Pointer)) < (*(WrapperStruct00_var_1_8_Pointer))) ? ((((- (*(WrapperStruct00_var_1_15_Pointer))) <= (*(WrapperStruct00_var_1_6_Pointer))) || ((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (((((*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))))) : 1)) && ((((((-128) < (last_1_WrapperStruct00_var_1_15)) ? (-128) : (last_1_WrapperStruct00_var_1_15))) < (*(WrapperStruct00_var_1_13_Pointer))) ? ((last_1_WrapperStruct00_var_1_15 > (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_16_Pointer)))))
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
