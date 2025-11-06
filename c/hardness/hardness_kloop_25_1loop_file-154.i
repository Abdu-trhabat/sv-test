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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15425_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 50;
signed long int var_1_2 = 0;
signed long int var_1_3 = 1;
signed long int var_1_4 = 16;
signed long int var_1_5 = 1;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 128;
unsigned char last_1_var_1_9 = 1;
unsigned short int last_1_var_1_13 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_5;
 if (last_1_var_1_9) {
  if (stepLocal_1 <= (((((var_1_3 + last_1_var_1_13)) < (var_1_2)) ? ((var_1_3 + last_1_var_1_13)) : (var_1_2)))) {
   var_1_7 = var_1_6;
  }
 } else {
  var_1_7 = var_1_6;
 }
 signed long int stepLocal_3 = var_1_3 + var_1_2;
 unsigned char stepLocal_2 = var_1_7;
 if (stepLocal_2 < ((var_1_5 >> var_1_10) + var_1_3)) {
  if (stepLocal_3 >= (var_1_7 + var_1_4)) {
   var_1_9 = (var_1_11 && var_1_12);
  }
 }
 signed long int stepLocal_0 = var_1_4 + var_1_5;
 if (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) != stepLocal_0) {
  var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_1 = var_1_6;
 }
 var_1_13 = var_1_6;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 30);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 return ((((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) != (var_1_4 + var_1_5)) ? (var_1_1 == ((unsigned char) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_1 == ((unsigned char) var_1_6))) && (last_1_var_1_9 ? ((var_1_5 <= (((((var_1_3 + last_1_var_1_13)) < (var_1_2)) ? ((var_1_3 + last_1_var_1_13)) : (var_1_2)))) ? (var_1_7 == ((unsigned char) var_1_6)) : 1) : (var_1_7 == ((unsigned char) var_1_6)))) && ((var_1_7 < ((var_1_5 >> var_1_10) + var_1_3)) ? (((var_1_3 + var_1_2) >= (var_1_7 + var_1_4)) ? (var_1_9 == ((unsigned char) (var_1_11 && var_1_12))) : 1) : 1)) && (var_1_13 == ((unsigned short int) var_1_6))
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
