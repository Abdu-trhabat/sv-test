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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
signed long int var_1_2 = 128;
signed long int var_1_4 = -25;
unsigned long int var_1_5 = 3015085555;
unsigned long int var_1_6 = 100;
unsigned long int var_1_7 = 100000;
unsigned char var_1_8 = 16;
unsigned char var_1_9 = 64;
unsigned long int last_1_var_1_1 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = 1000000000;
 if (stepLocal_0 >= ((4 & var_1_2) * (last_1_var_1_1 / var_1_4))) {
  var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
 } else {
  var_1_1 = var_1_7;
 }
 var_1_8 = var_1_9;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 2147483647);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741824);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return ((1000000000 >= ((4 & var_1_2) * (last_1_var_1_1 / var_1_4))) ? (var_1_1 == ((unsigned long int) (var_1_5 - (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned long int) var_1_7))) && (var_1_8 == ((unsigned char) var_1_9))
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
