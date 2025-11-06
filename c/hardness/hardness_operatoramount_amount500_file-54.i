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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int var_1_6 = 36750;
unsigned short int var_1_7 = 1;
unsigned short int var_1_8 = 64;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 32;
unsigned short int var_1_11 = 1;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -256;
unsigned char var_1_15 = 0;
float var_1_16 = 256.9;
float var_1_17 = 10.4;
float var_1_18 = -0.4;
float var_1_19 = 32.7;
float var_1_20 = 5.5;
float var_1_21 = 255.5;
float var_1_22 = 2.4;
unsigned short int var_1_23 = 64;
unsigned short int var_1_24 = 18447;
unsigned short int var_1_25 = 18627;
unsigned short int var_1_26 = 128;
signed long int var_1_27 = 50;
unsigned short int var_1_28 = 17336;
signed char var_1_29 = 100;
signed char var_1_30 = 16;
unsigned char var_1_31 = 10;
float var_1_32 = 99.5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_40 = 0;
double var_1_41 = 9.375;
signed long int var_1_42 = 1000000;
unsigned char var_1_43 = 1;
signed long int var_1_44 = -64;
signed long int var_1_45 = 1908312992;
float var_1_46 = 1.8;
float var_1_47 = 63.25;
unsigned short int var_1_48 = 50;
double var_1_49 = 500.8;
unsigned short int var_1_51 = 256;
unsigned short int var_1_53 = 10000;
unsigned short int var_1_54 = 58465;
signed short int var_1_55 = -8;
unsigned short int var_1_56 = 0;
float var_1_57 = 3.5;
float var_1_58 = 31.5;
float var_1_59 = 1.4;
float var_1_60 = 4.25;
signed short int var_1_61 = -5;
signed short int var_1_62 = 28155;
signed long int var_1_63 = -16;
unsigned short int var_1_64 = 25;
signed long int var_1_65 = 100;
double var_1_66 = 7.8;
unsigned short int var_1_67 = 25011;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 128;
unsigned char var_1_70 = 128;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 4;
unsigned char var_1_73 = 32;
unsigned char var_1_74 = 16;
double var_1_75 = 16.5;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 32;
signed short int var_1_78 = 10;
unsigned long int var_1_79 = 25;
unsigned long int var_1_80 = 8;
unsigned char var_1_85 = 5;
signed long int var_1_87 = -8;
signed long int var_1_88 = -50;
signed short int var_1_89 = -4;
unsigned char var_1_90 = 0;
double var_1_91 = 9.75;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 4;
double var_1_94 = 31.2;
unsigned short int var_1_95 = 16;
signed long int var_1_96 = -16;
unsigned short int var_1_97 = 500;
unsigned char var_1_98 = 0;
unsigned long int var_1_99 = 64;
double var_1_100 = 64.8;
double var_1_101 = 3.5;
float var_1_102 = 32.25;
float var_1_103 = 0.0;
unsigned short int last_1_var_1_1 = 32;
unsigned char last_1_var_1_12 = 0;
signed long int last_1_var_1_27 = 50;
double last_1_var_1_41 = 9.375;
signed long int last_1_var_1_44 = -64;
double last_1_var_1_49 = 500.8;
unsigned short int last_1_var_1_51 = 256;
float last_1_var_1_57 = 3.5;
signed long int last_1_var_1_63 = -16;
unsigned short int last_1_var_1_64 = 25;
unsigned char last_1_var_1_76 = 1;
signed short int last_1_var_1_78 = 10;
signed long int last_1_var_1_88 = -50;
unsigned char last_1_var_1_98 = 0;
double last_1_var_1_101 = 3.5;
void initially(void) {
}
void step(void) {
 if (-5 != (var_1_24 + last_1_var_1_27)) {
  if (var_1_36) {
   var_1_48 = ((((var_1_30) > (((var_1_28 - var_1_26) + ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)))))) ? (var_1_30) : (((var_1_28 - var_1_26) + ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)))))));
  }
 }
 signed long int stepLocal_21 = var_1_48 * var_1_6;
 if (stepLocal_21 <= var_1_10) {
  var_1_56 = (var_1_54 - var_1_26);
 } else {
  var_1_56 = (((((var_1_54 - var_1_26)) < (var_1_28)) ? ((var_1_54 - var_1_26)) : (var_1_28)));
 }
 signed long int stepLocal_31 = last_1_var_1_44 | ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 if (((((last_1_var_1_64) < (((((var_1_54) > (var_1_30)) ? (var_1_54) : (var_1_30))))) ? (last_1_var_1_64) : (((((var_1_54) > (var_1_30)) ? (var_1_54) : (var_1_30)))))) == stepLocal_31) {
  if (! last_1_var_1_76) {
   var_1_88 = (((((last_1_var_1_44 + last_1_var_1_63)) < (((((last_1_var_1_88) > (last_1_var_1_1)) ? (last_1_var_1_88) : (last_1_var_1_1))))) ? ((last_1_var_1_44 + last_1_var_1_63)) : (((((last_1_var_1_88) > (last_1_var_1_1)) ? (last_1_var_1_88) : (last_1_var_1_1))))));
  }
 }
 unsigned char stepLocal_15 = (var_1_88 >= var_1_29) && (var_1_13 <= var_1_88);
 if (stepLocal_15 && var_1_34) {
  var_1_41 = (((((var_1_21 + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) < (var_1_22)) ? ((var_1_21 + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : (var_1_22)));
 }
 if (last_1_var_1_88 > ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))) {
  if (last_1_var_1_98 || (var_1_36 && var_1_15)) {
   var_1_64 = (var_1_6 - (var_1_26 + var_1_29));
  } else {
   if (last_1_var_1_88 >= var_1_30) {
    var_1_64 = (var_1_29 + (1 + var_1_26));
   }
  }
 } else {
  if (((var_1_21 / var_1_66) * last_1_var_1_49) < last_1_var_1_57) {
   var_1_64 = ((((var_1_9) < (var_1_30)) ? (var_1_9) : (var_1_30)));
  } else {
   var_1_64 = ((var_1_62 + (var_1_67 - last_1_var_1_88)) - var_1_7);
  }
 }
 signed long int stepLocal_2 = last_1_var_1_27;
 if (last_1_var_1_76) {
  if (((((last_1_var_1_41) < 0 ) ? -(last_1_var_1_41) : (last_1_var_1_41))) < last_1_var_1_101) {
   if ((var_1_9 % ((((var_1_6) > (var_1_13)) ? (var_1_6) : (var_1_13)))) > stepLocal_2) {
    var_1_12 = (! (last_1_var_1_12 && (! var_1_15)));
   }
  } else {
   var_1_12 = (! (! var_1_15));
  }
 } else {
  var_1_12 = ((last_1_var_1_41 >= last_1_var_1_101) && (! var_1_15));
 }
 if (var_1_12) {
  var_1_94 = var_1_21;
 } else {
  var_1_94 = var_1_59;
 }
 if (var_1_94 < 127.125) {
  var_1_75 = 256.2;
 } else {
  var_1_75 = (var_1_21 - var_1_22);
 }
 signed char stepLocal_19 = var_1_29;
 if (stepLocal_19 <= var_1_6) {
  var_1_49 = (var_1_19 + var_1_18);
 } else {
  var_1_49 = ((((((((var_1_47) > (var_1_19)) ? (var_1_47) : (var_1_19)))) > ((var_1_21 + var_1_20))) ? (((((var_1_47) > (var_1_19)) ? (var_1_47) : (var_1_19)))) : ((var_1_21 + var_1_20))));
 }
 signed long int stepLocal_20 = (var_1_6 - var_1_29) * var_1_13;
 if (var_1_9 != stepLocal_20) {
  var_1_55 = (var_1_29 - (16 + var_1_53));
 }
 if (var_1_40) {
  if (var_1_60 < var_1_32) {
   var_1_68 = (var_1_30 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))));
  } else {
   var_1_68 = (var_1_69 - var_1_30);
  }
 } else {
  var_1_68 = (((((var_1_70 - (var_1_30 + var_1_71))) > ((var_1_69 - (var_1_72 + var_1_73)))) ? ((var_1_70 - (var_1_30 + var_1_71))) : ((var_1_69 - (var_1_72 + var_1_73)))));
 }
 var_1_76 = var_1_34;
 unsigned char stepLocal_23 = var_1_35;
 if (stepLocal_23 || var_1_76) {
  var_1_77 = var_1_69;
 } else {
  var_1_77 = var_1_29;
 }
 var_1_87 = (var_1_8 - var_1_11);
 signed long int stepLocal_32 = -32;
 if (stepLocal_32 < (2 << var_1_71)) {
  var_1_89 = ((var_1_62 - var_1_56) - var_1_71);
 } else {
  var_1_89 = (8 + var_1_70);
 }
 if ((var_1_59 - var_1_58) < var_1_18) {
  if (var_1_13 < ((((var_1_26) < ((var_1_80 - 2))) ? (var_1_26) : ((var_1_80 - 2))))) {
   var_1_91 = var_1_59;
  }
 } else {
  var_1_91 = var_1_20;
 }
 var_1_95 = var_1_73;
 if (var_1_36) {
  var_1_96 = 200;
 } else {
  var_1_96 = var_1_30;
 }
 var_1_97 = 5;
 var_1_98 = var_1_40;
 if (var_1_98) {
  var_1_99 = var_1_24;
 } else {
  var_1_99 = var_1_87;
 }
 var_1_100 = var_1_20;
 if (var_1_37) {
  var_1_101 = var_1_17;
 } else {
  var_1_101 = var_1_59;
 }
 unsigned long int stepLocal_33 = var_1_99;
 if (var_1_56 < stepLocal_33) {
  var_1_102 = ((var_1_103 - var_1_58) - var_1_21);
 } else {
  var_1_102 = (((((((((var_1_22 - var_1_103)) > (var_1_58)) ? ((var_1_22 - var_1_103)) : (var_1_58)))) < (var_1_17)) ? ((((((var_1_22 - var_1_103)) > (var_1_58)) ? ((var_1_22 - var_1_103)) : (var_1_58)))) : (var_1_17)));
 }
 unsigned char stepLocal_1 = var_1_94 <= var_1_75;
 unsigned char stepLocal_0 = ! (var_1_101 >= var_1_94);
 if (! ((- 9.9999999999925E11) >= var_1_75)) {
  if (var_1_75 >= var_1_94) {
   if (var_1_75 < 7.5) {
    if (var_1_12 && stepLocal_0) {
     var_1_1 = (var_1_6 - var_1_7);
    } else {
     var_1_1 = ((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))));
    }
   } else {
    var_1_1 = var_1_6;
   }
  } else {
   var_1_1 = (57411 - var_1_7);
  }
 } else {
  if (var_1_12 && stepLocal_1) {
   var_1_1 = (((((var_1_7) < (var_1_10)) ? (var_1_7) : (var_1_10))) + var_1_11);
  }
 }
 if (var_1_41 < var_1_101) {
  var_1_23 = ((((((var_1_24 + var_1_25) - (1 + var_1_26))) > ((((((55265 - var_1_11)) < (var_1_8)) ? ((55265 - var_1_11)) : (var_1_8))))) ? (((var_1_24 + var_1_25) - (1 + var_1_26))) : ((((((55265 - var_1_11)) < (var_1_8)) ? ((55265 - var_1_11)) : (var_1_8))))));
 }
 signed char stepLocal_16 = var_1_30;
 if ((~ var_1_8) >= stepLocal_16) {
  if (var_1_101 <= (- (- var_1_102))) {
   var_1_42 = (var_1_88 - var_1_7);
  }
 } else {
  var_1_42 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + (var_1_23 + var_1_7));
 }
 if (var_1_49 < (var_1_101 * var_1_21)) {
  var_1_43 = (var_1_40 || var_1_37);
 } else {
  var_1_43 = (var_1_36 || (! var_1_40));
 }
 signed char stepLocal_18 = var_1_29;
 unsigned long int stepLocal_17 = 256u;
 if (var_1_40) {
  if (stepLocal_17 <= (((((var_1_56) < (var_1_64)) ? (var_1_56) : (var_1_64))) / var_1_24)) {
   var_1_46 = ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)));
  } else {
   if (var_1_34) {
    var_1_46 = ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) > ((var_1_47 - var_1_22))) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : ((var_1_47 - var_1_22))));
   } else {
    if (stepLocal_18 < var_1_96) {
     if (! var_1_76) {
      var_1_46 = (((((var_1_22) < ((6.102753784646214E18f - var_1_21))) ? (var_1_22) : ((6.102753784646214E18f - var_1_21)))) - var_1_47);
     }
    }
   }
  }
 }
 signed long int stepLocal_22 = var_1_96;
 if (stepLocal_22 > ((var_1_26 << var_1_30) ^ var_1_13)) {
  var_1_57 = (((var_1_58 + var_1_59) - var_1_21) + ((((var_1_60) < (var_1_22)) ? (var_1_60) : (var_1_22))));
 } else {
  var_1_57 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 }
 if (var_1_37) {
  var_1_61 = var_1_29;
 } else {
  if (var_1_94 > ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) {
   var_1_61 = (var_1_30 - (var_1_62 - var_1_99));
  } else {
   var_1_61 = ((((var_1_99 - ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29)))) < 0 ) ? -(var_1_99 - ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29)))) : (var_1_99 - ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))))));
  }
 }
 unsigned long int stepLocal_30 = (var_1_99 * 5) + var_1_13;
 if (9.999999992E8 <= var_1_22) {
  var_1_85 = ((((var_1_79) < (var_1_30)) ? (var_1_79) : (var_1_30)));
 } else {
  if (stepLocal_30 != (var_1_73 - var_1_28)) {
   var_1_85 = ((((var_1_72) > (var_1_80)) ? (var_1_72) : (var_1_80)));
  } else {
   var_1_85 = (((((var_1_71 + (var_1_29 - var_1_30))) > (var_1_73)) ? ((var_1_71 + (var_1_29 - var_1_30))) : (var_1_73)));
  }
 }
 if (var_1_98) {
  var_1_92 = var_1_93;
 } else {
  var_1_92 = var_1_73;
 }
 if (var_1_37) {
  if (var_1_92 != var_1_26) {
   if ((var_1_64 & (- var_1_96)) < var_1_56) {
    var_1_90 = (! var_1_40);
   } else {
    var_1_90 = var_1_40;
   }
  } else {
   var_1_90 = (! 0);
  }
 }
 unsigned char stepLocal_8 = var_1_25 > var_1_10;
 signed long int stepLocal_7 = (var_1_25 + var_1_28) - var_1_24;
 unsigned char stepLocal_6 = var_1_15;
 unsigned short int stepLocal_5 = var_1_11;
 if (! var_1_90) {
  if (stepLocal_6 && var_1_43) {
   var_1_27 = (var_1_95 - var_1_24);
  } else {
   if (var_1_95 < stepLocal_7) {
    var_1_27 = var_1_24;
   } else {
    if ((10 - (var_1_29 - var_1_30)) > stepLocal_5) {
     var_1_27 = 2;
    }
   }
  }
 } else {
  if (stepLocal_8 && var_1_15) {
   var_1_27 = ((((((((var_1_95) < (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_95) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) < (var_1_11)) ? (((((var_1_95) < (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_95) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) : (var_1_11)));
  }
 }
 unsigned char stepLocal_4 = ((((var_1_101) > (var_1_20)) ? (var_1_101) : (var_1_20))) > var_1_22;
 unsigned char stepLocal_3 = var_1_90;
 if (var_1_12 && stepLocal_3) {
  if (var_1_41 >= var_1_101) {
   var_1_16 = ((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) + var_1_19) + ((((var_1_20) < ((var_1_21 - var_1_22))) ? (var_1_20) : ((var_1_21 - var_1_22)))));
  }
 } else {
  if (var_1_12 && stepLocal_4) {
   var_1_16 = ((((var_1_21) > ((var_1_17 + (var_1_19 + var_1_18)))) ? (var_1_21) : ((var_1_17 + (var_1_19 + var_1_18)))));
  }
 }
 if (((((var_1_30) < (var_1_25)) ? (var_1_30) : (var_1_25))) <= ((((var_1_9) > (-1000)) ? (var_1_9) : (-1000)))) {
  if (var_1_16 <= ((var_1_47 + var_1_59) / 9.999999996E8f)) {
   var_1_63 = var_1_88;
  }
 } else {
  if (var_1_64 >= var_1_96) {
   var_1_63 = (32 - var_1_25);
  }
 }
 if ((var_1_28 > (100 << var_1_13)) && var_1_43) {
  if (! var_1_36) {
   var_1_44 = (var_1_48 - (var_1_45 - var_1_6));
  } else {
   var_1_44 = ((var_1_48 + var_1_8) - var_1_6);
  }
 } else {
  var_1_44 = var_1_9;
 }
 signed long int stepLocal_12 = ((((var_1_88 - var_1_7)) > (var_1_29)) ? ((var_1_88 - var_1_7)) : (var_1_29));
 signed char stepLocal_11 = var_1_30;
 signed long int stepLocal_10 = var_1_13;
 unsigned char stepLocal_9 = (var_1_98 && var_1_43) && var_1_90;
 if ((var_1_30 * var_1_28) <= stepLocal_12) {
  if (stepLocal_11 > var_1_26) {
   if (var_1_16 < ((var_1_20 + var_1_18) * var_1_41)) {
    var_1_31 = var_1_30;
   } else {
    var_1_31 = (var_1_29 + var_1_30);
   }
  }
 } else {
  if (var_1_19 == ((var_1_22 + var_1_21) - var_1_32)) {
   var_1_31 = (var_1_29 + var_1_30);
  } else {
   if (stepLocal_10 < var_1_28) {
    if (stepLocal_9 && (var_1_28 <= var_1_24)) {
     var_1_31 = var_1_30;
    } else {
     var_1_31 = 4;
    }
   } else {
    var_1_31 = var_1_30;
   }
  }
 }
 unsigned char stepLocal_14 = (var_1_18 + var_1_32) != var_1_57;
 signed long int stepLocal_13 = var_1_42;
 if (var_1_15) {
  if (var_1_20 >= var_1_75) {
   var_1_33 = ((var_1_34 && var_1_35) && (var_1_76 || (var_1_12 || var_1_36)));
  } else {
   var_1_33 = (var_1_12 && var_1_37);
  }
 } else {
  if ((var_1_17 <= var_1_19) || stepLocal_14) {
   if (var_1_8 < stepLocal_13) {
    var_1_33 = var_1_36;
   } else {
    var_1_33 = ((var_1_37 || var_1_40) || (! (var_1_35 || var_1_36)));
   }
  } else {
   var_1_33 = var_1_36;
  }
 }
 if (var_1_22 < var_1_16) {
  if ((var_1_87 % ((((var_1_13) > (var_1_29)) ? (var_1_13) : (var_1_29)))) > var_1_30) {
   var_1_51 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_51);
  } else {
   var_1_51 = (((((var_1_10) > (var_1_24)) ? (var_1_10) : (var_1_24))) + var_1_7);
  }
 } else {
  if (var_1_15 || (var_1_22 > (5.2f + -0.2f))) {
   if (var_1_25 != var_1_28) {
    var_1_51 = ((((0) > (var_1_8)) ? (0) : (var_1_8)));
   } else {
    if (var_1_75 != ((((var_1_16) < (var_1_41)) ? (var_1_16) : (var_1_41)))) {
     var_1_51 = (var_1_6 - (var_1_28 - (var_1_53 - last_1_var_1_51)));
    } else {
     var_1_51 = ((var_1_54 - (32 + var_1_29)) - ((((var_1_30) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_30) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))));
    }
   }
  }
 }
 if ((var_1_56 * var_1_10) != var_1_7) {
  if (var_1_90) {
   var_1_74 = (128 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))));
  } else {
   if ((10 / var_1_13) < (var_1_72 - var_1_54)) {
    var_1_74 = (((((var_1_71) > ((var_1_72 + var_1_73))) ? (var_1_71) : ((var_1_72 + var_1_73)))) + (var_1_29 - var_1_30));
   }
  }
 }
 signed long int stepLocal_29 = var_1_63 * (var_1_28 - var_1_64);
 unsigned short int stepLocal_28 = var_1_56;
 unsigned short int stepLocal_27 = var_1_28;
 unsigned short int stepLocal_26 = var_1_8;
 unsigned long int stepLocal_25 = (((var_1_73) < (var_1_99)) ? (var_1_73) : (var_1_99));
 unsigned char stepLocal_24 = var_1_12;
 if (((((var_1_72) > (var_1_42)) ? (var_1_72) : (var_1_42))) >= stepLocal_29) {
  var_1_78 = (var_1_53 - var_1_30);
 } else {
  if (stepLocal_27 != (var_1_65 >> (var_1_79 - var_1_80))) {
   if (stepLocal_26 > ((var_1_99 * var_1_45) * var_1_95)) {
    if (var_1_63 != stepLocal_28) {
     if (stepLocal_24 && var_1_43) {
      var_1_78 = ((((last_1_var_1_78) < 0 ) ? -(last_1_var_1_78) : (last_1_var_1_78)));
     } else {
      var_1_78 = ((last_1_var_1_78 - var_1_69) + (var_1_42 + var_1_72));
     }
    } else {
     if (var_1_13 >= stepLocal_25) {
      var_1_78 = (var_1_26 + (((((var_1_73) > (var_1_29)) ? (var_1_73) : (var_1_29))) + var_1_70));
     }
    }
   } else {
    var_1_78 = (((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80))) - (var_1_62 - var_1_26));
   }
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 assume_abort_if_not(var_1_13 != 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -230584.3009213691400e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 16383);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16384);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 16384);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 63);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 8191);
 assume_abort_if_not(var_1_53 <= 16383);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 49150);
 assume_abort_if_not(var_1_54 <= 65534);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691400e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -461168.6018427383000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= 16383);
 assume_abort_if_not(var_1_62 <= 32766);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= -2147483647);
 assume_abort_if_not(var_1_65 <= 2147483647);
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= -922337.2036854776000e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
 assume_abort_if_not(var_1_66 != 0.0F);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 24575);
 assume_abort_if_not(var_1_67 <= 32767);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 127);
 assume_abort_if_not(var_1_69 <= 254);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 127);
 assume_abort_if_not(var_1_70 <= 254);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 63);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 64);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 63);
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 15);
 assume_abort_if_not(var_1_79 <= 30);
 var_1_80 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 14);
 var_1_93 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_93 >= 0);
 assume_abort_if_not(var_1_93 <= 254);
 var_1_103 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_103 >= 4611686.018427383000e+12F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 9223372.036854766000e+12F && var_1_103 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_101 = var_1_101;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((! ((- 9.9999999999925E11) >= var_1_75)) ? ((var_1_75 >= var_1_94) ? ((var_1_75 < 7.5) ? ((var_1_12 && (! (var_1_101 >= var_1_94))) ? (var_1_1 == ((unsigned short int) (var_1_6 - var_1_7))) : (var_1_1 == ((unsigned short int) ((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))))))) : (var_1_1 == ((unsigned short int) var_1_6))) : (var_1_1 == ((unsigned short int) (57411 - var_1_7)))) : ((var_1_12 && (var_1_94 <= var_1_75)) ? (var_1_1 == ((unsigned short int) (((((var_1_7) < (var_1_10)) ? (var_1_7) : (var_1_10))) + var_1_11))) : 1)) && (last_1_var_1_76 ? ((((((last_1_var_1_41) < 0 ) ? -(last_1_var_1_41) : (last_1_var_1_41))) < last_1_var_1_101) ? (((var_1_9 % ((((var_1_6) > (var_1_13)) ? (var_1_6) : (var_1_13)))) > last_1_var_1_27) ? (var_1_12 == ((unsigned char) (! (last_1_var_1_12 && (! var_1_15))))) : 1) : (var_1_12 == ((unsigned char) (! (! var_1_15))))) : (var_1_12 == ((unsigned char) ((last_1_var_1_41 >= last_1_var_1_101) && (! var_1_15)))))) && ((var_1_12 && var_1_90) ? ((var_1_41 >= var_1_101) ? (var_1_16 == ((float) ((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) + var_1_19) + ((((var_1_20) < ((var_1_21 - var_1_22))) ? (var_1_20) : ((var_1_21 - var_1_22))))))) : 1) : ((var_1_12 && (((((var_1_101) > (var_1_20)) ? (var_1_101) : (var_1_20))) > var_1_22)) ? (var_1_16 == ((float) ((((var_1_21) > ((var_1_17 + (var_1_19 + var_1_18)))) ? (var_1_21) : ((var_1_17 + (var_1_19 + var_1_18))))))) : 1))) && ((var_1_41 < var_1_101) ? (var_1_23 == ((unsigned short int) ((((((var_1_24 + var_1_25) - (1 + var_1_26))) > ((((((55265 - var_1_11)) < (var_1_8)) ? ((55265 - var_1_11)) : (var_1_8))))) ? (((var_1_24 + var_1_25) - (1 + var_1_26))) : ((((((55265 - var_1_11)) < (var_1_8)) ? ((55265 - var_1_11)) : (var_1_8)))))))) : 1)) && ((! var_1_90) ? ((var_1_15 && var_1_43) ? (var_1_27 == ((signed long int) (var_1_95 - var_1_24))) : ((var_1_95 < ((var_1_25 + var_1_28) - var_1_24)) ? (var_1_27 == ((signed long int) var_1_24)) : (((10 - (var_1_29 - var_1_30)) > var_1_11) ? (var_1_27 == ((signed long int) 2)) : 1))) : (((var_1_25 > var_1_10) && var_1_15) ? (var_1_27 == ((signed long int) ((((((((var_1_95) < (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_95) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) < (var_1_11)) ? (((((var_1_95) < (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_95) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) : (var_1_11))))) : 1))) && (((var_1_30 * var_1_28) <= (((((var_1_88 - var_1_7)) > (var_1_29)) ? ((var_1_88 - var_1_7)) : (var_1_29)))) ? ((var_1_30 > var_1_26) ? ((var_1_16 < ((var_1_20 + var_1_18) * var_1_41)) ? (var_1_31 == ((unsigned char) var_1_30)) : (var_1_31 == ((unsigned char) (var_1_29 + var_1_30)))) : 1) : ((var_1_19 == ((var_1_22 + var_1_21) - var_1_32)) ? (var_1_31 == ((unsigned char) (var_1_29 + var_1_30))) : ((var_1_13 < var_1_28) ? ((((var_1_98 && var_1_43) && var_1_90) && (var_1_28 <= var_1_24)) ? (var_1_31 == ((unsigned char) var_1_30)) : (var_1_31 == ((unsigned char) 4))) : (var_1_31 == ((unsigned char) var_1_30)))))) && (var_1_15 ? ((var_1_20 >= var_1_75) ? (var_1_33 == ((unsigned char) ((var_1_34 && var_1_35) && (var_1_76 || (var_1_12 || var_1_36))))) : (var_1_33 == ((unsigned char) (var_1_12 && var_1_37)))) : (((var_1_17 <= var_1_19) || ((var_1_18 + var_1_32) != var_1_57)) ? ((var_1_8 < var_1_42) ? (var_1_33 == ((unsigned char) var_1_36)) : (var_1_33 == ((unsigned char) ((var_1_37 || var_1_40) || (! (var_1_35 || var_1_36)))))) : (var_1_33 == ((unsigned char) var_1_36))))) && ((((var_1_88 >= var_1_29) && (var_1_13 <= var_1_88)) && var_1_34) ? (var_1_41 == ((double) (((((var_1_21 + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) < (var_1_22)) ? ((var_1_21 + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : (var_1_22))))) : 1)) && (((~ var_1_8) >= var_1_30) ? ((var_1_101 <= (- (- var_1_102))) ? (var_1_42 == ((signed long int) (var_1_88 - var_1_7))) : 1) : (var_1_42 == ((signed long int) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + (var_1_23 + var_1_7)))))) && ((var_1_49 < (var_1_101 * var_1_21)) ? (var_1_43 == ((unsigned char) (var_1_40 || var_1_37))) : (var_1_43 == ((unsigned char) (var_1_36 || (! var_1_40)))))) && (((var_1_28 > (100 << var_1_13)) && var_1_43) ? ((! var_1_36) ? (var_1_44 == ((signed long int) (var_1_48 - (var_1_45 - var_1_6)))) : (var_1_44 == ((signed long int) ((var_1_48 + var_1_8) - var_1_6)))) : (var_1_44 == ((signed long int) var_1_9)))) && (var_1_40 ? ((256u <= (((((var_1_56) < (var_1_64)) ? (var_1_56) : (var_1_64))) / var_1_24)) ? (var_1_46 == ((float) ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) : (var_1_34 ? (var_1_46 == ((float) ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) > ((var_1_47 - var_1_22))) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : ((var_1_47 - var_1_22)))))) : ((var_1_29 < var_1_96) ? ((! var_1_76) ? (var_1_46 == ((float) (((((var_1_22) < ((6.102753784646214E18f - var_1_21))) ? (var_1_22) : ((6.102753784646214E18f - var_1_21)))) - var_1_47))) : 1) : 1))) : 1)) && ((-5 != (var_1_24 + last_1_var_1_27)) ? (var_1_36 ? (var_1_48 == ((unsigned short int) ((((var_1_30) > (((var_1_28 - var_1_26) + ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)))))) ? (var_1_30) : (((var_1_28 - var_1_26) + ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))))))))) : 1) : 1)) && ((var_1_29 <= var_1_6) ? (var_1_49 == ((double) (var_1_19 + var_1_18))) : (var_1_49 == ((double) ((((((((var_1_47) > (var_1_19)) ? (var_1_47) : (var_1_19)))) > ((var_1_21 + var_1_20))) ? (((((var_1_47) > (var_1_19)) ? (var_1_47) : (var_1_19)))) : ((var_1_21 + var_1_20)))))))) && ((var_1_22 < var_1_16) ? (((var_1_87 % ((((var_1_13) > (var_1_29)) ? (var_1_13) : (var_1_29)))) > var_1_30) ? (var_1_51 == ((unsigned short int) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_51))) : (var_1_51 == ((unsigned short int) (((((var_1_10) > (var_1_24)) ? (var_1_10) : (var_1_24))) + var_1_7)))) : ((var_1_15 || (var_1_22 > (5.2f + -0.2f))) ? ((var_1_25 != var_1_28) ? (var_1_51 == ((unsigned short int) ((((0) > (var_1_8)) ? (0) : (var_1_8))))) : ((var_1_75 != ((((var_1_16) < (var_1_41)) ? (var_1_16) : (var_1_41)))) ? (var_1_51 == ((unsigned short int) (var_1_6 - (var_1_28 - (var_1_53 - last_1_var_1_51))))) : (var_1_51 == ((unsigned short int) ((var_1_54 - (32 + var_1_29)) - ((((var_1_30) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_30) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))))))) : 1))) && ((var_1_9 != ((var_1_6 - var_1_29) * var_1_13)) ? (var_1_55 == ((signed short int) (var_1_29 - (16 + var_1_53)))) : 1)) && (((var_1_48 * var_1_6) <= var_1_10) ? (var_1_56 == ((unsigned short int) (var_1_54 - var_1_26))) : (var_1_56 == ((unsigned short int) (((((var_1_54 - var_1_26)) < (var_1_28)) ? ((var_1_54 - var_1_26)) : (var_1_28))))))) && ((var_1_96 > ((var_1_26 << var_1_30) ^ var_1_13)) ? (var_1_57 == ((float) (((var_1_58 + var_1_59) - var_1_21) + ((((var_1_60) < (var_1_22)) ? (var_1_60) : (var_1_22)))))) : (var_1_57 == ((float) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) && (var_1_37 ? (var_1_61 == ((signed short int) var_1_29)) : ((var_1_94 > ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) ? (var_1_61 == ((signed short int) (var_1_30 - (var_1_62 - var_1_99)))) : (var_1_61 == ((signed short int) ((((var_1_99 - ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29)))) < 0 ) ? -(var_1_99 - ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29)))) : (var_1_99 - ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))))))))))) && ((((((var_1_30) < (var_1_25)) ? (var_1_30) : (var_1_25))) <= ((((var_1_9) > (-1000)) ? (var_1_9) : (-1000)))) ? ((var_1_16 <= ((var_1_47 + var_1_59) / 9.999999996E8f)) ? (var_1_63 == ((signed long int) var_1_88)) : 1) : ((var_1_64 >= var_1_96) ? (var_1_63 == ((signed long int) (32 - var_1_25))) : 1))) && ((last_1_var_1_88 > ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))) ? ((last_1_var_1_98 || (var_1_36 && var_1_15)) ? (var_1_64 == ((unsigned short int) (var_1_6 - (var_1_26 + var_1_29)))) : ((last_1_var_1_88 >= var_1_30) ? (var_1_64 == ((unsigned short int) (var_1_29 + (1 + var_1_26)))) : 1)) : ((((var_1_21 / var_1_66) * last_1_var_1_49) < last_1_var_1_57) ? (var_1_64 == ((unsigned short int) ((((var_1_9) < (var_1_30)) ? (var_1_9) : (var_1_30))))) : (var_1_64 == ((unsigned short int) ((var_1_62 + (var_1_67 - last_1_var_1_88)) - var_1_7)))))) && (var_1_40 ? ((var_1_60 < var_1_32) ? (var_1_68 == ((unsigned char) (var_1_30 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))) : (var_1_68 == ((unsigned char) (var_1_69 - var_1_30)))) : (var_1_68 == ((unsigned char) (((((var_1_70 - (var_1_30 + var_1_71))) > ((var_1_69 - (var_1_72 + var_1_73)))) ? ((var_1_70 - (var_1_30 + var_1_71))) : ((var_1_69 - (var_1_72 + var_1_73))))))))) && (((var_1_56 * var_1_10) != var_1_7) ? (var_1_90 ? (var_1_74 == ((unsigned char) (128 - ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))))) : (((10 / var_1_13) < (var_1_72 - var_1_54)) ? (var_1_74 == ((unsigned char) (((((var_1_71) > ((var_1_72 + var_1_73))) ? (var_1_71) : ((var_1_72 + var_1_73)))) + (var_1_29 - var_1_30)))) : 1)) : 1)) && ((var_1_94 < 127.125) ? (var_1_75 == ((double) 256.2)) : (var_1_75 == ((double) (var_1_21 - var_1_22))))) && (var_1_76 == ((unsigned char) var_1_34))) && ((var_1_35 || var_1_76) ? (var_1_77 == ((unsigned char) var_1_69)) : (var_1_77 == ((unsigned char) var_1_29)))) && ((((((var_1_72) > (var_1_42)) ? (var_1_72) : (var_1_42))) >= (var_1_63 * (var_1_28 - var_1_64))) ? (var_1_78 == ((signed short int) (var_1_53 - var_1_30))) : ((var_1_28 != (var_1_65 >> (var_1_79 - var_1_80))) ? ((var_1_8 > ((var_1_99 * var_1_45) * var_1_95)) ? ((var_1_63 != var_1_56) ? ((var_1_12 && var_1_43) ? (var_1_78 == ((signed short int) ((((last_1_var_1_78) < 0 ) ? -(last_1_var_1_78) : (last_1_var_1_78))))) : (var_1_78 == ((signed short int) ((last_1_var_1_78 - var_1_69) + (var_1_42 + var_1_72))))) : ((var_1_13 >= ((((var_1_73) < (var_1_99)) ? (var_1_73) : (var_1_99)))) ? (var_1_78 == ((signed short int) (var_1_26 + (((((var_1_73) > (var_1_29)) ? (var_1_73) : (var_1_29))) + var_1_70)))) : 1)) : (var_1_78 == ((signed short int) (((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80))) - (var_1_62 - var_1_26))))) : 1))) && ((9.999999992E8 <= var_1_22) ? (var_1_85 == ((unsigned char) ((((var_1_79) < (var_1_30)) ? (var_1_79) : (var_1_30))))) : ((((var_1_99 * 5) + var_1_13) != (var_1_73 - var_1_28)) ? (var_1_85 == ((unsigned char) ((((var_1_72) > (var_1_80)) ? (var_1_72) : (var_1_80))))) : (var_1_85 == ((unsigned char) (((((var_1_71 + (var_1_29 - var_1_30))) > (var_1_73)) ? ((var_1_71 + (var_1_29 - var_1_30))) : (var_1_73)))))))) && (var_1_87 == ((signed long int) (var_1_8 - var_1_11)))) && ((((((last_1_var_1_64) < (((((var_1_54) > (var_1_30)) ? (var_1_54) : (var_1_30))))) ? (last_1_var_1_64) : (((((var_1_54) > (var_1_30)) ? (var_1_54) : (var_1_30)))))) == (last_1_var_1_44 | ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? ((! last_1_var_1_76) ? (var_1_88 == ((signed long int) (((((last_1_var_1_44 + last_1_var_1_63)) < (((((last_1_var_1_88) > (last_1_var_1_1)) ? (last_1_var_1_88) : (last_1_var_1_1))))) ? ((last_1_var_1_44 + last_1_var_1_63)) : (((((last_1_var_1_88) > (last_1_var_1_1)) ? (last_1_var_1_88) : (last_1_var_1_1)))))))) : 1) : 1)) && ((-32 < (2 << var_1_71)) ? (var_1_89 == ((signed short int) ((var_1_62 - var_1_56) - var_1_71))) : (var_1_89 == ((signed short int) (8 + var_1_70))))) && (var_1_37 ? ((var_1_92 != var_1_26) ? (((var_1_64 & (- var_1_96)) < var_1_56) ? (var_1_90 == ((unsigned char) (! var_1_40))) : (var_1_90 == ((unsigned char) var_1_40))) : (var_1_90 == ((unsigned char) (! 0)))) : 1)) && (((var_1_59 - var_1_58) < var_1_18) ? ((var_1_13 < ((((var_1_26) < ((var_1_80 - 2))) ? (var_1_26) : ((var_1_80 - 2))))) ? (var_1_91 == ((double) var_1_59)) : 1) : (var_1_91 == ((double) var_1_20)))) && (var_1_98 ? (var_1_92 == ((unsigned char) var_1_93)) : (var_1_92 == ((unsigned char) var_1_73)))) && (var_1_12 ? (var_1_94 == ((double) var_1_21)) : (var_1_94 == ((double) var_1_59)))) && (var_1_95 == ((unsigned short int) var_1_73))) && (var_1_36 ? (var_1_96 == ((signed long int) 200)) : (var_1_96 == ((signed long int) var_1_30)))) && (var_1_97 == ((unsigned short int) 5))) && (var_1_98 == ((unsigned char) var_1_40))) && (var_1_98 ? (var_1_99 == ((unsigned long int) var_1_24)) : (var_1_99 == ((unsigned long int) var_1_87)))) && (var_1_100 == ((double) var_1_20))) && (var_1_37 ? (var_1_101 == ((double) var_1_17)) : (var_1_101 == ((double) var_1_59)))) && ((var_1_56 < var_1_99) ? (var_1_102 == ((float) ((var_1_103 - var_1_58) - var_1_21))) : (var_1_102 == ((float) (((((((((var_1_22 - var_1_103)) > (var_1_58)) ? ((var_1_22 - var_1_103)) : (var_1_58)))) < (var_1_17)) ? ((((((var_1_22 - var_1_103)) > (var_1_58)) ? ((var_1_22 - var_1_103)) : (var_1_58)))) : (var_1_17))))))
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
