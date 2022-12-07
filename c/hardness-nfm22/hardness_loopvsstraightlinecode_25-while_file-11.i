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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1125_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -16;
double var_1_2 = 50.75;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
signed char var_1_7 = 10;
float var_1_8 = 32.5;
float var_1_9 = 1000000.7;
float var_1_10 = 1.2;
unsigned short int var_1_11 = 256;
signed long int var_1_12 = -64;
signed long int var_1_13 = -16;
unsigned short int var_1_14 = 56281;
unsigned short int var_1_15 = 32;
float last_1_var_1_8 = 32.5;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_8 >= var_1_2) {
  if (var_1_6) {
   if (! var_1_5) {
    var_1_8 = ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)));
   } else {
    var_1_8 = var_1_9;
   }
  }
 }
 unsigned char stepLocal_0 = var_1_5;
 if ((var_1_2 - 5.25) < (var_1_8 * (var_1_8 * 199.4))) {
  if (stepLocal_0 && var_1_6) {
   if (var_1_8 < var_1_8) {
    var_1_1 = var_1_7;
   } else {
    var_1_1 = var_1_7;
   }
  }
 }
 signed long int stepLocal_1 = var_1_1 / ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)));
 if (stepLocal_1 < var_1_7) {
  var_1_11 = (var_1_14 - var_1_15);
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 assume_abort_if_not(var_1_13 != 0);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
}
int property() {
 return ((((var_1_2 - 5.25) < (var_1_8 * (var_1_8 * 199.4))) ? ((var_1_5 && var_1_6) ? ((var_1_8 < var_1_8) ? (var_1_1 == ((signed char) var_1_7)) : (var_1_1 == ((signed char) var_1_7))) : 1) : 1) && ((last_1_var_1_8 >= var_1_2) ? (var_1_6 ? ((! var_1_5) ? (var_1_8 == ((float) ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) : (var_1_8 == ((float) var_1_9))) : 1) : 1)) && (((var_1_1 / ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) < var_1_7) ? (var_1_11 == ((unsigned short int) (var_1_14 - var_1_15))) : 1)
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
