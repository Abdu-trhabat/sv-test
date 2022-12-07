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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_2 = -128;
unsigned char var_1_3 = 1;
signed char var_1_4 = -5;
unsigned char var_1_5 = 16;
unsigned char var_1_9 = 25;
float var_1_10 = 2.5;
signed char var_1_11 = 1;
signed char var_1_12 = 4;
float var_1_13 = 7.75;
float var_1_14 = 64.75;
float var_1_15 = 256.52;
float var_1_16 = 3.25;
void initially(void) {
}
void step(void) {
 var_1_1 = (16 - 2);
 if (var_1_3) {
  var_1_2 = ((((-4) < 0 ) ? -(-4) : (-4)));
 } else {
  var_1_2 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 if (var_1_4 < ((16 + var_1_11) - var_1_12)) {
  if (var_1_3) {
   var_1_10 = ((var_1_13 + 50.6f) + var_1_14);
  } else {
   var_1_10 = (var_1_15 - var_1_16);
  }
 } else {
  var_1_10 = var_1_14;
 }
 if ((var_1_10 * var_1_10) > var_1_10) {
  var_1_5 = (((((25) < (5)) ? (25) : (5))) + 10);
 } else {
  var_1_5 = var_1_9;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -126);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -230584.3009213691390e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((var_1_1 == ((signed char) (16 - 2))) && (var_1_3 ? (var_1_2 == ((signed char) ((((-4) < 0 ) ? -(-4) : (-4))))) : (var_1_2 == ((signed char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) && (((var_1_10 * var_1_10) > var_1_10) ? (var_1_5 == ((unsigned char) (((((25) < (5)) ? (25) : (5))) + 10))) : (var_1_5 == ((unsigned char) var_1_9)))) && ((var_1_4 < ((16 + var_1_11) - var_1_12)) ? (var_1_3 ? (var_1_10 == ((float) ((var_1_13 + 50.6f) + var_1_14))) : (var_1_10 == ((float) (var_1_15 - var_1_16)))) : (var_1_10 == ((float) var_1_14)))
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
