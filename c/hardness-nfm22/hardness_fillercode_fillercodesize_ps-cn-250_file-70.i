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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 5.05;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 25;
unsigned short int var_1_22 = 5;
unsigned short int var_1_23 = 8;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 5;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
signed char var_1_29 = -4;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
double var_1_32 = 15.9;
double var_1_33 = 24.5;
double var_1_34 = 8.125;
double var_1_35 = 1000000000.2;
signed short int var_1_36 = 0;
signed short int var_1_37 = 8;
signed short int var_1_38 = 4;
signed long int var_1_39 = -64;
signed long int var_1_40 = -10;
float var_1_41 = 3.8;
float var_1_42 = 3.6;
float var_1_43 = 127.25;
signed char var_1_44 = -1;
signed char var_1_45 = 64;
signed char var_1_46 = -8;
signed char var_1_47 = 0;
signed char var_1_48 = 25;
signed char var_1_49 = -8;
signed char var_1_50 = -2;
signed char var_1_51 = 25;
float var_1_52 = 127.75;
float var_1_53 = 255.5;
float var_1_54 = 32.4;
float var_1_55 = 100.09;
signed long int var_1_56 = 4;
unsigned char var_1_57 = 10;
unsigned long int var_1_58 = 100;
float var_1_59 = 32.4;
signed char var_1_60 = 50;
signed char var_1_61 = 64;
signed long int var_1_62 = -10;
unsigned short int var_1_63 = 10;
unsigned short int var_1_64 = 24743;
unsigned short int var_1_65 = 29101;
unsigned short int var_1_66 = 57497;
unsigned long int var_1_67 = 0;
double var_1_68 = 1.7;
unsigned long int var_1_69 = 2912466723;
double var_1_70 = 3.55;
double var_1_71 = 499.4;
signed long int var_1_72 = -16;
double var_1_73 = 16.125;
double var_1_74 = 32.5;
signed long int var_1_75 = 50;
unsigned short int var_1_76 = 5;
unsigned char var_1_77 = 0;
unsigned long int var_1_78 = 1;
signed char var_1_79 = -4;
double var_1_80 = 16.75;
double var_1_81 = 7.4;
unsigned short int var_1_82 = 8;
unsigned char var_1_83 = 1;
signed long int var_1_84 = -128;
unsigned char var_1_85 = 0;
signed char var_1_86 = 4;
signed char var_1_87 = 10;
float var_1_88 = 2.4;
unsigned char var_1_89 = 5;
unsigned char var_1_90 = 128;
signed long int var_1_91 = -100;
double var_1_92 = 16.38;
unsigned char var_1_93 = 32;
double last_1_var_1_1 = 5.05;
unsigned short int last_1_var_1_9 = 1;
unsigned long int last_1_var_1_11 = 8;
unsigned char last_1_var_1_14 = 32;
unsigned char last_1_var_1_20 = 0;
void initially(void) {
}
void step(void) {
 if (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) > var_1_24) {
  var_1_21 = (((((((((var_1_25) < (0)) ? (var_1_25) : (0))) + var_1_26)) < (16)) ? ((((((var_1_25) < (0)) ? (var_1_25) : (0))) + var_1_26)) : (16)));
 }
 if ((var_1_23 <= var_1_22) && var_1_28) {
  if (! (((((var_1_29) > (var_1_23)) ? (var_1_29) : (var_1_23))) < (var_1_26 & var_1_24))) {
   var_1_27 = var_1_30;
  } else {
   if ((~ var_1_24) >= (var_1_29 & ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) {
    var_1_27 = (var_1_28 || var_1_30);
   } else {
    var_1_27 = (var_1_30 || var_1_31);
   }
  }
 }
 var_1_32 = (((((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) < (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) ? ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) : (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))));
 if (var_1_34 >= ((((var_1_32) > (16.775)) ? (var_1_32) : (16.775)))) {
  var_1_36 = (var_1_37 - var_1_38);
 }
 if (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < var_1_25) {
  if (var_1_21 > var_1_38) {
   var_1_39 = (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - var_1_38);
  } else {
   var_1_39 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
  }
 }
 if (var_1_39 < var_1_21) {
  var_1_41 = (499.75f - ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) < (var_1_42)) ? (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (var_1_42))));
 } else {
  if (var_1_22 > var_1_38) {
   var_1_41 = (var_1_42 - var_1_43);
  } else {
   var_1_41 = var_1_42;
  }
 }
 if ((~ var_1_21) <= ((((var_1_39) < ((-32 % -8))) ? (var_1_39) : ((-32 % -8))))) {
  if ((((((var_1_25) < (var_1_37)) ? (var_1_25) : (var_1_37))) - var_1_26) <= var_1_36) {
   var_1_44 = ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)));
  } else {
   if (var_1_38 >= var_1_40) {
    var_1_44 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
   } else {
    var_1_44 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
   }
  }
 } else {
  if (var_1_28) {
   if (var_1_30 || var_1_27) {
    if (! (var_1_22 <= var_1_24)) {
     var_1_44 = -4;
    } else {
     var_1_44 = ((((2) < 0 ) ? -(2) : (2)));
    }
   }
  } else {
   if (var_1_43 <= var_1_33) {
    var_1_44 = (var_1_48 + ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) > (((((var_1_50) < (var_1_51)) ? (var_1_50) : (var_1_51))))) ? (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : (((((var_1_50) < (var_1_51)) ? (var_1_50) : (var_1_51)))))));
   } else {
    if (var_1_45 < (var_1_51 << var_1_40)) {
     var_1_44 = ((((var_1_47) > ((((((((100) < 0 ) ? -(100) : (100))) < 0 ) ? -((((100) < 0 ) ? -(100) : (100))) : ((((100) < 0 ) ? -(100) : (100))))))) ? (var_1_47) : ((((((((100) < 0 ) ? -(100) : (100))) < 0 ) ? -((((100) < 0 ) ? -(100) : (100))) : ((((100) < 0 ) ? -(100) : (100))))))));
    }
   }
  }
 }
 if ((8 / -64) >= var_1_44) {
  if (4 >= var_1_51) {
   var_1_52 = ((var_1_53 + var_1_54) + var_1_55);
  }
 } else {
  var_1_52 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
 }
 if ((var_1_24 % var_1_57) == 10) {
  if ((~ 1u) > (var_1_57 / var_1_58)) {
   var_1_56 = (((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) < 0 ) ? -((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) : ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))));
  }
 } else {
  if (((var_1_40 | var_1_58) * 10) > (~ var_1_39)) {
   var_1_56 = var_1_46;
  } else {
   var_1_56 = var_1_50;
  }
 }
 if ((var_1_60 - var_1_61) >= var_1_46) {
  if (var_1_30) {
   var_1_59 = (((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))));
  }
 }
 var_1_62 = ((((var_1_61) > (var_1_45)) ? (var_1_61) : (var_1_45)));
 if ((var_1_40 & -128) > var_1_58) {
  if (var_1_30) {
   var_1_63 = (((((var_1_64 + var_1_65) - var_1_61) < 0 ) ? -((var_1_64 + var_1_65) - var_1_61) : ((var_1_64 + var_1_65) - var_1_61)));
  } else {
   if (((((var_1_61) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_61) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) <= var_1_65) {
    var_1_63 = (var_1_66 - var_1_64);
   } else {
    var_1_63 = (((((44320 - var_1_25)) > (((((var_1_66) > (var_1_61)) ? (var_1_66) : (var_1_61))))) ? ((44320 - var_1_25)) : (((((var_1_66) > (var_1_61)) ? (var_1_66) : (var_1_61))))));
   }
  }
 } else {
  var_1_63 = ((((var_1_38) > (((((var_1_64) > (var_1_25)) ? (var_1_64) : (var_1_25))))) ? (var_1_38) : (((((var_1_64) > (var_1_25)) ? (var_1_64) : (var_1_25))))));
 }
 if ((var_1_43 * (var_1_53 / var_1_68)) >= var_1_42) {
  var_1_67 = ((((var_1_38) > (((((4u) > ((var_1_69 - var_1_22))) ? (4u) : ((var_1_69 - var_1_22)))))) ? (var_1_38) : (((((4u) > ((var_1_69 - var_1_22))) ? (4u) : ((var_1_69 - var_1_22)))))));
 } else {
  var_1_67 = (((((((50u) < (var_1_63)) ? (50u) : (var_1_63))) < 0 ) ? -((((50u) < (var_1_63)) ? (50u) : (var_1_63))) : ((((50u) < (var_1_63)) ? (50u) : (var_1_63)))));
 }
 if (var_1_31) {
  var_1_70 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
 } else {
  if (var_1_35 >= var_1_34) {
   var_1_70 = ((((var_1_33) > (var_1_71)) ? (var_1_33) : (var_1_71)));
  }
 }
 if (var_1_65 <= (16 * var_1_23)) {
  var_1_72 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 } else {
  var_1_72 = var_1_57;
 }
 if (((var_1_50 + var_1_46) + (var_1_22 - var_1_25)) >= var_1_65) {
  var_1_73 = (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))) - 16.9);
 }
 var_1_75 = (var_1_64 - ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))));
 if (((var_1_60 - var_1_61) + ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) >= var_1_56) {
  var_1_76 = var_1_26;
 }
 if (! var_1_27) {
  var_1_78 = (var_1_65 + (((((2060522382u) < 0 ) ? -(2060522382u) : (2060522382u))) - var_1_66));
 }
 if (var_1_45 >= var_1_50) {
  var_1_79 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
 }
 if (var_1_47 >= (~ var_1_39)) {
  if (-25 >= ((var_1_63 | var_1_23) | var_1_78)) {
   var_1_80 = var_1_33;
  }
 } else {
  var_1_80 = 256.8;
 }
 if (((var_1_49 & var_1_79) + (var_1_64 - var_1_38)) < (var_1_75 >> var_1_51)) {
  var_1_81 = var_1_42;
 }
 if (var_1_30) {
  var_1_82 = ((((var_1_25 + var_1_64) < 0 ) ? -(var_1_25 + var_1_64) : (var_1_25 + var_1_64)));
 }
 if ((- 16) > ((((((((var_1_78) > (var_1_56)) ? (var_1_78) : (var_1_56)))) < (var_1_84)) ? (((((var_1_78) > (var_1_56)) ? (var_1_78) : (var_1_56)))) : (var_1_84)))) {
  var_1_83 = (var_1_30 && ((var_1_31 || var_1_77) && var_1_85));
 }
 if ((var_1_61 > var_1_49) && ((~ 5) > var_1_64)) {
  var_1_86 = var_1_87;
 } else {
  var_1_86 = var_1_49;
 }
 if (var_1_61 < var_1_47) {
  var_1_88 = ((((499.2f) < 0 ) ? -(499.2f) : (499.2f)));
 }
 if (var_1_83) {
  var_1_89 = (var_1_90 - var_1_61);
 }
 var_1_91 = var_1_90;
 var_1_92 = var_1_35;
 var_1_93 = var_1_61;
 if (var_1_13) {
  var_1_18 = ((var_1_19 - last_1_var_1_9) - last_1_var_1_11);
 } else {
  var_1_18 = (((((var_1_19 - var_1_17)) > (var_1_15)) ? ((var_1_19 - var_1_17)) : (var_1_15)));
 }
 if (var_1_6 > ((((var_1_8) < (last_1_var_1_1)) ? (var_1_8) : (last_1_var_1_1)))) {
  if (! ((last_1_var_1_1 == var_1_7) && (last_1_var_1_20 || last_1_var_1_20))) {
   if (! (var_1_6 <= var_1_7)) {
    var_1_9 = ((((last_1_var_1_14) < (last_1_var_1_14)) ? (last_1_var_1_14) : (last_1_var_1_14)));
   }
  } else {
   var_1_9 = last_1_var_1_14;
  }
 }
 if ((8 - 64) <= (var_1_9 - var_1_9)) {
  var_1_14 = (((((var_1_15 + var_1_16)) < (var_1_17)) ? ((var_1_15 + var_1_16)) : (var_1_17)));
 } else {
  var_1_14 = var_1_17;
 }
 signed long int stepLocal_0 = - ((((var_1_9) < (var_1_9)) ? (var_1_9) : (var_1_9)));
 if (var_1_18 >= stepLocal_0) {
  var_1_1 = (((var_1_6 - var_1_7) - ((((64.75) > (128.725)) ? (64.75) : (128.725)))) + var_1_8);
 } else {
  var_1_1 = var_1_7;
 }
 if ((var_1_14 / var_1_19) <= ((((var_1_18) < (var_1_14)) ? (var_1_18) : (var_1_14)))) {
  var_1_20 = var_1_13;
 }
 if (var_1_20) {
  var_1_12 = var_1_13;
 }
 var_1_11 = (var_1_9 + (((((var_1_18) < (var_1_9)) ? (var_1_18) : (var_1_9))) + 2u));
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 2305843.009213691390e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691390e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 3221225470);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -128);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= -1);
 assume_abort_if_not(var_1_37 <= 32766);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 32766);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483646);
 assume_abort_if_not(var_1_40 <= 2147483646);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -126);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -63);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -63);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -63);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -63);
 assume_abort_if_not(var_1_51 <= 63);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -230584.3009213691390e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691390e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -230584.3009213691390e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 255);
 assume_abort_if_not(var_1_57 != 0);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 4294967295);
 assume_abort_if_not(var_1_58 != 0);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -1);
 assume_abort_if_not(var_1_60 <= 127);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 127);
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 16383);
 assume_abort_if_not(var_1_64 <= 32767);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 16384);
 assume_abort_if_not(var_1_65 <= 32767);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 32767);
 assume_abort_if_not(var_1_66 <= 65534);
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
 assume_abort_if_not(var_1_68 != 0.0F);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 2147483647);
 assume_abort_if_not(var_1_69 <= 4294967294);
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= -922337.2036854765600e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= -922337.2036854765600e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 1);
 var_1_84 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_84 >= -2147483648);
 assume_abort_if_not(var_1_84 <= 2147483647);
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 0);
 var_1_87 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_87 >= -127);
 assume_abort_if_not(var_1_87 <= 126);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 127);
 assume_abort_if_not(var_1_90 <= 254);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((var_1_18 >= (- ((((var_1_9) < (var_1_9)) ? (var_1_9) : (var_1_9))))) ? (var_1_1 == ((double) (((var_1_6 - var_1_7) - ((((64.75) > (128.725)) ? (64.75) : (128.725)))) + var_1_8))) : (var_1_1 == ((double) var_1_7))) && ((var_1_6 > ((((var_1_8) < (last_1_var_1_1)) ? (var_1_8) : (last_1_var_1_1)))) ? ((! ((last_1_var_1_1 == var_1_7) && (last_1_var_1_20 || last_1_var_1_20))) ? ((! (var_1_6 <= var_1_7)) ? (var_1_9 == ((unsigned short int) ((((last_1_var_1_14) < (last_1_var_1_14)) ? (last_1_var_1_14) : (last_1_var_1_14))))) : 1) : (var_1_9 == ((unsigned short int) last_1_var_1_14))) : 1)) && (var_1_11 == ((unsigned long int) (var_1_9 + (((((var_1_18) < (var_1_9)) ? (var_1_18) : (var_1_9))) + 2u))))) && (var_1_20 ? (var_1_12 == ((unsigned char) var_1_13)) : 1)) && (((8 - 64) <= (var_1_9 - var_1_9)) ? (var_1_14 == ((unsigned char) (((((var_1_15 + var_1_16)) < (var_1_17)) ? ((var_1_15 + var_1_16)) : (var_1_17))))) : (var_1_14 == ((unsigned char) var_1_17)))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((var_1_19 - last_1_var_1_9) - last_1_var_1_11))) : (var_1_18 == ((unsigned long int) (((((var_1_19 - var_1_17)) > (var_1_15)) ? ((var_1_19 - var_1_17)) : (var_1_15))))))) && (((var_1_14 / var_1_19) <= ((((var_1_18) < (var_1_14)) ? (var_1_18) : (var_1_14)))) ? (var_1_20 == ((unsigned char) var_1_13)) : 1)
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
