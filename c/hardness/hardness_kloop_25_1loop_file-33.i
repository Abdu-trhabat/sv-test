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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3325_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -10;
signed long int var_1_2 = 100;
signed long int var_1_3 = -8;
signed long int var_1_4 = 5;
signed short int var_1_5 = 4;
signed short int var_1_6 = 0;
unsigned char var_1_7 = 200;
unsigned char var_1_8 = 4;
signed char var_1_9 = 50;
signed char var_1_12 = -5;
float var_1_13 = 999999999999.8;
float var_1_14 = 100.5;
float var_1_15 = 32.75;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (var_1_2 ^ var_1_3) + var_1_4;
 if (stepLocal_0 < -1) {
  var_1_1 = 8;
 } else {
  var_1_1 = (128 - (var_1_5 + var_1_6));
 }
 if (var_1_3 == var_1_1) {
  var_1_7 = var_1_8;
 }
 signed short int stepLocal_3 = var_1_1;
 if (var_1_4 == stepLocal_3) {
  var_1_13 = (var_1_14 - var_1_15);
 }
 var_1_16 = var_1_17;
 var_1_18 = var_1_8;
 signed short int stepLocal_2 = var_1_1;
 unsigned char stepLocal_1 = var_1_16;
 if (var_1_16) {
  if (((var_1_7 * var_1_5) < -10000) && stepLocal_1) {
   if (stepLocal_2 > var_1_7) {
    var_1_9 = var_1_12;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 ^ var_1_3) + var_1_4) < -1) ? (var_1_1 == ((signed short int) 8)) : (var_1_1 == ((signed short int) (128 - (var_1_5 + var_1_6))))) && ((var_1_3 == var_1_1) ? (var_1_7 == ((unsigned char) var_1_8)) : 1)) && (var_1_16 ? ((((var_1_7 * var_1_5) < -10000) && var_1_16) ? ((var_1_1 > var_1_7) ? (var_1_9 == ((signed char) var_1_12)) : 1) : 1) : 1)) && ((var_1_4 == var_1_1) ? (var_1_13 == ((float) (var_1_14 - var_1_15))) : 1)) && (var_1_16 == ((unsigned char) var_1_17))) && (var_1_18 == ((unsigned char) var_1_8))
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
