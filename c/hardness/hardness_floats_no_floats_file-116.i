// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 5;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 1;
signed long int var_1_4 = -128;
signed long int var_1_5 = 1;
signed long int var_1_6 = -128;
signed short int var_1_7 = 0;
signed long int var_1_8 = -25;
signed long int var_1_9 = 256;
signed long int var_1_10 = 10;
signed long int var_1_11 = 25;
signed long int var_1_12 = 64;
signed long int var_1_13 = 10;
signed short int var_1_14 = 100;
signed short int var_1_15 = 2;
signed short int var_1_16 = 32;
signed short int var_1_17 = 1;
signed short int var_1_18 = 128;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 32;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 64;
signed long int var_1_24 = -128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (var_1_4 * var_1_5) / var_1_6;
 if ((~ var_1_3) < stepLocal_0) {
  if (var_1_2) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = 8;
  }
 } else {
  var_1_1 = 5;
 }
 var_1_8 = ((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))) + var_1_11) - var_1_12);
 if ((- var_1_11) < -32) {
  var_1_13 = (var_1_11 - var_1_12);
 }
 var_1_14 = ((var_1_15 + (var_1_16 + var_1_17)) - var_1_18);
 if (var_1_2) {
  var_1_19 = (var_1_20 + var_1_21);
 } else {
  var_1_19 = (((((var_1_22 - var_1_20)) > (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))))) ? ((var_1_22 - var_1_20)) : (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))))));
 }
 var_1_24 = var_1_11;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32767);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 8192);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 8191);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((~ var_1_3) < ((var_1_4 * var_1_5) / var_1_6)) ? (var_1_2 ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_1 == ((signed short int) 8))) : (var_1_1 == ((signed short int) 5))) && (var_1_8 == ((signed long int) ((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))) + var_1_11) - var_1_12)))) && (((- var_1_11) < -32) ? (var_1_13 == ((signed long int) (var_1_11 - var_1_12))) : 1)) && (var_1_14 == ((signed short int) ((var_1_15 + (var_1_16 + var_1_17)) - var_1_18)))) && (var_1_2 ? (var_1_19 == ((unsigned char) (var_1_20 + var_1_21))) : (var_1_19 == ((unsigned char) (((((var_1_22 - var_1_20)) > (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))))) ? ((var_1_22 - var_1_20)) : (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23)))))))))) && (var_1_24 == ((signed long int) var_1_11))
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
