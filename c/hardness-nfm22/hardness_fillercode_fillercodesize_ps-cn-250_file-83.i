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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -25;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1230640054;
signed long int var_1_6 = 1508873667;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_16 = 10000000000000.375;
float var_1_17 = 16.4;
float var_1_18 = 8.5;
float var_1_19 = 64.75;
unsigned char var_1_20 = 16;
signed char var_1_22 = 0;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 10;
signed long int var_1_26 = 2;
signed long int var_1_27 = -25;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
signed short int var_1_30 = 25;
signed short int var_1_31 = 2;
signed short int var_1_32 = 5;
double var_1_33 = 9.25;
double var_1_34 = 5.5;
double var_1_35 = 99.2;
signed long int var_1_36 = -64;
signed short int var_1_37 = 10000;
signed short int var_1_38 = 10000;
unsigned long int var_1_39 = 10;
unsigned long int var_1_40 = 10;
signed char var_1_41 = 32;
signed char var_1_42 = 64;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned short int var_1_49 = 1;
signed char var_1_50 = 50;
signed long int var_1_51 = 16;
signed char var_1_52 = -64;
signed long int var_1_53 = -100;
float var_1_54 = 49.4;
float var_1_55 = 10000.375;
unsigned long int var_1_56 = 8;
signed short int var_1_57 = 25;
float var_1_58 = 199.875;
float var_1_59 = 0.19999999999999996;
double var_1_60 = 1000.98;
double var_1_61 = 127.6;
float var_1_62 = -0.5;
float var_1_63 = 1.6;
float var_1_64 = 127.1;
float var_1_65 = 1.145;
float var_1_66 = 4.2;
float var_1_67 = 31.5;
signed char var_1_68 = -1;
signed char var_1_69 = 8;
signed char var_1_70 = -10;
signed char var_1_71 = 32;
signed char var_1_72 = 4;
signed char var_1_73 = 5;
signed char var_1_74 = 0;
signed long int var_1_75 = 1;
signed char var_1_76 = -64;
float var_1_77 = 7.1;
unsigned short int var_1_78 = 8;
unsigned short int var_1_79 = 54995;
unsigned short int var_1_80 = 58454;
unsigned short int var_1_81 = 64875;
double var_1_82 = 255.5;
double var_1_83 = 499.75;
double var_1_84 = 128.2;
unsigned long int var_1_85 = 50;
unsigned long int var_1_86 = 50;
unsigned char var_1_87 = 4;
signed char var_1_88 = 64;
signed short int var_1_89 = 2;
signed short int var_1_90 = 256;
unsigned short int var_1_91 = 128;
signed char var_1_92 = 8;
signed char var_1_93 = 32;
void initially(void) {
}
void step(void) {
 if ((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) >= (var_1_26 % var_1_27)) || var_1_28) {
  var_1_24 = ((((var_1_29 - 8) < 0 ) ? -(var_1_29 - 8) : (var_1_29 - 8)));
 } else {
  var_1_24 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) >= ((((var_1_24) > ((var_1_29 ^ var_1_26))) ? (var_1_24) : ((var_1_29 ^ var_1_26))))) {
  var_1_30 = var_1_25;
 } else {
  if ((var_1_24 | (var_1_29 + var_1_26)) < var_1_27) {
   var_1_30 = ((((var_1_29) < (var_1_25)) ? (var_1_29) : (var_1_25)));
  } else {
   var_1_30 = var_1_25;
  }
 }
 if (((var_1_30 / var_1_27) ^ 0) >= var_1_26) {
  var_1_31 = (((((((var_1_25) > (var_1_24)) ? (var_1_25) : (var_1_24))) < 0 ) ? -((((var_1_25) > (var_1_24)) ? (var_1_25) : (var_1_24))) : ((((var_1_25) > (var_1_24)) ? (var_1_25) : (var_1_24)))));
 } else {
  var_1_31 = ((((((((var_1_24) > (var_1_29)) ? (var_1_24) : (var_1_29)))) < (var_1_25)) ? (((((var_1_24) > (var_1_29)) ? (var_1_24) : (var_1_29)))) : (var_1_25)));
 }
 if (var_1_28 || ((var_1_33 / var_1_34) >= var_1_35)) {
  if (var_1_28 || (1000000 > var_1_27)) {
   var_1_32 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
  }
 } else {
  var_1_32 = (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - ((var_1_37 + var_1_38) - 128));
 }
 if (var_1_26 <= (var_1_31 | var_1_38)) {
  var_1_39 = ((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))));
 }
 if ((~ var_1_38) <= var_1_39) {
  if (var_1_37 < (var_1_24 ^ ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) {
   var_1_41 = var_1_42;
  }
 }
 if (var_1_28 && var_1_44) {
  if (var_1_32 >= var_1_37) {
   var_1_43 = ((var_1_45 || (! var_1_46)) || var_1_47);
  }
 }
 if (var_1_44) {
  if (! ((var_1_24 / var_1_29) > var_1_32)) {
   var_1_48 = (var_1_28 || var_1_46);
  }
 } else {
  var_1_48 = (var_1_47 || var_1_46);
 }
 if ((var_1_26 | (var_1_50 % var_1_27)) > (var_1_39 / var_1_38)) {
  var_1_49 = ((((1) < (var_1_24)) ? (1) : (var_1_24)));
 } else {
  var_1_49 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 }
 if ((var_1_37 ^ var_1_52) == var_1_49) {
  if (var_1_48) {
   var_1_51 = ((((-8) < ((((((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))) < 0 ) ? -((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))) : ((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))))))) ? (-8) : ((((((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))) < 0 ) ? -((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))) : ((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))))))));
  }
 } else {
  var_1_51 = var_1_41;
 }
 if (var_1_32 >= ((var_1_50 % 64) >> var_1_31)) {
  var_1_53 = ((((((((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))) < 0 ) ? -((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))) : ((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))))) < 0 ) ? -(((((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))) < 0 ) ? -((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))) : ((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))))) : (((((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))) < 0 ) ? -((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25))) : ((((var_1_49) > (var_1_25)) ? (var_1_49) : (var_1_25)))))));
 } else {
  var_1_53 = ((((4) < 0 ) ? -(4) : (4)));
 }
 if (var_1_39 <= var_1_25) {
  var_1_54 = (9.089f + var_1_55);
 }
 var_1_56 = ((((32u) < 0 ) ? -(32u) : (32u)));
 if (var_1_48 && (var_1_50 != var_1_52)) {
  if (var_1_37 < var_1_25) {
   var_1_57 = ((((((((25) > (var_1_38)) ? (25) : (var_1_38))) < 0 ) ? -((((25) > (var_1_38)) ? (25) : (var_1_38))) : ((((25) > (var_1_38)) ? (25) : (var_1_38))))) - var_1_24);
  } else {
   var_1_57 = ((((var_1_42) > (var_1_37)) ? (var_1_42) : (var_1_37)));
  }
 } else {
  var_1_57 = ((((((((var_1_50) < (var_1_24)) ? (var_1_50) : (var_1_24)))) < (var_1_52)) ? (((((var_1_50) < (var_1_24)) ? (var_1_50) : (var_1_24)))) : (var_1_52)));
 }
 if (var_1_54 < var_1_35) {
  if ((var_1_30 ^ var_1_51) != (var_1_32 % ((((var_1_38) < (var_1_27)) ? (var_1_38) : (var_1_27))))) {
   var_1_58 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
  } else {
   var_1_58 = ((((((((5.8f) < 0 ) ? -(5.8f) : (5.8f))) - var_1_59) < 0 ) ? -(((((5.8f) < 0 ) ? -(5.8f) : (5.8f))) - var_1_59) : (((((5.8f) < 0 ) ? -(5.8f) : (5.8f))) - var_1_59)));
  }
 }
 if (var_1_48 && (var_1_35 != 9.999999999999912E13)) {
  var_1_60 = ((((((((var_1_55) > (var_1_59)) ? (var_1_55) : (var_1_59)))) < (var_1_61)) ? (((((var_1_55) > (var_1_59)) ? (var_1_55) : (var_1_59)))) : (var_1_61)));
 } else {
  if (var_1_58 < var_1_59) {
   var_1_60 = ((((0.471) < (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (0.471) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))));
  } else {
   var_1_60 = ((((var_1_59) < (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (var_1_59) : (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))));
  }
 }
 if (var_1_36 < (var_1_57 * var_1_50)) {
  var_1_62 = (((((var_1_55) > (var_1_63)) ? (var_1_55) : (var_1_63))) + (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) + ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))));
 }
 if (var_1_36 != (var_1_50 & var_1_29)) {
  var_1_66 = (var_1_64 + (var_1_65 + var_1_67));
 }
 if (var_1_24 < var_1_52) {
  var_1_68 = ((var_1_69 + var_1_70) + var_1_71);
 } else {
  if ((4.2 < var_1_59) || (var_1_32 < var_1_25)) {
   if (((var_1_69 << var_1_49) <= var_1_32) || (var_1_58 < ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) {
    var_1_68 = (((((2 - var_1_72)) > (((((var_1_73 - var_1_74) < 0 ) ? -(var_1_73 - var_1_74) : (var_1_73 - var_1_74))))) ? ((2 - var_1_72)) : (((((var_1_73 - var_1_74) < 0 ) ? -(var_1_73 - var_1_74) : (var_1_73 - var_1_74))))));
   }
  } else {
   var_1_68 = ((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73)));
  }
 }
 if (((((var_1_71) < ((var_1_74 - var_1_38))) ? (var_1_71) : ((var_1_74 - var_1_38)))) >= var_1_52) {
  var_1_75 = var_1_72;
 } else {
  var_1_75 = var_1_69;
 }
 if (var_1_59 > ((var_1_33 + var_1_64) / ((((var_1_34) > (var_1_77)) ? (var_1_34) : (var_1_77))))) {
  var_1_76 = ((((((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))) < (((((var_1_69) > (var_1_70)) ? (var_1_69) : (var_1_70))))) ? (((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))) : (((((var_1_69) > (var_1_70)) ? (var_1_69) : (var_1_70))))));
 } else {
  if (256.5f >= var_1_77) {
   var_1_76 = ((((var_1_72) < (var_1_73)) ? (var_1_72) : (var_1_73)));
  }
 }
 if ((var_1_56 & (var_1_73 ^ var_1_72)) < 2u) {
  var_1_78 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 } else {
  var_1_78 = (((((((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80)))) > (((((41853) < (var_1_81)) ? (41853) : (var_1_81))))) ? (((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80)))) : (((((41853) < (var_1_81)) ? (41853) : (var_1_81)))))) - var_1_73);
 }
 if (var_1_44) {
  var_1_82 = ((var_1_83 - var_1_84) + var_1_55);
 } else {
  var_1_82 = ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)));
 }
 if (var_1_84 <= var_1_83) {
  var_1_85 = ((((var_1_40) < (var_1_86)) ? (var_1_40) : (var_1_86)));
 }
 var_1_87 = var_1_72;
 if (var_1_46) {
  var_1_88 = var_1_69;
 }
 if (var_1_48) {
  var_1_89 = var_1_72;
 } else {
  var_1_89 = var_1_90;
 }
 if (var_1_44) {
  var_1_91 = var_1_72;
 } else {
  var_1_91 = var_1_81;
 }
 if (var_1_38 >= (var_1_73 & (var_1_85 / var_1_27))) {
  var_1_92 = ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)));
 }
 if (-2 <= (var_1_53 | (var_1_51 | var_1_69))) {
  var_1_93 = var_1_74;
 }
 var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));
 var_1_16 = (var_1_17 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))));
 if ((3886175339u - var_1_20) <= (var_1_9 / var_1_3)) {
  if (var_1_10 > var_1_7) {
   var_1_23 = ((((var_1_20) < ((var_1_8 - var_1_9))) ? (var_1_20) : ((var_1_8 - var_1_9))));
  } else {
   var_1_23 = (((((var_1_20) > (64)) ? (var_1_20) : (64))) + var_1_11);
  }
 } else {
  var_1_23 = var_1_20;
 }
 if (var_1_2) {
  var_1_1 = ((var_1_3 - var_1_7) - var_1_7);
 } else {
  var_1_1 = (((((var_1_3) > ((var_1_6 - var_1_7))) ? (var_1_3) : ((var_1_6 - var_1_7)))) - var_1_7);
 }
 signed long int stepLocal_1 = var_1_9 % (var_1_8 - var_1_20);
 signed long int stepLocal_0 = var_1_7 ^ var_1_10;
 if (stepLocal_1 > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
  if ((var_1_3 ^ var_1_23) <= stepLocal_0) {
   var_1_19 = var_1_17;
  }
 }
 if ((var_1_11 % var_1_20) < var_1_1) {
  var_1_22 = ((((10) > (var_1_10)) ? (10) : (var_1_10)));
 }
 if (((((var_1_16) > (var_1_16)) ? (var_1_16) : (var_1_16))) <= (- (var_1_19 / 4.9f))) {
  var_1_12 = 31.5f;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 1073741822);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 1073741822);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 126);
 assume_abort_if_not(var_1_20 != 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 255);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 assume_abort_if_not(var_1_27 != 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483648);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 8191);
 assume_abort_if_not(var_1_37 <= 16383);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 8192);
 assume_abort_if_not(var_1_38 <= 16383);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -127);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -128);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -128);
 assume_abort_if_not(var_1_52 <= 127);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -922337.2036854765600e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= -230584.3009213691390e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691390e+12F && var_1_67 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= -31);
 assume_abort_if_not(var_1_69 <= 32);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= -31);
 assume_abort_if_not(var_1_70 <= 31);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= -63);
 assume_abort_if_not(var_1_71 <= 63);
 var_1_72 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 126);
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 126);
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 126);
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
 assume_abort_if_not(var_1_77 != 0.0F);
 var_1_79 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_79 >= 32767);
 assume_abort_if_not(var_1_79 <= 65534);
 var_1_80 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_80 >= 32767);
 assume_abort_if_not(var_1_80 <= 65534);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 32767);
 assume_abort_if_not(var_1_81 <= 65534);
 var_1_83 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427382800e+12F && var_1_84 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 4294967294);
 var_1_90 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_90 >= -32767);
 assume_abort_if_not(var_1_90 <= 32766);
}
void updateLastVariables() {
}
int property() {
 return ((((((var_1_2 ? (var_1_1 == ((signed long int) ((var_1_3 - var_1_7) - var_1_7))) : (var_1_1 == ((signed long int) (((((var_1_3) > ((var_1_6 - var_1_7))) ? (var_1_3) : ((var_1_6 - var_1_7)))) - var_1_7)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((((((var_1_16) > (var_1_16)) ? (var_1_16) : (var_1_16))) <= (- (var_1_19 / 4.9f))) ? (var_1_12 == ((float) 31.5f)) : 1)) && (var_1_16 == ((float) (var_1_17 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) && (((var_1_9 % (var_1_8 - var_1_20)) > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) ? (((var_1_3 ^ var_1_23) <= (var_1_7 ^ var_1_10)) ? (var_1_19 == ((float) var_1_17)) : 1) : 1)) && (((var_1_11 % var_1_20) < var_1_1) ? (var_1_22 == ((signed char) ((((10) > (var_1_10)) ? (10) : (var_1_10))))) : 1)) && (((3886175339u - var_1_20) <= (var_1_9 / var_1_3)) ? ((var_1_10 > var_1_7) ? (var_1_23 == ((unsigned char) ((((var_1_20) < ((var_1_8 - var_1_9))) ? (var_1_20) : ((var_1_8 - var_1_9)))))) : (var_1_23 == ((unsigned char) (((((var_1_20) > (64)) ? (var_1_20) : (64))) + var_1_11)))) : (var_1_23 == ((unsigned char) var_1_20)))
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
