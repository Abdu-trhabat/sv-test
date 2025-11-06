// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 double var_1_2;
 double var_1_3;
 double var_1_4;
 signed char var_1_5;
 signed short int var_1_6;
 unsigned long int var_1_7;
 unsigned long int var_1_8;
 unsigned long int var_1_9;
 signed short int var_1_10;
 signed short int var_1_11;
 signed short int var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed char var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 3.25,
 10.5,
 1000.75,
 -1,
 256,
 5,
 10000,
 64,
 32,
 32,
 2,
 2,
 10,
 64,
 50,
 32
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) > ((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 } else {
  if ((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = 10;
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  }
 }
 unsigned long int stepLocal_0 = ~ (- (*(WrapperStruct00_var_1_9_Pointer)));
 if (! ((*(WrapperStruct00_var_1_5_Pointer)) >= (*(WrapperStruct00_var_1_1_Pointer)))) {
  if ((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) >= stepLocal_0) {
   (*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_1_Pointer)) + ((*(WrapperStruct00_var_1_10_Pointer)) + -2));
  } else {
   (*(WrapperStruct00_var_1_6_Pointer)) = (((((((((-8) < 0 ) ? -(-8) : (-8)))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? (((((-8) < 0 ) ? -(-8) : (-8)))) : ((*(WrapperStruct00_var_1_11_Pointer))))) - (*(WrapperStruct00_var_1_12_Pointer)));
  }
 }
 (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 if ((*(WrapperStruct00_var_1_7_Pointer)) <= (*(WrapperStruct00_var_1_9_Pointer))) {
  if ((*(WrapperStruct00_var_1_6_Pointer)) > (((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))) - (*(WrapperStruct00_var_1_17_Pointer)))) {
   (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  } else {
   (*(WrapperStruct00_var_1_14_Pointer)) = -100;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 4294967295);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 4294967295);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 4294967295);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -8191);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 8192);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32766);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32766);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 64);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) > ((*(WrapperStruct00_var_1_3_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_5_Pointer)))) : (((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) 10)) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_5_Pointer)))))) && ((! ((*(WrapperStruct00_var_1_5_Pointer)) >= (*(WrapperStruct00_var_1_1_Pointer)))) ? (((((((*(WrapperStruct00_var_1_7_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_8_Pointer))))) >= (~ (- (*(WrapperStruct00_var_1_9_Pointer))))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_1_Pointer)) + ((*(WrapperStruct00_var_1_10_Pointer)) + -2)))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) (((((((((-8) < 0 ) ? -(-8) : (-8)))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? (((((-8) < 0 ) ? -(-8) : (-8)))) : ((*(WrapperStruct00_var_1_11_Pointer))))) - (*(WrapperStruct00_var_1_12_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_5_Pointer))))) && (((*(WrapperStruct00_var_1_7_Pointer)) <= (*(WrapperStruct00_var_1_9_Pointer))) ? (((*(WrapperStruct00_var_1_6_Pointer)) > (((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))) - (*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed char) -100))) : 1)
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
