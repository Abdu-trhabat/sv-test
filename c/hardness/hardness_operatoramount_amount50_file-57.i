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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
signed char var_1_2 = -1;
signed char var_1_3 = 10;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 16;
unsigned long int var_1_9 = 2759533897;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -25;
signed long int var_1_17 = 256;
signed short int var_1_18 = 2;
signed short int last_1_var_1_18 = 2;
void initially(void) {
}
void step(void) {
 var_1_8 = ((((last_1_var_1_18) > ((var_1_9 - var_1_3))) ? (last_1_var_1_18) : ((var_1_9 - var_1_3))));
 unsigned long int stepLocal_0 = var_1_9;
 if (var_1_6) {
  if (var_1_11) {
   var_1_10 = (var_1_12 && (! var_1_13));
  } else {
   if (stepLocal_0 > (~ 100u)) {
    var_1_10 = var_1_14;
   } else {
    var_1_10 = var_1_13;
   }
  }
 } else {
  var_1_10 = var_1_13;
 }
 unsigned long int stepLocal_2 = var_1_8;
 if (! var_1_10) {
  if (stepLocal_2 >= var_1_3) {
   var_1_17 = var_1_7;
  }
 }
 signed long int stepLocal_3 = var_1_5;
 if (var_1_8 < stepLocal_3) {
  var_1_18 = (var_1_2 - (((((last_1_var_1_18 + var_1_7)) > (var_1_3)) ? ((last_1_var_1_18 + var_1_7)) : (var_1_3))));
 } else {
  if (var_1_10) {
   var_1_18 = var_1_3;
  } else {
   var_1_18 = last_1_var_1_18;
  }
 }
 unsigned long int stepLocal_1 = var_1_8 & var_1_5;
 if (stepLocal_1 >= (- ((((var_1_3) > (var_1_8)) ? (var_1_3) : (var_1_8))))) {
  var_1_15 = ((((var_1_3 + (var_1_17 - var_1_7)) < 0 ) ? -(var_1_3 + (var_1_17 - var_1_7)) : (var_1_3 + (var_1_17 - var_1_7))));
 } else {
  if (var_1_10) {
   var_1_15 = var_1_7;
  } else {
   var_1_15 = var_1_17;
  }
 }
 if ((var_1_2 - var_1_3) > (var_1_15 / var_1_5)) {
  var_1_1 = (128 - var_1_3);
 } else {
  if (! var_1_10) {
   var_1_1 = var_1_3;
  } else {
   var_1_1 = var_1_7;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 return (((((((var_1_2 - var_1_3) > (var_1_15 / var_1_5)) ? (var_1_1 == ((unsigned char) (128 - var_1_3))) : ((! var_1_10) ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) var_1_7)))) && (var_1_8 == ((unsigned long int) ((((last_1_var_1_18) > ((var_1_9 - var_1_3))) ? (last_1_var_1_18) : ((var_1_9 - var_1_3))))))) && (var_1_6 ? (var_1_11 ? (var_1_10 == ((unsigned char) (var_1_12 && (! var_1_13)))) : ((var_1_9 > (~ 100u)) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) var_1_13)))) : (var_1_10 == ((unsigned char) var_1_13)))) && (((var_1_8 & var_1_5) >= (- ((((var_1_3) > (var_1_8)) ? (var_1_3) : (var_1_8))))) ? (var_1_15 == ((signed long int) ((((var_1_3 + (var_1_17 - var_1_7)) < 0 ) ? -(var_1_3 + (var_1_17 - var_1_7)) : (var_1_3 + (var_1_17 - var_1_7)))))) : (var_1_10 ? (var_1_15 == ((signed long int) var_1_7)) : (var_1_15 == ((signed long int) var_1_17))))) && ((! var_1_10) ? ((var_1_8 >= var_1_3) ? (var_1_17 == ((signed long int) var_1_7)) : 1) : 1)) && ((var_1_8 < var_1_5) ? (var_1_18 == ((signed short int) (var_1_2 - (((((last_1_var_1_18 + var_1_7)) > (var_1_3)) ? ((last_1_var_1_18 + var_1_7)) : (var_1_3)))))) : (var_1_10 ? (var_1_18 == ((signed short int) var_1_3)) : (var_1_18 == ((signed short int) last_1_var_1_18))))
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
