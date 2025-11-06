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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1725_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 10000000.8;
double var_1_3 = 16.2;
double var_1_4 = 7.5;
double var_1_5 = 49.6;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 3280833198;
unsigned long int var_1_8 = 10000000;
unsigned long int var_1_9 = 2;
signed short int var_1_10 = 1;
signed long int var_1_11 = -32;
double var_1_12 = 128.25;
double var_1_13 = 4.4;
signed long int var_1_14 = -1;
signed long int var_1_15 = 4;
signed long int var_1_16 = 64;
signed long int var_1_17 = 4;
unsigned char var_1_18 = 1;
signed char var_1_19 = 64;
signed short int var_1_20 = 4;
unsigned char var_1_21 = 1;
void initially(void) {
}
void step(void) {
 if ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_8) < var_1_9) {
  var_1_6 = var_1_10;
 }
 if ((var_1_5 * (- var_1_3)) != ((var_1_4 / 255.25) / ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) {
  var_1_11 = (((((var_1_14 - var_1_15)) > ((var_1_16 - var_1_17))) ? ((var_1_14 - var_1_15)) : ((var_1_16 - var_1_17))));
 }
 if (((var_1_19 >> var_1_20) * var_1_11) <= var_1_10) {
  var_1_18 = var_1_21;
 }
 if (var_1_18) {
  var_1_1 = (var_1_3 + ((((var_1_4) < ((49.5 + var_1_5))) ? (var_1_4) : ((49.5 + var_1_5)))));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 2147483647);
 assume_abort_if_not(var_1_7 <= 4294967295);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 2147483646);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 6);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_18 ? (var_1_1 == ((double) (var_1_3 + ((((var_1_4) < ((49.5 + var_1_5))) ? (var_1_4) : ((49.5 + var_1_5))))))) : 1) && (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_8) < var_1_9) ? (var_1_6 == ((signed short int) var_1_10)) : 1)) && (((var_1_5 * (- var_1_3)) != ((var_1_4 / 255.25) / ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (var_1_11 == ((signed long int) (((((var_1_14 - var_1_15)) > ((var_1_16 - var_1_17))) ? ((var_1_14 - var_1_15)) : ((var_1_16 - var_1_17)))))) : 1)) && ((((var_1_19 >> var_1_20) * var_1_11) <= var_1_10) ? (var_1_18 == ((unsigned char) var_1_21)) : 1)
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
