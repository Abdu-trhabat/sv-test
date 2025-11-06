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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 19138;
unsigned short int var_1_5 = 0;
signed char var_1_6 = 25;
signed long int var_1_7 = -50;
double var_1_8 = 8.3;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 1;
double var_1_11 = 256.2;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((17222 - var_1_3) + (((((29916) < (var_1_4)) ? (29916) : (var_1_4))) - var_1_5));
 }
 unsigned short int stepLocal_0 = var_1_4;
 if (stepLocal_0 <= ((((var_1_3) > ((var_1_5 << var_1_1))) ? (var_1_3) : ((var_1_5 << var_1_1))))) {
  var_1_7 = (((((var_1_5 - var_1_3)) < (var_1_4)) ? ((var_1_5 - var_1_3)) : (var_1_4)));
 } else {
  var_1_7 = (var_1_5 + (var_1_1 + var_1_4));
 }
 if ((var_1_9 - ((((5) > (var_1_10)) ? (5) : (var_1_10)))) >= var_1_3) {
  var_1_8 = var_1_11;
 }
 if (var_1_2 && (var_1_4 >= (var_1_3 + var_1_7))) {
  var_1_6 = 8;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 16383);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 16383);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 255);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 ? (var_1_1 == ((unsigned short int) ((17222 - var_1_3) + (((((29916) < (var_1_4)) ? (29916) : (var_1_4))) - var_1_5)))) : 1) && ((var_1_2 && (var_1_4 >= (var_1_3 + var_1_7))) ? (var_1_6 == ((signed char) 8)) : 1)) && ((var_1_4 <= ((((var_1_3) > ((var_1_5 << var_1_1))) ? (var_1_3) : ((var_1_5 << var_1_1))))) ? (var_1_7 == ((signed long int) (((((var_1_5 - var_1_3)) < (var_1_4)) ? ((var_1_5 - var_1_3)) : (var_1_4))))) : (var_1_7 == ((signed long int) (var_1_5 + (var_1_1 + var_1_4)))))) && (((var_1_9 - ((((5) > (var_1_10)) ? (5) : (var_1_10)))) >= var_1_3) ? (var_1_8 == ((double) var_1_11)) : 1)
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
