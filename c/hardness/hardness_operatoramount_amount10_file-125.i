// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -4;
signed short int var_1_2 = 128;
signed short int var_1_3 = -1;
signed short int var_1_4 = -5;
signed long int var_1_5 = 2;
signed char var_1_6 = 64;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_5 & 32;
 unsigned char stepLocal_0 = var_1_7;
 if ((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) * var_1_4) < stepLocal_1) {
  var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  if (stepLocal_0 && var_1_8) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = -100;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -126);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) * var_1_4) < (var_1_5 & 32)) ? (var_1_1 == ((signed char) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : ((var_1_7 && var_1_8) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) -100)))
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
