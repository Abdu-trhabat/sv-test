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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
unsigned char var_1_4 = 25;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 10;
float var_1_9 = 9.6;
float var_1_10 = 99.08;
float var_1_11 = 63.4;
float var_1_12 = 32.125;
signed long int var_1_13 = -8;
signed short int var_1_14 = -2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_4;
 if (var_1_5 > stepLocal_1) {
  var_1_8 = (128 - ((((10) > (var_1_5)) ? (10) : (var_1_5))));
 }
 var_1_13 = var_1_7;
 var_1_14 = var_1_7;
 signed short int stepLocal_0 = var_1_14;
 if (var_1_14 != stepLocal_0) {
  var_1_1 = (var_1_4 + ((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7))));
 } else {
  var_1_1 = ((((((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) < (var_1_7)) ? (((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) : (var_1_7)));
 }
 signed long int stepLocal_3 = var_1_13;
 unsigned char stepLocal_2 = var_1_1;
 if ((var_1_10 * var_1_11) > 16.75f) {
  if (var_1_7 <= stepLocal_2) {
   if (-8 > stepLocal_3) {
    var_1_9 = var_1_12;
   }
  } else {
   var_1_9 = var_1_12;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((var_1_14 != var_1_14) ? (var_1_1 == ((unsigned char) (var_1_4 + ((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7)))))) : (var_1_1 == ((unsigned char) ((((((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) < (var_1_7)) ? (((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) : (var_1_7)))))) && ((var_1_5 > var_1_4) ? (var_1_8 == ((unsigned char) (128 - ((((10) > (var_1_5)) ? (10) : (var_1_5)))))) : 1)) && (((var_1_10 * var_1_11) > 16.75f) ? ((var_1_7 <= var_1_1) ? ((-8 > var_1_13) ? (var_1_9 == ((float) var_1_12)) : 1) : (var_1_9 == ((float) var_1_12))) : 1)) && (var_1_13 == ((signed long int) var_1_7))) && (var_1_14 == ((signed short int) var_1_7))
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
