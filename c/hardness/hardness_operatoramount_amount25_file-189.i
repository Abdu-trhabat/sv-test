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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
float var_1_5 = 0.9;
signed char var_1_6 = -100;
signed char var_1_7 = -8;
signed long int var_1_8 = 5;
float var_1_9 = 4.5;
float var_1_10 = 24.5;
float var_1_11 = 5.25;
unsigned short int var_1_12 = 60381;
unsigned short int var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7));
 if (stepLocal_0 >= var_1_8) {
  var_1_5 = ((((var_1_9 - var_1_10) < 0 ) ? -(var_1_9 - var_1_10) : (var_1_9 - var_1_10)));
 } else {
  var_1_5 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 }
 if (var_1_4) {
  if (var_1_3) {
   var_1_14 = ((! 1) || (! var_1_15));
  }
 } else {
  var_1_14 = (! var_1_16);
 }
 if (var_1_14) {
  var_1_1 = var_1_3;
 } else {
  var_1_1 = (! var_1_4);
 }
 signed long int stepLocal_1 = var_1_12 - var_1_13;
 if (var_1_14) {
  if (stepLocal_1 < var_1_6) {
   var_1_11 = var_1_9;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -128);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65535);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_14 ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) (! var_1_4)))) && ((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) >= var_1_8) ? (var_1_5 == ((float) ((((var_1_9 - var_1_10) < 0 ) ? -(var_1_9 - var_1_10) : (var_1_9 - var_1_10))))) : (var_1_5 == ((float) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))) && (var_1_14 ? (((var_1_12 - var_1_13) < var_1_6) ? (var_1_11 == ((float) var_1_9)) : 1) : 1)) && (var_1_4 ? (var_1_3 ? (var_1_14 == ((unsigned char) ((! 1) || (! var_1_15)))) : 1) : (var_1_14 == ((unsigned char) (! var_1_16))))
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
