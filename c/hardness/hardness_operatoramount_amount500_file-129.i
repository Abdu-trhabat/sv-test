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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 32.125;
float var_1_3 = 4.7;
float var_1_4 = 255.75;
float var_1_5 = 255.5;
float var_1_6 = 64.8;
float var_1_7 = 128.75;
float var_1_8 = 99.4;
float var_1_9 = 128.5;
float var_1_10 = 8.5;
float var_1_11 = 50.375;
float var_1_12 = 127.5;
float var_1_13 = 8.7;
float var_1_14 = 1.6;
float var_1_15 = 0.0;
float var_1_16 = 10.25;
unsigned long int var_1_17 = 256;
signed long int var_1_20 = 25;
unsigned long int var_1_21 = 1337423439;
unsigned long int var_1_22 = 8;
unsigned long int var_1_23 = 64;
unsigned long int var_1_24 = 5;
signed long int var_1_25 = 256;
unsigned short int var_1_26 = 48960;
unsigned short int var_1_27 = 10;
double var_1_28 = 2.25;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
signed short int var_1_31 = 256;
signed short int var_1_32 = 64;
signed short int var_1_33 = 10;
unsigned char var_1_34 = 5;
unsigned char var_1_36 = 100;
unsigned char var_1_37 = 25;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 32;
unsigned char var_1_41 = 4;
unsigned char var_1_42 = 128;
float var_1_43 = 100.22;
float var_1_44 = 0.0;
signed short int var_1_45 = 32;
unsigned char var_1_46 = 128;
float var_1_47 = 15.875;
signed long int var_1_48 = 1;
unsigned short int var_1_49 = 50;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 200;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
signed long int var_1_54 = 1;
signed long int var_1_55 = -5;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
signed short int var_1_60 = 10;
unsigned long int var_1_61 = 1;
unsigned char var_1_62 = 0;
signed short int var_1_63 = 500;
signed long int var_1_64 = 32;
unsigned char var_1_65 = 64;
signed char var_1_66 = 50;
signed char var_1_67 = 5;
double var_1_68 = 10.5;
double var_1_69 = 7.5;
unsigned char var_1_70 = 10;
unsigned long int var_1_71 = 100;
signed char var_1_72 = -32;
signed char var_1_73 = 64;
float var_1_74 = 1000000000.5;
unsigned char var_1_75 = 32;
signed short int var_1_76 = 10;
double var_1_77 = 15.4;
double var_1_80 = 100000000000.02;
signed long int var_1_81 = 1;
signed long int var_1_82 = 1000;
signed char var_1_83 = -32;
signed char var_1_85 = 16;
signed long int var_1_86 = -10;
signed long int var_1_87 = 4;
float var_1_88 = 100.6;
signed short int var_1_89 = 2;
unsigned long int var_1_90 = 64;
unsigned long int var_1_92 = 3687453610;
float var_1_93 = 9.474;
unsigned short int var_1_94 = 4;
unsigned short int var_1_95 = 49453;
unsigned short int var_1_96 = 26096;
unsigned short int var_1_97 = 64;
signed long int var_1_98 = 500;
signed long int var_1_100 = 1160337125;
unsigned char var_1_101 = 0;
double var_1_102 = 1.956;
signed char var_1_103 = -16;
unsigned long int var_1_104 = 256;
unsigned long int var_1_105 = 2;
double var_1_106 = 31.25;
unsigned char var_1_107 = 0;
unsigned char var_1_109 = 1;
unsigned char var_1_110 = 1;
unsigned char var_1_111 = 5;
unsigned char var_1_112 = 0;
unsigned char var_1_115 = 64;
unsigned char var_1_116 = 1;
unsigned long int last_1_var_1_71 = 100;
signed long int last_1_var_1_81 = 1;
signed long int last_1_var_1_86 = -10;
signed short int last_1_var_1_89 = 2;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_4 = var_1_24;
 signed long int stepLocal_3 = last_1_var_1_86;
 if (((var_1_33 / var_1_42) | (var_1_46 - var_1_36)) >= stepLocal_3) {
  if ((var_1_21 + (var_1_26 ^ var_1_41)) >= stepLocal_4) {
   var_1_45 = (((((((((((var_1_39) > (5)) ? (var_1_39) : (5))) < 0 ) ? -((((var_1_39) > (5)) ? (var_1_39) : (5))) : ((((var_1_39) > (5)) ? (var_1_39) : (5)))))) > ((var_1_41 - last_1_var_1_89))) ? ((((((((var_1_39) > (5)) ? (var_1_39) : (5))) < 0 ) ? -((((var_1_39) > (5)) ? (var_1_39) : (5))) : ((((var_1_39) > (5)) ? (var_1_39) : (5)))))) : ((var_1_41 - last_1_var_1_89))));
  } else {
   var_1_45 = var_1_32;
  }
 } else {
  var_1_45 = var_1_40;
 }
 unsigned long int stepLocal_1 = last_1_var_1_71;
 if (-256 == stepLocal_1) {
  var_1_17 = ((var_1_21 - (var_1_22 + var_1_23)) + ((((var_1_20) < (var_1_24)) ? (var_1_20) : (var_1_24))));
 } else {
  var_1_17 = var_1_24;
 }
 if (var_1_30) {
  var_1_71 = var_1_17;
 } else {
  var_1_71 = var_1_26;
 }
 var_1_43 = (var_1_3 - (((((var_1_44 - var_1_15)) < (var_1_12)) ? ((var_1_44 - var_1_15)) : (var_1_12))));
 signed long int stepLocal_5 = var_1_26 / ((((var_1_48) > (var_1_36)) ? (var_1_48) : (var_1_36)));
 if (64 <= stepLocal_5) {
  var_1_47 = ((((var_1_7) > (var_1_4)) ? (var_1_7) : (var_1_4)));
 } else {
  var_1_47 = ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_16) - ((((var_1_3) < (var_1_14)) ? (var_1_3) : (var_1_14))));
 }
 if (((var_1_38 / var_1_39) / var_1_36) > var_1_32) {
  var_1_49 = (((((25) > (var_1_38)) ? (25) : (var_1_38))) + var_1_39);
 }
 signed short int stepLocal_7 = var_1_33;
 if (var_1_39 >= stepLocal_7) {
  if (var_1_30) {
   var_1_56 = ((! var_1_53) && var_1_57);
  } else {
   var_1_56 = (var_1_53 && var_1_58);
  }
 } else {
  var_1_56 = ((var_1_53 || var_1_58) || var_1_59);
 }
 var_1_61 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
 if ((2.875 - var_1_16) > var_1_47) {
  var_1_62 = ((var_1_37 < var_1_17) || (! var_1_58));
 }
 unsigned char stepLocal_10 = ((((var_1_39) < (var_1_24)) ? (var_1_39) : (var_1_24))) >= var_1_51;
 signed long int stepLocal_9 = var_1_48;
 if (stepLocal_9 < var_1_64) {
  var_1_65 = (var_1_42 - (var_1_41 + ((((var_1_40) < (var_1_54)) ? (var_1_40) : (var_1_54)))));
 } else {
  if (var_1_30 && stepLocal_10) {
   var_1_65 = ((((var_1_40) < (((((var_1_41) < (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))) ? (var_1_41) : (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)))))))) ? (var_1_40) : (((((var_1_41) < (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))) ? (var_1_41) : (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)))))))));
  } else {
   var_1_65 = (var_1_36 + var_1_40);
  }
 }
 if ((- (var_1_15 * var_1_14)) < var_1_3) {
  var_1_68 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
 } else {
  var_1_68 = var_1_12;
 }
 if (var_1_14 < (- 4.425f)) {
  if ((var_1_4 * var_1_14) == var_1_15) {
   var_1_70 = (var_1_41 + 16);
  } else {
   if ((128.2f - var_1_13) > var_1_4) {
    var_1_70 = (var_1_67 + var_1_41);
   }
  }
 } else {
  var_1_70 = ((var_1_67 + 5) + 1);
 }
 if (var_1_56) {
  if (var_1_30) {
   var_1_76 = (var_1_41 + var_1_67);
  }
 }
 var_1_88 = ((((128.875f) > ((var_1_16 - var_1_11))) ? (128.875f) : ((var_1_16 - var_1_11))));
 if (var_1_57) {
  var_1_102 = var_1_10;
 } else {
  var_1_102 = var_1_7;
 }
 if (var_1_59) {
  var_1_105 = var_1_51;
 }
 if (var_1_30) {
  var_1_106 = var_1_9;
 } else {
  var_1_106 = var_1_7;
 }
 if (var_1_56) {
  var_1_107 = var_1_59;
 }
 var_1_109 = 0;
 if (var_1_30) {
  var_1_110 = var_1_59;
 } else {
  var_1_110 = var_1_57;
 }
 var_1_115 = var_1_38;
 var_1_116 = var_1_59;
 unsigned short int stepLocal_21 = var_1_49;
 if (stepLocal_21 != ((var_1_37 - var_1_45) / var_1_73)) {
  var_1_93 = (var_1_11 - (var_1_13 + ((((var_1_80) < (var_1_12)) ? (var_1_80) : (var_1_12)))));
 } else {
  var_1_93 = (15.25f + var_1_10);
 }
 if (var_1_9 >= (- var_1_12)) {
  if (var_1_16 <= var_1_5) {
   var_1_28 = (var_1_3 - (8.75 + var_1_15));
  } else {
   var_1_28 = ((((((((2.5) < ((var_1_16 + var_1_15))) ? (2.5) : ((var_1_16 + var_1_15))))) > (((var_1_13 - 9.275) + (var_1_14 - var_1_12)))) ? (((((2.5) < ((var_1_16 + var_1_15))) ? (2.5) : ((var_1_16 + var_1_15))))) : (((var_1_13 - 9.275) + (var_1_14 - var_1_12)))));
  }
 } else {
  if (var_1_116) {
   var_1_28 = (var_1_14 + (var_1_16 - 256.5));
  } else {
   var_1_28 = ((((var_1_12) > (((((var_1_10) > ((49.2 + var_1_14))) ? (var_1_10) : ((49.2 + var_1_14)))))) ? (var_1_12) : (((((var_1_10) > ((49.2 + var_1_14))) ? (var_1_10) : ((49.2 + var_1_14)))))));
  }
 }
 if (var_1_12 <= var_1_4) {
  if (var_1_30) {
   var_1_31 = ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)));
  } else {
   if (var_1_116) {
    var_1_31 = var_1_33;
   }
  }
 }
 if ((var_1_16 * var_1_106) < (15.25 + 1.8)) {
  var_1_55 = var_1_27;
 } else {
  var_1_55 = var_1_32;
 }
 if ((var_1_13 * var_1_102) < ((var_1_8 * var_1_15) / var_1_44)) {
  var_1_66 = (var_1_37 + ((((var_1_54) < ((var_1_41 - var_1_40))) ? (var_1_54) : ((var_1_41 - var_1_40)))));
 } else {
  if (var_1_10 <= 10.4f) {
   var_1_66 = (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + (var_1_54 - (var_1_40 - var_1_67)));
  } else {
   var_1_66 = ((((var_1_54) < (var_1_37)) ? (var_1_54) : (var_1_37)));
  }
 }
 if (var_1_53) {
  var_1_81 = (((((var_1_27 - (var_1_40 + var_1_46))) > (last_1_var_1_81)) ? ((var_1_27 - (var_1_40 + var_1_46))) : (last_1_var_1_81)));
 } else {
  var_1_81 = (((((var_1_33 + var_1_55)) > ((last_1_var_1_81 + (var_1_38 + var_1_36)))) ? ((var_1_33 + var_1_55)) : ((last_1_var_1_81 + (var_1_38 + var_1_36)))));
 }
 unsigned long int stepLocal_16 = (var_1_71 * var_1_73) / 2;
 if (stepLocal_16 > ((var_1_38 >> var_1_87) * (var_1_71 % var_1_40))) {
  var_1_86 = ((var_1_73 + ((((var_1_31) < (var_1_46)) ? (var_1_31) : (var_1_46)))) + var_1_54);
 }
 if (var_1_116) {
  var_1_104 = var_1_46;
 } else {
  var_1_104 = var_1_86;
 }
 if ((var_1_93 * var_1_7) <= var_1_15) {
  var_1_89 = (var_1_87 + var_1_38);
 } else {
  var_1_89 = (var_1_40 - (var_1_85 + var_1_67));
 }
 signed long int stepLocal_2 = var_1_26 - var_1_27;
 if (stepLocal_2 != var_1_104) {
  var_1_25 = (var_1_23 + (var_1_26 + var_1_27));
 } else {
  var_1_25 = ((((5) < (var_1_23)) ? (5) : (var_1_23)));
 }
 if (var_1_48 == (~ var_1_41)) {
  if (-10 <= var_1_81) {
   var_1_52 = (var_1_30 && (! var_1_53));
  }
 } else {
  if (var_1_42 >= ((128 - var_1_37) >> var_1_54)) {
   var_1_52 = var_1_30;
  } else {
   var_1_52 = (! var_1_53);
  }
 }
 unsigned long int stepLocal_13 = var_1_17;
 unsigned long int stepLocal_12 = var_1_24;
 signed long int stepLocal_11 = -32 + var_1_51;
 if (var_1_20 <= stepLocal_13) {
  if (var_1_81 <= stepLocal_11) {
   var_1_69 = (var_1_8 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
  } else {
   if (((((200) < (var_1_32)) ? (200) : (var_1_32))) <= stepLocal_12) {
    var_1_69 = (((((var_1_3 - (var_1_44 - var_1_14))) < (var_1_11)) ? ((var_1_3 - (var_1_44 - var_1_14))) : (var_1_11)));
   } else {
    var_1_69 = (var_1_15 - var_1_14);
   }
  }
 } else {
  var_1_69 = (((((var_1_13) > (var_1_4)) ? (var_1_13) : (var_1_4))) - var_1_44);
 }
 if (var_1_52) {
  var_1_75 = ((var_1_51 - (var_1_40 - var_1_54)) - var_1_73);
 }
 if ((var_1_104 * var_1_27) <= var_1_67) {
  if (var_1_49 < (var_1_67 >> 4)) {
   var_1_94 = (var_1_95 - var_1_54);
  } else {
   var_1_94 = (var_1_67 + ((((var_1_96 - var_1_97) < 0 ) ? -(var_1_96 - var_1_97) : (var_1_96 - var_1_97))));
  }
 } else {
  var_1_94 = (var_1_65 + (var_1_96 - var_1_46));
 }
 if (var_1_52) {
  var_1_111 = 64;
 }
 if ((var_1_27 & (var_1_25 + var_1_32)) <= var_1_104) {
  if (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) < var_1_47) {
   var_1_112 = var_1_30;
  } else {
   var_1_112 = var_1_59;
  }
 }
 if (! var_1_52) {
  var_1_1 = (((((var_1_3 - var_1_4)) > (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5)));
 }
 if (var_1_5 <= ((((var_1_13) > ((var_1_10 * var_1_69))) ? (var_1_13) : ((var_1_10 * var_1_69))))) {
  var_1_29 = (! ((var_1_16 >= 255.75f) || var_1_30));
 } else {
  var_1_29 = (! (! var_1_30));
 }
 if (var_1_12 == ((((((((var_1_1) < (var_1_14)) ? (var_1_1) : (var_1_14)))) > (var_1_69)) ? (((((var_1_1) < (var_1_14)) ? (var_1_1) : (var_1_14)))) : (var_1_69)))) {
  var_1_34 = (((var_1_36 - var_1_37) + var_1_38) - (var_1_39 - (var_1_40 - var_1_41)));
 } else {
  if (var_1_7 <= (var_1_14 / var_1_15)) {
   var_1_34 = (var_1_39 + ((((var_1_41) < (0)) ? (var_1_41) : (0))));
  } else {
   var_1_34 = (var_1_42 - var_1_41);
  }
 }
 unsigned long int stepLocal_6 = var_1_21;
 if (! var_1_52) {
  if (stepLocal_6 >= (var_1_41 / ((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))))) {
   var_1_50 = var_1_38;
  }
 } else {
  if (var_1_15 != var_1_11) {
   if (var_1_4 > var_1_7) {
    var_1_50 = ((((((var_1_51) > (200)) ? (var_1_51) : (200))) - var_1_41) - ((((var_1_37) < ((1 + var_1_40))) ? (var_1_37) : ((1 + var_1_40)))));
   } else {
    var_1_50 = ((((8) < (var_1_38)) ? (8) : (var_1_38)));
   }
  }
 }
 signed long int stepLocal_8 = var_1_94 % var_1_64;
 if (-4 < stepLocal_8) {
  var_1_63 = ((((var_1_46) > (var_1_81)) ? (var_1_46) : (var_1_81)));
 }
 signed long int stepLocal_14 = ~ var_1_41;
 if (var_1_58) {
  if (stepLocal_14 > (var_1_94 * var_1_81)) {
   var_1_74 = (var_1_13 + var_1_12);
  } else {
   var_1_74 = (var_1_11 - var_1_13);
  }
 } else {
  var_1_74 = (((var_1_15 - var_1_14) + var_1_16) - (var_1_13 + var_1_12));
 }
 unsigned char stepLocal_23 = var_1_42;
 unsigned short int stepLocal_22 = var_1_49;
 if (var_1_111 < stepLocal_22) {
  var_1_98 = (((((var_1_67) > ((var_1_100 - var_1_75))) ? (var_1_67) : ((var_1_100 - var_1_75)))) - (((((var_1_46 + var_1_85)) > (var_1_81)) ? ((var_1_46 + var_1_85)) : (var_1_81))));
 } else {
  if (stepLocal_23 <= ((((var_1_75) > (var_1_49)) ? (var_1_75) : (var_1_49)))) {
   var_1_98 = (((((var_1_75) < (var_1_73)) ? (var_1_75) : (var_1_73))) - var_1_51);
  } else {
   var_1_98 = var_1_100;
  }
 }
 if (var_1_29) {
  var_1_101 = 0;
 } else {
  var_1_101 = var_1_30;
 }
 if (var_1_101) {
  var_1_103 = var_1_51;
 } else {
  var_1_103 = var_1_85;
 }
 unsigned char stepLocal_0 = var_1_5 == var_1_102;
 if (stepLocal_0 && var_1_101) {
  if (var_1_102 > (var_1_4 + var_1_5)) {
   var_1_6 = (var_1_7 + ((((var_1_8) < ((var_1_9 + var_1_10))) ? (var_1_8) : ((var_1_9 + var_1_10)))));
  }
 } else {
  if ((- var_1_3) <= ((((9.625f) < (var_1_7)) ? (9.625f) : (var_1_7)))) {
   var_1_6 = (var_1_4 - var_1_11);
  } else {
   var_1_6 = ((var_1_12 + 63.2f) - ((var_1_13 + var_1_14) + (var_1_15 - var_1_16)));
  }
 }
 if (var_1_68 <= var_1_80) {
  if (((- var_1_12) * 500.4) <= var_1_102) {
   if (var_1_59) {
    if (var_1_101) {
     var_1_83 = (var_1_37 - (((((var_1_85) < (1)) ? (var_1_85) : (1))) + ((((var_1_41) < (var_1_67)) ? (var_1_41) : (var_1_67)))));
    }
   }
  }
 } else {
  var_1_83 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
 }
 unsigned short int stepLocal_20 = var_1_49;
 signed long int stepLocal_19 = var_1_73 ^ (- var_1_46);
 unsigned char stepLocal_18 = (var_1_85 + var_1_54) == var_1_64;
 signed long int stepLocal_17 = var_1_25;
 if (var_1_26 <= stepLocal_17) {
  if (var_1_23 < stepLocal_19) {
   if (((- var_1_68) >= var_1_6) || stepLocal_18) {
    var_1_90 = var_1_22;
   } else {
    if (stepLocal_20 < (var_1_82 / var_1_36)) {
     var_1_90 = (((((var_1_92 - var_1_54)) < (var_1_21)) ? ((var_1_92 - var_1_54)) : (var_1_21)));
    } else {
     var_1_90 = var_1_73;
    }
   }
  } else {
   var_1_90 = (var_1_92 - var_1_46);
  }
 }
 if (var_1_90 <= ((var_1_51 - var_1_36) * (var_1_42 - var_1_41))) {
  var_1_60 = ((((var_1_46) > (-10)) ? (var_1_46) : (-10)));
 }
 if ((var_1_21 << var_1_17) >= 4u) {
  if (var_1_64 <= var_1_22) {
   var_1_72 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
  } else {
   if (var_1_90 < var_1_105) {
    var_1_72 = (((((var_1_41 - (var_1_73 - var_1_54))) < (var_1_51)) ? ((var_1_41 - (var_1_73 - var_1_54))) : (var_1_51)));
   }
  }
 } else {
  if (var_1_38 >= ((((var_1_55) > (var_1_90)) ? (var_1_55) : (var_1_90)))) {
   var_1_72 = ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)));
  }
 }
 unsigned long int stepLocal_15 = var_1_90;
 if (var_1_69 != ((((var_1_102) < ((- var_1_106))) ? (var_1_102) : ((- var_1_106))))) {
  if ((- (- var_1_8)) > (- var_1_9)) {
   var_1_77 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
  } else {
   if (var_1_89 != stepLocal_15) {
    if (var_1_3 != var_1_15) {
     var_1_77 = ((var_1_16 + var_1_13) + (var_1_14 - ((((var_1_15) > (var_1_80)) ? (var_1_15) : (var_1_80)))));
    }
   } else {
    var_1_77 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 2305843.009213691400e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 536870912);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 536870911);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65535);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32767);
 assume_abort_if_not(var_1_32 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -32767);
 assume_abort_if_not(var_1_33 <= 32766);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 95);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 64);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 63);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 31);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 31);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 127);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 4611686.018427383000e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 255);
 var_1_48 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_48 >= -2147483648);
 assume_abort_if_not(var_1_48 <= 2147483647);
 assume_abort_if_not(var_1_48 != 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 190);
 assume_abort_if_not(var_1_51 <= 254);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 30);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 0);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 0);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= -2147483648);
 assume_abort_if_not(var_1_64 <= 2147483647);
 assume_abort_if_not(var_1_64 != 0);
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 31);
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= 63);
 assume_abort_if_not(var_1_73 <= 126);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427383000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_82 >= 0);
 assume_abort_if_not(var_1_82 <= 1073741823);
 var_1_85 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 63);
 var_1_87 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_87 >= 1);
 assume_abort_if_not(var_1_87 <= 7);
 var_1_92 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_92 >= 2147483647);
 assume_abort_if_not(var_1_92 <= 4294967294);
 var_1_95 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_95 >= 32767);
 assume_abort_if_not(var_1_95 <= 65534);
 var_1_96 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_96 >= 16383);
 assume_abort_if_not(var_1_96 <= 32767);
 var_1_97 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_97 >= 0);
 assume_abort_if_not(var_1_97 <= 16383);
 var_1_100 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_100 >= 1073741822);
 assume_abort_if_not(var_1_100 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_71 = var_1_71;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_89 = var_1_89;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((! var_1_52) ? (var_1_1 == ((float) (((((var_1_3 - var_1_4)) > (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))))) : 1) && (((var_1_5 == var_1_102) && var_1_101) ? ((var_1_102 > (var_1_4 + var_1_5)) ? (var_1_6 == ((float) (var_1_7 + ((((var_1_8) < ((var_1_9 + var_1_10))) ? (var_1_8) : ((var_1_9 + var_1_10))))))) : 1) : (((- var_1_3) <= ((((9.625f) < (var_1_7)) ? (9.625f) : (var_1_7)))) ? (var_1_6 == ((float) (var_1_4 - var_1_11))) : (var_1_6 == ((float) ((var_1_12 + 63.2f) - ((var_1_13 + var_1_14) + (var_1_15 - var_1_16)))))))) && ((-256 == last_1_var_1_71) ? (var_1_17 == ((unsigned long int) ((var_1_21 - (var_1_22 + var_1_23)) + ((((var_1_20) < (var_1_24)) ? (var_1_20) : (var_1_24)))))) : (var_1_17 == ((unsigned long int) var_1_24)))) && (((var_1_26 - var_1_27) != var_1_104) ? (var_1_25 == ((signed long int) (var_1_23 + (var_1_26 + var_1_27)))) : (var_1_25 == ((signed long int) ((((5) < (var_1_23)) ? (5) : (var_1_23))))))) && ((var_1_9 >= (- var_1_12)) ? ((var_1_16 <= var_1_5) ? (var_1_28 == ((double) (var_1_3 - (8.75 + var_1_15)))) : (var_1_28 == ((double) ((((((((2.5) < ((var_1_16 + var_1_15))) ? (2.5) : ((var_1_16 + var_1_15))))) > (((var_1_13 - 9.275) + (var_1_14 - var_1_12)))) ? (((((2.5) < ((var_1_16 + var_1_15))) ? (2.5) : ((var_1_16 + var_1_15))))) : (((var_1_13 - 9.275) + (var_1_14 - var_1_12)))))))) : (var_1_116 ? (var_1_28 == ((double) (var_1_14 + (var_1_16 - 256.5)))) : (var_1_28 == ((double) ((((var_1_12) > (((((var_1_10) > ((49.2 + var_1_14))) ? (var_1_10) : ((49.2 + var_1_14)))))) ? (var_1_12) : (((((var_1_10) > ((49.2 + var_1_14))) ? (var_1_10) : ((49.2 + var_1_14)))))))))))) && ((var_1_5 <= ((((var_1_13) > ((var_1_10 * var_1_69))) ? (var_1_13) : ((var_1_10 * var_1_69))))) ? (var_1_29 == ((unsigned char) (! ((var_1_16 >= 255.75f) || var_1_30)))) : (var_1_29 == ((unsigned char) (! (! var_1_30)))))) && ((var_1_12 <= var_1_4) ? (var_1_30 ? (var_1_31 == ((signed short int) ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))) : (var_1_116 ? (var_1_31 == ((signed short int) var_1_33)) : 1)) : 1)) && ((var_1_12 == ((((((((var_1_1) < (var_1_14)) ? (var_1_1) : (var_1_14)))) > (var_1_69)) ? (((((var_1_1) < (var_1_14)) ? (var_1_1) : (var_1_14)))) : (var_1_69)))) ? (var_1_34 == ((unsigned char) (((var_1_36 - var_1_37) + var_1_38) - (var_1_39 - (var_1_40 - var_1_41))))) : ((var_1_7 <= (var_1_14 / var_1_15)) ? (var_1_34 == ((unsigned char) (var_1_39 + ((((var_1_41) < (0)) ? (var_1_41) : (0)))))) : (var_1_34 == ((unsigned char) (var_1_42 - var_1_41)))))) && (var_1_43 == ((float) (var_1_3 - (((((var_1_44 - var_1_15)) < (var_1_12)) ? ((var_1_44 - var_1_15)) : (var_1_12))))))) && ((((var_1_33 / var_1_42) | (var_1_46 - var_1_36)) >= last_1_var_1_86) ? (((var_1_21 + (var_1_26 ^ var_1_41)) >= var_1_24) ? (var_1_45 == ((signed short int) (((((((((((var_1_39) > (5)) ? (var_1_39) : (5))) < 0 ) ? -((((var_1_39) > (5)) ? (var_1_39) : (5))) : ((((var_1_39) > (5)) ? (var_1_39) : (5)))))) > ((var_1_41 - last_1_var_1_89))) ? ((((((((var_1_39) > (5)) ? (var_1_39) : (5))) < 0 ) ? -((((var_1_39) > (5)) ? (var_1_39) : (5))) : ((((var_1_39) > (5)) ? (var_1_39) : (5)))))) : ((var_1_41 - last_1_var_1_89)))))) : (var_1_45 == ((signed short int) var_1_32))) : (var_1_45 == ((signed short int) var_1_40)))) && ((64 <= (var_1_26 / ((((var_1_48) > (var_1_36)) ? (var_1_48) : (var_1_36))))) ? (var_1_47 == ((float) ((((var_1_7) > (var_1_4)) ? (var_1_7) : (var_1_4))))) : (var_1_47 == ((float) ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_16) - ((((var_1_3) < (var_1_14)) ? (var_1_3) : (var_1_14)))))))) && ((((var_1_38 / var_1_39) / var_1_36) > var_1_32) ? (var_1_49 == ((unsigned short int) (((((25) > (var_1_38)) ? (25) : (var_1_38))) + var_1_39))) : 1)) && ((! var_1_52) ? ((var_1_21 >= (var_1_41 / ((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))))) ? (var_1_50 == ((unsigned char) var_1_38)) : 1) : ((var_1_15 != var_1_11) ? ((var_1_4 > var_1_7) ? (var_1_50 == ((unsigned char) ((((((var_1_51) > (200)) ? (var_1_51) : (200))) - var_1_41) - ((((var_1_37) < ((1 + var_1_40))) ? (var_1_37) : ((1 + var_1_40))))))) : (var_1_50 == ((unsigned char) ((((8) < (var_1_38)) ? (8) : (var_1_38)))))) : 1))) && ((var_1_48 == (~ var_1_41)) ? ((-10 <= var_1_81) ? (var_1_52 == ((unsigned char) (var_1_30 && (! var_1_53)))) : 1) : ((var_1_42 >= ((128 - var_1_37) >> var_1_54)) ? (var_1_52 == ((unsigned char) var_1_30)) : (var_1_52 == ((unsigned char) (! var_1_53)))))) && (((var_1_16 * var_1_106) < (15.25 + 1.8)) ? (var_1_55 == ((signed long int) var_1_27)) : (var_1_55 == ((signed long int) var_1_32)))) && ((var_1_39 >= var_1_33) ? (var_1_30 ? (var_1_56 == ((unsigned char) ((! var_1_53) && var_1_57))) : (var_1_56 == ((unsigned char) (var_1_53 && var_1_58)))) : (var_1_56 == ((unsigned char) ((var_1_53 || var_1_58) || var_1_59))))) && ((var_1_90 <= ((var_1_51 - var_1_36) * (var_1_42 - var_1_41))) ? (var_1_60 == ((signed short int) ((((var_1_46) > (-10)) ? (var_1_46) : (-10))))) : 1)) && (var_1_61 == ((unsigned long int) ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))) && (((2.875 - var_1_16) > var_1_47) ? (var_1_62 == ((unsigned char) ((var_1_37 < var_1_17) || (! var_1_58)))) : 1)) && ((-4 < (var_1_94 % var_1_64)) ? (var_1_63 == ((signed short int) ((((var_1_46) > (var_1_81)) ? (var_1_46) : (var_1_81))))) : 1)) && ((var_1_48 < var_1_64) ? (var_1_65 == ((unsigned char) (var_1_42 - (var_1_41 + ((((var_1_40) < (var_1_54)) ? (var_1_40) : (var_1_54))))))) : ((var_1_30 && (((((var_1_39) < (var_1_24)) ? (var_1_39) : (var_1_24))) >= var_1_51)) ? (var_1_65 == ((unsigned char) ((((var_1_40) < (((((var_1_41) < (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))) ? (var_1_41) : (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)))))))) ? (var_1_40) : (((((var_1_41) < (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))) ? (var_1_41) : (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))))))))) : (var_1_65 == ((unsigned char) (var_1_36 + var_1_40)))))) && (((var_1_13 * var_1_102) < ((var_1_8 * var_1_15) / var_1_44)) ? (var_1_66 == ((signed char) (var_1_37 + ((((var_1_54) < ((var_1_41 - var_1_40))) ? (var_1_54) : ((var_1_41 - var_1_40))))))) : ((var_1_10 <= 10.4f) ? (var_1_66 == ((signed char) (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + (var_1_54 - (var_1_40 - var_1_67))))) : (var_1_66 == ((signed char) ((((var_1_54) < (var_1_37)) ? (var_1_54) : (var_1_37)))))))) && (((- (var_1_15 * var_1_14)) < var_1_3) ? (var_1_68 == ((double) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : (var_1_68 == ((double) var_1_12)))) && ((var_1_20 <= var_1_17) ? ((var_1_81 <= (-32 + var_1_51)) ? (var_1_69 == ((double) (var_1_8 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) : ((((((200) < (var_1_32)) ? (200) : (var_1_32))) <= var_1_24) ? (var_1_69 == ((double) (((((var_1_3 - (var_1_44 - var_1_14))) < (var_1_11)) ? ((var_1_3 - (var_1_44 - var_1_14))) : (var_1_11))))) : (var_1_69 == ((double) (var_1_15 - var_1_14))))) : (var_1_69 == ((double) (((((var_1_13) > (var_1_4)) ? (var_1_13) : (var_1_4))) - var_1_44))))) && ((var_1_14 < (- 4.425f)) ? (((var_1_4 * var_1_14) == var_1_15) ? (var_1_70 == ((unsigned char) (var_1_41 + 16))) : (((128.2f - var_1_13) > var_1_4) ? (var_1_70 == ((unsigned char) (var_1_67 + var_1_41))) : 1)) : (var_1_70 == ((unsigned char) ((var_1_67 + 5) + 1))))) && (var_1_30 ? (var_1_71 == ((unsigned long int) var_1_17)) : (var_1_71 == ((unsigned long int) var_1_26)))) && (((var_1_21 << var_1_17) >= 4u) ? ((var_1_64 <= var_1_22) ? (var_1_72 == ((signed char) ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) : ((var_1_90 < var_1_105) ? (var_1_72 == ((signed char) (((((var_1_41 - (var_1_73 - var_1_54))) < (var_1_51)) ? ((var_1_41 - (var_1_73 - var_1_54))) : (var_1_51))))) : 1)) : ((var_1_38 >= ((((var_1_55) > (var_1_90)) ? (var_1_55) : (var_1_90)))) ? (var_1_72 == ((signed char) ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) : 1))) && (var_1_58 ? (((~ var_1_41) > (var_1_94 * var_1_81)) ? (var_1_74 == ((float) (var_1_13 + var_1_12))) : (var_1_74 == ((float) (var_1_11 - var_1_13)))) : (var_1_74 == ((float) (((var_1_15 - var_1_14) + var_1_16) - (var_1_13 + var_1_12)))))) && (var_1_52 ? (var_1_75 == ((unsigned char) ((var_1_51 - (var_1_40 - var_1_54)) - var_1_73))) : 1)) && (var_1_56 ? (var_1_30 ? (var_1_76 == ((signed short int) (var_1_41 + var_1_67))) : 1) : 1)) && ((var_1_69 != ((((var_1_102) < ((- var_1_106))) ? (var_1_102) : ((- var_1_106))))) ? (((- (- var_1_8)) > (- var_1_9)) ? (var_1_77 == ((double) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : ((var_1_89 != var_1_90) ? ((var_1_3 != var_1_15) ? (var_1_77 == ((double) ((var_1_16 + var_1_13) + (var_1_14 - ((((var_1_15) > (var_1_80)) ? (var_1_15) : (var_1_80))))))) : 1) : (var_1_77 == ((double) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) : 1)) && (var_1_53 ? (var_1_81 == ((signed long int) (((((var_1_27 - (var_1_40 + var_1_46))) > (last_1_var_1_81)) ? ((var_1_27 - (var_1_40 + var_1_46))) : (last_1_var_1_81))))) : (var_1_81 == ((signed long int) (((((var_1_33 + var_1_55)) > ((last_1_var_1_81 + (var_1_38 + var_1_36)))) ? ((var_1_33 + var_1_55)) : ((last_1_var_1_81 + (var_1_38 + var_1_36))))))))) && ((var_1_68 <= var_1_80) ? ((((- var_1_12) * 500.4) <= var_1_102) ? (var_1_59 ? (var_1_101 ? (var_1_83 == ((signed char) (var_1_37 - (((((var_1_85) < (1)) ? (var_1_85) : (1))) + ((((var_1_41) < (var_1_67)) ? (var_1_41) : (var_1_67))))))) : 1) : 1) : 1) : (var_1_83 == ((signed char) ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))))) && ((((var_1_71 * var_1_73) / 2) > ((var_1_38 >> var_1_87) * (var_1_71 % var_1_40))) ? (var_1_86 == ((signed long int) ((var_1_73 + ((((var_1_31) < (var_1_46)) ? (var_1_31) : (var_1_46)))) + var_1_54))) : 1)) && (var_1_88 == ((float) ((((128.875f) > ((var_1_16 - var_1_11))) ? (128.875f) : ((var_1_16 - var_1_11))))))) && (((var_1_93 * var_1_7) <= var_1_15) ? (var_1_89 == ((signed short int) (var_1_87 + var_1_38))) : (var_1_89 == ((signed short int) (var_1_40 - (var_1_85 + var_1_67)))))) && ((var_1_26 <= var_1_25) ? ((var_1_23 < (var_1_73 ^ (- var_1_46))) ? ((((- var_1_68) >= var_1_6) || ((var_1_85 + var_1_54) == var_1_64)) ? (var_1_90 == ((unsigned long int) var_1_22)) : ((var_1_49 < (var_1_82 / var_1_36)) ? (var_1_90 == ((unsigned long int) (((((var_1_92 - var_1_54)) < (var_1_21)) ? ((var_1_92 - var_1_54)) : (var_1_21))))) : (var_1_90 == ((unsigned long int) var_1_73)))) : (var_1_90 == ((unsigned long int) (var_1_92 - var_1_46)))) : 1)) && ((var_1_49 != ((var_1_37 - var_1_45) / var_1_73)) ? (var_1_93 == ((float) (var_1_11 - (var_1_13 + ((((var_1_80) < (var_1_12)) ? (var_1_80) : (var_1_12))))))) : (var_1_93 == ((float) (15.25f + var_1_10))))) && (((var_1_104 * var_1_27) <= var_1_67) ? ((var_1_49 < (var_1_67 >> 4)) ? (var_1_94 == ((unsigned short int) (var_1_95 - var_1_54))) : (var_1_94 == ((unsigned short int) (var_1_67 + ((((var_1_96 - var_1_97) < 0 ) ? -(var_1_96 - var_1_97) : (var_1_96 - var_1_97))))))) : (var_1_94 == ((unsigned short int) (var_1_65 + (var_1_96 - var_1_46)))))) && ((var_1_111 < var_1_49) ? (var_1_98 == ((signed long int) (((((var_1_67) > ((var_1_100 - var_1_75))) ? (var_1_67) : ((var_1_100 - var_1_75)))) - (((((var_1_46 + var_1_85)) > (var_1_81)) ? ((var_1_46 + var_1_85)) : (var_1_81)))))) : ((var_1_42 <= ((((var_1_75) > (var_1_49)) ? (var_1_75) : (var_1_49)))) ? (var_1_98 == ((signed long int) (((((var_1_75) < (var_1_73)) ? (var_1_75) : (var_1_73))) - var_1_51))) : (var_1_98 == ((signed long int) var_1_100))))) && (var_1_29 ? (var_1_101 == ((unsigned char) 0)) : (var_1_101 == ((unsigned char) var_1_30)))) && (var_1_57 ? (var_1_102 == ((double) var_1_10)) : (var_1_102 == ((double) var_1_7)))) && (var_1_101 ? (var_1_103 == ((signed char) var_1_51)) : (var_1_103 == ((signed char) var_1_85)))) && (var_1_116 ? (var_1_104 == ((unsigned long int) var_1_46)) : (var_1_104 == ((unsigned long int) var_1_86)))) && (var_1_59 ? (var_1_105 == ((unsigned long int) var_1_51)) : 1)) && (var_1_30 ? (var_1_106 == ((double) var_1_9)) : (var_1_106 == ((double) var_1_7)))) && (var_1_56 ? (var_1_107 == ((unsigned char) var_1_59)) : 1)) && (var_1_109 == ((unsigned char) 0))) && (var_1_30 ? (var_1_110 == ((unsigned char) var_1_59)) : (var_1_110 == ((unsigned char) var_1_57)))) && (var_1_52 ? (var_1_111 == ((unsigned char) 64)) : 1)) && (((var_1_27 & (var_1_25 + var_1_32)) <= var_1_104) ? ((((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) < var_1_47) ? (var_1_112 == ((unsigned char) var_1_30)) : (var_1_112 == ((unsigned char) var_1_59))) : 1)) && (var_1_115 == ((unsigned char) var_1_38))) && (var_1_116 == ((unsigned char) var_1_59))
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
