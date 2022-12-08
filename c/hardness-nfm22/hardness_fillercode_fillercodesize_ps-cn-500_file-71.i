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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
signed short int var_1_14 = 32;
signed short int var_1_15 = 25;
signed short int var_1_16 = 23809;
signed short int var_1_17 = 2;
float var_1_18 = 499.25;
signed long int var_1_19 = -4;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 16;
signed char var_1_22 = -10;
signed char var_1_23 = 25;
signed char var_1_24 = 4;
float var_1_25 = 3.5;
float var_1_26 = 0.94;
float var_1_27 = 32.5;
float var_1_28 = 4.4;
float var_1_29 = 1.75;
signed long int var_1_30 = 32;
signed long int var_1_31 = -100;
signed long int var_1_32 = -128;
signed long int var_1_33 = 8;
signed char var_1_34 = 5;
signed char var_1_35 = -4;
signed char var_1_36 = 4;
signed long int var_1_37 = 2;
unsigned short int var_1_38 = 8;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned short int var_1_41 = 36156;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
signed char var_1_45 = 2;
unsigned char var_1_46 = 128;
signed long int var_1_47 = 32;
signed long int var_1_48 = 256;
float var_1_49 = 0.75;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
signed short int var_1_52 = -128;
unsigned char var_1_53 = 1;
signed long int var_1_54 = 8;
unsigned short int var_1_55 = 16;
unsigned long int var_1_56 = 500;
unsigned long int var_1_57 = 2962733986;
float var_1_58 = 24.8;
float var_1_59 = 10.2;
float var_1_60 = 0.0;
float var_1_61 = 0.0;
float var_1_62 = 99.7;
float var_1_63 = 10.125;
float var_1_64 = 0.19999999999999996;
float var_1_65 = 256.5;
double var_1_66 = 3.125;
unsigned short int var_1_67 = 10;
signed long int var_1_68 = 128;
signed long int var_1_69 = 8;
unsigned char var_1_70 = 0;
signed char var_1_71 = 16;
unsigned char var_1_72 = 1;
float var_1_73 = 255.25;
float var_1_74 = 1.5;
signed long int var_1_75 = 16;
signed char var_1_76 = 16;
signed char var_1_77 = 2;
signed long int var_1_78 = -64;
signed short int var_1_79 = -200;
unsigned char var_1_80 = 128;
unsigned char var_1_81 = 64;
unsigned char var_1_82 = 8;
unsigned char var_1_83 = 128;
unsigned long int var_1_84 = 0;
unsigned short int var_1_85 = 32;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 1;
unsigned short int var_1_88 = 128;
signed char var_1_89 = 8;
unsigned long int var_1_90 = 500;
unsigned short int var_1_91 = 5;
unsigned short int var_1_92 = 56373;
unsigned char var_1_93 = 0;
signed short int var_1_94 = 32;
signed long int var_1_95 = 5;
unsigned long int var_1_96 = 16;
double var_1_97 = 99.95;
signed short int var_1_98 = -4;
unsigned char var_1_99 = 0;
unsigned char var_1_100 = 0;
signed short int var_1_101 = -50;
signed short int var_1_102 = -100;
float var_1_103 = 64.2;
unsigned char var_1_104 = 1;
double var_1_105 = 0.5;
double var_1_106 = 63.05;
unsigned short int var_1_107 = 4;
float var_1_108 = 4.4;
unsigned char var_1_109 = 0;
double var_1_110 = 7.875;
unsigned short int var_1_111 = 5;
unsigned char var_1_112 = 128;
unsigned char var_1_113 = 0;
signed long int var_1_114 = -10;
float var_1_115 = 64.25;
float var_1_116 = 0.5;
unsigned char var_1_117 = 1;
unsigned char var_1_118 = 0;
float last_1_var_1_12 = 2.375;
signed short int last_1_var_1_14 = 32;
unsigned short int last_1_var_1_20 = 10;
unsigned short int last_1_var_1_21 = 16;
void initially(void) {
}
void step(void) {
 if ((((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_27) <= (var_1_28 + var_1_29)) {
  if (((((var_1_30) > ((var_1_31 / var_1_32))) ? (var_1_30) : ((var_1_31 / var_1_32)))) < var_1_33) {
   var_1_24 = ((var_1_34 + var_1_35) + ((((var_1_36 - 50) < 0 ) ? -(var_1_36 - 50) : (var_1_36 - 50))));
  }
 } else {
  var_1_24 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))));
 }
 if ((var_1_31 % ((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) <= var_1_33) {
  if ((((((var_1_34) > (var_1_38)) ? (var_1_34) : (var_1_38))) <= var_1_30) || (var_1_39 || var_1_40)) {
   if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) <= var_1_28) {
    if (var_1_27 <= var_1_25) {
     var_1_37 = ((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (((((var_1_35) > (((((var_1_38) < (-64)) ? (var_1_38) : (-64))))) ? (var_1_35) : (((((var_1_38) < (-64)) ? (var_1_38) : (-64)))))))) ? (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) : (((((var_1_35) > (((((var_1_38) < (-64)) ? (var_1_38) : (-64))))) ? (var_1_35) : (((((var_1_38) < (-64)) ? (var_1_38) : (-64)))))))));
    } else {
     var_1_37 = ((((((((var_1_24) < (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_24) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) < (var_1_35)) ? (((((var_1_24) < (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_24) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) : (var_1_35)));
    }
   }
  } else {
   if (var_1_29 >= var_1_25) {
    var_1_37 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
   } else {
    if ((var_1_41 - var_1_36) < ((((var_1_32) < (var_1_34)) ? (var_1_32) : (var_1_34)))) {
     var_1_37 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
    } else {
     var_1_37 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
    }
   }
  }
 }
 if (var_1_26 > var_1_27) {
  if ((var_1_32 + var_1_41) == var_1_33) {
   var_1_42 = (var_1_39 || (! (var_1_43 || var_1_44)));
  }
 }
 if ((var_1_46 - var_1_36) > ((var_1_47 / var_1_32) | var_1_30)) {
  if (((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) > ((var_1_30 / var_1_38))) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : ((var_1_30 / var_1_38)))) < var_1_32) {
   var_1_45 = var_1_34;
  }
 }
 if (-256 > var_1_31) {
  if (var_1_49 < var_1_26) {
   var_1_48 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
  } else {
   var_1_48 = (((((((var_1_24) < (var_1_41)) ? (var_1_24) : (var_1_41))) < 0 ) ? -((((var_1_24) < (var_1_41)) ? (var_1_24) : (var_1_41))) : ((((var_1_24) < (var_1_41)) ? (var_1_24) : (var_1_41)))));
  }
 } else {
  var_1_48 = ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + var_1_34) < 0 ) ? -(((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + var_1_34) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + var_1_34)));
 }
 if (! var_1_43) {
  var_1_50 = (((var_1_31 ^ var_1_47) >= var_1_41) || var_1_51);
 }
 if (var_1_50) {
  if (var_1_33 != ((-50 % var_1_41) * var_1_31)) {
   if (var_1_44) {
    var_1_52 = ((((var_1_24 + var_1_45) < 0 ) ? -(var_1_24 + var_1_45) : (var_1_24 + var_1_45)));
   }
  } else {
   if ((((((var_1_48) < (var_1_24)) ? (var_1_48) : (var_1_24))) > (var_1_34 + var_1_33)) || (var_1_36 != (var_1_37 / var_1_38))) {
    if ((~ var_1_47) < -50) {
     var_1_52 = (var_1_36 - 32);
    } else {
     var_1_52 = var_1_24;
    }
   } else {
    var_1_52 = var_1_36;
   }
  }
 }
 if ((var_1_45 | 10) >= var_1_31) {
  if (var_1_46 < var_1_38) {
   var_1_53 = ((var_1_33 <= var_1_54) || ((! var_1_44) && var_1_51));
  } else {
   if ((5u * var_1_32) < (var_1_47 / var_1_38)) {
    var_1_53 = (var_1_39 || (var_1_51 && (! var_1_44)));
   }
  }
 }
 if (var_1_38 >= (var_1_52 % var_1_32)) {
  var_1_55 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 }
 if (128.2f >= ((((var_1_25) > (4.75f)) ? (var_1_25) : (4.75f)))) {
  var_1_56 = ((((var_1_38) < (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (var_1_38) : (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))));
 } else {
  if ((var_1_31 ^ (var_1_34 / var_1_32)) >= (((((var_1_48 + var_1_35)) > (var_1_55)) ? ((var_1_48 + var_1_35)) : (var_1_55)))) {
   var_1_56 = (var_1_57 - var_1_41);
  } else {
   var_1_56 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 }
 if ((((((var_1_31 >> var_1_36)) > (((((var_1_35) > (var_1_47)) ? (var_1_35) : (var_1_47))))) ? ((var_1_31 >> var_1_36)) : (((((var_1_35) > (var_1_47)) ? (var_1_35) : (var_1_47)))))) <= var_1_33) {
  var_1_58 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
 } else {
  if ((((((61460) < 0 ) ? -(61460) : (61460))) - var_1_46) >= var_1_30) {
   if (var_1_54 < var_1_31) {
    if (var_1_30 > var_1_41) {
     var_1_58 = (((var_1_60 + var_1_61) - ((((var_1_62) > (var_1_63)) ? (var_1_62) : (var_1_63)))) - var_1_64);
    }
   }
  } else {
   var_1_58 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
  }
 }
 if (var_1_27 >= ((((var_1_28) > (((((var_1_49) < (var_1_58)) ? (var_1_49) : (var_1_58))))) ? (var_1_28) : (((((var_1_49) < (var_1_58)) ? (var_1_49) : (var_1_58))))))) {
  var_1_65 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
 }
 if (var_1_57 >= var_1_31) {
  if ((var_1_25 / var_1_61) <= (- var_1_29)) {
   if (var_1_49 > var_1_61) {
    var_1_66 = ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)));
   } else {
    var_1_66 = (999999.25 + var_1_63);
   }
  }
 }
 if (var_1_33 >= var_1_68) {
  if (var_1_30 < ((var_1_41 - var_1_38) % var_1_32)) {
   var_1_67 = ((((var_1_36) < (var_1_46)) ? (var_1_36) : (var_1_46)));
  } else {
   if (var_1_42) {
    var_1_67 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))));
   }
  }
 }
 if (var_1_57 >= var_1_46) {
  var_1_69 = ((((((((var_1_41) < (-5)) ? (var_1_41) : (-5)))) < (var_1_55)) ? (((((var_1_41) < (-5)) ? (var_1_41) : (-5)))) : (var_1_55)));
 } else {
  if (var_1_33 >= var_1_54) {
   var_1_69 = var_1_35;
  } else {
   if (var_1_49 <= ((((var_1_65 + var_1_61) < 0 ) ? -(var_1_65 + var_1_61) : (var_1_65 + var_1_61)))) {
    var_1_69 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
   }
  }
 }
 if (var_1_46 >= var_1_45) {
  var_1_70 = (! var_1_43);
 }
 if (var_1_44 || var_1_40) {
  var_1_71 = var_1_35;
 } else {
  var_1_71 = -8;
 }
 var_1_72 = var_1_51;
 if (var_1_53) {
  var_1_73 = var_1_59;
 } else {
  var_1_73 = var_1_64;
 }
 if (var_1_70) {
  var_1_74 = var_1_60;
 }
 if (var_1_53) {
  if (var_1_42) {
   var_1_75 = ((((((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))) < (var_1_38)) ? (((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))) : (var_1_38)));
  } else {
   var_1_75 = (((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))));
  }
 } else {
  if (var_1_43 && (var_1_36 < ((((var_1_76) < (var_1_45)) ? (var_1_76) : (var_1_45))))) {
   if (var_1_50 || (var_1_72 || var_1_70)) {
    var_1_75 = ((((((((var_1_36) > (0)) ? (var_1_36) : (0)))) < ((((((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71))) < 0 ) ? -((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71))) : ((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71))))))) ? (((((var_1_36) > (0)) ? (var_1_36) : (0)))) : ((((((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71))) < 0 ) ? -((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71))) : ((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71))))))));
   } else {
    var_1_75 = ((((-1) < 0 ) ? -(-1) : (-1)));
   }
  } else {
   var_1_75 = (((((var_1_24 + var_1_52) < 0 ) ? -(var_1_24 + var_1_52) : (var_1_24 + var_1_52))) + var_1_35);
  }
 }
 if (var_1_76 >= (~ var_1_31)) {
  var_1_77 = ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) < (var_1_34)) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : (var_1_34)));
 } else {
  var_1_77 = (((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))));
 }
 var_1_78 = var_1_77;
 if (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) > var_1_47) {
  var_1_79 = var_1_46;
 }
 if (((var_1_79 * 32) ^ ((((var_1_68) < (var_1_71)) ? (var_1_68) : (var_1_71)))) < var_1_76) {
  if ((~ ((((-25) > (var_1_48)) ? (-25) : (var_1_48)))) >= (var_1_41 >> var_1_46)) {
   var_1_80 = ((((((((64) > (((((var_1_36) < (var_1_81)) ? (var_1_36) : (var_1_81))))) ? (64) : (((((var_1_36) < (var_1_81)) ? (var_1_36) : (var_1_81))))))) < ((32 + ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))))) ? (((((64) > (((((var_1_36) < (var_1_81)) ? (var_1_36) : (var_1_81))))) ? (64) : (((((var_1_36) < (var_1_81)) ? (var_1_36) : (var_1_81))))))) : ((32 + ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))))));
  } else {
   var_1_80 = ((((var_1_81) > (((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82))))) ? (var_1_81) : (((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82))))));
  }
 } else {
  var_1_80 = (var_1_83 - ((((var_1_82) > (var_1_36)) ? (var_1_82) : (var_1_36))));
 }
 if (var_1_42) {
  var_1_84 = var_1_36;
 }
 if ((var_1_36 % ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) < var_1_76) {
  if (var_1_40) {
   var_1_85 = ((((0) > ((var_1_81 + var_1_36))) ? (0) : ((var_1_81 + var_1_36))));
  }
 } else {
  if (-32 <= (~ var_1_69)) {
   if (var_1_26 >= ((((var_1_73) < (256.75f)) ? (var_1_73) : (256.75f)))) {
    var_1_85 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
   }
  }
 }
 if (var_1_59 > var_1_25) {
  if ((var_1_31 >= (5 - var_1_80)) || var_1_53) {
   if ((- var_1_48) > var_1_84) {
    var_1_86 = ((var_1_51 && var_1_70) || var_1_87);
   }
  } else {
   var_1_86 = (var_1_87 && var_1_51);
  }
 }
 if (var_1_52 > var_1_35) {
  if (((var_1_27 / var_1_60) < (var_1_49 * 24.3f)) && ((var_1_46 - var_1_83) >= ((((var_1_30) > (16)) ? (var_1_30) : (16))))) {
   if ((var_1_68 | var_1_89) < var_1_38) {
    var_1_88 = ((((var_1_80) > (var_1_46)) ? (var_1_80) : (var_1_46)));
   }
  } else {
   var_1_88 = ((((var_1_46) < ((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_83))) ? (var_1_46) : ((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_83))));
  }
 }
 if ((var_1_27 <= var_1_63) || var_1_43) {
  var_1_90 = 64u;
 } else {
  var_1_90 = (var_1_57 - ((((1u) < (var_1_83)) ? (1u) : (var_1_83))));
 }
 if (var_1_60 < var_1_59) {
  var_1_91 = ((var_1_92 - ((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)))) - ((((var_1_46) < (var_1_36)) ? (var_1_46) : (var_1_36))));
 } else {
  var_1_91 = (((((((var_1_83) < (var_1_46)) ? (var_1_83) : (var_1_46))) < 0 ) ? -((((var_1_83) < (var_1_46)) ? (var_1_83) : (var_1_46))) : ((((var_1_83) < (var_1_46)) ? (var_1_83) : (var_1_46)))));
 }
 if ((var_1_78 + var_1_80) < var_1_35) {
  if (var_1_50) {
   var_1_93 = (! 1);
  }
 } else {
  var_1_93 = (var_1_53 || (var_1_44 || var_1_87));
 }
 if (var_1_59 < var_1_74) {
  if (var_1_95 >= var_1_92) {
   if (((((var_1_96) < 0 ) ? -(var_1_96) : (var_1_96))) >= (var_1_84 / (var_1_57 - var_1_41))) {
    var_1_94 = var_1_89;
   }
  } else {
   if ((var_1_91 | (var_1_84 | 1)) < (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) >> 10)) {
    var_1_94 = var_1_45;
   }
  }
 } else {
  if (var_1_36 >= var_1_75) {
   var_1_94 = (((((((((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) > (var_1_92)) ? (((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) : (var_1_92))) < 0 ) ? -((((((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) > (var_1_92)) ? (((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) : (var_1_92))) : ((((((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) > (var_1_92)) ? (((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) : (var_1_92)))));
  }
 }
 if (! var_1_72) {
  var_1_97 = var_1_64;
 }
 if (var_1_83 < (var_1_54 / var_1_46)) {
  if (var_1_26 < var_1_60) {
   var_1_98 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
  }
 } else {
  var_1_98 = (((((var_1_80) < (var_1_83)) ? (var_1_80) : (var_1_83))) - var_1_46);
 }
 if (var_1_30 >= var_1_91) {
  if (var_1_51) {
   var_1_99 = ((! var_1_87) || (var_1_43 || (var_1_44 || var_1_100)));
  }
 }
 if (var_1_70 || (var_1_66 >= (var_1_59 + var_1_73))) {
  if ((- var_1_62) < var_1_73) {
   if (-2 >= (var_1_71 / var_1_46)) {
    var_1_101 = ((((-64) > (var_1_35)) ? (-64) : (var_1_35)));
   } else {
    var_1_101 = var_1_71;
   }
  }
 } else {
  var_1_101 = ((((var_1_71) > ((var_1_83 + var_1_102))) ? (var_1_71) : ((var_1_83 + var_1_102))));
 }
 if (var_1_42) {
  var_1_103 = 200.4f;
 }
 if (var_1_93 && var_1_53) {
  var_1_104 = (var_1_100 || ((var_1_32 >= var_1_78) && var_1_43));
 }
 if (var_1_51) {
  if (var_1_93 || (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) <= var_1_58)) {
   if ((- var_1_81) <= var_1_68) {
    var_1_105 = ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)));
   }
  }
 }
 if (var_1_44) {
  var_1_106 = (var_1_61 + (var_1_60 - ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))));
 } else {
  if (var_1_50) {
   if (var_1_61 >= var_1_97) {
    var_1_106 = (((((var_1_62) < (((((var_1_64) > (499.75)) ? (var_1_64) : (499.75))))) ? (var_1_62) : (((((var_1_64) > (499.75)) ? (var_1_64) : (499.75)))))) - var_1_63);
   } else {
    var_1_106 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
   }
  } else {
   if ((var_1_36 | var_1_34) < var_1_77) {
    var_1_106 = (((((var_1_63 - var_1_61)) > ((var_1_60 - var_1_64))) ? ((var_1_63 - var_1_61)) : ((var_1_60 - var_1_64))));
   }
  }
 }
 if (var_1_104) {
  var_1_107 = var_1_36;
 }
 var_1_108 = var_1_63;
 if (var_1_44) {
  var_1_109 = var_1_43;
 }
 var_1_110 = var_1_61;
 if (var_1_44) {
  var_1_111 = var_1_80;
 }
 if (var_1_43) {
  var_1_112 = var_1_83;
 }
 if (var_1_43) {
  var_1_113 = var_1_44;
 } else {
  var_1_113 = var_1_51;
 }
 var_1_114 = var_1_92;
 var_1_115 = 9.999999999999995E14f;
 if (var_1_104) {
  var_1_116 = var_1_63;
 } else {
  var_1_116 = var_1_62;
 }
 if (var_1_103 >= (- var_1_64)) {
  var_1_117 = (var_1_118 || var_1_87);
 } else {
  var_1_117 = (! (var_1_43 || (var_1_44 && var_1_100)));
 }
 signed long int stepLocal_0 = var_1_4 - var_1_5;
 if (var_1_2) {
  if (stepLocal_0 > ((last_1_var_1_14 + last_1_var_1_20) * last_1_var_1_21)) {
   var_1_1 = (var_1_9 - var_1_5);
  }
 } else {
  if (var_1_3) {
   var_1_1 = 32;
  } else {
   var_1_1 = var_1_5;
  }
 }
 unsigned short int stepLocal_2 = var_1_1;
 if (! (var_1_5 < var_1_1)) {
  if (last_1_var_1_14 >= stepLocal_2) {
   var_1_14 = (((((128) < (((((2) < (var_1_4)) ? (2) : (var_1_4))))) ? (128) : (((((2) < (var_1_4)) ? (2) : (var_1_4)))))) + var_1_5);
  } else {
   var_1_14 = ((var_1_5 - var_1_15) + var_1_4);
  }
 } else {
  var_1_14 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_15 - (var_1_16 - var_1_17)))));
 }
 var_1_10 = var_1_11;
 signed char stepLocal_1 = var_1_4;
 if (last_1_var_1_12 >= ((var_1_11 / var_1_13) / 31.9f)) {
  if (var_1_14 > stepLocal_1) {
   var_1_12 = var_1_11;
  } else {
   var_1_12 = var_1_11;
  }
 }
 var_1_18 = ((((((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) > (5.5f)) ? (((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) : (5.5f)));
 var_1_20 = var_1_15;
 var_1_21 = var_1_5;
 var_1_22 = var_1_23;
 if (var_1_3) {
  var_1_19 = ((((var_1_17) > ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))) ? (var_1_17) : ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))));
 } else {
  var_1_19 = var_1_5;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 32);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -31);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 65535);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65535);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 255);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= -2147483648);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= -2147483648);
 assume_abort_if_not(var_1_54 <= 2147483647);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= -922337.2036854765600e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 2305843.009213691390e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 2305843.009213691390e+12F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_68 >= -2147483648);
 assume_abort_if_not(var_1_68 <= 2147483647);
 var_1_76 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_76 >= -128);
 assume_abort_if_not(var_1_76 <= 127);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 254);
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 0);
 assume_abort_if_not(var_1_82 <= 127);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 127);
 assume_abort_if_not(var_1_83 <= 254);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 1);
 assume_abort_if_not(var_1_87 <= 1);
 var_1_89 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_89 >= -128);
 assume_abort_if_not(var_1_89 <= 127);
 var_1_92 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_92 >= 49150);
 assume_abort_if_not(var_1_92 <= 65534);
 var_1_95 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_95 >= -2147483648);
 assume_abort_if_not(var_1_95 <= 2147483647);
 var_1_96 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_96 >= 0);
 assume_abort_if_not(var_1_96 <= 4294967295);
 var_1_100 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_100 >= 0);
 assume_abort_if_not(var_1_100 <= 0);
 var_1_102 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_102 >= -16383);
 assume_abort_if_not(var_1_102 <= 16383);
 var_1_118 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_118 >= 0);
 assume_abort_if_not(var_1_118 <= 1);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
}
int property() {
 return ((((((((var_1_2 ? (((var_1_4 - var_1_5) > ((last_1_var_1_14 + last_1_var_1_20) * last_1_var_1_21)) ? (var_1_1 == ((unsigned short int) (var_1_9 - var_1_5))) : 1) : (var_1_3 ? (var_1_1 == ((unsigned short int) 32)) : (var_1_1 == ((unsigned short int) var_1_5)))) && (var_1_10 == ((float) var_1_11))) && ((last_1_var_1_12 >= ((var_1_11 / var_1_13) / 31.9f)) ? ((var_1_14 > var_1_4) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) var_1_11))) : 1)) && ((! (var_1_5 < var_1_1)) ? ((last_1_var_1_14 >= var_1_1) ? (var_1_14 == ((signed short int) (((((128) < (((((2) < (var_1_4)) ? (2) : (var_1_4))))) ? (128) : (((((2) < (var_1_4)) ? (2) : (var_1_4)))))) + var_1_5))) : (var_1_14 == ((signed short int) ((var_1_5 - var_1_15) + var_1_4)))) : (var_1_14 == ((signed short int) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_15 - (var_1_16 - var_1_17))))))))) && (var_1_18 == ((float) ((((((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) > (5.5f)) ? (((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) : (5.5f)))))) && (var_1_3 ? (var_1_19 == ((signed long int) ((((var_1_17) > ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))) ? (var_1_17) : ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21))))))))) : (var_1_19 == ((signed long int) var_1_5)))) && (var_1_20 == ((unsigned short int) var_1_15))) && (var_1_21 == ((unsigned short int) var_1_5))) && (var_1_22 == ((signed char) var_1_23))
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
