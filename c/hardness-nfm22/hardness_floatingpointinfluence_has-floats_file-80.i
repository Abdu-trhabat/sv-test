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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 256;
signed long int var_1_8 = 128;
signed short int var_1_9 = -1;
signed short int var_1_10 = 1;
signed char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = 2;
double var_1_15 = 1.8;
double var_1_16 = 25.8;
double var_1_17 = 5.5;
double var_1_18 = 4.3;
double var_1_19 = 500.7;
double var_1_20 = 127.5;
double var_1_21 = 1.5;
double var_1_22 = 99.84;
unsigned short int var_1_23 = 4;
signed char var_1_24 = -64;
void initially(void) {
}
void step(void) {
 var_1_22 = var_1_19;
 var_1_23 = var_1_10;
 var_1_24 = var_1_14;
 unsigned char stepLocal_0 = var_1_23 <= var_1_24;
 if (var_1_13 || stepLocal_0) {
  var_1_12 = ((((1 - var_1_14) < 0 ) ? -(1 - var_1_14) : (1 - var_1_14)));
 } else {
  var_1_12 = var_1_14;
 }
 signed short int stepLocal_1 = var_1_10;
 if (stepLocal_1 <= (var_1_23 / var_1_8)) {
  var_1_15 = ((((((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) < (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19))))) ? (((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) : (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19))))));
 } else {
  var_1_15 = (var_1_20 - var_1_21);
 }
 if ((((((var_1_23 - var_1_23)) > (var_1_12)) ? ((var_1_23 - var_1_23)) : (var_1_12))) <= (((((var_1_23 - var_1_23)) < ((var_1_24 % var_1_8))) ? ((var_1_23 - var_1_23)) : ((var_1_24 % var_1_8))))) {
  var_1_1 = (((((var_1_9 - var_1_10)) < (var_1_12)) ? ((var_1_9 - var_1_10)) : (var_1_12)));
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((((((((var_1_23 - var_1_23)) > (var_1_12)) ? ((var_1_23 - var_1_23)) : (var_1_12))) <= (((((var_1_23 - var_1_23)) < ((var_1_24 % var_1_8))) ? ((var_1_23 - var_1_23)) : ((var_1_24 % var_1_8))))) ? (var_1_1 == ((signed short int) (((((var_1_9 - var_1_10)) < (var_1_12)) ? ((var_1_9 - var_1_10)) : (var_1_12))))) : 1) && ((var_1_13 || (var_1_23 <= var_1_24)) ? (var_1_12 == ((signed char) ((((1 - var_1_14) < 0 ) ? -(1 - var_1_14) : (1 - var_1_14))))) : (var_1_12 == ((signed char) var_1_14)))) && ((var_1_10 <= (var_1_23 / var_1_8)) ? (var_1_15 == ((double) ((((((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) < (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19))))) ? (((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) : (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19)))))))) : (var_1_15 == ((double) (var_1_20 - var_1_21))))) && (var_1_22 == ((double) var_1_19))) && (var_1_23 == ((unsigned short int) var_1_10))) && (var_1_24 == ((signed char) var_1_14))
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
