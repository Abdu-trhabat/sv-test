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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
unsigned char var_1_3 = 8;
signed short int var_1_4 = 8;
unsigned short int last_1_var_1_1 = 2;
signed short int last_1_var_1_4 = 8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_3;
 if (last_1_var_1_1 < stepLocal_0) {
  var_1_1 = ((((last_1_var_1_1) < (var_1_3)) ? (last_1_var_1_1) : (var_1_3)));
 }
 signed long int stepLocal_1 = (((var_1_1) < (((((8) > (var_1_1)) ? (8) : (var_1_1))))) ? (var_1_1) : (((((8) > (var_1_1)) ? (8) : (var_1_1)))));
 if (stepLocal_1 <= last_1_var_1_4) {
  var_1_4 = -1;
 } else {
  var_1_4 = last_1_var_1_4;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_4 = var_1_4;
}
int property(void) {
 return ((last_1_var_1_1 < var_1_3) ? (var_1_1 == ((unsigned short int) ((((last_1_var_1_1) < (var_1_3)) ? (last_1_var_1_1) : (var_1_3))))) : 1) && ((((((var_1_1) < (((((8) > (var_1_1)) ? (8) : (var_1_1))))) ? (var_1_1) : (((((8) > (var_1_1)) ? (8) : (var_1_1)))))) <= last_1_var_1_4) ? (var_1_4 == ((signed short int) -1)) : (var_1_4 == ((signed short int) last_1_var_1_4)))
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
