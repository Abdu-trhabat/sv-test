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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
signed long int var_1_2 = 256;
unsigned char var_1_3 = 0;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 8;
signed char var_1_6 = 16;
signed char var_1_7 = 32;
signed char var_1_8 = 5;
signed char var_1_9 = 64;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = -50 < var_1_2;
 if (stepLocal_0 || var_1_3) {
  var_1_1 = ((((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) < (var_1_5)) ? (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) : (var_1_5)));
 }
 var_1_6 = (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))) - (var_1_9 - 25));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 63);
 assume_abort_if_not(var_1_9 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((-50 < var_1_2) || var_1_3) ? (var_1_1 == ((unsigned short int) ((((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) < (var_1_5)) ? (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) : (var_1_5))))) : 1) && (var_1_6 == ((signed char) (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))) - (var_1_9 - 25))))
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
