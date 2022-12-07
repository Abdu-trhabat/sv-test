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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed char var_1_6 = -2;
signed char var_1_7 = 2;
double var_1_8 = 16.25;
double var_1_9 = 31.5;
double var_1_10 = 127.9;
double var_1_11 = 15.9;
double var_1_12 = 64.75;
double var_1_13 = 0.07999999999999996;
double var_1_14 = 8.6;
unsigned long int var_1_15 = 0;
signed long int var_1_16 = 16;
double var_1_18 = 99.8;
double var_1_20 = 256.125;
unsigned short int var_1_21 = 256;
signed long int var_1_22 = 25;
unsigned short int var_1_23 = 25686;
unsigned short int var_1_24 = 29835;
unsigned short int var_1_26 = 39206;
unsigned short int var_1_27 = 27481;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
signed short int var_1_33 = 128;
float var_1_35 = 99999999999999.5;
double var_1_36 = 0.0;
float var_1_37 = 100.8;
unsigned char var_1_38 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 4;
signed long int var_1_44 = -50;
signed long int var_1_46 = 100;
unsigned char var_1_47 = 4;
float var_1_48 = 16.3;
unsigned char var_1_49 = 1;
signed char var_1_50 = 64;
unsigned char var_1_51 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 1;
signed char var_1_56 = 2;
signed long int var_1_57 = 1988620387;
signed char var_1_58 = -4;
double var_1_59 = 1000000.5;
double var_1_60 = 99.5;
signed char var_1_61 = 5;
signed char var_1_62 = -25;
signed char var_1_63 = -2;
signed char var_1_64 = 32;
signed char var_1_65 = 2;
signed char var_1_66 = 0;
signed char var_1_67 = 10;
signed short int var_1_68 = 50;
float var_1_69 = 8.7;
float var_1_70 = 0.0;
signed short int var_1_71 = 64;
signed char var_1_72 = 64;
float var_1_73 = 128.5;
signed char var_1_74 = -128;
signed char var_1_75 = 32;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 100;
unsigned char var_1_78 = 64;
float var_1_79 = 32.5;
signed short int var_1_80 = 128;
signed short int var_1_81 = 0;
signed short int var_1_82 = 20553;
signed long int var_1_84 = 8;
float var_1_85 = 9.75;
double var_1_86 = 128.7;
unsigned long int var_1_87 = 128;
unsigned short int var_1_88 = 256;
signed long int var_1_89 = -16;
unsigned long int var_1_90 = 100000000;
double var_1_91 = 0.7;
unsigned long int var_1_92 = 1;
signed short int var_1_93 = 50;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 0;
signed long int var_1_96 = -4;
unsigned char var_1_97 = 1;
unsigned char var_1_99 = 1;
double var_1_100 = 4.4;
signed short int last_1_var_1_1 = 2;
unsigned long int last_1_var_1_15 = 0;
unsigned short int last_1_var_1_21 = 256;
signed short int last_1_var_1_33 = 128;
unsigned char last_1_var_1_38 = 10;
signed long int last_1_var_1_46 = 100;
unsigned char last_1_var_1_47 = 4;
float last_1_var_1_48 = 16.3;
unsigned char last_1_var_1_49 = 1;
unsigned char last_1_var_1_51 = 0;
unsigned short int last_1_var_1_55 = 1;
signed short int last_1_var_1_68 = 50;
float last_1_var_1_69 = 8.7;
signed short int last_1_var_1_71 = 64;
unsigned char last_1_var_1_76 = 0;
float last_1_var_1_79 = 32.5;
signed short int last_1_var_1_80 = 128;
signed short int last_1_var_1_81 = 0;
float last_1_var_1_85 = 9.75;
unsigned long int last_1_var_1_87 = 128;
signed long int last_1_var_1_89 = -16;
unsigned long int last_1_var_1_90 = 100000000;
signed short int last_1_var_1_93 = 50;
unsigned char last_1_var_1_94 = 1;
void initially(void) {
}
void step(void) {
 if (! var_1_53) {
  var_1_84 = last_1_var_1_80;
 }
 signed long int stepLocal_18 = last_1_var_1_81;
 signed long int stepLocal_17 = last_1_var_1_71;
 if (var_1_32) {
  var_1_51 = ((((((last_1_var_1_33) < (last_1_var_1_81)) ? (last_1_var_1_33) : (last_1_var_1_81))) > last_1_var_1_1) || var_1_31);
 } else {
  if (stepLocal_18 < last_1_var_1_21) {
   var_1_51 = ((var_1_30 || var_1_53) || var_1_54);
  } else {
   if (((((last_1_var_1_21) > (128)) ? (last_1_var_1_21) : (128))) >= stepLocal_17) {
    var_1_51 = (! var_1_31);
   } else {
    var_1_51 = (last_1_var_1_51 && var_1_54);
   }
  }
 }
 signed long int stepLocal_29 = last_1_var_1_68;
 signed long int stepLocal_28 = (((last_1_var_1_46) < 0 ) ? -(last_1_var_1_46) : (last_1_var_1_46));
 if (last_1_var_1_69 <= (var_1_12 * var_1_13)) {
  if (last_1_var_1_87 >= stepLocal_29) {
   if (stepLocal_28 >= last_1_var_1_81) {
    var_1_81 = (25 - ((((last_1_var_1_38) > ((var_1_82 - var_1_40))) ? (last_1_var_1_38) : ((var_1_82 - var_1_40)))));
   }
  } else {
   var_1_81 = (var_1_42 + last_1_var_1_38);
  }
 } else {
  if (0.2f > last_1_var_1_79) {
   if (last_1_var_1_51) {
    var_1_81 = ((var_1_78 + var_1_7) + 4);
   } else {
    var_1_81 = (((((var_1_43 - var_1_40)) < ((last_1_var_1_71 - var_1_82))) ? ((var_1_43 - var_1_40)) : ((last_1_var_1_71 - var_1_82))));
   }
  }
 }
 unsigned char stepLocal_23 = var_1_54;
 signed long int stepLocal_22 = var_1_26 - var_1_65;
 if (stepLocal_23 && (200 <= var_1_7)) {
  if (last_1_var_1_21 >= stepLocal_22) {
   var_1_68 = ((((var_1_67) > (var_1_64)) ? (var_1_67) : (var_1_64)));
  }
 }
 signed long int stepLocal_9 = 200 - var_1_42;
 if (var_1_43 == stepLocal_9) {
  var_1_46 = (var_1_42 - (((((((last_1_var_1_15) > (var_1_26)) ? (last_1_var_1_15) : (var_1_26))) < 0 ) ? -((((last_1_var_1_15) > (var_1_26)) ? (last_1_var_1_15) : (var_1_26))) : ((((last_1_var_1_15) > (var_1_26)) ? (last_1_var_1_15) : (var_1_26))))));
 } else {
  var_1_46 = ((last_1_var_1_81 + last_1_var_1_47) + -8);
 }
 signed long int stepLocal_3 = - last_1_var_1_21;
 signed long int stepLocal_2 = last_1_var_1_89 / var_1_16;
 if (stepLocal_3 >= (((((last_1_var_1_89 % var_1_16)) > (last_1_var_1_15)) ? ((last_1_var_1_89 % var_1_16)) : (last_1_var_1_15)))) {
  if (stepLocal_2 <= last_1_var_1_76) {
   var_1_15 = (last_1_var_1_21 + (last_1_var_1_21 + last_1_var_1_21));
  }
 }
 signed long int stepLocal_8 = last_1_var_1_47 + (var_1_26 - var_1_24);
 if (last_1_var_1_38 <= stepLocal_8) {
  if (((((last_1_var_1_85) > ((var_1_20 + var_1_9))) ? (last_1_var_1_85) : ((var_1_20 + var_1_9)))) > (- ((((var_1_11) < (last_1_var_1_48)) ? (var_1_11) : (last_1_var_1_48))))) {
   var_1_38 = (var_1_39 - var_1_40);
  }
 } else {
  var_1_38 = (var_1_39 - (((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43));
 }
 if ((var_1_50 * (var_1_67 >> last_1_var_1_55)) <= ((last_1_var_1_90 >> var_1_65) ^ var_1_63)) {
  if (last_1_var_1_87 >= (~ (var_1_58 * var_1_67))) {
   var_1_76 = (var_1_39 - 4);
  } else {
   if (last_1_var_1_90 >= (var_1_50 - var_1_42)) {
    var_1_76 = ((((((var_1_50 + var_1_77) - var_1_40)) > ((var_1_39 - ((((var_1_67) < (var_1_43)) ? (var_1_67) : (var_1_43)))))) ? (((var_1_50 + var_1_77) - var_1_40)) : ((var_1_39 - ((((var_1_67) < (var_1_43)) ? (var_1_67) : (var_1_43)))))));
   } else {
    var_1_76 = (var_1_64 + var_1_66);
   }
  }
 } else {
  var_1_76 = ((var_1_66 + (var_1_64 + var_1_65)) + ((var_1_78 - var_1_67) + 32));
 }
 signed char stepLocal_7 = var_1_7;
 unsigned char stepLocal_6 = var_1_14 <= var_1_11;
 unsigned short int stepLocal_5 = var_1_24;
 if ((var_1_13 - var_1_14) >= (var_1_10 + ((((var_1_12) < (var_1_9)) ? (var_1_12) : (var_1_9))))) {
  if (last_1_var_1_49 && stepLocal_6) {
   var_1_29 = var_1_30;
  } else {
   if (stepLocal_5 <= var_1_16) {
    if (last_1_var_1_94) {
     var_1_29 = (! var_1_31);
    } else {
     var_1_29 = (last_1_var_1_49 && (! var_1_31));
    }
   } else {
    if (last_1_var_1_69 != var_1_10) {
     var_1_29 = (! (var_1_31 && var_1_32));
    } else {
     var_1_29 = ((var_1_12 != 255.25) || var_1_32);
    }
   }
  }
 } else {
  if (stepLocal_7 >= ((((var_1_16) > (last_1_var_1_93)) ? (var_1_16) : (last_1_var_1_93)))) {
   var_1_29 = ((var_1_22 == last_1_var_1_33) || var_1_32);
  } else {
   var_1_29 = 1;
  }
 }
 if (var_1_29) {
  var_1_88 = 128;
 }
 var_1_90 = var_1_88;
 var_1_6 = var_1_7;
 if (var_1_30) {
  var_1_85 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 }
 var_1_91 = var_1_12;
 var_1_92 = var_1_41;
 var_1_93 = var_1_78;
 var_1_94 = var_1_31;
 if (var_1_54) {
  var_1_95 = var_1_53;
 } else {
  var_1_95 = var_1_32;
 }
 var_1_99 = var_1_30;
 var_1_100 = var_1_12;
 signed long int stepLocal_26 = 5;
 unsigned long int stepLocal_25 = -4 & ((((var_1_41) > (var_1_15)) ? (var_1_41) : (var_1_15)));
 if (((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))) < stepLocal_26) {
  var_1_79 = ((var_1_13 + var_1_14) - ((((var_1_70) > (var_1_20)) ? (var_1_70) : (var_1_20))));
 } else {
  if (var_1_84 > stepLocal_25) {
   var_1_79 = (var_1_70 - 4.2f);
  } else {
   var_1_79 = var_1_9;
  }
 }
 if ((var_1_24 + 5u) <= var_1_46) {
  if (-256 != var_1_40) {
   if ((- (var_1_67 + var_1_66)) <= var_1_88) {
    var_1_69 = ((((var_1_37) < (var_1_20)) ? (var_1_37) : (var_1_20)));
   } else {
    var_1_69 = ((var_1_70 - var_1_13) - ((((var_1_20) < (var_1_14)) ? (var_1_20) : (var_1_14))));
   }
  } else {
   var_1_69 = (((((((var_1_12) < (var_1_37)) ? (var_1_12) : (var_1_37))) < 0 ) ? -((((var_1_12) < (var_1_37)) ? (var_1_12) : (var_1_37))) : ((((var_1_12) < (var_1_37)) ? (var_1_12) : (var_1_37)))));
  }
 }
 if (var_1_29) {
  var_1_87 = var_1_38;
 } else {
  var_1_87 = var_1_39;
 }
 if (var_1_79 > (var_1_13 - var_1_36)) {
  if (var_1_20 < var_1_37) {
   var_1_48 = ((((var_1_14) > ((var_1_20 - var_1_13))) ? (var_1_14) : ((var_1_20 - var_1_13))));
  }
 }
 unsigned char stepLocal_11 = var_1_76;
 unsigned char stepLocal_10 = var_1_94;
 if (stepLocal_10 || (0u > var_1_26)) {
  if (stepLocal_11 < ((var_1_39 + var_1_90) & var_1_92)) {
   var_1_47 = (var_1_39 - ((((var_1_42 + var_1_43) < 0 ) ? -(var_1_42 + var_1_43) : (var_1_42 + var_1_43))));
  } else {
   var_1_47 = var_1_40;
  }
 }
 unsigned char stepLocal_19 = var_1_30;
 if (stepLocal_19 || var_1_29) {
  var_1_55 = (var_1_26 - var_1_76);
 } else {
  var_1_55 = ((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76)));
 }
 if (var_1_99) {
  var_1_71 = (var_1_41 - ((((var_1_39) < (var_1_76)) ? (var_1_39) : (var_1_76))));
 } else {
  var_1_71 = var_1_47;
 }
 unsigned char stepLocal_4 = var_1_9 < var_1_100;
 if (stepLocal_4 || var_1_29) {
  var_1_18 = (((((var_1_14 - var_1_20)) > (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11)))))) ? ((var_1_14 - var_1_20)) : (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11)))))));
 }
 signed long int stepLocal_16 = (var_1_50 - var_1_41) - (32 + var_1_43);
 unsigned char stepLocal_15 = var_1_29;
 unsigned char stepLocal_14 = var_1_41;
 unsigned short int stepLocal_13 = var_1_26;
 signed long int stepLocal_12 = var_1_46;
 if (stepLocal_13 <= 4) {
  if (var_1_79 < var_1_13) {
   if ((var_1_27 * (var_1_87 / var_1_23)) <= stepLocal_14) {
    if (stepLocal_16 >= var_1_55) {
     var_1_49 = (! (! var_1_32));
    }
   } else {
    var_1_49 = ((var_1_79 != var_1_10) || (! var_1_30));
   }
  } else {
   var_1_49 = (var_1_29 && (! var_1_31));
  }
 } else {
  if (stepLocal_15 && (var_1_15 < (var_1_6 * var_1_46))) {
   var_1_49 = var_1_31;
  } else {
   if (var_1_39 == stepLocal_12) {
    var_1_49 = (var_1_29 && var_1_30);
   } else {
    var_1_49 = (var_1_31 && var_1_32);
   }
  }
 }
 unsigned char stepLocal_1 = var_1_47;
 signed long int stepLocal_0 = var_1_84;
 if (stepLocal_0 == var_1_71) {
  var_1_8 = (var_1_9 + var_1_10);
 } else {
  if (stepLocal_1 <= (var_1_84 + var_1_38)) {
   var_1_8 = (((((var_1_11 + var_1_12) + 1.00000005E7) < 0 ) ? -((var_1_11 + var_1_12) + 1.00000005E7) : ((var_1_11 + var_1_12) + 1.00000005E7)));
  } else {
   var_1_8 = (((var_1_13 - var_1_14) + var_1_12) + var_1_9);
  }
 }
 if (var_1_95) {
  var_1_74 = (var_1_61 + ((((var_1_62) < (var_1_75)) ? (var_1_62) : (var_1_75))));
 }
 if ((var_1_68 / var_1_16) >= (var_1_64 << var_1_74)) {
  if ((var_1_59 * var_1_37) >= (var_1_69 / var_1_70)) {
   var_1_86 = (((((var_1_14 - var_1_70)) < (var_1_12)) ? ((var_1_14 - var_1_70)) : (var_1_12)));
  }
 } else {
  var_1_86 = var_1_20;
 }
 if ((var_1_88 & var_1_46) <= var_1_74) {
  var_1_1 = var_1_38;
 }
 if (var_1_18 > (var_1_13 - (var_1_36 - var_1_14))) {
  var_1_35 = var_1_12;
 } else {
  if (var_1_14 == (1.35 + (var_1_13 - var_1_36))) {
   if (var_1_14 > var_1_11) {
    var_1_35 = (var_1_11 + (var_1_14 - 5.5f));
   }
  } else {
   if ((var_1_15 * (var_1_7 * var_1_16)) < var_1_27) {
    var_1_35 = (((((var_1_12) > (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9))))) ? (var_1_12) : (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9)))))) + (var_1_11 + var_1_13));
   } else {
    var_1_35 = ((((((var_1_14 - var_1_13)) < (var_1_9)) ? ((var_1_14 - var_1_13)) : (var_1_9))) + (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) + var_1_37));
   }
  }
 }
 if (var_1_35 > ((var_1_20 - var_1_14) + var_1_91)) {
  var_1_97 = (! (! var_1_32));
 }
 if (-0.35f > ((((var_1_10) > (var_1_14)) ? (var_1_10) : (var_1_14)))) {
  var_1_33 = (var_1_38 - (var_1_47 + 256));
 } else {
  var_1_33 = ((((var_1_7) < (8)) ? (var_1_7) : (8)));
 }
 if (var_1_30) {
  var_1_44 = ((var_1_23 + var_1_38) - var_1_55);
 }
 unsigned char stepLocal_24 = (5 / var_1_26) < var_1_46;
 if (! var_1_51) {
  var_1_73 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_9)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_9)));
 } else {
  if (stepLocal_24 && var_1_30) {
   if (var_1_97) {
    var_1_73 = (((((var_1_10 + var_1_11)) < ((var_1_70 - var_1_14))) ? ((var_1_10 + var_1_11)) : ((var_1_70 - var_1_14))));
   } else {
    var_1_73 = (var_1_13 - var_1_14);
   }
  } else {
   var_1_73 = (var_1_20 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
  }
 }
 if (var_1_99) {
  var_1_96 = var_1_76;
 } else {
  var_1_96 = var_1_44;
 }
 if (var_1_53) {
  if (! var_1_29) {
   var_1_72 = ((((var_1_61) > (var_1_43)) ? (var_1_61) : (var_1_43)));
  } else {
   var_1_72 = ((((((((var_1_62) < ((var_1_42 - var_1_43))) ? (var_1_62) : ((var_1_42 - var_1_43))))) > ((var_1_61 + var_1_66))) ? (((((var_1_62) < ((var_1_42 - var_1_43))) ? (var_1_62) : ((var_1_42 - var_1_43))))) : ((var_1_61 + var_1_66))));
  }
 } else {
  if ((var_1_44 / var_1_26) <= var_1_42) {
   var_1_72 = ((((var_1_67) > (var_1_41)) ? (var_1_67) : (var_1_41)));
  } else {
   if (var_1_68 < -25) {
    var_1_72 = ((64 - (var_1_65 + var_1_67)) - var_1_64);
   } else {
    if (((var_1_84 * var_1_1) >= var_1_68) && var_1_99) {
     var_1_72 = var_1_42;
    } else {
     var_1_72 = (((((((((var_1_66) < (var_1_64)) ? (var_1_66) : (var_1_64))) - var_1_42)) > ((var_1_62 + var_1_43))) ? ((((((var_1_66) < (var_1_64)) ? (var_1_66) : (var_1_64))) - var_1_42)) : ((var_1_62 + var_1_43))));
    }
   }
  }
 }
 unsigned char stepLocal_21 = var_1_39;
 signed long int stepLocal_20 = (var_1_57 - var_1_42) - 5;
 if ((var_1_15 * (var_1_55 - var_1_26)) < stepLocal_20) {
  var_1_56 = ((((((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) < (-8)) ? (((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) : (-8)));
 } else {
  if (((((var_1_36) > (var_1_20)) ? (var_1_36) : (var_1_20))) == (var_1_86 / ((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))))) {
   var_1_56 = ((((var_1_43) > ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63))) ? (var_1_43) : ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63))));
  } else {
   if (((((var_1_72) < (16)) ? (var_1_72) : (16))) > stepLocal_21) {
    var_1_56 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
   } else {
    var_1_56 = ((16 + (var_1_64 + var_1_65)) - ((var_1_66 + var_1_67) + var_1_43));
   }
  }
 }
 if (var_1_51) {
  if ((((((var_1_20) < (var_1_91)) ? (var_1_20) : (var_1_91))) * var_1_14) <= (var_1_13 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) {
   if (var_1_16 <= (var_1_81 % var_1_22)) {
    if (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))) >= var_1_47) {
     if (var_1_90 != var_1_16) {
      var_1_21 = ((var_1_23 + var_1_24) - 32);
     } else {
      var_1_21 = ((((((var_1_24 - var_1_76) + var_1_23)) > ((var_1_26 - (var_1_27 - 32)))) ? (((var_1_24 - var_1_76) + var_1_23)) : ((var_1_26 - (var_1_27 - 32)))));
     }
    }
   } else {
    var_1_21 = ((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26)));
   }
  } else {
   if (var_1_47 >= ((((var_1_23) < (var_1_76)) ? (var_1_23) : (var_1_76)))) {
    if (var_1_16 == var_1_26) {
     var_1_21 = (((((var_1_76 + var_1_24)) < (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))))))) ? ((var_1_76 + var_1_24)) : (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))))))));
    }
   } else {
    if ((var_1_47 > var_1_72) || var_1_51) {
     if (var_1_88 < var_1_84) {
      var_1_21 = (var_1_27 + (var_1_23 - var_1_76));
     }
    } else {
     var_1_21 = var_1_76;
    }
   }
  }
 } else {
  var_1_21 = var_1_23;
 }
 if (var_1_97) {
  var_1_89 = var_1_33;
 } else {
  var_1_89 = var_1_56;
 }
 signed long int stepLocal_27 = (~ var_1_63) ^ -50;
 if (stepLocal_27 <= (var_1_89 >> var_1_76)) {
  var_1_80 = (2 + (var_1_67 - (var_1_77 + var_1_74)));
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483648);
 assume_abort_if_not(var_1_22 <= 2147483647);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 16383);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 16384);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 16383);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 4611686.018427387900e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -230584.3009213691390e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 64);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 64);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 63);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_57 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_57 >= 1073741823);
 assume_abort_if_not(var_1_57 <= 2147483647);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -127);
 assume_abort_if_not(var_1_58 <= 126);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 assume_abort_if_not(var_1_59 != 0.0F);
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 assume_abort_if_not(var_1_60 != 0.0F);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -63);
 assume_abort_if_not(var_1_61 <= 63);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -63);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -63);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 32);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 31);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 32);
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 31);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 4611686.018427382800e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= -63);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 64);
 assume_abort_if_not(var_1_77 <= 127);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 32);
 assume_abort_if_not(var_1_78 <= 64);
 var_1_82 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_82 >= 16383);
 assume_abort_if_not(var_1_82 <= 32766);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_94 = var_1_94;
}
int property() {
 return (((((((((((((((((((((((((((((((((((((((((((((var_1_88 & var_1_46) <= var_1_74) ? (var_1_1 == ((signed short int) var_1_38)) : 1) && (var_1_6 == ((signed char) var_1_7))) && ((var_1_84 == var_1_71) ? (var_1_8 == ((double) (var_1_9 + var_1_10))) : ((var_1_47 <= (var_1_84 + var_1_38)) ? (var_1_8 == ((double) (((((var_1_11 + var_1_12) + 1.00000005E7) < 0 ) ? -((var_1_11 + var_1_12) + 1.00000005E7) : ((var_1_11 + var_1_12) + 1.00000005E7))))) : (var_1_8 == ((double) (((var_1_13 - var_1_14) + var_1_12) + var_1_9)))))) && (((- last_1_var_1_21) >= (((((last_1_var_1_89 % var_1_16)) > (last_1_var_1_15)) ? ((last_1_var_1_89 % var_1_16)) : (last_1_var_1_15)))) ? (((last_1_var_1_89 / var_1_16) <= last_1_var_1_76) ? (var_1_15 == ((unsigned long int) (last_1_var_1_21 + (last_1_var_1_21 + last_1_var_1_21)))) : 1) : 1)) && (((var_1_9 < var_1_100) || var_1_29) ? (var_1_18 == ((double) (((((var_1_14 - var_1_20)) > (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11)))))) ? ((var_1_14 - var_1_20)) : (((((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) > ((var_1_13 + var_1_11))) ? (((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9)))) : ((var_1_13 + var_1_11))))))))) : 1)) && (var_1_51 ? (((((((var_1_20) < (var_1_91)) ? (var_1_20) : (var_1_91))) * var_1_14) <= (var_1_13 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? ((var_1_16 <= (var_1_81 % var_1_22)) ? ((((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))) >= var_1_47) ? ((var_1_90 != var_1_16) ? (var_1_21 == ((unsigned short int) ((var_1_23 + var_1_24) - 32))) : (var_1_21 == ((unsigned short int) ((((((var_1_24 - var_1_76) + var_1_23)) > ((var_1_26 - (var_1_27 - 32)))) ? (((var_1_24 - var_1_76) + var_1_23)) : ((var_1_26 - (var_1_27 - 32)))))))) : 1) : (var_1_21 == ((unsigned short int) ((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26)))))) : ((var_1_47 >= ((((var_1_23) < (var_1_76)) ? (var_1_23) : (var_1_76)))) ? ((var_1_16 == var_1_26) ? (var_1_21 == ((unsigned short int) (((((var_1_76 + var_1_24)) < (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))))))) ? ((var_1_76 + var_1_24)) : (((((var_1_23) < (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_23) : (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))))))))) : 1) : (((var_1_47 > var_1_72) || var_1_51) ? ((var_1_88 < var_1_84) ? (var_1_21 == ((unsigned short int) (var_1_27 + (var_1_23 - var_1_76)))) : 1) : (var_1_21 == ((unsigned short int) var_1_76))))) : (var_1_21 == ((unsigned short int) var_1_23)))) && (((var_1_13 - var_1_14) >= (var_1_10 + ((((var_1_12) < (var_1_9)) ? (var_1_12) : (var_1_9))))) ? ((last_1_var_1_49 && (var_1_14 <= var_1_11)) ? (var_1_29 == ((unsigned char) var_1_30)) : ((var_1_24 <= var_1_16) ? (last_1_var_1_94 ? (var_1_29 == ((unsigned char) (! var_1_31))) : (var_1_29 == ((unsigned char) (last_1_var_1_49 && (! var_1_31))))) : ((last_1_var_1_69 != var_1_10) ? (var_1_29 == ((unsigned char) (! (var_1_31 && var_1_32)))) : (var_1_29 == ((unsigned char) ((var_1_12 != 255.25) || var_1_32)))))) : ((var_1_7 >= ((((var_1_16) > (last_1_var_1_93)) ? (var_1_16) : (last_1_var_1_93)))) ? (var_1_29 == ((unsigned char) ((var_1_22 == last_1_var_1_33) || var_1_32))) : (var_1_29 == ((unsigned char) 1))))) && ((-0.35f > ((((var_1_10) > (var_1_14)) ? (var_1_10) : (var_1_14)))) ? (var_1_33 == ((signed short int) (var_1_38 - (var_1_47 + 256)))) : (var_1_33 == ((signed short int) ((((var_1_7) < (8)) ? (var_1_7) : (8))))))) && ((var_1_18 > (var_1_13 - (var_1_36 - var_1_14))) ? (var_1_35 == ((float) var_1_12)) : ((var_1_14 == (1.35 + (var_1_13 - var_1_36))) ? ((var_1_14 > var_1_11) ? (var_1_35 == ((float) (var_1_11 + (var_1_14 - 5.5f)))) : 1) : (((var_1_15 * (var_1_7 * var_1_16)) < var_1_27) ? (var_1_35 == ((float) (((((var_1_12) > (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9))))) ? (var_1_12) : (((((var_1_14) > (var_1_9)) ? (var_1_14) : (var_1_9)))))) + (var_1_11 + var_1_13)))) : (var_1_35 == ((float) ((((((var_1_14 - var_1_13)) < (var_1_9)) ? ((var_1_14 - var_1_13)) : (var_1_9))) + (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) + var_1_37)))))))) && ((last_1_var_1_38 <= (last_1_var_1_47 + (var_1_26 - var_1_24))) ? ((((((last_1_var_1_85) > ((var_1_20 + var_1_9))) ? (last_1_var_1_85) : ((var_1_20 + var_1_9)))) > (- ((((var_1_11) < (last_1_var_1_48)) ? (var_1_11) : (last_1_var_1_48))))) ? (var_1_38 == ((unsigned char) (var_1_39 - var_1_40))) : 1) : (var_1_38 == ((unsigned char) (var_1_39 - (((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) + var_1_43)))))) && (var_1_30 ? (var_1_44 == ((signed long int) ((var_1_23 + var_1_38) - var_1_55))) : 1)) && ((var_1_43 == (200 - var_1_42)) ? (var_1_46 == ((signed long int) (var_1_42 - (((((((last_1_var_1_15) > (var_1_26)) ? (last_1_var_1_15) : (var_1_26))) < 0 ) ? -((((last_1_var_1_15) > (var_1_26)) ? (last_1_var_1_15) : (var_1_26))) : ((((last_1_var_1_15) > (var_1_26)) ? (last_1_var_1_15) : (var_1_26)))))))) : (var_1_46 == ((signed long int) ((last_1_var_1_81 + last_1_var_1_47) + -8))))) && ((var_1_94 || (0u > var_1_26)) ? ((var_1_76 < ((var_1_39 + var_1_90) & var_1_92)) ? (var_1_47 == ((unsigned char) (var_1_39 - ((((var_1_42 + var_1_43) < 0 ) ? -(var_1_42 + var_1_43) : (var_1_42 + var_1_43)))))) : (var_1_47 == ((unsigned char) var_1_40))) : 1)) && ((var_1_79 > (var_1_13 - var_1_36)) ? ((var_1_20 < var_1_37) ? (var_1_48 == ((float) ((((var_1_14) > ((var_1_20 - var_1_13))) ? (var_1_14) : ((var_1_20 - var_1_13)))))) : 1) : 1)) && ((var_1_26 <= 4) ? ((var_1_79 < var_1_13) ? (((var_1_27 * (var_1_87 / var_1_23)) <= var_1_41) ? ((((var_1_50 - var_1_41) - (32 + var_1_43)) >= var_1_55) ? (var_1_49 == ((unsigned char) (! (! var_1_32)))) : 1) : (var_1_49 == ((unsigned char) ((var_1_79 != var_1_10) || (! var_1_30))))) : (var_1_49 == ((unsigned char) (var_1_29 && (! var_1_31))))) : ((var_1_29 && (var_1_15 < (var_1_6 * var_1_46))) ? (var_1_49 == ((unsigned char) var_1_31)) : ((var_1_39 == var_1_46) ? (var_1_49 == ((unsigned char) (var_1_29 && var_1_30))) : (var_1_49 == ((unsigned char) (var_1_31 && var_1_32))))))) && (var_1_32 ? (var_1_51 == ((unsigned char) ((((((last_1_var_1_33) < (last_1_var_1_81)) ? (last_1_var_1_33) : (last_1_var_1_81))) > last_1_var_1_1) || var_1_31))) : ((last_1_var_1_81 < last_1_var_1_21) ? (var_1_51 == ((unsigned char) ((var_1_30 || var_1_53) || var_1_54))) : ((((((last_1_var_1_21) > (128)) ? (last_1_var_1_21) : (128))) >= last_1_var_1_71) ? (var_1_51 == ((unsigned char) (! var_1_31))) : (var_1_51 == ((unsigned char) (last_1_var_1_51 && var_1_54))))))) && ((var_1_30 || var_1_29) ? (var_1_55 == ((unsigned short int) (var_1_26 - var_1_76))) : (var_1_55 == ((unsigned short int) ((((var_1_42) > (var_1_76)) ? (var_1_42) : (var_1_76))))))) && (((var_1_15 * (var_1_55 - var_1_26)) < ((var_1_57 - var_1_42) - 5)) ? (var_1_56 == ((signed char) ((((((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) < (-8)) ? (((((((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) > (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))) ? (((((var_1_7) > (var_1_43)) ? (var_1_7) : (var_1_43)))) : (((((-2) > (var_1_58)) ? (-2) : (var_1_58))))))) : (-8))))) : ((((((var_1_36) > (var_1_20)) ? (var_1_36) : (var_1_20))) == (var_1_86 / ((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))))) ? (var_1_56 == ((signed char) ((((var_1_43) > ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63))) ? (var_1_43) : ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) + var_1_63)))))) : ((((((var_1_72) < (16)) ? (var_1_72) : (16))) > var_1_39) ? (var_1_56 == ((signed char) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : (var_1_56 == ((signed char) ((16 + (var_1_64 + var_1_65)) - ((var_1_66 + var_1_67) + var_1_43)))))))) && ((var_1_54 && (200 <= var_1_7)) ? ((last_1_var_1_21 >= (var_1_26 - var_1_65)) ? (var_1_68 == ((signed short int) ((((var_1_67) > (var_1_64)) ? (var_1_67) : (var_1_64))))) : 1) : 1)) && (((var_1_24 + 5u) <= var_1_46) ? ((-256 != var_1_40) ? (((- (var_1_67 + var_1_66)) <= var_1_88) ? (var_1_69 == ((float) ((((var_1_37) < (var_1_20)) ? (var_1_37) : (var_1_20))))) : (var_1_69 == ((float) ((var_1_70 - var_1_13) - ((((var_1_20) < (var_1_14)) ? (var_1_20) : (var_1_14))))))) : (var_1_69 == ((float) (((((((var_1_12) < (var_1_37)) ? (var_1_12) : (var_1_37))) < 0 ) ? -((((var_1_12) < (var_1_37)) ? (var_1_12) : (var_1_37))) : ((((var_1_12) < (var_1_37)) ? (var_1_12) : (var_1_37)))))))) : 1)) && (var_1_99 ? (var_1_71 == ((signed short int) (var_1_41 - ((((var_1_39) < (var_1_76)) ? (var_1_39) : (var_1_76)))))) : (var_1_71 == ((signed short int) var_1_47)))) && (var_1_53 ? ((! var_1_29) ? (var_1_72 == ((signed char) ((((var_1_61) > (var_1_43)) ? (var_1_61) : (var_1_43))))) : (var_1_72 == ((signed char) ((((((((var_1_62) < ((var_1_42 - var_1_43))) ? (var_1_62) : ((var_1_42 - var_1_43))))) > ((var_1_61 + var_1_66))) ? (((((var_1_62) < ((var_1_42 - var_1_43))) ? (var_1_62) : ((var_1_42 - var_1_43))))) : ((var_1_61 + var_1_66))))))) : (((var_1_44 / var_1_26) <= var_1_42) ? (var_1_72 == ((signed char) ((((var_1_67) > (var_1_41)) ? (var_1_67) : (var_1_41))))) : ((var_1_68 < -25) ? (var_1_72 == ((signed char) ((64 - (var_1_65 + var_1_67)) - var_1_64))) : ((((var_1_84 * var_1_1) >= var_1_68) && var_1_99) ? (var_1_72 == ((signed char) var_1_42)) : (var_1_72 == ((signed char) (((((((((var_1_66) < (var_1_64)) ? (var_1_66) : (var_1_64))) - var_1_42)) > ((var_1_62 + var_1_43))) ? ((((((var_1_66) < (var_1_64)) ? (var_1_66) : (var_1_64))) - var_1_42)) : ((var_1_62 + var_1_43))))))))))) && ((! var_1_51) ? (var_1_73 == ((float) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_9)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_9))))) : ((((5 / var_1_26) < var_1_46) && var_1_30) ? (var_1_97 ? (var_1_73 == ((float) (((((var_1_10 + var_1_11)) < ((var_1_70 - var_1_14))) ? ((var_1_10 + var_1_11)) : ((var_1_70 - var_1_14)))))) : (var_1_73 == ((float) (var_1_13 - var_1_14)))) : (var_1_73 == ((float) (var_1_20 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))))) && (var_1_95 ? (var_1_74 == ((signed char) (var_1_61 + ((((var_1_62) < (var_1_75)) ? (var_1_62) : (var_1_75)))))) : 1)) && (((var_1_50 * (var_1_67 >> last_1_var_1_55)) <= ((last_1_var_1_90 >> var_1_65) ^ var_1_63)) ? ((last_1_var_1_87 >= (~ (var_1_58 * var_1_67))) ? (var_1_76 == ((unsigned char) (var_1_39 - 4))) : ((last_1_var_1_90 >= (var_1_50 - var_1_42)) ? (var_1_76 == ((unsigned char) ((((((var_1_50 + var_1_77) - var_1_40)) > ((var_1_39 - ((((var_1_67) < (var_1_43)) ? (var_1_67) : (var_1_43)))))) ? (((var_1_50 + var_1_77) - var_1_40)) : ((var_1_39 - ((((var_1_67) < (var_1_43)) ? (var_1_67) : (var_1_43))))))))) : (var_1_76 == ((unsigned char) (var_1_64 + var_1_66))))) : (var_1_76 == ((unsigned char) ((var_1_66 + (var_1_64 + var_1_65)) + ((var_1_78 - var_1_67) + 32)))))) && ((((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))) < 5) ? (var_1_79 == ((float) ((var_1_13 + var_1_14) - ((((var_1_70) > (var_1_20)) ? (var_1_70) : (var_1_20)))))) : ((var_1_84 > (-4 & ((((var_1_41) > (var_1_15)) ? (var_1_41) : (var_1_15))))) ? (var_1_79 == ((float) (var_1_70 - 4.2f))) : (var_1_79 == ((float) var_1_9))))) && ((((~ var_1_63) ^ -50) <= (var_1_89 >> var_1_76)) ? (var_1_80 == ((signed short int) (2 + (var_1_67 - (var_1_77 + var_1_74))))) : 1)) && ((last_1_var_1_69 <= (var_1_12 * var_1_13)) ? ((last_1_var_1_87 >= last_1_var_1_68) ? ((((((last_1_var_1_46) < 0 ) ? -(last_1_var_1_46) : (last_1_var_1_46))) >= last_1_var_1_81) ? (var_1_81 == ((signed short int) (25 - ((((last_1_var_1_38) > ((var_1_82 - var_1_40))) ? (last_1_var_1_38) : ((var_1_82 - var_1_40))))))) : 1) : (var_1_81 == ((signed short int) (var_1_42 + last_1_var_1_38)))) : ((0.2f > last_1_var_1_79) ? (last_1_var_1_51 ? (var_1_81 == ((signed short int) ((var_1_78 + var_1_7) + 4))) : (var_1_81 == ((signed short int) (((((var_1_43 - var_1_40)) < ((last_1_var_1_71 - var_1_82))) ? ((var_1_43 - var_1_40)) : ((last_1_var_1_71 - var_1_82))))))) : 1))) && ((! var_1_53) ? (var_1_84 == ((signed long int) last_1_var_1_80)) : 1)) && (var_1_30 ? (var_1_85 == ((float) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : 1)) && (((var_1_68 / var_1_16) >= (var_1_64 << var_1_74)) ? (((var_1_59 * var_1_37) >= (var_1_69 / var_1_70)) ? (var_1_86 == ((double) (((((var_1_14 - var_1_70)) < (var_1_12)) ? ((var_1_14 - var_1_70)) : (var_1_12))))) : 1) : (var_1_86 == ((double) var_1_20)))) && (var_1_29 ? (var_1_87 == ((unsigned long int) var_1_38)) : (var_1_87 == ((unsigned long int) var_1_39)))) && (var_1_29 ? (var_1_88 == ((unsigned short int) 128)) : 1)) && (var_1_97 ? (var_1_89 == ((signed long int) var_1_33)) : (var_1_89 == ((signed long int) var_1_56)))) && (var_1_90 == ((unsigned long int) var_1_88))) && (var_1_91 == ((double) var_1_12))) && (var_1_92 == ((unsigned long int) var_1_41))) && (var_1_93 == ((signed short int) var_1_78))) && (var_1_94 == ((unsigned char) var_1_31))) && (var_1_54 ? (var_1_95 == ((unsigned char) var_1_53)) : (var_1_95 == ((unsigned char) var_1_32)))) && (var_1_99 ? (var_1_96 == ((signed long int) var_1_76)) : (var_1_96 == ((signed long int) var_1_44)))) && ((var_1_35 > ((var_1_20 - var_1_14) + var_1_91)) ? (var_1_97 == ((unsigned char) (! (! var_1_32)))) : 1)) && (var_1_99 == ((unsigned char) var_1_30))) && (var_1_100 == ((double) var_1_12))
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
