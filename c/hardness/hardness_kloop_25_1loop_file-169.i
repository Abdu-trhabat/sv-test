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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16925_1loop.c", 13, "reach_error"); }
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
double var_1_2 = -0.6;
double var_1_3 = 9999999999999.625;
double var_1_4 = 9.2;
signed short int var_1_5 = 5;
signed short int var_1_6 = 1;
unsigned long int var_1_7 = 128;
signed short int var_1_8 = 21123;
signed short int var_1_9 = 2;
unsigned char var_1_10 = 0;
signed char var_1_11 = -5;
signed char var_1_12 = 16;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= (var_1_3 + var_1_4)) {
  var_1_1 = (var_1_5 - var_1_6);
 }
 signed long int stepLocal_0 = (var_1_8 - var_1_9) - var_1_6;
 if (var_1_5 >= stepLocal_0) {
  if (var_1_2 == ((((var_1_3) > ((- var_1_4))) ? (var_1_3) : ((- var_1_4))))) {
   var_1_7 = (var_1_6 + var_1_8);
  } else {
   if (var_1_10) {
    var_1_7 = var_1_8;
   }
  }
 } else {
  var_1_7 = var_1_6;
 }
 signed long int stepLocal_2 = ~ var_1_5;
 signed short int stepLocal_1 = var_1_1;
 if (stepLocal_1 <= -128) {
  if (var_1_1 > stepLocal_2) {
   var_1_11 = var_1_12;
  } else {
   var_1_11 = -4;
  }
 } else {
  var_1_11 = -64;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16384);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 >= (var_1_3 + var_1_4)) ? (var_1_1 == ((signed short int) (var_1_5 - var_1_6))) : 1) && ((var_1_5 >= ((var_1_8 - var_1_9) - var_1_6)) ? ((var_1_2 == ((((var_1_3) > ((- var_1_4))) ? (var_1_3) : ((- var_1_4))))) ? (var_1_7 == ((unsigned long int) (var_1_6 + var_1_8))) : (var_1_10 ? (var_1_7 == ((unsigned long int) var_1_8)) : 1)) : (var_1_7 == ((unsigned long int) var_1_6)))) && ((var_1_1 <= -128) ? ((var_1_1 > (~ var_1_5)) ? (var_1_11 == ((signed char) var_1_12)) : (var_1_11 == ((signed char) -4))) : (var_1_11 == ((signed char) -64)))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
