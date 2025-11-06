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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 2.4;
unsigned short int var_1_3 = 5;
float var_1_5 = 25.825;
float var_1_6 = 64.8;
unsigned short int var_1_7 = 50;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 16;
signed long int var_1_10 = 5;
void initially(void) {
}
void step(void) {
 var_1_7 = var_1_8;
 var_1_9 = 128;
 var_1_10 = var_1_8;
 if ((((((var_1_9 / var_1_3)) < (5)) ? ((var_1_9 / var_1_3)) : (5))) > (var_1_10 / 25)) {
  var_1_1 = (var_1_5 + var_1_6);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_9 / var_1_3)) < (5)) ? ((var_1_9 / var_1_3)) : (5))) > (var_1_10 / 25)) ? (var_1_1 == ((float) (var_1_5 + var_1_6))) : 1) && (var_1_7 == ((unsigned short int) var_1_8))) && (var_1_9 == ((unsigned short int) 128))) && (var_1_10 == ((signed long int) var_1_8))
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
