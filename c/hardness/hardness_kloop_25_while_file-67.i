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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6725_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed long int var_1_2 = -10;
signed long int var_1_3 = -4;
signed short int var_1_4 = -64;
signed short int var_1_5 = 256;
unsigned short int var_1_6 = 128;
signed short int var_1_7 = -128;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 256;
signed long int var_1_10 = 128;
unsigned short int var_1_11 = 47512;
unsigned char var_1_12 = 16;
unsigned char var_1_13 = 1;
float var_1_14 = 5.5;
float var_1_15 = 24.5;
signed long int last_1_var_1_10 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_4 > (last_1_var_1_10 / var_1_7)) {
  var_1_6 = (var_1_8 + var_1_9);
 }
 if (! (var_1_2 <= var_1_3)) {
  var_1_1 = (var_1_4 + var_1_5);
 }
 var_1_14 = var_1_15;
 unsigned short int stepLocal_1 = var_1_6;
 signed long int stepLocal_0 = var_1_7 / var_1_12;
 if (stepLocal_1 >= (var_1_11 - var_1_8)) {
  if (stepLocal_0 <= var_1_3) {
   var_1_10 = ((var_1_6 - var_1_8) + -32);
  } else {
   if (var_1_13) {
    var_1_10 = ((((var_1_11) < (var_1_7)) ? (var_1_11) : (var_1_7)));
   } else {
    var_1_10 = var_1_5;
   }
  }
 } else {
  var_1_10 = var_1_1;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32768);
 assume_abort_if_not(var_1_7 <= 32767);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65535);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 255);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return ((((! (var_1_2 <= var_1_3)) ? (var_1_1 == ((signed short int) (var_1_4 + var_1_5))) : 1) && ((var_1_4 > (last_1_var_1_10 / var_1_7)) ? (var_1_6 == ((unsigned short int) (var_1_8 + var_1_9))) : 1)) && ((var_1_6 >= (var_1_11 - var_1_8)) ? (((var_1_7 / var_1_12) <= var_1_3) ? (var_1_10 == ((signed long int) ((var_1_6 - var_1_8) + -32))) : (var_1_13 ? (var_1_10 == ((signed long int) ((((var_1_11) < (var_1_7)) ? (var_1_11) : (var_1_7))))) : (var_1_10 == ((signed long int) var_1_5)))) : (var_1_10 == ((signed long int) var_1_1)))) && (var_1_14 == ((float) var_1_15))
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
