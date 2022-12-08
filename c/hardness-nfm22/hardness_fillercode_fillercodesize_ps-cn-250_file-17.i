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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 25;
unsigned char var_1_2 = 25;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 4;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 7.3;
double var_1_12 = 1.25;
double var_1_13 = 128.8;
signed char var_1_14 = -1;
signed char var_1_15 = 10;
signed short int var_1_16 = 8;
unsigned long int var_1_18 = 128;
unsigned long int var_1_19 = 3963666122;
float var_1_20 = 15.875;
float var_1_21 = 4.2;
float var_1_22 = 5.5;
signed short int var_1_23 = -10;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 500;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 4;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -25;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4155847319;
unsigned long int var_1_32 = 64;
float var_1_33 = 99.25;
signed long int var_1_34 = 10;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 100;
signed short int var_1_37 = 1;
signed short int var_1_38 = 5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
double var_1_42 = 4.5;
double var_1_43 = 2.1;
double var_1_44 = 127.4;
double var_1_45 = 2.2;
double var_1_46 = 1.25;
unsigned short int var_1_47 = 1;
signed long int var_1_48 = -16;
signed char var_1_49 = 10;
signed char var_1_50 = 16;
unsigned short int var_1_51 = 64;
unsigned long int var_1_52 = 16;
signed char var_1_53 = 1;
unsigned long int var_1_54 = 16;
unsigned char var_1_55 = 0;
signed char var_1_56 = 100;
signed char var_1_57 = -4;
signed char var_1_58 = 10;
double var_1_59 = 8.2;
signed char var_1_60 = -1;
signed char var_1_61 = 25;
signed char var_1_62 = 2;
signed char var_1_63 = 32;
signed char var_1_64 = 16;
signed char var_1_65 = 2;
signed char var_1_66 = 8;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 128;
signed long int var_1_69 = -1000000;
signed short int var_1_70 = 64;
float var_1_71 = 0.25;
unsigned long int var_1_72 = 5;
unsigned short int var_1_73 = 1;
double var_1_74 = 5.75;
signed char var_1_75 = -8;
unsigned char var_1_76 = 1;
double var_1_77 = 3.5;
unsigned char var_1_78 = 8;
unsigned char var_1_79 = 8;
signed char var_1_80 = 1;
unsigned char var_1_81 = 1;
unsigned char var_1_82 = 5;
unsigned char var_1_83 = 64;
unsigned char var_1_84 = 1;
unsigned long int var_1_85 = 1;
unsigned short int var_1_86 = 2;
unsigned long int var_1_87 = 0;
unsigned short int var_1_88 = 4;
unsigned char last_1_var_1_8 = 1;
signed char last_1_var_1_14 = -1;
void initially(void) {
}
void step(void) {
 var_1_20 = ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)));
 if (128u <= var_1_24) {
  if ((var_1_20 >= var_1_21) && ((var_1_24 * var_1_25) < ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) {
   if (var_1_25 > var_1_24) {
    var_1_23 = ((((4) < 0 ) ? -(4) : (4)));
   } else {
    if (var_1_28) {
     var_1_23 = var_1_29;
    } else {
     var_1_23 = var_1_29;
    }
   }
  } else {
   var_1_23 = 5;
  }
 }
 if (var_1_24 >= var_1_25) {
  var_1_30 = (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) - var_1_32);
 }
 var_1_33 = var_1_21;
 if (var_1_28) {
  var_1_34 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if (var_1_31 > var_1_32) {
  var_1_35 = var_1_36;
 } else {
  if ((var_1_36 - ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)))) < ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
   if (((var_1_24 | var_1_32) | var_1_25) < (var_1_38 | var_1_34)) {
    var_1_35 = var_1_36;
   }
  }
 }
 if (var_1_21 > var_1_20) {
  if (var_1_23 != (var_1_35 ^ (var_1_31 & var_1_27))) {
   var_1_39 = (var_1_40 || (! var_1_41));
  }
 }
 if (! var_1_39) {
  if ((~ (var_1_38 * var_1_34)) >= 64) {
   var_1_42 = ((((((((5.5) > (var_1_21)) ? (5.5) : (var_1_21)))) < (var_1_43)) ? (((((5.5) > (var_1_21)) ? (5.5) : (var_1_21)))) : (var_1_43)));
  }
 } else {
  if (var_1_28 && var_1_40) {
   var_1_42 = (var_1_44 + var_1_45);
  } else {
   if (var_1_44 < var_1_46) {
    var_1_42 = var_1_43;
   }
  }
 }
 if (var_1_33 != var_1_43) {
  var_1_47 = (var_1_38 + var_1_35);
 }
 if (((((var_1_49 - var_1_50) < 0 ) ? -(var_1_49 - var_1_50) : (var_1_49 - var_1_50))) == var_1_35) {
  var_1_48 = ((((((((var_1_38) < (((((var_1_29) < (var_1_49)) ? (var_1_29) : (var_1_49))))) ? (var_1_38) : (((((var_1_29) < (var_1_49)) ? (var_1_29) : (var_1_49))))))) > (var_1_36)) ? (((((var_1_38) < (((((var_1_29) < (var_1_49)) ? (var_1_29) : (var_1_49))))) ? (var_1_38) : (((((var_1_29) < (var_1_49)) ? (var_1_29) : (var_1_49))))))) : (var_1_36)));
 }
 if (-10 <= (((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) {
  if ((((((((-10) > (var_1_49)) ? (-10) : (var_1_49))) < 0 ) ? -((((-10) > (var_1_49)) ? (-10) : (var_1_49))) : ((((-10) > (var_1_49)) ? (-10) : (var_1_49))))) <= var_1_48) {
   if (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) > (var_1_47 | var_1_38)) {
    var_1_51 = ((((var_1_50) < (var_1_38)) ? (var_1_50) : (var_1_38)));
   }
  }
 } else {
  if (var_1_20 > var_1_22) {
   var_1_51 = ((((var_1_37) > (var_1_50)) ? (var_1_37) : (var_1_50)));
  } else {
   if (((((var_1_45) > (var_1_42)) ? (var_1_45) : (var_1_42))) > var_1_20) {
    var_1_51 = (((((((((10) < (var_1_36)) ? (10) : (var_1_36))) + ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))) > (var_1_37)) ? ((((((10) < (var_1_36)) ? (10) : (var_1_36))) + ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))) : (var_1_37)));
   } else {
    var_1_51 = (((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) < 0 ) ? -((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) : ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))));
   }
  }
 }
 if (var_1_39) {
  if (var_1_47 < 256) {
   var_1_52 = var_1_36;
  }
 }
 if (var_1_54 >= var_1_31) {
  if (var_1_40) {
   if (var_1_55) {
    if (var_1_24 >= ((var_1_31 + 10u) + (var_1_54 & var_1_36))) {
     if (var_1_26 < 128u) {
      var_1_53 = ((((var_1_56) > ((var_1_57 + var_1_58))) ? (var_1_56) : ((var_1_57 + var_1_58))));
     } else {
      if (var_1_41) {
       if (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - var_1_59)) {
        var_1_53 = (((((-2) < 0 ) ? -(-2) : (-2))) + var_1_57);
       } else {
        var_1_53 = var_1_58;
       }
      }
     }
    } else {
     var_1_53 = (var_1_60 - var_1_61);
    }
   } else {
    var_1_53 = ((((((var_1_62 - 32)) < (var_1_58)) ? ((var_1_62 - 32)) : (var_1_58))) + ((var_1_63 - var_1_64) - (var_1_65 + var_1_66)));
   }
  }
 }
 if (var_1_27 <= ((var_1_62 | var_1_51) ^ var_1_37)) {
  if (var_1_26 >= (((((var_1_37) > (var_1_52)) ? (var_1_37) : (var_1_52))) / var_1_31)) {
   var_1_67 = var_1_63;
  } else {
   var_1_67 = (((((var_1_65) > (((((5) < (10)) ? (5) : (10))))) ? (var_1_65) : (((((5) < (10)) ? (5) : (10)))))) + var_1_64);
  }
 } else {
  if (var_1_58 > (var_1_27 & var_1_65)) {
   var_1_67 = (var_1_68 - var_1_62);
  } else {
   var_1_67 = ((((var_1_50) < ((((((var_1_68 - var_1_61)) > (var_1_62)) ? ((var_1_68 - var_1_61)) : (var_1_62))))) ? (var_1_50) : ((((((var_1_68 - var_1_61)) > (var_1_62)) ? ((var_1_68 - var_1_61)) : (var_1_62))))));
  }
 }
 if (var_1_26 > ((((var_1_62) < (var_1_54)) ? (var_1_62) : (var_1_54)))) {
  var_1_69 = (var_1_35 - var_1_49);
 } else {
  var_1_69 = var_1_67;
 }
 if (var_1_33 <= (- (var_1_42 / var_1_71))) {
  if (var_1_41) {
   var_1_70 = ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)));
  }
 } else {
  var_1_70 = (((((var_1_64 - 16)) > (var_1_35)) ? ((var_1_64 - 16)) : (var_1_35)));
 }
 if ((~ var_1_29) > (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) {
  if ((var_1_73 >> var_1_47) >= var_1_58) {
   var_1_72 = ((((var_1_36) > (((((var_1_50) > (var_1_31)) ? (var_1_50) : (var_1_31))))) ? (var_1_36) : (((((var_1_50) > (var_1_31)) ? (var_1_50) : (var_1_31))))));
  }
 }
 if (var_1_20 <= ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))) {
  var_1_74 = (var_1_45 + var_1_44);
 } else {
  if ((var_1_32 + (var_1_30 & -2)) != var_1_38) {
   var_1_74 = var_1_21;
  }
 }
 if (var_1_55) {
  var_1_75 = (((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) < 0 ) ? -((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) : ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))));
 } else {
  if ((var_1_48 >> var_1_56) > (var_1_36 ^ -1)) {
   var_1_75 = (var_1_63 - (var_1_64 + var_1_62));
  }
 }
 if (var_1_66 > (((((((var_1_65) < (var_1_56)) ? (var_1_65) : (var_1_56))) < 0 ) ? -((((var_1_65) < (var_1_56)) ? (var_1_65) : (var_1_56))) : ((((var_1_65) < (var_1_56)) ? (var_1_65) : (var_1_56)))))) {
  var_1_76 = var_1_50;
 } else {
  var_1_76 = 32;
 }
 if ((~ (var_1_26 / var_1_63)) < var_1_64) {
  var_1_77 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 }
 if (var_1_47 <= var_1_68) {
  var_1_78 = var_1_62;
 } else {
  var_1_78 = var_1_61;
 }
 var_1_79 = var_1_64;
 if (var_1_41) {
  var_1_80 = var_1_60;
 }
 var_1_81 = var_1_82;
 if (var_1_40) {
  var_1_83 = var_1_49;
 }
 if (var_1_70 == ((var_1_83 | var_1_37) ^ var_1_31)) {
  var_1_84 = var_1_40;
 }
 if (var_1_25 < (var_1_69 % var_1_63)) {
  var_1_85 = (var_1_79 + var_1_83);
 }
 var_1_86 = var_1_67;
 var_1_87 = var_1_78;
 var_1_88 = var_1_81;
 unsigned char stepLocal_0 = last_1_var_1_8;
 if (stepLocal_0 && last_1_var_1_8) {
  if (last_1_var_1_8) {
   var_1_5 = (((((last_1_var_1_14) < 0 ) ? -(last_1_var_1_14) : (last_1_var_1_14))) - ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2))));
  } else {
   var_1_5 = 8;
  }
 }
 if (var_1_5 < var_1_3) {
  var_1_8 = ((var_1_7 || (last_1_var_1_8 || var_1_9)) && var_1_10);
 } else {
  var_1_8 = (! var_1_10);
 }
 var_1_1 = (50 + ((((var_1_2) < (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))) ? (var_1_2) : (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))))));
 if ((64.4f + 1.5f) <= var_1_13) {
  if (var_1_1 >= var_1_4) {
   var_1_14 = var_1_15;
  }
 }
 unsigned char stepLocal_3 = var_1_9 && var_1_8;
 if (stepLocal_3 || (var_1_8 && var_1_10)) {
  var_1_18 = (var_1_19 - (((((1991720936u - var_1_1)) < (var_1_2)) ? ((1991720936u - var_1_1)) : (var_1_2))));
 } else {
  var_1_18 = var_1_2;
 }
 signed long int stepLocal_1 = 8 + var_1_14;
 if (var_1_4 == stepLocal_1) {
  var_1_11 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
 }
 unsigned long int stepLocal_2 = var_1_18 * (var_1_15 & var_1_1);
 if (var_1_12 >= 9.6) {
  if (var_1_10) {
   var_1_16 = (2 - var_1_1);
  } else {
   if (stepLocal_2 <= var_1_3) {
    var_1_16 = var_1_18;
   } else {
    var_1_16 = var_1_4;
   }
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483648);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967295);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967295);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32767);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32767);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 32767);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 127);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 4294967295);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -127);
 assume_abort_if_not(var_1_56 <= 126);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= -63);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -63);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -1);
 assume_abort_if_not(var_1_60 <= 126);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 126);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 31);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 31);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 32);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 31);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 127);
 assume_abort_if_not(var_1_68 <= 254);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -922337.2036854776000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
 assume_abort_if_not(var_1_71 != 0.0F);
 var_1_73 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 65535);
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 0);
 assume_abort_if_not(var_1_82 <= 254);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_14 = var_1_14;
}
int property() {
 return ((((((var_1_1 == ((unsigned char) (50 + ((((var_1_2) < (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))) ? (var_1_2) : (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))))))) && ((last_1_var_1_8 && last_1_var_1_8) ? (last_1_var_1_8 ? (var_1_5 == ((signed long int) (((((last_1_var_1_14) < 0 ) ? -(last_1_var_1_14) : (last_1_var_1_14))) - ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2)))))) : (var_1_5 == ((signed long int) 8))) : 1)) && ((var_1_5 < var_1_3) ? (var_1_8 == ((unsigned char) ((var_1_7 || (last_1_var_1_8 || var_1_9)) && var_1_10))) : (var_1_8 == ((unsigned char) (! var_1_10))))) && ((var_1_4 == (8 + var_1_14)) ? (var_1_11 == ((double) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : 1)) && (((64.4f + 1.5f) <= var_1_13) ? ((var_1_1 >= var_1_4) ? (var_1_14 == ((signed char) var_1_15)) : 1) : 1)) && ((var_1_12 >= 9.6) ? (var_1_10 ? (var_1_16 == ((signed short int) (2 - var_1_1))) : (((var_1_18 * (var_1_15 & var_1_1)) <= var_1_3) ? (var_1_16 == ((signed short int) var_1_18)) : (var_1_16 == ((signed short int) var_1_4)))) : 1)) && (((var_1_9 && var_1_8) || (var_1_8 && var_1_10)) ? (var_1_18 == ((unsigned long int) (var_1_19 - (((((1991720936u - var_1_1)) < (var_1_2)) ? ((1991720936u - var_1_1)) : (var_1_2)))))) : (var_1_18 == ((unsigned long int) var_1_2)))
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
