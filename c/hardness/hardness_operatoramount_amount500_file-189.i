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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 4.875;
float var_1_5 = 63.75;
float var_1_6 = 4.625;
unsigned long int var_1_7 = 64;
unsigned short int var_1_8 = 60381;
unsigned short int var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 8;
signed long int var_1_15 = 0;
signed char var_1_16 = -128;
signed char var_1_19 = -64;
unsigned long int var_1_20 = 2216424725;
signed char var_1_21 = 5;
signed char var_1_22 = 1;
unsigned char var_1_23 = 0;
signed char var_1_24 = 2;
signed char var_1_25 = 0;
signed char var_1_26 = 5;
signed char var_1_27 = -5;
signed char var_1_28 = 100;
signed short int var_1_29 = -4;
unsigned char var_1_30 = 100;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 128;
signed short int var_1_35 = 64;
unsigned char var_1_36 = 32;
unsigned short int var_1_37 = 200;
unsigned short int var_1_38 = 51740;
unsigned short int var_1_39 = 10000;
signed short int var_1_40 = 0;
float var_1_41 = 127.802;
float var_1_42 = 8.4;
float var_1_43 = 16.5;
float var_1_44 = 49.125;
float var_1_45 = 4.75;
unsigned char var_1_46 = 64;
signed char var_1_47 = -32;
unsigned short int var_1_48 = 256;
signed long int var_1_49 = -100;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
double var_1_54 = 500.4;
signed char var_1_55 = 100;
signed long int var_1_56 = -5;
signed long int var_1_57 = 2054338630;
double var_1_58 = 3.25;
signed short int var_1_59 = 50;
signed short int var_1_61 = 26976;
unsigned char var_1_62 = 0;
unsigned long int var_1_63 = 1;
unsigned long int var_1_65 = 4151929523;
unsigned char var_1_66 = 16;
unsigned char var_1_67 = 100;
unsigned char var_1_68 = 8;
unsigned char var_1_69 = 200;
float var_1_70 = 999999999.3;
float var_1_71 = 199.75;
float var_1_72 = 4.5;
double var_1_73 = 7.25;
double var_1_74 = 0.0;
signed long int var_1_75 = -1000;
signed long int var_1_76 = -256;
unsigned char var_1_77 = 1;
signed long int var_1_78 = -16;
signed char var_1_80 = -128;
signed char var_1_81 = 32;
signed char var_1_82 = 8;
signed char var_1_84 = 64;
signed char var_1_86 = 5;
signed short int var_1_87 = 100;
signed short int var_1_88 = 32;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 1;
float var_1_91 = 255.9;
unsigned char var_1_92 = 0;
signed short int var_1_93 = 32;
signed short int var_1_95 = 16;
double var_1_96 = 3.25;
unsigned long int var_1_97 = 50;
unsigned long int var_1_98 = 100;
unsigned long int var_1_99 = 32;
unsigned short int var_1_100 = 5;
unsigned char var_1_101 = 1;
float var_1_102 = -0.9;
double var_1_103 = 16.5;
unsigned char var_1_104 = 50;
signed short int var_1_105 = -32;
unsigned char var_1_106 = 1;
signed long int var_1_107 = -8;
float var_1_108 = 32.5;
unsigned char var_1_109 = 2;
unsigned long int last_1_var_1_7 = 64;
signed long int last_1_var_1_13 = 8;
unsigned char last_1_var_1_30 = 100;
signed short int last_1_var_1_40 = 0;
unsigned char last_1_var_1_50 = 0;
double last_1_var_1_54 = 500.4;
signed long int last_1_var_1_56 = -5;
signed short int last_1_var_1_59 = 50;
unsigned char last_1_var_1_62 = 0;
float last_1_var_1_70 = 999999999.3;
float last_1_var_1_91 = 255.9;
signed short int last_1_var_1_93 = 32;
unsigned short int last_1_var_1_100 = 5;
unsigned char last_1_var_1_101 = 1;
unsigned char last_1_var_1_106 = 1;
signed long int last_1_var_1_107 = -8;
unsigned char last_1_var_1_109 = 2;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_91 < ((((last_1_var_1_70) < 0 ) ? -(last_1_var_1_70) : (last_1_var_1_70)))) {
  var_1_63 = ((var_1_65 - 100u) - last_1_var_1_109);
 } else {
  var_1_63 = (((((128u) < (var_1_26)) ? (128u) : (var_1_26))) + var_1_32);
 }
 signed long int stepLocal_11 = (((4) > (-2)) ? (4) : (-2));
 if (var_1_12) {
  var_1_76 = (var_1_9 - last_1_var_1_56);
 } else {
  if (((var_1_61 - var_1_39) << var_1_22) < stepLocal_11) {
   var_1_76 = (var_1_25 + last_1_var_1_30);
  } else {
   var_1_76 = ((((var_1_69 - 4) < 0 ) ? -(var_1_69 - 4) : (var_1_69 - 4)));
  }
 }
 if (var_1_5 <= var_1_42) {
  if (last_1_var_1_106) {
   if (((~ 256) + last_1_var_1_107) > last_1_var_1_7) {
    if (var_1_39 == last_1_var_1_13) {
     if (var_1_25 >= last_1_var_1_100) {
      var_1_59 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
     } else {
      var_1_59 = (var_1_27 + var_1_32);
     }
    }
   } else {
    if (! last_1_var_1_101) {
     var_1_59 = (((((var_1_28) > (last_1_var_1_59)) ? (var_1_28) : (last_1_var_1_59))) - ((((var_1_33) < ((var_1_61 - 2))) ? (var_1_33) : ((var_1_61 - 2)))));
    } else {
     var_1_59 = ((((-128) < 0 ) ? -(-128) : (-128)));
    }
   }
  }
 }
 if (var_1_51) {
  var_1_105 = var_1_59;
 }
 if (last_1_var_1_50) {
  if (last_1_var_1_62) {
   var_1_10 = ((! 1) || (! var_1_11));
  }
 } else {
  var_1_10 = (! var_1_12);
 }
 var_1_23 = (! var_1_12);
 if (var_1_10) {
  var_1_24 = ((var_1_25 - var_1_26) + var_1_27);
 } else {
  if (var_1_10) {
   var_1_24 = (var_1_27 + var_1_26);
  } else {
   var_1_24 = ((var_1_28 - var_1_26) - var_1_22);
  }
 }
 var_1_36 = ((((16) < (var_1_26)) ? (16) : (var_1_26)));
 var_1_48 = ((((var_1_22 + 16) < 0 ) ? -(var_1_22 + 16) : (var_1_22 + 16)));
 var_1_52 = ((var_1_12 || var_1_51) || (var_1_11 && var_1_53));
 var_1_62 = (var_1_51 || var_1_11);
 signed long int stepLocal_17 = var_1_15;
 if (stepLocal_17 >= (var_1_34 - var_1_9)) {
  var_1_89 = (var_1_11 && var_1_90);
 } else {
  var_1_89 = ((! 1) || var_1_90);
 }
 var_1_92 = (! var_1_90);
 var_1_96 = var_1_72;
 if (var_1_89) {
  var_1_97 = var_1_98;
 }
 if (var_1_23) {
  var_1_99 = var_1_98;
 }
 var_1_101 = var_1_12;
 if (var_1_52) {
  var_1_102 = var_1_45;
 } else {
  var_1_102 = var_1_74;
 }
 if (var_1_92) {
  var_1_103 = var_1_6;
 } else {
  var_1_103 = var_1_71;
 }
 if (var_1_90) {
  var_1_106 = 0;
 } else {
  var_1_106 = var_1_11;
 }
 unsigned char stepLocal_19 = var_1_23;
 signed short int stepLocal_18 = var_1_61;
 if (stepLocal_18 > (var_1_26 + var_1_20)) {
  var_1_108 = (8.4f - var_1_71);
 } else {
  if (stepLocal_19 && var_1_106) {
   var_1_108 = var_1_6;
  } else {
   var_1_108 = var_1_45;
  }
 }
 var_1_109 = var_1_22;
 if (((((1) < (var_1_25)) ? (1) : (var_1_25))) >= ((var_1_99 + var_1_48) - var_1_32)) {
  if (var_1_6 <= ((var_1_43 + var_1_96) + (var_1_5 - var_1_44))) {
   var_1_58 = ((((8.625) < (var_1_42)) ? (8.625) : (var_1_42)));
  } else {
   if (((((var_1_63) > ((var_1_34 - 5))) ? (var_1_63) : ((var_1_34 - 5)))) >= var_1_76) {
    var_1_58 = (((((var_1_44) > (var_1_42)) ? (var_1_44) : (var_1_42))) + ((((var_1_6) < (((((2.8) < (0.25)) ? (2.8) : (0.25))))) ? (var_1_6) : (((((2.8) < (0.25)) ? (2.8) : (0.25)))))));
   } else {
    var_1_58 = (var_1_6 + (var_1_43 + 1.75));
   }
  }
 }
 var_1_75 = ((((var_1_105) < ((var_1_57 - 128))) ? (var_1_105) : ((var_1_57 - 128))));
 if (! var_1_10) {
  if ((var_1_8 - var_1_9) < var_1_48) {
   var_1_7 = var_1_8;
  }
 }
 if (var_1_9 == var_1_8) {
  if (var_1_101) {
   var_1_29 = (var_1_22 - 5);
  }
 }
 if (var_1_12) {
  if (4.9f == var_1_45) {
   if (-4 > var_1_15) {
    var_1_47 = ((((var_1_26 - var_1_28) < 0 ) ? -(var_1_26 - var_1_28) : (var_1_26 - var_1_28)));
   } else {
    var_1_47 = (var_1_21 - var_1_22);
   }
  } else {
   var_1_47 = (-2 + var_1_27);
  }
 } else {
  if (var_1_7 >= (var_1_26 * var_1_32)) {
   var_1_47 = (var_1_28 - var_1_26);
  } else {
   var_1_47 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
  }
 }
 unsigned char stepLocal_6 = var_1_52;
 if ((last_1_var_1_54 > var_1_96) && stepLocal_6) {
  var_1_54 = ((var_1_44 + var_1_43) + var_1_5);
 } else {
  var_1_54 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 }
 if (var_1_54 <= -0.2) {
  if (var_1_53) {
   var_1_77 = var_1_26;
  } else {
   var_1_77 = (var_1_34 - var_1_67);
  }
 } else {
  var_1_77 = var_1_69;
 }
 unsigned long int stepLocal_16 = var_1_99;
 if ((var_1_32 | var_1_69) >= stepLocal_16) {
  var_1_87 = (var_1_39 - var_1_88);
 }
 if (var_1_54 >= var_1_5) {
  var_1_91 = (var_1_72 - var_1_5);
 } else {
  var_1_91 = (var_1_43 - var_1_44);
 }
 if (((var_1_7 <= var_1_97) || var_1_89) && var_1_89) {
  if (var_1_8 >= (var_1_65 % var_1_34)) {
   if (var_1_23 && var_1_51) {
    var_1_93 = ((((last_1_var_1_93) < (var_1_95)) ? (last_1_var_1_93) : (var_1_95)));
   } else {
    var_1_93 = (((((var_1_7) > (var_1_99)) ? (var_1_7) : (var_1_99))) + var_1_21);
   }
  } else {
   if (var_1_7 >= var_1_63) {
    var_1_93 = (var_1_99 + var_1_67);
   } else {
    var_1_93 = var_1_95;
   }
  }
 }
 if (var_1_6 < var_1_54) {
  if (var_1_96 >= var_1_6) {
   var_1_13 = (var_1_63 - var_1_9);
  } else {
   var_1_13 = (var_1_63 - var_1_8);
  }
 } else {
  var_1_13 = (var_1_9 + var_1_15);
 }
 if (! var_1_11) {
  if (var_1_8 == var_1_28) {
   if (var_1_34 == var_1_77) {
    var_1_41 = (((((var_1_6) < (((((10.5f) > (var_1_5)) ? (10.5f) : (var_1_5))))) ? (var_1_6) : (((((10.5f) > (var_1_5)) ? (10.5f) : (var_1_5)))))) + (var_1_42 + (var_1_43 - var_1_44)));
   } else {
    var_1_41 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
   }
  } else {
   if (var_1_13 >= var_1_27) {
    var_1_41 = var_1_42;
   } else {
    var_1_41 = var_1_6;
   }
  }
 } else {
  var_1_41 = var_1_45;
 }
 if (((((-0.6f) > (3.025f)) ? (-0.6f) : (3.025f))) < var_1_41) {
  if (var_1_97 <= var_1_68) {
   if (var_1_72 == (var_1_96 / var_1_74)) {
    var_1_80 = (var_1_68 + (((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25))) - var_1_81));
   } else {
    var_1_80 = var_1_26;
   }
  } else {
   var_1_80 = var_1_28;
  }
 } else {
  var_1_80 = ((var_1_81 - var_1_68) + var_1_26);
 }
 unsigned long int stepLocal_5 = var_1_20 * (var_1_9 / var_1_33);
 unsigned long int stepLocal_4 = var_1_63;
 if (var_1_58 < (var_1_96 * var_1_6)) {
  if (var_1_76 >= stepLocal_5) {
   if (stepLocal_4 > 16u) {
    var_1_50 = var_1_51;
   }
  } else {
   var_1_50 = (! var_1_12);
  }
 }
 if (var_1_50) {
  var_1_73 = ((((var_1_5) > ((1.25 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) ? (var_1_5) : ((1.25 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))));
 } else {
  var_1_73 = (var_1_72 - (var_1_74 - ((((var_1_5) > (var_1_43)) ? (var_1_5) : (var_1_43)))));
 }
 if ((- (- 3.8)) >= ((((var_1_5) > (var_1_73)) ? (var_1_5) : (var_1_73)))) {
  var_1_35 = ((((var_1_105) > ((var_1_28 - var_1_22))) ? (var_1_105) : ((var_1_28 - var_1_22))));
 } else {
  var_1_35 = (var_1_21 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))));
 }
 unsigned char stepLocal_7 = var_1_12 || var_1_92;
 if ((((((- var_1_42)) < (var_1_96)) ? ((- var_1_42)) : (var_1_96))) <= (- var_1_44)) {
  if (stepLocal_7 || (-2 >= (last_1_var_1_56 + var_1_75))) {
   var_1_56 = ((((((((var_1_34 - var_1_59)) < (last_1_var_1_56)) ? ((var_1_34 - var_1_59)) : (last_1_var_1_56))) < 0 ) ? -(((((var_1_34 - var_1_59)) < (last_1_var_1_56)) ? ((var_1_34 - var_1_59)) : (last_1_var_1_56))) : (((((var_1_34 - var_1_59)) < (last_1_var_1_56)) ? ((var_1_34 - var_1_59)) : (last_1_var_1_56)))));
  } else {
   var_1_56 = ((var_1_57 - last_1_var_1_56) - ((((var_1_25) < (50)) ? (var_1_25) : (50))));
  }
 }
 if (var_1_50 && var_1_10) {
  var_1_37 = (var_1_38 - var_1_33);
 } else {
  if (var_1_12) {
   if ((var_1_21 < var_1_25) || var_1_101) {
    var_1_37 = ((((var_1_25) < ((var_1_34 + var_1_28))) ? (var_1_25) : ((var_1_34 + var_1_28))));
   } else {
    var_1_37 = ((63629 - (var_1_39 - var_1_22)) - var_1_34);
   }
  }
 }
 if (var_1_10) {
  var_1_107 = var_1_97;
 } else {
  var_1_107 = var_1_87;
 }
 if (! (var_1_10 || var_1_50)) {
  var_1_1 = ((var_1_5 + var_1_6) - 1.000000000000005E13f);
 }
 if (var_1_23) {
  if (! var_1_50) {
   var_1_46 = (((((var_1_26) > (((((var_1_22) > (var_1_33)) ? (var_1_22) : (var_1_33))))) ? (var_1_26) : (((((var_1_22) > (var_1_33)) ? (var_1_22) : (var_1_33)))))) + var_1_25);
  } else {
   var_1_46 = var_1_25;
  }
 } else {
  var_1_46 = (var_1_32 + 64);
 }
 if (var_1_45 < var_1_5) {
  if (var_1_97 >= (var_1_87 ^ var_1_38)) {
   if (var_1_103 == var_1_41) {
    var_1_55 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
   }
  }
 } else {
  var_1_55 = (((((1) > (var_1_21)) ? (1) : (var_1_21))) - var_1_28);
 }
 if (var_1_50) {
  var_1_104 = 1;
 } else {
  var_1_104 = var_1_28;
 }
 signed long int stepLocal_10 = - var_1_38;
 unsigned long int stepLocal_9 = var_1_7 / var_1_33;
 unsigned short int stepLocal_8 = var_1_8;
 if (stepLocal_8 >= var_1_34) {
  if (stepLocal_9 >= (var_1_80 ^ var_1_7)) {
   if (var_1_75 >= stepLocal_10) {
    var_1_70 = ((((var_1_43) < (var_1_42)) ? (var_1_43) : (var_1_42)));
   } else {
    var_1_70 = var_1_45;
   }
  } else {
   var_1_70 = (((((var_1_71 - var_1_72)) < (var_1_44)) ? ((var_1_71 - var_1_72)) : (var_1_44)));
  }
 }
 signed long int stepLocal_2 = 256 % var_1_28;
 if (var_1_35 != stepLocal_2) {
  var_1_30 = ((var_1_32 + var_1_33) - var_1_25);
 } else {
  if (var_1_12) {
   var_1_30 = (var_1_32 + var_1_33);
  } else {
   var_1_30 = (var_1_34 - var_1_26);
  }
 }
 unsigned char stepLocal_14 = var_1_69;
 signed long int stepLocal_13 = var_1_107;
 signed long int stepLocal_12 = (((2) < ((var_1_34 - var_1_33))) ? (2) : ((var_1_34 - var_1_33)));
 if (stepLocal_14 < (var_1_57 * var_1_59)) {
  if (stepLocal_13 >= -8) {
   var_1_78 = var_1_25;
  } else {
   if (stepLocal_12 > (~ var_1_27)) {
    if (var_1_6 < ((((var_1_96) < (var_1_73)) ? (var_1_96) : (var_1_73)))) {
     var_1_78 = (((((var_1_69 - var_1_61)) > ((var_1_38 - var_1_8))) ? ((var_1_69 - var_1_61)) : ((var_1_38 - var_1_8))));
    } else {
     var_1_78 = ((((var_1_56) > (var_1_37)) ? (var_1_56) : (var_1_37)));
    }
   }
  }
 } else {
  var_1_78 = var_1_36;
 }
 if (var_1_89) {
  var_1_100 = 0;
 } else {
  var_1_100 = var_1_78;
 }
 signed long int stepLocal_1 = var_1_78 + var_1_76;
 unsigned long int stepLocal_0 = var_1_20 - var_1_8;
 if (var_1_15 < stepLocal_1) {
  if (! var_1_23) {
   var_1_16 = var_1_19;
  } else {
   if ((64u * var_1_76) >= stepLocal_0) {
    var_1_16 = var_1_19;
   }
  }
 } else {
  if (var_1_5 <= (- (128.2f * var_1_70))) {
   var_1_16 = (var_1_21 - var_1_22);
  } else {
   var_1_16 = var_1_22;
  }
 }
 signed long int stepLocal_3 = - (var_1_32 | var_1_15);
 if (stepLocal_3 != var_1_26) {
  var_1_49 = (((((var_1_39 - var_1_32)) < (var_1_78)) ? ((var_1_39 - var_1_32)) : (var_1_78)));
 } else {
  var_1_49 = ((((var_1_78) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_78) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))));
 }
 if ((- 5u) <= var_1_57) {
  var_1_66 = var_1_28;
 } else {
  if (var_1_89) {
   var_1_66 = (var_1_34 - ((var_1_67 - var_1_68) - var_1_25));
  } else {
   if (var_1_99 < var_1_100) {
    if (var_1_59 < (var_1_13 + var_1_21)) {
     var_1_66 = (((((128) > ((var_1_69 - var_1_68))) ? (128) : ((var_1_69 - var_1_68)))) - var_1_67);
    } else {
     var_1_66 = (var_1_69 - ((((var_1_67) < (var_1_26)) ? (var_1_67) : (var_1_26))));
    }
   } else {
    var_1_66 = ((var_1_69 - ((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25)))) - var_1_32);
   }
  }
 }
 unsigned long int stepLocal_15 = var_1_99 / (var_1_39 + 64u);
 if (var_1_99 <= stepLocal_15) {
  if (var_1_23) {
   var_1_82 = (((((((((var_1_68) > (var_1_22)) ? (var_1_68) : (var_1_22)))) < (var_1_25)) ? (((((var_1_68) > (var_1_22)) ? (var_1_68) : (var_1_22)))) : (var_1_25))) - ((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))));
  } else {
   var_1_82 = ((((var_1_22 - (var_1_84 - var_1_26)) < 0 ) ? -(var_1_22 - (var_1_84 - var_1_26)) : (var_1_22 - (var_1_84 - var_1_26))));
  }
 } else {
  if (((var_1_108 * 4.6f) * var_1_42) > var_1_70) {
   if (var_1_58 > var_1_43) {
    var_1_82 = (var_1_26 + var_1_68);
   } else {
    var_1_82 = ((((var_1_28) > ((var_1_22 - var_1_26))) ? (var_1_28) : ((var_1_22 - var_1_26))));
   }
  } else {
   if (var_1_10) {
    var_1_82 = ((((var_1_86) < (var_1_69)) ? (var_1_86) : (var_1_69)));
   } else {
    var_1_82 = (var_1_26 - var_1_81);
   }
  }
 }
 if (var_1_38 == var_1_100) {
  var_1_40 = ((((var_1_19) < ((var_1_49 + (var_1_33 + last_1_var_1_40)))) ? (var_1_19) : ((var_1_49 + (var_1_33 + last_1_var_1_40)))));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -1073741823);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 62);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 63);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 64);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 32767);
 assume_abort_if_not(var_1_38 <= 65534);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 8191);
 assume_abort_if_not(var_1_39 <= 16383);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_57 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_57 >= 1073741822);
 assume_abort_if_not(var_1_57 <= 2147483646);
 var_1_61 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32766);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 3221225470);
 assume_abort_if_not(var_1_65 <= 4294967294);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 95);
 assume_abort_if_not(var_1_67 <= 127);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 32);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 190);
 assume_abort_if_not(var_1_69 <= 254);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854766000e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= 4611686.018427383000e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854766000e+12F && var_1_74 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 63);
 var_1_84 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_84 >= 63);
 assume_abort_if_not(var_1_84 <= 126);
 var_1_86 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_86 >= -127);
 assume_abort_if_not(var_1_86 <= 126);
 var_1_88 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 32766);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 1);
 assume_abort_if_not(var_1_90 <= 1);
 var_1_95 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_95 >= -32767);
 assume_abort_if_not(var_1_95 <= 32766);
 var_1_98 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_98 >= 0);
 assume_abort_if_not(var_1_98 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_106 = var_1_106;
 last_1_var_1_107 = var_1_107;
 last_1_var_1_109 = var_1_109;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((! (var_1_10 || var_1_50)) ? (var_1_1 == ((float) ((var_1_5 + var_1_6) - 1.000000000000005E13f))) : 1) && ((! var_1_10) ? (((var_1_8 - var_1_9) < var_1_48) ? (var_1_7 == ((unsigned long int) var_1_8)) : 1) : 1)) && (last_1_var_1_50 ? (last_1_var_1_62 ? (var_1_10 == ((unsigned char) ((! 1) || (! var_1_11)))) : 1) : (var_1_10 == ((unsigned char) (! var_1_12))))) && ((var_1_6 < var_1_54) ? ((var_1_96 >= var_1_6) ? (var_1_13 == ((signed long int) (var_1_63 - var_1_9))) : (var_1_13 == ((signed long int) (var_1_63 - var_1_8)))) : (var_1_13 == ((signed long int) (var_1_9 + var_1_15))))) && ((var_1_15 < (var_1_78 + var_1_76)) ? ((! var_1_23) ? (var_1_16 == ((signed char) var_1_19)) : (((64u * var_1_76) >= (var_1_20 - var_1_8)) ? (var_1_16 == ((signed char) var_1_19)) : 1)) : ((var_1_5 <= (- (128.2f * var_1_70))) ? (var_1_16 == ((signed char) (var_1_21 - var_1_22))) : (var_1_16 == ((signed char) var_1_22))))) && (var_1_23 == ((unsigned char) (! var_1_12)))) && (var_1_10 ? (var_1_24 == ((signed char) ((var_1_25 - var_1_26) + var_1_27))) : (var_1_10 ? (var_1_24 == ((signed char) (var_1_27 + var_1_26))) : (var_1_24 == ((signed char) ((var_1_28 - var_1_26) - var_1_22)))))) && ((var_1_9 == var_1_8) ? (var_1_101 ? (var_1_29 == ((signed short int) (var_1_22 - 5))) : 1) : 1)) && ((var_1_35 != (256 % var_1_28)) ? (var_1_30 == ((unsigned char) ((var_1_32 + var_1_33) - var_1_25))) : (var_1_12 ? (var_1_30 == ((unsigned char) (var_1_32 + var_1_33))) : (var_1_30 == ((unsigned char) (var_1_34 - var_1_26)))))) && (((- (- 3.8)) >= ((((var_1_5) > (var_1_73)) ? (var_1_5) : (var_1_73)))) ? (var_1_35 == ((signed short int) ((((var_1_105) > ((var_1_28 - var_1_22))) ? (var_1_105) : ((var_1_28 - var_1_22)))))) : (var_1_35 == ((signed short int) (var_1_21 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))))) && (var_1_36 == ((unsigned char) ((((16) < (var_1_26)) ? (16) : (var_1_26)))))) && ((var_1_50 && var_1_10) ? (var_1_37 == ((unsigned short int) (var_1_38 - var_1_33))) : (var_1_12 ? (((var_1_21 < var_1_25) || var_1_101) ? (var_1_37 == ((unsigned short int) ((((var_1_25) < ((var_1_34 + var_1_28))) ? (var_1_25) : ((var_1_34 + var_1_28)))))) : (var_1_37 == ((unsigned short int) ((63629 - (var_1_39 - var_1_22)) - var_1_34)))) : 1))) && ((var_1_38 == var_1_100) ? (var_1_40 == ((signed short int) ((((var_1_19) < ((var_1_49 + (var_1_33 + last_1_var_1_40)))) ? (var_1_19) : ((var_1_49 + (var_1_33 + last_1_var_1_40))))))) : 1)) && ((! var_1_11) ? ((var_1_8 == var_1_28) ? ((var_1_34 == var_1_77) ? (var_1_41 == ((float) (((((var_1_6) < (((((10.5f) > (var_1_5)) ? (10.5f) : (var_1_5))))) ? (var_1_6) : (((((10.5f) > (var_1_5)) ? (10.5f) : (var_1_5)))))) + (var_1_42 + (var_1_43 - var_1_44))))) : (var_1_41 == ((float) ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) : ((var_1_13 >= var_1_27) ? (var_1_41 == ((float) var_1_42)) : (var_1_41 == ((float) var_1_6)))) : (var_1_41 == ((float) var_1_45)))) && (var_1_23 ? ((! var_1_50) ? (var_1_46 == ((unsigned char) (((((var_1_26) > (((((var_1_22) > (var_1_33)) ? (var_1_22) : (var_1_33))))) ? (var_1_26) : (((((var_1_22) > (var_1_33)) ? (var_1_22) : (var_1_33)))))) + var_1_25))) : (var_1_46 == ((unsigned char) var_1_25))) : (var_1_46 == ((unsigned char) (var_1_32 + 64))))) && (var_1_12 ? ((4.9f == var_1_45) ? ((-4 > var_1_15) ? (var_1_47 == ((signed char) ((((var_1_26 - var_1_28) < 0 ) ? -(var_1_26 - var_1_28) : (var_1_26 - var_1_28))))) : (var_1_47 == ((signed char) (var_1_21 - var_1_22)))) : (var_1_47 == ((signed char) (-2 + var_1_27)))) : ((var_1_7 >= (var_1_26 * var_1_32)) ? (var_1_47 == ((signed char) (var_1_28 - var_1_26))) : (var_1_47 == ((signed char) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))) && (var_1_48 == ((unsigned short int) ((((var_1_22 + 16) < 0 ) ? -(var_1_22 + 16) : (var_1_22 + 16)))))) && (((- (var_1_32 | var_1_15)) != var_1_26) ? (var_1_49 == ((signed long int) (((((var_1_39 - var_1_32)) < (var_1_78)) ? ((var_1_39 - var_1_32)) : (var_1_78))))) : (var_1_49 == ((signed long int) ((((var_1_78) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_78) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))))) && ((var_1_58 < (var_1_96 * var_1_6)) ? ((var_1_76 >= (var_1_20 * (var_1_9 / var_1_33))) ? ((var_1_63 > 16u) ? (var_1_50 == ((unsigned char) var_1_51)) : 1) : (var_1_50 == ((unsigned char) (! var_1_12)))) : 1)) && (var_1_52 == ((unsigned char) ((var_1_12 || var_1_51) || (var_1_11 && var_1_53))))) && (((last_1_var_1_54 > var_1_96) && var_1_52) ? (var_1_54 == ((double) ((var_1_44 + var_1_43) + var_1_5))) : (var_1_54 == ((double) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) && ((var_1_45 < var_1_5) ? ((var_1_97 >= (var_1_87 ^ var_1_38)) ? ((var_1_103 == var_1_41) ? (var_1_55 == ((signed char) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : 1) : 1) : (var_1_55 == ((signed char) (((((1) > (var_1_21)) ? (1) : (var_1_21))) - var_1_28))))) && (((((((- var_1_42)) < (var_1_96)) ? ((- var_1_42)) : (var_1_96))) <= (- var_1_44)) ? (((var_1_12 || var_1_92) || (-2 >= (last_1_var_1_56 + var_1_75))) ? (var_1_56 == ((signed long int) ((((((((var_1_34 - var_1_59)) < (last_1_var_1_56)) ? ((var_1_34 - var_1_59)) : (last_1_var_1_56))) < 0 ) ? -(((((var_1_34 - var_1_59)) < (last_1_var_1_56)) ? ((var_1_34 - var_1_59)) : (last_1_var_1_56))) : (((((var_1_34 - var_1_59)) < (last_1_var_1_56)) ? ((var_1_34 - var_1_59)) : (last_1_var_1_56))))))) : (var_1_56 == ((signed long int) ((var_1_57 - last_1_var_1_56) - ((((var_1_25) < (50)) ? (var_1_25) : (50))))))) : 1)) && ((((((1) < (var_1_25)) ? (1) : (var_1_25))) >= ((var_1_99 + var_1_48) - var_1_32)) ? ((var_1_6 <= ((var_1_43 + var_1_96) + (var_1_5 - var_1_44))) ? (var_1_58 == ((double) ((((8.625) < (var_1_42)) ? (8.625) : (var_1_42))))) : ((((((var_1_63) > ((var_1_34 - 5))) ? (var_1_63) : ((var_1_34 - 5)))) >= var_1_76) ? (var_1_58 == ((double) (((((var_1_44) > (var_1_42)) ? (var_1_44) : (var_1_42))) + ((((var_1_6) < (((((2.8) < (0.25)) ? (2.8) : (0.25))))) ? (var_1_6) : (((((2.8) < (0.25)) ? (2.8) : (0.25))))))))) : (var_1_58 == ((double) (var_1_6 + (var_1_43 + 1.75)))))) : 1)) && ((var_1_5 <= var_1_42) ? (last_1_var_1_106 ? ((((~ 256) + last_1_var_1_107) > last_1_var_1_7) ? ((var_1_39 == last_1_var_1_13) ? ((var_1_25 >= last_1_var_1_100) ? (var_1_59 == ((signed short int) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : (var_1_59 == ((signed short int) (var_1_27 + var_1_32)))) : 1) : ((! last_1_var_1_101) ? (var_1_59 == ((signed short int) (((((var_1_28) > (last_1_var_1_59)) ? (var_1_28) : (last_1_var_1_59))) - ((((var_1_33) < ((var_1_61 - 2))) ? (var_1_33) : ((var_1_61 - 2))))))) : (var_1_59 == ((signed short int) ((((-128) < 0 ) ? -(-128) : (-128))))))) : 1) : 1)) && (var_1_62 == ((unsigned char) (var_1_51 || var_1_11)))) && ((last_1_var_1_91 < ((((last_1_var_1_70) < 0 ) ? -(last_1_var_1_70) : (last_1_var_1_70)))) ? (var_1_63 == ((unsigned long int) ((var_1_65 - 100u) - last_1_var_1_109))) : (var_1_63 == ((unsigned long int) (((((128u) < (var_1_26)) ? (128u) : (var_1_26))) + var_1_32))))) && (((- 5u) <= var_1_57) ? (var_1_66 == ((unsigned char) var_1_28)) : (var_1_89 ? (var_1_66 == ((unsigned char) (var_1_34 - ((var_1_67 - var_1_68) - var_1_25)))) : ((var_1_99 < var_1_100) ? ((var_1_59 < (var_1_13 + var_1_21)) ? (var_1_66 == ((unsigned char) (((((128) > ((var_1_69 - var_1_68))) ? (128) : ((var_1_69 - var_1_68)))) - var_1_67))) : (var_1_66 == ((unsigned char) (var_1_69 - ((((var_1_67) < (var_1_26)) ? (var_1_67) : (var_1_26))))))) : (var_1_66 == ((unsigned char) ((var_1_69 - ((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25)))) - var_1_32))))))) && ((var_1_8 >= var_1_34) ? (((var_1_7 / var_1_33) >= (var_1_80 ^ var_1_7)) ? ((var_1_75 >= (- var_1_38)) ? (var_1_70 == ((float) ((((var_1_43) < (var_1_42)) ? (var_1_43) : (var_1_42))))) : (var_1_70 == ((float) var_1_45))) : (var_1_70 == ((float) (((((var_1_71 - var_1_72)) < (var_1_44)) ? ((var_1_71 - var_1_72)) : (var_1_44)))))) : 1)) && (var_1_50 ? (var_1_73 == ((double) ((((var_1_5) > ((1.25 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) ? (var_1_5) : ((1.25 + ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))))))) : (var_1_73 == ((double) (var_1_72 - (var_1_74 - ((((var_1_5) > (var_1_43)) ? (var_1_5) : (var_1_43))))))))) && (var_1_75 == ((signed long int) ((((var_1_105) < ((var_1_57 - 128))) ? (var_1_105) : ((var_1_57 - 128))))))) && (var_1_12 ? (var_1_76 == ((signed long int) (var_1_9 - last_1_var_1_56))) : ((((var_1_61 - var_1_39) << var_1_22) < ((((4) > (-2)) ? (4) : (-2)))) ? (var_1_76 == ((signed long int) (var_1_25 + last_1_var_1_30))) : (var_1_76 == ((signed long int) ((((var_1_69 - 4) < 0 ) ? -(var_1_69 - 4) : (var_1_69 - 4)))))))) && ((var_1_54 <= -0.2) ? (var_1_53 ? (var_1_77 == ((unsigned char) var_1_26)) : (var_1_77 == ((unsigned char) (var_1_34 - var_1_67)))) : (var_1_77 == ((unsigned char) var_1_69)))) && ((var_1_69 < (var_1_57 * var_1_59)) ? ((var_1_107 >= -8) ? (var_1_78 == ((signed long int) var_1_25)) : ((((((2) < ((var_1_34 - var_1_33))) ? (2) : ((var_1_34 - var_1_33)))) > (~ var_1_27)) ? ((var_1_6 < ((((var_1_96) < (var_1_73)) ? (var_1_96) : (var_1_73)))) ? (var_1_78 == ((signed long int) (((((var_1_69 - var_1_61)) > ((var_1_38 - var_1_8))) ? ((var_1_69 - var_1_61)) : ((var_1_38 - var_1_8)))))) : (var_1_78 == ((signed long int) ((((var_1_56) > (var_1_37)) ? (var_1_56) : (var_1_37)))))) : 1)) : (var_1_78 == ((signed long int) var_1_36)))) && ((((((-0.6f) > (3.025f)) ? (-0.6f) : (3.025f))) < var_1_41) ? ((var_1_97 <= var_1_68) ? ((var_1_72 == (var_1_96 / var_1_74)) ? (var_1_80 == ((signed char) (var_1_68 + (((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25))) - var_1_81)))) : (var_1_80 == ((signed char) var_1_26))) : (var_1_80 == ((signed char) var_1_28))) : (var_1_80 == ((signed char) ((var_1_81 - var_1_68) + var_1_26))))) && ((var_1_99 <= (var_1_99 / (var_1_39 + 64u))) ? (var_1_23 ? (var_1_82 == ((signed char) (((((((((var_1_68) > (var_1_22)) ? (var_1_68) : (var_1_22)))) < (var_1_25)) ? (((((var_1_68) > (var_1_22)) ? (var_1_68) : (var_1_22)))) : (var_1_25))) - ((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)))))) : (var_1_82 == ((signed char) ((((var_1_22 - (var_1_84 - var_1_26)) < 0 ) ? -(var_1_22 - (var_1_84 - var_1_26)) : (var_1_22 - (var_1_84 - var_1_26))))))) : ((((var_1_108 * 4.6f) * var_1_42) > var_1_70) ? ((var_1_58 > var_1_43) ? (var_1_82 == ((signed char) (var_1_26 + var_1_68))) : (var_1_82 == ((signed char) ((((var_1_28) > ((var_1_22 - var_1_26))) ? (var_1_28) : ((var_1_22 - var_1_26))))))) : (var_1_10 ? (var_1_82 == ((signed char) ((((var_1_86) < (var_1_69)) ? (var_1_86) : (var_1_69))))) : (var_1_82 == ((signed char) (var_1_26 - var_1_81))))))) && (((var_1_32 | var_1_69) >= var_1_99) ? (var_1_87 == ((signed short int) (var_1_39 - var_1_88))) : 1)) && ((var_1_15 >= (var_1_34 - var_1_9)) ? (var_1_89 == ((unsigned char) (var_1_11 && var_1_90))) : (var_1_89 == ((unsigned char) ((! 1) || var_1_90))))) && ((var_1_54 >= var_1_5) ? (var_1_91 == ((float) (var_1_72 - var_1_5))) : (var_1_91 == ((float) (var_1_43 - var_1_44))))) && (var_1_92 == ((unsigned char) (! var_1_90)))) && ((((var_1_7 <= var_1_97) || var_1_89) && var_1_89) ? ((var_1_8 >= (var_1_65 % var_1_34)) ? ((var_1_23 && var_1_51) ? (var_1_93 == ((signed short int) ((((last_1_var_1_93) < (var_1_95)) ? (last_1_var_1_93) : (var_1_95))))) : (var_1_93 == ((signed short int) (((((var_1_7) > (var_1_99)) ? (var_1_7) : (var_1_99))) + var_1_21)))) : ((var_1_7 >= var_1_63) ? (var_1_93 == ((signed short int) (var_1_99 + var_1_67))) : (var_1_93 == ((signed short int) var_1_95)))) : 1)) && (var_1_96 == ((double) var_1_72))) && (var_1_89 ? (var_1_97 == ((unsigned long int) var_1_98)) : 1)) && (var_1_23 ? (var_1_99 == ((unsigned long int) var_1_98)) : 1)) && (var_1_89 ? (var_1_100 == ((unsigned short int) 0)) : (var_1_100 == ((unsigned short int) var_1_78)))) && (var_1_101 == ((unsigned char) var_1_12))) && (var_1_52 ? (var_1_102 == ((float) var_1_45)) : (var_1_102 == ((float) var_1_74)))) && (var_1_92 ? (var_1_103 == ((double) var_1_6)) : (var_1_103 == ((double) var_1_71)))) && (var_1_50 ? (var_1_104 == ((unsigned char) 1)) : (var_1_104 == ((unsigned char) var_1_28)))) && (var_1_51 ? (var_1_105 == ((signed short int) var_1_59)) : 1)) && (var_1_90 ? (var_1_106 == ((unsigned char) 0)) : (var_1_106 == ((unsigned char) var_1_11)))) && (var_1_10 ? (var_1_107 == ((signed long int) var_1_97)) : (var_1_107 == ((signed long int) var_1_87)))) && ((var_1_61 > (var_1_26 + var_1_20)) ? (var_1_108 == ((float) (8.4f - var_1_71))) : ((var_1_23 && var_1_106) ? (var_1_108 == ((float) var_1_6)) : (var_1_108 == ((float) var_1_45))))) && (var_1_109 == ((unsigned char) var_1_22))
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
