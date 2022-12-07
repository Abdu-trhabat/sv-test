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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 64;
float var_1_12 = 2.4;
float var_1_13 = 127.75;
float var_1_14 = 0.0;
float var_1_15 = 31.4;
float var_1_16 = 256.75;
float var_1_17 = 256.6;
signed long int var_1_18 = 0;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 100;
void initially(void) {
}
void step(void) {
 var_1_17 = var_1_14;
 var_1_19 = var_1_20;
 var_1_18 = var_1_19;
 unsigned char stepLocal_1 = var_1_19;
 signed long int stepLocal_0 = (var_1_18 * var_1_18) * (var_1_19 - var_1_19);
 if (stepLocal_0 >= 1u) {
  if (var_1_18 <= stepLocal_1) {
   var_1_8 = var_1_19;
  } else {
   var_1_8 = var_1_19;
  }
 } else {
  var_1_8 = var_1_19;
 }
 signed long int stepLocal_2 = var_1_8;
 if (var_1_19 > stepLocal_2) {
  var_1_12 = (var_1_13 + ((var_1_14 - var_1_15) - var_1_16));
 } else {
  var_1_12 = (var_1_16 - (var_1_14 + var_1_15));
 }
 if (var_1_18 >= (8u * var_1_8)) {
  var_1_1 = (! (var_1_4 || (var_1_5 || var_1_6)));
 } else {
  var_1_1 = var_1_7;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 2305843.009213691390e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
}
void updateLastVariables() {
}
int property() {
 return ((((((var_1_18 >= (8u * var_1_8)) ? (var_1_1 == ((unsigned char) (! (var_1_4 || (var_1_5 || var_1_6))))) : (var_1_1 == ((unsigned char) var_1_7))) && ((((var_1_18 * var_1_18) * (var_1_19 - var_1_19)) >= 1u) ? ((var_1_18 <= var_1_19) ? (var_1_8 == ((signed long int) var_1_19)) : (var_1_8 == ((signed long int) var_1_19))) : (var_1_8 == ((signed long int) var_1_19)))) && ((var_1_19 > var_1_8) ? (var_1_12 == ((float) (var_1_13 + ((var_1_14 - var_1_15) - var_1_16)))) : (var_1_12 == ((float) (var_1_16 - (var_1_14 + var_1_15)))))) && (var_1_17 == ((float) var_1_14))) && (var_1_18 == ((signed long int) var_1_19))) && (var_1_19 == ((unsigned char) var_1_20))
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
