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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4025_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
signed short int var_1_7 = 5;
unsigned long int var_1_9 = 256;
signed char var_1_10 = 10;
signed char var_1_11 = 4;
float var_1_12 = 32.4;
float var_1_13 = 1.2;
float var_1_14 = 64.8;
float var_1_15 = 127.3;
float var_1_16 = 4.02;
signed char var_1_17 = -32;
unsigned long int last_1_var_1_9 = 256;
void initially(void) {
}
void step(void) {
 if ((var_1_10 - var_1_11) >= last_1_var_1_9) {
  var_1_9 = (var_1_11 + 2u);
 }
 if (var_1_2) {
  var_1_12 = ((((((((var_1_13 - var_1_14) < 0 ) ? -(var_1_13 - var_1_14) : (var_1_13 - var_1_14)))) < (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? (((((var_1_13 - var_1_14) < 0 ) ? -(var_1_13 - var_1_14) : (var_1_13 - var_1_14)))) : (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))));
 } else {
  var_1_12 = ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)));
 }
 var_1_17 = -4;
 if (var_1_2) {
  if (var_1_3 && (var_1_12 <= (- 63.9f))) {
   if (var_1_12 >= var_1_12) {
    if ((var_1_9 / var_1_7) <= var_1_9) {
     var_1_1 = var_1_9;
    }
   }
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32768);
 assume_abort_if_not(var_1_7 <= 32767);
 assume_abort_if_not(var_1_7 != 0);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
}
int property() {
 return (((var_1_2 ? ((var_1_3 && (var_1_12 <= (- 63.9f))) ? ((var_1_12 >= var_1_12) ? (((var_1_9 / var_1_7) <= var_1_9) ? (var_1_1 == ((signed long int) var_1_9)) : 1) : 1) : 1) : 1) && (((var_1_10 - var_1_11) >= last_1_var_1_9) ? (var_1_9 == ((unsigned long int) (var_1_11 + 2u))) : 1)) && (var_1_2 ? (var_1_12 == ((float) ((((((((var_1_13 - var_1_14) < 0 ) ? -(var_1_13 - var_1_14) : (var_1_13 - var_1_14)))) < (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? (((((var_1_13 - var_1_14) < 0 ) ? -(var_1_13 - var_1_14) : (var_1_13 - var_1_14)))) : (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))))))) : (var_1_12 == ((float) ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))))) && (var_1_17 == ((signed char) -4))
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
