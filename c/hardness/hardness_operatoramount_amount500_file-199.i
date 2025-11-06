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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 9.125;
unsigned char var_1_5 = 1;
double var_1_6 = 64.5;
double var_1_7 = 15.5;
double var_1_8 = 10000000000.249;
double var_1_9 = 127.5;
double var_1_11 = 256.2;
double var_1_12 = 99.5;
double var_1_13 = 2.1;
signed long int var_1_14 = -2;
float var_1_15 = 2.5;
signed long int var_1_18 = 0;
signed long int var_1_19 = 25;
signed long int var_1_20 = 16;
signed long int var_1_21 = 50;
signed long int var_1_22 = 1394316524;
unsigned short int var_1_23 = 16;
unsigned short int var_1_24 = 10;
double var_1_25 = 63.8;
double var_1_27 = -0.125;
float var_1_28 = 24.625;
unsigned char var_1_29 = 1;
unsigned short int var_1_30 = 59247;
unsigned short int var_1_31 = 1;
double var_1_32 = 4.75;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 25;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 50;
unsigned char var_1_42 = 25;
unsigned char var_1_43 = 5;
signed short int var_1_44 = 25;
double var_1_45 = 4.5;
signed char var_1_46 = -2;
signed char var_1_47 = 64;
signed char var_1_48 = 64;
signed char var_1_49 = 32;
signed char var_1_50 = 0;
unsigned short int var_1_51 = 128;
unsigned short int var_1_52 = 39960;
unsigned long int var_1_53 = 4;
unsigned short int var_1_55 = 25;
unsigned char var_1_56 = 1;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 128;
unsigned long int var_1_60 = 10;
unsigned long int var_1_61 = 0;
unsigned long int var_1_62 = 128;
unsigned long int var_1_63 = 2692801066;
unsigned long int var_1_64 = 3300188245;
double var_1_65 = 0.5;
signed char var_1_66 = -2;
signed char var_1_68 = 100;
signed short int var_1_69 = 64;
signed short int var_1_70 = 8;
double var_1_71 = 3.875;
double var_1_72 = 100000000000.2;
unsigned long int var_1_73 = 1;
unsigned char var_1_74 = 0;
signed char var_1_75 = -64;
signed char var_1_76 = -5;
double var_1_77 = 4.2;
signed char var_1_78 = -128;
signed long int var_1_80 = 256;
float var_1_81 = 5.9;
signed char var_1_83 = -128;
unsigned long int var_1_84 = 0;
unsigned short int var_1_85 = 4;
double var_1_86 = 24.25;
double var_1_87 = 24.6;
signed long int var_1_88 = -1;
signed char var_1_89 = -32;
unsigned short int var_1_90 = 4;
double var_1_91 = 9999.03;
signed char var_1_92 = 8;
double var_1_93 = 24.6;
double var_1_94 = 64.5;
double var_1_95 = 8.9;
signed short int var_1_96 = -16;
signed short int var_1_97 = 128;
unsigned long int var_1_98 = 2;
unsigned long int var_1_99 = 256;
signed short int var_1_100 = 32;
signed long int var_1_101 = 2;
signed short int var_1_102 = -10;
signed long int var_1_103 = -128;
float var_1_104 = 4.75;
signed char var_1_105 = 4;
signed short int var_1_106 = 4;
signed char var_1_107 = -64;
double var_1_108 = -0.25;
double var_1_109 = 3.6;
signed short int var_1_110 = -32;
unsigned char last_1_var_1_29 = 1;
unsigned char last_1_var_1_56 = 1;
unsigned long int last_1_var_1_60 = 10;
unsigned char last_1_var_1_74 = 0;
double last_1_var_1_77 = 4.2;
double last_1_var_1_91 = 9999.03;
unsigned long int last_1_var_1_98 = 2;
signed long int last_1_var_1_101 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_34) {
  var_1_88 = (64 - (last_1_var_1_98 + var_1_21));
 } else {
  if (last_1_var_1_29) {
   var_1_88 = (((((var_1_42) > (var_1_19)) ? (var_1_42) : (var_1_19))) + (var_1_47 - var_1_68));
  } else {
   var_1_88 = (var_1_39 + var_1_47);
  }
 }
 unsigned char stepLocal_2 = last_1_var_1_29 || (last_1_var_1_77 > last_1_var_1_91);
 unsigned char stepLocal_1 = last_1_var_1_74;
 signed long int stepLocal_0 = (10 - 1000) & 10;
 if ((- last_1_var_1_77) < (0.125f + last_1_var_1_91)) {
  if (last_1_var_1_74 || stepLocal_2) {
   var_1_1 = (((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) < 0 ) ? -((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) : ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))));
  } else {
   if (last_1_var_1_29 || stepLocal_1) {
    var_1_1 = ((((var_1_6) < (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))) ? (var_1_6) : (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))));
   }
  }
 } else {
  if (last_1_var_1_77 < var_1_6) {
   if (stepLocal_0 < last_1_var_1_101) {
    var_1_1 = ((64.5 - (var_1_11 + var_1_12)) + var_1_13);
   }
  } else {
   var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 }
 signed long int stepLocal_5 = var_1_20;
 if (var_1_88 > stepLocal_5) {
  var_1_28 = (var_1_11 - var_1_12);
 } else {
  var_1_28 = (4.66f - var_1_12);
 }
 signed long int stepLocal_7 = ((((var_1_38) > (var_1_31)) ? (var_1_38) : (var_1_31))) - var_1_40;
 if (var_1_22 < stepLocal_7) {
  var_1_43 = var_1_42;
 }
 if (((((last_1_var_1_60) > (var_1_52)) ? (last_1_var_1_60) : (var_1_52))) <= (var_1_20 - (var_1_38 + last_1_var_1_60))) {
  var_1_60 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
 }
 var_1_65 = (((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))) + var_1_12);
 if ((-0.5f * 256.75f) < (var_1_11 / var_1_32)) {
  if (((var_1_22 - var_1_36) - (var_1_39 + var_1_47)) < (8 % ((((var_1_53) < (var_1_52)) ? (var_1_53) : (var_1_52))))) {
   var_1_66 = (((var_1_68 - var_1_53) - var_1_50) - (var_1_42 + var_1_49));
  } else {
   var_1_66 = (8 + var_1_42);
  }
 }
 var_1_70 = ((((var_1_48) > ((var_1_68 + (var_1_37 + var_1_47)))) ? (var_1_48) : ((var_1_68 + (var_1_37 + var_1_47)))));
 if (var_1_34) {
  var_1_71 = ((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) < (var_1_27)) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (var_1_27)));
 } else {
  var_1_71 = ((((var_1_11) > ((var_1_12 - var_1_72))) ? (var_1_11) : ((var_1_12 - var_1_72))));
 }
 var_1_77 = ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)));
 if (var_1_72 < (var_1_32 + var_1_8)) {
  var_1_84 = ((1519423289u - var_1_24) + var_1_47);
 }
 var_1_90 = (var_1_31 + 64);
 var_1_101 = var_1_38;
 if (var_1_34) {
  var_1_103 = var_1_18;
 }
 var_1_105 = var_1_68;
 var_1_108 = var_1_9;
 signed long int stepLocal_25 = var_1_88 / var_1_47;
 if (stepLocal_25 <= var_1_70) {
  var_1_98 = var_1_99;
 } else {
  var_1_98 = var_1_41;
 }
 if (var_1_15 <= (5.125f / 63.5f)) {
  if ((var_1_30 - var_1_31) >= var_1_84) {
   if (var_1_8 >= (var_1_11 / ((((var_1_15) > (var_1_32)) ? (var_1_15) : (var_1_32))))) {
    var_1_29 = (! var_1_33);
   } else {
    var_1_29 = ((! var_1_33) || var_1_34);
   }
  } else {
   var_1_29 = var_1_34;
  }
 } else {
  var_1_29 = var_1_34;
 }
 signed long int stepLocal_6 = var_1_31 - (var_1_90 + var_1_24);
 if ((var_1_8 + var_1_13) >= var_1_15) {
  var_1_35 = (var_1_36 + var_1_37);
 } else {
  if ((var_1_30 + var_1_37) < stepLocal_6) {
   var_1_35 = (((((((((var_1_36 + var_1_37)) > ((var_1_38 + var_1_39))) ? ((var_1_36 + var_1_37)) : ((var_1_38 + var_1_39))))) < ((var_1_40 - (var_1_41 + var_1_42)))) ? ((((((var_1_36 + var_1_37)) > ((var_1_38 + var_1_39))) ? ((var_1_36 + var_1_37)) : ((var_1_38 + var_1_39))))) : ((var_1_40 - (var_1_41 + var_1_42)))));
  } else {
   var_1_35 = var_1_41;
  }
 }
 if (var_1_29 || var_1_34) {
  var_1_45 = (var_1_12 - var_1_11);
 }
 signed long int stepLocal_12 = (var_1_47 - var_1_42) << var_1_38;
 signed long int stepLocal_11 = var_1_19;
 if (stepLocal_12 < ((var_1_41 - var_1_39) ^ (var_1_98 / 1))) {
  if ((var_1_30 - var_1_101) < stepLocal_11) {
   var_1_46 = ((var_1_48 - var_1_42) - var_1_41);
  } else {
   var_1_46 = ((var_1_48 - var_1_42) - (var_1_49 + var_1_50));
  }
 }
 signed long int stepLocal_18 = var_1_19;
 if (stepLocal_18 <= var_1_88) {
  var_1_73 = var_1_90;
 }
 if (var_1_29) {
  var_1_74 = var_1_33;
 } else {
  var_1_74 = (! var_1_34);
 }
 if (var_1_98 <= var_1_48) {
  var_1_89 = ((((var_1_49) > ((var_1_53 + var_1_42))) ? (var_1_49) : ((var_1_53 + var_1_42))));
 } else {
  var_1_89 = ((var_1_68 - var_1_42) - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))));
 }
 if (var_1_74 && var_1_5) {
  var_1_92 = (((((((10) < (var_1_49)) ? (10) : (var_1_49))) < 0 ) ? -((((10) < (var_1_49)) ? (10) : (var_1_49))) : ((((10) < (var_1_49)) ? (10) : (var_1_49)))));
 } else {
  var_1_92 = ((((var_1_49) < (var_1_68)) ? (var_1_49) : (var_1_68)));
 }
 unsigned long int stepLocal_3 = var_1_84 ^ var_1_60;
 if ((((((var_1_6) > (var_1_1)) ? (var_1_6) : (var_1_1))) / ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > var_1_8) {
  if (stepLocal_3 == var_1_84) {
   var_1_14 = ((((2) < (((var_1_18 + var_1_19) + (var_1_20 - var_1_21)))) ? (2) : (((var_1_18 + var_1_19) + (var_1_20 - var_1_21)))));
  }
 } else {
  if (var_1_13 >= var_1_6) {
   var_1_14 = (((((var_1_20 - ((((var_1_21) > (2)) ? (var_1_21) : (2))))) > (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) ? ((var_1_20 - ((((var_1_21) > (2)) ? (var_1_21) : (2))))) : (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))));
  } else {
   if (var_1_74) {
    if (var_1_13 > var_1_15) {
     var_1_14 = (10 - ((((var_1_20) > ((var_1_22 - var_1_21))) ? (var_1_20) : ((var_1_22 - var_1_21)))));
    }
   }
  }
 }
 signed long int stepLocal_4 = 2;
 if ((var_1_20 * (var_1_19 + var_1_73)) != stepLocal_4) {
  var_1_23 = var_1_24;
 }
 if (! var_1_74) {
  var_1_25 = (var_1_11 + (var_1_12 + var_1_27));
 }
 signed long int stepLocal_17 = var_1_103;
 unsigned char stepLocal_16 = var_1_41;
 if (var_1_19 > stepLocal_16) {
  if (stepLocal_17 < (var_1_31 - var_1_53)) {
   var_1_56 = (((! var_1_34) && var_1_33) && (last_1_var_1_56 || var_1_58));
  }
 } else {
  var_1_56 = ((var_1_20 < (-256 * var_1_52)) && (var_1_74 && var_1_34));
 }
 if (var_1_56) {
  if (var_1_33) {
   var_1_61 = ((((((var_1_49) < (4u)) ? (var_1_49) : (4u))) + ((((var_1_73) < (var_1_36)) ? (var_1_73) : (var_1_36)))) + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))));
  } else {
   var_1_61 = (var_1_23 + var_1_62);
  }
 } else {
  var_1_61 = (((((var_1_63) < (var_1_64)) ? (var_1_63) : (var_1_64))) - var_1_70);
 }
 unsigned char stepLocal_23 = var_1_56;
 if (stepLocal_23 || (var_1_71 > var_1_32)) {
  var_1_81 = (var_1_12 + var_1_27);
 } else {
  var_1_81 = (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < 0 ) ? -((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) : ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))));
 }
 if (var_1_77 == (- var_1_12)) {
  if (var_1_41 > var_1_88) {
   if ((var_1_40 * var_1_61) > var_1_53) {
    if (var_1_20 >= (var_1_42 + (var_1_52 / var_1_48))) {
     var_1_83 = (var_1_53 - var_1_42);
    }
   } else {
    if (var_1_50 == var_1_14) {
     var_1_83 = var_1_48;
    } else {
     var_1_83 = (var_1_42 - var_1_50);
    }
   }
  }
 } else {
  var_1_83 = (var_1_50 + var_1_53);
 }
 if (var_1_56) {
  var_1_93 = ((var_1_27 + (var_1_94 + var_1_95)) + var_1_11);
 } else {
  var_1_93 = (((((var_1_12 - 256.4)) > (var_1_6)) ? ((var_1_12 - 256.4)) : (var_1_6)));
 }
 unsigned char stepLocal_24 = var_1_33;
 if (stepLocal_24 || var_1_74) {
  if (var_1_6 < (var_1_94 * var_1_93)) {
   var_1_96 = (var_1_50 + var_1_84);
  }
 } else {
  var_1_96 = (var_1_97 - var_1_40);
 }
 if (var_1_56) {
  var_1_100 = var_1_98;
 } else {
  var_1_100 = var_1_48;
 }
 if (var_1_56) {
  var_1_102 = 2;
 } else {
  var_1_102 = var_1_68;
 }
 if (var_1_56) {
  var_1_104 = var_1_13;
 } else {
  var_1_104 = var_1_11;
 }
 if (var_1_56) {
  var_1_106 = var_1_53;
 }
 if (var_1_56) {
  var_1_107 = var_1_49;
 }
 unsigned char stepLocal_27 = var_1_56;
 unsigned long int stepLocal_26 = var_1_98;
 if (var_1_42 == stepLocal_26) {
  var_1_109 = (((((((var_1_12) > (var_1_72)) ? (var_1_12) : (var_1_72))) < 0 ) ? -((((var_1_12) > (var_1_72)) ? (var_1_12) : (var_1_72))) : ((((var_1_12) > (var_1_72)) ? (var_1_12) : (var_1_72)))));
 } else {
  if ((var_1_29 && var_1_34) && stepLocal_27) {
   var_1_109 = ((((-0.25) < 0 ) ? -(-0.25) : (-0.25)));
  }
 }
 if (8 <= var_1_89) {
  if ((var_1_80 | (var_1_50 * var_1_37)) <= ((((var_1_61) > (var_1_20)) ? (var_1_61) : (var_1_20)))) {
   if (var_1_30 > var_1_14) {
    var_1_91 = ((((63.2) < (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (63.2) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))));
   } else {
    var_1_91 = ((((var_1_12 + var_1_27) < 0 ) ? -(var_1_12 + var_1_27) : (var_1_12 + var_1_27)));
   }
  } else {
   var_1_91 = ((((var_1_12) > (((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7))))) ? (var_1_12) : (((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7))))));
  }
 } else {
  var_1_91 = (255.75 - var_1_72);
 }
 if ((((((var_1_11 - var_1_12)) > (var_1_104)) ? ((var_1_11 - var_1_12)) : (var_1_104))) < ((var_1_6 * 0.75) / var_1_15)) {
  var_1_69 = var_1_47;
 }
 if (var_1_27 <= (var_1_11 - var_1_72)) {
  if (var_1_93 < var_1_13) {
   var_1_76 = (((((var_1_49 + var_1_50)) > ((-5 + var_1_42))) ? ((var_1_49 + var_1_50)) : ((-5 + var_1_42))));
  } else {
   var_1_76 = (var_1_41 - var_1_68);
  }
 }
 signed long int stepLocal_22 = var_1_19;
 signed short int stepLocal_21 = var_1_96;
 signed long int stepLocal_20 = (var_1_37 + var_1_39) - 4;
 signed long int stepLocal_19 = var_1_18;
 if (((((var_1_1) < ((var_1_91 / var_1_15))) ? (var_1_1) : ((var_1_91 / var_1_15)))) <= var_1_1) {
  if (var_1_40 < stepLocal_19) {
   if ((- var_1_22) == stepLocal_20) {
    var_1_78 = ((var_1_49 + var_1_50) - (var_1_68 - var_1_53));
   }
  } else {
   if (stepLocal_22 > (((((var_1_24) > (var_1_31)) ? (var_1_24) : (var_1_31))) + (var_1_22 - var_1_80))) {
    var_1_78 = ((((var_1_53) < (var_1_41)) ? (var_1_53) : (var_1_41)));
   } else {
    if (var_1_14 < stepLocal_21) {
     var_1_78 = ((((var_1_42) > (var_1_68)) ? (var_1_42) : (var_1_68)));
    } else {
     var_1_78 = var_1_68;
    }
   }
  }
 } else {
  var_1_78 = (((((var_1_42 + var_1_53)) > (var_1_48)) ? ((var_1_42 + var_1_53)) : (var_1_48)));
 }
 if ((- var_1_91) <= var_1_25) {
  var_1_85 = (var_1_52 - var_1_49);
 }
 if (var_1_104 > (var_1_72 + var_1_9)) {
  if (var_1_74) {
   if (var_1_34) {
    var_1_86 = ((((var_1_12) < ((var_1_11 + var_1_27))) ? (var_1_12) : ((var_1_11 + var_1_27))));
   } else {
    var_1_86 = var_1_9;
   }
  }
 } else {
  var_1_86 = (var_1_12 - var_1_11);
 }
 if (var_1_7 < (- var_1_91)) {
  if (! var_1_34) {
   var_1_87 = ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9)));
  } else {
   var_1_87 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
  }
 }
 signed long int stepLocal_15 = var_1_42 + var_1_14;
 unsigned char stepLocal_14 = var_1_74;
 signed long int stepLocal_13 = (var_1_42 + var_1_41) >> var_1_53;
 if (stepLocal_15 <= var_1_24) {
  if ((var_1_11 - var_1_12) >= var_1_86) {
   var_1_51 = (var_1_52 - 4);
  } else {
   var_1_51 = (((((((((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) > (var_1_38)) ? (((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) : (var_1_38))) < 0 ) ? -((((((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) > (var_1_38)) ? (((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) : (var_1_38))) : ((((((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) > (var_1_38)) ? (((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) : (var_1_38)))));
  }
 } else {
  if ((var_1_24 + var_1_84) <= stepLocal_13) {
   if (var_1_33 || stepLocal_14) {
    if (var_1_45 <= (var_1_12 * var_1_1)) {
     var_1_51 = (var_1_55 + ((((var_1_49) > (var_1_53)) ? (var_1_49) : (var_1_53))));
    }
   } else {
    if (var_1_34) {
     if (127.34f <= var_1_11) {
      var_1_51 = (((((4 + ((((var_1_53) < (var_1_37)) ? (var_1_53) : (var_1_37))))) > (var_1_102)) ? ((4 + ((((var_1_53) < (var_1_37)) ? (var_1_53) : (var_1_37))))) : (var_1_102)));
     } else {
      var_1_51 = ((var_1_47 + var_1_41) + ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38))));
     }
    }
   }
  }
 }
 if (var_1_85 >= var_1_61) {
  var_1_59 = ((((var_1_38) > (var_1_41)) ? (var_1_38) : (var_1_41)));
 } else {
  var_1_59 = (var_1_42 + var_1_49);
 }
 if (var_1_11 < ((10.75 - var_1_72) * var_1_6)) {
  var_1_75 = ((((var_1_53 + var_1_49) < 0 ) ? -(var_1_53 + var_1_49) : (var_1_53 + var_1_49)));
 } else {
  if ((var_1_30 ^ var_1_51) == var_1_21) {
   var_1_75 = ((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50)));
  } else {
   var_1_75 = (((((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50))) < 0 ) ? -((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50))) : ((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50)))));
  }
 }
 var_1_110 = var_1_51;
 signed long int stepLocal_10 = var_1_38 << var_1_36;
 signed long int stepLocal_9 = var_1_88;
 signed long int stepLocal_8 = (var_1_39 - var_1_31) | var_1_40;
 if (((((var_1_84) < (var_1_21)) ? (var_1_84) : (var_1_21))) < stepLocal_10) {
  if (var_1_84 < stepLocal_8) {
   var_1_44 = ((((((((var_1_37) > (-128)) ? (var_1_37) : (-128)))) > (var_1_36)) ? (((((var_1_37) > (-128)) ? (var_1_37) : (-128)))) : (var_1_36)));
  } else {
   var_1_44 = (((((var_1_38) < (var_1_37)) ? (var_1_38) : (var_1_37))) - var_1_41);
  }
 } else {
  if (((var_1_59 + var_1_42) - var_1_37) != stepLocal_9) {
   var_1_44 = ((((var_1_60 + var_1_38) < 0 ) ? -(var_1_60 + var_1_38) : (var_1_60 + var_1_38)));
  } else {
   if (var_1_56) {
    var_1_44 = (((((var_1_41) > (var_1_39)) ? (var_1_41) : (var_1_39))) - ((((var_1_59) < (var_1_36)) ? (var_1_59) : (var_1_36))));
   }
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -536870911);
 assume_abort_if_not(var_1_18 <= 536870912);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -536870911);
 assume_abort_if_not(var_1_19 <= 536870911);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= 1073741823);
 assume_abort_if_not(var_1_22 <= 2147483646);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65534);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 32767);
 assume_abort_if_not(var_1_30 <= 65535);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 127);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 64);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 63);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 62);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 32767);
 assume_abort_if_not(var_1_52 <= 65534);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 30);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 32767);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 2147483647);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 2147483647);
 assume_abort_if_not(var_1_63 <= 4294967294);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 2147483647);
 assume_abort_if_not(var_1_64 <= 4294967294);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= 94);
 assume_abort_if_not(var_1_68 <= 126);
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 2147483647);
 var_1_94 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_94 >= -115292.1504606845700e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 1152921.504606845700e+12F && var_1_94 >= 1.0e-20F ));
 var_1_95 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_95 >= -115292.1504606845700e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 1152921.504606845700e+12F && var_1_95 >= 1.0e-20F ));
 var_1_97 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_97 >= -1);
 assume_abort_if_not(var_1_97 <= 32766);
 var_1_99 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_99 >= 0);
 assume_abort_if_not(var_1_99 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_101 = var_1_101;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((- last_1_var_1_77) < (0.125f + last_1_var_1_91)) ? ((last_1_var_1_74 || (last_1_var_1_29 || (last_1_var_1_77 > last_1_var_1_91))) ? (var_1_1 == ((double) (((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) < 0 ) ? -((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) : ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))))) : ((last_1_var_1_29 || last_1_var_1_74) ? (var_1_1 == ((double) ((((var_1_6) < (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))) ? (var_1_6) : (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))))))))) : 1)) : ((last_1_var_1_77 < var_1_6) ? ((((10 - 1000) & 10) < last_1_var_1_101) ? (var_1_1 == ((double) ((64.5 - (var_1_11 + var_1_12)) + var_1_13))) : 1) : (var_1_1 == ((double) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) && (((((((var_1_6) > (var_1_1)) ? (var_1_6) : (var_1_1))) / ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > var_1_8) ? (((var_1_84 ^ var_1_60) == var_1_84) ? (var_1_14 == ((signed long int) ((((2) < (((var_1_18 + var_1_19) + (var_1_20 - var_1_21)))) ? (2) : (((var_1_18 + var_1_19) + (var_1_20 - var_1_21))))))) : 1) : ((var_1_13 >= var_1_6) ? (var_1_14 == ((signed long int) (((((var_1_20 - ((((var_1_21) > (2)) ? (var_1_21) : (2))))) > (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) ? ((var_1_20 - ((((var_1_21) > (2)) ? (var_1_21) : (2))))) : (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))))))) : (var_1_74 ? ((var_1_13 > var_1_15) ? (var_1_14 == ((signed long int) (10 - ((((var_1_20) > ((var_1_22 - var_1_21))) ? (var_1_20) : ((var_1_22 - var_1_21))))))) : 1) : 1)))) && (((var_1_20 * (var_1_19 + var_1_73)) != 2) ? (var_1_23 == ((unsigned short int) var_1_24)) : 1)) && ((! var_1_74) ? (var_1_25 == ((double) (var_1_11 + (var_1_12 + var_1_27)))) : 1)) && ((var_1_88 > var_1_20) ? (var_1_28 == ((float) (var_1_11 - var_1_12))) : (var_1_28 == ((float) (4.66f - var_1_12))))) && ((var_1_15 <= (5.125f / 63.5f)) ? (((var_1_30 - var_1_31) >= var_1_84) ? ((var_1_8 >= (var_1_11 / ((((var_1_15) > (var_1_32)) ? (var_1_15) : (var_1_32))))) ? (var_1_29 == ((unsigned char) (! var_1_33))) : (var_1_29 == ((unsigned char) ((! var_1_33) || var_1_34)))) : (var_1_29 == ((unsigned char) var_1_34))) : (var_1_29 == ((unsigned char) var_1_34)))) && (((var_1_8 + var_1_13) >= var_1_15) ? (var_1_35 == ((unsigned char) (var_1_36 + var_1_37))) : (((var_1_30 + var_1_37) < (var_1_31 - (var_1_90 + var_1_24))) ? (var_1_35 == ((unsigned char) (((((((((var_1_36 + var_1_37)) > ((var_1_38 + var_1_39))) ? ((var_1_36 + var_1_37)) : ((var_1_38 + var_1_39))))) < ((var_1_40 - (var_1_41 + var_1_42)))) ? ((((((var_1_36 + var_1_37)) > ((var_1_38 + var_1_39))) ? ((var_1_36 + var_1_37)) : ((var_1_38 + var_1_39))))) : ((var_1_40 - (var_1_41 + var_1_42))))))) : (var_1_35 == ((unsigned char) var_1_41))))) && ((var_1_22 < (((((var_1_38) > (var_1_31)) ? (var_1_38) : (var_1_31))) - var_1_40)) ? (var_1_43 == ((unsigned char) var_1_42)) : 1)) && ((((((var_1_84) < (var_1_21)) ? (var_1_84) : (var_1_21))) < (var_1_38 << var_1_36)) ? ((var_1_84 < ((var_1_39 - var_1_31) | var_1_40)) ? (var_1_44 == ((signed short int) ((((((((var_1_37) > (-128)) ? (var_1_37) : (-128)))) > (var_1_36)) ? (((((var_1_37) > (-128)) ? (var_1_37) : (-128)))) : (var_1_36))))) : (var_1_44 == ((signed short int) (((((var_1_38) < (var_1_37)) ? (var_1_38) : (var_1_37))) - var_1_41)))) : ((((var_1_59 + var_1_42) - var_1_37) != var_1_88) ? (var_1_44 == ((signed short int) ((((var_1_60 + var_1_38) < 0 ) ? -(var_1_60 + var_1_38) : (var_1_60 + var_1_38))))) : (var_1_56 ? (var_1_44 == ((signed short int) (((((var_1_41) > (var_1_39)) ? (var_1_41) : (var_1_39))) - ((((var_1_59) < (var_1_36)) ? (var_1_59) : (var_1_36)))))) : 1)))) && ((var_1_29 || var_1_34) ? (var_1_45 == ((double) (var_1_12 - var_1_11))) : 1)) && ((((var_1_47 - var_1_42) << var_1_38) < ((var_1_41 - var_1_39) ^ (var_1_98 / 1))) ? (((var_1_30 - var_1_101) < var_1_19) ? (var_1_46 == ((signed char) ((var_1_48 - var_1_42) - var_1_41))) : (var_1_46 == ((signed char) ((var_1_48 - var_1_42) - (var_1_49 + var_1_50))))) : 1)) && (((var_1_42 + var_1_14) <= var_1_24) ? (((var_1_11 - var_1_12) >= var_1_86) ? (var_1_51 == ((unsigned short int) (var_1_52 - 4))) : (var_1_51 == ((unsigned short int) (((((((((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) > (var_1_38)) ? (((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) : (var_1_38))) < 0 ) ? -((((((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) > (var_1_38)) ? (((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) : (var_1_38))) : ((((((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) > (var_1_38)) ? (((((var_1_48) > (var_1_24)) ? (var_1_48) : (var_1_24)))) : (var_1_38)))))))) : (((var_1_24 + var_1_84) <= ((var_1_42 + var_1_41) >> var_1_53)) ? ((var_1_33 || var_1_74) ? ((var_1_45 <= (var_1_12 * var_1_1)) ? (var_1_51 == ((unsigned short int) (var_1_55 + ((((var_1_49) > (var_1_53)) ? (var_1_49) : (var_1_53)))))) : 1) : (var_1_34 ? ((127.34f <= var_1_11) ? (var_1_51 == ((unsigned short int) (((((4 + ((((var_1_53) < (var_1_37)) ? (var_1_53) : (var_1_37))))) > (var_1_102)) ? ((4 + ((((var_1_53) < (var_1_37)) ? (var_1_53) : (var_1_37))))) : (var_1_102))))) : (var_1_51 == ((unsigned short int) ((var_1_47 + var_1_41) + ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38))))))) : 1)) : 1))) && ((var_1_19 > var_1_41) ? ((var_1_103 < (var_1_31 - var_1_53)) ? (var_1_56 == ((unsigned char) (((! var_1_34) && var_1_33) && (last_1_var_1_56 || var_1_58)))) : 1) : (var_1_56 == ((unsigned char) ((var_1_20 < (-256 * var_1_52)) && (var_1_74 && var_1_34)))))) && ((var_1_85 >= var_1_61) ? (var_1_59 == ((unsigned char) ((((var_1_38) > (var_1_41)) ? (var_1_38) : (var_1_41))))) : (var_1_59 == ((unsigned char) (var_1_42 + var_1_49))))) && ((((((last_1_var_1_60) > (var_1_52)) ? (last_1_var_1_60) : (var_1_52))) <= (var_1_20 - (var_1_38 + last_1_var_1_60))) ? (var_1_60 == ((unsigned long int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) : 1)) && (var_1_56 ? (var_1_33 ? (var_1_61 == ((unsigned long int) ((((((var_1_49) < (4u)) ? (var_1_49) : (4u))) + ((((var_1_73) < (var_1_36)) ? (var_1_73) : (var_1_36)))) + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) : (var_1_61 == ((unsigned long int) (var_1_23 + var_1_62)))) : (var_1_61 == ((unsigned long int) (((((var_1_63) < (var_1_64)) ? (var_1_63) : (var_1_64))) - var_1_70))))) && (var_1_65 == ((double) (((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))) + var_1_12)))) && (((-0.5f * 256.75f) < (var_1_11 / var_1_32)) ? ((((var_1_22 - var_1_36) - (var_1_39 + var_1_47)) < (8 % ((((var_1_53) < (var_1_52)) ? (var_1_53) : (var_1_52))))) ? (var_1_66 == ((signed char) (((var_1_68 - var_1_53) - var_1_50) - (var_1_42 + var_1_49)))) : (var_1_66 == ((signed char) (8 + var_1_42)))) : 1)) && (((((((var_1_11 - var_1_12)) > (var_1_104)) ? ((var_1_11 - var_1_12)) : (var_1_104))) < ((var_1_6 * 0.75) / var_1_15)) ? (var_1_69 == ((signed short int) var_1_47)) : 1)) && (var_1_70 == ((signed short int) ((((var_1_48) > ((var_1_68 + (var_1_37 + var_1_47)))) ? (var_1_48) : ((var_1_68 + (var_1_37 + var_1_47)))))))) && (var_1_34 ? (var_1_71 == ((double) ((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) < (var_1_27)) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (var_1_27))))) : (var_1_71 == ((double) ((((var_1_11) > ((var_1_12 - var_1_72))) ? (var_1_11) : ((var_1_12 - var_1_72)))))))) && ((var_1_19 <= var_1_88) ? (var_1_73 == ((unsigned long int) var_1_90)) : 1)) && (var_1_29 ? (var_1_74 == ((unsigned char) var_1_33)) : (var_1_74 == ((unsigned char) (! var_1_34))))) && ((var_1_11 < ((10.75 - var_1_72) * var_1_6)) ? (var_1_75 == ((signed char) ((((var_1_53 + var_1_49) < 0 ) ? -(var_1_53 + var_1_49) : (var_1_53 + var_1_49))))) : (((var_1_30 ^ var_1_51) == var_1_21) ? (var_1_75 == ((signed char) ((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))))) : (var_1_75 == ((signed char) (((((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50))) < 0 ) ? -((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50))) : ((((var_1_48) > (var_1_50)) ? (var_1_48) : (var_1_50)))))))))) && ((var_1_27 <= (var_1_11 - var_1_72)) ? ((var_1_93 < var_1_13) ? (var_1_76 == ((signed char) (((((var_1_49 + var_1_50)) > ((-5 + var_1_42))) ? ((var_1_49 + var_1_50)) : ((-5 + var_1_42)))))) : (var_1_76 == ((signed char) (var_1_41 - var_1_68)))) : 1)) && (var_1_77 == ((double) ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))))) && ((((((var_1_1) < ((var_1_91 / var_1_15))) ? (var_1_1) : ((var_1_91 / var_1_15)))) <= var_1_1) ? ((var_1_40 < var_1_18) ? (((- var_1_22) == ((var_1_37 + var_1_39) - 4)) ? (var_1_78 == ((signed char) ((var_1_49 + var_1_50) - (var_1_68 - var_1_53)))) : 1) : ((var_1_19 > (((((var_1_24) > (var_1_31)) ? (var_1_24) : (var_1_31))) + (var_1_22 - var_1_80))) ? (var_1_78 == ((signed char) ((((var_1_53) < (var_1_41)) ? (var_1_53) : (var_1_41))))) : ((var_1_14 < var_1_96) ? (var_1_78 == ((signed char) ((((var_1_42) > (var_1_68)) ? (var_1_42) : (var_1_68))))) : (var_1_78 == ((signed char) var_1_68))))) : (var_1_78 == ((signed char) (((((var_1_42 + var_1_53)) > (var_1_48)) ? ((var_1_42 + var_1_53)) : (var_1_48))))))) && ((var_1_56 || (var_1_71 > var_1_32)) ? (var_1_81 == ((float) (var_1_12 + var_1_27))) : (var_1_81 == ((float) (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < 0 ) ? -((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) : ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))))))) && ((var_1_77 == (- var_1_12)) ? ((var_1_41 > var_1_88) ? (((var_1_40 * var_1_61) > var_1_53) ? ((var_1_20 >= (var_1_42 + (var_1_52 / var_1_48))) ? (var_1_83 == ((signed char) (var_1_53 - var_1_42))) : 1) : ((var_1_50 == var_1_14) ? (var_1_83 == ((signed char) var_1_48)) : (var_1_83 == ((signed char) (var_1_42 - var_1_50))))) : 1) : (var_1_83 == ((signed char) (var_1_50 + var_1_53))))) && ((var_1_72 < (var_1_32 + var_1_8)) ? (var_1_84 == ((unsigned long int) ((1519423289u - var_1_24) + var_1_47))) : 1)) && (((- var_1_91) <= var_1_25) ? (var_1_85 == ((unsigned short int) (var_1_52 - var_1_49))) : 1)) && ((var_1_104 > (var_1_72 + var_1_9)) ? (var_1_74 ? (var_1_34 ? (var_1_86 == ((double) ((((var_1_12) < ((var_1_11 + var_1_27))) ? (var_1_12) : ((var_1_11 + var_1_27)))))) : (var_1_86 == ((double) var_1_9))) : 1) : (var_1_86 == ((double) (var_1_12 - var_1_11))))) && ((var_1_7 < (- var_1_91)) ? ((! var_1_34) ? (var_1_87 == ((double) ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9))))) : (var_1_87 == ((double) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))) : 1)) && (var_1_34 ? (var_1_88 == ((signed long int) (64 - (last_1_var_1_98 + var_1_21)))) : (last_1_var_1_29 ? (var_1_88 == ((signed long int) (((((var_1_42) > (var_1_19)) ? (var_1_42) : (var_1_19))) + (var_1_47 - var_1_68)))) : (var_1_88 == ((signed long int) (var_1_39 + var_1_47)))))) && ((var_1_98 <= var_1_48) ? (var_1_89 == ((signed char) ((((var_1_49) > ((var_1_53 + var_1_42))) ? (var_1_49) : ((var_1_53 + var_1_42)))))) : (var_1_89 == ((signed char) ((var_1_68 - var_1_42) - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))))))) && (var_1_90 == ((unsigned short int) (var_1_31 + 64)))) && ((8 <= var_1_89) ? (((var_1_80 | (var_1_50 * var_1_37)) <= ((((var_1_61) > (var_1_20)) ? (var_1_61) : (var_1_20)))) ? ((var_1_30 > var_1_14) ? (var_1_91 == ((double) ((((63.2) < (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (63.2) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))))) : (var_1_91 == ((double) ((((var_1_12 + var_1_27) < 0 ) ? -(var_1_12 + var_1_27) : (var_1_12 + var_1_27)))))) : (var_1_91 == ((double) ((((var_1_12) > (((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7))))) ? (var_1_12) : (((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7))))))))) : (var_1_91 == ((double) (255.75 - var_1_72))))) && ((var_1_74 && var_1_5) ? (var_1_92 == ((signed char) (((((((10) < (var_1_49)) ? (10) : (var_1_49))) < 0 ) ? -((((10) < (var_1_49)) ? (10) : (var_1_49))) : ((((10) < (var_1_49)) ? (10) : (var_1_49))))))) : (var_1_92 == ((signed char) ((((var_1_49) < (var_1_68)) ? (var_1_49) : (var_1_68))))))) && (var_1_56 ? (var_1_93 == ((double) ((var_1_27 + (var_1_94 + var_1_95)) + var_1_11))) : (var_1_93 == ((double) (((((var_1_12 - 256.4)) > (var_1_6)) ? ((var_1_12 - 256.4)) : (var_1_6))))))) && ((var_1_33 || var_1_74) ? ((var_1_6 < (var_1_94 * var_1_93)) ? (var_1_96 == ((signed short int) (var_1_50 + var_1_84))) : 1) : (var_1_96 == ((signed short int) (var_1_97 - var_1_40))))) && (((var_1_88 / var_1_47) <= var_1_70) ? (var_1_98 == ((unsigned long int) var_1_99)) : (var_1_98 == ((unsigned long int) var_1_41)))) && (var_1_56 ? (var_1_100 == ((signed short int) var_1_98)) : (var_1_100 == ((signed short int) var_1_48)))) && (var_1_101 == ((signed long int) var_1_38))) && (var_1_56 ? (var_1_102 == ((signed short int) 2)) : (var_1_102 == ((signed short int) var_1_68)))) && (var_1_34 ? (var_1_103 == ((signed long int) var_1_18)) : 1)) && (var_1_56 ? (var_1_104 == ((float) var_1_13)) : (var_1_104 == ((float) var_1_11)))) && (var_1_105 == ((signed char) var_1_68))) && (var_1_56 ? (var_1_106 == ((signed short int) var_1_53)) : 1)) && (var_1_56 ? (var_1_107 == ((signed char) var_1_49)) : 1)) && (var_1_108 == ((double) var_1_9))) && ((var_1_42 == var_1_98) ? (var_1_109 == ((double) (((((((var_1_12) > (var_1_72)) ? (var_1_12) : (var_1_72))) < 0 ) ? -((((var_1_12) > (var_1_72)) ? (var_1_12) : (var_1_72))) : ((((var_1_12) > (var_1_72)) ? (var_1_12) : (var_1_72))))))) : (((var_1_29 && var_1_34) && var_1_56) ? (var_1_109 == ((double) ((((-0.25) < 0 ) ? -(-0.25) : (-0.25))))) : 1))) && (var_1_110 == ((signed short int) var_1_51))
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
