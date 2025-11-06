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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 200;
signed char var_1_2 = 64;
signed short int var_1_3 = 5;
signed short int var_1_4 = 2;
float var_1_6 = 15.125;
float var_1_7 = 4.75;
float var_1_8 = 64.5;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
signed long int var_1_12 = -2;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed long int var_1_17 = -2;
signed long int var_1_18 = 2076576875;
unsigned long int var_1_19 = 0;
signed long int var_1_20 = 4;
unsigned long int var_1_21 = 1;
unsigned long int var_1_22 = 3420669016;
signed char var_1_23 = -5;
signed long int var_1_24 = -200;
signed long int var_1_26 = 1951770522;
unsigned char var_1_27 = 100;
unsigned char var_1_28 = 100;
double var_1_29 = 100000000000000.5;
double var_1_30 = 255.75;
double var_1_31 = 0.0;
double var_1_32 = 49.92;
unsigned char var_1_33 = 16;
double var_1_34 = 2.2;
double var_1_35 = 128.5;
signed char var_1_36 = -128;
unsigned char var_1_37 = 0;
float var_1_38 = 32.5;
signed short int var_1_39 = 32;
signed short int var_1_40 = 32;
signed long int var_1_41 = -100;
double var_1_42 = 0.0;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 8;
unsigned char var_1_46 = 1;
unsigned long int var_1_47 = 64;
unsigned short int var_1_48 = 256;
signed char var_1_49 = 1;
signed char var_1_50 = 5;
signed char var_1_51 = -10;
unsigned char var_1_52 = 16;
signed long int var_1_53 = -128;
signed short int var_1_54 = 2;
signed long int var_1_55 = 256;
signed long int var_1_56 = 5;
unsigned long int var_1_57 = 64;
unsigned char var_1_58 = 1;
unsigned long int var_1_59 = 8;
unsigned short int var_1_60 = 49612;
signed char var_1_61 = -64;
signed char var_1_62 = -8;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 2;
unsigned char var_1_65 = 200;
unsigned char var_1_66 = 128;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 0;
signed char var_1_70 = 4;
float var_1_71 = 16.5;
float var_1_72 = 128.5;
float var_1_73 = 63.6;
unsigned long int var_1_74 = 100;
unsigned long int var_1_75 = 16;
float var_1_76 = 31.75;
float var_1_77 = 0.9;
signed char var_1_78 = 10;
signed char var_1_79 = -4;
signed short int var_1_80 = 5;
signed short int var_1_81 = 29253;
unsigned long int var_1_82 = 8;
unsigned long int var_1_83 = 2;
unsigned long int var_1_84 = 25;
signed long int var_1_85 = 8;
unsigned char var_1_86 = 0;
float var_1_87 = 128.75;
unsigned long int var_1_88 = 100;
signed long int var_1_90 = 8;
unsigned short int var_1_91 = 64;
signed long int var_1_92 = 128;
signed short int var_1_93 = -5;
unsigned short int var_1_94 = 4;
signed short int var_1_95 = -100;
signed char var_1_96 = 5;
unsigned long int var_1_97 = 25;
signed long int last_1_var_1_12 = -2;
unsigned long int last_1_var_1_19 = 0;
signed long int last_1_var_1_24 = -200;
signed short int last_1_var_1_39 = 32;
signed long int last_1_var_1_41 = -100;
unsigned short int last_1_var_1_48 = 256;
signed char last_1_var_1_50 = 5;
signed long int last_1_var_1_53 = -128;
signed short int last_1_var_1_54 = 2;
signed long int last_1_var_1_55 = 256;
signed char last_1_var_1_61 = -64;
unsigned char last_1_var_1_63 = 1;
unsigned char last_1_var_1_64 = 2;
unsigned char last_1_var_1_65 = 200;
unsigned char last_1_var_1_67 = 1;
unsigned char last_1_var_1_69 = 0;
unsigned long int last_1_var_1_74 = 100;
signed short int last_1_var_1_80 = 5;
signed long int last_1_var_1_85 = 8;
signed long int last_1_var_1_90 = 8;
unsigned short int last_1_var_1_94 = 4;
unsigned long int last_1_var_1_97 = 25;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_9 = last_1_var_1_61;
 if (var_1_35 <= var_1_31) {
  if (var_1_26 >= stepLocal_9) {
   var_1_37 = ((var_1_28 < 64) || var_1_14);
  } else {
   var_1_37 = (! ((var_1_35 >= 1.3199999999999998) || var_1_14));
  }
 }
 unsigned char stepLocal_12 = var_1_37;
 if ((var_1_14 && var_1_15) && stepLocal_12) {
  var_1_46 = var_1_44;
 }
 if (var_1_18 > last_1_var_1_90) {
  var_1_54 = (var_1_52 + last_1_var_1_94);
 } else {
  if ((last_1_var_1_39 * (var_1_3 / var_1_11)) < last_1_var_1_94) {
   var_1_54 = ((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54)));
  }
 }
 if (last_1_var_1_63) {
  var_1_94 = var_1_10;
 } else {
  var_1_94 = last_1_var_1_48;
 }
 if (var_1_8 >= var_1_42) {
  var_1_45 = (var_1_54 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))));
 }
 unsigned long int stepLocal_29 = var_1_83;
 signed long int stepLocal_28 = last_1_var_1_50;
 if (stepLocal_29 == last_1_var_1_55) {
  var_1_97 = (var_1_28 + (var_1_11 + (var_1_40 + var_1_3)));
 } else {
  if (stepLocal_28 < last_1_var_1_19) {
   var_1_97 = (((((var_1_22 - last_1_var_1_53)) < (var_1_83)) ? ((var_1_22 - last_1_var_1_53)) : (var_1_83)));
  } else {
   var_1_97 = 256u;
  }
 }
 var_1_57 = ((((64u) > (var_1_97)) ? (64u) : (var_1_97)));
 signed long int stepLocal_17 = last_1_var_1_64;
 signed long int stepLocal_16 = var_1_18 >> var_1_52;
 if (stepLocal_16 == (var_1_4 - var_1_11)) {
  if (stepLocal_17 <= last_1_var_1_24) {
   var_1_59 = ((((last_1_var_1_41) < (var_1_22)) ? (last_1_var_1_41) : (var_1_22)));
  } else {
   var_1_59 = var_1_26;
  }
 } else {
  var_1_59 = (((((var_1_22 - var_1_10)) < ((var_1_60 + var_1_28))) ? ((var_1_22 - var_1_10)) : ((var_1_60 + var_1_28))));
 }
 unsigned long int stepLocal_0 = last_1_var_1_74;
 if ((((((8) < (var_1_2)) ? (8) : (var_1_2))) << ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) <= stepLocal_0) {
  if (99.7f >= ((var_1_6 - var_1_7) / var_1_8)) {
   var_1_1 = (var_1_2 + var_1_3);
  }
 } else {
  if (! last_1_var_1_69) {
   var_1_1 = ((64 + var_1_10) - (var_1_11 - var_1_4));
  }
 }
 if (var_1_68) {
  var_1_90 = var_1_1;
 }
 var_1_55 = ((((((((var_1_56) > (var_1_10)) ? (var_1_56) : (var_1_10))) - var_1_90) < 0 ) ? -(((((var_1_56) > (var_1_10)) ? (var_1_56) : (var_1_10))) - var_1_90) : (((((var_1_56) > (var_1_10)) ? (var_1_56) : (var_1_10))) - var_1_90)));
 unsigned long int stepLocal_25 = last_1_var_1_97;
 if (stepLocal_25 >= last_1_var_1_65) {
  var_1_75 = var_1_40;
 } else {
  var_1_75 = var_1_56;
 }
 if (var_1_16) {
  var_1_41 = ((((last_1_var_1_48) < (1000000000)) ? (last_1_var_1_48) : (1000000000)));
 } else {
  if (((31.4 - var_1_6) / var_1_8) >= (var_1_30 - (var_1_42 - var_1_32))) {
   if (last_1_var_1_69) {
    var_1_41 = (var_1_28 - (((((var_1_26 - var_1_11)) < (var_1_2)) ? ((var_1_26 - var_1_11)) : (var_1_2))));
   }
  } else {
   var_1_41 = (var_1_3 + last_1_var_1_94);
  }
 }
 if (var_1_6 >= ((((1.25f) > (var_1_7)) ? (1.25f) : (var_1_7)))) {
  var_1_12 = ((((var_1_2) < ((var_1_3 - (var_1_10 + last_1_var_1_12)))) ? (var_1_2) : ((var_1_3 - (var_1_10 + last_1_var_1_12)))));
 } else {
  var_1_12 = var_1_3;
 }
 if (var_1_8 > var_1_7) {
  var_1_13 = (var_1_14 && var_1_15);
 } else {
  var_1_13 = ((! var_1_16) && var_1_15);
 }
 signed long int stepLocal_1 = var_1_10 / var_1_11;
 if (stepLocal_1 > ((var_1_18 - var_1_3) - var_1_45)) {
  var_1_17 = var_1_3;
 }
 if (var_1_2 == var_1_18) {
  var_1_21 = var_1_3;
 } else {
  var_1_21 = (var_1_22 - var_1_2);
 }
 var_1_23 = (var_1_4 + var_1_3);
 if (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))) <= var_1_8) {
  var_1_29 = (var_1_30 - (var_1_31 - (3.325366097017101E18 - var_1_32)));
 }
 var_1_38 = ((((var_1_31) < (1.00000005E7f)) ? (var_1_31) : (1.00000005E7f)));
 if (! ((10000 * var_1_3) == (var_1_40 << var_1_12))) {
  var_1_50 = (16 - ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))));
 }
 signed long int stepLocal_15 = var_1_18;
 unsigned char stepLocal_14 = var_1_44;
 if (var_1_15 || stepLocal_14) {
  if ((var_1_26 >> var_1_52) <= stepLocal_15) {
   var_1_51 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 }
 if ((199.7f / var_1_42) != ((var_1_6 + var_1_38) / ((((10.25) < (var_1_35)) ? (10.25) : (var_1_35))))) {
  var_1_58 = (! (var_1_44 || (! var_1_14)));
 }
 if (var_1_29 <= (1.000000007E8 / var_1_34)) {
  if (-256 <= var_1_11) {
   var_1_64 = (var_1_11 + var_1_28);
  }
 }
 signed long int stepLocal_21 = var_1_55;
 if (var_1_97 < stepLocal_21) {
  var_1_70 = ((((var_1_62) > (var_1_52)) ? (var_1_62) : (var_1_52)));
 }
 if (var_1_72 > var_1_7) {
  var_1_76 = (var_1_32 - var_1_77);
 } else {
  var_1_76 = ((((((((var_1_30) < (999.3f)) ? (var_1_30) : (999.3f)))) > (var_1_32)) ? (((((var_1_30) < (999.3f)) ? (var_1_30) : (999.3f)))) : (var_1_32)));
 }
 if (var_1_16) {
  var_1_86 = var_1_15;
 }
 var_1_87 = var_1_30;
 var_1_91 = var_1_52;
 var_1_92 = 32;
 if (var_1_68) {
  var_1_93 = var_1_94;
 } else {
  var_1_93 = 1;
 }
 if (var_1_15) {
  var_1_95 = var_1_66;
 }
 unsigned char stepLocal_18 = var_1_86;
 if (stepLocal_18 || var_1_46) {
  var_1_61 = ((((var_1_4) > (var_1_52)) ? (var_1_4) : (var_1_52)));
 } else {
  var_1_61 = (((((((((var_1_4 - var_1_52)) > (var_1_3)) ? ((var_1_4 - var_1_52)) : (var_1_3)))) > (var_1_62)) ? ((((((var_1_4 - var_1_52)) > (var_1_3)) ? ((var_1_4 - var_1_52)) : (var_1_3)))) : (var_1_62)));
 }
 if (5 >= var_1_57) {
  var_1_20 = ((var_1_10 - var_1_11) + 25);
 }
 var_1_74 = (var_1_75 + var_1_97);
 unsigned long int stepLocal_8 = (((-16) < (var_1_75)) ? (-16) : (var_1_75));
 if (stepLocal_8 < ((var_1_22 - var_1_41) * var_1_59)) {
  var_1_27 = ((var_1_10 + (var_1_28 - var_1_4)) - var_1_11);
 } else {
  var_1_27 = var_1_28;
 }
 if (! ((var_1_40 * var_1_90) > (var_1_41 % var_1_18))) {
  var_1_69 = (var_1_16 || var_1_44);
 } else {
  var_1_69 = (! (var_1_44 || var_1_16));
 }
 if (var_1_58) {
  var_1_43 = (var_1_16 || var_1_44);
 } else {
  var_1_43 = ((! var_1_16) && (var_1_69 || var_1_14));
 }
 if (! ((var_1_35 + var_1_34) >= var_1_30)) {
  var_1_63 = (var_1_16 || ((! var_1_43) && var_1_44));
 }
 unsigned char stepLocal_26 = var_1_86;
 if (stepLocal_26 && (((((var_1_2) < (last_1_var_1_80)) ? (var_1_2) : (last_1_var_1_80))) > var_1_12)) {
  var_1_80 = last_1_var_1_80;
 } else {
  if (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))) <= var_1_29) {
   var_1_80 = (var_1_3 - (var_1_81 - var_1_41));
  } else {
   var_1_80 = ((((var_1_52) > ((var_1_66 - var_1_1))) ? (var_1_52) : ((var_1_66 - var_1_1))));
  }
 }
 unsigned long int stepLocal_27 = 10u;
 if (var_1_86) {
  if (var_1_75 > stepLocal_27) {
   var_1_82 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
  } else {
   var_1_82 = ((((var_1_83) > ((var_1_40 + var_1_84))) ? (var_1_83) : ((var_1_40 + var_1_84))));
  }
 } else {
  var_1_82 = ((((100000000u) > (var_1_11)) ? (100000000u) : (var_1_11)));
 }
 if (var_1_44 || var_1_58) {
  if (var_1_14) {
   var_1_47 = ((((((((var_1_75) < (var_1_41)) ? (var_1_75) : (var_1_41)))) < (((((var_1_3 + var_1_2) < 0 ) ? -(var_1_3 + var_1_2) : (var_1_3 + var_1_2))))) ? (((((var_1_75) < (var_1_41)) ? (var_1_75) : (var_1_41)))) : (((((var_1_3 + var_1_2) < 0 ) ? -(var_1_3 + var_1_2) : (var_1_3 + var_1_2))))));
  }
 }
 if (var_1_86) {
  if (var_1_14) {
   var_1_33 = var_1_11;
  } else {
   if (((var_1_8 / var_1_31) / ((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35)))) <= var_1_29) {
    var_1_33 = var_1_10;
   } else {
    var_1_33 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
   }
  }
 } else {
  var_1_33 = ((((var_1_28) > (var_1_3)) ? (var_1_28) : (var_1_3)));
 }
 if ((- var_1_20) == var_1_52) {
  if (var_1_16 && (var_1_91 != var_1_17)) {
   var_1_78 = (((((var_1_52 + 32)) < ((var_1_4 - var_1_3))) ? ((var_1_52 + 32)) : ((var_1_4 - var_1_3))));
  }
 } else {
  var_1_78 = (((((var_1_79 + var_1_3)) < ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) + 1))) ? ((var_1_79 + var_1_3)) : ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) + 1))));
 }
 if (var_1_63) {
  var_1_96 = var_1_79;
 } else {
  var_1_96 = var_1_62;
 }
 unsigned char stepLocal_11 = var_1_46;
 signed long int stepLocal_10 = var_1_92 + (var_1_20 * -50);
 if (var_1_16 && stepLocal_11) {
  if (stepLocal_10 < (var_1_59 * (var_1_10 - var_1_21))) {
   var_1_39 = (((var_1_3 - var_1_55) + var_1_21) + (var_1_28 - var_1_40));
  } else {
   var_1_39 = ((((var_1_54) < ((((((var_1_10) < (var_1_4)) ? (var_1_10) : (var_1_4))) - var_1_2))) ? (var_1_54) : ((((((var_1_10) < (var_1_4)) ? (var_1_10) : (var_1_4))) - var_1_2))));
  }
 }
 if (last_1_var_1_67) {
  var_1_67 = (((var_1_1 * var_1_41) < (var_1_94 * var_1_20)) || (! var_1_16));
 } else {
  var_1_67 = (! ((var_1_15 || var_1_14) && var_1_68));
 }
 unsigned char stepLocal_4 = var_1_15;
 unsigned char stepLocal_3 = var_1_86;
 signed long int stepLocal_2 = 100000;
 if (stepLocal_4 || var_1_14) {
  if (var_1_15) {
   if (stepLocal_3 || (0 < ((((var_1_11) < (var_1_82)) ? (var_1_11) : (var_1_82))))) {
    var_1_19 = (var_1_90 + var_1_10);
   } else {
    if ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + 8) <= stepLocal_2) {
     var_1_19 = var_1_3;
    } else {
     var_1_19 = var_1_11;
    }
   }
  } else {
   var_1_19 = var_1_2;
  }
 } else {
  var_1_19 = var_1_90;
 }
 if (var_1_67) {
  var_1_88 = var_1_54;
 } else {
  var_1_88 = var_1_4;
 }
 signed long int stepLocal_7 = var_1_18;
 unsigned char stepLocal_6 = var_1_18 <= var_1_59;
 signed long int stepLocal_5 = ((((var_1_10) < (var_1_3)) ? (var_1_10) : (var_1_3))) << var_1_88;
 if (stepLocal_5 != last_1_var_1_24) {
  if (var_1_14) {
   var_1_24 = (((((var_1_39 - 4)) > (var_1_2)) ? ((var_1_39 - 4)) : (var_1_2)));
  } else {
   var_1_24 = (var_1_3 - ((((var_1_11) < (4)) ? (var_1_11) : (4))));
  }
 } else {
  if ((-5 < var_1_3) || stepLocal_6) {
   var_1_24 = (10 - var_1_39);
  } else {
   if (last_1_var_1_24 <= stepLocal_7) {
    var_1_24 = ((((var_1_39) < ((var_1_11 - (var_1_26 - 10)))) ? (var_1_39) : ((var_1_11 - (var_1_26 - 10)))));
   } else {
    var_1_24 = (((((((((var_1_11) < (var_1_3)) ? (var_1_11) : (var_1_3)))) > (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))))) ? (((((var_1_11) < (var_1_3)) ? (var_1_11) : (var_1_3)))) : (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))))) + ((((((((-5) < 0 ) ? -(-5) : (-5)))) < (var_1_88)) ? (((((-5) < 0 ) ? -(-5) : (-5)))) : (var_1_88))));
   }
  }
 }
 if (var_1_68) {
  var_1_85 = (((((last_1_var_1_85 + var_1_45) < 0 ) ? -(last_1_var_1_85 + var_1_45) : (last_1_var_1_85 + var_1_45))) + (4 + var_1_80));
 } else {
  if ((var_1_82 + var_1_52) < ((var_1_10 + var_1_74) % var_1_18)) {
   var_1_85 = ((((var_1_10) < (((((var_1_61) > (var_1_94)) ? (var_1_61) : (var_1_94))))) ? (var_1_10) : (((((var_1_61) > (var_1_94)) ? (var_1_61) : (var_1_94))))));
  } else {
   if (var_1_14) {
    if (var_1_46) {
     var_1_85 = ((var_1_26 - var_1_59) - 256);
    } else {
     var_1_85 = (var_1_45 + var_1_52);
    }
   } else {
    if (var_1_58 && var_1_16) {
     var_1_85 = (-5 + (var_1_59 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))));
    } else {
     var_1_85 = (((((last_1_var_1_85) < (128)) ? (last_1_var_1_85) : (128))) - var_1_45);
    }
   }
  }
 }
 signed long int stepLocal_24 = var_1_24;
 unsigned long int stepLocal_23 = var_1_47;
 unsigned char stepLocal_22 = var_1_69;
 if (stepLocal_24 > (~ var_1_24)) {
  if (var_1_86 || stepLocal_22) {
   if (5 <= stepLocal_23) {
    var_1_71 = (((((var_1_32) > (((((31.75f) < 0 ) ? -(31.75f) : (31.75f))))) ? (var_1_32) : (((((31.75f) < 0 ) ? -(31.75f) : (31.75f)))))) + ((((var_1_72) > (var_1_73)) ? (var_1_72) : (var_1_73))));
   } else {
    var_1_71 = ((((((((var_1_30) < (255.5f)) ? (var_1_30) : (255.5f)))) < (var_1_72)) ? (((((var_1_30) < (255.5f)) ? (var_1_30) : (255.5f)))) : (var_1_72)));
   }
  }
 } else {
  var_1_71 = var_1_31;
 }
 unsigned char stepLocal_20 = var_1_14;
 unsigned long int stepLocal_19 = var_1_21;
 if (stepLocal_20 || var_1_44) {
  if (! (var_1_85 != var_1_2)) {
   if (stepLocal_19 <= var_1_2) {
    if (((var_1_38 * 2.75) * var_1_34) >= ((var_1_6 - var_1_7) / var_1_42)) {
     var_1_65 = (var_1_66 - ((var_1_3 + 16) + var_1_52));
    }
   }
  } else {
   var_1_65 = var_1_11;
  }
 }
 signed long int stepLocal_13 = var_1_26;
 if (! var_1_14) {
  if (((var_1_49 - 4) * var_1_97) <= stepLocal_13) {
   var_1_48 = var_1_4;
  } else {
   if (var_1_69) {
    var_1_48 = ((((64) < (var_1_10)) ? (64) : (var_1_10)));
   } else {
    var_1_48 = var_1_65;
   }
  }
 } else {
  var_1_48 = (((((((var_1_65) > (var_1_4)) ? (var_1_65) : (var_1_4))) < 0 ) ? -((((var_1_65) > (var_1_4)) ? (var_1_65) : (var_1_4))) : ((((var_1_65) > (var_1_4)) ? (var_1_65) : (var_1_4)))));
 }
 if ((var_1_1 / ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))) >= -8) {
  if (! var_1_15) {
   var_1_53 = ((((var_1_26) < (var_1_47)) ? (var_1_26) : (var_1_47)));
  } else {
   if (var_1_8 >= var_1_42) {
    if (var_1_49 > var_1_48) {
     var_1_53 = (var_1_48 + var_1_3);
    } else {
     var_1_53 = (((((((((var_1_28) > (var_1_26)) ? (var_1_28) : (var_1_26))) - var_1_27)) > (var_1_64)) ? ((((((var_1_28) > (var_1_26)) ? (var_1_28) : (var_1_26))) - var_1_27)) : (var_1_64)));
    }
   } else {
    if (var_1_15) {
     var_1_53 = ((var_1_75 - 32) + ((((var_1_3) > (var_1_11)) ? (var_1_3) : (var_1_11))));
    } else {
     if (var_1_44) {
      var_1_53 = (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))) - (((((1258881043 - var_1_27)) > (var_1_4)) ? ((1258881043 - var_1_27)) : (var_1_4))));
     }
    }
   }
  }
 }
 if (var_1_53 < ((((((((var_1_26) < (var_1_11)) ? (var_1_26) : (var_1_11)))) > (var_1_10)) ? (((((var_1_26) < (var_1_11)) ? (var_1_26) : (var_1_11)))) : (var_1_10)))) {
  var_1_36 = (1 - (64 - var_1_3));
 } else {
  var_1_36 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 27);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 27);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 64);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= 1073741823);
 assume_abort_if_not(var_1_26 <= 2147483646);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 95);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 assume_abort_if_not(var_1_35 != 0.0F);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 4611686.018427388000e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -1);
 assume_abort_if_not(var_1_49 <= 127);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 30);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 2147483646);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 32767);
 assume_abort_if_not(var_1_60 <= 65535);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -127);
 assume_abort_if_not(var_1_62 <= 126);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 127);
 assume_abort_if_not(var_1_66 <= 254);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 1);
 assume_abort_if_not(var_1_68 <= 1);
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= -461168.6018427383000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_73 >= -461168.6018427383000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854766000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= -63);
 assume_abort_if_not(var_1_79 <= 63);
 var_1_81 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_81 >= 16383);
 assume_abort_if_not(var_1_81 <= 32766);
 var_1_83 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 4294967294);
 var_1_84 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_84 >= 0);
 assume_abort_if_not(var_1_84 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_97 = var_1_97;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((8) < (var_1_2)) ? (8) : (var_1_2))) << ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) <= last_1_var_1_74) ? ((99.7f >= ((var_1_6 - var_1_7) / var_1_8)) ? (var_1_1 == ((unsigned char) (var_1_2 + var_1_3))) : 1) : ((! last_1_var_1_69) ? (var_1_1 == ((unsigned char) ((64 + var_1_10) - (var_1_11 - var_1_4)))) : 1)) && ((var_1_6 >= ((((1.25f) > (var_1_7)) ? (1.25f) : (var_1_7)))) ? (var_1_12 == ((signed long int) ((((var_1_2) < ((var_1_3 - (var_1_10 + last_1_var_1_12)))) ? (var_1_2) : ((var_1_3 - (var_1_10 + last_1_var_1_12))))))) : (var_1_12 == ((signed long int) var_1_3)))) && ((var_1_8 > var_1_7) ? (var_1_13 == ((unsigned char) (var_1_14 && var_1_15))) : (var_1_13 == ((unsigned char) ((! var_1_16) && var_1_15))))) && (((var_1_10 / var_1_11) > ((var_1_18 - var_1_3) - var_1_45)) ? (var_1_17 == ((signed long int) var_1_3)) : 1)) && ((var_1_15 || var_1_14) ? (var_1_15 ? ((var_1_86 || (0 < ((((var_1_11) < (var_1_82)) ? (var_1_11) : (var_1_82))))) ? (var_1_19 == ((unsigned long int) (var_1_90 + var_1_10))) : (((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + 8) <= 100000) ? (var_1_19 == ((unsigned long int) var_1_3)) : (var_1_19 == ((unsigned long int) var_1_11)))) : (var_1_19 == ((unsigned long int) var_1_2))) : (var_1_19 == ((unsigned long int) var_1_90)))) && ((5 >= var_1_57) ? (var_1_20 == ((signed long int) ((var_1_10 - var_1_11) + 25))) : 1)) && ((var_1_2 == var_1_18) ? (var_1_21 == ((unsigned long int) var_1_3)) : (var_1_21 == ((unsigned long int) (var_1_22 - var_1_2))))) && (var_1_23 == ((signed char) (var_1_4 + var_1_3)))) && (((((((var_1_10) < (var_1_3)) ? (var_1_10) : (var_1_3))) << var_1_88) != last_1_var_1_24) ? (var_1_14 ? (var_1_24 == ((signed long int) (((((var_1_39 - 4)) > (var_1_2)) ? ((var_1_39 - 4)) : (var_1_2))))) : (var_1_24 == ((signed long int) (var_1_3 - ((((var_1_11) < (4)) ? (var_1_11) : (4))))))) : (((-5 < var_1_3) || (var_1_18 <= var_1_59)) ? (var_1_24 == ((signed long int) (10 - var_1_39))) : ((last_1_var_1_24 <= var_1_18) ? (var_1_24 == ((signed long int) ((((var_1_39) < ((var_1_11 - (var_1_26 - 10)))) ? (var_1_39) : ((var_1_11 - (var_1_26 - 10))))))) : (var_1_24 == ((signed long int) (((((((((var_1_11) < (var_1_3)) ? (var_1_11) : (var_1_3)))) > (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))))) ? (((((var_1_11) < (var_1_3)) ? (var_1_11) : (var_1_3)))) : (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))))) + ((((((((-5) < 0 ) ? -(-5) : (-5)))) < (var_1_88)) ? (((((-5) < 0 ) ? -(-5) : (-5)))) : (var_1_88)))))))))) && ((((((-16) < (var_1_75)) ? (-16) : (var_1_75))) < ((var_1_22 - var_1_41) * var_1_59)) ? (var_1_27 == ((unsigned char) ((var_1_10 + (var_1_28 - var_1_4)) - var_1_11))) : (var_1_27 == ((unsigned char) var_1_28)))) && ((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))) <= var_1_8) ? (var_1_29 == ((double) (var_1_30 - (var_1_31 - (3.325366097017101E18 - var_1_32))))) : 1)) && (var_1_86 ? (var_1_14 ? (var_1_33 == ((unsigned char) var_1_11)) : ((((var_1_8 / var_1_31) / ((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35)))) <= var_1_29) ? (var_1_33 == ((unsigned char) var_1_10)) : (var_1_33 == ((unsigned char) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))) : (var_1_33 == ((unsigned char) ((((var_1_28) > (var_1_3)) ? (var_1_28) : (var_1_3))))))) && ((var_1_53 < ((((((((var_1_26) < (var_1_11)) ? (var_1_26) : (var_1_11)))) > (var_1_10)) ? (((((var_1_26) < (var_1_11)) ? (var_1_26) : (var_1_11)))) : (var_1_10)))) ? (var_1_36 == ((signed char) (1 - (64 - var_1_3)))) : (var_1_36 == ((signed char) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))))) && ((var_1_35 <= var_1_31) ? ((var_1_26 >= last_1_var_1_61) ? (var_1_37 == ((unsigned char) ((var_1_28 < 64) || var_1_14))) : (var_1_37 == ((unsigned char) (! ((var_1_35 >= 1.3199999999999998) || var_1_14))))) : 1)) && (var_1_38 == ((float) ((((var_1_31) < (1.00000005E7f)) ? (var_1_31) : (1.00000005E7f)))))) && ((var_1_16 && var_1_46) ? (((var_1_92 + (var_1_20 * -50)) < (var_1_59 * (var_1_10 - var_1_21))) ? (var_1_39 == ((signed short int) (((var_1_3 - var_1_55) + var_1_21) + (var_1_28 - var_1_40)))) : (var_1_39 == ((signed short int) ((((var_1_54) < ((((((var_1_10) < (var_1_4)) ? (var_1_10) : (var_1_4))) - var_1_2))) ? (var_1_54) : ((((((var_1_10) < (var_1_4)) ? (var_1_10) : (var_1_4))) - var_1_2))))))) : 1)) && (var_1_16 ? (var_1_41 == ((signed long int) ((((last_1_var_1_48) < (1000000000)) ? (last_1_var_1_48) : (1000000000))))) : ((((31.4 - var_1_6) / var_1_8) >= (var_1_30 - (var_1_42 - var_1_32))) ? (last_1_var_1_69 ? (var_1_41 == ((signed long int) (var_1_28 - (((((var_1_26 - var_1_11)) < (var_1_2)) ? ((var_1_26 - var_1_11)) : (var_1_2)))))) : 1) : (var_1_41 == ((signed long int) (var_1_3 + last_1_var_1_94)))))) && (var_1_58 ? (var_1_43 == ((unsigned char) (var_1_16 || var_1_44))) : (var_1_43 == ((unsigned char) ((! var_1_16) && (var_1_69 || var_1_14)))))) && ((var_1_8 >= var_1_42) ? (var_1_45 == ((unsigned short int) (var_1_54 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) : 1)) && (((var_1_14 && var_1_15) && var_1_37) ? (var_1_46 == ((unsigned char) var_1_44)) : 1)) && ((var_1_44 || var_1_58) ? (var_1_14 ? (var_1_47 == ((unsigned long int) ((((((((var_1_75) < (var_1_41)) ? (var_1_75) : (var_1_41)))) < (((((var_1_3 + var_1_2) < 0 ) ? -(var_1_3 + var_1_2) : (var_1_3 + var_1_2))))) ? (((((var_1_75) < (var_1_41)) ? (var_1_75) : (var_1_41)))) : (((((var_1_3 + var_1_2) < 0 ) ? -(var_1_3 + var_1_2) : (var_1_3 + var_1_2)))))))) : 1) : 1)) && ((! var_1_14) ? ((((var_1_49 - 4) * var_1_97) <= var_1_26) ? (var_1_48 == ((unsigned short int) var_1_4)) : (var_1_69 ? (var_1_48 == ((unsigned short int) ((((64) < (var_1_10)) ? (64) : (var_1_10))))) : (var_1_48 == ((unsigned short int) var_1_65)))) : (var_1_48 == ((unsigned short int) (((((((var_1_65) > (var_1_4)) ? (var_1_65) : (var_1_4))) < 0 ) ? -((((var_1_65) > (var_1_4)) ? (var_1_65) : (var_1_4))) : ((((var_1_65) > (var_1_4)) ? (var_1_65) : (var_1_4))))))))) && ((! ((10000 * var_1_3) == (var_1_40 << var_1_12))) ? (var_1_50 == ((signed char) (16 - ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))))) : 1)) && ((var_1_15 || var_1_44) ? (((var_1_26 >> var_1_52) <= var_1_18) ? (var_1_51 == ((signed char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1) : 1)) && (((var_1_1 / ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))) >= -8) ? ((! var_1_15) ? (var_1_53 == ((signed long int) ((((var_1_26) < (var_1_47)) ? (var_1_26) : (var_1_47))))) : ((var_1_8 >= var_1_42) ? ((var_1_49 > var_1_48) ? (var_1_53 == ((signed long int) (var_1_48 + var_1_3))) : (var_1_53 == ((signed long int) (((((((((var_1_28) > (var_1_26)) ? (var_1_28) : (var_1_26))) - var_1_27)) > (var_1_64)) ? ((((((var_1_28) > (var_1_26)) ? (var_1_28) : (var_1_26))) - var_1_27)) : (var_1_64)))))) : (var_1_15 ? (var_1_53 == ((signed long int) ((var_1_75 - 32) + ((((var_1_3) > (var_1_11)) ? (var_1_3) : (var_1_11)))))) : (var_1_44 ? (var_1_53 == ((signed long int) (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))) - (((((1258881043 - var_1_27)) > (var_1_4)) ? ((1258881043 - var_1_27)) : (var_1_4)))))) : 1)))) : 1)) && ((var_1_18 > last_1_var_1_90) ? (var_1_54 == ((signed short int) (var_1_52 + last_1_var_1_94))) : (((last_1_var_1_39 * (var_1_3 / var_1_11)) < last_1_var_1_94) ? (var_1_54 == ((signed short int) ((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))) : 1))) && (var_1_55 == ((signed long int) ((((((((var_1_56) > (var_1_10)) ? (var_1_56) : (var_1_10))) - var_1_90) < 0 ) ? -(((((var_1_56) > (var_1_10)) ? (var_1_56) : (var_1_10))) - var_1_90) : (((((var_1_56) > (var_1_10)) ? (var_1_56) : (var_1_10))) - var_1_90)))))) && (var_1_57 == ((unsigned long int) ((((64u) > (var_1_97)) ? (64u) : (var_1_97)))))) && (((199.7f / var_1_42) != ((var_1_6 + var_1_38) / ((((10.25) < (var_1_35)) ? (10.25) : (var_1_35))))) ? (var_1_58 == ((unsigned char) (! (var_1_44 || (! var_1_14))))) : 1)) && (((var_1_18 >> var_1_52) == (var_1_4 - var_1_11)) ? ((last_1_var_1_64 <= last_1_var_1_24) ? (var_1_59 == ((unsigned long int) ((((last_1_var_1_41) < (var_1_22)) ? (last_1_var_1_41) : (var_1_22))))) : (var_1_59 == ((unsigned long int) var_1_26))) : (var_1_59 == ((unsigned long int) (((((var_1_22 - var_1_10)) < ((var_1_60 + var_1_28))) ? ((var_1_22 - var_1_10)) : ((var_1_60 + var_1_28)))))))) && ((var_1_86 || var_1_46) ? (var_1_61 == ((signed char) ((((var_1_4) > (var_1_52)) ? (var_1_4) : (var_1_52))))) : (var_1_61 == ((signed char) (((((((((var_1_4 - var_1_52)) > (var_1_3)) ? ((var_1_4 - var_1_52)) : (var_1_3)))) > (var_1_62)) ? ((((((var_1_4 - var_1_52)) > (var_1_3)) ? ((var_1_4 - var_1_52)) : (var_1_3)))) : (var_1_62))))))) && ((! ((var_1_35 + var_1_34) >= var_1_30)) ? (var_1_63 == ((unsigned char) (var_1_16 || ((! var_1_43) && var_1_44)))) : 1)) && ((var_1_29 <= (1.000000007E8 / var_1_34)) ? ((-256 <= var_1_11) ? (var_1_64 == ((unsigned char) (var_1_11 + var_1_28))) : 1) : 1)) && ((var_1_14 || var_1_44) ? ((! (var_1_85 != var_1_2)) ? ((var_1_21 <= var_1_2) ? ((((var_1_38 * 2.75) * var_1_34) >= ((var_1_6 - var_1_7) / var_1_42)) ? (var_1_65 == ((unsigned char) (var_1_66 - ((var_1_3 + 16) + var_1_52)))) : 1) : 1) : (var_1_65 == ((unsigned char) var_1_11))) : 1)) && (last_1_var_1_67 ? (var_1_67 == ((unsigned char) (((var_1_1 * var_1_41) < (var_1_94 * var_1_20)) || (! var_1_16)))) : (var_1_67 == ((unsigned char) (! ((var_1_15 || var_1_14) && var_1_68)))))) && ((! ((var_1_40 * var_1_90) > (var_1_41 % var_1_18))) ? (var_1_69 == ((unsigned char) (var_1_16 || var_1_44))) : (var_1_69 == ((unsigned char) (! (var_1_44 || var_1_16)))))) && ((var_1_97 < var_1_55) ? (var_1_70 == ((signed char) ((((var_1_62) > (var_1_52)) ? (var_1_62) : (var_1_52))))) : 1)) && ((var_1_24 > (~ var_1_24)) ? ((var_1_86 || var_1_69) ? ((5 <= var_1_47) ? (var_1_71 == ((float) (((((var_1_32) > (((((31.75f) < 0 ) ? -(31.75f) : (31.75f))))) ? (var_1_32) : (((((31.75f) < 0 ) ? -(31.75f) : (31.75f)))))) + ((((var_1_72) > (var_1_73)) ? (var_1_72) : (var_1_73)))))) : (var_1_71 == ((float) ((((((((var_1_30) < (255.5f)) ? (var_1_30) : (255.5f)))) < (var_1_72)) ? (((((var_1_30) < (255.5f)) ? (var_1_30) : (255.5f)))) : (var_1_72)))))) : 1) : (var_1_71 == ((float) var_1_31)))) && (var_1_74 == ((unsigned long int) (var_1_75 + var_1_97)))) && ((last_1_var_1_97 >= last_1_var_1_65) ? (var_1_75 == ((unsigned long int) var_1_40)) : (var_1_75 == ((unsigned long int) var_1_56)))) && ((var_1_72 > var_1_7) ? (var_1_76 == ((float) (var_1_32 - var_1_77))) : (var_1_76 == ((float) ((((((((var_1_30) < (999.3f)) ? (var_1_30) : (999.3f)))) > (var_1_32)) ? (((((var_1_30) < (999.3f)) ? (var_1_30) : (999.3f)))) : (var_1_32))))))) && (((- var_1_20) == var_1_52) ? ((var_1_16 && (var_1_91 != var_1_17)) ? (var_1_78 == ((signed char) (((((var_1_52 + 32)) < ((var_1_4 - var_1_3))) ? ((var_1_52 + 32)) : ((var_1_4 - var_1_3)))))) : 1) : (var_1_78 == ((signed char) (((((var_1_79 + var_1_3)) < ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) + 1))) ? ((var_1_79 + var_1_3)) : ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) + 1)))))))) && ((var_1_86 && (((((var_1_2) < (last_1_var_1_80)) ? (var_1_2) : (last_1_var_1_80))) > var_1_12)) ? (var_1_80 == ((signed short int) last_1_var_1_80)) : ((((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))) <= var_1_29) ? (var_1_80 == ((signed short int) (var_1_3 - (var_1_81 - var_1_41)))) : (var_1_80 == ((signed short int) ((((var_1_52) > ((var_1_66 - var_1_1))) ? (var_1_52) : ((var_1_66 - var_1_1))))))))) && (var_1_86 ? ((var_1_75 > 10u) ? (var_1_82 == ((unsigned long int) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) : (var_1_82 == ((unsigned long int) ((((var_1_83) > ((var_1_40 + var_1_84))) ? (var_1_83) : ((var_1_40 + var_1_84))))))) : (var_1_82 == ((unsigned long int) ((((100000000u) > (var_1_11)) ? (100000000u) : (var_1_11))))))) && (var_1_68 ? (var_1_85 == ((signed long int) (((((last_1_var_1_85 + var_1_45) < 0 ) ? -(last_1_var_1_85 + var_1_45) : (last_1_var_1_85 + var_1_45))) + (4 + var_1_80)))) : (((var_1_82 + var_1_52) < ((var_1_10 + var_1_74) % var_1_18)) ? (var_1_85 == ((signed long int) ((((var_1_10) < (((((var_1_61) > (var_1_94)) ? (var_1_61) : (var_1_94))))) ? (var_1_10) : (((((var_1_61) > (var_1_94)) ? (var_1_61) : (var_1_94)))))))) : (var_1_14 ? (var_1_46 ? (var_1_85 == ((signed long int) ((var_1_26 - var_1_59) - 256))) : (var_1_85 == ((signed long int) (var_1_45 + var_1_52)))) : ((var_1_58 && var_1_16) ? (var_1_85 == ((signed long int) (-5 + (var_1_59 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) : (var_1_85 == ((signed long int) (((((last_1_var_1_85) < (128)) ? (last_1_var_1_85) : (128))) - var_1_45)))))))) && (var_1_16 ? (var_1_86 == ((unsigned char) var_1_15)) : 1)) && (var_1_87 == ((float) var_1_30))) && (var_1_67 ? (var_1_88 == ((unsigned long int) var_1_54)) : (var_1_88 == ((unsigned long int) var_1_4)))) && (var_1_68 ? (var_1_90 == ((signed long int) var_1_1)) : 1)) && (var_1_91 == ((unsigned short int) var_1_52))) && (var_1_92 == ((signed long int) 32))) && (var_1_68 ? (var_1_93 == ((signed short int) var_1_94)) : (var_1_93 == ((signed short int) 1)))) && (last_1_var_1_63 ? (var_1_94 == ((unsigned short int) var_1_10)) : (var_1_94 == ((unsigned short int) last_1_var_1_48)))) && (var_1_15 ? (var_1_95 == ((signed short int) var_1_66)) : 1)) && (var_1_63 ? (var_1_96 == ((signed char) var_1_79)) : (var_1_96 == ((signed char) var_1_62)))) && ((var_1_83 == last_1_var_1_55) ? (var_1_97 == ((unsigned long int) (var_1_28 + (var_1_11 + (var_1_40 + var_1_3))))) : ((last_1_var_1_50 < last_1_var_1_19) ? (var_1_97 == ((unsigned long int) (((((var_1_22 - last_1_var_1_53)) < (var_1_83)) ? ((var_1_22 - last_1_var_1_53)) : (var_1_83))))) : (var_1_97 == ((unsigned long int) 256u))))
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
