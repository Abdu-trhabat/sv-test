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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
float var_1_2 = 200.875;
float var_1_3 = 100.25;
float var_1_4 = 99999999.34;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 8;
unsigned long int var_1_7 = 25;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 25;
unsigned short int var_1_11 = 10000;
signed short int var_1_12 = -32;
signed char var_1_13 = 4;
signed char var_1_14 = 25;
signed short int var_1_15 = -16;
signed short int var_1_16 = 100;
signed short int var_1_17 = 8;
float var_1_18 = 5.8;
float var_1_19 = 0.19999999999999996;
float var_1_20 = 1.5;
float var_1_21 = 10000000.5;
float var_1_22 = 4.5;
float var_1_23 = 4.25;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 100;
unsigned short int var_1_26 = 2;
unsigned long int var_1_27 = 8;
signed long int var_1_28 = 500;
signed long int var_1_29 = 5;
signed long int var_1_30 = -10;
double var_1_31 = 499.1;
double var_1_32 = 1000000.625;
double var_1_33 = 63.5;
signed long int var_1_34 = 8;
signed long int var_1_35 = 1000000;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
float var_1_39 = 10000000000000.5;
float var_1_40 = 99999999999.625;
float var_1_41 = 4.4;
float var_1_42 = 24.5;
float var_1_43 = 0.0;
float var_1_44 = 0.4;
signed long int var_1_45 = -128;
signed short int var_1_46 = 2;
void initially(void) {
}
void step(void) {
 var_1_9 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
 if ((-10 & var_1_26) <= var_1_30) {
  if (var_1_33 != var_1_32) {
   var_1_36 = var_1_37;
  }
 }
 signed long int stepLocal_1 = 56016 - var_1_11;
 signed long int stepLocal_0 = 10;
 if (var_1_6 < stepLocal_0) {
  if (var_1_5 < stepLocal_1) {
   var_1_10 = var_1_5;
  }
 }
 if ((var_1_13 - var_1_14) > (var_1_10 + var_1_11)) {
  if (! var_1_8) {
   var_1_12 = var_1_13;
  }
 } else {
  var_1_12 = var_1_14;
 }
 var_1_15 = (var_1_14 - (((((var_1_16 + var_1_17)) > (4)) ? ((var_1_16 + var_1_17)) : (4))));
 if ((var_1_26 >> var_1_27) > ((var_1_28 ^ var_1_29) + ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) {
  var_1_25 = ((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) > (0)) ? (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : (0)));
 } else {
  if (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) >= (var_1_32 - var_1_33)) {
   var_1_25 = var_1_27;
  }
 }
 if (var_1_4 > var_1_2) {
  var_1_18 = (((((var_1_19 + var_1_20) < 0 ) ? -(var_1_19 + var_1_20) : (var_1_19 + var_1_20))) - var_1_21);
 } else {
  if (! ((var_1_17 - var_1_11) < 128)) {
   var_1_18 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  } else {
   var_1_18 = ((((((((9.75f) > (var_1_19)) ? (9.75f) : (var_1_19)))) < ((((((var_1_21 - var_1_22)) > (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) ? ((var_1_21 - var_1_22)) : (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23)))))))) ? (((((9.75f) > (var_1_19)) ? (9.75f) : (var_1_19)))) : ((((((var_1_21 - var_1_22)) > (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) ? ((var_1_21 - var_1_22)) : (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23)))))))));
  }
 }
 var_1_24 = 16;
 if (var_1_18 <= (var_1_3 - var_1_4)) {
  var_1_1 = var_1_5;
 } else {
  var_1_1 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
 if (var_1_8) {
  if (var_1_5 < 16) {
   var_1_7 = (var_1_6 + var_1_24);
  }
 }
 if (var_1_26 >= ((((var_1_30 | var_1_27) < 0 ) ? -(var_1_30 | var_1_27) : (var_1_30 | var_1_27)))) {
  var_1_34 = (((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) > (var_1_26)) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (var_1_26))) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 } else {
  if (var_1_25 >= var_1_27) {
   if (var_1_32 > var_1_33) {
    var_1_34 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
   }
  }
 }
 var_1_38 = var_1_37;
 if (var_1_27 == (var_1_29 ^ var_1_34)) {
  var_1_39 = (((((var_1_40) < (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))))) ? (var_1_40) : (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))))) - (var_1_43 - var_1_44));
 } else {
  var_1_39 = (((((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) < (var_1_43)) ? (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) : (var_1_43))) - 255.4f);
 }
 var_1_45 = var_1_27;
 var_1_46 = var_1_27;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65535);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 17);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 4611686.018427382800e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_18 <= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_1 == ((unsigned short int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) && (var_1_8 ? ((var_1_5 < 16) ? (var_1_7 == ((unsigned long int) (var_1_6 + var_1_24))) : 1) : 1)) && (var_1_9 == ((signed long int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) && ((var_1_6 < 10) ? ((var_1_5 < (56016 - var_1_11)) ? (var_1_10 == ((unsigned short int) var_1_5)) : 1) : 1)) && (((var_1_13 - var_1_14) > (var_1_10 + var_1_11)) ? ((! var_1_8) ? (var_1_12 == ((signed short int) var_1_13)) : 1) : (var_1_12 == ((signed short int) var_1_14)))) && (var_1_15 == ((signed short int) (var_1_14 - (((((var_1_16 + var_1_17)) > (4)) ? ((var_1_16 + var_1_17)) : (4))))))) && ((var_1_4 > var_1_2) ? (var_1_18 == ((float) (((((var_1_19 + var_1_20) < 0 ) ? -(var_1_19 + var_1_20) : (var_1_19 + var_1_20))) - var_1_21))) : ((! ((var_1_17 - var_1_11) < 128)) ? (var_1_18 == ((float) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) : (var_1_18 == ((float) ((((((((9.75f) > (var_1_19)) ? (9.75f) : (var_1_19)))) < ((((((var_1_21 - var_1_22)) > (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) ? ((var_1_21 - var_1_22)) : (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23)))))))) ? (((((9.75f) > (var_1_19)) ? (9.75f) : (var_1_19)))) : ((((((var_1_21 - var_1_22)) > (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) ? ((var_1_21 - var_1_22)) : (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23)))))))))))))) && (var_1_24 == ((signed short int) 16))
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
