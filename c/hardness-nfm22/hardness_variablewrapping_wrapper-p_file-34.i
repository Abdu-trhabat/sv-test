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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 16.6;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 10.6;
double* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 10;
signed char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 100;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 64;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 100;
unsigned char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -4;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 32;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 4;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 64;
signed char* var_1_17_Pointer = &(var_1_17);
unsigned char last_1_var_1_5 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_5) {
  if (last_1_var_1_5) {
   (*(var_1_1_Pointer)) = (((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))));
  }
 }
 if ((*(var_1_1_Pointer)) >= (- ((*(var_1_4_Pointer)) * (*(var_1_1_Pointer))))) {
  (*(var_1_17_Pointer)) = (*(var_1_15_Pointer));
 }
 if ((*(var_1_3_Pointer)) || (256 >= ((*(var_1_17_Pointer)) + 4))) {
  (*(var_1_5_Pointer)) = (((*(var_1_2_Pointer)) || (*(var_1_3_Pointer))) || (*(var_1_7_Pointer)));
 } else {
  (*(var_1_5_Pointer)) = (! (! ((*(var_1_8_Pointer)) || (*(var_1_9_Pointer)))));
 }
 signed long int stepLocal_1 = ((*(var_1_11_Pointer)) + (*(var_1_12_Pointer))) - (((((*(var_1_13_Pointer))) < (1)) ? ((*(var_1_13_Pointer))) : (1)));
 signed char stepLocal_0 = (*(var_1_17_Pointer));
 if (-10 >= stepLocal_0) {
  if (stepLocal_1 > (~ (*(var_1_17_Pointer)))) {
   (*(var_1_10_Pointer)) = ((*(var_1_14_Pointer)) + (*(var_1_15_Pointer)));
  } else {
   (*(var_1_10_Pointer)) = (*(var_1_16_Pointer));
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 128);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 64);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
}
void updateLastVariables() {
 last_1_var_1_5 = var_1_5;
}
int property() {
 return (((last_1_var_1_5 ? (last_1_var_1_5 ? ((*(var_1_1_Pointer)) == ((double) (((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer))))))) : 1) : 1) && (((*(var_1_3_Pointer)) || (256 >= ((*(var_1_17_Pointer)) + 4))) ? ((*(var_1_5_Pointer)) == ((unsigned char) (((*(var_1_2_Pointer)) || (*(var_1_3_Pointer))) || (*(var_1_7_Pointer))))) : ((*(var_1_5_Pointer)) == ((unsigned char) (! (! ((*(var_1_8_Pointer)) || (*(var_1_9_Pointer))))))))) && ((-10 >= (*(var_1_17_Pointer))) ? (((((*(var_1_11_Pointer)) + (*(var_1_12_Pointer))) - (((((*(var_1_13_Pointer))) < (1)) ? ((*(var_1_13_Pointer))) : (1)))) > (~ (*(var_1_17_Pointer)))) ? ((*(var_1_10_Pointer)) == ((signed char) ((*(var_1_14_Pointer)) + (*(var_1_15_Pointer))))) : ((*(var_1_10_Pointer)) == ((signed char) (*(var_1_16_Pointer))))) : 1)) && (((*(var_1_1_Pointer)) >= (- ((*(var_1_4_Pointer)) * (*(var_1_1_Pointer))))) ? ((*(var_1_17_Pointer)) == ((signed char) (*(var_1_15_Pointer)))) : 1)
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
