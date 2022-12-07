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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch18Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1000000;
unsigned long int var_1_6 = 1671053646;
unsigned long int var_1_7 = 1718233525;
unsigned long int var_1_8 = 2454441025;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 10.75;
float var_1_15 = 2.2;
float var_1_16 = 16.2;
float var_1_17 = 0.0;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 25;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
float var_1_30 = 9.875;
float var_1_31 = 10.2;
float var_1_32 = 5.6;
float var_1_33 = 3.6;
float var_1_34 = 10.5;
float var_1_35 = 8.208;
float var_1_36 = 64.5;
unsigned long int var_1_37 = 32;
unsigned long int var_1_39 = 1846313307;
unsigned short int var_1_41 = 32;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -4;
float var_1_45 = 4.5;
unsigned short int var_1_46 = 16;
unsigned short int var_1_48 = 35773;
unsigned short int var_1_49 = 16;
unsigned short int var_1_50 = 10000;
unsigned short int var_1_51 = 10000;
unsigned short int var_1_52 = 25828;
float var_1_53 = 200.55;
float var_1_54 = 0.0;
signed short int var_1_55 = 0;
unsigned long int var_1_56 = 5;
signed long int var_1_57 = 4;
float var_1_58 = 0.8;
unsigned char var_1_59 = 32;
unsigned long int var_1_60 = 0;
double var_1_61 = 15.5;
double var_1_62 = 49.75;
unsigned long int var_1_63 = 100000000;
unsigned long int var_1_64 = 2674865676;
unsigned long int var_1_65 = 4195585140;
signed char var_1_66 = 50;
signed char var_1_67 = 25;
signed char var_1_68 = 16;
signed char var_1_69 = 5;
signed char var_1_70 = 4;
signed char var_1_71 = 16;
unsigned short int var_1_72 = 5;
signed long int var_1_73 = -4;
double var_1_76 = 127.25;
unsigned char var_1_77 = 32;
signed long int var_1_79 = 10;
signed short int var_1_81 = -1;
signed char var_1_83 = 5;
signed short int var_1_84 = 26136;
unsigned short int var_1_85 = 4;
unsigned short int var_1_86 = 18036;
signed char var_1_87 = -64;
signed short int var_1_88 = -10;
unsigned char var_1_89 = 1;
float var_1_90 = 8.5;
unsigned long int var_1_91 = 3705500659;
float var_1_93 = 1.2;
float var_1_94 = 64.75;
double var_1_95 = 15.5;
unsigned short int var_1_96 = 32;
signed char var_1_97 = 100;
signed short int var_1_98 = -64;
unsigned long int var_1_99 = 16;
signed short int var_1_100 = 0;
unsigned short int var_1_101 = 64;
unsigned long int var_1_102 = 4;
float var_1_103 = 32.8;
float var_1_104 = 500.2;
unsigned char var_1_105 = 10;
unsigned long int var_1_107 = 200;
float var_1_108 = 5.4;
double var_1_109 = 15.9;
signed char var_1_110 = 64;
signed short int var_1_111 = -500;
signed char var_1_112 = -8;
signed char var_1_113 = -16;
double var_1_114 = 1.25;
signed short int var_1_115 = -64;
unsigned char last_1_var_1_11 = 1;
unsigned long int last_1_var_1_18 = 1;
unsigned char last_1_var_1_19 = 0;
unsigned char last_1_var_1_26 = 1;
unsigned long int last_1_var_1_37 = 32;
unsigned short int last_1_var_1_41 = 32;
unsigned char last_1_var_1_42 = 0;
signed short int last_1_var_1_55 = 0;
signed long int last_1_var_1_57 = 4;
unsigned char last_1_var_1_59 = 32;
unsigned short int last_1_var_1_72 = 5;
unsigned char last_1_var_1_77 = 32;
unsigned char last_1_var_1_89 = 1;
signed char last_1_var_1_97 = 100;
unsigned long int last_1_var_1_99 = 16;
float last_1_var_1_103 = 32.8;
unsigned char last_1_var_1_105 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_14 = 4 * last_1_var_1_72;
 if (last_1_var_1_57 != stepLocal_14) {
  var_1_60 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
 }
 unsigned char stepLocal_5 = var_1_29;
 if (last_1_var_1_26) {
  if (var_1_32 <= last_1_var_1_103) {
   var_1_46 = (last_1_var_1_59 + (var_1_20 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))));
  } else {
   var_1_46 = (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))));
  }
 } else {
  if (stepLocal_5 && var_1_28) {
   var_1_46 = (((((var_1_48 - var_1_22)) > (((((var_1_25) < (last_1_var_1_37)) ? (var_1_25) : (last_1_var_1_37))))) ? ((var_1_48 - var_1_22)) : (((((var_1_25) < (last_1_var_1_37)) ? (var_1_25) : (last_1_var_1_37))))));
  } else {
   var_1_46 = ((((var_1_23) < (16)) ? (var_1_23) : (16)));
  }
 }
 if ((last_1_var_1_77 * last_1_var_1_72) <= var_1_39) {
  if ((var_1_22 - var_1_70) < last_1_var_1_89) {
   if ((- last_1_var_1_37) >= (- 16u)) {
    var_1_72 = (var_1_48 - var_1_52);
   } else {
    var_1_72 = (((((last_1_var_1_41) < (16)) ? (last_1_var_1_41) : (16))) + var_1_22);
   }
  } else {
   if (var_1_27) {
    var_1_72 = (var_1_48 - last_1_var_1_55);
   }
  }
 } else {
  if (last_1_var_1_19 < 1000) {
   var_1_72 = (33993 - ((((var_1_68) > (var_1_24)) ? (var_1_68) : (var_1_24))));
  }
 }
 if (! (var_1_13 && (500 < var_1_72))) {
  var_1_42 = 1;
 } else {
  var_1_42 = var_1_43;
 }
 signed long int stepLocal_4 = var_1_24 - 10;
 if (stepLocal_4 >= var_1_72) {
  var_1_41 = var_1_24;
 }
 if (var_1_28) {
  var_1_99 = last_1_var_1_99;
 } else {
  var_1_99 = var_1_60;
 }
 if (! last_1_var_1_11) {
  if (! last_1_var_1_42) {
   var_1_89 = ((((((((var_1_21) > (2)) ? (var_1_21) : (2)))) < (5)) ? (((((var_1_21) > (2)) ? (var_1_21) : (2)))) : (5)));
  } else {
   var_1_89 = (50 + var_1_25);
  }
 } else {
  if (! ((last_1_var_1_11 || last_1_var_1_11) && (last_1_var_1_97 >= last_1_var_1_105))) {
   var_1_89 = (var_1_70 + (var_1_69 + var_1_25));
  }
 }
 unsigned long int stepLocal_1 = var_1_7;
 if (var_1_89 >= stepLocal_1) {
  var_1_14 = (50.25f - (var_1_15 + var_1_16));
 } else {
  var_1_14 = ((var_1_17 - ((((63.875f) > (var_1_15)) ? (63.875f) : (var_1_15)))) - var_1_16);
 }
 if (var_1_13) {
  var_1_19 = ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)));
 } else {
  var_1_19 = (var_1_22 - ((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25)))));
 }
 var_1_26 = (var_1_13 || ((var_1_27 || var_1_28) || var_1_29));
 if (var_1_26) {
  var_1_55 = var_1_50;
 }
 var_1_76 = (var_1_16 - var_1_36);
 var_1_88 = var_1_22;
 var_1_96 = var_1_88;
 var_1_97 = var_1_25;
 var_1_98 = var_1_19;
 var_1_100 = var_1_21;
 var_1_101 = var_1_86;
 if (var_1_26) {
  var_1_103 = var_1_15;
 } else {
  var_1_103 = var_1_104;
 }
 var_1_107 = var_1_25;
 var_1_108 = var_1_33;
 if (var_1_27) {
  var_1_110 = var_1_69;
 }
 if (var_1_43) {
  var_1_111 = var_1_83;
 }
 var_1_112 = var_1_70;
 var_1_113 = var_1_67;
 var_1_114 = (var_1_94 - (var_1_17 - var_1_62));
 unsigned long int stepLocal_25 = var_1_39 * var_1_8;
 if (var_1_23 > stepLocal_25) {
  var_1_115 = (((((var_1_50) > (4)) ? (var_1_50) : (4))) - (var_1_24 + 8));
 }
 if (var_1_42) {
  var_1_105 = 50;
 }
 unsigned char stepLocal_13 = var_1_26;
 if (var_1_33 < (- (24.5f + var_1_34))) {
  var_1_59 = (var_1_22 - var_1_25);
 } else {
  if ((var_1_42 && var_1_27) || stepLocal_13) {
   var_1_59 = (((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))) + var_1_23);
  } else {
   var_1_59 = ((((var_1_22) > (var_1_25)) ? (var_1_22) : (var_1_25)));
  }
 }
 signed long int stepLocal_9 = var_1_105 * var_1_24;
 if (stepLocal_9 > (var_1_8 - 16u)) {
  var_1_53 = (var_1_35 + var_1_16);
 } else {
  var_1_53 = (var_1_16 - (var_1_54 - var_1_15));
 }
 signed long int stepLocal_19 = ((((var_1_89 + var_1_101)) < (var_1_25)) ? ((var_1_89 + var_1_101)) : (var_1_25));
 if (-100 < stepLocal_19) {
  if (var_1_36 >= (var_1_35 * var_1_14)) {
   var_1_77 = var_1_21;
  } else {
   var_1_77 = (((((var_1_22 - (var_1_69 + var_1_25))) < (var_1_21)) ? ((var_1_22 - (var_1_69 + var_1_25))) : (var_1_21)));
  }
 }
 unsigned short int stepLocal_0 = var_1_41;
 if (stepLocal_0 < ((var_1_96 & var_1_6) / var_1_8)) {
  var_1_11 = (var_1_26 || (! var_1_13));
 }
 if (var_1_11) {
  if (! (var_1_107 != var_1_112)) {
   var_1_1 = var_1_77;
  } else {
   var_1_1 = ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_96);
  }
 } else {
  if (var_1_42) {
   var_1_1 = ((((var_1_7) < (var_1_77)) ? (var_1_7) : (var_1_77)));
  } else {
   var_1_1 = var_1_7;
  }
 }
 if (var_1_31 < var_1_114) {
  var_1_61 = ((var_1_36 + (var_1_35 + var_1_62)) - ((((var_1_16) < (var_1_31)) ? (var_1_16) : (var_1_31))));
 } else {
  var_1_61 = ((((var_1_16) < (var_1_33)) ? (var_1_16) : (var_1_33)));
 }
 unsigned long int stepLocal_18 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_25;
 signed short int stepLocal_17 = var_1_111;
 if (stepLocal_17 > 32) {
  var_1_66 = (var_1_25 + var_1_67);
 } else {
  if (var_1_17 == var_1_33) {
   if (stepLocal_18 >= var_1_98) {
    var_1_66 = ((((5) < 0 ) ? -(5) : (5)));
   } else {
    var_1_66 = (var_1_25 + ((((-10) < 0 ) ? -(-10) : (-10))));
   }
  } else {
   var_1_66 = (((((var_1_25) > ((var_1_68 + var_1_69))) ? (var_1_25) : ((var_1_68 + var_1_69)))) - ((((var_1_70) > (var_1_71)) ? (var_1_70) : (var_1_71))));
  }
 }
 signed long int stepLocal_20 = (var_1_41 / var_1_24) / var_1_83;
 if (! var_1_26) {
  var_1_81 = ((((var_1_89) > (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_89) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))));
 } else {
  if (! var_1_42) {
   if (stepLocal_20 == var_1_107) {
    var_1_81 = ((16 + (10000 - var_1_99)) - 64);
   } else {
    var_1_81 = (var_1_23 + ((((var_1_19) > (var_1_83)) ? (var_1_19) : (var_1_83))));
   }
  } else {
   var_1_81 = ((var_1_84 - var_1_21) - ((((8) < (var_1_22)) ? (8) : (var_1_22))));
  }
 }
 if (-4 > var_1_1) {
  var_1_87 = -4;
 } else {
  if (var_1_26) {
   var_1_87 = ((((var_1_69) > ((var_1_67 + var_1_25))) ? (var_1_69) : ((var_1_67 + var_1_25))));
  }
 }
 signed long int stepLocal_24 = (var_1_69 + var_1_89) * var_1_98;
 if (var_1_86 >= stepLocal_24) {
  var_1_95 = ((((256.8) > (var_1_33)) ? (256.8) : (var_1_33)));
 } else {
  if (var_1_28) {
   var_1_95 = var_1_36;
  }
 }
 if (var_1_11) {
  var_1_102 = var_1_19;
 } else {
  var_1_102 = var_1_70;
 }
 if (var_1_11) {
  var_1_109 = var_1_62;
 } else {
  var_1_109 = 63.4;
 }
 signed short int stepLocal_21 = var_1_98;
 if (var_1_45 < var_1_108) {
  var_1_85 = (var_1_60 + (24137 - var_1_70));
 } else {
  if (stepLocal_21 <= ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))) {
   if (var_1_33 < (((((var_1_15 + var_1_34)) < (var_1_36)) ? ((var_1_15 + var_1_34)) : (var_1_36)))) {
    var_1_85 = ((var_1_52 + var_1_86) - ((((2) > (var_1_84)) ? (2) : (var_1_84))));
   }
  } else {
   var_1_85 = ((var_1_50 + ((((var_1_21) > (var_1_113)) ? (var_1_21) : (var_1_113)))) + ((((var_1_25) < (((((var_1_51) > (var_1_59)) ? (var_1_51) : (var_1_59))))) ? (var_1_25) : (((((var_1_51) > (var_1_59)) ? (var_1_51) : (var_1_59)))))));
  }
 }
 if (((((var_1_61) < (var_1_114)) ? (var_1_61) : (var_1_114))) > (var_1_15 - var_1_31)) {
  var_1_79 = (((((var_1_89 + ((((var_1_24) > (var_1_66)) ? (var_1_24) : (var_1_66))))) < (var_1_23)) ? ((var_1_89 + ((((var_1_24) > (var_1_66)) ? (var_1_24) : (var_1_66))))) : (var_1_23)));
 } else {
  var_1_79 = (var_1_77 + (var_1_59 - var_1_22));
 }
 if ((var_1_32 * var_1_35) < var_1_15) {
  if (((var_1_32 + var_1_17) / var_1_45) <= var_1_36) {
   if (((10.5f + var_1_35) * var_1_36) <= var_1_32) {
    var_1_44 = (var_1_22 + var_1_23);
   } else {
    var_1_44 = var_1_88;
   }
  } else {
   var_1_44 = (var_1_21 - (1 + var_1_102));
  }
 }
 unsigned char stepLocal_8 = var_1_20;
 unsigned char stepLocal_7 = var_1_77;
 unsigned long int stepLocal_6 = (2412700709u - var_1_21) * var_1_111;
 if (var_1_85 >= stepLocal_8) {
  if (stepLocal_6 != var_1_7) {
   if (! var_1_43) {
    var_1_49 = ((((var_1_23) < (var_1_48)) ? (var_1_23) : (var_1_48)));
   } else {
    if (stepLocal_7 > 16) {
     var_1_49 = (var_1_20 + var_1_22);
    } else {
     var_1_49 = (((var_1_50 + var_1_51) + (var_1_52 - var_1_25)) - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))));
    }
   }
  } else {
   var_1_49 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
  }
 }
 signed long int stepLocal_12 = var_1_20 * var_1_88;
 unsigned long int stepLocal_11 = (((var_1_6) > ((~ -4))) ? (var_1_6) : ((~ -4)));
 unsigned char stepLocal_10 = var_1_11;
 if (stepLocal_10 || (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) >= var_1_24)) {
  var_1_56 = ((((var_1_20) < (25u)) ? (var_1_20) : (25u)));
 } else {
  if (stepLocal_11 <= (var_1_77 * ((((var_1_52) > (var_1_23)) ? (var_1_52) : (var_1_23))))) {
   if (stepLocal_12 > (((((var_1_96) < (var_1_50)) ? (var_1_96) : (var_1_50))) ^ var_1_85)) {
    var_1_56 = (var_1_52 + var_1_23);
   } else {
    var_1_56 = (128u + var_1_115);
   }
  } else {
   var_1_56 = var_1_24;
  }
 }
 unsigned char stepLocal_16 = var_1_43;
 unsigned short int stepLocal_15 = var_1_85;
 if ((var_1_60 > var_1_8) || stepLocal_16) {
  if ((var_1_101 - var_1_60) > stepLocal_15) {
   var_1_63 = (var_1_7 + 10u);
  } else {
   var_1_63 = var_1_50;
  }
 } else {
  var_1_63 = (((((((((var_1_8) < (var_1_64)) ? (var_1_8) : (var_1_64)))) > (var_1_65)) ? (((((var_1_8) < (var_1_64)) ? (var_1_8) : (var_1_64)))) : (var_1_65))) - ((((var_1_79) < (((((var_1_19) > (256u)) ? (var_1_19) : (256u))))) ? (var_1_79) : (((((var_1_19) > (256u)) ? (var_1_19) : (256u)))))));
 }
 if (var_1_54 <= (var_1_17 * var_1_33)) {
  if (var_1_45 >= 16.75f) {
   var_1_57 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  } else {
   var_1_57 = ((((128) < (var_1_85)) ? (128) : (var_1_85)));
  }
 } else {
  var_1_57 = var_1_50;
 }
 unsigned short int stepLocal_23 = var_1_46;
 unsigned char stepLocal_22 = var_1_105;
 if (stepLocal_23 <= ((var_1_91 - var_1_89) - ((((var_1_48) < (var_1_79)) ? (var_1_48) : (var_1_79))))) {
  if ((var_1_64 % ((((var_1_50) < (var_1_52)) ? (var_1_50) : (var_1_52)))) < stepLocal_22) {
   var_1_90 = ((((((var_1_15 - var_1_62)) > (var_1_34)) ? ((var_1_15 - var_1_62)) : (var_1_34))) + var_1_93);
  } else {
   var_1_90 = (var_1_15 - ((((var_1_35) > (var_1_17)) ? (var_1_35) : (var_1_17))));
  }
 } else {
  var_1_90 = (var_1_16 - var_1_94);
 }
 signed short int stepLocal_3 = var_1_115;
 if (var_1_25 > stepLocal_3) {
  if (! ((var_1_17 + var_1_90) > (var_1_16 - var_1_15))) {
   if ((var_1_16 * (var_1_17 / 128.75f)) > ((var_1_15 + var_1_31) - var_1_32)) {
    var_1_30 = (var_1_15 - var_1_31);
   } else {
    var_1_30 = (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_33);
   }
  } else {
   var_1_30 = (var_1_16 + (var_1_34 + (var_1_35 - var_1_36)));
  }
 }
 if ((var_1_90 == var_1_53) && var_1_26) {
  if (var_1_101 > var_1_72) {
   var_1_73 = (var_1_72 - var_1_99);
  }
 } else {
  if (((var_1_79 / var_1_24) ^ -64) == var_1_21) {
   var_1_73 = ((var_1_21 + ((((var_1_67) > (var_1_50)) ? (var_1_67) : (var_1_50)))) + (var_1_105 - var_1_115));
  }
 }
 unsigned short int stepLocal_2 = var_1_101;
 if (var_1_13) {
  var_1_18 = ((((((((var_1_8 - var_1_101) < 0 ) ? -(var_1_8 - var_1_101) : (var_1_8 - var_1_101)))) > ((((((var_1_7 + var_1_6)) > (var_1_46)) ? ((var_1_7 + var_1_6)) : (var_1_46))))) ? (((((var_1_8 - var_1_101) < 0 ) ? -(var_1_8 - var_1_101) : (var_1_8 - var_1_101)))) : ((((((var_1_7 + var_1_6)) > (var_1_46)) ? ((var_1_7 + var_1_6)) : (var_1_46))))));
 } else {
  if ((var_1_73 * last_1_var_1_18) < stepLocal_2) {
   var_1_18 = ((((var_1_7) < ((((((var_1_101 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_101 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u)))))))) ? (var_1_7) : ((((((var_1_101 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_101 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u)))))))));
  } else {
   var_1_18 = ((((((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) < (var_1_7)) ? (((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) : (var_1_7)));
  }
 }
 if (var_1_21 > var_1_25) {
  if (1 >= var_1_20) {
   if (var_1_20 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) {
    var_1_37 = ((var_1_7 + var_1_39) - var_1_21);
   } else {
    var_1_37 = (var_1_8 - var_1_18);
   }
  } else {
   var_1_37 = ((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24)));
  }
 } else {
  if (((-8 << var_1_23) | var_1_111) < (var_1_7 * var_1_19)) {
   var_1_37 = (((((((((var_1_96) < (var_1_39)) ? (var_1_96) : (var_1_39)))) < (var_1_22)) ? (((((var_1_96) < (var_1_39)) ? (var_1_96) : (var_1_39)))) : (var_1_22))) + var_1_6);
  } else {
   var_1_37 = ((((((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) > (var_1_8)) ? (((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) : (var_1_8)));
  }
 }
 if (var_1_96 >= var_1_49) {
  if (var_1_50 != ((((((((var_1_49) > (var_1_37)) ? (var_1_49) : (var_1_37)))) < (var_1_79)) ? (((((var_1_49) > (var_1_37)) ? (var_1_49) : (var_1_37)))) : (var_1_79)))) {
   var_1_58 = (var_1_16 + (var_1_36 + var_1_35));
  } else {
   var_1_58 = (((((((((4.25f) < (var_1_15)) ? (4.25f) : (var_1_15))) - var_1_17)) > ((var_1_33 + var_1_35))) ? ((((((4.25f) < (var_1_15)) ? (4.25f) : (var_1_15))) - var_1_17)) : ((var_1_33 + var_1_35))));
  }
 } else {
  if (var_1_61 <= ((- var_1_36) / ((((var_1_45) < (var_1_17)) ? (var_1_45) : (var_1_17))))) {
   var_1_58 = ((((var_1_36) > (((((var_1_31) < (127.1f)) ? (var_1_31) : (127.1f))))) ? (var_1_36) : (((((var_1_31) < (127.1f)) ? (var_1_31) : (127.1f))))));
  } else {
   var_1_58 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741824);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 63);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427387900e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -461168.6018427382800e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -230584.3009213691390e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691390e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 1073741824);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
 assume_abort_if_not(var_1_45 != 0.0F);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 8191);
 assume_abort_if_not(var_1_50 <= 16384);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 8192);
 assume_abort_if_not(var_1_51 <= 16383);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 24575);
 assume_abort_if_not(var_1_52 <= 32767);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 4611686.018427382800e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 2147483647);
 assume_abort_if_not(var_1_64 <= 4294967294);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 2147483647);
 assume_abort_if_not(var_1_65 <= 4294967294);
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= -63);
 assume_abort_if_not(var_1_67 <= 63);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 63);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 63);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 126);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 126);
 var_1_83 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_83 >= -128);
 assume_abort_if_not(var_1_83 <= 127);
 assume_abort_if_not(var_1_83 != 0);
 var_1_84 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_84 >= 16382);
 assume_abort_if_not(var_1_84 <= 32766);
 var_1_86 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_86 >= 16384);
 assume_abort_if_not(var_1_86 <= 32767);
 var_1_91 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_91 >= 3221225471);
 assume_abort_if_not(var_1_91 <= 4294967295);
 var_1_93 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_93 >= -461168.6018427382800e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 4611686.018427382800e+12F && var_1_93 >= 1.0e-20F ));
 var_1_94 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_94 >= 0.0F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 9223372.036854765600e+12F && var_1_94 >= 1.0e-20F ));
 var_1_104 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_104 >= -922337.2036854765600e+13F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 9223372.036854765600e+12F && var_1_104 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_105 = var_1_105;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_11 ? ((! (var_1_107 != var_1_112)) ? (var_1_1 == ((unsigned long int) var_1_77)) : (var_1_1 == ((unsigned long int) ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_96)))) : (var_1_42 ? (var_1_1 == ((unsigned long int) ((((var_1_7) < (var_1_77)) ? (var_1_7) : (var_1_77))))) : (var_1_1 == ((unsigned long int) var_1_7)))) && ((var_1_41 < ((var_1_96 & var_1_6) / var_1_8)) ? (var_1_11 == ((unsigned char) (var_1_26 || (! var_1_13)))) : 1)) && ((var_1_89 >= var_1_7) ? (var_1_14 == ((float) (50.25f - (var_1_15 + var_1_16)))) : (var_1_14 == ((float) ((var_1_17 - ((((63.875f) > (var_1_15)) ? (63.875f) : (var_1_15)))) - var_1_16))))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((((((((var_1_8 - var_1_101) < 0 ) ? -(var_1_8 - var_1_101) : (var_1_8 - var_1_101)))) > ((((((var_1_7 + var_1_6)) > (var_1_46)) ? ((var_1_7 + var_1_6)) : (var_1_46))))) ? (((((var_1_8 - var_1_101) < 0 ) ? -(var_1_8 - var_1_101) : (var_1_8 - var_1_101)))) : ((((((var_1_7 + var_1_6)) > (var_1_46)) ? ((var_1_7 + var_1_6)) : (var_1_46)))))))) : (((var_1_73 * last_1_var_1_18) < var_1_101) ? (var_1_18 == ((unsigned long int) ((((var_1_7) < ((((((var_1_101 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_101 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u)))))))) ? (var_1_7) : ((((((var_1_101 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_101 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u))))))))))) : (var_1_18 == ((unsigned long int) ((((((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) < (var_1_7)) ? (((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) : (var_1_7)))))))) && (var_1_13 ? (var_1_19 == ((unsigned char) ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_19 == ((unsigned char) (var_1_22 - ((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))))))) && (var_1_26 == ((unsigned char) (var_1_13 || ((var_1_27 || var_1_28) || var_1_29))))) && ((var_1_25 > var_1_115) ? ((! ((var_1_17 + var_1_90) > (var_1_16 - var_1_15))) ? (((var_1_16 * (var_1_17 / 128.75f)) > ((var_1_15 + var_1_31) - var_1_32)) ? (var_1_30 == ((float) (var_1_15 - var_1_31))) : (var_1_30 == ((float) (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_33)))) : (var_1_30 == ((float) (var_1_16 + (var_1_34 + (var_1_35 - var_1_36)))))) : 1)) && ((var_1_21 > var_1_25) ? ((1 >= var_1_20) ? ((var_1_20 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) ? (var_1_37 == ((unsigned long int) ((var_1_7 + var_1_39) - var_1_21))) : (var_1_37 == ((unsigned long int) (var_1_8 - var_1_18)))) : (var_1_37 == ((unsigned long int) ((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24)))))) : ((((-8 << var_1_23) | var_1_111) < (var_1_7 * var_1_19)) ? (var_1_37 == ((unsigned long int) (((((((((var_1_96) < (var_1_39)) ? (var_1_96) : (var_1_39)))) < (var_1_22)) ? (((((var_1_96) < (var_1_39)) ? (var_1_96) : (var_1_39)))) : (var_1_22))) + var_1_6))) : (var_1_37 == ((unsigned long int) ((((((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) > (var_1_8)) ? (((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) : (var_1_8)))))))) && (((var_1_24 - 10) >= var_1_72) ? (var_1_41 == ((unsigned short int) var_1_24)) : 1)) && ((! (var_1_13 && (500 < var_1_72))) ? (var_1_42 == ((unsigned char) 1)) : (var_1_42 == ((unsigned char) var_1_43)))) && (((var_1_32 * var_1_35) < var_1_15) ? ((((var_1_32 + var_1_17) / var_1_45) <= var_1_36) ? ((((10.5f + var_1_35) * var_1_36) <= var_1_32) ? (var_1_44 == ((signed long int) (var_1_22 + var_1_23))) : (var_1_44 == ((signed long int) var_1_88))) : (var_1_44 == ((signed long int) (var_1_21 - (1 + var_1_102))))) : 1)) && (last_1_var_1_26 ? ((var_1_32 <= last_1_var_1_103) ? (var_1_46 == ((unsigned short int) (last_1_var_1_59 + (var_1_20 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) : (var_1_46 == ((unsigned short int) (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))))) : ((var_1_29 && var_1_28) ? (var_1_46 == ((unsigned short int) (((((var_1_48 - var_1_22)) > (((((var_1_25) < (last_1_var_1_37)) ? (var_1_25) : (last_1_var_1_37))))) ? ((var_1_48 - var_1_22)) : (((((var_1_25) < (last_1_var_1_37)) ? (var_1_25) : (last_1_var_1_37)))))))) : (var_1_46 == ((unsigned short int) ((((var_1_23) < (16)) ? (var_1_23) : (16)))))))) && ((var_1_85 >= var_1_20) ? ((((2412700709u - var_1_21) * var_1_111) != var_1_7) ? ((! var_1_43) ? (var_1_49 == ((unsigned short int) ((((var_1_23) < (var_1_48)) ? (var_1_23) : (var_1_48))))) : ((var_1_77 > 16) ? (var_1_49 == ((unsigned short int) (var_1_20 + var_1_22))) : (var_1_49 == ((unsigned short int) (((var_1_50 + var_1_51) + (var_1_52 - var_1_25)) - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))) : (var_1_49 == ((unsigned short int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))))) : 1)) && (((var_1_105 * var_1_24) > (var_1_8 - 16u)) ? (var_1_53 == ((float) (var_1_35 + var_1_16))) : (var_1_53 == ((float) (var_1_16 - (var_1_54 - var_1_15)))))) && (var_1_26 ? (var_1_55 == ((signed short int) var_1_50)) : 1)) && ((var_1_11 || (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) >= var_1_24)) ? (var_1_56 == ((unsigned long int) ((((var_1_20) < (25u)) ? (var_1_20) : (25u))))) : ((((((var_1_6) > ((~ -4))) ? (var_1_6) : ((~ -4)))) <= (var_1_77 * ((((var_1_52) > (var_1_23)) ? (var_1_52) : (var_1_23))))) ? (((var_1_20 * var_1_88) > (((((var_1_96) < (var_1_50)) ? (var_1_96) : (var_1_50))) ^ var_1_85)) ? (var_1_56 == ((unsigned long int) (var_1_52 + var_1_23))) : (var_1_56 == ((unsigned long int) (128u + var_1_115)))) : (var_1_56 == ((unsigned long int) var_1_24))))) && ((var_1_54 <= (var_1_17 * var_1_33)) ? ((var_1_45 >= 16.75f) ? (var_1_57 == ((signed long int) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) : (var_1_57 == ((signed long int) ((((128) < (var_1_85)) ? (128) : (var_1_85)))))) : (var_1_57 == ((signed long int) var_1_50)))) && ((var_1_96 >= var_1_49) ? ((var_1_50 != ((((((((var_1_49) > (var_1_37)) ? (var_1_49) : (var_1_37)))) < (var_1_79)) ? (((((var_1_49) > (var_1_37)) ? (var_1_49) : (var_1_37)))) : (var_1_79)))) ? (var_1_58 == ((float) (var_1_16 + (var_1_36 + var_1_35)))) : (var_1_58 == ((float) (((((((((4.25f) < (var_1_15)) ? (4.25f) : (var_1_15))) - var_1_17)) > ((var_1_33 + var_1_35))) ? ((((((4.25f) < (var_1_15)) ? (4.25f) : (var_1_15))) - var_1_17)) : ((var_1_33 + var_1_35))))))) : ((var_1_61 <= ((- var_1_36) / ((((var_1_45) < (var_1_17)) ? (var_1_45) : (var_1_17))))) ? (var_1_58 == ((float) ((((var_1_36) > (((((var_1_31) < (127.1f)) ? (var_1_31) : (127.1f))))) ? (var_1_36) : (((((var_1_31) < (127.1f)) ? (var_1_31) : (127.1f)))))))) : (var_1_58 == ((float) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))))) && ((var_1_33 < (- (24.5f + var_1_34))) ? (var_1_59 == ((unsigned char) (var_1_22 - var_1_25))) : (((var_1_42 && var_1_27) || var_1_26) ? (var_1_59 == ((unsigned char) (((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))) + var_1_23))) : (var_1_59 == ((unsigned char) ((((var_1_22) > (var_1_25)) ? (var_1_22) : (var_1_25)))))))) && ((last_1_var_1_57 != (4 * last_1_var_1_72)) ? (var_1_60 == ((unsigned long int) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) : 1)) && ((var_1_31 < var_1_114) ? (var_1_61 == ((double) ((var_1_36 + (var_1_35 + var_1_62)) - ((((var_1_16) < (var_1_31)) ? (var_1_16) : (var_1_31)))))) : (var_1_61 == ((double) ((((var_1_16) < (var_1_33)) ? (var_1_16) : (var_1_33))))))) && (((var_1_60 > var_1_8) || var_1_43) ? (((var_1_101 - var_1_60) > var_1_85) ? (var_1_63 == ((unsigned long int) (var_1_7 + 10u))) : (var_1_63 == ((unsigned long int) var_1_50))) : (var_1_63 == ((unsigned long int) (((((((((var_1_8) < (var_1_64)) ? (var_1_8) : (var_1_64)))) > (var_1_65)) ? (((((var_1_8) < (var_1_64)) ? (var_1_8) : (var_1_64)))) : (var_1_65))) - ((((var_1_79) < (((((var_1_19) > (256u)) ? (var_1_19) : (256u))))) ? (var_1_79) : (((((var_1_19) > (256u)) ? (var_1_19) : (256u))))))))))) && ((var_1_111 > 32) ? (var_1_66 == ((signed char) (var_1_25 + var_1_67))) : ((var_1_17 == var_1_33) ? (((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_25) >= var_1_98) ? (var_1_66 == ((signed char) ((((5) < 0 ) ? -(5) : (5))))) : (var_1_66 == ((signed char) (var_1_25 + ((((-10) < 0 ) ? -(-10) : (-10))))))) : (var_1_66 == ((signed char) (((((var_1_25) > ((var_1_68 + var_1_69))) ? (var_1_25) : ((var_1_68 + var_1_69)))) - ((((var_1_70) > (var_1_71)) ? (var_1_70) : (var_1_71))))))))) && (((last_1_var_1_77 * last_1_var_1_72) <= var_1_39) ? (((var_1_22 - var_1_70) < last_1_var_1_89) ? (((- last_1_var_1_37) >= (- 16u)) ? (var_1_72 == ((unsigned short int) (var_1_48 - var_1_52))) : (var_1_72 == ((unsigned short int) (((((last_1_var_1_41) < (16)) ? (last_1_var_1_41) : (16))) + var_1_22)))) : (var_1_27 ? (var_1_72 == ((unsigned short int) (var_1_48 - last_1_var_1_55))) : 1)) : ((last_1_var_1_19 < 1000) ? (var_1_72 == ((unsigned short int) (33993 - ((((var_1_68) > (var_1_24)) ? (var_1_68) : (var_1_24)))))) : 1))) && (((var_1_90 == var_1_53) && var_1_26) ? ((var_1_101 > var_1_72) ? (var_1_73 == ((signed long int) (var_1_72 - var_1_99))) : 1) : ((((var_1_79 / var_1_24) ^ -64) == var_1_21) ? (var_1_73 == ((signed long int) ((var_1_21 + ((((var_1_67) > (var_1_50)) ? (var_1_67) : (var_1_50)))) + (var_1_105 - var_1_115)))) : 1))) && (var_1_76 == ((double) (var_1_16 - var_1_36)))) && ((-100 < (((((var_1_89 + var_1_101)) < (var_1_25)) ? ((var_1_89 + var_1_101)) : (var_1_25)))) ? ((var_1_36 >= (var_1_35 * var_1_14)) ? (var_1_77 == ((unsigned char) var_1_21)) : (var_1_77 == ((unsigned char) (((((var_1_22 - (var_1_69 + var_1_25))) < (var_1_21)) ? ((var_1_22 - (var_1_69 + var_1_25))) : (var_1_21)))))) : 1)) && ((((((var_1_61) < (var_1_114)) ? (var_1_61) : (var_1_114))) > (var_1_15 - var_1_31)) ? (var_1_79 == ((signed long int) (((((var_1_89 + ((((var_1_24) > (var_1_66)) ? (var_1_24) : (var_1_66))))) < (var_1_23)) ? ((var_1_89 + ((((var_1_24) > (var_1_66)) ? (var_1_24) : (var_1_66))))) : (var_1_23))))) : (var_1_79 == ((signed long int) (var_1_77 + (var_1_59 - var_1_22)))))) && ((! var_1_26) ? (var_1_81 == ((signed short int) ((((var_1_89) > (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_89) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) : ((! var_1_42) ? ((((var_1_41 / var_1_24) / var_1_83) == var_1_107) ? (var_1_81 == ((signed short int) ((16 + (10000 - var_1_99)) - 64))) : (var_1_81 == ((signed short int) (var_1_23 + ((((var_1_19) > (var_1_83)) ? (var_1_19) : (var_1_83))))))) : (var_1_81 == ((signed short int) ((var_1_84 - var_1_21) - ((((8) < (var_1_22)) ? (8) : (var_1_22))))))))) && ((var_1_45 < var_1_108) ? (var_1_85 == ((unsigned short int) (var_1_60 + (24137 - var_1_70)))) : ((var_1_98 <= ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))) ? ((var_1_33 < (((((var_1_15 + var_1_34)) < (var_1_36)) ? ((var_1_15 + var_1_34)) : (var_1_36)))) ? (var_1_85 == ((unsigned short int) ((var_1_52 + var_1_86) - ((((2) > (var_1_84)) ? (2) : (var_1_84)))))) : 1) : (var_1_85 == ((unsigned short int) ((var_1_50 + ((((var_1_21) > (var_1_113)) ? (var_1_21) : (var_1_113)))) + ((((var_1_25) < (((((var_1_51) > (var_1_59)) ? (var_1_51) : (var_1_59))))) ? (var_1_25) : (((((var_1_51) > (var_1_59)) ? (var_1_51) : (var_1_59)))))))))))) && ((-4 > var_1_1) ? (var_1_87 == ((signed char) -4)) : (var_1_26 ? (var_1_87 == ((signed char) ((((var_1_69) > ((var_1_67 + var_1_25))) ? (var_1_69) : ((var_1_67 + var_1_25)))))) : 1))) && (var_1_88 == ((signed short int) var_1_22))) && ((! last_1_var_1_11) ? ((! last_1_var_1_42) ? (var_1_89 == ((unsigned char) ((((((((var_1_21) > (2)) ? (var_1_21) : (2)))) < (5)) ? (((((var_1_21) > (2)) ? (var_1_21) : (2)))) : (5))))) : (var_1_89 == ((unsigned char) (50 + var_1_25)))) : ((! ((last_1_var_1_11 || last_1_var_1_11) && (last_1_var_1_97 >= last_1_var_1_105))) ? (var_1_89 == ((unsigned char) (var_1_70 + (var_1_69 + var_1_25)))) : 1))) && ((var_1_46 <= ((var_1_91 - var_1_89) - ((((var_1_48) < (var_1_79)) ? (var_1_48) : (var_1_79))))) ? (((var_1_64 % ((((var_1_50) < (var_1_52)) ? (var_1_50) : (var_1_52)))) < var_1_105) ? (var_1_90 == ((float) ((((((var_1_15 - var_1_62)) > (var_1_34)) ? ((var_1_15 - var_1_62)) : (var_1_34))) + var_1_93))) : (var_1_90 == ((float) (var_1_15 - ((((var_1_35) > (var_1_17)) ? (var_1_35) : (var_1_17))))))) : (var_1_90 == ((float) (var_1_16 - var_1_94))))) && ((var_1_86 >= ((var_1_69 + var_1_89) * var_1_98)) ? (var_1_95 == ((double) ((((256.8) > (var_1_33)) ? (256.8) : (var_1_33))))) : (var_1_28 ? (var_1_95 == ((double) var_1_36)) : 1))) && (var_1_96 == ((unsigned short int) var_1_88))) && (var_1_97 == ((signed char) var_1_25))) && (var_1_98 == ((signed short int) var_1_19))) && (var_1_28 ? (var_1_99 == ((unsigned long int) last_1_var_1_99)) : (var_1_99 == ((unsigned long int) var_1_60)))) && (var_1_100 == ((signed short int) var_1_21))) && (var_1_101 == ((unsigned short int) var_1_86))) && (var_1_11 ? (var_1_102 == ((unsigned long int) var_1_19)) : (var_1_102 == ((unsigned long int) var_1_70)))) && (var_1_26 ? (var_1_103 == ((float) var_1_15)) : (var_1_103 == ((float) var_1_104)))) && (var_1_42 ? (var_1_105 == ((unsigned char) 50)) : 1)) && (var_1_107 == ((unsigned long int) var_1_25))) && (var_1_108 == ((float) var_1_33))) && (var_1_11 ? (var_1_109 == ((double) var_1_62)) : (var_1_109 == ((double) 63.4)))) && (var_1_27 ? (var_1_110 == ((signed char) var_1_69)) : 1)) && (var_1_43 ? (var_1_111 == ((signed short int) var_1_83)) : 1)) && (var_1_112 == ((signed char) var_1_70))) && (var_1_113 == ((signed char) var_1_67))) && (var_1_114 == ((double) (var_1_94 - (var_1_17 - var_1_62))))) && ((var_1_23 > (var_1_39 * var_1_8)) ? (var_1_115 == ((signed short int) (((((var_1_50) > (4)) ? (var_1_50) : (4))) - (var_1_24 + 8)))) : 1)
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
