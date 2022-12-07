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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 4.8;
unsigned long int var_1_2 = 2;
unsigned long int var_1_3 = 5;
float var_1_4 = 255.1;
float var_1_5 = -0.6;
signed short int var_1_6 = -10;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed char var_1_11 = -2;
signed char var_1_12 = 10;
signed char var_1_13 = 5;
float var_1_14 = 499.375;
float var_1_15 = 0.0;
float var_1_16 = 63.2;
float var_1_17 = 0.0;
float var_1_18 = 15.75;
float var_1_19 = 5.75;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_2;
 if (stepLocal_0 >= (~ var_1_3)) {
  var_1_1 = (var_1_4 + var_1_5);
 }
 var_1_11 = (-32 + (var_1_12 + ((((10) < (var_1_13)) ? (10) : (var_1_13)))));
 signed char stepLocal_1 = var_1_12;
 if (stepLocal_1 != var_1_3) {
  if (var_1_7) {
   var_1_14 = ((var_1_15 - var_1_16) - (var_1_17 - var_1_18));
  }
 } else {
  var_1_14 = var_1_18;
 }
 var_1_19 = var_1_5;
 if (var_1_7) {
  if (var_1_8) {
   var_1_6 = (var_1_11 + var_1_11);
  } else {
   var_1_6 = (var_1_11 + var_1_11);
  }
 } else {
  var_1_6 = var_1_11;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -31);
 assume_abort_if_not(var_1_12 <= 32);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -31);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 4611686.018427382800e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((var_1_2 >= (~ var_1_3)) ? (var_1_1 == ((float) (var_1_4 + var_1_5))) : 1) && (var_1_7 ? (var_1_8 ? (var_1_6 == ((signed short int) (var_1_11 + var_1_11))) : (var_1_6 == ((signed short int) (var_1_11 + var_1_11)))) : (var_1_6 == ((signed short int) var_1_11)))) && (var_1_11 == ((signed char) (-32 + (var_1_12 + ((((10) < (var_1_13)) ? (10) : (var_1_13)))))))) && ((var_1_12 != var_1_3) ? (var_1_7 ? (var_1_14 == ((float) ((var_1_15 - var_1_16) - (var_1_17 - var_1_18)))) : 1) : (var_1_14 == ((float) var_1_18)))) && (var_1_19 == ((float) var_1_5))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
