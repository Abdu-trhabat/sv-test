// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed char var_1_6 = 4;
signed char var_1_7 = 1;
signed char var_1_8 = 5;
signed char var_1_9 = 1;
signed char var_1_10 = 16;
signed char var_1_11 = 0;
unsigned char var_1_12 = 8;
unsigned char var_1_14 = 0;
signed short int var_1_16 = 500;
signed short int var_1_17 = 256;
signed short int var_1_18 = 4;
signed short int var_1_19 = 200;
signed char var_1_20 = -2;
unsigned char var_1_21 = 5;
unsigned char var_1_22 = 0;
double var_1_23 = 4.4;
double var_1_25 = 256.5;
double var_1_27 = 64.25;
double var_1_28 = 255.4;
unsigned char var_1_29 = 0;
signed short int var_1_30 = -5;
signed short int var_1_31 = 20758;
double var_1_32 = 64.5;
unsigned short int var_1_33 = 54992;
double var_1_34 = 4.45;
double var_1_35 = 15.625;
double var_1_36 = 128.75;
signed char var_1_37 = -64;
signed short int var_1_38 = 8;
unsigned short int var_1_39 = 2;
unsigned short int var_1_40 = 0;
unsigned short int var_1_42 = 35184;
unsigned char var_1_43 = 2;
signed short int var_1_45 = 500;
signed char var_1_46 = 64;
unsigned char var_1_47 = 1;
float var_1_48 = 10.25;
float var_1_49 = 8.5;
float var_1_50 = 2.4;
double var_1_51 = 8.875;
double var_1_52 = 0.25;
double var_1_53 = 31.125;
double var_1_54 = 1.6;
unsigned short int var_1_55 = 4;
double var_1_56 = 4.25;
double var_1_57 = 0.0;
double var_1_58 = 16.5;
unsigned long int var_1_60 = 1;
unsigned long int var_1_61 = 3674381562;
unsigned short int var_1_62 = 8;
unsigned short int var_1_63 = 25355;
signed char var_1_64 = 32;
signed char var_1_65 = 10;
float var_1_66 = 10.6;
unsigned char var_1_67 = 1;
float var_1_68 = 1.6;
float var_1_70 = 8.6;
float var_1_71 = 0.0;
float var_1_72 = 0.5;
float var_1_73 = 15.2;
unsigned short int var_1_74 = 0;
unsigned short int var_1_75 = 200;
unsigned short int var_1_76 = 19217;
unsigned long int var_1_77 = 2;
signed short int var_1_78 = 0;
unsigned long int var_1_79 = 1680516638;
unsigned char var_1_81 = 1;
float var_1_82 = 1.7;
unsigned short int var_1_83 = 32;
signed char var_1_84 = -1;
unsigned long int var_1_86 = 25;
unsigned long int var_1_87 = 8;
unsigned short int var_1_88 = 2;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 128;
unsigned char var_1_92 = 64;
float var_1_93 = 64.6;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 128;
signed short int var_1_96 = -256;
signed char var_1_97 = -25;
unsigned short int var_1_98 = 50;
float var_1_99 = 100.723;
unsigned char var_1_100 = 1;
float var_1_101 = 9.375;
signed short int var_1_102 = -1;
signed short int var_1_103 = 10;
float var_1_104 = 63.2;
unsigned char var_1_105 = 1;
signed char var_1_106 = -16;
float var_1_107 = 3.8;
unsigned char var_1_108 = 0;
float var_1_109 = 5.25;
signed char var_1_110 = -2;
unsigned long int var_1_111 = 100;
unsigned long int var_1_112 = 64;
float var_1_113 = 15.25;
unsigned char var_1_114 = 0;
signed long int var_1_115 = -32;
signed char var_1_117 = -5;
signed char var_1_118 = 32;
double var_1_119 = 64.5;
unsigned char last_1_var_1_12 = 8;
unsigned short int last_1_var_1_39 = 2;
unsigned short int last_1_var_1_40 = 0;
unsigned short int last_1_var_1_62 = 8;
signed char last_1_var_1_65 = 10;
unsigned short int last_1_var_1_74 = 0;
unsigned long int last_1_var_1_86 = 25;
unsigned char last_1_var_1_90 = 0;
float last_1_var_1_93 = 64.6;
unsigned char last_1_var_1_94 = 0;
unsigned short int last_1_var_1_98 = 50;
unsigned long int last_1_var_1_112 = 64;
signed long int last_1_var_1_115 = -32;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_4 = last_1_var_1_112 + last_1_var_1_86;
 if (var_1_7 > stepLocal_4) {
  var_1_16 = var_1_10;
 }
 if ((last_1_var_1_12 <= var_1_63) && var_1_4) {
  var_1_77 = ((((last_1_var_1_98) < (var_1_21)) ? (last_1_var_1_98) : (var_1_21)));
 } else {
  if ((var_1_10 << ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))) >= (var_1_76 * var_1_7)) {
   var_1_77 = (var_1_75 + (var_1_79 - last_1_var_1_98));
  } else {
   if (last_1_var_1_93 < var_1_34) {
    var_1_77 = (var_1_55 + last_1_var_1_112);
   } else {
    var_1_77 = var_1_10;
   }
  }
 }
 if (var_1_31 >= last_1_var_1_39) {
  if (last_1_var_1_115 >= last_1_var_1_86) {
   if ((var_1_19 / var_1_21) > var_1_31) {
    var_1_45 = (((((((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) < (last_1_var_1_94)) ? (((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) : (last_1_var_1_94))) + last_1_var_1_65);
   } else {
    if (((last_1_var_1_115 + var_1_14) * (var_1_11 << last_1_var_1_65)) <= var_1_10) {
     var_1_45 = (var_1_31 - var_1_11);
    } else {
     var_1_45 = ((var_1_11 + last_1_var_1_94) + var_1_18);
    }
   }
  } else {
   var_1_45 = ((((var_1_31) < (((((var_1_7) < (last_1_var_1_40)) ? (var_1_7) : (last_1_var_1_40))))) ? (var_1_31) : (((((var_1_7) < (last_1_var_1_40)) ? (var_1_7) : (last_1_var_1_40))))));
  }
 } else {
  var_1_45 = ((((var_1_31) < (var_1_19)) ? (var_1_31) : (var_1_19)));
 }
 if (last_1_var_1_74 < (var_1_33 - var_1_21)) {
  var_1_32 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 } else {
  var_1_32 = (var_1_35 + var_1_36);
 }
 signed char stepLocal_18 = var_1_10;
 if (var_1_32 >= 1.5) {
  var_1_68 = ((((var_1_70) < (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))) ? (var_1_70) : (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))));
 } else {
  if (stepLocal_18 >= (var_1_8 + var_1_11)) {
   var_1_68 = ((var_1_71 - (var_1_72 + var_1_73)) - var_1_58);
  }
 }
 signed long int stepLocal_1 = last_1_var_1_62;
 signed long int stepLocal_0 = last_1_var_1_62;
 if (stepLocal_1 == last_1_var_1_39) {
  var_1_1 = (! var_1_4);
 } else {
  if ((- last_1_var_1_39) < stepLocal_0) {
   var_1_1 = (var_1_4 || ((last_1_var_1_39 > last_1_var_1_62) || var_1_5));
  }
 }
 signed char stepLocal_8 = var_1_11;
 if ((var_1_33 / var_1_21) <= stepLocal_8) {
  var_1_39 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 }
 unsigned char stepLocal_9 = var_1_4;
 if ((last_1_var_1_40 <= (last_1_var_1_40 + var_1_9)) && stepLocal_9) {
  var_1_40 = (var_1_42 - var_1_21);
 }
 var_1_47 = var_1_29;
 signed long int stepLocal_24 = (var_1_91 + var_1_92) - var_1_55;
 if (stepLocal_24 <= var_1_31) {
  var_1_90 = (last_1_var_1_90 || var_1_4);
 }
 var_1_93 = (((((var_1_73 - var_1_50)) > (var_1_57)) ? ((var_1_73 - var_1_50)) : (var_1_57)));
 var_1_96 = var_1_10;
 var_1_100 = var_1_29;
 if (var_1_29) {
  var_1_101 = var_1_58;
 } else {
  var_1_101 = var_1_56;
 }
 var_1_102 = var_1_103;
 var_1_104 = var_1_50;
 var_1_105 = var_1_29;
 var_1_106 = var_1_8;
 if (var_1_90) {
  var_1_107 = var_1_50;
 } else {
  var_1_107 = var_1_70;
 }
 var_1_109 = 0.4f;
 var_1_110 = var_1_78;
 if (var_1_47) {
  var_1_111 = var_1_14;
 } else {
  var_1_111 = var_1_42;
 }
 if (var_1_29) {
  var_1_112 = 0u;
 } else {
  var_1_112 = var_1_87;
 }
 var_1_113 = var_1_52;
 var_1_114 = var_1_29;
 var_1_119 = var_1_50;
 if (! (var_1_16 > var_1_111)) {
  var_1_86 = var_1_87;
 } else {
  var_1_86 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 signed short int stepLocal_15 = var_1_16;
 if ((~ (var_1_77 - var_1_18)) < stepLocal_15) {
  var_1_60 = ((var_1_61 - ((((var_1_77) < (25u)) ? (var_1_77) : (25u)))) - (var_1_40 + var_1_16));
 }
 if (var_1_105) {
  var_1_115 = -4;
 } else {
  var_1_115 = var_1_77;
 }
 if ((var_1_119 * (var_1_119 + var_1_32)) < ((((var_1_32) < ((var_1_27 - var_1_28))) ? (var_1_32) : ((var_1_27 - var_1_28))))) {
  var_1_22 = var_1_29;
 } else {
  var_1_22 = (var_1_29 || (! var_1_5));
 }
 if (-32 > var_1_40) {
  var_1_6 = ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)));
 } else {
  var_1_6 = (var_1_9 - (var_1_10 + var_1_11));
 }
 unsigned short int stepLocal_3 = var_1_39;
 unsigned long int stepLocal_2 = - (var_1_39 + var_1_111);
 if (stepLocal_3 <= var_1_111) {
  var_1_12 = ((((var_1_11) < ((var_1_10 + var_1_14))) ? (var_1_11) : ((var_1_10 + var_1_14))));
 } else {
  if (var_1_14 < stepLocal_2) {
   if (var_1_47) {
    var_1_12 = var_1_10;
   } else {
    var_1_12 = var_1_11;
   }
  } else {
   var_1_12 = 2;
  }
 }
 unsigned long int stepLocal_6 = var_1_77 % var_1_21;
 unsigned char stepLocal_5 = var_1_14;
 if (var_1_47) {
  if ((var_1_11 / var_1_21) > stepLocal_5) {
   if (var_1_96 <= stepLocal_6) {
    var_1_20 = (16 + var_1_10);
   } else {
    var_1_20 = (((((var_1_10 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) < (5)) ? ((var_1_10 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : (5)));
   }
  }
 }
 signed short int stepLocal_7 = var_1_18;
 if (var_1_28 >= var_1_27) {
  if ((var_1_28 - var_1_27) <= var_1_119) {
   if (var_1_8 > stepLocal_7) {
    var_1_30 = (var_1_21 - (var_1_31 - (var_1_18 + var_1_10)));
   } else {
    var_1_30 = ((((var_1_31) > (var_1_11)) ? (var_1_31) : (var_1_11)));
   }
  }
 } else {
  var_1_30 = ((var_1_40 - var_1_14) + var_1_18);
 }
 if (var_1_119 >= var_1_35) {
  if (((((var_1_10) > (var_1_112)) ? (var_1_10) : (var_1_112))) > var_1_45) {
   var_1_43 = (var_1_14 + 1);
  }
 }
 if ((- var_1_119) <= (- var_1_36)) {
  var_1_48 = ((((((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) > (var_1_34)) ? (((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_34)));
 } else {
  var_1_48 = ((((var_1_35) < (((((var_1_36) < (var_1_34)) ? (var_1_36) : (var_1_34))))) ? (var_1_35) : (((((var_1_36) < (var_1_34)) ? (var_1_36) : (var_1_34))))));
 }
 if (((7.25f / 4.5f) + var_1_119) > var_1_119) {
  var_1_49 = (15.5f - var_1_50);
 } else {
  var_1_49 = var_1_50;
 }
 if (var_1_34 == var_1_53) {
  var_1_67 = (var_1_114 && var_1_29);
 } else {
  var_1_67 = (! var_1_5);
 }
 if (! var_1_105) {
  var_1_81 = (! var_1_29);
 }
 unsigned long int stepLocal_20 = var_1_111;
 unsigned short int stepLocal_19 = var_1_76;
 if (stepLocal_19 != (~ var_1_61)) {
  if (stepLocal_20 >= var_1_11) {
   var_1_83 = 16;
  } else {
   var_1_83 = (44973 - (var_1_55 + var_1_11));
  }
 } else {
  if (var_1_29) {
   var_1_83 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
  }
 }
 signed char stepLocal_26 = var_1_110;
 if (! var_1_114) {
  if (stepLocal_26 < var_1_111) {
   var_1_99 = var_1_50;
  }
 } else {
  var_1_99 = var_1_56;
 }
 if (var_1_67) {
  var_1_117 = (var_1_78 - var_1_11);
 } else {
  var_1_117 = (var_1_9 - ((var_1_118 - var_1_55) + ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))));
 }
 unsigned char stepLocal_23 = var_1_4;
 if (var_1_105) {
  if (var_1_72 < (255.5f * (var_1_53 * var_1_27))) {
   if (! var_1_29) {
    var_1_88 = (var_1_21 + ((((var_1_75) < (var_1_31)) ? (var_1_75) : (var_1_31))));
   } else {
    if (stepLocal_23 || var_1_22) {
     var_1_88 = var_1_19;
    }
   }
  }
 }
 if (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) >= ((var_1_79 - var_1_18) - var_1_14)) {
  if (var_1_63 >= var_1_88) {
   var_1_89 = (! (! var_1_4));
  }
 }
 if (var_1_89) {
  var_1_108 = var_1_29;
 } else {
  var_1_108 = var_1_5;
 }
 if (var_1_4) {
  if (var_1_1) {
   var_1_17 = ((var_1_14 - var_1_30) + ((var_1_10 + var_1_11) - (var_1_18 + var_1_19)));
  } else {
   var_1_17 = ((var_1_14 - var_1_10) + ((var_1_30 - var_1_19) + var_1_9));
  }
 }
 signed long int stepLocal_10 = var_1_10 << var_1_86;
 if (! (var_1_23 <= var_1_25)) {
  if (var_1_83 > stepLocal_10) {
   var_1_46 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
  } else {
   var_1_46 = ((((var_1_9) > ((((((25 - 8)) > (16)) ? ((25 - 8)) : (16))))) ? (var_1_9) : ((((((25 - 8)) > (16)) ? ((25 - 8)) : (16))))));
  }
 }
 if (var_1_12 >= var_1_117) {
  var_1_65 = var_1_11;
 } else {
  if (var_1_4) {
   var_1_65 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
  }
 }
 if ((var_1_67 || var_1_81) || var_1_89) {
  if (var_1_58 < var_1_71) {
   var_1_97 = ((((var_1_11) < (((((var_1_10) < (var_1_7)) ? (var_1_10) : (var_1_7))))) ? (var_1_11) : (((((var_1_10) < (var_1_7)) ? (var_1_10) : (var_1_7))))));
  } else {
   var_1_97 = (10 - var_1_10);
  }
 } else {
  var_1_97 = ((((var_1_9) < (((var_1_78 + -4) + var_1_11))) ? (var_1_9) : (((var_1_78 + -4) + var_1_11))));
 }
 signed long int stepLocal_25 = var_1_88 * var_1_31;
 if (stepLocal_25 >= var_1_60) {
  var_1_98 = (var_1_42 - var_1_14);
 } else {
  var_1_98 = ((((var_1_92) < (1)) ? (var_1_92) : (1)));
 }
 unsigned long int stepLocal_14 = var_1_86;
 unsigned char stepLocal_13 = 5 > (var_1_10 - var_1_83);
 signed long int stepLocal_12 = var_1_45 >> var_1_55;
 unsigned long int stepLocal_11 = var_1_111 / var_1_55;
 if (var_1_5) {
  var_1_51 = (var_1_35 + (var_1_52 + var_1_53));
 } else {
  if (var_1_53 < (var_1_119 / var_1_54)) {
   if (var_1_98 < stepLocal_14) {
    var_1_51 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
   } else {
    if (stepLocal_12 > var_1_14) {
     var_1_51 = (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - var_1_56);
    } else {
     if (var_1_114 && stepLocal_13) {
      var_1_51 = ((((var_1_36) < (var_1_52)) ? (var_1_36) : (var_1_52)));
     } else {
      var_1_51 = (var_1_56 - (((((var_1_57) < (var_1_58)) ? (var_1_57) : (var_1_58))) + 1.8));
     }
    }
   }
  } else {
   if (-128 <= stepLocal_11) {
    var_1_51 = (var_1_58 - var_1_56);
   }
  }
 }
 if (var_1_73 >= (var_1_51 / var_1_54)) {
  var_1_94 = (var_1_95 - var_1_10);
 } else {
  var_1_94 = ((((var_1_92) > (4)) ? (var_1_92) : (4)));
 }
 unsigned short int stepLocal_17 = var_1_40;
 signed short int stepLocal_16 = var_1_16;
 if (var_1_17 <= stepLocal_16) {
  var_1_62 = var_1_14;
 } else {
  if (var_1_90) {
   if (stepLocal_17 < var_1_45) {
    var_1_62 = ((((((var_1_31 + var_1_63)) > (var_1_42)) ? ((var_1_31 + var_1_63)) : (var_1_42))) - var_1_10);
   }
  }
 }
 if ((var_1_58 < (var_1_51 / var_1_54)) || (var_1_40 > (var_1_21 | var_1_83))) {
  if (50 >= var_1_8) {
   if (var_1_1) {
    if (var_1_108) {
     var_1_66 = var_1_56;
    } else {
     var_1_66 = ((((((var_1_53 + var_1_52)) > (var_1_57)) ? ((var_1_53 + var_1_52)) : (var_1_57))) + var_1_36);
    }
   } else {
    var_1_66 = ((((var_1_50) > (var_1_35)) ? (var_1_50) : (var_1_35)));
   }
  }
 }
 if (-0.8 > var_1_68) {
  if (var_1_66 != var_1_119) {
   if (var_1_62 <= (var_1_42 / var_1_55)) {
    var_1_74 = ((((var_1_42 - 5) < 0 ) ? -(var_1_42 - 5) : (var_1_42 - 5)));
   } else {
    var_1_74 = (((((((((var_1_75) < (var_1_21)) ? (var_1_75) : (var_1_21)))) > (var_1_115)) ? (((((var_1_75) < (var_1_21)) ? (var_1_75) : (var_1_21)))) : (var_1_115))) + var_1_102);
   }
  } else {
   if (var_1_105 && (var_1_75 < 1000)) {
    var_1_74 = ((((((var_1_76 - 256) + var_1_55)) > (var_1_102)) ? (((var_1_76 - 256) + var_1_55)) : (var_1_102)));
   } else {
    if (var_1_72 == var_1_119) {
     var_1_74 = ((((var_1_42 - var_1_14) < 0 ) ? -(var_1_42 - var_1_14) : (var_1_42 - var_1_14)));
    } else {
     if (var_1_105) {
      var_1_74 = ((((var_1_75) < (var_1_11)) ? (var_1_75) : (var_1_11)));
     } else {
      var_1_74 = var_1_11;
     }
    }
   }
  }
 } else {
  var_1_74 = var_1_115;
 }
 if (! (! (var_1_111 <= var_1_74))) {
  var_1_37 = (var_1_11 - var_1_10);
 } else {
  var_1_37 = var_1_9;
 }
 if ((255.8 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (16.75 + (var_1_51 * var_1_32))) {
  if (((var_1_9 / 16) * var_1_98) >= ((((var_1_11) > (var_1_31)) ? (var_1_11) : (var_1_31)))) {
   var_1_38 = var_1_10;
  }
 } else {
  var_1_38 = var_1_14;
 }
 if (var_1_50 > ((((256.25f) < (7.75f)) ? (256.25f) : (7.75f)))) {
  if (var_1_57 <= var_1_51) {
   var_1_64 = (((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_11)) < (-50)) ? ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_11)) : (-50)));
  } else {
   var_1_64 = (var_1_9 - var_1_55);
  }
 } else {
  var_1_64 = (var_1_55 + (var_1_10 - var_1_11));
 }
 if (var_1_32 >= (((((var_1_51) > (var_1_32)) ? (var_1_51) : (var_1_32))) / var_1_71)) {
  if (! var_1_108) {
   var_1_82 = ((((var_1_71) > ((var_1_50 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))))) ? (var_1_71) : ((var_1_50 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))))));
  } else {
   var_1_82 = ((var_1_58 + (0.75f + var_1_73)) - var_1_50);
  }
 } else {
  var_1_82 = (var_1_50 - var_1_58);
 }
 unsigned long int stepLocal_22 = (((var_1_79) < (var_1_112)) ? (var_1_79) : (var_1_112));
 unsigned long int stepLocal_21 = (var_1_61 - var_1_77) >> var_1_55;
 if (stepLocal_22 < var_1_77) {
  if (var_1_90) {
   var_1_84 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
  } else {
   if ((var_1_98 | var_1_86) <= stepLocal_21) {
    var_1_84 = var_1_55;
   } else {
    var_1_84 = var_1_8;
   }
  }
 } else {
  var_1_84 = ((((var_1_9) > ((var_1_78 + var_1_10))) ? (var_1_9) : ((var_1_78 + var_1_10))));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 8192);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 8191);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 255);
 assume_abort_if_not(var_1_21 != 0);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 16383);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 32767);
 assume_abort_if_not(var_1_33 <= 65535);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 32767);
 assume_abort_if_not(var_1_42 <= 65534);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -230584.3009213691400e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -230584.3009213691400e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
 assume_abort_if_not(var_1_54 != 0.0F);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 7);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 3221225470);
 assume_abort_if_not(var_1_61 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 16384);
 assume_abort_if_not(var_1_63 <= 32767);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= -922337.2036854766000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854766000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 4611686.018427383000e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854766000e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 32767);
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 16383);
 assume_abort_if_not(var_1_76 <= 32767);
 var_1_78 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_78 >= -1);
 assume_abort_if_not(var_1_78 <= 1);
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 1073741823);
 assume_abort_if_not(var_1_79 <= 2147483647);
 var_1_87 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_87 >= 0);
 assume_abort_if_not(var_1_87 <= 4294967294);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 63);
 assume_abort_if_not(var_1_91 <= 128);
 var_1_92 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_92 >= 64);
 assume_abort_if_not(var_1_92 <= 127);
 var_1_95 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_95 >= 127);
 assume_abort_if_not(var_1_95 <= 254);
 var_1_103 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_103 >= -32767);
 assume_abort_if_not(var_1_103 <= 32766);
 var_1_118 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_118 >= 31);
 assume_abort_if_not(var_1_118 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_112 = var_1_112;
 last_1_var_1_115 = var_1_115;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_62 == last_1_var_1_39) ? (var_1_1 == ((unsigned char) (! var_1_4))) : (((- last_1_var_1_39) < last_1_var_1_62) ? (var_1_1 == ((unsigned char) (var_1_4 || ((last_1_var_1_39 > last_1_var_1_62) || var_1_5)))) : 1)) && ((-32 > var_1_40) ? (var_1_6 == ((signed char) ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))))) : (var_1_6 == ((signed char) (var_1_9 - (var_1_10 + var_1_11)))))) && ((var_1_39 <= var_1_111) ? (var_1_12 == ((unsigned char) ((((var_1_11) < ((var_1_10 + var_1_14))) ? (var_1_11) : ((var_1_10 + var_1_14)))))) : ((var_1_14 < (- (var_1_39 + var_1_111))) ? (var_1_47 ? (var_1_12 == ((unsigned char) var_1_10)) : (var_1_12 == ((unsigned char) var_1_11))) : (var_1_12 == ((unsigned char) 2))))) && ((var_1_7 > (last_1_var_1_112 + last_1_var_1_86)) ? (var_1_16 == ((signed short int) var_1_10)) : 1)) && (var_1_4 ? (var_1_1 ? (var_1_17 == ((signed short int) ((var_1_14 - var_1_30) + ((var_1_10 + var_1_11) - (var_1_18 + var_1_19))))) : (var_1_17 == ((signed short int) ((var_1_14 - var_1_10) + ((var_1_30 - var_1_19) + var_1_9))))) : 1)) && (var_1_47 ? (((var_1_11 / var_1_21) > var_1_14) ? ((var_1_96 <= (var_1_77 % var_1_21)) ? (var_1_20 == ((signed char) (16 + var_1_10))) : (var_1_20 == ((signed char) (((((var_1_10 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) < (5)) ? ((var_1_10 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : (5)))))) : 1) : 1)) && (((var_1_119 * (var_1_119 + var_1_32)) < ((((var_1_32) < ((var_1_27 - var_1_28))) ? (var_1_32) : ((var_1_27 - var_1_28))))) ? (var_1_22 == ((unsigned char) var_1_29)) : (var_1_22 == ((unsigned char) (var_1_29 || (! var_1_5)))))) && ((var_1_28 >= var_1_27) ? (((var_1_28 - var_1_27) <= var_1_119) ? ((var_1_8 > var_1_18) ? (var_1_30 == ((signed short int) (var_1_21 - (var_1_31 - (var_1_18 + var_1_10))))) : (var_1_30 == ((signed short int) ((((var_1_31) > (var_1_11)) ? (var_1_31) : (var_1_11)))))) : 1) : (var_1_30 == ((signed short int) ((var_1_40 - var_1_14) + var_1_18))))) && ((last_1_var_1_74 < (var_1_33 - var_1_21)) ? (var_1_32 == ((double) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) : (var_1_32 == ((double) (var_1_35 + var_1_36))))) && ((! (! (var_1_111 <= var_1_74))) ? (var_1_37 == ((signed char) (var_1_11 - var_1_10))) : (var_1_37 == ((signed char) var_1_9)))) && (((255.8 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (16.75 + (var_1_51 * var_1_32))) ? ((((var_1_9 / 16) * var_1_98) >= ((((var_1_11) > (var_1_31)) ? (var_1_11) : (var_1_31)))) ? (var_1_38 == ((signed short int) var_1_10)) : 1) : (var_1_38 == ((signed short int) var_1_14)))) && (((var_1_33 / var_1_21) <= var_1_11) ? (var_1_39 == ((unsigned short int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : 1)) && (((last_1_var_1_40 <= (last_1_var_1_40 + var_1_9)) && var_1_4) ? (var_1_40 == ((unsigned short int) (var_1_42 - var_1_21))) : 1)) && ((var_1_119 >= var_1_35) ? ((((((var_1_10) > (var_1_112)) ? (var_1_10) : (var_1_112))) > var_1_45) ? (var_1_43 == ((unsigned char) (var_1_14 + 1))) : 1) : 1)) && ((var_1_31 >= last_1_var_1_39) ? ((last_1_var_1_115 >= last_1_var_1_86) ? (((var_1_19 / var_1_21) > var_1_31) ? (var_1_45 == ((signed short int) (((((((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) < (last_1_var_1_94)) ? (((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) : (last_1_var_1_94))) + last_1_var_1_65))) : ((((last_1_var_1_115 + var_1_14) * (var_1_11 << last_1_var_1_65)) <= var_1_10) ? (var_1_45 == ((signed short int) (var_1_31 - var_1_11))) : (var_1_45 == ((signed short int) ((var_1_11 + last_1_var_1_94) + var_1_18))))) : (var_1_45 == ((signed short int) ((((var_1_31) < (((((var_1_7) < (last_1_var_1_40)) ? (var_1_7) : (last_1_var_1_40))))) ? (var_1_31) : (((((var_1_7) < (last_1_var_1_40)) ? (var_1_7) : (last_1_var_1_40))))))))) : (var_1_45 == ((signed short int) ((((var_1_31) < (var_1_19)) ? (var_1_31) : (var_1_19))))))) && ((! (var_1_23 <= var_1_25)) ? ((var_1_83 > (var_1_10 << var_1_86)) ? (var_1_46 == ((signed char) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : (var_1_46 == ((signed char) ((((var_1_9) > ((((((25 - 8)) > (16)) ? ((25 - 8)) : (16))))) ? (var_1_9) : ((((((25 - 8)) > (16)) ? ((25 - 8)) : (16))))))))) : 1)) && (var_1_47 == ((unsigned char) var_1_29))) && (((- var_1_119) <= (- var_1_36)) ? (var_1_48 == ((float) ((((((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) > (var_1_34)) ? (((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_34))))) : (var_1_48 == ((float) ((((var_1_35) < (((((var_1_36) < (var_1_34)) ? (var_1_36) : (var_1_34))))) ? (var_1_35) : (((((var_1_36) < (var_1_34)) ? (var_1_36) : (var_1_34)))))))))) && ((((7.25f / 4.5f) + var_1_119) > var_1_119) ? (var_1_49 == ((float) (15.5f - var_1_50))) : (var_1_49 == ((float) var_1_50)))) && (var_1_5 ? (var_1_51 == ((double) (var_1_35 + (var_1_52 + var_1_53)))) : ((var_1_53 < (var_1_119 / var_1_54)) ? ((var_1_98 < var_1_86) ? (var_1_51 == ((double) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) : (((var_1_45 >> var_1_55) > var_1_14) ? (var_1_51 == ((double) (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - var_1_56))) : ((var_1_114 && (5 > (var_1_10 - var_1_83))) ? (var_1_51 == ((double) ((((var_1_36) < (var_1_52)) ? (var_1_36) : (var_1_52))))) : (var_1_51 == ((double) (var_1_56 - (((((var_1_57) < (var_1_58)) ? (var_1_57) : (var_1_58))) + 1.8))))))) : ((-128 <= (var_1_111 / var_1_55)) ? (var_1_51 == ((double) (var_1_58 - var_1_56))) : 1)))) && (((~ (var_1_77 - var_1_18)) < var_1_16) ? (var_1_60 == ((unsigned long int) ((var_1_61 - ((((var_1_77) < (25u)) ? (var_1_77) : (25u)))) - (var_1_40 + var_1_16)))) : 1)) && ((var_1_17 <= var_1_16) ? (var_1_62 == ((unsigned short int) var_1_14)) : (var_1_90 ? ((var_1_40 < var_1_45) ? (var_1_62 == ((unsigned short int) ((((((var_1_31 + var_1_63)) > (var_1_42)) ? ((var_1_31 + var_1_63)) : (var_1_42))) - var_1_10))) : 1) : 1))) && ((var_1_50 > ((((256.25f) < (7.75f)) ? (256.25f) : (7.75f)))) ? ((var_1_57 <= var_1_51) ? (var_1_64 == ((signed char) (((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_11)) < (-50)) ? ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_11)) : (-50))))) : (var_1_64 == ((signed char) (var_1_9 - var_1_55)))) : (var_1_64 == ((signed char) (var_1_55 + (var_1_10 - var_1_11)))))) && ((var_1_12 >= var_1_117) ? (var_1_65 == ((signed char) var_1_11)) : (var_1_4 ? (var_1_65 == ((signed char) ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) : 1))) && (((var_1_58 < (var_1_51 / var_1_54)) || (var_1_40 > (var_1_21 | var_1_83))) ? ((50 >= var_1_8) ? (var_1_1 ? (var_1_108 ? (var_1_66 == ((float) var_1_56)) : (var_1_66 == ((float) ((((((var_1_53 + var_1_52)) > (var_1_57)) ? ((var_1_53 + var_1_52)) : (var_1_57))) + var_1_36)))) : (var_1_66 == ((float) ((((var_1_50) > (var_1_35)) ? (var_1_50) : (var_1_35)))))) : 1) : 1)) && ((var_1_34 == var_1_53) ? (var_1_67 == ((unsigned char) (var_1_114 && var_1_29))) : (var_1_67 == ((unsigned char) (! var_1_5))))) && ((var_1_32 >= 1.5) ? (var_1_68 == ((float) ((((var_1_70) < (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))) ? (var_1_70) : (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))))))) : ((var_1_10 >= (var_1_8 + var_1_11)) ? (var_1_68 == ((float) ((var_1_71 - (var_1_72 + var_1_73)) - var_1_58))) : 1))) && ((-0.8 > var_1_68) ? ((var_1_66 != var_1_119) ? ((var_1_62 <= (var_1_42 / var_1_55)) ? (var_1_74 == ((unsigned short int) ((((var_1_42 - 5) < 0 ) ? -(var_1_42 - 5) : (var_1_42 - 5))))) : (var_1_74 == ((unsigned short int) (((((((((var_1_75) < (var_1_21)) ? (var_1_75) : (var_1_21)))) > (var_1_115)) ? (((((var_1_75) < (var_1_21)) ? (var_1_75) : (var_1_21)))) : (var_1_115))) + var_1_102)))) : ((var_1_105 && (var_1_75 < 1000)) ? (var_1_74 == ((unsigned short int) ((((((var_1_76 - 256) + var_1_55)) > (var_1_102)) ? (((var_1_76 - 256) + var_1_55)) : (var_1_102))))) : ((var_1_72 == var_1_119) ? (var_1_74 == ((unsigned short int) ((((var_1_42 - var_1_14) < 0 ) ? -(var_1_42 - var_1_14) : (var_1_42 - var_1_14))))) : (var_1_105 ? (var_1_74 == ((unsigned short int) ((((var_1_75) < (var_1_11)) ? (var_1_75) : (var_1_11))))) : (var_1_74 == ((unsigned short int) var_1_11)))))) : (var_1_74 == ((unsigned short int) var_1_115)))) && (((last_1_var_1_12 <= var_1_63) && var_1_4) ? (var_1_77 == ((unsigned long int) ((((last_1_var_1_98) < (var_1_21)) ? (last_1_var_1_98) : (var_1_21))))) : (((var_1_10 << ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))) >= (var_1_76 * var_1_7)) ? (var_1_77 == ((unsigned long int) (var_1_75 + (var_1_79 - last_1_var_1_98)))) : ((last_1_var_1_93 < var_1_34) ? (var_1_77 == ((unsigned long int) (var_1_55 + last_1_var_1_112))) : (var_1_77 == ((unsigned long int) var_1_10)))))) && ((! var_1_105) ? (var_1_81 == ((unsigned char) (! var_1_29))) : 1)) && ((var_1_32 >= (((((var_1_51) > (var_1_32)) ? (var_1_51) : (var_1_32))) / var_1_71)) ? ((! var_1_108) ? (var_1_82 == ((float) ((((var_1_71) > ((var_1_50 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))))) ? (var_1_71) : ((var_1_50 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))))))))) : (var_1_82 == ((float) ((var_1_58 + (0.75f + var_1_73)) - var_1_50)))) : (var_1_82 == ((float) (var_1_50 - var_1_58))))) && ((var_1_76 != (~ var_1_61)) ? ((var_1_111 >= var_1_11) ? (var_1_83 == ((unsigned short int) 16)) : (var_1_83 == ((unsigned short int) (44973 - (var_1_55 + var_1_11))))) : (var_1_29 ? (var_1_83 == ((unsigned short int) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : 1))) && ((((((var_1_79) < (var_1_112)) ? (var_1_79) : (var_1_112))) < var_1_77) ? (var_1_90 ? (var_1_84 == ((signed char) ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) : (((var_1_98 | var_1_86) <= ((var_1_61 - var_1_77) >> var_1_55)) ? (var_1_84 == ((signed char) var_1_55)) : (var_1_84 == ((signed char) var_1_8)))) : (var_1_84 == ((signed char) ((((var_1_9) > ((var_1_78 + var_1_10))) ? (var_1_9) : ((var_1_78 + var_1_10)))))))) && ((! (var_1_16 > var_1_111)) ? (var_1_86 == ((unsigned long int) var_1_87)) : (var_1_86 == ((unsigned long int) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) && (var_1_105 ? ((var_1_72 < (255.5f * (var_1_53 * var_1_27))) ? ((! var_1_29) ? (var_1_88 == ((unsigned short int) (var_1_21 + ((((var_1_75) < (var_1_31)) ? (var_1_75) : (var_1_31)))))) : ((var_1_4 || var_1_22) ? (var_1_88 == ((unsigned short int) var_1_19)) : 1)) : 1) : 1)) && ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) >= ((var_1_79 - var_1_18) - var_1_14)) ? ((var_1_63 >= var_1_88) ? (var_1_89 == ((unsigned char) (! (! var_1_4)))) : 1) : 1)) && ((((var_1_91 + var_1_92) - var_1_55) <= var_1_31) ? (var_1_90 == ((unsigned char) (last_1_var_1_90 || var_1_4))) : 1)) && (var_1_93 == ((float) (((((var_1_73 - var_1_50)) > (var_1_57)) ? ((var_1_73 - var_1_50)) : (var_1_57)))))) && ((var_1_73 >= (var_1_51 / var_1_54)) ? (var_1_94 == ((unsigned char) (var_1_95 - var_1_10))) : (var_1_94 == ((unsigned char) ((((var_1_92) > (4)) ? (var_1_92) : (4))))))) && (var_1_96 == ((signed short int) var_1_10))) && (((var_1_67 || var_1_81) || var_1_89) ? ((var_1_58 < var_1_71) ? (var_1_97 == ((signed char) ((((var_1_11) < (((((var_1_10) < (var_1_7)) ? (var_1_10) : (var_1_7))))) ? (var_1_11) : (((((var_1_10) < (var_1_7)) ? (var_1_10) : (var_1_7)))))))) : (var_1_97 == ((signed char) (10 - var_1_10)))) : (var_1_97 == ((signed char) ((((var_1_9) < (((var_1_78 + -4) + var_1_11))) ? (var_1_9) : (((var_1_78 + -4) + var_1_11)))))))) && (((var_1_88 * var_1_31) >= var_1_60) ? (var_1_98 == ((unsigned short int) (var_1_42 - var_1_14))) : (var_1_98 == ((unsigned short int) ((((var_1_92) < (1)) ? (var_1_92) : (1))))))) && ((! var_1_114) ? ((var_1_110 < var_1_111) ? (var_1_99 == ((float) var_1_50)) : 1) : (var_1_99 == ((float) var_1_56)))) && (var_1_100 == ((unsigned char) var_1_29))) && (var_1_29 ? (var_1_101 == ((float) var_1_58)) : (var_1_101 == ((float) var_1_56)))) && (var_1_102 == ((signed short int) var_1_103))) && (var_1_104 == ((float) var_1_50))) && (var_1_105 == ((unsigned char) var_1_29))) && (var_1_106 == ((signed char) var_1_8))) && (var_1_90 ? (var_1_107 == ((float) var_1_50)) : (var_1_107 == ((float) var_1_70)))) && (var_1_89 ? (var_1_108 == ((unsigned char) var_1_29)) : (var_1_108 == ((unsigned char) var_1_5)))) && (var_1_109 == ((float) 0.4f))) && (var_1_110 == ((signed char) var_1_78))) && (var_1_47 ? (var_1_111 == ((unsigned long int) var_1_14)) : (var_1_111 == ((unsigned long int) var_1_42)))) && (var_1_29 ? (var_1_112 == ((unsigned long int) 0u)) : (var_1_112 == ((unsigned long int) var_1_87)))) && (var_1_113 == ((float) var_1_52))) && (var_1_114 == ((unsigned char) var_1_29))) && (var_1_105 ? (var_1_115 == ((signed long int) -4)) : (var_1_115 == ((signed long int) var_1_77)))) && (var_1_67 ? (var_1_117 == ((signed char) (var_1_78 - var_1_11))) : (var_1_117 == ((signed char) (var_1_9 - ((var_1_118 - var_1_55) + ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))))))) && (var_1_119 == ((double) var_1_50))
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
