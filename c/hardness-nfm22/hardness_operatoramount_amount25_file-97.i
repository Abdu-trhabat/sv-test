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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_6 = 1;
signed short int var_1_7 = 32;
signed short int var_1_8 = 20113;
signed short int var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = -1;
signed char var_1_12 = 16;
float var_1_13 = 1.2;
float var_1_14 = 3.6;
float var_1_15 = 5.5;
signed char last_1_var_1_10 = 100;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (last_1_var_1_10 > last_1_var_1_10) {
   if (var_1_6) {
    var_1_1 = (var_1_7 - (var_1_8 - var_1_9));
   } else {
    var_1_1 = last_1_var_1_10;
   }
  } else {
   var_1_1 = 8;
  }
 }
 if (var_1_1 == var_1_7) {
  var_1_10 = (var_1_11 + (var_1_12 + -25));
 } else {
  if ((100 | var_1_1) >= var_1_7) {
   var_1_10 = var_1_11;
  }
 }
 if (var_1_6) {
  var_1_13 = ((((16.3f) < ((((((var_1_14 - 1.875f)) > (63.5f)) ? ((var_1_14 - 1.875f)) : (63.5f))))) ? (16.3f) : ((((((var_1_14 - 1.875f)) > (63.5f)) ? ((var_1_14 - 1.875f)) : (63.5f))))));
 } else {
  var_1_13 = (var_1_14 - var_1_15);
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -31);
 assume_abort_if_not(var_1_12 <= 32);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
}
int property() {
 return ((var_1_2 ? ((last_1_var_1_10 > last_1_var_1_10) ? (var_1_6 ? (var_1_1 == ((signed short int) (var_1_7 - (var_1_8 - var_1_9)))) : (var_1_1 == ((signed short int) last_1_var_1_10))) : (var_1_1 == ((signed short int) 8))) : 1) && ((var_1_1 == var_1_7) ? (var_1_10 == ((signed char) (var_1_11 + (var_1_12 + -25)))) : (((100 | var_1_1) >= var_1_7) ? (var_1_10 == ((signed char) var_1_11)) : 1))) && (var_1_6 ? (var_1_13 == ((float) ((((16.3f) < ((((((var_1_14 - 1.875f)) > (63.5f)) ? ((var_1_14 - 1.875f)) : (63.5f))))) ? (16.3f) : ((((((var_1_14 - 1.875f)) > (63.5f)) ? ((var_1_14 - 1.875f)) : (63.5f)))))))) : (var_1_13 == ((float) (var_1_14 - var_1_15))))
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
