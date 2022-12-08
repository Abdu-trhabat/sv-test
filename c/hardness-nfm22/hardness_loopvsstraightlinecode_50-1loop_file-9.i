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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch950_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 5.5;
signed short int var_1_3 = 1;
signed long int var_1_5 = -64;
signed char var_1_6 = 10;
signed char var_1_7 = 5;
double var_1_8 = 16.25;
double var_1_9 = 1.8;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 16;
unsigned long int var_1_13 = 128;
unsigned char var_1_15 = 1;
unsigned short int var_1_16 = 256;
signed char var_1_18 = -2;
unsigned char last_1_var_1_10 = 32;
unsigned short int last_1_var_1_12 = 16;
unsigned long int last_1_var_1_13 = 128;
void initially(void) {
}
void step(void) {
 if (((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) {
  var_1_12 = var_1_6;
 }
 signed long int stepLocal_2 = last_1_var_1_12 + var_1_7;
 if (var_1_6 <= stepLocal_2) {
  var_1_10 = var_1_11;
 } else {
  var_1_10 = (var_1_3 + var_1_7);
 }
 if ((1 << var_1_10) != (-500 / -100)) {
  if ((var_1_6 - var_1_3) >= (var_1_12 + 256)) {
   var_1_13 = var_1_11;
  } else {
   var_1_13 = var_1_12;
  }
 } else {
  var_1_13 = var_1_6;
 }
 var_1_18 = var_1_3;
 signed long int stepLocal_4 = (((var_1_11) > ((var_1_12 * -64))) ? (var_1_11) : ((var_1_12 * -64)));
 unsigned char stepLocal_3 = var_1_10;
 if ((- var_1_9) <= var_1_8) {
  if (var_1_15) {
   if (stepLocal_4 < var_1_12) {
    if (var_1_13 == stepLocal_3) {
     var_1_16 = var_1_11;
    }
   } else {
    var_1_16 = 256;
   }
  } else {
   var_1_16 = var_1_3;
  }
 } else {
  var_1_16 = var_1_10;
 }
 signed long int stepLocal_1 = (var_1_10 & 0) * var_1_5;
 signed long int stepLocal_0 = var_1_16 >> var_1_3;
 if (stepLocal_0 == (var_1_10 / var_1_5)) {
  if ((var_1_3 << (var_1_6 - var_1_7)) > stepLocal_1) {
   var_1_1 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
  } else {
   var_1_1 = var_1_8;
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 8);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 6);
 assume_abort_if_not(var_1_6 <= 12);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 6);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return (((((((var_1_16 >> var_1_3) == (var_1_10 / var_1_5)) ? (((var_1_3 << (var_1_6 - var_1_7)) > ((var_1_10 & 0) * var_1_5)) ? (var_1_1 == ((double) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_1 == ((double) var_1_8))) : 1) && ((var_1_6 <= (last_1_var_1_12 + var_1_7)) ? (var_1_10 == ((unsigned char) var_1_11)) : (var_1_10 == ((unsigned char) (var_1_3 + var_1_7))))) && ((((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) ? (var_1_12 == ((unsigned short int) var_1_6)) : 1)) && (((1 << var_1_10) != (-500 / -100)) ? (((var_1_6 - var_1_3) >= (var_1_12 + 256)) ? (var_1_13 == ((unsigned long int) var_1_11)) : (var_1_13 == ((unsigned long int) var_1_12))) : (var_1_13 == ((unsigned long int) var_1_6)))) && (((- var_1_9) <= var_1_8) ? (var_1_15 ? ((((((var_1_11) > ((var_1_12 * -64))) ? (var_1_11) : ((var_1_12 * -64)))) < var_1_12) ? ((var_1_13 == var_1_10) ? (var_1_16 == ((unsigned short int) var_1_11)) : 1) : (var_1_16 == ((unsigned short int) 256))) : (var_1_16 == ((unsigned short int) var_1_3))) : (var_1_16 == ((unsigned short int) var_1_10)))) && (var_1_18 == ((signed char) var_1_3))
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
