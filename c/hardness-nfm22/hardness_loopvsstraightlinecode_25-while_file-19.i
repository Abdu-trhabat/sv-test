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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1925_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 8;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 64;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 5;
signed char var_1_7 = 4;
signed char var_1_8 = 100;
unsigned char var_1_9 = 1;
signed long int var_1_10 = -8;
float var_1_11 = 255.2;
float var_1_12 = 128.25;
float var_1_13 = 100.5;
float var_1_14 = 255.9;
signed long int var_1_15 = -128;
unsigned short int var_1_16 = 2;
signed long int last_1_var_1_10 = -8;
void initially(void) {
}
void step(void) {
 if (var_1_7 < var_1_3) {
  if (last_1_var_1_10 > var_1_7) {
   var_1_10 = (var_1_3 - var_1_8);
  }
 } else {
  if (var_1_9) {
   var_1_10 = var_1_5;
  }
 }
 var_1_11 = (var_1_12 + (var_1_13 + var_1_14));
 var_1_16 = 64;
 if (var_1_9) {
  var_1_15 = (var_1_7 + var_1_16);
 }
 signed long int stepLocal_0 = var_1_15;
 if (((var_1_2 - var_1_3) << (var_1_4 + var_1_5)) <= stepLocal_0) {
  var_1_1 = ((((var_1_4) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_4) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))));
 } else {
  if (var_1_9) {
   var_1_1 = var_1_5;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 127);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 12);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 11);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -230584.3009213691390e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -230584.3009213691390e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
}
int property() {
 return (((((((var_1_2 - var_1_3) << (var_1_4 + var_1_5)) <= var_1_15) ? (var_1_1 == ((signed char) ((((var_1_4) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_4) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))) : (var_1_9 ? (var_1_1 == ((signed char) var_1_5)) : 1)) && ((var_1_7 < var_1_3) ? ((last_1_var_1_10 > var_1_7) ? (var_1_10 == ((signed long int) (var_1_3 - var_1_8))) : 1) : (var_1_9 ? (var_1_10 == ((signed long int) var_1_5)) : 1))) && (var_1_11 == ((float) (var_1_12 + (var_1_13 + var_1_14))))) && (var_1_9 ? (var_1_15 == ((signed long int) (var_1_7 + var_1_16))) : 1)) && (var_1_16 == ((unsigned short int) 64))
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
