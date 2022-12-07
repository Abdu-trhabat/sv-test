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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
signed short int var_1_24 = -32;
unsigned char var_1_25 = 1;
float var_1_26 = 500.65;
signed long int var_1_27 = -8;
float var_1_28 = 255.5;
float var_1_29 = 64.8;
unsigned long int var_1_30 = 10;
unsigned long int var_1_31 = 10;
unsigned long int var_1_32 = 256;
unsigned long int var_1_33 = 50;
unsigned long int var_1_34 = 200;
unsigned long int var_1_35 = 50;
unsigned long int var_1_36 = 10;
signed char var_1_37 = 5;
unsigned long int var_1_38 = 1538486014;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 10;
unsigned short int var_1_44 = 128;
unsigned short int var_1_45 = 40597;
float var_1_46 = 0.0;
unsigned short int var_1_47 = 31514;
unsigned short int var_1_48 = 10000;
unsigned char var_1_49 = 8;
unsigned short int var_1_50 = 10;
double var_1_51 = 7.4;
float var_1_52 = 9.5;
double var_1_53 = 0.375;
double var_1_54 = 3.8;
double var_1_55 = 3.4;
unsigned short int var_1_56 = 2;
signed short int var_1_57 = 256;
signed short int var_1_58 = 25253;
float var_1_59 = 10000000000000.4;
double var_1_60 = 4.875;
double var_1_61 = 256.75;
float var_1_62 = 999999999999999.8;
float var_1_63 = 1000000000000.25;
float var_1_64 = 2.4;
unsigned char var_1_65 = 0;
signed char var_1_66 = 8;
signed char var_1_67 = 64;
signed char var_1_68 = -4;
unsigned char var_1_69 = 2;
unsigned char var_1_70 = 64;
unsigned char var_1_71 = 0;
signed char var_1_72 = -128;
signed char var_1_73 = 1;
signed char var_1_74 = 50;
signed char var_1_75 = 4;
signed char var_1_76 = 16;
signed short int var_1_77 = 32;
signed char var_1_78 = 25;
unsigned short int var_1_79 = 2;
unsigned short int var_1_80 = 64;
double var_1_81 = 8.75;
signed char var_1_82 = -4;
double var_1_83 = 64.38;
double var_1_84 = 4.75;
double var_1_85 = 7.5;
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_6 = 10;
unsigned char last_1_var_1_8 = 1;
signed short int last_1_var_1_13 = 200;
void initially(void) {
}
void step(void) {
 if (var_1_22 || var_1_23) {
  var_1_21 = ((var_1_24 > -4) || var_1_25);
 }
 if (((var_1_24 + 25) % var_1_27) < 2) {
  var_1_26 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + ((((1.6f) > (var_1_29)) ? (1.6f) : (var_1_29))));
 }
 if (var_1_23 && (var_1_29 > var_1_28)) {
  var_1_30 = ((((((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))) < 0 ) ? -((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))) : ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))))) + ((((((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)))) < (var_1_35)) ? (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)))) : (var_1_35))));
 }
 if ((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) >> var_1_32) != var_1_34) {
  var_1_36 = ((1905488450u + var_1_38) - var_1_35);
 }
 if (var_1_25) {
  var_1_39 = (var_1_40 - var_1_41);
 } else {
  var_1_39 = (var_1_40 - ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
 }
 if ((- var_1_41) != var_1_40) {
  var_1_43 = var_1_39;
 }
 if (var_1_38 <= (~ var_1_31)) {
  if (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) >= var_1_42) {
   var_1_44 = ((((var_1_45 - var_1_42) < 0 ) ? -(var_1_45 - var_1_42) : (var_1_45 - var_1_42)));
  }
 } else {
  if ((var_1_26 * var_1_29) < var_1_28) {
   var_1_44 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
  } else {
   if ((((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))) * var_1_26) >= ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) {
    var_1_44 = (var_1_45 - (var_1_47 - (var_1_48 - var_1_40)));
   } else {
    if (256 < ((var_1_40 | var_1_42) ^ var_1_36)) {
     var_1_44 = (((((((var_1_47) > (var_1_42)) ? (var_1_47) : (var_1_42))) < 0 ) ? -((((var_1_47) > (var_1_42)) ? (var_1_47) : (var_1_42))) : ((((var_1_47) > (var_1_42)) ? (var_1_47) : (var_1_42)))));
    } else {
     if (var_1_21 || var_1_25) {
      if (var_1_26 < ((((var_1_46) < (var_1_28)) ? (var_1_46) : (var_1_28)))) {
       var_1_44 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
      }
     }
    }
   }
  }
 }
 if (var_1_44 > (~ var_1_24)) {
  var_1_49 = (var_1_41 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
 } else {
  var_1_49 = var_1_42;
 }
 if (var_1_37 > var_1_30) {
  var_1_50 = ((((var_1_49) > (var_1_41)) ? (var_1_49) : (var_1_41)));
 } else {
  var_1_50 = ((((var_1_49 + var_1_40) < 0 ) ? -(var_1_49 + var_1_40) : (var_1_49 + var_1_40)));
 }
 if (var_1_22) {
  if (var_1_52 >= var_1_26) {
   var_1_51 = var_1_29;
  } else {
   if (var_1_49 <= var_1_40) {
    var_1_51 = ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) > (((((var_1_53) > ((var_1_54 - 31.75))) ? (var_1_53) : ((var_1_54 - 31.75)))))) ? (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (((((var_1_53) > ((var_1_54 - 31.75))) ? (var_1_53) : ((var_1_54 - 31.75)))))));
   }
  }
 }
 if (var_1_45 < var_1_41) {
  var_1_55 = (((((((((5.6) < 0 ) ? -(5.6) : (5.6))) + var_1_28)) < (var_1_54)) ? ((((((5.6) < 0 ) ? -(5.6) : (5.6))) + var_1_28)) : (var_1_54)));
 }
 if (((((var_1_26) > (var_1_28)) ? (var_1_26) : (var_1_28))) > ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
  var_1_56 = var_1_42;
 } else {
  var_1_56 = var_1_47;
 }
 if (var_1_41 <= var_1_39) {
  var_1_57 = ((((((((var_1_40) < (var_1_49)) ? (var_1_40) : (var_1_49))) - (var_1_58 - var_1_48)) < 0 ) ? -(((((var_1_40) < (var_1_49)) ? (var_1_40) : (var_1_49))) - (var_1_58 - var_1_48)) : (((((var_1_40) < (var_1_49)) ? (var_1_40) : (var_1_49))) - (var_1_58 - var_1_48))));
 } else {
  if ((var_1_43 % var_1_45) >= (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) % var_1_38)) {
   var_1_57 = (var_1_41 + var_1_42);
  } else {
   if (((var_1_59 + 4.5f) - var_1_54) != var_1_60) {
    var_1_57 = (((((var_1_41) > (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_41) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))) + var_1_40);
   }
  }
 }
 if (var_1_21) {
  var_1_61 = ((((var_1_54) < (var_1_28)) ? (var_1_54) : (var_1_28)));
 }
 if (var_1_21) {
  if ((- (var_1_30 >> var_1_47)) > (var_1_48 / var_1_38)) {
   var_1_62 = ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)));
  }
 } else {
  var_1_62 = var_1_28;
 }
 if (var_1_29 <= var_1_53) {
  var_1_63 = ((((((((var_1_54) < (var_1_59)) ? (var_1_54) : (var_1_59))) - var_1_64) < 0 ) ? -(((((var_1_54) < (var_1_59)) ? (var_1_54) : (var_1_59))) - var_1_64) : (((((var_1_54) < (var_1_59)) ? (var_1_54) : (var_1_59))) - var_1_64)));
 } else {
  var_1_63 = (var_1_28 + 1.6f);
 }
 if (var_1_33 > var_1_34) {
  var_1_65 = var_1_25;
 }
 if (var_1_54 > var_1_61) {
  var_1_66 = (((((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) < 0 ) ? -((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) : ((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68)))));
 } else {
  var_1_66 = ((((var_1_67) < (var_1_68)) ? (var_1_67) : (var_1_68)));
 }
 if (var_1_47 < var_1_40) {
  if (var_1_48 > ((((var_1_34 >> var_1_58) < 0 ) ? -(var_1_34 >> var_1_58) : (var_1_34 >> var_1_58)))) {
   if ((var_1_67 > var_1_32) || var_1_22) {
    var_1_69 = ((((((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) < 0 ) ? -((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) : ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) < 0 ) ? -(((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) < 0 ) ? -((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) : ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) : (((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) < 0 ) ? -((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) : ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))));
   }
  }
 } else {
  var_1_69 = ((((var_1_42 + (var_1_70 + var_1_71)) < 0 ) ? -(var_1_42 + (var_1_70 + var_1_71)) : (var_1_42 + (var_1_70 + var_1_71))));
 }
 if (var_1_28 < (var_1_64 - var_1_59)) {
  if ((var_1_29 <= var_1_51) || var_1_21) {
   if (var_1_29 > (- (- var_1_59))) {
    var_1_72 = ((((var_1_68) > ((16 + ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))))) ? (var_1_68) : ((16 + ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))))));
   }
  } else {
   if (var_1_52 < ((((var_1_63) > (var_1_62)) ? (var_1_63) : (var_1_62)))) {
    var_1_72 = ((var_1_71 - (8 + var_1_73)) + (((((var_1_74) < (var_1_75)) ? (var_1_74) : (var_1_75))) - var_1_76));
   }
  }
 } else {
  if ((var_1_32 & var_1_76) > (var_1_38 * var_1_33)) {
   var_1_72 = ((((-2) < (var_1_71)) ? (-2) : (var_1_71)));
  }
 }
 var_1_77 = ((((var_1_68) > (10)) ? (var_1_68) : (10)));
 if ((var_1_28 * var_1_53) <= ((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) < (var_1_54)) ? (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) : (var_1_54)))) {
  if (((var_1_44 + var_1_57) << var_1_74) > var_1_38) {
   if ((~ var_1_66) <= ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))) {
    var_1_78 = ((((var_1_75) < (32)) ? (var_1_75) : (32)));
   }
  } else {
   var_1_78 = ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)));
  }
 }
 if (var_1_21) {
  var_1_79 = 8;
 }
 if (var_1_60 < (((((5.8) < (var_1_26)) ? (5.8) : (var_1_26))) * (var_1_81 - var_1_64))) {
  var_1_80 = var_1_48;
 }
 if (var_1_22) {
  var_1_82 = var_1_71;
 } else {
  var_1_82 = var_1_74;
 }
 if (var_1_55 > ((var_1_53 * var_1_51) * 15.07)) {
  var_1_83 = (var_1_64 - var_1_54);
 } else {
  var_1_83 = ((var_1_84 + var_1_85) - 999999.75);
 }
 signed long int stepLocal_6 = last_1_var_1_1;
 unsigned char stepLocal_5 = ((((last_1_var_1_1) < (8)) ? (last_1_var_1_1) : (8))) <= var_1_5;
 if (stepLocal_5 || last_1_var_1_8) {
  if (stepLocal_6 <= last_1_var_1_6) {
   var_1_14 = (var_1_15 + var_1_16);
  } else {
   var_1_14 = var_1_16;
  }
 } else {
  var_1_14 = var_1_16;
 }
 if (var_1_14 <= var_1_15) {
  var_1_19 = (var_1_12 || var_1_20);
 }
 if (var_1_5 >= -2) {
  var_1_6 = (var_1_7 - 100);
 }
 unsigned char stepLocal_4 = var_1_6;
 signed long int stepLocal_3 = var_1_6 / var_1_7;
 if (last_1_var_1_13 >= stepLocal_3) {
  if (stepLocal_4 != ((((((((var_1_6) > (last_1_var_1_13)) ? (var_1_6) : (last_1_var_1_13)))) > (var_1_5)) ? (((((var_1_6) > (last_1_var_1_13)) ? (var_1_6) : (last_1_var_1_13)))) : (var_1_5)))) {
   var_1_13 = var_1_7;
  } else {
   var_1_13 = last_1_var_1_13;
  }
 } else {
  var_1_13 = var_1_6;
 }
 unsigned char stepLocal_7 = var_1_6;
 if (stepLocal_7 > var_1_6) {
  var_1_17 = ((((25) > ((var_1_13 + var_1_6))) ? (25) : ((var_1_13 + var_1_6))));
 }
 unsigned char stepLocal_0 = var_1_6;
 if (var_1_19) {
  var_1_1 = ((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6)));
 } else {
  if (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) >= stepLocal_0) {
   var_1_1 = var_1_5;
  }
 }
 unsigned char stepLocal_2 = var_1_19 && var_1_19;
 unsigned char stepLocal_1 = var_1_7;
 if ((49.5f <= var_1_14) && stepLocal_2) {
  if (var_1_13 < stepLocal_1) {
   var_1_8 = (var_1_19 || var_1_11);
  } else {
   var_1_8 = var_1_11;
  }
 } else {
  var_1_8 = var_1_12;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32768);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 assume_abort_if_not(var_1_27 != 0);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 1073741824);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 127);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 32767);
 assume_abort_if_not(var_1_45 <= 65534);
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 16383);
 assume_abort_if_not(var_1_47 <= 32767);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 8191);
 assume_abort_if_not(var_1_48 <= 16383);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -922337.2036854765600e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 16383);
 assume_abort_if_not(var_1_58 <= 32766);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427387900e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= -126);
 assume_abort_if_not(var_1_67 <= 126);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= -126);
 assume_abort_if_not(var_1_68 <= 126);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 64);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 63);
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 31);
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 63);
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_76 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 63);
 var_1_81 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854776000e+12F && var_1_81 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427382800e+12F && var_1_84 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return ((((((var_1_19 ? (var_1_1 == ((signed short int) ((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))) : ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) >= var_1_6) ? (var_1_1 == ((signed short int) var_1_5)) : 1)) && ((var_1_5 >= -2) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_14) && (var_1_19 && var_1_19)) ? ((var_1_13 < var_1_7) ? (var_1_8 == ((unsigned char) (var_1_19 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((last_1_var_1_13 >= (var_1_6 / var_1_7)) ? ((var_1_6 != ((((((((var_1_6) > (last_1_var_1_13)) ? (var_1_6) : (last_1_var_1_13)))) > (var_1_5)) ? (((((var_1_6) > (last_1_var_1_13)) ? (var_1_6) : (last_1_var_1_13)))) : (var_1_5)))) ? (var_1_13 == ((signed short int) var_1_7)) : (var_1_13 == ((signed short int) last_1_var_1_13))) : (var_1_13 == ((signed short int) var_1_6)))) && (((((((last_1_var_1_1) < (8)) ? (last_1_var_1_1) : (8))) <= var_1_5) || last_1_var_1_8) ? ((last_1_var_1_1 <= last_1_var_1_6) ? (var_1_14 == ((float) (var_1_15 + var_1_16))) : (var_1_14 == ((float) var_1_16))) : (var_1_14 == ((float) var_1_16)))) && ((var_1_6 > var_1_6) ? (var_1_17 == ((unsigned short int) ((((25) > ((var_1_13 + var_1_6))) ? (25) : ((var_1_13 + var_1_6)))))) : 1)) && ((var_1_14 <= var_1_15) ? (var_1_19 == ((unsigned char) (var_1_12 || var_1_20))) : 1)
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
