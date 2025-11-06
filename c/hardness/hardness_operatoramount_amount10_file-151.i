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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 128;
unsigned long int var_1_2 = 10;
unsigned long int var_1_4 = 3450369082;
unsigned long int var_1_5 = 0;
signed short int var_1_6 = 0;
unsigned long int last_1_var_1_1 = 128;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_2;
 if (stepLocal_0 < last_1_var_1_1) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  var_1_1 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
 }
 unsigned long int stepLocal_1 = var_1_4;
 if (stepLocal_1 != (2953558882u - var_1_5)) {
  var_1_6 = 16;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 2147483647);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return ((var_1_2 < last_1_var_1_1) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned long int) ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))) && ((var_1_4 != (2953558882u - var_1_5)) ? (var_1_6 == ((signed short int) 16)) : 1)
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
