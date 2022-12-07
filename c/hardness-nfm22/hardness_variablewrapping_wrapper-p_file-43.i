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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
signed short int* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 4.5;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 64.8;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 64.4;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 0.2;
float* var_1_5_Pointer = &(var_1_5);
signed short int var_1_7 = 10000;
signed short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 1;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 50;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 8;
signed short int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_13 = 2;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 100;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 128;
unsigned short int* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 23647;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 32;
unsigned short int* var_1_17_Pointer = &(var_1_17);
signed char var_1_18 = 0;
signed char* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = -50;
signed char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 0;
unsigned char* var_1_20_Pointer = &(var_1_20);
unsigned char var_1_21 = 0;
unsigned char* var_1_21_Pointer = &(var_1_21);
void initially(void) {
}
void step(void) {
 (*(var_1_18_Pointer)) = (*(var_1_19_Pointer));
 (*(var_1_20_Pointer)) = (*(var_1_21_Pointer));
 signed char stepLocal_1 = (*(var_1_18_Pointer));
 signed long int stepLocal_0 = (*(var_1_9_Pointer)) / (*(var_1_7_Pointer));
 if (stepLocal_1 > ((*(var_1_8_Pointer)) << (*(var_1_10_Pointer)))) {
  if (stepLocal_0 > -25) {
   (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
  } else {
   (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
  }
 }
 signed long int stepLocal_2 = (*(var_1_7_Pointer)) ^ (*(var_1_18_Pointer));
 if ((*(var_1_14_Pointer)) >= stepLocal_2) {
  (*(var_1_15_Pointer)) = ((*(var_1_14_Pointer)) + ((*(var_1_16_Pointer)) - (*(var_1_13_Pointer))));
 }
 if ((*(var_1_2_Pointer)) != (((((*(var_1_3_Pointer))) > (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))) ? ((*(var_1_3_Pointer))) : (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))))) {
  if ((*(var_1_20_Pointer))) {
   (*(var_1_1_Pointer)) = ((((*(var_1_7_Pointer)) - 32) + ((*(var_1_13_Pointer)) + (*(var_1_13_Pointer)))) - (*(var_1_13_Pointer)));
  }
 } else {
  if ((*(var_1_20_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_18_Pointer));
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_13_Pointer));
  }
 }
 (*(var_1_17_Pointer)) = (*(var_1_1_Pointer));
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 8192);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 8191);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
}
void updateLastVariables() {
}
int property() {
 return (((((((*(var_1_2_Pointer)) != (((((*(var_1_3_Pointer))) > (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))) ? ((*(var_1_3_Pointer))) : (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))))) ? ((*(var_1_20_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) ((((*(var_1_7_Pointer)) - 32) + ((*(var_1_13_Pointer)) + (*(var_1_13_Pointer)))) - (*(var_1_13_Pointer))))) : 1) : ((*(var_1_20_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_18_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_13_Pointer)))))) && (((*(var_1_18_Pointer)) > ((*(var_1_8_Pointer)) << (*(var_1_10_Pointer)))) ? ((((*(var_1_9_Pointer)) / (*(var_1_7_Pointer))) > -25) ? ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_14_Pointer)))) : ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_14_Pointer))))) : 1)) && (((*(var_1_14_Pointer)) >= ((*(var_1_7_Pointer)) ^ (*(var_1_18_Pointer)))) ? ((*(var_1_15_Pointer)) == ((unsigned short int) ((*(var_1_14_Pointer)) + ((*(var_1_16_Pointer)) - (*(var_1_13_Pointer)))))) : 1)) && ((*(var_1_17_Pointer)) == ((unsigned short int) (*(var_1_1_Pointer))))) && ((*(var_1_18_Pointer)) == ((signed char) (*(var_1_19_Pointer))))) && ((*(var_1_20_Pointer)) == ((unsigned char) (*(var_1_21_Pointer))))
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
