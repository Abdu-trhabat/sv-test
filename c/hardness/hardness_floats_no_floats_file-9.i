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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
unsigned char var_1_2 = 100;
unsigned char var_1_3 = 4;
signed long int var_1_4 = -256;
signed long int var_1_5 = 50;
signed long int var_1_6 = -10;
signed long int var_1_7 = 16;
signed short int var_1_8 = 4;
signed short int var_1_9 = -4;
unsigned char var_1_10 = 1;
signed short int var_1_11 = 19841;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed long int last_1_var_1_7 = 16;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_7 <= 16) {
  var_1_1 = var_1_3;
 } else {
  if (((((var_1_4) > ((var_1_5 / -10))) ? (var_1_4) : ((var_1_5 / -10)))) < var_1_6) {
   var_1_1 = var_1_3;
  } else {
   var_1_1 = 5;
  }
 }
 if (var_1_10) {
  var_1_9 = (var_1_3 - var_1_1);
 } else {
  if (var_1_5 > var_1_6) {
   if (var_1_3 <= ((((var_1_2) > (var_1_8)) ? (var_1_2) : (var_1_8)))) {
    var_1_9 = (((((var_1_2) > (var_1_1)) ? (var_1_2) : (var_1_1))) - (var_1_11 - var_1_3));
   }
  } else {
   if (var_1_12) {
    if (var_1_13) {
     var_1_9 = var_1_11;
    } else {
     var_1_9 = var_1_2;
    }
   }
  }
 }
 signed long int stepLocal_0 = var_1_1 * var_1_9;
 if (stepLocal_0 >= var_1_3) {
  var_1_7 = (var_1_3 + var_1_9);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32768);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 16383);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
}
int property(void) {
 return (((last_1_var_1_7 <= 16) ? (var_1_1 == ((unsigned char) var_1_3)) : ((((((var_1_4) > ((var_1_5 / -10))) ? (var_1_4) : ((var_1_5 / -10)))) < var_1_6) ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) 5)))) && (((var_1_1 * var_1_9) >= var_1_3) ? (var_1_7 == ((signed long int) (var_1_3 + var_1_9))) : 1)) && (var_1_10 ? (var_1_9 == ((signed short int) (var_1_3 - var_1_1))) : ((var_1_5 > var_1_6) ? ((var_1_3 <= ((((var_1_2) > (var_1_8)) ? (var_1_2) : (var_1_8)))) ? (var_1_9 == ((signed short int) (((((var_1_2) > (var_1_1)) ? (var_1_2) : (var_1_1))) - (var_1_11 - var_1_3)))) : 1) : (var_1_12 ? (var_1_13 ? (var_1_9 == ((signed short int) var_1_11)) : (var_1_9 == ((signed short int) var_1_2))) : 1)))
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
