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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 127.35;
double var_1_4 = 255.2;
double var_1_5 = 4.2;
double var_1_6 = 32.5;
double var_1_7 = 0.0;
double var_1_8 = 3.125;
unsigned short int var_1_9 = 256;
unsigned long int var_1_10 = 4;
unsigned long int var_1_11 = 2;
unsigned short int var_1_12 = 58398;
unsigned short int var_1_13 = 26114;
unsigned short int var_1_14 = 24847;
float var_1_15 = 5.8;
float var_1_18 = 25.75;
double var_1_19 = 7.95;
double var_1_20 = 31.25;
float var_1_21 = 0.0;
signed long int var_1_22 = 100;
signed long int var_1_24 = 1000000000;
unsigned long int var_1_25 = 50;
signed short int var_1_26 = -1;
signed short int var_1_27 = -128;
signed short int var_1_28 = 2;
signed short int var_1_29 = 8;
signed short int var_1_30 = 100;
float var_1_31 = 31.775;
signed char var_1_32 = 25;
signed char var_1_33 = 64;
double var_1_34 = 1.35;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 100;
unsigned char var_1_37 = 10;
unsigned char var_1_38 = 32;
unsigned char var_1_39 = 25;
unsigned char var_1_41 = 200;
signed char var_1_42 = 16;
signed char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
signed char var_1_51 = -25;
unsigned short int var_1_52 = 0;
unsigned char var_1_53 = 128;
float var_1_54 = 32.03;
unsigned char var_1_55 = 200;
float var_1_56 = 256.5;
signed char var_1_58 = -5;
unsigned short int var_1_59 = 59990;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 3731761130;
signed long int var_1_62 = 1101530145;
signed short int var_1_63 = -4;
signed short int var_1_64 = 32;
unsigned long int var_1_66 = 8;
unsigned long int var_1_67 = 3644597254;
signed long int var_1_68 = -4;
float var_1_69 = 31.2;
float var_1_70 = 1.06;
float var_1_71 = 127.5;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
double var_1_76 = 999999.6;
double var_1_77 = 63.177;
unsigned short int var_1_78 = 5;
unsigned short int var_1_79 = 24701;
unsigned short int var_1_80 = 18525;
unsigned char var_1_81 = 10;
unsigned char var_1_82 = 64;
unsigned char var_1_83 = 1;
unsigned short int var_1_84 = 1;
unsigned short int var_1_85 = 16;
unsigned short int var_1_86 = 4;
unsigned short int var_1_87 = 8;
signed char var_1_88 = 2;
signed short int var_1_89 = 8;
signed short int var_1_92 = 10000;
signed short int var_1_93 = 10;
float var_1_94 = 8.5;
unsigned short int var_1_95 = 8;
double var_1_96 = 4.75;
unsigned long int var_1_97 = 1;
double var_1_98 = 0.8;
float var_1_99 = 5.4;
double var_1_100 = 31.4;
double var_1_102 = 0.0;
unsigned char var_1_103 = 16;
float var_1_105 = 4.375;
float var_1_106 = 10.2;
unsigned char var_1_107 = 10;
signed long int var_1_108 = 64;
signed char var_1_109 = 8;
signed char var_1_110 = -16;
signed char var_1_111 = -10;
unsigned char var_1_112 = 0;
double var_1_113 = 64.75;
unsigned long int var_1_114 = 2;
signed char var_1_115 = -10;
signed long int var_1_116 = 200;
signed short int var_1_117 = 4;
signed short int var_1_118 = 25;
signed short int var_1_119 = -128;
signed char var_1_120 = 32;
signed char var_1_121 = 1;
signed char var_1_123 = 0;
unsigned short int var_1_124 = 4;
unsigned short int var_1_125 = 4;
signed long int var_1_126 = -10;
unsigned short int var_1_127 = 8;
double last_1_var_1_1 = 127.35;
unsigned char last_1_var_1_39 = 25;
signed short int last_1_var_1_63 = -4;
unsigned long int last_1_var_1_66 = 8;
float last_1_var_1_69 = 31.2;
unsigned char last_1_var_1_72 = 1;
unsigned short int last_1_var_1_78 = 5;
unsigned char last_1_var_1_81 = 10;
signed short int last_1_var_1_89 = 8;
unsigned short int last_1_var_1_95 = 8;
unsigned char last_1_var_1_112 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_112) {
  if (var_1_10 <= var_1_12) {
   var_1_44 = (last_1_var_1_72 || (last_1_var_1_112 || (last_1_var_1_72 || var_1_47)));
  } else {
   if (last_1_var_1_1 > (- var_1_6)) {
    if (var_1_4 <= last_1_var_1_69) {
     var_1_44 = ((var_1_47 && var_1_49) && (last_1_var_1_112 || (! var_1_50)));
    }
   } else {
    if (var_1_30 == (var_1_11 - ((((last_1_var_1_81) < (var_1_10)) ? (last_1_var_1_81) : (var_1_10))))) {
     var_1_44 = (var_1_50 || (! var_1_47));
    } else {
     var_1_44 = (var_1_49 || var_1_47);
    }
   }
  }
 } else {
  if (var_1_47) {
   var_1_44 = (! var_1_50);
  } else {
   if (var_1_11 > var_1_13) {
    var_1_44 = ((var_1_6 > var_1_18) && var_1_50);
   }
  }
 }
 if (var_1_44) {
  var_1_53 = (var_1_37 + (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_38));
 }
 var_1_116 = var_1_53;
 if (((((256) < 0 ) ? -(256) : (256))) <= ((-50 + var_1_24) / var_1_13)) {
  var_1_25 = var_1_24;
 } else {
  var_1_25 = var_1_14;
 }
 var_1_31 = ((var_1_8 + var_1_21) - var_1_7);
 if (var_1_25 < var_1_12) {
  if (-4 <= ((var_1_11 << var_1_27) + var_1_29)) {
   var_1_32 = ((var_1_33 - var_1_10) - var_1_11);
  } else {
   var_1_32 = (var_1_11 - ((((var_1_10) > (var_1_33)) ? (var_1_10) : (var_1_33))));
  }
 }
 unsigned long int stepLocal_3 = var_1_10;
 unsigned long int stepLocal_2 = var_1_25;
 if (stepLocal_2 <= (var_1_10 / var_1_33)) {
  var_1_35 = ((((128 - var_1_10) < 0 ) ? -(128 - var_1_10) : (128 - var_1_10)));
 } else {
  if (stepLocal_3 == var_1_11) {
   var_1_35 = (var_1_11 + var_1_33);
  } else {
   var_1_35 = (var_1_10 + var_1_11);
  }
 }
 signed long int stepLocal_4 = -10;
 if (stepLocal_4 > ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) {
  var_1_36 = ((((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) < 0 ) ? -((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) : ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))))) + (var_1_37 + var_1_38));
 } else {
  var_1_36 = var_1_38;
 }
 if (var_1_41 <= ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
  var_1_42 = (var_1_10 + var_1_11);
 }
 var_1_54 = var_1_21;
 var_1_55 = var_1_38;
 if (var_1_47) {
  var_1_76 = ((((((var_1_21 + var_1_8) - var_1_6)) > (((((1.2) > (var_1_4)) ? (1.2) : (var_1_4))))) ? (((var_1_21 + var_1_8) - var_1_6)) : (((((1.2) > (var_1_4)) ? (1.2) : (var_1_4))))));
 } else {
  if (var_1_18 > ((((var_1_8) > (16.5f)) ? (var_1_8) : (16.5f)))) {
   var_1_76 = ((8.5 + ((((var_1_8) < (var_1_21)) ? (var_1_8) : (var_1_21)))) - (var_1_7 + var_1_77));
  }
 }
 if (var_1_74) {
  var_1_96 = var_1_4;
 } else {
  var_1_96 = (var_1_77 + ((((var_1_70) < (var_1_8)) ? (var_1_70) : (var_1_8))));
 }
 if (var_1_50) {
  var_1_105 = var_1_6;
 }
 var_1_108 = var_1_38;
 if (var_1_73) {
  var_1_109 = var_1_38;
 }
 if (var_1_50) {
  var_1_110 = var_1_11;
 }
 if (var_1_44) {
  var_1_111 = 8;
 } else {
  var_1_111 = var_1_37;
 }
 if (var_1_50) {
  var_1_113 = var_1_18;
 }
 var_1_115 = var_1_37;
 var_1_117 = var_1_64;
 var_1_118 = -64;
 if (var_1_74) {
  var_1_120 = var_1_33;
 } else {
  var_1_120 = var_1_41;
 }
 if (var_1_49) {
  var_1_121 = (var_1_10 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))));
 }
 var_1_123 = ((((-32) < (var_1_37)) ? (-32) : (var_1_37)));
 var_1_124 = var_1_125;
 var_1_126 = var_1_29;
 var_1_127 = var_1_38;
 signed long int stepLocal_12 = var_1_116 - var_1_38;
 if (256 <= stepLocal_12) {
  var_1_69 = (var_1_18 - ((((var_1_6) > (var_1_19)) ? (var_1_6) : (var_1_19))));
 } else {
  var_1_69 = (((((var_1_70 + var_1_71) < 0 ) ? -(var_1_70 + var_1_71) : (var_1_70 + var_1_71))) + var_1_7);
 }
 signed long int stepLocal_0 = (64 << var_1_10) >> var_1_11;
 if (stepLocal_0 > 10000) {
  if (! (var_1_7 < (var_1_8 + var_1_76))) {
   var_1_9 = (var_1_12 - (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_10));
  }
 } else {
  var_1_9 = (((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) < 0 ) ? -((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) : ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))));
 }
 if (var_1_76 != ((var_1_18 * var_1_6) / var_1_21)) {
  var_1_26 = ((var_1_11 + ((((var_1_10) > (var_1_29)) ? (var_1_10) : (var_1_29)))) - var_1_30);
 } else {
  var_1_26 = var_1_29;
 }
 if (var_1_26 != var_1_41) {
  var_1_52 = (var_1_12 - (var_1_11 + var_1_29));
 }
 signed char stepLocal_8 = var_1_43;
 if (((var_1_59 - var_1_118) - var_1_38) <= stepLocal_8) {
  var_1_58 = var_1_11;
 } else {
  var_1_58 = (var_1_11 - var_1_38);
 }
 var_1_66 = (((((var_1_67 - last_1_var_1_66)) > ((var_1_124 + var_1_25))) ? ((var_1_67 - last_1_var_1_66)) : ((var_1_124 + var_1_25))));
 unsigned long int stepLocal_13 = var_1_25 % 2;
 if (var_1_126 >= stepLocal_13) {
  var_1_72 = (var_1_50 || (var_1_73 || (var_1_74 || var_1_75)));
 }
 var_1_97 = ((((var_1_52) > (var_1_10)) ? (var_1_52) : (var_1_10)));
 signed short int stepLocal_22 = var_1_117;
 if (var_1_25 >= stepLocal_22) {
  var_1_98 = (((((var_1_8) < ((var_1_21 + var_1_7))) ? (var_1_8) : ((var_1_21 + var_1_7)))) - var_1_19);
 } else {
  if (var_1_96 >= (var_1_7 * var_1_6)) {
   var_1_98 = ((((var_1_21 + ((((var_1_7) > (var_1_71)) ? (var_1_7) : (var_1_71)))) < 0 ) ? -(var_1_21 + ((((var_1_7) > (var_1_71)) ? (var_1_7) : (var_1_71)))) : (var_1_21 + ((((var_1_7) > (var_1_71)) ? (var_1_7) : (var_1_71))))));
  } else {
   var_1_98 = (var_1_20 - var_1_77);
  }
 }
 if (var_1_92 != (~ (var_1_33 * var_1_52))) {
  var_1_99 = (var_1_7 - ((((var_1_20) < (((((var_1_8) < (var_1_6)) ? (var_1_8) : (var_1_6))))) ? (var_1_20) : (((((var_1_8) < (var_1_6)) ? (var_1_8) : (var_1_6)))))));
 } else {
  var_1_99 = (var_1_70 + ((((var_1_71) > (128.5f)) ? (var_1_71) : (128.5f))));
 }
 if (var_1_72) {
  var_1_112 = var_1_49;
 }
 if (var_1_112) {
  var_1_114 = 128u;
 } else {
  var_1_114 = var_1_11;
 }
 var_1_119 = var_1_123;
 signed long int stepLocal_1 = 256 >> var_1_11;
 if (stepLocal_1 != (var_1_97 * ((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14))))) {
  var_1_22 = (var_1_10 - (var_1_11 + var_1_97));
 } else {
  if ((- var_1_76) < var_1_4) {
   var_1_22 = (((var_1_24 - var_1_11) - var_1_13) + var_1_97);
  } else {
   var_1_22 = (var_1_11 - var_1_10);
  }
 }
 if (var_1_72) {
  var_1_34 = (var_1_8 - var_1_7);
 }
 signed long int stepLocal_6 = var_1_24;
 unsigned char stepLocal_5 = var_1_44;
 if ((var_1_29 * last_1_var_1_39) > stepLocal_6) {
  var_1_39 = ((((var_1_38) > ((var_1_11 + var_1_37))) ? (var_1_38) : ((var_1_11 + var_1_37))));
 } else {
  if (stepLocal_5 || ((var_1_66 < var_1_12) || var_1_112)) {
   var_1_39 = ((var_1_41 - var_1_10) - var_1_37);
  } else {
   var_1_39 = (var_1_37 + var_1_10);
  }
 }
 if ((! var_1_112) || var_1_44) {
  var_1_51 = (var_1_10 - (2 + var_1_38));
 }
 signed short int stepLocal_7 = var_1_30;
 if (var_1_66 > stepLocal_7) {
  var_1_56 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 if ((var_1_114 + (var_1_37 / var_1_33)) > (((((var_1_24) < (var_1_59)) ? (var_1_24) : (var_1_59))) - ((((last_1_var_1_81) > (var_1_30)) ? (last_1_var_1_81) : (var_1_30))))) {
  var_1_81 = ((((var_1_33 + (var_1_82 - var_1_10)) < 0 ) ? -(var_1_33 + (var_1_82 - var_1_10)) : (var_1_33 + (var_1_82 - var_1_10))));
 } else {
  var_1_81 = ((((((((2) > (var_1_83)) ? (2) : (var_1_83)))) < ((var_1_41 - var_1_82))) ? (((((2) > (var_1_83)) ? (2) : (var_1_83)))) : ((var_1_41 - var_1_82))));
 }
 unsigned char stepLocal_16 = var_1_73;
 signed long int stepLocal_15 = 16;
 if (stepLocal_15 < var_1_116) {
  if (var_1_44 && stepLocal_16) {
   var_1_84 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
  } else {
   var_1_84 = (var_1_12 - var_1_127);
  }
 } else {
  var_1_84 = ((((((var_1_14) < (25597)) ? (var_1_14) : (25597))) + (var_1_79 - var_1_37)) - var_1_114);
 }
 signed long int stepLocal_21 = var_1_22;
 if (var_1_18 > ((((var_1_76) > (var_1_34)) ? (var_1_76) : (var_1_34)))) {
  if (var_1_43 > stepLocal_21) {
   var_1_94 = (var_1_77 - (var_1_7 + var_1_8));
  }
 } else {
  if (var_1_112) {
   var_1_94 = (var_1_70 + 25.8f);
  } else {
   var_1_94 = var_1_4;
  }
 }
 if (var_1_73 || var_1_112) {
  if (var_1_7 <= ((var_1_6 - var_1_21) * (- var_1_98))) {
   var_1_95 = var_1_29;
  }
 } else {
  var_1_95 = (last_1_var_1_95 + (var_1_14 - var_1_10));
 }
 signed long int stepLocal_24 = var_1_124 * var_1_13;
 unsigned long int stepLocal_23 = 2u;
 if ((var_1_114 + var_1_11) > stepLocal_23) {
  if (stepLocal_24 >= var_1_114) {
   var_1_100 = ((var_1_102 - var_1_8) - var_1_7);
  }
 }
 if (var_1_61 <= ((((var_1_114) < 0 ) ? -(var_1_114) : (var_1_114)))) {
  var_1_103 = var_1_37;
 } else {
  var_1_103 = ((((var_1_10) < (var_1_41)) ? (var_1_10) : (var_1_41)));
 }
 if (var_1_112) {
  var_1_106 = var_1_6;
 } else {
  var_1_106 = var_1_4;
 }
 if (var_1_112) {
  var_1_107 = var_1_41;
 } else {
  var_1_107 = 5;
 }
 if (var_1_113 <= var_1_56) {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = (var_1_6 - ((2.5684615569228887E18 + var_1_7) - var_1_8));
 }
 if (var_1_6 < (- (var_1_34 / 100.75))) {
  var_1_15 = (var_1_6 - (var_1_7 + var_1_8));
 } else {
  if ((var_1_97 <= var_1_10) || var_1_72) {
   if ((var_1_8 - (var_1_7 + var_1_18)) <= (var_1_6 - (var_1_19 + var_1_20))) {
    var_1_15 = (((((((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) < (var_1_8)) ? (((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) : (var_1_8))) - var_1_6);
   }
  } else {
   var_1_15 = ((var_1_7 - (var_1_21 - 127.125f)) + 31.8f);
  }
 }
 signed char stepLocal_11 = var_1_43;
 if (var_1_24 >= stepLocal_11) {
  if ((var_1_76 / var_1_21) < ((((var_1_106) > (var_1_7)) ? (var_1_106) : (var_1_7)))) {
   var_1_68 = var_1_28;
  }
 }
 signed long int stepLocal_18 = var_1_24;
 signed char stepLocal_17 = var_1_33;
 if (var_1_30 >= stepLocal_17) {
  if (var_1_103 <= stepLocal_18) {
   var_1_85 = ((((var_1_12 - ((((var_1_80) > (var_1_86)) ? (var_1_80) : (var_1_86)))) < 0 ) ? -(var_1_12 - ((((var_1_80) > (var_1_86)) ? (var_1_80) : (var_1_86)))) : (var_1_12 - ((((var_1_80) > (var_1_86)) ? (var_1_80) : (var_1_86))))));
  }
 } else {
  var_1_85 = (var_1_52 + 8);
 }
 if (var_1_100 == ((- var_1_19) * var_1_20)) {
  var_1_88 = var_1_43;
 } else {
  var_1_88 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 }
 if (var_1_75) {
  if (var_1_114 < last_1_var_1_89) {
   var_1_89 = 256;
  } else {
   var_1_89 = ((((var_1_9) < (var_1_59)) ? (var_1_9) : (var_1_59)));
  }
 } else {
  var_1_89 = (10 - ((var_1_92 - var_1_68) + var_1_93));
 }
 unsigned short int stepLocal_10 = var_1_13;
 unsigned long int stepLocal_9 = var_1_97 + var_1_12;
 if (var_1_5 >= (- var_1_20)) {
  if ((var_1_85 / (var_1_61 - var_1_11)) >= stepLocal_9) {
   if (var_1_49) {
    var_1_60 = (var_1_41 - var_1_11);
   } else {
    var_1_60 = ((var_1_38 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) + 32);
   }
  } else {
   if (((var_1_62 - var_1_12) - var_1_33) < stepLocal_10) {
    var_1_60 = ((((var_1_41) > (0)) ? (var_1_41) : (0)));
   }
  }
 } else {
  if (var_1_44) {
   var_1_60 = var_1_11;
  } else {
   var_1_60 = (var_1_41 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
  }
 }
 unsigned long int stepLocal_14 = var_1_97;
 if (last_1_var_1_78 <= stepLocal_14) {
  var_1_78 = (((var_1_79 - var_1_89) + var_1_80) - (((((var_1_38 + var_1_10)) > (10000)) ? ((var_1_38 + var_1_10)) : (10000))));
 }
 unsigned char stepLocal_20 = var_1_75;
 signed long int stepLocal_19 = var_1_78 ^ var_1_95;
 if (var_1_112 && stepLocal_20) {
  if (stepLocal_19 > var_1_29) {
   var_1_87 = ((((((var_1_14) < (var_1_80)) ? (var_1_14) : (var_1_80))) - var_1_82) + ((var_1_81 + var_1_41) + var_1_33));
  }
 } else {
  var_1_87 = (var_1_38 + var_1_52);
 }
 if (var_1_47 && (var_1_50 && var_1_49)) {
  if (var_1_69 >= ((var_1_20 + var_1_18) - var_1_8)) {
   var_1_63 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
  }
 } else {
  if (! (var_1_12 < (var_1_97 / var_1_14))) {
   if (last_1_var_1_63 > var_1_114) {
    var_1_63 = (var_1_89 + var_1_27);
   } else {
    if (var_1_34 > var_1_76) {
     var_1_63 = ((((var_1_115) > ((((((var_1_29) < (var_1_64)) ? (var_1_29) : (var_1_64))) - var_1_33))) ? (var_1_115) : ((((((var_1_29) < (var_1_64)) ? (var_1_29) : (var_1_64))) - var_1_33))));
    } else {
     if (var_1_25 >= var_1_97) {
      if (var_1_59 == var_1_38) {
       if (var_1_72 && (var_1_30 == var_1_114)) {
        var_1_63 = (var_1_87 - var_1_41);
       } else {
        var_1_63 = ((((((var_1_124) > (0)) ? (var_1_124) : (0))) + var_1_25) - ((((var_1_10) > (var_1_33)) ? (var_1_10) : (var_1_33))));
       }
      }
     } else {
      var_1_63 = ((((((((var_1_11) > (((((500) > (var_1_28)) ? (500) : (var_1_28))))) ? (var_1_11) : (((((500) > (var_1_28)) ? (500) : (var_1_28))))))) < (((((var_1_41) > ((var_1_60 + var_1_95))) ? (var_1_41) : ((var_1_60 + var_1_95)))))) ? (((((var_1_11) > (((((500) > (var_1_28)) ? (500) : (var_1_28))))) ? (var_1_11) : (((((500) > (var_1_28)) ? (500) : (var_1_28))))))) : (((((var_1_41) > ((var_1_60 + var_1_95))) ? (var_1_41) : ((var_1_60 + var_1_95)))))));
     }
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 2305843.009213691400e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 24);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 30);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16383);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427388000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427388000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 2305843.009213691400e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= 536870911);
 assume_abort_if_not(var_1_24 <= 1073741823);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -16383);
 assume_abort_if_not(var_1_27 <= 16383);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -16383);
 assume_abort_if_not(var_1_28 <= 16383);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 62);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 64);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 190);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -31);
 assume_abort_if_not(var_1_43 <= 31);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 1);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 49151);
 assume_abort_if_not(var_1_59 <= 65535);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 2147483647);
 assume_abort_if_not(var_1_61 <= 4294967295);
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= 1073741823);
 assume_abort_if_not(var_1_62 <= 2147483647);
 var_1_64 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_64 >= -1);
 assume_abort_if_not(var_1_64 <= 32766);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 2147483647);
 assume_abort_if_not(var_1_67 <= 4294967294);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= -230584.3009213691400e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691400e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -230584.3009213691400e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 0);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 0);
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427383000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_79 >= 24575);
 assume_abort_if_not(var_1_79 <= 32767);
 var_1_80 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_80 >= 16384);
 assume_abort_if_not(var_1_80 <= 32767);
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 63);
 assume_abort_if_not(var_1_82 <= 127);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 254);
 var_1_86 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 32767);
 var_1_92 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_92 >= 8191);
 assume_abort_if_not(var_1_92 <= 16383);
 var_1_93 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_93 >= 0);
 assume_abort_if_not(var_1_93 <= 16383);
 var_1_102 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_102 >= 4611686.018427383000e+12F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 9223372.036854766000e+12F && var_1_102 >= 1.0e-20F ));
 var_1_125 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_125 >= 0);
 assume_abort_if_not(var_1_125 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_112 = var_1_112;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_113 <= var_1_56) ? (var_1_1 == ((double) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((double) (var_1_6 - ((2.5684615569228887E18 + var_1_7) - var_1_8))))) && ((((64 << var_1_10) >> var_1_11) > 10000) ? ((! (var_1_7 < (var_1_8 + var_1_76))) ? (var_1_9 == ((unsigned short int) (var_1_12 - (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_10)))) : 1) : (var_1_9 == ((unsigned short int) (((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) < 0 ) ? -((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) : ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))))))))) && ((var_1_6 < (- (var_1_34 / 100.75))) ? (var_1_15 == ((float) (var_1_6 - (var_1_7 + var_1_8)))) : (((var_1_97 <= var_1_10) || var_1_72) ? (((var_1_8 - (var_1_7 + var_1_18)) <= (var_1_6 - (var_1_19 + var_1_20))) ? (var_1_15 == ((float) (((((((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) < (var_1_8)) ? (((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) : (var_1_8))) - var_1_6))) : 1) : (var_1_15 == ((float) ((var_1_7 - (var_1_21 - 127.125f)) + 31.8f)))))) && (((256 >> var_1_11) != (var_1_97 * ((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14))))) ? (var_1_22 == ((signed long int) (var_1_10 - (var_1_11 + var_1_97)))) : (((- var_1_76) < var_1_4) ? (var_1_22 == ((signed long int) (((var_1_24 - var_1_11) - var_1_13) + var_1_97))) : (var_1_22 == ((signed long int) (var_1_11 - var_1_10)))))) && ((((((256) < 0 ) ? -(256) : (256))) <= ((-50 + var_1_24) / var_1_13)) ? (var_1_25 == ((unsigned long int) var_1_24)) : (var_1_25 == ((unsigned long int) var_1_14)))) && ((var_1_76 != ((var_1_18 * var_1_6) / var_1_21)) ? (var_1_26 == ((signed short int) ((var_1_11 + ((((var_1_10) > (var_1_29)) ? (var_1_10) : (var_1_29)))) - var_1_30))) : (var_1_26 == ((signed short int) var_1_29)))) && (var_1_31 == ((float) ((var_1_8 + var_1_21) - var_1_7)))) && ((var_1_25 < var_1_12) ? ((-4 <= ((var_1_11 << var_1_27) + var_1_29)) ? (var_1_32 == ((signed char) ((var_1_33 - var_1_10) - var_1_11))) : (var_1_32 == ((signed char) (var_1_11 - ((((var_1_10) > (var_1_33)) ? (var_1_10) : (var_1_33))))))) : 1)) && (var_1_72 ? (var_1_34 == ((double) (var_1_8 - var_1_7))) : 1)) && ((var_1_25 <= (var_1_10 / var_1_33)) ? (var_1_35 == ((unsigned char) ((((128 - var_1_10) < 0 ) ? -(128 - var_1_10) : (128 - var_1_10))))) : ((var_1_10 == var_1_11) ? (var_1_35 == ((unsigned char) (var_1_11 + var_1_33))) : (var_1_35 == ((unsigned char) (var_1_10 + var_1_11)))))) && ((-10 > ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) ? (var_1_36 == ((unsigned char) ((((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) < 0 ) ? -((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) : ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))))) + (var_1_37 + var_1_38)))) : (var_1_36 == ((unsigned char) var_1_38)))) && (((var_1_29 * last_1_var_1_39) > var_1_24) ? (var_1_39 == ((unsigned char) ((((var_1_38) > ((var_1_11 + var_1_37))) ? (var_1_38) : ((var_1_11 + var_1_37)))))) : ((var_1_44 || ((var_1_66 < var_1_12) || var_1_112)) ? (var_1_39 == ((unsigned char) ((var_1_41 - var_1_10) - var_1_37))) : (var_1_39 == ((unsigned char) (var_1_37 + var_1_10)))))) && ((var_1_41 <= ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) ? (var_1_42 == ((signed char) (var_1_10 + var_1_11))) : 1)) && (last_1_var_1_112 ? ((var_1_10 <= var_1_12) ? (var_1_44 == ((unsigned char) (last_1_var_1_72 || (last_1_var_1_112 || (last_1_var_1_72 || var_1_47))))) : ((last_1_var_1_1 > (- var_1_6)) ? ((var_1_4 <= last_1_var_1_69) ? (var_1_44 == ((unsigned char) ((var_1_47 && var_1_49) && (last_1_var_1_112 || (! var_1_50))))) : 1) : ((var_1_30 == (var_1_11 - ((((last_1_var_1_81) < (var_1_10)) ? (last_1_var_1_81) : (var_1_10))))) ? (var_1_44 == ((unsigned char) (var_1_50 || (! var_1_47)))) : (var_1_44 == ((unsigned char) (var_1_49 || var_1_47)))))) : (var_1_47 ? (var_1_44 == ((unsigned char) (! var_1_50))) : ((var_1_11 > var_1_13) ? (var_1_44 == ((unsigned char) ((var_1_6 > var_1_18) && var_1_50))) : 1)))) && (((! var_1_112) || var_1_44) ? (var_1_51 == ((signed char) (var_1_10 - (2 + var_1_38)))) : 1)) && ((var_1_26 != var_1_41) ? (var_1_52 == ((unsigned short int) (var_1_12 - (var_1_11 + var_1_29)))) : 1)) && (var_1_44 ? (var_1_53 == ((unsigned char) (var_1_37 + (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_38)))) : 1)) && (var_1_54 == ((float) var_1_21))) && (var_1_55 == ((unsigned char) var_1_38))) && ((var_1_66 > var_1_30) ? (var_1_56 == ((float) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1)) && ((((var_1_59 - var_1_118) - var_1_38) <= var_1_43) ? (var_1_58 == ((signed char) var_1_11)) : (var_1_58 == ((signed char) (var_1_11 - var_1_38))))) && ((var_1_5 >= (- var_1_20)) ? (((var_1_85 / (var_1_61 - var_1_11)) >= (var_1_97 + var_1_12)) ? (var_1_49 ? (var_1_60 == ((unsigned char) (var_1_41 - var_1_11))) : (var_1_60 == ((unsigned char) ((var_1_38 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) + 32)))) : ((((var_1_62 - var_1_12) - var_1_33) < var_1_13) ? (var_1_60 == ((unsigned char) ((((var_1_41) > (0)) ? (var_1_41) : (0))))) : 1)) : (var_1_44 ? (var_1_60 == ((unsigned char) var_1_11)) : (var_1_60 == ((unsigned char) (var_1_41 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))))) && ((var_1_47 && (var_1_50 && var_1_49)) ? ((var_1_69 >= ((var_1_20 + var_1_18) - var_1_8)) ? (var_1_63 == ((signed short int) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : 1) : ((! (var_1_12 < (var_1_97 / var_1_14))) ? ((last_1_var_1_63 > var_1_114) ? (var_1_63 == ((signed short int) (var_1_89 + var_1_27))) : ((var_1_34 > var_1_76) ? (var_1_63 == ((signed short int) ((((var_1_115) > ((((((var_1_29) < (var_1_64)) ? (var_1_29) : (var_1_64))) - var_1_33))) ? (var_1_115) : ((((((var_1_29) < (var_1_64)) ? (var_1_29) : (var_1_64))) - var_1_33)))))) : ((var_1_25 >= var_1_97) ? ((var_1_59 == var_1_38) ? ((var_1_72 && (var_1_30 == var_1_114)) ? (var_1_63 == ((signed short int) (var_1_87 - var_1_41))) : (var_1_63 == ((signed short int) ((((((var_1_124) > (0)) ? (var_1_124) : (0))) + var_1_25) - ((((var_1_10) > (var_1_33)) ? (var_1_10) : (var_1_33))))))) : 1) : (var_1_63 == ((signed short int) ((((((((var_1_11) > (((((500) > (var_1_28)) ? (500) : (var_1_28))))) ? (var_1_11) : (((((500) > (var_1_28)) ? (500) : (var_1_28))))))) < (((((var_1_41) > ((var_1_60 + var_1_95))) ? (var_1_41) : ((var_1_60 + var_1_95)))))) ? (((((var_1_11) > (((((500) > (var_1_28)) ? (500) : (var_1_28))))) ? (var_1_11) : (((((500) > (var_1_28)) ? (500) : (var_1_28))))))) : (((((var_1_41) > ((var_1_60 + var_1_95))) ? (var_1_41) : ((var_1_60 + var_1_95)))))))))))) : 1))) && (var_1_66 == ((unsigned long int) (((((var_1_67 - last_1_var_1_66)) > ((var_1_124 + var_1_25))) ? ((var_1_67 - last_1_var_1_66)) : ((var_1_124 + var_1_25))))))) && ((var_1_24 >= var_1_43) ? (((var_1_76 / var_1_21) < ((((var_1_106) > (var_1_7)) ? (var_1_106) : (var_1_7)))) ? (var_1_68 == ((signed long int) var_1_28)) : 1) : 1)) && ((256 <= (var_1_116 - var_1_38)) ? (var_1_69 == ((float) (var_1_18 - ((((var_1_6) > (var_1_19)) ? (var_1_6) : (var_1_19)))))) : (var_1_69 == ((float) (((((var_1_70 + var_1_71) < 0 ) ? -(var_1_70 + var_1_71) : (var_1_70 + var_1_71))) + var_1_7))))) && ((var_1_126 >= (var_1_25 % 2)) ? (var_1_72 == ((unsigned char) (var_1_50 || (var_1_73 || (var_1_74 || var_1_75))))) : 1)) && (var_1_47 ? (var_1_76 == ((double) ((((((var_1_21 + var_1_8) - var_1_6)) > (((((1.2) > (var_1_4)) ? (1.2) : (var_1_4))))) ? (((var_1_21 + var_1_8) - var_1_6)) : (((((1.2) > (var_1_4)) ? (1.2) : (var_1_4)))))))) : ((var_1_18 > ((((var_1_8) > (16.5f)) ? (var_1_8) : (16.5f)))) ? (var_1_76 == ((double) ((8.5 + ((((var_1_8) < (var_1_21)) ? (var_1_8) : (var_1_21)))) - (var_1_7 + var_1_77)))) : 1))) && ((last_1_var_1_78 <= var_1_97) ? (var_1_78 == ((unsigned short int) (((var_1_79 - var_1_89) + var_1_80) - (((((var_1_38 + var_1_10)) > (10000)) ? ((var_1_38 + var_1_10)) : (10000)))))) : 1)) && (((var_1_114 + (var_1_37 / var_1_33)) > (((((var_1_24) < (var_1_59)) ? (var_1_24) : (var_1_59))) - ((((last_1_var_1_81) > (var_1_30)) ? (last_1_var_1_81) : (var_1_30))))) ? (var_1_81 == ((unsigned char) ((((var_1_33 + (var_1_82 - var_1_10)) < 0 ) ? -(var_1_33 + (var_1_82 - var_1_10)) : (var_1_33 + (var_1_82 - var_1_10)))))) : (var_1_81 == ((unsigned char) ((((((((2) > (var_1_83)) ? (2) : (var_1_83)))) < ((var_1_41 - var_1_82))) ? (((((2) > (var_1_83)) ? (2) : (var_1_83)))) : ((var_1_41 - var_1_82)))))))) && ((16 < var_1_116) ? ((var_1_44 && var_1_73) ? (var_1_84 == ((unsigned short int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_84 == ((unsigned short int) (var_1_12 - var_1_127)))) : (var_1_84 == ((unsigned short int) ((((((var_1_14) < (25597)) ? (var_1_14) : (25597))) + (var_1_79 - var_1_37)) - var_1_114))))) && ((var_1_30 >= var_1_33) ? ((var_1_103 <= var_1_24) ? (var_1_85 == ((unsigned short int) ((((var_1_12 - ((((var_1_80) > (var_1_86)) ? (var_1_80) : (var_1_86)))) < 0 ) ? -(var_1_12 - ((((var_1_80) > (var_1_86)) ? (var_1_80) : (var_1_86)))) : (var_1_12 - ((((var_1_80) > (var_1_86)) ? (var_1_80) : (var_1_86)))))))) : 1) : (var_1_85 == ((unsigned short int) (var_1_52 + 8))))) && ((var_1_112 && var_1_75) ? (((var_1_78 ^ var_1_95) > var_1_29) ? (var_1_87 == ((unsigned short int) ((((((var_1_14) < (var_1_80)) ? (var_1_14) : (var_1_80))) - var_1_82) + ((var_1_81 + var_1_41) + var_1_33)))) : 1) : (var_1_87 == ((unsigned short int) (var_1_38 + var_1_52))))) && ((var_1_100 == ((- var_1_19) * var_1_20)) ? (var_1_88 == ((signed char) var_1_43)) : (var_1_88 == ((signed char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) && (var_1_75 ? ((var_1_114 < last_1_var_1_89) ? (var_1_89 == ((signed short int) 256)) : (var_1_89 == ((signed short int) ((((var_1_9) < (var_1_59)) ? (var_1_9) : (var_1_59)))))) : (var_1_89 == ((signed short int) (10 - ((var_1_92 - var_1_68) + var_1_93)))))) && ((var_1_18 > ((((var_1_76) > (var_1_34)) ? (var_1_76) : (var_1_34)))) ? ((var_1_43 > var_1_22) ? (var_1_94 == ((float) (var_1_77 - (var_1_7 + var_1_8)))) : 1) : (var_1_112 ? (var_1_94 == ((float) (var_1_70 + 25.8f))) : (var_1_94 == ((float) var_1_4))))) && ((var_1_73 || var_1_112) ? ((var_1_7 <= ((var_1_6 - var_1_21) * (- var_1_98))) ? (var_1_95 == ((unsigned short int) var_1_29)) : 1) : (var_1_95 == ((unsigned short int) (last_1_var_1_95 + (var_1_14 - var_1_10)))))) && (var_1_74 ? (var_1_96 == ((double) var_1_4)) : (var_1_96 == ((double) (var_1_77 + ((((var_1_70) < (var_1_8)) ? (var_1_70) : (var_1_8)))))))) && (var_1_97 == ((unsigned long int) ((((var_1_52) > (var_1_10)) ? (var_1_52) : (var_1_10)))))) && ((var_1_25 >= var_1_117) ? (var_1_98 == ((double) (((((var_1_8) < ((var_1_21 + var_1_7))) ? (var_1_8) : ((var_1_21 + var_1_7)))) - var_1_19))) : ((var_1_96 >= (var_1_7 * var_1_6)) ? (var_1_98 == ((double) ((((var_1_21 + ((((var_1_7) > (var_1_71)) ? (var_1_7) : (var_1_71)))) < 0 ) ? -(var_1_21 + ((((var_1_7) > (var_1_71)) ? (var_1_7) : (var_1_71)))) : (var_1_21 + ((((var_1_7) > (var_1_71)) ? (var_1_7) : (var_1_71)))))))) : (var_1_98 == ((double) (var_1_20 - var_1_77)))))) && ((var_1_92 != (~ (var_1_33 * var_1_52))) ? (var_1_99 == ((float) (var_1_7 - ((((var_1_20) < (((((var_1_8) < (var_1_6)) ? (var_1_8) : (var_1_6))))) ? (var_1_20) : (((((var_1_8) < (var_1_6)) ? (var_1_8) : (var_1_6))))))))) : (var_1_99 == ((float) (var_1_70 + ((((var_1_71) > (128.5f)) ? (var_1_71) : (128.5f)))))))) && (((var_1_114 + var_1_11) > 2u) ? (((var_1_124 * var_1_13) >= var_1_114) ? (var_1_100 == ((double) ((var_1_102 - var_1_8) - var_1_7))) : 1) : 1)) && ((var_1_61 <= ((((var_1_114) < 0 ) ? -(var_1_114) : (var_1_114)))) ? (var_1_103 == ((unsigned char) var_1_37)) : (var_1_103 == ((unsigned char) ((((var_1_10) < (var_1_41)) ? (var_1_10) : (var_1_41))))))) && (var_1_50 ? (var_1_105 == ((float) var_1_6)) : 1)) && (var_1_112 ? (var_1_106 == ((float) var_1_6)) : (var_1_106 == ((float) var_1_4)))) && (var_1_112 ? (var_1_107 == ((unsigned char) var_1_41)) : (var_1_107 == ((unsigned char) 5)))) && (var_1_108 == ((signed long int) var_1_38))) && (var_1_73 ? (var_1_109 == ((signed char) var_1_38)) : 1)) && (var_1_50 ? (var_1_110 == ((signed char) var_1_11)) : 1)) && (var_1_44 ? (var_1_111 == ((signed char) 8)) : (var_1_111 == ((signed char) var_1_37)))) && (var_1_72 ? (var_1_112 == ((unsigned char) var_1_49)) : 1)) && (var_1_50 ? (var_1_113 == ((double) var_1_18)) : 1)) && (var_1_112 ? (var_1_114 == ((unsigned long int) 128u)) : (var_1_114 == ((unsigned long int) var_1_11)))) && (var_1_115 == ((signed char) var_1_37))) && (var_1_116 == ((signed long int) var_1_53))) && (var_1_117 == ((signed short int) var_1_64))) && (var_1_118 == ((signed short int) -64))) && (var_1_119 == ((signed short int) var_1_123))) && (var_1_74 ? (var_1_120 == ((signed char) var_1_33)) : (var_1_120 == ((signed char) var_1_41)))) && (var_1_49 ? (var_1_121 == ((signed char) (var_1_10 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))) : 1)) && (var_1_123 == ((signed char) ((((-32) < (var_1_37)) ? (-32) : (var_1_37)))))) && (var_1_124 == ((unsigned short int) var_1_125))) && (var_1_126 == ((signed long int) var_1_29))) && (var_1_127 == ((unsigned short int) var_1_38))
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
