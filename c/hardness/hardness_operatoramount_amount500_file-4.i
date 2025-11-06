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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed short int var_1_4 = 31024;
signed short int var_1_5 = 4;
signed short int var_1_6 = 0;
signed short int var_1_7 = -16;
signed long int var_1_8 = 32;
unsigned short int var_1_9 = 41562;
signed short int var_1_10 = 64;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 64;
signed short int var_1_17 = 200;
signed short int var_1_18 = -100;
signed short int var_1_19 = 1;
signed short int var_1_20 = 32;
signed short int var_1_21 = 128;
signed char var_1_22 = 0;
float var_1_24 = 99.125;
signed char var_1_26 = 8;
signed char var_1_27 = 5;
unsigned long int var_1_28 = 0;
float var_1_29 = 127.5;
float var_1_30 = 1000000.8;
float var_1_31 = 9999999999999.4;
float var_1_32 = 10.6;
float var_1_33 = 127.5;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 8;
unsigned short int var_1_40 = 64;
unsigned char var_1_41 = 4;
unsigned char var_1_42 = 10;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 8;
float var_1_46 = 15.2;
float var_1_48 = 256.3;
float var_1_49 = 63.8;
float var_1_50 = 0.0;
float var_1_51 = 24.38;
float var_1_53 = 0.0;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
signed short int var_1_57 = -8;
float var_1_58 = 0.0;
unsigned char var_1_59 = 1;
signed char var_1_60 = 16;
unsigned long int var_1_61 = 32;
unsigned char var_1_62 = 4;
unsigned char var_1_63 = 128;
unsigned char var_1_64 = 128;
unsigned long int var_1_65 = 2;
unsigned short int var_1_66 = 45451;
unsigned long int var_1_67 = 2278310670;
signed short int var_1_68 = 28162;
unsigned long int var_1_69 = 1078709293;
unsigned long int var_1_70 = 128;
double var_1_71 = 128.5;
unsigned long int var_1_73 = 10;
unsigned long int var_1_74 = 1494779512;
unsigned char var_1_75 = 1;
unsigned short int var_1_77 = 4;
unsigned short int var_1_78 = 50;
unsigned short int var_1_79 = 10000;
signed short int var_1_80 = -32;
unsigned long int var_1_81 = 4;
unsigned long int var_1_82 = 1000000000;
unsigned char var_1_83 = 5;
unsigned char var_1_84 = 0;
double var_1_85 = 5.2;
double var_1_86 = 0.5;
unsigned char var_1_87 = 25;
signed long int var_1_88 = -32;
signed short int var_1_89 = -128;
signed short int var_1_90 = -50;
float var_1_91 = 256.5;
signed char var_1_92 = 4;
signed char var_1_93 = -4;
signed char var_1_94 = 2;
unsigned char var_1_95 = 0;
signed char var_1_96 = -32;
float var_1_97 = 3.25;
unsigned char var_1_98 = 16;
signed short int var_1_99 = 256;
unsigned char var_1_100 = 32;
double var_1_101 = 3.79;
signed short int last_1_var_1_1 = 16;
signed long int last_1_var_1_8 = 32;
unsigned long int last_1_var_1_16 = 64;
unsigned short int last_1_var_1_40 = 64;
unsigned char last_1_var_1_41 = 4;
unsigned char last_1_var_1_43 = 5;
float last_1_var_1_46 = 15.2;
unsigned long int last_1_var_1_61 = 32;
unsigned char last_1_var_1_62 = 4;
unsigned long int last_1_var_1_65 = 2;
double last_1_var_1_71 = 128.5;
unsigned long int last_1_var_1_73 = 10;
unsigned char last_1_var_1_75 = 1;
unsigned short int last_1_var_1_77 = 4;
unsigned long int last_1_var_1_81 = 4;
unsigned char last_1_var_1_87 = 25;
signed long int last_1_var_1_88 = -32;
float last_1_var_1_97 = 3.25;
signed short int last_1_var_1_99 = 256;
double last_1_var_1_101 = 3.79;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_20 = ~ ((((var_1_37) < (last_1_var_1_73)) ? (var_1_37) : (last_1_var_1_73)));
 if (stepLocal_20 >= (var_1_36 * (last_1_var_1_8 + last_1_var_1_1))) {
  if ((((((last_1_var_1_101) < 0 ) ? -(last_1_var_1_101) : (last_1_var_1_101))) - var_1_53) > (last_1_var_1_97 * last_1_var_1_71)) {
   var_1_54 = (var_1_55 || var_1_56);
  } else {
   var_1_54 = ((! var_1_55) && var_1_14);
  }
 }
 unsigned long int stepLocal_25 = 0u;
 signed long int stepLocal_24 = last_1_var_1_62 - (var_1_68 - var_1_64);
 unsigned long int stepLocal_23 = last_1_var_1_16;
 if (stepLocal_25 <= ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) {
  if ((((((last_1_var_1_81) > (var_1_9)) ? (last_1_var_1_81) : (var_1_9))) / (var_1_66 - var_1_4)) <= stepLocal_23) {
   var_1_65 = (((((((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) > (var_1_42)) ? (((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) : (var_1_42))) + last_1_var_1_77);
  } else {
   var_1_65 = (((((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) > (last_1_var_1_8)) ? ((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : (last_1_var_1_8)));
  }
 } else {
  if (stepLocal_24 <= -25) {
   if (last_1_var_1_46 < 16.6f) {
    var_1_65 = (((((last_1_var_1_77) > (var_1_36)) ? (last_1_var_1_77) : (var_1_36))) + (var_1_9 + ((((last_1_var_1_40) > (var_1_68)) ? (last_1_var_1_40) : (var_1_68)))));
   } else {
    var_1_65 = ((((last_1_var_1_41) > ((var_1_67 - (var_1_69 - var_1_6)))) ? (last_1_var_1_41) : ((var_1_67 - (var_1_69 - var_1_6)))));
   }
  }
 }
 unsigned long int stepLocal_34 = (last_1_var_1_99 + 32) + (500 - var_1_74);
 if (stepLocal_34 >= last_1_var_1_65) {
  var_1_85 = ((((var_1_32) < ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5)))) ? (var_1_32) : ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5)))));
 } else {
  var_1_85 = ((((((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) < (var_1_86)) ? (((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) : (var_1_86)));
 }
 if ((var_1_85 / var_1_53) < var_1_58) {
  var_1_71 = (((((var_1_50) > (2.75)) ? (var_1_50) : (2.75))) + var_1_51);
 }
 if (((last_1_var_1_61 / var_1_44) % var_1_38) <= var_1_64) {
  var_1_70 = (((((var_1_45) > (var_1_39)) ? (var_1_45) : (var_1_39))) + last_1_var_1_87);
 } else {
  var_1_70 = (var_1_67 - (var_1_69 - 25u));
 }
 var_1_15 = (! var_1_14);
 signed short int stepLocal_12 = var_1_6;
 if (var_1_21 >= stepLocal_12) {
  var_1_34 = (var_1_35 + (((((1 + var_1_36)) < (var_1_37)) ? ((1 + var_1_36)) : (var_1_37))));
 } else {
  var_1_34 = (((var_1_38 + 100) - ((((var_1_36) > (var_1_39)) ? (var_1_36) : (var_1_39)))) - var_1_37);
 }
 var_1_40 = var_1_4;
 var_1_59 = (! var_1_14);
 if (((((var_1_32) > (var_1_49)) ? (var_1_32) : (var_1_49))) <= (var_1_50 / var_1_58)) {
  var_1_60 = ((((var_1_42) > (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45))))) ? (var_1_42) : (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45))))));
 }
 var_1_81 = (var_1_67 - (var_1_64 + (var_1_82 - var_1_21)));
 if (var_1_31 > 32.5f) {
  var_1_88 = ((((last_1_var_1_88) < (-32)) ? (last_1_var_1_88) : (-32)));
 }
 var_1_91 = 64.75f;
 if (var_1_54) {
  var_1_93 = var_1_36;
 } else {
  var_1_93 = var_1_42;
 }
 var_1_95 = var_1_56;
 if (var_1_14) {
  var_1_97 = var_1_49;
 } else {
  var_1_97 = var_1_86;
 }
 if (var_1_13) {
  var_1_98 = 100;
 } else {
  var_1_98 = var_1_35;
 }
 if (var_1_59) {
  var_1_100 = var_1_44;
 } else {
  var_1_100 = var_1_35;
 }
 if (var_1_63 < var_1_70) {
  var_1_77 = ((((((((var_1_78) > (var_1_64)) ? (var_1_78) : (var_1_64)))) > (var_1_44)) ? (((((var_1_78) > (var_1_64)) ? (var_1_78) : (var_1_64)))) : (var_1_44)));
 } else {
  if ((var_1_51 + 31.8f) >= (var_1_85 + (var_1_24 + var_1_85))) {
   var_1_77 = (var_1_6 + (var_1_63 + (var_1_79 - var_1_45)));
  } else {
   var_1_77 = ((((var_1_44) < (var_1_35)) ? (var_1_44) : (var_1_35)));
  }
 }
 if (var_1_50 != var_1_71) {
  var_1_62 = (((((var_1_63 - var_1_37)) > ((var_1_64 - var_1_36))) ? ((var_1_63 - var_1_37)) : ((var_1_64 - var_1_36))));
 }
 unsigned long int stepLocal_5 = var_1_81;
 if (var_1_70 < stepLocal_5) {
  var_1_12 = (! var_1_13);
 } else {
  var_1_12 = (var_1_13 && var_1_14);
 }
 signed long int stepLocal_14 = (100 + var_1_38) - (var_1_44 - var_1_36);
 if (stepLocal_14 > (((((var_1_37 - last_1_var_1_43)) > (var_1_27)) ? ((var_1_37 - last_1_var_1_43)) : (var_1_27)))) {
  if (var_1_95) {
   var_1_43 = var_1_38;
  } else {
   var_1_43 = (var_1_36 + (var_1_44 - var_1_39));
  }
 } else {
  var_1_43 = ((var_1_44 + (var_1_38 - var_1_45)) - var_1_37);
 }
 if (var_1_12) {
  var_1_96 = var_1_39;
 } else {
  var_1_96 = var_1_36;
 }
 unsigned long int stepLocal_6 = (var_1_77 + 10u) * var_1_77;
 if (stepLocal_6 < ((var_1_5 / var_1_4) * ((((var_1_9) > (var_1_70)) ? (var_1_9) : (var_1_70))))) {
  var_1_16 = ((32u + var_1_5) + ((((var_1_77) < (var_1_6)) ? (var_1_77) : (var_1_6))));
 }
 unsigned long int stepLocal_26 = (((var_1_16) > (var_1_68)) ? (var_1_16) : (var_1_68));
 if ((var_1_20 + 5) < stepLocal_26) {
  var_1_73 = (256u + 16u);
 } else {
  var_1_73 = (var_1_69 + (var_1_74 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))));
 }
 unsigned long int stepLocal_8 = var_1_73 & var_1_18;
 signed short int stepLocal_7 = var_1_21;
 if (var_1_81 == stepLocal_8) {
  if (stepLocal_7 <= var_1_6) {
   var_1_28 = (3421856207u - (var_1_21 + (var_1_9 + var_1_4)));
  } else {
   if (var_1_13) {
    var_1_28 = (8u + var_1_21);
   } else {
    var_1_28 = ((var_1_5 + var_1_21) + var_1_4);
   }
  }
 }
 unsigned long int stepLocal_4 = var_1_73;
 signed long int stepLocal_3 = ((((64513) < (var_1_9)) ? (64513) : (var_1_9))) - var_1_4;
 if (var_1_4 <= stepLocal_4) {
  if (stepLocal_3 >= (5 * var_1_6)) {
   var_1_8 = ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)));
  } else {
   var_1_8 = (var_1_5 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))));
  }
 } else {
  var_1_8 = var_1_5;
 }
 if (var_1_13) {
  if ((var_1_4 - ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < (var_1_9 * var_1_16)) {
   var_1_17 = (((var_1_18 + var_1_19) + var_1_20) + var_1_5);
  }
 } else {
  var_1_17 = (((((-2) > (-128)) ? (-2) : (-128))) + (var_1_5 - (10000 - var_1_21)));
 }
 signed long int stepLocal_2 = var_1_88;
 signed long int stepLocal_1 = - var_1_88;
 unsigned long int stepLocal_0 = var_1_28 * (var_1_88 + var_1_4);
 if (var_1_28 <= stepLocal_2) {
  if (stepLocal_1 > var_1_28) {
   var_1_1 = ((var_1_4 - var_1_5) - var_1_6);
  }
 } else {
  if (stepLocal_0 > var_1_6) {
   var_1_1 = (var_1_5 + var_1_7);
  } else {
   var_1_1 = var_1_6;
  }
 }
 unsigned char stepLocal_11 = var_1_13;
 if (((var_1_73 * var_1_4) > var_1_81) && stepLocal_11) {
  var_1_33 = ((((var_1_31) < ((var_1_32 + 9.9999999999965E11f))) ? (var_1_31) : ((var_1_32 + 9.9999999999965E11f))));
 }
 if ((var_1_35 * var_1_28) <= var_1_88) {
  var_1_80 = ((((var_1_21) < (var_1_27)) ? (var_1_21) : (var_1_27)));
 } else {
  if (var_1_85 > 0.66f) {
   var_1_80 = (((((var_1_39) > (var_1_35)) ? (var_1_39) : (var_1_35))) + var_1_18);
  }
 }
 if (var_1_12) {
  if (var_1_54) {
   var_1_83 = (var_1_64 - var_1_37);
  } else {
   var_1_83 = (128 - 16);
  }
 } else {
  if (var_1_33 >= var_1_71) {
   var_1_83 = ((((var_1_39) < (var_1_45)) ? (var_1_39) : (var_1_45)));
  } else {
   var_1_83 = ((((var_1_35) < ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))) ? (var_1_35) : ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))));
  }
 }
 if (! (var_1_70 >= var_1_81)) {
  var_1_89 = ((((-128) < (((((var_1_21) > (var_1_17)) ? (var_1_21) : (var_1_17))))) ? (-128) : (((((var_1_21) > (var_1_17)) ? (var_1_21) : (var_1_17))))));
 }
 if (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) > var_1_6) {
  if (var_1_4 > var_1_7) {
   if ((var_1_9 >= (var_1_4 * var_1_70)) && var_1_95) {
    var_1_10 = (var_1_4 - 500);
   }
  } else {
   var_1_10 = var_1_4;
  }
 } else {
  var_1_10 = var_1_4;
 }
 signed short int stepLocal_13 = var_1_10;
 if (stepLocal_13 <= var_1_19) {
  if (var_1_59) {
   var_1_41 = ((var_1_36 + var_1_39) + var_1_37);
  } else {
   if (var_1_13) {
    var_1_41 = ((((var_1_39) > (var_1_37)) ? (var_1_39) : (var_1_37)));
   } else {
    var_1_41 = ((((((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) > (var_1_38)) ? (((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) : (var_1_38)));
   }
  }
 } else {
  var_1_41 = (var_1_37 + ((((var_1_36) > ((var_1_39 + var_1_42))) ? (var_1_36) : ((var_1_39 + var_1_42)))));
 }
 var_1_99 = var_1_89;
 unsigned char stepLocal_22 = var_1_45;
 signed short int stepLocal_21 = var_1_19;
 if (stepLocal_21 < 1) {
  var_1_61 = (((((var_1_42) < (var_1_4)) ? (var_1_42) : (var_1_4))) + ((((var_1_1) > (((((var_1_35) > (var_1_88)) ? (var_1_35) : (var_1_88))))) ? (var_1_1) : (((((var_1_35) > (var_1_88)) ? (var_1_35) : (var_1_88)))))));
 } else {
  if (stepLocal_22 > var_1_39) {
   var_1_61 = (var_1_5 + var_1_4);
  }
 }
 unsigned long int stepLocal_35 = var_1_61;
 if (var_1_85 <= var_1_32) {
  var_1_87 = ((((var_1_38) > (var_1_63)) ? (var_1_38) : (var_1_63)));
 } else {
  if (var_1_10 > stepLocal_35) {
   var_1_87 = (var_1_63 - var_1_45);
  }
 }
 unsigned long int stepLocal_10 = var_1_73;
 signed short int stepLocal_9 = var_1_89;
 if (stepLocal_10 == var_1_21) {
  var_1_29 = (var_1_30 + ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))));
 } else {
  if (stepLocal_9 < var_1_4) {
   var_1_29 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  } else {
   var_1_29 = var_1_32;
  }
 }
 unsigned char stepLocal_30 = var_1_83;
 unsigned long int stepLocal_29 = 4u;
 unsigned char stepLocal_28 = var_1_88 == (var_1_21 / var_1_64);
 unsigned long int stepLocal_27 = var_1_69;
 if (var_1_30 <= (var_1_51 * (var_1_85 * var_1_50))) {
  if (stepLocal_29 < var_1_61) {
   if (4 < stepLocal_27) {
    var_1_75 = (var_1_13 && var_1_56);
   }
  } else {
   if (var_1_42 != stepLocal_30) {
    if (var_1_13) {
     var_1_75 = ((var_1_61 == var_1_81) || var_1_14);
    } else {
     var_1_75 = (var_1_14 && (last_1_var_1_75 && var_1_56));
    }
   }
  }
 } else {
  if (stepLocal_28 || var_1_56) {
   var_1_75 = (((var_1_42 * var_1_81) > -32) && (! var_1_14));
  } else {
   var_1_75 = (var_1_59 || var_1_14);
  }
 }
 if (var_1_5 >= var_1_99) {
  if ((var_1_75 || var_1_95) && (1.6f > var_1_85)) {
   var_1_101 = var_1_30;
  } else {
   var_1_101 = (var_1_31 + (var_1_51 - var_1_50));
  }
 } else {
  var_1_101 = var_1_48;
 }
 unsigned char stepLocal_19 = var_1_13;
 signed short int stepLocal_18 = var_1_19;
 unsigned long int stepLocal_17 = var_1_65;
 unsigned long int stepLocal_16 = (((var_1_81) < (var_1_89)) ? (var_1_81) : (var_1_89));
 unsigned long int stepLocal_15 = var_1_73 + (2 - var_1_36);
 if (stepLocal_15 <= var_1_42) {
  if (var_1_39 < stepLocal_17) {
   var_1_46 = (((((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) > (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49))))) ? ((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) : (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49))))));
  } else {
   if (stepLocal_18 < var_1_27) {
    var_1_46 = (499.45f - ((var_1_50 - var_1_51) + var_1_48));
   } else {
    if (stepLocal_16 != (var_1_42 - var_1_35)) {
     var_1_46 = ((((var_1_30) < ((var_1_50 - (var_1_53 - var_1_48)))) ? (var_1_30) : ((var_1_50 - (var_1_53 - var_1_48)))));
    } else {
     if (var_1_12 && stepLocal_19) {
      var_1_46 = ((((var_1_51) < (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31)))))) ? (var_1_51) : (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31)))))));
     }
    }
   }
  }
 } else {
  if (var_1_85 <= var_1_32) {
   var_1_46 = ((((var_1_50 + var_1_48) < 0 ) ? -(var_1_50 + var_1_48) : (var_1_50 + var_1_48)));
  }
 }
 if ((var_1_101 * (var_1_24 - 255.7f)) == var_1_85) {
  var_1_22 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  var_1_22 = ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)));
 }
 if (var_1_46 != ((var_1_58 - var_1_50) - var_1_51)) {
  var_1_57 = ((var_1_45 + 5) + (var_1_36 + var_1_99));
 }
 unsigned long int stepLocal_33 = - var_1_65;
 unsigned long int stepLocal_32 = var_1_69;
 unsigned char stepLocal_31 = var_1_14;
 if (stepLocal_32 == var_1_81) {
  if (stepLocal_33 < var_1_82) {
   var_1_84 = (! var_1_56);
  } else {
   if (var_1_85 == (((((64.25) < (var_1_101)) ? (64.25) : (var_1_101))) + (- var_1_48))) {
    if ((var_1_80 < var_1_64) && stepLocal_31) {
     var_1_84 = var_1_13;
    }
   } else {
    var_1_84 = (var_1_14 && var_1_13);
   }
  }
 } else {
  if (var_1_85 <= (var_1_24 - var_1_58)) {
   var_1_84 = (! (! var_1_14));
  } else {
   var_1_84 = (var_1_14 && var_1_13);
  }
 }
 unsigned char stepLocal_38 = var_1_15;
 unsigned char stepLocal_37 = var_1_13;
 unsigned char stepLocal_36 = var_1_64;
 if (stepLocal_38 || var_1_56) {
  var_1_90 = (((((((((var_1_20) < (-16)) ? (var_1_20) : (-16))) + var_1_77)) > (var_1_18)) ? ((((((var_1_20) < (-16)) ? (var_1_20) : (-16))) + var_1_77)) : (var_1_18)));
 } else {
  if ((var_1_57 == (var_1_45 << var_1_4)) && stepLocal_37) {
   var_1_90 = (((((var_1_19 + var_1_64)) > (var_1_42)) ? ((var_1_19 + var_1_64)) : (var_1_42)));
  } else {
   if (var_1_71 < var_1_91) {
    if ((- var_1_73) < stepLocal_36) {
     if (var_1_49 != var_1_86) {
      if (var_1_13) {
       var_1_90 = ((var_1_81 + (var_1_100 + var_1_16)) + var_1_27);
      } else {
       var_1_90 = ((((var_1_57) > (var_1_19)) ? (var_1_57) : (var_1_19)));
      }
     } else {
      var_1_90 = var_1_77;
     }
    } else {
     var_1_90 = var_1_64;
    }
   }
  }
 }
 if (var_1_84) {
  var_1_92 = var_1_42;
 } else {
  var_1_92 = var_1_36;
 }
 if (var_1_75) {
  var_1_94 = var_1_27;
 } else {
  var_1_94 = var_1_39;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 16382);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -4095);
 assume_abort_if_not(var_1_18 <= 4096);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -4095);
 assume_abort_if_not(var_1_19 <= 4096);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -8191);
 assume_abort_if_not(var_1_20 <= 8191);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 8191);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -126);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 95);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 63);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 31);
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854766000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 2305843.009213691400e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 4611686.018427383000e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 4611686.018427388000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 127);
 assume_abort_if_not(var_1_63 <= 254);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 127);
 assume_abort_if_not(var_1_64 <= 254);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 32767);
 assume_abort_if_not(var_1_66 <= 65535);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 2147483647);
 assume_abort_if_not(var_1_67 <= 4294967294);
 var_1_68 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_68 >= 16383);
 assume_abort_if_not(var_1_68 <= 32767);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 1073741823);
 assume_abort_if_not(var_1_69 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 1073741823);
 assume_abort_if_not(var_1_74 <= 2147483647);
 var_1_78 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 65534);
 var_1_79 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_79 >= 8191);
 assume_abort_if_not(var_1_79 <= 16383);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 536870911);
 assume_abort_if_not(var_1_82 <= 1073741823);
 var_1_86 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_86 >= -922337.2036854766000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854766000e+12F && var_1_86 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_101 = var_1_101;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_28 <= var_1_88) ? (((- var_1_88) > var_1_28) ? (var_1_1 == ((signed short int) ((var_1_4 - var_1_5) - var_1_6))) : 1) : (((var_1_28 * (var_1_88 + var_1_4)) > var_1_6) ? (var_1_1 == ((signed short int) (var_1_5 + var_1_7))) : (var_1_1 == ((signed short int) var_1_6)))) && ((var_1_4 <= var_1_73) ? (((((((64513) < (var_1_9)) ? (64513) : (var_1_9))) - var_1_4) >= (5 * var_1_6)) ? (var_1_8 == ((signed long int) ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) : (var_1_8 == ((signed long int) (var_1_5 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) : (var_1_8 == ((signed long int) var_1_5)))) && ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) > var_1_6) ? ((var_1_4 > var_1_7) ? (((var_1_9 >= (var_1_4 * var_1_70)) && var_1_95) ? (var_1_10 == ((signed short int) (var_1_4 - 500))) : 1) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_4)))) && ((var_1_70 < var_1_81) ? (var_1_12 == ((unsigned char) (! var_1_13))) : (var_1_12 == ((unsigned char) (var_1_13 && var_1_14))))) && (var_1_15 == ((unsigned char) (! var_1_14)))) && ((((var_1_77 + 10u) * var_1_77) < ((var_1_5 / var_1_4) * ((((var_1_9) > (var_1_70)) ? (var_1_9) : (var_1_70))))) ? (var_1_16 == ((unsigned long int) ((32u + var_1_5) + ((((var_1_77) < (var_1_6)) ? (var_1_77) : (var_1_6)))))) : 1)) && (var_1_13 ? (((var_1_4 - ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < (var_1_9 * var_1_16)) ? (var_1_17 == ((signed short int) (((var_1_18 + var_1_19) + var_1_20) + var_1_5))) : 1) : (var_1_17 == ((signed short int) (((((-2) > (-128)) ? (-2) : (-128))) + (var_1_5 - (10000 - var_1_21))))))) && (((var_1_101 * (var_1_24 - 255.7f)) == var_1_85) ? (var_1_22 == ((signed char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : (var_1_22 == ((signed char) ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))))) && ((var_1_81 == (var_1_73 & var_1_18)) ? ((var_1_21 <= var_1_6) ? (var_1_28 == ((unsigned long int) (3421856207u - (var_1_21 + (var_1_9 + var_1_4))))) : (var_1_13 ? (var_1_28 == ((unsigned long int) (8u + var_1_21))) : (var_1_28 == ((unsigned long int) ((var_1_5 + var_1_21) + var_1_4))))) : 1)) && ((var_1_73 == var_1_21) ? (var_1_29 == ((float) (var_1_30 + ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))))) : ((var_1_89 < var_1_4) ? (var_1_29 == ((float) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) : (var_1_29 == ((float) var_1_32))))) && ((((var_1_73 * var_1_4) > var_1_81) && var_1_13) ? (var_1_33 == ((float) ((((var_1_31) < ((var_1_32 + 9.9999999999965E11f))) ? (var_1_31) : ((var_1_32 + 9.9999999999965E11f)))))) : 1)) && ((var_1_21 >= var_1_6) ? (var_1_34 == ((unsigned char) (var_1_35 + (((((1 + var_1_36)) < (var_1_37)) ? ((1 + var_1_36)) : (var_1_37)))))) : (var_1_34 == ((unsigned char) (((var_1_38 + 100) - ((((var_1_36) > (var_1_39)) ? (var_1_36) : (var_1_39)))) - var_1_37))))) && (var_1_40 == ((unsigned short int) var_1_4))) && ((var_1_10 <= var_1_19) ? (var_1_59 ? (var_1_41 == ((unsigned char) ((var_1_36 + var_1_39) + var_1_37))) : (var_1_13 ? (var_1_41 == ((unsigned char) ((((var_1_39) > (var_1_37)) ? (var_1_39) : (var_1_37))))) : (var_1_41 == ((unsigned char) ((((((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) > (var_1_38)) ? (((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) : (var_1_38))))))) : (var_1_41 == ((unsigned char) (var_1_37 + ((((var_1_36) > ((var_1_39 + var_1_42))) ? (var_1_36) : ((var_1_39 + var_1_42))))))))) && ((((100 + var_1_38) - (var_1_44 - var_1_36)) > (((((var_1_37 - last_1_var_1_43)) > (var_1_27)) ? ((var_1_37 - last_1_var_1_43)) : (var_1_27)))) ? (var_1_95 ? (var_1_43 == ((unsigned char) var_1_38)) : (var_1_43 == ((unsigned char) (var_1_36 + (var_1_44 - var_1_39))))) : (var_1_43 == ((unsigned char) ((var_1_44 + (var_1_38 - var_1_45)) - var_1_37))))) && (((var_1_73 + (2 - var_1_36)) <= var_1_42) ? ((var_1_39 < var_1_65) ? (var_1_46 == ((float) (((((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) > (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49))))) ? ((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) : (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49)))))))) : ((var_1_19 < var_1_27) ? (var_1_46 == ((float) (499.45f - ((var_1_50 - var_1_51) + var_1_48)))) : ((((((var_1_81) < (var_1_89)) ? (var_1_81) : (var_1_89))) != (var_1_42 - var_1_35)) ? (var_1_46 == ((float) ((((var_1_30) < ((var_1_50 - (var_1_53 - var_1_48)))) ? (var_1_30) : ((var_1_50 - (var_1_53 - var_1_48))))))) : ((var_1_12 && var_1_13) ? (var_1_46 == ((float) ((((var_1_51) < (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31)))))) ? (var_1_51) : (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31))))))))) : 1)))) : ((var_1_85 <= var_1_32) ? (var_1_46 == ((float) ((((var_1_50 + var_1_48) < 0 ) ? -(var_1_50 + var_1_48) : (var_1_50 + var_1_48))))) : 1))) && (((~ ((((var_1_37) < (last_1_var_1_73)) ? (var_1_37) : (last_1_var_1_73)))) >= (var_1_36 * (last_1_var_1_8 + last_1_var_1_1))) ? (((((((last_1_var_1_101) < 0 ) ? -(last_1_var_1_101) : (last_1_var_1_101))) - var_1_53) > (last_1_var_1_97 * last_1_var_1_71)) ? (var_1_54 == ((unsigned char) (var_1_55 || var_1_56))) : (var_1_54 == ((unsigned char) ((! var_1_55) && var_1_14)))) : 1)) && ((var_1_46 != ((var_1_58 - var_1_50) - var_1_51)) ? (var_1_57 == ((signed short int) ((var_1_45 + 5) + (var_1_36 + var_1_99)))) : 1)) && (var_1_59 == ((unsigned char) (! var_1_14)))) && ((((((var_1_32) > (var_1_49)) ? (var_1_32) : (var_1_49))) <= (var_1_50 / var_1_58)) ? (var_1_60 == ((signed char) ((((var_1_42) > (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45))))) ? (var_1_42) : (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45)))))))) : 1)) && ((var_1_19 < 1) ? (var_1_61 == ((unsigned long int) (((((var_1_42) < (var_1_4)) ? (var_1_42) : (var_1_4))) + ((((var_1_1) > (((((var_1_35) > (var_1_88)) ? (var_1_35) : (var_1_88))))) ? (var_1_1) : (((((var_1_35) > (var_1_88)) ? (var_1_35) : (var_1_88))))))))) : ((var_1_45 > var_1_39) ? (var_1_61 == ((unsigned long int) (var_1_5 + var_1_4))) : 1))) && ((var_1_50 != var_1_71) ? (var_1_62 == ((unsigned char) (((((var_1_63 - var_1_37)) > ((var_1_64 - var_1_36))) ? ((var_1_63 - var_1_37)) : ((var_1_64 - var_1_36)))))) : 1)) && ((0u <= ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) ? (((((((last_1_var_1_81) > (var_1_9)) ? (last_1_var_1_81) : (var_1_9))) / (var_1_66 - var_1_4)) <= last_1_var_1_16) ? (var_1_65 == ((unsigned long int) (((((((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) > (var_1_42)) ? (((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) : (var_1_42))) + last_1_var_1_77))) : (var_1_65 == ((unsigned long int) (((((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) > (last_1_var_1_8)) ? ((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : (last_1_var_1_8)))))) : (((last_1_var_1_62 - (var_1_68 - var_1_64)) <= -25) ? ((last_1_var_1_46 < 16.6f) ? (var_1_65 == ((unsigned long int) (((((last_1_var_1_77) > (var_1_36)) ? (last_1_var_1_77) : (var_1_36))) + (var_1_9 + ((((last_1_var_1_40) > (var_1_68)) ? (last_1_var_1_40) : (var_1_68))))))) : (var_1_65 == ((unsigned long int) ((((last_1_var_1_41) > ((var_1_67 - (var_1_69 - var_1_6)))) ? (last_1_var_1_41) : ((var_1_67 - (var_1_69 - var_1_6)))))))) : 1))) && ((((last_1_var_1_61 / var_1_44) % var_1_38) <= var_1_64) ? (var_1_70 == ((unsigned long int) (((((var_1_45) > (var_1_39)) ? (var_1_45) : (var_1_39))) + last_1_var_1_87))) : (var_1_70 == ((unsigned long int) (var_1_67 - (var_1_69 - 25u)))))) && (((var_1_85 / var_1_53) < var_1_58) ? (var_1_71 == ((double) (((((var_1_50) > (2.75)) ? (var_1_50) : (2.75))) + var_1_51))) : 1)) && (((var_1_20 + 5) < ((((var_1_16) > (var_1_68)) ? (var_1_16) : (var_1_68)))) ? (var_1_73 == ((unsigned long int) (256u + 16u))) : (var_1_73 == ((unsigned long int) (var_1_69 + (var_1_74 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))))) && ((var_1_30 <= (var_1_51 * (var_1_85 * var_1_50))) ? ((4u < var_1_61) ? ((4 < var_1_69) ? (var_1_75 == ((unsigned char) (var_1_13 && var_1_56))) : 1) : ((var_1_42 != var_1_83) ? (var_1_13 ? (var_1_75 == ((unsigned char) ((var_1_61 == var_1_81) || var_1_14))) : (var_1_75 == ((unsigned char) (var_1_14 && (last_1_var_1_75 && var_1_56))))) : 1)) : (((var_1_88 == (var_1_21 / var_1_64)) || var_1_56) ? (var_1_75 == ((unsigned char) (((var_1_42 * var_1_81) > -32) && (! var_1_14)))) : (var_1_75 == ((unsigned char) (var_1_59 || var_1_14)))))) && ((var_1_63 < var_1_70) ? (var_1_77 == ((unsigned short int) ((((((((var_1_78) > (var_1_64)) ? (var_1_78) : (var_1_64)))) > (var_1_44)) ? (((((var_1_78) > (var_1_64)) ? (var_1_78) : (var_1_64)))) : (var_1_44))))) : (((var_1_51 + 31.8f) >= (var_1_85 + (var_1_24 + var_1_85))) ? (var_1_77 == ((unsigned short int) (var_1_6 + (var_1_63 + (var_1_79 - var_1_45))))) : (var_1_77 == ((unsigned short int) ((((var_1_44) < (var_1_35)) ? (var_1_44) : (var_1_35)))))))) && (((var_1_35 * var_1_28) <= var_1_88) ? (var_1_80 == ((signed short int) ((((var_1_21) < (var_1_27)) ? (var_1_21) : (var_1_27))))) : ((var_1_85 > 0.66f) ? (var_1_80 == ((signed short int) (((((var_1_39) > (var_1_35)) ? (var_1_39) : (var_1_35))) + var_1_18))) : 1))) && (var_1_81 == ((unsigned long int) (var_1_67 - (var_1_64 + (var_1_82 - var_1_21)))))) && (var_1_12 ? (var_1_54 ? (var_1_83 == ((unsigned char) (var_1_64 - var_1_37))) : (var_1_83 == ((unsigned char) (128 - 16)))) : ((var_1_33 >= var_1_71) ? (var_1_83 == ((unsigned char) ((((var_1_39) < (var_1_45)) ? (var_1_39) : (var_1_45))))) : (var_1_83 == ((unsigned char) ((((var_1_35) < ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))) ? (var_1_35) : ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))))))))) && ((var_1_69 == var_1_81) ? (((- var_1_65) < var_1_82) ? (var_1_84 == ((unsigned char) (! var_1_56))) : ((var_1_85 == (((((64.25) < (var_1_101)) ? (64.25) : (var_1_101))) + (- var_1_48))) ? (((var_1_80 < var_1_64) && var_1_14) ? (var_1_84 == ((unsigned char) var_1_13)) : 1) : (var_1_84 == ((unsigned char) (var_1_14 && var_1_13))))) : ((var_1_85 <= (var_1_24 - var_1_58)) ? (var_1_84 == ((unsigned char) (! (! var_1_14)))) : (var_1_84 == ((unsigned char) (var_1_14 && var_1_13)))))) && ((((last_1_var_1_99 + 32) + (500 - var_1_74)) >= last_1_var_1_65) ? (var_1_85 == ((double) ((((var_1_32) < ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5)))) ? (var_1_32) : ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5))))))) : (var_1_85 == ((double) ((((((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) < (var_1_86)) ? (((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) : (var_1_86))))))) && ((var_1_85 <= var_1_32) ? (var_1_87 == ((unsigned char) ((((var_1_38) > (var_1_63)) ? (var_1_38) : (var_1_63))))) : ((var_1_10 > var_1_61) ? (var_1_87 == ((unsigned char) (var_1_63 - var_1_45))) : 1))) && ((var_1_31 > 32.5f) ? (var_1_88 == ((signed long int) ((((last_1_var_1_88) < (-32)) ? (last_1_var_1_88) : (-32))))) : 1)) && ((! (var_1_70 >= var_1_81)) ? (var_1_89 == ((signed short int) ((((-128) < (((((var_1_21) > (var_1_17)) ? (var_1_21) : (var_1_17))))) ? (-128) : (((((var_1_21) > (var_1_17)) ? (var_1_21) : (var_1_17)))))))) : 1)) && ((var_1_15 || var_1_56) ? (var_1_90 == ((signed short int) (((((((((var_1_20) < (-16)) ? (var_1_20) : (-16))) + var_1_77)) > (var_1_18)) ? ((((((var_1_20) < (-16)) ? (var_1_20) : (-16))) + var_1_77)) : (var_1_18))))) : (((var_1_57 == (var_1_45 << var_1_4)) && var_1_13) ? (var_1_90 == ((signed short int) (((((var_1_19 + var_1_64)) > (var_1_42)) ? ((var_1_19 + var_1_64)) : (var_1_42))))) : ((var_1_71 < var_1_91) ? (((- var_1_73) < var_1_64) ? ((var_1_49 != var_1_86) ? (var_1_13 ? (var_1_90 == ((signed short int) ((var_1_81 + (var_1_100 + var_1_16)) + var_1_27))) : (var_1_90 == ((signed short int) ((((var_1_57) > (var_1_19)) ? (var_1_57) : (var_1_19)))))) : (var_1_90 == ((signed short int) var_1_77))) : (var_1_90 == ((signed short int) var_1_64))) : 1)))) && (var_1_91 == ((float) 64.75f))) && (var_1_84 ? (var_1_92 == ((signed char) var_1_42)) : (var_1_92 == ((signed char) var_1_36)))) && (var_1_54 ? (var_1_93 == ((signed char) var_1_36)) : (var_1_93 == ((signed char) var_1_42)))) && (var_1_75 ? (var_1_94 == ((signed char) var_1_27)) : (var_1_94 == ((signed char) var_1_39)))) && (var_1_95 == ((unsigned char) var_1_56))) && (var_1_12 ? (var_1_96 == ((signed char) var_1_39)) : (var_1_96 == ((signed char) var_1_36)))) && (var_1_14 ? (var_1_97 == ((float) var_1_49)) : (var_1_97 == ((float) var_1_86)))) && (var_1_13 ? (var_1_98 == ((unsigned char) 100)) : (var_1_98 == ((unsigned char) var_1_35)))) && (var_1_99 == ((signed short int) var_1_89))) && (var_1_59 ? (var_1_100 == ((unsigned char) var_1_44)) : (var_1_100 == ((unsigned char) var_1_35)))) && ((var_1_5 >= var_1_99) ? (((var_1_75 || var_1_95) && (1.6f > var_1_85)) ? (var_1_101 == ((double) var_1_30)) : (var_1_101 == ((double) (var_1_31 + (var_1_51 - var_1_50))))) : (var_1_101 == ((double) var_1_48)))
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
