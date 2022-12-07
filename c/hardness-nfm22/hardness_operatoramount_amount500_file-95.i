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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_8 = 10;
signed char var_1_10 = 64;
signed char var_1_11 = 10;
signed char var_1_12 = 8;
signed char var_1_13 = 0;
signed char var_1_14 = -8;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
signed char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
signed short int var_1_20 = -128;
float var_1_21 = 32.5;
float var_1_22 = 99999.25;
signed short int var_1_23 = 64;
signed long int var_1_24 = -4;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 100;
double var_1_27 = 32.4;
double var_1_28 = 0.0;
double var_1_29 = 31.5;
double var_1_30 = 49.5;
double var_1_31 = 256.3;
double var_1_32 = 4.4;
double var_1_33 = 8.8;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 17182;
unsigned short int var_1_36 = 31875;
signed long int var_1_37 = 1253842326;
signed long int var_1_38 = 0;
double var_1_39 = 256.8;
signed long int var_1_40 = 8;
signed short int var_1_41 = 0;
float var_1_42 = 32.375;
float var_1_43 = 5.75;
float var_1_44 = 25.6;
unsigned long int var_1_45 = 500;
unsigned long int var_1_46 = 3207223703;
unsigned long int var_1_47 = 4178154253;
unsigned long int var_1_48 = 3625106904;
signed short int var_1_49 = 0;
signed long int var_1_50 = -256;
unsigned short int var_1_51 = 32;
unsigned short int var_1_52 = 47603;
unsigned short int var_1_53 = 5;
unsigned short int var_1_54 = 17043;
unsigned char var_1_55 = 5;
unsigned char var_1_56 = 200;
signed short int var_1_57 = -256;
unsigned short int var_1_58 = 4;
float var_1_60 = 7.8;
float var_1_61 = 1.7;
float var_1_62 = 0.0;
float var_1_63 = 50.1;
unsigned long int var_1_64 = 4;
signed short int var_1_65 = 0;
signed short int var_1_67 = 2;
double var_1_68 = 0.0;
signed short int var_1_69 = 25;
signed short int var_1_70 = 23214;
signed long int var_1_71 = -10;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned char var_1_75 = 0;
float var_1_76 = 32.7;
signed char var_1_77 = 10;
signed char var_1_78 = 16;
signed char var_1_79 = -2;
unsigned short int var_1_80 = 25;
unsigned short int var_1_81 = 43816;
signed char var_1_82 = 64;
signed char var_1_83 = 8;
signed long int var_1_84 = 16;
unsigned short int var_1_85 = 1;
double var_1_86 = 99.9;
unsigned char var_1_87 = 0;
unsigned short int var_1_88 = 2;
unsigned long int var_1_90 = 5;
signed long int var_1_91 = 1000;
unsigned char var_1_92 = 1;
unsigned short int var_1_93 = 10;
unsigned char var_1_94 = 25;
signed short int var_1_95 = 0;
signed long int var_1_96 = -50;
signed short int var_1_97 = -64;
signed long int var_1_98 = 32;
unsigned short int var_1_99 = 44838;
unsigned char last_1_var_1_15 = 0;
float last_1_var_1_21 = 32.5;
unsigned short int last_1_var_1_34 = 0;
float last_1_var_1_42 = 32.375;
unsigned long int last_1_var_1_45 = 500;
signed long int last_1_var_1_50 = -256;
unsigned short int last_1_var_1_51 = 32;
unsigned short int last_1_var_1_53 = 5;
unsigned short int last_1_var_1_58 = 4;
signed short int last_1_var_1_65 = 0;
signed short int last_1_var_1_69 = 25;
unsigned short int last_1_var_1_80 = 25;
double last_1_var_1_86 = 99.9;
unsigned char last_1_var_1_92 = 1;
signed long int last_1_var_1_98 = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = last_1_var_1_42 > var_1_30;
 if ((last_1_var_1_15 || (last_1_var_1_98 > var_1_8)) && stepLocal_2) {
  var_1_33 = (var_1_31 - var_1_29);
 } else {
  var_1_33 = (var_1_31 + var_1_30);
 }
 if (last_1_var_1_92) {
  if (var_1_29 <= last_1_var_1_42) {
   var_1_72 = var_1_73;
  }
 } else {
  var_1_72 = ((((((last_1_var_1_58) > (last_1_var_1_51)) ? (last_1_var_1_58) : (last_1_var_1_51))) < var_1_14) || (! (var_1_73 && var_1_75)));
 }
 signed long int stepLocal_7 = 256 - 5;
 signed long int stepLocal_6 = last_1_var_1_34;
 signed long int stepLocal_5 = (((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36));
 if (stepLocal_6 > ((((last_1_var_1_50) < 0 ) ? -(last_1_var_1_50) : (last_1_var_1_50)))) {
  if (stepLocal_5 >= ((((last_1_var_1_65) > (50)) ? (last_1_var_1_65) : (50)))) {
   var_1_42 = (((((((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))) < (var_1_32)) ? (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))) : (var_1_32))) + var_1_29);
  } else {
   var_1_42 = (var_1_29 + (var_1_31 - var_1_30));
  }
 } else {
  if (last_1_var_1_34 == stepLocal_7) {
   var_1_42 = ((((var_1_30) < (((((var_1_43) > (var_1_28)) ? (var_1_43) : (var_1_28))))) ? (var_1_30) : (((((var_1_43) > (var_1_28)) ? (var_1_43) : (var_1_28))))));
  } else {
   var_1_42 = ((var_1_30 + ((((10.375f) > (var_1_44)) ? (10.375f) : (var_1_44)))) + (var_1_29 - var_1_31));
  }
 }
 if (last_1_var_1_21 > last_1_var_1_86) {
  var_1_15 = ((last_1_var_1_86 == 31.65) || var_1_16);
 }
 if (var_1_16) {
  var_1_18 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 } else {
  var_1_18 = (var_1_19 - 64);
 }
 var_1_24 = -100;
 if (var_1_16) {
  var_1_25 = ((((var_1_11) > ((var_1_19 - (64 - var_1_8)))) ? (var_1_11) : ((var_1_19 - (64 - var_1_8)))));
 } else {
  var_1_25 = (var_1_19 - ((((var_1_10) > (var_1_26)) ? (var_1_10) : (var_1_26))));
 }
 if (! (var_1_30 <= var_1_22)) {
  if (var_1_29 > (var_1_30 + (var_1_28 - var_1_31))) {
   var_1_40 = ((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10)));
  }
 }
 if (var_1_73) {
  var_1_84 = -1;
 } else {
  var_1_84 = 64;
 }
 if (var_1_75) {
  var_1_85 = var_1_70;
 }
 if (var_1_16) {
  var_1_86 = var_1_62;
 } else {
  var_1_86 = var_1_63;
 }
 var_1_87 = var_1_16;
 if (var_1_72) {
  var_1_88 = var_1_36;
 } else {
  var_1_88 = var_1_25;
 }
 if (var_1_75) {
  var_1_90 = var_1_10;
 } else {
  var_1_90 = var_1_47;
 }
 var_1_91 = var_1_54;
 var_1_92 = var_1_75;
 if (var_1_87) {
  var_1_93 = var_1_52;
 }
 var_1_94 = var_1_49;
 if (var_1_87) {
  var_1_95 = var_1_8;
 }
 var_1_96 = var_1_93;
 if ((4.5 / 9999.5) > ((((var_1_33) > (var_1_86)) ? (var_1_33) : (var_1_86)))) {
  var_1_21 = 4.6f;
 } else {
  if (var_1_87) {
   var_1_21 = var_1_22;
  } else {
   var_1_21 = ((((var_1_22) < (64.8f)) ? (var_1_22) : (64.8f)));
  }
 }
 unsigned char stepLocal_0 = (var_1_87 || var_1_87) && var_1_72;
 if (var_1_33 > var_1_42) {
  if (var_1_42 < var_1_33) {
   if (stepLocal_0 && var_1_15) {
    var_1_1 = (8 - (64 - var_1_8));
   } else {
    if (var_1_86 <= (var_1_42 / 15.8)) {
     var_1_1 = -4;
    } else {
     var_1_1 = ((((((var_1_10 - var_1_8) - var_1_11)) > ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14))))) ? (((var_1_10 - var_1_8) - var_1_11)) : ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14))))));
    }
   }
  }
 }
 if (((((var_1_28) > ((var_1_32 + 63.125))) ? (var_1_28) : ((var_1_32 + 63.125)))) <= (var_1_22 / var_1_39)) {
  if (var_1_15) {
   var_1_38 = var_1_90;
  }
 } else {
  var_1_38 = var_1_94;
 }
 var_1_20 = (var_1_13 - ((var_1_11 + 50) + ((((var_1_85) > (var_1_19)) ? (var_1_85) : (var_1_19)))));
 if (var_1_87) {
  var_1_27 = ((var_1_28 - var_1_29) - ((4.1406872328101468E18 - var_1_30) + var_1_31));
 } else {
  if (var_1_31 == ((((var_1_22) > ((var_1_86 + var_1_86))) ? (var_1_22) : ((var_1_86 + var_1_86))))) {
   var_1_27 = (((((var_1_30 + var_1_29)) < ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28))))) ? ((var_1_30 + var_1_29)) : ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28))))));
  } else {
   var_1_27 = (((((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) > (2.75)) ? ((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) : (2.75)));
  }
 }
 if (var_1_39 > var_1_22) {
  var_1_41 = (((((var_1_26) > ((256 + var_1_84))) ? (var_1_26) : ((256 + var_1_84)))) - var_1_11);
 }
 if (var_1_96 >= var_1_37) {
  var_1_51 = (var_1_52 - var_1_93);
 } else {
  if (var_1_10 != -5) {
   var_1_51 = ((((var_1_52) < ((var_1_49 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) ? (var_1_52) : ((var_1_49 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))));
  } else {
   var_1_51 = ((((var_1_26) > (var_1_36)) ? (var_1_26) : (var_1_36)));
  }
 }
 signed long int stepLocal_24 = var_1_26 << var_1_11;
 if (var_1_86 < (var_1_30 / var_1_62)) {
  if (stepLocal_24 >= ((var_1_56 - var_1_35) * (var_1_95 + var_1_54))) {
   var_1_77 = (var_1_8 + var_1_49);
  } else {
   var_1_77 = (((((var_1_8) < (50)) ? (var_1_8) : (50))) + (var_1_49 + ((((var_1_78) > (var_1_79)) ? (var_1_78) : (var_1_79)))));
  }
 } else {
  var_1_77 = (var_1_11 - var_1_10);
 }
 unsigned short int stepLocal_22 = var_1_35;
 unsigned short int stepLocal_21 = var_1_35;
 if ((var_1_52 - var_1_56) < stepLocal_21) {
  if (var_1_15) {
   if (stepLocal_22 >= var_1_77) {
    var_1_69 = (var_1_11 - (var_1_70 - var_1_1));
   } else {
    var_1_69 = (((((-16) > (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) ? (-16) : (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))))) + ((((var_1_11) < (last_1_var_1_69)) ? (var_1_11) : (last_1_var_1_69))));
   }
  } else {
   var_1_69 = (((((((((var_1_19) < (var_1_24)) ? (var_1_19) : (var_1_24))) - (var_1_70 - var_1_26))) < (-50)) ? ((((((var_1_19) < (var_1_24)) ? (var_1_19) : (var_1_24))) - (var_1_70 - var_1_26))) : (-50)));
  }
 } else {
  var_1_69 = ((var_1_11 + ((((var_1_10) < (var_1_19)) ? (var_1_10) : (var_1_19)))) + var_1_77);
 }
 var_1_64 = ((var_1_37 - var_1_69) + var_1_26);
 signed long int stepLocal_27 = var_1_96;
 if (var_1_42 < var_1_30) {
  if ((var_1_86 * var_1_60) < var_1_86) {
   if (var_1_41 <= stepLocal_27) {
    var_1_82 = ((((((var_1_79) > (-1)) ? (var_1_79) : (-1))) + var_1_83) + var_1_49);
   }
  }
 } else {
  if (! var_1_72) {
   if (var_1_28 <= var_1_39) {
    var_1_82 = var_1_10;
   } else {
    var_1_82 = var_1_49;
   }
  } else {
   var_1_82 = var_1_13;
  }
 }
 unsigned char stepLocal_10 = var_1_72;
 if ((var_1_27 > (var_1_28 - var_1_31)) || stepLocal_10) {
  var_1_53 = ((var_1_36 + var_1_54) - last_1_var_1_53);
 } else {
  var_1_53 = ((((var_1_36) > (var_1_8)) ? (var_1_36) : (var_1_8)));
 }
 var_1_57 = (((var_1_77 + var_1_26) + var_1_49) + var_1_82);
 if (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) == (var_1_13 + var_1_10)) {
  if ((var_1_82 * 256) >= var_1_11) {
   var_1_17 = (((((var_1_12 - var_1_10)) > (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5)))))))) ? ((var_1_12 - var_1_10)) : (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5)))))))));
  } else {
   var_1_17 = var_1_13;
  }
 }
 unsigned char stepLocal_1 = var_1_72;
 if (! var_1_72) {
  var_1_23 = ((((var_1_8) < (var_1_69)) ? (var_1_8) : (var_1_69)));
 } else {
  if (stepLocal_1 || (var_1_10 > var_1_13)) {
   var_1_23 = ((var_1_19 + 2) - var_1_10);
  } else {
   var_1_23 = var_1_19;
  }
 }
 if (var_1_15) {
  var_1_97 = var_1_13;
 } else {
  var_1_97 = var_1_69;
 }
 if (var_1_8 == (~ ((((var_1_26) > (var_1_13)) ? (var_1_26) : (var_1_13))))) {
  if (var_1_15 && var_1_87) {
   if ((var_1_57 + var_1_19) >= var_1_48) {
    var_1_50 = (var_1_8 + (var_1_57 + var_1_14));
   }
  } else {
   var_1_50 = (var_1_26 - var_1_35);
  }
 } else {
  var_1_50 = last_1_var_1_50;
 }
 signed char stepLocal_20 = var_1_12;
 signed long int stepLocal_19 = ((((var_1_50) < (var_1_37)) ? (var_1_50) : (var_1_37))) / var_1_35;
 if (200 < stepLocal_20) {
  if (stepLocal_19 <= var_1_53) {
   var_1_65 = var_1_13;
  } else {
   if (var_1_63 != (((((var_1_30 / var_1_39)) < ((- var_1_62))) ? ((var_1_30 / var_1_39)) : ((- var_1_62))))) {
    var_1_65 = ((var_1_49 + 16) - var_1_20);
   } else {
    var_1_65 = ((var_1_25 + var_1_20) - var_1_19);
   }
  }
 } else {
  var_1_65 = (((((var_1_38) < (((((var_1_20) < (last_1_var_1_65)) ? (var_1_20) : (last_1_var_1_65))))) ? (var_1_38) : (((((var_1_20) < (last_1_var_1_65)) ? (var_1_20) : (last_1_var_1_65)))))) + var_1_13);
 }
 signed long int stepLocal_12 = var_1_19 - var_1_26;
 signed short int stepLocal_11 = var_1_23;
 if (var_1_97 >= stepLocal_12) {
  if (var_1_42 <= (var_1_31 + var_1_22)) {
   var_1_55 = (var_1_26 + var_1_13);
  }
 } else {
  if (var_1_72) {
   if (((var_1_56 - var_1_8) - var_1_49) < stepLocal_11) {
    var_1_55 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
   } else {
    var_1_55 = (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - var_1_13);
   }
  }
 }
 if ((var_1_56 + (5 * var_1_36)) >= var_1_13) {
  if (var_1_72 || (var_1_21 == var_1_21)) {
   var_1_71 = (-5 + var_1_13);
  } else {
   var_1_71 = var_1_50;
  }
 } else {
  var_1_71 = var_1_19;
 }
 signed long int stepLocal_18 = var_1_49 / var_1_56;
 signed long int stepLocal_17 = ~ (var_1_36 * var_1_84);
 unsigned long int stepLocal_16 = (var_1_64 - var_1_13) & (var_1_71 ^ var_1_8);
 if (stepLocal_18 != ((((var_1_52) < ((var_1_35 - var_1_64))) ? (var_1_52) : ((var_1_35 - var_1_64))))) {
  if (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < stepLocal_17) {
   var_1_61 = (var_1_44 + var_1_31);
  } else {
   var_1_61 = ((var_1_30 + (var_1_62 - var_1_63)) - var_1_31);
  }
 } else {
  if (stepLocal_16 < (var_1_37 + var_1_26)) {
   var_1_61 = (((((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) > ((var_1_29 - var_1_62))) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : ((var_1_29 - var_1_62)))) < 0 ) ? -((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) > ((var_1_29 - var_1_62))) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : ((var_1_29 - var_1_62)))) : ((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) > ((var_1_29 - var_1_62))) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : ((var_1_29 - var_1_62))))));
  }
 }
 signed char stepLocal_23 = var_1_8;
 if (((var_1_68 - var_1_63) / var_1_39) != (100000.65 + var_1_61)) {
  var_1_76 = var_1_43;
 } else {
  if (stepLocal_23 >= var_1_10) {
   var_1_76 = ((((var_1_44) < (var_1_62)) ? (var_1_44) : (var_1_62)));
  }
 }
 signed long int stepLocal_9 = var_1_8 << var_1_49;
 unsigned long int stepLocal_8 = 16u;
 if (stepLocal_8 != ((var_1_37 / var_1_19) * var_1_13)) {
  if (var_1_16) {
   if (var_1_28 <= ((((var_1_76) < (((((49.35) > (var_1_76)) ? (49.35) : (var_1_76))))) ? (var_1_76) : (((((49.35) > (var_1_76)) ? (49.35) : (var_1_76))))))) {
    var_1_45 = (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) - (var_1_37 - (1000000000u - 1u)));
   } else {
    var_1_45 = ((var_1_48 - var_1_10) - last_1_var_1_45);
   }
  }
 } else {
  if (stepLocal_9 <= var_1_14) {
   var_1_45 = ((((((var_1_48 - var_1_26) - ((((0u) < (var_1_37)) ? (0u) : (var_1_37))))) > (((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13))))) ? (((var_1_48 - var_1_26) - ((((0u) < (var_1_37)) ? (0u) : (var_1_37))))) : (((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13))))));
  }
 }
 signed short int stepLocal_15 = var_1_65;
 unsigned char stepLocal_14 = var_1_16;
 signed long int stepLocal_13 = 2;
 if (var_1_92 && stepLocal_14) {
  var_1_58 = ((((var_1_36 + var_1_11) < 0 ) ? -(var_1_36 + var_1_11) : (var_1_36 + var_1_11)));
 } else {
  if (stepLocal_15 == var_1_69) {
   if ((var_1_42 / ((((var_1_28) > (var_1_60)) ? (var_1_28) : (var_1_60)))) <= var_1_32) {
    var_1_58 = ((((var_1_19) < ((var_1_11 + var_1_13))) ? (var_1_19) : ((var_1_11 + var_1_13))));
   } else {
    if ((last_1_var_1_58 * var_1_77) < stepLocal_13) {
     var_1_58 = (var_1_52 - var_1_36);
    }
   }
  } else {
   if (var_1_60 <= (var_1_61 * var_1_22)) {
    var_1_58 = ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)));
   } else {
    var_1_58 = var_1_26;
   }
  }
 }
 signed long int stepLocal_29 = -16;
 signed long int stepLocal_28 = ((((var_1_99) > (41991)) ? (var_1_99) : (41991))) - var_1_8;
 if (var_1_94 >= stepLocal_29) {
  if (var_1_15) {
   var_1_98 = var_1_58;
  }
 } else {
  if (var_1_94 < stepLocal_28) {
   var_1_98 = var_1_49;
  } else {
   var_1_98 = var_1_52;
  }
 }
 if (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) < ((var_1_68 - var_1_63) - (1.75 + var_1_31))) {
  if (var_1_15) {
   if (var_1_28 > (var_1_22 * var_1_76)) {
    var_1_67 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
   }
  } else {
   var_1_67 = ((((var_1_95) > ((var_1_82 - var_1_19))) ? (var_1_95) : ((var_1_82 - var_1_19))));
  }
 }
 signed long int stepLocal_26 = var_1_69 + var_1_98;
 signed long int stepLocal_25 = var_1_14 / ((((var_1_54) > (var_1_56)) ? (var_1_54) : (var_1_56)));
 if (var_1_25 <= stepLocal_25) {
  if (((var_1_82 + var_1_88) * var_1_37) <= stepLocal_26) {
   var_1_80 = (var_1_52 - (((((var_1_36 - var_1_13)) > (var_1_19)) ? ((var_1_36 - var_1_13)) : (var_1_19))));
  } else {
   if ((- (var_1_32 + var_1_43)) == var_1_27) {
    var_1_80 = ((var_1_54 - var_1_50) + var_1_25);
   } else {
    var_1_80 = (((((var_1_52) < (var_1_81)) ? (var_1_52) : (var_1_81))) - last_1_var_1_80);
   }
  }
 } else {
  var_1_80 = (var_1_52 - last_1_var_1_80);
 }
 signed long int stepLocal_4 = (var_1_35 + var_1_36) - ((((64) < (var_1_67)) ? (64) : (var_1_67)));
 signed long int stepLocal_3 = var_1_14 >> var_1_37;
 if (stepLocal_4 <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) {
  if ((var_1_11 / var_1_36) < stepLocal_3) {
   var_1_34 = ((((var_1_11) < (var_1_36)) ? (var_1_11) : (var_1_36)));
  } else {
   var_1_34 = ((((var_1_8) > (32)) ? (var_1_8) : (32)));
  }
 } else {
  var_1_34 = ((((var_1_11) > (var_1_67)) ? (var_1_11) : (var_1_67)));
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 62);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 4611686.018427382800e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 16383);
 assume_abort_if_not(var_1_35 <= 32768);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 16384);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 1073741823);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 assume_abort_if_not(var_1_39 != 0.0F);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -230584.3009213691390e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691390e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 2147483647);
 assume_abort_if_not(var_1_46 <= 4294967294);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 2147483647);
 assume_abort_if_not(var_1_47 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 3221225470);
 assume_abort_if_not(var_1_48 <= 4294967294);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 32767);
 assume_abort_if_not(var_1_52 <= 65534);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 16384);
 assume_abort_if_not(var_1_54 <= 32767);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 191);
 assume_abort_if_not(var_1_56 <= 255);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 assume_abort_if_not(var_1_60 != 0.0F);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 2305843.009213691390e+12F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= 4611686.018427387900e+12F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_70 >= 16383);
 assume_abort_if_not(var_1_70 <= 32766);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 0);
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= -31);
 assume_abort_if_not(var_1_78 <= 31);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= -31);
 assume_abort_if_not(var_1_79 <= 31);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 32767);
 assume_abort_if_not(var_1_81 <= 65534);
 var_1_83 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_83 >= -31);
 assume_abort_if_not(var_1_83 <= 31);
 var_1_99 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_99 >= 32767);
 assume_abort_if_not(var_1_99 <= 65535);
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_98 = var_1_98;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_33 > var_1_42) ? ((var_1_42 < var_1_33) ? ((((var_1_87 || var_1_87) && var_1_72) && var_1_15) ? (var_1_1 == ((signed char) (8 - (64 - var_1_8)))) : ((var_1_86 <= (var_1_42 / 15.8)) ? (var_1_1 == ((signed char) -4)) : (var_1_1 == ((signed char) ((((((var_1_10 - var_1_8) - var_1_11)) > ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14))))) ? (((var_1_10 - var_1_8) - var_1_11)) : ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14)))))))))) : 1) : 1) && ((last_1_var_1_21 > last_1_var_1_86) ? (var_1_15 == ((unsigned char) ((last_1_var_1_86 == 31.65) || var_1_16))) : 1)) && ((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) == (var_1_13 + var_1_10)) ? (((var_1_82 * 256) >= var_1_11) ? (var_1_17 == ((signed char) (((((var_1_12 - var_1_10)) > (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5)))))))) ? ((var_1_12 - var_1_10)) : (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))))))))) : (var_1_17 == ((signed char) var_1_13))) : 1)) && (var_1_16 ? (var_1_18 == ((unsigned char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : (var_1_18 == ((unsigned char) (var_1_19 - 64))))) && (var_1_20 == ((signed short int) (var_1_13 - ((var_1_11 + 50) + ((((var_1_85) > (var_1_19)) ? (var_1_85) : (var_1_19)))))))) && (((4.5 / 9999.5) > ((((var_1_33) > (var_1_86)) ? (var_1_33) : (var_1_86)))) ? (var_1_21 == ((float) 4.6f)) : (var_1_87 ? (var_1_21 == ((float) var_1_22)) : (var_1_21 == ((float) ((((var_1_22) < (64.8f)) ? (var_1_22) : (64.8f)))))))) && ((! var_1_72) ? (var_1_23 == ((signed short int) ((((var_1_8) < (var_1_69)) ? (var_1_8) : (var_1_69))))) : ((var_1_72 || (var_1_10 > var_1_13)) ? (var_1_23 == ((signed short int) ((var_1_19 + 2) - var_1_10))) : (var_1_23 == ((signed short int) var_1_19))))) && (var_1_24 == ((signed long int) -100))) && (var_1_16 ? (var_1_25 == ((unsigned char) ((((var_1_11) > ((var_1_19 - (64 - var_1_8)))) ? (var_1_11) : ((var_1_19 - (64 - var_1_8))))))) : (var_1_25 == ((unsigned char) (var_1_19 - ((((var_1_10) > (var_1_26)) ? (var_1_10) : (var_1_26)))))))) && (var_1_87 ? (var_1_27 == ((double) ((var_1_28 - var_1_29) - ((4.1406872328101468E18 - var_1_30) + var_1_31)))) : ((var_1_31 == ((((var_1_22) > ((var_1_86 + var_1_86))) ? (var_1_22) : ((var_1_86 + var_1_86))))) ? (var_1_27 == ((double) (((((var_1_30 + var_1_29)) < ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28))))) ? ((var_1_30 + var_1_29)) : ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28)))))))) : (var_1_27 == ((double) (((((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) > (2.75)) ? ((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) : (2.75)))))))) && (((last_1_var_1_15 || (last_1_var_1_98 > var_1_8)) && (last_1_var_1_42 > var_1_30)) ? (var_1_33 == ((double) (var_1_31 - var_1_29))) : (var_1_33 == ((double) (var_1_31 + var_1_30))))) && ((((var_1_35 + var_1_36) - ((((64) < (var_1_67)) ? (64) : (var_1_67)))) <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) ? (((var_1_11 / var_1_36) < (var_1_14 >> var_1_37)) ? (var_1_34 == ((unsigned short int) ((((var_1_11) < (var_1_36)) ? (var_1_11) : (var_1_36))))) : (var_1_34 == ((unsigned short int) ((((var_1_8) > (32)) ? (var_1_8) : (32)))))) : (var_1_34 == ((unsigned short int) ((((var_1_11) > (var_1_67)) ? (var_1_11) : (var_1_67))))))) && ((((((var_1_28) > ((var_1_32 + 63.125))) ? (var_1_28) : ((var_1_32 + 63.125)))) <= (var_1_22 / var_1_39)) ? (var_1_15 ? (var_1_38 == ((signed long int) var_1_90)) : 1) : (var_1_38 == ((signed long int) var_1_94)))) && ((! (var_1_30 <= var_1_22)) ? ((var_1_29 > (var_1_30 + (var_1_28 - var_1_31))) ? (var_1_40 == ((signed long int) ((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10))))) : 1) : 1)) && ((var_1_39 > var_1_22) ? (var_1_41 == ((signed short int) (((((var_1_26) > ((256 + var_1_84))) ? (var_1_26) : ((256 + var_1_84)))) - var_1_11))) : 1)) && ((last_1_var_1_34 > ((((last_1_var_1_50) < 0 ) ? -(last_1_var_1_50) : (last_1_var_1_50)))) ? ((((((var_1_10) > (var_1_36)) ? (var_1_10) : (var_1_36))) >= ((((last_1_var_1_65) > (50)) ? (last_1_var_1_65) : (50)))) ? (var_1_42 == ((float) (((((((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))) < (var_1_32)) ? (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))) : (var_1_32))) + var_1_29))) : (var_1_42 == ((float) (var_1_29 + (var_1_31 - var_1_30))))) : ((last_1_var_1_34 == (256 - 5)) ? (var_1_42 == ((float) ((((var_1_30) < (((((var_1_43) > (var_1_28)) ? (var_1_43) : (var_1_28))))) ? (var_1_30) : (((((var_1_43) > (var_1_28)) ? (var_1_43) : (var_1_28)))))))) : (var_1_42 == ((float) ((var_1_30 + ((((10.375f) > (var_1_44)) ? (10.375f) : (var_1_44)))) + (var_1_29 - var_1_31))))))) && ((16u != ((var_1_37 / var_1_19) * var_1_13)) ? (var_1_16 ? ((var_1_28 <= ((((var_1_76) < (((((49.35) > (var_1_76)) ? (49.35) : (var_1_76))))) ? (var_1_76) : (((((49.35) > (var_1_76)) ? (49.35) : (var_1_76))))))) ? (var_1_45 == ((unsigned long int) (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) - (var_1_37 - (1000000000u - 1u))))) : (var_1_45 == ((unsigned long int) ((var_1_48 - var_1_10) - last_1_var_1_45)))) : 1) : (((var_1_8 << var_1_49) <= var_1_14) ? (var_1_45 == ((unsigned long int) ((((((var_1_48 - var_1_26) - ((((0u) < (var_1_37)) ? (0u) : (var_1_37))))) > (((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13))))) ? (((var_1_48 - var_1_26) - ((((0u) < (var_1_37)) ? (0u) : (var_1_37))))) : (((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13)))))))) : 1))) && ((var_1_8 == (~ ((((var_1_26) > (var_1_13)) ? (var_1_26) : (var_1_13))))) ? ((var_1_15 && var_1_87) ? (((var_1_57 + var_1_19) >= var_1_48) ? (var_1_50 == ((signed long int) (var_1_8 + (var_1_57 + var_1_14)))) : 1) : (var_1_50 == ((signed long int) (var_1_26 - var_1_35)))) : (var_1_50 == ((signed long int) last_1_var_1_50)))) && ((var_1_96 >= var_1_37) ? (var_1_51 == ((unsigned short int) (var_1_52 - var_1_93))) : ((var_1_10 != -5) ? (var_1_51 == ((unsigned short int) ((((var_1_52) < ((var_1_49 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) ? (var_1_52) : ((var_1_49 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))))))) : (var_1_51 == ((unsigned short int) ((((var_1_26) > (var_1_36)) ? (var_1_26) : (var_1_36)))))))) && (((var_1_27 > (var_1_28 - var_1_31)) || var_1_72) ? (var_1_53 == ((unsigned short int) ((var_1_36 + var_1_54) - last_1_var_1_53))) : (var_1_53 == ((unsigned short int) ((((var_1_36) > (var_1_8)) ? (var_1_36) : (var_1_8))))))) && ((var_1_97 >= (var_1_19 - var_1_26)) ? ((var_1_42 <= (var_1_31 + var_1_22)) ? (var_1_55 == ((unsigned char) (var_1_26 + var_1_13))) : 1) : (var_1_72 ? ((((var_1_56 - var_1_8) - var_1_49) < var_1_23) ? (var_1_55 == ((unsigned char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : (var_1_55 == ((unsigned char) (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - var_1_13)))) : 1))) && (var_1_57 == ((signed short int) (((var_1_77 + var_1_26) + var_1_49) + var_1_82)))) && ((var_1_92 && var_1_16) ? (var_1_58 == ((unsigned short int) ((((var_1_36 + var_1_11) < 0 ) ? -(var_1_36 + var_1_11) : (var_1_36 + var_1_11))))) : ((var_1_65 == var_1_69) ? (((var_1_42 / ((((var_1_28) > (var_1_60)) ? (var_1_28) : (var_1_60)))) <= var_1_32) ? (var_1_58 == ((unsigned short int) ((((var_1_19) < ((var_1_11 + var_1_13))) ? (var_1_19) : ((var_1_11 + var_1_13)))))) : (((last_1_var_1_58 * var_1_77) < 2) ? (var_1_58 == ((unsigned short int) (var_1_52 - var_1_36))) : 1)) : ((var_1_60 <= (var_1_61 * var_1_22)) ? (var_1_58 == ((unsigned short int) ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))))) : (var_1_58 == ((unsigned short int) var_1_26)))))) && (((var_1_49 / var_1_56) != ((((var_1_52) < ((var_1_35 - var_1_64))) ? (var_1_52) : ((var_1_35 - var_1_64))))) ? ((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < (~ (var_1_36 * var_1_84))) ? (var_1_61 == ((float) (var_1_44 + var_1_31))) : (var_1_61 == ((float) ((var_1_30 + (var_1_62 - var_1_63)) - var_1_31)))) : ((((var_1_64 - var_1_13) & (var_1_71 ^ var_1_8)) < (var_1_37 + var_1_26)) ? (var_1_61 == ((float) (((((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) > ((var_1_29 - var_1_62))) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : ((var_1_29 - var_1_62)))) < 0 ) ? -((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) > ((var_1_29 - var_1_62))) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : ((var_1_29 - var_1_62)))) : ((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) > ((var_1_29 - var_1_62))) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : ((var_1_29 - var_1_62)))))))) : 1))) && (var_1_64 == ((unsigned long int) ((var_1_37 - var_1_69) + var_1_26)))) && ((200 < var_1_12) ? (((((((var_1_50) < (var_1_37)) ? (var_1_50) : (var_1_37))) / var_1_35) <= var_1_53) ? (var_1_65 == ((signed short int) var_1_13)) : ((var_1_63 != (((((var_1_30 / var_1_39)) < ((- var_1_62))) ? ((var_1_30 / var_1_39)) : ((- var_1_62))))) ? (var_1_65 == ((signed short int) ((var_1_49 + 16) - var_1_20))) : (var_1_65 == ((signed short int) ((var_1_25 + var_1_20) - var_1_19))))) : (var_1_65 == ((signed short int) (((((var_1_38) < (((((var_1_20) < (last_1_var_1_65)) ? (var_1_20) : (last_1_var_1_65))))) ? (var_1_38) : (((((var_1_20) < (last_1_var_1_65)) ? (var_1_20) : (last_1_var_1_65)))))) + var_1_13))))) && ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) < ((var_1_68 - var_1_63) - (1.75 + var_1_31))) ? (var_1_15 ? ((var_1_28 > (var_1_22 * var_1_76)) ? (var_1_67 == ((signed short int) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : 1) : (var_1_67 == ((signed short int) ((((var_1_95) > ((var_1_82 - var_1_19))) ? (var_1_95) : ((var_1_82 - var_1_19))))))) : 1)) && (((var_1_52 - var_1_56) < var_1_35) ? (var_1_15 ? ((var_1_35 >= var_1_77) ? (var_1_69 == ((signed short int) (var_1_11 - (var_1_70 - var_1_1)))) : (var_1_69 == ((signed short int) (((((-16) > (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) ? (-16) : (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))))) + ((((var_1_11) < (last_1_var_1_69)) ? (var_1_11) : (last_1_var_1_69))))))) : (var_1_69 == ((signed short int) (((((((((var_1_19) < (var_1_24)) ? (var_1_19) : (var_1_24))) - (var_1_70 - var_1_26))) < (-50)) ? ((((((var_1_19) < (var_1_24)) ? (var_1_19) : (var_1_24))) - (var_1_70 - var_1_26))) : (-50)))))) : (var_1_69 == ((signed short int) ((var_1_11 + ((((var_1_10) < (var_1_19)) ? (var_1_10) : (var_1_19)))) + var_1_77))))) && (((var_1_56 + (5 * var_1_36)) >= var_1_13) ? ((var_1_72 || (var_1_21 == var_1_21)) ? (var_1_71 == ((signed long int) (-5 + var_1_13))) : (var_1_71 == ((signed long int) var_1_50))) : (var_1_71 == ((signed long int) var_1_19)))) && (last_1_var_1_92 ? ((var_1_29 <= last_1_var_1_42) ? (var_1_72 == ((unsigned char) var_1_73)) : 1) : (var_1_72 == ((unsigned char) ((((((last_1_var_1_58) > (last_1_var_1_51)) ? (last_1_var_1_58) : (last_1_var_1_51))) < var_1_14) || (! (var_1_73 && var_1_75))))))) && ((((var_1_68 - var_1_63) / var_1_39) != (100000.65 + var_1_61)) ? (var_1_76 == ((float) var_1_43)) : ((var_1_8 >= var_1_10) ? (var_1_76 == ((float) ((((var_1_44) < (var_1_62)) ? (var_1_44) : (var_1_62))))) : 1))) && ((var_1_86 < (var_1_30 / var_1_62)) ? (((var_1_26 << var_1_11) >= ((var_1_56 - var_1_35) * (var_1_95 + var_1_54))) ? (var_1_77 == ((signed char) (var_1_8 + var_1_49))) : (var_1_77 == ((signed char) (((((var_1_8) < (50)) ? (var_1_8) : (50))) + (var_1_49 + ((((var_1_78) > (var_1_79)) ? (var_1_78) : (var_1_79)))))))) : (var_1_77 == ((signed char) (var_1_11 - var_1_10))))) && ((var_1_25 <= (var_1_14 / ((((var_1_54) > (var_1_56)) ? (var_1_54) : (var_1_56))))) ? ((((var_1_82 + var_1_88) * var_1_37) <= (var_1_69 + var_1_98)) ? (var_1_80 == ((unsigned short int) (var_1_52 - (((((var_1_36 - var_1_13)) > (var_1_19)) ? ((var_1_36 - var_1_13)) : (var_1_19)))))) : (((- (var_1_32 + var_1_43)) == var_1_27) ? (var_1_80 == ((unsigned short int) ((var_1_54 - var_1_50) + var_1_25))) : (var_1_80 == ((unsigned short int) (((((var_1_52) < (var_1_81)) ? (var_1_52) : (var_1_81))) - last_1_var_1_80))))) : (var_1_80 == ((unsigned short int) (var_1_52 - last_1_var_1_80))))) && ((var_1_42 < var_1_30) ? (((var_1_86 * var_1_60) < var_1_86) ? ((var_1_41 <= var_1_96) ? (var_1_82 == ((signed char) ((((((var_1_79) > (-1)) ? (var_1_79) : (-1))) + var_1_83) + var_1_49))) : 1) : 1) : ((! var_1_72) ? ((var_1_28 <= var_1_39) ? (var_1_82 == ((signed char) var_1_10)) : (var_1_82 == ((signed char) var_1_49))) : (var_1_82 == ((signed char) var_1_13))))) && (var_1_73 ? (var_1_84 == ((signed long int) -1)) : (var_1_84 == ((signed long int) 64)))) && (var_1_75 ? (var_1_85 == ((unsigned short int) var_1_70)) : 1)) && (var_1_16 ? (var_1_86 == ((double) var_1_62)) : (var_1_86 == ((double) var_1_63)))) && (var_1_87 == ((unsigned char) var_1_16))) && (var_1_72 ? (var_1_88 == ((unsigned short int) var_1_36)) : (var_1_88 == ((unsigned short int) var_1_25)))) && (var_1_75 ? (var_1_90 == ((unsigned long int) var_1_10)) : (var_1_90 == ((unsigned long int) var_1_47)))) && (var_1_91 == ((signed long int) var_1_54))) && (var_1_92 == ((unsigned char) var_1_75))) && (var_1_87 ? (var_1_93 == ((unsigned short int) var_1_52)) : 1)) && (var_1_94 == ((unsigned char) var_1_49))) && (var_1_87 ? (var_1_95 == ((signed short int) var_1_8)) : 1)) && (var_1_96 == ((signed long int) var_1_93))) && (var_1_15 ? (var_1_97 == ((signed short int) var_1_13)) : (var_1_97 == ((signed short int) var_1_69)))) && ((var_1_94 >= -16) ? (var_1_15 ? (var_1_98 == ((signed long int) var_1_58)) : 1) : ((var_1_94 < (((((var_1_99) > (41991)) ? (var_1_99) : (41991))) - var_1_8)) ? (var_1_98 == ((signed long int) var_1_49)) : (var_1_98 == ((signed long int) var_1_52))))
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
