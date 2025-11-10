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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 64;
unsigned long int var_1_7 = 16;
unsigned long int var_1_8 = 3645380125;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 256;
signed char var_1_12 = -5;
signed char var_1_13 = 16;
signed char var_1_14 = -32;
signed char var_1_17 = 0;
signed char var_1_18 = 4;
signed char var_1_19 = 0;
signed char var_1_20 = 10;
signed char var_1_21 = 4;
signed char var_1_22 = 8;
unsigned long int var_1_23 = 1000;
signed char var_1_24 = 2;
unsigned char var_1_26 = 10;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 200;
unsigned char var_1_30 = 200;
signed char var_1_31 = -100;
signed long int var_1_32 = 10;
signed char var_1_33 = 10;
signed char var_1_34 = 32;
unsigned char var_1_35 = 2;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
signed char var_1_38 = -100;
signed char var_1_40 = -64;
unsigned char var_1_41 = 64;
unsigned char var_1_43 = 64;
double var_1_44 = 0.25;
double var_1_45 = 8.4;
float var_1_46 = 255.5;
float var_1_47 = 255.6;
float var_1_48 = -0.325;
float var_1_49 = 0.6;
float var_1_50 = 50.35;
unsigned short int var_1_51 = 16;
float var_1_52 = 0.0;
float var_1_53 = 99999999999999.3;
float var_1_54 = 25.2;
unsigned short int var_1_55 = 25;
float var_1_56 = 127.5;
float var_1_57 = 0.0;
float var_1_58 = 49.875;
signed short int var_1_59 = -32;
unsigned short int var_1_60 = 64;
unsigned short int var_1_61 = 28726;
unsigned short int var_1_62 = 40503;
unsigned short int var_1_63 = 42235;
signed short int var_1_64 = 10;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 25;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 16;
unsigned long int var_1_72 = 10;
unsigned long int var_1_73 = 1000000000;
unsigned long int var_1_74 = 1000000000;
signed char var_1_75 = 5;
unsigned long int var_1_76 = 32;
unsigned long int var_1_77 = 1648284508;
unsigned short int var_1_78 = 5;
unsigned long int var_1_79 = 5;
float var_1_80 = 31.896;
unsigned short int var_1_81 = 5;
double var_1_83 = 4.75;
double var_1_85 = 3.4;
double var_1_86 = 49.75;
double var_1_87 = 10000.2;
unsigned short int var_1_88 = 32;
unsigned short int var_1_89 = 10000;
unsigned short int var_1_90 = 10000;
unsigned long int var_1_91 = 256;
unsigned long int var_1_92 = 25;
float var_1_93 = 10.5;
double var_1_94 = 25.5;
unsigned short int var_1_95 = 32;
signed short int var_1_96 = 256;
signed short int var_1_97 = 16580;
unsigned long int var_1_98 = 1;
unsigned short int var_1_99 = 10;
signed char var_1_100 = 5;
signed long int var_1_101 = 2;
unsigned long int var_1_102 = 100;
unsigned long int var_1_103 = 128;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 0;
unsigned long int var_1_106 = 4047737947;
unsigned char var_1_107 = 0;
unsigned char var_1_108 = 100;
unsigned char var_1_109 = 0;
unsigned long int var_1_110 = 16;
unsigned short int var_1_111 = 10;
signed char var_1_112 = -64;
signed long int var_1_113 = 32;
signed short int var_1_114 = 8;
signed char var_1_115 = 4;
unsigned long int var_1_116 = 25;
double var_1_117 = 200.75;
signed long int var_1_118 = -4;
signed short int var_1_119 = -8;
unsigned short int var_1_121 = 64;
unsigned char var_1_122 = 10;
signed long int var_1_123 = 2;
signed char var_1_124 = -16;
signed long int var_1_125 = 25;
unsigned char var_1_126 = 0;
unsigned char last_1_var_1_26 = 10;
float last_1_var_1_56 = 127.5;
unsigned short int last_1_var_1_60 = 64;
signed short int last_1_var_1_64 = 10;
unsigned short int last_1_var_1_78 = 5;
unsigned long int last_1_var_1_79 = 5;
unsigned long int last_1_var_1_92 = 25;
unsigned char last_1_var_1_104 = 1;
void initially(void) {
}
void step(void) {
 var_1_125 = last_1_var_1_92;
 if (last_1_var_1_56 < ((var_1_53 * var_1_45) * var_1_48)) {
  var_1_60 = ((var_1_61 - 64) + last_1_var_1_60);
 } else {
  var_1_60 = (((((var_1_62) < (var_1_63)) ? (var_1_62) : (var_1_63))) - last_1_var_1_60);
 }
 unsigned long int stepLocal_17 = last_1_var_1_79;
 if (var_1_34 < stepLocal_17) {
  var_1_76 = (((var_1_77 - var_1_65) - last_1_var_1_79) + last_1_var_1_26);
 }
 if ((var_1_76 + var_1_22) >= var_1_7) {
  var_1_41 = (var_1_34 + (var_1_43 - ((((16) > (var_1_18)) ? (16) : (var_1_18)))));
 }
 if (last_1_var_1_78 < (-2 / var_1_30)) {
  var_1_37 = (! (! var_1_36));
 }
 if (var_1_37) {
  var_1_24 = (var_1_22 - (((((var_1_21 + var_1_18)) > (var_1_17)) ? ((var_1_21 + var_1_18)) : (var_1_17))));
 } else {
  var_1_24 = ((((((((-64) < ((var_1_20 + -8))) ? (-64) : ((var_1_20 + -8))))) > (var_1_19)) ? (((((-64) < ((var_1_20 + -8))) ? (-64) : ((var_1_20 + -8))))) : (var_1_19)));
 }
 var_1_12 = ((((var_1_13) > (2)) ? (var_1_13) : (2)));
 var_1_23 = (var_1_8 - var_1_18);
 unsigned long int stepLocal_6 = (~ var_1_8) >> var_1_32;
 if (stepLocal_6 >= var_1_76) {
  var_1_31 = (var_1_21 - (((((var_1_17) > (var_1_33)) ? (var_1_17) : (var_1_33))) + (var_1_34 - 25)));
 }
 if (var_1_28 <= (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) * (var_1_30 - var_1_17))) {
  if (var_1_33 > var_1_18) {
   var_1_35 = ((((((((var_1_33) > ((var_1_29 - var_1_21))) ? (var_1_33) : ((var_1_29 - var_1_21))))) < ((((((5 + var_1_22)) < (var_1_28)) ? ((5 + var_1_22)) : (var_1_28))))) ? (((((var_1_33) > ((var_1_29 - var_1_21))) ? (var_1_33) : ((var_1_29 - var_1_21))))) : ((((((5 + var_1_22)) < (var_1_28)) ? ((5 + var_1_22)) : (var_1_28))))));
  } else {
   var_1_35 = (var_1_28 - var_1_22);
  }
 } else {
  var_1_35 = (var_1_34 + var_1_22);
 }
 signed char stepLocal_8 = var_1_19;
 if (stepLocal_8 >= var_1_35) {
  var_1_44 = ((((1.00000005E7) > (var_1_45)) ? (1.00000005E7) : (var_1_45)));
 }
 var_1_55 = var_1_32;
 var_1_67 = var_1_21;
 var_1_71 = (var_1_17 + var_1_66);
 var_1_91 = (var_1_33 + var_1_73);
 unsigned long int stepLocal_27 = 100000000u;
 if (var_1_91 < stepLocal_27) {
  var_1_104 = var_1_69;
 } else {
  var_1_104 = (last_1_var_1_104 || var_1_69);
 }
 if (var_1_70) {
  var_1_108 = 25;
 } else {
  var_1_108 = var_1_29;
 }
 if (var_1_104) {
  var_1_112 = var_1_19;
 }
 var_1_113 = var_1_51;
 if (var_1_69) {
  var_1_115 = var_1_65;
 }
 var_1_116 = var_1_17;
 if (var_1_69) {
  var_1_117 = var_1_52;
 } else {
  var_1_117 = var_1_54;
 }
 var_1_118 = var_1_20;
 if (var_1_104) {
  var_1_121 = var_1_101;
 } else {
  var_1_121 = var_1_97;
 }
 var_1_126 = var_1_69;
 if (var_1_37) {
  var_1_119 = var_1_67;
 } else {
  var_1_119 = var_1_60;
 }
 var_1_123 = (-64 + ((((var_1_119) < (var_1_108)) ? (var_1_119) : (var_1_108))));
 signed long int stepLocal_5 = (var_1_21 + var_1_22) - 100;
 signed char stepLocal_4 = var_1_112;
 if (((((var_1_123) > (last_1_var_1_26)) ? (var_1_123) : (last_1_var_1_26))) < stepLocal_5) {
  if (var_1_37) {
   var_1_26 = var_1_22;
  } else {
   var_1_26 = (((((((((var_1_28 - var_1_21)) < (var_1_18)) ? ((var_1_28 - var_1_21)) : (var_1_18)))) < ((var_1_29 - (var_1_17 + var_1_22)))) ? ((((((var_1_28 - var_1_21)) < (var_1_18)) ? ((var_1_28 - var_1_21)) : (var_1_18)))) : ((var_1_29 - (var_1_17 + var_1_22)))));
  }
 } else {
  if (stepLocal_4 < -2) {
   var_1_26 = var_1_18;
  } else {
   var_1_26 = ((var_1_30 - var_1_21) - var_1_18);
  }
 }
 if (var_1_37) {
  var_1_72 = ((((var_1_26) < (var_1_9)) ? (var_1_26) : (var_1_9)));
 } else {
  var_1_72 = (((var_1_73 + var_1_74) + 1720035772u) - var_1_26);
 }
 if ((- var_1_85) != var_1_53) {
  var_1_95 = ((((var_1_34) < (var_1_119)) ? (var_1_34) : (var_1_119)));
 }
 if (var_1_69) {
  var_1_99 = ((64 + ((((var_1_22) > (var_1_123)) ? (var_1_22) : (var_1_123)))) + var_1_66);
 }
 if (var_1_95 < (var_1_62 - var_1_32)) {
  if (var_1_69) {
   var_1_102 = ((((var_1_60) > ((((((3717949490u - var_1_72)) > (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77))))) ? ((3717949490u - var_1_72)) : (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77)))))))) ? (var_1_60) : ((((((3717949490u - var_1_72)) > (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77))))) ? ((3717949490u - var_1_72)) : (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77)))))))));
  } else {
   if (((((var_1_112) < 0 ) ? -(var_1_112) : (var_1_112))) > (var_1_11 * var_1_10)) {
    var_1_102 = (var_1_8 - var_1_103);
   } else {
    var_1_102 = ((((((var_1_77 - var_1_113)) > (var_1_76)) ? ((var_1_77 - var_1_113)) : (var_1_76))) + (var_1_34 + (var_1_28 + var_1_89)));
   }
  }
 }
 var_1_114 = var_1_99;
 if (var_1_126) {
  var_1_46 = (((((((((var_1_47) > (49.53f)) ? (var_1_47) : (49.53f)))) > (var_1_48)) ? (((((var_1_47) > (49.53f)) ? (var_1_47) : (49.53f)))) : (var_1_48))) + 64.25f);
 } else {
  var_1_46 = (var_1_48 + var_1_49);
 }
 signed long int stepLocal_12 = (var_1_95 + 5) / var_1_51;
 unsigned long int stepLocal_11 = var_1_9 * (var_1_30 - 32);
 unsigned char stepLocal_10 = var_1_104;
 unsigned char stepLocal_9 = var_1_108;
 if (stepLocal_12 > var_1_17) {
  if (stepLocal_11 > var_1_102) {
   if ((var_1_32 == var_1_118) || stepLocal_10) {
    var_1_50 = ((((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) - var_1_53) - (10.4f + var_1_54));
   } else {
    var_1_50 = var_1_54;
   }
  } else {
   var_1_50 = (var_1_54 + var_1_47);
  }
 } else {
  if (var_1_102 == stepLocal_9) {
   var_1_50 = (((((var_1_49) < (var_1_54)) ? (var_1_49) : (var_1_54))) + var_1_47);
  } else {
   var_1_50 = (var_1_49 + var_1_47);
  }
 }
 unsigned long int stepLocal_13 = var_1_7 / ((((var_1_43) < (var_1_32)) ? (var_1_43) : (var_1_32)));
 if (var_1_71 == stepLocal_13) {
  var_1_59 = (var_1_33 - var_1_34);
 }
 signed long int stepLocal_21 = ((((var_1_63) < (var_1_62)) ? (var_1_63) : (var_1_62))) - var_1_65;
 unsigned long int stepLocal_20 = (var_1_77 - var_1_28) >> var_1_32;
 if (var_1_126) {
  var_1_80 = (var_1_58 - 499.5f);
 } else {
  if (stepLocal_21 > var_1_32) {
   var_1_80 = ((((var_1_52) < (var_1_54)) ? (var_1_52) : (var_1_54)));
  } else {
   if (! var_1_36) {
    if (stepLocal_20 <= (var_1_4 * var_1_10)) {
     var_1_80 = (((((0.09999999999999998f + var_1_53)) > (var_1_49)) ? ((0.09999999999999998f + var_1_53)) : (var_1_49)));
    } else {
     var_1_80 = ((((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) + var_1_53) - var_1_57);
    }
   } else {
    var_1_80 = (var_1_54 - var_1_53);
   }
  }
 }
 signed char stepLocal_24 = var_1_40;
 unsigned char stepLocal_23 = var_1_126;
 if (stepLocal_23 || var_1_69) {
  if (stepLocal_24 != var_1_118) {
   var_1_83 = ((((((((var_1_53) < (0.5)) ? (var_1_53) : (0.5))) < 0 ) ? -((((var_1_53) < (0.5)) ? (var_1_53) : (0.5))) : ((((var_1_53) < (0.5)) ? (var_1_53) : (0.5))))) + (var_1_85 + var_1_86));
  }
 } else {
  if (var_1_50 == var_1_53) {
   var_1_83 = (var_1_48 + ((((var_1_85) < (var_1_86)) ? (var_1_85) : (var_1_86))));
  } else {
   var_1_83 = (((((var_1_57 - ((((var_1_54) > (var_1_58)) ? (var_1_54) : (var_1_58))))) < ((var_1_53 - var_1_87))) ? ((var_1_57 - ((((var_1_54) > (var_1_58)) ? (var_1_54) : (var_1_58))))) : ((var_1_53 - var_1_87))));
  }
 }
 if (var_1_104) {
  var_1_93 = (((((((((var_1_48) > (var_1_85)) ? (var_1_48) : (var_1_85)))) > (var_1_53)) ? (((((var_1_48) > (var_1_85)) ? (var_1_48) : (var_1_85)))) : (var_1_53))) + ((((var_1_49) < (var_1_86)) ? (var_1_49) : (var_1_86))));
 } else {
  var_1_93 = (((((0.9f - var_1_53)) < (var_1_48)) ? ((0.9f - var_1_53)) : (var_1_48)));
 }
 if (var_1_116 >= ((((var_1_60) > (var_1_61)) ? (var_1_60) : (var_1_61)))) {
  var_1_98 = (var_1_8 - (var_1_18 + var_1_95));
 }
 if (var_1_126) {
  var_1_109 = var_1_43;
 } else {
  var_1_109 = 100;
 }
 if (var_1_126) {
  var_1_122 = var_1_101;
 } else {
  var_1_122 = var_1_28;
 }
 unsigned char stepLocal_28 = var_1_107;
 if (var_1_126 && stepLocal_28) {
  var_1_124 = ((var_1_101 - var_1_34) + var_1_20);
 }
 if (var_1_18 <= (var_1_102 + ((((-1) > (var_1_125)) ? (-1) : (var_1_125))))) {
  var_1_92 = (((((((var_1_11) > (var_1_34)) ? (var_1_11) : (var_1_34))) < 0 ) ? -((((var_1_11) > (var_1_34)) ? (var_1_11) : (var_1_34))) : ((((var_1_11) > (var_1_34)) ? (var_1_11) : (var_1_34)))));
 }
 signed char stepLocal_16 = var_1_19;
 if (stepLocal_16 <= var_1_114) {
  var_1_68 = ((! (! var_1_36)) && var_1_69);
 } else {
  var_1_68 = var_1_70;
 }
 if (var_1_109 <= var_1_76) {
  if (var_1_34 > var_1_33) {
   var_1_75 = (var_1_65 - var_1_32);
  }
 }
 if (var_1_98 == var_1_23) {
  var_1_1 = ((((var_1_4) > (((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7))))) ? (var_1_4) : (((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7))))));
 } else {
  var_1_1 = (var_1_8 - ((((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) > (var_1_11)) ? (((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) : (var_1_11))));
 }
 unsigned char stepLocal_3 = (100 << var_1_7) >= var_1_18;
 unsigned char stepLocal_2 = var_1_126 || var_1_68;
 unsigned long int stepLocal_1 = (((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6));
 unsigned long int stepLocal_0 = var_1_11;
 if (stepLocal_2 || ((var_1_11 / 128) >= var_1_7)) {
  var_1_14 = ((var_1_17 - var_1_18) + var_1_19);
 } else {
  if (stepLocal_1 < ((var_1_18 / var_1_8) / 32u)) {
   if (var_1_126 || stepLocal_3) {
    if (-1 == stepLocal_0) {
     var_1_14 = (((((((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)))) > (var_1_17)) ? (((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)))) : (var_1_17))) + (var_1_20 + (var_1_21 - var_1_22)));
    }
   } else {
    var_1_14 = 4;
   }
  } else {
   var_1_14 = -16;
  }
 }
 unsigned char stepLocal_25 = var_1_122;
 if (stepLocal_25 >= var_1_92) {
  if (var_1_85 <= (var_1_46 / ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) {
   var_1_88 = (var_1_28 + (var_1_61 - var_1_22));
  } else {
   if (var_1_47 < (3.2f - var_1_53)) {
    var_1_88 = ((var_1_61 + (var_1_89 + var_1_90)) - var_1_21);
   } else {
    var_1_88 = (57317 - var_1_28);
   }
  }
 }
 if (var_1_104) {
  if (var_1_75 <= var_1_33) {
   var_1_79 = (var_1_41 + (1553477946u - ((((var_1_21) > (var_1_17)) ? (var_1_21) : (var_1_17)))));
  }
 } else {
  var_1_79 = 128u;
 }
 unsigned long int stepLocal_15 = (var_1_23 / var_1_32) * var_1_79;
 unsigned long int stepLocal_14 = var_1_91;
 if (stepLocal_14 <= var_1_29) {
  if (stepLocal_15 >= (var_1_43 << ((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))))) {
   var_1_64 = var_1_65;
  }
 } else {
  var_1_64 = (var_1_13 + last_1_var_1_64);
 }
 unsigned short int stepLocal_19 = var_1_55;
 signed long int stepLocal_18 = 64 - ((((var_1_28) > (var_1_18)) ? (var_1_28) : (var_1_18)));
 if (stepLocal_19 > var_1_28) {
  if (stepLocal_18 >= var_1_21) {
   var_1_78 = ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)));
  } else {
   var_1_78 = (var_1_63 - var_1_61);
  }
 }
 unsigned char stepLocal_22 = var_1_79 > (var_1_77 / var_1_34);
 if (2.25f < var_1_53) {
  var_1_81 = ((((var_1_17) > (((((((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) < ((var_1_65 + 50))) ? (((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) : ((var_1_65 + 50)))))) ? (var_1_17) : (((((((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) < ((var_1_65 + 50))) ? (((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) : ((var_1_65 + 50)))))));
 } else {
  if (stepLocal_22 || var_1_69) {
   var_1_81 = (200 + var_1_22);
  } else {
   var_1_81 = (var_1_62 - var_1_30);
  }
 }
 if (! (var_1_64 < var_1_118)) {
  var_1_94 = (var_1_87 - var_1_53);
 } else {
  var_1_94 = (((((var_1_58) < (var_1_86)) ? (var_1_58) : (var_1_86))) + var_1_47);
 }
 unsigned long int stepLocal_26 = var_1_10;
 if ((var_1_58 - 1000000.4f) == (var_1_50 * var_1_47)) {
  if (var_1_94 <= (var_1_85 * var_1_49)) {
   var_1_96 = ((var_1_97 - var_1_22) - (var_1_66 + var_1_18));
  }
 } else {
  if (var_1_76 > stepLocal_26) {
   var_1_96 = ((var_1_32 - (var_1_90 - var_1_92)) + (var_1_29 - var_1_65));
  }
 }
 var_1_110 = var_1_79;
 if (var_1_68) {
  var_1_111 = var_1_79;
 }
 unsigned char stepLocal_7 = var_1_78 < var_1_76;
 if ((var_1_79 <= var_1_110) || stepLocal_7) {
  var_1_38 = var_1_40;
 } else {
  var_1_38 = 1;
 }
 if (var_1_55 > (var_1_73 | (var_1_76 + var_1_74))) {
  if (((var_1_110 / var_1_28) > var_1_13) && (var_1_30 < var_1_8)) {
   var_1_100 = (((((var_1_18 - var_1_33)) > ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + var_1_22))) ? ((var_1_18 - var_1_33)) : ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + var_1_22))));
  } else {
   var_1_100 = (var_1_33 + var_1_22);
  }
 } else {
  if (((var_1_88 >> var_1_101) >= var_1_66) || var_1_69) {
   var_1_100 = ((var_1_101 + var_1_65) + var_1_34);
  } else {
   var_1_100 = var_1_13;
  }
 }
 if ((var_1_23 > ((((var_1_23) < (16u)) ? (var_1_23) : (16u)))) && (var_1_65 <= var_1_101)) {
  if (var_1_37 && ((var_1_90 * var_1_125) == -8)) {
   if (var_1_111 >= ((((var_1_109) < 0 ) ? -(var_1_109) : (var_1_109)))) {
    if ((~ var_1_20) > ((var_1_125 / var_1_51) * (var_1_77 << var_1_111))) {
     if (var_1_8 < (var_1_106 - var_1_76)) {
      var_1_105 = (var_1_69 && var_1_36);
     } else {
      var_1_105 = (var_1_70 || var_1_107);
     }
    }
   }
  }
 } else {
  var_1_105 = var_1_70;
 }
 if (((var_1_43 - var_1_34) - var_1_17) > var_1_24) {
  var_1_56 = (var_1_54 - 31.2f);
 } else {
  if (var_1_105) {
   var_1_56 = ((((var_1_52) < (7.5f)) ? (var_1_52) : (7.5f)));
  } else {
   if ((var_1_40 / ((((1000000000) < 0 ) ? -(1000000000) : (1000000000)))) < (var_1_21 & ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) {
    var_1_56 = ((((var_1_54 + var_1_47) < 0 ) ? -(var_1_54 + var_1_47) : (var_1_54 + var_1_47)));
   } else {
    var_1_56 = ((var_1_57 - var_1_53) - (var_1_54 + var_1_58));
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -31);
 assume_abort_if_not(var_1_20 <= 32);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 31);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 190);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 31);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 31);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 63);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 65535);
 assume_abort_if_not(var_1_51 != 0);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= -461168.6018427383000e+13F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 4611686.018427383000e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32767);
 var_1_62 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_62 >= 32767);
 assume_abort_if_not(var_1_62 <= 65534);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 32767);
 assume_abort_if_not(var_1_63 <= 65534);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 1);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 1);
 assume_abort_if_not(var_1_69 <= 1);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 0);
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 536870911);
 assume_abort_if_not(var_1_73 <= 1073741824);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 536870912);
 assume_abort_if_not(var_1_74 <= 1073741823);
 var_1_77 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_77 >= 1610612735);
 assume_abort_if_not(var_1_77 <= 2147483647);
 var_1_85 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_85 >= -230584.3009213691400e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_86 >= -230584.3009213691400e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 2305843.009213691400e+12F && var_1_86 >= 1.0e-20F ));
 var_1_87 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 9223372.036854766000e+12F && var_1_87 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_89 >= 8192);
 assume_abort_if_not(var_1_89 <= 16384);
 var_1_90 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_90 >= 8192);
 assume_abort_if_not(var_1_90 <= 16383);
 var_1_97 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_97 >= 16382);
 assume_abort_if_not(var_1_97 <= 32766);
 var_1_101 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_101 >= 1);
 assume_abort_if_not(var_1_101 <= 15);
 var_1_103 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_103 >= 0);
 assume_abort_if_not(var_1_103 <= 2147483647);
 var_1_106 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_106 >= 2147483647);
 assume_abort_if_not(var_1_106 <= 4294967295);
 var_1_107 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_107 >= 0);
 assume_abort_if_not(var_1_107 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_26 = var_1_26;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_104 = var_1_104;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_98 == var_1_23) ? (var_1_1 == ((unsigned long int) ((((var_1_4) > (((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7))))) ? (var_1_4) : (((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7)))))))) : (var_1_1 == ((unsigned long int) (var_1_8 - ((((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) > (var_1_11)) ? (((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) : (var_1_11))))))) && (var_1_12 == ((signed char) ((((var_1_13) > (2)) ? (var_1_13) : (2)))))) && (((var_1_126 || var_1_68) || ((var_1_11 / 128) >= var_1_7)) ? (var_1_14 == ((signed char) ((var_1_17 - var_1_18) + var_1_19))) : ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) < ((var_1_18 / var_1_8) / 32u)) ? ((var_1_126 || ((100 << var_1_7) >= var_1_18)) ? ((-1 == var_1_11) ? (var_1_14 == ((signed char) (((((((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)))) > (var_1_17)) ? (((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)))) : (var_1_17))) + (var_1_20 + (var_1_21 - var_1_22))))) : 1) : (var_1_14 == ((signed char) 4))) : (var_1_14 == ((signed char) -16))))) && (var_1_23 == ((unsigned long int) (var_1_8 - var_1_18)))) && (var_1_37 ? (var_1_24 == ((signed char) (var_1_22 - (((((var_1_21 + var_1_18)) > (var_1_17)) ? ((var_1_21 + var_1_18)) : (var_1_17)))))) : (var_1_24 == ((signed char) ((((((((-64) < ((var_1_20 + -8))) ? (-64) : ((var_1_20 + -8))))) > (var_1_19)) ? (((((-64) < ((var_1_20 + -8))) ? (-64) : ((var_1_20 + -8))))) : (var_1_19))))))) && ((((((var_1_123) > (last_1_var_1_26)) ? (var_1_123) : (last_1_var_1_26))) < ((var_1_21 + var_1_22) - 100)) ? (var_1_37 ? (var_1_26 == ((unsigned char) var_1_22)) : (var_1_26 == ((unsigned char) (((((((((var_1_28 - var_1_21)) < (var_1_18)) ? ((var_1_28 - var_1_21)) : (var_1_18)))) < ((var_1_29 - (var_1_17 + var_1_22)))) ? ((((((var_1_28 - var_1_21)) < (var_1_18)) ? ((var_1_28 - var_1_21)) : (var_1_18)))) : ((var_1_29 - (var_1_17 + var_1_22)))))))) : ((var_1_112 < -2) ? (var_1_26 == ((unsigned char) var_1_18)) : (var_1_26 == ((unsigned char) ((var_1_30 - var_1_21) - var_1_18)))))) && ((((~ var_1_8) >> var_1_32) >= var_1_76) ? (var_1_31 == ((signed char) (var_1_21 - (((((var_1_17) > (var_1_33)) ? (var_1_17) : (var_1_33))) + (var_1_34 - 25))))) : 1)) && ((var_1_28 <= (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) * (var_1_30 - var_1_17))) ? ((var_1_33 > var_1_18) ? (var_1_35 == ((unsigned char) ((((((((var_1_33) > ((var_1_29 - var_1_21))) ? (var_1_33) : ((var_1_29 - var_1_21))))) < ((((((5 + var_1_22)) < (var_1_28)) ? ((5 + var_1_22)) : (var_1_28))))) ? (((((var_1_33) > ((var_1_29 - var_1_21))) ? (var_1_33) : ((var_1_29 - var_1_21))))) : ((((((5 + var_1_22)) < (var_1_28)) ? ((5 + var_1_22)) : (var_1_28)))))))) : (var_1_35 == ((unsigned char) (var_1_28 - var_1_22)))) : (var_1_35 == ((unsigned char) (var_1_34 + var_1_22))))) && ((last_1_var_1_78 < (-2 / var_1_30)) ? (var_1_37 == ((unsigned char) (! (! var_1_36)))) : 1)) && (((var_1_79 <= var_1_110) || (var_1_78 < var_1_76)) ? (var_1_38 == ((signed char) var_1_40)) : (var_1_38 == ((signed char) 1)))) && (((var_1_76 + var_1_22) >= var_1_7) ? (var_1_41 == ((unsigned char) (var_1_34 + (var_1_43 - ((((16) > (var_1_18)) ? (16) : (var_1_18))))))) : 1)) && ((var_1_19 >= var_1_35) ? (var_1_44 == ((double) ((((1.00000005E7) > (var_1_45)) ? (1.00000005E7) : (var_1_45))))) : 1)) && (var_1_126 ? (var_1_46 == ((float) (((((((((var_1_47) > (49.53f)) ? (var_1_47) : (49.53f)))) > (var_1_48)) ? (((((var_1_47) > (49.53f)) ? (var_1_47) : (49.53f)))) : (var_1_48))) + 64.25f))) : (var_1_46 == ((float) (var_1_48 + var_1_49))))) && ((((var_1_95 + 5) / var_1_51) > var_1_17) ? (((var_1_9 * (var_1_30 - 32)) > var_1_102) ? (((var_1_32 == var_1_118) || var_1_104) ? (var_1_50 == ((float) ((((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) - var_1_53) - (10.4f + var_1_54)))) : (var_1_50 == ((float) var_1_54))) : (var_1_50 == ((float) (var_1_54 + var_1_47)))) : ((var_1_102 == var_1_108) ? (var_1_50 == ((float) (((((var_1_49) < (var_1_54)) ? (var_1_49) : (var_1_54))) + var_1_47))) : (var_1_50 == ((float) (var_1_49 + var_1_47)))))) && (var_1_55 == ((unsigned short int) var_1_32))) && ((((var_1_43 - var_1_34) - var_1_17) > var_1_24) ? (var_1_56 == ((float) (var_1_54 - 31.2f))) : (var_1_105 ? (var_1_56 == ((float) ((((var_1_52) < (7.5f)) ? (var_1_52) : (7.5f))))) : (((var_1_40 / ((((1000000000) < 0 ) ? -(1000000000) : (1000000000)))) < (var_1_21 & ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) ? (var_1_56 == ((float) ((((var_1_54 + var_1_47) < 0 ) ? -(var_1_54 + var_1_47) : (var_1_54 + var_1_47))))) : (var_1_56 == ((float) ((var_1_57 - var_1_53) - (var_1_54 + var_1_58)))))))) && ((var_1_71 == (var_1_7 / ((((var_1_43) < (var_1_32)) ? (var_1_43) : (var_1_32))))) ? (var_1_59 == ((signed short int) (var_1_33 - var_1_34))) : 1)) && ((last_1_var_1_56 < ((var_1_53 * var_1_45) * var_1_48)) ? (var_1_60 == ((unsigned short int) ((var_1_61 - 64) + last_1_var_1_60))) : (var_1_60 == ((unsigned short int) (((((var_1_62) < (var_1_63)) ? (var_1_62) : (var_1_63))) - last_1_var_1_60))))) && ((var_1_91 <= var_1_29) ? ((((var_1_23 / var_1_32) * var_1_79) >= (var_1_43 << ((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))))) ? (var_1_64 == ((signed short int) var_1_65)) : 1) : (var_1_64 == ((signed short int) (var_1_13 + last_1_var_1_64))))) && (var_1_67 == ((unsigned char) var_1_21))) && ((var_1_19 <= var_1_114) ? (var_1_68 == ((unsigned char) ((! (! var_1_36)) && var_1_69))) : (var_1_68 == ((unsigned char) var_1_70)))) && (var_1_71 == ((unsigned char) (var_1_17 + var_1_66)))) && (var_1_37 ? (var_1_72 == ((unsigned long int) ((((var_1_26) < (var_1_9)) ? (var_1_26) : (var_1_9))))) : (var_1_72 == ((unsigned long int) (((var_1_73 + var_1_74) + 1720035772u) - var_1_26))))) && ((var_1_109 <= var_1_76) ? ((var_1_34 > var_1_33) ? (var_1_75 == ((signed char) (var_1_65 - var_1_32))) : 1) : 1)) && ((var_1_34 < last_1_var_1_79) ? (var_1_76 == ((unsigned long int) (((var_1_77 - var_1_65) - last_1_var_1_79) + last_1_var_1_26))) : 1)) && ((var_1_55 > var_1_28) ? (((64 - ((((var_1_28) > (var_1_18)) ? (var_1_28) : (var_1_18)))) >= var_1_21) ? (var_1_78 == ((unsigned short int) ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) : (var_1_78 == ((unsigned short int) (var_1_63 - var_1_61)))) : 1)) && (var_1_104 ? ((var_1_75 <= var_1_33) ? (var_1_79 == ((unsigned long int) (var_1_41 + (1553477946u - ((((var_1_21) > (var_1_17)) ? (var_1_21) : (var_1_17))))))) : 1) : (var_1_79 == ((unsigned long int) 128u)))) && (var_1_126 ? (var_1_80 == ((float) (var_1_58 - 499.5f))) : (((((((var_1_63) < (var_1_62)) ? (var_1_63) : (var_1_62))) - var_1_65) > var_1_32) ? (var_1_80 == ((float) ((((var_1_52) < (var_1_54)) ? (var_1_52) : (var_1_54))))) : ((! var_1_36) ? ((((var_1_77 - var_1_28) >> var_1_32) <= (var_1_4 * var_1_10)) ? (var_1_80 == ((float) (((((0.09999999999999998f + var_1_53)) > (var_1_49)) ? ((0.09999999999999998f + var_1_53)) : (var_1_49))))) : (var_1_80 == ((float) ((((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) + var_1_53) - var_1_57)))) : (var_1_80 == ((float) (var_1_54 - var_1_53))))))) && ((2.25f < var_1_53) ? (var_1_81 == ((unsigned short int) ((((var_1_17) > (((((((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) < ((var_1_65 + 50))) ? (((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) : ((var_1_65 + 50)))))) ? (var_1_17) : (((((((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) < ((var_1_65 + 50))) ? (((((var_1_95) < (var_1_22)) ? (var_1_95) : (var_1_22)))) : ((var_1_65 + 50))))))))) : (((var_1_79 > (var_1_77 / var_1_34)) || var_1_69) ? (var_1_81 == ((unsigned short int) (200 + var_1_22))) : (var_1_81 == ((unsigned short int) (var_1_62 - var_1_30)))))) && ((var_1_126 || var_1_69) ? ((var_1_40 != var_1_118) ? (var_1_83 == ((double) ((((((((var_1_53) < (0.5)) ? (var_1_53) : (0.5))) < 0 ) ? -((((var_1_53) < (0.5)) ? (var_1_53) : (0.5))) : ((((var_1_53) < (0.5)) ? (var_1_53) : (0.5))))) + (var_1_85 + var_1_86)))) : 1) : ((var_1_50 == var_1_53) ? (var_1_83 == ((double) (var_1_48 + ((((var_1_85) < (var_1_86)) ? (var_1_85) : (var_1_86)))))) : (var_1_83 == ((double) (((((var_1_57 - ((((var_1_54) > (var_1_58)) ? (var_1_54) : (var_1_58))))) < ((var_1_53 - var_1_87))) ? ((var_1_57 - ((((var_1_54) > (var_1_58)) ? (var_1_54) : (var_1_58))))) : ((var_1_53 - var_1_87))))))))) && ((var_1_122 >= var_1_92) ? ((var_1_85 <= (var_1_46 / ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) ? (var_1_88 == ((unsigned short int) (var_1_28 + (var_1_61 - var_1_22)))) : ((var_1_47 < (3.2f - var_1_53)) ? (var_1_88 == ((unsigned short int) ((var_1_61 + (var_1_89 + var_1_90)) - var_1_21))) : (var_1_88 == ((unsigned short int) (57317 - var_1_28))))) : 1)) && (var_1_91 == ((unsigned long int) (var_1_33 + var_1_73)))) && ((var_1_18 <= (var_1_102 + ((((-1) > (var_1_125)) ? (-1) : (var_1_125))))) ? (var_1_92 == ((unsigned long int) (((((((var_1_11) > (var_1_34)) ? (var_1_11) : (var_1_34))) < 0 ) ? -((((var_1_11) > (var_1_34)) ? (var_1_11) : (var_1_34))) : ((((var_1_11) > (var_1_34)) ? (var_1_11) : (var_1_34))))))) : 1)) && (var_1_104 ? (var_1_93 == ((float) (((((((((var_1_48) > (var_1_85)) ? (var_1_48) : (var_1_85)))) > (var_1_53)) ? (((((var_1_48) > (var_1_85)) ? (var_1_48) : (var_1_85)))) : (var_1_53))) + ((((var_1_49) < (var_1_86)) ? (var_1_49) : (var_1_86)))))) : (var_1_93 == ((float) (((((0.9f - var_1_53)) < (var_1_48)) ? ((0.9f - var_1_53)) : (var_1_48))))))) && ((! (var_1_64 < var_1_118)) ? (var_1_94 == ((double) (var_1_87 - var_1_53))) : (var_1_94 == ((double) (((((var_1_58) < (var_1_86)) ? (var_1_58) : (var_1_86))) + var_1_47))))) && (((- var_1_85) != var_1_53) ? (var_1_95 == ((unsigned short int) ((((var_1_34) < (var_1_119)) ? (var_1_34) : (var_1_119))))) : 1)) && (((var_1_58 - 1000000.4f) == (var_1_50 * var_1_47)) ? ((var_1_94 <= (var_1_85 * var_1_49)) ? (var_1_96 == ((signed short int) ((var_1_97 - var_1_22) - (var_1_66 + var_1_18)))) : 1) : ((var_1_76 > var_1_10) ? (var_1_96 == ((signed short int) ((var_1_32 - (var_1_90 - var_1_92)) + (var_1_29 - var_1_65)))) : 1))) && ((var_1_116 >= ((((var_1_60) > (var_1_61)) ? (var_1_60) : (var_1_61)))) ? (var_1_98 == ((unsigned long int) (var_1_8 - (var_1_18 + var_1_95)))) : 1)) && (var_1_69 ? (var_1_99 == ((unsigned short int) ((64 + ((((var_1_22) > (var_1_123)) ? (var_1_22) : (var_1_123)))) + var_1_66))) : 1)) && ((var_1_55 > (var_1_73 | (var_1_76 + var_1_74))) ? ((((var_1_110 / var_1_28) > var_1_13) && (var_1_30 < var_1_8)) ? (var_1_100 == ((signed char) (((((var_1_18 - var_1_33)) > ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + var_1_22))) ? ((var_1_18 - var_1_33)) : ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + var_1_22)))))) : (var_1_100 == ((signed char) (var_1_33 + var_1_22)))) : ((((var_1_88 >> var_1_101) >= var_1_66) || var_1_69) ? (var_1_100 == ((signed char) ((var_1_101 + var_1_65) + var_1_34))) : (var_1_100 == ((signed char) var_1_13))))) && ((var_1_95 < (var_1_62 - var_1_32)) ? (var_1_69 ? (var_1_102 == ((unsigned long int) ((((var_1_60) > ((((((3717949490u - var_1_72)) > (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77))))) ? ((3717949490u - var_1_72)) : (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77)))))))) ? (var_1_60) : ((((((3717949490u - var_1_72)) > (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77))))) ? ((3717949490u - var_1_72)) : (((((var_1_29) < (var_1_77)) ? (var_1_29) : (var_1_77))))))))))) : ((((((var_1_112) < 0 ) ? -(var_1_112) : (var_1_112))) > (var_1_11 * var_1_10)) ? (var_1_102 == ((unsigned long int) (var_1_8 - var_1_103))) : (var_1_102 == ((unsigned long int) ((((((var_1_77 - var_1_113)) > (var_1_76)) ? ((var_1_77 - var_1_113)) : (var_1_76))) + (var_1_34 + (var_1_28 + var_1_89))))))) : 1)) && ((var_1_91 < 100000000u) ? (var_1_104 == ((unsigned char) var_1_69)) : (var_1_104 == ((unsigned char) (last_1_var_1_104 || var_1_69))))) && (((var_1_23 > ((((var_1_23) < (16u)) ? (var_1_23) : (16u)))) && (var_1_65 <= var_1_101)) ? ((var_1_37 && ((var_1_90 * var_1_125) == -8)) ? ((var_1_111 >= ((((var_1_109) < 0 ) ? -(var_1_109) : (var_1_109)))) ? (((~ var_1_20) > ((var_1_125 / var_1_51) * (var_1_77 << var_1_111))) ? ((var_1_8 < (var_1_106 - var_1_76)) ? (var_1_105 == ((unsigned char) (var_1_69 && var_1_36))) : (var_1_105 == ((unsigned char) (var_1_70 || var_1_107)))) : 1) : 1) : 1) : (var_1_105 == ((unsigned char) var_1_70)))) && (var_1_70 ? (var_1_108 == ((unsigned char) 25)) : (var_1_108 == ((unsigned char) var_1_29)))) && (var_1_126 ? (var_1_109 == ((unsigned char) var_1_43)) : (var_1_109 == ((unsigned char) 100)))) && (var_1_110 == ((unsigned long int) var_1_79))) && (var_1_68 ? (var_1_111 == ((unsigned short int) var_1_79)) : 1)) && (var_1_104 ? (var_1_112 == ((signed char) var_1_19)) : 1)) && (var_1_113 == ((signed long int) var_1_51))) && (var_1_114 == ((signed short int) var_1_99))) && (var_1_69 ? (var_1_115 == ((signed char) var_1_65)) : 1)) && (var_1_116 == ((unsigned long int) var_1_17))) && (var_1_69 ? (var_1_117 == ((double) var_1_52)) : (var_1_117 == ((double) var_1_54)))) && (var_1_118 == ((signed long int) var_1_20))) && (var_1_37 ? (var_1_119 == ((signed short int) var_1_67)) : (var_1_119 == ((signed short int) var_1_60)))) && (var_1_104 ? (var_1_121 == ((unsigned short int) var_1_101)) : (var_1_121 == ((unsigned short int) var_1_97)))) && (var_1_126 ? (var_1_122 == ((unsigned char) var_1_101)) : (var_1_122 == ((unsigned char) var_1_28)))) && (var_1_123 == ((signed long int) (-64 + ((((var_1_119) < (var_1_108)) ? (var_1_119) : (var_1_108))))))) && ((var_1_126 && var_1_107) ? (var_1_124 == ((signed char) ((var_1_101 - var_1_34) + var_1_20))) : 1)) && (var_1_125 == ((signed long int) last_1_var_1_92))) && (var_1_126 == ((unsigned char) var_1_69))
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
