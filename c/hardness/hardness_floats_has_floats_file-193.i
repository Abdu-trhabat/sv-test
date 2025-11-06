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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
signed long int var_1_5 = 4;
unsigned char var_1_6 = 1;
double var_1_7 = 32.0;
double var_1_8 = 50.0;
double var_1_9 = 25.0;
signed short int var_1_10 = -100;
signed short int var_1_11 = -100;
signed short int last_1_var_1_1 = 4;
signed short int last_1_var_1_10 = -100;
void initially(void) {
}
void step(void) {
 var_1_10 = last_1_var_1_10;
 var_1_11 = var_1_10;
 signed short int stepLocal_2 = var_1_10;
 signed short int stepLocal_1 = var_1_10;
 signed long int stepLocal_0 = ((((- var_1_10)) > (var_1_11)) ? ((- var_1_10)) : (var_1_11));
 if (last_1_var_1_1 == stepLocal_2) {
  if (last_1_var_1_1 > stepLocal_0) {
   if ((last_1_var_1_1 * (var_1_11 * -5)) > stepLocal_1) {
    var_1_1 = var_1_10;
   }
  } else {
   var_1_1 = last_1_var_1_1;
  }
 } else {
  var_1_1 = var_1_11;
 }
 if (var_1_6) {
  var_1_5 = (var_1_11 + ((((((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) > (var_1_11)) ? (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) : (var_1_11))));
 }
 signed long int stepLocal_5 = var_1_5;
 signed long int stepLocal_4 = var_1_5 * var_1_1;
 signed long int stepLocal_3 = - var_1_1;
 if (var_1_10 == stepLocal_4) {
  if (var_1_10 >= stepLocal_3) {
   if (stepLocal_5 <= var_1_1) {
    var_1_7 = var_1_8;
   } else {
    var_1_7 = var_1_9;
   }
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((((last_1_var_1_1 == var_1_10) ? ((last_1_var_1_1 > (((((- var_1_10)) > (var_1_11)) ? ((- var_1_10)) : (var_1_11)))) ? (((last_1_var_1_1 * (var_1_11 * -5)) > var_1_10) ? (var_1_1 == ((signed short int) var_1_10)) : 1) : (var_1_1 == ((signed short int) last_1_var_1_1))) : (var_1_1 == ((signed short int) var_1_11))) && (var_1_6 ? (var_1_5 == ((signed long int) (var_1_11 + ((((((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) > (var_1_11)) ? (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) : (var_1_11)))))) : 1)) && ((var_1_10 == (var_1_5 * var_1_1)) ? ((var_1_10 >= (- var_1_1)) ? ((var_1_5 <= var_1_1) ? (var_1_7 == ((double) var_1_8)) : (var_1_7 == ((double) var_1_9))) : 1) : 1)) && (var_1_10 == ((signed short int) last_1_var_1_10))) && (var_1_11 == ((signed short int) var_1_10))
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
