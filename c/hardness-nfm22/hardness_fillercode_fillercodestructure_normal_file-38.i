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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 4;
signed long int var_1_11 = 100;
signed long int var_1_12 = 8;
unsigned short int var_1_13 = 128;
double var_1_14 = 64.5;
signed short int var_1_15 = 4;
signed long int var_1_16 = -8;
double var_1_17 = 255.5;
double var_1_18 = 0.6;
double var_1_19 = 1000000000000.5;
double var_1_20 = 999999.25;
signed short int var_1_21 = -64;
signed char var_1_25 = -128;
signed char var_1_26 = -8;
unsigned short int last_1_var_1_8 = 4;
signed short int last_1_var_1_21 = -64;
signed char last_1_var_1_25 = -128;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_8 + 4u) <= (last_1_var_1_8 >> var_1_15)) {
  var_1_21 = (((((last_1_var_1_25 + last_1_var_1_25)) < (last_1_var_1_25)) ? ((last_1_var_1_25 + last_1_var_1_25)) : (last_1_var_1_25)));
 } else {
  var_1_21 = last_1_var_1_25;
 }
 signed long int stepLocal_1 = ((((-1) > (var_1_11)) ? (-1) : (var_1_11))) - var_1_12;
 signed long int stepLocal_0 = last_1_var_1_21 + last_1_var_1_21;
 if ((last_1_var_1_21 * last_1_var_1_21) < stepLocal_1) {
  if (stepLocal_0 < var_1_12) {
   var_1_8 = var_1_13;
  }
 } else {
  var_1_8 = var_1_13;
 }
 if (! (var_1_21 > var_1_8)) {
  if (var_1_4) {
   var_1_25 = var_1_26;
  }
 }
 if ((8 / var_1_15) < (64 / var_1_16)) {
  if (var_1_8 >= var_1_15) {
   var_1_14 = (var_1_17 - var_1_18);
  } else {
   var_1_14 = (var_1_18 - (64.25 + ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))));
  }
 } else {
  var_1_14 = var_1_18;
 }
 if ((- var_1_14) <= var_1_14) {
  var_1_1 = var_1_4;
 } else {
  if (var_1_14 <= var_1_14) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_4;
  }
 }
 if (var_1_14 < ((((var_1_14) > ((128.5 * var_1_14))) ? (var_1_14) : ((128.5 * var_1_14))))) {
  var_1_7 = (var_1_1 && (! 1));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32768);
 assume_abort_if_not(var_1_15 <= 32767);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -127);
 assume_abort_if_not(var_1_26 <= 126);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_25 = var_1_25;
}
int property() {
 return (((((((- var_1_14) <= var_1_14) ? (var_1_1 == ((unsigned char) var_1_4)) : ((var_1_14 <= var_1_14) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_4)))) && ((var_1_14 < ((((var_1_14) > ((128.5 * var_1_14))) ? (var_1_14) : ((128.5 * var_1_14))))) ? (var_1_7 == ((unsigned char) (var_1_1 && (! 1)))) : 1)) && (((last_1_var_1_21 * last_1_var_1_21) < (((((-1) > (var_1_11)) ? (-1) : (var_1_11))) - var_1_12)) ? (((last_1_var_1_21 + last_1_var_1_21) < var_1_12) ? (var_1_8 == ((unsigned short int) var_1_13)) : 1) : (var_1_8 == ((unsigned short int) var_1_13)))) && (((8 / var_1_15) < (64 / var_1_16)) ? ((var_1_8 >= var_1_15) ? (var_1_14 == ((double) (var_1_17 - var_1_18))) : (var_1_14 == ((double) (var_1_18 - (64.25 + ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))))))) : (var_1_14 == ((double) var_1_18)))) && (((last_1_var_1_8 + 4u) <= (last_1_var_1_8 >> var_1_15)) ? (var_1_21 == ((signed short int) (((((last_1_var_1_25 + last_1_var_1_25)) < (last_1_var_1_25)) ? ((last_1_var_1_25 + last_1_var_1_25)) : (last_1_var_1_25))))) : (var_1_21 == ((signed short int) last_1_var_1_25)))) && ((! (var_1_21 > var_1_8)) ? (var_1_4 ? (var_1_25 == ((signed char) var_1_26)) : 1) : 1)
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
