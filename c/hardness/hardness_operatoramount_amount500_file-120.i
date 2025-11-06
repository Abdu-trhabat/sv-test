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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
signed long int var_1_2 = -4;
signed long int var_1_4 = 5;
signed long int var_1_5 = 16;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 255.5;
double var_1_12 = 200.25;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 1;
unsigned short int var_1_16 = 23100;
unsigned short int var_1_17 = 5;
unsigned short int var_1_18 = 200;
unsigned short int var_1_19 = 50;
signed long int var_1_20 = -2;
signed short int var_1_21 = 128;
unsigned char var_1_22 = 50;
float var_1_23 = 1.8;
float var_1_24 = 63.5;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 32;
signed long int var_1_27 = -128;
double var_1_28 = 25.5;
double var_1_29 = 256.75;
double var_1_30 = 4.5;
double var_1_31 = 3.75;
signed long int var_1_32 = -1000;
signed short int var_1_33 = 500;
signed short int var_1_35 = 30149;
signed short int var_1_36 = 10;
unsigned short int var_1_37 = 4;
signed long int var_1_39 = -128;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
double var_1_42 = 10.875;
double var_1_43 = 1.5;
double var_1_44 = 500.2;
double var_1_45 = 1.75;
double var_1_46 = 16.5;
unsigned short int var_1_47 = 128;
unsigned short int var_1_48 = 63723;
unsigned short int var_1_51 = 44566;
double var_1_52 = 32.4;
double var_1_53 = 199.75;
double var_1_54 = 49.125;
signed short int var_1_55 = 2;
unsigned char var_1_56 = 200;
unsigned short int var_1_57 = 10;
signed long int var_1_58 = -128;
unsigned long int var_1_59 = 0;
unsigned long int var_1_60 = 3694568691;
unsigned char var_1_61 = 4;
unsigned char var_1_62 = 10;
unsigned char var_1_63 = 8;
unsigned char var_1_64 = 128;
unsigned char var_1_65 = 128;
unsigned short int var_1_66 = 256;
float var_1_67 = 7.125;
float var_1_68 = 256.125;
float var_1_69 = 0.0;
signed long int var_1_70 = 10;
unsigned char var_1_71 = 4;
unsigned char var_1_72 = 64;
unsigned char var_1_73 = 64;
signed long int var_1_74 = 128;
signed short int var_1_75 = 10;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 1;
double var_1_79 = 5.1;
double var_1_80 = 50.5;
double var_1_81 = 127.25;
signed long int var_1_82 = 100000000;
unsigned long int var_1_83 = 1674597216;
unsigned long int var_1_84 = 1500786032;
signed long int var_1_85 = 4;
signed long int var_1_86 = 1185299402;
signed char var_1_87 = -4;
signed char var_1_88 = -1;
unsigned char var_1_89 = 200;
unsigned short int var_1_90 = 64;
unsigned short int var_1_91 = 18248;
unsigned char var_1_92 = 1;
signed long int var_1_93 = -4;
unsigned long int var_1_94 = 32;
unsigned short int var_1_95 = 32;
unsigned char var_1_96 = 5;
signed long int var_1_97 = -4;
unsigned short int var_1_98 = 8;
float var_1_99 = 64.8;
double var_1_100 = 31.5;
float var_1_101 = 99999999999.5;
signed char var_1_102 = -32;
signed char var_1_103 = 0;
signed short int var_1_104 = 2;
unsigned short int var_1_105 = 5;
signed char var_1_106 = -2;
signed char var_1_107 = -2;
unsigned long int var_1_108 = 1;
unsigned short int var_1_109 = 16;
unsigned long int var_1_110 = 8;
unsigned short int var_1_111 = 100;
signed char var_1_112 = 0;
float var_1_113 = 15.6;
signed long int last_1_var_1_20 = -2;
signed long int last_1_var_1_27 = -128;
double last_1_var_1_31 = 3.75;
signed long int last_1_var_1_32 = -1000;
unsigned char last_1_var_1_40 = 1;
double last_1_var_1_42 = 10.875;
unsigned short int last_1_var_1_47 = 128;
signed long int last_1_var_1_58 = -128;
unsigned long int last_1_var_1_59 = 0;
signed long int last_1_var_1_74 = 128;
signed short int last_1_var_1_75 = 10;
double last_1_var_1_79 = 5.1;
signed long int last_1_var_1_82 = 100000000;
unsigned short int last_1_var_1_90 = 64;
unsigned char last_1_var_1_92 = 1;
unsigned short int last_1_var_1_95 = 32;
unsigned short int last_1_var_1_98 = 8;
unsigned short int last_1_var_1_105 = 5;
unsigned long int last_1_var_1_110 = 8;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_20 > (last_1_var_1_27 * var_1_35)) {
  var_1_75 = ((((((last_1_var_1_32 + var_1_56) - var_1_72)) < ((((((var_1_17 + var_1_62)) < (var_1_65)) ? ((var_1_17 + var_1_62)) : (var_1_65))))) ? (((last_1_var_1_32 + var_1_56) - var_1_72)) : ((((((var_1_17 + var_1_62)) < (var_1_65)) ? ((var_1_17 + var_1_62)) : (var_1_65))))));
 }
 unsigned char stepLocal_23 = last_1_var_1_79 >= (4.6 / var_1_53);
 signed long int stepLocal_22 = last_1_var_1_58;
 signed long int stepLocal_21 = var_1_2;
 if (stepLocal_21 > (last_1_var_1_74 | last_1_var_1_98)) {
  var_1_52 = ((((var_1_23) > ((var_1_46 - var_1_24))) ? (var_1_23) : ((var_1_46 - var_1_24))));
 } else {
  if (var_1_17 <= stepLocal_22) {
   if (stepLocal_23 && var_1_9) {
    var_1_52 = ((((var_1_45) < (var_1_24)) ? (var_1_45) : (var_1_24)));
   } else {
    if (last_1_var_1_40) {
     var_1_52 = (var_1_46 + (((((9.5) > (var_1_45)) ? (9.5) : (var_1_45))) + 1000.5));
    }
   }
  } else {
   var_1_52 = (var_1_43 + (var_1_54 + var_1_45));
  }
 }
 if (! ((var_1_83 * last_1_var_1_82) <= var_1_65)) {
  var_1_94 = var_1_62;
 }
 signed long int stepLocal_30 = var_1_65 + var_1_56;
 if (var_1_94 <= stepLocal_30) {
  if ((- var_1_53) < var_1_29) {
   var_1_96 = var_1_62;
  } else {
   if (var_1_6) {
    var_1_96 = 100;
   }
  }
 } else {
  var_1_96 = var_1_73;
 }
 unsigned short int stepLocal_25 = var_1_16;
 if (var_1_41) {
  if (stepLocal_25 >= last_1_var_1_75) {
   var_1_57 = (last_1_var_1_90 + (var_1_16 - var_1_17));
  }
 } else {
  var_1_57 = var_1_17;
 }
 var_1_95 = ((((var_1_57) > (var_1_25)) ? (var_1_57) : (var_1_25)));
 if ((- ((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17)))) >= (var_1_72 + (var_1_4 * last_1_var_1_105))) {
  if (! last_1_var_1_40) {
   if (var_1_17 < (((((last_1_var_1_58) > (var_1_48)) ? (last_1_var_1_58) : (var_1_48))) + var_1_25)) {
    var_1_90 = ((((var_1_51) > (0)) ? (var_1_51) : (0)));
   } else {
    var_1_90 = ((var_1_35 + var_1_91) - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))));
   }
  } else {
   var_1_90 = ((((((((((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) > (var_1_62)) ? (((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) : (var_1_62)))) < ((4 + ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)))))) ? (((((((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) > (var_1_62)) ? (((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) : (var_1_62)))) : ((4 + ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)))))));
  }
 } else {
  var_1_90 = var_1_17;
 }
 if (var_1_54 >= (- (- var_1_23))) {
  var_1_59 = var_1_90;
 } else {
  var_1_59 = (((((((((var_1_60 - last_1_var_1_59)) > (last_1_var_1_59)) ? ((var_1_60 - last_1_var_1_59)) : (last_1_var_1_59)))) < (var_1_48)) ? ((((((var_1_60 - last_1_var_1_59)) > (last_1_var_1_59)) ? ((var_1_60 - last_1_var_1_59)) : (last_1_var_1_59)))) : (var_1_48)));
 }
 if (var_1_46 >= last_1_var_1_42) {
  var_1_58 = ((var_1_16 + 64) - var_1_25);
 }
 unsigned char stepLocal_10 = var_1_7;
 if ((var_1_58 < var_1_16) && stepLocal_10) {
  if (var_1_6) {
   var_1_31 = ((var_1_29 + 10.6) - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))));
  } else {
   var_1_31 = (var_1_30 + 9999999.4);
  }
 }
 unsigned char stepLocal_7 = last_1_var_1_92;
 if (((var_1_12 + last_1_var_1_31) > var_1_11) && stepLocal_7) {
  var_1_27 = ((((last_1_var_1_95) < (var_1_17)) ? (last_1_var_1_95) : (var_1_17)));
 } else {
  if (var_1_7) {
   var_1_27 = ((((var_1_25) < (var_1_19)) ? (var_1_25) : (var_1_19)));
  } else {
   var_1_27 = (var_1_17 - var_1_16);
  }
 }
 unsigned char stepLocal_4 = var_1_11 > ((((var_1_12) > (last_1_var_1_42)) ? (var_1_12) : (last_1_var_1_42)));
 unsigned long int stepLocal_3 = last_1_var_1_110;
 signed long int stepLocal_2 = var_1_4;
 if (stepLocal_3 > var_1_2) {
  if (stepLocal_2 > var_1_5) {
   var_1_10 = var_1_7;
  } else {
   if ((var_1_11 - (8.90019211169373E18 - var_1_12)) < last_1_var_1_42) {
    var_1_10 = (var_1_6 || var_1_7);
   } else {
    if (stepLocal_4 && var_1_9) {
     var_1_10 = var_1_9;
    } else {
     var_1_10 = var_1_14;
    }
   }
  }
 }
 if (var_1_10) {
  var_1_40 = (var_1_7 && var_1_41);
 }
 if ((var_1_12 - (var_1_23 + var_1_24)) > (- var_1_31)) {
  var_1_22 = (128 - var_1_25);
 }
 var_1_26 = ((((var_1_18) > (var_1_25)) ? (var_1_18) : (var_1_25)));
 if (var_1_6) {
  var_1_77 = ((var_1_7 && var_1_41) && var_1_78);
 } else {
  var_1_77 = (var_1_7 && (var_1_41 && var_1_78));
 }
 if (var_1_6) {
  var_1_87 = (-2 + var_1_88);
 }
 var_1_89 = (var_1_73 + var_1_72);
 var_1_92 = var_1_41;
 var_1_97 = var_1_26;
 if (var_1_92) {
  var_1_98 = var_1_18;
 } else {
  var_1_98 = var_1_65;
 }
 var_1_100 = var_1_80;
 if (var_1_77) {
  var_1_101 = var_1_24;
 }
 var_1_102 = var_1_88;
 var_1_103 = var_1_88;
 if (var_1_14) {
  var_1_104 = var_1_73;
 } else {
  var_1_104 = var_1_17;
 }
 if (var_1_92) {
  var_1_105 = var_1_56;
 } else {
  var_1_105 = var_1_48;
 }
 var_1_106 = var_1_88;
 var_1_107 = var_1_88;
 var_1_109 = var_1_25;
 if (var_1_10) {
  var_1_111 = var_1_91;
 } else {
  var_1_111 = var_1_63;
 }
 var_1_112 = (((((-1) < (((((100) < 0 ) ? -(100) : (100))))) ? (-1) : (((((100) < 0 ) ? -(100) : (100)))))) - 50);
 signed long int stepLocal_24 = var_1_56 - var_1_25;
 if (stepLocal_24 > (var_1_94 * var_1_35)) {
  var_1_55 = (var_1_56 + ((((-50) > ((-128 + var_1_75))) ? (-50) : ((-128 + var_1_75)))));
 } else {
  var_1_55 = ((((var_1_56) > ((var_1_25 + var_1_75))) ? (var_1_56) : ((var_1_25 + var_1_75))));
 }
 if (var_1_78) {
  var_1_110 = var_1_96;
 } else {
  var_1_110 = var_1_51;
 }
 var_1_93 = (var_1_26 + ((((var_1_62) > (var_1_57)) ? (var_1_62) : (var_1_57))));
 signed long int stepLocal_27 = var_1_93 * var_1_35;
 if (stepLocal_27 >= (var_1_62 + var_1_90)) {
  var_1_71 = ((((var_1_65) < (((var_1_72 + var_1_73) - var_1_25))) ? (var_1_65) : (((var_1_72 + var_1_73) - var_1_25))));
 } else {
  if (var_1_24 >= (((((var_1_46) > (256.75f)) ? (var_1_46) : (256.75f))) / var_1_53)) {
   var_1_71 = (((((((((var_1_64) > (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_25)) < (var_1_72)) ? ((((((var_1_64) > (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_25)) : (var_1_72)));
  }
 }
 if (var_1_9 && var_1_10) {
  var_1_74 = (var_1_48 + var_1_18);
 } else {
  if (var_1_40) {
   var_1_74 = (((var_1_17 + 1) - var_1_59) + var_1_64);
  }
 }
 signed long int stepLocal_1 = var_1_58;
 signed long int stepLocal_0 = var_1_4 - var_1_5;
 if (((((1000000) < ((-10 % var_1_2))) ? (1000000) : ((-10 % var_1_2)))) > stepLocal_1) {
  if (stepLocal_0 > (var_1_2 + -64)) {
   var_1_1 = (var_1_6 || ((! var_1_7) || (var_1_10 && var_1_9)));
  }
 }
 if (var_1_1) {
  var_1_99 = var_1_43;
 }
 if (! var_1_6) {
  if (var_1_74 >= (var_1_4 - 2)) {
   if (var_1_40) {
    var_1_15 = ((var_1_16 - ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))) + var_1_19);
   } else {
    var_1_15 = var_1_16;
   }
  }
 } else {
  var_1_15 = (44514 - (var_1_16 - ((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17)))));
 }
 unsigned short int stepLocal_6 = var_1_98;
 unsigned char stepLocal_5 = var_1_40;
 if (stepLocal_5 || (var_1_14 && var_1_6)) {
  if (var_1_74 == stepLocal_6) {
   var_1_21 = ((((-1) < (var_1_18)) ? (-1) : (var_1_18)));
  } else {
   var_1_21 = -4;
  }
 }
 if ((- var_1_24) != (var_1_53 * ((((var_1_29) < (var_1_23)) ? (var_1_29) : (var_1_23))))) {
  var_1_61 = ((((var_1_25) > (((((var_1_62) < (var_1_63)) ? (var_1_62) : (var_1_63))))) ? (var_1_25) : (((((var_1_62) < (var_1_63)) ? (var_1_62) : (var_1_63))))));
 } else {
  if (var_1_27 <= (((((var_1_5 / var_1_56)) > (var_1_93)) ? ((var_1_5 / var_1_56)) : (var_1_93)))) {
   var_1_61 = (((((var_1_64) < (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_25);
  }
 }
 if (var_1_62 < (- var_1_5)) {
  var_1_66 = var_1_16;
 } else {
  if (var_1_77 && var_1_41) {
   var_1_66 = (var_1_48 - (var_1_89 + var_1_62));
  } else {
   var_1_66 = (var_1_51 - (var_1_35 - ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25)))));
  }
 }
 if (((- var_1_29) < var_1_24) && var_1_92) {
  var_1_67 = ((((var_1_54) > (((var_1_46 - var_1_29) + ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43)))))) ? (var_1_54) : (((var_1_46 - var_1_29) + ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43)))))));
 } else {
  if (var_1_7 || (var_1_62 > var_1_18)) {
   if (var_1_62 <= var_1_94) {
    var_1_67 = ((((var_1_24) > ((((((var_1_23) > (var_1_43)) ? (var_1_23) : (var_1_43))) - var_1_45))) ? (var_1_24) : ((((((var_1_23) > (var_1_43)) ? (var_1_23) : (var_1_43))) - var_1_45))));
   } else {
    var_1_67 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
   }
  } else {
   var_1_67 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
  }
 }
 unsigned char stepLocal_26 = var_1_41;
 if (stepLocal_26 || var_1_14) {
  if (var_1_9) {
   var_1_70 = ((((var_1_104 - var_1_98) < 0 ) ? -(var_1_104 - var_1_98) : (var_1_104 - var_1_98)));
  }
 } else {
  var_1_70 = (((5 + 100) + var_1_35) - var_1_19);
 }
 var_1_108 = var_1_111;
 if (var_1_1) {
  if ((((((var_1_86) > (-1)) ? (var_1_86) : (-1))) % var_1_56) > (25 * var_1_90)) {
   var_1_113 = var_1_30;
  }
 } else {
  var_1_113 = var_1_43;
 }
 unsigned long int stepLocal_29 = var_1_110;
 signed long int stepLocal_28 = var_1_27;
 if (stepLocal_28 <= (((((((var_1_17) < (var_1_59)) ? (var_1_17) : (var_1_59))) < 0 ) ? -((((var_1_17) < (var_1_59)) ? (var_1_17) : (var_1_59))) : ((((var_1_17) < (var_1_59)) ? (var_1_17) : (var_1_59)))))) {
  if (stepLocal_29 == ((var_1_83 + var_1_84) - var_1_74)) {
   var_1_82 = ((var_1_57 - ((((var_1_85) < (var_1_64)) ? (var_1_85) : (var_1_64)))) + var_1_18);
  }
 } else {
  var_1_82 = (((((var_1_74) > (var_1_51)) ? (var_1_74) : (var_1_51))) - (var_1_86 - var_1_35));
 }
 if (((((((((var_1_19) > (var_1_4)) ? (var_1_19) : (var_1_4)))) > ((var_1_97 - 1000000))) ? (((((var_1_19) > (var_1_4)) ? (var_1_19) : (var_1_4)))) : ((var_1_97 - 1000000)))) < var_1_93) {
  var_1_20 = var_1_17;
 }
 signed long int stepLocal_9 = var_1_82;
 unsigned long int stepLocal_8 = var_1_94;
 if (stepLocal_8 >= var_1_17) {
  if (var_1_17 > stepLocal_9) {
   var_1_28 = (((((var_1_24) > (var_1_23)) ? (var_1_24) : (var_1_23))) - (var_1_29 + var_1_30));
  }
 }
 signed long int stepLocal_16 = var_1_5;
 if (var_1_89 < stepLocal_16) {
  var_1_39 = ((((var_1_17) < (var_1_71)) ? (var_1_17) : (var_1_71)));
 } else {
  var_1_39 = (var_1_18 - var_1_89);
 }
 if (var_1_82 != (var_1_64 ^ (var_1_20 / var_1_35))) {
  if (var_1_48 == var_1_97) {
   var_1_68 = var_1_44;
  } else {
   var_1_68 = (var_1_43 + ((var_1_69 - var_1_45) - var_1_30));
  }
 } else {
  var_1_68 = (var_1_30 + var_1_69);
 }
 if (var_1_77) {
  if (var_1_11 > var_1_43) {
   if ((var_1_30 + (var_1_28 * var_1_44)) >= ((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99)))) {
    var_1_79 = var_1_29;
   } else {
    var_1_79 = (((var_1_46 - var_1_45) + var_1_54) + ((var_1_80 - var_1_81) + var_1_44));
   }
  } else {
   var_1_79 = (var_1_69 + ((var_1_45 - var_1_46) + 50.25));
  }
 } else {
  if (var_1_46 <= var_1_52) {
   var_1_79 = ((var_1_80 + var_1_81) + (var_1_46 + var_1_54));
  } else {
   var_1_79 = ((((var_1_69) > (var_1_44)) ? (var_1_69) : (var_1_44)));
  }
 }
 signed long int stepLocal_15 = var_1_39 + var_1_20;
 signed long int stepLocal_14 = (var_1_25 << var_1_27) * var_1_17;
 unsigned short int stepLocal_13 = var_1_98;
 if (stepLocal_14 >= var_1_95) {
  if (stepLocal_15 < 50) {
   var_1_33 = ((((var_1_39) > ((var_1_25 - (var_1_35 - var_1_27)))) ? (var_1_39) : ((var_1_25 - (var_1_35 - var_1_27)))));
  }
 } else {
  if (var_1_18 <= stepLocal_13) {
   var_1_33 = (((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) > (var_1_18)) ? (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : (var_1_18))) - var_1_17);
  } else {
   var_1_33 = (var_1_36 - var_1_27);
  }
 }
 if ((- var_1_79) == var_1_52) {
  var_1_37 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 }
 signed long int stepLocal_12 = (((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18));
 signed long int stepLocal_11 = var_1_4 % var_1_2;
 if (var_1_33 == stepLocal_11) {
  if (var_1_23 >= (var_1_24 + (- var_1_52))) {
   if (var_1_2 > stepLocal_12) {
    var_1_32 = (var_1_25 + var_1_55);
   } else {
    var_1_32 = ((((((var_1_33) < (var_1_17)) ? (var_1_33) : (var_1_17))) + var_1_98) - var_1_25);
   }
  }
 } else {
  if (var_1_14) {
   var_1_32 = var_1_25;
  } else {
   var_1_32 = var_1_17;
  }
 }
 signed long int stepLocal_20 = var_1_27;
 signed long int stepLocal_19 = var_1_27 * var_1_5;
 unsigned char stepLocal_18 = (var_1_45 + var_1_44) <= (63.3 + var_1_29);
 signed long int stepLocal_17 = -4;
 if (stepLocal_19 > var_1_20) {
  if ((var_1_90 + var_1_20) == stepLocal_17) {
   var_1_47 = (var_1_48 - ((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18))));
  }
 } else {
  if ((var_1_100 != (var_1_31 + var_1_79)) && stepLocal_18) {
   var_1_47 = (var_1_48 - var_1_35);
  } else {
   if (var_1_46 < var_1_44) {
    if (var_1_10) {
     if ((((((var_1_27) < (var_1_17)) ? (var_1_27) : (var_1_17))) + (last_1_var_1_47 * var_1_32)) != stepLocal_20) {
      var_1_47 = (((((var_1_48) > (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_48) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) - ((((var_1_35) > (var_1_17)) ? (var_1_35) : (var_1_17))));
     }
    }
   }
  }
 }
 if (var_1_35 > (var_1_5 + var_1_47)) {
  var_1_42 = (var_1_29 + var_1_30);
 } else {
  if (var_1_35 < ((var_1_16 << var_1_18) & var_1_98)) {
   if (var_1_97 >= var_1_25) {
    var_1_42 = ((((((var_1_30 + var_1_29)) < ((var_1_43 + 63.75))) ? ((var_1_30 + var_1_29)) : ((var_1_43 + 63.75)))) - var_1_23);
   }
  } else {
   var_1_42 = (var_1_30 + ((31.4 + var_1_44) + (var_1_45 - var_1_46)));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 assume_abort_if_not(var_1_2 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427388000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427388000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427388000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= 16383);
 assume_abort_if_not(var_1_35 <= 32766);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= -1);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -115292.1504606845700e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 1152921.504606845700e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65534);
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -922337.2036854776000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
 assume_abort_if_not(var_1_53 != 0.0F);
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= -230584.3009213691400e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 127);
 assume_abort_if_not(var_1_56 <= 255);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 2147483647);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 254);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 254);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 127);
 assume_abort_if_not(var_1_64 <= 254);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 127);
 assume_abort_if_not(var_1_65 <= 254);
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= 2305843.009213691400e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427383000e+12F && var_1_69 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 63);
 assume_abort_if_not(var_1_72 <= 127);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 64);
 assume_abort_if_not(var_1_73 <= 127);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 1);
 assume_abort_if_not(var_1_78 <= 1);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691400e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691400e+12F && var_1_81 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_83 >= 1073741823);
 assume_abort_if_not(var_1_83 <= 2147483648);
 var_1_84 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_84 >= 1073741824);
 assume_abort_if_not(var_1_84 <= 2147483647);
 var_1_85 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 1073741823);
 var_1_86 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_86 >= 1073741823);
 assume_abort_if_not(var_1_86 <= 2147483646);
 var_1_88 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_88 >= -63);
 assume_abort_if_not(var_1_88 <= 63);
 var_1_91 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_91 >= 16384);
 assume_abort_if_not(var_1_91 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_105 = var_1_105;
 last_1_var_1_110 = var_1_110;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((1000000) < ((-10 % var_1_2))) ? (1000000) : ((-10 % var_1_2)))) > var_1_58) ? (((var_1_4 - var_1_5) > (var_1_2 + -64)) ? (var_1_1 == ((unsigned char) (var_1_6 || ((! var_1_7) || (var_1_10 && var_1_9))))) : 1) : 1) && ((last_1_var_1_110 > var_1_2) ? ((var_1_4 > var_1_5) ? (var_1_10 == ((unsigned char) var_1_7)) : (((var_1_11 - (8.90019211169373E18 - var_1_12)) < last_1_var_1_42) ? (var_1_10 == ((unsigned char) (var_1_6 || var_1_7))) : (((var_1_11 > ((((var_1_12) > (last_1_var_1_42)) ? (var_1_12) : (last_1_var_1_42)))) && var_1_9) ? (var_1_10 == ((unsigned char) var_1_9)) : (var_1_10 == ((unsigned char) var_1_14))))) : 1)) && ((! var_1_6) ? ((var_1_74 >= (var_1_4 - 2)) ? (var_1_40 ? (var_1_15 == ((unsigned short int) ((var_1_16 - ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))) + var_1_19))) : (var_1_15 == ((unsigned short int) var_1_16))) : 1) : (var_1_15 == ((unsigned short int) (44514 - (var_1_16 - ((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))))))))) && ((((((((((var_1_19) > (var_1_4)) ? (var_1_19) : (var_1_4)))) > ((var_1_97 - 1000000))) ? (((((var_1_19) > (var_1_4)) ? (var_1_19) : (var_1_4)))) : ((var_1_97 - 1000000)))) < var_1_93) ? (var_1_20 == ((signed long int) var_1_17)) : 1)) && ((var_1_40 || (var_1_14 && var_1_6)) ? ((var_1_74 == var_1_98) ? (var_1_21 == ((signed short int) ((((-1) < (var_1_18)) ? (-1) : (var_1_18))))) : (var_1_21 == ((signed short int) -4))) : 1)) && (((var_1_12 - (var_1_23 + var_1_24)) > (- var_1_31)) ? (var_1_22 == ((unsigned char) (128 - var_1_25))) : 1)) && (var_1_26 == ((unsigned short int) ((((var_1_18) > (var_1_25)) ? (var_1_18) : (var_1_25)))))) && ((((var_1_12 + last_1_var_1_31) > var_1_11) && last_1_var_1_92) ? (var_1_27 == ((signed long int) ((((last_1_var_1_95) < (var_1_17)) ? (last_1_var_1_95) : (var_1_17))))) : (var_1_7 ? (var_1_27 == ((signed long int) ((((var_1_25) < (var_1_19)) ? (var_1_25) : (var_1_19))))) : (var_1_27 == ((signed long int) (var_1_17 - var_1_16)))))) && ((var_1_94 >= var_1_17) ? ((var_1_17 > var_1_82) ? (var_1_28 == ((double) (((((var_1_24) > (var_1_23)) ? (var_1_24) : (var_1_23))) - (var_1_29 + var_1_30)))) : 1) : 1)) && (((var_1_58 < var_1_16) && var_1_7) ? (var_1_6 ? (var_1_31 == ((double) ((var_1_29 + 10.6) - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) : (var_1_31 == ((double) (var_1_30 + 9999999.4)))) : 1)) && ((var_1_33 == (var_1_4 % var_1_2)) ? ((var_1_23 >= (var_1_24 + (- var_1_52))) ? ((var_1_2 > ((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)))) ? (var_1_32 == ((signed long int) (var_1_25 + var_1_55))) : (var_1_32 == ((signed long int) ((((((var_1_33) < (var_1_17)) ? (var_1_33) : (var_1_17))) + var_1_98) - var_1_25)))) : 1) : (var_1_14 ? (var_1_32 == ((signed long int) var_1_25)) : (var_1_32 == ((signed long int) var_1_17))))) && ((((var_1_25 << var_1_27) * var_1_17) >= var_1_95) ? (((var_1_39 + var_1_20) < 50) ? (var_1_33 == ((signed short int) ((((var_1_39) > ((var_1_25 - (var_1_35 - var_1_27)))) ? (var_1_39) : ((var_1_25 - (var_1_35 - var_1_27))))))) : 1) : ((var_1_18 <= var_1_98) ? (var_1_33 == ((signed short int) (((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) > (var_1_18)) ? (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : (var_1_18))) - var_1_17))) : (var_1_33 == ((signed short int) (var_1_36 - var_1_27)))))) && (((- var_1_79) == var_1_52) ? (var_1_37 == ((unsigned short int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) : 1)) && ((var_1_89 < var_1_5) ? (var_1_39 == ((signed long int) ((((var_1_17) < (var_1_71)) ? (var_1_17) : (var_1_71))))) : (var_1_39 == ((signed long int) (var_1_18 - var_1_89))))) && (var_1_10 ? (var_1_40 == ((unsigned char) (var_1_7 && var_1_41))) : 1)) && ((var_1_35 > (var_1_5 + var_1_47)) ? (var_1_42 == ((double) (var_1_29 + var_1_30))) : ((var_1_35 < ((var_1_16 << var_1_18) & var_1_98)) ? ((var_1_97 >= var_1_25) ? (var_1_42 == ((double) ((((((var_1_30 + var_1_29)) < ((var_1_43 + 63.75))) ? ((var_1_30 + var_1_29)) : ((var_1_43 + 63.75)))) - var_1_23))) : 1) : (var_1_42 == ((double) (var_1_30 + ((31.4 + var_1_44) + (var_1_45 - var_1_46)))))))) && (((var_1_27 * var_1_5) > var_1_20) ? (((var_1_90 + var_1_20) == -4) ? (var_1_47 == ((unsigned short int) (var_1_48 - ((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18)))))) : 1) : (((var_1_100 != (var_1_31 + var_1_79)) && ((var_1_45 + var_1_44) <= (63.3 + var_1_29))) ? (var_1_47 == ((unsigned short int) (var_1_48 - var_1_35))) : ((var_1_46 < var_1_44) ? (var_1_10 ? (((((((var_1_27) < (var_1_17)) ? (var_1_27) : (var_1_17))) + (last_1_var_1_47 * var_1_32)) != var_1_27) ? (var_1_47 == ((unsigned short int) (((((var_1_48) > (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_48) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) - ((((var_1_35) > (var_1_17)) ? (var_1_35) : (var_1_17)))))) : 1) : 1) : 1)))) && ((var_1_2 > (last_1_var_1_74 | last_1_var_1_98)) ? (var_1_52 == ((double) ((((var_1_23) > ((var_1_46 - var_1_24))) ? (var_1_23) : ((var_1_46 - var_1_24)))))) : ((var_1_17 <= last_1_var_1_58) ? (((last_1_var_1_79 >= (4.6 / var_1_53)) && var_1_9) ? (var_1_52 == ((double) ((((var_1_45) < (var_1_24)) ? (var_1_45) : (var_1_24))))) : (last_1_var_1_40 ? (var_1_52 == ((double) (var_1_46 + (((((9.5) > (var_1_45)) ? (9.5) : (var_1_45))) + 1000.5)))) : 1)) : (var_1_52 == ((double) (var_1_43 + (var_1_54 + var_1_45))))))) && (((var_1_56 - var_1_25) > (var_1_94 * var_1_35)) ? (var_1_55 == ((signed short int) (var_1_56 + ((((-50) > ((-128 + var_1_75))) ? (-50) : ((-128 + var_1_75))))))) : (var_1_55 == ((signed short int) ((((var_1_56) > ((var_1_25 + var_1_75))) ? (var_1_56) : ((var_1_25 + var_1_75)))))))) && (var_1_41 ? ((var_1_16 >= last_1_var_1_75) ? (var_1_57 == ((unsigned short int) (last_1_var_1_90 + (var_1_16 - var_1_17)))) : 1) : (var_1_57 == ((unsigned short int) var_1_17)))) && ((var_1_46 >= last_1_var_1_42) ? (var_1_58 == ((signed long int) ((var_1_16 + 64) - var_1_25))) : 1)) && ((var_1_54 >= (- (- var_1_23))) ? (var_1_59 == ((unsigned long int) var_1_90)) : (var_1_59 == ((unsigned long int) (((((((((var_1_60 - last_1_var_1_59)) > (last_1_var_1_59)) ? ((var_1_60 - last_1_var_1_59)) : (last_1_var_1_59)))) < (var_1_48)) ? ((((((var_1_60 - last_1_var_1_59)) > (last_1_var_1_59)) ? ((var_1_60 - last_1_var_1_59)) : (last_1_var_1_59)))) : (var_1_48))))))) && (((- var_1_24) != (var_1_53 * ((((var_1_29) < (var_1_23)) ? (var_1_29) : (var_1_23))))) ? (var_1_61 == ((unsigned char) ((((var_1_25) > (((((var_1_62) < (var_1_63)) ? (var_1_62) : (var_1_63))))) ? (var_1_25) : (((((var_1_62) < (var_1_63)) ? (var_1_62) : (var_1_63)))))))) : ((var_1_27 <= (((((var_1_5 / var_1_56)) > (var_1_93)) ? ((var_1_5 / var_1_56)) : (var_1_93)))) ? (var_1_61 == ((unsigned char) (((((var_1_64) < (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_25))) : 1))) && ((var_1_62 < (- var_1_5)) ? (var_1_66 == ((unsigned short int) var_1_16)) : ((var_1_77 && var_1_41) ? (var_1_66 == ((unsigned short int) (var_1_48 - (var_1_89 + var_1_62)))) : (var_1_66 == ((unsigned short int) (var_1_51 - (var_1_35 - ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25)))))))))) && ((((- var_1_29) < var_1_24) && var_1_92) ? (var_1_67 == ((float) ((((var_1_54) > (((var_1_46 - var_1_29) + ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43)))))) ? (var_1_54) : (((var_1_46 - var_1_29) + ((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))))))))) : ((var_1_7 || (var_1_62 > var_1_18)) ? ((var_1_62 <= var_1_94) ? (var_1_67 == ((float) ((((var_1_24) > ((((((var_1_23) > (var_1_43)) ? (var_1_23) : (var_1_43))) - var_1_45))) ? (var_1_24) : ((((((var_1_23) > (var_1_43)) ? (var_1_23) : (var_1_43))) - var_1_45)))))) : (var_1_67 == ((float) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))) : (var_1_67 == ((float) ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))))) && ((var_1_82 != (var_1_64 ^ (var_1_20 / var_1_35))) ? ((var_1_48 == var_1_97) ? (var_1_68 == ((float) var_1_44)) : (var_1_68 == ((float) (var_1_43 + ((var_1_69 - var_1_45) - var_1_30))))) : (var_1_68 == ((float) (var_1_30 + var_1_69))))) && ((var_1_41 || var_1_14) ? (var_1_9 ? (var_1_70 == ((signed long int) ((((var_1_104 - var_1_98) < 0 ) ? -(var_1_104 - var_1_98) : (var_1_104 - var_1_98))))) : 1) : (var_1_70 == ((signed long int) (((5 + 100) + var_1_35) - var_1_19))))) && (((var_1_93 * var_1_35) >= (var_1_62 + var_1_90)) ? (var_1_71 == ((unsigned char) ((((var_1_65) < (((var_1_72 + var_1_73) - var_1_25))) ? (var_1_65) : (((var_1_72 + var_1_73) - var_1_25)))))) : ((var_1_24 >= (((((var_1_46) > (256.75f)) ? (var_1_46) : (256.75f))) / var_1_53)) ? (var_1_71 == ((unsigned char) (((((((((var_1_64) > (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_25)) < (var_1_72)) ? ((((((var_1_64) > (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_25)) : (var_1_72))))) : 1))) && ((var_1_9 && var_1_10) ? (var_1_74 == ((signed long int) (var_1_48 + var_1_18))) : (var_1_40 ? (var_1_74 == ((signed long int) (((var_1_17 + 1) - var_1_59) + var_1_64))) : 1))) && ((last_1_var_1_20 > (last_1_var_1_27 * var_1_35)) ? (var_1_75 == ((signed short int) ((((((last_1_var_1_32 + var_1_56) - var_1_72)) < ((((((var_1_17 + var_1_62)) < (var_1_65)) ? ((var_1_17 + var_1_62)) : (var_1_65))))) ? (((last_1_var_1_32 + var_1_56) - var_1_72)) : ((((((var_1_17 + var_1_62)) < (var_1_65)) ? ((var_1_17 + var_1_62)) : (var_1_65)))))))) : 1)) && (var_1_6 ? (var_1_77 == ((unsigned char) ((var_1_7 && var_1_41) && var_1_78))) : (var_1_77 == ((unsigned char) (var_1_7 && (var_1_41 && var_1_78)))))) && (var_1_77 ? ((var_1_11 > var_1_43) ? (((var_1_30 + (var_1_28 * var_1_44)) >= ((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99)))) ? (var_1_79 == ((double) var_1_29)) : (var_1_79 == ((double) (((var_1_46 - var_1_45) + var_1_54) + ((var_1_80 - var_1_81) + var_1_44))))) : (var_1_79 == ((double) (var_1_69 + ((var_1_45 - var_1_46) + 50.25))))) : ((var_1_46 <= var_1_52) ? (var_1_79 == ((double) ((var_1_80 + var_1_81) + (var_1_46 + var_1_54)))) : (var_1_79 == ((double) ((((var_1_69) > (var_1_44)) ? (var_1_69) : (var_1_44)))))))) && ((var_1_27 <= (((((((var_1_17) < (var_1_59)) ? (var_1_17) : (var_1_59))) < 0 ) ? -((((var_1_17) < (var_1_59)) ? (var_1_17) : (var_1_59))) : ((((var_1_17) < (var_1_59)) ? (var_1_17) : (var_1_59)))))) ? ((var_1_110 == ((var_1_83 + var_1_84) - var_1_74)) ? (var_1_82 == ((signed long int) ((var_1_57 - ((((var_1_85) < (var_1_64)) ? (var_1_85) : (var_1_64)))) + var_1_18))) : 1) : (var_1_82 == ((signed long int) (((((var_1_74) > (var_1_51)) ? (var_1_74) : (var_1_51))) - (var_1_86 - var_1_35)))))) && (var_1_6 ? (var_1_87 == ((signed char) (-2 + var_1_88))) : 1)) && (var_1_89 == ((unsigned char) (var_1_73 + var_1_72)))) && (((- ((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17)))) >= (var_1_72 + (var_1_4 * last_1_var_1_105))) ? ((! last_1_var_1_40) ? ((var_1_17 < (((((last_1_var_1_58) > (var_1_48)) ? (last_1_var_1_58) : (var_1_48))) + var_1_25)) ? (var_1_90 == ((unsigned short int) ((((var_1_51) > (0)) ? (var_1_51) : (0))))) : (var_1_90 == ((unsigned short int) ((var_1_35 + var_1_91) - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))) : (var_1_90 == ((unsigned short int) ((((((((((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) > (var_1_62)) ? (((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) : (var_1_62)))) < ((4 + ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)))))) ? (((((((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) > (var_1_62)) ? (((((var_1_17) > (last_1_var_1_82)) ? (var_1_17) : (last_1_var_1_82)))) : (var_1_62)))) : ((4 + ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)))))))))) : (var_1_90 == ((unsigned short int) var_1_17)))) && (var_1_92 == ((unsigned char) var_1_41))) && (var_1_93 == ((signed long int) (var_1_26 + ((((var_1_62) > (var_1_57)) ? (var_1_62) : (var_1_57))))))) && ((! ((var_1_83 * last_1_var_1_82) <= var_1_65)) ? (var_1_94 == ((unsigned long int) var_1_62)) : 1)) && (var_1_95 == ((unsigned short int) ((((var_1_57) > (var_1_25)) ? (var_1_57) : (var_1_25)))))) && ((var_1_94 <= (var_1_65 + var_1_56)) ? (((- var_1_53) < var_1_29) ? (var_1_96 == ((unsigned char) var_1_62)) : (var_1_6 ? (var_1_96 == ((unsigned char) 100)) : 1)) : (var_1_96 == ((unsigned char) var_1_73)))) && (var_1_97 == ((signed long int) var_1_26))) && (var_1_92 ? (var_1_98 == ((unsigned short int) var_1_18)) : (var_1_98 == ((unsigned short int) var_1_65)))) && (var_1_1 ? (var_1_99 == ((float) var_1_43)) : 1)) && (var_1_100 == ((double) var_1_80))) && (var_1_77 ? (var_1_101 == ((float) var_1_24)) : 1)) && (var_1_102 == ((signed char) var_1_88))) && (var_1_103 == ((signed char) var_1_88))) && (var_1_14 ? (var_1_104 == ((signed short int) var_1_73)) : (var_1_104 == ((signed short int) var_1_17)))) && (var_1_92 ? (var_1_105 == ((unsigned short int) var_1_56)) : (var_1_105 == ((unsigned short int) var_1_48)))) && (var_1_106 == ((signed char) var_1_88))) && (var_1_107 == ((signed char) var_1_88))) && (var_1_108 == ((unsigned long int) var_1_111))) && (var_1_109 == ((unsigned short int) var_1_25))) && (var_1_78 ? (var_1_110 == ((unsigned long int) var_1_96)) : (var_1_110 == ((unsigned long int) var_1_51)))) && (var_1_10 ? (var_1_111 == ((unsigned short int) var_1_91)) : (var_1_111 == ((unsigned short int) var_1_63)))) && (var_1_112 == ((signed char) (((((-1) < (((((100) < 0 ) ? -(100) : (100))))) ? (-1) : (((((100) < 0 ) ? -(100) : (100)))))) - 50)))) && (var_1_1 ? (((((((var_1_86) > (-1)) ? (var_1_86) : (-1))) % var_1_56) > (25 * var_1_90)) ? (var_1_113 == ((float) var_1_30)) : 1) : (var_1_113 == ((float) var_1_43)))
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
