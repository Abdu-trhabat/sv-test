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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12525_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 7.25;
float var_1_2 = 1.8199999999999998;
float var_1_3 = 0.0;
float var_1_4 = 99999999999.35;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
double var_1_8 = 100.5;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 56793;
unsigned short int var_1_11 = 8;
signed long int var_1_12 = -50;
unsigned char var_1_13 = 0;
float var_1_14 = 9.25;
float var_1_15 = 49.6;
signed char var_1_16 = 32;
signed char var_1_17 = 8;
signed char var_1_18 = 32;
unsigned short int var_1_19 = 64;
unsigned short int last_1_var_1_19 = 64;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - (var_1_4 + 32.4f));
 var_1_5 = (var_1_6 && (! var_1_7));
 var_1_8 = var_1_3;
 signed long int stepLocal_0 = var_1_10 - var_1_11;
 if (stepLocal_0 < var_1_12) {
  var_1_9 = var_1_13;
 }
 var_1_14 = (var_1_4 + var_1_15);
 if ((var_1_8 * var_1_2) >= var_1_3) {
  var_1_16 = ((var_1_17 + var_1_18) - 32);
 }
 if (var_1_2 > var_1_8) {
  if (! (var_1_16 < last_1_var_1_19)) {
   var_1_19 = var_1_11;
  }
 } else {
  var_1_19 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 6917529.027641074000e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
}
int property(void) {
 return ((((((var_1_1 == ((float) (var_1_2 - (var_1_4 + 32.4f)))) && (var_1_5 == ((unsigned char) (var_1_6 && (! var_1_7))))) && (var_1_8 == ((double) var_1_3))) && (((var_1_10 - var_1_11) < var_1_12) ? (var_1_9 == ((unsigned char) var_1_13)) : 1)) && (var_1_14 == ((float) (var_1_4 + var_1_15)))) && (((var_1_8 * var_1_2) >= var_1_3) ? (var_1_16 == ((signed char) ((var_1_17 + var_1_18) - 32))) : 1)) && ((var_1_2 > var_1_8) ? ((! (var_1_16 < last_1_var_1_19)) ? (var_1_19 == ((unsigned short int) var_1_11)) : 1) : (var_1_19 == ((unsigned short int) var_1_11)))
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
