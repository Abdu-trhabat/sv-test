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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_3 = 128;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 0;
signed short int var_1_6 = 0;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 4;
signed long int var_1_12 = 1829634291;
signed long int var_1_13 = 1000000000;
signed short int last_1_var_1_6 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_6 >= -50) {
  var_1_1 = (((((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) > (var_1_5)) ? ((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_5)));
 }
 unsigned short int stepLocal_0 = var_1_1;
 if ((var_1_7 - var_1_8) < stepLocal_0) {
  if (var_1_9) {
   var_1_6 = var_1_8;
  } else {
   if (var_1_10) {
    var_1_6 = var_1_7;
   }
  }
 }
 signed long int stepLocal_2 = var_1_6 + var_1_3;
 signed long int stepLocal_1 = var_1_7 + (4 - var_1_3);
 if (var_1_4 <= stepLocal_2) {
  if (var_1_1 < stepLocal_1) {
   if (var_1_9) {
    var_1_11 = (var_1_3 - (var_1_12 - (var_1_13 - var_1_4)));
   }
  } else {
   var_1_11 = ((((((var_1_8 + var_1_3) - var_1_12)) > (100)) ? (((var_1_8 + var_1_3) - var_1_12)) : (100)));
  }
 } else {
  var_1_11 = var_1_7;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 255);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 536870911);
 assume_abort_if_not(var_1_13 <= 1073741823);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
}
int property() {
 return (((last_1_var_1_6 >= -50) ? (var_1_1 == ((unsigned short int) (((((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) > (var_1_5)) ? ((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_5))))) : 1) && (((var_1_7 - var_1_8) < var_1_1) ? (var_1_9 ? (var_1_6 == ((signed short int) var_1_8)) : (var_1_10 ? (var_1_6 == ((signed short int) var_1_7)) : 1)) : 1)) && ((var_1_4 <= (var_1_6 + var_1_3)) ? ((var_1_1 < (var_1_7 + (4 - var_1_3))) ? (var_1_9 ? (var_1_11 == ((signed long int) (var_1_3 - (var_1_12 - (var_1_13 - var_1_4))))) : 1) : (var_1_11 == ((signed long int) ((((((var_1_8 + var_1_3) - var_1_12)) > (100)) ? (((var_1_8 + var_1_3) - var_1_12)) : (100)))))) : (var_1_11 == ((signed long int) var_1_7)))
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
