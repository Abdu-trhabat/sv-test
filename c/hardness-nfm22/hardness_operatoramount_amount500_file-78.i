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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned short int var_1_3 = 63223;
unsigned short int var_1_4 = 63229;
double var_1_8 = 128.85;
double var_1_9 = 25.5;
double var_1_10 = 4.4;
signed char var_1_11 = -10;
signed char var_1_13 = -50;
signed char var_1_14 = 64;
signed char var_1_15 = 4;
signed char var_1_16 = 32;
signed char var_1_17 = 4;
unsigned long int var_1_18 = 8;
signed char var_1_19 = 5;
signed char var_1_20 = -32;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed short int var_1_23 = 4;
unsigned long int var_1_24 = 128;
unsigned long int var_1_25 = 1;
unsigned long int var_1_26 = 2429915044;
double var_1_27 = -0.6;
double var_1_28 = 4.6;
unsigned char var_1_29 = 5;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 1;
signed char var_1_32 = -16;
signed char var_1_33 = 1;
unsigned char var_1_34 = 0;
float var_1_35 = 128.375;
float var_1_36 = 63.5;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 10.2;
float var_1_41 = 0.0;
float var_1_42 = 0.0;
float var_1_43 = 25.4;
float var_1_44 = 999.5;
float var_1_45 = 127.875;
float var_1_46 = 0.0;
float var_1_47 = 4.6;
float var_1_49 = 15.8;
float var_1_50 = 16.2;
signed long int var_1_51 = 32;
signed short int var_1_52 = -50;
double var_1_53 = 8.6;
double var_1_54 = 32.5;
signed char var_1_55 = -10;
signed char var_1_56 = 16;
signed char var_1_57 = 16;
signed char var_1_58 = -5;
signed short int var_1_59 = -256;
float var_1_61 = 16.125;
signed short int var_1_62 = -100;
float var_1_63 = 8.25;
signed long int var_1_64 = 1209828699;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 200;
unsigned char var_1_68 = 128;
double var_1_69 = 1000.2;
double var_1_70 = 64.25;
signed short int var_1_71 = 10;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 16;
double var_1_74 = 15.75;
double var_1_75 = 31.25;
double var_1_76 = 8.4;
double var_1_77 = 64.7;
double var_1_78 = 99.8;
double var_1_79 = 16.2;
signed short int var_1_80 = -1000;
unsigned short int var_1_82 = 1;
signed short int var_1_84 = -200;
unsigned char var_1_86 = 0;
signed char var_1_87 = 2;
unsigned char var_1_88 = 0;
double var_1_89 = 0.5;
double var_1_90 = 9.4;
unsigned short int var_1_91 = 1;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 128;
signed long int var_1_94 = -1;
unsigned short int var_1_95 = 1;
signed char var_1_96 = 16;
signed short int var_1_97 = 1;
signed char var_1_98 = -10;
signed char var_1_99 = 32;
unsigned long int var_1_100 = 5;
double var_1_101 = 100.5;
unsigned short int last_1_var_1_1 = 100;
unsigned char last_1_var_1_21 = 0;
unsigned char last_1_var_1_29 = 5;
unsigned char last_1_var_1_34 = 0;
float last_1_var_1_39 = 10.2;
signed short int last_1_var_1_52 = -50;
float last_1_var_1_61 = 16.125;
unsigned char last_1_var_1_72 = 0;
double last_1_var_1_74 = 15.75;
signed short int last_1_var_1_80 = -1000;
signed char last_1_var_1_87 = 2;
double last_1_var_1_89 = 0.5;
double last_1_var_1_90 = 9.4;
unsigned short int last_1_var_1_91 = 1;
unsigned char last_1_var_1_92 = 1;
unsigned char last_1_var_1_93 = 128;
signed short int last_1_var_1_97 = 1;
unsigned long int last_1_var_1_100 = 5;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_61 > (var_1_78 - var_1_54)) {
  if (last_1_var_1_34) {
   if ((-2 * (last_1_var_1_29 / var_1_30)) <= last_1_var_1_52) {
    var_1_88 = var_1_37;
   } else {
    var_1_88 = var_1_22;
   }
  } else {
   var_1_88 = var_1_38;
  }
 } else {
  var_1_88 = var_1_38;
 }
 if (((9.99999999999901E12f - var_1_54) + (last_1_var_1_74 / var_1_36)) == var_1_45) {
  var_1_72 = ((((((var_1_57 + var_1_56) + (var_1_30 - var_1_31))) > (((64 - var_1_73) + ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)))))) ? (((var_1_57 + var_1_56) + (var_1_30 - var_1_31))) : (((64 - var_1_73) + ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)))))));
 } else {
  var_1_72 = var_1_17;
 }
 unsigned char stepLocal_20 = var_1_58 == var_1_3;
 signed long int stepLocal_19 = last_1_var_1_1;
 if (last_1_var_1_21) {
  if (stepLocal_20 && ((last_1_var_1_90 >= last_1_var_1_39) || last_1_var_1_21)) {
   var_1_66 = ((((var_1_17) < (10)) ? (var_1_17) : (10)));
  } else {
   var_1_66 = ((((((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) < 0 ) ? -((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) : ((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))))) - 5);
  }
 } else {
  if (last_1_var_1_93 >= stepLocal_19) {
   var_1_66 = ((((var_1_67) > ((var_1_68 - (var_1_56 + var_1_31)))) ? (var_1_67) : ((var_1_68 - (var_1_56 + var_1_31)))));
  } else {
   var_1_66 = var_1_68;
  }
 }
 var_1_62 = (((((var_1_66 - var_1_17)) < (var_1_58)) ? ((var_1_66 - var_1_17)) : (var_1_58)));
 signed long int stepLocal_10 = last_1_var_1_29;
 unsigned long int stepLocal_9 = ((((last_1_var_1_91) > (last_1_var_1_100)) ? (last_1_var_1_91) : (last_1_var_1_100))) & (last_1_var_1_87 / var_1_20);
 if ((last_1_var_1_97 ^ var_1_30) >= stepLocal_9) {
  if (((- last_1_var_1_89) / ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) >= var_1_10) {
   var_1_34 = (var_1_37 && var_1_38);
  } else {
   if (var_1_19 > stepLocal_10) {
    var_1_34 = (var_1_22 || var_1_37);
   } else {
    var_1_34 = var_1_37;
   }
  }
 }
 if (var_1_34) {
  var_1_90 = var_1_43;
 }
 if (var_1_88) {
  var_1_100 = last_1_var_1_100;
 } else {
  var_1_100 = var_1_56;
 }
 signed long int stepLocal_6 = last_1_var_1_72 + var_1_17;
 if (var_1_22) {
  if (var_1_26 == stepLocal_6) {
   var_1_29 = ((((var_1_17) > ((var_1_15 + (var_1_30 - var_1_31)))) ? (var_1_17) : ((var_1_15 + (var_1_30 - var_1_31)))));
  }
 }
 var_1_23 = (256 - ((((var_1_72) > (var_1_15)) ? (var_1_72) : (var_1_15))));
 if (var_1_66 == var_1_17) {
  var_1_24 = var_1_29;
 }
 var_1_25 = (var_1_26 - var_1_15);
 if (! (9.999999975E7f != var_1_10)) {
  var_1_27 = var_1_28;
 } else {
  var_1_27 = var_1_9;
 }
 unsigned long int stepLocal_14 = var_1_24;
 if (stepLocal_14 <= var_1_13) {
  var_1_47 = (((((var_1_46 + var_1_9)) < (((var_1_45 + var_1_49) + (var_1_41 - var_1_50)))) ? ((var_1_46 + var_1_9)) : (((var_1_45 + var_1_49) + (var_1_41 - var_1_50)))));
 } else {
  var_1_47 = ((var_1_50 + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) - ((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41))));
 }
 if (4u > var_1_72) {
  if (var_1_22) {
   var_1_55 = (var_1_31 + (((((var_1_56 - var_1_57)) < (var_1_58)) ? ((var_1_56 - var_1_57)) : (var_1_58))));
  }
 } else {
  var_1_55 = (var_1_57 + var_1_31);
 }
 if (! var_1_38) {
  var_1_70 = (var_1_50 - ((((var_1_54) > (var_1_42)) ? (var_1_54) : (var_1_42))));
 } else {
  var_1_70 = (var_1_42 - var_1_43);
 }
 if ((var_1_77 - (5.5168762982299771E18f - var_1_78)) <= var_1_27) {
  var_1_79 = (var_1_43 - (((((var_1_54 + var_1_77)) < (var_1_42)) ? ((var_1_54 + var_1_77)) : (var_1_42))));
 } else {
  var_1_79 = var_1_75;
 }
 var_1_89 = var_1_50;
 if (last_1_var_1_92) {
  var_1_92 = var_1_37;
 } else {
  var_1_92 = var_1_38;
 }
 var_1_93 = var_1_31;
 if (var_1_92) {
  var_1_94 = var_1_17;
 } else {
  var_1_94 = var_1_66;
 }
 var_1_95 = var_1_68;
 var_1_96 = var_1_14;
 var_1_98 = -8;
 var_1_99 = var_1_33;
 unsigned long int stepLocal_27 = (var_1_26 / var_1_4) / var_1_3;
 if (var_1_75 <= var_1_54) {
  if ((var_1_25 / (var_1_68 + var_1_30)) < stepLocal_27) {
   var_1_101 = ((var_1_42 - var_1_54) - 15.4);
  } else {
   var_1_101 = var_1_75;
  }
 } else {
  var_1_101 = var_1_43;
 }
 unsigned char stepLocal_5 = (-1 - 64) <= (var_1_93 << var_1_19);
 if (var_1_88) {
  if (var_1_92 || stepLocal_5) {
   var_1_21 = var_1_22;
  } else {
   var_1_21 = var_1_22;
  }
 }
 if (var_1_21) {
  var_1_97 = var_1_67;
 } else {
  var_1_97 = var_1_30;
 }
 unsigned char stepLocal_21 = var_1_93;
 if ((var_1_72 >> var_1_95) != stepLocal_21) {
  var_1_69 = (var_1_46 + var_1_45);
 } else {
  var_1_69 = ((((((var_1_46 + var_1_49)) < (var_1_50)) ? ((var_1_46 + var_1_49)) : (var_1_50))) + (var_1_45 + 9.9999999975E8));
 }
 signed long int stepLocal_4 = var_1_93 / var_1_3;
 signed long int stepLocal_3 = - var_1_66;
 if (((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < stepLocal_4) {
  var_1_18 = (((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))) + (var_1_4 + (var_1_17 + var_1_15)));
 } else {
  if (stepLocal_3 >= var_1_17) {
   var_1_18 = (((((var_1_17 + var_1_93)) < ((var_1_25 + var_1_66))) ? ((var_1_17 + var_1_93)) : ((var_1_25 + var_1_66))));
  } else {
   var_1_18 = ((((((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) < (var_1_29)) ? (((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) : (var_1_29)));
  }
 }
 if ((var_1_4 > var_1_18) && (var_1_49 > var_1_44)) {
  var_1_51 = ((var_1_4 - var_1_15) + var_1_20);
 } else {
  var_1_51 = (var_1_66 + var_1_33);
 }
 unsigned long int stepLocal_2 = var_1_25;
 if (var_1_29 >= stepLocal_2) {
  var_1_8 = (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5)));
 } else {
  var_1_8 = var_1_10;
 }
 if (var_1_13 == (~ var_1_19)) {
  if (var_1_38 || (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) > var_1_29)) {
   var_1_53 = (var_1_41 + (var_1_50 - var_1_54));
  } else {
   if ((~ var_1_72) < (- (var_1_26 * var_1_95))) {
    var_1_53 = ((((var_1_54) > (var_1_44)) ? (var_1_54) : (var_1_44)));
   } else {
    var_1_53 = ((((var_1_49) < ((((((var_1_41 + var_1_54)) < (var_1_45)) ? ((var_1_41 + var_1_54)) : (var_1_45))))) ? (var_1_49) : ((((((var_1_41 + var_1_54)) < (var_1_45)) ? ((var_1_41 + var_1_54)) : (var_1_45))))));
   }
  }
 } else {
  var_1_53 = (((((var_1_43) > ((var_1_42 - var_1_41))) ? (var_1_43) : ((var_1_42 - var_1_41)))) - var_1_50);
 }
 unsigned char stepLocal_16 = var_1_31;
 if (9.25 >= ((((var_1_69) < ((- var_1_79))) ? (var_1_69) : ((- var_1_79))))) {
  if (var_1_88) {
   var_1_59 = (((var_1_72 + var_1_56) + var_1_66) - var_1_30);
  } else {
   if (var_1_72 > stepLocal_16) {
    var_1_59 = ((((var_1_20) < (var_1_72)) ? (var_1_20) : (var_1_72)));
   } else {
    var_1_59 = (var_1_30 - 8);
   }
  }
 } else {
  var_1_59 = ((var_1_51 + (var_1_58 + var_1_13)) + var_1_15);
 }
 if (var_1_92) {
  var_1_91 = var_1_68;
 } else {
  var_1_91 = var_1_56;
 }
 if (var_1_69 < var_1_41) {
  var_1_61 = (((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + ((((100.125f) < (var_1_50)) ? (100.125f) : (var_1_50))))) < (2.95f)) ? ((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + ((((100.125f) < (var_1_50)) ? (100.125f) : (var_1_50))))) : (2.95f)));
 }
 unsigned char stepLocal_26 = var_1_31;
 if (((32 - var_1_73) / ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))) >= stepLocal_26) {
  var_1_86 = (var_1_34 && (! (var_1_37 || var_1_38)));
 } else {
  var_1_86 = ((((((var_1_91) < (var_1_20)) ? (var_1_91) : (var_1_20))) != var_1_17) || var_1_38);
 }
 if (var_1_101 > var_1_9) {
  if (var_1_86) {
   if (var_1_21) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = (var_1_14 - var_1_15);
   }
  } else {
   var_1_11 = ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))));
  }
 }
 unsigned char stepLocal_1 = var_1_72;
 unsigned short int stepLocal_0 = var_1_4;
 if (! var_1_86) {
  var_1_1 = (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_72) < (var_1_72)) ? (var_1_72) : (var_1_72))) + var_1_29));
 } else {
  if (stepLocal_1 <= (var_1_4 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))))) {
   if (stepLocal_0 <= 10) {
    var_1_1 = (var_1_4 - var_1_72);
   }
  } else {
   if (var_1_86) {
    var_1_1 = (((((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) < 0 ) ? -((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) : ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))));
   } else {
    var_1_1 = (1 + (27338 - var_1_29));
   }
  }
 }
 if ((~ (var_1_57 * var_1_64)) > ((((var_1_72) > ((var_1_67 - var_1_95))) ? (var_1_72) : ((var_1_67 - var_1_95))))) {
  if (((((var_1_11 + var_1_67) < 0 ) ? -(var_1_11 + var_1_67) : (var_1_11 + var_1_67))) < var_1_4) {
   var_1_74 = ((((((((var_1_54) < ((var_1_41 - var_1_50))) ? (var_1_54) : ((var_1_41 - var_1_50))))) > (((((var_1_75) < (var_1_9)) ? (var_1_75) : (var_1_9))))) ? (((((var_1_54) < ((var_1_41 - var_1_50))) ? (var_1_54) : ((var_1_41 - var_1_50))))) : (((((var_1_75) < (var_1_9)) ? (var_1_75) : (var_1_9))))));
  } else {
   if (var_1_86) {
    var_1_74 = var_1_44;
   } else {
    var_1_74 = ((((((var_1_41 + var_1_50)) < (var_1_54)) ? ((var_1_41 + var_1_50)) : (var_1_54))) - (((((var_1_76) > (var_1_77)) ? (var_1_76) : (var_1_77))) + var_1_78));
   }
  }
 }
 unsigned long int stepLocal_25 = (((var_1_15) < ((16u / var_1_3))) ? (var_1_15) : ((16u / var_1_3)));
 signed long int stepLocal_24 = var_1_66 / 32;
 unsigned char stepLocal_23 = var_1_93;
 if (var_1_51 < stepLocal_25) {
  if ((var_1_1 / var_1_19) < stepLocal_24) {
   var_1_80 = (var_1_67 - (var_1_29 + var_1_1));
  }
 } else {
  if (stepLocal_23 < var_1_20) {
   var_1_80 = ((((last_1_var_1_80) < (last_1_var_1_80)) ? (last_1_var_1_80) : (last_1_var_1_80)));
  } else {
   var_1_80 = (var_1_16 - 100);
  }
 }
 signed char stepLocal_13 = var_1_20;
 signed long int stepLocal_12 = 50 + (var_1_72 / var_1_19);
 signed long int stepLocal_11 = (~ var_1_20) / var_1_30;
 if ((var_1_1 - var_1_93) > stepLocal_11) {
  if ((var_1_35 + var_1_27) < var_1_10) {
   var_1_39 = (var_1_9 + (8.5f - (var_1_41 - 7.8f)));
  } else {
   if (var_1_88) {
    var_1_39 = (((((var_1_9 + var_1_41)) > (var_1_10)) ? ((var_1_9 + var_1_41)) : (var_1_10)));
   }
  }
 } else {
  if (stepLocal_12 >= var_1_3) {
   if (var_1_88) {
    var_1_39 = ((var_1_42 - var_1_41) - var_1_43);
   } else {
    var_1_39 = (var_1_9 + ((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))));
   }
  } else {
   if (stepLocal_13 != (var_1_31 - 1)) {
    var_1_39 = (((((var_1_9) < ((var_1_45 + var_1_46))) ? (var_1_9) : ((var_1_45 + var_1_46)))) + var_1_44);
   } else {
    if (var_1_37) {
     var_1_39 = ((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) > (var_1_10)) ? (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) : (var_1_10)));
    } else {
     var_1_39 = ((((((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45)))) > (3.4f)) ? (((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45)))) : (3.4f)));
    }
   }
  }
 }
 signed long int stepLocal_18 = ((((var_1_80 * var_1_19)) < (var_1_31)) ? ((var_1_80 * var_1_19)) : (var_1_31));
 signed long int stepLocal_17 = ((((var_1_1) > (var_1_91)) ? (var_1_1) : (var_1_91))) + (var_1_66 + var_1_93);
 if ((9.99999995E7 + var_1_49) < var_1_35) {
  if (stepLocal_17 <= ((var_1_64 - var_1_15) - (var_1_3 + var_1_57))) {
   if (var_1_90 <= ((((var_1_90) > (var_1_27)) ? (var_1_90) : (var_1_27)))) {
    var_1_63 = (var_1_50 - var_1_42);
   } else {
    if (stepLocal_18 <= (128 - (var_1_64 - 10))) {
     var_1_63 = (((((var_1_54 - (var_1_41 + var_1_50))) > ((var_1_42 - 100.75f))) ? ((var_1_54 - (var_1_41 + var_1_50))) : ((var_1_42 - 100.75f))));
    }
   }
  }
 }
 unsigned char stepLocal_22 = var_1_59 > (var_1_29 / var_1_19);
 if (stepLocal_22 && var_1_37) {
  var_1_71 = var_1_33;
 } else {
  var_1_71 = ((((-128) < (var_1_11)) ? (-128) : (var_1_11)));
 }
 unsigned long int stepLocal_8 = var_1_26;
 signed long int stepLocal_7 = var_1_16 - var_1_17;
 if (var_1_27 >= (- var_1_79)) {
  if (var_1_88) {
   if (stepLocal_7 != ((var_1_80 + var_1_19) / -25)) {
    var_1_32 = (var_1_31 - var_1_15);
   }
  } else {
   if (var_1_88) {
    if (stepLocal_8 >= (8u & var_1_93)) {
     var_1_32 = ((((var_1_15 - 10) < 0 ) ? -(var_1_15 - 10) : (var_1_15 - 10)));
    } else {
     var_1_32 = (((((var_1_31) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_31) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) - var_1_15);
    }
   } else {
    var_1_32 = (var_1_31 - var_1_15);
   }
  }
 }
 if (var_1_27 >= var_1_46) {
  var_1_84 = ((-4 + var_1_32) + var_1_11);
 } else {
  var_1_84 = (var_1_66 + var_1_14);
 }
 signed long int stepLocal_15 = 256;
 if (stepLocal_15 >= ((var_1_62 + var_1_97) / var_1_3)) {
  if (var_1_34) {
   var_1_52 = (var_1_13 + var_1_84);
  }
 } else {
  if (var_1_37) {
   var_1_52 = var_1_15;
  } else {
   var_1_52 = var_1_16;
  }
 }
 if (var_1_34 && var_1_37) {
  var_1_87 = (var_1_57 - var_1_73);
 } else {
  if ((var_1_90 != var_1_35) || ((var_1_93 & var_1_52) < var_1_30)) {
   var_1_87 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
  }
 }
 if ((var_1_25 & (var_1_30 << var_1_62)) < ((var_1_17 - var_1_72) * var_1_52)) {
  if ((2u <= ((((var_1_95) > (var_1_72)) ? (var_1_95) : (var_1_72)))) && var_1_21) {
   if (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) <= (- var_1_101)) {
    var_1_82 = ((((var_1_4) < (((var_1_31 + var_1_94) + (1 + var_1_30)))) ? (var_1_4) : (((var_1_31 + var_1_94) + (1 + var_1_30)))));
   } else {
    var_1_82 = (var_1_29 + 128);
   }
  }
 } else {
  var_1_82 = var_1_29;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 32767);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 assume_abort_if_not(var_1_20 != 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 63);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -126);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 assume_abort_if_not(var_1_35 != 0.0F);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 2305843.009213691390e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 4611686.018427382800e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -230584.3009213691390e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691390e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -230584.3009213691390e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -230584.3009213691390e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691390e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 63);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -63);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= 1073741823);
 assume_abort_if_not(var_1_64 <= 2147483647);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 127);
 assume_abort_if_not(var_1_67 <= 254);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 127);
 assume_abort_if_not(var_1_68 <= 254);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 63);
 var_1_75 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_75 >= -922337.2036854765600e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427382800e+12F && var_1_76 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427382800e+12F && var_1_77 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427382800e+12F && var_1_78 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_100 = var_1_100;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((! var_1_86) ? (var_1_1 == ((unsigned short int) (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_72) < (var_1_72)) ? (var_1_72) : (var_1_72))) + var_1_29)))) : ((var_1_72 <= (var_1_4 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))))) ? ((var_1_4 <= 10) ? (var_1_1 == ((unsigned short int) (var_1_4 - var_1_72))) : 1) : (var_1_86 ? (var_1_1 == ((unsigned short int) (((((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) < 0 ) ? -((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) : ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))))))) : (var_1_1 == ((unsigned short int) (1 + (27338 - var_1_29))))))) && ((var_1_29 >= var_1_25) ? (var_1_8 == ((double) (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5))))) : (var_1_8 == ((double) var_1_10)))) && ((var_1_101 > var_1_9) ? (var_1_86 ? (var_1_21 ? (var_1_11 == ((signed char) var_1_13)) : (var_1_11 == ((signed char) (var_1_14 - var_1_15)))) : (var_1_11 == ((signed char) ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))))))) : 1)) && ((((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < (var_1_93 / var_1_3)) ? (var_1_18 == ((unsigned long int) (((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))) + (var_1_4 + (var_1_17 + var_1_15))))) : (((- var_1_66) >= var_1_17) ? (var_1_18 == ((unsigned long int) (((((var_1_17 + var_1_93)) < ((var_1_25 + var_1_66))) ? ((var_1_17 + var_1_93)) : ((var_1_25 + var_1_66)))))) : (var_1_18 == ((unsigned long int) ((((((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) < (var_1_29)) ? (((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) : (var_1_29)))))))) && (var_1_88 ? ((var_1_92 || ((-1 - 64) <= (var_1_93 << var_1_19))) ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) var_1_22))) : 1)) && (var_1_23 == ((signed short int) (256 - ((((var_1_72) > (var_1_15)) ? (var_1_72) : (var_1_15))))))) && ((var_1_66 == var_1_17) ? (var_1_24 == ((unsigned long int) var_1_29)) : 1)) && (var_1_25 == ((unsigned long int) (var_1_26 - var_1_15)))) && ((! (9.999999975E7f != var_1_10)) ? (var_1_27 == ((double) var_1_28)) : (var_1_27 == ((double) var_1_9)))) && (var_1_22 ? ((var_1_26 == (last_1_var_1_72 + var_1_17)) ? (var_1_29 == ((unsigned char) ((((var_1_17) > ((var_1_15 + (var_1_30 - var_1_31)))) ? (var_1_17) : ((var_1_15 + (var_1_30 - var_1_31))))))) : 1) : 1)) && ((var_1_27 >= (- var_1_79)) ? (var_1_88 ? (((var_1_16 - var_1_17) != ((var_1_80 + var_1_19) / -25)) ? (var_1_32 == ((signed char) (var_1_31 - var_1_15))) : 1) : (var_1_88 ? ((var_1_26 >= (8u & var_1_93)) ? (var_1_32 == ((signed char) ((((var_1_15 - 10) < 0 ) ? -(var_1_15 - 10) : (var_1_15 - 10))))) : (var_1_32 == ((signed char) (((((var_1_31) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_31) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) - var_1_15)))) : (var_1_32 == ((signed char) (var_1_31 - var_1_15))))) : 1)) && (((last_1_var_1_97 ^ var_1_30) >= (((((last_1_var_1_91) > (last_1_var_1_100)) ? (last_1_var_1_91) : (last_1_var_1_100))) & (last_1_var_1_87 / var_1_20))) ? ((((- last_1_var_1_89) / ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) >= var_1_10) ? (var_1_34 == ((unsigned char) (var_1_37 && var_1_38))) : ((var_1_19 > last_1_var_1_29) ? (var_1_34 == ((unsigned char) (var_1_22 || var_1_37))) : (var_1_34 == ((unsigned char) var_1_37)))) : 1)) && (((var_1_1 - var_1_93) > ((~ var_1_20) / var_1_30)) ? (((var_1_35 + var_1_27) < var_1_10) ? (var_1_39 == ((float) (var_1_9 + (8.5f - (var_1_41 - 7.8f))))) : (var_1_88 ? (var_1_39 == ((float) (((((var_1_9 + var_1_41)) > (var_1_10)) ? ((var_1_9 + var_1_41)) : (var_1_10))))) : 1)) : (((50 + (var_1_72 / var_1_19)) >= var_1_3) ? (var_1_88 ? (var_1_39 == ((float) ((var_1_42 - var_1_41) - var_1_43))) : (var_1_39 == ((float) (var_1_9 + ((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))))))) : ((var_1_20 != (var_1_31 - 1)) ? (var_1_39 == ((float) (((((var_1_9) < ((var_1_45 + var_1_46))) ? (var_1_9) : ((var_1_45 + var_1_46)))) + var_1_44))) : (var_1_37 ? (var_1_39 == ((float) ((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) > (var_1_10)) ? (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) : (var_1_10))))) : (var_1_39 == ((float) ((((((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45)))) > (3.4f)) ? (((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45)))) : (3.4f)))))))))) && ((var_1_24 <= var_1_13) ? (var_1_47 == ((float) (((((var_1_46 + var_1_9)) < (((var_1_45 + var_1_49) + (var_1_41 - var_1_50)))) ? ((var_1_46 + var_1_9)) : (((var_1_45 + var_1_49) + (var_1_41 - var_1_50))))))) : (var_1_47 == ((float) ((var_1_50 + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) - ((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41)))))))) && (((var_1_4 > var_1_18) && (var_1_49 > var_1_44)) ? (var_1_51 == ((signed long int) ((var_1_4 - var_1_15) + var_1_20))) : (var_1_51 == ((signed long int) (var_1_66 + var_1_33))))) && ((256 >= ((var_1_62 + var_1_97) / var_1_3)) ? (var_1_34 ? (var_1_52 == ((signed short int) (var_1_13 + var_1_84))) : 1) : (var_1_37 ? (var_1_52 == ((signed short int) var_1_15)) : (var_1_52 == ((signed short int) var_1_16))))) && ((var_1_13 == (~ var_1_19)) ? ((var_1_38 || (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) > var_1_29)) ? (var_1_53 == ((double) (var_1_41 + (var_1_50 - var_1_54)))) : (((~ var_1_72) < (- (var_1_26 * var_1_95))) ? (var_1_53 == ((double) ((((var_1_54) > (var_1_44)) ? (var_1_54) : (var_1_44))))) : (var_1_53 == ((double) ((((var_1_49) < ((((((var_1_41 + var_1_54)) < (var_1_45)) ? ((var_1_41 + var_1_54)) : (var_1_45))))) ? (var_1_49) : ((((((var_1_41 + var_1_54)) < (var_1_45)) ? ((var_1_41 + var_1_54)) : (var_1_45)))))))))) : (var_1_53 == ((double) (((((var_1_43) > ((var_1_42 - var_1_41))) ? (var_1_43) : ((var_1_42 - var_1_41)))) - var_1_50))))) && ((4u > var_1_72) ? (var_1_22 ? (var_1_55 == ((signed char) (var_1_31 + (((((var_1_56 - var_1_57)) < (var_1_58)) ? ((var_1_56 - var_1_57)) : (var_1_58)))))) : 1) : (var_1_55 == ((signed char) (var_1_57 + var_1_31))))) && ((9.25 >= ((((var_1_69) < ((- var_1_79))) ? (var_1_69) : ((- var_1_79))))) ? (var_1_88 ? (var_1_59 == ((signed short int) (((var_1_72 + var_1_56) + var_1_66) - var_1_30))) : ((var_1_72 > var_1_31) ? (var_1_59 == ((signed short int) ((((var_1_20) < (var_1_72)) ? (var_1_20) : (var_1_72))))) : (var_1_59 == ((signed short int) (var_1_30 - 8))))) : (var_1_59 == ((signed short int) ((var_1_51 + (var_1_58 + var_1_13)) + var_1_15))))) && ((var_1_69 < var_1_41) ? (var_1_61 == ((float) (((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + ((((100.125f) < (var_1_50)) ? (100.125f) : (var_1_50))))) < (2.95f)) ? ((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + ((((100.125f) < (var_1_50)) ? (100.125f) : (var_1_50))))) : (2.95f))))) : 1)) && (var_1_62 == ((signed short int) (((((var_1_66 - var_1_17)) < (var_1_58)) ? ((var_1_66 - var_1_17)) : (var_1_58)))))) && (((9.99999995E7 + var_1_49) < var_1_35) ? (((((((var_1_1) > (var_1_91)) ? (var_1_1) : (var_1_91))) + (var_1_66 + var_1_93)) <= ((var_1_64 - var_1_15) - (var_1_3 + var_1_57))) ? ((var_1_90 <= ((((var_1_90) > (var_1_27)) ? (var_1_90) : (var_1_27)))) ? (var_1_63 == ((float) (var_1_50 - var_1_42))) : (((((((var_1_80 * var_1_19)) < (var_1_31)) ? ((var_1_80 * var_1_19)) : (var_1_31))) <= (128 - (var_1_64 - 10))) ? (var_1_63 == ((float) (((((var_1_54 - (var_1_41 + var_1_50))) > ((var_1_42 - 100.75f))) ? ((var_1_54 - (var_1_41 + var_1_50))) : ((var_1_42 - 100.75f)))))) : 1)) : 1) : 1)) && (last_1_var_1_21 ? (((var_1_58 == var_1_3) && ((last_1_var_1_90 >= last_1_var_1_39) || last_1_var_1_21)) ? (var_1_66 == ((unsigned char) ((((var_1_17) < (10)) ? (var_1_17) : (10))))) : (var_1_66 == ((unsigned char) ((((((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) < 0 ) ? -((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) : ((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))))) - 5)))) : ((last_1_var_1_93 >= last_1_var_1_1) ? (var_1_66 == ((unsigned char) ((((var_1_67) > ((var_1_68 - (var_1_56 + var_1_31)))) ? (var_1_67) : ((var_1_68 - (var_1_56 + var_1_31))))))) : (var_1_66 == ((unsigned char) var_1_68))))) && (((var_1_72 >> var_1_95) != var_1_93) ? (var_1_69 == ((double) (var_1_46 + var_1_45))) : (var_1_69 == ((double) ((((((var_1_46 + var_1_49)) < (var_1_50)) ? ((var_1_46 + var_1_49)) : (var_1_50))) + (var_1_45 + 9.9999999975E8)))))) && ((! var_1_38) ? (var_1_70 == ((double) (var_1_50 - ((((var_1_54) > (var_1_42)) ? (var_1_54) : (var_1_42)))))) : (var_1_70 == ((double) (var_1_42 - var_1_43))))) && (((var_1_59 > (var_1_29 / var_1_19)) && var_1_37) ? (var_1_71 == ((signed short int) var_1_33)) : (var_1_71 == ((signed short int) ((((-128) < (var_1_11)) ? (-128) : (var_1_11))))))) && ((((9.99999999999901E12f - var_1_54) + (last_1_var_1_74 / var_1_36)) == var_1_45) ? (var_1_72 == ((unsigned char) ((((((var_1_57 + var_1_56) + (var_1_30 - var_1_31))) > (((64 - var_1_73) + ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)))))) ? (((var_1_57 + var_1_56) + (var_1_30 - var_1_31))) : (((64 - var_1_73) + ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))))))))) : (var_1_72 == ((unsigned char) var_1_17)))) && (((~ (var_1_57 * var_1_64)) > ((((var_1_72) > ((var_1_67 - var_1_95))) ? (var_1_72) : ((var_1_67 - var_1_95))))) ? ((((((var_1_11 + var_1_67) < 0 ) ? -(var_1_11 + var_1_67) : (var_1_11 + var_1_67))) < var_1_4) ? (var_1_74 == ((double) ((((((((var_1_54) < ((var_1_41 - var_1_50))) ? (var_1_54) : ((var_1_41 - var_1_50))))) > (((((var_1_75) < (var_1_9)) ? (var_1_75) : (var_1_9))))) ? (((((var_1_54) < ((var_1_41 - var_1_50))) ? (var_1_54) : ((var_1_41 - var_1_50))))) : (((((var_1_75) < (var_1_9)) ? (var_1_75) : (var_1_9)))))))) : (var_1_86 ? (var_1_74 == ((double) var_1_44)) : (var_1_74 == ((double) ((((((var_1_41 + var_1_50)) < (var_1_54)) ? ((var_1_41 + var_1_50)) : (var_1_54))) - (((((var_1_76) > (var_1_77)) ? (var_1_76) : (var_1_77))) + var_1_78)))))) : 1)) && (((var_1_77 - (5.5168762982299771E18f - var_1_78)) <= var_1_27) ? (var_1_79 == ((double) (var_1_43 - (((((var_1_54 + var_1_77)) < (var_1_42)) ? ((var_1_54 + var_1_77)) : (var_1_42)))))) : (var_1_79 == ((double) var_1_75)))) && ((var_1_51 < ((((var_1_15) < ((16u / var_1_3))) ? (var_1_15) : ((16u / var_1_3))))) ? (((var_1_1 / var_1_19) < (var_1_66 / 32)) ? (var_1_80 == ((signed short int) (var_1_67 - (var_1_29 + var_1_1)))) : 1) : ((var_1_93 < var_1_20) ? (var_1_80 == ((signed short int) ((((last_1_var_1_80) < (last_1_var_1_80)) ? (last_1_var_1_80) : (last_1_var_1_80))))) : (var_1_80 == ((signed short int) (var_1_16 - 100)))))) && (((var_1_25 & (var_1_30 << var_1_62)) < ((var_1_17 - var_1_72) * var_1_52)) ? (((2u <= ((((var_1_95) > (var_1_72)) ? (var_1_95) : (var_1_72)))) && var_1_21) ? ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) <= (- var_1_101)) ? (var_1_82 == ((unsigned short int) ((((var_1_4) < (((var_1_31 + var_1_94) + (1 + var_1_30)))) ? (var_1_4) : (((var_1_31 + var_1_94) + (1 + var_1_30))))))) : (var_1_82 == ((unsigned short int) (var_1_29 + 128)))) : 1) : (var_1_82 == ((unsigned short int) var_1_29)))) && ((var_1_27 >= var_1_46) ? (var_1_84 == ((signed short int) ((-4 + var_1_32) + var_1_11))) : (var_1_84 == ((signed short int) (var_1_66 + var_1_14))))) && ((((32 - var_1_73) / ((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))) >= var_1_31) ? (var_1_86 == ((unsigned char) (var_1_34 && (! (var_1_37 || var_1_38))))) : (var_1_86 == ((unsigned char) ((((((var_1_91) < (var_1_20)) ? (var_1_91) : (var_1_20))) != var_1_17) || var_1_38))))) && ((var_1_34 && var_1_37) ? (var_1_87 == ((signed char) (var_1_57 - var_1_73))) : (((var_1_90 != var_1_35) || ((var_1_93 & var_1_52) < var_1_30)) ? (var_1_87 == ((signed char) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) : 1))) && ((last_1_var_1_61 > (var_1_78 - var_1_54)) ? (last_1_var_1_34 ? (((-2 * (last_1_var_1_29 / var_1_30)) <= last_1_var_1_52) ? (var_1_88 == ((unsigned char) var_1_37)) : (var_1_88 == ((unsigned char) var_1_22))) : (var_1_88 == ((unsigned char) var_1_38))) : (var_1_88 == ((unsigned char) var_1_38)))) && (var_1_89 == ((double) var_1_50))) && (var_1_34 ? (var_1_90 == ((double) var_1_43)) : 1)) && (var_1_92 ? (var_1_91 == ((unsigned short int) var_1_68)) : (var_1_91 == ((unsigned short int) var_1_56)))) && (last_1_var_1_92 ? (var_1_92 == ((unsigned char) var_1_37)) : (var_1_92 == ((unsigned char) var_1_38)))) && (var_1_93 == ((unsigned char) var_1_31))) && (var_1_92 ? (var_1_94 == ((signed long int) var_1_17)) : (var_1_94 == ((signed long int) var_1_66)))) && (var_1_95 == ((unsigned short int) var_1_68))) && (var_1_96 == ((signed char) var_1_14))) && (var_1_21 ? (var_1_97 == ((signed short int) var_1_67)) : (var_1_97 == ((signed short int) var_1_30)))) && (var_1_98 == ((signed char) -8))) && (var_1_99 == ((signed char) var_1_33))) && (var_1_88 ? (var_1_100 == ((unsigned long int) last_1_var_1_100)) : (var_1_100 == ((unsigned long int) var_1_56)))) && ((var_1_75 <= var_1_54) ? (((var_1_25 / (var_1_68 + var_1_30)) < ((var_1_26 / var_1_4) / var_1_3)) ? (var_1_101 == ((double) ((var_1_42 - var_1_54) - 15.4))) : (var_1_101 == ((double) var_1_75))) : (var_1_101 == ((double) var_1_43)))
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
