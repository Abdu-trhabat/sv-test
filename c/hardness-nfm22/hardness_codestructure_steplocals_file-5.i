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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
unsigned short int var_1_2 = 10;
signed long int var_1_3 = 4;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
float var_1_7 = 2.98;
float var_1_8 = 8.5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
signed long int var_1_13 = 256;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;
void initially(void) {
}
void step(void) {
 if (((- 64) + var_1_2) == var_1_3) {
  var_1_1 = (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - var_1_5);
 } else {
  var_1_1 = (((((128) < (var_1_4)) ? (128) : (var_1_4))) - 64);
 }
 if (var_1_1 > var_1_4) {
  if ((- var_1_7) < var_1_8) {
   var_1_6 = 10u;
  }
 }
 if (var_1_5 == (var_1_2 / var_1_4)) {
  var_1_9 = ((((var_1_5) < (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (var_1_5) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))));
 } else {
  var_1_9 = ((var_1_10 + var_1_11) - var_1_5);
 }
 signed long int stepLocal_0 = (((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3));
 if (stepLocal_0 <= ((((var_1_13) > (var_1_4)) ? (var_1_13) : (var_1_4)))) {
  var_1_12 = ((var_1_14 - var_1_5) + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))));
 } else {
  var_1_12 = var_1_9;
 }
 signed long int stepLocal_1 = ~ (var_1_5 * var_1_12);
 if (stepLocal_1 <= var_1_9) {
  var_1_15 = (((((5.25 - var_1_16)) > (var_1_17)) ? ((5.25 - var_1_16)) : (var_1_17)));
 } else {
  var_1_15 = ((((((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16)))) < (var_1_18)) ? (((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16)))) : (var_1_18)));
 }
 signed long int stepLocal_3 = var_1_3;
 unsigned char stepLocal_2 = var_1_9;
 if (var_1_4 < stepLocal_3) {
  if (stepLocal_2 > var_1_2) {
   var_1_19 = var_1_20;
  }
 }
 var_1_21 = var_1_10;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 64);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
}
void updateLastVariables() {
}
int property() {
 return (((((((((- 64) + var_1_2) == var_1_3) ? (var_1_1 == ((unsigned char) (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - var_1_5))) : (var_1_1 == ((unsigned char) (((((128) < (var_1_4)) ? (128) : (var_1_4))) - 64)))) && ((var_1_1 > var_1_4) ? (((- var_1_7) < var_1_8) ? (var_1_6 == ((unsigned long int) 10u)) : 1) : 1)) && ((var_1_5 == (var_1_2 / var_1_4)) ? (var_1_9 == ((unsigned char) ((((var_1_5) < (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (var_1_5) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))))) : (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_5))))) && ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) <= ((((var_1_13) > (var_1_4)) ? (var_1_13) : (var_1_4)))) ? (var_1_12 == ((unsigned short int) ((var_1_14 - var_1_5) + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) : (var_1_12 == ((unsigned short int) var_1_9)))) && (((~ (var_1_5 * var_1_12)) <= var_1_9) ? (var_1_15 == ((double) (((((5.25 - var_1_16)) > (var_1_17)) ? ((5.25 - var_1_16)) : (var_1_17))))) : (var_1_15 == ((double) ((((((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16)))) < (var_1_18)) ? (((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16)))) : (var_1_18))))))) && ((var_1_4 < var_1_3) ? ((var_1_9 > var_1_2) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_21 == ((signed short int) var_1_10))
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
