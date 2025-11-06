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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9725_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
unsigned char var_1_2 = 1;
signed char var_1_3 = 50;
signed char var_1_4 = -1;
signed char var_1_5 = 16;
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
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (var_1_5 > var_1_3) {
   if (var_1_6) {
    var_1_1 = (var_1_7 - (var_1_8 - var_1_9));
   } else {
    var_1_1 = var_1_4;
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
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -128);
 assume_abort_if_not(var_1_5 <= 127);
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
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_2 ? ((var_1_5 > var_1_3) ? (var_1_6 ? (var_1_1 == ((signed short int) (var_1_7 - (var_1_8 - var_1_9)))) : (var_1_1 == ((signed short int) var_1_4))) : (var_1_1 == ((signed short int) 8))) : 1) && ((var_1_1 == var_1_7) ? (var_1_10 == ((signed char) (var_1_11 + (var_1_12 + -25)))) : (((100 | var_1_1) >= var_1_7) ? (var_1_10 == ((signed char) var_1_11)) : 1))) && (var_1_6 ? (var_1_13 == ((float) ((((16.3f) < ((((((var_1_14 - 1.875f)) > (63.5f)) ? ((var_1_14 - 1.875f)) : (63.5f))))) ? (16.3f) : ((((((var_1_14 - 1.875f)) > (63.5f)) ? ((var_1_14 - 1.875f)) : (63.5f)))))))) : (var_1_13 == ((float) (var_1_14 - var_1_15))))
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
