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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch87Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
signed long int var_1_5 = 256;
signed long int var_1_6 = -1;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 16;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 25;
unsigned long int var_1_20 = 3844860889;
unsigned long int var_1_21 = 2027643041;
unsigned long int var_1_22 = 4;
signed long int var_1_23 = 0;
signed long int var_1_25 = 1929320600;
float var_1_26 = 7.75;
float var_1_27 = 10.5;
float var_1_28 = 128.25;
float var_1_29 = 64.5;
float var_1_30 = 31.25;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 1;
unsigned short int var_1_39 = 4;
unsigned short int var_1_40 = 50291;
unsigned short int var_1_41 = 22231;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 32;
signed short int var_1_45 = -256;
signed long int var_1_47 = -1;
float var_1_48 = 9.2;
float var_1_49 = 128.25;
float var_1_50 = 4.35;
float var_1_51 = 127.2;
float var_1_52 = 9.725;
unsigned short int var_1_53 = 32;
unsigned long int var_1_54 = 50;
unsigned char var_1_55 = 1;
unsigned short int var_1_56 = 64;
unsigned char var_1_58 = 1;
unsigned short int var_1_59 = 55347;
unsigned short int var_1_60 = 4;
unsigned long int var_1_61 = 5;
float var_1_62 = 49.625;
double var_1_63 = 63.5;
double var_1_64 = 999999.6;
double var_1_65 = 0.0;
double var_1_66 = 100.6;
double var_1_67 = 15.25;
double var_1_68 = 4.4;
double var_1_69 = 0.0;
double var_1_70 = 0.0;
double var_1_71 = 31.7;
signed short int var_1_72 = -1;
signed short int var_1_74 = 28354;
signed long int var_1_75 = -100;
signed long int var_1_76 = -2;
signed short int var_1_77 = 32;
signed short int var_1_78 = 32;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 0;
signed short int var_1_82 = -50;
unsigned char var_1_83 = 100;
unsigned char var_1_84 = 100;
unsigned char var_1_85 = 5;
unsigned long int var_1_86 = 0;
unsigned char var_1_87 = 1;
unsigned char var_1_88 = 128;
float var_1_90 = 4.48;
signed char var_1_91 = -1;
unsigned long int var_1_92 = 4;
float var_1_93 = 255.75;
signed short int var_1_95 = 2;
unsigned char var_1_96 = 1;
signed char var_1_97 = -50;
signed char var_1_98 = 32;
signed char var_1_99 = 16;
unsigned short int var_1_100 = 2;
unsigned short int var_1_101 = 16;
unsigned long int var_1_102 = 5;
signed long int var_1_103 = -64;
signed long int var_1_104 = -200;
signed char var_1_105 = 16;
unsigned long int var_1_106 = 128;
signed long int var_1_107 = -5;
unsigned char var_1_108 = 32;
unsigned char var_1_109 = 1;
unsigned long int var_1_110 = 64;
unsigned char var_1_111 = 2;
signed long int var_1_112 = -500;
unsigned long int var_1_113 = 2;
signed char var_1_114 = 5;
unsigned char var_1_115 = 25;
unsigned char var_1_116 = 0;
unsigned char var_1_117 = 64;
unsigned char last_1_var_1_1 = 32;
unsigned short int last_1_var_1_9 = 2;
unsigned char last_1_var_1_10 = 0;
unsigned long int last_1_var_1_19 = 25;
unsigned long int last_1_var_1_22 = 4;
signed long int last_1_var_1_23 = 0;
unsigned char last_1_var_1_32 = 0;
signed long int last_1_var_1_47 = -1;
unsigned short int last_1_var_1_53 = 32;
unsigned long int last_1_var_1_61 = 5;
signed short int last_1_var_1_72 = -1;
signed long int last_1_var_1_75 = -100;
unsigned char last_1_var_1_79 = 1;
unsigned char last_1_var_1_80 = 0;
signed short int last_1_var_1_82 = -50;
unsigned long int last_1_var_1_86 = 0;
unsigned long int last_1_var_1_92 = 4;
unsigned char last_1_var_1_96 = 1;
signed char last_1_var_1_97 = -50;
unsigned short int last_1_var_1_100 = 2;
unsigned long int last_1_var_1_102 = 5;
signed long int last_1_var_1_103 = -64;
unsigned long int last_1_var_1_110 = 64;
signed long int last_1_var_1_112 = -500;
unsigned char last_1_var_1_115 = 25;
void initially(void) {
}
void step(void) {
 if (var_1_8 < (((((last_1_var_1_61) > (last_1_var_1_47)) ? (last_1_var_1_61) : (last_1_var_1_47))) * last_1_var_1_102)) {
  if (var_1_34 != last_1_var_1_100) {
   if (var_1_68 > (- var_1_50)) {
    var_1_75 = (100 - ((((last_1_var_1_72) > (2)) ? (last_1_var_1_72) : (2))));
   }
  } else {
   var_1_75 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 } else {
  if (var_1_25 != last_1_var_1_86) {
   var_1_75 = (((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) - var_1_25);
  }
 }
 signed long int stepLocal_15 = (((var_1_41) > (100)) ? (var_1_41) : (100));
 if (stepLocal_15 < -2) {
  var_1_47 = ((var_1_25 - ((((last_1_var_1_75) > (last_1_var_1_82)) ? (last_1_var_1_75) : (last_1_var_1_82)))) - var_1_8);
 } else {
  var_1_47 = last_1_var_1_82;
 }
 unsigned char stepLocal_18 = var_1_6 == ((((last_1_var_1_112) < 0 ) ? -(last_1_var_1_112) : (last_1_var_1_112)));
 if (last_1_var_1_96) {
  if (stepLocal_18 || last_1_var_1_32) {
   var_1_54 = (var_1_21 + var_1_41);
  } else {
   if (! var_1_15) {
    var_1_54 = ((((var_1_7) > (last_1_var_1_110)) ? (var_1_7) : (last_1_var_1_110)));
   } else {
    var_1_54 = ((((last_1_var_1_22) < ((var_1_7 + var_1_34))) ? (last_1_var_1_22) : ((var_1_7 + var_1_34))));
   }
  }
 }
 unsigned short int stepLocal_23 = var_1_40;
 if (stepLocal_23 <= (var_1_8 ^ last_1_var_1_110)) {
  var_1_61 = (last_1_var_1_9 + (last_1_var_1_61 + ((((last_1_var_1_1) < (last_1_var_1_110)) ? (last_1_var_1_1) : (last_1_var_1_110)))));
 } else {
  if (last_1_var_1_79) {
   var_1_61 = ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)));
  } else {
   var_1_61 = last_1_var_1_112;
  }
 }
 signed short int stepLocal_29 = var_1_78;
 unsigned long int stepLocal_28 = last_1_var_1_86;
 if (stepLocal_29 >= (last_1_var_1_75 * -2)) {
  var_1_82 = ((((last_1_var_1_97) < 0 ) ? -(last_1_var_1_97) : (last_1_var_1_97)));
 } else {
  if (stepLocal_28 >= var_1_6) {
   var_1_82 = ((((var_1_40) > (var_1_78)) ? (var_1_40) : (var_1_78)));
  }
 }
 signed long int stepLocal_2 = 0;
 if (last_1_var_1_92 >= stepLocal_2) {
  var_1_22 = last_1_var_1_92;
 } else {
  var_1_22 = ((((var_1_21) < (((((last_1_var_1_103) < (var_1_7)) ? (last_1_var_1_103) : (var_1_7))))) ? (var_1_21) : (((((last_1_var_1_103) < (var_1_7)) ? (last_1_var_1_103) : (var_1_7))))));
 }
 var_1_103 = var_1_61;
 if ((var_1_6 + var_1_5) >= (var_1_8 - var_1_7)) {
  var_1_26 = ((var_1_27 + ((((25.375f) > (9.75f)) ? (25.375f) : (9.75f)))) - var_1_28);
 } else {
  var_1_26 = ((((var_1_27) < ((((((var_1_28 - var_1_29)) < (var_1_30)) ? ((var_1_28 - var_1_29)) : (var_1_30))))) ? (var_1_27) : ((((((var_1_28 - var_1_29)) < (var_1_30)) ? ((var_1_28 - var_1_29)) : (var_1_30))))));
 }
 var_1_67 = ((((((var_1_65 - var_1_66)) > (var_1_68)) ? ((var_1_65 - var_1_66)) : (var_1_68))) - (var_1_69 - (var_1_70 - var_1_71)));
 var_1_86 = (var_1_78 + var_1_8);
 if (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))) < (var_1_67 + var_1_66)) {
  var_1_96 = var_1_15;
 } else {
  var_1_96 = (((- var_1_41) < var_1_25) || (var_1_14 && (! var_1_15)));
 }
 var_1_97 = ((var_1_85 - (var_1_98 - var_1_99)) + var_1_35);
 signed long int stepLocal_35 = -5;
 if (stepLocal_35 < last_1_var_1_100) {
  var_1_100 = var_1_101;
 } else {
  var_1_100 = var_1_8;
 }
 var_1_102 = var_1_20;
 if (var_1_17) {
  var_1_105 = var_1_98;
 } else {
  var_1_105 = -10;
 }
 var_1_111 = var_1_99;
 var_1_112 = var_1_25;
 var_1_113 = var_1_78;
 if (var_1_18) {
  var_1_114 = var_1_85;
 } else {
  var_1_114 = var_1_35;
 }
 signed short int stepLocal_36 = var_1_82;
 if (stepLocal_36 <= (~ last_1_var_1_115)) {
  var_1_115 = ((((var_1_43) < ((((((var_1_84) > (var_1_116)) ? (var_1_84) : (var_1_116))) + (var_1_117 - var_1_99)))) ? (var_1_43) : ((((((var_1_84) > (var_1_116)) ? (var_1_84) : (var_1_116))) + (var_1_117 - var_1_99)))));
 }
 signed long int stepLocal_19 = (((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47));
 if (stepLocal_19 < (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) * var_1_75)) {
  var_1_56 = (var_1_22 + var_1_82);
 } else {
  var_1_56 = ((((var_1_35) < (var_1_41)) ? (var_1_35) : (var_1_41)));
 }
 unsigned long int stepLocal_25 = var_1_21;
 unsigned long int stepLocal_24 = var_1_22;
 if (var_1_15) {
  if (stepLocal_24 <= var_1_61) {
   if (var_1_18) {
    var_1_63 = ((((var_1_29) > ((var_1_49 - var_1_50))) ? (var_1_29) : ((var_1_49 - var_1_50))));
   } else {
    var_1_63 = ((((var_1_64 - var_1_52) < 0 ) ? -(var_1_64 - var_1_52) : (var_1_64 - var_1_52)));
   }
  } else {
   var_1_63 = (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_51);
  }
 } else {
  if (var_1_54 > stepLocal_25) {
   var_1_63 = (((((var_1_27) > ((var_1_50 + var_1_52))) ? (var_1_27) : ((var_1_50 + var_1_52)))) - ((((((((var_1_49) > (var_1_51)) ? (var_1_49) : (var_1_51)))) > ((var_1_65 - var_1_66))) ? (((((var_1_49) > (var_1_51)) ? (var_1_49) : (var_1_51)))) : ((var_1_65 - var_1_66)))));
  } else {
   var_1_63 = (var_1_49 + ((((var_1_51) > (var_1_50)) ? (var_1_51) : (var_1_50))));
  }
 }
 signed long int stepLocal_27 = var_1_43 * -256;
 if (((128.95 * 0.875) / 7.8) >= (var_1_68 - var_1_69)) {
  if (stepLocal_27 == (var_1_22 * ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) {
   var_1_80 = (last_1_var_1_80 || var_1_14);
  } else {
   var_1_80 = ((! (var_1_86 > var_1_40)) && var_1_15);
  }
 }
 if (var_1_80) {
  var_1_108 = var_1_84;
 } else {
  var_1_108 = var_1_43;
 }
 if (var_1_26 < var_1_63) {
  var_1_83 = var_1_35;
 } else {
  if ((var_1_52 - ((((var_1_65) > (var_1_27)) ? (var_1_65) : (var_1_27)))) > var_1_29) {
   var_1_83 = (128 - ((var_1_84 - var_1_85) - var_1_35));
  }
 }
 signed long int stepLocal_32 = var_1_112;
 if (10 > stepLocal_32) {
  var_1_90 = (10.2f + var_1_52);
 }
 var_1_9 = (((((var_1_8) < (var_1_56)) ? (var_1_8) : (var_1_56))) + var_1_7);
 if (var_1_113 < (var_1_9 + var_1_82)) {
  var_1_72 = ((var_1_74 - var_1_108) - (10 + (var_1_61 + var_1_7)));
 }
 if ((var_1_63 + (- 100000.8f)) < ((((var_1_52) < (var_1_51)) ? (var_1_52) : (var_1_51)))) {
  var_1_79 = ((last_1_var_1_79 || var_1_18) && var_1_17);
 }
 if (var_1_79 && var_1_16) {
  if (var_1_18) {
   var_1_19 = (var_1_20 - (var_1_21 - (last_1_var_1_19 + var_1_8)));
  }
 }
 var_1_104 = var_1_19;
 unsigned char stepLocal_6 = var_1_16;
 signed long int stepLocal_5 = var_1_82 ^ ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 unsigned long int stepLocal_4 = var_1_19;
 signed long int stepLocal_3 = (((var_1_82) > (-25)) ? (var_1_82) : (-25));
 if (var_1_7 == stepLocal_4) {
  if (stepLocal_5 <= ((var_1_47 / var_1_7) / -1)) {
   var_1_23 = (2 - var_1_7);
  } else {
   if (stepLocal_6 || ((var_1_7 * 64) <= var_1_113)) {
    var_1_23 = (var_1_113 - (var_1_25 - 4));
   } else {
    if ((((((var_1_7 * last_1_var_1_23)) > ((var_1_6 * var_1_113))) ? ((var_1_7 * last_1_var_1_23)) : ((var_1_6 * var_1_113)))) >= stepLocal_3) {
     var_1_23 = var_1_19;
    } else {
     var_1_23 = ((((var_1_82) > ((var_1_8 - var_1_25))) ? (var_1_82) : ((var_1_8 - var_1_25))));
    }
   }
  }
 } else {
  var_1_23 = var_1_22;
 }
 unsigned long int stepLocal_0 = var_1_102 + var_1_47;
 if (stepLocal_0 == (var_1_23 / ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) {
  var_1_1 = (var_1_7 - var_1_8);
 }
 unsigned char stepLocal_13 = var_1_35;
 unsigned long int stepLocal_12 = ~ var_1_21;
 unsigned char stepLocal_11 = var_1_96;
 if (((- var_1_41) <= var_1_72) && stepLocal_11) {
  if (var_1_23 >= stepLocal_13) {
   var_1_44 = var_1_8;
  } else {
   if (stepLocal_12 > (var_1_7 / var_1_43)) {
    var_1_44 = (var_1_7 - var_1_35);
   }
  }
 }
 signed long int stepLocal_17 = var_1_75;
 unsigned short int stepLocal_16 = var_1_56;
 if (((((last_1_var_1_53) < 0 ) ? -(last_1_var_1_53) : (last_1_var_1_53))) >= stepLocal_16) {
  if (var_1_15) {
   var_1_53 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  } else {
   var_1_53 = (var_1_40 - ((((0) < (var_1_75)) ? (0) : (var_1_75))));
  }
 } else {
  if (stepLocal_17 > var_1_25) {
   var_1_53 = ((var_1_35 + var_1_44) + var_1_7);
  } else {
   var_1_53 = (var_1_40 - var_1_75);
  }
 }
 if ((- var_1_25) >= var_1_41) {
  if (-10 <= var_1_8) {
   if (var_1_72 > var_1_54) {
    var_1_48 = ((((((var_1_27) > (var_1_49)) ? (var_1_27) : (var_1_49))) - var_1_50) + (var_1_51 - var_1_52));
   } else {
    var_1_48 = ((var_1_27 + var_1_49) - var_1_29);
   }
  } else {
   var_1_48 = var_1_28;
  }
 }
 if (var_1_79 || var_1_80) {
  var_1_91 = ((((var_1_35) < (var_1_85)) ? (var_1_35) : (var_1_85)));
 }
 var_1_95 = ((((var_1_8) > (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) ? (var_1_8) : (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))));
 if (var_1_18) {
  var_1_107 = var_1_91;
 }
 signed long int stepLocal_22 = var_1_41 - 2;
 unsigned char stepLocal_21 = var_1_43 > 16;
 unsigned long int stepLocal_20 = var_1_54;
 if (stepLocal_22 >= var_1_34) {
  if (stepLocal_20 > ((var_1_59 - var_1_60) - ((((64) < (var_1_34)) ? (64) : (var_1_34))))) {
   if ((var_1_29 - var_1_27) < (- var_1_67)) {
    var_1_58 = ((var_1_27 != var_1_67) && var_1_16);
   } else {
    var_1_58 = (! var_1_16);
   }
  } else {
   var_1_58 = var_1_18;
  }
 } else {
  if ((var_1_104 >= -256) && stepLocal_21) {
   var_1_58 = (var_1_15 || var_1_16);
  }
 }
 if (var_1_58) {
  var_1_110 = var_1_43;
 }
 if (var_1_6 < var_1_86) {
  if ((var_1_5 + var_1_110) >= var_1_35) {
   var_1_36 = (var_1_17 && var_1_14);
  }
 }
 if (var_1_36) {
  var_1_109 = var_1_16;
 }
 unsigned long int stepLocal_8 = var_1_86;
 signed long int stepLocal_7 = - (var_1_7 - var_1_8);
 if (stepLocal_8 > var_1_5) {
  if (stepLocal_7 > var_1_25) {
   var_1_31 = (var_1_18 || var_1_17);
  } else {
   var_1_31 = (var_1_109 || var_1_14);
  }
 } else {
  var_1_31 = var_1_18;
 }
 if (var_1_109) {
  var_1_62 = (3.2f - (var_1_52 + var_1_49));
 } else {
  var_1_62 = ((((var_1_30) < (var_1_50)) ? (var_1_30) : (var_1_50)));
 }
 signed long int stepLocal_31 = var_1_76;
 unsigned long int stepLocal_30 = ((((var_1_110) < (var_1_54)) ? (var_1_110) : (var_1_54))) * var_1_9;
 if ((var_1_88 - 5) == stepLocal_31) {
  var_1_87 = (! var_1_16);
 } else {
  if (var_1_47 < stepLocal_30) {
   var_1_87 = (var_1_15 || (var_1_17 && var_1_16));
  } else {
   var_1_87 = (var_1_18 && var_1_15);
  }
 }
 if (var_1_109) {
  var_1_106 = var_1_112;
 } else {
  var_1_106 = 1000000u;
 }
 unsigned char stepLocal_1 = var_1_79;
 if (var_1_109) {
  if (last_1_var_1_10 || stepLocal_1) {
   var_1_10 = var_1_14;
  } else {
   var_1_10 = ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)));
  }
 } else {
  var_1_10 = (var_1_16 || var_1_15);
 }
 if (var_1_10) {
  var_1_42 = (100 + (var_1_43 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))));
 }
 if (var_1_10) {
  if (! (var_1_29 >= (var_1_65 - var_1_49))) {
   var_1_92 = (var_1_88 + 32u);
  } else {
   var_1_92 = var_1_85;
  }
 } else {
  var_1_92 = ((((var_1_53) < (var_1_23)) ? (var_1_53) : (var_1_23)));
 }
 unsigned char stepLocal_9 = var_1_106 >= var_1_7;
 if (stepLocal_9 && (! var_1_17)) {
  var_1_33 = (var_1_8 + var_1_34);
 } else {
  var_1_33 = (var_1_7 - (((((10 + var_1_35)) > (var_1_34)) ? ((10 + var_1_35)) : (var_1_34))));
 }
 signed long int stepLocal_14 = (((var_1_43) < (var_1_23)) ? (var_1_43) : (var_1_23));
 if (var_1_10) {
  if (stepLocal_14 > var_1_5) {
   var_1_45 = (var_1_23 - var_1_8);
  } else {
   var_1_45 = ((((var_1_56) > (-5)) ? (var_1_56) : (-5)));
  }
 } else {
  if (var_1_27 > ((((var_1_29) > (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) ? (var_1_29) : (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))))) {
   var_1_45 = var_1_106;
  } else {
   var_1_45 = var_1_112;
  }
 }
 signed short int stepLocal_26 = var_1_74;
 if (((((var_1_92) < (var_1_47)) ? (var_1_92) : (var_1_47))) >= stepLocal_26) {
  var_1_77 = ((var_1_23 + var_1_8) - (var_1_7 + var_1_100));
 } else {
  if (! ((~ 256u) > (var_1_59 / var_1_7))) {
   var_1_77 = (var_1_107 + var_1_100);
  } else {
   var_1_77 = ((var_1_35 - var_1_78) + var_1_7);
  }
 }
 signed long int stepLocal_10 = -4;
 if (var_1_17) {
  if (stepLocal_10 != var_1_54) {
   var_1_39 = ((((var_1_42 + var_1_8) < 0 ) ? -(var_1_42 + var_1_8) : (var_1_42 + var_1_8)));
  } else {
   var_1_39 = ((var_1_40 - ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) - (var_1_41 - var_1_35));
  }
 } else {
  var_1_39 = (var_1_40 - var_1_42);
 }
 if (! (var_1_39 > (var_1_7 | var_1_61))) {
  if (last_1_var_1_32) {
   var_1_32 = (var_1_17 || var_1_14);
  } else {
   var_1_32 = (! (var_1_15 || var_1_16));
  }
 }
 unsigned char stepLocal_34 = var_1_85;
 unsigned char stepLocal_33 = var_1_58;
 if (var_1_32 || stepLocal_33) {
  if (var_1_100 < stepLocal_34) {
   var_1_93 = ((var_1_27 - (var_1_70 - var_1_71)) + var_1_52);
  }
 }
 if (var_1_8 <= (var_1_22 * (var_1_40 + var_1_41))) {
  if (((((var_1_22) < (var_1_1)) ? (var_1_22) : (var_1_1))) >= var_1_103) {
   var_1_55 = (! var_1_16);
  } else {
   var_1_55 = (var_1_31 || var_1_17);
  }
 } else {
  if (var_1_51 < (- var_1_52)) {
   var_1_55 = (var_1_31 && var_1_16);
  } else {
   var_1_55 = (((var_1_27 < var_1_93) && (var_1_80 && var_1_16)) || (! var_1_18));
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483646);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 49150);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 63);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 49151);
 assume_abort_if_not(var_1_59 <= 65535);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 16384);
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= 4611686.018427383000e+12F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854766000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854766000e+12F && var_1_68 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= 4611686.018427383000e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854766000e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= 2305843.009213691400e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_74 >= 16382);
 assume_abort_if_not(var_1_74 <= 32766);
 var_1_76 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_76 >= -2147483646);
 assume_abort_if_not(var_1_76 <= 2147483646);
 var_1_78 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 16383);
 var_1_84 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_84 >= 95);
 assume_abort_if_not(var_1_84 <= 127);
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 32);
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 127);
 assume_abort_if_not(var_1_88 <= 255);
 var_1_98 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_98 >= 31);
 assume_abort_if_not(var_1_98 <= 63);
 var_1_99 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_99 >= 0);
 assume_abort_if_not(var_1_99 <= 31);
 var_1_101 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_101 >= 0);
 assume_abort_if_not(var_1_101 <= 65534);
 var_1_116 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_116 >= 0);
 assume_abort_if_not(var_1_116 <= 127);
 var_1_117 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_117 >= 63);
 assume_abort_if_not(var_1_117 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_110 = var_1_110;
 last_1_var_1_112 = var_1_112;
 last_1_var_1_115 = var_1_115;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_102 + var_1_47) == (var_1_23 / ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_1 == ((unsigned char) (var_1_7 - var_1_8))) : 1) && (var_1_9 == ((unsigned short int) (((((var_1_8) < (var_1_56)) ? (var_1_8) : (var_1_56))) + var_1_7)))) && (var_1_109 ? ((last_1_var_1_10 || var_1_79) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)))))) : (var_1_10 == ((unsigned char) (var_1_16 || var_1_15))))) && ((var_1_79 && var_1_16) ? (var_1_18 ? (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - (last_1_var_1_19 + var_1_8))))) : 1) : 1)) && ((last_1_var_1_92 >= 0) ? (var_1_22 == ((unsigned long int) last_1_var_1_92)) : (var_1_22 == ((unsigned long int) ((((var_1_21) < (((((last_1_var_1_103) < (var_1_7)) ? (last_1_var_1_103) : (var_1_7))))) ? (var_1_21) : (((((last_1_var_1_103) < (var_1_7)) ? (last_1_var_1_103) : (var_1_7)))))))))) && ((var_1_7 == var_1_19) ? (((var_1_82 ^ ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) <= ((var_1_47 / var_1_7) / -1)) ? (var_1_23 == ((signed long int) (2 - var_1_7))) : ((var_1_16 || ((var_1_7 * 64) <= var_1_113)) ? (var_1_23 == ((signed long int) (var_1_113 - (var_1_25 - 4)))) : (((((((var_1_7 * last_1_var_1_23)) > ((var_1_6 * var_1_113))) ? ((var_1_7 * last_1_var_1_23)) : ((var_1_6 * var_1_113)))) >= ((((var_1_82) > (-25)) ? (var_1_82) : (-25)))) ? (var_1_23 == ((signed long int) var_1_19)) : (var_1_23 == ((signed long int) ((((var_1_82) > ((var_1_8 - var_1_25))) ? (var_1_82) : ((var_1_8 - var_1_25))))))))) : (var_1_23 == ((signed long int) var_1_22)))) && (((var_1_6 + var_1_5) >= (var_1_8 - var_1_7)) ? (var_1_26 == ((float) ((var_1_27 + ((((25.375f) > (9.75f)) ? (25.375f) : (9.75f)))) - var_1_28))) : (var_1_26 == ((float) ((((var_1_27) < ((((((var_1_28 - var_1_29)) < (var_1_30)) ? ((var_1_28 - var_1_29)) : (var_1_30))))) ? (var_1_27) : ((((((var_1_28 - var_1_29)) < (var_1_30)) ? ((var_1_28 - var_1_29)) : (var_1_30)))))))))) && ((var_1_86 > var_1_5) ? (((- (var_1_7 - var_1_8)) > var_1_25) ? (var_1_31 == ((unsigned char) (var_1_18 || var_1_17))) : (var_1_31 == ((unsigned char) (var_1_109 || var_1_14)))) : (var_1_31 == ((unsigned char) var_1_18)))) && ((! (var_1_39 > (var_1_7 | var_1_61))) ? (last_1_var_1_32 ? (var_1_32 == ((unsigned char) (var_1_17 || var_1_14))) : (var_1_32 == ((unsigned char) (! (var_1_15 || var_1_16))))) : 1)) && (((var_1_106 >= var_1_7) && (! var_1_17)) ? (var_1_33 == ((unsigned char) (var_1_8 + var_1_34))) : (var_1_33 == ((unsigned char) (var_1_7 - (((((10 + var_1_35)) > (var_1_34)) ? ((10 + var_1_35)) : (var_1_34)))))))) && ((var_1_6 < var_1_86) ? (((var_1_5 + var_1_110) >= var_1_35) ? (var_1_36 == ((unsigned char) (var_1_17 && var_1_14))) : 1) : 1)) && (var_1_17 ? ((-4 != var_1_54) ? (var_1_39 == ((unsigned short int) ((((var_1_42 + var_1_8) < 0 ) ? -(var_1_42 + var_1_8) : (var_1_42 + var_1_8))))) : (var_1_39 == ((unsigned short int) ((var_1_40 - ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) - (var_1_41 - var_1_35))))) : (var_1_39 == ((unsigned short int) (var_1_40 - var_1_42))))) && (var_1_10 ? (var_1_42 == ((unsigned char) (100 + (var_1_43 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) : 1)) && ((((- var_1_41) <= var_1_72) && var_1_96) ? ((var_1_23 >= var_1_35) ? (var_1_44 == ((unsigned char) var_1_8)) : (((~ var_1_21) > (var_1_7 / var_1_43)) ? (var_1_44 == ((unsigned char) (var_1_7 - var_1_35))) : 1)) : 1)) && (var_1_10 ? ((((((var_1_43) < (var_1_23)) ? (var_1_43) : (var_1_23))) > var_1_5) ? (var_1_45 == ((signed short int) (var_1_23 - var_1_8))) : (var_1_45 == ((signed short int) ((((var_1_56) > (-5)) ? (var_1_56) : (-5)))))) : ((var_1_27 > ((((var_1_29) > (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) ? (var_1_29) : (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))))) ? (var_1_45 == ((signed short int) var_1_106)) : (var_1_45 == ((signed short int) var_1_112))))) && ((((((var_1_41) > (100)) ? (var_1_41) : (100))) < -2) ? (var_1_47 == ((signed long int) ((var_1_25 - ((((last_1_var_1_75) > (last_1_var_1_82)) ? (last_1_var_1_75) : (last_1_var_1_82)))) - var_1_8))) : (var_1_47 == ((signed long int) last_1_var_1_82)))) && (((- var_1_25) >= var_1_41) ? ((-10 <= var_1_8) ? ((var_1_72 > var_1_54) ? (var_1_48 == ((float) ((((((var_1_27) > (var_1_49)) ? (var_1_27) : (var_1_49))) - var_1_50) + (var_1_51 - var_1_52)))) : (var_1_48 == ((float) ((var_1_27 + var_1_49) - var_1_29)))) : (var_1_48 == ((float) var_1_28))) : 1)) && ((((((last_1_var_1_53) < 0 ) ? -(last_1_var_1_53) : (last_1_var_1_53))) >= var_1_56) ? (var_1_15 ? (var_1_53 == ((unsigned short int) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : (var_1_53 == ((unsigned short int) (var_1_40 - ((((0) < (var_1_75)) ? (0) : (var_1_75))))))) : ((var_1_75 > var_1_25) ? (var_1_53 == ((unsigned short int) ((var_1_35 + var_1_44) + var_1_7))) : (var_1_53 == ((unsigned short int) (var_1_40 - var_1_75)))))) && (last_1_var_1_96 ? (((var_1_6 == ((((last_1_var_1_112) < 0 ) ? -(last_1_var_1_112) : (last_1_var_1_112)))) || last_1_var_1_32) ? (var_1_54 == ((unsigned long int) (var_1_21 + var_1_41))) : ((! var_1_15) ? (var_1_54 == ((unsigned long int) ((((var_1_7) > (last_1_var_1_110)) ? (var_1_7) : (last_1_var_1_110))))) : (var_1_54 == ((unsigned long int) ((((last_1_var_1_22) < ((var_1_7 + var_1_34))) ? (last_1_var_1_22) : ((var_1_7 + var_1_34)))))))) : 1)) && ((var_1_8 <= (var_1_22 * (var_1_40 + var_1_41))) ? ((((((var_1_22) < (var_1_1)) ? (var_1_22) : (var_1_1))) >= var_1_103) ? (var_1_55 == ((unsigned char) (! var_1_16))) : (var_1_55 == ((unsigned char) (var_1_31 || var_1_17)))) : ((var_1_51 < (- var_1_52)) ? (var_1_55 == ((unsigned char) (var_1_31 && var_1_16))) : (var_1_55 == ((unsigned char) (((var_1_27 < var_1_93) && (var_1_80 && var_1_16)) || (! var_1_18))))))) && ((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) < (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) * var_1_75)) ? (var_1_56 == ((unsigned short int) (var_1_22 + var_1_82))) : (var_1_56 == ((unsigned short int) ((((var_1_35) < (var_1_41)) ? (var_1_35) : (var_1_41))))))) && (((var_1_41 - 2) >= var_1_34) ? ((var_1_54 > ((var_1_59 - var_1_60) - ((((64) < (var_1_34)) ? (64) : (var_1_34))))) ? (((var_1_29 - var_1_27) < (- var_1_67)) ? (var_1_58 == ((unsigned char) ((var_1_27 != var_1_67) && var_1_16))) : (var_1_58 == ((unsigned char) (! var_1_16)))) : (var_1_58 == ((unsigned char) var_1_18))) : (((var_1_104 >= -256) && (var_1_43 > 16)) ? (var_1_58 == ((unsigned char) (var_1_15 || var_1_16))) : 1))) && ((var_1_40 <= (var_1_8 ^ last_1_var_1_110)) ? (var_1_61 == ((unsigned long int) (last_1_var_1_9 + (last_1_var_1_61 + ((((last_1_var_1_1) < (last_1_var_1_110)) ? (last_1_var_1_1) : (last_1_var_1_110))))))) : (last_1_var_1_79 ? (var_1_61 == ((unsigned long int) ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82))))) : (var_1_61 == ((unsigned long int) last_1_var_1_112))))) && (var_1_109 ? (var_1_62 == ((float) (3.2f - (var_1_52 + var_1_49)))) : (var_1_62 == ((float) ((((var_1_30) < (var_1_50)) ? (var_1_30) : (var_1_50))))))) && (var_1_15 ? ((var_1_22 <= var_1_61) ? (var_1_18 ? (var_1_63 == ((double) ((((var_1_29) > ((var_1_49 - var_1_50))) ? (var_1_29) : ((var_1_49 - var_1_50)))))) : (var_1_63 == ((double) ((((var_1_64 - var_1_52) < 0 ) ? -(var_1_64 - var_1_52) : (var_1_64 - var_1_52)))))) : (var_1_63 == ((double) (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_51)))) : ((var_1_54 > var_1_21) ? (var_1_63 == ((double) (((((var_1_27) > ((var_1_50 + var_1_52))) ? (var_1_27) : ((var_1_50 + var_1_52)))) - ((((((((var_1_49) > (var_1_51)) ? (var_1_49) : (var_1_51)))) > ((var_1_65 - var_1_66))) ? (((((var_1_49) > (var_1_51)) ? (var_1_49) : (var_1_51)))) : ((var_1_65 - var_1_66))))))) : (var_1_63 == ((double) (var_1_49 + ((((var_1_51) > (var_1_50)) ? (var_1_51) : (var_1_50))))))))) && (var_1_67 == ((double) ((((((var_1_65 - var_1_66)) > (var_1_68)) ? ((var_1_65 - var_1_66)) : (var_1_68))) - (var_1_69 - (var_1_70 - var_1_71)))))) && ((var_1_113 < (var_1_9 + var_1_82)) ? (var_1_72 == ((signed short int) ((var_1_74 - var_1_108) - (10 + (var_1_61 + var_1_7))))) : 1)) && ((var_1_8 < (((((last_1_var_1_61) > (last_1_var_1_47)) ? (last_1_var_1_61) : (last_1_var_1_47))) * last_1_var_1_102)) ? ((var_1_34 != last_1_var_1_100) ? ((var_1_68 > (- var_1_50)) ? (var_1_75 == ((signed long int) (100 - ((((last_1_var_1_72) > (2)) ? (last_1_var_1_72) : (2)))))) : 1) : (var_1_75 == ((signed long int) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) : ((var_1_25 != last_1_var_1_86) ? (var_1_75 == ((signed long int) (((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) - var_1_25))) : 1))) && ((((((var_1_92) < (var_1_47)) ? (var_1_92) : (var_1_47))) >= var_1_74) ? (var_1_77 == ((signed short int) ((var_1_23 + var_1_8) - (var_1_7 + var_1_100)))) : ((! ((~ 256u) > (var_1_59 / var_1_7))) ? (var_1_77 == ((signed short int) (var_1_107 + var_1_100))) : (var_1_77 == ((signed short int) ((var_1_35 - var_1_78) + var_1_7)))))) && (((var_1_63 + (- 100000.8f)) < ((((var_1_52) < (var_1_51)) ? (var_1_52) : (var_1_51)))) ? (var_1_79 == ((unsigned char) ((last_1_var_1_79 || var_1_18) && var_1_17))) : 1)) && ((((128.95 * 0.875) / 7.8) >= (var_1_68 - var_1_69)) ? (((var_1_43 * -256) == (var_1_22 * ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) ? (var_1_80 == ((unsigned char) (last_1_var_1_80 || var_1_14))) : (var_1_80 == ((unsigned char) ((! (var_1_86 > var_1_40)) && var_1_15)))) : 1)) && ((var_1_78 >= (last_1_var_1_75 * -2)) ? (var_1_82 == ((signed short int) ((((last_1_var_1_97) < 0 ) ? -(last_1_var_1_97) : (last_1_var_1_97))))) : ((last_1_var_1_86 >= var_1_6) ? (var_1_82 == ((signed short int) ((((var_1_40) > (var_1_78)) ? (var_1_40) : (var_1_78))))) : 1))) && ((var_1_26 < var_1_63) ? (var_1_83 == ((unsigned char) var_1_35)) : (((var_1_52 - ((((var_1_65) > (var_1_27)) ? (var_1_65) : (var_1_27)))) > var_1_29) ? (var_1_83 == ((unsigned char) (128 - ((var_1_84 - var_1_85) - var_1_35)))) : 1))) && (var_1_86 == ((unsigned long int) (var_1_78 + var_1_8)))) && (((var_1_88 - 5) == var_1_76) ? (var_1_87 == ((unsigned char) (! var_1_16))) : ((var_1_47 < (((((var_1_110) < (var_1_54)) ? (var_1_110) : (var_1_54))) * var_1_9)) ? (var_1_87 == ((unsigned char) (var_1_15 || (var_1_17 && var_1_16)))) : (var_1_87 == ((unsigned char) (var_1_18 && var_1_15)))))) && ((10 > var_1_112) ? (var_1_90 == ((float) (10.2f + var_1_52))) : 1)) && ((var_1_79 || var_1_80) ? (var_1_91 == ((signed char) ((((var_1_35) < (var_1_85)) ? (var_1_35) : (var_1_85))))) : 1)) && (var_1_10 ? ((! (var_1_29 >= (var_1_65 - var_1_49))) ? (var_1_92 == ((unsigned long int) (var_1_88 + 32u))) : (var_1_92 == ((unsigned long int) var_1_85))) : (var_1_92 == ((unsigned long int) ((((var_1_53) < (var_1_23)) ? (var_1_53) : (var_1_23))))))) && ((var_1_32 || var_1_58) ? ((var_1_100 < var_1_85) ? (var_1_93 == ((float) ((var_1_27 - (var_1_70 - var_1_71)) + var_1_52))) : 1) : 1)) && (var_1_95 == ((signed short int) ((((var_1_8) > (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) ? (var_1_8) : (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))))))) && ((((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))) < (var_1_67 + var_1_66)) ? (var_1_96 == ((unsigned char) var_1_15)) : (var_1_96 == ((unsigned char) (((- var_1_41) < var_1_25) || (var_1_14 && (! var_1_15))))))) && (var_1_97 == ((signed char) ((var_1_85 - (var_1_98 - var_1_99)) + var_1_35)))) && ((-5 < last_1_var_1_100) ? (var_1_100 == ((unsigned short int) var_1_101)) : (var_1_100 == ((unsigned short int) var_1_8)))) && (var_1_102 == ((unsigned long int) var_1_20))) && (var_1_103 == ((signed long int) var_1_61))) && (var_1_104 == ((signed long int) var_1_19))) && (var_1_17 ? (var_1_105 == ((signed char) var_1_98)) : (var_1_105 == ((signed char) -10)))) && (var_1_109 ? (var_1_106 == ((unsigned long int) var_1_112)) : (var_1_106 == ((unsigned long int) 1000000u)))) && (var_1_18 ? (var_1_107 == ((signed long int) var_1_91)) : 1)) && (var_1_80 ? (var_1_108 == ((unsigned char) var_1_84)) : (var_1_108 == ((unsigned char) var_1_43)))) && (var_1_36 ? (var_1_109 == ((unsigned char) var_1_16)) : 1)) && (var_1_58 ? (var_1_110 == ((unsigned long int) var_1_43)) : 1)) && (var_1_111 == ((unsigned char) var_1_99))) && (var_1_112 == ((signed long int) var_1_25))) && (var_1_113 == ((unsigned long int) var_1_78))) && (var_1_18 ? (var_1_114 == ((signed char) var_1_85)) : (var_1_114 == ((signed char) var_1_35)))) && ((var_1_82 <= (~ last_1_var_1_115)) ? (var_1_115 == ((unsigned char) ((((var_1_43) < ((((((var_1_84) > (var_1_116)) ? (var_1_84) : (var_1_116))) + (var_1_117 - var_1_99)))) ? (var_1_43) : ((((((var_1_84) > (var_1_116)) ? (var_1_84) : (var_1_116))) + (var_1_117 - var_1_99))))))) : 1)
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
