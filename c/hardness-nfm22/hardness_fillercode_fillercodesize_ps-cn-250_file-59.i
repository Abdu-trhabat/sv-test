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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;
unsigned short int var_1_20 = 25;
signed long int var_1_21 = -10;
unsigned long int var_1_22 = 16;
signed long int var_1_23 = -1;
unsigned short int var_1_24 = 2;
unsigned short int var_1_25 = 64;
unsigned short int var_1_26 = 25;
signed char var_1_27 = 2;
signed char var_1_28 = 4;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 25;
unsigned char var_1_31 = 32;
unsigned short int var_1_32 = 2;
unsigned long int var_1_33 = 50;
float var_1_34 = 64.5;
float var_1_35 = 8.5;
unsigned long int var_1_36 = 1;
unsigned long int var_1_37 = 2686294421;
unsigned long int var_1_38 = 100000000;
unsigned long int var_1_39 = 3411657433;
unsigned long int var_1_40 = 1655612283;
unsigned long int var_1_41 = 0;
signed short int var_1_42 = -50;
signed short int var_1_43 = -25;
signed short int var_1_44 = 4;
unsigned short int var_1_45 = 256;
double var_1_46 = 4.75;
signed short int var_1_47 = -32;
signed short int var_1_48 = 128;
signed short int var_1_49 = 27740;
unsigned long int var_1_50 = 100;
signed short int var_1_51 = -8;
double var_1_52 = 99.9;
double var_1_53 = 2.875;
double var_1_54 = 99999999.25;
double var_1_55 = 49.85;
signed char var_1_56 = -1;
signed char var_1_57 = 4;
unsigned char var_1_58 = 8;
unsigned long int var_1_59 = 128;
signed char var_1_60 = 32;
unsigned long int var_1_61 = 1;
float var_1_62 = 7.2;
unsigned short int var_1_63 = 41805;
double var_1_64 = 100000.8;
double var_1_65 = 24.2;
double var_1_66 = 1.375;
double var_1_67 = 63.5;
double var_1_68 = 25.5;
double var_1_69 = 63.1;
unsigned char var_1_70 = 1;
signed long int var_1_71 = -10;
signed char var_1_72 = -2;
unsigned short int last_1_var_1_5 = 0;
unsigned char last_1_var_1_15 = 1;
unsigned char last_1_var_1_18 = 1;
unsigned long int last_1_var_1_19 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_21 >> (var_1_22 - 16u)) < ((((8) > (var_1_23)) ? (8) : (var_1_23)))) {
  var_1_20 = (((((var_1_22 + ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) > (var_1_26)) ? ((var_1_22 + ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) : (var_1_26)));
 } else {
  if (var_1_24 < (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) & var_1_25)) {
   var_1_20 = ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)));
  }
 }
 if (var_1_22 >= var_1_25) {
  if ((~ var_1_20) < var_1_25) {
   var_1_27 = (var_1_22 - var_1_28);
  }
 } else {
  if (var_1_29) {
   var_1_27 = ((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28)));
  } else {
   var_1_27 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
  }
 }
 var_1_30 = ((((var_1_28) < (var_1_24)) ? (var_1_28) : (var_1_24)));
 if (500 > var_1_21) {
  if (var_1_26 >= var_1_32) {
   if (var_1_29 && (var_1_21 > var_1_20)) {
    if (var_1_23 > var_1_30) {
     var_1_31 = var_1_22;
    }
   }
  }
 }
 if (4 <= var_1_22) {
  if ((var_1_28 / ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) < ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
   var_1_33 = ((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) < 0 ) ? -((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) : ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) + var_1_22);
  }
 }
 if (var_1_25 >= (var_1_20 + var_1_22)) {
  var_1_34 = (((((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) < (10.2f)) ? ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) : (10.2f)));
 }
 var_1_36 = (((((var_1_37 - var_1_22)) > (var_1_32)) ? ((var_1_37 - var_1_22)) : (var_1_32)));
 if (var_1_20 <= ((var_1_33 / var_1_22) << var_1_32)) {
  var_1_38 = (((((var_1_37) > (var_1_39)) ? (var_1_37) : (var_1_39))) - (((((1627975517u) < (var_1_40)) ? (1627975517u) : (var_1_40))) - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))));
 } else {
  var_1_38 = var_1_37;
 }
 if (var_1_23 >= ((((var_1_22) < (var_1_33)) ? (var_1_22) : (var_1_33)))) {
  if (((((var_1_28) < ((var_1_30 / var_1_22))) ? (var_1_28) : ((var_1_30 / var_1_22)))) <= ((((var_1_23) > (var_1_31)) ? (var_1_23) : (var_1_31)))) {
   var_1_41 = ((((((((16u) < 0 ) ? -(16u) : (16u)))) < (var_1_22)) ? (((((16u) < 0 ) ? -(16u) : (16u)))) : (var_1_22)));
  } else {
   var_1_41 = ((((var_1_25 + var_1_24) < 0 ) ? -(var_1_25 + var_1_24) : (var_1_25 + var_1_24)));
  }
 }
 if (! (var_1_23 > -64)) {
  if (var_1_33 <= var_1_30) {
   if ((var_1_25 | (var_1_36 * var_1_40)) <= var_1_30) {
    var_1_42 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
   }
  }
 } else {
  var_1_42 = (var_1_28 - (500 + var_1_31));
 }
 if ((var_1_23 ^ var_1_41) >= ((((var_1_22 / 16u) < 0 ) ? -(var_1_22 / 16u) : (var_1_22 / 16u)))) {
  if (var_1_29) {
   var_1_43 = -256;
  } else {
   if (var_1_22 > var_1_21) {
    var_1_43 = (var_1_44 - var_1_28);
   }
  }
 }
 if (var_1_46 < (var_1_35 + var_1_34)) {
  var_1_45 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  var_1_45 = var_1_44;
 }
 if (var_1_45 < var_1_20) {
  if (var_1_46 >= ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) {
   var_1_47 = (((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) < 0 ) ? -((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) : ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))));
  }
 } else {
  if ((~ var_1_25) == (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) - var_1_24)) {
   var_1_47 = (var_1_31 - (var_1_49 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))));
  }
 }
 if (((((-256) < 0 ) ? -(-256) : (-256))) < var_1_30) {
  var_1_50 = (var_1_25 + ((((5u) < 0 ) ? -(5u) : (5u))));
 }
 if ((- var_1_46) < var_1_35) {
  if (((var_1_38 + var_1_44) % var_1_37) < 1u) {
   var_1_51 = var_1_22;
  } else {
   if (((((15.5) < (var_1_34)) ? (15.5) : (var_1_34))) > var_1_46) {
    var_1_51 = (((((var_1_31) < (64)) ? (var_1_31) : (64))) + var_1_27);
   }
  }
 }
 if (var_1_30 < var_1_40) {
  if (var_1_51 > (var_1_49 - var_1_44)) {
   var_1_52 = ((((((((((((var_1_35) < (var_1_53)) ? (var_1_35) : (var_1_53)))) < (var_1_54)) ? (((((var_1_35) < (var_1_53)) ? (var_1_35) : (var_1_53)))) : (var_1_54)))) < (var_1_55)) ? (((((((((var_1_35) < (var_1_53)) ? (var_1_35) : (var_1_53)))) < (var_1_54)) ? (((((var_1_35) < (var_1_53)) ? (var_1_35) : (var_1_53)))) : (var_1_54)))) : (var_1_55)));
  } else {
   var_1_52 = ((((var_1_55) > (var_1_35)) ? (var_1_55) : (var_1_35)));
  }
 }
 if (var_1_38 > (- 64u)) {
  if ((var_1_22 - var_1_28) > (var_1_33 / var_1_39)) {
   var_1_56 = 16;
  }
 }
 if (var_1_29) {
  var_1_58 = var_1_28;
 }
 if (var_1_29) {
  var_1_59 = var_1_26;
 }
 var_1_60 = var_1_28;
 if (var_1_29) {
  var_1_61 = var_1_39;
 } else {
  var_1_61 = var_1_20;
 }
 if ((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - ((((var_1_44) > (var_1_58)) ? (var_1_44) : (var_1_58)))) >= var_1_51) {
  if (var_1_38 <= (var_1_45 / var_1_22)) {
   var_1_62 = ((((((((var_1_55) < (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) ? (var_1_55) : (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))))) > (var_1_53)) ? (((((var_1_55) < (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) ? (var_1_55) : (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))))) : (var_1_53)));
  } else {
   var_1_62 = var_1_53;
  }
 } else {
  var_1_62 = 3.4f;
 }
 if (! (var_1_34 <= ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) {
  if (var_1_65 >= var_1_34) {
   if ((var_1_26 % var_1_49) > (((((((var_1_42) > (var_1_28)) ? (var_1_42) : (var_1_28))) < 0 ) ? -((((var_1_42) > (var_1_28)) ? (var_1_42) : (var_1_28))) : ((((var_1_42) > (var_1_28)) ? (var_1_42) : (var_1_28)))))) {
    var_1_64 = (4.45 + ((((var_1_66) > (((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))))) ? (var_1_66) : (((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68)))))));
   } else {
    var_1_64 = ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)));
   }
  } else {
   var_1_64 = ((((((((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) < 0 ) ? -((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) : ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) < 0 ) ? -(((((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) < 0 ) ? -((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) : ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) : (((((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) < 0 ) ? -((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) : ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))));
  }
 }
 if (var_1_36 >= (var_1_33 >> var_1_28)) {
  if (var_1_29 && var_1_70) {
   var_1_69 = (((((var_1_66) < (var_1_68)) ? (var_1_66) : (var_1_68))) + var_1_67);
  }
 }
 if ((var_1_48 + 4) < 256) {
  if (var_1_23 <= var_1_21) {
   var_1_71 = -10;
  }
 } else {
  if ((var_1_43 > 64) || var_1_29) {
   if ((var_1_39 - var_1_63) >= var_1_24) {
    var_1_71 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
   } else {
    var_1_71 = var_1_32;
   }
  } else {
   var_1_71 = (var_1_32 - var_1_63);
  }
 }
 if (((((var_1_26) > (var_1_24)) ? (var_1_26) : (var_1_24))) >= var_1_25) {
  var_1_72 = (-4 + var_1_57);
 } else {
  if (var_1_29) {
   var_1_72 = ((((((((var_1_28) > (var_1_57)) ? (var_1_28) : (var_1_57)))) < (var_1_22)) ? (((((var_1_28) > (var_1_57)) ? (var_1_28) : (var_1_57)))) : (var_1_22)));
  } else {
   var_1_72 = var_1_57;
  }
 }
 unsigned char stepLocal_3 = last_1_var_1_19 < var_1_6;
 if (last_1_var_1_18) {
  if ((! last_1_var_1_15) || stepLocal_3) {
   var_1_8 = ((((127.25) > (var_1_10)) ? (127.25) : (var_1_10)));
  } else {
   var_1_8 = (var_1_11 + var_1_12);
  }
 } else {
  var_1_8 = var_1_11;
 }
 if (var_1_12 != var_1_8) {
  var_1_15 = (! var_1_16);
 } else {
  var_1_15 = var_1_16;
 }
 var_1_17 = var_1_4;
 var_1_18 = var_1_16;
 var_1_19 = var_1_4;
 unsigned short int stepLocal_1 = var_1_17;
 unsigned char stepLocal_0 = var_1_17 != (16 / var_1_4);
 if (stepLocal_0 && var_1_15) {
  if (stepLocal_1 > var_1_4) {
   var_1_1 = (var_1_4 + var_1_17);
  } else {
   if (var_1_15) {
    var_1_1 = var_1_17;
   } else {
    var_1_1 = var_1_4;
   }
  }
 } else {
  var_1_1 = var_1_17;
 }
 unsigned short int stepLocal_2 = var_1_17;
 if (stepLocal_2 < last_1_var_1_5) {
  var_1_5 = (var_1_6 - (var_1_7 - last_1_var_1_5));
 } else {
  if (! var_1_15) {
   var_1_5 = ((((last_1_var_1_5) > ((var_1_7 + var_1_4))) ? (last_1_var_1_5) : ((var_1_7 + var_1_4))));
  }
 }
 unsigned short int stepLocal_5 = var_1_6;
 unsigned short int stepLocal_4 = var_1_5;
 if (stepLocal_4 != ((var_1_6 / var_1_4) * ((((var_1_5) > (var_1_19)) ? (var_1_5) : (var_1_19))))) {
  if (var_1_5 <= stepLocal_5) {
   var_1_13 = 32;
  } else {
   var_1_13 = var_1_14;
  }
 } else {
  var_1_13 = var_1_14;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 16383);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483648);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 16);
 assume_abort_if_not(var_1_22 <= 32);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 65535);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= -32767);
 assume_abort_if_not(var_1_48 <= 32766);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 16383);
 assume_abort_if_not(var_1_49 <= 32766);
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -922337.2036854765600e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= -922337.2036854765600e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= -922337.2036854765600e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= -63);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 32767);
 assume_abort_if_not(var_1_63 <= 65535);
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= -922337.2036854776000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= -461168.6018427382800e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427382800e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= -461168.6018427382800e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= -461168.6018427382800e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427382800e+12F && var_1_68 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 1);
}
void updateLastVariables() {
 last_1_var_1_5 = var_1_5;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_19 = var_1_19;
}
int property() {
 return (((((((((var_1_17 != (16 / var_1_4)) && var_1_15) ? ((var_1_17 > var_1_4) ? (var_1_1 == ((unsigned short int) (var_1_4 + var_1_17))) : (var_1_15 ? (var_1_1 == ((unsigned short int) var_1_17)) : (var_1_1 == ((unsigned short int) var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_17))) && ((var_1_17 < last_1_var_1_5) ? (var_1_5 == ((unsigned short int) (var_1_6 - (var_1_7 - last_1_var_1_5)))) : ((! var_1_15) ? (var_1_5 == ((unsigned short int) ((((last_1_var_1_5) > ((var_1_7 + var_1_4))) ? (last_1_var_1_5) : ((var_1_7 + var_1_4)))))) : 1))) && (last_1_var_1_18 ? (((! last_1_var_1_15) || (last_1_var_1_19 < var_1_6)) ? (var_1_8 == ((double) ((((127.25) > (var_1_10)) ? (127.25) : (var_1_10))))) : (var_1_8 == ((double) (var_1_11 + var_1_12)))) : (var_1_8 == ((double) var_1_11)))) && ((var_1_5 != ((var_1_6 / var_1_4) * ((((var_1_5) > (var_1_19)) ? (var_1_5) : (var_1_19))))) ? ((var_1_5 <= var_1_6) ? (var_1_13 == ((unsigned char) 32)) : (var_1_13 == ((unsigned char) var_1_14))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_12 != var_1_8) ? (var_1_15 == ((unsigned char) (! var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && (var_1_17 == ((unsigned short int) var_1_4))) && (var_1_18 == ((unsigned char) var_1_16))) && (var_1_19 == ((unsigned long int) var_1_4))
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
