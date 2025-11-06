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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -16;
signed long int var_1_4 = 10;
signed long int var_1_5 = 10000000;
signed char var_1_6 = 16;
signed char var_1_7 = 1;
signed char var_1_8 = 16;
signed char var_1_9 = 2;
signed char var_1_10 = 10;
signed char var_1_11 = 0;
unsigned char var_1_12 = 2;
unsigned char var_1_13 = 243;
unsigned char var_1_14 = 0;
double var_1_15 = 1000000.5;
double var_1_16 = 2.5;
signed long int var_1_17 = -16;
signed char last_1_var_1_9 = 2;
unsigned char last_1_var_1_12 = 2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_var_1_9;
 unsigned char stepLocal_0 = var_1_4 < var_1_5;
 if (last_1_var_1_12 != stepLocal_1) {
  if ((last_1_var_1_9 != last_1_var_1_12) && stepLocal_0) {
   var_1_1 = (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8)));
  }
 }
 var_1_9 = (((((var_1_10 - var_1_11)) > (var_1_8)) ? ((var_1_10 - var_1_11)) : (var_1_8)));
 var_1_15 = var_1_16;
 var_1_17 = var_1_10;
 signed long int stepLocal_3 = ~ -128;
 signed char stepLocal_2 = var_1_1;
 if (var_1_10 <= stepLocal_3) {
  if (var_1_17 <= stepLocal_2) {
   var_1_12 = (((var_1_13 - 4) - var_1_14) - var_1_11);
  } else {
   var_1_12 = 1;
  }
 } else {
  var_1_12 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 222);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 return (((((last_1_var_1_12 != last_1_var_1_9) ? (((last_1_var_1_9 != last_1_var_1_12) && (var_1_4 < var_1_5)) ? (var_1_1 == ((signed char) (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))))) : 1) : 1) && (var_1_9 == ((signed char) (((((var_1_10 - var_1_11)) > (var_1_8)) ? ((var_1_10 - var_1_11)) : (var_1_8)))))) && ((var_1_10 <= (~ -128)) ? ((var_1_17 <= var_1_1) ? (var_1_12 == ((unsigned char) (((var_1_13 - 4) - var_1_14) - var_1_11))) : (var_1_12 == ((unsigned char) 1))) : (var_1_12 == ((unsigned char) var_1_11)))) && (var_1_15 == ((double) var_1_16))) && (var_1_17 == ((signed long int) var_1_10))
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
