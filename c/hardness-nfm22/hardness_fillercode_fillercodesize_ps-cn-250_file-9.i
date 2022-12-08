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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 5.5;
signed short int var_1_3 = 1;
signed long int var_1_5 = -64;
signed char var_1_6 = 10;
signed char var_1_7 = 5;
double var_1_8 = 16.25;
double var_1_9 = 1.8;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 16;
unsigned long int var_1_13 = 128;
unsigned char var_1_15 = 1;
unsigned short int var_1_16 = 256;
signed char var_1_18 = -2;
unsigned long int var_1_19 = 50;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 0;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 2;
unsigned short int var_1_26 = 32;
unsigned long int var_1_27 = 100;
unsigned short int var_1_28 = 64;
float var_1_29 = 499.875;
float var_1_30 = -0.2;
float var_1_31 = 7.4;
float var_1_32 = -0.375;
unsigned short int var_1_33 = 10;
signed char var_1_34 = -25;
unsigned short int var_1_35 = 25;
signed char var_1_36 = -50;
signed char var_1_37 = -4;
signed char var_1_38 = 5;
unsigned long int var_1_39 = 16;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 1;
signed short int var_1_43 = -64;
signed long int var_1_44 = -32;
signed short int var_1_45 = -16;
unsigned char var_1_46 = 0;
double var_1_47 = 256.8;
double var_1_48 = 50.9;
double var_1_49 = 128.2;
double var_1_50 = 64.125;
unsigned char var_1_51 = 1;
unsigned short int var_1_52 = 56735;
unsigned char var_1_53 = 0;
signed char var_1_54 = 25;
unsigned short int var_1_55 = 500;
signed char var_1_56 = 25;
unsigned short int var_1_57 = 36741;
unsigned char var_1_58 = 1;
float var_1_59 = 5.75;
unsigned char var_1_60 = 32;
unsigned long int var_1_61 = 10;
unsigned short int var_1_62 = 25;
signed long int var_1_63 = 25;
signed short int var_1_64 = -5;
signed short int var_1_65 = 10000;
signed short int var_1_66 = 16621;
signed short int var_1_67 = 4;
unsigned char var_1_68 = 10;
signed short int var_1_69 = -4;
signed short int var_1_70 = -32;
signed short int var_1_71 = 200;
float var_1_72 = 64.625;
float var_1_73 = 0.0;
float var_1_74 = 0.0;
float var_1_75 = 63.5;
unsigned char var_1_76 = 1;
double var_1_77 = 32.5;
double var_1_78 = 0.0;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 32;
unsigned char var_1_81 = 1;
unsigned char last_1_var_1_10 = 32;
unsigned short int last_1_var_1_12 = 16;
unsigned long int last_1_var_1_13 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_20 || var_1_21) {
  var_1_19 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 if (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) == (~ 16u)) {
  if (var_1_21 || var_1_20) {
   var_1_23 = ((((10) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (10) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))));
  }
 }
 if (var_1_22 <= var_1_19) {
  if (var_1_22 <= (((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))) / var_1_27)) {
   var_1_26 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
  }
 } else {
  if (var_1_25 > (2 ^ ((((var_1_22) > (var_1_27)) ? (var_1_22) : (var_1_27))))) {
   if (var_1_23 > var_1_22) {
    var_1_26 = var_1_25;
   } else {
    var_1_26 = var_1_25;
   }
  } else {
   var_1_26 = var_1_23;
  }
 }
 if ((var_1_29 / var_1_30) > ((((var_1_31 / var_1_32) < 0 ) ? -(var_1_31 / var_1_32) : (var_1_31 / var_1_32)))) {
  if (var_1_23 > var_1_27) {
   var_1_28 = ((((((((((((var_1_24) > (2)) ? (var_1_24) : (2)))) > (var_1_25)) ? (((((var_1_24) > (2)) ? (var_1_24) : (2)))) : (var_1_25)))) > (((((var_1_23) > (var_1_33)) ? (var_1_23) : (var_1_33))))) ? (((((((((var_1_24) > (2)) ? (var_1_24) : (2)))) > (var_1_25)) ? (((((var_1_24) > (2)) ? (var_1_24) : (2)))) : (var_1_25)))) : (((((var_1_23) > (var_1_33)) ? (var_1_23) : (var_1_33))))));
  }
 }
 if ((var_1_21 || var_1_20) || (var_1_35 < var_1_33)) {
  var_1_34 = var_1_36;
 } else {
  var_1_34 = (((((var_1_37) > (8)) ? (var_1_37) : (8))) + var_1_38);
 }
 if (var_1_19 < 16u) {
  var_1_39 = (var_1_23 + ((((5u) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (5u) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))));
 } else {
  if (var_1_25 <= var_1_34) {
   var_1_39 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
  }
 }
 if (var_1_21 && (var_1_39 < var_1_26)) {
  var_1_40 = ((var_1_20 || (var_1_21 || var_1_41)) && var_1_42);
 } else {
  if (var_1_19 > ((var_1_25 * var_1_26) + var_1_33)) {
   var_1_40 = ((var_1_38 < var_1_39) || (var_1_42 || var_1_41));
  } else {
   var_1_40 = (! var_1_42);
  }
 }
 if (var_1_39 >= ((10u % 64u) * ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) {
  if (var_1_38 < 1) {
   var_1_43 = var_1_38;
  }
 } else {
  if ((var_1_25 / ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) != (var_1_24 | var_1_33)) {
   var_1_43 = ((((var_1_36) < (var_1_25)) ? (var_1_36) : (var_1_25)));
  }
 }
 if (var_1_40) {
  var_1_44 = ((((var_1_43) > (var_1_34)) ? (var_1_43) : (var_1_34)));
 }
 if (var_1_28 > var_1_19) {
  var_1_45 = (((((((((((var_1_38) < (var_1_34)) ? (var_1_38) : (var_1_34))) < 0 ) ? -((((var_1_38) < (var_1_34)) ? (var_1_38) : (var_1_34))) : ((((var_1_38) < (var_1_34)) ? (var_1_38) : (var_1_34)))))) > (((((5 - var_1_23) < 0 ) ? -(5 - var_1_23) : (5 - var_1_23))))) ? ((((((((var_1_38) < (var_1_34)) ? (var_1_38) : (var_1_34))) < 0 ) ? -((((var_1_38) < (var_1_34)) ? (var_1_38) : (var_1_34))) : ((((var_1_38) < (var_1_34)) ? (var_1_38) : (var_1_34)))))) : (((((5 - var_1_23) < 0 ) ? -(5 - var_1_23) : (5 - var_1_23))))));
 }
 if (var_1_27 > var_1_23) {
  if (var_1_31 != 0.5f) {
   var_1_46 = (! var_1_42);
  }
 }
 if (3.1 < var_1_32) {
  var_1_47 = (var_1_48 + 128.9);
 } else {
  if ((~ var_1_24) < var_1_43) {
   var_1_47 = ((((var_1_49 - var_1_50) < 0 ) ? -(var_1_49 - var_1_50) : (var_1_49 - var_1_50)));
  }
 }
 if (var_1_49 > ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) {
  if (var_1_28 <= (var_1_52 - var_1_24)) {
   var_1_51 = (! var_1_42);
  } else {
   if (((((var_1_29) > (var_1_32)) ? (var_1_29) : (var_1_32))) >= ((5.2f / var_1_30) * var_1_48)) {
    var_1_51 = (var_1_42 || var_1_41);
   } else {
    var_1_51 = (! 0);
   }
  }
 }
 if ((16 != var_1_36) && var_1_46) {
  var_1_53 = (! var_1_41);
 } else {
  var_1_53 = (! (var_1_42 || var_1_41));
 }
 if (-10 <= var_1_52) {
  var_1_54 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 }
 if (var_1_52 != var_1_45) {
  var_1_55 = (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) + var_1_23);
 } else {
  if ((var_1_35 % ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) == var_1_19) {
   var_1_55 = (var_1_57 - var_1_23);
  }
 }
 var_1_58 = var_1_24;
 if (var_1_53) {
  var_1_59 = var_1_49;
 } else {
  var_1_59 = var_1_49;
 }
 if (var_1_38 > var_1_55) {
  if (var_1_36 < var_1_23) {
   var_1_60 = var_1_24;
  }
 } else {
  var_1_60 = ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)));
 }
 if ((var_1_52 - ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) < ((((var_1_57) > (var_1_37)) ? (var_1_57) : (var_1_37)))) {
  var_1_61 = (((((((var_1_28) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_28) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) < 0 ) ? -((((var_1_28) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_28) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) : ((((var_1_28) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_28) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))))));
 }
 var_1_63 = ((((var_1_35) < (var_1_34)) ? (var_1_35) : (var_1_34)));
 if (var_1_56 <= var_1_38) {
  if (var_1_23 >= 2) {
   if (((var_1_45 ^ var_1_60) + var_1_57) <= var_1_61) {
    var_1_64 = var_1_56;
   } else {
    var_1_64 = ((16 + (var_1_65 - var_1_23)) - (var_1_66 - var_1_58));
   }
  } else {
   var_1_64 = (var_1_65 - ((((var_1_67) < ((var_1_24 + var_1_23))) ? (var_1_67) : ((var_1_24 + var_1_23)))));
  }
 }
 if (var_1_20) {
  if ((var_1_63 & var_1_25) < -16) {
   var_1_68 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
  }
 }
 if (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) < (var_1_31 / var_1_32)) {
  if (var_1_31 > (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - var_1_49)) {
   var_1_69 = (var_1_37 + var_1_54);
  }
 }
 var_1_70 = ((((var_1_25 - var_1_71) < 0 ) ? -(var_1_25 - var_1_71) : (var_1_25 - var_1_71)));
 if (var_1_58 != (var_1_52 * var_1_28)) {
  var_1_72 = (var_1_49 - (((((var_1_73) < (var_1_74)) ? (var_1_73) : (var_1_74))) - var_1_75));
 }
 if (var_1_77 == (((((9.4) < 0 ) ? -(9.4) : (9.4))) - (var_1_78 - var_1_75))) {
  if (var_1_33 <= var_1_62) {
   if (var_1_53) {
    var_1_76 = (var_1_42 && var_1_41);
   } else {
    var_1_76 = var_1_41;
   }
  }
 } else {
  if ((var_1_25 > var_1_69) && (var_1_32 > var_1_72)) {
   var_1_76 = (var_1_41 && var_1_79);
  }
 }
 if (var_1_47 <= (var_1_59 / 64.5)) {
  if (var_1_50 < (((((4.5 * var_1_30)) < (((((var_1_77) < (var_1_74)) ? (var_1_77) : (var_1_74))))) ? ((4.5 * var_1_30)) : (((((var_1_77) < (var_1_74)) ? (var_1_77) : (var_1_74))))))) {
   var_1_80 = var_1_81;
  }
 } else {
  var_1_80 = var_1_81;
 }
 if (((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) {
  var_1_12 = var_1_6;
 }
 signed long int stepLocal_2 = last_1_var_1_12 + var_1_7;
 if (var_1_6 <= stepLocal_2) {
  var_1_10 = var_1_11;
 } else {
  var_1_10 = (var_1_3 + var_1_7);
 }
 if ((1 << var_1_10) != (-500 / -100)) {
  if ((var_1_6 - var_1_3) >= (var_1_12 + 256)) {
   var_1_13 = var_1_11;
  } else {
   var_1_13 = var_1_12;
  }
 } else {
  var_1_13 = var_1_6;
 }
 var_1_18 = var_1_3;
 signed long int stepLocal_4 = (((var_1_11) > ((var_1_12 * -64))) ? (var_1_11) : ((var_1_12 * -64)));
 unsigned char stepLocal_3 = var_1_10;
 if ((- var_1_9) <= var_1_8) {
  if (var_1_15) {
   if (stepLocal_4 < var_1_12) {
    if (var_1_13 == stepLocal_3) {
     var_1_16 = var_1_11;
    }
   } else {
    var_1_16 = 256;
   }
  } else {
   var_1_16 = var_1_3;
  }
 } else {
  var_1_16 = var_1_10;
 }
 signed long int stepLocal_1 = (var_1_10 & 0) * var_1_5;
 signed long int stepLocal_0 = var_1_16 >> var_1_3;
 if (stepLocal_0 == (var_1_10 / var_1_5)) {
  if ((var_1_3 << (var_1_6 - var_1_7)) > stepLocal_1) {
   var_1_1 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
  } else {
   var_1_1 = var_1_8;
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 8);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 6);
 assume_abort_if_not(var_1_6 <= 12);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 6);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967295);
 assume_abort_if_not(var_1_27 != 0);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -127);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -63);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -461168.6018427382800e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 32767);
 assume_abort_if_not(var_1_52 <= 65535);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -127);
 assume_abort_if_not(var_1_56 <= 127);
 assume_abort_if_not(var_1_56 != 0);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 32767);
 assume_abort_if_not(var_1_57 <= 65534);
 var_1_62 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 32767);
 var_1_65 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_65 >= 8191);
 assume_abort_if_not(var_1_65 <= 16383);
 var_1_66 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_66 >= 16383);
 assume_abort_if_not(var_1_66 <= 32766);
 var_1_67 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 32766);
 var_1_71 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 32766);
 var_1_73 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_73 >= 4611686.018427382800e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= 4611686.018427382800e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_78 >= 4611686.018427387900e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854776000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 0);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 254);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return (((((((var_1_16 >> var_1_3) == (var_1_10 / var_1_5)) ? (((var_1_3 << (var_1_6 - var_1_7)) > ((var_1_10 & 0) * var_1_5)) ? (var_1_1 == ((double) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_1 == ((double) var_1_8))) : 1) && ((var_1_6 <= (last_1_var_1_12 + var_1_7)) ? (var_1_10 == ((unsigned char) var_1_11)) : (var_1_10 == ((unsigned char) (var_1_3 + var_1_7))))) && ((((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) ? (var_1_12 == ((unsigned short int) var_1_6)) : 1)) && (((1 << var_1_10) != (-500 / -100)) ? (((var_1_6 - var_1_3) >= (var_1_12 + 256)) ? (var_1_13 == ((unsigned long int) var_1_11)) : (var_1_13 == ((unsigned long int) var_1_12))) : (var_1_13 == ((unsigned long int) var_1_6)))) && (((- var_1_9) <= var_1_8) ? (var_1_15 ? ((((((var_1_11) > ((var_1_12 * -64))) ? (var_1_11) : ((var_1_12 * -64)))) < var_1_12) ? ((var_1_13 == var_1_10) ? (var_1_16 == ((unsigned short int) var_1_11)) : 1) : (var_1_16 == ((unsigned short int) 256))) : (var_1_16 == ((unsigned short int) var_1_3))) : (var_1_16 == ((unsigned short int) var_1_10)))) && (var_1_18 == ((signed char) var_1_3))
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
