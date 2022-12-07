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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed short int var_1_4 = 31024;
signed long int var_1_8 = 32;
unsigned short int var_1_9 = 41562;
signed short int var_1_10 = 64;
signed long int var_1_15 = -2;
unsigned short int var_1_17 = 8;
unsigned short int var_1_19 = 10000;
unsigned short int var_1_20 = 10000;
unsigned short int var_1_21 = 23008;
signed long int var_1_22 = 2;
signed char var_1_23 = 32;
signed char var_1_24 = 32;
signed short int var_1_26 = -100;
unsigned long int var_1_27 = 32;
signed char var_1_28 = -128;
signed char var_1_29 = 8;
signed char var_1_30 = 16;
signed char var_1_31 = 8;
signed char var_1_32 = -4;
signed char var_1_33 = -1;
signed char var_1_34 = -1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 0;
unsigned short int var_1_39 = 64625;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
signed char var_1_42 = -64;
signed char var_1_43 = 64;
unsigned long int var_1_44 = 2;
unsigned long int var_1_45 = 3241049911;
unsigned long int var_1_46 = 3287639434;
unsigned short int var_1_48 = 5;
unsigned short int var_1_49 = 24894;
float var_1_50 = -0.75;
float var_1_51 = 9.5;
float var_1_52 = 64.5;
float var_1_53 = 999999.5;
float var_1_54 = 3.5;
float var_1_55 = 31.5;
float var_1_56 = 16.5;
float var_1_57 = 256.2;
unsigned char var_1_58 = 200;
unsigned char var_1_59 = 128;
unsigned char var_1_60 = 64;
double var_1_61 = 3.75;
unsigned long int var_1_62 = 8;
signed short int var_1_63 = 8;
signed short int last_1_var_1_1 = 16;
signed long int last_1_var_1_8 = 32;
signed short int last_1_var_1_10 = 64;
unsigned short int last_1_var_1_17 = 8;
signed long int last_1_var_1_22 = 2;
signed char last_1_var_1_32 = -4;
unsigned char last_1_var_1_35 = 0;
unsigned char last_1_var_1_40 = 1;
float last_1_var_1_50 = -0.75;
unsigned char last_1_var_1_58 = 200;
unsigned char last_1_var_1_60 = 64;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_22 = last_1_var_1_40;
 if (stepLocal_22 && (last_1_var_1_8 <= ((((var_1_59) < (last_1_var_1_60)) ? (var_1_59) : (last_1_var_1_60))))) {
  if ((- var_1_55) <= last_1_var_1_50) {
   var_1_63 = (var_1_29 - var_1_24);
  } else {
   var_1_63 = last_1_var_1_60;
  }
 } else {
  var_1_63 = var_1_29;
 }
 signed long int stepLocal_19 = last_1_var_1_32;
 unsigned short int stepLocal_18 = var_1_20;
 signed long int stepLocal_17 = last_1_var_1_22;
 if ((var_1_23 + var_1_45) >= stepLocal_19) {
  var_1_48 = (var_1_39 - (var_1_21 - 128));
 } else {
  if (stepLocal_18 < (last_1_var_1_1 >> 10)) {
   var_1_48 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  } else {
   if ((last_1_var_1_58 / var_1_43) == stepLocal_17) {
    var_1_48 = ((var_1_21 + var_1_49) - (var_1_23 + ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20)))));
   }
  }
 }
 signed short int stepLocal_4 = var_1_4;
 signed long int stepLocal_3 = ((((64513) < (var_1_9)) ? (64513) : (var_1_9))) - var_1_4;
 if (stepLocal_4 <= last_1_var_1_10) {
  if (stepLocal_3 >= (5 * last_1_var_1_60)) {
   var_1_8 = ((((last_1_var_1_60) > (last_1_var_1_60)) ? (last_1_var_1_60) : (last_1_var_1_60)));
  } else {
   var_1_8 = (last_1_var_1_60 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))));
  }
 } else {
  var_1_8 = last_1_var_1_60;
 }
 signed long int stepLocal_20 = last_1_var_1_1;
 if (stepLocal_20 <= (last_1_var_1_17 / ((((var_1_4) < (var_1_49)) ? (var_1_4) : (var_1_49))))) {
  var_1_50 = ((((((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))) < (var_1_53)) ? (((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))) : (var_1_53)));
 } else {
  var_1_50 = (var_1_54 + (var_1_55 + (var_1_56 - var_1_57)));
 }
 if (last_1_var_1_35 && var_1_36) {
  var_1_58 = (var_1_59 - 2);
 } else {
  var_1_58 = ((((var_1_23) < ((1 + ((((5) < (var_1_24)) ? (5) : (var_1_24)))))) ? (var_1_23) : ((1 + ((((5) < (var_1_24)) ? (5) : (var_1_24)))))));
 }
 unsigned short int stepLocal_8 = var_1_20;
 if (stepLocal_8 < 64) {
  var_1_27 = ((((var_1_9) < (var_1_48)) ? (var_1_9) : (var_1_48)));
 }
 var_1_34 = var_1_31;
 if (var_1_49 == (var_1_46 * var_1_23)) {
  var_1_60 = 64;
 }
 if (var_1_56 >= var_1_52) {
  var_1_62 = var_1_4;
 } else {
  var_1_62 = 100000000u;
 }
 if ((var_1_60 + var_1_4) <= var_1_58) {
  var_1_15 = ((((-4) < (var_1_63)) ? (-4) : (var_1_63)));
 }
 signed short int stepLocal_10 = var_1_4;
 unsigned char stepLocal_9 = var_1_60;
 if (var_1_24 <= stepLocal_10) {
  if (! (var_1_30 == ((((8) > (-10)) ? (8) : (-10))))) {
   var_1_32 = ((((var_1_23 + (var_1_30 + var_1_33)) < 0 ) ? -(var_1_23 + (var_1_30 + var_1_33)) : (var_1_23 + (var_1_30 + var_1_33))));
  }
 } else {
  if (stepLocal_9 > ((var_1_20 / var_1_19) | (var_1_48 * var_1_58))) {
   var_1_32 = (((((var_1_23 + var_1_33)) < (var_1_30)) ? ((var_1_23 + var_1_33)) : (var_1_30)));
  } else {
   var_1_32 = (((((((var_1_29 + var_1_23) < 0 ) ? -(var_1_29 + var_1_23) : (var_1_29 + var_1_23))) < 0 ) ? -((((var_1_29 + var_1_23) < 0 ) ? -(var_1_29 + var_1_23) : (var_1_29 + var_1_23))) : ((((var_1_29 + var_1_23) < 0 ) ? -(var_1_29 + var_1_23) : (var_1_29 + var_1_23)))));
  }
 }
 signed long int stepLocal_5 = var_1_8 / var_1_9;
 if (stepLocal_5 != var_1_58) {
  var_1_17 = ((((32) < (var_1_58)) ? (32) : (var_1_58)));
 } else {
  var_1_17 = (((var_1_19 + var_1_20) + var_1_21) - var_1_58);
 }
 if (var_1_24 < ((((var_1_20) > (var_1_60)) ? (var_1_20) : (var_1_60)))) {
  var_1_28 = (((var_1_29 + var_1_30) + var_1_23) - var_1_31);
 }
 signed long int stepLocal_14 = var_1_24 / var_1_39;
 signed char stepLocal_13 = var_1_32;
 unsigned char stepLocal_12 = var_1_58;
 if (stepLocal_12 >= var_1_4) {
  if (stepLocal_14 >= var_1_58) {
   if (stepLocal_13 >= var_1_23) {
    var_1_40 = ((var_1_63 != (var_1_23 - var_1_31)) && (var_1_36 || var_1_41));
   } else {
    var_1_40 = ((1u > ((((var_1_58) > (var_1_15)) ? (var_1_58) : (var_1_15)))) && var_1_36);
   }
  }
 }
 signed long int stepLocal_21 = -32;
 if (stepLocal_21 <= var_1_17) {
  var_1_61 = (var_1_57 - 3.8);
 } else {
  var_1_61 = var_1_51;
 }
 signed long int stepLocal_11 = -50;
 if (var_1_24 > stepLocal_11) {
  var_1_35 = ((var_1_40 || var_1_40) && var_1_36);
 } else {
  var_1_35 = (! var_1_37);
 }
 if ((var_1_50 + var_1_50) > var_1_61) {
  var_1_38 = (((((8 + var_1_21)) < ((var_1_39 - 10))) ? ((8 + var_1_21)) : ((var_1_39 - 10))));
 }
 unsigned short int stepLocal_2 = var_1_38;
 unsigned char stepLocal_1 = var_1_58;
 unsigned short int stepLocal_0 = var_1_38;
 if (stepLocal_0 <= var_1_8) {
  if ((- var_1_8) > stepLocal_2) {
   var_1_1 = ((var_1_4 - var_1_58) - var_1_58);
  }
 } else {
  if ((var_1_38 * (var_1_8 + var_1_4)) > stepLocal_1) {
   var_1_1 = (var_1_58 + var_1_60);
  } else {
   var_1_1 = var_1_58;
  }
 }
 if (! (var_1_35 || (var_1_50 > var_1_61))) {
  if (var_1_50 == var_1_61) {
   var_1_42 = ((((var_1_33) < ((32 - var_1_31))) ? (var_1_33) : ((32 - var_1_31))));
  } else {
   var_1_42 = ((var_1_43 - var_1_30) - (((((var_1_29 + var_1_23)) > (var_1_31)) ? ((var_1_29 + var_1_23)) : (var_1_31))));
  }
 } else {
  var_1_42 = (16 - var_1_43);
 }
 unsigned char stepLocal_16 = ! (var_1_35 && var_1_35);
 signed long int stepLocal_15 = var_1_8;
 if ((16 ^ 4) >= stepLocal_15) {
  if (var_1_41 && stepLocal_16) {
   var_1_44 = (((((var_1_45) < (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? (var_1_45) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))))) - 2u);
  } else {
   var_1_44 = (var_1_46 - var_1_48);
  }
 }
 signed char stepLocal_7 = var_1_42;
 if (stepLocal_7 >= -256) {
  var_1_26 = (((((var_1_20) < (((((var_1_19) > (var_1_23)) ? (var_1_19) : (var_1_23))))) ? (var_1_20) : (((((var_1_19) > (var_1_23)) ? (var_1_19) : (var_1_23)))))) - var_1_58);
 } else {
  var_1_26 = (4 + var_1_24);
 }
 signed long int stepLocal_6 = ((((var_1_20) > (var_1_58)) ? (var_1_20) : (var_1_58))) - var_1_9;
 if (((10 + var_1_23) - var_1_24) > stepLocal_6) {
  var_1_22 = var_1_38;
 } else {
  if ((var_1_61 + (3.375 * var_1_50)) <= ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) {
   var_1_22 = (var_1_58 - (32 + var_1_48));
  } else {
   var_1_22 = (var_1_58 - ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))));
  }
 }
 if (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) > var_1_60) {
  if (var_1_4 > var_1_42) {
   if ((var_1_9 >= (var_1_4 * var_1_58)) && var_1_40) {
    var_1_10 = (var_1_4 - 500);
   }
  } else {
   if (-5 >= ((((var_1_42) < (var_1_44)) ? (var_1_42) : (var_1_44)))) {
    var_1_10 = var_1_42;
   } else {
    if (var_1_58 > (var_1_9 - 32)) {
     var_1_10 = ((((((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60)))) < (var_1_42)) ? (((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60)))) : (var_1_42)));
    } else {
     if (((((- var_1_50) < 0 ) ? -(- var_1_50) : (- var_1_50))) >= var_1_61) {
      var_1_10 = var_1_42;
     } else {
      var_1_10 = 64;
     }
    }
   }
  }
 } else {
  var_1_10 = var_1_42;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 16382);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 8191);
 assume_abort_if_not(var_1_19 <= 16384);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 8192);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16384);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 32);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 31);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -31);
 assume_abort_if_not(var_1_33 <= 31);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 62);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 2147483647);
 assume_abort_if_not(var_1_46 <= 4294967294);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 16384);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -922337.2036854765600e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -922337.2036854765600e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -922337.2036854765600e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 127);
 assume_abort_if_not(var_1_59 <= 254);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
}
int property() {
 return (((((((((((((((((((((((var_1_38 <= var_1_8) ? (((- var_1_8) > var_1_38) ? (var_1_1 == ((signed short int) ((var_1_4 - var_1_58) - var_1_58))) : 1) : (((var_1_38 * (var_1_8 + var_1_4)) > var_1_58) ? (var_1_1 == ((signed short int) (var_1_58 + var_1_60))) : (var_1_1 == ((signed short int) var_1_58)))) && ((var_1_4 <= last_1_var_1_10) ? (((((((64513) < (var_1_9)) ? (64513) : (var_1_9))) - var_1_4) >= (5 * last_1_var_1_60)) ? (var_1_8 == ((signed long int) ((((last_1_var_1_60) > (last_1_var_1_60)) ? (last_1_var_1_60) : (last_1_var_1_60))))) : (var_1_8 == ((signed long int) (last_1_var_1_60 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) : (var_1_8 == ((signed long int) last_1_var_1_60)))) && ((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) > var_1_60) ? ((var_1_4 > var_1_42) ? (((var_1_9 >= (var_1_4 * var_1_58)) && var_1_40) ? (var_1_10 == ((signed short int) (var_1_4 - 500))) : 1) : ((-5 >= ((((var_1_42) < (var_1_44)) ? (var_1_42) : (var_1_44)))) ? (var_1_10 == ((signed short int) var_1_42)) : ((var_1_58 > (var_1_9 - 32)) ? (var_1_10 == ((signed short int) ((((((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60)))) < (var_1_42)) ? (((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60)))) : (var_1_42))))) : ((((((- var_1_50) < 0 ) ? -(- var_1_50) : (- var_1_50))) >= var_1_61) ? (var_1_10 == ((signed short int) var_1_42)) : (var_1_10 == ((signed short int) 64)))))) : (var_1_10 == ((signed short int) var_1_42)))) && (((var_1_60 + var_1_4) <= var_1_58) ? (var_1_15 == ((signed long int) ((((-4) < (var_1_63)) ? (-4) : (var_1_63))))) : 1)) && (((var_1_8 / var_1_9) != var_1_58) ? (var_1_17 == ((unsigned short int) ((((32) < (var_1_58)) ? (32) : (var_1_58))))) : (var_1_17 == ((unsigned short int) (((var_1_19 + var_1_20) + var_1_21) - var_1_58))))) && ((((10 + var_1_23) - var_1_24) > (((((var_1_20) > (var_1_58)) ? (var_1_20) : (var_1_58))) - var_1_9)) ? (var_1_22 == ((signed long int) var_1_38)) : (((var_1_61 + (3.375 * var_1_50)) <= ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) ? (var_1_22 == ((signed long int) (var_1_58 - (32 + var_1_48)))) : (var_1_22 == ((signed long int) (var_1_58 - ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))))))))) && ((var_1_42 >= -256) ? (var_1_26 == ((signed short int) (((((var_1_20) < (((((var_1_19) > (var_1_23)) ? (var_1_19) : (var_1_23))))) ? (var_1_20) : (((((var_1_19) > (var_1_23)) ? (var_1_19) : (var_1_23)))))) - var_1_58))) : (var_1_26 == ((signed short int) (4 + var_1_24))))) && ((var_1_20 < 64) ? (var_1_27 == ((unsigned long int) ((((var_1_9) < (var_1_48)) ? (var_1_9) : (var_1_48))))) : 1)) && ((var_1_24 < ((((var_1_20) > (var_1_60)) ? (var_1_20) : (var_1_60)))) ? (var_1_28 == ((signed char) (((var_1_29 + var_1_30) + var_1_23) - var_1_31))) : 1)) && ((var_1_24 <= var_1_4) ? ((! (var_1_30 == ((((8) > (-10)) ? (8) : (-10))))) ? (var_1_32 == ((signed char) ((((var_1_23 + (var_1_30 + var_1_33)) < 0 ) ? -(var_1_23 + (var_1_30 + var_1_33)) : (var_1_23 + (var_1_30 + var_1_33)))))) : 1) : ((var_1_60 > ((var_1_20 / var_1_19) | (var_1_48 * var_1_58))) ? (var_1_32 == ((signed char) (((((var_1_23 + var_1_33)) < (var_1_30)) ? ((var_1_23 + var_1_33)) : (var_1_30))))) : (var_1_32 == ((signed char) (((((((var_1_29 + var_1_23) < 0 ) ? -(var_1_29 + var_1_23) : (var_1_29 + var_1_23))) < 0 ) ? -((((var_1_29 + var_1_23) < 0 ) ? -(var_1_29 + var_1_23) : (var_1_29 + var_1_23))) : ((((var_1_29 + var_1_23) < 0 ) ? -(var_1_29 + var_1_23) : (var_1_29 + var_1_23)))))))))) && (var_1_34 == ((signed char) var_1_31))) && ((var_1_24 > -50) ? (var_1_35 == ((unsigned char) ((var_1_40 || var_1_40) && var_1_36))) : (var_1_35 == ((unsigned char) (! var_1_37))))) && (((var_1_50 + var_1_50) > var_1_61) ? (var_1_38 == ((unsigned short int) (((((8 + var_1_21)) < ((var_1_39 - 10))) ? ((8 + var_1_21)) : ((var_1_39 - 10)))))) : 1)) && ((var_1_58 >= var_1_4) ? (((var_1_24 / var_1_39) >= var_1_58) ? ((var_1_32 >= var_1_23) ? (var_1_40 == ((unsigned char) ((var_1_63 != (var_1_23 - var_1_31)) && (var_1_36 || var_1_41)))) : (var_1_40 == ((unsigned char) ((1u > ((((var_1_58) > (var_1_15)) ? (var_1_58) : (var_1_15)))) && var_1_36)))) : 1) : 1)) && ((! (var_1_35 || (var_1_50 > var_1_61))) ? ((var_1_50 == var_1_61) ? (var_1_42 == ((signed char) ((((var_1_33) < ((32 - var_1_31))) ? (var_1_33) : ((32 - var_1_31)))))) : (var_1_42 == ((signed char) ((var_1_43 - var_1_30) - (((((var_1_29 + var_1_23)) > (var_1_31)) ? ((var_1_29 + var_1_23)) : (var_1_31))))))) : (var_1_42 == ((signed char) (16 - var_1_43))))) && (((16 ^ 4) >= var_1_8) ? ((var_1_41 && (! (var_1_35 && var_1_35))) ? (var_1_44 == ((unsigned long int) (((((var_1_45) < (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? (var_1_45) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))))) - 2u))) : (var_1_44 == ((unsigned long int) (var_1_46 - var_1_48)))) : 1)) && (((var_1_23 + var_1_45) >= last_1_var_1_32) ? (var_1_48 == ((unsigned short int) (var_1_39 - (var_1_21 - 128)))) : ((var_1_20 < (last_1_var_1_1 >> 10)) ? (var_1_48 == ((unsigned short int) ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) : (((last_1_var_1_58 / var_1_43) == last_1_var_1_22) ? (var_1_48 == ((unsigned short int) ((var_1_21 + var_1_49) - (var_1_23 + ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))))))) : 1)))) && ((last_1_var_1_1 <= (last_1_var_1_17 / ((((var_1_4) < (var_1_49)) ? (var_1_4) : (var_1_49))))) ? (var_1_50 == ((float) ((((((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))) < (var_1_53)) ? (((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))) : (var_1_53))))) : (var_1_50 == ((float) (var_1_54 + (var_1_55 + (var_1_56 - var_1_57))))))) && ((last_1_var_1_35 && var_1_36) ? (var_1_58 == ((unsigned char) (var_1_59 - 2))) : (var_1_58 == ((unsigned char) ((((var_1_23) < ((1 + ((((5) < (var_1_24)) ? (5) : (var_1_24)))))) ? (var_1_23) : ((1 + ((((5) < (var_1_24)) ? (5) : (var_1_24))))))))))) && ((var_1_49 == (var_1_46 * var_1_23)) ? (var_1_60 == ((unsigned char) 64)) : 1)) && ((-32 <= var_1_17) ? (var_1_61 == ((double) (var_1_57 - 3.8))) : (var_1_61 == ((double) var_1_51)))) && ((var_1_56 >= var_1_52) ? (var_1_62 == ((unsigned long int) var_1_4)) : (var_1_62 == ((unsigned long int) 100000000u)))) && ((last_1_var_1_40 && (last_1_var_1_8 <= ((((var_1_59) < (last_1_var_1_60)) ? (var_1_59) : (last_1_var_1_60))))) ? (((- var_1_55) <= last_1_var_1_50) ? (var_1_63 == ((signed short int) (var_1_29 - var_1_24))) : (var_1_63 == ((signed short int) last_1_var_1_60))) : (var_1_63 == ((signed short int) var_1_29)))
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
