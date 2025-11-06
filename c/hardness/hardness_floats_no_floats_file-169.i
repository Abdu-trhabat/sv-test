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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -25;
signed long int var_1_2 = 16;
signed long int var_1_3 = 32;
signed long int var_1_4 = -128;
signed long int var_1_5 = 4;
signed short int var_1_6 = -8;
signed long int var_1_7 = -2;
signed short int var_1_8 = 25;
signed long int var_1_9 = 4;
signed long int var_1_10 = 256;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 16;
signed long int var_1_13 = -100000;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed short int var_1_16 = 1;
signed char var_1_17 = -128;
signed char var_1_18 = -1;
signed long int var_1_19 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= var_1_3) {
  if (var_1_2 < (((((var_1_3 / var_1_4)) > ((-128 * var_1_5))) ? ((var_1_3 / var_1_4)) : ((-128 * var_1_5))))) {
   var_1_1 = var_1_6;
  }
 }
 var_1_16 = 0;
 var_1_17 = var_1_18;
 var_1_19 = var_1_13;
 unsigned char stepLocal_0 = -25 >= ((((var_1_8) < (var_1_1)) ? (var_1_8) : (var_1_1)));
 if (var_1_11 && stepLocal_0) {
  if (((((var_1_10) < (var_1_19)) ? (var_1_10) : (var_1_19))) <= var_1_19) {
   var_1_14 = 0;
  } else {
   var_1_14 = 1;
  }
 } else {
  var_1_14 = var_1_15;
 }
 if (var_1_6 == ((((var_1_16) < (var_1_1)) ? (var_1_16) : (var_1_1)))) {
  var_1_7 = (var_1_9 - var_1_10);
 } else {
  if (var_1_14) {
   var_1_7 = (var_1_12 + var_1_13);
  } else {
   var_1_7 = var_1_10;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32767);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32768);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 >= var_1_3) ? ((var_1_2 < (((((var_1_3 / var_1_4)) > ((-128 * var_1_5))) ? ((var_1_3 / var_1_4)) : ((-128 * var_1_5))))) ? (var_1_1 == ((signed short int) var_1_6)) : 1) : 1) && ((var_1_6 == ((((var_1_16) < (var_1_1)) ? (var_1_16) : (var_1_1)))) ? (var_1_7 == ((signed long int) (var_1_9 - var_1_10))) : (var_1_14 ? (var_1_7 == ((signed long int) (var_1_12 + var_1_13))) : (var_1_7 == ((signed long int) var_1_10))))) && ((var_1_11 && (-25 >= ((((var_1_8) < (var_1_1)) ? (var_1_8) : (var_1_1))))) ? ((((((var_1_10) < (var_1_19)) ? (var_1_10) : (var_1_19))) <= var_1_19) ? (var_1_14 == ((unsigned char) 0)) : (var_1_14 == ((unsigned char) 1))) : (var_1_14 == ((unsigned char) var_1_15)))) && (var_1_16 == ((signed short int) 0))) && (var_1_17 == ((signed char) var_1_18))) && (var_1_19 == ((signed long int) var_1_13))
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
