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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 100;
unsigned short int var_1_11 = 34312;
unsigned short int var_1_12 = 1;
signed char var_1_13 = 32;
signed char var_1_16 = 10;
signed char var_1_17 = 1;
signed char var_1_18 = 25;
signed long int var_1_19 = -32;
signed char var_1_20 = 1;
signed char var_1_21 = -2;
signed char var_1_22 = -25;
signed char var_1_23 = -16;
float var_1_24 = 8.225;
signed char var_1_25 = 16;
float var_1_26 = 127.6;
float var_1_27 = 31.6;
float var_1_28 = 255.8;
float var_1_29 = 32.25;
float var_1_30 = 1.8;
float var_1_31 = 32.75;
unsigned short int var_1_32 = 1;
unsigned short int var_1_33 = 55245;
unsigned short int var_1_34 = 25955;
unsigned long int var_1_35 = 4;
unsigned long int var_1_36 = 1747075658;
unsigned long int var_1_37 = 2440018300;
unsigned char var_1_38 = 100;
signed long int var_1_39 = -5;
unsigned long int var_1_40 = 10;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 2;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 64;
unsigned short int var_1_46 = 0;
unsigned char var_1_48 = 25;
float var_1_49 = 31.75;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 128;
unsigned char var_1_53 = 128;
unsigned short int var_1_54 = 8;
unsigned short int var_1_56 = 2;
signed long int var_1_57 = 10;
signed long int var_1_58 = 1000000000;
signed long int var_1_59 = 64;
signed long int var_1_60 = 1952191317;
signed short int var_1_61 = 10;
double var_1_63 = 9.125;
unsigned char var_1_64 = 0;
float var_1_66 = 99999.5;
double var_1_67 = 1.1;
unsigned short int var_1_68 = 10;
signed short int var_1_69 = -2;
signed short int var_1_70 = 256;
double var_1_71 = 2.8;
double var_1_72 = 0.0;
unsigned short int var_1_73 = 0;
unsigned long int var_1_74 = 8;
unsigned short int var_1_75 = 32;
signed short int var_1_76 = 1;
double var_1_77 = 64.4;
float var_1_78 = 10.5;
double var_1_79 = 7.25;
unsigned char var_1_80 = 128;
signed char var_1_81 = 2;
signed short int var_1_83 = 5;
signed long int var_1_84 = 128;
unsigned char var_1_85 = 32;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 128;
unsigned char var_1_88 = 2;
unsigned char var_1_89 = 25;
unsigned char var_1_90 = 200;
unsigned short int var_1_91 = 10;
unsigned short int var_1_92 = 16;
unsigned short int var_1_93 = 4;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
unsigned char var_1_97 = 4;
unsigned short int var_1_98 = 64;
double var_1_99 = 256.5;
unsigned short int var_1_100 = 256;
unsigned char var_1_101 = 0;
signed short int var_1_102 = 4;
unsigned char var_1_103 = 16;
unsigned long int var_1_104 = 10;
float var_1_105 = 32.5;
unsigned char var_1_106 = 4;
unsigned char var_1_107 = 32;
unsigned char var_1_108 = 0;
float var_1_109 = 99999999.2;
unsigned long int var_1_110 = 2;
unsigned short int last_1_var_1_32 = 1;
unsigned long int last_1_var_1_35 = 4;
signed long int last_1_var_1_39 = -5;
unsigned short int last_1_var_1_46 = 0;
unsigned char last_1_var_1_48 = 25;
unsigned short int last_1_var_1_54 = 8;
signed long int last_1_var_1_57 = 10;
double last_1_var_1_63 = 9.125;
float last_1_var_1_66 = 99999.5;
unsigned short int last_1_var_1_68 = 10;
double last_1_var_1_71 = 2.8;
unsigned long int last_1_var_1_74 = 8;
signed short int last_1_var_1_76 = 1;
unsigned char last_1_var_1_80 = 128;
signed long int last_1_var_1_84 = 128;
unsigned short int last_1_var_1_100 = 256;
signed short int last_1_var_1_102 = 4;
unsigned long int last_1_var_1_104 = 10;
float last_1_var_1_109 = 99999999.2;
unsigned long int last_1_var_1_110 = 2;
void initially(void) {
}
void step(void) {
 if (! var_1_7) {
  if (var_1_30 >= var_1_26) {
   var_1_35 = ((var_1_33 + ((((var_1_34) < (last_1_var_1_32)) ? (var_1_34) : (last_1_var_1_32)))) + var_1_12);
  } else {
   if (var_1_19 == var_1_16) {
    if ((var_1_31 == last_1_var_1_71) && (var_1_29 >= last_1_var_1_109)) {
     var_1_35 = ((((((var_1_36 - var_1_33) + ((((var_1_25) > (last_1_var_1_32)) ? (var_1_25) : (last_1_var_1_32))))) < ((2897548241u - last_1_var_1_110))) ? (((var_1_36 - var_1_33) + ((((var_1_25) > (last_1_var_1_32)) ? (var_1_25) : (last_1_var_1_32))))) : ((2897548241u - last_1_var_1_110))));
    } else {
     var_1_35 = ((((var_1_18) > ((var_1_37 - var_1_33))) ? (var_1_18) : ((var_1_37 - var_1_33))));
    }
   }
  }
 }
 if (((((var_1_43) < (var_1_19)) ? (var_1_43) : (var_1_19))) != var_1_35) {
  var_1_67 = var_1_29;
 } else {
  if ((((((var_1_59) > (var_1_58)) ? (var_1_59) : (var_1_58))) * (~ 4)) >= var_1_35) {
   var_1_67 = ((((4.25) > (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (4.25) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))));
  }
 }
 unsigned long int stepLocal_17 = last_1_var_1_110;
 if (last_1_var_1_35 <= stepLocal_17) {
  var_1_83 = ((((((var_1_45) < (last_1_var_1_48)) ? (var_1_45) : (last_1_var_1_48))) + last_1_var_1_102) - ((((var_1_52) < (last_1_var_1_102)) ? (var_1_52) : (last_1_var_1_102))));
 } else {
  var_1_83 = ((((var_1_70) > (var_1_50)) ? (var_1_70) : (var_1_50)));
 }
 if (var_1_96) {
  var_1_102 = var_1_21;
 } else {
  var_1_102 = var_1_83;
 }
 unsigned long int stepLocal_10 = var_1_37;
 if ((- last_1_var_1_63) >= var_1_27) {
  var_1_56 = ((var_1_51 + var_1_18) + ((((last_1_var_1_76) > (var_1_12)) ? (last_1_var_1_76) : (var_1_12))));
 } else {
  if (stepLocal_10 >= var_1_11) {
   var_1_56 = var_1_11;
  } else {
   var_1_56 = (var_1_11 - ((((last_1_var_1_110) < 0 ) ? -(last_1_var_1_110) : (last_1_var_1_110))));
  }
 }
 var_1_110 = last_1_var_1_100;
 if (((last_1_var_1_57 * last_1_var_1_39) | var_1_51) < var_1_36) {
  var_1_68 = ((((var_1_34) < (var_1_12)) ? (var_1_34) : (var_1_12)));
 } else {
  if (var_1_36 >= last_1_var_1_74) {
   var_1_68 = (((((var_1_44) > (last_1_var_1_80)) ? (var_1_44) : (last_1_var_1_80))) + 256);
  } else {
   var_1_68 = ((((var_1_45) > (((((var_1_33) < (var_1_50)) ? (var_1_33) : (var_1_50))))) ? (var_1_45) : (((((var_1_33) < (var_1_50)) ? (var_1_33) : (var_1_50))))));
  }
 }
 if ((var_1_68 / (var_1_44 + var_1_43)) >= var_1_19) {
  var_1_46 = last_1_var_1_46;
 } else {
  var_1_46 = var_1_12;
 }
 unsigned long int stepLocal_5 = var_1_18 / var_1_40;
 unsigned long int stepLocal_4 = var_1_37;
 unsigned long int stepLocal_3 = ((((var_1_37) > (last_1_var_1_68)) ? (var_1_37) : (last_1_var_1_68))) + (var_1_34 + last_1_var_1_110);
 if (stepLocal_5 <= ((var_1_19 * last_1_var_1_110) * var_1_11)) {
  if (stepLocal_4 > last_1_var_1_100) {
   var_1_39 = (((((last_1_var_1_102 + last_1_var_1_100) - var_1_12) < 0 ) ? -((last_1_var_1_102 + last_1_var_1_100) - var_1_12) : ((last_1_var_1_102 + last_1_var_1_100) - var_1_12)));
  } else {
   if (1000u == stepLocal_3) {
    var_1_39 = ((((last_1_var_1_84) < ((var_1_34 - last_1_var_1_100))) ? (last_1_var_1_84) : ((var_1_34 - last_1_var_1_100))));
   }
  }
 }
 if (var_1_7) {
  var_1_10 = (((((var_1_11) > (34102)) ? (var_1_11) : (34102))) - last_1_var_1_54);
 } else {
  var_1_10 = ((((((((last_1_var_1_100) < ((last_1_var_1_54 + var_1_12))) ? (last_1_var_1_100) : ((last_1_var_1_54 + var_1_12))))) > (var_1_11)) ? (((((last_1_var_1_100) < ((last_1_var_1_54 + var_1_12))) ? (last_1_var_1_100) : ((last_1_var_1_54 + var_1_12))))) : (var_1_11)));
 }
 signed long int stepLocal_14 = 25;
 if (var_1_10 > stepLocal_14) {
  if (var_1_26 > var_1_30) {
   var_1_71 = (((((var_1_30 - var_1_27)) > ((var_1_26 - (var_1_72 - var_1_31)))) ? ((var_1_30 - var_1_27)) : ((var_1_26 - (var_1_72 - var_1_31)))));
  }
 } else {
  var_1_71 = var_1_30;
 }
 if (var_1_8) {
  var_1_73 = (var_1_44 + (var_1_34 - (var_1_10 + 1)));
 }
 if ((var_1_72 - var_1_30) < last_1_var_1_66) {
  var_1_74 = ((((var_1_45) < (25u)) ? (var_1_45) : (25u)));
 }
 if (var_1_8) {
  var_1_38 = ((((var_1_25) > (var_1_18)) ? (var_1_25) : (var_1_18)));
 } else {
  var_1_38 = var_1_25;
 }
 var_1_63 = (50.5 + var_1_30);
 var_1_77 = ((((9.99999999995E10) < (100.4)) ? (9.99999999995E10) : (100.4)));
 unsigned short int stepLocal_24 = var_1_12;
 if (stepLocal_24 == (- (- var_1_60))) {
  var_1_93 = var_1_90;
 }
 unsigned char stepLocal_25 = var_1_9;
 if (stepLocal_25 && var_1_6) {
  var_1_94 = var_1_6;
 } else {
  if (var_1_6) {
   var_1_94 = (! var_1_95);
  } else {
   var_1_94 = ((var_1_35 < var_1_40) || (var_1_8 && (! var_1_96)));
  }
 }
 var_1_98 = var_1_43;
 if (var_1_95) {
  var_1_103 = var_1_86;
 }
 signed long int stepLocal_26 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) / var_1_52;
 if (var_1_102 <= stepLocal_26) {
  var_1_107 = var_1_43;
 } else {
  var_1_107 = ((((((((var_1_43) > (8)) ? (var_1_43) : (8)))) < ((5 + var_1_45))) ? (((((var_1_43) > (8)) ? (var_1_43) : (8)))) : ((5 + var_1_45))));
 }
 var_1_108 = var_1_7;
 var_1_109 = var_1_31;
 if (var_1_31 <= (var_1_67 * (var_1_29 + var_1_28))) {
  var_1_32 = ((var_1_33 - var_1_18) - ((var_1_34 - var_1_25) - var_1_74));
 } else {
  var_1_32 = ((((100) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (100) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
 }
 if (var_1_94) {
  var_1_104 = last_1_var_1_104;
 } else {
  var_1_104 = var_1_56;
 }
 if ((var_1_53 >= last_1_var_1_57) && var_1_7) {
  if (var_1_6) {
   var_1_57 = (((1000000000 + var_1_58) - var_1_43) - var_1_59);
  }
 } else {
  if (var_1_67 < var_1_31) {
   var_1_57 = ((((((var_1_60 - var_1_74) - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) > (var_1_23)) ? (((var_1_60 - var_1_74) - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) : (var_1_23)));
  } else {
   var_1_57 = ((var_1_74 - var_1_46) + (25 - var_1_39));
  }
 }
 if (var_1_108) {
  var_1_69 = ((((((var_1_68 + var_1_50) + (var_1_17 + var_1_21))) < (var_1_70)) ? (((var_1_68 + var_1_50) + (var_1_17 + var_1_21))) : (var_1_70)));
 }
 signed long int stepLocal_16 = var_1_10 / var_1_19;
 if (stepLocal_16 < var_1_68) {
  var_1_80 = ((((var_1_25) > (var_1_44)) ? (var_1_25) : (var_1_44)));
 }
 if (var_1_9 && (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) <= var_1_69)) {
  var_1_75 = 5;
 }
 if ((var_1_37 / (var_1_51 + var_1_34)) <= (var_1_19 * var_1_98)) {
  if (((- var_1_36) / var_1_45) < 10u) {
   var_1_79 = (var_1_31 + var_1_28);
  }
 } else {
  if (((var_1_42 + var_1_18) - var_1_43) > var_1_104) {
   var_1_79 = (var_1_27 - (var_1_72 - 2.5));
  } else {
   if (var_1_42 != var_1_51) {
    var_1_79 = (var_1_30 - var_1_72);
   } else {
    var_1_79 = ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)));
   }
  }
 }
 if (var_1_108) {
  var_1_106 = var_1_52;
 }
 signed short int stepLocal_13 = var_1_69;
 if (stepLocal_13 >= var_1_51) {
  var_1_66 = ((var_1_29 + ((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))) - var_1_27);
 } else {
  var_1_66 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 }
 if (((8 + var_1_25) - var_1_18) > (var_1_12 | var_1_20)) {
  if (! (var_1_20 <= var_1_11)) {
   var_1_24 = (var_1_26 - var_1_27);
  } else {
   if (var_1_71 > var_1_79) {
    var_1_24 = (var_1_28 + (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))) - var_1_31));
   } else {
    var_1_24 = ((((4.4f) > (var_1_31)) ? (4.4f) : (var_1_31)));
   }
  }
 } else {
  var_1_24 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 signed long int stepLocal_9 = var_1_50 - ((((var_1_44) > (var_1_18)) ? (var_1_44) : (var_1_18)));
 signed short int stepLocal_8 = var_1_83;
 if (var_1_12 > stepLocal_8) {
  if (var_1_66 < (var_1_71 + (var_1_27 / var_1_49))) {
   if (var_1_43 >= stepLocal_9) {
    var_1_48 = (((((var_1_51) > (((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53))))) ? (var_1_51) : (((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))))) - var_1_18);
   }
  }
 } else {
  var_1_48 = ((((var_1_45) > (var_1_25)) ? (var_1_45) : (var_1_25)));
 }
 unsigned char stepLocal_12 = var_1_39 <= var_1_48;
 signed long int stepLocal_11 = var_1_18 + ((((var_1_17) < (32)) ? (var_1_17) : (32)));
 if (((((var_1_74) > (var_1_39)) ? (var_1_74) : (var_1_39))) >= stepLocal_11) {
  if (var_1_6 && stepLocal_12) {
   var_1_64 = (! (! (var_1_8 && var_1_6)));
  }
 }
 if (var_1_98 < (- var_1_74)) {
  var_1_84 = (-256 + var_1_110);
 } else {
  if (var_1_64) {
   var_1_84 = ((((last_1_var_1_84) < (((1749579744 - var_1_93) - ((((var_1_10) < (var_1_43)) ? (var_1_10) : (var_1_43)))))) ? (last_1_var_1_84) : (((1749579744 - var_1_93) - ((((var_1_10) < (var_1_43)) ? (var_1_10) : (var_1_43)))))));
  }
 }
 unsigned char stepLocal_23 = var_1_44;
 unsigned char stepLocal_22 = var_1_45;
 signed long int stepLocal_21 = var_1_33 - 8;
 if (var_1_98 < stepLocal_23) {
  if (var_1_64) {
   if (var_1_46 < stepLocal_21) {
    var_1_91 = (((((52380 - var_1_12)) < (((((((((var_1_92) > (32)) ? (var_1_92) : (32)))) > (var_1_52)) ? (((((var_1_92) > (32)) ? (var_1_92) : (32)))) : (var_1_52))))) ? ((52380 - var_1_12)) : (((((((((var_1_92) > (32)) ? (var_1_92) : (32)))) > (var_1_52)) ? (((((var_1_92) > (32)) ? (var_1_92) : (32)))) : (var_1_52))))));
   } else {
    var_1_91 = var_1_11;
   }
  } else {
   if (stepLocal_22 <= var_1_59) {
    var_1_91 = (256 + (var_1_88 + (var_1_42 + 128)));
   }
  }
 }
 if (var_1_64) {
  var_1_99 = var_1_27;
 } else {
  var_1_99 = var_1_31;
 }
 if (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) <= (var_1_91 ^ -2)) {
  var_1_97 = (var_1_43 + ((((var_1_86) > (((((var_1_89) > (var_1_88)) ? (var_1_89) : (var_1_88))))) ? (var_1_86) : (((((var_1_89) > (var_1_88)) ? (var_1_89) : (var_1_88)))))));
 } else {
  if (var_1_44 >= var_1_110) {
   var_1_97 = var_1_51;
  } else {
   var_1_97 = var_1_52;
  }
 }
 if (var_1_64) {
  var_1_105 = var_1_30;
 }
 unsigned short int stepLocal_7 = var_1_11;
 unsigned char stepLocal_6 = var_1_35 > var_1_34;
 if (stepLocal_7 > ((((var_1_104) > (var_1_84)) ? (var_1_104) : (var_1_84)))) {
  var_1_41 = ((((var_1_25) < (var_1_42)) ? (var_1_25) : (var_1_42)));
 } else {
  if (stepLocal_6 || var_1_94) {
   var_1_41 = (var_1_18 + ((var_1_43 - 16) + var_1_25));
  } else {
   var_1_41 = ((var_1_44 + var_1_45) - var_1_18);
  }
 }
 if ((var_1_91 * var_1_10) < (var_1_74 | var_1_57)) {
  var_1_1 = ((var_1_91 >= var_1_74) && var_1_6);
 } else {
  if (var_1_10 < var_1_91) {
   var_1_1 = ((var_1_74 < var_1_10) || (var_1_7 && (var_1_8 && var_1_9)));
  } else {
   var_1_1 = (! (! var_1_7));
  }
 }
 if (var_1_49 >= var_1_99) {
  if (var_1_8) {
   var_1_81 = (((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20))) + var_1_23);
  } else {
   if ((((((var_1_84) > (var_1_73)) ? (var_1_84) : (var_1_73))) < (var_1_84 - var_1_12)) && var_1_1) {
    var_1_81 = (var_1_21 + (var_1_20 + var_1_23));
   }
  }
 }
 if (var_1_1) {
  var_1_101 = var_1_89;
 } else {
  var_1_101 = var_1_18;
 }
 if (var_1_25 <= var_1_81) {
  if (var_1_6) {
   var_1_54 = var_1_39;
  } else {
   var_1_54 = var_1_11;
  }
 } else {
  var_1_54 = var_1_45;
 }
 if (var_1_27 >= ((((var_1_28) < ((3.8f * var_1_30))) ? (var_1_28) : ((3.8f * var_1_30))))) {
  if (((((var_1_31) > (var_1_66)) ? (var_1_31) : (var_1_66))) == (var_1_67 + var_1_63)) {
   var_1_61 = (((((((((var_1_23) > (var_1_101)) ? (var_1_23) : (var_1_101))) + var_1_107)) < (var_1_18)) ? ((((((var_1_23) > (var_1_101)) ? (var_1_23) : (var_1_101))) + var_1_107)) : (var_1_18)));
  }
 }
 unsigned short int stepLocal_20 = var_1_54;
 unsigned char stepLocal_19 = var_1_6;
 unsigned char stepLocal_18 = var_1_41;
 if (stepLocal_20 >= (((((var_1_110) > (var_1_25)) ? (var_1_110) : (var_1_25))) / (var_1_52 + var_1_34))) {
  if (stepLocal_18 > (var_1_110 + var_1_60)) {
   var_1_85 = ((((var_1_43) < (var_1_25)) ? (var_1_43) : (var_1_25)));
  } else {
   var_1_85 = (var_1_45 + (((((var_1_44 - var_1_25)) > ((var_1_43 + var_1_86))) ? ((var_1_44 - var_1_25)) : ((var_1_43 + var_1_86)))));
  }
 } else {
  if (var_1_7) {
   if (stepLocal_19 || (var_1_99 >= var_1_109)) {
    var_1_85 = (var_1_87 - (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) + (var_1_88 + var_1_89)));
   } else {
    var_1_85 = (((((var_1_51) < ((var_1_90 - var_1_88))) ? (var_1_51) : ((var_1_90 - var_1_88)))) - ((((((((var_1_25) > (var_1_45)) ? (var_1_25) : (var_1_45)))) < ((var_1_89 + var_1_86))) ? (((((var_1_25) > (var_1_45)) ? (var_1_25) : (var_1_45)))) : ((var_1_89 + var_1_86)))));
   }
  } else {
   var_1_85 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
  }
 }
 var_1_100 = var_1_54;
 signed long int stepLocal_2 = var_1_39 | var_1_61;
 signed long int stepLocal_1 = -100 ^ ((((var_1_11) < (-128)) ? (var_1_11) : (-128)));
 unsigned long int stepLocal_0 = var_1_35;
 if ((- (- var_1_99)) > var_1_99) {
  if (var_1_11 >= stepLocal_0) {
   if (stepLocal_2 > var_1_11) {
    var_1_13 = var_1_16;
   } else {
    var_1_13 = (var_1_17 - var_1_18);
   }
  } else {
   if (stepLocal_1 < (var_1_12 / var_1_19)) {
    var_1_13 = (var_1_17 - var_1_18);
   } else {
    if (var_1_9) {
     var_1_13 = var_1_18;
    } else {
     var_1_13 = var_1_17;
    }
   }
  }
 } else {
  var_1_13 = ((var_1_20 + var_1_21) + (var_1_22 + var_1_23));
 }
 unsigned short int stepLocal_15 = var_1_11;
 if (stepLocal_15 >= ((var_1_33 - var_1_85) * (var_1_42 * var_1_56))) {
  var_1_76 = ((((var_1_25) > (var_1_48)) ? (var_1_25) : (var_1_48)));
 } else {
  var_1_76 = var_1_17;
 }
 if (var_1_35 > var_1_76) {
  if ((((((var_1_33) < (var_1_11)) ? (var_1_33) : (var_1_11))) - (var_1_43 + var_1_97)) > -100) {
   if (var_1_8) {
    var_1_78 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
   } else {
    var_1_78 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
   }
  } else {
   var_1_78 = ((((var_1_28) > (var_1_31)) ? (var_1_28) : (var_1_31)));
  }
 } else {
  if (var_1_23 <= ((((-8) > ((var_1_58 / var_1_45))) ? (-8) : ((var_1_58 / var_1_45))))) {
   var_1_78 = (((((31.25f - var_1_31)) < (var_1_27)) ? ((31.25f - var_1_31)) : (var_1_27)));
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -31);
 assume_abort_if_not(var_1_20 <= 32);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -31);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -31);
 assume_abort_if_not(var_1_22 <= 32);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -31);
 assume_abort_if_not(var_1_23 <= 31);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 49150);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 24575);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1073741823);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 4294967295);
 assume_abort_if_not(var_1_40 != 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 32);
 assume_abort_if_not(var_1_43 <= 64);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 63);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 64);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 assume_abort_if_not(var_1_49 != 0.0F);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 127);
 assume_abort_if_not(var_1_50 <= 255);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 127);
 assume_abort_if_not(var_1_51 <= 254);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 127);
 assume_abort_if_not(var_1_52 <= 254);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 127);
 assume_abort_if_not(var_1_53 <= 254);
 var_1_58 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_58 >= 536870911);
 assume_abort_if_not(var_1_58 <= 1073741823);
 var_1_59 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 2147483646);
 var_1_60 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_60 >= 1073741822);
 assume_abort_if_not(var_1_60 <= 2147483646);
 var_1_70 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_70 >= -32767);
 assume_abort_if_not(var_1_70 <= 32766);
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= 4611686.018427383000e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 63);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 127);
 assume_abort_if_not(var_1_87 <= 254);
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 32);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 31);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 190);
 assume_abort_if_not(var_1_90 <= 254);
 var_1_92 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 65534);
 var_1_95 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_95 >= 0);
 assume_abort_if_not(var_1_95 <= 0);
 var_1_96 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_96 >= 0);
 assume_abort_if_not(var_1_96 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_32 = var_1_32;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_104 = var_1_104;
 last_1_var_1_109 = var_1_109;
 last_1_var_1_110 = var_1_110;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_91 * var_1_10) < (var_1_74 | var_1_57)) ? (var_1_1 == ((unsigned char) ((var_1_91 >= var_1_74) && var_1_6))) : ((var_1_10 < var_1_91) ? (var_1_1 == ((unsigned char) ((var_1_74 < var_1_10) || (var_1_7 && (var_1_8 && var_1_9))))) : (var_1_1 == ((unsigned char) (! (! var_1_7)))))) && (var_1_7 ? (var_1_10 == ((unsigned short int) (((((var_1_11) > (34102)) ? (var_1_11) : (34102))) - last_1_var_1_54))) : (var_1_10 == ((unsigned short int) ((((((((last_1_var_1_100) < ((last_1_var_1_54 + var_1_12))) ? (last_1_var_1_100) : ((last_1_var_1_54 + var_1_12))))) > (var_1_11)) ? (((((last_1_var_1_100) < ((last_1_var_1_54 + var_1_12))) ? (last_1_var_1_100) : ((last_1_var_1_54 + var_1_12))))) : (var_1_11))))))) && (((- (- var_1_99)) > var_1_99) ? ((var_1_11 >= var_1_35) ? (((var_1_39 | var_1_61) > var_1_11) ? (var_1_13 == ((signed char) var_1_16)) : (var_1_13 == ((signed char) (var_1_17 - var_1_18)))) : (((-100 ^ ((((var_1_11) < (-128)) ? (var_1_11) : (-128)))) < (var_1_12 / var_1_19)) ? (var_1_13 == ((signed char) (var_1_17 - var_1_18))) : (var_1_9 ? (var_1_13 == ((signed char) var_1_18)) : (var_1_13 == ((signed char) var_1_17))))) : (var_1_13 == ((signed char) ((var_1_20 + var_1_21) + (var_1_22 + var_1_23)))))) && ((((8 + var_1_25) - var_1_18) > (var_1_12 | var_1_20)) ? ((! (var_1_20 <= var_1_11)) ? (var_1_24 == ((float) (var_1_26 - var_1_27))) : ((var_1_71 > var_1_79) ? (var_1_24 == ((float) (var_1_28 + (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))) - var_1_31)))) : (var_1_24 == ((float) ((((4.4f) > (var_1_31)) ? (4.4f) : (var_1_31))))))) : (var_1_24 == ((float) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))) && ((var_1_31 <= (var_1_67 * (var_1_29 + var_1_28))) ? (var_1_32 == ((unsigned short int) ((var_1_33 - var_1_18) - ((var_1_34 - var_1_25) - var_1_74)))) : (var_1_32 == ((unsigned short int) ((((100) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (100) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))))))) && ((! var_1_7) ? ((var_1_30 >= var_1_26) ? (var_1_35 == ((unsigned long int) ((var_1_33 + ((((var_1_34) < (last_1_var_1_32)) ? (var_1_34) : (last_1_var_1_32)))) + var_1_12))) : ((var_1_19 == var_1_16) ? (((var_1_31 == last_1_var_1_71) && (var_1_29 >= last_1_var_1_109)) ? (var_1_35 == ((unsigned long int) ((((((var_1_36 - var_1_33) + ((((var_1_25) > (last_1_var_1_32)) ? (var_1_25) : (last_1_var_1_32))))) < ((2897548241u - last_1_var_1_110))) ? (((var_1_36 - var_1_33) + ((((var_1_25) > (last_1_var_1_32)) ? (var_1_25) : (last_1_var_1_32))))) : ((2897548241u - last_1_var_1_110)))))) : (var_1_35 == ((unsigned long int) ((((var_1_18) > ((var_1_37 - var_1_33))) ? (var_1_18) : ((var_1_37 - var_1_33))))))) : 1)) : 1)) && (var_1_8 ? (var_1_38 == ((unsigned char) ((((var_1_25) > (var_1_18)) ? (var_1_25) : (var_1_18))))) : (var_1_38 == ((unsigned char) var_1_25)))) && (((var_1_18 / var_1_40) <= ((var_1_19 * last_1_var_1_110) * var_1_11)) ? ((var_1_37 > last_1_var_1_100) ? (var_1_39 == ((signed long int) (((((last_1_var_1_102 + last_1_var_1_100) - var_1_12) < 0 ) ? -((last_1_var_1_102 + last_1_var_1_100) - var_1_12) : ((last_1_var_1_102 + last_1_var_1_100) - var_1_12))))) : ((1000u == (((((var_1_37) > (last_1_var_1_68)) ? (var_1_37) : (last_1_var_1_68))) + (var_1_34 + last_1_var_1_110))) ? (var_1_39 == ((signed long int) ((((last_1_var_1_84) < ((var_1_34 - last_1_var_1_100))) ? (last_1_var_1_84) : ((var_1_34 - last_1_var_1_100)))))) : 1)) : 1)) && ((var_1_11 > ((((var_1_104) > (var_1_84)) ? (var_1_104) : (var_1_84)))) ? (var_1_41 == ((unsigned char) ((((var_1_25) < (var_1_42)) ? (var_1_25) : (var_1_42))))) : (((var_1_35 > var_1_34) || var_1_94) ? (var_1_41 == ((unsigned char) (var_1_18 + ((var_1_43 - 16) + var_1_25)))) : (var_1_41 == ((unsigned char) ((var_1_44 + var_1_45) - var_1_18)))))) && (((var_1_68 / (var_1_44 + var_1_43)) >= var_1_19) ? (var_1_46 == ((unsigned short int) last_1_var_1_46)) : (var_1_46 == ((unsigned short int) var_1_12)))) && ((var_1_12 > var_1_83) ? ((var_1_66 < (var_1_71 + (var_1_27 / var_1_49))) ? ((var_1_43 >= (var_1_50 - ((((var_1_44) > (var_1_18)) ? (var_1_44) : (var_1_18))))) ? (var_1_48 == ((unsigned char) (((((var_1_51) > (((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53))))) ? (var_1_51) : (((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))))) - var_1_18))) : 1) : 1) : (var_1_48 == ((unsigned char) ((((var_1_45) > (var_1_25)) ? (var_1_45) : (var_1_25))))))) && ((var_1_25 <= var_1_81) ? (var_1_6 ? (var_1_54 == ((unsigned short int) var_1_39)) : (var_1_54 == ((unsigned short int) var_1_11))) : (var_1_54 == ((unsigned short int) var_1_45)))) && (((- last_1_var_1_63) >= var_1_27) ? (var_1_56 == ((unsigned short int) ((var_1_51 + var_1_18) + ((((last_1_var_1_76) > (var_1_12)) ? (last_1_var_1_76) : (var_1_12)))))) : ((var_1_37 >= var_1_11) ? (var_1_56 == ((unsigned short int) var_1_11)) : (var_1_56 == ((unsigned short int) (var_1_11 - ((((last_1_var_1_110) < 0 ) ? -(last_1_var_1_110) : (last_1_var_1_110))))))))) && (((var_1_53 >= last_1_var_1_57) && var_1_7) ? (var_1_6 ? (var_1_57 == ((signed long int) (((1000000000 + var_1_58) - var_1_43) - var_1_59))) : 1) : ((var_1_67 < var_1_31) ? (var_1_57 == ((signed long int) ((((((var_1_60 - var_1_74) - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) > (var_1_23)) ? (((var_1_60 - var_1_74) - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) : (var_1_23))))) : (var_1_57 == ((signed long int) ((var_1_74 - var_1_46) + (25 - var_1_39))))))) && ((var_1_27 >= ((((var_1_28) < ((3.8f * var_1_30))) ? (var_1_28) : ((3.8f * var_1_30))))) ? ((((((var_1_31) > (var_1_66)) ? (var_1_31) : (var_1_66))) == (var_1_67 + var_1_63)) ? (var_1_61 == ((signed short int) (((((((((var_1_23) > (var_1_101)) ? (var_1_23) : (var_1_101))) + var_1_107)) < (var_1_18)) ? ((((((var_1_23) > (var_1_101)) ? (var_1_23) : (var_1_101))) + var_1_107)) : (var_1_18))))) : 1) : 1)) && (var_1_63 == ((double) (50.5 + var_1_30)))) && ((((((var_1_74) > (var_1_39)) ? (var_1_74) : (var_1_39))) >= (var_1_18 + ((((var_1_17) < (32)) ? (var_1_17) : (32))))) ? ((var_1_6 && (var_1_39 <= var_1_48)) ? (var_1_64 == ((unsigned char) (! (! (var_1_8 && var_1_6))))) : 1) : 1)) && ((var_1_69 >= var_1_51) ? (var_1_66 == ((float) ((var_1_29 + ((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))) - var_1_27))) : (var_1_66 == ((float) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))) && ((((((var_1_43) < (var_1_19)) ? (var_1_43) : (var_1_19))) != var_1_35) ? (var_1_67 == ((double) var_1_29)) : (((((((var_1_59) > (var_1_58)) ? (var_1_59) : (var_1_58))) * (~ 4)) >= var_1_35) ? (var_1_67 == ((double) ((((4.25) > (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (4.25) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))) : 1))) && ((((last_1_var_1_57 * last_1_var_1_39) | var_1_51) < var_1_36) ? (var_1_68 == ((unsigned short int) ((((var_1_34) < (var_1_12)) ? (var_1_34) : (var_1_12))))) : ((var_1_36 >= last_1_var_1_74) ? (var_1_68 == ((unsigned short int) (((((var_1_44) > (last_1_var_1_80)) ? (var_1_44) : (last_1_var_1_80))) + 256))) : (var_1_68 == ((unsigned short int) ((((var_1_45) > (((((var_1_33) < (var_1_50)) ? (var_1_33) : (var_1_50))))) ? (var_1_45) : (((((var_1_33) < (var_1_50)) ? (var_1_33) : (var_1_50))))))))))) && (var_1_108 ? (var_1_69 == ((signed short int) ((((((var_1_68 + var_1_50) + (var_1_17 + var_1_21))) < (var_1_70)) ? (((var_1_68 + var_1_50) + (var_1_17 + var_1_21))) : (var_1_70))))) : 1)) && ((var_1_10 > 25) ? ((var_1_26 > var_1_30) ? (var_1_71 == ((double) (((((var_1_30 - var_1_27)) > ((var_1_26 - (var_1_72 - var_1_31)))) ? ((var_1_30 - var_1_27)) : ((var_1_26 - (var_1_72 - var_1_31))))))) : 1) : (var_1_71 == ((double) var_1_30)))) && (var_1_8 ? (var_1_73 == ((unsigned short int) (var_1_44 + (var_1_34 - (var_1_10 + 1))))) : 1)) && (((var_1_72 - var_1_30) < last_1_var_1_66) ? (var_1_74 == ((unsigned long int) ((((var_1_45) < (25u)) ? (var_1_45) : (25u))))) : 1)) && ((var_1_9 && (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) <= var_1_69)) ? (var_1_75 == ((unsigned short int) 5)) : 1)) && ((var_1_11 >= ((var_1_33 - var_1_85) * (var_1_42 * var_1_56))) ? (var_1_76 == ((signed short int) ((((var_1_25) > (var_1_48)) ? (var_1_25) : (var_1_48))))) : (var_1_76 == ((signed short int) var_1_17)))) && (var_1_77 == ((double) ((((9.99999999995E10) < (100.4)) ? (9.99999999995E10) : (100.4)))))) && ((var_1_35 > var_1_76) ? (((((((var_1_33) < (var_1_11)) ? (var_1_33) : (var_1_11))) - (var_1_43 + var_1_97)) > -100) ? (var_1_8 ? (var_1_78 == ((float) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : (var_1_78 == ((float) ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))) : (var_1_78 == ((float) ((((var_1_28) > (var_1_31)) ? (var_1_28) : (var_1_31)))))) : ((var_1_23 <= ((((-8) > ((var_1_58 / var_1_45))) ? (-8) : ((var_1_58 / var_1_45))))) ? (var_1_78 == ((float) (((((31.25f - var_1_31)) < (var_1_27)) ? ((31.25f - var_1_31)) : (var_1_27))))) : 1))) && (((var_1_37 / (var_1_51 + var_1_34)) <= (var_1_19 * var_1_98)) ? ((((- var_1_36) / var_1_45) < 10u) ? (var_1_79 == ((double) (var_1_31 + var_1_28))) : 1) : ((((var_1_42 + var_1_18) - var_1_43) > var_1_104) ? (var_1_79 == ((double) (var_1_27 - (var_1_72 - 2.5)))) : ((var_1_42 != var_1_51) ? (var_1_79 == ((double) (var_1_30 - var_1_72))) : (var_1_79 == ((double) ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))))))))) && (((var_1_10 / var_1_19) < var_1_68) ? (var_1_80 == ((unsigned char) ((((var_1_25) > (var_1_44)) ? (var_1_25) : (var_1_44))))) : 1)) && ((var_1_49 >= var_1_99) ? (var_1_8 ? (var_1_81 == ((signed char) (((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20))) + var_1_23))) : (((((((var_1_84) > (var_1_73)) ? (var_1_84) : (var_1_73))) < (var_1_84 - var_1_12)) && var_1_1) ? (var_1_81 == ((signed char) (var_1_21 + (var_1_20 + var_1_23)))) : 1)) : 1)) && ((last_1_var_1_35 <= last_1_var_1_110) ? (var_1_83 == ((signed short int) ((((((var_1_45) < (last_1_var_1_48)) ? (var_1_45) : (last_1_var_1_48))) + last_1_var_1_102) - ((((var_1_52) < (last_1_var_1_102)) ? (var_1_52) : (last_1_var_1_102)))))) : (var_1_83 == ((signed short int) ((((var_1_70) > (var_1_50)) ? (var_1_70) : (var_1_50))))))) && ((var_1_98 < (- var_1_74)) ? (var_1_84 == ((signed long int) (-256 + var_1_110))) : (var_1_64 ? (var_1_84 == ((signed long int) ((((last_1_var_1_84) < (((1749579744 - var_1_93) - ((((var_1_10) < (var_1_43)) ? (var_1_10) : (var_1_43)))))) ? (last_1_var_1_84) : (((1749579744 - var_1_93) - ((((var_1_10) < (var_1_43)) ? (var_1_10) : (var_1_43))))))))) : 1))) && ((var_1_54 >= (((((var_1_110) > (var_1_25)) ? (var_1_110) : (var_1_25))) / (var_1_52 + var_1_34))) ? ((var_1_41 > (var_1_110 + var_1_60)) ? (var_1_85 == ((unsigned char) ((((var_1_43) < (var_1_25)) ? (var_1_43) : (var_1_25))))) : (var_1_85 == ((unsigned char) (var_1_45 + (((((var_1_44 - var_1_25)) > ((var_1_43 + var_1_86))) ? ((var_1_44 - var_1_25)) : ((var_1_43 + var_1_86)))))))) : (var_1_7 ? ((var_1_6 || (var_1_99 >= var_1_109)) ? (var_1_85 == ((unsigned char) (var_1_87 - (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) + (var_1_88 + var_1_89))))) : (var_1_85 == ((unsigned char) (((((var_1_51) < ((var_1_90 - var_1_88))) ? (var_1_51) : ((var_1_90 - var_1_88)))) - ((((((((var_1_25) > (var_1_45)) ? (var_1_25) : (var_1_45)))) < ((var_1_89 + var_1_86))) ? (((((var_1_25) > (var_1_45)) ? (var_1_25) : (var_1_45)))) : ((var_1_89 + var_1_86)))))))) : (var_1_85 == ((unsigned char) ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))))) && ((var_1_98 < var_1_44) ? (var_1_64 ? ((var_1_46 < (var_1_33 - 8)) ? (var_1_91 == ((unsigned short int) (((((52380 - var_1_12)) < (((((((((var_1_92) > (32)) ? (var_1_92) : (32)))) > (var_1_52)) ? (((((var_1_92) > (32)) ? (var_1_92) : (32)))) : (var_1_52))))) ? ((52380 - var_1_12)) : (((((((((var_1_92) > (32)) ? (var_1_92) : (32)))) > (var_1_52)) ? (((((var_1_92) > (32)) ? (var_1_92) : (32)))) : (var_1_52)))))))) : (var_1_91 == ((unsigned short int) var_1_11))) : ((var_1_45 <= var_1_59) ? (var_1_91 == ((unsigned short int) (256 + (var_1_88 + (var_1_42 + 128))))) : 1)) : 1)) && ((var_1_12 == (- (- var_1_60))) ? (var_1_93 == ((unsigned short int) var_1_90)) : 1)) && ((var_1_9 && var_1_6) ? (var_1_94 == ((unsigned char) var_1_6)) : (var_1_6 ? (var_1_94 == ((unsigned char) (! var_1_95))) : (var_1_94 == ((unsigned char) ((var_1_35 < var_1_40) || (var_1_8 && (! var_1_96)))))))) && ((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) <= (var_1_91 ^ -2)) ? (var_1_97 == ((unsigned char) (var_1_43 + ((((var_1_86) > (((((var_1_89) > (var_1_88)) ? (var_1_89) : (var_1_88))))) ? (var_1_86) : (((((var_1_89) > (var_1_88)) ? (var_1_89) : (var_1_88))))))))) : ((var_1_44 >= var_1_110) ? (var_1_97 == ((unsigned char) var_1_51)) : (var_1_97 == ((unsigned char) var_1_52))))) && (var_1_98 == ((unsigned short int) var_1_43))) && (var_1_64 ? (var_1_99 == ((double) var_1_27)) : (var_1_99 == ((double) var_1_31)))) && (var_1_100 == ((unsigned short int) var_1_54))) && (var_1_1 ? (var_1_101 == ((unsigned char) var_1_89)) : (var_1_101 == ((unsigned char) var_1_18)))) && (var_1_96 ? (var_1_102 == ((signed short int) var_1_21)) : (var_1_102 == ((signed short int) var_1_83)))) && (var_1_95 ? (var_1_103 == ((unsigned char) var_1_86)) : 1)) && (var_1_94 ? (var_1_104 == ((unsigned long int) last_1_var_1_104)) : (var_1_104 == ((unsigned long int) var_1_56)))) && (var_1_64 ? (var_1_105 == ((float) var_1_30)) : 1)) && (var_1_108 ? (var_1_106 == ((unsigned char) var_1_52)) : 1)) && ((var_1_102 <= (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) / var_1_52)) ? (var_1_107 == ((unsigned char) var_1_43)) : (var_1_107 == ((unsigned char) ((((((((var_1_43) > (8)) ? (var_1_43) : (8)))) < ((5 + var_1_45))) ? (((((var_1_43) > (8)) ? (var_1_43) : (8)))) : ((5 + var_1_45)))))))) && (var_1_108 == ((unsigned char) var_1_7))) && (var_1_109 == ((float) var_1_31))) && (var_1_110 == ((unsigned long int) last_1_var_1_100))
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
