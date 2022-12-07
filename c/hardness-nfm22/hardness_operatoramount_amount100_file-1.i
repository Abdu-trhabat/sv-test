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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
double var_1_9 = 63.39;
double var_1_11 = 10000000.75;
double var_1_12 = 2.75;
double var_1_13 = 2.5;
float var_1_14 = 3.75;
float var_1_15 = 32.75;
float var_1_16 = 25.5;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 100;
double var_1_21 = 63.5;
double var_1_22 = 999999999.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned long int var_1_25 = 16;
unsigned long int var_1_26 = 2609671570;
unsigned long int var_1_27 = 100;
unsigned long int var_1_29 = 1837258641;
signed long int var_1_30 = -64;
unsigned char var_1_31 = 128;
unsigned char var_1_32 = 5;
signed short int var_1_34 = 100;
signed long int var_1_35 = 8;
double var_1_36 = 63.6;
double var_1_37 = 1.6;
double var_1_38 = 32.2;
double var_1_39 = 2.25;
unsigned char last_1_var_1_24 = 1;
signed short int last_1_var_1_34 = 100;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_6 = last_1_var_1_24;
 if ((((((var_1_19 / 2)) < (var_1_26)) ? ((var_1_19 / 2)) : (var_1_26))) <= stepLocal_6) {
  var_1_35 = (last_1_var_1_34 + ((((var_1_20) < (var_1_32)) ? (var_1_20) : (var_1_32))));
 }
 var_1_14 = (var_1_15 + var_1_16);
 if (((- 16.1) + var_1_14) >= (var_1_11 - var_1_12)) {
  var_1_9 = var_1_13;
 }
 if (var_1_9 <= (- 0.19999999999999996)) {
  if (var_1_6) {
   var_1_24 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
  } else {
   var_1_24 = (var_1_18 - 1);
  }
 }
 signed long int stepLocal_7 = 256;
 if (var_1_9 <= var_1_13) {
  var_1_36 = (var_1_37 - var_1_38);
 } else {
  if ((var_1_20 / var_1_32) < stepLocal_7) {
   var_1_36 = var_1_39;
  }
 }
 if ((var_1_12 - var_1_11) >= 3.4) {
  var_1_17 = ((var_1_18 - var_1_19) - var_1_20);
 } else {
  if ((var_1_15 / ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))) <= (var_1_36 / var_1_22)) {
   var_1_17 = var_1_20;
  }
 }
 if (var_1_36 <= (var_1_36 * var_1_16)) {
  var_1_23 = ((! (500.1f >= var_1_36)) && (var_1_6 && var_1_7));
 } else {
  var_1_23 = (var_1_7 || var_1_6);
 }
 signed long int stepLocal_3 = 100 % (var_1_31 - var_1_32);
 unsigned char stepLocal_2 = var_1_8;
 if (var_1_18 != stepLocal_3) {
  if (var_1_21 < ((((- var_1_22) < 0 ) ? -(- var_1_22) : (- var_1_22)))) {
   if (var_1_23 && stepLocal_2) {
    var_1_30 = (((((var_1_24 - var_1_24)) < (var_1_32)) ? ((var_1_24 - var_1_24)) : (var_1_32)));
   }
  } else {
   var_1_30 = var_1_35;
  }
 }
 unsigned char stepLocal_5 = var_1_6;
 signed long int stepLocal_4 = var_1_30;
 if (var_1_17 > stepLocal_4) {
  if ((var_1_31 <= var_1_17) || stepLocal_5) {
   var_1_34 = (var_1_20 - var_1_18);
  }
 } else {
  var_1_34 = var_1_35;
 }
 unsigned char stepLocal_0 = var_1_34 <= var_1_20;
 if (stepLocal_0 || (var_1_15 == var_1_9)) {
  var_1_25 = (var_1_26 - var_1_34);
 } else {
  var_1_25 = var_1_34;
 }
 unsigned long int stepLocal_1 = var_1_25;
 if (stepLocal_1 == ((var_1_25 + var_1_34) * (var_1_19 / var_1_18))) {
  var_1_27 = ((var_1_29 - var_1_34) + var_1_35);
 }
 if (var_1_34 <= var_1_25) {
  if ((var_1_34 ^ (var_1_25 ^ var_1_24)) < var_1_35) {
   var_1_1 = (var_1_6 || var_1_7);
  } else {
   if (var_1_6) {
    var_1_1 = var_1_8;
   } else {
    var_1_1 = var_1_8;
   }
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 190);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 assume_abort_if_not(var_1_22 != 0.0F);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 1073741823);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 127);
 assume_abort_if_not(var_1_31 <= 255);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 126);
 assume_abort_if_not(var_1_32 != 127);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_34 = var_1_34;
}
int property() {
 return ((((((((((((var_1_34 <= var_1_25) ? (((var_1_34 ^ (var_1_25 ^ var_1_24)) < var_1_35) ? (var_1_1 == ((unsigned char) (var_1_6 || var_1_7))) : (var_1_6 ? (var_1_1 == ((unsigned char) var_1_8)) : (var_1_1 == ((unsigned char) var_1_8)))) : 1) && ((((- 16.1) + var_1_14) >= (var_1_11 - var_1_12)) ? (var_1_9 == ((double) var_1_13)) : 1)) && (var_1_14 == ((float) (var_1_15 + var_1_16)))) && (((var_1_12 - var_1_11) >= 3.4) ? (var_1_17 == ((unsigned char) ((var_1_18 - var_1_19) - var_1_20))) : (((var_1_15 / ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))) <= (var_1_36 / var_1_22)) ? (var_1_17 == ((unsigned char) var_1_20)) : 1))) && ((var_1_36 <= (var_1_36 * var_1_16)) ? (var_1_23 == ((unsigned char) ((! (500.1f >= var_1_36)) && (var_1_6 && var_1_7)))) : (var_1_23 == ((unsigned char) (var_1_7 || var_1_6))))) && ((var_1_9 <= (- 0.19999999999999996)) ? (var_1_6 ? (var_1_24 == ((unsigned char) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : (var_1_24 == ((unsigned char) (var_1_18 - 1)))) : 1)) && (((var_1_34 <= var_1_20) || (var_1_15 == var_1_9)) ? (var_1_25 == ((unsigned long int) (var_1_26 - var_1_34))) : (var_1_25 == ((unsigned long int) var_1_34)))) && ((var_1_25 == ((var_1_25 + var_1_34) * (var_1_19 / var_1_18))) ? (var_1_27 == ((unsigned long int) ((var_1_29 - var_1_34) + var_1_35))) : 1)) && ((var_1_18 != (100 % (var_1_31 - var_1_32))) ? ((var_1_21 < ((((- var_1_22) < 0 ) ? -(- var_1_22) : (- var_1_22)))) ? ((var_1_23 && var_1_8) ? (var_1_30 == ((signed long int) (((((var_1_24 - var_1_24)) < (var_1_32)) ? ((var_1_24 - var_1_24)) : (var_1_32))))) : 1) : (var_1_30 == ((signed long int) var_1_35))) : 1)) && ((var_1_17 > var_1_30) ? (((var_1_31 <= var_1_17) || var_1_6) ? (var_1_34 == ((signed short int) (var_1_20 - var_1_18))) : 1) : (var_1_34 == ((signed short int) var_1_35)))) && (((((((var_1_19 / 2)) < (var_1_26)) ? ((var_1_19 / 2)) : (var_1_26))) <= last_1_var_1_24) ? (var_1_35 == ((signed long int) (last_1_var_1_34 + ((((var_1_20) < (var_1_32)) ? (var_1_20) : (var_1_32)))))) : 1)) && ((var_1_9 <= var_1_13) ? (var_1_36 == ((double) (var_1_37 - var_1_38))) : (((var_1_20 / var_1_32) < 256) ? (var_1_36 == ((double) var_1_39)) : 1))
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
