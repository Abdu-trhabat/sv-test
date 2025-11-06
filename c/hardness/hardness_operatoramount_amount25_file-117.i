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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
unsigned long int var_1_5 = 8;
unsigned long int var_1_6 = 1000;
unsigned long int var_1_7 = 1584235566;
unsigned long int var_1_8 = 4;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 1;
unsigned long int var_1_11 = 2;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 5;
signed long int var_1_15 = 16;
signed short int var_1_16 = 16;
unsigned long int var_1_17 = 4024819509;
unsigned long int var_1_18 = 0;
unsigned char var_1_19 = 1;
double var_1_20 = 0.375;
double var_1_21 = 7.7;
double var_1_22 = 2.5;
unsigned char var_1_23 = 0;
unsigned char last_1_var_1_12 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_5 >= var_1_6) || last_1_var_1_12) {
  if (last_1_var_1_12) {
   var_1_1 = 4u;
  } else {
   var_1_1 = ((((((var_1_7 - var_1_8) + var_1_9)) > (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (((var_1_7 - var_1_8) + var_1_9)) : (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))));
  }
 }
 unsigned long int stepLocal_0 = var_1_7;
 if (stepLocal_0 <= (var_1_8 * var_1_1)) {
  var_1_12 = var_1_13;
 }
 unsigned long int stepLocal_1 = var_1_17 - (var_1_7 - var_1_18);
 if (((var_1_8 + var_1_15) >> var_1_16) >= stepLocal_1) {
  var_1_14 = 128;
 }
 if ((var_1_20 * (32.75 - var_1_21)) == var_1_22) {
  var_1_19 = var_1_23;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967295);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741823);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 return (((((var_1_5 >= var_1_6) || last_1_var_1_12) ? (last_1_var_1_12 ? (var_1_1 == ((unsigned long int) 4u)) : (var_1_1 == ((unsigned long int) ((((((var_1_7 - var_1_8) + var_1_9)) > (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (((var_1_7 - var_1_8) + var_1_9)) : (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))))))) : 1) && ((var_1_7 <= (var_1_8 * var_1_1)) ? (var_1_12 == ((unsigned char) var_1_13)) : 1)) && ((((var_1_8 + var_1_15) >> var_1_16) >= (var_1_17 - (var_1_7 - var_1_18))) ? (var_1_14 == ((unsigned char) 128)) : 1)) && (((var_1_20 * (32.75 - var_1_21)) == var_1_22) ? (var_1_19 == ((unsigned char) var_1_23)) : 1)
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
