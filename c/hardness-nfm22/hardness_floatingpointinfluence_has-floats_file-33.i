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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -10;
signed short int var_1_5 = 4;
unsigned char var_1_7 = 200;
unsigned char var_1_8 = 32;
float var_1_9 = 256.5;
float var_1_10 = -0.25;
float var_1_11 = 0.30000000000000004;
float var_1_12 = 49.5;
signed long int var_1_13 = -8;
unsigned char var_1_14 = 0;
float var_1_15 = 0.4;
signed long int var_1_16 = -256;
signed long int last_1_var_1_13 = -8;
void initially(void) {
}
void step(void) {
 if (var_1_5 < last_1_var_1_13) {
  var_1_7 = (var_1_8 + 1);
 }
 var_1_16 = var_1_7;
 unsigned char stepLocal_1 = var_1_7;
 if (! var_1_14) {
  var_1_13 = var_1_8;
 } else {
  if (stepLocal_1 > (var_1_7 + var_1_7)) {
   var_1_13 = var_1_7;
  } else {
   var_1_13 = var_1_16;
  }
 }
 var_1_15 = var_1_11;
 signed long int stepLocal_0 = (var_1_13 ^ var_1_7) + var_1_16;
 if (stepLocal_0 < -1) {
  var_1_1 = 8;
 } else {
  var_1_1 = (128 - (var_1_7 + var_1_7));
 }
 if (var_1_7 < (var_1_13 & (var_1_7 | var_1_16))) {
  var_1_9 = ((((var_1_10 + (var_1_11 - var_1_12)) < 0 ) ? -(var_1_10 + (var_1_11 - var_1_12)) : (var_1_10 + (var_1_11 - var_1_12))));
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
}
int property() {
 return ((((((((var_1_13 ^ var_1_7) + var_1_16) < -1) ? (var_1_1 == ((signed short int) 8)) : (var_1_1 == ((signed short int) (128 - (var_1_7 + var_1_7))))) && ((var_1_5 < last_1_var_1_13) ? (var_1_7 == ((unsigned char) (var_1_8 + 1))) : 1)) && ((var_1_7 < (var_1_13 & (var_1_7 | var_1_16))) ? (var_1_9 == ((float) ((((var_1_10 + (var_1_11 - var_1_12)) < 0 ) ? -(var_1_10 + (var_1_11 - var_1_12)) : (var_1_10 + (var_1_11 - var_1_12)))))) : 1)) && ((! var_1_14) ? (var_1_13 == ((signed long int) var_1_8)) : ((var_1_7 > (var_1_7 + var_1_7)) ? (var_1_13 == ((signed long int) var_1_7)) : (var_1_13 == ((signed long int) var_1_16))))) && (var_1_15 == ((float) var_1_11))) && (var_1_16 == ((signed long int) var_1_7))
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
