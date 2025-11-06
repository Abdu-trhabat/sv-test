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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 10.5;
float var_1_2 = 255.6;
float var_1_3 = 128.75;
float var_1_4 = 2.7;
float var_1_5 = 7.5;
float var_1_6 = 0.25;
float var_1_7 = 15.25;
float var_1_8 = 31.2;
unsigned long int var_1_9 = 64;
unsigned long int var_1_10 = 256;
signed char var_1_11 = -2;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed char var_1_14 = 4;
signed char var_1_15 = -10;
signed char var_1_16 = 5;
signed char var_1_17 = -16;
signed short int var_1_18 = 5;
signed char var_1_19 = -32;
signed short int var_1_20 = 0;
signed short int var_1_21 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= (var_1_3 + var_1_4)) {
  var_1_1 = ((((var_1_5) > (((var_1_6 - var_1_7) + (var_1_8 - 200.2f)))) ? (var_1_5) : (((var_1_6 - var_1_7) + (var_1_8 - 200.2f)))));
 } else {
  var_1_1 = (((((var_1_6 - var_1_8)) > (var_1_5)) ? ((var_1_6 - var_1_8)) : (var_1_5)));
 }
 var_1_9 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 if (var_1_12 && var_1_13) {
  var_1_11 = var_1_14;
 } else {
  var_1_11 = (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_17);
 }
 signed char stepLocal_0 = var_1_16;
 if ((64 / var_1_19) <= stepLocal_0) {
  var_1_18 = (((((5) < (var_1_20)) ? (5) : (var_1_20))) - var_1_21);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= (var_1_3 + var_1_4)) ? (var_1_1 == ((float) ((((var_1_5) > (((var_1_6 - var_1_7) + (var_1_8 - 200.2f)))) ? (var_1_5) : (((var_1_6 - var_1_7) + (var_1_8 - 200.2f))))))) : (var_1_1 == ((float) (((((var_1_6 - var_1_8)) > (var_1_5)) ? ((var_1_6 - var_1_8)) : (var_1_5)))))) && (var_1_9 == ((unsigned long int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) && ((var_1_12 && var_1_13) ? (var_1_11 == ((signed char) var_1_14)) : (var_1_11 == ((signed char) (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_17))))) && (((64 / var_1_19) <= var_1_16) ? (var_1_18 == ((signed short int) (((((5) < (var_1_20)) ? (5) : (var_1_20))) - var_1_21))) : 1)
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
