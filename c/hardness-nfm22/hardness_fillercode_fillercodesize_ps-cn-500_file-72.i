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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
float var_1_14 = 64.3;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
unsigned long int var_1_31 = 1;
unsigned long int var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 100;
unsigned short int var_1_36 = 50;
unsigned long int var_1_37 = 3773873024;
unsigned long int var_1_38 = 2296504360;
double var_1_39 = 64.375;
double var_1_40 = 63.6;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 10;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned short int var_1_51 = 44584;
signed char var_1_52 = 32;
signed char var_1_53 = 16;
signed char var_1_54 = 64;
signed char var_1_55 = 32;
signed char var_1_56 = 100;
signed char var_1_57 = 100;
double var_1_58 = 199.75;
double var_1_59 = 0.0;
double var_1_60 = 256.2;
double var_1_61 = 1.54;
unsigned short int var_1_62 = 2;
unsigned short int var_1_63 = 33332;
signed char var_1_64 = -64;
signed char var_1_65 = 4;
signed char var_1_66 = -32;
signed char var_1_67 = -1;
signed char var_1_68 = 64;
unsigned short int var_1_69 = 16;
unsigned short int var_1_70 = 1;
unsigned long int var_1_71 = 50;
unsigned char var_1_72 = 16;
unsigned char var_1_73 = 50;
double var_1_74 = 255.75;
float var_1_75 = 0.875;
unsigned short int var_1_76 = 32;
signed short int var_1_77 = -32;
unsigned short int var_1_78 = 1000;
signed short int var_1_79 = -16;
signed short int var_1_80 = -2;
signed short int var_1_81 = 256;
unsigned short int var_1_82 = 4;
signed char var_1_83 = 4;
double var_1_84 = 32.92;
double var_1_85 = 10000000.08;
unsigned char var_1_86 = 1;
signed long int var_1_87 = -128;
unsigned short int var_1_88 = 128;
unsigned short int var_1_89 = 32;
unsigned short int var_1_90 = 27120;
signed long int var_1_91 = -8;
signed char var_1_92 = 5;
float var_1_93 = 0.375;
signed long int var_1_94 = -10;
double var_1_95 = 8.8;
unsigned short int var_1_96 = 256;
unsigned short int var_1_97 = 64;
unsigned short int var_1_98 = 47144;
unsigned char var_1_99 = 10;
unsigned char var_1_100 = 0;
unsigned char var_1_101 = 0;
signed short int var_1_102 = -5;
signed short int var_1_103 = 19435;
signed char var_1_104 = -50;
float var_1_105 = 63.1;
unsigned char var_1_106 = 1;
signed short int var_1_107 = 64;
unsigned long int var_1_108 = 0;
unsigned char var_1_109 = 0;
unsigned char var_1_110 = 32;
double var_1_111 = 15.5;
signed short int var_1_112 = 256;
signed char var_1_113 = 8;
float var_1_114 = 256.5;
float var_1_115 = 24.25;
signed char var_1_116 = 8;
unsigned short int var_1_117 = 16;
unsigned long int var_1_118 = 10;
unsigned long int var_1_119 = 2;
unsigned char last_1_var_1_17 = 1;
double last_1_var_1_20 = 9.25;
unsigned char last_1_var_1_23 = 2;
unsigned short int last_1_var_1_26 = 5;
signed long int last_1_var_1_29 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_33 && var_1_34) {
  if (var_1_35 <= var_1_36) {
   var_1_32 = (((((var_1_37) < (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_37) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
  }
 }
 if (var_1_33) {
  if (var_1_36 != (~ var_1_38)) {
   var_1_39 = var_1_40;
  }
 }
 if (var_1_32 <= (~ var_1_37)) {
  if (var_1_40 <= var_1_39) {
   var_1_41 = (var_1_42 && (! var_1_43));
  } else {
   var_1_41 = (var_1_42 && var_1_44);
  }
 } else {
  if (var_1_39 > var_1_40) {
   var_1_41 = (! var_1_43);
  } else {
   if (var_1_36 <= var_1_37) {
    var_1_41 = (((var_1_32 >= 50u) && var_1_42) && var_1_43);
   } else {
    var_1_41 = var_1_43;
   }
  }
 }
 if (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) <= var_1_40) {
  var_1_45 = ((((((((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) < 0 ) ? -((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) : ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) < 0 ) ? -(((((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) < 0 ) ? -((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) : ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) : (((((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) < 0 ) ? -((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) : ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47)))))));
 } else {
  var_1_45 = var_1_46;
 }
 if (var_1_44) {
  if (var_1_36 > ((((~ var_1_38) < 0 ) ? -(~ var_1_38) : (~ var_1_38)))) {
   if (var_1_40 < (- var_1_39)) {
    if (var_1_46 >= ((var_1_36 >> var_1_45) * var_1_37)) {
     var_1_48 = (var_1_43 && (var_1_34 && var_1_49));
    } else {
     var_1_48 = (! var_1_42);
    }
   } else {
    var_1_48 = (var_1_42 && (! var_1_50));
   }
  } else {
   if (var_1_36 > (var_1_51 - var_1_45)) {
    var_1_48 = (! 0);
   } else {
    var_1_48 = (! ((var_1_51 >= var_1_35) || var_1_42));
   }
  }
 }
 if (var_1_33 && var_1_49) {
  var_1_52 = ((((var_1_53) > (((var_1_54 - var_1_55) - ((((var_1_56) > (var_1_57)) ? (var_1_56) : (var_1_57)))))) ? (var_1_53) : (((var_1_54 - var_1_55) - ((((var_1_56) > (var_1_57)) ? (var_1_56) : (var_1_57)))))));
 }
 if (var_1_48) {
  if (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < var_1_54) {
   var_1_58 = ((((9.8) < (var_1_40)) ? (9.8) : (var_1_40)));
  } else {
   if (var_1_41) {
    if ((var_1_57 + var_1_55) >= var_1_53) {
     var_1_58 = (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - (var_1_59 - var_1_60));
    } else {
     var_1_58 = ((((var_1_60) > (var_1_59)) ? (var_1_60) : (var_1_59)));
    }
   } else {
    if ((-64 >= var_1_46) && (var_1_59 < 64.8)) {
     var_1_58 = ((7.5 + var_1_61) + ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))));
    } else {
     if (! var_1_33) {
      var_1_58 = ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)));
     } else {
      var_1_58 = (var_1_61 + ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))));
     }
    }
   }
  }
 }
 if (var_1_49) {
  if (var_1_42 || (var_1_37 >= var_1_54)) {
   var_1_62 = ((((32) > ((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - var_1_56))) ? (32) : ((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - var_1_56))));
  }
 } else {
  if (var_1_58 >= (var_1_40 * 255.75)) {
   var_1_62 = var_1_45;
  } else {
   var_1_62 = ((((var_1_47) > ((var_1_63 - var_1_54))) ? (var_1_47) : ((var_1_63 - var_1_54))));
  }
 }
 if (-32 < ((~ var_1_52) % var_1_51)) {
  var_1_64 = (((((16) < (var_1_55)) ? (16) : (var_1_55))) + (((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) < 0 ) ? -((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) : ((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))))));
 }
 if ((var_1_45 ^ (var_1_62 & 2)) == (((((((var_1_63) < (var_1_36)) ? (var_1_63) : (var_1_36))) < 0 ) ? -((((var_1_63) < (var_1_36)) ? (var_1_63) : (var_1_36))) : ((((var_1_63) < (var_1_36)) ? (var_1_63) : (var_1_36)))))) {
  var_1_67 = ((((var_1_54 - var_1_57) < 0 ) ? -(var_1_54 - var_1_57) : (var_1_54 - var_1_57)));
 } else {
  if (var_1_52 > (var_1_62 ^ (var_1_57 + -10))) {
   if (var_1_54 >= var_1_32) {
    var_1_67 = (-1 - ((((var_1_56) > (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) ? (var_1_56) : (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))));
   }
  } else {
   if (! var_1_43) {
    if (((~ var_1_45) > var_1_52) || (((((var_1_35) < (var_1_38)) ? (var_1_35) : (var_1_38))) <= (var_1_37 ^ var_1_47))) {
     var_1_67 = (16 - ((((64) > ((var_1_68 - var_1_55))) ? (64) : ((var_1_68 - var_1_55)))));
    }
   }
  }
 }
 if (((((var_1_38 - 256u) < 0 ) ? -(var_1_38 - 256u) : (var_1_38 - 256u))) <= (var_1_51 + var_1_63)) {
  var_1_69 = (((((var_1_70 + 16)) > (var_1_47)) ? ((var_1_70 + 16)) : (var_1_47)));
 }
 if (var_1_48) {
  var_1_71 = var_1_54;
 }
 if (var_1_50) {
  var_1_72 = var_1_68;
 }
 var_1_73 = 5;
 var_1_74 = var_1_59;
 if (var_1_44) {
  var_1_75 = var_1_60;
 } else {
  var_1_75 = var_1_40;
 }
 if (var_1_38 <= (var_1_46 >> var_1_45)) {
  if (! (var_1_69 > var_1_71)) {
   var_1_76 = (((((((var_1_72) < ((61490 - var_1_54))) ? (var_1_72) : ((61490 - var_1_54)))) < 0 ) ? -((((var_1_72) < ((61490 - var_1_54))) ? (var_1_72) : ((61490 - var_1_54)))) : ((((var_1_72) < ((61490 - var_1_54))) ? (var_1_72) : ((61490 - var_1_54))))));
  } else {
   if (var_1_47 < var_1_72) {
    var_1_76 = ((((var_1_57) < (var_1_73)) ? (var_1_57) : (var_1_73)));
   }
  }
 } else {
  var_1_76 = ((((25) < 0 ) ? -(25) : (25)));
 }
 if ((var_1_60 + 16.5) == var_1_75) {
  var_1_77 = ((((var_1_56) > (((((var_1_72) < (var_1_52)) ? (var_1_72) : (var_1_52))))) ? (var_1_56) : (((((var_1_72) < (var_1_52)) ? (var_1_72) : (var_1_52))))));
 } else {
  if (var_1_38 >= var_1_46) {
   var_1_77 = ((((var_1_66) < ((((((var_1_54) < (var_1_56)) ? (var_1_54) : (var_1_56))) - var_1_55))) ? (var_1_66) : ((((((var_1_54) < (var_1_56)) ? (var_1_54) : (var_1_56))) - var_1_55))));
  }
 }
 if (((var_1_45 | var_1_69) * ((((var_1_67) < (-4)) ? (var_1_67) : (-4)))) > var_1_76) {
  var_1_78 = (var_1_56 + var_1_46);
 } else {
  var_1_78 = (((((((var_1_63) > (var_1_70)) ? (var_1_63) : (var_1_70))) < 0 ) ? -((((var_1_63) > (var_1_70)) ? (var_1_63) : (var_1_70))) : ((((var_1_63) > (var_1_70)) ? (var_1_63) : (var_1_70)))));
 }
 if (var_1_37 > var_1_72) {
  var_1_79 = var_1_73;
 } else {
  if ((var_1_68 % var_1_54) >= var_1_72) {
   var_1_79 = ((((((((-10) < (var_1_66)) ? (-10) : (var_1_66))) < 0 ) ? -((((-10) < (var_1_66)) ? (-10) : (var_1_66))) : ((((-10) < (var_1_66)) ? (-10) : (var_1_66))))) + ((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54))));
  }
 }
 if (var_1_76 > (var_1_56 % ((((var_1_68) > (1)) ? (var_1_68) : (1))))) {
  var_1_80 = ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)));
 }
 if (var_1_38 != var_1_62) {
  if (((((var_1_68) < (var_1_55)) ? (var_1_68) : (var_1_55))) > var_1_62) {
   var_1_81 = ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)));
  } else {
   if (var_1_44) {
    var_1_81 = (var_1_46 - ((((((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))) > (var_1_55)) ? (((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))) : (var_1_55))));
   }
  }
 }
 if (var_1_75 < var_1_58) {
  var_1_82 = (((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) < 0 ) ? -((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) : ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))));
 } else {
  var_1_82 = ((((var_1_63) > (var_1_55)) ? (var_1_63) : (var_1_55)));
 }
 if (256 <= ((var_1_52 >> var_1_76) / ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))))) {
  var_1_83 = (((((16) < (4)) ? (16) : (4))) + ((((var_1_66) > (var_1_65)) ? (var_1_66) : (var_1_65))));
 }
 if (var_1_63 <= (~ var_1_47)) {
  if (var_1_78 <= var_1_72) {
   if (var_1_55 > -5) {
    var_1_84 = ((((var_1_60 + var_1_61) < 0 ) ? -(var_1_60 + var_1_61) : (var_1_60 + var_1_61)));
   }
  }
 } else {
  if (var_1_36 <= var_1_73) {
   if (var_1_50 || (var_1_61 > var_1_74)) {
    var_1_84 = (999999.5 + var_1_61);
   } else {
    if (1000000000u > (((((var_1_45 % var_1_37)) > (50u)) ? ((var_1_45 % var_1_37)) : (50u)))) {
     if (var_1_32 < var_1_57) {
      var_1_84 = (var_1_61 + ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))));
     }
    } else {
     var_1_84 = (var_1_59 - ((((var_1_60) > (var_1_85)) ? (var_1_60) : (var_1_85))));
    }
   }
  }
 }
 if (var_1_50) {
  if (var_1_74 <= var_1_40) {
   var_1_86 = ((var_1_45 < var_1_70) || var_1_44);
  } else {
   if (var_1_67 != (var_1_55 - var_1_57)) {
    var_1_86 = ((! (! var_1_49)) || var_1_43);
   }
  }
 } else {
  var_1_86 = (var_1_43 || (! (! var_1_49)));
 }
 if (var_1_82 <= 0) {
  if (0 >= var_1_67) {
   var_1_87 = (var_1_64 + var_1_73);
  }
 }
 if (var_1_78 >= ((~ var_1_89) >> var_1_53)) {
  if (var_1_33) {
   var_1_88 = ((var_1_90 - var_1_54) + (((((((8) < 0 ) ? -(8) : (8))) < 0 ) ? -((((8) < 0 ) ? -(8) : (8))) : ((((8) < 0 ) ? -(8) : (8))))));
  } else {
   var_1_88 = ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)));
  }
 }
 if (((((var_1_85) < (var_1_59)) ? (var_1_85) : (var_1_59))) > var_1_75) {
  var_1_91 = ((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80)));
 }
 if (var_1_56 > (var_1_63 % var_1_68)) {
  if ((var_1_80 % var_1_54) <= 8) {
   var_1_92 = var_1_54;
  }
 } else {
  var_1_92 = (var_1_55 - var_1_54);
 }
 if (var_1_61 > (var_1_85 - var_1_59)) {
  var_1_93 = ((((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) > ((31.5f + 255.25f))) ? (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) : ((31.5f + 255.25f))));
 }
 if (var_1_60 > var_1_95) {
  if (var_1_86) {
   var_1_94 = (var_1_62 - var_1_72);
  }
 }
 if (var_1_88 <= ((((var_1_70) > (((((var_1_78) < (var_1_57)) ? (var_1_78) : (var_1_57))))) ? (var_1_70) : (((((var_1_78) < (var_1_57)) ? (var_1_78) : (var_1_57))))))) {
  if (var_1_37 > var_1_76) {
   var_1_96 = (var_1_54 + ((((var_1_68) < (var_1_56)) ? (var_1_68) : (var_1_56))));
  } else {
   if (((((var_1_72) > (var_1_46)) ? (var_1_72) : (var_1_46))) > var_1_91) {
    var_1_96 = var_1_97;
   } else {
    var_1_96 = ((((var_1_47) < ((((((var_1_63) > (var_1_98)) ? (var_1_63) : (var_1_98))) - var_1_46))) ? (var_1_47) : ((((((var_1_63) > (var_1_98)) ? (var_1_63) : (var_1_98))) - var_1_46))));
   }
  }
 }
 if ((((((var_1_93) < 0 ) ? -(var_1_93) : (var_1_93))) + var_1_61) <= var_1_75) {
  if (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) != ((var_1_54 - var_1_47) & var_1_32)) {
   if ((var_1_78 > ((((var_1_96) > (var_1_63)) ? (var_1_96) : (var_1_63)))) || var_1_43) {
    var_1_99 = ((((var_1_56 + var_1_55) < 0 ) ? -(var_1_56 + var_1_55) : (var_1_56 + var_1_55)));
   }
  } else {
   var_1_99 = ((((var_1_47) < (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) ? (var_1_47) : (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))));
  }
 }
 if (var_1_96 <= var_1_90) {
  if ((var_1_54 - var_1_90) < -10000) {
   var_1_100 = (! ((var_1_38 < var_1_63) && var_1_43));
  }
 } else {
  if (-0.75f >= var_1_40) {
   var_1_100 = var_1_44;
  } else {
   var_1_100 = (var_1_49 || (var_1_33 && var_1_50));
  }
 }
 if (var_1_43) {
  var_1_101 = (var_1_50 || var_1_44);
 }
 if (var_1_78 <= var_1_94) {
  if ((((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))) + var_1_92) > var_1_82) {
   var_1_102 = ((var_1_103 - ((((var_1_57) < (var_1_99)) ? (var_1_57) : (var_1_99)))) - var_1_72);
  }
 }
 if (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) >= var_1_93) {
  if (var_1_71 > 25u) {
   if (var_1_67 < var_1_88) {
    var_1_104 = ((var_1_55 - ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66)))) + var_1_65);
   }
  }
 }
 if (var_1_48) {
  var_1_105 = (var_1_85 - var_1_59);
 }
 if ((var_1_68 - var_1_56) > var_1_51) {
  var_1_106 = (! (var_1_100 || var_1_42));
 }
 if (var_1_101 && (! var_1_33)) {
  if (((((var_1_77) > (var_1_97)) ? (var_1_77) : (var_1_97))) > (((((var_1_87) > (var_1_98)) ? (var_1_87) : (var_1_98))) & (var_1_52 | var_1_103))) {
   var_1_107 = var_1_57;
  } else {
   var_1_107 = (var_1_73 - var_1_55);
  }
 } else {
  if ((var_1_32 * (var_1_91 + var_1_78)) > var_1_54) {
   if (((((var_1_73) < (var_1_91)) ? (var_1_73) : (var_1_91))) >= var_1_53) {
    var_1_107 = ((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99)));
   }
  }
 }
 if (64 >= ((var_1_77 & var_1_68) ^ var_1_36)) {
  var_1_108 = ((((var_1_99 + var_1_68) < 0 ) ? -(var_1_99 + var_1_68) : (var_1_99 + var_1_68)));
 }
 if (var_1_106) {
  var_1_109 = var_1_43;
 } else {
  var_1_109 = 0;
 }
 if (var_1_49) {
  var_1_110 = var_1_47;
 }
 if (var_1_86) {
  var_1_111 = var_1_40;
 } else {
  var_1_111 = var_1_59;
 }
 if (var_1_44) {
  var_1_112 = var_1_53;
 } else {
  var_1_112 = var_1_83;
 }
 if (var_1_33) {
  var_1_113 = var_1_54;
 } else {
  var_1_113 = var_1_66;
 }
 if (var_1_44) {
  var_1_114 = var_1_40;
 } else {
  var_1_114 = var_1_61;
 }
 if (var_1_42) {
  var_1_115 = var_1_61;
 } else {
  var_1_115 = var_1_60;
 }
 if (var_1_109) {
  var_1_116 = var_1_56;
 }
 if (var_1_66 != var_1_77) {
  var_1_117 = var_1_54;
 }
 if (((((var_1_93) > (var_1_84)) ? (var_1_93) : (var_1_84))) == var_1_115) {
  var_1_118 = (((((((var_1_82) < (var_1_98)) ? (var_1_82) : (var_1_98))) < 0 ) ? -((((var_1_82) < (var_1_98)) ? (var_1_82) : (var_1_98))) : ((((var_1_82) < (var_1_98)) ? (var_1_82) : (var_1_98)))));
 }
 var_1_119 = 10u;
 if ((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) {
  var_1_10 = (var_1_11 + 10);
 } else {
  if (last_1_var_1_17 || last_1_var_1_17) {
   if ((((((last_1_var_1_20) < 0 ) ? -(last_1_var_1_20) : (last_1_var_1_20))) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) {
    var_1_10 = (var_1_11 + var_1_16);
   } else {
    var_1_10 = var_1_11;
   }
  } else {
   var_1_10 = var_1_16;
  }
 }
 if ((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) {
  var_1_23 = var_1_25;
 }
 var_1_17 = (var_1_18 && var_1_19);
 if (! var_1_18) {
  var_1_20 = ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)));
 }
 if (256 >= var_1_10) {
  if (var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) {
   var_1_26 = 16;
  } else {
   var_1_26 = var_1_28;
  }
 } else {
  var_1_26 = var_1_25;
 }
 signed long int stepLocal_0 = var_1_23 * var_1_26;
 if (((((var_1_20) < (63.5)) ? (var_1_20) : (63.5))) > (2.4 * var_1_20)) {
  if (stepLocal_0 <= (~ var_1_26)) {
   var_1_1 = (((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))) + var_1_23);
  } else {
   var_1_1 = var_1_10;
  }
 } else {
  var_1_1 = -50;
 }
 var_1_31 = var_1_26;
 var_1_29 = var_1_1;
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 65535);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65535);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -127);
 assume_abort_if_not(var_1_53 <= 126);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= 62);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 126);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 126);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 4611686.018427382800e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -230584.3009213691390e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691390e+12F && var_1_61 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 32767);
 assume_abort_if_not(var_1_63 <= 65534);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= -63);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= -63);
 assume_abort_if_not(var_1_66 <= 63);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= 63);
 assume_abort_if_not(var_1_68 <= 126);
 var_1_70 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 32767);
 var_1_85 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854765600e+12F && var_1_85 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 65535);
 var_1_90 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_90 >= 16383);
 assume_abort_if_not(var_1_90 <= 32767);
 var_1_95 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_95 >= -922337.2036854776000e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854776000e+12F && var_1_95 >= 1.0e-20F ));
 var_1_97 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_97 >= 0);
 assume_abort_if_not(var_1_97 <= 65534);
 var_1_98 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_98 >= 32767);
 assume_abort_if_not(var_1_98 <= 65534);
 var_1_103 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_103 >= 16382);
 assume_abort_if_not(var_1_103 <= 32766);
}
void updateLastVariables() {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
}
int property() {
 return ((((((((((((var_1_20) < (63.5)) ? (var_1_20) : (63.5))) > (2.4 * var_1_20)) ? (((var_1_23 * var_1_26) <= (~ var_1_26)) ? (var_1_1 == ((signed short int) (((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))) + var_1_23))) : (var_1_1 == ((signed short int) var_1_10))) : (var_1_1 == ((signed short int) -50))) && (((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) ? (var_1_10 == ((signed char) (var_1_11 + 10))) : ((last_1_var_1_17 || last_1_var_1_17) ? (((((((last_1_var_1_20) < 0 ) ? -(last_1_var_1_20) : (last_1_var_1_20))) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) ? (var_1_10 == ((signed char) (var_1_11 + var_1_16))) : (var_1_10 == ((signed char) var_1_11))) : (var_1_10 == ((signed char) var_1_16))))) && (var_1_17 == ((unsigned char) (var_1_18 && var_1_19)))) && ((! var_1_18) ? (var_1_20 == ((double) ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) : 1)) && (((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) ? (var_1_23 == ((unsigned char) var_1_25)) : 1)) && ((256 >= var_1_10) ? ((var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) ? (var_1_26 == ((unsigned short int) 16)) : (var_1_26 == ((unsigned short int) var_1_28))) : (var_1_26 == ((unsigned short int) var_1_25)))) && (var_1_29 == ((signed long int) var_1_1))) && (var_1_31 == ((unsigned long int) var_1_26))
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
