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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 8;
unsigned char var_1_4 = 8;
unsigned char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 1;
unsigned short int var_1_9 = 1;
unsigned char var_1_10 = 128;
signed char var_1_11 = -10;
signed char var_1_13 = -4;
signed char var_1_14 = 5;
unsigned long int var_1_15 = 2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_7;
 signed long int stepLocal_0 = var_1_4 - var_1_3;
 if (var_1_2) {
  var_1_1 = (((((((((var_1_3 + var_1_4)) > (50)) ? ((var_1_3 + var_1_4)) : (50)))) > (var_1_5)) ? ((((((var_1_3 + var_1_4)) > (50)) ? ((var_1_3 + var_1_4)) : (50)))) : (var_1_5)));
 } else {
  if (var_1_6 && stepLocal_1) {
   var_1_1 = var_1_5;
  } else {
   if (stepLocal_0 < var_1_5) {
    var_1_1 = var_1_4;
   } else {
    var_1_1 = 5;
   }
  }
 }
 if (var_1_7) {
  var_1_8 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 } else {
  var_1_8 = (var_1_1 + var_1_3);
 }
 var_1_13 = var_1_14;
 var_1_15 = var_1_3;
 if (var_1_5 <= ((((var_1_3) > ((var_1_10 - var_1_4))) ? (var_1_3) : ((var_1_10 - var_1_4))))) {
  if ((var_1_4 / var_1_11) > (var_1_15 * (var_1_15 + var_1_5))) {
   var_1_9 = 128;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 255);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -128);
 assume_abort_if_not(var_1_11 <= 127);
 assume_abort_if_not(var_1_11 != 0);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
}
void updateLastVariables() {
}
int property() {
 return ((((var_1_2 ? (var_1_1 == ((unsigned char) (((((((((var_1_3 + var_1_4)) > (50)) ? ((var_1_3 + var_1_4)) : (50)))) > (var_1_5)) ? ((((((var_1_3 + var_1_4)) > (50)) ? ((var_1_3 + var_1_4)) : (50)))) : (var_1_5))))) : ((var_1_6 && var_1_7) ? (var_1_1 == ((unsigned char) var_1_5)) : (((var_1_4 - var_1_3) < var_1_5) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) 5))))) && (var_1_7 ? (var_1_8 == ((unsigned short int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_8 == ((unsigned short int) (var_1_1 + var_1_3))))) && ((var_1_5 <= ((((var_1_3) > ((var_1_10 - var_1_4))) ? (var_1_3) : ((var_1_10 - var_1_4))))) ? (((var_1_4 / var_1_11) > (var_1_15 * (var_1_15 + var_1_5))) ? (var_1_9 == ((unsigned short int) 128)) : 1) : 1)) && (var_1_13 == ((signed char) var_1_14))) && (var_1_15 == ((unsigned long int) var_1_3))
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
