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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3025_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 64;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -256;
signed short int var_1_4 = -1000;
signed short int var_1_5 = 8;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 100;
signed long int var_1_8 = 32;
signed long int var_1_9 = 32;
float var_1_10 = 255.3;
signed long int var_1_11 = 64;
signed short int var_1_12 = -256;
float var_1_13 = 2.8;
signed long int last_1_var_1_8 = 32;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (last_1_var_1_8 / var_1_5) % var_1_6;
 if (var_1_2) {
  if (last_1_var_1_8 > stepLocal_0) {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_7;
 }
 signed short int stepLocal_1 = var_1_5;
 if (var_1_3 < stepLocal_1) {
  var_1_8 = (var_1_1 - ((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))));
 } else {
  var_1_8 = var_1_7;
 }
 if (((var_1_6 * var_1_4) * var_1_7) <= (var_1_1 - var_1_11)) {
  if (var_1_5 <= (var_1_12 + var_1_4)) {
   var_1_10 = var_1_13;
  }
 } else {
  if (var_1_9 >= var_1_11) {
   var_1_10 = var_1_13;
  } else {
   var_1_10 = 24.2f;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32768);
 assume_abort_if_not(var_1_6 <= 32767);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32768);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return ((var_1_2 ? ((last_1_var_1_8 > ((last_1_var_1_8 / var_1_5) % var_1_6)) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((var_1_3 < var_1_5) ? (var_1_8 == ((signed long int) (var_1_1 - ((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9)))))) : (var_1_8 == ((signed long int) var_1_7)))) && ((((var_1_6 * var_1_4) * var_1_7) <= (var_1_1 - var_1_11)) ? ((var_1_5 <= (var_1_12 + var_1_4)) ? (var_1_10 == ((float) var_1_13)) : 1) : ((var_1_9 >= var_1_11) ? (var_1_10 == ((float) var_1_13)) : (var_1_10 == ((float) 24.2f))))
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
