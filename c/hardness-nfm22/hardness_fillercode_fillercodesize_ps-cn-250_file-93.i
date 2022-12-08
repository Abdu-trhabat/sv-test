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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 0.5;
float var_1_5 = 0.0;
float var_1_6 = 4.2;
float var_1_7 = 31.25;
float var_1_8 = 1.375;
unsigned short int var_1_9 = 32;
unsigned char var_1_10 = 1;
float var_1_11 = 0.625;
unsigned short int var_1_12 = 1;
float var_1_13 = -0.25;
signed short int var_1_14 = 4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 8;
signed short int var_1_18 = 5;
signed short int var_1_19 = 128;
signed long int var_1_20 = -50;
signed short int var_1_21 = -16;
signed short int var_1_22 = 16;
signed short int var_1_23 = 32;
signed short int var_1_24 = 2;
signed short int var_1_25 = -4;
float var_1_26 = 0.2;
double var_1_27 = -0.375;
double var_1_28 = 255.5;
float var_1_29 = 9999999999999.875;
float var_1_30 = 64.375;
float var_1_31 = 64.2;
float var_1_32 = 5.125;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 25;
signed char var_1_41 = 16;
signed char var_1_42 = -8;
signed char var_1_43 = -128;
signed long int var_1_44 = -100;
unsigned short int var_1_45 = 8;
signed short int var_1_46 = 16;
signed short int var_1_47 = 16;
signed short int var_1_48 = -5;
signed short int var_1_49 = 50;
signed long int var_1_50 = -5;
float var_1_51 = 0.625;
signed short int var_1_52 = 0;
float var_1_53 = 2.4;
float var_1_54 = 2.8;
float var_1_55 = 31.5;
float var_1_56 = 5.5;
float var_1_57 = 9.5;
signed short int var_1_58 = 8;
signed short int var_1_59 = 10;
signed short int var_1_60 = 4;
unsigned char var_1_61 = 16;
unsigned char var_1_62 = 8;
unsigned char var_1_63 = 10;
float var_1_64 = 1.4;
unsigned long int var_1_65 = 100;
signed long int var_1_66 = 1;
unsigned long int var_1_67 = 3666826048;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
signed long int var_1_70 = -1;
signed long int var_1_71 = 10;
double var_1_72 = 8.5;
signed short int var_1_73 = -64;
float var_1_74 = 24.25;
signed short int var_1_75 = -16;
float var_1_76 = 10.6;
float var_1_77 = 25.15;
float var_1_78 = 0.0;
float var_1_79 = 1.75;
unsigned long int var_1_80 = 32;
signed long int var_1_81 = 2094795815;
signed char var_1_82 = 16;
signed char var_1_83 = -8;
signed char var_1_84 = 10;
signed char var_1_85 = 1;
signed char var_1_86 = 8;
signed char var_1_87 = -2;
unsigned char var_1_88 = 4;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 100;
unsigned char var_1_91 = 4;
signed char var_1_92 = 10;
signed char var_1_93 = -100;
double var_1_94 = 1.05;
signed long int var_1_95 = 64;
unsigned long int var_1_96 = 16;
signed char var_1_97 = -5;
double var_1_98 = 63.25;
signed short int var_1_99 = -32;
unsigned char var_1_100 = 0;
double var_1_101 = 256.4;
void initially(void) {
}
void step(void) {
 if (((((- var_1_27) < 0 ) ? -(- var_1_27) : (- var_1_27))) <= var_1_28) {
  if ((((((((var_1_28) < (25.6)) ? (var_1_28) : (25.6))) < 0 ) ? -((((var_1_28) < (25.6)) ? (var_1_28) : (25.6))) : ((((var_1_28) < (25.6)) ? (var_1_28) : (25.6))))) >= ((((- var_1_27) < 0 ) ? -(- var_1_27) : (- var_1_27)))) {
   var_1_26 = (((((var_1_29 - var_1_30)) > (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))))) ? ((var_1_29 - var_1_30)) : (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))))));
  }
 } else {
  var_1_26 = (8.25f - var_1_29);
 }
 if (var_1_34) {
  var_1_33 = ((var_1_35 && (! var_1_36)) && var_1_37);
 }
 var_1_38 = (! (var_1_36 && var_1_39));
 if ((var_1_41 + ((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43)))) <= var_1_44) {
  if (var_1_29 == ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (var_1_28)) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (var_1_28)))) {
   var_1_40 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
  }
 }
 if (var_1_36) {
  var_1_46 = (var_1_47 + (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) + var_1_41));
 } else {
  var_1_46 = (var_1_41 + var_1_48);
 }
 if (var_1_50 <= 0) {
  if (var_1_30 >= ((var_1_27 / 7.45f) / var_1_51)) {
   var_1_49 = (((((((((var_1_52 - 2)) < ((var_1_42 + var_1_43))) ? ((var_1_52 - 2)) : ((var_1_42 + var_1_43))))) > (((((var_1_48) > (var_1_41)) ? (var_1_48) : (var_1_41))))) ? ((((((var_1_52 - 2)) < ((var_1_42 + var_1_43))) ? ((var_1_52 - 2)) : ((var_1_42 + var_1_43))))) : (((((var_1_48) > (var_1_41)) ? (var_1_48) : (var_1_41))))));
  } else {
   if (((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) > (((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30))))) ? (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : (((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30)))))) <= var_1_51) {
    var_1_49 = ((((var_1_47) > (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_47) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))));
   } else {
    if (var_1_35) {
     var_1_49 = ((((var_1_41) > (var_1_48)) ? (var_1_41) : (var_1_48)));
    } else {
     var_1_49 = var_1_48;
    }
   }
  }
 } else {
  var_1_49 = var_1_48;
 }
 if (! var_1_34) {
  if ((var_1_29 + ((((2.4) < (var_1_30)) ? (2.4) : (var_1_30)))) <= ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) {
   var_1_53 = (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) + ((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))));
  }
 } else {
  if (var_1_32 <= var_1_56) {
   var_1_53 = var_1_32;
  } else {
   if (1.51f < var_1_30) {
    var_1_53 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
   }
  }
 }
 if (var_1_51 > ((((- var_1_29) < 0 ) ? -(- var_1_29) : (- var_1_29)))) {
  if (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) < (var_1_52 - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) {
   var_1_57 = var_1_32;
  }
 } else {
  var_1_57 = (((((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) > (var_1_30)) ? (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) : (var_1_30))) < 0 ) ? -((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) > (var_1_30)) ? (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) : (var_1_30))) : ((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) > (var_1_30)) ? (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) : (var_1_30)))));
 }
 if (var_1_44 >= var_1_50) {
  var_1_58 = (((((var_1_52) > (var_1_59)) ? (var_1_52) : (var_1_59))) - var_1_60);
 }
 if (25u > var_1_40) {
  var_1_61 = (128 - ((((((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) < (var_1_63)) ? (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) : (var_1_63))));
 } else {
  var_1_61 = var_1_63;
 }
 if (var_1_45 >= var_1_63) {
  var_1_64 = (((((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < 0 ) ? -((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) : ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))))) < (((((4.9f) < 0 ) ? -(4.9f) : (4.9f))))) ? ((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < 0 ) ? -((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) : ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))))) : (((((4.9f) < 0 ) ? -(4.9f) : (4.9f))))));
 }
 if ((((((var_1_40 / var_1_66)) < (var_1_63)) ? ((var_1_40 / var_1_66)) : (var_1_63))) >= var_1_49) {
  if (var_1_64 >= (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) + 1.00000000008E10f)) {
   if (((var_1_44 | var_1_60) ^ (var_1_62 & var_1_49)) > var_1_58) {
    var_1_65 = ((((var_1_60) > ((2225834344u - var_1_63))) ? (var_1_60) : ((2225834344u - var_1_63))));
   } else {
    var_1_65 = ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)));
   }
  }
 } else {
  if (var_1_55 >= var_1_26) {
   var_1_65 = (var_1_67 - var_1_61);
  }
 }
 if (var_1_44 <= var_1_65) {
  var_1_68 = ((! (var_1_33 || var_1_35)) || var_1_36);
 } else {
  if (((((var_1_61) > ((var_1_44 & var_1_40))) ? (var_1_61) : ((var_1_44 & var_1_40)))) <= var_1_45) {
   var_1_68 = (! ((var_1_43 >= var_1_44) && (var_1_69 || var_1_36)));
  }
 }
 if (var_1_63 >= var_1_58) {
  var_1_70 = ((((var_1_47) > (var_1_46)) ? (var_1_47) : (var_1_46)));
 } else {
  var_1_70 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
 }
 if (var_1_68) {
  var_1_71 = ((((((((var_1_62) < (var_1_40)) ? (var_1_62) : (var_1_40)))) > (var_1_43)) ? (((((var_1_62) < (var_1_40)) ? (var_1_62) : (var_1_40)))) : (var_1_43)));
 }
 var_1_72 = var_1_56;
 if (var_1_33 || var_1_69) {
  if (var_1_70 < (var_1_65 & var_1_62)) {
   var_1_73 = ((((-10) < ((((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) < 0 ) ? -((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) : ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) ? (-10) : ((((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) < 0 ) ? -((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) : ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))));
  }
 } else {
  var_1_73 = (var_1_48 + (((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))));
 }
 if (((var_1_59 % var_1_66) / var_1_75) <= (var_1_45 * var_1_63)) {
  if ((-64 >> 16) < var_1_46) {
   var_1_74 = (var_1_56 + (var_1_76 + var_1_77));
  } else {
   var_1_74 = (9.2f - (var_1_78 - var_1_79));
  }
 } else {
  var_1_74 = var_1_79;
 }
 if (((((128) < 0 ) ? -(128) : (128))) == (var_1_59 - (var_1_81 - var_1_63))) {
  var_1_80 = ((((((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))) < 0 ) ? -((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))) : ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) - var_1_45);
 }
 if ((var_1_44 & var_1_80) >= 5u) {
  if (var_1_49 == (var_1_71 >> var_1_46)) {
   var_1_82 = ((((((((var_1_83) > (var_1_84)) ? (var_1_83) : (var_1_84)))) > (var_1_85)) ? (((((var_1_83) > (var_1_84)) ? (var_1_83) : (var_1_84)))) : (var_1_85)));
  }
 } else {
  if (var_1_40 <= (var_1_70 >> var_1_66)) {
   var_1_82 = ((((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))) + ((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87)))) + -32);
  }
 }
 if (var_1_89 || ((var_1_59 % 16) >= var_1_45)) {
  var_1_88 = ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)));
 } else {
  if (! var_1_35) {
   var_1_88 = (var_1_90 + var_1_91);
  } else {
   var_1_88 = var_1_91;
  }
 }
 if (var_1_69) {
  var_1_92 = var_1_83;
 }
 if (var_1_33) {
  var_1_93 = -16;
 } else {
  var_1_93 = var_1_84;
 }
 var_1_94 = var_1_32;
 if (var_1_34) {
  var_1_95 = var_1_93;
 }
 var_1_96 = var_1_81;
 if (var_1_39) {
  var_1_97 = var_1_84;
 }
 if (var_1_70 > var_1_88) {
  var_1_98 = ((((((var_1_76 + var_1_77) + var_1_54)) < (var_1_56)) ? (((var_1_76 + var_1_77) + var_1_54)) : (var_1_56)));
 }
 var_1_99 = var_1_90;
 var_1_100 = var_1_36;
 var_1_101 = var_1_79;
 if (var_1_10) {
  var_1_13 = ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5)));
 } else {
  var_1_13 = ((((10.15f) < ((var_1_6 + var_1_8))) ? (10.15f) : ((var_1_6 + var_1_8))));
 }
 unsigned char stepLocal_5 = ! (var_1_10 || var_1_15);
 if (stepLocal_5 || var_1_16) {
  var_1_14 = ((((var_1_17) > ((var_1_18 - var_1_19))) ? (var_1_17) : ((var_1_18 - var_1_19))));
 }
 if (var_1_15) {
  var_1_21 = ((var_1_22 + 25) - var_1_19);
 }
 if (var_1_10) {
  var_1_23 = (var_1_22 + (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25));
 } else {
  if (var_1_16) {
   var_1_23 = var_1_24;
  } else {
   var_1_23 = var_1_17;
  }
 }
 unsigned char stepLocal_4 = var_1_13 < (var_1_8 / var_1_11);
 unsigned char stepLocal_3 = var_1_13 != var_1_11;
 if (var_1_10 || stepLocal_4) {
  if (var_1_10 || stepLocal_3) {
   var_1_9 = 8;
  }
 } else {
  var_1_9 = var_1_12;
 }
 if (var_1_16) {
  var_1_20 = (var_1_9 - 50);
 }
 signed short int stepLocal_2 = var_1_21;
 signed short int stepLocal_1 = var_1_21;
 signed long int stepLocal_0 = var_1_14 - var_1_20;
 if ((var_1_20 + var_1_14) < stepLocal_2) {
  if (var_1_21 <= stepLocal_0) {
   if (stepLocal_1 < var_1_14) {
    var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
   }
  } else {
   var_1_1 = (((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) + 3.25f);
  }
 } else {
  var_1_1 = var_1_8;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32767);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -8192);
 assume_abort_if_not(var_1_24 <= 8192);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -8191);
 assume_abort_if_not(var_1_25 <= 8191);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -128);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -128);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -128);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= -2147483648);
 assume_abort_if_not(var_1_44 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 65534);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= -16383);
 assume_abort_if_not(var_1_47 <= 16383);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= -16383);
 assume_abort_if_not(var_1_48 <= 16383);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= -2147483648);
 assume_abort_if_not(var_1_50 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 assume_abort_if_not(var_1_51 != 0.0F);
 var_1_52 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_52 >= -1);
 assume_abort_if_not(var_1_52 <= 32766);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= -1);
 assume_abort_if_not(var_1_59 <= 32766);
 var_1_60 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 32766);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 127);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 127);
 var_1_66 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_66 >= -2147483648);
 assume_abort_if_not(var_1_66 <= 2147483647);
 assume_abort_if_not(var_1_66 != 0);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 2147483647);
 assume_abort_if_not(var_1_67 <= 4294967294);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 0);
 var_1_75 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_75 >= -32768);
 assume_abort_if_not(var_1_75 <= 32767);
 assume_abort_if_not(var_1_75 != 0);
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= -230584.3009213691390e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691390e+12F && var_1_76 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= -230584.3009213691390e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691390e+12F && var_1_77 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_78 >= 4611686.018427382800e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_81 >= 1073741823);
 assume_abort_if_not(var_1_81 <= 2147483647);
 var_1_83 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_83 >= -127);
 assume_abort_if_not(var_1_83 <= 126);
 var_1_84 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_84 >= -127);
 assume_abort_if_not(var_1_84 <= 126);
 var_1_85 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_85 >= -127);
 assume_abort_if_not(var_1_85 <= 126);
 var_1_86 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_86 >= -32);
 assume_abort_if_not(var_1_86 <= 32);
 var_1_87 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_87 >= -31);
 assume_abort_if_not(var_1_87 <= 31);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 1);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 127);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 0);
 assume_abort_if_not(var_1_91 <= 127);
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_20 + var_1_14) < var_1_21) ? ((var_1_21 <= (var_1_14 - var_1_20)) ? ((var_1_21 < var_1_14) ? (var_1_1 == ((float) ((var_1_5 - var_1_6) - var_1_7))) : 1) : (var_1_1 == ((float) (((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) + 3.25f)))) : (var_1_1 == ((float) var_1_8))) && ((var_1_10 || (var_1_13 < (var_1_8 / var_1_11))) ? ((var_1_10 || (var_1_13 != var_1_11)) ? (var_1_9 == ((unsigned short int) 8)) : 1) : (var_1_9 == ((unsigned short int) var_1_12)))) && (var_1_10 ? (var_1_13 == ((float) ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))))) : (var_1_13 == ((float) ((((10.15f) < ((var_1_6 + var_1_8))) ? (10.15f) : ((var_1_6 + var_1_8)))))))) && (((! (var_1_10 || var_1_15)) || var_1_16) ? (var_1_14 == ((signed short int) ((((var_1_17) > ((var_1_18 - var_1_19))) ? (var_1_17) : ((var_1_18 - var_1_19)))))) : 1)) && (var_1_16 ? (var_1_20 == ((signed long int) (var_1_9 - 50))) : 1)) && (var_1_15 ? (var_1_21 == ((signed short int) ((var_1_22 + 25) - var_1_19))) : 1)) && (var_1_10 ? (var_1_23 == ((signed short int) (var_1_22 + (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25)))) : (var_1_16 ? (var_1_23 == ((signed short int) var_1_24)) : (var_1_23 == ((signed short int) var_1_17))))
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
