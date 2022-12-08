// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1725_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 10000000.8;
double var_1_3 = 16.2;
double var_1_4 = 7.5;
double var_1_5 = 49.6;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 3280833198;
unsigned long int var_1_8 = 10000000;
signed short int var_1_10 = 1;
signed long int var_1_11 = -32;
double var_1_12 = 128.25;
double var_1_13 = 4.4;
signed long int var_1_14 = -1;
signed long int var_1_15 = 4;
signed long int var_1_16 = 64;
signed long int var_1_17 = 4;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_5 * (- var_1_3)) != ((var_1_4 / 255.25) / ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) {
  var_1_11 = (((((var_1_14 - var_1_15)) > ((var_1_16 - var_1_17))) ? ((var_1_14 - var_1_15)) : ((var_1_16 - var_1_17))));
 }
 if (((var_1_15 >> var_1_11) * var_1_7) <= var_1_17) {
  var_1_18 = var_1_19;
 }
 if (var_1_18) {
  var_1_1 = (var_1_3 + ((((var_1_4) < ((49.5 + var_1_5))) ? (var_1_4) : ((49.5 + var_1_5)))));
 }
 if ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_8) < var_1_11) {
  var_1_6 = var_1_10;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427382800e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427382800e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 2147483647);
 assume_abort_if_not(var_1_7 <= 4294967295);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
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
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
}
void updateLastVariables() {
}
int property() {
 return (((var_1_18 ? (var_1_1 == ((double) (var_1_3 + ((((var_1_4) < ((49.5 + var_1_5))) ? (var_1_4) : ((49.5 + var_1_5))))))) : 1) && (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_8) < var_1_11) ? (var_1_6 == ((signed short int) var_1_10)) : 1)) && (((var_1_5 * (- var_1_3)) != ((var_1_4 / 255.25) / ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (var_1_11 == ((signed long int) (((((var_1_14 - var_1_15)) > ((var_1_16 - var_1_17))) ? ((var_1_14 - var_1_15)) : ((var_1_16 - var_1_17)))))) : 1)) && ((((var_1_15 >> var_1_11) * var_1_7) <= var_1_17) ? (var_1_18 == ((unsigned char) var_1_19)) : 1)
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
