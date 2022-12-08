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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
double var_1_6 = 31.5;
double var_1_9 = 1000000000.25;
float var_1_10 = 1.1;
float var_1_11 = 8.75;
float var_1_12 = 63.8;
unsigned char var_1_13 = 1;
float var_1_14 = 127.5;
signed char var_1_15 = -2;
signed char var_1_16 = 1;
signed char var_1_17 = 1;
signed char var_1_18 = 1;
signed char var_1_19 = -2;
signed char var_1_20 = 16;
signed char var_1_21 = 2;
signed char var_1_22 = 8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 50;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4;
unsigned long int var_1_32 = 100000;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 16;
unsigned long int var_1_35 = 256;
unsigned long int var_1_36 = 8;
float var_1_37 = 127.5;
float var_1_38 = 255.15;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
signed long int var_1_41 = 8;
signed long int var_1_42 = -128;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
double var_1_49 = 49.8;
double var_1_50 = -0.625;
float var_1_51 = 99.375;
signed long int var_1_52 = 4;
float var_1_53 = 200.8;
float var_1_54 = 3.5;
signed long int var_1_55 = -4;
signed long int var_1_56 = 0;
unsigned short int var_1_57 = 200;
unsigned short int var_1_58 = 31170;
signed short int var_1_59 = -2;
signed short int var_1_60 = -100;
signed short int var_1_61 = 5;
unsigned long int var_1_62 = 1;
float var_1_63 = 7.05;
signed short int var_1_64 = 50;
void initially(void) {
}
void step(void) {
 if (var_1_29 < (var_1_30 | (var_1_31 + var_1_32))) {
  var_1_28 = ((((var_1_33) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (var_1_33) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))));
 } else {
  if (! (var_1_31 > (var_1_33 % var_1_35))) {
   if (var_1_35 < var_1_36) {
    var_1_28 = 1;
   } else {
    var_1_28 = var_1_33;
   }
  }
 }
 if ((var_1_34 & var_1_33) >= ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
  var_1_37 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 } else {
  var_1_37 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 }
 if (var_1_40) {
  if (((~ var_1_33) / ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) < (var_1_29 + var_1_32)) {
   var_1_39 = ((var_1_43 && var_1_44) || ((! var_1_45) || var_1_46));
  }
 } else {
  if (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) < (- var_1_38)) {
   var_1_39 = ((var_1_45 && var_1_47) && var_1_48);
  }
 }
 if ((var_1_37 / var_1_50) > var_1_38) {
  var_1_49 = var_1_38;
 }
 if (var_1_30 >= var_1_32) {
  if ((((((var_1_32 + var_1_30)) > (var_1_28)) ? ((var_1_32 + var_1_30)) : (var_1_28))) <= var_1_42) {
   if (((var_1_31 * var_1_42) < ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) && ((- var_1_52) >= var_1_29)) {
    var_1_51 = (((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < 0 ) ? -((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) : ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))));
   } else {
    var_1_51 = (var_1_53 + var_1_54);
   }
  }
 }
 if (var_1_43 || (0 <= (var_1_34 - var_1_56))) {
  var_1_55 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 }
 if ((var_1_32 | var_1_36) >= var_1_30) {
  var_1_57 = ((((var_1_28 + (var_1_58 - var_1_34)) < 0 ) ? -(var_1_28 + (var_1_58 - var_1_34)) : (var_1_28 + (var_1_58 - var_1_34))));
 }
 if (var_1_38 <= var_1_54) {
  if (var_1_39) {
   if (((((var_1_37) > (var_1_53)) ? (var_1_37) : (var_1_53))) > var_1_49) {
    var_1_59 = (((((((var_1_34) < (var_1_28)) ? (var_1_34) : (var_1_28))) < 0 ) ? -((((var_1_34) < (var_1_28)) ? (var_1_34) : (var_1_28))) : ((((var_1_34) < (var_1_28)) ? (var_1_34) : (var_1_28)))));
   }
  }
 } else {
  var_1_59 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 var_1_60 = (((((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))) < 0 ) ? -((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))) : ((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34)))));
 if (var_1_30 > (var_1_34 & var_1_62)) {
  var_1_61 = ((((var_1_34 + ((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28)))) < 0 ) ? -(var_1_34 + ((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28)))) : (var_1_34 + ((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28))))));
 }
 var_1_63 = var_1_38;
 var_1_64 = var_1_33;
 var_1_15 = (var_1_16 - var_1_17);
 var_1_27 = var_1_21;
 unsigned char stepLocal_1 = var_1_27;
 unsigned char stepLocal_0 = var_1_27;
 if ((var_1_27 + var_1_27) <= stepLocal_1) {
  var_1_1 = (128 + var_1_27);
 } else {
  if (stepLocal_0 >= (var_1_27 * var_1_27)) {
   var_1_1 = var_1_27;
  } else {
   var_1_1 = 1;
  }
 }
 if (var_1_27 < (var_1_27 - var_1_27)) {
  var_1_6 = var_1_9;
 }
 unsigned char stepLocal_2 = var_1_27;
 if (var_1_27 > stepLocal_2) {
  var_1_10 = (1.00000000000009E13f - var_1_11);
 } else {
  var_1_10 = 9.75f;
 }
 if (((((var_1_27) < (var_1_27)) ? (var_1_27) : (var_1_27))) < 25u) {
  var_1_18 = (((((var_1_19) > ((var_1_20 - var_1_21))) ? (var_1_19) : ((var_1_20 - var_1_21)))) + (((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) < 0 ) ? -((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) : ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))));
 }
 signed long int stepLocal_5 = ~ var_1_21;
 if (var_1_13) {
  if (stepLocal_5 > var_1_27) {
   var_1_23 = (var_1_24 && (! var_1_25));
  } else {
   if (var_1_24) {
    var_1_23 = ((! var_1_25) || var_1_26);
   }
  }
 }
 unsigned char stepLocal_4 = var_1_18 >= var_1_27;
 unsigned char stepLocal_3 = var_1_27;
 if (var_1_23 && stepLocal_4) {
  var_1_12 = var_1_11;
 } else {
  if (1 >= stepLocal_3) {
   var_1_12 = var_1_11;
  } else {
   var_1_12 = var_1_14;
  }
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -63);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 4294967295);
 assume_abort_if_not(var_1_35 != 0);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 4294967295);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -2147483647);
 assume_abort_if_not(var_1_41 <= 2147483647);
 assume_abort_if_not(var_1_41 != 0);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -2147483648);
 assume_abort_if_not(var_1_42 <= 2147483647);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
 assume_abort_if_not(var_1_50 != 0.0F);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= -2147483648);
 assume_abort_if_not(var_1_52 <= 2147483647);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 2147483647);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 16383);
 assume_abort_if_not(var_1_58 <= 32767);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 4294967295);
}
void updateLastVariables() {
}
int property() {
 return (((((((((var_1_27 + var_1_27) <= var_1_27) ? (var_1_1 == ((signed short int) (128 + var_1_27))) : ((var_1_27 >= (var_1_27 * var_1_27)) ? (var_1_1 == ((signed short int) var_1_27)) : (var_1_1 == ((signed short int) 1)))) && ((var_1_27 < (var_1_27 - var_1_27)) ? (var_1_6 == ((double) var_1_9)) : 1)) && ((var_1_27 > var_1_27) ? (var_1_10 == ((float) (1.00000000000009E13f - var_1_11))) : (var_1_10 == ((float) 9.75f)))) && ((var_1_23 && (var_1_18 >= var_1_27)) ? (var_1_12 == ((float) var_1_11)) : ((1 >= var_1_27) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) var_1_14))))) && (var_1_15 == ((signed char) (var_1_16 - var_1_17)))) && ((((((var_1_27) < (var_1_27)) ? (var_1_27) : (var_1_27))) < 25u) ? (var_1_18 == ((signed char) (((((var_1_19) > ((var_1_20 - var_1_21))) ? (var_1_19) : ((var_1_20 - var_1_21)))) + (((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) < 0 ) ? -((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) : ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))))) : 1)) && (var_1_13 ? (((~ var_1_21) > var_1_27) ? (var_1_23 == ((unsigned char) (var_1_24 && (! var_1_25)))) : (var_1_24 ? (var_1_23 == ((unsigned char) ((! var_1_25) || var_1_26))) : 1)) : 1)) && (var_1_27 == ((unsigned char) var_1_21))
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
