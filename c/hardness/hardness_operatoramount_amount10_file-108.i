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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 15.625;
signed long int var_1_2 = -256;
unsigned long int var_1_3 = 1;
double var_1_4 = 0.19999999999999996;
double var_1_5 = 0.75;
double var_1_6 = 2.2;
float var_1_7 = 2.5;
signed char var_1_8 = -128;
unsigned short int var_1_9 = 64;
void initially(void) {
}
void step(void) {
 if (var_1_2 == (256 >> var_1_3)) {
  var_1_1 = var_1_4;
 } else {
  var_1_1 = ((((var_1_5 - var_1_6) < 0 ) ? -(var_1_5 - var_1_6) : (var_1_5 - var_1_6)));
 }
 var_1_7 = var_1_4;
 var_1_8 = var_1_3;
 var_1_9 = var_1_3;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 30);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 == (256 >> var_1_3)) ? (var_1_1 == ((double) var_1_4)) : (var_1_1 == ((double) ((((var_1_5 - var_1_6) < 0 ) ? -(var_1_5 - var_1_6) : (var_1_5 - var_1_6)))))) && (var_1_7 == ((float) var_1_4))) && (var_1_8 == ((signed char) var_1_3))) && (var_1_9 == ((unsigned short int) var_1_3))
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
