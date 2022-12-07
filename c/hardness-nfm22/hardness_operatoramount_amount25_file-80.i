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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 256;
signed long int var_1_2 = -128;
signed long int var_1_3 = 8;
signed long int var_1_4 = 0;
signed long int var_1_5 = 8;
signed long int var_1_6 = 10;
signed long int var_1_7 = 5;
signed long int var_1_8 = 128;
signed short int var_1_9 = 128;
float var_1_10 = 64.4;
float var_1_11 = 10.25;
double var_1_12 = 63.175;
unsigned char var_1_13 = 1;
double var_1_14 = 128.5;
double var_1_15 = 128.8;
void initially(void) {
}
void step(void) {
 if ((((((var_1_3 - var_1_4)) > (var_1_2)) ? ((var_1_3 - var_1_4)) : (var_1_2))) <= (((((var_1_5 - var_1_6)) < ((var_1_7 % var_1_8))) ? ((var_1_5 - var_1_6)) : ((var_1_7 % var_1_8))))) {
  var_1_1 = var_1_9;
 }
 if (var_1_8 > var_1_1) {
  if (var_1_1 == var_1_4) {
   var_1_10 = var_1_11;
  }
 }
 signed long int stepLocal_1 = var_1_5;
 signed short int stepLocal_0 = var_1_1;
 if (stepLocal_0 <= var_1_8) {
  if (stepLocal_1 != -64) {
   if (var_1_13) {
    var_1_12 = ((((var_1_14 - var_1_15) < 0 ) ? -(var_1_14 - var_1_15) : (var_1_14 - var_1_15)));
   } else {
    var_1_12 = (var_1_15 - var_1_14);
   }
  } else {
   var_1_12 = 32.8;
  }
 } else {
  var_1_12 = var_1_11;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_3 - var_1_4)) > (var_1_2)) ? ((var_1_3 - var_1_4)) : (var_1_2))) <= (((((var_1_5 - var_1_6)) < ((var_1_7 % var_1_8))) ? ((var_1_5 - var_1_6)) : ((var_1_7 % var_1_8))))) ? (var_1_1 == ((signed short int) var_1_9)) : 1) && ((var_1_8 > var_1_1) ? ((var_1_1 == var_1_4) ? (var_1_10 == ((float) var_1_11)) : 1) : 1)) && ((var_1_1 <= var_1_8) ? ((var_1_5 != -64) ? (var_1_13 ? (var_1_12 == ((double) ((((var_1_14 - var_1_15) < 0 ) ? -(var_1_14 - var_1_15) : (var_1_14 - var_1_15))))) : (var_1_12 == ((double) (var_1_15 - var_1_14)))) : (var_1_12 == ((double) 32.8))) : (var_1_12 == ((double) var_1_11)))
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
