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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 1967984875;
float var_1_10 = 256.625;
float var_1_11 = 24.5;
float var_1_12 = 999999.25;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 127.3;
float var_1_16 = 15.8;
double var_1_17 = -0.4;
unsigned long int var_1_18 = 8;
unsigned long int var_1_19 = 2366774301;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 5;
signed char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -128;
signed char var_1_30 = 5;
signed char var_1_31 = -16;
signed long int var_1_32 = -4;
unsigned char var_1_33 = 0;
signed long int var_1_34 = 8;
signed long int var_1_35 = -10;
signed long int var_1_36 = 10;
signed long int var_1_37 = 128;
signed long int var_1_38 = 5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
signed short int var_1_43 = 32;
signed long int var_1_44 = 0;
signed long int var_1_45 = 256;
signed long int var_1_46 = -5;
unsigned char var_1_47 = 1;
double var_1_48 = 8.1;
double var_1_49 = 10.4;
double var_1_50 = 1.2;
double var_1_51 = 31.1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
signed char var_1_54 = 8;
signed char var_1_55 = 5;
signed char var_1_56 = 2;
signed char var_1_57 = 32;
signed char var_1_58 = 32;
signed char var_1_59 = 0;
signed char var_1_60 = 2;
unsigned short int var_1_61 = 54497;
unsigned char var_1_62 = 1;
signed long int var_1_63 = -256;
signed short int var_1_64 = 10;
unsigned long int var_1_65 = 100;
unsigned long int var_1_66 = 1577883463;
signed char var_1_67 = 50;
unsigned char var_1_68 = 25;
signed long int var_1_69 = 0;
double var_1_70 = 63.4;
double var_1_71 = 50.875;
unsigned long int var_1_72 = 128;
unsigned long int var_1_73 = 3485516538;
unsigned char var_1_74 = 1;
signed char var_1_75 = 64;
float var_1_76 = 5.2;
float var_1_77 = 2.25;
double var_1_78 = 10.08;
signed long int var_1_79 = 128;
signed short int var_1_80 = -16;
float var_1_81 = 31.5;
float var_1_82 = 31.5;
unsigned long int var_1_83 = 4;
unsigned char var_1_84 = 4;
unsigned long int var_1_85 = 100;
signed short int var_1_86 = -1;
unsigned char last_1_var_1_1 = 5;
unsigned long int last_1_var_1_18 = 8;
signed char last_1_var_1_22 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_25) {
  var_1_24 = var_1_26;
 } else {
  if (var_1_26) {
   var_1_24 = var_1_27;
  } else {
   var_1_24 = (var_1_27 || var_1_28);
  }
 }
 if ((var_1_30 * var_1_31) < ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) {
  if (var_1_30 <= var_1_34) {
   var_1_29 = (var_1_31 + (var_1_30 + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))));
  } else {
   var_1_29 = (((((var_1_36 - var_1_37)) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? ((var_1_36 - var_1_37)) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))));
  }
 } else {
  var_1_29 = (((((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))) < 0 ) ? -((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))) : ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))));
 }
 if (var_1_30 >= var_1_38) {
  if ((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) / (var_1_40 - var_1_41)) < var_1_34) {
   var_1_39 = (! var_1_27);
  }
 } else {
  var_1_39 = (var_1_26 && var_1_42);
 }
 var_1_43 = var_1_41;
 if (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) < (var_1_35 * var_1_34)) {
  if (var_1_25) {
   var_1_44 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
  }
 }
 if (((((var_1_43) > (var_1_45)) ? (var_1_43) : (var_1_45))) <= ((((var_1_31) > (200)) ? (var_1_31) : (200)))) {
  var_1_46 = (var_1_41 + var_1_35);
 } else {
  var_1_46 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 if (((var_1_48 * var_1_49) + ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) > var_1_51) {
  if (((var_1_37 * var_1_32) < var_1_30) && var_1_39) {
   var_1_47 = var_1_26;
  } else {
   var_1_47 = var_1_27;
  }
 } else {
  if (var_1_27 || (((((var_1_34) > (var_1_32)) ? (var_1_34) : (var_1_32))) < ((((-100000000) < 0 ) ? -(-100000000) : (-100000000))))) {
   var_1_47 = ((! (var_1_27 || var_1_28)) && var_1_42);
  } else {
   if (var_1_28) {
    var_1_47 = ((var_1_27 || var_1_52) || var_1_53);
   }
  }
 }
 if (((- 0.2) + var_1_48) >= var_1_49) {
  if ((~ var_1_40) > var_1_34) {
   if (! var_1_33) {
    var_1_54 = (var_1_41 - ((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56))));
   } else {
    if (var_1_31 < (var_1_44 >> var_1_37)) {
     var_1_54 = ((((var_1_41) > (((((8) > (((((var_1_56) < (var_1_55)) ? (var_1_56) : (var_1_55))))) ? (8) : (((((var_1_56) < (var_1_55)) ? (var_1_56) : (var_1_55)))))))) ? (var_1_41) : (((((8) > (((((var_1_56) < (var_1_55)) ? (var_1_56) : (var_1_55))))) ? (8) : (((((var_1_56) < (var_1_55)) ? (var_1_56) : (var_1_55)))))))));
    } else {
     var_1_54 = (var_1_41 - ((((-2) < 0 ) ? -(-2) : (-2))));
    }
   }
  } else {
   var_1_54 = ((((var_1_55 - var_1_41) < 0 ) ? -(var_1_55 - var_1_41) : (var_1_55 - var_1_41)));
  }
 } else {
  var_1_54 = (var_1_57 + (var_1_58 - var_1_59));
 }
 if ((var_1_61 - ((((var_1_58) < (100)) ? (var_1_58) : (100)))) >= var_1_29) {
  if (var_1_34 != (var_1_55 ^ (var_1_54 ^ var_1_38))) {
   var_1_60 = var_1_55;
  }
 }
 if (! var_1_47) {
  if (var_1_58 >= var_1_60) {
   var_1_62 = (! var_1_42);
  }
 }
 if ((var_1_43 ^ ((((var_1_56) < (8)) ? (var_1_56) : (8)))) <= var_1_58) {
  if (! var_1_62) {
   var_1_63 = ((((-1) < 0 ) ? -(-1) : (-1)));
  } else {
   var_1_63 = ((((var_1_37) < (4)) ? (var_1_37) : (4)));
  }
 } else {
  var_1_63 = (((((((-2) < ((-2 + var_1_59))) ? (-2) : ((-2 + var_1_59)))) < 0 ) ? -((((-2) < ((-2 + var_1_59))) ? (-2) : ((-2 + var_1_59)))) : ((((-2) < ((-2 + var_1_59))) ? (-2) : ((-2 + var_1_59))))));
 }
 if ((- var_1_63) <= (((((var_1_45) > (var_1_34)) ? (var_1_45) : (var_1_34))) ^ var_1_56)) {
  if (var_1_56 <= (var_1_30 & var_1_31)) {
   var_1_64 = (var_1_41 - ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))));
  } else {
   var_1_64 = var_1_30;
  }
 }
 var_1_65 = ((((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))) - var_1_58) + var_1_55);
 if (-100 <= (((((((var_1_34) > (var_1_55)) ? (var_1_34) : (var_1_55))) < 0 ) ? -((((var_1_34) > (var_1_55)) ? (var_1_34) : (var_1_55))) : ((((var_1_34) > (var_1_55)) ? (var_1_34) : (var_1_55)))))) {
  if (var_1_45 < var_1_46) {
   var_1_67 = ((((var_1_58) > (((((var_1_59 - var_1_41) < 0 ) ? -(var_1_59 - var_1_41) : (var_1_59 - var_1_41))))) ? (var_1_58) : (((((var_1_59 - var_1_41) < 0 ) ? -(var_1_59 - var_1_41) : (var_1_59 - var_1_41))))));
  }
 }
 if (var_1_36 < var_1_63) {
  var_1_68 = 50;
 } else {
  if (var_1_65 == var_1_29) {
   if (var_1_45 < var_1_40) {
    if (var_1_67 <= (var_1_37 & var_1_61)) {
     var_1_68 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
    } else {
     var_1_68 = (((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) < 0 ) ? -((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) : ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))));
    }
   } else {
    if (((var_1_55 | var_1_35) / var_1_66) < var_1_63) {
     var_1_68 = var_1_55;
    } else {
     var_1_68 = var_1_59;
    }
   }
  } else {
   var_1_68 = var_1_59;
  }
 }
 if (var_1_42) {
  if (var_1_48 <= (- (var_1_70 - var_1_71))) {
   var_1_69 = (((((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))) > (((((var_1_58) > (var_1_41)) ? (var_1_58) : (var_1_41))))) ? (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))) : (((((var_1_58) > (var_1_41)) ? (var_1_58) : (var_1_41)))))) - (((((var_1_56 + 8)) < (var_1_68)) ? ((var_1_56 + 8)) : (var_1_68))));
  }
 } else {
  if (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) >= var_1_50) {
   var_1_69 = ((((var_1_68 - ((((var_1_55) > (var_1_59)) ? (var_1_55) : (var_1_59)))) < 0 ) ? -(var_1_68 - ((((var_1_55) > (var_1_59)) ? (var_1_55) : (var_1_59)))) : (var_1_68 - ((((var_1_55) > (var_1_59)) ? (var_1_55) : (var_1_59))))));
  } else {
   var_1_69 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
  }
 }
 if (var_1_63 < (var_1_60 & var_1_58)) {
  var_1_72 = (((((((var_1_68) < (var_1_56)) ? (var_1_68) : (var_1_56))) < 0 ) ? -((((var_1_68) < (var_1_56)) ? (var_1_68) : (var_1_56))) : ((((var_1_68) < (var_1_56)) ? (var_1_68) : (var_1_56)))));
 } else {
  var_1_72 = ((((var_1_61) < ((((((var_1_73 - var_1_55)) > (var_1_40)) ? ((var_1_73 - var_1_55)) : (var_1_40))))) ? (var_1_61) : ((((((var_1_73 - var_1_55)) > (var_1_40)) ? ((var_1_73 - var_1_55)) : (var_1_40))))));
 }
 if (var_1_44 >= ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) {
  var_1_74 = (var_1_42 || var_1_26);
 }
 if (var_1_34 != var_1_35) {
  var_1_75 = (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - (((((((var_1_57) < (var_1_59)) ? (var_1_57) : (var_1_59))) < 0 ) ? -((((var_1_57) < (var_1_59)) ? (var_1_57) : (var_1_59))) : ((((var_1_57) < (var_1_59)) ? (var_1_57) : (var_1_59))))));
 } else {
  var_1_75 = 8;
 }
 if ((var_1_65 % var_1_41) < var_1_32) {
  var_1_76 = ((((var_1_77 - ((((1.0000000000004E12f) < 0 ) ? -(1.0000000000004E12f) : (1.0000000000004E12f)))) < 0 ) ? -(var_1_77 - ((((1.0000000000004E12f) < 0 ) ? -(1.0000000000004E12f) : (1.0000000000004E12f)))) : (var_1_77 - ((((1.0000000000004E12f) < 0 ) ? -(1.0000000000004E12f) : (1.0000000000004E12f))))));
 }
 if (var_1_53) {
  var_1_78 = var_1_77;
 }
 if (var_1_42) {
  var_1_79 = var_1_55;
 } else {
  var_1_79 = var_1_75;
 }
 if (var_1_47) {
  var_1_80 = var_1_57;
 }
 if (var_1_33) {
  var_1_81 = var_1_82;
 }
 if (var_1_53) {
  var_1_83 = var_1_58;
 }
 if (! var_1_52) {
  var_1_84 = (128 - (10 + var_1_58));
 } else {
  var_1_84 = (var_1_41 + var_1_56);
 }
 var_1_85 = var_1_58;
 var_1_86 = var_1_84;
 unsigned char stepLocal_2 = var_1_9 >= last_1_var_1_22;
 signed long int stepLocal_1 = last_1_var_1_1;
 if (stepLocal_1 > last_1_var_1_18) {
  var_1_18 = ((((var_1_9) < ((var_1_19 - var_1_6))) ? (var_1_9) : ((var_1_19 - var_1_6))));
 } else {
  if (var_1_20 || stepLocal_2) {
   var_1_18 = var_1_6;
  } else {
   var_1_18 = var_1_7;
  }
 }
 if (last_1_var_1_1 > (var_1_18 * var_1_18)) {
  var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
 } else {
  var_1_1 = ((((var_1_7) < ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))) ? (var_1_7) : ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))));
 }
 var_1_21 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 unsigned char stepLocal_0 = var_1_6;
 if ((- var_1_18) > stepLocal_0) {
  var_1_8 = ((var_1_9 - var_1_21) - var_1_5);
 }
 signed long int stepLocal_3 = var_1_8;
 if (var_1_18 == stepLocal_3) {
  if (! var_1_20) {
   var_1_22 = ((((var_1_6) > ((5 - var_1_7))) ? (var_1_6) : ((5 - var_1_7))));
  } else {
   var_1_22 = (var_1_7 + var_1_23);
  }
 }
 if (var_1_8 != ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) {
  var_1_10 = ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)));
 } else {
  if (var_1_13 || var_1_14) {
   var_1_10 = var_1_11;
  }
 }
 if ((var_1_12 / var_1_16) >= var_1_10) {
  var_1_15 = (var_1_17 + 255.5);
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 64);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1073741822);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -128);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -128);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483647);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -536870911);
 assume_abort_if_not(var_1_35 <= 536870911);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -1);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -2147483646);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 127);
 assume_abort_if_not(var_1_40 <= 255);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 126);
 assume_abort_if_not(var_1_41 != 127);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= -2147483647);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 126);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 126);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= -63);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 32767);
 assume_abort_if_not(var_1_61 <= 65535);
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 1073741823);
 assume_abort_if_not(var_1_66 <= 2147483647);
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 2147483647);
 assume_abort_if_not(var_1_73 <= 4294967294);
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854765600e+12F && var_1_77 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= -922337.2036854765600e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854765600e+12F && var_1_82 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((last_1_var_1_1 > (var_1_18 * var_1_18)) ? (var_1_1 == ((unsigned char) (var_1_5 - (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned char) ((((var_1_7) < ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))) ? (var_1_7) : ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))))))) && (((- var_1_18) > var_1_6) ? (var_1_8 == ((signed long int) ((var_1_9 - var_1_21) - var_1_5))) : 1)) && ((var_1_8 != ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) ? (var_1_10 == ((float) ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) : ((var_1_13 || var_1_14) ? (var_1_10 == ((float) var_1_11)) : 1))) && (((var_1_12 / var_1_16) >= var_1_10) ? (var_1_15 == ((double) (var_1_17 + 255.5))) : 1)) && ((last_1_var_1_1 > last_1_var_1_18) ? (var_1_18 == ((unsigned long int) ((((var_1_9) < ((var_1_19 - var_1_6))) ? (var_1_9) : ((var_1_19 - var_1_6)))))) : ((var_1_20 || (var_1_9 >= last_1_var_1_22)) ? (var_1_18 == ((unsigned long int) var_1_6)) : (var_1_18 == ((unsigned long int) var_1_7))))) && (var_1_21 == ((signed short int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) && ((var_1_18 == var_1_8) ? ((! var_1_20) ? (var_1_22 == ((signed char) ((((var_1_6) > ((5 - var_1_7))) ? (var_1_6) : ((5 - var_1_7)))))) : (var_1_22 == ((signed char) (var_1_7 + var_1_23)))) : 1)
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
