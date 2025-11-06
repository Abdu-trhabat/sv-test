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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
signed long int var_1_2 = 4;
signed long int var_1_3 = 2;
signed long int var_1_4 = -16;
signed long int var_1_5 = -4;
signed long int var_1_6 = -64;
unsigned short int var_1_7 = 10;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 128;
void initially(void) {
}
void step(void) {
 var_1_1 = ((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)));
 var_1_4 = (var_1_5 + var_1_6);
 unsigned char stepLocal_0 = var_1_8;
 if (stepLocal_0 || var_1_9) {
  if (! var_1_9) {
   var_1_7 = (var_1_10 + var_1_11);
  }
 } else {
  var_1_7 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483647);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483647);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1073741823);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_1 == ((signed long int) ((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))))) && (var_1_4 == ((signed long int) (var_1_5 + var_1_6)))) && ((var_1_8 || var_1_9) ? ((! var_1_9) ? (var_1_7 == ((unsigned short int) (var_1_10 + var_1_11))) : 1) : (var_1_7 == ((unsigned short int) var_1_11)))
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
