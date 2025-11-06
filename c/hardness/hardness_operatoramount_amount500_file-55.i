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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 1;
float var_1_16 = 63.2;
float var_1_17 = 99999999999999.5;
float var_1_18 = 32.4;
signed char var_1_19 = -1;
signed char var_1_20 = 100;
signed char var_1_21 = 0;
signed char var_1_22 = 5;
signed char var_1_23 = 4;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_27 = 1;
signed char var_1_28 = 0;
signed char var_1_29 = 64;
unsigned char var_1_30 = 16;
signed char var_1_31 = -25;
float var_1_33 = -0.5;
float var_1_34 = 99.25;
float var_1_35 = 3.25;
float var_1_36 = 32.5;
float var_1_37 = 32.75;
double var_1_38 = 100.25;
double var_1_39 = 128.1;
signed long int var_1_40 = -4;
signed long int var_1_41 = 32;
signed long int var_1_42 = 128;
signed char var_1_43 = 64;
signed char var_1_44 = 50;
unsigned short int var_1_45 = 32;
unsigned char var_1_46 = 32;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 32;
unsigned char var_1_51 = 200;
unsigned long int var_1_52 = 64;
unsigned long int var_1_53 = 1748165977;
float var_1_54 = 32.5;
float var_1_55 = 127.45;
float var_1_56 = 0.875;
float var_1_57 = 99.4;
float var_1_58 = 0.5;
unsigned long int var_1_59 = 4;
unsigned long int var_1_60 = 3071194324;
signed short int var_1_61 = 4;
double var_1_62 = 5.05;
double var_1_63 = 999999999.2;
double var_1_64 = 5.5;
float var_1_65 = 5.5;
signed long int var_1_66 = 5;
unsigned char var_1_67 = 4;
unsigned char var_1_68 = 50;
float var_1_69 = 256.875;
unsigned long int var_1_70 = 128;
unsigned long int var_1_72 = 4;
unsigned long int var_1_73 = 1653621525;
unsigned long int var_1_74 = 1000000000;
unsigned long int var_1_75 = 1000000000;
unsigned long int var_1_76 = 1000000000;
float var_1_77 = 64.5;
float var_1_78 = 0.0;
signed char var_1_79 = -25;
unsigned short int var_1_80 = 20143;
unsigned short int var_1_81 = 17140;
double var_1_82 = 128.5;
unsigned long int var_1_83 = 16;
unsigned short int var_1_84 = 4;
signed short int var_1_86 = -64;
double var_1_87 = 0.0;
double var_1_88 = 4.25;
double var_1_89 = 256.25;
double var_1_90 = 49.7;
signed long int var_1_91 = -4;
signed char var_1_92 = 100;
signed char var_1_93 = 16;
unsigned char var_1_94 = 0;
unsigned long int var_1_96 = 1;
unsigned long int var_1_97 = 8;
double var_1_98 = 0.55;
unsigned short int var_1_99 = 42764;
unsigned char var_1_100 = 1;
signed char var_1_101 = 32;
unsigned char var_1_102 = 16;
unsigned long int var_1_103 = 0;
unsigned char var_1_104 = 0;
signed char var_1_105 = -128;
signed long int var_1_106 = 100;
unsigned short int var_1_107 = 8;
float var_1_108 = 31.25;
double var_1_109 = 16.2;
float var_1_110 = 127.8;
unsigned short int var_1_111 = 128;
float var_1_112 = 0.55;
signed char var_1_113 = -64;
double var_1_114 = 9.93;
float var_1_115 = 16.25;
signed char var_1_116 = -2;
unsigned long int var_1_117 = 200;
double var_1_118 = 31.8;
double var_1_119 = 63.4;
unsigned char last_1_var_1_8 = 2;
double last_1_var_1_38 = 100.25;
signed char last_1_var_1_43 = 64;
signed short int last_1_var_1_61 = 4;
signed short int last_1_var_1_86 = -64;
double last_1_var_1_87 = 0.0;
unsigned char last_1_var_1_100 = 1;
float last_1_var_1_108 = 31.25;
void initially(void) {
}
void step(void) {
 if (var_1_35 >= ((last_1_var_1_87 + var_1_55) + var_1_56)) {
  var_1_70 = (var_1_60 - var_1_12);
 } else {
  var_1_70 = (var_1_14 + var_1_15);
 }
 var_1_83 = ((((var_1_51) > (((((var_1_70) < (var_1_75)) ? (var_1_70) : (var_1_75))))) ? (var_1_51) : (((((var_1_70) < (var_1_75)) ? (var_1_70) : (var_1_75))))));
 if (last_1_var_1_8 == var_1_15) {
  if (((((var_1_37) > (var_1_10)) ? (var_1_37) : (var_1_10))) < (- last_1_var_1_108)) {
   var_1_49 = (! var_1_27);
  }
 } else {
  var_1_49 = ((var_1_42 <= var_1_4) || var_1_25);
 }
 var_1_24 = ((var_1_5 <= (var_1_11 - var_1_14)) || (var_1_25 && (var_1_49 || var_1_27)));
 if (var_1_49) {
  var_1_113 = var_1_93;
 }
 if (var_1_24) {
  var_1_115 = 16.5f;
 } else {
  var_1_115 = var_1_57;
 }
 var_1_29 = ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)));
 signed char stepLocal_2 = var_1_23;
 if (((~ var_1_7) & var_1_13) < stepLocal_2) {
  var_1_30 = var_1_13;
 }
 if (var_1_37 <= last_1_var_1_38) {
  var_1_38 = ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)));
 }
 if (var_1_25) {
  var_1_39 = var_1_36;
 }
 unsigned char stepLocal_8 = var_1_13;
 if (stepLocal_8 <= var_1_4) {
  var_1_47 = (var_1_48 || (! var_1_25));
 }
 signed char stepLocal_9 = var_1_4;
 if (stepLocal_9 > var_1_42) {
  var_1_50 = (var_1_51 - ((((var_1_44) > (var_1_20)) ? (var_1_44) : (var_1_20))));
 }
 if (((((0.19999999999999996) > ((var_1_18 * var_1_17))) ? (0.19999999999999996) : ((var_1_18 * var_1_17)))) != var_1_38) {
  var_1_52 = ((var_1_53 - var_1_15) + var_1_4);
 }
 var_1_65 = ((((var_1_56) > ((((((var_1_63 - 16.915f)) < (var_1_36)) ? ((var_1_63 - 16.915f)) : (var_1_36))))) ? (var_1_56) : ((((((var_1_63 - 16.915f)) < (var_1_36)) ? ((var_1_63 - 16.915f)) : (var_1_36))))));
 var_1_82 = ((((var_1_37 - 128.4) < 0 ) ? -(var_1_37 - 128.4) : (var_1_37 - 128.4)));
 if (var_1_24) {
  var_1_96 = var_1_20;
 }
 if (var_1_47) {
  var_1_97 = (var_1_67 + var_1_81);
 }
 if (var_1_25) {
  var_1_102 = var_1_21;
 } else {
  var_1_102 = 5;
 }
 if (var_1_25) {
  var_1_103 = var_1_60;
 }
 var_1_104 = var_1_27;
 var_1_105 = 1;
 if (var_1_47) {
  var_1_108 = var_1_78;
 } else {
  var_1_108 = var_1_64;
 }
 if (var_1_24) {
  var_1_109 = var_1_18;
 }
 var_1_110 = var_1_78;
 var_1_111 = var_1_21;
 var_1_112 = 5.25f;
 if (var_1_25) {
  var_1_114 = var_1_18;
 }
 if (var_1_104) {
  var_1_116 = var_1_44;
 } else {
  var_1_116 = var_1_67;
 }
 unsigned char stepLocal_3 = var_1_50;
 if (var_1_70 > stepLocal_3) {
  var_1_33 = (((((15.27f) < ((var_1_34 + 0.4f))) ? (15.27f) : ((var_1_34 + 0.4f)))) + var_1_35);
 } else {
  var_1_33 = ((8.982114592755644E18f - var_1_36) - var_1_37);
 }
 signed char stepLocal_11 = var_1_113;
 if (var_1_82 >= (var_1_33 * var_1_114)) {
  if (stepLocal_11 <= ((((var_1_116) > ((var_1_14 >> var_1_67))) ? (var_1_116) : ((var_1_14 >> var_1_67))))) {
   var_1_66 = ((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14)));
  }
 }
 if ((var_1_52 ^ (var_1_12 - var_1_11)) <= (var_1_96 - var_1_4)) {
  var_1_16 = ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)));
 }
 if (var_1_14 >= (- var_1_111)) {
  var_1_19 = (var_1_14 - ((var_1_20 - var_1_21) - var_1_15));
 } else {
  var_1_19 = ((var_1_21 + ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) + ((((var_1_15) > (((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23))))) ? (var_1_15) : (((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23)))))));
 }
 if (var_1_104) {
  var_1_28 = ((((((((var_1_5) < (var_1_14)) ? (var_1_5) : (var_1_14)))) > (var_1_4)) ? (((((var_1_5) < (var_1_14)) ? (var_1_5) : (var_1_14)))) : (var_1_4)));
 } else {
  if (! ((10 / var_1_11) != var_1_4)) {
   var_1_28 = ((((var_1_15) > (((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))))) ? (var_1_15) : (((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))))));
  } else {
   var_1_28 = (var_1_14 - (var_1_20 - var_1_15));
  }
 }
 if (var_1_47) {
  var_1_31 = var_1_4;
 } else {
  var_1_31 = ((((((((-16) < (var_1_22)) ? (-16) : (var_1_22)))) < ((((((var_1_4 - var_1_21)) < ((var_1_23 + var_1_5))) ? ((var_1_4 - var_1_21)) : ((var_1_23 + var_1_5)))))) ? (((((-16) < (var_1_22)) ? (-16) : (var_1_22)))) : ((((((var_1_4 - var_1_21)) < ((var_1_23 + var_1_5))) ? ((var_1_4 - var_1_21)) : ((var_1_23 + var_1_5)))))));
 }
 unsigned char stepLocal_5 = var_1_25;
 signed char stepLocal_4 = var_1_23;
 if (var_1_17 != 10.7f) {
  if (stepLocal_4 <= ((5 - var_1_20) / ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) {
   var_1_40 = (var_1_41 + var_1_4);
  }
 } else {
  if (stepLocal_5 && var_1_104) {
   var_1_40 = var_1_42;
  }
 }
 unsigned char stepLocal_6 = var_1_47;
 if (stepLocal_6 || (last_1_var_1_43 <= (var_1_12 - var_1_20))) {
  var_1_43 = ((var_1_20 - (var_1_44 - var_1_21)) - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))));
 } else {
  var_1_43 = ((var_1_21 + var_1_22) + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))));
 }
 unsigned char stepLocal_7 = var_1_47;
 if (stepLocal_7 && var_1_49) {
  var_1_45 = (var_1_13 + var_1_15);
 }
 if ((var_1_66 / var_1_11) <= var_1_70) {
  var_1_58 = ((((var_1_36) < (var_1_57)) ? (var_1_36) : (var_1_57)));
 }
 if ((var_1_55 + (var_1_58 / var_1_10)) >= (- var_1_17)) {
  var_1_61 = (var_1_21 - last_1_var_1_61);
 } else {
  var_1_61 = var_1_7;
 }
 if (var_1_104) {
  var_1_62 = (((var_1_63 + var_1_64) + var_1_36) - var_1_55);
 } else {
  var_1_62 = (var_1_37 - var_1_63);
 }
 if (var_1_27 || (var_1_62 < var_1_18)) {
  var_1_69 = ((((var_1_57) < (var_1_34)) ? (var_1_57) : (var_1_34)));
 } else {
  var_1_69 = ((var_1_36 - var_1_63) + ((((var_1_56) < ((var_1_57 + var_1_64))) ? (var_1_56) : ((var_1_57 + var_1_64)))));
 }
 if (var_1_104) {
  if (var_1_25) {
   var_1_84 = ((((var_1_51) < (var_1_81)) ? (var_1_51) : (var_1_81)));
  }
 }
 unsigned long int stepLocal_14 = (var_1_60 - var_1_51) / var_1_12;
 if ((var_1_112 / ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))) == (var_1_64 / var_1_10)) {
  if (stepLocal_14 > var_1_75) {
   var_1_86 = (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - ((((var_1_51 + var_1_97) < 0 ) ? -(var_1_51 + var_1_97) : (var_1_51 + var_1_97))));
  } else {
   var_1_86 = (((((last_1_var_1_86) < 0 ) ? -(last_1_var_1_86) : (last_1_var_1_86))) - var_1_103);
  }
 } else {
  var_1_86 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
 }
 signed long int stepLocal_17 = 128;
 if (stepLocal_17 <= (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) << 1)) {
  if (var_1_49) {
   var_1_92 = (var_1_15 - 16);
  } else {
   var_1_92 = var_1_93;
  }
 } else {
  if (var_1_49) {
   var_1_92 = (((((var_1_14 - var_1_67)) < (var_1_4)) ? ((var_1_14 - var_1_67)) : (var_1_4)));
  } else {
   if (var_1_56 < 99.5f) {
    var_1_92 = (var_1_21 - var_1_44);
   }
  }
 }
 signed long int stepLocal_18 = - var_1_86;
 if (! (var_1_45 < var_1_61)) {
  var_1_94 = (var_1_51 - 2);
 } else {
  if (stepLocal_18 >= var_1_11) {
   var_1_94 = (((((var_1_21 + var_1_4)) > (var_1_13)) ? ((var_1_21 + var_1_4)) : (var_1_13)));
  } else {
   var_1_94 = ((var_1_12 + var_1_20) - var_1_44);
  }
 }
 unsigned long int stepLocal_20 = var_1_51 + var_1_103;
 unsigned long int stepLocal_19 = 32 + (var_1_73 * var_1_86);
 if ((var_1_99 - ((((var_1_14) < (var_1_50)) ? (var_1_14) : (var_1_50)))) == stepLocal_19) {
  var_1_98 = (((var_1_89 - var_1_90) + var_1_64) + var_1_36);
 } else {
  if (stepLocal_20 > (var_1_40 + var_1_15)) {
   var_1_98 = (((((((128.5) < (var_1_35)) ? (128.5) : (var_1_35))) < 0 ) ? -((((128.5) < (var_1_35)) ? (128.5) : (var_1_35))) : ((((128.5) < (var_1_35)) ? (128.5) : (var_1_35)))));
  }
 }
 var_1_117 = (var_1_13 + ((((var_1_45) > (var_1_81)) ? (var_1_45) : (var_1_81))));
 unsigned char stepLocal_1 = (var_1_115 / var_1_10) < 255.625f;
 signed long int stepLocal_0 = var_1_66;
 if (stepLocal_1 && (var_1_7 < (var_1_5 * -100))) {
  var_1_8 = ((((((var_1_11 + var_1_12) - var_1_4)) > (var_1_13)) ? (((var_1_11 + var_1_12) - var_1_4)) : (var_1_13)));
 } else {
  if (var_1_5 > stepLocal_0) {
   var_1_8 = (((((128) > (((((128) < 0 ) ? -(128) : (128))))) ? (128) : (((((128) < 0 ) ? -(128) : (128)))))) - var_1_4);
  } else {
   var_1_8 = (128 - (var_1_14 + var_1_15));
  }
 }
 if (var_1_104) {
  var_1_72 = (var_1_83 + ((var_1_73 - var_1_4) - (128u + var_1_15)));
 } else {
  var_1_72 = (((var_1_74 + var_1_75) - (var_1_76 - var_1_13)) + (var_1_73 - var_1_8));
 }
 if (var_1_25 && (((((var_1_60) > (var_1_72)) ? (var_1_60) : (var_1_72))) > var_1_103)) {
  if (var_1_116 < var_1_12) {
   var_1_87 = (var_1_57 + 4.75);
  } else {
   if ((var_1_47 && var_1_27) && var_1_49) {
    var_1_87 = (((((var_1_37 - var_1_55)) > (var_1_35)) ? ((var_1_37 - var_1_55)) : (var_1_35)));
   } else {
    var_1_87 = (var_1_64 - var_1_36);
   }
  }
 } else {
  if (((var_1_14 / var_1_67) / var_1_44) > (var_1_11 << var_1_23)) {
   var_1_87 = var_1_35;
  } else {
   var_1_87 = ((var_1_63 + var_1_36) - (((((var_1_64) < (var_1_88)) ? (var_1_64) : (var_1_88))) + (var_1_89 + var_1_90)));
  }
 }
 if (var_1_5 > (var_1_28 % var_1_7)) {
  var_1_6 = var_1_5;
 } else {
  var_1_6 = (var_1_5 + var_1_7);
 }
 unsigned long int stepLocal_10 = var_1_14 * var_1_97;
 if (var_1_84 < stepLocal_10) {
  if (((var_1_36 + var_1_55) - var_1_37) > (((((var_1_114) < (var_1_87)) ? (var_1_114) : (var_1_87))) / var_1_10)) {
   var_1_54 = (var_1_36 + 4.5f);
  } else {
   var_1_54 = (var_1_35 + var_1_34);
  }
 } else {
  if (var_1_25) {
   var_1_54 = (var_1_55 - var_1_36);
  } else {
   var_1_54 = ((var_1_34 + (var_1_56 + var_1_57)) + var_1_35);
  }
 }
 if (var_1_87 < ((((var_1_55) > (var_1_34)) ? (var_1_55) : (var_1_34)))) {
  if (var_1_23 >= var_1_15) {
   var_1_59 = (var_1_60 - var_1_44);
  }
 } else {
  var_1_59 = ((((var_1_13) > (1000000u)) ? (var_1_13) : (1000000u)));
 }
 signed long int stepLocal_13 = var_1_67 * var_1_20;
 unsigned long int stepLocal_12 = (((var_1_70) < ((var_1_75 * var_1_72))) ? (var_1_70) : ((var_1_75 * var_1_72)));
 if (var_1_44 <= stepLocal_13) {
  if (stepLocal_12 > var_1_103) {
   var_1_77 = ((((((((64.2f) < 0 ) ? -(64.2f) : (64.2f)))) < (var_1_35)) ? (((((64.2f) < 0 ) ? -(64.2f) : (64.2f)))) : (var_1_35)));
  } else {
   var_1_77 = (((((((((128.75f) < (var_1_34)) ? (128.75f) : (var_1_34)))) > ((127.4f - var_1_36))) ? (((((128.75f) < (var_1_34)) ? (128.75f) : (var_1_34)))) : ((127.4f - var_1_36)))) + var_1_64);
  }
 } else {
  var_1_77 = (var_1_63 - (var_1_78 - 1000000.2f));
 }
 if (var_1_47) {
  if (((var_1_80 + var_1_81) - var_1_44) < var_1_84) {
   var_1_79 = (var_1_22 + var_1_23);
  }
 } else {
  var_1_79 = (2 + ((((var_1_23) > ((var_1_67 + var_1_21))) ? (var_1_23) : ((var_1_67 + var_1_21)))));
 }
 unsigned char stepLocal_16 = var_1_47;
 unsigned short int stepLocal_15 = var_1_81;
 if (stepLocal_16 && (var_1_76 <= var_1_67)) {
  if (stepLocal_15 <= (((((var_1_6) < (var_1_41)) ? (var_1_6) : (var_1_41))) ^ (var_1_72 | var_1_84))) {
   var_1_91 = ((((var_1_67 - ((((var_1_21) < (0)) ? (var_1_21) : (0)))) < 0 ) ? -(var_1_67 - ((((var_1_21) < (0)) ? (var_1_21) : (0)))) : (var_1_67 - ((((var_1_21) < (0)) ? (var_1_21) : (0))))));
  }
 } else {
  var_1_91 = ((((128) > (var_1_12)) ? (128) : (var_1_12)));
 }
 signed char stepLocal_22 = var_1_22;
 signed char stepLocal_21 = var_1_93;
 if (var_1_48) {
  var_1_100 = var_1_12;
 } else {
  if (var_1_90 > var_1_69) {
   if (stepLocal_21 <= (var_1_53 * var_1_91)) {
    var_1_100 = ((((((var_1_14 + var_1_44)) > (var_1_12)) ? ((var_1_14 + var_1_44)) : (var_1_12))) + var_1_4);
   } else {
    var_1_100 = (((((var_1_44) > (var_1_11)) ? (var_1_44) : (var_1_11))) + var_1_12);
   }
  } else {
   if (((((last_1_var_1_100) < (var_1_117)) ? (last_1_var_1_100) : (var_1_117))) == stepLocal_22) {
    var_1_100 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
   }
  }
 }
 if (((var_1_98 + 127.5) >= var_1_114) || (var_1_83 >= var_1_60)) {
  if ((25 | var_1_20) < var_1_117) {
   var_1_101 = var_1_21;
  }
 } else {
  var_1_101 = var_1_22;
 }
 var_1_107 = var_1_59;
 unsigned char stepLocal_23 = (var_1_63 + var_1_87) >= var_1_37;
 if ((var_1_47 && var_1_49) && stepLocal_23) {
  if (var_1_48) {
   var_1_118 = var_1_63;
  } else {
   var_1_118 = var_1_119;
  }
 } else {
  var_1_118 = var_1_17;
 }
 if (-2 == var_1_97) {
  if ((var_1_97 * var_1_107) <= -500) {
   var_1_1 = ((((2 - var_1_4) < 0 ) ? -(2 - var_1_4) : (2 - var_1_4)));
  } else {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 } else {
  var_1_1 = (var_1_5 + 5);
 }
 if (4 <= (var_1_30 + var_1_51)) {
  if ((- var_1_34) >= ((((var_1_118) < (9999999.875f)) ? (var_1_118) : (9999999.875f)))) {
   var_1_68 = var_1_21;
  } else {
   var_1_68 = var_1_14;
  }
 }
 if (var_1_49) {
  var_1_106 = var_1_107;
 } else {
  var_1_106 = var_1_91;
 }
 if (var_1_25) {
  if (var_1_28 != ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) {
   var_1_46 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 } else {
  if (var_1_106 < var_1_12) {
   var_1_46 = (2 + ((((32) < (var_1_20)) ? (32) : (var_1_20))));
  } else {
   var_1_46 = (128 - ((((((((var_1_11) < (var_1_15)) ? (var_1_11) : (var_1_15)))) < ((var_1_12 - var_1_44))) ? (((((var_1_11) < (var_1_15)) ? (var_1_11) : (var_1_15)))) : ((var_1_12 - var_1_44)))));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 assume_abort_if_not(var_1_7 != 0);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 64);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 64);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 94);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -31);
 assume_abort_if_not(var_1_22 <= 31);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -1073741823);
 assume_abort_if_not(var_1_41 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -2147483647);
 assume_abort_if_not(var_1_42 <= 2147483646);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 31);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 127);
 assume_abort_if_not(var_1_51 <= 254);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 1073741823);
 assume_abort_if_not(var_1_53 <= 2147483647);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427388000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -115292.1504606845700e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 1152921.504606845700e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -115292.1504606845700e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 1152921.504606845700e+12F && var_1_57 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 2147483647);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691400e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 7);
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 1610612735);
 assume_abort_if_not(var_1_73 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 536870911);
 assume_abort_if_not(var_1_74 <= 1073741824);
 var_1_75 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_75 >= 536870912);
 assume_abort_if_not(var_1_75 <= 1073741823);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 536870911);
 assume_abort_if_not(var_1_76 <= 1073741823);
 var_1_78 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_78 >= 4611686.018427383000e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854766000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_80 >= 16383);
 assume_abort_if_not(var_1_80 <= 32768);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 16384);
 assume_abort_if_not(var_1_81 <= 32767);
 var_1_88 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427383000e+12F && var_1_88 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691400e+12F && var_1_89 >= 1.0e-20F ));
 var_1_90 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691400e+12F && var_1_90 >= 1.0e-20F ));
 var_1_93 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_93 >= -127);
 assume_abort_if_not(var_1_93 <= 126);
 var_1_99 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_99 >= 32767);
 assume_abort_if_not(var_1_99 <= 65535);
 var_1_119 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_119 >= -922337.2036854766000e+13F && var_1_119 <= -1.0e-20F) || (var_1_119 <= 9223372.036854766000e+12F && var_1_119 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_108 = var_1_108;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((-2 == var_1_97) ? (((var_1_97 * var_1_107) <= -500) ? (var_1_1 == ((signed char) ((((2 - var_1_4) < 0 ) ? -(2 - var_1_4) : (2 - var_1_4))))) : (var_1_1 == ((signed char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (var_1_28 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_115 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) ((((((var_1_11 + var_1_12) - var_1_4)) > (var_1_13)) ? (((var_1_11 + var_1_12) - var_1_4)) : (var_1_13))))) : ((var_1_5 > var_1_66) ? (var_1_8 == ((unsigned char) (((((128) > (((((128) < 0 ) ? -(128) : (128))))) ? (128) : (((((128) < 0 ) ? -(128) : (128)))))) - var_1_4))) : (var_1_8 == ((unsigned char) (128 - (var_1_14 + var_1_15))))))) && (((var_1_52 ^ (var_1_12 - var_1_11)) <= (var_1_96 - var_1_4)) ? (var_1_16 == ((float) ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1)) && ((var_1_14 >= (- var_1_111)) ? (var_1_19 == ((signed char) (var_1_14 - ((var_1_20 - var_1_21) - var_1_15)))) : (var_1_19 == ((signed char) ((var_1_21 + ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) + ((((var_1_15) > (((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23))))) ? (var_1_15) : (((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23))))))))))) && (var_1_24 == ((unsigned char) ((var_1_5 <= (var_1_11 - var_1_14)) || (var_1_25 && (var_1_49 || var_1_27)))))) && (var_1_104 ? (var_1_28 == ((signed char) ((((((((var_1_5) < (var_1_14)) ? (var_1_5) : (var_1_14)))) > (var_1_4)) ? (((((var_1_5) < (var_1_14)) ? (var_1_5) : (var_1_14)))) : (var_1_4))))) : ((! ((10 / var_1_11) != var_1_4)) ? (var_1_28 == ((signed char) ((((var_1_15) > (((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))))) ? (var_1_15) : (((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5)))))))) : (var_1_28 == ((signed char) (var_1_14 - (var_1_20 - var_1_15))))))) && (var_1_29 == ((signed char) ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))))) && ((((~ var_1_7) & var_1_13) < var_1_23) ? (var_1_30 == ((unsigned char) var_1_13)) : 1)) && (var_1_47 ? (var_1_31 == ((signed char) var_1_4)) : (var_1_31 == ((signed char) ((((((((-16) < (var_1_22)) ? (-16) : (var_1_22)))) < ((((((var_1_4 - var_1_21)) < ((var_1_23 + var_1_5))) ? ((var_1_4 - var_1_21)) : ((var_1_23 + var_1_5)))))) ? (((((-16) < (var_1_22)) ? (-16) : (var_1_22)))) : ((((((var_1_4 - var_1_21)) < ((var_1_23 + var_1_5))) ? ((var_1_4 - var_1_21)) : ((var_1_23 + var_1_5))))))))))) && ((var_1_70 > var_1_50) ? (var_1_33 == ((float) (((((15.27f) < ((var_1_34 + 0.4f))) ? (15.27f) : ((var_1_34 + 0.4f)))) + var_1_35))) : (var_1_33 == ((float) ((8.982114592755644E18f - var_1_36) - var_1_37))))) && ((var_1_37 <= last_1_var_1_38) ? (var_1_38 == ((double) ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36))))) : 1)) && (var_1_25 ? (var_1_39 == ((double) var_1_36)) : 1)) && ((var_1_17 != 10.7f) ? ((var_1_23 <= ((5 - var_1_20) / ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (var_1_40 == ((signed long int) (var_1_41 + var_1_4))) : 1) : ((var_1_25 && var_1_104) ? (var_1_40 == ((signed long int) var_1_42)) : 1))) && ((var_1_47 || (last_1_var_1_43 <= (var_1_12 - var_1_20))) ? (var_1_43 == ((signed char) ((var_1_20 - (var_1_44 - var_1_21)) - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))) : (var_1_43 == ((signed char) ((var_1_21 + var_1_22) + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))))) && ((var_1_47 && var_1_49) ? (var_1_45 == ((unsigned short int) (var_1_13 + var_1_15))) : 1)) && (var_1_25 ? ((var_1_28 != ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) ? (var_1_46 == ((unsigned char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1) : ((var_1_106 < var_1_12) ? (var_1_46 == ((unsigned char) (2 + ((((32) < (var_1_20)) ? (32) : (var_1_20)))))) : (var_1_46 == ((unsigned char) (128 - ((((((((var_1_11) < (var_1_15)) ? (var_1_11) : (var_1_15)))) < ((var_1_12 - var_1_44))) ? (((((var_1_11) < (var_1_15)) ? (var_1_11) : (var_1_15)))) : ((var_1_12 - var_1_44)))))))))) && ((var_1_13 <= var_1_4) ? (var_1_47 == ((unsigned char) (var_1_48 || (! var_1_25)))) : 1)) && ((last_1_var_1_8 == var_1_15) ? ((((((var_1_37) > (var_1_10)) ? (var_1_37) : (var_1_10))) < (- last_1_var_1_108)) ? (var_1_49 == ((unsigned char) (! var_1_27))) : 1) : (var_1_49 == ((unsigned char) ((var_1_42 <= var_1_4) || var_1_25))))) && ((var_1_4 > var_1_42) ? (var_1_50 == ((unsigned char) (var_1_51 - ((((var_1_44) > (var_1_20)) ? (var_1_44) : (var_1_20)))))) : 1)) && ((((((0.19999999999999996) > ((var_1_18 * var_1_17))) ? (0.19999999999999996) : ((var_1_18 * var_1_17)))) != var_1_38) ? (var_1_52 == ((unsigned long int) ((var_1_53 - var_1_15) + var_1_4))) : 1)) && ((var_1_84 < (var_1_14 * var_1_97)) ? ((((var_1_36 + var_1_55) - var_1_37) > (((((var_1_114) < (var_1_87)) ? (var_1_114) : (var_1_87))) / var_1_10)) ? (var_1_54 == ((float) (var_1_36 + 4.5f))) : (var_1_54 == ((float) (var_1_35 + var_1_34)))) : (var_1_25 ? (var_1_54 == ((float) (var_1_55 - var_1_36))) : (var_1_54 == ((float) ((var_1_34 + (var_1_56 + var_1_57)) + var_1_35)))))) && (((var_1_66 / var_1_11) <= var_1_70) ? (var_1_58 == ((float) ((((var_1_36) < (var_1_57)) ? (var_1_36) : (var_1_57))))) : 1)) && ((var_1_87 < ((((var_1_55) > (var_1_34)) ? (var_1_55) : (var_1_34)))) ? ((var_1_23 >= var_1_15) ? (var_1_59 == ((unsigned long int) (var_1_60 - var_1_44))) : 1) : (var_1_59 == ((unsigned long int) ((((var_1_13) > (1000000u)) ? (var_1_13) : (1000000u))))))) && (((var_1_55 + (var_1_58 / var_1_10)) >= (- var_1_17)) ? (var_1_61 == ((signed short int) (var_1_21 - last_1_var_1_61))) : (var_1_61 == ((signed short int) var_1_7)))) && (var_1_104 ? (var_1_62 == ((double) (((var_1_63 + var_1_64) + var_1_36) - var_1_55))) : (var_1_62 == ((double) (var_1_37 - var_1_63))))) && (var_1_65 == ((float) ((((var_1_56) > ((((((var_1_63 - 16.915f)) < (var_1_36)) ? ((var_1_63 - 16.915f)) : (var_1_36))))) ? (var_1_56) : ((((((var_1_63 - 16.915f)) < (var_1_36)) ? ((var_1_63 - 16.915f)) : (var_1_36))))))))) && ((var_1_82 >= (var_1_33 * var_1_114)) ? ((var_1_113 <= ((((var_1_116) > ((var_1_14 >> var_1_67))) ? (var_1_116) : ((var_1_14 >> var_1_67))))) ? (var_1_66 == ((signed long int) ((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14))))) : 1) : 1)) && ((4 <= (var_1_30 + var_1_51)) ? (((- var_1_34) >= ((((var_1_118) < (9999999.875f)) ? (var_1_118) : (9999999.875f)))) ? (var_1_68 == ((unsigned char) var_1_21)) : (var_1_68 == ((unsigned char) var_1_14))) : 1)) && ((var_1_27 || (var_1_62 < var_1_18)) ? (var_1_69 == ((float) ((((var_1_57) < (var_1_34)) ? (var_1_57) : (var_1_34))))) : (var_1_69 == ((float) ((var_1_36 - var_1_63) + ((((var_1_56) < ((var_1_57 + var_1_64))) ? (var_1_56) : ((var_1_57 + var_1_64))))))))) && ((var_1_35 >= ((last_1_var_1_87 + var_1_55) + var_1_56)) ? (var_1_70 == ((unsigned long int) (var_1_60 - var_1_12))) : (var_1_70 == ((unsigned long int) (var_1_14 + var_1_15))))) && (var_1_104 ? (var_1_72 == ((unsigned long int) (var_1_83 + ((var_1_73 - var_1_4) - (128u + var_1_15))))) : (var_1_72 == ((unsigned long int) (((var_1_74 + var_1_75) - (var_1_76 - var_1_13)) + (var_1_73 - var_1_8)))))) && ((var_1_44 <= (var_1_67 * var_1_20)) ? ((((((var_1_70) < ((var_1_75 * var_1_72))) ? (var_1_70) : ((var_1_75 * var_1_72)))) > var_1_103) ? (var_1_77 == ((float) ((((((((64.2f) < 0 ) ? -(64.2f) : (64.2f)))) < (var_1_35)) ? (((((64.2f) < 0 ) ? -(64.2f) : (64.2f)))) : (var_1_35))))) : (var_1_77 == ((float) (((((((((128.75f) < (var_1_34)) ? (128.75f) : (var_1_34)))) > ((127.4f - var_1_36))) ? (((((128.75f) < (var_1_34)) ? (128.75f) : (var_1_34)))) : ((127.4f - var_1_36)))) + var_1_64)))) : (var_1_77 == ((float) (var_1_63 - (var_1_78 - 1000000.2f)))))) && (var_1_47 ? ((((var_1_80 + var_1_81) - var_1_44) < var_1_84) ? (var_1_79 == ((signed char) (var_1_22 + var_1_23))) : 1) : (var_1_79 == ((signed char) (2 + ((((var_1_23) > ((var_1_67 + var_1_21))) ? (var_1_23) : ((var_1_67 + var_1_21))))))))) && (var_1_82 == ((double) ((((var_1_37 - 128.4) < 0 ) ? -(var_1_37 - 128.4) : (var_1_37 - 128.4)))))) && (var_1_83 == ((unsigned long int) ((((var_1_51) > (((((var_1_70) < (var_1_75)) ? (var_1_70) : (var_1_75))))) ? (var_1_51) : (((((var_1_70) < (var_1_75)) ? (var_1_70) : (var_1_75))))))))) && (var_1_104 ? (var_1_25 ? (var_1_84 == ((unsigned short int) ((((var_1_51) < (var_1_81)) ? (var_1_51) : (var_1_81))))) : 1) : 1)) && (((var_1_112 / ((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))) == (var_1_64 / var_1_10)) ? ((((var_1_60 - var_1_51) / var_1_12) > var_1_75) ? (var_1_86 == ((signed short int) (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - ((((var_1_51 + var_1_97) < 0 ) ? -(var_1_51 + var_1_97) : (var_1_51 + var_1_97)))))) : (var_1_86 == ((signed short int) (((((last_1_var_1_86) < 0 ) ? -(last_1_var_1_86) : (last_1_var_1_86))) - var_1_103)))) : (var_1_86 == ((signed short int) ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))))) && ((var_1_25 && (((((var_1_60) > (var_1_72)) ? (var_1_60) : (var_1_72))) > var_1_103)) ? ((var_1_116 < var_1_12) ? (var_1_87 == ((double) (var_1_57 + 4.75))) : (((var_1_47 && var_1_27) && var_1_49) ? (var_1_87 == ((double) (((((var_1_37 - var_1_55)) > (var_1_35)) ? ((var_1_37 - var_1_55)) : (var_1_35))))) : (var_1_87 == ((double) (var_1_64 - var_1_36))))) : ((((var_1_14 / var_1_67) / var_1_44) > (var_1_11 << var_1_23)) ? (var_1_87 == ((double) var_1_35)) : (var_1_87 == ((double) ((var_1_63 + var_1_36) - (((((var_1_64) < (var_1_88)) ? (var_1_64) : (var_1_88))) + (var_1_89 + var_1_90)))))))) && ((var_1_47 && (var_1_76 <= var_1_67)) ? ((var_1_81 <= (((((var_1_6) < (var_1_41)) ? (var_1_6) : (var_1_41))) ^ (var_1_72 | var_1_84))) ? (var_1_91 == ((signed long int) ((((var_1_67 - ((((var_1_21) < (0)) ? (var_1_21) : (0)))) < 0 ) ? -(var_1_67 - ((((var_1_21) < (0)) ? (var_1_21) : (0)))) : (var_1_67 - ((((var_1_21) < (0)) ? (var_1_21) : (0)))))))) : 1) : (var_1_91 == ((signed long int) ((((128) > (var_1_12)) ? (128) : (var_1_12))))))) && ((128 <= (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) << 1)) ? (var_1_49 ? (var_1_92 == ((signed char) (var_1_15 - 16))) : (var_1_92 == ((signed char) var_1_93))) : (var_1_49 ? (var_1_92 == ((signed char) (((((var_1_14 - var_1_67)) < (var_1_4)) ? ((var_1_14 - var_1_67)) : (var_1_4))))) : ((var_1_56 < 99.5f) ? (var_1_92 == ((signed char) (var_1_21 - var_1_44))) : 1)))) && ((! (var_1_45 < var_1_61)) ? (var_1_94 == ((unsigned char) (var_1_51 - 2))) : (((- var_1_86) >= var_1_11) ? (var_1_94 == ((unsigned char) (((((var_1_21 + var_1_4)) > (var_1_13)) ? ((var_1_21 + var_1_4)) : (var_1_13))))) : (var_1_94 == ((unsigned char) ((var_1_12 + var_1_20) - var_1_44)))))) && (var_1_24 ? (var_1_96 == ((unsigned long int) var_1_20)) : 1)) && (var_1_47 ? (var_1_97 == ((unsigned long int) (var_1_67 + var_1_81))) : 1)) && (((var_1_99 - ((((var_1_14) < (var_1_50)) ? (var_1_14) : (var_1_50)))) == (32 + (var_1_73 * var_1_86))) ? (var_1_98 == ((double) (((var_1_89 - var_1_90) + var_1_64) + var_1_36))) : (((var_1_51 + var_1_103) > (var_1_40 + var_1_15)) ? (var_1_98 == ((double) (((((((128.5) < (var_1_35)) ? (128.5) : (var_1_35))) < 0 ) ? -((((128.5) < (var_1_35)) ? (128.5) : (var_1_35))) : ((((128.5) < (var_1_35)) ? (128.5) : (var_1_35))))))) : 1))) && (var_1_48 ? (var_1_100 == ((unsigned char) var_1_12)) : ((var_1_90 > var_1_69) ? ((var_1_93 <= (var_1_53 * var_1_91)) ? (var_1_100 == ((unsigned char) ((((((var_1_14 + var_1_44)) > (var_1_12)) ? ((var_1_14 + var_1_44)) : (var_1_12))) + var_1_4))) : (var_1_100 == ((unsigned char) (((((var_1_44) > (var_1_11)) ? (var_1_44) : (var_1_11))) + var_1_12)))) : ((((((last_1_var_1_100) < (var_1_117)) ? (last_1_var_1_100) : (var_1_117))) == var_1_22) ? (var_1_100 == ((unsigned char) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) : 1)))) && ((((var_1_98 + 127.5) >= var_1_114) || (var_1_83 >= var_1_60)) ? (((25 | var_1_20) < var_1_117) ? (var_1_101 == ((signed char) var_1_21)) : 1) : (var_1_101 == ((signed char) var_1_22)))) && (var_1_25 ? (var_1_102 == ((unsigned char) var_1_21)) : (var_1_102 == ((unsigned char) 5)))) && (var_1_25 ? (var_1_103 == ((unsigned long int) var_1_60)) : 1)) && (var_1_104 == ((unsigned char) var_1_27))) && (var_1_105 == ((signed char) 1))) && (var_1_49 ? (var_1_106 == ((signed long int) var_1_107)) : (var_1_106 == ((signed long int) var_1_91)))) && (var_1_107 == ((unsigned short int) var_1_59))) && (var_1_47 ? (var_1_108 == ((float) var_1_78)) : (var_1_108 == ((float) var_1_64)))) && (var_1_24 ? (var_1_109 == ((double) var_1_18)) : 1)) && (var_1_110 == ((float) var_1_78))) && (var_1_111 == ((unsigned short int) var_1_21))) && (var_1_112 == ((float) 5.25f))) && (var_1_49 ? (var_1_113 == ((signed char) var_1_93)) : 1)) && (var_1_25 ? (var_1_114 == ((double) var_1_18)) : 1)) && (var_1_24 ? (var_1_115 == ((float) 16.5f)) : (var_1_115 == ((float) var_1_57)))) && (var_1_104 ? (var_1_116 == ((signed char) var_1_44)) : (var_1_116 == ((signed char) var_1_67)))) && (var_1_117 == ((unsigned long int) (var_1_13 + ((((var_1_45) > (var_1_81)) ? (var_1_45) : (var_1_81))))))) && (((var_1_47 && var_1_49) && ((var_1_63 + var_1_87) >= var_1_37)) ? (var_1_48 ? (var_1_118 == ((double) var_1_63)) : (var_1_118 == ((double) var_1_119))) : (var_1_118 == ((double) var_1_17)))
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
