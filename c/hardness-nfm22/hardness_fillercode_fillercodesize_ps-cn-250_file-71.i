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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
signed short int var_1_14 = 32;
signed short int var_1_15 = 25;
signed short int var_1_16 = 23809;
signed short int var_1_17 = 2;
float var_1_18 = 499.25;
signed long int var_1_19 = -4;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 16;
signed char var_1_22 = -10;
signed char var_1_23 = 25;
signed char var_1_24 = 4;
float var_1_25 = 3.5;
float var_1_26 = 0.94;
float var_1_27 = 32.5;
float var_1_28 = 4.4;
float var_1_29 = 1.75;
signed long int var_1_30 = 32;
signed long int var_1_31 = -100;
signed long int var_1_32 = -128;
signed long int var_1_33 = 8;
signed char var_1_34 = 5;
signed char var_1_35 = -4;
signed char var_1_36 = 4;
signed long int var_1_37 = 2;
unsigned short int var_1_38 = 8;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned short int var_1_41 = 36156;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
signed char var_1_45 = 2;
unsigned char var_1_46 = 128;
signed long int var_1_47 = 32;
signed long int var_1_48 = 32;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
signed char var_1_51 = -50;
unsigned long int var_1_52 = 1;
unsigned short int var_1_53 = 2;
unsigned short int var_1_54 = 56947;
float var_1_55 = 1.75;
float var_1_56 = 2.85;
float var_1_57 = 10.1;
float var_1_58 = 9.8;
float var_1_59 = 255.5;
float var_1_60 = 64.75;
unsigned long int var_1_61 = 10;
signed long int var_1_62 = -10;
float var_1_63 = 128.8;
float var_1_64 = 0.0;
float var_1_65 = 50.5;
float var_1_66 = 2.5;
unsigned long int var_1_67 = 10000000;
unsigned char var_1_68 = 0;
float var_1_69 = 100000000000.2;
signed char var_1_70 = 4;
signed char var_1_71 = 1;
float var_1_72 = 1.5;
unsigned long int var_1_73 = 0;
unsigned char var_1_74 = 1;
signed long int var_1_75 = 1434612823;
unsigned long int var_1_76 = 2;
unsigned long int var_1_77 = 3492240326;
signed short int var_1_78 = 4;
signed char var_1_79 = 64;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 1;
float var_1_82 = 15.6;
float var_1_83 = 64.625;
signed long int var_1_84 = -128;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 25;
signed char var_1_87 = 16;
float last_1_var_1_12 = 2.375;
signed short int last_1_var_1_14 = 32;
unsigned short int last_1_var_1_20 = 10;
unsigned short int last_1_var_1_21 = 16;
void initially(void) {
}
void step(void) {
 if ((((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_27) <= (var_1_28 + var_1_29)) {
  if (((((var_1_30) > ((var_1_31 / var_1_32))) ? (var_1_30) : ((var_1_31 / var_1_32)))) < var_1_33) {
   var_1_24 = ((var_1_34 + var_1_35) + ((((var_1_36 - 50) < 0 ) ? -(var_1_36 - 50) : (var_1_36 - 50))));
  }
 } else {
  var_1_24 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))));
 }
 if ((var_1_31 % ((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) <= var_1_33) {
  if ((((((var_1_34) > (var_1_38)) ? (var_1_34) : (var_1_38))) <= var_1_30) || (var_1_39 || var_1_40)) {
   if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) <= var_1_28) {
    if (var_1_27 <= var_1_25) {
     var_1_37 = ((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (((((var_1_35) > (((((var_1_38) < (-64)) ? (var_1_38) : (-64))))) ? (var_1_35) : (((((var_1_38) < (-64)) ? (var_1_38) : (-64)))))))) ? (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) : (((((var_1_35) > (((((var_1_38) < (-64)) ? (var_1_38) : (-64))))) ? (var_1_35) : (((((var_1_38) < (-64)) ? (var_1_38) : (-64)))))))));
    } else {
     var_1_37 = ((((((((var_1_24) < (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_24) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) < (var_1_35)) ? (((((var_1_24) < (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_24) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) : (var_1_35)));
    }
   }
  } else {
   if (var_1_29 >= var_1_25) {
    var_1_37 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
   } else {
    if ((var_1_41 - var_1_36) < ((((var_1_32) < (var_1_34)) ? (var_1_32) : (var_1_34)))) {
     var_1_37 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
    } else {
     var_1_37 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
    }
   }
  }
 }
 if (var_1_26 > var_1_27) {
  if ((var_1_32 + var_1_41) == var_1_33) {
   var_1_42 = (var_1_39 || (! (var_1_43 || var_1_44)));
  }
 }
 if ((var_1_46 - var_1_36) > ((var_1_47 / var_1_32) | var_1_30)) {
  if (((((var_1_37) > (var_1_31)) ? (var_1_37) : (var_1_31))) < var_1_30) {
   var_1_45 = var_1_36;
  }
 }
 if ((((((var_1_37) < (var_1_34)) ? (var_1_37) : (var_1_34))) >> var_1_45) < var_1_32) {
  var_1_48 = ((((-4) < ((((((var_1_38 - var_1_41)) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? ((var_1_38 - var_1_41)) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))))) ? (-4) : ((((((var_1_38 - var_1_41)) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? ((var_1_38 - var_1_41)) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))))));
 }
 if (((((var_1_32) > (128)) ? (var_1_32) : (128))) <= var_1_33) {
  if (var_1_44) {
   var_1_49 = var_1_43;
  } else {
   var_1_49 = (var_1_42 || var_1_50);
  }
 }
 if (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) <= (- ((((var_1_25) < (var_1_28)) ? (var_1_25) : (var_1_28))))) {
  var_1_51 = ((((var_1_36 + var_1_34) < 0 ) ? -(var_1_36 + var_1_34) : (var_1_36 + var_1_34)));
 } else {
  var_1_51 = var_1_36;
 }
 if (var_1_25 <= var_1_28) {
  var_1_53 = (((((var_1_54 - var_1_36)) > (var_1_46)) ? ((var_1_54 - var_1_36)) : (var_1_46)));
 }
 if ((128 - var_1_36) > var_1_35) {
  if (var_1_35 > var_1_38) {
   var_1_55 = ((((((((var_1_56) < (((((var_1_57) > (var_1_58)) ? (var_1_57) : (var_1_58))))) ? (var_1_56) : (((((var_1_57) > (var_1_58)) ? (var_1_57) : (var_1_58))))))) > (((((((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60)))) < (256.875f)) ? (((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60)))) : (256.875f))))) ? (((((var_1_56) < (((((var_1_57) > (var_1_58)) ? (var_1_57) : (var_1_58))))) ? (var_1_56) : (((((var_1_57) > (var_1_58)) ? (var_1_57) : (var_1_58))))))) : (((((((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60)))) < (256.875f)) ? (((((var_1_59) < (var_1_60)) ? (var_1_59) : (var_1_60)))) : (256.875f))))));
  }
 } else {
  var_1_55 = ((((99.5f) > (var_1_59)) ? (99.5f) : (var_1_59)));
 }
 if (var_1_55 < var_1_57) {
  if (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) < var_1_32) {
   var_1_61 = var_1_46;
  }
 } else {
  var_1_61 = (((((var_1_38) < (100u)) ? (var_1_38) : (100u))) + (((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) < 0 ) ? -((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) : ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))))));
 }
 if ((var_1_47 * var_1_37) < (((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38))) - ((((var_1_46) > (25)) ? (var_1_46) : (25))))) {
  if (var_1_40) {
   var_1_62 = var_1_34;
  }
 }
 if ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) < 0 ) ? -((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) : ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) >= var_1_58) {
  var_1_63 = ((((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) - var_1_65) - var_1_66);
 } else {
  if ((2 >> var_1_46) < (((((((var_1_45) < (var_1_38)) ? (var_1_45) : (var_1_38))) < 0 ) ? -((((var_1_45) < (var_1_38)) ? (var_1_45) : (var_1_38))) : ((((var_1_45) < (var_1_38)) ? (var_1_45) : (var_1_38)))))) {
   var_1_63 = ((((var_1_57) > (var_1_64)) ? (var_1_57) : (var_1_64)));
  } else {
   var_1_63 = ((((var_1_57) < (var_1_59)) ? (var_1_57) : (var_1_59)));
  }
 }
 if (var_1_28 >= var_1_59) {
  var_1_67 = var_1_53;
 }
 if ((~ var_1_38) < (var_1_53 & (10 + var_1_37))) {
  var_1_68 = var_1_44;
 }
 if (var_1_45 >= (var_1_51 >> ((((var_1_70) > (var_1_71)) ? (var_1_70) : (var_1_71))))) {
  if (var_1_68) {
   if (var_1_33 < var_1_47) {
    var_1_69 = ((((((((var_1_66 - var_1_72) < 0 ) ? -(var_1_66 - var_1_72) : (var_1_66 - var_1_72)))) < (var_1_64)) ? (((((var_1_66 - var_1_72) < 0 ) ? -(var_1_66 - var_1_72) : (var_1_66 - var_1_72)))) : (var_1_64)));
   } else {
    var_1_69 = (var_1_72 - var_1_65);
   }
  }
 } else {
  var_1_69 = var_1_65;
 }
 if (var_1_74) {
  if (((var_1_75 - var_1_41) - var_1_54) <= ((((2) > (var_1_45)) ? (2) : (var_1_45)))) {
   var_1_73 = var_1_70;
  } else {
   var_1_73 = 4u;
  }
 } else {
  var_1_73 = var_1_75;
 }
 if ((((((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))) < 0 ) ? -((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))) : ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))))) <= var_1_32) {
  var_1_76 = (var_1_77 - var_1_46);
 } else {
  if (var_1_38 >= var_1_47) {
   var_1_76 = (var_1_70 + var_1_46);
  }
 }
 if (var_1_57 <= (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))) + var_1_55)) {
  var_1_78 = ((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70)))) - var_1_71);
 }
 if (((((var_1_54 - var_1_53) < 0 ) ? -(var_1_54 - var_1_53) : (var_1_54 - var_1_53))) <= var_1_24) {
  var_1_79 = ((((var_1_36 + var_1_70) < 0 ) ? -(var_1_36 + var_1_70) : (var_1_36 + var_1_70)));
 } else {
  var_1_79 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if (var_1_34 >= (var_1_71 | (var_1_79 >> var_1_36))) {
  var_1_80 = (var_1_50 && var_1_81);
 }
 if ((~ var_1_52) <= var_1_73) {
  var_1_82 = (((((var_1_83) > (((((var_1_66) < (var_1_72)) ? (var_1_66) : (var_1_72))))) ? (var_1_83) : (((((var_1_66) < (var_1_72)) ? (var_1_66) : (var_1_72)))))) - ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))));
 }
 if (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) < var_1_66) {
  var_1_84 = var_1_35;
 }
 if (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) >= (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) * (var_1_65 - var_1_27))) {
  if (var_1_43) {
   if (var_1_75 < var_1_41) {
    var_1_85 = (var_1_50 && (! (var_1_39 && var_1_44)));
   } else {
    if (var_1_80) {
     var_1_85 = (var_1_74 && var_1_44);
    } else {
     var_1_85 = var_1_50;
    }
   }
  }
 }
 if ((var_1_71 & var_1_38) >= var_1_75) {
  if (var_1_71 <= var_1_87) {
   var_1_86 = var_1_70;
  }
 }
 signed long int stepLocal_0 = var_1_4 - var_1_5;
 if (var_1_2) {
  if (stepLocal_0 > ((last_1_var_1_14 + last_1_var_1_20) * last_1_var_1_21)) {
   var_1_1 = (var_1_9 - var_1_5);
  }
 } else {
  if (var_1_3) {
   var_1_1 = 32;
  } else {
   var_1_1 = var_1_5;
  }
 }
 unsigned short int stepLocal_2 = var_1_1;
 if (! (var_1_5 < var_1_1)) {
  if (last_1_var_1_14 >= stepLocal_2) {
   var_1_14 = (((((128) < (((((2) < (var_1_4)) ? (2) : (var_1_4))))) ? (128) : (((((2) < (var_1_4)) ? (2) : (var_1_4)))))) + var_1_5);
  } else {
   var_1_14 = ((var_1_5 - var_1_15) + var_1_4);
  }
 } else {
  var_1_14 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_15 - (var_1_16 - var_1_17)))));
 }
 var_1_10 = var_1_11;
 signed char stepLocal_1 = var_1_4;
 if (last_1_var_1_12 >= ((var_1_11 / var_1_13) / 31.9f)) {
  if (var_1_14 > stepLocal_1) {
   var_1_12 = var_1_11;
  } else {
   var_1_12 = var_1_11;
  }
 }
 var_1_18 = ((((((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) > (5.5f)) ? (((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) : (5.5f)));
 var_1_20 = var_1_15;
 var_1_21 = var_1_5;
 var_1_22 = var_1_23;
 if (var_1_3) {
  var_1_19 = ((((var_1_17) > ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))) ? (var_1_17) : ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))));
 } else {
  var_1_19 = var_1_5;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 32);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -31);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 65535);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65535);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 255);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= -2147483648);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 4294967295);
 assume_abort_if_not(var_1_52 != 0);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 32767);
 assume_abort_if_not(var_1_54 <= 65534);
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -922337.2036854765600e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -922337.2036854765600e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -922337.2036854765600e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= -922337.2036854765600e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -922337.2036854765600e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854765600e+12F && var_1_60 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= -922337.2036854765600e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= -461168.6018427382800e+13F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854765600e+12F && var_1_66 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 8);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 8);
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 1);
 var_1_75 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_75 >= 1073741823);
 assume_abort_if_not(var_1_75 <= 2147483647);
 var_1_77 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_77 >= 2147483647);
 assume_abort_if_not(var_1_77 <= 4294967294);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 1);
 assume_abort_if_not(var_1_81 <= 1);
 var_1_83 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854765600e+12F && var_1_83 >= 1.0e-20F ));
 var_1_87 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_87 >= -128);
 assume_abort_if_not(var_1_87 <= 127);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
}
int property() {
 return ((((((((var_1_2 ? (((var_1_4 - var_1_5) > ((last_1_var_1_14 + last_1_var_1_20) * last_1_var_1_21)) ? (var_1_1 == ((unsigned short int) (var_1_9 - var_1_5))) : 1) : (var_1_3 ? (var_1_1 == ((unsigned short int) 32)) : (var_1_1 == ((unsigned short int) var_1_5)))) && (var_1_10 == ((float) var_1_11))) && ((last_1_var_1_12 >= ((var_1_11 / var_1_13) / 31.9f)) ? ((var_1_14 > var_1_4) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) var_1_11))) : 1)) && ((! (var_1_5 < var_1_1)) ? ((last_1_var_1_14 >= var_1_1) ? (var_1_14 == ((signed short int) (((((128) < (((((2) < (var_1_4)) ? (2) : (var_1_4))))) ? (128) : (((((2) < (var_1_4)) ? (2) : (var_1_4)))))) + var_1_5))) : (var_1_14 == ((signed short int) ((var_1_5 - var_1_15) + var_1_4)))) : (var_1_14 == ((signed short int) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : ((var_1_15 - (var_1_16 - var_1_17))))))))) && (var_1_18 == ((float) ((((((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) > (5.5f)) ? (((((255.5f) > (var_1_11)) ? (255.5f) : (var_1_11)))) : (5.5f)))))) && (var_1_3 ? (var_1_19 == ((signed long int) ((((var_1_17) > ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21)))))) ? (var_1_17) : ((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))) + ((((var_1_16) > (var_1_21)) ? (var_1_16) : (var_1_21))))))))) : (var_1_19 == ((signed long int) var_1_5)))) && (var_1_20 == ((unsigned short int) var_1_15))) && (var_1_21 == ((unsigned short int) var_1_5))) && (var_1_22 == ((signed char) var_1_23))
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
