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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 1000000000;
signed long int var_1_7 = 2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 100;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 64;
unsigned long int var_1_12 = 256;
signed short int var_1_13 = 256;
float var_1_14 = 5.75;
float var_1_15 = 8.6;
signed short int var_1_16 = 256;
signed short int var_1_17 = 500;
signed short int var_1_18 = 50;
signed short int var_1_19 = 5;
signed short int var_1_20 = 5;
signed short int var_1_21 = 10;
signed long int var_1_22 = -256;
signed long int var_1_23 = 2121421491;
unsigned char var_1_24 = 100;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 4;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 10;
unsigned long int var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
float var_1_36 = 0.25;
float var_1_38 = 255.5;
unsigned char var_1_39 = 32;
signed char var_1_40 = 4;
signed long int var_1_41 = 0;
signed long int var_1_42 = -10;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 3801626219;
unsigned short int var_1_49 = 8;
unsigned short int var_1_50 = 58075;
signed char var_1_51 = -10;
signed char var_1_52 = 1;
signed char var_1_53 = 100;
signed char var_1_54 = 4;
signed long int var_1_55 = 25;
double var_1_56 = 50.4;
signed long int var_1_57 = -1;
signed char var_1_58 = -10;
float var_1_59 = 0.0;
float var_1_60 = 99.85;
float var_1_61 = 9.6;
float var_1_62 = 16.5;
signed short int var_1_63 = -5;
signed long int var_1_64 = 2;
float var_1_65 = 1.25;
float var_1_66 = 2.75;
signed short int var_1_67 = 0;
unsigned short int var_1_68 = 0;
unsigned short int var_1_69 = 10000;
unsigned short int var_1_70 = 25500;
unsigned short int var_1_71 = 50;
signed char var_1_72 = -1;
signed char var_1_73 = 0;
signed char var_1_74 = 4;
unsigned char var_1_75 = 64;
unsigned char var_1_76 = 64;
unsigned char var_1_77 = 0;
signed char var_1_78 = 50;
signed short int var_1_79 = 5;
double var_1_80 = 1000000000.4;
signed short int var_1_81 = 32405;
unsigned short int var_1_82 = 128;
unsigned char var_1_83 = 0;
unsigned long int var_1_84 = 2716510833;
unsigned short int var_1_86 = 128;
double var_1_87 = 63.5;
unsigned char var_1_88 = 4;
unsigned short int var_1_89 = 100;
signed short int var_1_90 = 2;
unsigned char var_1_91 = 4;
signed char var_1_92 = -16;
unsigned char var_1_93 = 2;
signed char var_1_94 = 64;
unsigned short int var_1_95 = 5;
unsigned short int var_1_96 = 100;
double var_1_97 = 16.875;
unsigned long int var_1_98 = 100;
float var_1_99 = 25.3;
float var_1_100 = 24.2;
double var_1_101 = 7.5;
unsigned char var_1_102 = 25;
unsigned char var_1_103 = 1;
signed short int var_1_104 = 50;
signed short int var_1_105 = -5;
signed long int last_1_var_1_42 = -10;
signed long int last_1_var_1_55 = 25;
float last_1_var_1_65 = 1.25;
signed short int last_1_var_1_79 = 5;
signed short int last_1_var_1_90 = 2;
double last_1_var_1_97 = 16.875;
float last_1_var_1_100 = 24.2;
void initially(void) {
}
void step(void) {
 if (((((last_1_var_1_97) < (last_1_var_1_100)) ? (last_1_var_1_97) : (last_1_var_1_100))) > last_1_var_1_65) {
  var_1_1 = (((var_1_5 + var_1_6) - var_1_7) - var_1_8);
 } else {
  var_1_1 = (var_1_5 - 2);
 }
 unsigned long int stepLocal_4 = 128u + var_1_12;
 signed long int stepLocal_3 = var_1_8 * ((((var_1_5) > (var_1_18)) ? (var_1_5) : (var_1_18)));
 signed long int stepLocal_2 = var_1_6;
 if (stepLocal_4 > (var_1_16 / var_1_6)) {
  if (stepLocal_3 < var_1_19) {
   var_1_22 = (var_1_16 + ((((var_1_12) > (-256)) ? (var_1_12) : (-256))));
  } else {
   if (stepLocal_2 < var_1_5) {
    var_1_22 = (var_1_17 - (var_1_23 - var_1_11));
   } else {
    var_1_22 = var_1_19;
   }
  }
 } else {
  var_1_22 = var_1_8;
 }
 var_1_30 = (! var_1_10);
 var_1_64 = ((((var_1_52) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_52) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))));
 unsigned char stepLocal_26 = var_1_28;
 if (var_1_50 <= stepLocal_26) {
  var_1_78 = (((((var_1_26) > (var_1_29)) ? (var_1_26) : (var_1_29))) + var_1_74);
 } else {
  var_1_78 = var_1_27;
 }
 if (var_1_60 < var_1_59) {
  var_1_86 = (var_1_26 + ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))));
 }
 if (var_1_30) {
  var_1_87 = (16.25 + var_1_66);
 }
 var_1_89 = var_1_76;
 if (var_1_45) {
  var_1_90 = last_1_var_1_90;
 } else {
  var_1_90 = var_1_18;
 }
 if (var_1_44) {
  var_1_91 = var_1_28;
 }
 var_1_92 = var_1_29;
 var_1_93 = var_1_26;
 var_1_94 = var_1_26;
 if (var_1_44) {
  var_1_97 = 64.5;
 }
 if (var_1_44) {
  var_1_98 = var_1_26;
 }
 var_1_99 = var_1_62;
 if (var_1_46) {
  var_1_100 = var_1_62;
 } else {
  var_1_100 = var_1_60;
 }
 var_1_101 = var_1_60;
 if (var_1_35) {
  var_1_102 = 10;
 }
 var_1_103 = var_1_34;
 signed long int stepLocal_6 = var_1_86 / var_1_25;
 if (stepLocal_6 >= (var_1_1 / ((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23))))) {
  var_1_36 = (var_1_38 + 200.75f);
 }
 if (var_1_10) {
  if ((var_1_14 - var_1_15) >= ((var_1_101 + var_1_87) + var_1_99)) {
   var_1_13 = ((((((var_1_16 + var_1_17) - var_1_18)) > (var_1_19)) ? (((var_1_16 + var_1_17) - var_1_18)) : (var_1_19)));
  } else {
   var_1_13 = (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + (((((var_1_20 + var_1_21)) > (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? ((var_1_20 + var_1_21)) : (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))));
  }
 }
 if (var_1_97 >= var_1_14) {
  var_1_33 = ((var_1_10 || (! var_1_34)) && var_1_35);
 }
 signed long int stepLocal_8 = var_1_26 << var_1_18;
 if (stepLocal_8 >= -64) {
  var_1_40 = (var_1_26 + (var_1_28 - var_1_29));
 } else {
  if (var_1_103) {
   var_1_40 = var_1_26;
  }
 }
 if (var_1_33) {
  var_1_41 = ((((var_1_8) < (((var_1_29 + var_1_7) - var_1_102))) ? (var_1_8) : (((var_1_29 + var_1_7) - var_1_102))));
 }
 signed long int stepLocal_9 = (var_1_19 * var_1_5) ^ var_1_1;
 if (-16 >= stepLocal_9) {
  var_1_42 = ((((-10000000) > (((((last_1_var_1_42) < (var_1_8)) ? (last_1_var_1_42) : (var_1_8))))) ? (-10000000) : (((((last_1_var_1_42) < (var_1_8)) ? (last_1_var_1_42) : (var_1_8))))));
 } else {
  if (var_1_100 >= 24.5f) {
   var_1_42 = (var_1_16 - (var_1_23 - last_1_var_1_42));
  }
 }
 if (var_1_21 <= 128) {
  if (((((var_1_86) > ((4 / var_1_28))) ? (var_1_86) : ((4 / var_1_28)))) >= var_1_41) {
   var_1_51 = (var_1_28 + (var_1_29 + var_1_52));
  } else {
   var_1_51 = var_1_26;
  }
 } else {
  var_1_51 = (var_1_29 - ((((((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28)))) > ((var_1_53 - var_1_54))) ? (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28)))) : ((var_1_53 - var_1_54)))));
 }
 signed char stepLocal_13 = var_1_40;
 if (((var_1_97 + var_1_38) / var_1_56) <= (((((var_1_14 * var_1_36)) > (((((var_1_15) < (var_1_87)) ? (var_1_15) : (var_1_87))))) ? ((var_1_14 * var_1_36)) : (((((var_1_15) < (var_1_87)) ? (var_1_15) : (var_1_87))))))) {
  if (var_1_87 >= ((((var_1_36) < (var_1_56)) ? (var_1_36) : (var_1_56)))) {
   if (stepLocal_13 <= var_1_19) {
    var_1_55 = (((((last_1_var_1_55 + (var_1_28 - var_1_89))) > (var_1_26)) ? ((last_1_var_1_55 + (var_1_28 - var_1_89))) : (var_1_26)));
   } else {
    var_1_55 = var_1_52;
   }
  }
 } else {
  var_1_55 = (var_1_22 + var_1_27);
 }
 signed short int stepLocal_14 = var_1_90;
 if (stepLocal_14 < ((((var_1_41) > (-8)) ? (var_1_41) : (-8)))) {
  var_1_57 = (var_1_18 - (var_1_23 - (var_1_5 - var_1_54)));
 }
 signed long int stepLocal_15 = var_1_22 % ((((var_1_53) < (var_1_63)) ? (var_1_53) : (var_1_63)));
 if (((var_1_59 - var_1_60) - (var_1_61 + var_1_62)) == (- (var_1_87 / var_1_56))) {
  if (var_1_16 >= stepLocal_15) {
   var_1_58 = (5 - ((((((((var_1_29) < (var_1_26)) ? (var_1_29) : (var_1_26)))) < (var_1_54)) ? (((((var_1_29) < (var_1_26)) ? (var_1_29) : (var_1_26)))) : (var_1_54))));
  } else {
   var_1_58 = (((((var_1_26) < (var_1_29)) ? (var_1_26) : (var_1_29))) - ((((var_1_27) > (var_1_54)) ? (var_1_27) : (var_1_54))));
  }
 }
 unsigned long int stepLocal_21 = var_1_98;
 if (var_1_8 == stepLocal_21) {
  if (! var_1_35) {
   if ((1.25f * var_1_62) >= var_1_60) {
    var_1_72 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + var_1_29);
   } else {
    var_1_72 = ((((((((var_1_29) < ((var_1_53 - var_1_54))) ? (var_1_29) : ((var_1_53 - var_1_54))))) < (((((var_1_52) < (var_1_26)) ? (var_1_52) : (var_1_26))))) ? (((((var_1_29) < ((var_1_53 - var_1_54))) ? (var_1_29) : ((var_1_53 - var_1_54))))) : (((((var_1_52) < (var_1_26)) ? (var_1_52) : (var_1_26))))));
   }
  } else {
   var_1_72 = var_1_53;
  }
 }
 signed short int stepLocal_25 = var_1_13;
 unsigned long int stepLocal_24 = var_1_28 + var_1_32;
 if (var_1_64 < stepLocal_25) {
  if (stepLocal_24 > ((var_1_48 - var_1_23) / ((((256u) > (var_1_70)) ? (256u) : (var_1_70))))) {
   var_1_75 = var_1_27;
  }
 } else {
  var_1_75 = (var_1_53 + (var_1_76 - var_1_74));
 }
 if (var_1_103) {
  var_1_95 = var_1_29;
 } else {
  var_1_95 = 25;
 }
 if (var_1_35) {
  var_1_96 = var_1_71;
 } else {
  var_1_96 = var_1_98;
 }
 if (var_1_33) {
  var_1_104 = var_1_26;
 } else {
  var_1_104 = var_1_90;
 }
 if (var_1_36 == var_1_87) {
  var_1_47 = (var_1_35 && (! var_1_44));
 } else {
  if (var_1_32 <= (var_1_48 - var_1_11)) {
   var_1_47 = (! (! (var_1_33 || var_1_44)));
  }
 }
 signed long int stepLocal_5 = var_1_8;
 if (stepLocal_5 < var_1_41) {
  var_1_24 = (((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) - (((((var_1_27) < (16)) ? (var_1_27) : (16))) + (var_1_28 - var_1_29)));
 }
 if (var_1_23 <= var_1_57) {
  var_1_105 = var_1_25;
 } else {
  var_1_105 = ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < (((((var_1_104) > (((((var_1_18) < (5)) ? (var_1_18) : (5))))) ? (var_1_104) : (((((var_1_18) < (5)) ? (var_1_18) : (5)))))))) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_104) > (((((var_1_18) < (5)) ? (var_1_18) : (5))))) ? (var_1_104) : (((((var_1_18) < (5)) ? (var_1_18) : (5)))))))));
 }
 unsigned char stepLocal_12 = var_1_47;
 unsigned long int stepLocal_11 = 100u;
 signed long int stepLocal_10 = var_1_5;
 if (var_1_100 > var_1_99) {
  if (var_1_12 == stepLocal_10) {
   if (var_1_35 && stepLocal_12) {
    var_1_43 = (var_1_35 && ((var_1_97 > 16.5f) || var_1_44));
   } else {
    var_1_43 = ((var_1_10 || var_1_34) || (var_1_44 && var_1_45));
   }
  } else {
   var_1_43 = (var_1_44 && (var_1_35 && var_1_46));
  }
 } else {
  if (var_1_12 < stepLocal_11) {
   var_1_43 = ((! (! var_1_46)) && var_1_35);
  } else {
   var_1_43 = (var_1_45 || (var_1_10 && var_1_34));
  }
 }
 if (! var_1_34) {
  var_1_77 = ((var_1_70 >= var_1_76) || var_1_44);
 } else {
  var_1_77 = (var_1_43 && var_1_34);
 }
 if (1 == (var_1_28 << var_1_6)) {
  if (var_1_77) {
   var_1_31 = (var_1_32 + ((var_1_18 + var_1_29) + var_1_11));
  } else {
   var_1_31 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  }
 } else {
  if ((var_1_21 + var_1_8) >= var_1_18) {
   if ((var_1_8 + ((((var_1_19) < (var_1_26)) ? (var_1_19) : (var_1_26)))) == var_1_98) {
    var_1_31 = var_1_18;
   }
  }
 }
 unsigned long int stepLocal_16 = (((var_1_31) < (var_1_6)) ? (var_1_31) : (var_1_6));
 if (stepLocal_16 >= var_1_5) {
  var_1_65 = (var_1_38 + var_1_66);
 } else {
  var_1_65 = (var_1_61 - var_1_60);
 }
 unsigned long int stepLocal_1 = var_1_31;
 signed long int stepLocal_0 = var_1_7;
 if (stepLocal_1 >= (var_1_6 / var_1_5)) {
  if (var_1_31 > stepLocal_0) {
   var_1_9 = (3867474704u - ((var_1_11 + var_1_12) + var_1_7));
  }
 }
 unsigned long int stepLocal_7 = (((10u) < ((var_1_26 / var_1_5))) ? (10u) : ((var_1_26 / var_1_5)));
 if (var_1_9 == stepLocal_7) {
  if (var_1_36 == (var_1_38 * (- var_1_14))) {
   var_1_39 = ((((var_1_26) < ((var_1_28 + var_1_27))) ? (var_1_26) : ((var_1_28 + var_1_27))));
  } else {
   if (var_1_99 >= var_1_38) {
    var_1_39 = var_1_26;
   } else {
    var_1_39 = (((((var_1_29 + var_1_28)) < (var_1_25)) ? ((var_1_29 + var_1_28)) : (var_1_25)));
   }
  }
 } else {
  if ((1.5f / 9.5f) != var_1_36) {
   var_1_39 = 50;
  }
 }
 signed long int stepLocal_18 = var_1_5;
 unsigned long int stepLocal_17 = (var_1_9 + var_1_20) / var_1_23;
 if (var_1_44) {
  if (var_1_59 <= var_1_14) {
   var_1_67 = (var_1_22 + (var_1_27 + var_1_21));
  } else {
   if (stepLocal_18 >= var_1_22) {
    var_1_67 = ((((var_1_27) > (var_1_22)) ? (var_1_27) : (var_1_22)));
   } else {
    if ((var_1_63 / var_1_53) < stepLocal_17) {
     var_1_67 = (var_1_20 + (var_1_29 - var_1_27));
    }
   }
  }
 } else {
  if (var_1_87 > var_1_99) {
   var_1_67 = (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) - var_1_29);
  } else {
   var_1_67 = (var_1_27 - var_1_26);
  }
 }
 unsigned long int stepLocal_27 = var_1_31;
 if (var_1_60 < var_1_87) {
  if (var_1_43) {
   var_1_79 = (var_1_26 - var_1_41);
  } else {
   if ((var_1_80 - var_1_14) <= 8.75) {
    var_1_79 = ((((((((var_1_25) < (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))) ? (var_1_25) : (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))))) < (((var_1_76 - var_1_28) + 8))) ? (((((var_1_25) < (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))) ? (var_1_25) : (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))))) : (((var_1_76 - var_1_28) + 8))));
   } else {
    if (stepLocal_27 <= ((((last_1_var_1_79) > (var_1_17)) ? (last_1_var_1_79) : (var_1_17)))) {
     var_1_79 = ((((((var_1_81 - last_1_var_1_79)) > (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))))) ? ((var_1_81 - last_1_var_1_79)) : (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))))) - var_1_29);
    } else {
     var_1_79 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
    }
   }
  }
 }
 signed char stepLocal_29 = var_1_54;
 unsigned long int stepLocal_28 = var_1_9;
 if (! var_1_35) {
  if ((var_1_96 & var_1_63) <= stepLocal_28) {
   var_1_82 = var_1_81;
  } else {
   if (var_1_99 >= (- var_1_62)) {
    var_1_82 = ((((((((var_1_76) < (var_1_27)) ? (var_1_76) : (var_1_27)))) < (var_1_54)) ? (((((var_1_76) < (var_1_27)) ? (var_1_76) : (var_1_27)))) : (var_1_54)));
   } else {
    var_1_82 = ((((((var_1_71) > (var_1_69)) ? (var_1_71) : (var_1_69))) + (var_1_95 + var_1_102)) + (((((var_1_70) < (30096)) ? (var_1_70) : (30096))) - var_1_74));
   }
  }
 } else {
  if (stepLocal_29 < ((((10) < (var_1_27)) ? (10) : (var_1_27)))) {
   var_1_82 = var_1_81;
  } else {
   var_1_82 = var_1_54;
  }
 }
 signed long int stepLocal_32 = (((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1));
 unsigned long int stepLocal_31 = var_1_31 / ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70)));
 unsigned long int stepLocal_30 = ((((var_1_48) < (var_1_84)) ? (var_1_48) : (var_1_84))) - 8u;
 if (stepLocal_31 >= var_1_58) {
  var_1_83 = (((((var_1_25 - var_1_26)) > (var_1_29)) ? ((var_1_25 - var_1_26)) : (var_1_29)));
 } else {
  if (stepLocal_30 > ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) {
   if (((var_1_1 + var_1_31) + var_1_1) >= stepLocal_32) {
    var_1_83 = (var_1_25 - var_1_76);
   } else {
    var_1_83 = var_1_53;
   }
  } else {
   if (var_1_103) {
    var_1_83 = (var_1_54 + var_1_29);
   }
  }
 }
 if (((((16.5f) < (7.625f)) ? (16.5f) : (7.625f))) >= (var_1_99 * var_1_38)) {
  var_1_49 = var_1_28;
 } else {
  if (var_1_46 || var_1_35) {
   var_1_49 = (var_1_25 + ((((var_1_27) > ((var_1_28 + var_1_83))) ? (var_1_27) : ((var_1_28 + var_1_83)))));
  } else {
   if ((var_1_65 * var_1_36) < var_1_14) {
    var_1_49 = ((((((var_1_50 - var_1_83) - var_1_28)) > ((var_1_25 + var_1_18))) ? (((var_1_50 - var_1_83) - var_1_28)) : ((var_1_25 + var_1_18))));
   } else {
    var_1_49 = var_1_50;
   }
  }
 }
 signed long int stepLocal_20 = var_1_7;
 signed long int stepLocal_19 = -5;
 if (var_1_56 > var_1_60) {
  if ((var_1_62 / ((((var_1_56) > (var_1_59)) ? (var_1_56) : (var_1_59)))) > 3.2) {
   var_1_68 = (var_1_50 - ((var_1_69 - var_1_54) + var_1_27));
  } else {
   var_1_68 = ((((var_1_54) < ((var_1_50 - (var_1_70 - var_1_29)))) ? (var_1_54) : ((var_1_50 - (var_1_70 - var_1_29)))));
  }
 } else {
  if ((var_1_82 * var_1_53) == stepLocal_20) {
   if (stepLocal_19 < (var_1_18 - var_1_54)) {
    var_1_68 = var_1_69;
   }
  } else {
   var_1_68 = (var_1_50 - (((((var_1_71) > (var_1_29)) ? (var_1_71) : (var_1_29))) + (var_1_26 + var_1_31)));
  }
 }
 unsigned short int stepLocal_23 = var_1_69;
 unsigned char stepLocal_22 = var_1_7 >= 64;
 if (! ((var_1_42 < var_1_79) || var_1_45)) {
  if (stepLocal_23 <= var_1_11) {
   if (var_1_43 && stepLocal_22) {
    var_1_73 = var_1_27;
   } else {
    var_1_73 = 25;
   }
  } else {
   var_1_73 = ((var_1_52 + var_1_29) + (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28))) - ((((var_1_54) > (var_1_74)) ? (var_1_54) : (var_1_74)))));
  }
 }
 unsigned char stepLocal_33 = ((((var_1_49) > (var_1_42)) ? (var_1_49) : (var_1_42))) > -8;
 if (stepLocal_33 && var_1_47) {
  var_1_88 = var_1_74;
 } else {
  var_1_88 = var_1_53;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 536870911);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 536870911);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 536870912);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 536870912);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -8191);
 assume_abort_if_not(var_1_20 <= 8192);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -8191);
 assume_abort_if_not(var_1_21 <= 8191);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 190);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 64);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 31);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 31);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 2147483647);
 assume_abort_if_not(var_1_48 <= 4294967295);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 49150);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -31);
 assume_abort_if_not(var_1_52 <= 31);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= 63);
 assume_abort_if_not(var_1_53 <= 126);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 assume_abort_if_not(var_1_56 != 0.0F);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 4611686.018427388000e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427388000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427388000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427388000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_63 >= -32768);
 assume_abort_if_not(var_1_63 <= 32767);
 assume_abort_if_not(var_1_63 != 0);
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= -461168.6018427383000e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 8192);
 assume_abort_if_not(var_1_69 <= 16384);
 var_1_70 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_70 >= 16383);
 assume_abort_if_not(var_1_70 <= 32767);
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 16384);
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 63);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 63);
 assume_abort_if_not(var_1_76 <= 127);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_81 >= 16382);
 assume_abort_if_not(var_1_81 <= 32766);
 var_1_84 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_84 >= 2147483647);
 assume_abort_if_not(var_1_84 <= 4294967295);
}
void updateLastVariables(void) {
 last_1_var_1_42 = var_1_42;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_100 = var_1_100;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_97) < (last_1_var_1_100)) ? (last_1_var_1_97) : (last_1_var_1_100))) > last_1_var_1_65) ? (var_1_1 == ((signed long int) (((var_1_5 + var_1_6) - var_1_7) - var_1_8))) : (var_1_1 == ((signed long int) (var_1_5 - 2)))) && ((var_1_31 >= (var_1_6 / var_1_5)) ? ((var_1_31 > var_1_7) ? (var_1_9 == ((unsigned long int) (3867474704u - ((var_1_11 + var_1_12) + var_1_7)))) : 1) : 1)) && (var_1_10 ? (((var_1_14 - var_1_15) >= ((var_1_101 + var_1_87) + var_1_99)) ? (var_1_13 == ((signed short int) ((((((var_1_16 + var_1_17) - var_1_18)) > (var_1_19)) ? (((var_1_16 + var_1_17) - var_1_18)) : (var_1_19))))) : (var_1_13 == ((signed short int) (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + (((((var_1_20 + var_1_21)) > (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? ((var_1_20 + var_1_21)) : (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))))) : 1)) && (((128u + var_1_12) > (var_1_16 / var_1_6)) ? (((var_1_8 * ((((var_1_5) > (var_1_18)) ? (var_1_5) : (var_1_18)))) < var_1_19) ? (var_1_22 == ((signed long int) (var_1_16 + ((((var_1_12) > (-256)) ? (var_1_12) : (-256)))))) : ((var_1_6 < var_1_5) ? (var_1_22 == ((signed long int) (var_1_17 - (var_1_23 - var_1_11)))) : (var_1_22 == ((signed long int) var_1_19)))) : (var_1_22 == ((signed long int) var_1_8)))) && ((var_1_8 < var_1_41) ? (var_1_24 == ((unsigned char) (((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) - (((((var_1_27) < (16)) ? (var_1_27) : (16))) + (var_1_28 - var_1_29))))) : 1)) && (var_1_30 == ((unsigned char) (! var_1_10)))) && ((1 == (var_1_28 << var_1_6)) ? (var_1_77 ? (var_1_31 == ((unsigned long int) (var_1_32 + ((var_1_18 + var_1_29) + var_1_11)))) : (var_1_31 == ((unsigned long int) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))) : (((var_1_21 + var_1_8) >= var_1_18) ? (((var_1_8 + ((((var_1_19) < (var_1_26)) ? (var_1_19) : (var_1_26)))) == var_1_98) ? (var_1_31 == ((unsigned long int) var_1_18)) : 1) : 1))) && ((var_1_97 >= var_1_14) ? (var_1_33 == ((unsigned char) ((var_1_10 || (! var_1_34)) && var_1_35))) : 1)) && (((var_1_86 / var_1_25) >= (var_1_1 / ((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23))))) ? (var_1_36 == ((float) (var_1_38 + 200.75f))) : 1)) && ((var_1_9 == ((((10u) < ((var_1_26 / var_1_5))) ? (10u) : ((var_1_26 / var_1_5))))) ? ((var_1_36 == (var_1_38 * (- var_1_14))) ? (var_1_39 == ((unsigned char) ((((var_1_26) < ((var_1_28 + var_1_27))) ? (var_1_26) : ((var_1_28 + var_1_27)))))) : ((var_1_99 >= var_1_38) ? (var_1_39 == ((unsigned char) var_1_26)) : (var_1_39 == ((unsigned char) (((((var_1_29 + var_1_28)) < (var_1_25)) ? ((var_1_29 + var_1_28)) : (var_1_25))))))) : (((1.5f / 9.5f) != var_1_36) ? (var_1_39 == ((unsigned char) 50)) : 1))) && (((var_1_26 << var_1_18) >= -64) ? (var_1_40 == ((signed char) (var_1_26 + (var_1_28 - var_1_29)))) : (var_1_103 ? (var_1_40 == ((signed char) var_1_26)) : 1))) && (var_1_33 ? (var_1_41 == ((signed long int) ((((var_1_8) < (((var_1_29 + var_1_7) - var_1_102))) ? (var_1_8) : (((var_1_29 + var_1_7) - var_1_102)))))) : 1)) && ((-16 >= ((var_1_19 * var_1_5) ^ var_1_1)) ? (var_1_42 == ((signed long int) ((((-10000000) > (((((last_1_var_1_42) < (var_1_8)) ? (last_1_var_1_42) : (var_1_8))))) ? (-10000000) : (((((last_1_var_1_42) < (var_1_8)) ? (last_1_var_1_42) : (var_1_8)))))))) : ((var_1_100 >= 24.5f) ? (var_1_42 == ((signed long int) (var_1_16 - (var_1_23 - last_1_var_1_42)))) : 1))) && ((var_1_100 > var_1_99) ? ((var_1_12 == var_1_5) ? ((var_1_35 && var_1_47) ? (var_1_43 == ((unsigned char) (var_1_35 && ((var_1_97 > 16.5f) || var_1_44)))) : (var_1_43 == ((unsigned char) ((var_1_10 || var_1_34) || (var_1_44 && var_1_45))))) : (var_1_43 == ((unsigned char) (var_1_44 && (var_1_35 && var_1_46))))) : ((var_1_12 < 100u) ? (var_1_43 == ((unsigned char) ((! (! var_1_46)) && var_1_35))) : (var_1_43 == ((unsigned char) (var_1_45 || (var_1_10 && var_1_34))))))) && ((var_1_36 == var_1_87) ? (var_1_47 == ((unsigned char) (var_1_35 && (! var_1_44)))) : ((var_1_32 <= (var_1_48 - var_1_11)) ? (var_1_47 == ((unsigned char) (! (! (var_1_33 || var_1_44))))) : 1))) && ((((((16.5f) < (7.625f)) ? (16.5f) : (7.625f))) >= (var_1_99 * var_1_38)) ? (var_1_49 == ((unsigned short int) var_1_28)) : ((var_1_46 || var_1_35) ? (var_1_49 == ((unsigned short int) (var_1_25 + ((((var_1_27) > ((var_1_28 + var_1_83))) ? (var_1_27) : ((var_1_28 + var_1_83))))))) : (((var_1_65 * var_1_36) < var_1_14) ? (var_1_49 == ((unsigned short int) ((((((var_1_50 - var_1_83) - var_1_28)) > ((var_1_25 + var_1_18))) ? (((var_1_50 - var_1_83) - var_1_28)) : ((var_1_25 + var_1_18)))))) : (var_1_49 == ((unsigned short int) var_1_50)))))) && ((var_1_21 <= 128) ? ((((((var_1_86) > ((4 / var_1_28))) ? (var_1_86) : ((4 / var_1_28)))) >= var_1_41) ? (var_1_51 == ((signed char) (var_1_28 + (var_1_29 + var_1_52)))) : (var_1_51 == ((signed char) var_1_26))) : (var_1_51 == ((signed char) (var_1_29 - ((((((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28)))) > ((var_1_53 - var_1_54))) ? (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28)))) : ((var_1_53 - var_1_54))))))))) && ((((var_1_97 + var_1_38) / var_1_56) <= (((((var_1_14 * var_1_36)) > (((((var_1_15) < (var_1_87)) ? (var_1_15) : (var_1_87))))) ? ((var_1_14 * var_1_36)) : (((((var_1_15) < (var_1_87)) ? (var_1_15) : (var_1_87))))))) ? ((var_1_87 >= ((((var_1_36) < (var_1_56)) ? (var_1_36) : (var_1_56)))) ? ((var_1_40 <= var_1_19) ? (var_1_55 == ((signed long int) (((((last_1_var_1_55 + (var_1_28 - var_1_89))) > (var_1_26)) ? ((last_1_var_1_55 + (var_1_28 - var_1_89))) : (var_1_26))))) : (var_1_55 == ((signed long int) var_1_52))) : 1) : (var_1_55 == ((signed long int) (var_1_22 + var_1_27))))) && ((var_1_90 < ((((var_1_41) > (-8)) ? (var_1_41) : (-8)))) ? (var_1_57 == ((signed long int) (var_1_18 - (var_1_23 - (var_1_5 - var_1_54))))) : 1)) && ((((var_1_59 - var_1_60) - (var_1_61 + var_1_62)) == (- (var_1_87 / var_1_56))) ? ((var_1_16 >= (var_1_22 % ((((var_1_53) < (var_1_63)) ? (var_1_53) : (var_1_63))))) ? (var_1_58 == ((signed char) (5 - ((((((((var_1_29) < (var_1_26)) ? (var_1_29) : (var_1_26)))) < (var_1_54)) ? (((((var_1_29) < (var_1_26)) ? (var_1_29) : (var_1_26)))) : (var_1_54)))))) : (var_1_58 == ((signed char) (((((var_1_26) < (var_1_29)) ? (var_1_26) : (var_1_29))) - ((((var_1_27) > (var_1_54)) ? (var_1_27) : (var_1_54))))))) : 1)) && (var_1_64 == ((signed long int) ((((var_1_52) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_52) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))))) && ((((((var_1_31) < (var_1_6)) ? (var_1_31) : (var_1_6))) >= var_1_5) ? (var_1_65 == ((float) (var_1_38 + var_1_66))) : (var_1_65 == ((float) (var_1_61 - var_1_60))))) && (var_1_44 ? ((var_1_59 <= var_1_14) ? (var_1_67 == ((signed short int) (var_1_22 + (var_1_27 + var_1_21)))) : ((var_1_5 >= var_1_22) ? (var_1_67 == ((signed short int) ((((var_1_27) > (var_1_22)) ? (var_1_27) : (var_1_22))))) : (((var_1_63 / var_1_53) < ((var_1_9 + var_1_20) / var_1_23)) ? (var_1_67 == ((signed short int) (var_1_20 + (var_1_29 - var_1_27)))) : 1))) : ((var_1_87 > var_1_99) ? (var_1_67 == ((signed short int) (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) - var_1_29))) : (var_1_67 == ((signed short int) (var_1_27 - var_1_26)))))) && ((var_1_56 > var_1_60) ? (((var_1_62 / ((((var_1_56) > (var_1_59)) ? (var_1_56) : (var_1_59)))) > 3.2) ? (var_1_68 == ((unsigned short int) (var_1_50 - ((var_1_69 - var_1_54) + var_1_27)))) : (var_1_68 == ((unsigned short int) ((((var_1_54) < ((var_1_50 - (var_1_70 - var_1_29)))) ? (var_1_54) : ((var_1_50 - (var_1_70 - var_1_29)))))))) : (((var_1_82 * var_1_53) == var_1_7) ? ((-5 < (var_1_18 - var_1_54)) ? (var_1_68 == ((unsigned short int) var_1_69)) : 1) : (var_1_68 == ((unsigned short int) (var_1_50 - (((((var_1_71) > (var_1_29)) ? (var_1_71) : (var_1_29))) + (var_1_26 + var_1_31)))))))) && ((var_1_8 == var_1_98) ? ((! var_1_35) ? (((1.25f * var_1_62) >= var_1_60) ? (var_1_72 == ((signed char) (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + var_1_29))) : (var_1_72 == ((signed char) ((((((((var_1_29) < ((var_1_53 - var_1_54))) ? (var_1_29) : ((var_1_53 - var_1_54))))) < (((((var_1_52) < (var_1_26)) ? (var_1_52) : (var_1_26))))) ? (((((var_1_29) < ((var_1_53 - var_1_54))) ? (var_1_29) : ((var_1_53 - var_1_54))))) : (((((var_1_52) < (var_1_26)) ? (var_1_52) : (var_1_26))))))))) : (var_1_72 == ((signed char) var_1_53))) : 1)) && ((! ((var_1_42 < var_1_79) || var_1_45)) ? ((var_1_69 <= var_1_11) ? ((var_1_43 && (var_1_7 >= 64)) ? (var_1_73 == ((signed char) var_1_27)) : (var_1_73 == ((signed char) 25))) : (var_1_73 == ((signed char) ((var_1_52 + var_1_29) + (((((var_1_26) < (var_1_28)) ? (var_1_26) : (var_1_28))) - ((((var_1_54) > (var_1_74)) ? (var_1_54) : (var_1_74)))))))) : 1)) && ((var_1_64 < var_1_13) ? (((var_1_28 + var_1_32) > ((var_1_48 - var_1_23) / ((((256u) > (var_1_70)) ? (256u) : (var_1_70))))) ? (var_1_75 == ((unsigned char) var_1_27)) : 1) : (var_1_75 == ((unsigned char) (var_1_53 + (var_1_76 - var_1_74)))))) && ((! var_1_34) ? (var_1_77 == ((unsigned char) ((var_1_70 >= var_1_76) || var_1_44))) : (var_1_77 == ((unsigned char) (var_1_43 && var_1_34))))) && ((var_1_50 <= var_1_28) ? (var_1_78 == ((signed char) (((((var_1_26) > (var_1_29)) ? (var_1_26) : (var_1_29))) + var_1_74))) : (var_1_78 == ((signed char) var_1_27)))) && ((var_1_60 < var_1_87) ? (var_1_43 ? (var_1_79 == ((signed short int) (var_1_26 - var_1_41))) : (((var_1_80 - var_1_14) <= 8.75) ? (var_1_79 == ((signed short int) ((((((((var_1_25) < (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))) ? (var_1_25) : (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))))) < (((var_1_76 - var_1_28) + 8))) ? (((((var_1_25) < (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))) ? (var_1_25) : (((((var_1_53) > (var_1_71)) ? (var_1_53) : (var_1_71))))))) : (((var_1_76 - var_1_28) + 8)))))) : ((var_1_31 <= ((((last_1_var_1_79) > (var_1_17)) ? (last_1_var_1_79) : (var_1_17)))) ? (var_1_79 == ((signed short int) ((((((var_1_81 - last_1_var_1_79)) > (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))))) ? ((var_1_81 - last_1_var_1_79)) : (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))))) - var_1_29))) : (var_1_79 == ((signed short int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))))))) : 1)) && ((! var_1_35) ? (((var_1_96 & var_1_63) <= var_1_9) ? (var_1_82 == ((unsigned short int) var_1_81)) : ((var_1_99 >= (- var_1_62)) ? (var_1_82 == ((unsigned short int) ((((((((var_1_76) < (var_1_27)) ? (var_1_76) : (var_1_27)))) < (var_1_54)) ? (((((var_1_76) < (var_1_27)) ? (var_1_76) : (var_1_27)))) : (var_1_54))))) : (var_1_82 == ((unsigned short int) ((((((var_1_71) > (var_1_69)) ? (var_1_71) : (var_1_69))) + (var_1_95 + var_1_102)) + (((((var_1_70) < (30096)) ? (var_1_70) : (30096))) - var_1_74)))))) : ((var_1_54 < ((((10) < (var_1_27)) ? (10) : (var_1_27)))) ? (var_1_82 == ((unsigned short int) var_1_81)) : (var_1_82 == ((unsigned short int) var_1_54))))) && (((var_1_31 / ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70)))) >= var_1_58) ? (var_1_83 == ((unsigned char) (((((var_1_25 - var_1_26)) > (var_1_29)) ? ((var_1_25 - var_1_26)) : (var_1_29))))) : (((((((var_1_48) < (var_1_84)) ? (var_1_48) : (var_1_84))) - 8u) > ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) ? ((((var_1_1 + var_1_31) + var_1_1) >= ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))) ? (var_1_83 == ((unsigned char) (var_1_25 - var_1_76))) : (var_1_83 == ((unsigned char) var_1_53))) : (var_1_103 ? (var_1_83 == ((unsigned char) (var_1_54 + var_1_29))) : 1)))) && ((var_1_60 < var_1_59) ? (var_1_86 == ((unsigned short int) (var_1_26 + ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25)))))) : 1)) && (var_1_30 ? (var_1_87 == ((double) (16.25 + var_1_66))) : 1)) && (((((((var_1_49) > (var_1_42)) ? (var_1_49) : (var_1_42))) > -8) && var_1_47) ? (var_1_88 == ((unsigned char) var_1_74)) : (var_1_88 == ((unsigned char) var_1_53)))) && (var_1_89 == ((unsigned short int) var_1_76))) && (var_1_45 ? (var_1_90 == ((signed short int) last_1_var_1_90)) : (var_1_90 == ((signed short int) var_1_18)))) && (var_1_44 ? (var_1_91 == ((unsigned char) var_1_28)) : 1)) && (var_1_92 == ((signed char) var_1_29))) && (var_1_93 == ((unsigned char) var_1_26))) && (var_1_94 == ((signed char) var_1_26))) && (var_1_103 ? (var_1_95 == ((unsigned short int) var_1_29)) : (var_1_95 == ((unsigned short int) 25)))) && (var_1_35 ? (var_1_96 == ((unsigned short int) var_1_71)) : (var_1_96 == ((unsigned short int) var_1_98)))) && (var_1_44 ? (var_1_97 == ((double) 64.5)) : 1)) && (var_1_44 ? (var_1_98 == ((unsigned long int) var_1_26)) : 1)) && (var_1_99 == ((float) var_1_62))) && (var_1_46 ? (var_1_100 == ((float) var_1_62)) : (var_1_100 == ((float) var_1_60)))) && (var_1_101 == ((double) var_1_60))) && (var_1_35 ? (var_1_102 == ((unsigned char) 10)) : 1)) && (var_1_103 == ((unsigned char) var_1_34))) && (var_1_33 ? (var_1_104 == ((signed short int) var_1_26)) : (var_1_104 == ((signed short int) var_1_90)))) && ((var_1_23 <= var_1_57) ? (var_1_105 == ((signed short int) var_1_25)) : (var_1_105 == ((signed short int) ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < (((((var_1_104) > (((((var_1_18) < (5)) ? (var_1_18) : (5))))) ? (var_1_104) : (((((var_1_18) < (5)) ? (var_1_18) : (5)))))))) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_104) > (((((var_1_18) < (5)) ? (var_1_18) : (5))))) ? (var_1_104) : (((((var_1_18) < (5)) ? (var_1_18) : (5))))))))))))
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
