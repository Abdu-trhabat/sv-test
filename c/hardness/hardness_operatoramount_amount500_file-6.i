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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
unsigned short int var_1_4 = 64;
unsigned short int var_1_5 = 34011;
unsigned short int var_1_6 = 2;
signed short int var_1_7 = -4;
signed short int var_1_8 = 128;
signed long int var_1_9 = -4;
unsigned short int var_1_10 = 4;
unsigned short int var_1_11 = 128;
double var_1_12 = 1.8;
double var_1_13 = 49.5;
double var_1_14 = 0.0;
double var_1_15 = 8.5;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 3254334857;
unsigned long int var_1_18 = 1980622399;
signed char var_1_19 = 16;
signed char var_1_20 = -100;
signed char var_1_21 = 1;
signed char var_1_22 = 100;
signed char var_1_23 = 0;
signed char var_1_24 = 1;
signed short int var_1_25 = -1;
signed short int var_1_26 = 30584;
signed char var_1_28 = 64;
signed char var_1_29 = -5;
signed char var_1_31 = 10;
signed long int var_1_32 = 100000000;
float var_1_33 = 0.0;
double var_1_34 = 10.8;
float var_1_36 = 15.125;
float var_1_37 = 499.25;
float var_1_38 = 31.25;
signed char var_1_39 = -2;
double var_1_40 = 10000.2;
signed char var_1_41 = 64;
signed char var_1_42 = 1;
signed char var_1_43 = -5;
signed char var_1_44 = 0;
signed char var_1_45 = 1;
signed char var_1_46 = 2;
signed char var_1_47 = 1;
signed char var_1_48 = 16;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
signed char var_1_54 = -1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 128;
unsigned long int var_1_58 = 256;
signed long int var_1_60 = -4;
signed long int var_1_63 = 100;
unsigned long int var_1_64 = 10000;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 0;
unsigned short int var_1_68 = 50;
signed char var_1_69 = 4;
signed char var_1_70 = 64;
signed char var_1_71 = 8;
unsigned short int var_1_72 = 1;
unsigned char var_1_73 = 16;
unsigned char var_1_74 = 200;
unsigned char var_1_75 = 2;
unsigned char var_1_76 = 1;
unsigned char var_1_78 = 100;
double var_1_79 = 1.125;
double var_1_80 = 4.75;
float var_1_81 = 49.4;
float var_1_83 = 128.25;
float var_1_84 = 5.25;
signed long int var_1_85 = 5;
signed long int var_1_86 = 1091634356;
unsigned short int var_1_87 = 128;
signed long int var_1_88 = -200;
unsigned char var_1_89 = 0;
unsigned short int var_1_90 = 256;
double var_1_91 = 9.9;
float var_1_92 = -0.75;
float var_1_93 = 0.0;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 8;
signed short int var_1_96 = 4;
unsigned char var_1_97 = 1;
unsigned short int var_1_98 = 16;
signed long int var_1_99 = -16;
signed short int var_1_100 = 5;
unsigned char var_1_101 = 1;
unsigned long int var_1_102 = 25;
double var_1_103 = 0.25;
unsigned char var_1_104 = 50;
unsigned char var_1_105 = 0;
double last_1_var_1_12 = 1.8;
unsigned long int last_1_var_1_16 = 4;
signed char last_1_var_1_24 = 1;
signed short int last_1_var_1_25 = -1;
signed char last_1_var_1_28 = 64;
signed long int last_1_var_1_32 = 100000000;
unsigned char last_1_var_1_55 = 0;
unsigned long int last_1_var_1_58 = 256;
unsigned long int last_1_var_1_64 = 10000;
unsigned char last_1_var_1_65 = 0;
unsigned short int last_1_var_1_72 = 1;
unsigned char last_1_var_1_73 = 16;
signed long int last_1_var_1_85 = 5;
unsigned short int last_1_var_1_87 = 128;
unsigned char last_1_var_1_89 = 0;
unsigned char last_1_var_1_95 = 8;
unsigned short int last_1_var_1_98 = 16;
unsigned char last_1_var_1_101 = 1;
void initially(void) {
}
void step(void) {
 if (((((((((last_1_var_1_58) > (var_1_26)) ? (last_1_var_1_58) : (var_1_26)))) > (var_1_63)) ? (((((last_1_var_1_58) > (var_1_26)) ? (last_1_var_1_58) : (var_1_26)))) : (var_1_63))) > var_1_21) {
  var_1_89 = var_1_51;
 } else {
  var_1_89 = (last_1_var_1_89 && (! (last_1_var_1_55 || var_1_50)));
 }
 if (last_1_var_1_101 && last_1_var_1_89) {
  if ((((((last_1_var_1_25) > (last_1_var_1_72)) ? (last_1_var_1_25) : (last_1_var_1_72))) + last_1_var_1_64) >= 10) {
   var_1_25 = ((var_1_26 - var_1_21) - var_1_22);
  } else {
   var_1_25 = ((((((var_1_26 - var_1_21) - var_1_11)) < (last_1_var_1_28)) ? (((var_1_26 - var_1_21) - var_1_11)) : (last_1_var_1_28)));
  }
 } else {
  if (last_1_var_1_98 == var_1_21) {
   var_1_25 = var_1_8;
  } else {
   if (last_1_var_1_89) {
    var_1_25 = (last_1_var_1_98 + ((((var_1_23 + var_1_20) < 0 ) ? -(var_1_23 + var_1_20) : (var_1_23 + var_1_20))));
   }
  }
 }
 if (last_1_var_1_65) {
  if ((last_1_var_1_98 + (~ last_1_var_1_24)) >= (var_1_45 + last_1_var_1_95)) {
   if (last_1_var_1_12 > var_1_13) {
    var_1_58 = ((var_1_18 - ((((last_1_var_1_87) > (var_1_22)) ? (last_1_var_1_87) : (var_1_22)))) + last_1_var_1_95);
   }
  } else {
   if (last_1_var_1_16 >= (3091181110u - last_1_var_1_87)) {
    var_1_58 = ((((((((var_1_41 + last_1_var_1_87) < 0 ) ? -(var_1_41 + last_1_var_1_87) : (var_1_41 + last_1_var_1_87)))) < ((last_1_var_1_95 + var_1_18))) ? (((((var_1_41 + last_1_var_1_87) < 0 ) ? -(var_1_41 + last_1_var_1_87) : (var_1_41 + last_1_var_1_87)))) : ((last_1_var_1_95 + var_1_18))));
   } else {
    var_1_58 = (var_1_20 - (1541756006u - var_1_11));
   }
  }
 } else {
  if (last_1_var_1_32 > last_1_var_1_85) {
   var_1_58 = (var_1_21 + var_1_31);
  }
 }
 var_1_53 = ((-128 == var_1_58) || var_1_51);
 if (var_1_53) {
  var_1_94 = 0;
 } else {
  var_1_94 = var_1_52;
 }
 if (var_1_94) {
  var_1_104 = var_1_78;
 } else {
  var_1_104 = var_1_48;
 }
 if (var_1_6 <= (- 500)) {
  if (var_1_53) {
   var_1_7 = (var_1_8 - 64);
  }
 } else {
  var_1_7 = var_1_8;
 }
 var_1_9 = (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_6);
 var_1_10 = (var_1_5 - (var_1_11 + 1000));
 var_1_19 = ((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - var_1_21) - (var_1_22 - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))));
 if (10 < var_1_58) {
  if (var_1_8 <= -64) {
   if (var_1_52) {
    var_1_54 = ((var_1_44 + var_1_45) + var_1_48);
   }
  }
 } else {
  var_1_54 = var_1_47;
 }
 var_1_69 = (var_1_70 - var_1_71);
 if ((var_1_74 - 100) < var_1_21) {
  var_1_90 = var_1_20;
 } else {
  var_1_90 = ((((var_1_42) < ((var_1_20 - var_1_21))) ? (var_1_42) : ((var_1_20 - var_1_21))));
 }
 if (var_1_4 > 2) {
  var_1_91 = var_1_38;
 }
 if (var_1_51) {
  var_1_95 = var_1_48;
 } else {
  var_1_95 = var_1_71;
 }
 var_1_96 = 16;
 if (var_1_51) {
  var_1_97 = var_1_66;
 }
 var_1_98 = var_1_22;
 var_1_99 = var_1_78;
 var_1_100 = var_1_48;
 var_1_101 = 0;
 if (var_1_101) {
  var_1_103 = -0.25;
 }
 unsigned long int stepLocal_31 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) * var_1_58;
 unsigned long int stepLocal_30 = 4u | var_1_4;
 if (var_1_66) {
  if ((- 2) < stepLocal_31) {
   if (stepLocal_30 > var_1_26) {
    var_1_105 = var_1_20;
   }
  }
 } else {
  var_1_105 = var_1_78;
 }
 unsigned char stepLocal_15 = var_1_89;
 unsigned long int stepLocal_14 = var_1_18 * var_1_26;
 if (var_1_97 || stepLocal_15) {
  var_1_55 = var_1_50;
 } else {
  if (stepLocal_14 > var_1_5) {
   var_1_55 = (var_1_52 || (var_1_97 && var_1_56));
  } else {
   var_1_55 = (! var_1_52);
  }
 }
 if (var_1_58 > (var_1_31 << var_1_22)) {
  if ((var_1_20 - var_1_31) < var_1_25) {
   var_1_60 = (var_1_26 + -1);
  } else {
   var_1_60 = (((((((((var_1_41) > (var_1_22)) ? (var_1_41) : (var_1_22)))) < (var_1_63)) ? (((((var_1_41) > (var_1_22)) ? (var_1_41) : (var_1_22)))) : (var_1_63))) - var_1_10);
  }
 } else {
  var_1_60 = (var_1_8 - var_1_48);
 }
 unsigned short int stepLocal_18 = var_1_11;
 signed char stepLocal_17 = var_1_29;
 if (stepLocal_17 >= var_1_22) {
  var_1_65 = ((var_1_94 || (var_1_51 && var_1_50)) && (var_1_66 && var_1_67));
 } else {
  if (stepLocal_18 > (var_1_42 ^ var_1_47)) {
   var_1_65 = var_1_66;
  } else {
   var_1_65 = var_1_52;
  }
 }
 if (var_1_65) {
  var_1_102 = var_1_17;
 } else {
  var_1_102 = 0u;
 }
 if (var_1_65 || var_1_94) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_1 = (((((var_1_5 - var_1_6)) < (var_1_4)) ? ((var_1_5 - var_1_6)) : (var_1_4)));
 }
 if (! var_1_97) {
  var_1_12 = ((var_1_13 - (var_1_14 - 63.5)) + var_1_15);
 } else {
  var_1_12 = (var_1_14 - var_1_13);
 }
 unsigned short int stepLocal_0 = var_1_11;
 if (var_1_97) {
  var_1_16 = (var_1_90 + 200u);
 } else {
  if (((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) <= stepLocal_0) {
   var_1_16 = (var_1_17 - (var_1_18 - var_1_4));
  } else {
   var_1_16 = ((((var_1_4) < ((var_1_6 + 10000u))) ? (var_1_4) : ((var_1_6 + 10000u))));
  }
 }
 unsigned char stepLocal_1 = var_1_5 >= var_1_20;
 if (stepLocal_1 && var_1_101) {
  var_1_24 = (var_1_22 - var_1_21);
 }
 if (var_1_101) {
  var_1_36 = (((8.360977757767614E18f - var_1_37) - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))) - var_1_38);
 }
 unsigned long int stepLocal_9 = var_1_18;
 if (stepLocal_9 <= var_1_1) {
  if ((var_1_13 - var_1_14) <= (- (var_1_40 - var_1_33))) {
   var_1_39 = (((((var_1_31 + var_1_21)) < (((((var_1_20) > (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_20) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))))) ? ((var_1_31 + var_1_21)) : (((((var_1_20) > (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_20) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))))));
  }
 } else {
  var_1_39 = (((((var_1_22 - var_1_31) < 0 ) ? -(var_1_22 - var_1_31) : (var_1_22 - var_1_31))) - ((((var_1_21) > (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))))) ? (var_1_21) : (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))))));
 }
 if (((var_1_21 - var_1_41) & var_1_9) < var_1_22) {
  if (var_1_23 == var_1_29) {
   if ((var_1_11 + (var_1_17 / var_1_22)) <= var_1_58) {
    var_1_43 = (var_1_22 - var_1_21);
   } else {
    var_1_43 = ((((var_1_41) < ((var_1_31 - var_1_21))) ? (var_1_41) : ((var_1_31 - var_1_21))));
   }
  } else {
   var_1_43 = (var_1_21 + (((((var_1_44 + var_1_45)) > (var_1_31)) ? ((var_1_44 + var_1_45)) : (var_1_31))));
  }
 } else {
  if (var_1_101) {
   var_1_43 = 1;
  }
 }
 signed long int stepLocal_16 = (4 - var_1_48) ^ (var_1_31 - var_1_42);
 if (stepLocal_16 < var_1_5) {
  if (var_1_37 >= ((var_1_38 / var_1_33) + var_1_12)) {
   if (! var_1_101) {
    var_1_64 = var_1_21;
   } else {
    var_1_64 = (var_1_100 + var_1_11);
   }
  }
 }
 signed long int stepLocal_21 = (var_1_48 + var_1_75) - var_1_71;
 unsigned long int stepLocal_20 = var_1_16;
 unsigned char stepLocal_19 = ! var_1_56;
 if (last_1_var_1_73 >= stepLocal_20) {
  var_1_73 = ((var_1_74 - (var_1_75 + var_1_76)) - (var_1_31 + 1));
 } else {
  if (stepLocal_19 && ((var_1_60 <= var_1_20) || (var_1_65 && var_1_52))) {
   if (var_1_67) {
    var_1_73 = var_1_22;
   } else {
    if (var_1_104 <= stepLocal_21) {
     var_1_73 = (var_1_74 - var_1_75);
    } else {
     var_1_73 = (((((var_1_31) > (var_1_21)) ? (var_1_31) : (var_1_21))) + ((var_1_78 - var_1_76) - ((((var_1_75) < (var_1_47)) ? (var_1_75) : (var_1_47)))));
    }
   }
  }
 }
 if (var_1_16 <= 25u) {
  var_1_85 = (((((10) < (var_1_102)) ? (10) : (var_1_102))) - (var_1_86 - var_1_4));
 } else {
  var_1_85 = (((((((((var_1_78 + var_1_11)) < (var_1_60)) ? ((var_1_78 + var_1_11)) : (var_1_60)))) < ((var_1_31 + var_1_26))) ? ((((((var_1_78 + var_1_11)) < (var_1_60)) ? ((var_1_78 + var_1_11)) : (var_1_60)))) : ((var_1_31 + var_1_26))));
 }
 if (! var_1_97) {
  if (var_1_98 >= (var_1_16 * 32)) {
   var_1_72 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  } else {
   var_1_72 = ((((var_1_47) > (var_1_104)) ? (var_1_47) : (var_1_104)));
  }
 }
 if (var_1_103 > var_1_34) {
  var_1_79 = (var_1_14 - var_1_38);
 } else {
  if (var_1_89 || (var_1_66 && (var_1_1 < var_1_16))) {
   if (var_1_50) {
    var_1_79 = (var_1_13 + (var_1_37 + var_1_80));
   } else {
    if (var_1_74 <= ((var_1_64 * var_1_104) & var_1_4)) {
     var_1_79 = (var_1_80 + var_1_15);
    }
   }
  }
 }
 unsigned long int stepLocal_26 = var_1_58;
 if (stepLocal_26 <= (~ (var_1_6 >> 5))) {
  var_1_87 = ((((((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) < (((((var_1_48) > (var_1_72)) ? (var_1_48) : (var_1_72))))) ? (((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) : (((((var_1_48) > (var_1_72)) ? (var_1_48) : (var_1_72))))));
 }
 if (var_1_29 >= ((50 + var_1_21) / ((((-64) < (var_1_22)) ? (-64) : (var_1_22))))) {
  var_1_68 = (((var_1_22 + var_1_21) + var_1_42) + var_1_26);
 } else {
  if (var_1_16 < var_1_102) {
   var_1_68 = (var_1_6 + 256);
  } else {
   var_1_68 = ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)));
  }
 }
 unsigned long int stepLocal_8 = var_1_17;
 unsigned long int stepLocal_7 = var_1_64;
 if (var_1_53) {
  if (((var_1_33 - var_1_13) - var_1_14) >= var_1_15) {
   var_1_32 = var_1_29;
  }
 } else {
  if ((var_1_8 * var_1_29) > stepLocal_7) {
   if (stepLocal_8 > (var_1_21 << last_1_var_1_32)) {
    var_1_32 = ((((var_1_85) < ((((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8))) - 1))) ? (var_1_85) : ((((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8))) - 1))));
   } else {
    var_1_32 = (var_1_21 + var_1_4);
   }
  } else {
   if ((((((var_1_34 - var_1_33)) < ((var_1_79 * var_1_13))) ? ((var_1_34 - var_1_33)) : ((var_1_79 * var_1_13)))) <= var_1_12) {
    var_1_32 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
   } else {
    var_1_32 = ((((64) < (-10)) ? (64) : (-10)));
   }
  }
 }
 if (var_1_79 != var_1_38) {
  var_1_88 = ((((((var_1_22 + var_1_10)) > (var_1_60)) ? ((var_1_22 + var_1_10)) : (var_1_60))) + var_1_68);
 } else {
  var_1_88 = (((((var_1_9) > ((var_1_47 + var_1_71))) ? (var_1_9) : ((var_1_47 + var_1_71)))) - ((((var_1_75) < (var_1_32)) ? (var_1_75) : (var_1_32))));
 }
 unsigned short int stepLocal_10 = var_1_5;
 if (stepLocal_10 >= var_1_32) {
  var_1_46 = (var_1_21 + ((((var_1_31) < ((var_1_47 - var_1_48))) ? (var_1_31) : ((var_1_47 - var_1_48)))));
 }
 signed long int stepLocal_13 = -16;
 unsigned short int stepLocal_12 = var_1_10;
 unsigned long int stepLocal_11 = var_1_18;
 if (stepLocal_11 < var_1_6) {
  var_1_49 = (var_1_89 && (! var_1_50));
 } else {
  if (stepLocal_13 >= var_1_41) {
   if ((var_1_29 * var_1_32) <= stepLocal_12) {
    if (var_1_50) {
     var_1_49 = (var_1_51 && (! (var_1_55 && var_1_52)));
    }
   } else {
    var_1_49 = (var_1_89 || var_1_51);
   }
  }
 }
 if (var_1_94) {
  if ((var_1_20 - var_1_32) >= var_1_42) {
   var_1_57 = ((((var_1_48) > (var_1_42)) ? (var_1_48) : (var_1_42)));
  } else {
   var_1_57 = (var_1_31 + var_1_42);
  }
 } else {
  var_1_57 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 signed long int stepLocal_25 = var_1_78 & ((((var_1_44) > (var_1_20)) ? (var_1_44) : (var_1_20)));
 signed long int stepLocal_24 = var_1_9;
 signed long int stepLocal_23 = var_1_32 - var_1_9;
 signed char stepLocal_22 = var_1_20;
 if (stepLocal_24 > ((var_1_41 / var_1_78) / var_1_18)) {
  var_1_81 = 99.5f;
 } else {
  if (1 < stepLocal_23) {
   if (stepLocal_25 < (var_1_1 + var_1_60)) {
    var_1_81 = (var_1_37 + ((var_1_83 - var_1_84) + var_1_80));
   } else {
    if (stepLocal_22 <= var_1_5) {
     var_1_81 = ((7.932485850494807E18f - (var_1_84 + var_1_83)) - (var_1_13 + ((((var_1_37) > (var_1_14)) ? (var_1_37) : (var_1_14)))));
    } else {
     var_1_81 = ((((((((var_1_83 - var_1_38) < 0 ) ? -(var_1_83 - var_1_38) : (var_1_83 - var_1_38)))) > (((((49.4f) < (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84))))) ? (49.4f) : (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84)))))))) ? (((((var_1_83 - var_1_38) < 0 ) ? -(var_1_83 - var_1_38) : (var_1_83 - var_1_38)))) : (((((49.4f) < (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84))))) ? (49.4f) : (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84)))))))));
    }
   }
  }
 }
 unsigned char stepLocal_29 = (var_1_23 / var_1_78) <= var_1_87;
 unsigned short int stepLocal_28 = var_1_5;
 unsigned char stepLocal_27 = var_1_56;
 if (var_1_52) {
  var_1_92 = (var_1_83 - (var_1_93 - 127.2f));
 } else {
  if (stepLocal_29 && (var_1_13 <= (var_1_34 + var_1_103))) {
   var_1_92 = (var_1_13 - var_1_37);
  } else {
   if (stepLocal_27 && (var_1_101 && (var_1_88 != var_1_99))) {
    if (var_1_55) {
     var_1_92 = (var_1_84 + (var_1_37 + var_1_80));
    } else {
     if (stepLocal_28 > var_1_74) {
      var_1_92 = var_1_80;
     } else {
      var_1_92 = var_1_14;
     }
    }
   } else {
    var_1_92 = var_1_15;
   }
  }
 }
 unsigned long int stepLocal_6 = (- var_1_17) + 100;
 signed char stepLocal_5 = var_1_22;
 signed long int stepLocal_4 = (var_1_5 + var_1_7) / ((((var_1_29) < (var_1_20)) ? (var_1_29) : (var_1_20)));
 signed long int stepLocal_3 = 8;
 unsigned long int stepLocal_2 = var_1_20 * ((((var_1_17) > (var_1_22)) ? (var_1_17) : (var_1_22)));
 if (128u == stepLocal_2) {
  if (var_1_88 <= stepLocal_5) {
   var_1_28 = ((((0) > (var_1_22)) ? (0) : (var_1_22)));
  } else {
   if ((var_1_87 / var_1_20) != stepLocal_3) {
    if (var_1_21 >= stepLocal_4) {
     var_1_28 = (-1 - var_1_22);
    } else {
     var_1_28 = var_1_20;
    }
   } else {
    if (stepLocal_6 >= ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) {
     var_1_28 = ((var_1_21 + var_1_31) - var_1_22);
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16384);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 2305843.009213691400e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -126);
 assume_abort_if_not(var_1_20 <= -62);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 63);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 16382);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -128);
 assume_abort_if_not(var_1_29 <= 127);
 assume_abort_if_not(var_1_29 != 0);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 4611686.018427388000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -31);
 assume_abort_if_not(var_1_44 <= 32);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -31);
 assume_abort_if_not(var_1_45 <= 31);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_63 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_63 >= -1);
 assume_abort_if_not(var_1_63 <= 2147483646);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 1);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= -1);
 assume_abort_if_not(var_1_70 <= 126);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 126);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 190);
 assume_abort_if_not(var_1_74 <= 254);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 32);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 31);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 95);
 assume_abort_if_not(var_1_78 <= 127);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= -230584.3009213691400e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691400e+12F && var_1_80 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 2305843.009213691400e+12F && var_1_83 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691400e+12F && var_1_84 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_86 >= 1073741823);
 assume_abort_if_not(var_1_86 <= 2147483646);
 var_1_93 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_93 >= 4611686.018427383000e+12F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854766000e+12F && var_1_93 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_101 = var_1_101;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_65 || var_1_94) ? (var_1_1 == ((unsigned short int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 - var_1_6)) < (var_1_4)) ? ((var_1_5 - var_1_6)) : (var_1_4)))))) && ((var_1_6 <= (- 500)) ? (var_1_53 ? (var_1_7 == ((signed short int) (var_1_8 - 64))) : 1) : (var_1_7 == ((signed short int) var_1_8)))) && (var_1_9 == ((signed long int) (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_6)))) && (var_1_10 == ((unsigned short int) (var_1_5 - (var_1_11 + 1000))))) && ((! var_1_97) ? (var_1_12 == ((double) ((var_1_13 - (var_1_14 - 63.5)) + var_1_15))) : (var_1_12 == ((double) (var_1_14 - var_1_13))))) && (var_1_97 ? (var_1_16 == ((unsigned long int) (var_1_90 + 200u))) : ((((((var_1_6) < (var_1_8)) ? (var_1_6) : (var_1_8))) <= var_1_11) ? (var_1_16 == ((unsigned long int) (var_1_17 - (var_1_18 - var_1_4)))) : (var_1_16 == ((unsigned long int) ((((var_1_4) < ((var_1_6 + 10000u))) ? (var_1_4) : ((var_1_6 + 10000u))))))))) && (var_1_19 == ((signed char) ((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - var_1_21) - (var_1_22 - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))))) && (((var_1_5 >= var_1_20) && var_1_101) ? (var_1_24 == ((signed char) (var_1_22 - var_1_21))) : 1)) && ((last_1_var_1_101 && last_1_var_1_89) ? (((((((last_1_var_1_25) > (last_1_var_1_72)) ? (last_1_var_1_25) : (last_1_var_1_72))) + last_1_var_1_64) >= 10) ? (var_1_25 == ((signed short int) ((var_1_26 - var_1_21) - var_1_22))) : (var_1_25 == ((signed short int) ((((((var_1_26 - var_1_21) - var_1_11)) < (last_1_var_1_28)) ? (((var_1_26 - var_1_21) - var_1_11)) : (last_1_var_1_28)))))) : ((last_1_var_1_98 == var_1_21) ? (var_1_25 == ((signed short int) var_1_8)) : (last_1_var_1_89 ? (var_1_25 == ((signed short int) (last_1_var_1_98 + ((((var_1_23 + var_1_20) < 0 ) ? -(var_1_23 + var_1_20) : (var_1_23 + var_1_20)))))) : 1)))) && ((128u == (var_1_20 * ((((var_1_17) > (var_1_22)) ? (var_1_17) : (var_1_22))))) ? ((var_1_88 <= var_1_22) ? (var_1_28 == ((signed char) ((((0) > (var_1_22)) ? (0) : (var_1_22))))) : (((var_1_87 / var_1_20) != 8) ? ((var_1_21 >= ((var_1_5 + var_1_7) / ((((var_1_29) < (var_1_20)) ? (var_1_29) : (var_1_20))))) ? (var_1_28 == ((signed char) (-1 - var_1_22))) : (var_1_28 == ((signed char) var_1_20))) : ((((- var_1_17) + 100) >= ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) ? (var_1_28 == ((signed char) ((var_1_21 + var_1_31) - var_1_22))) : 1))) : 1)) && (var_1_53 ? ((((var_1_33 - var_1_13) - var_1_14) >= var_1_15) ? (var_1_32 == ((signed long int) var_1_29)) : 1) : (((var_1_8 * var_1_29) > var_1_64) ? ((var_1_17 > (var_1_21 << last_1_var_1_32)) ? (var_1_32 == ((signed long int) ((((var_1_85) < ((((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8))) - 1))) ? (var_1_85) : ((((((var_1_5) > (var_1_8)) ? (var_1_5) : (var_1_8))) - 1)))))) : (var_1_32 == ((signed long int) (var_1_21 + var_1_4)))) : (((((((var_1_34 - var_1_33)) < ((var_1_79 * var_1_13))) ? ((var_1_34 - var_1_33)) : ((var_1_79 * var_1_13)))) <= var_1_12) ? (var_1_32 == ((signed long int) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) : (var_1_32 == ((signed long int) ((((64) < (-10)) ? (64) : (-10))))))))) && (var_1_101 ? (var_1_36 == ((float) (((8.360977757767614E18f - var_1_37) - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))) - var_1_38))) : 1)) && ((var_1_18 <= var_1_1) ? (((var_1_13 - var_1_14) <= (- (var_1_40 - var_1_33))) ? (var_1_39 == ((signed char) (((((var_1_31 + var_1_21)) < (((((var_1_20) > (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_20) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))))) ? ((var_1_31 + var_1_21)) : (((((var_1_20) > (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_20) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))))))) : 1) : (var_1_39 == ((signed char) (((((var_1_22 - var_1_31) < 0 ) ? -(var_1_22 - var_1_31) : (var_1_22 - var_1_31))) - ((((var_1_21) > (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))))) ? (var_1_21) : (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))))))))))) && ((((var_1_21 - var_1_41) & var_1_9) < var_1_22) ? ((var_1_23 == var_1_29) ? (((var_1_11 + (var_1_17 / var_1_22)) <= var_1_58) ? (var_1_43 == ((signed char) (var_1_22 - var_1_21))) : (var_1_43 == ((signed char) ((((var_1_41) < ((var_1_31 - var_1_21))) ? (var_1_41) : ((var_1_31 - var_1_21))))))) : (var_1_43 == ((signed char) (var_1_21 + (((((var_1_44 + var_1_45)) > (var_1_31)) ? ((var_1_44 + var_1_45)) : (var_1_31))))))) : (var_1_101 ? (var_1_43 == ((signed char) 1)) : 1))) && ((var_1_5 >= var_1_32) ? (var_1_46 == ((signed char) (var_1_21 + ((((var_1_31) < ((var_1_47 - var_1_48))) ? (var_1_31) : ((var_1_47 - var_1_48))))))) : 1)) && ((var_1_18 < var_1_6) ? (var_1_49 == ((unsigned char) (var_1_89 && (! var_1_50)))) : ((-16 >= var_1_41) ? (((var_1_29 * var_1_32) <= var_1_10) ? (var_1_50 ? (var_1_49 == ((unsigned char) (var_1_51 && (! (var_1_55 && var_1_52))))) : 1) : (var_1_49 == ((unsigned char) (var_1_89 || var_1_51)))) : 1))) && (var_1_53 == ((unsigned char) ((-128 == var_1_58) || var_1_51)))) && ((10 < var_1_58) ? ((var_1_8 <= -64) ? (var_1_52 ? (var_1_54 == ((signed char) ((var_1_44 + var_1_45) + var_1_48))) : 1) : 1) : (var_1_54 == ((signed char) var_1_47)))) && ((var_1_97 || var_1_89) ? (var_1_55 == ((unsigned char) var_1_50)) : (((var_1_18 * var_1_26) > var_1_5) ? (var_1_55 == ((unsigned char) (var_1_52 || (var_1_97 && var_1_56)))) : (var_1_55 == ((unsigned char) (! var_1_52)))))) && (var_1_94 ? (((var_1_20 - var_1_32) >= var_1_42) ? (var_1_57 == ((unsigned char) ((((var_1_48) > (var_1_42)) ? (var_1_48) : (var_1_42))))) : (var_1_57 == ((unsigned char) (var_1_31 + var_1_42)))) : (var_1_57 == ((unsigned char) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) && (last_1_var_1_65 ? (((last_1_var_1_98 + (~ last_1_var_1_24)) >= (var_1_45 + last_1_var_1_95)) ? ((last_1_var_1_12 > var_1_13) ? (var_1_58 == ((unsigned long int) ((var_1_18 - ((((last_1_var_1_87) > (var_1_22)) ? (last_1_var_1_87) : (var_1_22)))) + last_1_var_1_95))) : 1) : ((last_1_var_1_16 >= (3091181110u - last_1_var_1_87)) ? (var_1_58 == ((unsigned long int) ((((((((var_1_41 + last_1_var_1_87) < 0 ) ? -(var_1_41 + last_1_var_1_87) : (var_1_41 + last_1_var_1_87)))) < ((last_1_var_1_95 + var_1_18))) ? (((((var_1_41 + last_1_var_1_87) < 0 ) ? -(var_1_41 + last_1_var_1_87) : (var_1_41 + last_1_var_1_87)))) : ((last_1_var_1_95 + var_1_18)))))) : (var_1_58 == ((unsigned long int) (var_1_20 - (1541756006u - var_1_11)))))) : ((last_1_var_1_32 > last_1_var_1_85) ? (var_1_58 == ((unsigned long int) (var_1_21 + var_1_31))) : 1))) && ((var_1_58 > (var_1_31 << var_1_22)) ? (((var_1_20 - var_1_31) < var_1_25) ? (var_1_60 == ((signed long int) (var_1_26 + -1))) : (var_1_60 == ((signed long int) (((((((((var_1_41) > (var_1_22)) ? (var_1_41) : (var_1_22)))) < (var_1_63)) ? (((((var_1_41) > (var_1_22)) ? (var_1_41) : (var_1_22)))) : (var_1_63))) - var_1_10)))) : (var_1_60 == ((signed long int) (var_1_8 - var_1_48))))) && ((((4 - var_1_48) ^ (var_1_31 - var_1_42)) < var_1_5) ? ((var_1_37 >= ((var_1_38 / var_1_33) + var_1_12)) ? ((! var_1_101) ? (var_1_64 == ((unsigned long int) var_1_21)) : (var_1_64 == ((unsigned long int) (var_1_100 + var_1_11)))) : 1) : 1)) && ((var_1_29 >= var_1_22) ? (var_1_65 == ((unsigned char) ((var_1_94 || (var_1_51 && var_1_50)) && (var_1_66 && var_1_67)))) : ((var_1_11 > (var_1_42 ^ var_1_47)) ? (var_1_65 == ((unsigned char) var_1_66)) : (var_1_65 == ((unsigned char) var_1_52))))) && ((var_1_29 >= ((50 + var_1_21) / ((((-64) < (var_1_22)) ? (-64) : (var_1_22))))) ? (var_1_68 == ((unsigned short int) (((var_1_22 + var_1_21) + var_1_42) + var_1_26))) : ((var_1_16 < var_1_102) ? (var_1_68 == ((unsigned short int) (var_1_6 + 256))) : (var_1_68 == ((unsigned short int) ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))))))) && (var_1_69 == ((signed char) (var_1_70 - var_1_71)))) && ((! var_1_97) ? ((var_1_98 >= (var_1_16 * 32)) ? (var_1_72 == ((unsigned short int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_72 == ((unsigned short int) ((((var_1_47) > (var_1_104)) ? (var_1_47) : (var_1_104)))))) : 1)) && ((last_1_var_1_73 >= var_1_16) ? (var_1_73 == ((unsigned char) ((var_1_74 - (var_1_75 + var_1_76)) - (var_1_31 + 1)))) : (((! var_1_56) && ((var_1_60 <= var_1_20) || (var_1_65 && var_1_52))) ? (var_1_67 ? (var_1_73 == ((unsigned char) var_1_22)) : ((var_1_104 <= ((var_1_48 + var_1_75) - var_1_71)) ? (var_1_73 == ((unsigned char) (var_1_74 - var_1_75))) : (var_1_73 == ((unsigned char) (((((var_1_31) > (var_1_21)) ? (var_1_31) : (var_1_21))) + ((var_1_78 - var_1_76) - ((((var_1_75) < (var_1_47)) ? (var_1_75) : (var_1_47))))))))) : 1))) && ((var_1_103 > var_1_34) ? (var_1_79 == ((double) (var_1_14 - var_1_38))) : ((var_1_89 || (var_1_66 && (var_1_1 < var_1_16))) ? (var_1_50 ? (var_1_79 == ((double) (var_1_13 + (var_1_37 + var_1_80)))) : ((var_1_74 <= ((var_1_64 * var_1_104) & var_1_4)) ? (var_1_79 == ((double) (var_1_80 + var_1_15))) : 1)) : 1))) && ((var_1_9 > ((var_1_41 / var_1_78) / var_1_18)) ? (var_1_81 == ((float) 99.5f)) : ((1 < (var_1_32 - var_1_9)) ? (((var_1_78 & ((((var_1_44) > (var_1_20)) ? (var_1_44) : (var_1_20)))) < (var_1_1 + var_1_60)) ? (var_1_81 == ((float) (var_1_37 + ((var_1_83 - var_1_84) + var_1_80)))) : ((var_1_20 <= var_1_5) ? (var_1_81 == ((float) ((7.932485850494807E18f - (var_1_84 + var_1_83)) - (var_1_13 + ((((var_1_37) > (var_1_14)) ? (var_1_37) : (var_1_14))))))) : (var_1_81 == ((float) ((((((((var_1_83 - var_1_38) < 0 ) ? -(var_1_83 - var_1_38) : (var_1_83 - var_1_38)))) > (((((49.4f) < (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84))))) ? (49.4f) : (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84)))))))) ? (((((var_1_83 - var_1_38) < 0 ) ? -(var_1_83 - var_1_38) : (var_1_83 - var_1_38)))) : (((((49.4f) < (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84))))) ? (49.4f) : (((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84))))))))))))) : 1))) && ((var_1_16 <= 25u) ? (var_1_85 == ((signed long int) (((((10) < (var_1_102)) ? (10) : (var_1_102))) - (var_1_86 - var_1_4)))) : (var_1_85 == ((signed long int) (((((((((var_1_78 + var_1_11)) < (var_1_60)) ? ((var_1_78 + var_1_11)) : (var_1_60)))) < ((var_1_31 + var_1_26))) ? ((((((var_1_78 + var_1_11)) < (var_1_60)) ? ((var_1_78 + var_1_11)) : (var_1_60)))) : ((var_1_31 + var_1_26)))))))) && ((var_1_58 <= (~ (var_1_6 >> 5))) ? (var_1_87 == ((unsigned short int) ((((((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) < (((((var_1_48) > (var_1_72)) ? (var_1_48) : (var_1_72))))) ? (((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) : (((((var_1_48) > (var_1_72)) ? (var_1_48) : (var_1_72)))))))) : 1)) && ((var_1_79 != var_1_38) ? (var_1_88 == ((signed long int) ((((((var_1_22 + var_1_10)) > (var_1_60)) ? ((var_1_22 + var_1_10)) : (var_1_60))) + var_1_68))) : (var_1_88 == ((signed long int) (((((var_1_9) > ((var_1_47 + var_1_71))) ? (var_1_9) : ((var_1_47 + var_1_71)))) - ((((var_1_75) < (var_1_32)) ? (var_1_75) : (var_1_32)))))))) && ((((((((((last_1_var_1_58) > (var_1_26)) ? (last_1_var_1_58) : (var_1_26)))) > (var_1_63)) ? (((((last_1_var_1_58) > (var_1_26)) ? (last_1_var_1_58) : (var_1_26)))) : (var_1_63))) > var_1_21) ? (var_1_89 == ((unsigned char) var_1_51)) : (var_1_89 == ((unsigned char) (last_1_var_1_89 && (! (last_1_var_1_55 || var_1_50))))))) && (((var_1_74 - 100) < var_1_21) ? (var_1_90 == ((unsigned short int) var_1_20)) : (var_1_90 == ((unsigned short int) ((((var_1_42) < ((var_1_20 - var_1_21))) ? (var_1_42) : ((var_1_20 - var_1_21)))))))) && ((var_1_4 > 2) ? (var_1_91 == ((double) var_1_38)) : 1)) && (var_1_52 ? (var_1_92 == ((float) (var_1_83 - (var_1_93 - 127.2f)))) : ((((var_1_23 / var_1_78) <= var_1_87) && (var_1_13 <= (var_1_34 + var_1_103))) ? (var_1_92 == ((float) (var_1_13 - var_1_37))) : ((var_1_56 && (var_1_101 && (var_1_88 != var_1_99))) ? (var_1_55 ? (var_1_92 == ((float) (var_1_84 + (var_1_37 + var_1_80)))) : ((var_1_5 > var_1_74) ? (var_1_92 == ((float) var_1_80)) : (var_1_92 == ((float) var_1_14)))) : (var_1_92 == ((float) var_1_15)))))) && (var_1_53 ? (var_1_94 == ((unsigned char) 0)) : (var_1_94 == ((unsigned char) var_1_52)))) && (var_1_51 ? (var_1_95 == ((unsigned char) var_1_48)) : (var_1_95 == ((unsigned char) var_1_71)))) && (var_1_96 == ((signed short int) 16))) && (var_1_51 ? (var_1_97 == ((unsigned char) var_1_66)) : 1)) && (var_1_98 == ((unsigned short int) var_1_22))) && (var_1_99 == ((signed long int) var_1_78))) && (var_1_100 == ((signed short int) var_1_48))) && (var_1_101 == ((unsigned char) 0))) && (var_1_65 ? (var_1_102 == ((unsigned long int) var_1_17)) : (var_1_102 == ((unsigned long int) 0u)))) && (var_1_101 ? (var_1_103 == ((double) -0.25)) : 1)) && (var_1_94 ? (var_1_104 == ((unsigned char) var_1_78)) : (var_1_104 == ((unsigned char) var_1_48)))) && (var_1_66 ? (((- 2) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) * var_1_58)) ? (((4u | var_1_4) > var_1_26) ? (var_1_105 == ((unsigned char) var_1_20)) : 1) : 1) : (var_1_105 == ((unsigned char) var_1_78)))
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
