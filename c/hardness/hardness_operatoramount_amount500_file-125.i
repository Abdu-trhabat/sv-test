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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Amount500.c", 13, "reach_error"); }
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
signed long int var_1_2 = 1;
signed long int var_1_3 = 4;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 62157;
unsigned short int var_1_8 = 2;
unsigned char var_1_9 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed char var_1_16 = 5;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 10;
unsigned long int var_1_19 = 2510449126;
signed char var_1_20 = 25;
signed char var_1_21 = 4;
double var_1_22 = 50.5;
double var_1_23 = 7.25;
double var_1_24 = 255.625;
unsigned long int var_1_25 = 32;
unsigned long int var_1_26 = 4097564266;
signed short int var_1_27 = 16;
unsigned char var_1_28 = 32;
signed char var_1_30 = -25;
signed char var_1_31 = 5;
signed char var_1_32 = -2;
unsigned long int var_1_33 = 256;
float var_1_34 = 127.1;
double var_1_36 = 7.6;
unsigned long int var_1_37 = 5;
unsigned long int var_1_38 = 25;
unsigned long int var_1_39 = 3292501501;
signed short int var_1_40 = -50;
unsigned short int var_1_41 = 16;
double var_1_42 = 7.875;
double var_1_43 = 24.6;
double var_1_44 = 499.85;
double var_1_45 = 10.25;
double var_1_46 = 2.4;
double var_1_47 = 8.76;
unsigned char var_1_48 = 16;
unsigned char var_1_50 = 32;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 0;
float var_1_53 = 0.0;
float var_1_54 = 15.625;
signed short int var_1_55 = 32;
signed long int var_1_56 = -10;
unsigned long int var_1_57 = 10;
unsigned short int var_1_58 = 32;
unsigned short int var_1_59 = 30373;
unsigned short int var_1_61 = 22304;
unsigned short int var_1_62 = 27100;
unsigned long int var_1_63 = 1;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
signed long int var_1_68 = -1000000000;
double var_1_69 = 0.0;
double var_1_70 = 127.875;
unsigned short int var_1_71 = 32;
unsigned char var_1_72 = 128;
unsigned char var_1_73 = 2;
unsigned char var_1_74 = 64;
signed long int var_1_75 = 5;
double var_1_77 = 31.2;
unsigned long int var_1_78 = 16;
signed long int var_1_79 = -128;
unsigned long int var_1_81 = 200;
unsigned long int var_1_82 = 1768743225;
unsigned long int var_1_83 = 1876218337;
signed short int var_1_84 = 8;
signed short int var_1_85 = 16;
unsigned char var_1_86 = 1;
double var_1_88 = 128.3;
float var_1_89 = 256.25;
signed char var_1_90 = 4;
unsigned short int var_1_91 = 2;
float var_1_92 = -0.2;
signed short int var_1_93 = 32;
unsigned short int var_1_94 = 16;
signed char var_1_95 = -64;
signed short int var_1_96 = -8;
signed short int var_1_97 = 64;
float var_1_98 = 31.5;
unsigned char var_1_99 = 0;
unsigned char var_1_100 = 1;
unsigned long int var_1_101 = 2;
unsigned long int var_1_102 = 2103928346;
signed char var_1_103 = 50;
signed char var_1_104 = 5;
unsigned long int var_1_105 = 0;
unsigned char last_1_var_1_9 = 1;
double last_1_var_1_22 = 50.5;
unsigned long int last_1_var_1_25 = 32;
unsigned long int last_1_var_1_33 = 256;
unsigned short int last_1_var_1_41 = 16;
double last_1_var_1_42 = 7.875;
signed short int last_1_var_1_55 = 32;
signed long int last_1_var_1_56 = -10;
unsigned long int last_1_var_1_57 = 10;
unsigned short int last_1_var_1_58 = 32;
unsigned long int last_1_var_1_63 = 1;
unsigned char last_1_var_1_64 = 1;
unsigned char last_1_var_1_65 = 1;
signed long int last_1_var_1_68 = -1000000000;
unsigned short int last_1_var_1_71 = 32;
unsigned long int last_1_var_1_78 = 16;
signed long int last_1_var_1_79 = -128;
unsigned long int last_1_var_1_81 = 200;
signed short int last_1_var_1_84 = 8;
unsigned char last_1_var_1_86 = 1;
double last_1_var_1_88 = 128.3;
unsigned short int last_1_var_1_94 = 16;
unsigned char last_1_var_1_99 = 0;
unsigned long int last_1_var_1_101 = 2;
unsigned long int last_1_var_1_105 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_31 = var_1_85 ^ (var_1_37 >> var_1_17);
 signed long int stepLocal_30 = last_1_var_1_68 + 128;
 unsigned long int stepLocal_29 = ((((-64 | last_1_var_1_25)) > (var_1_32)) ? ((-64 | last_1_var_1_25)) : (var_1_32));
 unsigned long int stepLocal_28 = -32 * last_1_var_1_57;
 if ((var_1_59 & var_1_62) >= stepLocal_28) {
  if (last_1_var_1_25 < stepLocal_29) {
   if ((last_1_var_1_25 | last_1_var_1_84) <= stepLocal_30) {
    var_1_86 = (! (var_1_14 && var_1_13));
   }
  }
 } else {
  if ((16 & var_1_51) >= stepLocal_31) {
   var_1_86 = var_1_12;
  } else {
   var_1_86 = (var_1_14 && var_1_13);
  }
 }
 unsigned char stepLocal_25 = ((((last_1_var_1_105) > (last_1_var_1_56)) ? (last_1_var_1_105) : (last_1_var_1_56))) != last_1_var_1_25;
 unsigned long int stepLocal_24 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) * last_1_var_1_33;
 unsigned long int stepLocal_23 = 64u;
 unsigned short int stepLocal_22 = var_1_6;
 if ((last_1_var_1_63 < var_1_39) && stepLocal_25) {
  if ((var_1_8 & var_1_32) != stepLocal_24) {
   if (last_1_var_1_58 <= stepLocal_22) {
    if (last_1_var_1_78 < stepLocal_23) {
     if ((((((var_1_53) < (var_1_54)) ? (var_1_53) : (var_1_54))) - (var_1_69 - var_1_70)) >= var_1_34) {
      var_1_68 = (((((var_1_61) > (last_1_var_1_25)) ? (var_1_61) : (last_1_var_1_25))) + var_1_20);
     } else {
      var_1_68 = ((((last_1_var_1_68) < (0)) ? (last_1_var_1_68) : (0)));
     }
    } else {
     var_1_68 = (50 + last_1_var_1_101);
    }
   } else {
    var_1_68 = var_1_8;
   }
  }
 } else {
  var_1_68 = (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - (1796343893 - ((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))));
 }
 unsigned long int stepLocal_0 = last_1_var_1_81;
 if ((var_1_2 - var_1_3) <= stepLocal_0) {
  if (last_1_var_1_86) {
   var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 } else {
  var_1_1 = (var_1_7 - var_1_8);
 }
 signed long int stepLocal_12 = last_1_var_1_84;
 if (stepLocal_12 < (~ last_1_var_1_81)) {
  var_1_42 = (var_1_43 - var_1_44);
 } else {
  if (! ((var_1_18 * var_1_37) <= last_1_var_1_57)) {
   var_1_42 = (((((var_1_45 + var_1_46)) > ((((((63.625 + var_1_47)) < (var_1_24)) ? ((63.625 + var_1_47)) : (var_1_24))))) ? ((var_1_45 + var_1_46)) : ((((((63.625 + var_1_47)) < (var_1_24)) ? ((63.625 + var_1_47)) : (var_1_24))))));
  } else {
   var_1_42 = ((((var_1_46) < (var_1_45)) ? (var_1_46) : (var_1_45)));
  }
 }
 unsigned char stepLocal_36 = last_1_var_1_64;
 if (last_1_var_1_99 && stepLocal_36) {
  var_1_101 = ((var_1_83 + var_1_102) - last_1_var_1_71);
 } else {
  var_1_101 = (last_1_var_1_56 + (last_1_var_1_41 + var_1_72));
 }
 if (last_1_var_1_9) {
  var_1_91 = var_1_7;
 } else {
  var_1_91 = last_1_var_1_57;
 }
 if (last_1_var_1_101 > ((((-64) > ((var_1_62 - last_1_var_1_101))) ? (-64) : ((var_1_62 - last_1_var_1_101))))) {
  var_1_81 = (last_1_var_1_81 + 64u);
 } else {
  var_1_81 = ((var_1_82 + (var_1_83 - last_1_var_1_81)) - 100u);
 }
 if ((var_1_43 - var_1_53) >= last_1_var_1_22) {
  var_1_56 = last_1_var_1_101;
 } else {
  var_1_56 = var_1_51;
 }
 var_1_96 = var_1_56;
 signed long int stepLocal_10 = var_1_3 - var_1_21;
 if (var_1_2 <= stepLocal_10) {
  var_1_25 = ((var_1_26 - var_1_7) - ((var_1_17 + var_1_8) + last_1_var_1_71));
 } else {
  var_1_25 = var_1_17;
 }
 if (var_1_53 <= last_1_var_1_42) {
  var_1_57 = (((((((var_1_8) > ((var_1_6 + var_1_7))) ? (var_1_8) : ((var_1_6 + var_1_7)))) < 0 ) ? -((((var_1_8) > ((var_1_6 + var_1_7))) ? (var_1_8) : ((var_1_6 + var_1_7)))) : ((((var_1_8) > ((var_1_6 + var_1_7))) ? (var_1_8) : ((var_1_6 + var_1_7))))));
 } else {
  if (((((last_1_var_1_88) > (var_1_46)) ? (last_1_var_1_88) : (var_1_46))) >= (var_1_45 * (var_1_47 / var_1_36))) {
   var_1_57 = ((((last_1_var_1_41) > (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (last_1_var_1_41) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))));
  } else {
   var_1_57 = ((((var_1_21) > (((((last_1_var_1_78) < 0 ) ? -(last_1_var_1_78) : (last_1_var_1_78))))) ? (var_1_21) : (((((last_1_var_1_78) < 0 ) ? -(last_1_var_1_78) : (last_1_var_1_78))))));
  }
 }
 unsigned short int stepLocal_5 = var_1_7;
 unsigned short int stepLocal_4 = var_1_18;
 if ((500 << (var_1_17 - var_1_18)) > stepLocal_5) {
  if ((var_1_19 - var_1_6) == stepLocal_4) {
   var_1_16 = ((var_1_18 + var_1_17) + var_1_20);
  } else {
   var_1_16 = (var_1_17 - ((((var_1_18) < (var_1_21)) ? (var_1_18) : (var_1_21))));
  }
 } else {
  var_1_16 = var_1_20;
 }
 var_1_27 = (var_1_21 + var_1_101);
 unsigned long int stepLocal_11 = var_1_19;
 if (stepLocal_11 != (var_1_26 - var_1_3)) {
  var_1_30 = ((((var_1_18) < ((var_1_17 + -50))) ? (var_1_18) : ((var_1_17 + -50))));
 }
 if (! (var_1_34 >= (9.5f - 3.75f))) {
  var_1_41 = (((((var_1_21) < (4)) ? (var_1_21) : (4))) + var_1_8);
 } else {
  if (((var_1_19 / var_1_17) >> 16) > var_1_6) {
   var_1_41 = (var_1_7 - var_1_17);
  }
 }
 if ((2.125f / var_1_89) < var_1_47) {
  var_1_88 = (var_1_70 - (((((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) < 0 ) ? -((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) : ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))))));
 }
 var_1_94 = last_1_var_1_94;
 var_1_95 = var_1_20;
 if (var_1_15) {
  var_1_97 = var_1_72;
 } else {
  var_1_97 = var_1_85;
 }
 if (var_1_13) {
  var_1_98 = var_1_44;
 } else {
  var_1_98 = var_1_46;
 }
 if (var_1_66) {
  var_1_99 = var_1_12;
 } else {
  var_1_99 = 0;
 }
 if (var_1_99) {
  var_1_100 = var_1_66;
 } else {
  var_1_100 = var_1_14;
 }
 var_1_103 = var_1_50;
 var_1_104 = var_1_32;
 var_1_105 = last_1_var_1_105;
 signed char stepLocal_9 = var_1_20;
 signed char stepLocal_8 = var_1_20;
 signed long int stepLocal_7 = var_1_41 + (var_1_68 / var_1_7);
 unsigned short int stepLocal_6 = var_1_8;
 if (stepLocal_9 <= (var_1_19 * var_1_18)) {
  if (var_1_68 != stepLocal_8) {
   if ((var_1_57 * 32) < stepLocal_7) {
    if (var_1_2 < stepLocal_6) {
     var_1_22 = ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)));
    } else {
     var_1_22 = var_1_23;
    }
   }
  } else {
   var_1_22 = 9.999999999999995E14;
  }
 }
 if (var_1_99) {
  var_1_63 = ((((var_1_1) < (var_1_39)) ? (var_1_1) : (var_1_39)));
 }
 if (! (var_1_44 >= var_1_42)) {
  if (var_1_56 < 0) {
   var_1_64 = (((! var_1_100) || (var_1_15 && var_1_14)) && var_1_13);
  }
 } else {
  var_1_64 = (! ((var_1_38 > var_1_62) || var_1_15));
 }
 if (last_1_var_1_65) {
  if (var_1_99) {
   var_1_65 = (var_1_12 || (! (var_1_100 || var_1_14)));
  } else {
   if (var_1_25 < (var_1_61 * var_1_51)) {
    var_1_65 = ((var_1_12 || var_1_66) || (! var_1_13));
   } else {
    if (63.95 <= var_1_34) {
     var_1_65 = (var_1_100 && var_1_12);
    } else {
     if (var_1_64) {
      if (var_1_61 != (- (var_1_7 - var_1_91))) {
       var_1_65 = (var_1_15 && (var_1_14 && (! var_1_13)));
      } else {
       var_1_65 = ((var_1_21 <= var_1_50) || var_1_15);
      }
     } else {
      var_1_65 = ((var_1_47 > (var_1_24 * 31.4)) && (var_1_100 && var_1_12));
     }
    }
   }
  }
 }
 if (var_1_65) {
  var_1_40 = 64;
 } else {
  var_1_40 = ((((var_1_20) > (((((var_1_91) < (var_1_25)) ? (var_1_91) : (var_1_25))))) ? (var_1_20) : (((((var_1_91) < (var_1_25)) ? (var_1_91) : (var_1_25))))));
 }
 unsigned char stepLocal_3 = var_1_65;
 unsigned short int stepLocal_2 = var_1_6;
 unsigned char stepLocal_1 = var_1_99;
 if (stepLocal_2 < var_1_81) {
  if (var_1_99 || stepLocal_3) {
   if (stepLocal_1 || var_1_65) {
    var_1_9 = (! var_1_12);
   } else {
    var_1_9 = ((var_1_99 || (var_1_13 && var_1_14)) && var_1_15);
   }
  }
 } else {
  var_1_9 = (! (var_1_15 && var_1_12));
 }
 if (64.925f >= var_1_47) {
  var_1_78 = (var_1_39 - last_1_var_1_78);
 } else {
  var_1_78 = var_1_96;
 }
 if ((var_1_97 >> 5) < var_1_17) {
  var_1_52 = 0;
 } else {
  if (var_1_32 >= var_1_78) {
   if ((var_1_43 - (var_1_53 - var_1_54)) >= var_1_45) {
    var_1_52 = (var_1_15 || (! var_1_12));
   } else {
    var_1_52 = (! var_1_12);
   }
  }
 }
 if (((var_1_7 - var_1_18) >= ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) && var_1_99) {
  var_1_28 = var_1_21;
 } else {
  if (! (var_1_63 < var_1_56)) {
   var_1_28 = (var_1_18 + var_1_17);
  }
 }
 if (var_1_15 || var_1_99) {
  var_1_73 = ((var_1_74 - (var_1_17 + var_1_18)) + var_1_50);
 } else {
  var_1_73 = ((((var_1_51 - var_1_50) < 0 ) ? -(var_1_51 - var_1_50) : (var_1_51 - var_1_50)));
 }
 unsigned char stepLocal_35 = var_1_100 || (var_1_85 != var_1_21);
 unsigned char stepLocal_34 = var_1_65;
 signed long int stepLocal_33 = var_1_68;
 unsigned long int stepLocal_32 = var_1_105;
 if (var_1_100 || stepLocal_35) {
  if (stepLocal_33 >= (var_1_25 % var_1_83)) {
   var_1_90 = var_1_50;
  } else {
   if (var_1_61 > stepLocal_32) {
    if (stepLocal_34 && var_1_100) {
     var_1_90 = -16;
    } else {
     var_1_90 = var_1_21;
    }
   } else {
    var_1_90 = var_1_21;
   }
  }
 } else {
  var_1_90 = var_1_21;
 }
 if (var_1_100) {
  var_1_92 = var_1_47;
 } else {
  var_1_92 = var_1_24;
 }
 if (var_1_100) {
  var_1_93 = var_1_90;
 } else {
  var_1_93 = -5;
 }
 unsigned long int stepLocal_27 = var_1_78;
 if ((var_1_17 - ((((last_1_var_1_84) < (var_1_74)) ? (last_1_var_1_84) : (var_1_74)))) != stepLocal_27) {
  if (var_1_86) {
   var_1_84 = ((((((((((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) < (16)) ? (((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) : (16)))) < ((last_1_var_1_84 - var_1_74))) ? (((((((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) < (16)) ? (((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) : (16)))) : ((last_1_var_1_84 - var_1_74))));
  } else {
   var_1_84 = ((((var_1_50) < (var_1_85)) ? (var_1_50) : (var_1_85)));
  }
 }
 if ((((((var_1_51) > (var_1_72)) ? (var_1_51) : (var_1_72))) - var_1_18) >= var_1_105) {
  var_1_71 = ((((((((var_1_62) > (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_62) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))))) > (var_1_21)) ? (((((var_1_62) > (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_62) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))))) : (var_1_21)));
 } else {
  if (var_1_15 || var_1_14) {
   var_1_71 = (var_1_17 + ((((16) < (var_1_40)) ? (16) : (var_1_40))));
  }
 }
 if (var_1_52) {
  if ((var_1_20 / var_1_17) != var_1_50) {
   if (var_1_19 < var_1_57) {
    var_1_75 = -32;
   }
  } else {
   var_1_75 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
  }
 } else {
  var_1_75 = ((((4) > (var_1_96)) ? (4) : (var_1_96)));
 }
 unsigned char stepLocal_15 = var_1_13;
 signed long int stepLocal_14 = - (var_1_2 + var_1_75);
 unsigned char stepLocal_13 = var_1_99;
 if (stepLocal_14 < var_1_40) {
  if (var_1_15 && stepLocal_15) {
   if ((var_1_18 <= var_1_19) && stepLocal_13) {
    var_1_48 = (128 - (var_1_18 + (var_1_50 - var_1_17)));
   } else {
    var_1_48 = (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - var_1_18);
   }
  }
 } else {
  var_1_48 = var_1_21;
 }
 if (! var_1_13) {
  var_1_79 = ((((var_1_41) < (var_1_51)) ? (var_1_41) : (var_1_51)));
 } else {
  if (last_1_var_1_79 > 10) {
   var_1_79 = ((((var_1_71) < (((((var_1_6) > ((4 - var_1_62))) ? (var_1_6) : ((4 - var_1_62)))))) ? (var_1_71) : (((((var_1_6) > ((4 - var_1_62))) ? (var_1_6) : ((4 - var_1_62)))))));
  } else {
   if (var_1_54 >= var_1_22) {
    var_1_79 = (var_1_6 - var_1_71);
   }
  }
 }
 signed long int stepLocal_18 = var_1_75;
 signed long int stepLocal_17 = var_1_51 | var_1_21;
 unsigned short int stepLocal_16 = var_1_7;
 if (stepLocal_17 == var_1_1) {
  if (stepLocal_16 > var_1_94) {
   if (((var_1_101 % var_1_7) + var_1_38) < stepLocal_18) {
    var_1_55 = ((((var_1_18) > (var_1_101)) ? (var_1_18) : (var_1_101)));
   }
  } else {
   var_1_55 = last_1_var_1_55;
  }
 } else {
  var_1_55 = (((((var_1_51) > (var_1_17)) ? (var_1_51) : (var_1_17))) + ((((((((var_1_21) > (last_1_var_1_55)) ? (var_1_21) : (last_1_var_1_55)))) < ((var_1_71 + 10))) ? (((((var_1_21) > (last_1_var_1_55)) ? (var_1_21) : (last_1_var_1_55)))) : ((var_1_71 + 10)))));
 }
 unsigned long int stepLocal_21 = var_1_19;
 unsigned long int stepLocal_20 = 64 * var_1_105;
 unsigned long int stepLocal_19 = (var_1_6 / var_1_39) << var_1_2;
 if (stepLocal_19 != var_1_38) {
  if (stepLocal_21 < var_1_17) {
   var_1_58 = ((((var_1_50) < ((var_1_75 + (var_1_59 - var_1_51)))) ? (var_1_50) : ((var_1_75 + (var_1_59 - var_1_51)))));
  } else {
   var_1_58 = (var_1_7 - var_1_18);
  }
 } else {
  if (var_1_51 <= stepLocal_20) {
   var_1_58 = ((((((var_1_59) > (var_1_61)) ? (var_1_59) : (var_1_61))) + var_1_62) - var_1_50);
  } else {
   var_1_58 = var_1_51;
  }
 }
 if (! ((var_1_8 / var_1_17) <= var_1_7)) {
  var_1_31 = (((((var_1_17 + (var_1_18 + var_1_32))) < (var_1_21)) ? ((var_1_17 + (var_1_18 + var_1_32))) : (var_1_21)));
 } else {
  if (var_1_100) {
   if (var_1_20 >= var_1_79) {
    var_1_31 = (var_1_32 + var_1_20);
   } else {
    var_1_31 = (32 - var_1_21);
   }
  } else {
   var_1_31 = (var_1_32 + ((((var_1_17) > (var_1_20)) ? (var_1_17) : (var_1_20))));
  }
 }
 if ((var_1_34 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) > (var_1_42 * (var_1_23 + var_1_22))) {
  if (var_1_13 || var_1_99) {
   if ((var_1_42 / var_1_36) < var_1_24) {
    var_1_33 = (var_1_18 + var_1_58);
   } else {
    if (var_1_91 == (((((var_1_91) < (-10)) ? (var_1_91) : (-10))) * (~ var_1_55))) {
     var_1_33 = (((((var_1_17 + var_1_37)) < (var_1_6)) ? ((var_1_17 + var_1_37)) : (var_1_6)));
    } else {
     var_1_33 = ((((((var_1_26 - var_1_38)) < (var_1_39)) ? ((var_1_26 - var_1_38)) : (var_1_39))) - 8u);
    }
   }
  }
 } else {
  var_1_33 = (var_1_37 + var_1_6);
 }
 signed long int stepLocal_26 = var_1_79 % 256;
 if ((var_1_33 & (- var_1_74)) <= stepLocal_26) {
  var_1_77 = ((((((((var_1_24) > ((var_1_70 - var_1_44))) ? (var_1_24) : ((var_1_70 - var_1_44))))) > (((((var_1_23) < (var_1_46)) ? (var_1_23) : (var_1_46))))) ? (((((var_1_24) > ((var_1_70 - var_1_44))) ? (var_1_24) : ((var_1_70 - var_1_44))))) : (((((var_1_23) < (var_1_46)) ? (var_1_23) : (var_1_46))))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 11);
 assume_abort_if_not(var_1_17 <= 22);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 11);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 3221225470);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -31);
 assume_abort_if_not(var_1_32 <= 31);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 1073741823);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 31);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 127);
 assume_abort_if_not(var_1_51 <= 254);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 4611686.018427388000e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427388000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 16383);
 assume_abort_if_not(var_1_59 <= 32767);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32767);
 var_1_62 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_62 >= 16384);
 assume_abort_if_not(var_1_62 <= 32767);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 0);
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= 4611686.018427388000e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854776000e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427388000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 127);
 assume_abort_if_not(var_1_72 <= 255);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 63);
 assume_abort_if_not(var_1_74 <= 127);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 1073741823);
 assume_abort_if_not(var_1_82 <= 2147483647);
 var_1_83 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_83 >= 1610612735);
 assume_abort_if_not(var_1_83 <= 2147483647);
 var_1_85 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_85 >= -32767);
 assume_abort_if_not(var_1_85 <= 32766);
 var_1_89 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_89 >= -922337.2036854776000e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854776000e+12F && var_1_89 >= 1.0e-20F ));
 assume_abort_if_not(var_1_89 != 0.0F);
 var_1_102 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_102 >= 1073741824);
 assume_abort_if_not(var_1_102 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_105 = var_1_105;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - var_1_3) <= last_1_var_1_81) ? (last_1_var_1_86 ? (var_1_1 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : 1) : (var_1_1 == ((unsigned short int) (var_1_7 - var_1_8)))) && ((var_1_6 < var_1_81) ? ((var_1_99 || var_1_65) ? ((var_1_99 || var_1_65) ? (var_1_9 == ((unsigned char) (! var_1_12))) : (var_1_9 == ((unsigned char) ((var_1_99 || (var_1_13 && var_1_14)) && var_1_15)))) : 1) : (var_1_9 == ((unsigned char) (! (var_1_15 && var_1_12)))))) && (((500 << (var_1_17 - var_1_18)) > var_1_7) ? (((var_1_19 - var_1_6) == var_1_18) ? (var_1_16 == ((signed char) ((var_1_18 + var_1_17) + var_1_20))) : (var_1_16 == ((signed char) (var_1_17 - ((((var_1_18) < (var_1_21)) ? (var_1_18) : (var_1_21))))))) : (var_1_16 == ((signed char) var_1_20)))) && ((var_1_20 <= (var_1_19 * var_1_18)) ? ((var_1_68 != var_1_20) ? (((var_1_57 * 32) < (var_1_41 + (var_1_68 / var_1_7))) ? ((var_1_2 < var_1_8) ? (var_1_22 == ((double) ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))) : (var_1_22 == ((double) var_1_23))) : 1) : (var_1_22 == ((double) 9.999999999999995E14))) : 1)) && ((var_1_2 <= (var_1_3 - var_1_21)) ? (var_1_25 == ((unsigned long int) ((var_1_26 - var_1_7) - ((var_1_17 + var_1_8) + last_1_var_1_71)))) : (var_1_25 == ((unsigned long int) var_1_17)))) && (var_1_27 == ((signed short int) (var_1_21 + var_1_101)))) && ((((var_1_7 - var_1_18) >= ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) && var_1_99) ? (var_1_28 == ((unsigned char) var_1_21)) : ((! (var_1_63 < var_1_56)) ? (var_1_28 == ((unsigned char) (var_1_18 + var_1_17))) : 1))) && ((var_1_19 != (var_1_26 - var_1_3)) ? (var_1_30 == ((signed char) ((((var_1_18) < ((var_1_17 + -50))) ? (var_1_18) : ((var_1_17 + -50)))))) : 1)) && ((! ((var_1_8 / var_1_17) <= var_1_7)) ? (var_1_31 == ((signed char) (((((var_1_17 + (var_1_18 + var_1_32))) < (var_1_21)) ? ((var_1_17 + (var_1_18 + var_1_32))) : (var_1_21))))) : (var_1_100 ? ((var_1_20 >= var_1_79) ? (var_1_31 == ((signed char) (var_1_32 + var_1_20))) : (var_1_31 == ((signed char) (32 - var_1_21)))) : (var_1_31 == ((signed char) (var_1_32 + ((((var_1_17) > (var_1_20)) ? (var_1_17) : (var_1_20))))))))) && (((var_1_34 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) > (var_1_42 * (var_1_23 + var_1_22))) ? ((var_1_13 || var_1_99) ? (((var_1_42 / var_1_36) < var_1_24) ? (var_1_33 == ((unsigned long int) (var_1_18 + var_1_58))) : ((var_1_91 == (((((var_1_91) < (-10)) ? (var_1_91) : (-10))) * (~ var_1_55))) ? (var_1_33 == ((unsigned long int) (((((var_1_17 + var_1_37)) < (var_1_6)) ? ((var_1_17 + var_1_37)) : (var_1_6))))) : (var_1_33 == ((unsigned long int) ((((((var_1_26 - var_1_38)) < (var_1_39)) ? ((var_1_26 - var_1_38)) : (var_1_39))) - 8u))))) : 1) : (var_1_33 == ((unsigned long int) (var_1_37 + var_1_6))))) && (var_1_65 ? (var_1_40 == ((signed short int) 64)) : (var_1_40 == ((signed short int) ((((var_1_20) > (((((var_1_91) < (var_1_25)) ? (var_1_91) : (var_1_25))))) ? (var_1_20) : (((((var_1_91) < (var_1_25)) ? (var_1_91) : (var_1_25)))))))))) && ((! (var_1_34 >= (9.5f - 3.75f))) ? (var_1_41 == ((unsigned short int) (((((var_1_21) < (4)) ? (var_1_21) : (4))) + var_1_8))) : ((((var_1_19 / var_1_17) >> 16) > var_1_6) ? (var_1_41 == ((unsigned short int) (var_1_7 - var_1_17))) : 1))) && ((last_1_var_1_84 < (~ last_1_var_1_81)) ? (var_1_42 == ((double) (var_1_43 - var_1_44))) : ((! ((var_1_18 * var_1_37) <= last_1_var_1_57)) ? (var_1_42 == ((double) (((((var_1_45 + var_1_46)) > ((((((63.625 + var_1_47)) < (var_1_24)) ? ((63.625 + var_1_47)) : (var_1_24))))) ? ((var_1_45 + var_1_46)) : ((((((63.625 + var_1_47)) < (var_1_24)) ? ((63.625 + var_1_47)) : (var_1_24)))))))) : (var_1_42 == ((double) ((((var_1_46) < (var_1_45)) ? (var_1_46) : (var_1_45)))))))) && (((- (var_1_2 + var_1_75)) < var_1_40) ? ((var_1_15 && var_1_13) ? (((var_1_18 <= var_1_19) && var_1_99) ? (var_1_48 == ((unsigned char) (128 - (var_1_18 + (var_1_50 - var_1_17))))) : (var_1_48 == ((unsigned char) (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - var_1_18)))) : 1) : (var_1_48 == ((unsigned char) var_1_21)))) && (((var_1_97 >> 5) < var_1_17) ? (var_1_52 == ((unsigned char) 0)) : ((var_1_32 >= var_1_78) ? (((var_1_43 - (var_1_53 - var_1_54)) >= var_1_45) ? (var_1_52 == ((unsigned char) (var_1_15 || (! var_1_12)))) : (var_1_52 == ((unsigned char) (! var_1_12)))) : 1))) && (((var_1_51 | var_1_21) == var_1_1) ? ((var_1_7 > var_1_94) ? ((((var_1_101 % var_1_7) + var_1_38) < var_1_75) ? (var_1_55 == ((signed short int) ((((var_1_18) > (var_1_101)) ? (var_1_18) : (var_1_101))))) : 1) : (var_1_55 == ((signed short int) last_1_var_1_55))) : (var_1_55 == ((signed short int) (((((var_1_51) > (var_1_17)) ? (var_1_51) : (var_1_17))) + ((((((((var_1_21) > (last_1_var_1_55)) ? (var_1_21) : (last_1_var_1_55)))) < ((var_1_71 + 10))) ? (((((var_1_21) > (last_1_var_1_55)) ? (var_1_21) : (last_1_var_1_55)))) : ((var_1_71 + 10))))))))) && (((var_1_43 - var_1_53) >= last_1_var_1_22) ? (var_1_56 == ((signed long int) last_1_var_1_101)) : (var_1_56 == ((signed long int) var_1_51)))) && ((var_1_53 <= last_1_var_1_42) ? (var_1_57 == ((unsigned long int) (((((((var_1_8) > ((var_1_6 + var_1_7))) ? (var_1_8) : ((var_1_6 + var_1_7)))) < 0 ) ? -((((var_1_8) > ((var_1_6 + var_1_7))) ? (var_1_8) : ((var_1_6 + var_1_7)))) : ((((var_1_8) > ((var_1_6 + var_1_7))) ? (var_1_8) : ((var_1_6 + var_1_7)))))))) : ((((((last_1_var_1_88) > (var_1_46)) ? (last_1_var_1_88) : (var_1_46))) >= (var_1_45 * (var_1_47 / var_1_36))) ? (var_1_57 == ((unsigned long int) ((((last_1_var_1_41) > (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (last_1_var_1_41) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))))) : (var_1_57 == ((unsigned long int) ((((var_1_21) > (((((last_1_var_1_78) < 0 ) ? -(last_1_var_1_78) : (last_1_var_1_78))))) ? (var_1_21) : (((((last_1_var_1_78) < 0 ) ? -(last_1_var_1_78) : (last_1_var_1_78))))))))))) && ((((var_1_6 / var_1_39) << var_1_2) != var_1_38) ? ((var_1_19 < var_1_17) ? (var_1_58 == ((unsigned short int) ((((var_1_50) < ((var_1_75 + (var_1_59 - var_1_51)))) ? (var_1_50) : ((var_1_75 + (var_1_59 - var_1_51))))))) : (var_1_58 == ((unsigned short int) (var_1_7 - var_1_18)))) : ((var_1_51 <= (64 * var_1_105)) ? (var_1_58 == ((unsigned short int) ((((((var_1_59) > (var_1_61)) ? (var_1_59) : (var_1_61))) + var_1_62) - var_1_50))) : (var_1_58 == ((unsigned short int) var_1_51))))) && (var_1_99 ? (var_1_63 == ((unsigned long int) ((((var_1_1) < (var_1_39)) ? (var_1_1) : (var_1_39))))) : 1)) && ((! (var_1_44 >= var_1_42)) ? ((var_1_56 < 0) ? (var_1_64 == ((unsigned char) (((! var_1_100) || (var_1_15 && var_1_14)) && var_1_13))) : 1) : (var_1_64 == ((unsigned char) (! ((var_1_38 > var_1_62) || var_1_15)))))) && (last_1_var_1_65 ? (var_1_99 ? (var_1_65 == ((unsigned char) (var_1_12 || (! (var_1_100 || var_1_14))))) : ((var_1_25 < (var_1_61 * var_1_51)) ? (var_1_65 == ((unsigned char) ((var_1_12 || var_1_66) || (! var_1_13)))) : ((63.95 <= var_1_34) ? (var_1_65 == ((unsigned char) (var_1_100 && var_1_12))) : (var_1_64 ? ((var_1_61 != (- (var_1_7 - var_1_91))) ? (var_1_65 == ((unsigned char) (var_1_15 && (var_1_14 && (! var_1_13))))) : (var_1_65 == ((unsigned char) ((var_1_21 <= var_1_50) || var_1_15)))) : (var_1_65 == ((unsigned char) ((var_1_47 > (var_1_24 * 31.4)) && (var_1_100 && var_1_12)))))))) : 1)) && (((last_1_var_1_63 < var_1_39) && (((((last_1_var_1_105) > (last_1_var_1_56)) ? (last_1_var_1_105) : (last_1_var_1_56))) != last_1_var_1_25)) ? (((var_1_8 & var_1_32) != (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) * last_1_var_1_33)) ? ((last_1_var_1_58 <= var_1_6) ? ((last_1_var_1_78 < 64u) ? (((((((var_1_53) < (var_1_54)) ? (var_1_53) : (var_1_54))) - (var_1_69 - var_1_70)) >= var_1_34) ? (var_1_68 == ((signed long int) (((((var_1_61) > (last_1_var_1_25)) ? (var_1_61) : (last_1_var_1_25))) + var_1_20))) : (var_1_68 == ((signed long int) ((((last_1_var_1_68) < (0)) ? (last_1_var_1_68) : (0)))))) : (var_1_68 == ((signed long int) (50 + last_1_var_1_101)))) : (var_1_68 == ((signed long int) var_1_8))) : 1) : (var_1_68 == ((signed long int) (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - (1796343893 - ((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25))))))))) && (((((((var_1_51) > (var_1_72)) ? (var_1_51) : (var_1_72))) - var_1_18) >= var_1_105) ? (var_1_71 == ((unsigned short int) ((((((((var_1_62) > (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_62) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))))) > (var_1_21)) ? (((((var_1_62) > (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) ? (var_1_62) : (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))))) : (var_1_21))))) : ((var_1_15 || var_1_14) ? (var_1_71 == ((unsigned short int) (var_1_17 + ((((16) < (var_1_40)) ? (16) : (var_1_40)))))) : 1))) && ((var_1_15 || var_1_99) ? (var_1_73 == ((unsigned char) ((var_1_74 - (var_1_17 + var_1_18)) + var_1_50))) : (var_1_73 == ((unsigned char) ((((var_1_51 - var_1_50) < 0 ) ? -(var_1_51 - var_1_50) : (var_1_51 - var_1_50))))))) && (var_1_52 ? (((var_1_20 / var_1_17) != var_1_50) ? ((var_1_19 < var_1_57) ? (var_1_75 == ((signed long int) -32)) : 1) : (var_1_75 == ((signed long int) ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))) : (var_1_75 == ((signed long int) ((((4) > (var_1_96)) ? (4) : (var_1_96))))))) && (((var_1_33 & (- var_1_74)) <= (var_1_79 % 256)) ? (var_1_77 == ((double) ((((((((var_1_24) > ((var_1_70 - var_1_44))) ? (var_1_24) : ((var_1_70 - var_1_44))))) > (((((var_1_23) < (var_1_46)) ? (var_1_23) : (var_1_46))))) ? (((((var_1_24) > ((var_1_70 - var_1_44))) ? (var_1_24) : ((var_1_70 - var_1_44))))) : (((((var_1_23) < (var_1_46)) ? (var_1_23) : (var_1_46)))))))) : 1)) && ((64.925f >= var_1_47) ? (var_1_78 == ((unsigned long int) (var_1_39 - last_1_var_1_78))) : (var_1_78 == ((unsigned long int) var_1_96)))) && ((! var_1_13) ? (var_1_79 == ((signed long int) ((((var_1_41) < (var_1_51)) ? (var_1_41) : (var_1_51))))) : ((last_1_var_1_79 > 10) ? (var_1_79 == ((signed long int) ((((var_1_71) < (((((var_1_6) > ((4 - var_1_62))) ? (var_1_6) : ((4 - var_1_62)))))) ? (var_1_71) : (((((var_1_6) > ((4 - var_1_62))) ? (var_1_6) : ((4 - var_1_62))))))))) : ((var_1_54 >= var_1_22) ? (var_1_79 == ((signed long int) (var_1_6 - var_1_71))) : 1)))) && ((last_1_var_1_101 > ((((-64) > ((var_1_62 - last_1_var_1_101))) ? (-64) : ((var_1_62 - last_1_var_1_101))))) ? (var_1_81 == ((unsigned long int) (last_1_var_1_81 + 64u))) : (var_1_81 == ((unsigned long int) ((var_1_82 + (var_1_83 - last_1_var_1_81)) - 100u))))) && (((var_1_17 - ((((last_1_var_1_84) < (var_1_74)) ? (last_1_var_1_84) : (var_1_74)))) != var_1_78) ? (var_1_86 ? (var_1_84 == ((signed short int) ((((((((((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) < (16)) ? (((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) : (16)))) < ((last_1_var_1_84 - var_1_74))) ? (((((((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) < (16)) ? (((((var_1_17) > (var_1_81)) ? (var_1_17) : (var_1_81)))) : (16)))) : ((last_1_var_1_84 - var_1_74)))))) : (var_1_84 == ((signed short int) ((((var_1_50) < (var_1_85)) ? (var_1_50) : (var_1_85)))))) : 1)) && (((var_1_59 & var_1_62) >= (-32 * last_1_var_1_57)) ? ((last_1_var_1_25 < (((((-64 | last_1_var_1_25)) > (var_1_32)) ? ((-64 | last_1_var_1_25)) : (var_1_32)))) ? (((last_1_var_1_25 | last_1_var_1_84) <= (last_1_var_1_68 + 128)) ? (var_1_86 == ((unsigned char) (! (var_1_14 && var_1_13)))) : 1) : 1) : (((16 & var_1_51) >= (var_1_85 ^ (var_1_37 >> var_1_17))) ? (var_1_86 == ((unsigned char) var_1_12)) : (var_1_86 == ((unsigned char) (var_1_14 && var_1_13)))))) && (((2.125f / var_1_89) < var_1_47) ? (var_1_88 == ((double) (var_1_70 - (((((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) < 0 ) ? -((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) : ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45)))))))) : 1)) && ((var_1_100 || (var_1_100 || (var_1_85 != var_1_21))) ? ((var_1_68 >= (var_1_25 % var_1_83)) ? (var_1_90 == ((signed char) var_1_50)) : ((var_1_61 > var_1_105) ? ((var_1_65 && var_1_100) ? (var_1_90 == ((signed char) -16)) : (var_1_90 == ((signed char) var_1_21))) : (var_1_90 == ((signed char) var_1_21)))) : (var_1_90 == ((signed char) var_1_21)))) && (last_1_var_1_9 ? (var_1_91 == ((unsigned short int) var_1_7)) : (var_1_91 == ((unsigned short int) last_1_var_1_57)))) && (var_1_100 ? (var_1_92 == ((float) var_1_47)) : (var_1_92 == ((float) var_1_24)))) && (var_1_100 ? (var_1_93 == ((signed short int) var_1_90)) : (var_1_93 == ((signed short int) -5)))) && (var_1_94 == ((unsigned short int) last_1_var_1_94))) && (var_1_95 == ((signed char) var_1_20))) && (var_1_96 == ((signed short int) var_1_56))) && (var_1_15 ? (var_1_97 == ((signed short int) var_1_72)) : (var_1_97 == ((signed short int) var_1_85)))) && (var_1_13 ? (var_1_98 == ((float) var_1_44)) : (var_1_98 == ((float) var_1_46)))) && (var_1_66 ? (var_1_99 == ((unsigned char) var_1_12)) : (var_1_99 == ((unsigned char) 0)))) && (var_1_99 ? (var_1_100 == ((unsigned char) var_1_66)) : (var_1_100 == ((unsigned char) var_1_14)))) && ((last_1_var_1_99 && last_1_var_1_64) ? (var_1_101 == ((unsigned long int) ((var_1_83 + var_1_102) - last_1_var_1_71))) : (var_1_101 == ((unsigned long int) (last_1_var_1_56 + (last_1_var_1_41 + var_1_72)))))) && (var_1_103 == ((signed char) var_1_50))) && (var_1_104 == ((signed char) var_1_32))) && (var_1_105 == ((unsigned long int) last_1_var_1_105))
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
