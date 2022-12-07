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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 10000;
signed short int var_1_6 = 0;
signed short int var_1_7 = 4;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 2;
unsigned char var_1_12 = 100;
unsigned short int var_1_13 = 25;
unsigned char var_1_14 = 4;
unsigned char var_1_15 = 128;
unsigned short int var_1_16 = 20416;
unsigned short int var_1_17 = 21022;
signed long int var_1_18 = 0;
signed short int var_1_19 = -1;
signed short int var_1_20 = -10;
unsigned short int last_1_var_1_13 = 25;
signed short int last_1_var_1_20 = -10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = last_1_var_1_13 + (var_1_6 - var_1_10);
 signed long int stepLocal_1 = last_1_var_1_13;
 if (var_1_9) {
  if (var_1_7 > stepLocal_2) {
   if (stepLocal_1 < (~ last_1_var_1_20)) {
    var_1_8 = var_1_12;
   } else {
    var_1_8 = var_1_12;
   }
  } else {
   var_1_8 = var_1_12;
  }
 }
 if (var_1_12 <= ((var_1_8 / var_1_14) * (2 % var_1_15))) {
  var_1_13 = (var_1_8 + (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_15));
 }
 signed long int stepLocal_0 = var_1_8 - var_1_8;
 if ((var_1_13 - var_1_13) >= stepLocal_0) {
  var_1_1 = ((((var_1_8 - var_1_8) < 0 ) ? -(var_1_8 - var_1_8) : (var_1_8 - var_1_8)));
 }
 var_1_18 = -4;
 var_1_19 = var_1_8;
 var_1_20 = var_1_12;
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 255);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 255);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 16383);
 assume_abort_if_not(var_1_17 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((var_1_13 - var_1_13) >= (var_1_8 - var_1_8)) ? (var_1_1 == ((signed short int) ((((var_1_8 - var_1_8) < 0 ) ? -(var_1_8 - var_1_8) : (var_1_8 - var_1_8))))) : 1) && (var_1_9 ? ((var_1_7 > (last_1_var_1_13 + (var_1_6 - var_1_10))) ? ((last_1_var_1_13 < (~ last_1_var_1_20)) ? (var_1_8 == ((unsigned char) var_1_12)) : (var_1_8 == ((unsigned char) var_1_12))) : (var_1_8 == ((unsigned char) var_1_12))) : 1)) && ((var_1_12 <= ((var_1_8 / var_1_14) * (2 % var_1_15))) ? (var_1_13 == ((unsigned short int) (var_1_8 + (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_15)))) : 1)) && (var_1_18 == ((signed long int) -4))) && (var_1_19 == ((signed short int) var_1_8))) && (var_1_20 == ((signed short int) var_1_12))
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
