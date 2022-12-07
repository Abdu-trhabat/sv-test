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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
signed short int var_1_4 = 1;
float var_1_12 = 1.125;
float var_1_13 = 199.5;
float var_1_14 = 2000000000.3;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 2;
unsigned long int var_1_17 = 50;
signed long int var_1_19 = -32;
float var_1_20 = 8.75;
unsigned char last_1_var_1_15 = 64;
void initially(void) {
}
void step(void) {
 var_1_12 = ((0.85f - var_1_13) + var_1_14);
 if ((- last_1_var_1_15) >= (var_1_4 / ((((-4) < 0 ) ? -(-4) : (-4))))) {
  var_1_15 = var_1_16;
 }
 var_1_20 = var_1_13;
 if (var_1_20 > var_1_20) {
  var_1_1 = ((((var_1_15) > (var_1_15)) ? (var_1_15) : (var_1_15)));
 } else {
  var_1_1 = (((((var_1_15 - ((((var_1_15) > (var_1_15)) ? (var_1_15) : (var_1_15))))) < ((var_1_15 + ((((var_1_15) < (var_1_15)) ? (var_1_15) : (var_1_15)))))) ? ((var_1_15 - ((((var_1_15) > (var_1_15)) ? (var_1_15) : (var_1_15))))) : ((var_1_15 + ((((var_1_15) < (var_1_15)) ? (var_1_15) : (var_1_15)))))));
 }
 signed long int stepLocal_0 = var_1_15 + (var_1_15 + var_1_1);
 if (stepLocal_0 != (var_1_15 * (var_1_1 / var_1_19))) {
  var_1_17 = (((((10u) < ((var_1_1 + var_1_15))) ? (10u) : ((var_1_1 + var_1_15)))) + var_1_15);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 assume_abort_if_not(var_1_19 != 0);
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
}
int property() {
 return (((((var_1_20 > var_1_20) ? (var_1_1 == ((signed short int) ((((var_1_15) > (var_1_15)) ? (var_1_15) : (var_1_15))))) : (var_1_1 == ((signed short int) (((((var_1_15 - ((((var_1_15) > (var_1_15)) ? (var_1_15) : (var_1_15))))) < ((var_1_15 + ((((var_1_15) < (var_1_15)) ? (var_1_15) : (var_1_15)))))) ? ((var_1_15 - ((((var_1_15) > (var_1_15)) ? (var_1_15) : (var_1_15))))) : ((var_1_15 + ((((var_1_15) < (var_1_15)) ? (var_1_15) : (var_1_15)))))))))) && (var_1_12 == ((float) ((0.85f - var_1_13) + var_1_14)))) && (((- last_1_var_1_15) >= (var_1_4 / ((((-4) < 0 ) ? -(-4) : (-4))))) ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && (((var_1_15 + (var_1_15 + var_1_1)) != (var_1_15 * (var_1_1 / var_1_19))) ? (var_1_17 == ((unsigned long int) (((((10u) < ((var_1_1 + var_1_15))) ? (10u) : ((var_1_1 + var_1_15)))) + var_1_15))) : 1)) && (var_1_20 == ((float) var_1_13))
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
