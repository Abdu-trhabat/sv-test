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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 1456677701;
unsigned long int var_1_4 = 1000000000;
unsigned long int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
double var_1_9 = -10.0;
double var_1_10 = -1.0;
double var_1_11 = -2.0;
unsigned char var_1_12 = 0;
float var_1_13 = 16.0;
signed short int var_1_14 = 10;
float var_1_15 = -25.0;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 + (var_1_3 - (var_1_4 - var_1_5)));
 var_1_6 = var_1_7;
 unsigned long int stepLocal_0 = (((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5));
 if (stepLocal_0 != ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) {
  if (var_1_9 == ((((-50.0) < ((var_1_10 * var_1_11))) ? (-50.0) : ((var_1_10 * var_1_11))))) {
   var_1_8 = ((! var_1_12) || var_1_7);
  }
 } else {
  var_1_8 = 0;
 }
 if ((((((var_1_14) < (10)) ? (var_1_14) : (10))) - ((((-500) < 0 ) ? -(-500) : (-500)))) != var_1_4) {
  if (! var_1_7) {
   if (var_1_11 > var_1_10) {
    if ((var_1_4 - var_1_2) <= var_1_3) {
     var_1_13 = var_1_15;
    } else {
     var_1_13 = -10.0f;
    }
   } else {
    var_1_13 = 128.0f;
   }
  }
 } else {
  var_1_13 = var_1_15;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 1073741823);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 536870911);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 536870911);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_1 == ((unsigned long int) (var_1_2 + (var_1_3 - (var_1_4 - var_1_5))))) && (var_1_6 == ((unsigned char) var_1_7))) && ((((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5))) != ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) ? ((var_1_9 == ((((-50.0) < ((var_1_10 * var_1_11))) ? (-50.0) : ((var_1_10 * var_1_11))))) ? (var_1_8 == ((unsigned char) ((! var_1_12) || var_1_7))) : 1) : (var_1_8 == ((unsigned char) 0)))) && (((((((var_1_14) < (10)) ? (var_1_14) : (10))) - ((((-500) < 0 ) ? -(-500) : (-500)))) != var_1_4) ? ((! var_1_7) ? ((var_1_11 > var_1_10) ? (((var_1_4 - var_1_2) <= var_1_3) ? (var_1_13 == ((float) var_1_15)) : (var_1_13 == ((float) -10.0f))) : (var_1_13 == ((float) 128.0f))) : 1) : (var_1_13 == ((float) var_1_15)))
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
