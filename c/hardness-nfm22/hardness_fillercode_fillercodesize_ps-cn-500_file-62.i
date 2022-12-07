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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 5.25;
signed long int var_1_3 = -25;
signed long int var_1_4 = -128;
double var_1_6 = 2.75;
double var_1_7 = 24.5;
double var_1_8 = 199.5;
float var_1_9 = 32.8;
unsigned char var_1_10 = 1;
float var_1_11 = 15.4;
float var_1_12 = 0.0;
unsigned long int var_1_13 = 2;
float var_1_16 = 127.6;
signed long int var_1_17 = 128;
unsigned char var_1_19 = 10;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 64;
double var_1_22 = 15.95;
unsigned long int var_1_23 = 4127848294;
unsigned long int var_1_24 = 256;
unsigned char var_1_25 = 1;
unsigned long int var_1_26 = 64;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
signed long int var_1_33 = 100;
signed long int var_1_34 = -64;
unsigned char var_1_35 = 8;
float var_1_36 = 100000000000000.5;
float var_1_37 = 255.3;
float var_1_38 = 3.4;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 32;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 2;
double var_1_43 = 9.25;
unsigned char var_1_44 = 2;
double var_1_45 = 9.5;
double var_1_46 = 15.4;
double var_1_47 = 15.95;
signed long int var_1_48 = 5;
unsigned long int var_1_49 = 16;
unsigned long int var_1_50 = 2590019718;
float var_1_51 = 32.25;
unsigned short int var_1_52 = 2;
signed char var_1_53 = -8;
unsigned short int var_1_54 = 40964;
signed short int var_1_55 = 128;
signed short int var_1_56 = 128;
signed short int var_1_57 = -8;
unsigned char var_1_58 = 1;
unsigned short int var_1_59 = 4;
unsigned short int var_1_60 = 64;
signed short int var_1_61 = 25;
signed long int var_1_62 = -16;
unsigned short int var_1_63 = 32;
signed long int var_1_64 = 1815123473;
signed long int var_1_65 = 64;
unsigned char var_1_66 = 0;
signed short int var_1_67 = 25;
signed long int var_1_68 = -10;
unsigned short int var_1_69 = 64;
float var_1_70 = 8.2;
unsigned long int var_1_71 = 64;
signed char var_1_72 = 16;
signed char var_1_73 = 8;
signed char var_1_74 = 5;
signed char var_1_75 = -32;
double var_1_76 = 99.1;
double var_1_77 = 50.4;
signed short int var_1_78 = 10;
signed long int var_1_79 = -2;
unsigned long int var_1_80 = 10;
unsigned char var_1_81 = 0;
float var_1_82 = 2.6;
unsigned short int var_1_83 = 25;
signed char var_1_84 = 25;
signed char var_1_85 = 64;
signed char var_1_86 = 5;
signed char var_1_87 = 8;
signed char var_1_88 = 5;
signed char var_1_89 = 4;
signed short int var_1_90 = 16;
unsigned short int var_1_91 = 0;
signed short int var_1_92 = 5;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 1;
unsigned long int var_1_95 = 2604454560;
unsigned long int var_1_96 = 2;
signed char var_1_97 = 16;
signed short int var_1_98 = 0;
signed short int var_1_99 = 18598;
signed long int var_1_100 = 8;
unsigned short int var_1_101 = 128;
unsigned short int var_1_102 = 100;
signed char var_1_103 = -2;
signed short int var_1_104 = 8;
unsigned short int var_1_105 = 200;
signed long int var_1_106 = -500;
float var_1_107 = 49.75;
signed short int var_1_108 = 128;
float var_1_109 = 10.4;
double var_1_110 = 24.2;
unsigned short int var_1_111 = 16;
unsigned long int var_1_112 = 256;
signed char var_1_113 = 4;
unsigned long int var_1_114 = 10;
signed char var_1_115 = -128;
double var_1_116 = 50.2;
unsigned char var_1_117 = 32;
signed char var_1_118 = 8;
signed short int var_1_119 = 128;
signed short int var_1_120 = 64;
void initially(void) {
}
void step(void) {
 if (var_1_25) {
  var_1_24 = ((((((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) < (64u)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (64u)))) > (32u)) ? (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) < (64u)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (64u)))) : (32u)));
 }
 if (var_1_24 <= 32u) {
  if (var_1_24 < var_1_26) {
   var_1_27 = (var_1_28 || (var_1_25 || var_1_29));
  }
 } else {
  if ((~ var_1_24) < (var_1_26 ^ 8u)) {
   var_1_27 = ((var_1_30 || var_1_31) || (var_1_29 && var_1_32));
  } else {
   if (var_1_24 <= var_1_26) {
    if (var_1_24 > 2u) {
     var_1_27 = (var_1_30 || (! var_1_31));
    }
   }
  }
 }
 if (var_1_24 > var_1_26) {
  var_1_33 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if ((var_1_36 / var_1_37) == var_1_38) {
  var_1_35 = ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)));
 } else {
  var_1_35 = ((((((((var_1_40) < (var_1_39)) ? (var_1_40) : (var_1_39)))) < (var_1_41)) ? (((((var_1_40) < (var_1_39)) ? (var_1_40) : (var_1_39)))) : (var_1_41)));
 }
 if (var_1_25) {
  var_1_42 = var_1_40;
 } else {
  if (var_1_32) {
   var_1_42 = (((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) < 0 ) ? -((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) : ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))));
  }
 }
 if (var_1_39 > (var_1_44 * var_1_24)) {
  if (((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))) >= var_1_38) {
   var_1_43 = (((((((((9.2) < (10.02)) ? (9.2) : (10.02)))) > (var_1_45)) ? (((((9.2) < (10.02)) ? (9.2) : (10.02)))) : (var_1_45))) - (var_1_46 + var_1_47));
  }
 }
 if (var_1_30) {
  if (var_1_25) {
   var_1_48 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
  }
 }
 if (var_1_44 > var_1_24) {
  var_1_49 = ((((((((var_1_40) < ((var_1_50 - var_1_44))) ? (var_1_40) : ((var_1_50 - var_1_44))))) < (var_1_35)) ? (((((var_1_40) < ((var_1_50 - var_1_44))) ? (var_1_40) : ((var_1_50 - var_1_44))))) : (var_1_35)));
 } else {
  if (var_1_42 >= ((((var_1_24) > (var_1_33)) ? (var_1_24) : (var_1_33)))) {
   if (var_1_33 > ((~ 50) + (var_1_42 >> var_1_24))) {
    if (-10000 >= ((var_1_48 * var_1_33) ^ var_1_39)) {
     var_1_49 = (((((var_1_42 + var_1_44) + ((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40)))) < 0 ) ? -((var_1_42 + var_1_44) + ((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40)))) : ((var_1_42 + var_1_44) + ((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40))))));
    } else {
     var_1_49 = ((((var_1_44) < (var_1_35)) ? (var_1_44) : (var_1_35)));
    }
   }
  }
 }
 if (var_1_28) {
  var_1_51 = (var_1_47 + var_1_46);
 }
 if (var_1_32) {
  var_1_52 = (var_1_41 + var_1_44);
 } else {
  if (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) > var_1_24) {
   var_1_52 = (var_1_54 - (((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))));
  } else {
   var_1_52 = ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) + var_1_35);
  }
 }
 if ((var_1_26 >= 32u) && (100000u <= var_1_50)) {
  var_1_55 = ((((var_1_39) < (var_1_42)) ? (var_1_39) : (var_1_42)));
 }
 if ((- var_1_36) < ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) {
  if (var_1_29) {
   var_1_56 = var_1_35;
  } else {
   var_1_56 = var_1_40;
  }
 }
 if (var_1_40 >= (16 % var_1_58)) {
  var_1_57 = (var_1_39 + ((((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))) > (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) ? (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))) : (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))))));
 }
 if (var_1_29) {
  var_1_59 = var_1_35;
 } else {
  if (var_1_30) {
   var_1_59 = (((((((var_1_44) > (var_1_54)) ? (var_1_44) : (var_1_54))) < 0 ) ? -((((var_1_44) > (var_1_54)) ? (var_1_44) : (var_1_54))) : ((((var_1_44) > (var_1_54)) ? (var_1_44) : (var_1_54)))));
  }
 }
 if (((((var_1_35) > (var_1_53)) ? (var_1_35) : (var_1_53))) < (var_1_40 / var_1_58)) {
  var_1_60 = (((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))));
 } else {
  if (var_1_51 < ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) {
   var_1_60 = ((((((((var_1_54 - var_1_35) < 0 ) ? -(var_1_54 - var_1_35) : (var_1_54 - var_1_35)))) < (var_1_41)) ? (((((var_1_54 - var_1_35) < 0 ) ? -(var_1_54 - var_1_35) : (var_1_54 - var_1_35)))) : (var_1_41)));
  } else {
   var_1_60 = ((((((60982) < 0 ) ? -(60982) : (60982))) - 5) - ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))));
  }
 }
 if ((- var_1_37) < var_1_46) {
  if (2.5f <= var_1_51) {
   var_1_61 = var_1_41;
  }
 }
 if (var_1_39 <= (- var_1_59)) {
  if (var_1_29) {
   if (var_1_25) {
    var_1_62 = ((((var_1_61) > (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) ? (var_1_61) : (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))));
   }
  } else {
   if (((var_1_52 / var_1_58) / (var_1_63 + 5)) > ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) {
    var_1_62 = var_1_40;
   } else {
    var_1_62 = ((((((var_1_64 - var_1_44)) > (((((var_1_58) > (var_1_42)) ? (var_1_58) : (var_1_42))))) ? ((var_1_64 - var_1_44)) : (((((var_1_58) > (var_1_42)) ? (var_1_58) : (var_1_42)))))) - var_1_41);
   }
  }
 } else {
  if (var_1_56 == (var_1_39 / var_1_58)) {
   var_1_62 = (var_1_65 - var_1_41);
  } else {
   if (var_1_64 <= var_1_60) {
    var_1_62 = (((((var_1_57 + -10) < 0 ) ? -(var_1_57 + -10) : (var_1_57 + -10))) - var_1_39);
   }
  }
 }
 if ((1 >> var_1_60) <= (64 * (~ var_1_49))) {
  var_1_66 = (! var_1_29);
 }
 if (var_1_45 < (0.25 * var_1_38)) {
  if (var_1_25) {
   var_1_67 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
  }
 } else {
  var_1_67 = (((((((((var_1_40 + -64)) < (var_1_39)) ? ((var_1_40 + -64)) : (var_1_39)))) < ((((((var_1_53 + var_1_35)) > (var_1_58)) ? ((var_1_53 + var_1_35)) : (var_1_58))))) ? ((((((var_1_40 + -64)) < (var_1_39)) ? ((var_1_40 + -64)) : (var_1_39)))) : ((((((var_1_53 + var_1_35)) > (var_1_58)) ? ((var_1_53 + var_1_35)) : (var_1_58))))));
 }
 if ((var_1_69 * var_1_54) > (var_1_42 - ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) {
  if (var_1_69 < var_1_44) {
   if (-10 >= (var_1_40 & var_1_35)) {
    var_1_68 = var_1_41;
   } else {
    if (var_1_56 < ((((var_1_50) < (var_1_49)) ? (var_1_50) : (var_1_49)))) {
     if (var_1_69 != (var_1_54 - var_1_58)) {
      if (var_1_36 < var_1_43) {
       var_1_68 = ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)));
      } else {
       if (var_1_27) {
        var_1_68 = (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) + 8);
       }
      }
     }
    } else {
     var_1_68 = ((((100000) > (((((500) < 0 ) ? -(500) : (500))))) ? (100000) : (((((500) < 0 ) ? -(500) : (500))))));
    }
   }
  } else {
   var_1_68 = (var_1_55 + var_1_44);
  }
 } else {
  if ((((((var_1_24 ^ var_1_67)) > ((var_1_61 | var_1_56))) ? ((var_1_24 ^ var_1_67)) : ((var_1_61 | var_1_56)))) > var_1_49) {
   var_1_68 = var_1_69;
  }
 }
 if (var_1_50 <= (var_1_52 & var_1_44)) {
  var_1_70 = var_1_46;
 }
 if (((((var_1_64) < (var_1_33)) ? (var_1_64) : (var_1_33))) > (var_1_56 >> var_1_35)) {
  var_1_71 = var_1_40;
 }
 if (var_1_41 > var_1_56) {
  if ((var_1_45 - (var_1_46 + 4.5f)) < (((((var_1_43 / var_1_37)) > ((2.75 + var_1_38))) ? ((var_1_43 / var_1_37)) : ((2.75 + var_1_38))))) {
   var_1_72 = (((((((((var_1_73) < (25)) ? (var_1_73) : (25)))) > (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))))) ? (((((var_1_73) < (25)) ? (var_1_73) : (25)))) : (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))))) + var_1_75);
  }
 }
 var_1_76 = ((((var_1_77) < (var_1_45)) ? (var_1_77) : (var_1_45)));
 if (var_1_68 < var_1_41) {
  if (var_1_27) {
   if (var_1_66) {
    var_1_78 = (var_1_42 + ((((((((var_1_75) > (var_1_58)) ? (var_1_75) : (var_1_58)))) < (var_1_74)) ? (((((var_1_75) > (var_1_58)) ? (var_1_75) : (var_1_58)))) : (var_1_74))));
   } else {
    var_1_78 = (((((((var_1_53) < (((((var_1_44) < (var_1_72)) ? (var_1_44) : (var_1_72))))) ? (var_1_53) : (((((var_1_44) < (var_1_72)) ? (var_1_44) : (var_1_72)))))) < 0 ) ? -((((var_1_53) < (((((var_1_44) < (var_1_72)) ? (var_1_44) : (var_1_72))))) ? (var_1_53) : (((((var_1_44) < (var_1_72)) ? (var_1_44) : (var_1_72)))))) : ((((var_1_53) < (((((var_1_44) < (var_1_72)) ? (var_1_44) : (var_1_72))))) ? (var_1_53) : (((((var_1_44) < (var_1_72)) ? (var_1_44) : (var_1_72))))))));
   }
  }
 }
 if ((var_1_72 >= var_1_74) && var_1_32) {
  var_1_79 = ((((var_1_67) > (var_1_69)) ? (var_1_67) : (var_1_69)));
 }
 if (((var_1_54 * var_1_52) >> var_1_71) < var_1_39) {
  var_1_80 = var_1_35;
 } else {
  var_1_80 = (var_1_50 - ((((var_1_42) < (32u)) ? (var_1_42) : (32u))));
 }
 if ((var_1_38 * var_1_70) <= 2.4f) {
  if (63.5 < var_1_43) {
   if ((var_1_54 & (var_1_78 | var_1_49)) >= (25u & var_1_58)) {
    var_1_81 = (! 0);
   }
  } else {
   var_1_81 = (var_1_31 || (var_1_25 && var_1_30));
  }
 } else {
  var_1_81 = (var_1_32 && var_1_30);
 }
 if ((var_1_40 * var_1_48) >= 64) {
  if (var_1_66) {
   var_1_82 = var_1_45;
  } else {
   var_1_82 = ((((((8.875f) < 0 ) ? -(8.875f) : (8.875f))) - var_1_47) + var_1_46);
  }
 } else {
  if (var_1_77 >= ((((var_1_45) > (var_1_38)) ? (var_1_45) : (var_1_38)))) {
   var_1_82 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
  } else {
   var_1_82 = ((((var_1_45) < (var_1_77)) ? (var_1_45) : (var_1_77)));
  }
 }
 if (! var_1_25) {
  if ((var_1_63 << var_1_56) != var_1_35) {
   if (var_1_32) {
    var_1_83 = (((((var_1_54 - (var_1_41 + var_1_35))) > (((((var_1_44) < (var_1_39)) ? (var_1_44) : (var_1_39))))) ? ((var_1_54 - (var_1_41 + var_1_35))) : (((((var_1_44) < (var_1_39)) ? (var_1_44) : (var_1_39))))));
   }
  } else {
   var_1_83 = var_1_39;
  }
 } else {
  var_1_83 = (((((((var_1_42) > (var_1_41)) ? (var_1_42) : (var_1_41))) < 0 ) ? -((((var_1_42) > (var_1_41)) ? (var_1_42) : (var_1_41))) : ((((var_1_42) > (var_1_41)) ? (var_1_42) : (var_1_41)))));
 }
 if (var_1_29) {
  var_1_84 = ((var_1_85 - var_1_86) - ((((var_1_87) > (var_1_88)) ? (var_1_87) : (var_1_88))));
 } else {
  var_1_84 = ((((1) < 0 ) ? -(1) : (1)));
 }
 var_1_89 = var_1_87;
 if ((((((128.1f / var_1_37)) > (var_1_46)) ? ((128.1f / var_1_37)) : (var_1_46))) >= 5.8) {
  var_1_90 = (var_1_75 + var_1_41);
 }
 if (var_1_35 < var_1_79) {
  if (var_1_69 < var_1_44) {
   var_1_91 = (((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))));
  } else {
   var_1_91 = var_1_54;
  }
 }
 if (! (var_1_90 <= (var_1_61 ^ var_1_59))) {
  var_1_92 = var_1_86;
 } else {
  if (var_1_93) {
   if (var_1_25) {
    var_1_92 = ((((((((var_1_41) > (var_1_88)) ? (var_1_41) : (var_1_88))) + var_1_44) < 0 ) ? -(((((var_1_41) > (var_1_88)) ? (var_1_41) : (var_1_88))) + var_1_44) : (((((var_1_41) > (var_1_88)) ? (var_1_41) : (var_1_88))) + var_1_44)));
   } else {
    var_1_92 = (var_1_41 + (((((var_1_87 - var_1_58)) < (((((var_1_39) < (var_1_53)) ? (var_1_39) : (var_1_53))))) ? ((var_1_87 - var_1_58)) : (((((var_1_39) < (var_1_53)) ? (var_1_39) : (var_1_53)))))));
   }
  } else {
   var_1_92 = ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)));
  }
 }
 if ((var_1_50 - ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) < ((var_1_95 - var_1_52) + var_1_64)) {
  var_1_94 = (var_1_93 && var_1_31);
 } else {
  var_1_94 = (! var_1_29);
 }
 if ((var_1_76 + var_1_82) < var_1_70) {
  if (var_1_57 > 128) {
   if (var_1_83 == var_1_48) {
    var_1_96 = (var_1_87 + var_1_85);
   }
  }
 }
 if (var_1_37 >= (((((4.8f - var_1_46)) > (((((var_1_36) < (63.6f)) ? (var_1_36) : (63.6f))))) ? ((4.8f - var_1_46)) : (((((var_1_36) < (63.6f)) ? (var_1_36) : (63.6f))))))) {
  var_1_97 = var_1_85;
 } else {
  if ((var_1_50 & (var_1_67 >> var_1_68)) <= var_1_63) {
   var_1_97 = var_1_86;
  }
 }
 if (var_1_24 > var_1_52) {
  if (var_1_76 < 15.2) {
   var_1_98 = (var_1_39 - ((((var_1_58) > (1000)) ? (var_1_58) : (1000))));
  }
 } else {
  if (var_1_56 != var_1_60) {
   var_1_98 = ((((var_1_88) > (var_1_84)) ? (var_1_88) : (var_1_84)));
  } else {
   if (var_1_44 <= var_1_67) {
    if (var_1_65 < var_1_40) {
     var_1_98 = (((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) < 0 ) ? -((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) : ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))));
    } else {
     var_1_98 = (((((var_1_99 - var_1_87) - var_1_39) < 0 ) ? -((var_1_99 - var_1_87) - var_1_39) : ((var_1_99 - var_1_87) - var_1_39)));
    }
   } else {
    var_1_98 = ((((var_1_85) < ((var_1_89 + var_1_39))) ? (var_1_85) : ((var_1_89 + var_1_39))));
   }
  }
 }
 if (var_1_30) {
  var_1_100 = var_1_41;
 }
 if (var_1_59 <= var_1_102) {
  var_1_101 = ((((128) < ((var_1_54 - var_1_39))) ? (128) : ((var_1_54 - var_1_39))));
 }
 if (2 <= var_1_69) {
  var_1_103 = (((((((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87))) - ((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))))) < (50)) ? ((((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87))) - ((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))))) : (50)));
 }
 if (var_1_36 >= ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) {
  var_1_104 = ((((-256) < 0 ) ? -(-256) : (-256)));
 } else {
  var_1_104 = ((((var_1_72) > (((((var_1_89) > (((((5) > (var_1_73)) ? (5) : (var_1_73))))) ? (var_1_89) : (((((5) > (var_1_73)) ? (5) : (var_1_73)))))))) ? (var_1_72) : (((((var_1_89) > (((((5) > (var_1_73)) ? (5) : (var_1_73))))) ? (var_1_89) : (((((5) > (var_1_73)) ? (5) : (var_1_73)))))))));
 }
 if ((var_1_49 & var_1_35) > var_1_85) {
  var_1_105 = (((((42475) > (var_1_54)) ? (42475) : (var_1_54))) - var_1_42);
 }
 if (var_1_32) {
  var_1_106 = var_1_91;
 } else {
  var_1_106 = var_1_69;
 }
 if (var_1_81) {
  var_1_107 = var_1_46;
 } else {
  var_1_107 = var_1_47;
 }
 if (var_1_27) {
  var_1_108 = var_1_99;
 }
 if (var_1_66) {
  var_1_109 = var_1_45;
 }
 var_1_110 = var_1_47;
 if (var_1_30) {
  var_1_111 = var_1_87;
 }
 if (var_1_30) {
  var_1_112 = var_1_52;
 }
 if (var_1_32) {
  var_1_113 = var_1_75;
 } else {
  var_1_113 = var_1_74;
 }
 if (var_1_27) {
  var_1_114 = var_1_35;
 }
 if (var_1_31) {
  var_1_115 = var_1_88;
 }
 if (var_1_31) {
  var_1_116 = var_1_47;
 }
 if (var_1_25) {
  var_1_117 = var_1_85;
 }
 if (var_1_66) {
  var_1_118 = var_1_88;
 } else {
  var_1_118 = var_1_86;
 }
 if (var_1_75 < var_1_113) {
  if ((- (var_1_110 / var_1_37)) <= ((((var_1_47) > ((var_1_77 * var_1_36))) ? (var_1_47) : ((var_1_77 * var_1_36))))) {
   var_1_119 = 16;
  } else {
   var_1_119 = var_1_120;
  }
 } else {
  var_1_119 = var_1_99;
 }
 if (var_1_12 <= (var_1_7 * 5.8f)) {
  var_1_16 = ((((((((var_1_12) > (var_1_7)) ? (var_1_12) : (var_1_7)))) < (var_1_8)) ? (((((var_1_12) > (var_1_7)) ? (var_1_12) : (var_1_7)))) : (var_1_8)));
 } else {
  var_1_16 = var_1_6;
 }
 if (var_1_10 || var_1_20) {
  var_1_19 = ((((var_1_21) > (32)) ? (var_1_21) : (32)));
 }
 if (var_1_10) {
  if ((var_1_19 | var_1_19) != (var_1_23 - var_1_19)) {
   var_1_22 = 4.75;
  }
 }
 signed long int stepLocal_0 = (var_1_3 % var_1_4) * var_1_19;
 if (var_1_19 > stepLocal_0) {
  var_1_1 = (var_1_6 - (var_1_7 + var_1_8));
 } else {
  var_1_1 = (var_1_6 - (var_1_8 + var_1_7));
 }
 if (! var_1_10) {
  var_1_13 = (50u + var_1_19);
 } else {
  var_1_13 = (var_1_19 + var_1_19);
 }
 if (var_1_8 < (var_1_22 / var_1_12)) {
  if (var_1_22 > var_1_6) {
   var_1_17 = var_1_19;
  }
 }
 if (var_1_10 || (var_1_19 == var_1_13)) {
  var_1_9 = ((127.5f - ((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7)))) + (16.1f + var_1_11));
 } else {
  var_1_9 = ((((((var_1_12 - var_1_7) - var_1_6)) < (var_1_11)) ? (((var_1_12 - var_1_7) - var_1_6)) : (var_1_11)));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427382800e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483646);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 255);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 2147483647);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -127);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 32767);
 assume_abort_if_not(var_1_54 <= 65534);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 255);
 assume_abort_if_not(var_1_58 != 0);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 1);
 assume_abort_if_not(var_1_63 <= 32768);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= 1073741822);
 assume_abort_if_not(var_1_64 <= 2147483646);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= -1);
 assume_abort_if_not(var_1_65 <= 2147483646);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 65535);
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= -63);
 assume_abort_if_not(var_1_73 <= 63);
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= -63);
 assume_abort_if_not(var_1_74 <= 63);
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= -63);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= -922337.2036854765600e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854765600e+12F && var_1_77 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_85 >= 62);
 assume_abort_if_not(var_1_85 <= 126);
 var_1_86 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 63);
 var_1_87 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_87 >= 0);
 assume_abort_if_not(var_1_87 <= 126);
 var_1_88 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 126);
 var_1_93 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_93 >= 0);
 assume_abort_if_not(var_1_93 <= 1);
 var_1_95 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_95 >= 2147483647);
 assume_abort_if_not(var_1_95 <= 4294967295);
 var_1_99 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_99 >= 16383);
 assume_abort_if_not(var_1_99 <= 32766);
 var_1_102 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_102 >= 0);
 assume_abort_if_not(var_1_102 <= 65535);
 var_1_120 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_120 >= -32767);
 assume_abort_if_not(var_1_120 <= 32766);
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_19 > ((var_1_3 % var_1_4) * var_1_19)) ? (var_1_1 == ((double) (var_1_6 - (var_1_7 + var_1_8)))) : (var_1_1 == ((double) (var_1_6 - (var_1_8 + var_1_7))))) && ((var_1_10 || (var_1_19 == var_1_13)) ? (var_1_9 == ((float) ((127.5f - ((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7)))) + (16.1f + var_1_11)))) : (var_1_9 == ((float) ((((((var_1_12 - var_1_7) - var_1_6)) < (var_1_11)) ? (((var_1_12 - var_1_7) - var_1_6)) : (var_1_11))))))) && ((! var_1_10) ? (var_1_13 == ((unsigned long int) (50u + var_1_19))) : (var_1_13 == ((unsigned long int) (var_1_19 + var_1_19))))) && ((var_1_12 <= (var_1_7 * 5.8f)) ? (var_1_16 == ((float) ((((((((var_1_12) > (var_1_7)) ? (var_1_12) : (var_1_7)))) < (var_1_8)) ? (((((var_1_12) > (var_1_7)) ? (var_1_12) : (var_1_7)))) : (var_1_8))))) : (var_1_16 == ((float) var_1_6)))) && ((var_1_8 < (var_1_22 / var_1_12)) ? ((var_1_22 > var_1_6) ? (var_1_17 == ((signed long int) var_1_19)) : 1) : 1)) && ((var_1_10 || var_1_20) ? (var_1_19 == ((unsigned char) ((((var_1_21) > (32)) ? (var_1_21) : (32))))) : 1)) && (var_1_10 ? (((var_1_19 | var_1_19) != (var_1_23 - var_1_19)) ? (var_1_22 == ((double) 4.75)) : 1) : 1)
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
