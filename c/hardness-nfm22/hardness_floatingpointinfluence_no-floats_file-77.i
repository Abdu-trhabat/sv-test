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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 50;
unsigned short int var_1_4 = 60871;
unsigned short int var_1_5 = 1;
unsigned short int var_1_6 = 28896;
unsigned short int var_1_7 = 5;
signed long int var_1_8 = 63;
signed long int var_1_9 = 49;
signed long int var_1_10 = 31;
signed long int var_1_11 = 255;
signed long int var_1_12 = 0;
signed short int var_1_13 = -8;
signed long int var_1_15 = 1000000000;
unsigned short int var_1_16 = 4;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_7 > var_1_5) {
  var_1_8 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 } else {
  var_1_8 = (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - (var_1_12 - 3.4f));
 }
 unsigned short int stepLocal_0 = var_1_6;
 if (stepLocal_0 <= var_1_5) {
  if (((((var_1_8) > ((var_1_12 / var_1_15))) ? (var_1_8) : ((var_1_12 / var_1_15)))) > ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8)))) {
   var_1_13 = var_1_7;
  }
 } else {
  var_1_13 = var_1_7;
 }
 if (var_1_6 > (var_1_13 * ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7))))) {
  if (var_1_17 || var_1_18) {
   var_1_16 = var_1_4;
  } else {
   var_1_16 = var_1_7;
  }
 } else {
  var_1_16 = var_1_6;
 }
 if (var_1_8 != var_1_8) {
  var_1_1 = (var_1_4 - ((((var_1_5) < ((var_1_6 - var_1_7))) ? (var_1_5) : ((var_1_6 - var_1_7)))));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 32767);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 16383);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 assume_abort_if_not(var_1_15 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
}
void updateLastVariables() {
}
int property() {
 return ((((var_1_8 != var_1_8) ? (var_1_1 == ((unsigned short int) (var_1_4 - ((((var_1_5) < ((var_1_6 - var_1_7))) ? (var_1_5) : ((var_1_6 - var_1_7))))))) : 1) && ((var_1_7 > var_1_5) ? (var_1_8 == ((signed long int) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : (var_1_8 == ((signed long int) (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - (var_1_12 - 3.4f)))))) && ((var_1_6 <= var_1_5) ? ((((((var_1_8) > ((var_1_12 / var_1_15))) ? (var_1_8) : ((var_1_12 / var_1_15)))) > ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8)))) ? (var_1_13 == ((signed short int) var_1_7)) : 1) : (var_1_13 == ((signed short int) var_1_7)))) && ((var_1_6 > (var_1_13 * ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7))))) ? ((var_1_17 || var_1_18) ? (var_1_16 == ((unsigned short int) var_1_4)) : (var_1_16 == ((unsigned short int) var_1_7))) : (var_1_16 == ((unsigned short int) var_1_6)))
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
