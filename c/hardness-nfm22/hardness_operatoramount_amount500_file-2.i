// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = -0.5;
double var_1_3 = 64.84;
double var_1_4 = 2.2;
double var_1_5 = 31.875;
signed char var_1_8 = -50;
signed char var_1_9 = 8;
signed char var_1_10 = 16;
unsigned short int var_1_11 = 4;
unsigned short int var_1_12 = 34431;
float var_1_13 = 9999999999999.9;
float var_1_14 = 4.5;
float var_1_15 = 5.9;
float var_1_16 = 5.2;
float var_1_17 = 0.0;
float var_1_18 = 4.125;
float var_1_19 = 4.8;
signed long int var_1_20 = 4;
signed char var_1_21 = 64;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
double var_1_27 = 2.4;
double var_1_28 = 50.5;
double var_1_29 = 24.5;
double var_1_30 = 3.2;
signed char var_1_31 = 64;
signed char var_1_32 = 5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 64;
signed short int var_1_40 = 8;
signed long int var_1_41 = 10;
unsigned long int var_1_42 = 64;
unsigned long int var_1_43 = 2869845888;
unsigned short int var_1_44 = 5;
double var_1_45 = 0.625;
signed short int var_1_47 = 128;
signed short int var_1_48 = 10000;
signed short int var_1_49 = 10000;
unsigned char var_1_50 = 1;
unsigned short int var_1_52 = 25;
unsigned short int var_1_53 = 21701;
unsigned short int var_1_54 = 28456;
unsigned short int var_1_55 = 27932;
signed short int var_1_56 = 32;
float var_1_57 = 255.45;
signed char var_1_58 = -1;
signed short int var_1_60 = 8;
unsigned long int var_1_61 = 256;
unsigned long int var_1_62 = 3325580668;
unsigned long int var_1_63 = 2701085355;
unsigned long int var_1_64 = 1594207647;
signed long int var_1_65 = -200;
unsigned long int var_1_67 = 0;
unsigned long int var_1_68 = 1976076145;
unsigned long int var_1_69 = 1000000000;
double var_1_70 = 127.375;
unsigned short int var_1_71 = 1;
double var_1_72 = 1000000000000.5;
double var_1_73 = 0.0;
unsigned char var_1_74 = 8;
unsigned char var_1_75 = 1;
float var_1_76 = 63.85;
unsigned char var_1_77 = 0;
unsigned char var_1_79 = 1;
unsigned long int var_1_80 = 50;
unsigned long int var_1_82 = 1543193446;
unsigned long int var_1_83 = 3941720322;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
unsigned short int var_1_86 = 16;
signed short int var_1_87 = 10;
signed short int var_1_88 = 2;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 0;
double var_1_91 = 8.7;
float var_1_92 = 4.75;
float var_1_93 = 255.375;
unsigned long int var_1_94 = 16;
unsigned short int var_1_95 = 1;
double var_1_96 = 127.25;
double var_1_97 = 99999999999.8;
double var_1_98 = 0.625;
signed char var_1_99 = 10;
unsigned char var_1_100 = 1;
double var_1_101 = 8.6;
float var_1_102 = 9.34;
unsigned short int last_1_var_1_11 = 4;
signed long int last_1_var_1_20 = 4;
unsigned char last_1_var_1_23 = 1;
double last_1_var_1_27 = 2.4;
signed char last_1_var_1_31 = 64;
unsigned char last_1_var_1_33 = 1;
unsigned char last_1_var_1_37 = 2;
signed long int last_1_var_1_41 = 10;
unsigned short int last_1_var_1_44 = 5;
signed short int last_1_var_1_47 = 128;
unsigned short int last_1_var_1_52 = 25;
unsigned long int last_1_var_1_67 = 0;
double last_1_var_1_70 = 127.375;
unsigned char last_1_var_1_75 = 1;
float last_1_var_1_76 = 63.85;
signed short int last_1_var_1_87 = 10;
unsigned char last_1_var_1_89 = 0;
unsigned char last_1_var_1_90 = 0;
unsigned long int last_1_var_1_94 = 16;
unsigned short int last_1_var_1_95 = 1;
double last_1_var_1_101 = 8.6;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_17 = last_1_var_1_23;
 if (last_1_var_1_75 && stepLocal_17) {
  var_1_65 = ((((last_1_var_1_44) > (last_1_var_1_87)) ? (last_1_var_1_44) : (last_1_var_1_87)));
 } else {
  var_1_65 = (var_1_32 + ((((last_1_var_1_52) > (last_1_var_1_31)) ? (last_1_var_1_52) : (last_1_var_1_31))));
 }
 if (var_1_14 < var_1_3) {
  var_1_44 = ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_9) + var_1_65);
 } else {
  var_1_44 = var_1_65;
 }
 if (! last_1_var_1_90) {
  if ((var_1_72 + 0.5f) == var_1_4) {
   if (var_1_10 >= last_1_var_1_89) {
    var_1_75 = var_1_26;
   }
  }
 } else {
  if (var_1_28 >= (var_1_30 * last_1_var_1_27)) {
   var_1_75 = var_1_25;
  } else {
   if ((- last_1_var_1_76) <= ((((last_1_var_1_101) < (var_1_30)) ? (last_1_var_1_101) : (var_1_30)))) {
    var_1_75 = (var_1_24 || var_1_25);
   }
  }
 }
 if (((((last_1_var_1_41) < (var_1_38)) ? (last_1_var_1_41) : (var_1_38))) >= var_1_9) {
  if (var_1_32 > (var_1_12 / ((((-1) < (-25)) ? (-1) : (-25))))) {
   var_1_67 = (var_1_62 - var_1_55);
  } else {
   if ((last_1_var_1_67 / ((((var_1_42) < (200u)) ? (var_1_42) : (200u)))) > last_1_var_1_20) {
    var_1_67 = ((((last_1_var_1_31) < 0 ) ? -(last_1_var_1_31) : (last_1_var_1_31)));
   } else {
    var_1_67 = var_1_38;
   }
  }
 } else {
  var_1_67 = (var_1_62 - (((((var_1_64) > (var_1_68)) ? (var_1_64) : (var_1_68))) - (var_1_69 - last_1_var_1_94)));
 }
 if (((var_1_10 - var_1_9) / ((((var_1_21) > (var_1_32)) ? (var_1_21) : (var_1_32)))) > last_1_var_1_44) {
  var_1_31 = (var_1_10 - var_1_9);
 }
 signed long int stepLocal_11 = (((last_1_var_1_47) > ((var_1_12 * last_1_var_1_11))) ? (last_1_var_1_47) : ((var_1_12 * last_1_var_1_11)));
 if (last_1_var_1_33) {
  if (var_1_14 < (var_1_17 * (0.28f + last_1_var_1_70))) {
   var_1_52 = ((((var_1_36) > (var_1_12)) ? (var_1_36) : (var_1_12)));
  } else {
   var_1_52 = ((62232 - last_1_var_1_52) - var_1_36);
  }
 } else {
  if (stepLocal_11 > var_1_21) {
   var_1_52 = ((var_1_53 + var_1_54) - (var_1_55 - var_1_38));
  } else {
   var_1_52 = (((((var_1_12) > (64694)) ? (var_1_12) : (64694))) - var_1_39);
  }
 }
 unsigned long int stepLocal_10 = var_1_67;
 if (var_1_5 <= (- var_1_17)) {
  if ((var_1_36 / var_1_42) > stepLocal_10) {
   var_1_47 = (((var_1_48 + var_1_49) - ((((var_1_38) > (var_1_44)) ? (var_1_38) : (var_1_44)))) - var_1_67);
  }
 } else {
  var_1_47 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 }
 var_1_8 = ((var_1_9 - var_1_10) + -2);
 signed long int stepLocal_24 = var_1_65;
 if (stepLocal_24 <= var_1_39) {
  var_1_77 = var_1_26;
 } else {
  var_1_77 = (var_1_26 && var_1_79);
 }
 signed char stepLocal_26 = var_1_8;
 if (var_1_9 > stepLocal_26) {
  var_1_84 = (! ((var_1_64 < var_1_69) || (! var_1_24)));
 } else {
  var_1_84 = (var_1_26 && var_1_24);
 }
 if (var_1_21 < var_1_49) {
  var_1_85 = var_1_26;
 }
 var_1_86 = (var_1_36 + var_1_39);
 var_1_89 = var_1_9;
 var_1_90 = var_1_24;
 if (var_1_90) {
  var_1_91 = var_1_73;
 } else {
  var_1_91 = var_1_29;
 }
 if (var_1_90) {
  var_1_92 = var_1_73;
 } else {
  var_1_92 = var_1_17;
 }
 if (var_1_24) {
  var_1_93 = var_1_28;
 } else {
  var_1_93 = var_1_29;
 }
 if (var_1_79) {
  var_1_94 = var_1_10;
 } else {
  var_1_94 = 8u;
 }
 var_1_98 = var_1_3;
 var_1_99 = var_1_36;
 if (var_1_85) {
  var_1_101 = var_1_3;
 }
 var_1_60 = ((((((var_1_9 - var_1_38) + var_1_86)) < ((var_1_8 + (var_1_67 + -16)))) ? (((var_1_9 - var_1_38) + var_1_86)) : ((var_1_8 + (var_1_67 + -16)))));
 if (var_1_55 < var_1_43) {
  var_1_87 = (var_1_21 + var_1_94);
 } else {
  var_1_87 = var_1_52;
 }
 if (var_1_84) {
  var_1_11 = (var_1_12 - var_1_10);
 }
 if (var_1_84) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19)));
 } else {
  var_1_13 = (((((var_1_16 - (var_1_14 + var_1_19))) < (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))) ? ((var_1_16 - (var_1_14 + var_1_19))) : (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))));
 }
 if (var_1_3 <= ((var_1_5 * var_1_29) * var_1_28)) {
  var_1_33 = (! (var_1_24 || var_1_25));
 } else {
  if (var_1_93 == (var_1_19 / var_1_17)) {
   var_1_33 = ((var_1_14 != var_1_30) && var_1_24);
  } else {
   var_1_33 = var_1_26;
  }
 }
 signed char stepLocal_6 = var_1_32;
 if ((last_1_var_1_37 >> var_1_11) <= stepLocal_6) {
  if (var_1_15 == (var_1_4 - var_1_18)) {
   if (! (var_1_15 <= var_1_18)) {
    if ((var_1_3 * (var_1_30 + var_1_92)) == ((var_1_5 + var_1_14) / var_1_17)) {
     var_1_37 = (((((var_1_38 - 64)) < (0)) ? ((var_1_38 - 64)) : (0)));
    }
   } else {
    var_1_37 = (var_1_9 + var_1_36);
   }
  } else {
   var_1_37 = ((((((var_1_39 - var_1_36) + var_1_10)) > (var_1_9)) ? (((var_1_39 - var_1_36) + var_1_10)) : (var_1_9)));
  }
 } else {
  var_1_37 = (var_1_9 + var_1_36);
 }
 signed long int stepLocal_13 = var_1_89 + var_1_36;
 if ((((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))) - 200) < stepLocal_13) {
  if ((var_1_14 - var_1_19) <= (var_1_29 * (var_1_93 + var_1_18))) {
   var_1_58 = (var_1_10 + ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))));
  } else {
   var_1_58 = (var_1_36 + (var_1_10 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))));
  }
 }
 if (var_1_85) {
  var_1_88 = var_1_99;
 } else {
  var_1_88 = var_1_49;
 }
 if (var_1_33) {
  var_1_95 = last_1_var_1_95;
 } else {
  var_1_95 = var_1_48;
 }
 if (var_1_33) {
  var_1_96 = var_1_29;
 } else {
  var_1_96 = var_1_97;
 }
 unsigned char stepLocal_16 = (~ var_1_53) < var_1_32;
 unsigned char stepLocal_15 = var_1_33;
 unsigned char stepLocal_14 = var_1_33;
 if (var_1_3 >= (var_1_30 * 256.75)) {
  if (var_1_5 <= ((var_1_30 / var_1_17) + var_1_15)) {
   var_1_61 = (((((var_1_62) > (var_1_63)) ? (var_1_62) : (var_1_63))) - var_1_10);
  } else {
   if (stepLocal_15 && (0.7 > var_1_4)) {
    var_1_61 = ((((var_1_49) > ((var_1_38 + (var_1_64 - var_1_52)))) ? (var_1_49) : ((var_1_38 + (var_1_64 - var_1_52)))));
   }
  }
 } else {
  if (((var_1_4 - 9.5f) <= var_1_15) || stepLocal_14) {
   if (stepLocal_16 || (var_1_9 > var_1_39)) {
    var_1_61 = (var_1_63 - (((((var_1_64 - var_1_49)) > (var_1_31)) ? ((var_1_64 - var_1_49)) : (var_1_31))));
   } else {
    var_1_61 = (var_1_63 - var_1_55);
   }
  }
 }
 if (var_1_16 == var_1_3) {
  var_1_23 = ((var_1_33 && var_1_24) || var_1_25);
 } else {
  var_1_23 = var_1_26;
 }
 signed long int stepLocal_5 = (((var_1_10) > (var_1_58)) ? (var_1_10) : (var_1_58));
 if (stepLocal_5 >= var_1_12) {
  var_1_34 = (var_1_24 || (! var_1_26));
 } else {
  var_1_34 = ((! var_1_24) && var_1_26);
 }
 if (var_1_34) {
  var_1_100 = var_1_26;
 }
 unsigned long int stepLocal_19 = var_1_67 & var_1_60;
 unsigned char stepLocal_18 = var_1_75;
 if (var_1_23 || stepLocal_18) {
  var_1_70 = (((var_1_19 + var_1_18) - var_1_16) + var_1_28);
 } else {
  if ((var_1_10 / var_1_71) < stepLocal_19) {
   var_1_70 = ((var_1_19 + var_1_18) + (var_1_72 - var_1_15));
  } else {
   var_1_70 = (((((var_1_73 - var_1_18) - ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3)))) < 0 ) ? -((var_1_73 - var_1_18) - ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_73 - var_1_18) - ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3))))));
  }
 }
 signed long int stepLocal_23 = var_1_10 - var_1_52;
 signed long int stepLocal_22 = (var_1_71 % var_1_55) + 100;
 unsigned long int stepLocal_21 = - var_1_42;
 signed char stepLocal_20 = var_1_9;
 if (stepLocal_22 != (var_1_36 / ((((var_1_32) > (var_1_48)) ? (var_1_32) : (var_1_48))))) {
  if (var_1_94 < stepLocal_23) {
   if (var_1_100) {
    var_1_76 = ((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)));
   } else {
    var_1_76 = ((((((var_1_18 + var_1_29)) < (var_1_28)) ? ((var_1_18 + var_1_29)) : (var_1_28))) + (var_1_30 + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))));
   }
  } else {
   var_1_76 = ((((8.5f) < (((((var_1_5) < ((var_1_15 + var_1_14))) ? (var_1_5) : ((var_1_15 + var_1_14)))))) ? (8.5f) : (((((var_1_5) < ((var_1_15 + var_1_14))) ? (var_1_5) : ((var_1_15 + var_1_14)))))));
  }
 } else {
  if (var_1_67 <= stepLocal_20) {
   var_1_76 = ((((63.8f) > (var_1_17)) ? (63.8f) : (var_1_17)));
  } else {
   if (var_1_71 >= stepLocal_21) {
    var_1_76 = var_1_28;
   }
  }
 }
 unsigned long int stepLocal_12 = var_1_43;
 if (var_1_55 > stepLocal_12) {
  var_1_56 = var_1_32;
 } else {
  var_1_56 = ((((var_1_61) > (var_1_9)) ? (var_1_61) : (var_1_9)));
 }
 if (var_1_25) {
  if (var_1_26) {
   var_1_40 = (((((((((var_1_56 + -1)) < (var_1_32)) ? ((var_1_56 + -1)) : (var_1_32)))) < (((((var_1_21) < (var_1_86)) ? (var_1_21) : (var_1_86))))) ? ((((((var_1_56 + -1)) < (var_1_32)) ? ((var_1_56 + -1)) : (var_1_32)))) : (((((var_1_21) < (var_1_86)) ? (var_1_21) : (var_1_86))))));
  }
 } else {
  var_1_40 = (var_1_89 + var_1_32);
 }
 if (var_1_56 != (- (var_1_12 - var_1_39))) {
  var_1_74 = (var_1_9 + var_1_36);
 } else {
  var_1_74 = ((((((((16) > (var_1_38)) ? (16) : (var_1_38)))) > (var_1_10)) ? (((((16) > (var_1_38)) ? (16) : (var_1_38)))) : (var_1_10)));
 }
 unsigned long int stepLocal_28 = 64u;
 signed long int stepLocal_27 = var_1_40 * (var_1_89 + var_1_74);
 if (stepLocal_27 == var_1_82) {
  if (var_1_24) {
   if (stepLocal_28 == var_1_68) {
    var_1_102 = (var_1_15 + ((((var_1_17) > (var_1_29)) ? (var_1_17) : (var_1_29))));
   } else {
    var_1_102 = var_1_28;
   }
  }
 }
 if ((- var_1_70) >= var_1_16) {
  var_1_50 = (var_1_34 && ((var_1_84 || var_1_75) && (var_1_85 && var_1_25)));
 }
 unsigned char stepLocal_0 = var_1_84;
 if (var_1_50) {
  var_1_1 = (((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5)));
 } else {
  if (var_1_23 && stepLocal_0) {
   var_1_1 = (var_1_4 - var_1_3);
  }
 }
 if (var_1_23 && (var_1_52 >= var_1_10)) {
  if ((var_1_16 * var_1_3) >= var_1_102) {
   var_1_35 = (var_1_10 + (var_1_9 + var_1_36));
  } else {
   var_1_35 = ((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36)));
  }
 }
 signed long int stepLocal_4 = (var_1_12 + var_1_89) - 128;
 signed char stepLocal_3 = var_1_21;
 unsigned char stepLocal_2 = var_1_50;
 unsigned char stepLocal_1 = var_1_50;
 if (var_1_85 && stepLocal_1) {
  if (((var_1_9 / var_1_21) + var_1_10) < stepLocal_4) {
   var_1_20 = (((((var_1_89 - var_1_10)) < (var_1_9)) ? ((var_1_89 - var_1_10)) : (var_1_9)));
  } else {
   if ((var_1_8 ^ var_1_89) > stepLocal_3) {
    if (stepLocal_2 || (var_1_19 <= var_1_1)) {
     var_1_20 = var_1_12;
    }
   } else {
    if (var_1_84) {
     var_1_20 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_12)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_12)));
    } else {
     var_1_20 = ((((((16) < 0 ) ? -(16) : (16))) + 256) - ((((0) > (var_1_89)) ? (0) : (var_1_89))));
    }
   }
  }
 }
 unsigned char stepLocal_25 = var_1_39;
 if (var_1_35 <= stepLocal_25) {
  var_1_80 = ((((((1159028602u) < (var_1_64)) ? (1159028602u) : (var_1_64))) + ((((1897264008u) > (var_1_82)) ? (1897264008u) : (var_1_82)))) - ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))));
 } else {
  var_1_80 = ((((var_1_87) < (((var_1_83 - var_1_12) - var_1_65))) ? (var_1_87) : (((var_1_83 - var_1_12) - var_1_65))));
 }
 signed short int stepLocal_9 = var_1_60;
 if (stepLocal_9 >= var_1_80) {
  var_1_45 = (var_1_17 - (var_1_16 + var_1_19));
 } else {
  var_1_45 = var_1_29;
 }
 unsigned char stepLocal_8 = var_1_25;
 unsigned long int stepLocal_7 = var_1_11 / var_1_42;
 if (stepLocal_7 == (((((var_1_43) < (2174276204u)) ? (var_1_43) : (2174276204u))) - var_1_10)) {
  if (var_1_26) {
   var_1_41 = ((((((var_1_32 + var_1_36)) < (5)) ? ((var_1_32 + var_1_36)) : (5))) + var_1_80);
  } else {
   if (var_1_90 && stepLocal_8) {
    var_1_41 = ((((((((var_1_39) > (var_1_38)) ? (var_1_39) : (var_1_38))) - var_1_9) < 0 ) ? -(((((var_1_39) > (var_1_38)) ? (var_1_39) : (var_1_38))) - var_1_9) : (((((var_1_39) > (var_1_38)) ? (var_1_39) : (var_1_38))) - var_1_9)));
   } else {
    var_1_41 = ((((((((var_1_39) < (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))) ? (var_1_39) : (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))))) < (var_1_9)) ? (((((var_1_39) < (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))) ? (var_1_39) : (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))))) : (var_1_9)));
   }
  }
 } else {
  if (var_1_23) {
   var_1_41 = (var_1_80 + (var_1_9 + var_1_12));
  } else {
   var_1_41 = (var_1_9 - ((((var_1_20) < (128)) ? (var_1_20) : (128))));
  }
 }
 if (var_1_31 >= (var_1_42 + var_1_41)) {
  var_1_57 = (var_1_19 + (((((var_1_14) < (var_1_16)) ? (var_1_14) : (var_1_16))) - var_1_17));
 } else {
  if (var_1_9 < var_1_61) {
   var_1_57 = (var_1_18 + (var_1_14 - var_1_15));
  } else {
   if (((var_1_43 - var_1_10) >> var_1_52) <= var_1_55) {
    var_1_57 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) - var_1_18);
   } else {
    var_1_57 = (((((var_1_16 - var_1_14)) < (((((var_1_15) < ((var_1_18 - var_1_4))) ? (var_1_15) : ((var_1_18 - var_1_4)))))) ? ((var_1_16 - var_1_14)) : (((((var_1_15) < ((var_1_18 - var_1_4))) ? (var_1_15) : ((var_1_18 - var_1_4)))))));
   }
  }
 }
 if (127.6f >= (var_1_4 + var_1_14)) {
  var_1_27 = (var_1_18 + (((((var_1_19) > (var_1_28)) ? (var_1_19) : (var_1_28))) + (var_1_29 + var_1_30)));
 } else {
  if (var_1_14 <= var_1_57) {
   if (var_1_15 <= (var_1_3 + var_1_101)) {
    var_1_27 = (var_1_28 + var_1_15);
   } else {
    var_1_27 = (var_1_19 - 16.5);
   }
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 2305843.009213691390e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -128);
 assume_abort_if_not(var_1_21 <= 127);
 assume_abort_if_not(var_1_21 != 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -115292.1504606845700e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 1152921.504606845700e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -115292.1504606845700e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 1152921.504606845700e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -128);
 assume_abort_if_not(var_1_32 <= 127);
 assume_abort_if_not(var_1_32 != 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 127);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 63);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 4294967295);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967295);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 8191);
 assume_abort_if_not(var_1_48 <= 16383);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 8191);
 assume_abort_if_not(var_1_49 <= 16383);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 16383);
 assume_abort_if_not(var_1_53 <= 32767);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 16384);
 assume_abort_if_not(var_1_54 <= 32767);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 16383);
 assume_abort_if_not(var_1_55 <= 32767);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 2147483647);
 assume_abort_if_not(var_1_62 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 2147483647);
 assume_abort_if_not(var_1_63 <= 4294967294);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 1073741823);
 assume_abort_if_not(var_1_64 <= 2147483647);
 var_1_68 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_68 >= 1073741823);
 assume_abort_if_not(var_1_68 <= 2147483647);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 536870911);
 assume_abort_if_not(var_1_69 <= 1073741823);
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 65535);
 assume_abort_if_not(var_1_71 != 0);
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_73 >= 4611686.018427382800e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 1);
 assume_abort_if_not(var_1_79 <= 1);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 1073741824);
 assume_abort_if_not(var_1_82 <= 2147483647);
 var_1_83 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_83 >= 3221225470);
 assume_abort_if_not(var_1_83 <= 4294967294);
 var_1_97 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_97 >= -922337.2036854765600e+13F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854765600e+12F && var_1_97 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_101 = var_1_101;
}
int property() {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_50 ? (var_1_1 == ((double) (((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))))) : ((var_1_23 && var_1_84) ? (var_1_1 == ((double) (var_1_4 - var_1_3))) : 1)) && (var_1_8 == ((signed char) ((var_1_9 - var_1_10) + -2)))) && (var_1_84 ? (var_1_11 == ((unsigned short int) (var_1_12 - var_1_10))) : 1)) && (var_1_84 ? (var_1_13 == ((float) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19))))) : (var_1_13 == ((float) (((((var_1_16 - (var_1_14 + var_1_19))) < (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))) ? ((var_1_16 - (var_1_14 + var_1_19))) : (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17)))))))))) && ((var_1_85 && var_1_50) ? ((((var_1_9 / var_1_21) + var_1_10) < ((var_1_12 + var_1_89) - 128)) ? (var_1_20 == ((signed long int) (((((var_1_89 - var_1_10)) < (var_1_9)) ? ((var_1_89 - var_1_10)) : (var_1_9))))) : (((var_1_8 ^ var_1_89) > var_1_21) ? ((var_1_50 || (var_1_19 <= var_1_1)) ? (var_1_20 == ((signed long int) var_1_12)) : 1) : (var_1_84 ? (var_1_20 == ((signed long int) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_12)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_12))))) : (var_1_20 == ((signed long int) ((((((16) < 0 ) ? -(16) : (16))) + 256) - ((((0) > (var_1_89)) ? (0) : (var_1_89))))))))) : 1)) && ((var_1_16 == var_1_3) ? (var_1_23 == ((unsigned char) ((var_1_33 && var_1_24) || var_1_25))) : (var_1_23 == ((unsigned char) var_1_26)))) && ((127.6f >= (var_1_4 + var_1_14)) ? (var_1_27 == ((double) (var_1_18 + (((((var_1_19) > (var_1_28)) ? (var_1_19) : (var_1_28))) + (var_1_29 + var_1_30))))) : ((var_1_14 <= var_1_57) ? ((var_1_15 <= (var_1_3 + var_1_101)) ? (var_1_27 == ((double) (var_1_28 + var_1_15))) : (var_1_27 == ((double) (var_1_19 - 16.5)))) : 1))) && ((((var_1_10 - var_1_9) / ((((var_1_21) > (var_1_32)) ? (var_1_21) : (var_1_32)))) > last_1_var_1_44) ? (var_1_31 == ((signed char) (var_1_10 - var_1_9))) : 1)) && ((var_1_3 <= ((var_1_5 * var_1_29) * var_1_28)) ? (var_1_33 == ((unsigned char) (! (var_1_24 || var_1_25)))) : ((var_1_93 == (var_1_19 / var_1_17)) ? (var_1_33 == ((unsigned char) ((var_1_14 != var_1_30) && var_1_24))) : (var_1_33 == ((unsigned char) var_1_26))))) && ((((((var_1_10) > (var_1_58)) ? (var_1_10) : (var_1_58))) >= var_1_12) ? (var_1_34 == ((unsigned char) (var_1_24 || (! var_1_26)))) : (var_1_34 == ((unsigned char) ((! var_1_24) && var_1_26))))) && ((var_1_23 && (var_1_52 >= var_1_10)) ? (((var_1_16 * var_1_3) >= var_1_102) ? (var_1_35 == ((unsigned char) (var_1_10 + (var_1_9 + var_1_36)))) : (var_1_35 == ((unsigned char) ((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36)))))) : 1)) && (((last_1_var_1_37 >> var_1_11) <= var_1_32) ? ((var_1_15 == (var_1_4 - var_1_18)) ? ((! (var_1_15 <= var_1_18)) ? (((var_1_3 * (var_1_30 + var_1_92)) == ((var_1_5 + var_1_14) / var_1_17)) ? (var_1_37 == ((unsigned char) (((((var_1_38 - 64)) < (0)) ? ((var_1_38 - 64)) : (0))))) : 1) : (var_1_37 == ((unsigned char) (var_1_9 + var_1_36)))) : (var_1_37 == ((unsigned char) ((((((var_1_39 - var_1_36) + var_1_10)) > (var_1_9)) ? (((var_1_39 - var_1_36) + var_1_10)) : (var_1_9)))))) : (var_1_37 == ((unsigned char) (var_1_9 + var_1_36))))) && (var_1_25 ? (var_1_26 ? (var_1_40 == ((signed short int) (((((((((var_1_56 + -1)) < (var_1_32)) ? ((var_1_56 + -1)) : (var_1_32)))) < (((((var_1_21) < (var_1_86)) ? (var_1_21) : (var_1_86))))) ? ((((((var_1_56 + -1)) < (var_1_32)) ? ((var_1_56 + -1)) : (var_1_32)))) : (((((var_1_21) < (var_1_86)) ? (var_1_21) : (var_1_86)))))))) : 1) : (var_1_40 == ((signed short int) (var_1_89 + var_1_32))))) && (((var_1_11 / var_1_42) == (((((var_1_43) < (2174276204u)) ? (var_1_43) : (2174276204u))) - var_1_10)) ? (var_1_26 ? (var_1_41 == ((signed long int) ((((((var_1_32 + var_1_36)) < (5)) ? ((var_1_32 + var_1_36)) : (5))) + var_1_80))) : ((var_1_90 && var_1_25) ? (var_1_41 == ((signed long int) ((((((((var_1_39) > (var_1_38)) ? (var_1_39) : (var_1_38))) - var_1_9) < 0 ) ? -(((((var_1_39) > (var_1_38)) ? (var_1_39) : (var_1_38))) - var_1_9) : (((((var_1_39) > (var_1_38)) ? (var_1_39) : (var_1_38))) - var_1_9))))) : (var_1_41 == ((signed long int) ((((((((var_1_39) < (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))) ? (var_1_39) : (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))))) < (var_1_9)) ? (((((var_1_39) < (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))) ? (var_1_39) : (((((var_1_80) > (var_1_10)) ? (var_1_80) : (var_1_10))))))) : (var_1_9))))))) : (var_1_23 ? (var_1_41 == ((signed long int) (var_1_80 + (var_1_9 + var_1_12)))) : (var_1_41 == ((signed long int) (var_1_9 - ((((var_1_20) < (128)) ? (var_1_20) : (128))))))))) && ((var_1_14 < var_1_3) ? (var_1_44 == ((unsigned short int) ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) + var_1_9) + var_1_65))) : (var_1_44 == ((unsigned short int) var_1_65)))) && ((var_1_60 >= var_1_80) ? (var_1_45 == ((double) (var_1_17 - (var_1_16 + var_1_19)))) : (var_1_45 == ((double) var_1_29)))) && ((var_1_5 <= (- var_1_17)) ? (((var_1_36 / var_1_42) > var_1_67) ? (var_1_47 == ((signed short int) (((var_1_48 + var_1_49) - ((((var_1_38) > (var_1_44)) ? (var_1_38) : (var_1_44)))) - var_1_67))) : 1) : (var_1_47 == ((signed short int) ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))))) && (((- var_1_70) >= var_1_16) ? (var_1_50 == ((unsigned char) (var_1_34 && ((var_1_84 || var_1_75) && (var_1_85 && var_1_25))))) : 1)) && (last_1_var_1_33 ? ((var_1_14 < (var_1_17 * (0.28f + last_1_var_1_70))) ? (var_1_52 == ((unsigned short int) ((((var_1_36) > (var_1_12)) ? (var_1_36) : (var_1_12))))) : (var_1_52 == ((unsigned short int) ((62232 - last_1_var_1_52) - var_1_36)))) : ((((((last_1_var_1_47) > ((var_1_12 * last_1_var_1_11))) ? (last_1_var_1_47) : ((var_1_12 * last_1_var_1_11)))) > var_1_21) ? (var_1_52 == ((unsigned short int) ((var_1_53 + var_1_54) - (var_1_55 - var_1_38)))) : (var_1_52 == ((unsigned short int) (((((var_1_12) > (64694)) ? (var_1_12) : (64694))) - var_1_39)))))) && ((var_1_55 > var_1_43) ? (var_1_56 == ((signed short int) var_1_32)) : (var_1_56 == ((signed short int) ((((var_1_61) > (var_1_9)) ? (var_1_61) : (var_1_9))))))) && ((var_1_31 >= (var_1_42 + var_1_41)) ? (var_1_57 == ((float) (var_1_19 + (((((var_1_14) < (var_1_16)) ? (var_1_14) : (var_1_16))) - var_1_17)))) : ((var_1_9 < var_1_61) ? (var_1_57 == ((float) (var_1_18 + (var_1_14 - var_1_15)))) : ((((var_1_43 - var_1_10) >> var_1_52) <= var_1_55) ? (var_1_57 == ((float) (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) - var_1_18))) : (var_1_57 == ((float) (((((var_1_16 - var_1_14)) < (((((var_1_15) < ((var_1_18 - var_1_4))) ? (var_1_15) : ((var_1_18 - var_1_4)))))) ? ((var_1_16 - var_1_14)) : (((((var_1_15) < ((var_1_18 - var_1_4))) ? (var_1_15) : ((var_1_18 - var_1_4))))))))))))) && (((((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))) - 200) < (var_1_89 + var_1_36)) ? (((var_1_14 - var_1_19) <= (var_1_29 * (var_1_93 + var_1_18))) ? (var_1_58 == ((signed char) (var_1_10 + ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))) : (var_1_58 == ((signed char) (var_1_36 + (var_1_10 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))))) : 1)) && (var_1_60 == ((signed short int) ((((((var_1_9 - var_1_38) + var_1_86)) < ((var_1_8 + (var_1_67 + -16)))) ? (((var_1_9 - var_1_38) + var_1_86)) : ((var_1_8 + (var_1_67 + -16)))))))) && ((var_1_3 >= (var_1_30 * 256.75)) ? ((var_1_5 <= ((var_1_30 / var_1_17) + var_1_15)) ? (var_1_61 == ((unsigned long int) (((((var_1_62) > (var_1_63)) ? (var_1_62) : (var_1_63))) - var_1_10))) : ((var_1_33 && (0.7 > var_1_4)) ? (var_1_61 == ((unsigned long int) ((((var_1_49) > ((var_1_38 + (var_1_64 - var_1_52)))) ? (var_1_49) : ((var_1_38 + (var_1_64 - var_1_52))))))) : 1)) : ((((var_1_4 - 9.5f) <= var_1_15) || var_1_33) ? ((((~ var_1_53) < var_1_32) || (var_1_9 > var_1_39)) ? (var_1_61 == ((unsigned long int) (var_1_63 - (((((var_1_64 - var_1_49)) > (var_1_31)) ? ((var_1_64 - var_1_49)) : (var_1_31)))))) : (var_1_61 == ((unsigned long int) (var_1_63 - var_1_55)))) : 1))) && ((last_1_var_1_75 && last_1_var_1_23) ? (var_1_65 == ((signed long int) ((((last_1_var_1_44) > (last_1_var_1_87)) ? (last_1_var_1_44) : (last_1_var_1_87))))) : (var_1_65 == ((signed long int) (var_1_32 + ((((last_1_var_1_52) > (last_1_var_1_31)) ? (last_1_var_1_52) : (last_1_var_1_31)))))))) && ((((((last_1_var_1_41) < (var_1_38)) ? (last_1_var_1_41) : (var_1_38))) >= var_1_9) ? ((var_1_32 > (var_1_12 / ((((-1) < (-25)) ? (-1) : (-25))))) ? (var_1_67 == ((unsigned long int) (var_1_62 - var_1_55))) : (((last_1_var_1_67 / ((((var_1_42) < (200u)) ? (var_1_42) : (200u)))) > last_1_var_1_20) ? (var_1_67 == ((unsigned long int) ((((last_1_var_1_31) < 0 ) ? -(last_1_var_1_31) : (last_1_var_1_31))))) : (var_1_67 == ((unsigned long int) var_1_38)))) : (var_1_67 == ((unsigned long int) (var_1_62 - (((((var_1_64) > (var_1_68)) ? (var_1_64) : (var_1_68))) - (var_1_69 - last_1_var_1_94))))))) && ((var_1_23 || var_1_75) ? (var_1_70 == ((double) (((var_1_19 + var_1_18) - var_1_16) + var_1_28))) : (((var_1_10 / var_1_71) < (var_1_67 & var_1_60)) ? (var_1_70 == ((double) ((var_1_19 + var_1_18) + (var_1_72 - var_1_15)))) : (var_1_70 == ((double) (((((var_1_73 - var_1_18) - ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3)))) < 0 ) ? -((var_1_73 - var_1_18) - ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_73 - var_1_18) - ((((var_1_4) > (var_1_3)) ? (var_1_4) : (var_1_3))))))))))) && ((var_1_56 != (- (var_1_12 - var_1_39))) ? (var_1_74 == ((unsigned char) (var_1_9 + var_1_36))) : (var_1_74 == ((unsigned char) ((((((((16) > (var_1_38)) ? (16) : (var_1_38)))) > (var_1_10)) ? (((((16) > (var_1_38)) ? (16) : (var_1_38)))) : (var_1_10))))))) && ((! last_1_var_1_90) ? (((var_1_72 + 0.5f) == var_1_4) ? ((var_1_10 >= last_1_var_1_89) ? (var_1_75 == ((unsigned char) var_1_26)) : 1) : 1) : ((var_1_28 >= (var_1_30 * last_1_var_1_27)) ? (var_1_75 == ((unsigned char) var_1_25)) : (((- last_1_var_1_76) <= ((((last_1_var_1_101) < (var_1_30)) ? (last_1_var_1_101) : (var_1_30)))) ? (var_1_75 == ((unsigned char) (var_1_24 || var_1_25))) : 1)))) && ((((var_1_71 % var_1_55) + 100) != (var_1_36 / ((((var_1_32) > (var_1_48)) ? (var_1_32) : (var_1_48))))) ? ((var_1_94 < (var_1_10 - var_1_52)) ? (var_1_100 ? (var_1_76 == ((float) ((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29))))) : (var_1_76 == ((float) ((((((var_1_18 + var_1_29)) < (var_1_28)) ? ((var_1_18 + var_1_29)) : (var_1_28))) + (var_1_30 + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) : (var_1_76 == ((float) ((((8.5f) < (((((var_1_5) < ((var_1_15 + var_1_14))) ? (var_1_5) : ((var_1_15 + var_1_14)))))) ? (8.5f) : (((((var_1_5) < ((var_1_15 + var_1_14))) ? (var_1_5) : ((var_1_15 + var_1_14)))))))))) : ((var_1_67 <= var_1_9) ? (var_1_76 == ((float) ((((63.8f) > (var_1_17)) ? (63.8f) : (var_1_17))))) : ((var_1_71 >= (- var_1_42)) ? (var_1_76 == ((float) var_1_28)) : 1)))) && ((var_1_65 <= var_1_39) ? (var_1_77 == ((unsigned char) var_1_26)) : (var_1_77 == ((unsigned char) (var_1_26 && var_1_79))))) && ((var_1_35 <= var_1_39) ? (var_1_80 == ((unsigned long int) ((((((1159028602u) < (var_1_64)) ? (1159028602u) : (var_1_64))) + ((((1897264008u) > (var_1_82)) ? (1897264008u) : (var_1_82)))) - ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))))) : (var_1_80 == ((unsigned long int) ((((var_1_87) < (((var_1_83 - var_1_12) - var_1_65))) ? (var_1_87) : (((var_1_83 - var_1_12) - var_1_65)))))))) && ((var_1_9 > var_1_8) ? (var_1_84 == ((unsigned char) (! ((var_1_64 < var_1_69) || (! var_1_24))))) : (var_1_84 == ((unsigned char) (var_1_26 && var_1_24))))) && ((var_1_21 < var_1_49) ? (var_1_85 == ((unsigned char) var_1_26)) : 1)) && (var_1_86 == ((unsigned short int) (var_1_36 + var_1_39)))) && ((var_1_55 < var_1_43) ? (var_1_87 == ((signed short int) (var_1_21 + var_1_94))) : (var_1_87 == ((signed short int) var_1_52)))) && (var_1_85 ? (var_1_88 == ((signed short int) var_1_99)) : (var_1_88 == ((signed short int) var_1_49)))) && (var_1_89 == ((unsigned char) var_1_9))) && (var_1_90 == ((unsigned char) var_1_24))) && (var_1_90 ? (var_1_91 == ((double) var_1_73)) : (var_1_91 == ((double) var_1_29)))) && (var_1_90 ? (var_1_92 == ((float) var_1_73)) : (var_1_92 == ((float) var_1_17)))) && (var_1_24 ? (var_1_93 == ((float) var_1_28)) : (var_1_93 == ((float) var_1_29)))) && (var_1_79 ? (var_1_94 == ((unsigned long int) var_1_10)) : (var_1_94 == ((unsigned long int) 8u)))) && (var_1_33 ? (var_1_95 == ((unsigned short int) last_1_var_1_95)) : (var_1_95 == ((unsigned short int) var_1_48)))) && (var_1_33 ? (var_1_96 == ((double) var_1_29)) : (var_1_96 == ((double) var_1_97)))) && (var_1_98 == ((double) var_1_3))) && (var_1_99 == ((signed char) var_1_36))) && (var_1_34 ? (var_1_100 == ((unsigned char) var_1_26)) : 1)) && (var_1_85 ? (var_1_101 == ((double) var_1_3)) : 1)) && (((var_1_40 * (var_1_89 + var_1_74)) == var_1_82) ? (var_1_24 ? ((64u == var_1_68) ? (var_1_102 == ((float) (var_1_15 + ((((var_1_17) > (var_1_29)) ? (var_1_17) : (var_1_29)))))) : (var_1_102 == ((float) var_1_28))) : 1) : 1)
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
