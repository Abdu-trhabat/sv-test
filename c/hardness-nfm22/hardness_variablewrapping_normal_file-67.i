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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed short int var_1_4 = -64;
signed short int var_1_5 = 256;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 256;
signed long int var_1_8 = 50;
unsigned char var_1_9 = 0;
signed long int var_1_10 = -4;
float var_1_11 = 15.125;
float var_1_12 = 0.9;
double var_1_13 = 25.875;
unsigned short int var_1_14 = 50;
signed short int last_1_var_1_1 = 2;
unsigned short int last_1_var_1_6 = 128;
signed long int last_1_var_1_8 = 50;
void initially(void) {
}
void step(void) {
 if (! (last_1_var_1_6 <= last_1_var_1_1)) {
  var_1_1 = (var_1_4 + var_1_5);
 }
 signed long int stepLocal_0 = 1 * var_1_4;
 if ((var_1_1 >> var_1_5) > stepLocal_0) {
  var_1_6 = (((((42286 - var_1_7)) > (0)) ? ((42286 - var_1_7)) : (0)));
 } else {
  var_1_6 = var_1_7;
 }
 var_1_11 = var_1_12;
 var_1_13 = var_1_12;
 var_1_14 = var_1_7;
 signed long int stepLocal_2 = var_1_4 / var_1_10;
 unsigned short int stepLocal_1 = var_1_7;
 if (var_1_9) {
  var_1_8 = ((((var_1_6) < (last_1_var_1_8)) ? (var_1_6) : (last_1_var_1_8)));
 } else {
  if (var_1_14 > stepLocal_2) {
   if (stepLocal_1 > var_1_6) {
    var_1_8 = ((((var_1_4) < (100)) ? (var_1_4) : (100)));
   } else {
    var_1_8 = (last_1_var_1_8 - var_1_7);
   }
  } else {
   var_1_8 = (var_1_6 + var_1_5);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 assume_abort_if_not(var_1_10 != 0);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_8 = var_1_8;
}
int property() {
 return ((((((! (last_1_var_1_6 <= last_1_var_1_1)) ? (var_1_1 == ((signed short int) (var_1_4 + var_1_5))) : 1) && (((var_1_1 >> var_1_5) > (1 * var_1_4)) ? (var_1_6 == ((unsigned short int) (((((42286 - var_1_7)) > (0)) ? ((42286 - var_1_7)) : (0))))) : (var_1_6 == ((unsigned short int) var_1_7)))) && (var_1_9 ? (var_1_8 == ((signed long int) ((((var_1_6) < (last_1_var_1_8)) ? (var_1_6) : (last_1_var_1_8))))) : ((var_1_14 > (var_1_4 / var_1_10)) ? ((var_1_7 > var_1_6) ? (var_1_8 == ((signed long int) ((((var_1_4) < (100)) ? (var_1_4) : (100))))) : (var_1_8 == ((signed long int) (last_1_var_1_8 - var_1_7)))) : (var_1_8 == ((signed long int) (var_1_6 + var_1_5)))))) && (var_1_11 == ((float) var_1_12))) && (var_1_13 == ((double) var_1_12))) && (var_1_14 == ((unsigned short int) var_1_7))
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
