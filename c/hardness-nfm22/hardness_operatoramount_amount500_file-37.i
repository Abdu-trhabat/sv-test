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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 2;
signed char var_1_3 = 10;
signed char var_1_4 = 64;
signed char var_1_5 = 5;
signed long int var_1_9 = -4;
double var_1_10 = 15.8;
double var_1_11 = 4.875;
double var_1_13 = 0.75;
signed long int var_1_14 = 1574757398;
double var_1_15 = 16.8;
double var_1_16 = 4.875;
double var_1_17 = 0.3;
signed short int var_1_18 = 128;
signed short int var_1_20 = 17137;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 40227;
double var_1_23 = 127.2;
double var_1_25 = 16.9;
double var_1_26 = 8.2;
double var_1_27 = 256.5;
double var_1_28 = 0.0;
double var_1_29 = 64.75;
double var_1_30 = 0.0;
signed char var_1_31 = -5;
signed char var_1_32 = 0;
signed char var_1_33 = 32;
signed char var_1_34 = 8;
signed char var_1_35 = 4;
float var_1_36 = 999999999.2;
float var_1_37 = 0.0;
double var_1_38 = 0.0;
unsigned long int var_1_39 = 25;
unsigned long int var_1_40 = 3418746940;
unsigned long int var_1_41 = 3623996685;
unsigned long int var_1_42 = 1839827877;
signed long int var_1_43 = 128;
signed long int var_1_45 = 1756759270;
unsigned long int var_1_46 = 200;
unsigned short int var_1_47 = 256;
unsigned short int var_1_48 = 4;
unsigned short int var_1_49 = 54323;
unsigned short int var_1_50 = 63950;
unsigned long int var_1_51 = 2;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_57 = 8;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 4;
unsigned short int var_1_61 = 5;
unsigned short int var_1_62 = 64;
unsigned short int var_1_63 = 10000;
unsigned short int var_1_64 = 10000;
unsigned short int var_1_65 = 100;
float var_1_66 = 4.875;
float var_1_67 = 1.2;
unsigned char var_1_68 = 0;
signed long int var_1_69 = 2;
unsigned long int var_1_70 = 5;
unsigned long int var_1_71 = 1;
unsigned short int var_1_72 = 2;
signed char var_1_73 = 5;
unsigned short int var_1_74 = 100;
unsigned short int var_1_75 = 1;
unsigned short int var_1_76 = 27833;
unsigned short int var_1_77 = 21332;
signed char var_1_78 = 2;
signed char var_1_79 = 32;
signed char var_1_80 = 4;
signed char var_1_81 = 32;
float var_1_82 = 32.625;
float var_1_83 = 1.5;
unsigned long int var_1_84 = 128;
unsigned long int var_1_85 = 4;
double var_1_86 = 256.75;
double var_1_87 = 1000000000.5;
double var_1_88 = 50.375;
double var_1_89 = 5.05;
double var_1_90 = 0.25;
signed short int var_1_91 = 64;
unsigned long int var_1_92 = 2;
double var_1_94 = 2.65;
double var_1_95 = 64.5;
signed long int var_1_96 = -1;
signed char var_1_97 = 4;
double var_1_98 = 0.25;
signed char var_1_99 = -1;
unsigned char var_1_100 = 1;
unsigned long int var_1_101 = 1;
float var_1_102 = 10000000000000.43;
unsigned char var_1_103 = 1;
unsigned char var_1_104 = 50;
signed short int last_1_var_1_18 = 128;
unsigned short int last_1_var_1_21 = 0;
unsigned long int last_1_var_1_46 = 200;
unsigned short int last_1_var_1_47 = 256;
unsigned short int last_1_var_1_48 = 4;
unsigned char last_1_var_1_59 = 4;
unsigned char last_1_var_1_68 = 0;
signed long int last_1_var_1_69 = 2;
unsigned long int last_1_var_1_85 = 4;
signed char last_1_var_1_97 = 4;
unsigned char last_1_var_1_100 = 1;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_12 = last_1_var_1_46 >> var_1_57;
 if (last_1_var_1_68) {
  var_1_52 = (var_1_53 || var_1_54);
 } else {
  if (! (var_1_45 > (~ last_1_var_1_97))) {
   var_1_52 = (last_1_var_1_100 || var_1_55);
  } else {
   if (last_1_var_1_48 < stepLocal_12) {
    if ((var_1_13 * (var_1_28 / 1.0000000000002E12)) >= var_1_27) {
     var_1_52 = (! (! (! var_1_55)));
    } else {
     var_1_52 = (var_1_55 && var_1_58);
    }
   } else {
    var_1_52 = ((last_1_var_1_59 > last_1_var_1_18) || (var_1_58 && (var_1_54 || var_1_55)));
   }
  }
 }
 if (var_1_52) {
  var_1_103 = var_1_57;
 } else {
  var_1_103 = var_1_81;
 }
 var_1_15 = (var_1_16 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))));
 unsigned char stepLocal_6 = var_1_52;
 if (var_1_13 >= var_1_17) {
  var_1_31 = ((((var_1_32) < ((var_1_5 + var_1_33))) ? (var_1_32) : ((var_1_5 + var_1_33))));
 } else {
  if (var_1_52 && stepLocal_6) {
   var_1_31 = (((((var_1_33) < ((var_1_34 + var_1_35))) ? (var_1_33) : ((var_1_34 + var_1_35)))) + 16);
  } else {
   var_1_31 = var_1_34;
  }
 }
 signed short int stepLocal_14 = var_1_20;
 if (var_1_55) {
  if (stepLocal_14 > var_1_57) {
   var_1_61 = var_1_57;
  } else {
   var_1_61 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
  }
 }
 var_1_73 = (var_1_34 + var_1_33);
 if (var_1_57 >= (- var_1_20)) {
  var_1_74 = var_1_5;
 } else {
  var_1_74 = 5;
 }
 var_1_78 = (((((var_1_5) < (var_1_57)) ? (var_1_5) : (var_1_57))) - ((((var_1_79) < (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))))) ? (var_1_79) : (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81)))))));
 if (var_1_53) {
  var_1_92 = var_1_14;
 } else {
  var_1_92 = var_1_61;
 }
 if (var_1_58) {
  var_1_94 = var_1_67;
 } else {
  var_1_94 = var_1_37;
 }
 var_1_95 = var_1_29;
 var_1_96 = -4;
 var_1_97 = 2;
 if (var_1_52) {
  var_1_98 = var_1_30;
 } else {
  var_1_98 = var_1_88;
 }
 var_1_100 = var_1_53;
 if (var_1_52) {
  var_1_102 = var_1_25;
 }
 unsigned char stepLocal_27 = var_1_55;
 if (stepLocal_27 || (! var_1_100)) {
  if (! var_1_100) {
   var_1_104 = ((((var_1_57) < (var_1_80)) ? (var_1_57) : (var_1_80)));
  }
 } else {
  if (var_1_54) {
   var_1_104 = var_1_57;
  } else {
   var_1_104 = var_1_4;
  }
 }
 signed char stepLocal_3 = var_1_3;
 if (var_1_100) {
  if (stepLocal_3 > last_1_var_1_18) {
   var_1_18 = ((((((((var_1_103) > (8)) ? (var_1_103) : (8)))) > (var_1_5)) ? (((((var_1_103) > (8)) ? (var_1_103) : (8)))) : (var_1_5)));
  } else {
   var_1_18 = ((var_1_20 - var_1_5) - var_1_4);
  }
 } else {
  var_1_18 = ((((((((var_1_4) < (var_1_103)) ? (var_1_4) : (var_1_103)))) > (var_1_20)) ? (((((var_1_4) < (var_1_103)) ? (var_1_4) : (var_1_103)))) : (var_1_20)));
 }
 unsigned char stepLocal_2 = var_1_52;
 if (((var_1_10 - var_1_11) >= (var_1_102 / var_1_13)) || stepLocal_2) {
  var_1_9 = ((var_1_14 - var_1_4) - var_1_5);
 } else {
  var_1_9 = var_1_4;
 }
 signed char stepLocal_5 = var_1_3;
 signed long int stepLocal_4 = var_1_22 - ((((var_1_20) > (var_1_4)) ? (var_1_20) : (var_1_4)));
 if (stepLocal_5 > ((var_1_4 - var_1_5) * var_1_9)) {
  var_1_21 = ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)));
 } else {
  if (stepLocal_4 > last_1_var_1_21) {
   var_1_21 = var_1_20;
  }
 }
 if (var_1_37 != ((var_1_29 * var_1_95) / ((((var_1_13) < (2.25f)) ? (var_1_13) : (2.25f))))) {
  var_1_46 = (var_1_41 - var_1_92);
 } else {
  var_1_46 = ((((var_1_40) > ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14))) ? (var_1_40) : ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14))));
 }
 var_1_71 = var_1_46;
 signed char stepLocal_19 = var_1_73;
 if (stepLocal_19 >= var_1_71) {
  var_1_72 = (var_1_50 - var_1_73);
 }
 if (var_1_100) {
  var_1_99 = var_1_80;
 } else {
  var_1_99 = var_1_33;
 }
 signed char stepLocal_9 = var_1_99;
 if (! (var_1_4 < var_1_5)) {
  if (stepLocal_9 >= ((((((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) < ((var_1_40 * last_1_var_1_47))) ? (((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) : ((var_1_40 * last_1_var_1_47))))) {
   if (var_1_52) {
    var_1_47 = (var_1_4 + ((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))));
   } else {
    var_1_47 = var_1_5;
   }
  }
 }
 signed long int stepLocal_23 = (((var_1_47) < (var_1_76)) ? (var_1_47) : (var_1_76));
 if (var_1_32 > stepLocal_23) {
  var_1_84 = (var_1_92 + ((((var_1_5) < (var_1_79)) ? (var_1_5) : (var_1_79))));
 } else {
  var_1_84 = ((((var_1_41 - (var_1_45 - var_1_80)) < 0 ) ? -(var_1_41 - (var_1_45 - var_1_80)) : (var_1_41 - (var_1_45 - var_1_80))));
 }
 signed long int stepLocal_1 = (((var_1_5) > (((((var_1_73) > (var_1_72)) ? (var_1_73) : (var_1_72))))) ? (var_1_5) : (((((var_1_73) > (var_1_72)) ? (var_1_73) : (var_1_72)))));
 signed long int stepLocal_0 = 500 * var_1_73;
 if (var_1_100) {
  if ((var_1_3 - (var_1_4 - var_1_5)) >= stepLocal_0) {
   var_1_1 = (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) < ((var_1_5 - var_1_72))) ? (((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_5 - var_1_72)))) + var_1_31);
  }
 } else {
  if (stepLocal_1 <= (~ (1 / -8))) {
   var_1_1 = (var_1_72 - var_1_4);
  } else {
   var_1_1 = var_1_5;
  }
 }
 unsigned short int stepLocal_26 = var_1_47;
 unsigned char stepLocal_25 = var_1_78 >= -4;
 if (var_1_55 && stepLocal_25) {
  if (var_1_49 <= stepLocal_26) {
   var_1_86 = (((((var_1_29 - (var_1_26 + var_1_27))) > (((var_1_87 + 4.6) - var_1_28))) ? ((var_1_29 - (var_1_26 + var_1_27))) : (((var_1_87 + 4.6) - var_1_28))));
  } else {
   var_1_86 = (((((var_1_83) > (var_1_17)) ? (var_1_83) : (var_1_17))) + var_1_87);
  }
 } else {
  var_1_86 = ((((((var_1_88 + var_1_25)) < (var_1_83)) ? ((var_1_88 + var_1_25)) : (var_1_83))) + (var_1_89 + var_1_90));
 }
 unsigned long int stepLocal_17 = var_1_84 + (var_1_3 * -128);
 if ((~ 1) >= stepLocal_17) {
  var_1_68 = ((var_1_84 < var_1_20) || var_1_55);
 } else {
  var_1_68 = ((var_1_100 || var_1_58) && var_1_55);
 }
 if (var_1_68) {
  if (var_1_52 && var_1_100) {
   if (var_1_37 < var_1_38) {
    if ((var_1_10 * var_1_30) > (255.75 / ((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))))) {
     var_1_43 = (var_1_14 - var_1_47);
    }
   }
  } else {
   var_1_43 = (var_1_3 - var_1_4);
  }
 } else {
  var_1_43 = (var_1_22 - (var_1_45 - var_1_4));
 }
 if (var_1_55) {
  var_1_101 = var_1_41;
 } else {
  var_1_101 = var_1_43;
 }
 signed long int stepLocal_16 = -8 / var_1_49;
 unsigned long int stepLocal_15 = var_1_71;
 if (stepLocal_15 != var_1_49) {
  if (var_1_68) {
   var_1_65 = (((((var_1_64 + var_1_20)) > (((((256) < (var_1_63)) ? (256) : (var_1_63))))) ? ((var_1_64 + var_1_20)) : (((((256) < (var_1_63)) ? (256) : (var_1_63))))));
  } else {
   if ((var_1_26 - ((((var_1_29) > (var_1_27)) ? (var_1_29) : (var_1_27)))) < var_1_28) {
    if (stepLocal_16 > (2 + var_1_14)) {
     var_1_65 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < (var_1_78)) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_78)));
    } else {
     var_1_65 = 256;
    }
   } else {
    var_1_65 = ((((10) < 0 ) ? -(10) : (10)));
   }
  }
 }
 if (var_1_68 || var_1_68) {
  var_1_66 = ((((var_1_28) < (var_1_67)) ? (var_1_28) : (var_1_67)));
 } else {
  if (var_1_17 >= ((((var_1_15) > (var_1_30)) ? (var_1_15) : (var_1_30)))) {
   var_1_66 = (var_1_26 + var_1_16);
  }
 }
 unsigned long int stepLocal_13 = var_1_101;
 if (var_1_17 > (- var_1_27)) {
  if (var_1_38 < var_1_11) {
   if (stepLocal_13 >= ((((var_1_101) < 0 ) ? -(var_1_101) : (var_1_101)))) {
    var_1_59 = (((((var_1_57) < (var_1_5)) ? (var_1_57) : (var_1_5))) + var_1_4);
   }
  }
 }
 signed long int stepLocal_11 = -4;
 unsigned char stepLocal_10 = (var_1_40 & var_1_41) >= (var_1_49 % var_1_51);
 if (! (var_1_52 || (var_1_41 > var_1_59))) {
  var_1_48 = ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) - var_1_5) - 8);
 } else {
  if ((last_1_var_1_48 != var_1_20) && stepLocal_10) {
   var_1_48 = ((((((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) < (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))) ? (((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) : (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))));
  } else {
   if (var_1_52) {
    if (stepLocal_11 < last_1_var_1_48) {
     var_1_48 = (var_1_49 - var_1_20);
    }
   } else {
    var_1_48 = (8 + var_1_20);
   }
  }
 }
 if ((var_1_35 > (var_1_5 - var_1_4)) && (var_1_32 > var_1_34)) {
  var_1_39 = ((((var_1_5) < ((((((10000000u + var_1_14)) < (var_1_84)) ? ((10000000u + var_1_14)) : (var_1_84))))) ? (var_1_5) : ((((((10000000u + var_1_14)) < (var_1_84)) ? ((10000000u + var_1_14)) : (var_1_84))))));
 } else {
  if (((var_1_96 & 16u) ^ var_1_65) > var_1_4) {
   if ((- var_1_29) != var_1_38) {
    var_1_39 = ((((100000000u) > (var_1_22)) ? (100000000u) : (var_1_22)));
   } else {
    if (var_1_35 <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
     var_1_39 = (var_1_40 - var_1_84);
    } else {
     var_1_39 = ((((((var_1_41 - var_1_22)) > ((3470546746u - var_1_20))) ? ((var_1_41 - var_1_22)) : ((3470546746u - var_1_20)))) - (var_1_42 - ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))));
    }
   }
  } else {
   var_1_39 = var_1_20;
  }
 }
 if (var_1_41 >= (- 32u)) {
  if ((var_1_49 < var_1_65) && var_1_68) {
   var_1_62 = (var_1_20 + ((var_1_63 + var_1_64) - var_1_43));
  } else {
   var_1_62 = ((var_1_49 - (var_1_64 - var_1_43)) - var_1_20);
  }
 }
 if (var_1_68) {
  if (var_1_49 > ((- var_1_4) | (var_1_48 * var_1_61))) {
   if (var_1_48 >= last_1_var_1_69) {
    var_1_69 = ((((var_1_48) < ((((((var_1_92) < (-10000)) ? (var_1_92) : (-10000))) + var_1_31))) ? (var_1_48) : ((((((var_1_92) < (-10000)) ? (var_1_92) : (-10000))) + var_1_31))));
   } else {
    var_1_69 = (((((var_1_62) < (var_1_47)) ? (var_1_62) : (var_1_47))) - (((((-1227892636) < 0 ) ? -(-1227892636) : (-1227892636))) - 32));
   }
  }
 } else {
  if (((- var_1_64) * var_1_42) > (- 8u)) {
   var_1_69 = ((((var_1_64) > (((((((((var_1_72) > (32)) ? (var_1_72) : (32)))) > (var_1_22)) ? (((((var_1_72) > (32)) ? (var_1_72) : (32)))) : (var_1_22))))) ? (var_1_64) : (((((((((var_1_72) > (32)) ? (var_1_72) : (32)))) > (var_1_22)) ? (((((var_1_72) > (32)) ? (var_1_72) : (32)))) : (var_1_22))))));
  } else {
   var_1_69 = (var_1_3 - var_1_57);
  }
 }
 signed long int stepLocal_18 = 1;
 if (var_1_22 > stepLocal_18) {
  var_1_70 = (((((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))) < 0 ) ? -((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))) : ((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20)))));
 } else {
  var_1_70 = (var_1_104 + (var_1_59 + (var_1_84 + var_1_50)));
 }
 if ((var_1_3 + var_1_72) >= var_1_4) {
  if (var_1_61 > ((((var_1_45) < (var_1_9)) ? (var_1_45) : (var_1_9)))) {
   var_1_75 = ((((var_1_39) > (var_1_5)) ? (var_1_39) : (var_1_5)));
  } else {
   var_1_75 = (((((((((55230) > (var_1_49)) ? (55230) : (var_1_49)))) > ((var_1_76 + var_1_77))) ? (((((55230) > (var_1_49)) ? (55230) : (var_1_49)))) : ((var_1_76 + var_1_77)))) - ((((var_1_64) < (var_1_5)) ? (var_1_64) : (var_1_5))));
  }
 } else {
  if (var_1_53) {
   if (var_1_16 < (var_1_95 * (- var_1_28))) {
    var_1_75 = (var_1_39 + (var_1_5 + 4));
   } else {
    var_1_75 = (16 + var_1_39);
   }
  } else {
   if (! ((var_1_57 - var_1_5) < var_1_76)) {
    var_1_75 = ((((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) + (24955 - var_1_5)) - ((((var_1_64) < (var_1_4)) ? (var_1_64) : (var_1_4))));
   }
  }
 }
 unsigned long int stepLocal_22 = (- 32) / var_1_51;
 unsigned short int stepLocal_21 = var_1_48;
 signed short int stepLocal_20 = var_1_20;
 if (var_1_32 <= stepLocal_21) {
  if (stepLocal_22 <= var_1_96) {
   if (stepLocal_20 <= var_1_5) {
    var_1_82 = ((((((((var_1_30) < (var_1_67)) ? (var_1_30) : (var_1_67)))) > (((var_1_25 + var_1_83) + ((((var_1_16) < (var_1_27)) ? (var_1_16) : (var_1_27)))))) ? (((((var_1_30) < (var_1_67)) ? (var_1_30) : (var_1_67)))) : (((var_1_25 + var_1_83) + ((((var_1_16) < (var_1_27)) ? (var_1_16) : (var_1_27)))))));
   } else {
    var_1_82 = ((((var_1_25) > (var_1_16)) ? (var_1_25) : (var_1_16)));
   }
  }
 }
 unsigned short int stepLocal_24 = var_1_62;
 if (! (var_1_1 > var_1_47)) {
  var_1_85 = ((((((((var_1_76) > (32u)) ? (var_1_76) : (32u)))) > (var_1_40)) ? (((((var_1_76) > (32u)) ? (var_1_76) : (32u)))) : (var_1_40)));
 } else {
  if (last_1_var_1_85 > stepLocal_24) {
   var_1_85 = ((((var_1_80) > (((((((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) < (var_1_50)) ? (((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) : (var_1_50))))) ? (var_1_80) : (((((((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) < (var_1_50)) ? (((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) : (var_1_50))))));
  }
 }
 if ((var_1_99 / 25) > var_1_59) {
  if (((((((((8) < (var_1_71)) ? (8) : (var_1_71)))) > (var_1_81)) ? (((((8) < (var_1_71)) ? (8) : (var_1_71)))) : (var_1_81))) <= (var_1_20 - var_1_63)) {
   if (var_1_39 != ((((500) < 0 ) ? -(500) : (500)))) {
    var_1_91 = 64;
   }
  }
 } else {
  var_1_91 = var_1_64;
 }
 if (var_1_100 || var_1_100) {
  var_1_23 = (((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))));
 } else {
  if ((- var_1_16) > var_1_11) {
   if ((~ 2) < var_1_70) {
    var_1_23 = ((var_1_25 + 32.5) + 7.75);
   }
  } else {
   var_1_23 = ((((((var_1_26 + var_1_27)) > ((var_1_28 - var_1_29))) ? ((var_1_26 + var_1_27)) : ((var_1_28 - var_1_29)))) - (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - 256.2));
  }
 }
 signed char stepLocal_8 = var_1_78;
 unsigned char stepLocal_7 = var_1_26 < var_1_37;
 if (var_1_78 > stepLocal_8) {
  var_1_36 = ((((var_1_28) > ((var_1_29 - (var_1_37 - var_1_27)))) ? (var_1_28) : ((var_1_29 - (var_1_37 - var_1_27)))));
 } else {
  if (stepLocal_7 || ((var_1_59 * var_1_22) != var_1_75)) {
   if ((((((16.375) < (var_1_28)) ? (16.375) : (var_1_28))) - (var_1_38 - 1.000000075E7)) > var_1_94) {
    var_1_36 = (var_1_25 + var_1_17);
   } else {
    var_1_36 = (((((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) > (var_1_17)) ? ((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) : (var_1_17)));
   }
  } else {
   var_1_36 = (var_1_37 - var_1_28);
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1073741822);
 assume_abort_if_not(var_1_14 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 16382);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 32767);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -230584.3009213691390e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 4611686.018427382800e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= -461168.6018427382800e+13F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 32);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -31);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 4611686.018427382800e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 4611686.018427387900e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 3221225470);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 1073741823);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 49150);
 assume_abort_if_not(var_1_49 <= 65534);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 49150);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 4294967295);
 assume_abort_if_not(var_1_51 != 0);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 32);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 8191);
 assume_abort_if_not(var_1_63 <= 16384);
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 8192);
 assume_abort_if_not(var_1_64 <= 16383);
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= -922337.2036854765600e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 16383);
 assume_abort_if_not(var_1_76 <= 32767);
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 16384);
 assume_abort_if_not(var_1_77 <= 32767);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 126);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 126);
 var_1_81 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 126);
 var_1_83 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_83 >= -230584.3009213691390e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 2305843.009213691390e+12F && var_1_83 >= 1.0e-20F ));
 var_1_87 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427382800e+12F && var_1_87 >= 1.0e-20F ));
 var_1_88 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_88 >= -230584.3009213691390e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 2305843.009213691390e+12F && var_1_88 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_89 >= -230584.3009213691390e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691390e+12F && var_1_89 >= 1.0e-20F ));
 var_1_90 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_90 >= -230584.3009213691390e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691390e+12F && var_1_90 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_100 = var_1_100;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((var_1_100 ? (((var_1_3 - (var_1_4 - var_1_5)) >= (500 * var_1_73)) ? (var_1_1 == ((signed long int) (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) < ((var_1_5 - var_1_72))) ? (((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_5 - var_1_72)))) + var_1_31))) : 1) : ((((((var_1_5) > (((((var_1_73) > (var_1_72)) ? (var_1_73) : (var_1_72))))) ? (var_1_5) : (((((var_1_73) > (var_1_72)) ? (var_1_73) : (var_1_72)))))) <= (~ (1 / -8))) ? (var_1_1 == ((signed long int) (var_1_72 - var_1_4))) : (var_1_1 == ((signed long int) var_1_5)))) && ((((var_1_10 - var_1_11) >= (var_1_102 / var_1_13)) || var_1_52) ? (var_1_9 == ((signed long int) ((var_1_14 - var_1_4) - var_1_5))) : (var_1_9 == ((signed long int) var_1_4)))) && (var_1_15 == ((double) (var_1_16 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) && (var_1_100 ? ((var_1_3 > last_1_var_1_18) ? (var_1_18 == ((signed short int) ((((((((var_1_103) > (8)) ? (var_1_103) : (8)))) > (var_1_5)) ? (((((var_1_103) > (8)) ? (var_1_103) : (8)))) : (var_1_5))))) : (var_1_18 == ((signed short int) ((var_1_20 - var_1_5) - var_1_4)))) : (var_1_18 == ((signed short int) ((((((((var_1_4) < (var_1_103)) ? (var_1_4) : (var_1_103)))) > (var_1_20)) ? (((((var_1_4) < (var_1_103)) ? (var_1_4) : (var_1_103)))) : (var_1_20))))))) && ((var_1_3 > ((var_1_4 - var_1_5) * var_1_9)) ? (var_1_21 == ((unsigned short int) ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))))) : (((var_1_22 - ((((var_1_20) > (var_1_4)) ? (var_1_20) : (var_1_4)))) > last_1_var_1_21) ? (var_1_21 == ((unsigned short int) var_1_20)) : 1))) && ((var_1_100 || var_1_100) ? (var_1_23 == ((double) (((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) : (((- var_1_16) > var_1_11) ? (((~ 2) < var_1_70) ? (var_1_23 == ((double) ((var_1_25 + 32.5) + 7.75))) : 1) : (var_1_23 == ((double) ((((((var_1_26 + var_1_27)) > ((var_1_28 - var_1_29))) ? ((var_1_26 + var_1_27)) : ((var_1_28 - var_1_29)))) - (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - 256.2))))))) && ((var_1_13 >= var_1_17) ? (var_1_31 == ((signed char) ((((var_1_32) < ((var_1_5 + var_1_33))) ? (var_1_32) : ((var_1_5 + var_1_33)))))) : ((var_1_52 && var_1_52) ? (var_1_31 == ((signed char) (((((var_1_33) < ((var_1_34 + var_1_35))) ? (var_1_33) : ((var_1_34 + var_1_35)))) + 16))) : (var_1_31 == ((signed char) var_1_34))))) && ((var_1_78 > var_1_78) ? (var_1_36 == ((float) ((((var_1_28) > ((var_1_29 - (var_1_37 - var_1_27)))) ? (var_1_28) : ((var_1_29 - (var_1_37 - var_1_27))))))) : (((var_1_26 < var_1_37) || ((var_1_59 * var_1_22) != var_1_75)) ? (((((((16.375) < (var_1_28)) ? (16.375) : (var_1_28))) - (var_1_38 - 1.000000075E7)) > var_1_94) ? (var_1_36 == ((float) (var_1_25 + var_1_17))) : (var_1_36 == ((float) (((((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) > (var_1_17)) ? ((((((var_1_28) > (var_1_37)) ? (var_1_28) : (var_1_37))) - var_1_27)) : (var_1_17)))))) : (var_1_36 == ((float) (var_1_37 - var_1_28)))))) && (((var_1_35 > (var_1_5 - var_1_4)) && (var_1_32 > var_1_34)) ? (var_1_39 == ((unsigned long int) ((((var_1_5) < ((((((10000000u + var_1_14)) < (var_1_84)) ? ((10000000u + var_1_14)) : (var_1_84))))) ? (var_1_5) : ((((((10000000u + var_1_14)) < (var_1_84)) ? ((10000000u + var_1_14)) : (var_1_84)))))))) : ((((var_1_96 & 16u) ^ var_1_65) > var_1_4) ? (((- var_1_29) != var_1_38) ? (var_1_39 == ((unsigned long int) ((((100000000u) > (var_1_22)) ? (100000000u) : (var_1_22))))) : ((var_1_35 <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_39 == ((unsigned long int) (var_1_40 - var_1_84))) : (var_1_39 == ((unsigned long int) ((((((var_1_41 - var_1_22)) > ((3470546746u - var_1_20))) ? ((var_1_41 - var_1_22)) : ((3470546746u - var_1_20)))) - (var_1_42 - ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))))))))) : (var_1_39 == ((unsigned long int) var_1_20))))) && (var_1_68 ? ((var_1_52 && var_1_100) ? ((var_1_37 < var_1_38) ? (((var_1_10 * var_1_30) > (255.75 / ((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))))) ? (var_1_43 == ((signed long int) (var_1_14 - var_1_47))) : 1) : 1) : (var_1_43 == ((signed long int) (var_1_3 - var_1_4)))) : (var_1_43 == ((signed long int) (var_1_22 - (var_1_45 - var_1_4)))))) && ((var_1_37 != ((var_1_29 * var_1_95) / ((((var_1_13) < (2.25f)) ? (var_1_13) : (2.25f))))) ? (var_1_46 == ((unsigned long int) (var_1_41 - var_1_92))) : (var_1_46 == ((unsigned long int) ((((var_1_40) > ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14))) ? (var_1_40) : ((((((var_1_4) > (var_1_42)) ? (var_1_4) : (var_1_42))) + var_1_14)))))))) && ((! (var_1_4 < var_1_5)) ? ((var_1_99 >= ((((((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) < ((var_1_40 * last_1_var_1_47))) ? (((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) : ((var_1_40 * last_1_var_1_47))))) ? (var_1_52 ? (var_1_47 == ((unsigned short int) (var_1_4 + ((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5)))))) : (var_1_47 == ((unsigned short int) var_1_5))) : 1) : 1)) && ((! (var_1_52 || (var_1_41 > var_1_59))) ? (var_1_48 == ((unsigned short int) ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) - var_1_5) - 8))) : (((last_1_var_1_48 != var_1_20) && ((var_1_40 & var_1_41) >= (var_1_49 % var_1_51))) ? (var_1_48 == ((unsigned short int) ((((((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) < (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))) ? (((((var_1_50) > (var_1_5)) ? (var_1_50) : (var_1_5)))) : (((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20)))))))) : (var_1_52 ? ((-4 < last_1_var_1_48) ? (var_1_48 == ((unsigned short int) (var_1_49 - var_1_20))) : 1) : (var_1_48 == ((unsigned short int) (8 + var_1_20))))))) && (last_1_var_1_68 ? (var_1_52 == ((unsigned char) (var_1_53 || var_1_54))) : ((! (var_1_45 > (~ last_1_var_1_97))) ? (var_1_52 == ((unsigned char) (last_1_var_1_100 || var_1_55))) : ((last_1_var_1_48 < (last_1_var_1_46 >> var_1_57)) ? (((var_1_13 * (var_1_28 / 1.0000000000002E12)) >= var_1_27) ? (var_1_52 == ((unsigned char) (! (! (! var_1_55))))) : (var_1_52 == ((unsigned char) (var_1_55 && var_1_58)))) : (var_1_52 == ((unsigned char) ((last_1_var_1_59 > last_1_var_1_18) || (var_1_58 && (var_1_54 || var_1_55))))))))) && ((var_1_17 > (- var_1_27)) ? ((var_1_38 < var_1_11) ? ((var_1_101 >= ((((var_1_101) < 0 ) ? -(var_1_101) : (var_1_101)))) ? (var_1_59 == ((unsigned char) (((((var_1_57) < (var_1_5)) ? (var_1_57) : (var_1_5))) + var_1_4))) : 1) : 1) : 1)) && (var_1_55 ? ((var_1_20 > var_1_57) ? (var_1_61 == ((unsigned short int) var_1_57)) : (var_1_61 == ((unsigned short int) ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))))) : 1)) && ((var_1_41 >= (- 32u)) ? (((var_1_49 < var_1_65) && var_1_68) ? (var_1_62 == ((unsigned short int) (var_1_20 + ((var_1_63 + var_1_64) - var_1_43)))) : (var_1_62 == ((unsigned short int) ((var_1_49 - (var_1_64 - var_1_43)) - var_1_20)))) : 1)) && ((var_1_71 != var_1_49) ? (var_1_68 ? (var_1_65 == ((unsigned short int) (((((var_1_64 + var_1_20)) > (((((256) < (var_1_63)) ? (256) : (var_1_63))))) ? ((var_1_64 + var_1_20)) : (((((256) < (var_1_63)) ? (256) : (var_1_63)))))))) : (((var_1_26 - ((((var_1_29) > (var_1_27)) ? (var_1_29) : (var_1_27)))) < var_1_28) ? (((-8 / var_1_49) > (2 + var_1_14)) ? (var_1_65 == ((unsigned short int) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < (var_1_78)) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_78))))) : (var_1_65 == ((unsigned short int) 256))) : (var_1_65 == ((unsigned short int) ((((10) < 0 ) ? -(10) : (10))))))) : 1)) && ((var_1_68 || var_1_68) ? (var_1_66 == ((float) ((((var_1_28) < (var_1_67)) ? (var_1_28) : (var_1_67))))) : ((var_1_17 >= ((((var_1_15) > (var_1_30)) ? (var_1_15) : (var_1_30)))) ? (var_1_66 == ((float) (var_1_26 + var_1_16))) : 1))) && (((~ 1) >= (var_1_84 + (var_1_3 * -128))) ? (var_1_68 == ((unsigned char) ((var_1_84 < var_1_20) || var_1_55))) : (var_1_68 == ((unsigned char) ((var_1_100 || var_1_58) && var_1_55))))) && (var_1_68 ? ((var_1_49 > ((- var_1_4) | (var_1_48 * var_1_61))) ? ((var_1_48 >= last_1_var_1_69) ? (var_1_69 == ((signed long int) ((((var_1_48) < ((((((var_1_92) < (-10000)) ? (var_1_92) : (-10000))) + var_1_31))) ? (var_1_48) : ((((((var_1_92) < (-10000)) ? (var_1_92) : (-10000))) + var_1_31)))))) : (var_1_69 == ((signed long int) (((((var_1_62) < (var_1_47)) ? (var_1_62) : (var_1_47))) - (((((-1227892636) < 0 ) ? -(-1227892636) : (-1227892636))) - 32))))) : 1) : ((((- var_1_64) * var_1_42) > (- 8u)) ? (var_1_69 == ((signed long int) ((((var_1_64) > (((((((((var_1_72) > (32)) ? (var_1_72) : (32)))) > (var_1_22)) ? (((((var_1_72) > (32)) ? (var_1_72) : (32)))) : (var_1_22))))) ? (var_1_64) : (((((((((var_1_72) > (32)) ? (var_1_72) : (32)))) > (var_1_22)) ? (((((var_1_72) > (32)) ? (var_1_72) : (32)))) : (var_1_22)))))))) : (var_1_69 == ((signed long int) (var_1_3 - var_1_57)))))) && ((var_1_22 > 1) ? (var_1_70 == ((unsigned long int) (((((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))) < 0 ) ? -((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))) : ((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))))) : (var_1_70 == ((unsigned long int) (var_1_104 + (var_1_59 + (var_1_84 + var_1_50))))))) && (var_1_71 == ((unsigned long int) var_1_46))) && ((var_1_73 >= var_1_71) ? (var_1_72 == ((unsigned short int) (var_1_50 - var_1_73))) : 1)) && (var_1_73 == ((signed char) (var_1_34 + var_1_33)))) && ((var_1_57 >= (- var_1_20)) ? (var_1_74 == ((unsigned short int) var_1_5)) : (var_1_74 == ((unsigned short int) 5)))) && (((var_1_3 + var_1_72) >= var_1_4) ? ((var_1_61 > ((((var_1_45) < (var_1_9)) ? (var_1_45) : (var_1_9)))) ? (var_1_75 == ((unsigned short int) ((((var_1_39) > (var_1_5)) ? (var_1_39) : (var_1_5))))) : (var_1_75 == ((unsigned short int) (((((((((55230) > (var_1_49)) ? (55230) : (var_1_49)))) > ((var_1_76 + var_1_77))) ? (((((55230) > (var_1_49)) ? (55230) : (var_1_49)))) : ((var_1_76 + var_1_77)))) - ((((var_1_64) < (var_1_5)) ? (var_1_64) : (var_1_5))))))) : (var_1_53 ? ((var_1_16 < (var_1_95 * (- var_1_28))) ? (var_1_75 == ((unsigned short int) (var_1_39 + (var_1_5 + 4)))) : (var_1_75 == ((unsigned short int) (16 + var_1_39)))) : ((! ((var_1_57 - var_1_5) < var_1_76)) ? (var_1_75 == ((unsigned short int) ((((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) + (24955 - var_1_5)) - ((((var_1_64) < (var_1_4)) ? (var_1_64) : (var_1_4)))))) : 1)))) && (var_1_78 == ((signed char) (((((var_1_5) < (var_1_57)) ? (var_1_5) : (var_1_57))) - ((((var_1_79) < (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))))) ? (var_1_79) : (((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81)))))))))) && ((var_1_32 <= var_1_48) ? ((((- 32) / var_1_51) <= var_1_96) ? ((var_1_20 <= var_1_5) ? (var_1_82 == ((float) ((((((((var_1_30) < (var_1_67)) ? (var_1_30) : (var_1_67)))) > (((var_1_25 + var_1_83) + ((((var_1_16) < (var_1_27)) ? (var_1_16) : (var_1_27)))))) ? (((((var_1_30) < (var_1_67)) ? (var_1_30) : (var_1_67)))) : (((var_1_25 + var_1_83) + ((((var_1_16) < (var_1_27)) ? (var_1_16) : (var_1_27))))))))) : (var_1_82 == ((float) ((((var_1_25) > (var_1_16)) ? (var_1_25) : (var_1_16)))))) : 1) : 1)) && ((var_1_32 > ((((var_1_47) < (var_1_76)) ? (var_1_47) : (var_1_76)))) ? (var_1_84 == ((unsigned long int) (var_1_92 + ((((var_1_5) < (var_1_79)) ? (var_1_5) : (var_1_79)))))) : (var_1_84 == ((unsigned long int) ((((var_1_41 - (var_1_45 - var_1_80)) < 0 ) ? -(var_1_41 - (var_1_45 - var_1_80)) : (var_1_41 - (var_1_45 - var_1_80)))))))) && ((! (var_1_1 > var_1_47)) ? (var_1_85 == ((unsigned long int) ((((((((var_1_76) > (32u)) ? (var_1_76) : (32u)))) > (var_1_40)) ? (((((var_1_76) > (32u)) ? (var_1_76) : (32u)))) : (var_1_40))))) : ((last_1_var_1_85 > var_1_62) ? (var_1_85 == ((unsigned long int) ((((var_1_80) > (((((((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) < (var_1_50)) ? (((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) : (var_1_50))))) ? (var_1_80) : (((((((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) < (var_1_50)) ? (((((64u) > (var_1_49)) ? (64u) : (var_1_49)))) : (var_1_50)))))))) : 1))) && ((var_1_55 && (var_1_78 >= -4)) ? ((var_1_49 <= var_1_47) ? (var_1_86 == ((double) (((((var_1_29 - (var_1_26 + var_1_27))) > (((var_1_87 + 4.6) - var_1_28))) ? ((var_1_29 - (var_1_26 + var_1_27))) : (((var_1_87 + 4.6) - var_1_28)))))) : (var_1_86 == ((double) (((((var_1_83) > (var_1_17)) ? (var_1_83) : (var_1_17))) + var_1_87)))) : (var_1_86 == ((double) ((((((var_1_88 + var_1_25)) < (var_1_83)) ? ((var_1_88 + var_1_25)) : (var_1_83))) + (var_1_89 + var_1_90)))))) && (((var_1_99 / 25) > var_1_59) ? ((((((((((8) < (var_1_71)) ? (8) : (var_1_71)))) > (var_1_81)) ? (((((8) < (var_1_71)) ? (8) : (var_1_71)))) : (var_1_81))) <= (var_1_20 - var_1_63)) ? ((var_1_39 != ((((500) < 0 ) ? -(500) : (500)))) ? (var_1_91 == ((signed short int) 64)) : 1) : 1) : (var_1_91 == ((signed short int) var_1_64)))) && (var_1_53 ? (var_1_92 == ((unsigned long int) var_1_14)) : (var_1_92 == ((unsigned long int) var_1_61)))) && (var_1_58 ? (var_1_94 == ((double) var_1_67)) : (var_1_94 == ((double) var_1_37)))) && (var_1_95 == ((double) var_1_29))) && (var_1_96 == ((signed long int) -4))) && (var_1_97 == ((signed char) 2))) && (var_1_52 ? (var_1_98 == ((double) var_1_30)) : (var_1_98 == ((double) var_1_88)))) && (var_1_100 ? (var_1_99 == ((signed char) var_1_80)) : (var_1_99 == ((signed char) var_1_33)))) && (var_1_100 == ((unsigned char) var_1_53))) && (var_1_55 ? (var_1_101 == ((unsigned long int) var_1_41)) : (var_1_101 == ((unsigned long int) var_1_43)))) && (var_1_52 ? (var_1_102 == ((float) var_1_25)) : 1)) && (var_1_52 ? (var_1_103 == ((unsigned char) var_1_57)) : (var_1_103 == ((unsigned char) var_1_81)))) && ((var_1_55 || (! var_1_100)) ? ((! var_1_100) ? (var_1_104 == ((unsigned char) ((((var_1_57) < (var_1_80)) ? (var_1_57) : (var_1_80))))) : 1) : (var_1_54 ? (var_1_104 == ((unsigned char) var_1_57)) : (var_1_104 == ((unsigned char) var_1_4))))
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
