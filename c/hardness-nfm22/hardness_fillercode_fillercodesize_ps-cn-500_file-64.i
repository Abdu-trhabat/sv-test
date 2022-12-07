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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -2;
signed char var_1_10 = -32;
signed long int var_1_11 = 4;
signed long int var_1_12 = 1731242407;
signed long int var_1_13 = 0;
signed char var_1_14 = 10;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 256;
signed short int var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 1;
signed char var_1_26 = 0;
signed char var_1_27 = 10;
unsigned long int var_1_28 = 64;
float var_1_30 = 127.75;
signed char var_1_31 = -25;
signed char var_1_32 = 1;
signed long int var_1_33 = 25;
float var_1_34 = 9.5;
float var_1_35 = 256.5;
unsigned long int var_1_36 = 0;
unsigned long int var_1_37 = 128;
unsigned long int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 3013673348;
unsigned long int var_1_41 = 16;
signed short int var_1_42 = 100;
signed long int var_1_43 = 64;
signed short int var_1_44 = 1;
signed long int var_1_45 = 2;
double var_1_46 = 4.526;
double var_1_47 = 7.8;
double var_1_48 = 1.75;
double var_1_49 = 0.0;
double var_1_50 = 2.25;
double var_1_51 = 3.5;
unsigned short int var_1_52 = 1;
unsigned long int var_1_53 = 2;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 32;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 50;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 5;
signed long int var_1_60 = -100;
signed char var_1_61 = 100;
unsigned long int var_1_62 = 10;
signed char var_1_63 = 32;
signed long int var_1_64 = 1;
unsigned short int var_1_65 = 59146;
unsigned short int var_1_66 = 16765;
signed short int var_1_67 = 256;
signed short int var_1_68 = -5;
unsigned char var_1_69 = 128;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 64;
unsigned char var_1_72 = 100;
unsigned short int var_1_73 = 16;
signed short int var_1_74 = 1;
signed long int var_1_75 = 32;
unsigned long int var_1_76 = 16;
float var_1_77 = 16.4;
unsigned short int var_1_78 = 32;
double var_1_79 = 9.4;
signed short int var_1_80 = -8;
unsigned short int var_1_81 = 128;
unsigned char var_1_82 = 5;
unsigned char var_1_83 = 100;
signed long int var_1_84 = -5;
unsigned char var_1_85 = 50;
unsigned char var_1_86 = 25;
signed char var_1_87 = 32;
signed char var_1_88 = 5;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 0;
signed short int var_1_92 = -50;
double var_1_93 = 10.07;
signed long int var_1_94 = 32;
signed long int var_1_95 = 25;
unsigned char var_1_96 = 0;
unsigned char var_1_97 = 0;
signed short int var_1_98 = -100;
signed char var_1_99 = 16;
signed short int var_1_100 = 128;
signed char var_1_101 = -128;
signed short int var_1_102 = -64;
double var_1_103 = 127.575;
unsigned char var_1_104 = 0;
signed long int var_1_105 = -4;
signed short int var_1_106 = 4;
signed char var_1_107 = 10;
signed long int var_1_108 = -16;
signed long int var_1_109 = 32;
unsigned char var_1_110 = 8;
unsigned char var_1_112 = 0;
float var_1_113 = 4.5;
signed long int var_1_114 = -10;
signed long int var_1_115 = -10;
double var_1_116 = 0.25;
signed char var_1_117 = 0;
signed long int var_1_118 = -8;
double var_1_119 = 32.75;
unsigned char var_1_120 = 0;
unsigned char var_1_121 = 128;
float var_1_122 = 7.7;
signed short int var_1_123 = 0;
unsigned char var_1_124 = 1;
unsigned long int var_1_125 = 1;
unsigned short int var_1_126 = 8;
unsigned char var_1_127 = 0;
signed long int var_1_128 = 10;
unsigned char var_1_129 = 1;
unsigned char var_1_130 = 0;
signed long int last_1_var_1_1 = -2;
void initially(void) {
}
void step(void) {
 if ((var_1_31 + var_1_32) < var_1_33) {
  var_1_30 = ((((var_1_34) < (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (var_1_34) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))));
 }
 if (var_1_30 <= ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) {
  var_1_36 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 } else {
  if (((((var_1_33) < (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (var_1_33) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))))) > var_1_38) {
   if (var_1_39) {
    var_1_36 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
   } else {
    var_1_36 = ((((((((var_1_40 - var_1_41)) > (var_1_37)) ? ((var_1_40 - var_1_41)) : (var_1_37))) < 0 ) ? -(((((var_1_40 - var_1_41)) > (var_1_37)) ? ((var_1_40 - var_1_41)) : (var_1_37))) : (((((var_1_40 - var_1_41)) > (var_1_37)) ? ((var_1_40 - var_1_41)) : (var_1_37)))));
   }
  }
 }
 if (((var_1_35 * 5.5) + var_1_30) >= var_1_34) {
  var_1_42 = ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)));
 }
 if ((256 / var_1_44) < var_1_41) {
  var_1_43 = var_1_32;
 } else {
  var_1_43 = (((((-2) < (var_1_45)) ? (-2) : (var_1_45))) + 2);
 }
 if (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) >= 8.2f) {
  if (var_1_36 > var_1_33) {
   var_1_46 = ((((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) < 0 ) ? -(((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) : (((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))));
  } else {
   var_1_46 = (((((var_1_47 - var_1_48)) > (var_1_34)) ? ((var_1_47 - var_1_48)) : (var_1_34)));
  }
 } else {
  if ((~ ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) {
   if ((var_1_42 > var_1_31) || ((var_1_47 - var_1_48) < ((((var_1_34) > (var_1_30)) ? (var_1_34) : (var_1_30))))) {
    var_1_46 = (var_1_47 - (var_1_49 - ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51)))));
   }
  } else {
   var_1_46 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
  }
 }
 if (! (var_1_34 < var_1_46)) {
  if (var_1_40 < (var_1_43 / ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))))) {
   if (var_1_54) {
    var_1_52 = (((((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) < 0 ) ? -((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) : ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))));
   }
  }
 } else {
  var_1_52 = (((((((4) > (var_1_55)) ? (4) : (var_1_55))) < 0 ) ? -((((4) > (var_1_55)) ? (4) : (var_1_55))) : ((((4) > (var_1_55)) ? (4) : (var_1_55)))));
 }
 if (var_1_35 > ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) {
  if (var_1_39) {
   var_1_56 = ((((var_1_57) > (var_1_58)) ? (var_1_57) : (var_1_58)));
  }
 }
 if (var_1_60 < (((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) < 0 ) ? -((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) : ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))))) {
  var_1_59 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
 }
 if (-2 <= ((var_1_53 & var_1_59) >> (10u + var_1_62))) {
  if (0u < (var_1_56 & (var_1_57 & var_1_53))) {
   var_1_61 = ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)));
  } else {
   var_1_61 = ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)));
  }
 }
 if (((((var_1_44) > (var_1_52)) ? (var_1_44) : (var_1_52))) >= 0) {
  if ((var_1_65 | (var_1_60 | var_1_66)) >= var_1_62) {
   if ((var_1_56 * var_1_61) != var_1_58) {
    var_1_64 = ((((var_1_59) < (var_1_56)) ? (var_1_59) : (var_1_56)));
   } else {
    if (var_1_54) {
     if ((var_1_66 ^ (var_1_62 % var_1_53)) < (2810281807u - ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))))) {
      var_1_64 = (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + var_1_42);
     } else {
      var_1_64 = ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)));
     }
    }
   }
  }
 } else {
  var_1_64 = ((((((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) > ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) < 0 ) ? -((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) : ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) ? (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) : ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) < 0 ) ? -((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) : ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))));
 }
 if (var_1_46 > var_1_47) {
  var_1_67 = var_1_32;
 } else {
  var_1_67 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
 }
 if ((! var_1_54) && var_1_39) {
  var_1_68 = var_1_59;
 } else {
  if (var_1_49 <= ((var_1_47 - var_1_51) * (var_1_35 * var_1_34))) {
   var_1_68 = (var_1_62 + (((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < 0 ) ? -((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) : ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))));
  } else {
   var_1_68 = (((((var_1_32) > ((var_1_59 - var_1_56))) ? (var_1_32) : ((var_1_59 - var_1_56)))) + ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))));
  }
 }
 if (var_1_54 && var_1_70) {
  var_1_69 = var_1_58;
 } else {
  var_1_69 = (((((var_1_71 - var_1_62) + var_1_72) < 0 ) ? -((var_1_71 - var_1_62) + var_1_72) : ((var_1_71 - var_1_62) + var_1_72)));
 }
 if ((var_1_64 % ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))) <= ((((-256) < (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (-256) : (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))))) {
  var_1_73 = ((((((((55475) < 0 ) ? -(55475) : (55475))) < 0 ) ? -((((55475) < 0 ) ? -(55475) : (55475))) : ((((55475) < 0 ) ? -(55475) : (55475))))) - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))));
 } else {
  var_1_73 = ((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)));
 }
 if (3.8 >= (var_1_35 * var_1_47)) {
  var_1_74 = var_1_59;
 }
 if ((var_1_71 - ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) >= (var_1_66 * var_1_76)) {
  if (-16 > var_1_61) {
   var_1_75 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
  } else {
   if (var_1_62 >= var_1_72) {
    var_1_75 = ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)));
   } else {
    var_1_75 = ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)));
   }
  }
 } else {
  if (var_1_54) {
   var_1_75 = var_1_66;
  }
 }
 if (var_1_70) {
  var_1_77 = var_1_50;
 } else {
  var_1_77 = var_1_49;
 }
 var_1_78 = var_1_57;
 if (var_1_39) {
  var_1_79 = var_1_35;
 } else {
  var_1_79 = var_1_49;
 }
 if (var_1_70) {
  var_1_80 = var_1_32;
 }
 var_1_81 = var_1_55;
 var_1_82 = (((var_1_83 - var_1_62) - 5) + var_1_72);
 if (((((var_1_60) > (var_1_69)) ? (var_1_60) : (var_1_69))) > var_1_82) {
  if (var_1_67 >= (~ var_1_74)) {
   var_1_84 = ((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83)));
  }
 } else {
  var_1_84 = var_1_58;
 }
 if (var_1_83 <= var_1_80) {
  var_1_85 = (128 - (var_1_62 + var_1_86));
 }
 if (((var_1_84 / var_1_65) / var_1_83) <= -100) {
  if (var_1_70) {
   var_1_87 = ((((((((var_1_62) < (var_1_86)) ? (var_1_62) : (var_1_86))) < 0 ) ? -((((var_1_62) < (var_1_86)) ? (var_1_62) : (var_1_86))) : ((((var_1_62) < (var_1_86)) ? (var_1_62) : (var_1_86))))) - var_1_88);
  }
 }
 var_1_89 = (var_1_90 || (! var_1_91));
 if (var_1_91) {
  var_1_92 = ((((((((var_1_58) > (var_1_69)) ? (var_1_58) : (var_1_69)))) > ((((((64 + 8)) > (var_1_85)) ? ((64 + 8)) : (var_1_85))))) ? (((((var_1_58) > (var_1_69)) ? (var_1_58) : (var_1_69)))) : ((((((64 + 8)) > (var_1_85)) ? ((64 + 8)) : (var_1_85))))));
 }
 if (var_1_38 < var_1_64) {
  var_1_93 = (var_1_49 - ((((((((var_1_48) > (var_1_51)) ? (var_1_48) : (var_1_51)))) > (var_1_50)) ? (((((var_1_48) > (var_1_51)) ? (var_1_48) : (var_1_51)))) : (var_1_50))));
 }
 if (var_1_89) {
  if (4u < (~ var_1_88)) {
   var_1_94 = ((((var_1_95) < 0 ) ? -(var_1_95) : (var_1_95)));
  }
 }
 var_1_96 = (var_1_91 && var_1_97);
 if (var_1_41 != var_1_58) {
  var_1_98 = (var_1_56 - (var_1_69 + ((((var_1_86) < (var_1_88)) ? (var_1_86) : (var_1_88)))));
 }
 if ((~ var_1_87) <= var_1_86) {
  var_1_99 = (((((var_1_86 + var_1_62)) < (var_1_88)) ? ((var_1_86 + var_1_62)) : (var_1_88)));
 } else {
  var_1_99 = (var_1_88 - ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))));
 }
 if ((((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))) < (var_1_66 << 1)) && var_1_97) {
  var_1_100 = (((((((-4) < (var_1_61)) ? (-4) : (var_1_61))) < 0 ) ? -((((-4) < (var_1_61)) ? (-4) : (var_1_61))) : ((((-4) < (var_1_61)) ? (-4) : (var_1_61)))));
 }
 if ((var_1_53 + -10) < var_1_38) {
  var_1_101 = ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)));
 } else {
  var_1_101 = ((((((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))) + var_1_62) < 0 ) ? -(((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))) + var_1_62) : (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))) + var_1_62)));
 }
 if ((var_1_50 - (var_1_51 + 99.25)) < var_1_35) {
  if (var_1_35 <= ((((var_1_93) > (var_1_48)) ? (var_1_93) : (var_1_48)))) {
   var_1_102 = var_1_99;
  } else {
   var_1_102 = ((((var_1_61) < (var_1_72)) ? (var_1_61) : (var_1_72)));
  }
 } else {
  if (var_1_42 <= var_1_83) {
   var_1_102 = (((((((((var_1_32) > (-50)) ? (var_1_32) : (-50))) + var_1_61)) > (var_1_58)) ? ((((((var_1_32) > (-50)) ? (var_1_32) : (-50))) + var_1_61)) : (var_1_58)));
  } else {
   var_1_102 = ((((var_1_85) > (var_1_71)) ? (var_1_85) : (var_1_71)));
  }
 }
 if ((var_1_60 >> var_1_99) < var_1_45) {
  var_1_103 = ((((var_1_51) < ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) ? (var_1_51) : ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))));
 }
 if (var_1_54) {
  var_1_104 = var_1_91;
 }
 if (((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83))) != ((((var_1_101) > (((((var_1_42) > (var_1_85)) ? (var_1_42) : (var_1_85))))) ? (var_1_101) : (((((var_1_42) > (var_1_85)) ? (var_1_42) : (var_1_85))))))) {
  if (var_1_53 <= ((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84)))) {
   if (128u == ((((var_1_58) > (((((16u) < 0 ) ? -(16u) : (16u))))) ? (var_1_58) : (((((16u) < 0 ) ? -(16u) : (16u))))))) {
    var_1_105 = (((((((var_1_65 - var_1_66) < 0 ) ? -(var_1_65 - var_1_66) : (var_1_65 - var_1_66))) < 0 ) ? -((((var_1_65 - var_1_66) < 0 ) ? -(var_1_65 - var_1_66) : (var_1_65 - var_1_66))) : ((((var_1_65 - var_1_66) < 0 ) ? -(var_1_65 - var_1_66) : (var_1_65 - var_1_66)))));
   }
  } else {
   var_1_105 = ((((var_1_63) > (((((((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) < (var_1_98)) ? (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) : (var_1_98))))) ? (var_1_63) : (((((((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) < (var_1_98)) ? (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) : (var_1_98))))));
  }
 }
 if (var_1_92 < ((((var_1_102) < ((128 % var_1_66))) ? (var_1_102) : ((128 % var_1_66))))) {
  var_1_106 = var_1_83;
 }
 if ((4 - var_1_72) >= var_1_84) {
  if (var_1_104) {
   if (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103))) >= (var_1_47 * var_1_51)) {
    if (var_1_91) {
     var_1_107 = var_1_86;
    }
   } else {
    var_1_107 = var_1_62;
   }
  }
 } else {
  var_1_107 = ((((((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) > (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))))) ? (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) : (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))))));
 }
 if ((var_1_51 < (var_1_93 / var_1_49)) && var_1_91) {
  var_1_108 = ((var_1_81 - (64 + var_1_55)) + var_1_109);
 } else {
  var_1_108 = ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)));
 }
 if ((2u + var_1_82) >= ((((var_1_81 + var_1_84) < 0 ) ? -(var_1_81 + var_1_84) : (var_1_81 + var_1_84)))) {
  if (var_1_90) {
   if ((var_1_88 & var_1_81) >= (var_1_84 / var_1_44)) {
    var_1_110 = ((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) < ((var_1_62 + ((((var_1_71) < (var_1_83)) ? (var_1_71) : (var_1_83)))))) ? (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) : ((var_1_62 + ((((var_1_71) < (var_1_83)) ? (var_1_71) : (var_1_83)))))));
   } else {
    var_1_110 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
   }
  } else {
   var_1_110 = ((((((((var_1_88) > (var_1_72)) ? (var_1_88) : (var_1_72)))) > (var_1_83)) ? (((((var_1_88) > (var_1_72)) ? (var_1_88) : (var_1_72)))) : (var_1_83)));
  }
 }
 if (((var_1_69 & var_1_64) + var_1_57) > var_1_62) {
  var_1_112 = ((50 <= -5) || (var_1_91 && var_1_97));
 }
 if (var_1_60 < (var_1_59 & var_1_85)) {
  var_1_113 = (var_1_49 - var_1_48);
 }
 if (var_1_106 < var_1_31) {
  if (var_1_34 >= var_1_113) {
   var_1_114 = (((((var_1_55 + var_1_101)) < (var_1_83)) ? ((var_1_55 + var_1_101)) : (var_1_83)));
  } else {
   if (var_1_65 <= ((((var_1_78) > (var_1_75)) ? (var_1_78) : (var_1_75)))) {
    var_1_114 = ((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)));
   } else {
    var_1_114 = ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66)));
   }
  }
 } else {
  var_1_114 = ((((var_1_107) < (((((((((var_1_92) < (-8)) ? (var_1_92) : (-8)))) < (var_1_88)) ? (((((var_1_92) < (-8)) ? (var_1_92) : (-8)))) : (var_1_88))))) ? (var_1_107) : (((((((((var_1_92) < (-8)) ? (var_1_92) : (-8)))) < (var_1_88)) ? (((((var_1_92) < (-8)) ? (var_1_92) : (-8)))) : (var_1_88))))));
 }
 if ((((((var_1_77) < 0 ) ? -(var_1_77) : (var_1_77))) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) < var_1_79) {
  if (var_1_96) {
   if ((-5 & var_1_74) < ((((var_1_31) > (var_1_44)) ? (var_1_31) : (var_1_44)))) {
    var_1_115 = (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) - var_1_71);
   }
  } else {
   var_1_115 = ((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80)));
  }
 }
 if (var_1_95 > var_1_43) {
  if (var_1_77 > var_1_30) {
   var_1_116 = ((((var_1_48) > (var_1_35)) ? (var_1_48) : (var_1_35)));
  }
 }
 if (var_1_96) {
  var_1_118 = ((((var_1_80) < (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) ? (var_1_80) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))));
 } else {
  if (var_1_90) {
   var_1_118 = ((((((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))) < (var_1_58)) ? (((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))) : (var_1_58)));
  } else {
   var_1_118 = ((((var_1_58) < (var_1_57)) ? (var_1_58) : (var_1_57)));
  }
 }
 if (var_1_39 && (10 <= (-64 + var_1_75))) {
  if ((- var_1_51) == var_1_103) {
   var_1_119 = ((((var_1_50) > (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) ? (var_1_50) : (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))));
  } else {
   var_1_119 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 }
 if ((- (var_1_65 - var_1_85)) <= ((var_1_95 + var_1_105) | (-100 & var_1_45))) {
  var_1_120 = var_1_90;
 } else {
  var_1_120 = var_1_90;
 }
 var_1_121 = var_1_86;
 if (var_1_90) {
  var_1_122 = var_1_50;
 } else {
  var_1_122 = var_1_50;
 }
 if (var_1_91) {
  var_1_123 = var_1_117;
 } else {
  var_1_123 = var_1_58;
 }
 if (var_1_70) {
  var_1_124 = var_1_91;
 } else {
  var_1_124 = var_1_90;
 }
 if (var_1_104) {
  var_1_125 = var_1_56;
 }
 if (var_1_97) {
  var_1_126 = var_1_88;
 }
 var_1_127 = var_1_62;
 if (var_1_124) {
  var_1_128 = var_1_86;
 } else {
  var_1_128 = var_1_55;
 }
 if (var_1_122 < var_1_113) {
  if (var_1_44 != var_1_92) {
   if (var_1_55 <= var_1_128) {
    var_1_129 = ((var_1_59 >= var_1_95) && (! var_1_91));
   } else {
    var_1_129 = (var_1_90 || var_1_130);
   }
  } else {
   var_1_129 = var_1_97;
  }
 } else {
  var_1_129 = var_1_91;
 }
 var_1_19 = ((var_1_20 - var_1_21) - var_1_22);
 signed long int stepLocal_1 = (var_1_26 - var_1_27) + var_1_19;
 if (stepLocal_1 > var_1_22) {
  var_1_25 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 } else {
  var_1_25 = ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))));
 }
 signed long int stepLocal_0 = var_1_11 - (var_1_12 - var_1_13);
 if ((var_1_25 >> var_1_19) < stepLocal_0) {
  var_1_10 = (var_1_14 + ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))));
 } else {
  var_1_10 = (var_1_17 + var_1_16);
 }
 if (var_1_10 != var_1_25) {
  var_1_18 = ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12)));
 }
 if (! ((64 * var_1_18) < var_1_18)) {
  var_1_23 = var_1_24;
 }
 if (-8 <= var_1_10) {
  if (var_1_10 == last_1_var_1_1) {
   var_1_1 = ((((((var_1_10 + var_1_19)) < (var_1_19)) ? ((var_1_10 + var_1_19)) : (var_1_19))) + (var_1_10 + var_1_10));
  }
 } else {
  if (128 < var_1_19) {
   var_1_1 = var_1_10;
  } else {
   var_1_1 = var_1_19;
  }
 }
 if ((var_1_1 * var_1_1) < var_1_18) {
  if (var_1_1 < var_1_13) {
   var_1_28 = 64u;
  }
 }
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 16382);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 16383);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32766);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -1);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -128);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -128);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967295);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= -32768);
 assume_abort_if_not(var_1_44 <= 32767);
 assume_abort_if_not(var_1_44 != 0);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= -1073741823);
 assume_abort_if_not(var_1_45 <= 1073741823);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 4611686.018427382800e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 4294967295);
 assume_abort_if_not(var_1_53 != 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 1);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 65534);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 254);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 254);
 var_1_60 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_60 >= -2147483648);
 assume_abort_if_not(var_1_60 <= 2147483647);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 16);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -127);
 assume_abort_if_not(var_1_63 <= 126);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 32767);
 assume_abort_if_not(var_1_65 <= 65535);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 16383);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 63);
 assume_abort_if_not(var_1_71 <= 127);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 127);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 4294967295);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 95);
 assume_abort_if_not(var_1_83 <= 127);
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 63);
 var_1_88 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 126);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 0);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 1);
 assume_abort_if_not(var_1_91 <= 1);
 var_1_95 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_95 >= -2147483646);
 assume_abort_if_not(var_1_95 <= 2147483646);
 var_1_97 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_97 >= 1);
 assume_abort_if_not(var_1_97 <= 1);
 var_1_109 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_109 >= -1073741823);
 assume_abort_if_not(var_1_109 <= 1073741823);
 var_1_117 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_117 >= -128);
 assume_abort_if_not(var_1_117 <= 127);
 var_1_130 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_130 >= 0);
 assume_abort_if_not(var_1_130 <= 0);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
}
int property() {
 return (((((((-8 <= var_1_10) ? ((var_1_10 == last_1_var_1_1) ? (var_1_1 == ((signed long int) ((((((var_1_10 + var_1_19)) < (var_1_19)) ? ((var_1_10 + var_1_19)) : (var_1_19))) + (var_1_10 + var_1_10)))) : 1) : ((128 < var_1_19) ? (var_1_1 == ((signed long int) var_1_10)) : (var_1_1 == ((signed long int) var_1_19)))) && (((var_1_25 >> var_1_19) < (var_1_11 - (var_1_12 - var_1_13))) ? (var_1_10 == ((signed char) (var_1_14 + ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))))) : (var_1_10 == ((signed char) (var_1_17 + var_1_16))))) && ((var_1_10 != var_1_25) ? (var_1_18 == ((unsigned long int) ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12))))) : 1)) && (var_1_19 == ((signed short int) ((var_1_20 - var_1_21) - var_1_22)))) && ((! ((64 * var_1_18) < var_1_18)) ? (var_1_23 == ((unsigned char) var_1_24)) : 1)) && ((((var_1_26 - var_1_27) + var_1_19) > var_1_22) ? (var_1_25 == ((signed char) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_25 == ((signed char) ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))))) && (((var_1_1 * var_1_1) < var_1_18) ? ((var_1_1 < var_1_13) ? (var_1_28 == ((unsigned long int) 64u)) : 1) : 1)
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
