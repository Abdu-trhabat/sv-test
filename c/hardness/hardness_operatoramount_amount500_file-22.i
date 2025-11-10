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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_7 = 9.75;
double var_1_8 = 0.0;
double var_1_9 = 0.0;
double var_1_10 = 8.5;
signed short int var_1_11 = 100;
float var_1_12 = 100.5;
float var_1_13 = 0.0;
float var_1_14 = 25.4;
unsigned short int var_1_15 = 4;
unsigned long int var_1_16 = 50;
unsigned short int var_1_17 = 32;
unsigned long int var_1_18 = 3616965450;
unsigned long int var_1_20 = 1000000000;
unsigned char var_1_21 = 0;
signed long int var_1_22 = 16;
unsigned long int var_1_23 = 1268507911;
signed short int var_1_24 = -8;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 50;
signed short int var_1_27 = 5;
signed short int var_1_28 = -32;
double var_1_29 = 16.8;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
double var_1_32 = 4.8;
double var_1_33 = 8.5;
double var_1_34 = 31.8;
double var_1_35 = 31.2;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 64;
signed short int var_1_38 = -5;
unsigned short int var_1_39 = 41049;
unsigned short int var_1_40 = 25;
float var_1_41 = 128.5;
float var_1_42 = 16.5;
signed long int var_1_43 = 2;
float var_1_45 = 50.5;
float var_1_47 = 50.6;
float var_1_48 = 3.765;
float var_1_49 = 64.5;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 16;
unsigned char var_1_53 = 0;
unsigned short int var_1_54 = 1;
unsigned long int var_1_55 = 256;
unsigned long int var_1_56 = 1499173119;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
unsigned short int var_1_59 = 0;
signed short int var_1_60 = 5;
signed char var_1_61 = 25;
signed char var_1_62 = 64;
double var_1_63 = 0.35;
double var_1_64 = 64.5;
double var_1_65 = 9.2;
double var_1_66 = 31.345;
unsigned long int var_1_67 = 32;
unsigned char var_1_68 = 8;
unsigned char var_1_69 = 128;
float var_1_70 = 8.8;
float var_1_71 = 7.5;
signed short int var_1_72 = 25;
signed long int var_1_73 = -128;
unsigned short int var_1_74 = 256;
unsigned short int var_1_75 = 0;
unsigned short int var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
double var_1_79 = 24.5;
signed char var_1_80 = 10;
signed char var_1_81 = -4;
unsigned char var_1_82 = 1;
signed short int var_1_84 = -128;
unsigned long int var_1_85 = 256;
signed char var_1_86 = -1;
double var_1_89 = 256.5;
double var_1_90 = 63.5;
signed char var_1_91 = -5;
signed char var_1_92 = -1;
double var_1_93 = 1.4;
unsigned char var_1_94 = 128;
unsigned char var_1_95 = 128;
unsigned long int var_1_96 = 128;
unsigned short int var_1_97 = 4;
unsigned long int var_1_98 = 100;
unsigned long int var_1_99 = 32;
signed long int var_1_100 = 10;
signed short int var_1_101 = -8;
double var_1_102 = 499.4;
signed short int var_1_103 = 1;
double var_1_104 = 5.5;
float var_1_105 = 63.375;
double var_1_106 = 49.5;
signed short int var_1_107 = 10;
signed char var_1_108 = 8;
signed char var_1_109 = 50;
signed long int var_1_110 = 5;
unsigned char var_1_111 = 0;
signed long int var_1_112 = 50;
signed short int last_1_var_1_11 = 100;
unsigned short int last_1_var_1_15 = 4;
unsigned char last_1_var_1_30 = 1;
unsigned char last_1_var_1_36 = 10;
signed short int last_1_var_1_38 = -5;
unsigned char last_1_var_1_50 = 1;
unsigned long int last_1_var_1_55 = 256;
unsigned long int last_1_var_1_67 = 32;
float last_1_var_1_70 = 8.8;
unsigned short int last_1_var_1_74 = 256;
unsigned char last_1_var_1_77 = 0;
unsigned char last_1_var_1_82 = 1;
unsigned char last_1_var_1_95 = 128;
unsigned long int last_1_var_1_98 = 100;
signed long int last_1_var_1_100 = 10;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_30 || last_1_var_1_82) {
  if (last_1_var_1_98 <= var_1_51) {
   var_1_82 = (! (last_1_var_1_50 || var_1_21));
  }
 } else {
  var_1_82 = (var_1_53 && ((last_1_var_1_55 < var_1_26) && var_1_31));
 }
 if (! var_1_82) {
  var_1_70 = (((((64.6f + var_1_10)) < ((var_1_64 - var_1_8))) ? ((64.6f + var_1_10)) : ((var_1_64 - var_1_8))));
 } else {
  var_1_70 = ((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > (var_1_49)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_49)));
 }
 if (last_1_var_1_77) {
  var_1_99 = var_1_56;
 } else {
  var_1_99 = last_1_var_1_36;
 }
 if (last_1_var_1_70 == 16.4f) {
  if (((((last_1_var_1_74) < (var_1_5)) ? (last_1_var_1_74) : (var_1_5))) > (last_1_var_1_95 - var_1_6)) {
   var_1_15 = (last_1_var_1_95 + var_1_6);
  } else {
   var_1_15 = last_1_var_1_15;
  }
 }
 signed long int stepLocal_6 = 4 + var_1_26;
 if (stepLocal_6 <= (var_1_15 / var_1_25)) {
  var_1_43 = var_1_26;
 }
 var_1_7 = (256.08 - (var_1_8 - (var_1_9 - var_1_10)));
 var_1_29 = ((((var_1_13) > ((var_1_9 + var_1_10))) ? (var_1_13) : ((var_1_9 + var_1_10))));
 if (((36280 - var_1_25) * var_1_22) <= var_1_6) {
  if (var_1_8 == 4.2) {
   var_1_32 = var_1_13;
  }
 }
 if ((var_1_47 < var_1_8) || var_1_21) {
  var_1_59 = (var_1_52 + var_1_54);
 } else {
  var_1_59 = (((((55451 - var_1_51)) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? ((55451 - var_1_51)) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
 }
 if (var_1_10 != var_1_47) {
  if (! var_1_53) {
   var_1_61 = ((var_1_62 - var_1_54) - 1);
  } else {
   var_1_61 = (var_1_62 - var_1_54);
  }
 }
 var_1_67 = (256u + last_1_var_1_67);
 if (2.5f < var_1_42) {
  var_1_71 = (var_1_47 + var_1_9);
 } else {
  var_1_71 = ((((var_1_47) > (((((var_1_49 - var_1_35) < 0 ) ? -(var_1_49 - var_1_35) : (var_1_49 - var_1_35))))) ? (var_1_47) : (((((var_1_49 - var_1_35) < 0 ) ? -(var_1_49 - var_1_35) : (var_1_49 - var_1_35))))));
 }
 signed long int stepLocal_21 = (((128 + var_1_76) < 0 ) ? -(128 + var_1_76) : (128 + var_1_76));
 if (stepLocal_21 >= var_1_67) {
  var_1_78 = (! var_1_58);
 }
 var_1_80 = ((((((((var_1_81) > (var_1_54)) ? (var_1_81) : (var_1_54)))) > (var_1_76)) ? (((((var_1_81) > (var_1_54)) ? (var_1_81) : (var_1_54)))) : (var_1_76)));
 var_1_90 = (((((var_1_10 - (var_1_8 - var_1_9))) < ((var_1_64 - ((((var_1_14) < (var_1_35)) ? (var_1_14) : (var_1_35)))))) ? ((var_1_10 - (var_1_8 - var_1_9))) : ((var_1_64 - ((((var_1_14) < (var_1_35)) ? (var_1_14) : (var_1_35)))))));
 if (var_1_78) {
  var_1_94 = var_1_26;
 } else {
  var_1_94 = var_1_52;
 }
 if (var_1_58) {
  var_1_97 = var_1_27;
 }
 var_1_98 = var_1_5;
 var_1_100 = last_1_var_1_100;
 if (var_1_31) {
  var_1_101 = 2;
 }
 var_1_103 = var_1_25;
 var_1_104 = 2.3;
 var_1_106 = var_1_13;
 if (! var_1_21) {
  var_1_108 = (var_1_54 - var_1_75);
 }
 var_1_109 = (var_1_75 + var_1_76);
 var_1_110 = var_1_99;
 var_1_111 = var_1_21;
 var_1_112 = 16;
 signed char stepLocal_23 = var_1_62;
 if (var_1_99 <= stepLocal_23) {
  var_1_85 = (((((var_1_18) > ((4125009469u - var_1_27))) ? (var_1_18) : ((4125009469u - var_1_27)))) - var_1_97);
 }
 var_1_28 = var_1_98;
 if (var_1_67 <= var_1_6) {
  if (! var_1_31) {
   var_1_36 = (var_1_26 + var_1_37);
  }
 }
 unsigned long int stepLocal_5 = var_1_85;
 if (stepLocal_5 >= -5) {
  if (var_1_31) {
   var_1_41 = ((((var_1_9) < (var_1_13)) ? (var_1_9) : (var_1_13)));
  } else {
   var_1_41 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
  }
 }
 if (var_1_31) {
  var_1_57 = ((var_1_112 < (var_1_67 / var_1_51)) && (! (var_1_21 && var_1_58)));
 }
 var_1_84 = ((((((var_1_62) > (var_1_101)) ? (var_1_62) : (var_1_101))) - (10 + var_1_28)) + ((((-1) > (var_1_76)) ? (-1) : (var_1_76))));
 if (var_1_111) {
  var_1_93 = var_1_49;
 } else {
  var_1_93 = var_1_48;
 }
 var_1_55 = (var_1_23 + (var_1_56 - var_1_85));
 signed long int stepLocal_2 = (var_1_25 + 64) - var_1_26;
 if (stepLocal_2 <= var_1_17) {
  var_1_24 = (var_1_28 - var_1_27);
 } else {
  var_1_24 = ((((256) > (var_1_27)) ? (256) : (var_1_27)));
 }
 if (var_1_31) {
  var_1_72 = var_1_84;
 }
 if (var_1_57) {
  var_1_96 = var_1_25;
 } else {
  var_1_96 = var_1_24;
 }
 if (! (var_1_26 >= (var_1_24 & var_1_101))) {
  var_1_73 = ((((var_1_51) > (var_1_101)) ? (var_1_51) : (var_1_101)));
 } else {
  var_1_73 = (((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))) - var_1_99);
 }
 signed long int stepLocal_1 = var_1_73 / -500;
 if (stepLocal_1 < var_1_43) {
  var_1_12 = ((((var_1_8 - (var_1_13 - 0.8f)) < 0 ) ? -(var_1_8 - (var_1_13 - 0.8f)) : (var_1_8 - (var_1_13 - 0.8f))));
 } else {
  var_1_12 = ((((var_1_10) > ((var_1_13 - var_1_14))) ? (var_1_10) : ((var_1_13 - var_1_14))));
 }
 if ((- var_1_96) <= var_1_25) {
  if (var_1_17 > var_1_96) {
   var_1_30 = (var_1_78 || (! var_1_31));
  }
 }
 if (var_1_30 || ((- var_1_5) > var_1_17)) {
  if ((- var_1_20) <= var_1_18) {
   if ((var_1_17 + var_1_18) <= var_1_67) {
    var_1_33 = (var_1_9 + ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_34)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_34))));
   } else {
    var_1_33 = (var_1_10 + var_1_34);
   }
  } else {
   var_1_33 = (((var_1_10 + var_1_35) - 9.999999993E7) + var_1_34);
  }
 }
 unsigned long int stepLocal_9 = var_1_67;
 unsigned long int stepLocal_8 = (((var_1_40) < ((var_1_67 * var_1_55))) ? (var_1_40) : ((var_1_67 * var_1_55)));
 unsigned short int stepLocal_7 = var_1_5;
 if ((var_1_25 ^ (128 - var_1_26)) <= stepLocal_8) {
  if (var_1_23 < stepLocal_7) {
   if (var_1_21) {
    if (var_1_40 <= stepLocal_9) {
     var_1_45 = (((((var_1_47 + var_1_10)) > (var_1_48)) ? ((var_1_47 + var_1_10)) : (var_1_48)));
    } else {
     if (var_1_30) {
      var_1_45 = (var_1_8 - var_1_9);
     }
    }
   } else {
    var_1_45 = ((((64.5f) < ((var_1_34 + var_1_35))) ? (64.5f) : ((var_1_34 + var_1_35))));
   }
  } else {
   var_1_45 = (var_1_9 - (var_1_10 + var_1_35));
  }
 } else {
  if (! var_1_57) {
   var_1_45 = (var_1_49 - var_1_9);
  } else {
   if (var_1_31) {
    var_1_45 = (49.3f - (var_1_10 + (var_1_9 - var_1_35)));
   } else {
    var_1_45 = (-0.95f + var_1_34);
   }
  }
 }
 if (var_1_30) {
  var_1_102 = var_1_48;
 } else {
  var_1_102 = var_1_9;
 }
 unsigned char stepLocal_22 = var_1_30;
 if (var_1_64 <= (var_1_47 + (var_1_9 * var_1_70))) {
  if (var_1_57 && stepLocal_22) {
   var_1_79 = 25.75;
  }
 } else {
  var_1_79 = var_1_49;
 }
 if (var_1_112 < (((((var_1_5 % var_1_17)) > ((~ var_1_73))) ? ((var_1_5 % var_1_17)) : ((~ var_1_73))))) {
  if (var_1_9 >= var_1_10) {
   var_1_16 = (((((var_1_18 - var_1_43)) > (var_1_17)) ? ((var_1_18 - var_1_43)) : (var_1_17)));
  } else {
   if (var_1_30 && ((var_1_43 * var_1_5) >= var_1_15)) {
    if ((0.628 / var_1_9) > ((((var_1_13) > (var_1_8)) ? (var_1_13) : (var_1_8)))) {
     var_1_16 = (var_1_18 - (1167038438u - (var_1_20 - var_1_6)));
    } else {
     if ((var_1_5 - var_1_22) >= -8) {
      var_1_16 = ((var_1_23 - var_1_73) + var_1_6);
     } else {
      var_1_16 = var_1_20;
     }
    }
   } else {
    var_1_16 = var_1_23;
   }
  }
 } else {
  var_1_16 = var_1_20;
 }
 unsigned long int stepLocal_4 = var_1_99;
 signed long int stepLocal_3 = ((((var_1_39 - var_1_40)) > (var_1_110)) ? ((var_1_39 - var_1_40)) : (var_1_110));
 if (stepLocal_4 <= var_1_5) {
  var_1_38 = ((((var_1_27) > (var_1_16)) ? (var_1_27) : (var_1_16)));
 } else {
  if (stepLocal_3 <= (var_1_98 * var_1_25)) {
   if (var_1_8 <= var_1_33) {
    var_1_38 = ((last_1_var_1_38 - var_1_16) + var_1_37);
   } else {
    var_1_38 = ((((var_1_16) > (last_1_var_1_38)) ? (var_1_16) : (last_1_var_1_38)));
   }
  } else {
   var_1_38 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
  }
 }
 if (var_1_58) {
  if (var_1_43 < var_1_17) {
   if (! (var_1_26 < var_1_18)) {
    var_1_63 = ((var_1_10 + var_1_35) + var_1_47);
   } else {
    var_1_63 = ((((var_1_34) < ((((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))) - var_1_8))) ? (var_1_34) : ((((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))) - var_1_8))));
   }
  } else {
   var_1_63 = var_1_8;
  }
 } else {
  if (var_1_43 > var_1_99) {
   if (var_1_31 || (var_1_79 < var_1_90)) {
    var_1_63 = ((((var_1_34) > ((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) + var_1_47))) ? (var_1_34) : ((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) + var_1_47))));
   }
  } else {
   var_1_63 = (var_1_35 + ((((var_1_34) < (var_1_66)) ? (var_1_34) : (var_1_66))));
  }
 }
 if ((~ var_1_75) > (var_1_37 ^ var_1_16)) {
  var_1_89 = (var_1_47 + ((var_1_9 - var_1_10) - var_1_35));
 } else {
  var_1_89 = (var_1_13 - var_1_14);
 }
 if (var_1_57) {
  var_1_107 = -50;
 } else {
  var_1_107 = var_1_16;
 }
 signed long int stepLocal_12 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - ((((var_1_37) < (var_1_52)) ? (var_1_37) : (var_1_52)));
 unsigned char stepLocal_11 = (var_1_26 - var_1_37) > var_1_15;
 unsigned long int stepLocal_10 = var_1_98 % var_1_17;
 if (var_1_79 < (var_1_47 / ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) {
  var_1_50 = var_1_31;
 } else {
  if (var_1_6 <= stepLocal_10) {
   if (var_1_26 <= stepLocal_12) {
    var_1_50 = (var_1_31 || var_1_53);
   } else {
    var_1_50 = var_1_31;
   }
  } else {
   if ((var_1_23 < var_1_55) || stepLocal_11) {
    if (var_1_79 <= var_1_104) {
     var_1_50 = ((var_1_100 >= (var_1_26 >> var_1_54)) || var_1_21);
    } else {
     var_1_50 = (! ((! var_1_57) || var_1_21));
    }
   } else {
    var_1_50 = var_1_21;
   }
  }
 }
 unsigned long int stepLocal_0 = var_1_99 | var_1_59;
 if (stepLocal_0 >= (50 * var_1_16)) {
  var_1_1 = ((((var_1_59) < (((((var_1_99) > ((var_1_5 + var_1_6))) ? (var_1_99) : ((var_1_5 + var_1_6)))))) ? (var_1_59) : (((((var_1_99) > ((var_1_5 + var_1_6))) ? (var_1_99) : ((var_1_5 + var_1_6)))))));
 }
 unsigned short int stepLocal_20 = var_1_1;
 unsigned char stepLocal_19 = var_1_73 >= (var_1_72 * var_1_52);
 signed long int stepLocal_18 = -10000000;
 if (! var_1_58) {
  if (var_1_58 && stepLocal_19) {
   var_1_77 = (! var_1_53);
  } else {
   var_1_77 = (var_1_82 || var_1_58);
  }
 } else {
  if (stepLocal_18 <= (var_1_22 / var_1_56)) {
   var_1_77 = var_1_58;
  } else {
   if ((var_1_62 % var_1_25) < stepLocal_20) {
    var_1_77 = var_1_21;
   } else {
    var_1_77 = (! (! var_1_31));
   }
  }
 }
 if (var_1_50) {
  var_1_95 = var_1_69;
 }
 signed long int stepLocal_17 = var_1_26 << (var_1_75 + var_1_76);
 if (var_1_58) {
  if (var_1_21) {
   if (stepLocal_17 == var_1_55) {
    var_1_74 = ((var_1_52 + (var_1_62 + var_1_51)) + ((((var_1_27) < (var_1_6)) ? (var_1_27) : (var_1_6))));
   }
  } else {
   var_1_74 = var_1_75;
  }
 } else {
  var_1_74 = (((((var_1_52 + var_1_95)) > (((((var_1_54) > ((var_1_26 + var_1_75))) ? (var_1_54) : ((var_1_26 + var_1_75)))))) ? ((var_1_52 + var_1_95)) : (((((var_1_54) > ((var_1_26 + var_1_75))) ? (var_1_54) : ((var_1_26 + var_1_75)))))));
 }
 if (var_1_38 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) {
  if ((var_1_10 + (var_1_90 / var_1_9)) >= var_1_8) {
   var_1_11 = (last_1_var_1_11 - 256);
  }
 } else {
  if ((16 * last_1_var_1_11) < var_1_5) {
   var_1_11 = (var_1_38 + ((((8) > (16)) ? (8) : (16))));
  } else {
   var_1_11 = var_1_38;
  }
 }
 unsigned long int stepLocal_16 = (var_1_1 * 50u) + var_1_15;
 unsigned char stepLocal_15 = var_1_78;
 signed long int stepLocal_14 = var_1_1 + var_1_54;
 unsigned long int stepLocal_13 = var_1_23 + var_1_39;
 if (var_1_20 == stepLocal_13) {
  if (var_1_21) {
   var_1_60 = (var_1_15 + var_1_110);
  } else {
   var_1_60 = ((((var_1_52) < ((((((128 - var_1_15)) > (var_1_51)) ? ((128 - var_1_15)) : (var_1_51))))) ? (var_1_52) : ((((((128 - var_1_15)) > (var_1_51)) ? ((128 - var_1_15)) : (var_1_51))))));
  }
 } else {
  if (stepLocal_15 || var_1_57) {
   if (var_1_18 > stepLocal_14) {
    var_1_60 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
   } else {
    if (var_1_23 >= stepLocal_16) {
     if (! var_1_78) {
      var_1_60 = ((((var_1_37) > (var_1_15)) ? (var_1_37) : (var_1_15)));
     } else {
      var_1_60 = ((var_1_25 + var_1_51) - ((((var_1_110) > (var_1_52)) ? (var_1_110) : (var_1_52))));
     }
    } else {
     var_1_60 = (var_1_52 + var_1_54);
    }
   }
  } else {
   var_1_60 = ((((var_1_25) < (var_1_37)) ? (var_1_25) : (var_1_37)));
  }
 }
 if (var_1_77) {
  var_1_68 = ((((var_1_52) < (var_1_37)) ? (var_1_52) : (var_1_37)));
 } else {
  var_1_68 = (var_1_69 - var_1_37);
 }
 if (var_1_30) {
  var_1_86 = var_1_81;
 } else {
  if (var_1_80 < var_1_1) {
   if ((var_1_67 * var_1_100) <= (128 + (var_1_38 + var_1_24))) {
    var_1_86 = var_1_76;
   } else {
    var_1_86 = (var_1_76 + var_1_75);
   }
  }
 }
 if (var_1_50) {
  var_1_91 = var_1_92;
 } else {
  var_1_91 = (((((var_1_62) < (var_1_75)) ? (var_1_62) : (var_1_75))) - var_1_76);
 }
 if (var_1_50) {
  var_1_105 = var_1_65;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 4611686.018427383000e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 2305843.009213691400e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65535);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 536870911);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 63);
 assume_abort_if_not(var_1_25 <= 128);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65535);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 32767);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 127);
 assume_abort_if_not(var_1_51 <= 255);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 127);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 7);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 1073741823);
 assume_abort_if_not(var_1_56 <= 2147483647);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 62);
 assume_abort_if_not(var_1_62 <= 126);
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= -461168.6018427383000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427383000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= -461168.6018427383000e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 127);
 assume_abort_if_not(var_1_69 <= 254);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 1);
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 0);
 var_1_81 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_81 >= -127);
 assume_abort_if_not(var_1_81 <= 126);
 var_1_92 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_92 >= -127);
 assume_abort_if_not(var_1_92 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_100 = var_1_100;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_99 | var_1_59) >= (50 * var_1_16)) ? (var_1_1 == ((unsigned short int) ((((var_1_59) < (((((var_1_99) > ((var_1_5 + var_1_6))) ? (var_1_99) : ((var_1_5 + var_1_6)))))) ? (var_1_59) : (((((var_1_99) > ((var_1_5 + var_1_6))) ? (var_1_99) : ((var_1_5 + var_1_6))))))))) : 1) && (var_1_7 == ((double) (256.08 - (var_1_8 - (var_1_9 - var_1_10)))))) && ((var_1_38 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? (((var_1_10 + (var_1_90 / var_1_9)) >= var_1_8) ? (var_1_11 == ((signed short int) (last_1_var_1_11 - 256))) : 1) : (((16 * last_1_var_1_11) < var_1_5) ? (var_1_11 == ((signed short int) (var_1_38 + ((((8) > (16)) ? (8) : (16)))))) : (var_1_11 == ((signed short int) var_1_38))))) && (((var_1_73 / -500) < var_1_43) ? (var_1_12 == ((float) ((((var_1_8 - (var_1_13 - 0.8f)) < 0 ) ? -(var_1_8 - (var_1_13 - 0.8f)) : (var_1_8 - (var_1_13 - 0.8f)))))) : (var_1_12 == ((float) ((((var_1_10) > ((var_1_13 - var_1_14))) ? (var_1_10) : ((var_1_13 - var_1_14)))))))) && ((last_1_var_1_70 == 16.4f) ? ((((((last_1_var_1_74) < (var_1_5)) ? (last_1_var_1_74) : (var_1_5))) > (last_1_var_1_95 - var_1_6)) ? (var_1_15 == ((unsigned short int) (last_1_var_1_95 + var_1_6))) : (var_1_15 == ((unsigned short int) last_1_var_1_15))) : 1)) && ((var_1_112 < (((((var_1_5 % var_1_17)) > ((~ var_1_73))) ? ((var_1_5 % var_1_17)) : ((~ var_1_73))))) ? ((var_1_9 >= var_1_10) ? (var_1_16 == ((unsigned long int) (((((var_1_18 - var_1_43)) > (var_1_17)) ? ((var_1_18 - var_1_43)) : (var_1_17))))) : ((var_1_30 && ((var_1_43 * var_1_5) >= var_1_15)) ? (((0.628 / var_1_9) > ((((var_1_13) > (var_1_8)) ? (var_1_13) : (var_1_8)))) ? (var_1_16 == ((unsigned long int) (var_1_18 - (1167038438u - (var_1_20 - var_1_6))))) : (((var_1_5 - var_1_22) >= -8) ? (var_1_16 == ((unsigned long int) ((var_1_23 - var_1_73) + var_1_6))) : (var_1_16 == ((unsigned long int) var_1_20)))) : (var_1_16 == ((unsigned long int) var_1_23)))) : (var_1_16 == ((unsigned long int) var_1_20)))) && ((((var_1_25 + 64) - var_1_26) <= var_1_17) ? (var_1_24 == ((signed short int) (var_1_28 - var_1_27))) : (var_1_24 == ((signed short int) ((((256) > (var_1_27)) ? (256) : (var_1_27))))))) && (var_1_28 == ((signed short int) var_1_98))) && (var_1_29 == ((double) ((((var_1_13) > ((var_1_9 + var_1_10))) ? (var_1_13) : ((var_1_9 + var_1_10))))))) && (((- var_1_96) <= var_1_25) ? ((var_1_17 > var_1_96) ? (var_1_30 == ((unsigned char) (var_1_78 || (! var_1_31)))) : 1) : 1)) && ((((36280 - var_1_25) * var_1_22) <= var_1_6) ? ((var_1_8 == 4.2) ? (var_1_32 == ((double) var_1_13)) : 1) : 1)) && ((var_1_30 || ((- var_1_5) > var_1_17)) ? (((- var_1_20) <= var_1_18) ? (((var_1_17 + var_1_18) <= var_1_67) ? (var_1_33 == ((double) (var_1_9 + ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_34)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_34)))))) : (var_1_33 == ((double) (var_1_10 + var_1_34)))) : (var_1_33 == ((double) (((var_1_10 + var_1_35) - 9.999999993E7) + var_1_34)))) : 1)) && ((var_1_67 <= var_1_6) ? ((! var_1_31) ? (var_1_36 == ((unsigned char) (var_1_26 + var_1_37))) : 1) : 1)) && ((var_1_99 <= var_1_5) ? (var_1_38 == ((signed short int) ((((var_1_27) > (var_1_16)) ? (var_1_27) : (var_1_16))))) : (((((((var_1_39 - var_1_40)) > (var_1_110)) ? ((var_1_39 - var_1_40)) : (var_1_110))) <= (var_1_98 * var_1_25)) ? ((var_1_8 <= var_1_33) ? (var_1_38 == ((signed short int) ((last_1_var_1_38 - var_1_16) + var_1_37))) : (var_1_38 == ((signed short int) ((((var_1_16) > (last_1_var_1_38)) ? (var_1_16) : (last_1_var_1_38)))))) : (var_1_38 == ((signed short int) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))))) && ((var_1_85 >= -5) ? (var_1_31 ? (var_1_41 == ((float) ((((var_1_9) < (var_1_13)) ? (var_1_9) : (var_1_13))))) : (var_1_41 == ((float) ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))) : 1)) && (((4 + var_1_26) <= (var_1_15 / var_1_25)) ? (var_1_43 == ((signed long int) var_1_26)) : 1)) && (((var_1_25 ^ (128 - var_1_26)) <= ((((var_1_40) < ((var_1_67 * var_1_55))) ? (var_1_40) : ((var_1_67 * var_1_55))))) ? ((var_1_23 < var_1_5) ? (var_1_21 ? ((var_1_40 <= var_1_67) ? (var_1_45 == ((float) (((((var_1_47 + var_1_10)) > (var_1_48)) ? ((var_1_47 + var_1_10)) : (var_1_48))))) : (var_1_30 ? (var_1_45 == ((float) (var_1_8 - var_1_9))) : 1)) : (var_1_45 == ((float) ((((64.5f) < ((var_1_34 + var_1_35))) ? (64.5f) : ((var_1_34 + var_1_35))))))) : (var_1_45 == ((float) (var_1_9 - (var_1_10 + var_1_35))))) : ((! var_1_57) ? (var_1_45 == ((float) (var_1_49 - var_1_9))) : (var_1_31 ? (var_1_45 == ((float) (49.3f - (var_1_10 + (var_1_9 - var_1_35))))) : (var_1_45 == ((float) (-0.95f + var_1_34))))))) && ((var_1_79 < (var_1_47 / ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_50 == ((unsigned char) var_1_31)) : ((var_1_6 <= (var_1_98 % var_1_17)) ? ((var_1_26 <= (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - ((((var_1_37) < (var_1_52)) ? (var_1_37) : (var_1_52))))) ? (var_1_50 == ((unsigned char) (var_1_31 || var_1_53))) : (var_1_50 == ((unsigned char) var_1_31))) : (((var_1_23 < var_1_55) || ((var_1_26 - var_1_37) > var_1_15)) ? ((var_1_79 <= var_1_104) ? (var_1_50 == ((unsigned char) ((var_1_100 >= (var_1_26 >> var_1_54)) || var_1_21))) : (var_1_50 == ((unsigned char) (! ((! var_1_57) || var_1_21))))) : (var_1_50 == ((unsigned char) var_1_21)))))) && (var_1_55 == ((unsigned long int) (var_1_23 + (var_1_56 - var_1_85))))) && (var_1_31 ? (var_1_57 == ((unsigned char) ((var_1_112 < (var_1_67 / var_1_51)) && (! (var_1_21 && var_1_58))))) : 1)) && (((var_1_47 < var_1_8) || var_1_21) ? (var_1_59 == ((unsigned short int) (var_1_52 + var_1_54))) : (var_1_59 == ((unsigned short int) (((((55451 - var_1_51)) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? ((55451 - var_1_51)) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))))))) && ((var_1_20 == (var_1_23 + var_1_39)) ? (var_1_21 ? (var_1_60 == ((signed short int) (var_1_15 + var_1_110))) : (var_1_60 == ((signed short int) ((((var_1_52) < ((((((128 - var_1_15)) > (var_1_51)) ? ((128 - var_1_15)) : (var_1_51))))) ? (var_1_52) : ((((((128 - var_1_15)) > (var_1_51)) ? ((128 - var_1_15)) : (var_1_51))))))))) : ((var_1_78 || var_1_57) ? ((var_1_18 > (var_1_1 + var_1_54)) ? (var_1_60 == ((signed short int) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) : ((var_1_23 >= ((var_1_1 * 50u) + var_1_15)) ? ((! var_1_78) ? (var_1_60 == ((signed short int) ((((var_1_37) > (var_1_15)) ? (var_1_37) : (var_1_15))))) : (var_1_60 == ((signed short int) ((var_1_25 + var_1_51) - ((((var_1_110) > (var_1_52)) ? (var_1_110) : (var_1_52))))))) : (var_1_60 == ((signed short int) (var_1_52 + var_1_54))))) : (var_1_60 == ((signed short int) ((((var_1_25) < (var_1_37)) ? (var_1_25) : (var_1_37)))))))) && ((var_1_10 != var_1_47) ? ((! var_1_53) ? (var_1_61 == ((signed char) ((var_1_62 - var_1_54) - 1))) : (var_1_61 == ((signed char) (var_1_62 - var_1_54)))) : 1)) && (var_1_58 ? ((var_1_43 < var_1_17) ? ((! (var_1_26 < var_1_18)) ? (var_1_63 == ((double) ((var_1_10 + var_1_35) + var_1_47))) : (var_1_63 == ((double) ((((var_1_34) < ((((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))) - var_1_8))) ? (var_1_34) : ((((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))) - var_1_8))))))) : (var_1_63 == ((double) var_1_8))) : ((var_1_43 > var_1_99) ? ((var_1_31 || (var_1_79 < var_1_90)) ? (var_1_63 == ((double) ((((var_1_34) > ((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) + var_1_47))) ? (var_1_34) : ((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) + var_1_47)))))) : 1) : (var_1_63 == ((double) (var_1_35 + ((((var_1_34) < (var_1_66)) ? (var_1_34) : (var_1_66))))))))) && (var_1_67 == ((unsigned long int) (256u + last_1_var_1_67)))) && (var_1_77 ? (var_1_68 == ((unsigned char) ((((var_1_52) < (var_1_37)) ? (var_1_52) : (var_1_37))))) : (var_1_68 == ((unsigned char) (var_1_69 - var_1_37))))) && ((! var_1_82) ? (var_1_70 == ((float) (((((64.6f + var_1_10)) < ((var_1_64 - var_1_8))) ? ((64.6f + var_1_10)) : ((var_1_64 - var_1_8)))))) : (var_1_70 == ((float) ((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > (var_1_49)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_49))))))) && ((2.5f < var_1_42) ? (var_1_71 == ((float) (var_1_47 + var_1_9))) : (var_1_71 == ((float) ((((var_1_47) > (((((var_1_49 - var_1_35) < 0 ) ? -(var_1_49 - var_1_35) : (var_1_49 - var_1_35))))) ? (var_1_47) : (((((var_1_49 - var_1_35) < 0 ) ? -(var_1_49 - var_1_35) : (var_1_49 - var_1_35)))))))))) && (var_1_31 ? (var_1_72 == ((signed short int) var_1_84)) : 1)) && ((! (var_1_26 >= (var_1_24 & var_1_101))) ? (var_1_73 == ((signed long int) ((((var_1_51) > (var_1_101)) ? (var_1_51) : (var_1_101))))) : (var_1_73 == ((signed long int) (((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))) - var_1_99))))) && (var_1_58 ? (var_1_21 ? (((var_1_26 << (var_1_75 + var_1_76)) == var_1_55) ? (var_1_74 == ((unsigned short int) ((var_1_52 + (var_1_62 + var_1_51)) + ((((var_1_27) < (var_1_6)) ? (var_1_27) : (var_1_6)))))) : 1) : (var_1_74 == ((unsigned short int) var_1_75))) : (var_1_74 == ((unsigned short int) (((((var_1_52 + var_1_95)) > (((((var_1_54) > ((var_1_26 + var_1_75))) ? (var_1_54) : ((var_1_26 + var_1_75)))))) ? ((var_1_52 + var_1_95)) : (((((var_1_54) > ((var_1_26 + var_1_75))) ? (var_1_54) : ((var_1_26 + var_1_75))))))))))) && ((! var_1_58) ? ((var_1_58 && (var_1_73 >= (var_1_72 * var_1_52))) ? (var_1_77 == ((unsigned char) (! var_1_53))) : (var_1_77 == ((unsigned char) (var_1_82 || var_1_58)))) : ((-10000000 <= (var_1_22 / var_1_56)) ? (var_1_77 == ((unsigned char) var_1_58)) : (((var_1_62 % var_1_25) < var_1_1) ? (var_1_77 == ((unsigned char) var_1_21)) : (var_1_77 == ((unsigned char) (! (! var_1_31)))))))) && ((((((128 + var_1_76) < 0 ) ? -(128 + var_1_76) : (128 + var_1_76))) >= var_1_67) ? (var_1_78 == ((unsigned char) (! var_1_58))) : 1)) && ((var_1_64 <= (var_1_47 + (var_1_9 * var_1_70))) ? ((var_1_57 && var_1_30) ? (var_1_79 == ((double) 25.75)) : 1) : (var_1_79 == ((double) var_1_49)))) && (var_1_80 == ((signed char) ((((((((var_1_81) > (var_1_54)) ? (var_1_81) : (var_1_54)))) > (var_1_76)) ? (((((var_1_81) > (var_1_54)) ? (var_1_81) : (var_1_54)))) : (var_1_76)))))) && ((last_1_var_1_30 || last_1_var_1_82) ? ((last_1_var_1_98 <= var_1_51) ? (var_1_82 == ((unsigned char) (! (last_1_var_1_50 || var_1_21)))) : 1) : (var_1_82 == ((unsigned char) (var_1_53 && ((last_1_var_1_55 < var_1_26) && var_1_31)))))) && (var_1_84 == ((signed short int) ((((((var_1_62) > (var_1_101)) ? (var_1_62) : (var_1_101))) - (10 + var_1_28)) + ((((-1) > (var_1_76)) ? (-1) : (var_1_76))))))) && ((var_1_99 <= var_1_62) ? (var_1_85 == ((unsigned long int) (((((var_1_18) > ((4125009469u - var_1_27))) ? (var_1_18) : ((4125009469u - var_1_27)))) - var_1_97))) : 1)) && (var_1_30 ? (var_1_86 == ((signed char) var_1_81)) : ((var_1_80 < var_1_1) ? (((var_1_67 * var_1_100) <= (128 + (var_1_38 + var_1_24))) ? (var_1_86 == ((signed char) var_1_76)) : (var_1_86 == ((signed char) (var_1_76 + var_1_75)))) : 1))) && (((~ var_1_75) > (var_1_37 ^ var_1_16)) ? (var_1_89 == ((double) (var_1_47 + ((var_1_9 - var_1_10) - var_1_35)))) : (var_1_89 == ((double) (var_1_13 - var_1_14))))) && (var_1_90 == ((double) (((((var_1_10 - (var_1_8 - var_1_9))) < ((var_1_64 - ((((var_1_14) < (var_1_35)) ? (var_1_14) : (var_1_35)))))) ? ((var_1_10 - (var_1_8 - var_1_9))) : ((var_1_64 - ((((var_1_14) < (var_1_35)) ? (var_1_14) : (var_1_35)))))))))) && (var_1_50 ? (var_1_91 == ((signed char) var_1_92)) : (var_1_91 == ((signed char) (((((var_1_62) < (var_1_75)) ? (var_1_62) : (var_1_75))) - var_1_76))))) && (var_1_111 ? (var_1_93 == ((double) var_1_49)) : (var_1_93 == ((double) var_1_48)))) && (var_1_78 ? (var_1_94 == ((unsigned char) var_1_26)) : (var_1_94 == ((unsigned char) var_1_52)))) && (var_1_50 ? (var_1_95 == ((unsigned char) var_1_69)) : 1)) && (var_1_57 ? (var_1_96 == ((unsigned long int) var_1_25)) : (var_1_96 == ((unsigned long int) var_1_24)))) && (var_1_58 ? (var_1_97 == ((unsigned short int) var_1_27)) : 1)) && (var_1_98 == ((unsigned long int) var_1_5))) && (last_1_var_1_77 ? (var_1_99 == ((unsigned long int) var_1_56)) : (var_1_99 == ((unsigned long int) last_1_var_1_36)))) && (var_1_100 == ((signed long int) last_1_var_1_100))) && (var_1_31 ? (var_1_101 == ((signed short int) 2)) : 1)) && (var_1_30 ? (var_1_102 == ((double) var_1_48)) : (var_1_102 == ((double) var_1_9)))) && (var_1_103 == ((signed short int) var_1_25))) && (var_1_104 == ((double) 2.3))) && (var_1_50 ? (var_1_105 == ((float) var_1_65)) : 1)) && (var_1_106 == ((double) var_1_13))) && (var_1_57 ? (var_1_107 == ((signed short int) -50)) : (var_1_107 == ((signed short int) var_1_16)))) && ((! var_1_21) ? (var_1_108 == ((signed char) (var_1_54 - var_1_75))) : 1)) && (var_1_109 == ((signed char) (var_1_75 + var_1_76)))) && (var_1_110 == ((signed long int) var_1_99))) && (var_1_111 == ((unsigned char) var_1_21))) && (var_1_112 == ((signed long int) 16))
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
