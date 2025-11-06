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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 128.25;
float var_1_4 = 63.4;
float var_1_5 = 15.5;
float var_1_6 = 100.75;
signed long int var_1_8 = -16;
signed short int var_1_9 = -16;
float var_1_11 = 31.5;
float var_1_12 = 0.0;
signed long int var_1_13 = -64;
signed long int var_1_14 = 64;
unsigned short int var_1_15 = 100;
unsigned long int var_1_16 = 64;
unsigned long int var_1_17 = 3721669810;
unsigned long int var_1_18 = 1329907550;
unsigned long int var_1_19 = 1129118186;
unsigned long int var_1_20 = 50;
unsigned long int var_1_21 = 4;
unsigned long int var_1_22 = 1000000000;
unsigned long int var_1_23 = 1000000000;
unsigned long int var_1_24 = 1;
unsigned long int var_1_25 = 1593992914;
unsigned long int var_1_26 = 1695338471;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
signed char var_1_35 = 1;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 0;
signed char var_1_40 = 5;
signed char var_1_41 = 64;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 5;
unsigned char var_1_45 = 0;
signed long int var_1_46 = -100;
signed long int var_1_48 = 1430312281;
signed long int var_1_49 = 1314803969;
unsigned long int var_1_50 = 256;
unsigned long int var_1_51 = 256;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 25;
unsigned long int var_1_54 = 1;
unsigned long int var_1_56 = 4228611513;
signed long int var_1_57 = 64;
signed short int var_1_58 = -5;
unsigned long int var_1_59 = 64;
signed short int var_1_60 = 2;
signed short int var_1_61 = 256;
signed short int var_1_63 = 28763;
unsigned long int var_1_64 = 2;
signed char var_1_65 = -128;
double var_1_66 = 128.25;
unsigned short int var_1_67 = 10;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 1;
signed long int var_1_70 = 5;
signed long int var_1_71 = 1;
unsigned long int var_1_73 = 0;
signed char var_1_74 = 8;
double var_1_76 = 1.6;
unsigned short int var_1_77 = 51697;
double var_1_78 = 0.0;
double var_1_79 = 127.25;
signed char var_1_80 = -128;
signed char var_1_81 = 1;
signed short int var_1_82 = 16;
signed short int var_1_83 = -1;
signed long int var_1_84 = 0;
unsigned char var_1_85 = 16;
float var_1_86 = 127.75;
float var_1_87 = 1.5;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 1;
unsigned char var_1_91 = 64;
signed short int var_1_92 = -25;
signed short int var_1_93 = -200;
signed short int var_1_94 = 1;
unsigned char var_1_95 = 1;
signed short int var_1_96 = -256;
unsigned char var_1_97 = 10;
unsigned char var_1_98 = 1;
double var_1_99 = 199.875;
unsigned char var_1_100 = 16;
float var_1_101 = 10000.2;
float var_1_102 = 99.025;
signed char var_1_103 = -8;
unsigned long int var_1_104 = 16;
unsigned char var_1_105 = 0;
unsigned long int last_1_var_1_16 = 64;
unsigned char last_1_var_1_42 = 0;
unsigned long int last_1_var_1_44 = 5;
signed long int last_1_var_1_57 = 64;
signed short int last_1_var_1_61 = 256;
unsigned short int last_1_var_1_67 = 10;
unsigned char last_1_var_1_69 = 1;
unsigned long int last_1_var_1_73 = 0;
double last_1_var_1_76 = 1.6;
signed short int last_1_var_1_96 = -256;
unsigned char last_1_var_1_98 = 1;
double last_1_var_1_99 = 199.875;
unsigned long int last_1_var_1_104 = 16;
void initially(void) {
}
void step(void) {
 if (var_1_5 != var_1_6) {
  if (var_1_12 >= (var_1_5 - var_1_6)) {
   if (var_1_19 < last_1_var_1_67) {
    var_1_20 = ((((var_1_21) > (last_1_var_1_44)) ? (var_1_21) : (last_1_var_1_44)));
   } else {
    if (var_1_12 <= last_1_var_1_99) {
     var_1_20 = ((var_1_18 + (var_1_22 + var_1_23)) - var_1_24);
    }
   }
  } else {
   var_1_20 = (var_1_17 - (var_1_14 + last_1_var_1_67));
  }
 } else {
  var_1_20 = ((var_1_25 + var_1_26) - var_1_19);
 }
 unsigned long int stepLocal_27 = var_1_56 - var_1_48;
 if (last_1_var_1_104 <= stepLocal_27) {
  var_1_88 = (var_1_43 || ((last_1_var_1_42 && last_1_var_1_69) && var_1_28));
 }
 if (var_1_88) {
  var_1_96 = var_1_83;
 } else {
  var_1_96 = var_1_81;
 }
 unsigned long int stepLocal_3 = last_1_var_1_104 * (var_1_17 - last_1_var_1_16);
 if (last_1_var_1_98) {
  var_1_27 = var_1_28;
 } else {
  if (var_1_24 != stepLocal_3) {
   if (63.25 <= (var_1_12 * ((((last_1_var_1_76) < 0 ) ? -(last_1_var_1_76) : (last_1_var_1_76))))) {
    var_1_27 = ((var_1_30 && var_1_31) && ((! var_1_28) && var_1_32));
   } else {
    var_1_27 = ((! (var_1_30 && var_1_32)) || (var_1_31 && (var_1_28 && var_1_33)));
   }
  } else {
   var_1_27 = (var_1_30 && (! var_1_28));
  }
 }
 unsigned char stepLocal_15 = var_1_43;
 if (stepLocal_15 && var_1_27) {
  var_1_66 = ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) > (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))));
 } else {
  var_1_66 = var_1_5;
 }
 if (! var_1_27) {
  var_1_45 = (var_1_38 - var_1_37);
 }
 if (var_1_5 < var_1_6) {
  var_1_64 = ((((((((last_1_var_1_61) < (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (last_1_var_1_61) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) > ((var_1_56 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))) ? (((((last_1_var_1_61) < (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (last_1_var_1_61) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) : ((var_1_56 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))));
 }
 unsigned long int stepLocal_5 = last_1_var_1_73;
 if (stepLocal_5 > (last_1_var_1_16 / ((((var_1_26) < (var_1_38)) ? (var_1_26) : (var_1_38))))) {
  var_1_44 = ((((var_1_35) < (var_1_41)) ? (var_1_35) : (var_1_41)));
 }
 if (last_1_var_1_98) {
  var_1_104 = var_1_56;
 } else {
  var_1_104 = last_1_var_1_96;
 }
 if (! (var_1_31 && var_1_32)) {
  var_1_40 = ((var_1_41 - 4) - var_1_39);
 } else {
  var_1_40 = var_1_39;
 }
 if (var_1_21 < var_1_37) {
  var_1_42 = ((var_1_19 > var_1_21) && var_1_43);
 } else {
  var_1_42 = (! 1);
 }
 if (var_1_28) {
  var_1_50 = var_1_51;
 }
 unsigned char stepLocal_10 = var_1_37;
 if (stepLocal_10 > last_1_var_1_57) {
  var_1_57 = var_1_22;
 }
 if (var_1_38 >= (var_1_19 / var_1_41)) {
  var_1_60 = (-1 + var_1_38);
 }
 var_1_65 = var_1_35;
 signed long int stepLocal_19 = var_1_49;
 if ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + (var_1_77 - var_1_70)) > stepLocal_19) {
  if (var_1_43) {
   if (var_1_30) {
    var_1_76 = ((var_1_6 - (var_1_78 - var_1_79)) + ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))));
   } else {
    var_1_76 = (var_1_6 - 1.2);
   }
  } else {
   var_1_76 = (var_1_4 + var_1_78);
  }
 } else {
  var_1_76 = ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4)));
 }
 if ((((((var_1_77) < (50547)) ? (var_1_77) : (50547))) - var_1_37) > 2) {
  var_1_85 = var_1_70;
 }
 unsigned long int stepLocal_26 = var_1_22;
 signed long int stepLocal_25 = var_1_13;
 if (stepLocal_25 >= var_1_20) {
  if (stepLocal_26 >= var_1_50) {
   var_1_86 = ((((var_1_5 - var_1_79) < 0 ) ? -(var_1_5 - var_1_79) : (var_1_5 - var_1_79)));
  } else {
   var_1_86 = var_1_87;
  }
 }
 var_1_91 = var_1_81;
 var_1_92 = var_1_71;
 var_1_93 = var_1_38;
 var_1_94 = var_1_39;
 if (var_1_42) {
  var_1_95 = var_1_81;
 } else {
  var_1_95 = 128;
 }
 var_1_98 = var_1_43;
 if (var_1_43) {
  var_1_99 = var_1_6;
 }
 var_1_100 = var_1_81;
 var_1_101 = var_1_102;
 if (var_1_28) {
  var_1_103 = var_1_39;
 } else {
  var_1_103 = var_1_41;
 }
 if ((var_1_66 / var_1_11) > var_1_76) {
  if (var_1_88) {
   if (var_1_25 < (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21))) + (var_1_81 + var_1_49))) {
    var_1_89 = (! var_1_30);
   } else {
    if (var_1_104 >= (var_1_38 - var_1_81)) {
     var_1_89 = var_1_32;
    } else {
     var_1_89 = var_1_43;
    }
   }
  } else {
   var_1_89 = 0;
  }
 }
 unsigned long int stepLocal_14 = var_1_44;
 unsigned char stepLocal_13 = var_1_88;
 unsigned long int stepLocal_12 = var_1_18 / (2980507943u - 64u);
 if (((var_1_56 | var_1_100) * (var_1_25 * var_1_50)) > stepLocal_12) {
  if ((var_1_104 >= 16) && stepLocal_13) {
   if (var_1_17 <= stepLocal_14) {
    var_1_61 = (var_1_96 + ((((var_1_100) < (var_1_39)) ? (var_1_100) : (var_1_39))));
   }
  } else {
   var_1_61 = var_1_39;
  }
 } else {
  var_1_61 = (var_1_50 - (var_1_63 - (10000 - var_1_38)));
 }
 unsigned char stepLocal_2 = var_1_12 <= var_1_4;
 signed long int stepLocal_1 = (((var_1_14) < (0)) ? (var_1_14) : (0));
 if (stepLocal_1 >= var_1_93) {
  if (stepLocal_2 && var_1_89) {
   var_1_15 = 1;
  }
 } else {
  var_1_15 = var_1_91;
 }
 unsigned long int stepLocal_4 = var_1_19 << var_1_35;
 if (stepLocal_4 <= ((((var_1_14) < ((var_1_85 ^ var_1_64))) ? (var_1_14) : ((var_1_85 ^ var_1_64))))) {
  var_1_34 = (var_1_35 + var_1_37);
 } else {
  var_1_34 = (var_1_38 - (var_1_35 + var_1_39));
 }
 signed short int stepLocal_29 = var_1_60;
 unsigned long int stepLocal_28 = var_1_64;
 if (stepLocal_28 != var_1_57) {
  if (var_1_31) {
   if (stepLocal_29 < (- (var_1_38 - var_1_70))) {
    var_1_105 = (var_1_30 && var_1_32);
   } else {
    var_1_105 = var_1_28;
   }
  }
 }
 unsigned long int stepLocal_17 = var_1_44;
 if (stepLocal_17 <= var_1_13) {
  var_1_73 = ((var_1_56 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) - (var_1_18 - (var_1_23 - var_1_41)));
 }
 signed short int stepLocal_18 = var_1_93;
 if (var_1_4 > var_1_12) {
  var_1_74 = (var_1_35 + var_1_39);
 } else {
  if (! (var_1_12 < (var_1_11 + var_1_76))) {
   var_1_74 = ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) < (var_1_71)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_71)));
  } else {
   if (var_1_105) {
    if (var_1_35 == stepLocal_18) {
     var_1_74 = (((((((((var_1_71 + var_1_35)) < (var_1_39)) ? ((var_1_71 + var_1_35)) : (var_1_39)))) > ((var_1_41 - var_1_70))) ? ((((((var_1_71 + var_1_35)) < (var_1_39)) ? ((var_1_71 + var_1_35)) : (var_1_39)))) : ((var_1_41 - var_1_70))));
    } else {
     var_1_74 = var_1_71;
    }
   } else {
    if (var_1_33) {
     var_1_74 = ((((((((((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) < (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))) ? (((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) : (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))))) < (var_1_71)) ? (((((((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) < (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))) ? (((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) : (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))))) : (var_1_71)));
    }
   }
  }
 }
 unsigned long int stepLocal_9 = (((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19));
 signed long int stepLocal_8 = 128 + var_1_96;
 unsigned long int stepLocal_7 = var_1_23 << var_1_9;
 if (var_1_48 >= stepLocal_9) {
  if (var_1_76 == var_1_5) {
   if (var_1_31) {
    var_1_53 = var_1_23;
   } else {
    var_1_53 = ((((var_1_37) < (var_1_24)) ? (var_1_37) : (var_1_24)));
   }
  } else {
   var_1_53 = ((var_1_19 - var_1_54) + var_1_49);
  }
 } else {
  if (var_1_9 < stepLocal_8) {
   if (var_1_100 != stepLocal_7) {
    var_1_53 = var_1_100;
   }
  } else {
   var_1_53 = ((var_1_56 - var_1_41) - ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))));
  }
 }
 unsigned long int stepLocal_23 = (((var_1_96) < (var_1_53)) ? (var_1_96) : (var_1_53));
 unsigned char stepLocal_22 = 4.6 >= (var_1_66 / var_1_12);
 unsigned long int stepLocal_21 = (var_1_26 + var_1_73) ^ var_1_41;
 unsigned long int stepLocal_20 = var_1_73 + (- var_1_25);
 if (stepLocal_20 <= var_1_14) {
  if (var_1_19 > stepLocal_23) {
   var_1_80 = var_1_71;
  } else {
   if (stepLocal_21 > var_1_53) {
    var_1_80 = ((((var_1_41) > ((var_1_70 - var_1_35))) ? (var_1_41) : ((var_1_70 - var_1_35))));
   } else {
    var_1_80 = ((var_1_70 + (var_1_35 + var_1_71)) - var_1_39);
   }
  }
 } else {
  if (stepLocal_22 && (var_1_57 >= var_1_64)) {
   var_1_80 = (((((var_1_71) > ((var_1_70 + var_1_35))) ? (var_1_71) : ((var_1_70 + var_1_35)))) + (var_1_39 - var_1_81));
  } else {
   var_1_80 = (((((2) > (var_1_70)) ? (2) : (var_1_70))) - (var_1_35 + var_1_39));
  }
 }
 if (var_1_96 != var_1_20) {
  var_1_84 = (((((var_1_77) < (var_1_63)) ? (var_1_77) : (var_1_63))) - (var_1_49 - (var_1_35 + var_1_15)));
 }
 if (var_1_19 == var_1_84) {
  var_1_68 = ((50.5f < var_1_6) || (var_1_30 || var_1_32));
 } else {
  var_1_68 = (((var_1_30 || var_1_33) && var_1_43) || var_1_28);
 }
 if (var_1_61 <= var_1_95) {
  var_1_1 = ((((var_1_4 + (var_1_5 - var_1_6)) < 0 ) ? -(var_1_4 + (var_1_5 - var_1_6)) : (var_1_4 + (var_1_5 - var_1_6))));
 } else {
  if (var_1_68) {
   var_1_1 = ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5)));
  }
 }
 if (var_1_11 != (((((var_1_6) > (1.4f)) ? (var_1_6) : (1.4f))) / var_1_12)) {
  if (var_1_6 >= var_1_1) {
   var_1_16 = ((((var_1_14) < (var_1_45)) ? (var_1_14) : (var_1_45)));
  } else {
   var_1_16 = ((((var_1_45) < ((var_1_17 - ((((var_1_60) > (var_1_64)) ? (var_1_60) : (var_1_64)))))) ? (var_1_45) : ((var_1_17 - ((((var_1_60) > (var_1_64)) ? (var_1_60) : (var_1_64)))))));
  }
 } else {
  var_1_16 = (var_1_45 + (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_60));
 }
 unsigned long int stepLocal_0 = ((((var_1_73) > (var_1_93)) ? (var_1_73) : (var_1_93))) * ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 if (var_1_66 <= ((((49.4f) > (var_1_5)) ? (49.4f) : (var_1_5)))) {
  if (var_1_6 <= var_1_66) {
   if (stepLocal_0 <= var_1_16) {
    var_1_8 = 5;
   } else {
    var_1_8 = ((((var_1_73) < ((var_1_93 + var_1_9))) ? (var_1_73) : ((var_1_93 + var_1_9))));
   }
  } else {
   var_1_8 = ((4 + var_1_93) + var_1_9);
  }
 } else {
  if (var_1_5 <= (var_1_6 / var_1_11)) {
   if (((var_1_12 - var_1_6) - var_1_5) <= var_1_11) {
    var_1_8 = (var_1_9 + var_1_73);
   } else {
    var_1_8 = (((((var_1_73) > (var_1_93)) ? (var_1_73) : (var_1_93))) + var_1_9);
   }
  } else {
   if (var_1_42) {
    var_1_8 = (((((var_1_73) < (4)) ? (var_1_73) : (4))) + ((((((((var_1_9) > (var_1_93)) ? (var_1_9) : (var_1_93)))) < (var_1_13)) ? (((((var_1_9) > (var_1_93)) ? (var_1_9) : (var_1_93)))) : (var_1_13))));
   } else {
    var_1_8 = (((((var_1_73 - (var_1_93 + var_1_14))) < (var_1_9)) ? ((var_1_73 - (var_1_93 + var_1_14))) : (var_1_9)));
   }
  }
 }
 if ((- 50) != ((((16) < ((256 % var_1_19))) ? (16) : ((256 % var_1_19))))) {
  var_1_52 = (var_1_89 || (! (var_1_105 && var_1_43)));
 } else {
  if (var_1_13 < ((((16) < 0 ) ? -(16) : (16)))) {
   if (var_1_26 > 8u) {
    var_1_52 = ((! var_1_33) && var_1_31);
   } else {
    if (var_1_30) {
     if (var_1_28 || var_1_27) {
      var_1_52 = (var_1_43 && var_1_28);
     } else {
      var_1_52 = (var_1_31 && var_1_32);
     }
    } else {
     var_1_52 = (((var_1_37 + var_1_8) >= var_1_41) && var_1_43);
    }
   }
  } else {
   var_1_52 = ((var_1_28 || var_1_33) || var_1_43);
  }
 }
 if (var_1_52) {
  var_1_97 = var_1_38;
 } else {
  var_1_97 = var_1_35;
 }
 unsigned char stepLocal_6 = var_1_52;
 if (stepLocal_6 && var_1_30) {
  var_1_46 = ((var_1_48 - ((((var_1_23) < (var_1_104)) ? (var_1_23) : (var_1_104)))) - 64);
 } else {
  var_1_46 = (var_1_34 - (var_1_49 - var_1_39));
 }
 unsigned char stepLocal_16 = var_1_14 >= var_1_46;
 if (stepLocal_16 || var_1_28) {
  var_1_67 = (var_1_38 + var_1_44);
 }
 if ((var_1_39 % var_1_38) <= ((((var_1_20) < (var_1_93)) ? (var_1_20) : (var_1_93)))) {
  if (var_1_24 != (var_1_35 << (var_1_70 - var_1_71))) {
   if (var_1_56 == var_1_51) {
    var_1_69 = var_1_30;
   }
  } else {
   if (((((32) > ((var_1_57 + var_1_39))) ? (32) : ((var_1_57 + var_1_39)))) != var_1_64) {
    var_1_69 = var_1_30;
   } else {
    if (! var_1_42) {
     var_1_69 = (var_1_42 || var_1_30);
    }
   }
  }
 } else {
  if ((var_1_74 / var_1_41) <= var_1_46) {
   var_1_69 = (! (var_1_28 && var_1_33));
  } else {
   var_1_69 = (var_1_98 && (var_1_43 || var_1_33));
  }
 }
 if (var_1_69 && (var_1_73 <= (var_1_44 / var_1_22))) {
  if (((var_1_66 + var_1_4) / var_1_11) >= (- var_1_12)) {
   var_1_59 = var_1_18;
  }
 } else {
  var_1_59 = (var_1_16 + (var_1_35 + var_1_97));
 }
 unsigned long int stepLocal_24 = var_1_50 / (var_1_41 + 128u);
 if (((var_1_77 - var_1_71) * var_1_17) < stepLocal_24) {
  var_1_82 = (var_1_83 + (var_1_95 - var_1_97));
 } else {
  var_1_82 = var_1_63;
 }
 signed long int stepLocal_11 = ~ (var_1_37 << var_1_18);
 if (stepLocal_11 > (var_1_26 * var_1_16)) {
  var_1_58 = var_1_35;
 } else {
  var_1_58 = (((((((((var_1_38 + var_1_61)) < (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))) ? ((var_1_38 + var_1_61)) : (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))))) > (var_1_37)) ? ((((((var_1_38 + var_1_61)) < (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))) ? ((var_1_38 + var_1_61)) : (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))))) : (var_1_37)));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427388000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -1073741823);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 4294967294);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 536870912);
 assume_abort_if_not(var_1_22 <= 1073741824);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 536870912);
 assume_abort_if_not(var_1_23 <= 1073741823);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 1073741824);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 127);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 62);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_48 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_48 >= 1073741822);
 assume_abort_if_not(var_1_48 <= 2147483646);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 1073741823);
 assume_abort_if_not(var_1_49 <= 2147483646);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 1073741823);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 3221225470);
 assume_abort_if_not(var_1_56 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_63 >= 16383);
 assume_abort_if_not(var_1_63 <= 32766);
 var_1_70 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_70 >= 3);
 assume_abort_if_not(var_1_70 <= 6);
 var_1_71 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 3);
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 32767);
 assume_abort_if_not(var_1_77 <= 65535);
 var_1_78 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_78 >= 2305843.009213691400e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691400e+12F && var_1_79 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 63);
 var_1_83 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_83 >= -16383);
 assume_abort_if_not(var_1_83 <= 16383);
 var_1_87 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_87 >= -922337.2036854766000e+13F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 9223372.036854766000e+12F && var_1_87 >= 1.0e-20F ));
 var_1_102 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_102 >= -922337.2036854766000e+13F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 9223372.036854766000e+12F && var_1_102 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_104 = var_1_104;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_61 <= var_1_95) ? (var_1_1 == ((float) ((((var_1_4 + (var_1_5 - var_1_6)) < 0 ) ? -(var_1_4 + (var_1_5 - var_1_6)) : (var_1_4 + (var_1_5 - var_1_6)))))) : (var_1_68 ? (var_1_1 == ((float) ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))))) : 1)) && ((var_1_66 <= ((((49.4f) > (var_1_5)) ? (49.4f) : (var_1_5)))) ? ((var_1_6 <= var_1_66) ? (((((((var_1_73) > (var_1_93)) ? (var_1_73) : (var_1_93))) * ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) <= var_1_16) ? (var_1_8 == ((signed long int) 5)) : (var_1_8 == ((signed long int) ((((var_1_73) < ((var_1_93 + var_1_9))) ? (var_1_73) : ((var_1_93 + var_1_9))))))) : (var_1_8 == ((signed long int) ((4 + var_1_93) + var_1_9)))) : ((var_1_5 <= (var_1_6 / var_1_11)) ? ((((var_1_12 - var_1_6) - var_1_5) <= var_1_11) ? (var_1_8 == ((signed long int) (var_1_9 + var_1_73))) : (var_1_8 == ((signed long int) (((((var_1_73) > (var_1_93)) ? (var_1_73) : (var_1_93))) + var_1_9)))) : (var_1_42 ? (var_1_8 == ((signed long int) (((((var_1_73) < (4)) ? (var_1_73) : (4))) + ((((((((var_1_9) > (var_1_93)) ? (var_1_9) : (var_1_93)))) < (var_1_13)) ? (((((var_1_9) > (var_1_93)) ? (var_1_9) : (var_1_93)))) : (var_1_13)))))) : (var_1_8 == ((signed long int) (((((var_1_73 - (var_1_93 + var_1_14))) < (var_1_9)) ? ((var_1_73 - (var_1_93 + var_1_14))) : (var_1_9))))))))) && ((((((var_1_14) < (0)) ? (var_1_14) : (0))) >= var_1_93) ? (((var_1_12 <= var_1_4) && var_1_89) ? (var_1_15 == ((unsigned short int) 1)) : 1) : (var_1_15 == ((unsigned short int) var_1_91)))) && ((var_1_11 != (((((var_1_6) > (1.4f)) ? (var_1_6) : (1.4f))) / var_1_12)) ? ((var_1_6 >= var_1_1) ? (var_1_16 == ((unsigned long int) ((((var_1_14) < (var_1_45)) ? (var_1_14) : (var_1_45))))) : (var_1_16 == ((unsigned long int) ((((var_1_45) < ((var_1_17 - ((((var_1_60) > (var_1_64)) ? (var_1_60) : (var_1_64)))))) ? (var_1_45) : ((var_1_17 - ((((var_1_60) > (var_1_64)) ? (var_1_60) : (var_1_64)))))))))) : (var_1_16 == ((unsigned long int) (var_1_45 + (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_60)))))) && ((var_1_5 != var_1_6) ? ((var_1_12 >= (var_1_5 - var_1_6)) ? ((var_1_19 < last_1_var_1_67) ? (var_1_20 == ((unsigned long int) ((((var_1_21) > (last_1_var_1_44)) ? (var_1_21) : (last_1_var_1_44))))) : ((var_1_12 <= last_1_var_1_99) ? (var_1_20 == ((unsigned long int) ((var_1_18 + (var_1_22 + var_1_23)) - var_1_24))) : 1)) : (var_1_20 == ((unsigned long int) (var_1_17 - (var_1_14 + last_1_var_1_67))))) : (var_1_20 == ((unsigned long int) ((var_1_25 + var_1_26) - var_1_19))))) && (last_1_var_1_98 ? (var_1_27 == ((unsigned char) var_1_28)) : ((var_1_24 != (last_1_var_1_104 * (var_1_17 - last_1_var_1_16))) ? ((63.25 <= (var_1_12 * ((((last_1_var_1_76) < 0 ) ? -(last_1_var_1_76) : (last_1_var_1_76))))) ? (var_1_27 == ((unsigned char) ((var_1_30 && var_1_31) && ((! var_1_28) && var_1_32)))) : (var_1_27 == ((unsigned char) ((! (var_1_30 && var_1_32)) || (var_1_31 && (var_1_28 && var_1_33)))))) : (var_1_27 == ((unsigned char) (var_1_30 && (! var_1_28))))))) && (((var_1_19 << var_1_35) <= ((((var_1_14) < ((var_1_85 ^ var_1_64))) ? (var_1_14) : ((var_1_85 ^ var_1_64))))) ? (var_1_34 == ((unsigned char) (var_1_35 + var_1_37))) : (var_1_34 == ((unsigned char) (var_1_38 - (var_1_35 + var_1_39)))))) && ((! (var_1_31 && var_1_32)) ? (var_1_40 == ((signed char) ((var_1_41 - 4) - var_1_39))) : (var_1_40 == ((signed char) var_1_39)))) && ((var_1_21 < var_1_37) ? (var_1_42 == ((unsigned char) ((var_1_19 > var_1_21) && var_1_43))) : (var_1_42 == ((unsigned char) (! 1))))) && ((last_1_var_1_73 > (last_1_var_1_16 / ((((var_1_26) < (var_1_38)) ? (var_1_26) : (var_1_38))))) ? (var_1_44 == ((unsigned long int) ((((var_1_35) < (var_1_41)) ? (var_1_35) : (var_1_41))))) : 1)) && ((! var_1_27) ? (var_1_45 == ((unsigned char) (var_1_38 - var_1_37))) : 1)) && ((var_1_52 && var_1_30) ? (var_1_46 == ((signed long int) ((var_1_48 - ((((var_1_23) < (var_1_104)) ? (var_1_23) : (var_1_104)))) - 64))) : (var_1_46 == ((signed long int) (var_1_34 - (var_1_49 - var_1_39)))))) && (var_1_28 ? (var_1_50 == ((unsigned long int) var_1_51)) : 1)) && (((- 50) != ((((16) < ((256 % var_1_19))) ? (16) : ((256 % var_1_19))))) ? (var_1_52 == ((unsigned char) (var_1_89 || (! (var_1_105 && var_1_43))))) : ((var_1_13 < ((((16) < 0 ) ? -(16) : (16)))) ? ((var_1_26 > 8u) ? (var_1_52 == ((unsigned char) ((! var_1_33) && var_1_31))) : (var_1_30 ? ((var_1_28 || var_1_27) ? (var_1_52 == ((unsigned char) (var_1_43 && var_1_28))) : (var_1_52 == ((unsigned char) (var_1_31 && var_1_32)))) : (var_1_52 == ((unsigned char) (((var_1_37 + var_1_8) >= var_1_41) && var_1_43))))) : (var_1_52 == ((unsigned char) ((var_1_28 || var_1_33) || var_1_43)))))) && ((var_1_48 >= ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) ? ((var_1_76 == var_1_5) ? (var_1_31 ? (var_1_53 == ((unsigned long int) var_1_23)) : (var_1_53 == ((unsigned long int) ((((var_1_37) < (var_1_24)) ? (var_1_37) : (var_1_24)))))) : (var_1_53 == ((unsigned long int) ((var_1_19 - var_1_54) + var_1_49)))) : ((var_1_9 < (128 + var_1_96)) ? ((var_1_100 != (var_1_23 << var_1_9)) ? (var_1_53 == ((unsigned long int) var_1_100)) : 1) : (var_1_53 == ((unsigned long int) ((var_1_56 - var_1_41) - ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))))))))) && ((var_1_37 > last_1_var_1_57) ? (var_1_57 == ((signed long int) var_1_22)) : 1)) && (((~ (var_1_37 << var_1_18)) > (var_1_26 * var_1_16)) ? (var_1_58 == ((signed short int) var_1_35)) : (var_1_58 == ((signed short int) (((((((((var_1_38 + var_1_61)) < (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))) ? ((var_1_38 + var_1_61)) : (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))))) > (var_1_37)) ? ((((((var_1_38 + var_1_61)) < (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))) ? ((var_1_38 + var_1_61)) : (((((var_1_82) > (var_1_34)) ? (var_1_82) : (var_1_34))))))) : (var_1_37))))))) && ((var_1_69 && (var_1_73 <= (var_1_44 / var_1_22))) ? ((((var_1_66 + var_1_4) / var_1_11) >= (- var_1_12)) ? (var_1_59 == ((unsigned long int) var_1_18)) : 1) : (var_1_59 == ((unsigned long int) (var_1_16 + (var_1_35 + var_1_97)))))) && ((var_1_38 >= (var_1_19 / var_1_41)) ? (var_1_60 == ((signed short int) (-1 + var_1_38))) : 1)) && ((((var_1_56 | var_1_100) * (var_1_25 * var_1_50)) > (var_1_18 / (2980507943u - 64u))) ? (((var_1_104 >= 16) && var_1_88) ? ((var_1_17 <= var_1_44) ? (var_1_61 == ((signed short int) (var_1_96 + ((((var_1_100) < (var_1_39)) ? (var_1_100) : (var_1_39)))))) : 1) : (var_1_61 == ((signed short int) var_1_39))) : (var_1_61 == ((signed short int) (var_1_50 - (var_1_63 - (10000 - var_1_38))))))) && ((var_1_5 < var_1_6) ? (var_1_64 == ((unsigned long int) ((((((((last_1_var_1_61) < (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (last_1_var_1_61) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) > ((var_1_56 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))) ? (((((last_1_var_1_61) < (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (last_1_var_1_61) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) : ((var_1_56 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))))))) : 1)) && (var_1_65 == ((signed char) var_1_35))) && ((var_1_43 && var_1_27) ? (var_1_66 == ((double) ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) > (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))))) : (var_1_66 == ((double) var_1_5)))) && (((var_1_14 >= var_1_46) || var_1_28) ? (var_1_67 == ((unsigned short int) (var_1_38 + var_1_44))) : 1)) && ((var_1_19 == var_1_84) ? (var_1_68 == ((unsigned char) ((50.5f < var_1_6) || (var_1_30 || var_1_32)))) : (var_1_68 == ((unsigned char) (((var_1_30 || var_1_33) && var_1_43) || var_1_28))))) && (((var_1_39 % var_1_38) <= ((((var_1_20) < (var_1_93)) ? (var_1_20) : (var_1_93)))) ? ((var_1_24 != (var_1_35 << (var_1_70 - var_1_71))) ? ((var_1_56 == var_1_51) ? (var_1_69 == ((unsigned char) var_1_30)) : 1) : ((((((32) > ((var_1_57 + var_1_39))) ? (32) : ((var_1_57 + var_1_39)))) != var_1_64) ? (var_1_69 == ((unsigned char) var_1_30)) : ((! var_1_42) ? (var_1_69 == ((unsigned char) (var_1_42 || var_1_30))) : 1))) : (((var_1_74 / var_1_41) <= var_1_46) ? (var_1_69 == ((unsigned char) (! (var_1_28 && var_1_33)))) : (var_1_69 == ((unsigned char) (var_1_98 && (var_1_43 || var_1_33))))))) && ((var_1_44 <= var_1_13) ? (var_1_73 == ((unsigned long int) ((var_1_56 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) - (var_1_18 - (var_1_23 - var_1_41))))) : 1)) && ((var_1_4 > var_1_12) ? (var_1_74 == ((signed char) (var_1_35 + var_1_39))) : ((! (var_1_12 < (var_1_11 + var_1_76))) ? (var_1_74 == ((signed char) ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) < (var_1_71)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_71))))) : (var_1_105 ? ((var_1_35 == var_1_93) ? (var_1_74 == ((signed char) (((((((((var_1_71 + var_1_35)) < (var_1_39)) ? ((var_1_71 + var_1_35)) : (var_1_39)))) > ((var_1_41 - var_1_70))) ? ((((((var_1_71 + var_1_35)) < (var_1_39)) ? ((var_1_71 + var_1_35)) : (var_1_39)))) : ((var_1_41 - var_1_70)))))) : (var_1_74 == ((signed char) var_1_71))) : (var_1_33 ? (var_1_74 == ((signed char) ((((((((((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) < (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))) ? (((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) : (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))))) < (var_1_71)) ? (((((((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) < (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))) ? (((((var_1_70) < (var_1_41)) ? (var_1_70) : (var_1_41)))) : (((((var_1_35) < (var_1_39)) ? (var_1_35) : (var_1_39))))))) : (var_1_71))))) : 1))))) && (((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + (var_1_77 - var_1_70)) > var_1_49) ? (var_1_43 ? (var_1_30 ? (var_1_76 == ((double) ((var_1_6 - (var_1_78 - var_1_79)) + ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))))) : (var_1_76 == ((double) (var_1_6 - 1.2)))) : (var_1_76 == ((double) (var_1_4 + var_1_78)))) : (var_1_76 == ((double) ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4))))))) && (((var_1_73 + (- var_1_25)) <= var_1_14) ? ((var_1_19 > ((((var_1_96) < (var_1_53)) ? (var_1_96) : (var_1_53)))) ? (var_1_80 == ((signed char) var_1_71)) : ((((var_1_26 + var_1_73) ^ var_1_41) > var_1_53) ? (var_1_80 == ((signed char) ((((var_1_41) > ((var_1_70 - var_1_35))) ? (var_1_41) : ((var_1_70 - var_1_35)))))) : (var_1_80 == ((signed char) ((var_1_70 + (var_1_35 + var_1_71)) - var_1_39))))) : (((4.6 >= (var_1_66 / var_1_12)) && (var_1_57 >= var_1_64)) ? (var_1_80 == ((signed char) (((((var_1_71) > ((var_1_70 + var_1_35))) ? (var_1_71) : ((var_1_70 + var_1_35)))) + (var_1_39 - var_1_81)))) : (var_1_80 == ((signed char) (((((2) > (var_1_70)) ? (2) : (var_1_70))) - (var_1_35 + var_1_39))))))) && ((((var_1_77 - var_1_71) * var_1_17) < (var_1_50 / (var_1_41 + 128u))) ? (var_1_82 == ((signed short int) (var_1_83 + (var_1_95 - var_1_97)))) : (var_1_82 == ((signed short int) var_1_63)))) && ((var_1_96 != var_1_20) ? (var_1_84 == ((signed long int) (((((var_1_77) < (var_1_63)) ? (var_1_77) : (var_1_63))) - (var_1_49 - (var_1_35 + var_1_15))))) : 1)) && (((((((var_1_77) < (50547)) ? (var_1_77) : (50547))) - var_1_37) > 2) ? (var_1_85 == ((unsigned char) var_1_70)) : 1)) && ((var_1_13 >= var_1_20) ? ((var_1_22 >= var_1_50) ? (var_1_86 == ((float) ((((var_1_5 - var_1_79) < 0 ) ? -(var_1_5 - var_1_79) : (var_1_5 - var_1_79))))) : (var_1_86 == ((float) var_1_87))) : 1)) && ((last_1_var_1_104 <= (var_1_56 - var_1_48)) ? (var_1_88 == ((unsigned char) (var_1_43 || ((last_1_var_1_42 && last_1_var_1_69) && var_1_28)))) : 1)) && (((var_1_66 / var_1_11) > var_1_76) ? (var_1_88 ? ((var_1_25 < (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21))) + (var_1_81 + var_1_49))) ? (var_1_89 == ((unsigned char) (! var_1_30))) : ((var_1_104 >= (var_1_38 - var_1_81)) ? (var_1_89 == ((unsigned char) var_1_32)) : (var_1_89 == ((unsigned char) var_1_43)))) : (var_1_89 == ((unsigned char) 0))) : 1)) && (var_1_91 == ((unsigned char) var_1_81))) && (var_1_92 == ((signed short int) var_1_71))) && (var_1_93 == ((signed short int) var_1_38))) && (var_1_94 == ((signed short int) var_1_39))) && (var_1_42 ? (var_1_95 == ((unsigned char) var_1_81)) : (var_1_95 == ((unsigned char) 128)))) && (var_1_88 ? (var_1_96 == ((signed short int) var_1_83)) : (var_1_96 == ((signed short int) var_1_81)))) && (var_1_52 ? (var_1_97 == ((unsigned char) var_1_38)) : (var_1_97 == ((unsigned char) var_1_35)))) && (var_1_98 == ((unsigned char) var_1_43))) && (var_1_43 ? (var_1_99 == ((double) var_1_6)) : 1)) && (var_1_100 == ((unsigned char) var_1_81))) && (var_1_101 == ((float) var_1_102))) && (var_1_28 ? (var_1_103 == ((signed char) var_1_39)) : (var_1_103 == ((signed char) var_1_41)))) && (last_1_var_1_98 ? (var_1_104 == ((unsigned long int) var_1_56)) : (var_1_104 == ((unsigned long int) last_1_var_1_96)))) && ((var_1_64 != var_1_57) ? (var_1_31 ? ((var_1_60 < (- (var_1_38 - var_1_70))) ? (var_1_105 == ((unsigned char) (var_1_30 && var_1_32))) : (var_1_105 == ((unsigned char) var_1_28))) : 1) : 1)
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
