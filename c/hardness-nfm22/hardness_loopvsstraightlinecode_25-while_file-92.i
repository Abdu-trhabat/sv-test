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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9225_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_2 = 2;
signed char var_1_3 = 8;
signed char var_1_4 = 0;
signed char var_1_5 = 32;
signed char var_1_6 = 10;
double var_1_7 = 1000000.625;
double var_1_8 = 16.65;
signed char var_1_9 = 25;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
float var_1_12 = 0.25;
unsigned short int var_1_13 = 54726;
void initially(void) {
}
void step(void) {
 var_1_1 = ((var_1_2 + var_1_3) - ((((var_1_4) > ((var_1_5 + var_1_6))) ? (var_1_4) : ((var_1_5 + var_1_6)))));
 signed char stepLocal_0 = var_1_4;
 if (((~ var_1_5) * (var_1_6 & var_1_3)) >= stepLocal_0) {
  var_1_7 = var_1_8;
 }
 unsigned char stepLocal_1 = var_1_10;
 if (stepLocal_1 && var_1_11) {
  var_1_9 = (var_1_3 - var_1_2);
 }
 signed long int stepLocal_4 = var_1_13 - var_1_5;
 unsigned char stepLocal_3 = var_1_10;
 unsigned char stepLocal_2 = var_1_10;
 if (var_1_11 || stepLocal_3) {
  if (stepLocal_2 || (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) < 32)) {
   if (stepLocal_4 < var_1_2) {
    var_1_12 = var_1_8;
   } else {
    var_1_12 = var_1_8;
   }
  } else {
   var_1_12 = var_1_8;
  }
 } else {
  var_1_12 = var_1_8;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 63);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65535);
}
void updateLastVariables() {
}
int property() {
 return (((var_1_1 == ((signed char) ((var_1_2 + var_1_3) - ((((var_1_4) > ((var_1_5 + var_1_6))) ? (var_1_4) : ((var_1_5 + var_1_6))))))) && ((((~ var_1_5) * (var_1_6 & var_1_3)) >= var_1_4) ? (var_1_7 == ((double) var_1_8)) : 1)) && ((var_1_10 && var_1_11) ? (var_1_9 == ((signed char) (var_1_3 - var_1_2))) : 1)) && ((var_1_11 || var_1_10) ? ((var_1_10 || (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) < 32)) ? (((var_1_13 - var_1_5) < var_1_2) ? (var_1_12 == ((float) var_1_8)) : (var_1_12 == ((float) var_1_8))) : (var_1_12 == ((float) var_1_8))) : (var_1_12 == ((float) var_1_8)))
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
