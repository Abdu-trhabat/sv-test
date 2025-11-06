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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed long int var_1_2 = 1238955036;
signed long int var_1_3 = 200;
signed long int var_1_5 = 16;
signed long int var_1_6 = 64;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 1;
unsigned short int var_1_12 = 0;
signed short int var_1_13 = -16;
signed short int var_1_14 = -128;
unsigned char var_1_15 = 0;
void initially(void) {
}
void step(void) {
 var_1_13 = var_1_14;
 var_1_15 = var_1_10;
 unsigned char stepLocal_3 = var_1_9;
 unsigned char stepLocal_2 = (var_1_5 % var_1_6) > var_1_2;
 if (stepLocal_2 || var_1_9) {
  if (stepLocal_3 || var_1_15) {
   var_1_11 = (((((var_1_12 + var_1_3)) < (-500)) ? ((var_1_12 + var_1_3)) : (-500)));
  } else {
   var_1_11 = var_1_12;
  }
 } else {
  var_1_11 = var_1_12;
 }
 signed long int stepLocal_1 = (var_1_11 % var_1_6) + var_1_11;
 signed long int stepLocal_0 = (((var_1_11) > (var_1_2)) ? (var_1_11) : (var_1_2));
 if ((var_1_2 * ((((var_1_11) < (var_1_3)) ? (var_1_11) : (var_1_3)))) <= stepLocal_1) {
  if (var_1_6 >= stepLocal_0) {
   var_1_1 = var_1_9;
  } else {
   var_1_1 = var_1_10;
  }
 } else {
  var_1_1 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 1073741823);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65535);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32767);
 assume_abort_if_not(var_1_14 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 * ((((var_1_11) < (var_1_3)) ? (var_1_11) : (var_1_3)))) <= ((var_1_11 % var_1_6) + var_1_11)) ? ((var_1_6 >= ((((var_1_11) > (var_1_2)) ? (var_1_11) : (var_1_2)))) ? (var_1_1 == ((unsigned char) var_1_9)) : (var_1_1 == ((unsigned char) var_1_10))) : (var_1_1 == ((unsigned char) var_1_10))) && ((((var_1_5 % var_1_6) > var_1_2) || var_1_9) ? ((var_1_9 || var_1_15) ? (var_1_11 == ((signed long int) (((((var_1_12 + var_1_3)) < (-500)) ? ((var_1_12 + var_1_3)) : (-500))))) : (var_1_11 == ((signed long int) var_1_12))) : (var_1_11 == ((signed long int) var_1_12)))) && (var_1_13 == ((signed short int) var_1_14))) && (var_1_15 == ((unsigned char) var_1_10))
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
