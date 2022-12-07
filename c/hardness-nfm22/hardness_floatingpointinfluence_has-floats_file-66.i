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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_9 = 38382;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 2;
signed long int var_1_16 = -1000000;
unsigned char var_1_18 = 100;
unsigned long int var_1_19 = 10;
unsigned char last_1_var_1_10 = 0;
signed long int last_1_var_1_16 = -1000000;
void initially(void) {
}
void step(void) {
 var_1_18 = var_1_15;
 var_1_19 = var_1_12;
 unsigned char stepLocal_1 = var_1_18;
 unsigned char stepLocal_0 = var_1_11;
 if ((var_1_18 > last_1_var_1_10) || stepLocal_0) {
  if (last_1_var_1_10 != stepLocal_1) {
   var_1_10 = var_1_12;
  } else {
   var_1_10 = (((((var_1_13 + var_1_14)) > (((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15))))) ? ((var_1_13 + var_1_14)) : (((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15))))));
  }
 }
 if (var_1_10 <= var_1_19) {
  var_1_1 = (var_1_18 + ((var_1_10 + var_1_18) + (var_1_7 - var_1_18)));
 } else {
  var_1_1 = (var_1_9 - var_1_7);
 }
 if (var_1_9 < var_1_10) {
  var_1_16 = (var_1_7 + 16);
 } else {
  if (var_1_11 || (var_1_19 <= last_1_var_1_16)) {
   var_1_16 = var_1_10;
  } else {
   var_1_16 = var_1_1;
  }
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_16 = var_1_16;
}
int property() {
 return (((((var_1_10 <= var_1_19) ? (var_1_1 == ((unsigned short int) (var_1_18 + ((var_1_10 + var_1_18) + (var_1_7 - var_1_18))))) : (var_1_1 == ((unsigned short int) (var_1_9 - var_1_7)))) && (((var_1_18 > last_1_var_1_10) || var_1_11) ? ((last_1_var_1_10 != var_1_18) ? (var_1_10 == ((unsigned char) var_1_12)) : (var_1_10 == ((unsigned char) (((((var_1_13 + var_1_14)) > (((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15))))) ? ((var_1_13 + var_1_14)) : (((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15))))))))) : 1)) && ((var_1_9 < var_1_10) ? (var_1_16 == ((signed long int) (var_1_7 + 16))) : ((var_1_11 || (var_1_19 <= last_1_var_1_16)) ? (var_1_16 == ((signed long int) var_1_10)) : (var_1_16 == ((signed long int) var_1_1))))) && (var_1_18 == ((unsigned char) var_1_15))) && (var_1_19 == ((unsigned long int) var_1_12))
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
