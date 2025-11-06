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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 1;
float var_1_7 = 127.25;
float var_1_8 = 128.5;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -1;
unsigned char var_1_15 = 0;
double var_1_16 = 7.125;
signed short int var_1_17 = 32;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 4;
unsigned long int var_1_22 = 256;
unsigned short int var_1_23 = 51550;
unsigned char var_1_24 = 2;
unsigned long int var_1_25 = 1615427942;
unsigned long int var_1_26 = 3391648498;
unsigned short int var_1_27 = 2;
float var_1_28 = 128.5;
unsigned short int var_1_29 = 23254;
unsigned short int var_1_30 = 21795;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 32;
float var_1_33 = 127.45;
float var_1_34 = 50.5;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 200;
unsigned short int var_1_37 = 38425;
unsigned char var_1_38 = 1;
float var_1_39 = 10000000.75;
float var_1_40 = 15.375;
float var_1_41 = 4.25;
float var_1_42 = 5.7;
float var_1_43 = 1.6;
float var_1_44 = 32.25;
signed char var_1_45 = 64;
signed char var_1_46 = -1;
signed char var_1_47 = -8;
double var_1_48 = 16.5;
double var_1_49 = 4.9;
double var_1_50 = 199.5;
double var_1_51 = 16.125;
signed long int var_1_52 = 1;
signed long int var_1_53 = 1;
unsigned char var_1_54 = 0;
signed long int var_1_55 = 256;
unsigned long int var_1_56 = 4163897803;
unsigned char var_1_57 = 32;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 200;
unsigned char var_1_60 = 4;
unsigned char var_1_61 = 10;
signed short int var_1_62 = -25;
signed short int var_1_63 = 8;
float var_1_64 = 10000000000000.2;
float var_1_66 = 0.1;
float var_1_67 = 16.5;
float var_1_68 = 16.21;
float var_1_69 = 63.5;
float var_1_70 = 0.0;
unsigned long int var_1_71 = 0;
unsigned long int var_1_72 = 2;
unsigned long int var_1_74 = 10;
signed long int var_1_75 = 2;
double var_1_76 = 63.6;
signed short int var_1_77 = -32;
signed char var_1_79 = 10;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 0;
float var_1_83 = 2.625;
float var_1_84 = 999999999.8;
float var_1_86 = 0.0;
double var_1_87 = 499.2;
unsigned char var_1_88 = 1;
signed short int var_1_89 = 2;
double var_1_91 = 10000.5;
double var_1_92 = 1.8;
unsigned char var_1_93 = 1;
unsigned short int var_1_94 = 32;
double var_1_95 = 10000000000.8;
signed long int var_1_96 = -100000000;
signed short int var_1_97 = -50;
float var_1_98 = 9.975;
unsigned char var_1_100 = 0;
signed char var_1_101 = 0;
signed char var_1_102 = 0;
unsigned char var_1_103 = 0;
signed char var_1_104 = -16;
signed long int var_1_105 = 4;
double var_1_106 = 10.25;
signed long int var_1_107 = -10;
double var_1_109 = 256.5;
signed char var_1_110 = 50;
unsigned short int var_1_111 = 0;
unsigned short int var_1_112 = 1;
float var_1_113 = 127.5;
double last_1_var_1_16 = 7.125;
unsigned short int last_1_var_1_36 = 200;
signed long int last_1_var_1_52 = 1;
signed long int last_1_var_1_55 = 256;
signed short int last_1_var_1_62 = -25;
float last_1_var_1_64 = 10000000000000.2;
unsigned char last_1_var_1_80 = 1;
double last_1_var_1_95 = 10000000000.8;
signed short int last_1_var_1_97 = -50;
signed long int last_1_var_1_105 = 4;
unsigned short int last_1_var_1_111 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_19 = var_1_13 * var_1_17;
 unsigned long int stepLocal_18 = var_1_25;
 unsigned char stepLocal_17 = var_1_5;
 if (stepLocal_18 < (var_1_72 * last_1_var_1_97)) {
  if (stepLocal_19 < var_1_29) {
   if (var_1_41 >= last_1_var_1_95) {
    var_1_71 = var_1_37;
   } else {
    var_1_71 = ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)));
   }
  } else {
   if (var_1_23 < stepLocal_17) {
    var_1_71 = (16u + var_1_23);
   }
  }
 }
 signed long int stepLocal_26 = var_1_23 / (var_1_63 + var_1_29);
 if (stepLocal_26 <= var_1_71) {
  var_1_91 = ((((var_1_49) < (var_1_40)) ? (var_1_49) : (var_1_40)));
 } else {
  if (var_1_8 <= var_1_70) {
   var_1_91 = (((((((((var_1_86) < (var_1_51)) ? (var_1_86) : (var_1_51)))) > (var_1_70)) ? (((((var_1_86) < (var_1_51)) ? (var_1_86) : (var_1_51)))) : (var_1_70))) - ((((var_1_7) < (((((var_1_92) < (var_1_49)) ? (var_1_92) : (var_1_49))))) ? (var_1_7) : (((((var_1_92) < (var_1_49)) ? (var_1_92) : (var_1_49)))))));
  }
 }
 signed char stepLocal_14 = var_1_47;
 if (64.8 != ((((var_1_43) > (1.625)) ? (var_1_43) : (1.625)))) {
  if (stepLocal_14 <= last_1_var_1_36) {
   var_1_54 = var_1_15;
  }
 } else {
  var_1_54 = var_1_11;
 }
 if (var_1_54) {
  var_1_107 = var_1_4;
 }
 signed long int stepLocal_1 = last_1_var_1_111 / var_1_13;
 if (((var_1_7 + 100000.5f) - var_1_8) > (last_1_var_1_64 + last_1_var_1_16)) {
  if (var_1_8 > last_1_var_1_64) {
   var_1_6 = (var_1_11 || (last_1_var_1_80 && var_1_12));
  } else {
   if (stepLocal_1 != (var_1_5 * (var_1_4 + last_1_var_1_105))) {
    var_1_6 = (! ((last_1_var_1_64 >= last_1_var_1_16) || var_1_15));
   } else {
    var_1_6 = ((var_1_13 > ((((last_1_var_1_105) > (last_1_var_1_111)) ? (last_1_var_1_105) : (last_1_var_1_111)))) && var_1_12);
   }
  }
 } else {
  var_1_6 = var_1_15;
 }
 var_1_18 = (var_1_4 + ((((var_1_19) < ((var_1_20 - var_1_21))) ? (var_1_19) : ((var_1_20 - var_1_21)))));
 if (! (50 < var_1_71)) {
  var_1_31 = ((((var_1_5) < (var_1_24)) ? (var_1_5) : (var_1_24)));
 } else {
  var_1_31 = var_1_4;
 }
 signed long int stepLocal_13 = var_1_29 / (var_1_24 + 5);
 if (stepLocal_13 == var_1_20) {
  var_1_32 = ((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20)));
 }
 var_1_48 = ((var_1_49 - (var_1_50 + var_1_51)) + var_1_42);
 if ((2 - (var_1_25 - var_1_59)) != (var_1_56 - (var_1_61 + var_1_5))) {
  var_1_83 = ((((var_1_40) > (((((var_1_69) > (var_1_68)) ? (var_1_69) : (var_1_68))))) ? (var_1_40) : (((((var_1_69) > (var_1_68)) ? (var_1_69) : (var_1_68))))));
 } else {
  var_1_83 = ((((var_1_50) < (var_1_44)) ? (var_1_50) : (var_1_44)));
 }
 var_1_87 = (((((var_1_69 + 4.2)) < (((var_1_67 + var_1_51) + var_1_49))) ? ((var_1_69 + 4.2)) : (((var_1_67 + var_1_51) + var_1_49))));
 if (var_1_34 <= (- var_1_68)) {
  var_1_93 = ((var_1_50 > var_1_28) && var_1_11);
 }
 var_1_94 = ((((var_1_29) < (var_1_30)) ? (var_1_29) : (var_1_30)));
 if (var_1_81) {
  var_1_105 = var_1_37;
 } else {
  var_1_105 = 8;
 }
 var_1_109 = var_1_86;
 var_1_111 = 10;
 if (var_1_11) {
  var_1_112 = var_1_59;
 } else {
  var_1_112 = var_1_29;
 }
 unsigned char stepLocal_29 = var_1_12 && var_1_93;
 if (stepLocal_29 || ((var_1_105 * var_1_107) < (var_1_19 << var_1_56))) {
  var_1_97 = var_1_61;
 } else {
  if (var_1_91 > var_1_34) {
   var_1_97 = var_1_59;
  }
 }
 signed long int stepLocal_30 = var_1_29 << (var_1_101 - var_1_102);
 if (var_1_54) {
  if ((25 << var_1_105) <= stepLocal_30) {
   var_1_100 = (var_1_12 || var_1_11);
  } else {
   var_1_100 = (var_1_54 && var_1_11);
  }
 } else {
  if (var_1_54) {
   var_1_100 = (var_1_12 || (var_1_11 || var_1_103));
  } else {
   var_1_100 = var_1_12;
  }
 }
 if (var_1_100) {
  var_1_95 = (var_1_92 - var_1_86);
 }
 if ((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) << var_1_37) >= (var_1_30 * var_1_17)) {
  var_1_80 = (! var_1_15);
 } else {
  if (((var_1_94 * var_1_107) / var_1_20) >= var_1_24) {
   var_1_80 = (var_1_15 && ((! var_1_81) || var_1_12));
  } else {
   var_1_80 = ((! (! var_1_15)) && (var_1_81 && var_1_82));
  }
 }
 unsigned char stepLocal_6 = var_1_20;
 signed long int stepLocal_5 = (((var_1_19) > (var_1_5)) ? (var_1_19) : (var_1_5));
 unsigned char stepLocal_4 = var_1_5;
 unsigned char stepLocal_3 = var_1_5;
 if (stepLocal_5 < ((var_1_105 >> 5) / var_1_17)) {
  if (var_1_11) {
   if ((var_1_20 * (var_1_23 - var_1_19)) < stepLocal_4) {
    var_1_22 = var_1_105;
   }
  } else {
   if (stepLocal_6 >= (var_1_13 / (128 - var_1_24))) {
    var_1_22 = (((((var_1_23 + (var_1_25 - var_1_21))) < ((var_1_26 - var_1_24))) ? ((var_1_23 + (var_1_25 - var_1_21))) : ((var_1_26 - var_1_24))));
   } else {
    if (256 >= stepLocal_3) {
     var_1_22 = ((((var_1_24) < (var_1_4)) ? (var_1_24) : (var_1_4)));
    } else {
     var_1_22 = ((((var_1_105) < ((var_1_26 - var_1_5))) ? (var_1_105) : ((var_1_26 - var_1_5))));
    }
   }
  }
 } else {
  var_1_22 = var_1_4;
 }
 if (var_1_29 <= 8) {
  var_1_35 = var_1_22;
 }
 if (var_1_93) {
  var_1_38 = (! var_1_15);
 }
 if (var_1_93) {
  var_1_45 = ((((var_1_21) > (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? (var_1_21) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))));
 } else {
  var_1_45 = (((((((((var_1_21 - var_1_24)) > (var_1_46)) ? ((var_1_21 - var_1_24)) : (var_1_46)))) > ((var_1_47 + 16))) ? ((((((var_1_21 - var_1_24)) > (var_1_46)) ? ((var_1_21 - var_1_24)) : (var_1_46)))) : ((var_1_47 + 16))));
 }
 if (((var_1_30 - 64) >> var_1_63) < var_1_58) {
  var_1_62 = (last_1_var_1_62 - var_1_94);
 } else {
  var_1_62 = ((((var_1_105) > (32)) ? (var_1_105) : (32)));
 }
 if (! var_1_93) {
  if (var_1_11) {
   var_1_75 = ((((((((var_1_60 - var_1_58)) < (var_1_105)) ? ((var_1_60 - var_1_58)) : (var_1_105))) < 0 ) ? -(((((var_1_60 - var_1_58)) < (var_1_105)) ? ((var_1_60 - var_1_58)) : (var_1_105))) : (((((var_1_60 - var_1_58)) < (var_1_105)) ? ((var_1_60 - var_1_58)) : (var_1_105)))));
  }
 } else {
  var_1_75 = ((((var_1_24) < (var_1_29)) ? (var_1_24) : (var_1_29)));
 }
 if (var_1_80) {
  var_1_88 = ((var_1_105 == var_1_21) && var_1_11);
 } else {
  var_1_88 = (var_1_82 && (var_1_6 || (var_1_15 && var_1_81)));
 }
 unsigned char stepLocal_28 = var_1_61;
 unsigned char stepLocal_27 = var_1_5;
 if ((var_1_22 + (var_1_59 - var_1_21)) >= stepLocal_27) {
  if (stepLocal_28 <= (var_1_74 >> var_1_63)) {
   var_1_96 = var_1_35;
  }
 }
 if (var_1_88) {
  var_1_104 = var_1_21;
 } else {
  var_1_104 = var_1_58;
 }
 if (var_1_38) {
  var_1_106 = var_1_68;
 } else {
  var_1_106 = var_1_49;
 }
 if (var_1_88) {
  var_1_110 = -2;
 } else {
  var_1_110 = var_1_21;
 }
 unsigned char stepLocal_12 = (var_1_8 / var_1_28) > var_1_7;
 unsigned char stepLocal_11 = var_1_21;
 signed long int stepLocal_10 = (64 * var_1_21) % var_1_24;
 signed long int stepLocal_9 = var_1_13;
 signed long int stepLocal_8 = var_1_107;
 signed long int stepLocal_7 = var_1_4 / -256;
 if (stepLocal_7 <= (-1 - var_1_19)) {
  if (((((var_1_96) < 0 ) ? -(var_1_96) : (var_1_96))) != stepLocal_10) {
   if (stepLocal_8 > var_1_96) {
    if (stepLocal_11 >= (- var_1_96)) {
     var_1_27 = (var_1_21 + var_1_24);
    } else {
     var_1_27 = var_1_4;
    }
   } else {
    var_1_27 = (var_1_19 + (var_1_112 + var_1_107));
   }
  } else {
   if (stepLocal_9 != var_1_17) {
    if (stepLocal_12 || var_1_15) {
     var_1_27 = var_1_4;
    } else {
     var_1_27 = ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) + var_1_30) - (var_1_5 + var_1_21));
    }
   }
  }
 } else {
  var_1_27 = var_1_29;
 }
 unsigned long int stepLocal_16 = (var_1_56 - var_1_75) - ((((var_1_21) < (var_1_5)) ? (var_1_21) : (var_1_5)));
 unsigned long int stepLocal_15 = ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))) * var_1_19;
 if (((((var_1_24) > (var_1_5)) ? (var_1_24) : (var_1_5))) <= stepLocal_15) {
  if (stepLocal_16 < (last_1_var_1_55 | var_1_37)) {
   if (var_1_95 < var_1_106) {
    var_1_55 = (var_1_30 + var_1_24);
   }
  }
 }
 if (var_1_100 && var_1_82) {
  var_1_84 = (((((2.6f - 256.25f)) < (var_1_49)) ? ((2.6f - 256.25f)) : (var_1_49)));
 } else {
  if (var_1_11) {
   if (var_1_27 < var_1_74) {
    var_1_84 = ((var_1_86 - var_1_49) - var_1_40);
   } else {
    var_1_84 = var_1_34;
   }
  }
 }
 if (var_1_12) {
  if (var_1_6) {
   var_1_64 = ((((var_1_51) < ((var_1_41 + (var_1_49 - var_1_50)))) ? (var_1_51) : ((var_1_41 + (var_1_49 - var_1_50)))));
  } else {
   if (var_1_15 && var_1_38) {
    var_1_64 = (0.19999999999999996f + ((var_1_66 + var_1_67) + (var_1_68 + var_1_69)));
   } else {
    var_1_64 = ((3.25f - var_1_50) + ((var_1_70 - var_1_51) - var_1_49));
   }
  }
 }
 unsigned char stepLocal_0 = var_1_88;
 if (stepLocal_0 && var_1_100) {
  var_1_1 = (var_1_4 + 5);
 } else {
  var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 }
 unsigned char stepLocal_2 = var_1_4;
 if ((var_1_75 | (var_1_13 % var_1_17)) == stepLocal_2) {
  var_1_16 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 if (var_1_96 <= (last_1_var_1_52 / var_1_29)) {
  var_1_52 = (var_1_29 + ((((var_1_53) > (var_1_22)) ? (var_1_53) : (var_1_22))));
 }
 if ((~ var_1_53) > (var_1_21 | var_1_94)) {
  if ((! var_1_93) || var_1_80) {
   var_1_57 = var_1_4;
  } else {
   var_1_57 = (var_1_21 + (var_1_20 - var_1_58));
  }
 } else {
  if (var_1_34 == 10.25f) {
   var_1_57 = (var_1_19 + var_1_20);
  } else {
   if (var_1_88) {
    var_1_57 = (var_1_59 - (var_1_21 + (var_1_60 + var_1_61)));
   }
  }
 }
 if (! (var_1_97 >= (var_1_75 & var_1_58))) {
  if (64.5 < var_1_44) {
   var_1_77 = ((var_1_94 + var_1_35) + ((((var_1_63) > (var_1_18)) ? (var_1_63) : (var_1_18))));
  } else {
   var_1_77 = (var_1_1 + var_1_18);
  }
 } else {
  var_1_77 = (var_1_63 + ((((var_1_5) > (((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35))))) ? (var_1_5) : (((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35)))))));
 }
 signed long int stepLocal_22 = var_1_97 - var_1_23;
 if (var_1_50 >= var_1_42) {
  if (var_1_96 > stepLocal_22) {
   var_1_79 = (var_1_58 + (var_1_21 - var_1_63));
  } else {
   var_1_79 = ((((((((var_1_60 - var_1_21)) < (var_1_24)) ? ((var_1_60 - var_1_21)) : (var_1_24))) < 0 ) ? -(((((var_1_60 - var_1_21)) < (var_1_24)) ? ((var_1_60 - var_1_21)) : (var_1_24))) : (((((var_1_60 - var_1_21)) < (var_1_24)) ? ((var_1_60 - var_1_21)) : (var_1_24)))));
  }
 }
 unsigned char stepLocal_25 = var_1_18;
 unsigned char stepLocal_24 = (var_1_63 <= var_1_97) && var_1_12;
 unsigned long int stepLocal_23 = var_1_13 + ((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71)));
 if (stepLocal_23 < var_1_5) {
  if (stepLocal_25 >= var_1_21) {
   var_1_89 = (128 - var_1_52);
  } else {
   var_1_89 = (((((var_1_58 - 2)) < ((var_1_21 - (var_1_75 + var_1_18)))) ? ((var_1_58 - 2)) : ((var_1_21 - (var_1_75 + var_1_18)))));
  }
 } else {
  if (stepLocal_24 || (var_1_75 <= (- 64))) {
   var_1_89 = ((((var_1_52 - var_1_5) < 0 ) ? -(var_1_52 - var_1_5) : (var_1_52 - var_1_5)));
  }
 }
 if (var_1_58 > (var_1_20 << var_1_23)) {
  if (! (var_1_55 <= var_1_52)) {
   var_1_98 = ((var_1_66 + var_1_50) + var_1_42);
  }
 } else {
  var_1_98 = ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < (var_1_92)) ? (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) : (var_1_92)));
 }
 signed long int stepLocal_31 = var_1_55;
 if (stepLocal_31 > (var_1_105 + var_1_5)) {
  if (! ((var_1_19 ^ var_1_13) <= var_1_21)) {
   var_1_113 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
  }
 }
 if (var_1_84 <= ((((var_1_83) < ((var_1_8 - 15.9f))) ? (var_1_83) : ((var_1_8 - 15.9f))))) {
  if ((var_1_13 <= (10 / var_1_24)) || (var_1_6 || (var_1_17 < var_1_29))) {
   var_1_36 = (var_1_30 + (((((var_1_29) < (21689)) ? (var_1_29) : (21689))) - var_1_55));
  } else {
   if (var_1_84 > var_1_7) {
    if (var_1_20 > var_1_23) {
     var_1_36 = 10;
    } else {
     var_1_36 = var_1_112;
    }
   }
  }
 } else {
  var_1_36 = (((((48227 - var_1_55)) > ((var_1_37 - var_1_20))) ? ((48227 - var_1_55)) : ((var_1_37 - var_1_20))));
 }
 if (var_1_54) {
  if (var_1_28 < ((- 16.5f) * var_1_98)) {
   var_1_39 = (((((var_1_7) < (10000.375f)) ? (var_1_7) : (10000.375f))) - var_1_40);
  } else {
   var_1_39 = ((((var_1_34) > ((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43))) ? (var_1_34) : ((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43))));
  }
 } else {
  var_1_39 = ((((var_1_40) > ((var_1_7 - var_1_44))) ? (var_1_40) : ((var_1_7 - var_1_44))));
 }
 signed short int stepLocal_21 = var_1_77;
 signed short int stepLocal_20 = var_1_63;
 if (var_1_74 > stepLocal_21) {
  var_1_76 = var_1_51;
 } else {
  if (var_1_61 > stepLocal_20) {
   var_1_76 = (var_1_41 + ((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))));
  } else {
   var_1_76 = var_1_41;
  }
 }
 if (var_1_96 <= var_1_20) {
  if (var_1_12) {
   var_1_33 = ((((var_1_7) > (var_1_34)) ? (var_1_7) : (var_1_34)));
  } else {
   if (var_1_100 || (var_1_89 < var_1_13)) {
    var_1_33 = ((((var_1_34) < (var_1_7)) ? (var_1_34) : (var_1_7)));
   } else {
    if (var_1_89 == var_1_29) {
     if ((var_1_34 >= var_1_39) || var_1_93) {
      var_1_33 = var_1_7;
     } else {
      var_1_33 = var_1_34;
     }
    }
   }
  }
 } else {
  var_1_33 = var_1_7;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 assume_abort_if_not(var_1_13 != 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32768);
 assume_abort_if_not(var_1_17 <= 32767);
 assume_abort_if_not(var_1_17 != 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 63);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 32767);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 126);
 assume_abort_if_not(var_1_24 != 127);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 assume_abort_if_not(var_1_28 != 0.0F);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 16383);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16384);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65534);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -63);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_53 >= -1073741823);
 assume_abort_if_not(var_1_53 <= 1073741823);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 3221225471);
 assume_abort_if_not(var_1_56 <= 4294967295);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 127);
 assume_abort_if_not(var_1_59 <= 254);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 32);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 31);
 var_1_63 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_63 >= 1);
 assume_abort_if_not(var_1_63 <= 30);
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= -115292.1504606845700e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 1152921.504606845700e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= -115292.1504606845700e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 1152921.504606845700e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= -115292.1504606845700e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 1152921.504606845700e+12F && var_1_68 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= -115292.1504606845700e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 1152921.504606845700e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 2305843.009213691400e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 4294967295);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 4294967294);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 1);
 assume_abort_if_not(var_1_81 <= 1);
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 1);
 assume_abort_if_not(var_1_82 <= 1);
 var_1_86 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_86 >= 4611686.018427383000e+12F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854766000e+12F && var_1_86 >= 1.0e-20F ));
 var_1_92 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854766000e+12F && var_1_92 >= 1.0e-20F ));
 var_1_101 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_101 >= 0);
 assume_abort_if_not(var_1_101 <= 1);
 var_1_102 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_102 >= 0);
 assume_abort_if_not(var_1_102 <= 0);
 var_1_103 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_103 >= 0);
 assume_abort_if_not(var_1_103 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_105 = var_1_105;
 last_1_var_1_111 = var_1_111;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_88 && var_1_100) ? (var_1_1 == ((unsigned char) (var_1_4 + 5))) : (var_1_1 == ((unsigned char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) && ((((var_1_7 + 100000.5f) - var_1_8) > (last_1_var_1_64 + last_1_var_1_16)) ? ((var_1_8 > last_1_var_1_64) ? (var_1_6 == ((unsigned char) (var_1_11 || (last_1_var_1_80 && var_1_12)))) : (((last_1_var_1_111 / var_1_13) != (var_1_5 * (var_1_4 + last_1_var_1_105))) ? (var_1_6 == ((unsigned char) (! ((last_1_var_1_64 >= last_1_var_1_16) || var_1_15)))) : (var_1_6 == ((unsigned char) ((var_1_13 > ((((last_1_var_1_105) > (last_1_var_1_111)) ? (last_1_var_1_105) : (last_1_var_1_111)))) && var_1_12))))) : (var_1_6 == ((unsigned char) var_1_15)))) && (((var_1_75 | (var_1_13 % var_1_17)) == var_1_4) ? (var_1_16 == ((double) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : 1)) && (var_1_18 == ((unsigned char) (var_1_4 + ((((var_1_19) < ((var_1_20 - var_1_21))) ? (var_1_19) : ((var_1_20 - var_1_21)))))))) && ((((((var_1_19) > (var_1_5)) ? (var_1_19) : (var_1_5))) < ((var_1_105 >> 5) / var_1_17)) ? (var_1_11 ? (((var_1_20 * (var_1_23 - var_1_19)) < var_1_5) ? (var_1_22 == ((unsigned long int) var_1_105)) : 1) : ((var_1_20 >= (var_1_13 / (128 - var_1_24))) ? (var_1_22 == ((unsigned long int) (((((var_1_23 + (var_1_25 - var_1_21))) < ((var_1_26 - var_1_24))) ? ((var_1_23 + (var_1_25 - var_1_21))) : ((var_1_26 - var_1_24)))))) : ((256 >= var_1_5) ? (var_1_22 == ((unsigned long int) ((((var_1_24) < (var_1_4)) ? (var_1_24) : (var_1_4))))) : (var_1_22 == ((unsigned long int) ((((var_1_105) < ((var_1_26 - var_1_5))) ? (var_1_105) : ((var_1_26 - var_1_5))))))))) : (var_1_22 == ((unsigned long int) var_1_4)))) && (((var_1_4 / -256) <= (-1 - var_1_19)) ? ((((((var_1_96) < 0 ) ? -(var_1_96) : (var_1_96))) != ((64 * var_1_21) % var_1_24)) ? ((var_1_107 > var_1_96) ? ((var_1_21 >= (- var_1_96)) ? (var_1_27 == ((unsigned short int) (var_1_21 + var_1_24))) : (var_1_27 == ((unsigned short int) var_1_4))) : (var_1_27 == ((unsigned short int) (var_1_19 + (var_1_112 + var_1_107))))) : ((var_1_13 != var_1_17) ? ((((var_1_8 / var_1_28) > var_1_7) || var_1_15) ? (var_1_27 == ((unsigned short int) var_1_4)) : (var_1_27 == ((unsigned short int) ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) + var_1_30) - (var_1_5 + var_1_21))))) : 1)) : (var_1_27 == ((unsigned short int) var_1_29)))) && ((! (50 < var_1_71)) ? (var_1_31 == ((unsigned char) ((((var_1_5) < (var_1_24)) ? (var_1_5) : (var_1_24))))) : (var_1_31 == ((unsigned char) var_1_4)))) && (((var_1_29 / (var_1_24 + 5)) == var_1_20) ? (var_1_32 == ((unsigned char) ((((var_1_4) > (var_1_20)) ? (var_1_4) : (var_1_20))))) : 1)) && ((var_1_96 <= var_1_20) ? (var_1_12 ? (var_1_33 == ((float) ((((var_1_7) > (var_1_34)) ? (var_1_7) : (var_1_34))))) : ((var_1_100 || (var_1_89 < var_1_13)) ? (var_1_33 == ((float) ((((var_1_34) < (var_1_7)) ? (var_1_34) : (var_1_7))))) : ((var_1_89 == var_1_29) ? (((var_1_34 >= var_1_39) || var_1_93) ? (var_1_33 == ((float) var_1_7)) : (var_1_33 == ((float) var_1_34))) : 1))) : (var_1_33 == ((float) var_1_7)))) && ((var_1_29 <= 8) ? (var_1_35 == ((unsigned short int) var_1_22)) : 1)) && ((var_1_84 <= ((((var_1_83) < ((var_1_8 - 15.9f))) ? (var_1_83) : ((var_1_8 - 15.9f))))) ? (((var_1_13 <= (10 / var_1_24)) || (var_1_6 || (var_1_17 < var_1_29))) ? (var_1_36 == ((unsigned short int) (var_1_30 + (((((var_1_29) < (21689)) ? (var_1_29) : (21689))) - var_1_55)))) : ((var_1_84 > var_1_7) ? ((var_1_20 > var_1_23) ? (var_1_36 == ((unsigned short int) 10)) : (var_1_36 == ((unsigned short int) var_1_112))) : 1)) : (var_1_36 == ((unsigned short int) (((((48227 - var_1_55)) > ((var_1_37 - var_1_20))) ? ((48227 - var_1_55)) : ((var_1_37 - var_1_20)))))))) && (var_1_93 ? (var_1_38 == ((unsigned char) (! var_1_15))) : 1)) && (var_1_54 ? ((var_1_28 < ((- 16.5f) * var_1_98)) ? (var_1_39 == ((float) (((((var_1_7) < (10000.375f)) ? (var_1_7) : (10000.375f))) - var_1_40))) : (var_1_39 == ((float) ((((var_1_34) > ((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43))) ? (var_1_34) : ((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43))))))) : (var_1_39 == ((float) ((((var_1_40) > ((var_1_7 - var_1_44))) ? (var_1_40) : ((var_1_7 - var_1_44)))))))) && (var_1_93 ? (var_1_45 == ((signed char) ((((var_1_21) > (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? (var_1_21) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))) : (var_1_45 == ((signed char) (((((((((var_1_21 - var_1_24)) > (var_1_46)) ? ((var_1_21 - var_1_24)) : (var_1_46)))) > ((var_1_47 + 16))) ? ((((((var_1_21 - var_1_24)) > (var_1_46)) ? ((var_1_21 - var_1_24)) : (var_1_46)))) : ((var_1_47 + 16)))))))) && (var_1_48 == ((double) ((var_1_49 - (var_1_50 + var_1_51)) + var_1_42)))) && ((var_1_96 <= (last_1_var_1_52 / var_1_29)) ? (var_1_52 == ((signed long int) (var_1_29 + ((((var_1_53) > (var_1_22)) ? (var_1_53) : (var_1_22)))))) : 1)) && ((64.8 != ((((var_1_43) > (1.625)) ? (var_1_43) : (1.625)))) ? ((var_1_47 <= last_1_var_1_36) ? (var_1_54 == ((unsigned char) var_1_15)) : 1) : (var_1_54 == ((unsigned char) var_1_11)))) && ((((((var_1_24) > (var_1_5)) ? (var_1_24) : (var_1_5))) <= (((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))) * var_1_19)) ? ((((var_1_56 - var_1_75) - ((((var_1_21) < (var_1_5)) ? (var_1_21) : (var_1_5)))) < (last_1_var_1_55 | var_1_37)) ? ((var_1_95 < var_1_106) ? (var_1_55 == ((signed long int) (var_1_30 + var_1_24))) : 1) : 1) : 1)) && (((~ var_1_53) > (var_1_21 | var_1_94)) ? (((! var_1_93) || var_1_80) ? (var_1_57 == ((unsigned char) var_1_4)) : (var_1_57 == ((unsigned char) (var_1_21 + (var_1_20 - var_1_58))))) : ((var_1_34 == 10.25f) ? (var_1_57 == ((unsigned char) (var_1_19 + var_1_20))) : (var_1_88 ? (var_1_57 == ((unsigned char) (var_1_59 - (var_1_21 + (var_1_60 + var_1_61))))) : 1)))) && ((((var_1_30 - 64) >> var_1_63) < var_1_58) ? (var_1_62 == ((signed short int) (last_1_var_1_62 - var_1_94))) : (var_1_62 == ((signed short int) ((((var_1_105) > (32)) ? (var_1_105) : (32))))))) && (var_1_12 ? (var_1_6 ? (var_1_64 == ((float) ((((var_1_51) < ((var_1_41 + (var_1_49 - var_1_50)))) ? (var_1_51) : ((var_1_41 + (var_1_49 - var_1_50))))))) : ((var_1_15 && var_1_38) ? (var_1_64 == ((float) (0.19999999999999996f + ((var_1_66 + var_1_67) + (var_1_68 + var_1_69))))) : (var_1_64 == ((float) ((3.25f - var_1_50) + ((var_1_70 - var_1_51) - var_1_49)))))) : 1)) && ((var_1_25 < (var_1_72 * last_1_var_1_97)) ? (((var_1_13 * var_1_17) < var_1_29) ? ((var_1_41 >= last_1_var_1_95) ? (var_1_71 == ((unsigned long int) var_1_37)) : (var_1_71 == ((unsigned long int) ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))))) : ((var_1_23 < var_1_5) ? (var_1_71 == ((unsigned long int) (16u + var_1_23))) : 1)) : 1)) && ((! var_1_93) ? (var_1_11 ? (var_1_75 == ((signed long int) ((((((((var_1_60 - var_1_58)) < (var_1_105)) ? ((var_1_60 - var_1_58)) : (var_1_105))) < 0 ) ? -(((((var_1_60 - var_1_58)) < (var_1_105)) ? ((var_1_60 - var_1_58)) : (var_1_105))) : (((((var_1_60 - var_1_58)) < (var_1_105)) ? ((var_1_60 - var_1_58)) : (var_1_105))))))) : 1) : (var_1_75 == ((signed long int) ((((var_1_24) < (var_1_29)) ? (var_1_24) : (var_1_29))))))) && ((var_1_74 > var_1_77) ? (var_1_76 == ((double) var_1_51)) : ((var_1_61 > var_1_63) ? (var_1_76 == ((double) (var_1_41 + ((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))))) : (var_1_76 == ((double) var_1_41))))) && ((! (var_1_97 >= (var_1_75 & var_1_58))) ? ((64.5 < var_1_44) ? (var_1_77 == ((signed short int) ((var_1_94 + var_1_35) + ((((var_1_63) > (var_1_18)) ? (var_1_63) : (var_1_18)))))) : (var_1_77 == ((signed short int) (var_1_1 + var_1_18)))) : (var_1_77 == ((signed short int) (var_1_63 + ((((var_1_5) > (((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35))))) ? (var_1_5) : (((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35))))))))))) && ((var_1_50 >= var_1_42) ? ((var_1_96 > (var_1_97 - var_1_23)) ? (var_1_79 == ((signed char) (var_1_58 + (var_1_21 - var_1_63)))) : (var_1_79 == ((signed char) ((((((((var_1_60 - var_1_21)) < (var_1_24)) ? ((var_1_60 - var_1_21)) : (var_1_24))) < 0 ) ? -(((((var_1_60 - var_1_21)) < (var_1_24)) ? ((var_1_60 - var_1_21)) : (var_1_24))) : (((((var_1_60 - var_1_21)) < (var_1_24)) ? ((var_1_60 - var_1_21)) : (var_1_24)))))))) : 1)) && (((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) << var_1_37) >= (var_1_30 * var_1_17)) ? (var_1_80 == ((unsigned char) (! var_1_15))) : ((((var_1_94 * var_1_107) / var_1_20) >= var_1_24) ? (var_1_80 == ((unsigned char) (var_1_15 && ((! var_1_81) || var_1_12)))) : (var_1_80 == ((unsigned char) ((! (! var_1_15)) && (var_1_81 && var_1_82))))))) && (((2 - (var_1_25 - var_1_59)) != (var_1_56 - (var_1_61 + var_1_5))) ? (var_1_83 == ((float) ((((var_1_40) > (((((var_1_69) > (var_1_68)) ? (var_1_69) : (var_1_68))))) ? (var_1_40) : (((((var_1_69) > (var_1_68)) ? (var_1_69) : (var_1_68)))))))) : (var_1_83 == ((float) ((((var_1_50) < (var_1_44)) ? (var_1_50) : (var_1_44))))))) && ((var_1_100 && var_1_82) ? (var_1_84 == ((float) (((((2.6f - 256.25f)) < (var_1_49)) ? ((2.6f - 256.25f)) : (var_1_49))))) : (var_1_11 ? ((var_1_27 < var_1_74) ? (var_1_84 == ((float) ((var_1_86 - var_1_49) - var_1_40))) : (var_1_84 == ((float) var_1_34))) : 1))) && (var_1_87 == ((double) (((((var_1_69 + 4.2)) < (((var_1_67 + var_1_51) + var_1_49))) ? ((var_1_69 + 4.2)) : (((var_1_67 + var_1_51) + var_1_49))))))) && (var_1_80 ? (var_1_88 == ((unsigned char) ((var_1_105 == var_1_21) && var_1_11))) : (var_1_88 == ((unsigned char) (var_1_82 && (var_1_6 || (var_1_15 && var_1_81))))))) && (((var_1_13 + ((((var_1_55) > (var_1_71)) ? (var_1_55) : (var_1_71)))) < var_1_5) ? ((var_1_18 >= var_1_21) ? (var_1_89 == ((signed short int) (128 - var_1_52))) : (var_1_89 == ((signed short int) (((((var_1_58 - 2)) < ((var_1_21 - (var_1_75 + var_1_18)))) ? ((var_1_58 - 2)) : ((var_1_21 - (var_1_75 + var_1_18)))))))) : ((((var_1_63 <= var_1_97) && var_1_12) || (var_1_75 <= (- 64))) ? (var_1_89 == ((signed short int) ((((var_1_52 - var_1_5) < 0 ) ? -(var_1_52 - var_1_5) : (var_1_52 - var_1_5))))) : 1))) && (((var_1_23 / (var_1_63 + var_1_29)) <= var_1_71) ? (var_1_91 == ((double) ((((var_1_49) < (var_1_40)) ? (var_1_49) : (var_1_40))))) : ((var_1_8 <= var_1_70) ? (var_1_91 == ((double) (((((((((var_1_86) < (var_1_51)) ? (var_1_86) : (var_1_51)))) > (var_1_70)) ? (((((var_1_86) < (var_1_51)) ? (var_1_86) : (var_1_51)))) : (var_1_70))) - ((((var_1_7) < (((((var_1_92) < (var_1_49)) ? (var_1_92) : (var_1_49))))) ? (var_1_7) : (((((var_1_92) < (var_1_49)) ? (var_1_92) : (var_1_49))))))))) : 1))) && ((var_1_34 <= (- var_1_68)) ? (var_1_93 == ((unsigned char) ((var_1_50 > var_1_28) && var_1_11))) : 1)) && (var_1_94 == ((unsigned short int) ((((var_1_29) < (var_1_30)) ? (var_1_29) : (var_1_30)))))) && (var_1_100 ? (var_1_95 == ((double) (var_1_92 - var_1_86))) : 1)) && (((var_1_22 + (var_1_59 - var_1_21)) >= var_1_5) ? ((var_1_61 <= (var_1_74 >> var_1_63)) ? (var_1_96 == ((signed long int) var_1_35)) : 1) : 1)) && (((var_1_12 && var_1_93) || ((var_1_105 * var_1_107) < (var_1_19 << var_1_56))) ? (var_1_97 == ((signed short int) var_1_61)) : ((var_1_91 > var_1_34) ? (var_1_97 == ((signed short int) var_1_59)) : 1))) && ((var_1_58 > (var_1_20 << var_1_23)) ? ((! (var_1_55 <= var_1_52)) ? (var_1_98 == ((float) ((var_1_66 + var_1_50) + var_1_42))) : 1) : (var_1_98 == ((float) ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < (var_1_92)) ? (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) : (var_1_92))))))) && (var_1_54 ? (((25 << var_1_105) <= (var_1_29 << (var_1_101 - var_1_102))) ? (var_1_100 == ((unsigned char) (var_1_12 || var_1_11))) : (var_1_100 == ((unsigned char) (var_1_54 && var_1_11)))) : (var_1_54 ? (var_1_100 == ((unsigned char) (var_1_12 || (var_1_11 || var_1_103)))) : (var_1_100 == ((unsigned char) var_1_12))))) && (var_1_88 ? (var_1_104 == ((signed char) var_1_21)) : (var_1_104 == ((signed char) var_1_58)))) && (var_1_81 ? (var_1_105 == ((signed long int) var_1_37)) : (var_1_105 == ((signed long int) 8)))) && (var_1_38 ? (var_1_106 == ((double) var_1_68)) : (var_1_106 == ((double) var_1_49)))) && (var_1_54 ? (var_1_107 == ((signed long int) var_1_4)) : 1)) && (var_1_109 == ((double) var_1_86))) && (var_1_88 ? (var_1_110 == ((signed char) -2)) : (var_1_110 == ((signed char) var_1_21)))) && (var_1_111 == ((unsigned short int) 10))) && (var_1_11 ? (var_1_112 == ((unsigned short int) var_1_59)) : (var_1_112 == ((unsigned short int) var_1_29)))) && ((var_1_55 > (var_1_105 + var_1_5)) ? ((! ((var_1_19 ^ var_1_13) <= var_1_21)) ? (var_1_113 == ((float) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : 1) : 1)
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
