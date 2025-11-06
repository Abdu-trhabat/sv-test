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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 5;
unsigned long int var_1_2 = 50;
unsigned long int var_1_3 = 500;
signed long int var_1_4 = 128;
signed long int var_1_5 = 64;
double var_1_6 = -50.0;
signed char var_1_8 = 4;
signed char var_1_9 = 0;
unsigned char var_1_10 = 1;
double var_1_11 = 1.0;
double var_1_12 = -50.0;
unsigned short int var_1_13 = 128;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 5;
float var_1_17 = -50.0;
float var_1_18 = 50.0;
unsigned short int var_1_19 = 128;
signed long int var_1_20 = 10;
unsigned short int last_1_var_1_13 = 128;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_13 >= (var_1_8 - var_1_9)) {
  if (! var_1_10) {
   var_1_6 = (var_1_11 + var_1_12);
  } else {
   var_1_6 = var_1_11;
  }
 }
 if (var_1_2 <= var_1_3) {
  if (var_1_3 <= var_1_2) {
   var_1_1 = (1 - var_1_4);
  } else {
   var_1_1 = (var_1_4 - var_1_5);
  }
 }
 var_1_17 = (100000.0f - var_1_18);
 var_1_19 = var_1_16;
 var_1_20 = var_1_19;
 if (var_1_10) {
  if ((((((var_1_6) < (var_1_17)) ? (var_1_6) : (var_1_17))) >= (- var_1_11)) && var_1_15) {
   var_1_13 = (var_1_9 + var_1_16);
  } else {
   var_1_13 = var_1_16;
  }
 } else {
  var_1_13 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 return ((((((var_1_2 <= var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed long int) (1 - var_1_4))) : (var_1_1 == ((signed long int) (var_1_4 - var_1_5)))) : 1) && ((last_1_var_1_13 >= (var_1_8 - var_1_9)) ? ((! var_1_10) ? (var_1_6 == ((double) (var_1_11 + var_1_12))) : (var_1_6 == ((double) var_1_11))) : 1)) && (var_1_10 ? (((((((var_1_6) < (var_1_17)) ? (var_1_6) : (var_1_17))) >= (- var_1_11)) && var_1_15) ? (var_1_13 == ((unsigned short int) (var_1_9 + var_1_16))) : (var_1_13 == ((unsigned short int) var_1_16))) : (var_1_13 == ((unsigned short int) var_1_9)))) && (var_1_17 == ((float) (100000.0f - var_1_18)))) && (var_1_19 == ((unsigned short int) var_1_16))) && (var_1_20 == ((signed long int) var_1_19))
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
