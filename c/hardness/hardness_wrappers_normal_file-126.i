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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 8;
signed char var_1_2 = 100;
signed char var_1_3 = -16;
signed char var_1_4 = -8;
signed long int var_1_5 = 8;
signed char var_1_6 = 8;
signed char var_1_7 = 32;
signed char var_1_8 = -8;
float var_1_9 = 9.75;
unsigned char var_1_10 = 1;
float var_1_11 = 5.876;
float var_1_12 = 10.2;
float var_1_13 = 16.5;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = var_1_5;
 if (((var_1_2 / var_1_3) + var_1_4) != stepLocal_0) {
  if (var_1_2 <= stepLocal_1) {
   var_1_1 = (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8)));
  }
 } else {
  var_1_1 = var_1_8;
 }
 signed char stepLocal_3 = var_1_1;
 signed char stepLocal_2 = var_1_1;
 if (stepLocal_3 <= var_1_3) {
  if (var_1_10) {
   if (stepLocal_2 <= (((((-128 % var_1_3)) > (var_1_1)) ? ((-128 % var_1_3)) : (var_1_1)))) {
    var_1_9 = var_1_11;
   } else {
    var_1_9 = var_1_12;
   }
  }
 } else {
  var_1_9 = var_1_11;
 }
 signed long int stepLocal_5 = 50;
 unsigned char stepLocal_4 = var_1_11 < var_1_9;
 if (! (5 < var_1_1)) {
  if (stepLocal_4 && var_1_10) {
   if (stepLocal_5 < var_1_6) {
    var_1_13 = var_1_12;
   }
  } else {
   var_1_13 = 16.2f;
  }
 } else {
  var_1_13 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 / var_1_3) + var_1_4) != var_1_5) ? ((var_1_2 <= var_1_4) ? (var_1_1 == ((signed char) (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))))) : 1) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_1 <= var_1_3) ? (var_1_10 ? ((var_1_1 <= (((((-128 % var_1_3)) > (var_1_1)) ? ((-128 % var_1_3)) : (var_1_1)))) ? (var_1_9 == ((float) var_1_11)) : (var_1_9 == ((float) var_1_12))) : 1) : (var_1_9 == ((float) var_1_11)))) && ((! (5 < var_1_1)) ? (((var_1_11 < var_1_9) && var_1_10) ? ((50 < var_1_6) ? (var_1_13 == ((float) var_1_12)) : 1) : (var_1_13 == ((float) 16.2f))) : (var_1_13 == ((float) var_1_12)))
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
