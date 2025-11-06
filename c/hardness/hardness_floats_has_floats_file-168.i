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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 64;
signed char var_1_2 = 1;
signed long int var_1_4 = 1000000000;
double var_1_5 = -500.0;
unsigned char var_1_6 = 0;
double var_1_7 = -25.0;
double var_1_8 = 128.0;
signed short int var_1_9 = 32;
signed short int var_1_10 = -8;
signed short int var_1_11 = -10;
signed long int var_1_12 = 50;
double var_1_13 = -4.0;
unsigned short int var_1_14 = 256;
void initially(void) {
}
void step(void) {
 var_1_12 = var_1_2;
 var_1_13 = -5.0;
 var_1_14 = var_1_2;
 signed long int stepLocal_0 = 1 - var_1_2;
 if (stepLocal_0 == var_1_12) {
  var_1_1 = ((((2) > (25)) ? (2) : (25)));
 } else {
  var_1_1 = (var_1_2 + var_1_4);
 }
 signed long int stepLocal_1 = var_1_1;
 if (! var_1_6) {
  if (var_1_2 > stepLocal_1) {
   var_1_5 = (var_1_7 + var_1_8);
  }
 } else {
  var_1_5 = ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)));
 }
 signed char stepLocal_2 = var_1_2;
 if (((((var_1_7) > ((var_1_13 + var_1_8))) ? (var_1_7) : ((var_1_13 + var_1_8)))) < (16.0 + -128.0)) {
  if (((var_1_4 * -1) | var_1_1) < stepLocal_2) {
   var_1_9 = ((((((((var_1_2) < (var_1_10)) ? (var_1_2) : (var_1_10)))) > (var_1_11)) ? (((((var_1_2) < (var_1_10)) ? (var_1_2) : (var_1_10)))) : (var_1_11)));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((1 - var_1_2) == var_1_12) ? (var_1_1 == ((signed long int) ((((2) > (25)) ? (2) : (25))))) : (var_1_1 == ((signed long int) (var_1_2 + var_1_4)))) && ((! var_1_6) ? ((var_1_2 > var_1_1) ? (var_1_5 == ((double) (var_1_7 + var_1_8))) : 1) : (var_1_5 == ((double) ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))))))) && ((((((var_1_7) > ((var_1_13 + var_1_8))) ? (var_1_7) : ((var_1_13 + var_1_8)))) < (16.0 + -128.0)) ? ((((var_1_4 * -1) | var_1_1) < var_1_2) ? (var_1_9 == ((signed short int) ((((((((var_1_2) < (var_1_10)) ? (var_1_2) : (var_1_10)))) > (var_1_11)) ? (((((var_1_2) < (var_1_10)) ? (var_1_2) : (var_1_10)))) : (var_1_11))))) : 1) : 1)) && (var_1_12 == ((signed long int) var_1_2))) && (var_1_13 == ((double) -5.0))) && (var_1_14 == ((unsigned short int) var_1_2))
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
