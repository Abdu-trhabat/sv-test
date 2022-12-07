// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 4.8;
double var_1_2 = 63.5;
double var_1_3 = 9999999.5;
double var_1_4 = 0.6;
signed short int var_1_6 = 10;
signed long int var_1_7 = -1;
double var_1_8 = 32.34;
unsigned char var_1_9 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 0;
unsigned long int var_1_16 = 2731588682;
unsigned long int var_1_17 = 2;
unsigned long int var_1_18 = 50;
unsigned char last_1_var_1_9 = 0;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - var_1_3);
 if (((- var_1_2) * var_1_8) == var_1_1) {
  var_1_9 = ((last_1_var_1_9 || var_1_11) && (var_1_12 && (var_1_13 && var_1_14)));
 }
 if (var_1_14) {
  var_1_15 = var_1_6;
 } else {
  var_1_15 = (var_1_16 - ((((var_1_6) > ((1251570750u - var_1_17))) ? (var_1_6) : ((1251570750u - var_1_17)))));
 }
 var_1_18 = var_1_6;
 unsigned long int stepLocal_0 = (var_1_18 >> var_1_6) / var_1_7;
 if (8 < stepLocal_0) {
  var_1_4 = ((15.475 + 256.75) + var_1_8);
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854765600e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1073741823);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
}
int property() {
 return ((((var_1_1 == ((double) (var_1_2 - var_1_3))) && ((8 < ((var_1_18 >> var_1_6) / var_1_7)) ? (var_1_4 == ((double) ((15.475 + 256.75) + var_1_8))) : 1)) && ((((- var_1_2) * var_1_8) == var_1_1) ? (var_1_9 == ((unsigned char) ((last_1_var_1_9 || var_1_11) && (var_1_12 && (var_1_13 && var_1_14))))) : 1)) && (var_1_14 ? (var_1_15 == ((unsigned long int) var_1_6)) : (var_1_15 == ((unsigned long int) (var_1_16 - ((((var_1_6) > ((1251570750u - var_1_17))) ? (var_1_6) : ((1251570750u - var_1_17))))))))) && (var_1_18 == ((unsigned long int) var_1_6))
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
