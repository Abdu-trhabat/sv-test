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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5525_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 16;
signed char var_1_7 = 25;
unsigned short int var_1_8 = 5;
unsigned short int var_1_9 = 1;
signed char var_1_12 = 1;
float var_1_13 = 127.75;
float var_1_14 = 0.0;
float var_1_15 = 255.7;
float var_1_16 = 7.6;
unsigned long int var_1_17 = 64;
signed long int var_1_18 = 0;
void initially(void) {
}
void step(void) {
 var_1_13 = ((var_1_14 - var_1_15) - var_1_16);
 var_1_17 = var_1_6;
 var_1_18 = var_1_9;
 unsigned short int stepLocal_3 = var_1_9;
 unsigned long int stepLocal_2 = var_1_17;
 if (stepLocal_2 <= ((var_1_17 / var_1_8) / var_1_9)) {
  if (stepLocal_3 == (var_1_18 * (~ var_1_18))) {
   var_1_7 = var_1_12;
  } else {
   var_1_7 = var_1_12;
  }
 } else {
  var_1_7 = var_1_12;
 }
 signed char stepLocal_1 = var_1_7;
 unsigned char stepLocal_0 = var_1_7 >= var_1_7;
 if (var_1_2) {
  if (stepLocal_0 && var_1_5) {
   if (stepLocal_1 >= var_1_7) {
    var_1_1 = 5;
   } else {
    var_1_1 = var_1_6;
   }
  }
 } else {
  var_1_1 = var_1_6;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65535);
 assume_abort_if_not(var_1_9 != 0);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 4611686.018427382800e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((var_1_2 ? (((var_1_7 >= var_1_7) && var_1_5) ? ((var_1_7 >= var_1_7) ? (var_1_1 == ((unsigned short int) 5)) : (var_1_1 == ((unsigned short int) var_1_6))) : 1) : (var_1_1 == ((unsigned short int) var_1_6))) && ((var_1_17 <= ((var_1_17 / var_1_8) / var_1_9)) ? ((var_1_9 == (var_1_18 * (~ var_1_18))) ? (var_1_7 == ((signed char) var_1_12)) : (var_1_7 == ((signed char) var_1_12))) : (var_1_7 == ((signed char) var_1_12)))) && (var_1_13 == ((float) ((var_1_14 - var_1_15) - var_1_16)))) && (var_1_17 == ((unsigned long int) var_1_6))) && (var_1_18 == ((signed long int) var_1_9))
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
