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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 25;
unsigned char var_1_2 = 1;
signed char var_1_5 = 16;
unsigned short int var_1_6 = 16;
signed char var_1_7 = 4;
unsigned short int var_1_8 = 2;
signed char var_1_9 = 64;
signed char var_1_10 = 0;
unsigned char var_1_11 = 16;
double var_1_12 = 128.4;
double var_1_13 = 50.2;
double var_1_14 = 3.8;
double var_1_15 = 25.1;
void initially(void) {
}
void step(void) {
 if (((var_1_12 - var_1_13) + var_1_14) <= (256.625 * ((((1.875) > (var_1_15)) ? (1.875) : (var_1_15))))) {
  var_1_11 = (((((5) < 0 ) ? -(5) : (5))) + 5);
 }
 if (var_1_2) {
  var_1_1 = ((((var_1_11) > (var_1_11)) ? (var_1_11) : (var_1_11)));
 }
 if ((var_1_1 == 16) || (var_1_11 < (10 / var_1_6))) {
  var_1_5 = var_1_7;
 } else {
  var_1_5 = 5;
 }
 unsigned char stepLocal_1 = var_1_11;
 unsigned char stepLocal_0 = var_1_2;
 if (stepLocal_0 || (var_1_11 >= var_1_11)) {
  if (stepLocal_1 < ((var_1_9 - var_1_10) - 16)) {
   var_1_8 = ((((var_1_10) > (32)) ? (var_1_10) : (32)));
  }
 } else {
  var_1_8 = ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11)));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 63);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 64);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((var_1_2 ? (var_1_1 == ((unsigned short int) ((((var_1_11) > (var_1_11)) ? (var_1_11) : (var_1_11))))) : 1) && (((var_1_1 == 16) || (var_1_11 < (10 / var_1_6))) ? (var_1_5 == ((signed char) var_1_7)) : (var_1_5 == ((signed char) 5)))) && ((var_1_2 || (var_1_11 >= var_1_11)) ? ((var_1_11 < ((var_1_9 - var_1_10) - 16)) ? (var_1_8 == ((unsigned short int) ((((var_1_10) > (32)) ? (var_1_10) : (32))))) : 1) : (var_1_8 == ((unsigned short int) ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11))))))) && ((((var_1_12 - var_1_13) + var_1_14) <= (256.625 * ((((1.875) > (var_1_15)) ? (1.875) : (var_1_15))))) ? (var_1_11 == ((unsigned char) (((((5) < 0 ) ? -(5) : (5))) + 5))) : 1)
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
