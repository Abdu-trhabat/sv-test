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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 99999999999.75;
float var_1_4 = 31.25;
float var_1_5 = 0.0;
float var_1_6 = 99.5;
float var_1_7 = 500.5;
double var_1_8 = 199.96;
double var_1_9 = 256.95;
signed long int var_1_11 = 1523382513;
double var_1_14 = 32.6;
double var_1_15 = 0.875;
unsigned short int var_1_16 = 1;
unsigned char var_1_17 = 1;
float var_1_18 = 0.3;
signed short int var_1_19 = 4;
unsigned char var_1_20 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 5;
signed short int var_1_27 = 64;
unsigned char var_1_28 = 1;
float var_1_29 = 64.5;
float var_1_30 = 0.0;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 1140371764;
unsigned long int var_1_33 = 3119542188;
double var_1_34 = 10.5;
unsigned short int last_1_var_1_16 = 1;
signed short int last_1_var_1_19 = 4;
signed short int last_1_var_1_27 = 64;
float last_1_var_1_29 = 64.5;
unsigned long int last_1_var_1_31 = 2;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_31;
 if (var_1_4 < (last_1_var_1_29 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) {
  if (last_1_var_1_19 < stepLocal_1) {
   var_1_8 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_7);
  } else {
   var_1_8 = var_1_4;
  }
 } else {
  var_1_8 = var_1_7;
 }
 if (! var_1_20) {
  if (last_1_var_1_16 <= last_1_var_1_16) {
   var_1_24 = ((var_1_25 + 1) + var_1_26);
  } else {
   var_1_24 = var_1_26;
  }
 } else {
  var_1_24 = var_1_26;
 }
 signed long int stepLocal_6 = (((var_1_24) < (var_1_24)) ? (var_1_24) : (var_1_24));
 unsigned char stepLocal_5 = var_1_28;
 if (stepLocal_6 < var_1_25) {
  if ((var_1_20 || var_1_17) && stepLocal_5) {
   var_1_27 = (((((((((var_1_24) > (var_1_24)) ? (var_1_24) : (var_1_24))) + last_1_var_1_27)) < (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((((((var_1_24) > (var_1_24)) ? (var_1_24) : (var_1_24))) + last_1_var_1_27)) : (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))));
  }
 }
 signed long int stepLocal_0 = ~ var_1_24;
 if (stepLocal_0 <= var_1_24) {
  var_1_1 = (var_1_4 - (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))));
 }
 var_1_29 = (var_1_6 + ((var_1_30 - 7.6f) - var_1_7));
 var_1_31 = ((((((var_1_11 + var_1_32)) > (var_1_33)) ? ((var_1_11 + var_1_32)) : (var_1_33))) - var_1_26);
 unsigned char stepLocal_3 = var_1_24;
 unsigned long int stepLocal_2 = var_1_31;
 if (var_1_17) {
  if (var_1_11 <= stepLocal_3) {
   if (var_1_24 <= stepLocal_2) {
    var_1_16 = var_1_27;
   }
  }
 } else {
  var_1_16 = var_1_27;
 }
 signed long int stepLocal_8 = ~ var_1_16;
 signed long int stepLocal_7 = var_1_24 / var_1_11;
 if (stepLocal_8 > var_1_31) {
  if (stepLocal_7 >= var_1_26) {
   var_1_34 = ((((((-5.2001036938992108E18) < 0 ) ? -(-5.2001036938992108E18) : (-5.2001036938992108E18))) - 50.25) - var_1_4);
  } else {
   var_1_34 = var_1_7;
  }
 }
 unsigned char stepLocal_4 = var_1_17;
 if (stepLocal_4 && var_1_20) {
  if (var_1_17) {
   var_1_19 = ((var_1_16 - var_1_24) + 50);
  } else {
   var_1_19 = ((((var_1_24) > (var_1_16)) ? (var_1_24) : (var_1_16)));
  }
 } else {
  if ((var_1_1 * (- var_1_5)) < (var_1_6 - var_1_7)) {
   if (var_1_14 == var_1_8) {
    var_1_19 = var_1_16;
   } else {
    var_1_19 = (var_1_16 + var_1_24);
   }
  } else {
   var_1_19 = ((var_1_16 + var_1_24) + 16);
  }
 }
 if ((var_1_19 - var_1_16) < ((var_1_11 - var_1_24) - var_1_24)) {
  var_1_9 = (var_1_7 + ((((var_1_6) > ((var_1_14 + var_1_15))) ? (var_1_6) : ((var_1_14 + var_1_15)))));
 } else {
  var_1_9 = (var_1_7 - var_1_5);
 }
 if (var_1_19 <= var_1_16) {
  var_1_18 = (var_1_15 + 64.4f);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 1073741823);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -230584.3009213691390e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -230584.3009213691390e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 64);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 2305843.009213691390e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 1073741824);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return ((((((((((((~ var_1_24) <= var_1_24) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))))) : 1) && ((var_1_4 < (last_1_var_1_29 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? ((last_1_var_1_19 < last_1_var_1_31) ? (var_1_8 == ((double) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_7))) : (var_1_8 == ((double) var_1_4))) : (var_1_8 == ((double) var_1_7)))) && (((var_1_19 - var_1_16) < ((var_1_11 - var_1_24) - var_1_24)) ? (var_1_9 == ((double) (var_1_7 + ((((var_1_6) > ((var_1_14 + var_1_15))) ? (var_1_6) : ((var_1_14 + var_1_15))))))) : (var_1_9 == ((double) (var_1_7 - var_1_5))))) && (var_1_17 ? ((var_1_11 <= var_1_24) ? ((var_1_24 <= var_1_31) ? (var_1_16 == ((unsigned short int) var_1_27)) : 1) : 1) : (var_1_16 == ((unsigned short int) var_1_27)))) && ((var_1_19 <= var_1_16) ? (var_1_18 == ((float) (var_1_15 + 64.4f))) : 1)) && ((var_1_17 && var_1_20) ? (var_1_17 ? (var_1_19 == ((signed short int) ((var_1_16 - var_1_24) + 50))) : (var_1_19 == ((signed short int) ((((var_1_24) > (var_1_16)) ? (var_1_24) : (var_1_16)))))) : (((var_1_1 * (- var_1_5)) < (var_1_6 - var_1_7)) ? ((var_1_14 == var_1_8) ? (var_1_19 == ((signed short int) var_1_16)) : (var_1_19 == ((signed short int) (var_1_16 + var_1_24)))) : (var_1_19 == ((signed short int) ((var_1_16 + var_1_24) + 16)))))) && ((! var_1_20) ? ((last_1_var_1_16 <= last_1_var_1_16) ? (var_1_24 == ((unsigned char) ((var_1_25 + 1) + var_1_26))) : (var_1_24 == ((unsigned char) var_1_26))) : (var_1_24 == ((unsigned char) var_1_26)))) && ((((((var_1_24) < (var_1_24)) ? (var_1_24) : (var_1_24))) < var_1_25) ? (((var_1_20 || var_1_17) && var_1_28) ? (var_1_27 == ((signed short int) (((((((((var_1_24) > (var_1_24)) ? (var_1_24) : (var_1_24))) + last_1_var_1_27)) < (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((((((var_1_24) > (var_1_24)) ? (var_1_24) : (var_1_24))) + last_1_var_1_27)) : (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26)))))))) : 1) : 1)) && (var_1_29 == ((float) (var_1_6 + ((var_1_30 - 7.6f) - var_1_7))))) && (var_1_31 == ((unsigned long int) ((((((var_1_11 + var_1_32)) > (var_1_33)) ? ((var_1_11 + var_1_32)) : (var_1_33))) - var_1_26)))) && (((~ var_1_16) > var_1_31) ? (((var_1_24 / var_1_11) >= var_1_26) ? (var_1_34 == ((double) ((((((-5.2001036938992108E18) < 0 ) ? -(-5.2001036938992108E18) : (-5.2001036938992108E18))) - 50.25) - var_1_4))) : (var_1_34 == ((double) var_1_7))) : 1)
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
