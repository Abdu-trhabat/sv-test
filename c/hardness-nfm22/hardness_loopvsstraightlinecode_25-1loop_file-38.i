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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3825_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_2 = 56507;
unsigned short int var_1_3 = 52902;
unsigned short int var_1_4 = 8;
unsigned long int var_1_5 = 16;
unsigned long int var_1_6 = 1771558822;
double var_1_7 = 7.25;
double var_1_8 = 31.2;
double var_1_9 = 32.71;
double var_1_10 = 0.4;
double var_1_11 = 7.75;
unsigned short int var_1_12 = 32;
unsigned char var_1_13 = 0;
unsigned short int var_1_14 = 20114;
unsigned short int var_1_15 = 32;
unsigned short int var_1_16 = 16773;
void initially(void) {
}
void step(void) {
 var_1_1 = (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) - var_1_4);
 unsigned short int stepLocal_0 = var_1_4;
 if (stepLocal_0 > var_1_2) {
  var_1_5 = (((var_1_6 - var_1_3) + 2144048120u) - var_1_2);
 }
 var_1_7 = (var_1_8 + (var_1_9 + (var_1_10 + var_1_11)));
 if (! var_1_13) {
  var_1_12 = (var_1_3 - (var_1_14 - var_1_15));
 } else {
  if (var_1_13) {
   var_1_12 = ((27636 + var_1_16) - (((((16853 - 10)) > (var_1_14)) ? ((16853 - 10)) : (var_1_14))));
  } else {
   var_1_12 = var_1_3;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 32767);
 assume_abort_if_not(var_1_2 <= 65534);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1610612735);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -230584.3009213691390e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -115292.1504606845700e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 1152921.504606845700e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -115292.1504606845700e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 1152921.504606845700e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16384);
 assume_abort_if_not(var_1_16 <= 32767);
}
void updateLastVariables() {
}
int property() {
 return (((var_1_1 == ((unsigned short int) (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) - var_1_4))) && ((var_1_4 > var_1_2) ? (var_1_5 == ((unsigned long int) (((var_1_6 - var_1_3) + 2144048120u) - var_1_2))) : 1)) && (var_1_7 == ((double) (var_1_8 + (var_1_9 + (var_1_10 + var_1_11)))))) && ((! var_1_13) ? (var_1_12 == ((unsigned short int) (var_1_3 - (var_1_14 - var_1_15)))) : (var_1_13 ? (var_1_12 == ((unsigned short int) ((27636 + var_1_16) - (((((16853 - 10)) > (var_1_14)) ? ((16853 - 10)) : (var_1_14)))))) : (var_1_12 == ((unsigned short int) var_1_3))))
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
