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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7425_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 25;
double var_1_2 = 63.25;
double var_1_3 = 3.779;
double var_1_4 = 31.6;
double var_1_5 = 100.5;
unsigned long int var_1_6 = 64;
unsigned long int var_1_7 = 3150951169;
unsigned long int var_1_8 = 128;
unsigned char var_1_9 = 0;
signed short int var_1_10 = -16;
float var_1_11 = 127.075;
float var_1_12 = 1.2;
signed short int var_1_16 = 4;
signed short int var_1_18 = -64;
signed char var_1_19 = -32;
void initially(void) {
}
void step(void) {
 if (((((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)))) < (var_1_4)) ? (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)))) : (var_1_4))) < var_1_5) {
  var_1_1 = ((((var_1_6) > ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8))));
 } else {
  if (var_1_9) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = var_1_6;
  }
 }
 var_1_19 = -2;
 if (var_1_9) {
  if (255.5f != (var_1_11 - var_1_12)) {
   var_1_10 = ((((((((var_1_19) > (var_1_19)) ? (var_1_19) : (var_1_19)))) > (var_1_19)) ? (((((var_1_19) > (var_1_19)) ? (var_1_19) : (var_1_19)))) : (var_1_19)));
  }
 } else {
  if (var_1_4 <= var_1_3) {
   var_1_10 = var_1_19;
  }
 }
 if (var_1_9) {
  var_1_16 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
 }
 var_1_18 = var_1_19;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 2147483647);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((((((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)))) < (var_1_4)) ? (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)))) : (var_1_4))) < var_1_5) ? (var_1_1 == ((unsigned long int) ((((var_1_6) > ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8)))))) : (var_1_9 ? (var_1_1 == ((unsigned long int) var_1_7)) : (var_1_1 == ((unsigned long int) var_1_6)))) && (var_1_9 ? ((255.5f != (var_1_11 - var_1_12)) ? (var_1_10 == ((signed short int) ((((((((var_1_19) > (var_1_19)) ? (var_1_19) : (var_1_19)))) > (var_1_19)) ? (((((var_1_19) > (var_1_19)) ? (var_1_19) : (var_1_19)))) : (var_1_19))))) : 1) : ((var_1_4 <= var_1_3) ? (var_1_10 == ((signed short int) var_1_19)) : 1))) && (var_1_9 ? (var_1_16 == ((signed short int) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : 1)) && (var_1_18 == ((signed short int) var_1_19))) && (var_1_19 == ((signed char) -2))
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
