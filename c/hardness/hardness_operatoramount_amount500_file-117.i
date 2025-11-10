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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned long int var_1_4 = 1584235566;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1;
unsigned long int var_1_8 = 2;
unsigned char var_1_9 = 100;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 0;
double var_1_12 = 49.25;
double var_1_13 = 3.25;
double var_1_14 = 128.5;
double var_1_15 = 16.2;
unsigned short int var_1_16 = 32;
unsigned short int var_1_17 = 61396;
unsigned short int var_1_18 = 24402;
unsigned long int var_1_19 = 0;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 128;
unsigned short int var_1_24 = 2;
unsigned long int var_1_25 = 3987994744;
signed short int var_1_26 = 0;
unsigned long int var_1_27 = 5;
signed long int var_1_28 = 4;
unsigned long int var_1_29 = 3326692060;
signed short int var_1_30 = -64;
unsigned long int var_1_31 = 4;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed char var_1_37 = 1;
signed char var_1_38 = 32;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 0;
double var_1_41 = 0.25;
unsigned long int var_1_42 = 0;
unsigned long int var_1_43 = 2;
unsigned long int var_1_44 = 10;
unsigned long int var_1_45 = 1822689474;
signed long int var_1_46 = 10;
double var_1_47 = 4.2;
double var_1_48 = 15.95;
double var_1_49 = 99.7;
double var_1_50 = 16.4;
unsigned short int var_1_51 = 64;
signed long int var_1_52 = 32;
double var_1_53 = 7.375;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;
unsigned long int var_1_58 = 4;
float var_1_59 = 100.25;
float var_1_60 = 0.32;
double var_1_61 = 0.75;
double var_1_62 = -0.393;
unsigned long int var_1_64 = 4;
signed long int var_1_65 = 4;
signed short int var_1_66 = -256;
signed long int var_1_67 = -64;
signed short int var_1_68 = 16;
signed short int var_1_69 = 19086;
signed long int var_1_70 = 10000000;
signed long int var_1_71 = 1217162079;
unsigned char var_1_72 = 0;
unsigned long int var_1_73 = 256;
unsigned long int var_1_75 = 3360138313;
double var_1_76 = 8.75;
double var_1_77 = 8.6;
unsigned char var_1_78 = 0;
float var_1_79 = 3.75;
float var_1_80 = 8.4;
float var_1_81 = 1.75;
float var_1_82 = 63.6;
float var_1_83 = 0.5;
float var_1_84 = 16.6;
float var_1_85 = 4.75;
unsigned long int var_1_86 = 10;
unsigned char var_1_87 = 50;
unsigned char var_1_88 = 200;
unsigned char var_1_89 = 100;
unsigned char var_1_91 = 1;
float var_1_92 = 127.4;
unsigned long int var_1_93 = 50;
unsigned long int var_1_94 = 10000;
float var_1_95 = 100.8;
unsigned short int var_1_96 = 10;
signed long int var_1_97 = -8;
signed long int var_1_98 = -32;
unsigned char var_1_99 = 8;
signed short int var_1_100 = -64;
unsigned short int var_1_101 = 200;
signed short int var_1_102 = 2;
double var_1_103 = 128.5;
signed short int var_1_104 = -200;
unsigned char var_1_105 = 16;
signed short int var_1_106 = 5;
unsigned char var_1_107 = 0;
unsigned char var_1_108 = 1;
unsigned short int var_1_109 = 10;
signed char var_1_110 = -8;
float var_1_111 = 3.625;
float var_1_112 = 4.8;
signed short int var_1_113 = -10;
unsigned char last_1_var_1_40 = 0;
signed long int last_1_var_1_52 = 32;
unsigned char last_1_var_1_57 = 0;
unsigned char last_1_var_1_105 = 16;
unsigned short int last_1_var_1_109 = 10;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_8 = var_1_5;
 if (stepLocal_8 <= (last_1_var_1_105 >> var_1_28)) {
  var_1_27 = ((var_1_29 - var_1_5) - last_1_var_1_52);
 } else {
  var_1_27 = var_1_17;
 }
 if (last_1_var_1_57) {
  var_1_108 = var_1_34;
 }
 if (last_1_var_1_40) {
  var_1_93 = var_1_18;
 } else {
  var_1_93 = var_1_94;
 }
 unsigned long int stepLocal_1 = 16u;
 unsigned long int stepLocal_0 = 4u;
 if (var_1_93 < stepLocal_1) {
  if (var_1_93 >= stepLocal_0) {
   var_1_1 = ((((((var_1_4 - var_1_5) + var_1_6)) > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (((var_1_4 - var_1_5) + var_1_6)) : (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))));
  } else {
   var_1_1 = ((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8)));
  }
 } else {
  var_1_1 = var_1_7;
 }
 unsigned long int stepLocal_3 = 64u;
 if (var_1_6 >= stepLocal_3) {
  var_1_12 = var_1_13;
 } else {
  var_1_12 = (((((var_1_14) > (64.5)) ? (var_1_14) : (64.5))) - var_1_15);
 }
 var_1_19 = (var_1_17 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))));
 signed long int stepLocal_9 = ((((var_1_10 - var_1_17)) < (-8)) ? ((var_1_10 - var_1_17)) : (-8));
 if (var_1_28 < stepLocal_9) {
  var_1_30 = (((((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) > ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28)))))) ? ((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) : ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28)))))));
 }
 var_1_32 = ((var_1_33 || var_1_34) || var_1_35);
 var_1_36 = (! var_1_33);
 signed long int stepLocal_14 = var_1_28;
 signed char stepLocal_13 = var_1_38;
 if (stepLocal_13 >= (var_1_19 & var_1_17)) {
  if (stepLocal_14 < var_1_19) {
   var_1_39 = var_1_28;
  }
 } else {
  if ((var_1_14 - 256.375) > var_1_13) {
   var_1_39 = (((((var_1_11 + (var_1_21 + var_1_28))) > ((var_1_22 + var_1_10))) ? ((var_1_11 + (var_1_21 + var_1_28))) : ((var_1_22 + var_1_10))));
  }
 }
 var_1_41 = ((((var_1_14) > (-0.25)) ? (var_1_14) : (-0.25)));
 if (10000.8 >= ((((var_1_14) > ((var_1_15 / 0.75))) ? (var_1_14) : ((var_1_15 / 0.75))))) {
  var_1_43 = (var_1_17 + var_1_5);
 } else {
  var_1_43 = var_1_17;
 }
 var_1_46 = (var_1_5 - var_1_10);
 unsigned char stepLocal_17 = var_1_35;
 if (stepLocal_17 || var_1_34) {
  var_1_53 = var_1_13;
 }
 var_1_70 = ((var_1_71 - var_1_21) - (1431246933 - (var_1_10 + var_1_17)));
 var_1_79 = (((var_1_80 + var_1_81) + var_1_82) - (((((var_1_83 + var_1_84)) > ((4.4f + 256.5f))) ? ((var_1_83 + var_1_84)) : ((4.4f + 256.5f)))));
 signed long int stepLocal_25 = 100000;
 if (stepLocal_25 <= var_1_17) {
  var_1_86 = ((var_1_10 + 1u) + ((((var_1_46) < (0u)) ? (var_1_46) : (0u))));
 } else {
  if (var_1_81 < (8.5f - var_1_82)) {
   var_1_86 = var_1_70;
  }
 }
 var_1_91 = var_1_56;
 var_1_92 = var_1_13;
 if (var_1_36) {
  var_1_95 = var_1_77;
 }
 var_1_96 = var_1_11;
 var_1_97 = var_1_98;
 var_1_99 = var_1_10;
 var_1_100 = -256;
 var_1_101 = var_1_10;
 var_1_103 = var_1_13;
 var_1_104 = var_1_21;
 var_1_105 = var_1_23;
 var_1_106 = var_1_23;
 if (var_1_91) {
  var_1_109 = var_1_69;
 } else {
  var_1_109 = last_1_var_1_109;
 }
 var_1_112 = (((((((((var_1_82) < (var_1_84)) ? (var_1_82) : (var_1_84))) - var_1_81)) > (var_1_14)) ? ((((((var_1_82) < (var_1_84)) ? (var_1_82) : (var_1_84))) - var_1_81)) : (var_1_14)));
 if (10 <= (var_1_93 / var_1_17)) {
  if (var_1_108) {
   var_1_57 = var_1_34;
  } else {
   var_1_57 = var_1_33;
  }
 } else {
  var_1_57 = (var_1_56 && var_1_55);
 }
 if (var_1_108 || (var_1_100 > var_1_25)) {
  if (var_1_108) {
   var_1_78 = (var_1_55 && var_1_56);
  }
 } else {
  if (var_1_17 <= var_1_93) {
   var_1_78 = (! 0);
  } else {
   if (((var_1_103 * var_1_50) * (var_1_41 / var_1_59)) > var_1_49) {
    var_1_78 = (var_1_56 && var_1_34);
   }
  }
 }
 signed long int stepLocal_5 = var_1_46;
 if (stepLocal_5 == ((var_1_17 - var_1_43) >> (var_1_21 - var_1_22))) {
  var_1_20 = (var_1_23 - var_1_10);
 } else {
  var_1_20 = var_1_23;
 }
 signed long int stepLocal_12 = 10;
 unsigned long int stepLocal_11 = ~ var_1_43;
 unsigned short int stepLocal_10 = var_1_17;
 if (var_1_22 <= stepLocal_12) {
  if (var_1_28 >= stepLocal_11) {
   var_1_31 = (var_1_22 + ((var_1_21 + var_1_10) + var_1_23));
  }
 } else {
  if (var_1_25 >= stepLocal_10) {
   var_1_31 = (var_1_18 + ((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))));
  } else {
   var_1_31 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  }
 }
 if ((var_1_103 / ((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60)))) <= (var_1_13 / var_1_61)) {
  var_1_58 = (var_1_29 - var_1_5);
 } else {
  var_1_58 = ((var_1_29 - var_1_93) - var_1_5);
 }
 var_1_66 = (16 - var_1_96);
 unsigned long int stepLocal_24 = var_1_31;
 if (stepLocal_24 <= (var_1_11 - var_1_69)) {
  if (! (var_1_1 < var_1_10)) {
   var_1_76 = (((((((((15.3) > (var_1_50)) ? (15.3) : (var_1_50))) + var_1_77)) > (var_1_49)) ? ((((((15.3) > (var_1_50)) ? (15.3) : (var_1_50))) + var_1_77)) : (var_1_49)));
  }
 }
 if (var_1_55) {
  var_1_102 = var_1_106;
 } else {
  var_1_102 = var_1_10;
 }
 if (var_1_57) {
  var_1_111 = var_1_14;
 }
 if (var_1_78) {
  var_1_40 = ((var_1_11 <= (var_1_23 - var_1_10)) && var_1_35);
 }
 unsigned long int stepLocal_7 = var_1_25 - var_1_10;
 unsigned char stepLocal_6 = var_1_108;
 if (((var_1_22 * var_1_10) <= var_1_18) || stepLocal_6) {
  var_1_24 = (var_1_17 - var_1_21);
 } else {
  if (var_1_58 == stepLocal_7) {
   var_1_24 = ((((10) > ((var_1_17 - var_1_18))) ? (10) : ((var_1_17 - var_1_18))));
  } else {
   var_1_24 = ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)));
  }
 }
 if (var_1_8 == var_1_31) {
  var_1_26 = (((((var_1_11 - (var_1_10 + var_1_23))) > (((((-16) < (5)) ? (-16) : (5))))) ? ((var_1_11 - (var_1_10 + var_1_23))) : (((((-16) < (5)) ? (-16) : (5))))));
 } else {
  var_1_26 = ((((((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) < (var_1_21)) ? (((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) : (var_1_21)));
 }
 if (var_1_40) {
  var_1_110 = var_1_38;
 } else {
  var_1_110 = 10;
 }
 if ((var_1_29 <= var_1_6) || (var_1_27 < var_1_26)) {
  var_1_44 = (((((var_1_22 + ((((var_1_70) < (var_1_86)) ? (var_1_70) : (var_1_86))))) < ((var_1_10 + var_1_21))) ? ((var_1_22 + ((((var_1_70) < (var_1_86)) ? (var_1_70) : (var_1_86))))) : ((var_1_10 + var_1_21))));
 } else {
  if (var_1_35) {
   var_1_44 = (var_1_29 - (((((var_1_70) < (var_1_86)) ? (var_1_70) : (var_1_86))) + ((((var_1_28) < (var_1_5)) ? (var_1_28) : (var_1_5)))));
  } else {
   var_1_44 = ((var_1_4 + var_1_45) - ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) > (var_1_26)) ? (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (var_1_26))));
  }
 }
 unsigned long int stepLocal_21 = 4 - ((((var_1_44) < (256)) ? (var_1_44) : (256)));
 if (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) < stepLocal_21) {
  var_1_72 = (var_1_78 || (! var_1_33));
 }
 if (var_1_72) {
  var_1_107 = var_1_22;
 }
 unsigned long int stepLocal_2 = var_1_7;
 if (stepLocal_2 != var_1_44) {
  var_1_9 = (((((var_1_10) < (0)) ? (var_1_10) : (0))) + var_1_11);
 }
 unsigned char stepLocal_16 = var_1_48 < (var_1_14 - var_1_15);
 if (stepLocal_16 && (var_1_86 > var_1_107)) {
  var_1_52 = ((((var_1_28) > (var_1_43)) ? (var_1_28) : (var_1_43)));
 }
 unsigned long int stepLocal_15 = var_1_52 / ((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17)));
 if (var_1_13 >= ((((var_1_41) < (var_1_14)) ? (var_1_41) : (var_1_14)))) {
  if (var_1_58 < stepLocal_15) {
   var_1_42 = (var_1_29 - var_1_10);
  }
 }
 unsigned short int stepLocal_20 = var_1_24;
 signed long int stepLocal_19 = var_1_96 & -4;
 if (((var_1_23 - 100000) * (var_1_65 - var_1_52)) >= stepLocal_19) {
  if (stepLocal_20 <= var_1_102) {
   var_1_64 = (((((var_1_29 - var_1_45)) > (var_1_28)) ? ((var_1_29 - var_1_45)) : (var_1_28)));
  } else {
   var_1_64 = ((((((var_1_4) > (var_1_45)) ? (var_1_4) : (var_1_45))) - var_1_22) + var_1_17);
  }
 } else {
  var_1_64 = var_1_96;
 }
 if (! (var_1_23 >= (var_1_42 / var_1_21))) {
  var_1_85 = (var_1_80 + ((31.5f + var_1_81) - var_1_82));
 } else {
  var_1_85 = ((((var_1_15) > (((var_1_81 + var_1_80) + var_1_49))) ? (var_1_15) : (((var_1_81 + var_1_80) + var_1_49))));
 }
 if (25u <= (var_1_42 + var_1_94)) {
  var_1_113 = ((((var_1_38) < (var_1_30)) ? (var_1_38) : (var_1_30)));
 }
 if (var_1_19 != ((var_1_10 - var_1_18) % var_1_17)) {
  if (var_1_45 >= (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) + 2u)) {
   var_1_47 = var_1_13;
  } else {
   var_1_47 = (var_1_48 + ((((256.2) < (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))))) ? (256.2) : (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))))));
  }
 }
 if (((var_1_14 - var_1_15) > (var_1_13 * var_1_76)) && ((100 << var_1_52) == var_1_4)) {
  var_1_51 = (var_1_17 - 16);
 } else {
  var_1_51 = (var_1_52 + (var_1_64 + var_1_11));
 }
 unsigned long int stepLocal_18 = 8u;
 if (-0.625f >= (var_1_60 + (var_1_47 + var_1_61))) {
  if ((var_1_29 - 2u) >= stepLocal_18) {
   var_1_62 = (var_1_14 - var_1_15);
  } else {
   var_1_62 = var_1_48;
  }
 }
 var_1_67 = ((((var_1_43) > (var_1_51)) ? (var_1_43) : (var_1_51)));
 if (var_1_49 <= (3.6 * var_1_62)) {
  var_1_68 = ((((var_1_17) > (var_1_28)) ? (var_1_17) : (var_1_28)));
 } else {
  if (((((var_1_6) < (var_1_23)) ? (var_1_6) : (var_1_23))) >= (- ((((var_1_97) > (var_1_4)) ? (var_1_97) : (var_1_4))))) {
   if (! ((var_1_27 < var_1_97) && var_1_56)) {
    if ((var_1_76 * var_1_49) < (((((var_1_59 * var_1_62)) > (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14))))) ? ((var_1_59 * var_1_62)) : (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14))))))) {
     var_1_68 = (var_1_44 + (var_1_27 + (var_1_23 + var_1_22)));
    } else {
     var_1_68 = (var_1_10 - (var_1_69 - 5));
    }
   }
  } else {
   if (var_1_21 < var_1_27) {
    var_1_68 = (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))) + var_1_28);
   }
  }
 }
 if (((var_1_64 ^ var_1_67) > var_1_52) && (! (var_1_21 <= var_1_58))) {
  if (var_1_33 || (var_1_101 >= var_1_58)) {
   if (var_1_93 >= var_1_67) {
    var_1_54 = (var_1_55 && var_1_56);
   } else {
    var_1_54 = ((var_1_4 >= var_1_67) && var_1_35);
   }
  } else {
   var_1_54 = (! var_1_35);
  }
 } else {
  if (var_1_72) {
   var_1_54 = var_1_56;
  }
 }
 signed long int stepLocal_4 = 4;
 if (stepLocal_4 > var_1_4) {
  if (var_1_54) {
   var_1_16 = (((var_1_17 - 10) - var_1_1) - var_1_10);
  } else {
   var_1_16 = var_1_17;
  }
 } else {
  var_1_16 = (((((var_1_17 - (var_1_18 - 1))) > (var_1_1)) ? ((var_1_17 - (var_1_18 - 1))) : (var_1_1)));
 }
 unsigned long int stepLocal_23 = ((((var_1_8 * var_1_31)) > ((~ var_1_1))) ? ((var_1_8 * var_1_31)) : ((~ var_1_1)));
 unsigned short int stepLocal_22 = var_1_51;
 if (stepLocal_22 != var_1_16) {
  if (stepLocal_23 > var_1_31) {
   var_1_73 = ((((((var_1_29 - var_1_5)) > (var_1_75)) ? ((var_1_29 - var_1_5)) : (var_1_75))) - (16u + (var_1_109 + var_1_19)));
  }
 } else {
  var_1_73 = (((((var_1_11) < (var_1_19)) ? (var_1_11) : (var_1_19))) + var_1_18);
 }
 unsigned long int stepLocal_32 = var_1_19 + var_1_1;
 signed long int stepLocal_31 = var_1_65;
 signed long int stepLocal_30 = var_1_67;
 signed short int stepLocal_29 = var_1_26;
 unsigned long int stepLocal_28 = var_1_73;
 unsigned long int stepLocal_27 = var_1_45;
 unsigned long int stepLocal_26 = var_1_6 - var_1_106;
 if (var_1_86 < stepLocal_27) {
  if (stepLocal_29 != var_1_5) {
   if (stepLocal_31 > var_1_10) {
    var_1_87 = (((((var_1_23) > (var_1_88)) ? (var_1_23) : (var_1_88))) - (var_1_22 + var_1_21));
   } else {
    var_1_87 = (16 + (var_1_89 - var_1_22));
   }
  } else {
   if ((var_1_70 / var_1_69) <= stepLocal_30) {
    if ((var_1_67 & var_1_21) <= stepLocal_26) {
     var_1_87 = ((((var_1_89) < (64)) ? (var_1_89) : (64)));
    } else {
     var_1_87 = var_1_23;
    }
   } else {
    if (64 <= stepLocal_32) {
     if (var_1_62 > 25.4) {
      var_1_87 = (((((var_1_23 - ((((var_1_10) < (var_1_89)) ? (var_1_10) : (var_1_89))))) > (var_1_28)) ? ((var_1_23 - ((((var_1_10) < (var_1_89)) ? (var_1_10) : (var_1_89))))) : (var_1_28)));
     } else {
      var_1_87 = (((((var_1_88) < (var_1_23)) ? (var_1_88) : (var_1_23))) - 50);
     }
    } else {
     var_1_87 = (((((((var_1_23) < (var_1_11)) ? (var_1_23) : (var_1_11))) < 0 ) ? -((((var_1_23) < (var_1_11)) ? (var_1_23) : (var_1_11))) : ((((var_1_23) < (var_1_11)) ? (var_1_23) : (var_1_11)))));
    }
   }
  }
 } else {
  if (var_1_59 < (var_1_112 * (var_1_81 * var_1_14))) {
   if (stepLocal_28 < var_1_93) {
    var_1_87 = ((200 - (var_1_28 + var_1_21)) - (25 + var_1_22));
   } else {
    if (var_1_33) {
     var_1_87 = (var_1_11 + var_1_21);
    }
   }
  } else {
   var_1_87 = var_1_23;
  }
 }
 if (var_1_13 > var_1_103) {
  var_1_37 = (((((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) < 0 ) ? -((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) : ((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38))))));
 } else {
  if ((var_1_13 / 0.5) >= ((((var_1_14 + var_1_15) < 0 ) ? -(var_1_14 + var_1_15) : (var_1_14 + var_1_15)))) {
   if ((var_1_31 * var_1_73) > var_1_6) {
    var_1_37 = var_1_22;
   } else {
    var_1_37 = (var_1_28 + (var_1_22 + var_1_21));
   }
  } else {
   var_1_37 = var_1_21;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 57342);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 16383);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 15);
 assume_abort_if_not(var_1_21 <= 30);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 14);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967295);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 7);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 3221225470);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 0);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741824);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 assume_abort_if_not(var_1_59 != 0.0F);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 assume_abort_if_not(var_1_60 != 0.0F);
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
 assume_abort_if_not(var_1_61 != 0.0F);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= -1);
 assume_abort_if_not(var_1_65 <= 2147483647);
 var_1_69 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_69 >= 16383);
 assume_abort_if_not(var_1_69 <= 32766);
 var_1_71 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_71 >= 1073741822);
 assume_abort_if_not(var_1_71 <= 2147483646);
 var_1_75 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_75 >= 2147483647);
 assume_abort_if_not(var_1_75 <= 4294967294);
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= -461168.6018427383000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427383000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691400e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691400e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427383000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427383000e+12F && var_1_83 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 127);
 assume_abort_if_not(var_1_88 <= 254);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 63);
 assume_abort_if_not(var_1_89 <= 127);
 var_1_94 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_94 >= 0);
 assume_abort_if_not(var_1_94 <= 4294967294);
 var_1_98 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_98 >= -2147483647);
 assume_abort_if_not(var_1_98 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_40 = var_1_40;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_105 = var_1_105;
 last_1_var_1_109 = var_1_109;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_93 < 16u) ? ((var_1_93 >= 4u) ? (var_1_1 == ((unsigned long int) ((((((var_1_4 - var_1_5) + var_1_6)) > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (((var_1_4 - var_1_5) + var_1_6)) : (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))))))) : (var_1_1 == ((unsigned long int) ((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8)))))) : (var_1_1 == ((unsigned long int) var_1_7))) && ((var_1_7 != var_1_44) ? (var_1_9 == ((unsigned char) (((((var_1_10) < (0)) ? (var_1_10) : (0))) + var_1_11))) : 1)) && ((var_1_6 >= 64u) ? (var_1_12 == ((double) var_1_13)) : (var_1_12 == ((double) (((((var_1_14) > (64.5)) ? (var_1_14) : (64.5))) - var_1_15))))) && ((4 > var_1_4) ? (var_1_54 ? (var_1_16 == ((unsigned short int) (((var_1_17 - 10) - var_1_1) - var_1_10))) : (var_1_16 == ((unsigned short int) var_1_17))) : (var_1_16 == ((unsigned short int) (((((var_1_17 - (var_1_18 - 1))) > (var_1_1)) ? ((var_1_17 - (var_1_18 - 1))) : (var_1_1))))))) && (var_1_19 == ((unsigned long int) (var_1_17 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) && ((var_1_46 == ((var_1_17 - var_1_43) >> (var_1_21 - var_1_22))) ? (var_1_20 == ((unsigned char) (var_1_23 - var_1_10))) : (var_1_20 == ((unsigned char) var_1_23)))) && ((((var_1_22 * var_1_10) <= var_1_18) || var_1_108) ? (var_1_24 == ((unsigned short int) (var_1_17 - var_1_21))) : ((var_1_58 == (var_1_25 - var_1_10)) ? (var_1_24 == ((unsigned short int) ((((10) > ((var_1_17 - var_1_18))) ? (10) : ((var_1_17 - var_1_18)))))) : (var_1_24 == ((unsigned short int) ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)))))))) && ((var_1_8 == var_1_31) ? (var_1_26 == ((signed short int) (((((var_1_11 - (var_1_10 + var_1_23))) > (((((-16) < (5)) ? (-16) : (5))))) ? ((var_1_11 - (var_1_10 + var_1_23))) : (((((-16) < (5)) ? (-16) : (5)))))))) : (var_1_26 == ((signed short int) ((((((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) < (var_1_21)) ? (((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) : (var_1_21))))))) && ((var_1_5 <= (last_1_var_1_105 >> var_1_28)) ? (var_1_27 == ((unsigned long int) ((var_1_29 - var_1_5) - last_1_var_1_52))) : (var_1_27 == ((unsigned long int) var_1_17)))) && ((var_1_28 < (((((var_1_10 - var_1_17)) < (-8)) ? ((var_1_10 - var_1_17)) : (-8)))) ? (var_1_30 == ((signed short int) (((((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) > ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28)))))) ? ((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) : ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28))))))))) : 1)) && ((var_1_22 <= 10) ? ((var_1_28 >= (~ var_1_43)) ? (var_1_31 == ((unsigned long int) (var_1_22 + ((var_1_21 + var_1_10) + var_1_23)))) : 1) : ((var_1_25 >= var_1_17) ? (var_1_31 == ((unsigned long int) (var_1_18 + ((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86)))))) : (var_1_31 == ((unsigned long int) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))))) && (var_1_32 == ((unsigned char) ((var_1_33 || var_1_34) || var_1_35)))) && (var_1_36 == ((unsigned char) (! var_1_33)))) && ((var_1_13 > var_1_103) ? (var_1_37 == ((signed char) (((((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) < 0 ) ? -((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) : ((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))))))) : (((var_1_13 / 0.5) >= ((((var_1_14 + var_1_15) < 0 ) ? -(var_1_14 + var_1_15) : (var_1_14 + var_1_15)))) ? (((var_1_31 * var_1_73) > var_1_6) ? (var_1_37 == ((signed char) var_1_22)) : (var_1_37 == ((signed char) (var_1_28 + (var_1_22 + var_1_21))))) : (var_1_37 == ((signed char) var_1_21))))) && ((var_1_38 >= (var_1_19 & var_1_17)) ? ((var_1_28 < var_1_19) ? (var_1_39 == ((unsigned char) var_1_28)) : 1) : (((var_1_14 - 256.375) > var_1_13) ? (var_1_39 == ((unsigned char) (((((var_1_11 + (var_1_21 + var_1_28))) > ((var_1_22 + var_1_10))) ? ((var_1_11 + (var_1_21 + var_1_28))) : ((var_1_22 + var_1_10)))))) : 1))) && (var_1_78 ? (var_1_40 == ((unsigned char) ((var_1_11 <= (var_1_23 - var_1_10)) && var_1_35))) : 1)) && (var_1_41 == ((double) ((((var_1_14) > (-0.25)) ? (var_1_14) : (-0.25)))))) && ((var_1_13 >= ((((var_1_41) < (var_1_14)) ? (var_1_41) : (var_1_14)))) ? ((var_1_58 < (var_1_52 / ((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17))))) ? (var_1_42 == ((unsigned long int) (var_1_29 - var_1_10))) : 1) : 1)) && ((10000.8 >= ((((var_1_14) > ((var_1_15 / 0.75))) ? (var_1_14) : ((var_1_15 / 0.75))))) ? (var_1_43 == ((unsigned long int) (var_1_17 + var_1_5))) : (var_1_43 == ((unsigned long int) var_1_17)))) && (((var_1_29 <= var_1_6) || (var_1_27 < var_1_26)) ? (var_1_44 == ((unsigned long int) (((((var_1_22 + ((((var_1_70) < (var_1_86)) ? (var_1_70) : (var_1_86))))) < ((var_1_10 + var_1_21))) ? ((var_1_22 + ((((var_1_70) < (var_1_86)) ? (var_1_70) : (var_1_86))))) : ((var_1_10 + var_1_21)))))) : (var_1_35 ? (var_1_44 == ((unsigned long int) (var_1_29 - (((((var_1_70) < (var_1_86)) ? (var_1_70) : (var_1_86))) + ((((var_1_28) < (var_1_5)) ? (var_1_28) : (var_1_5))))))) : (var_1_44 == ((unsigned long int) ((var_1_4 + var_1_45) - ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) > (var_1_26)) ? (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (var_1_26))))))))) && (var_1_46 == ((signed long int) (var_1_5 - var_1_10)))) && ((var_1_19 != ((var_1_10 - var_1_18) % var_1_17)) ? ((var_1_45 >= (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) + 2u)) ? (var_1_47 == ((double) var_1_13)) : (var_1_47 == ((double) (var_1_48 + ((((256.2) < (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))))) ? (256.2) : (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))))))))) : 1)) && ((((var_1_14 - var_1_15) > (var_1_13 * var_1_76)) && ((100 << var_1_52) == var_1_4)) ? (var_1_51 == ((unsigned short int) (var_1_17 - 16))) : (var_1_51 == ((unsigned short int) (var_1_52 + (var_1_64 + var_1_11)))))) && (((var_1_48 < (var_1_14 - var_1_15)) && (var_1_86 > var_1_107)) ? (var_1_52 == ((signed long int) ((((var_1_28) > (var_1_43)) ? (var_1_28) : (var_1_43))))) : 1)) && ((var_1_35 || var_1_34) ? (var_1_53 == ((double) var_1_13)) : 1)) && ((((var_1_64 ^ var_1_67) > var_1_52) && (! (var_1_21 <= var_1_58))) ? ((var_1_33 || (var_1_101 >= var_1_58)) ? ((var_1_93 >= var_1_67) ? (var_1_54 == ((unsigned char) (var_1_55 && var_1_56))) : (var_1_54 == ((unsigned char) ((var_1_4 >= var_1_67) && var_1_35)))) : (var_1_54 == ((unsigned char) (! var_1_35)))) : (var_1_72 ? (var_1_54 == ((unsigned char) var_1_56)) : 1))) && ((10 <= (var_1_93 / var_1_17)) ? (var_1_108 ? (var_1_57 == ((unsigned char) var_1_34)) : (var_1_57 == ((unsigned char) var_1_33))) : (var_1_57 == ((unsigned char) (var_1_56 && var_1_55))))) && (((var_1_103 / ((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60)))) <= (var_1_13 / var_1_61)) ? (var_1_58 == ((unsigned long int) (var_1_29 - var_1_5))) : (var_1_58 == ((unsigned long int) ((var_1_29 - var_1_93) - var_1_5))))) && ((-0.625f >= (var_1_60 + (var_1_47 + var_1_61))) ? (((var_1_29 - 2u) >= 8u) ? (var_1_62 == ((double) (var_1_14 - var_1_15))) : (var_1_62 == ((double) var_1_48))) : 1)) && ((((var_1_23 - 100000) * (var_1_65 - var_1_52)) >= (var_1_96 & -4)) ? ((var_1_24 <= var_1_102) ? (var_1_64 == ((unsigned long int) (((((var_1_29 - var_1_45)) > (var_1_28)) ? ((var_1_29 - var_1_45)) : (var_1_28))))) : (var_1_64 == ((unsigned long int) ((((((var_1_4) > (var_1_45)) ? (var_1_4) : (var_1_45))) - var_1_22) + var_1_17)))) : (var_1_64 == ((unsigned long int) var_1_96)))) && (var_1_66 == ((signed short int) (16 - var_1_96)))) && (var_1_67 == ((signed long int) ((((var_1_43) > (var_1_51)) ? (var_1_43) : (var_1_51)))))) && ((var_1_49 <= (3.6 * var_1_62)) ? (var_1_68 == ((signed short int) ((((var_1_17) > (var_1_28)) ? (var_1_17) : (var_1_28))))) : ((((((var_1_6) < (var_1_23)) ? (var_1_6) : (var_1_23))) >= (- ((((var_1_97) > (var_1_4)) ? (var_1_97) : (var_1_4))))) ? ((! ((var_1_27 < var_1_97) && var_1_56)) ? (((var_1_76 * var_1_49) < (((((var_1_59 * var_1_62)) > (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14))))) ? ((var_1_59 * var_1_62)) : (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14))))))) ? (var_1_68 == ((signed short int) (var_1_44 + (var_1_27 + (var_1_23 + var_1_22))))) : (var_1_68 == ((signed short int) (var_1_10 - (var_1_69 - 5))))) : 1) : ((var_1_21 < var_1_27) ? (var_1_68 == ((signed short int) (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))) + var_1_28))) : 1)))) && (var_1_70 == ((signed long int) ((var_1_71 - var_1_21) - (1431246933 - (var_1_10 + var_1_17)))))) && ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) < (4 - ((((var_1_44) < (256)) ? (var_1_44) : (256))))) ? (var_1_72 == ((unsigned char) (var_1_78 || (! var_1_33)))) : 1)) && ((var_1_51 != var_1_16) ? (((((((var_1_8 * var_1_31)) > ((~ var_1_1))) ? ((var_1_8 * var_1_31)) : ((~ var_1_1)))) > var_1_31) ? (var_1_73 == ((unsigned long int) ((((((var_1_29 - var_1_5)) > (var_1_75)) ? ((var_1_29 - var_1_5)) : (var_1_75))) - (16u + (var_1_109 + var_1_19))))) : 1) : (var_1_73 == ((unsigned long int) (((((var_1_11) < (var_1_19)) ? (var_1_11) : (var_1_19))) + var_1_18))))) && ((var_1_31 <= (var_1_11 - var_1_69)) ? ((! (var_1_1 < var_1_10)) ? (var_1_76 == ((double) (((((((((15.3) > (var_1_50)) ? (15.3) : (var_1_50))) + var_1_77)) > (var_1_49)) ? ((((((15.3) > (var_1_50)) ? (15.3) : (var_1_50))) + var_1_77)) : (var_1_49))))) : 1) : 1)) && ((var_1_108 || (var_1_100 > var_1_25)) ? (var_1_108 ? (var_1_78 == ((unsigned char) (var_1_55 && var_1_56))) : 1) : ((var_1_17 <= var_1_93) ? (var_1_78 == ((unsigned char) (! 0))) : ((((var_1_103 * var_1_50) * (var_1_41 / var_1_59)) > var_1_49) ? (var_1_78 == ((unsigned char) (var_1_56 && var_1_34))) : 1)))) && (var_1_79 == ((float) (((var_1_80 + var_1_81) + var_1_82) - (((((var_1_83 + var_1_84)) > ((4.4f + 256.5f))) ? ((var_1_83 + var_1_84)) : ((4.4f + 256.5f)))))))) && ((! (var_1_23 >= (var_1_42 / var_1_21))) ? (var_1_85 == ((float) (var_1_80 + ((31.5f + var_1_81) - var_1_82)))) : (var_1_85 == ((float) ((((var_1_15) > (((var_1_81 + var_1_80) + var_1_49))) ? (var_1_15) : (((var_1_81 + var_1_80) + var_1_49)))))))) && ((100000 <= var_1_17) ? (var_1_86 == ((unsigned long int) ((var_1_10 + 1u) + ((((var_1_46) < (0u)) ? (var_1_46) : (0u)))))) : ((var_1_81 < (8.5f - var_1_82)) ? (var_1_86 == ((unsigned long int) var_1_70)) : 1))) && ((var_1_86 < var_1_45) ? ((var_1_26 != var_1_5) ? ((var_1_65 > var_1_10) ? (var_1_87 == ((unsigned char) (((((var_1_23) > (var_1_88)) ? (var_1_23) : (var_1_88))) - (var_1_22 + var_1_21)))) : (var_1_87 == ((unsigned char) (16 + (var_1_89 - var_1_22))))) : (((var_1_70 / var_1_69) <= var_1_67) ? (((var_1_67 & var_1_21) <= (var_1_6 - var_1_106)) ? (var_1_87 == ((unsigned char) ((((var_1_89) < (64)) ? (var_1_89) : (64))))) : (var_1_87 == ((unsigned char) var_1_23))) : ((64 <= (var_1_19 + var_1_1)) ? ((var_1_62 > 25.4) ? (var_1_87 == ((unsigned char) (((((var_1_23 - ((((var_1_10) < (var_1_89)) ? (var_1_10) : (var_1_89))))) > (var_1_28)) ? ((var_1_23 - ((((var_1_10) < (var_1_89)) ? (var_1_10) : (var_1_89))))) : (var_1_28))))) : (var_1_87 == ((unsigned char) (((((var_1_88) < (var_1_23)) ? (var_1_88) : (var_1_23))) - 50)))) : (var_1_87 == ((unsigned char) (((((((var_1_23) < (var_1_11)) ? (var_1_23) : (var_1_11))) < 0 ) ? -((((var_1_23) < (var_1_11)) ? (var_1_23) : (var_1_11))) : ((((var_1_23) < (var_1_11)) ? (var_1_23) : (var_1_11)))))))))) : ((var_1_59 < (var_1_112 * (var_1_81 * var_1_14))) ? ((var_1_73 < var_1_93) ? (var_1_87 == ((unsigned char) ((200 - (var_1_28 + var_1_21)) - (25 + var_1_22)))) : (var_1_33 ? (var_1_87 == ((unsigned char) (var_1_11 + var_1_21))) : 1)) : (var_1_87 == ((unsigned char) var_1_23))))) && (var_1_91 == ((unsigned char) var_1_56))) && (var_1_92 == ((float) var_1_13))) && (last_1_var_1_40 ? (var_1_93 == ((unsigned long int) var_1_18)) : (var_1_93 == ((unsigned long int) var_1_94)))) && (var_1_36 ? (var_1_95 == ((float) var_1_77)) : 1)) && (var_1_96 == ((unsigned short int) var_1_11))) && (var_1_97 == ((signed long int) var_1_98))) && (var_1_99 == ((unsigned char) var_1_10))) && (var_1_100 == ((signed short int) -256))) && (var_1_101 == ((unsigned short int) var_1_10))) && (var_1_55 ? (var_1_102 == ((signed short int) var_1_106)) : (var_1_102 == ((signed short int) var_1_10)))) && (var_1_103 == ((double) var_1_13))) && (var_1_104 == ((signed short int) var_1_21))) && (var_1_105 == ((unsigned char) var_1_23))) && (var_1_106 == ((signed short int) var_1_23))) && (var_1_72 ? (var_1_107 == ((unsigned char) var_1_22)) : 1)) && (last_1_var_1_57 ? (var_1_108 == ((unsigned char) var_1_34)) : 1)) && (var_1_91 ? (var_1_109 == ((unsigned short int) var_1_69)) : (var_1_109 == ((unsigned short int) last_1_var_1_109)))) && (var_1_40 ? (var_1_110 == ((signed char) var_1_38)) : (var_1_110 == ((signed char) 10)))) && (var_1_57 ? (var_1_111 == ((float) var_1_14)) : 1)) && (var_1_112 == ((float) (((((((((var_1_82) < (var_1_84)) ? (var_1_82) : (var_1_84))) - var_1_81)) > (var_1_14)) ? ((((((var_1_82) < (var_1_84)) ? (var_1_82) : (var_1_84))) - var_1_81)) : (var_1_14)))))) && ((25u <= (var_1_42 + var_1_94)) ? (var_1_113 == ((signed short int) ((((var_1_38) < (var_1_30)) ? (var_1_38) : (var_1_30))))) : 1)
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
