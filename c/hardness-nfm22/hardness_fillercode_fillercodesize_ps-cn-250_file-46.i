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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 52077;
unsigned short int var_1_8 = 47248;
unsigned short int var_1_9 = 50;
float var_1_11 = 63.75;
signed long int var_1_12 = 100000;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 2;
signed long int var_1_15 = 32;
double var_1_17 = 127.5;
double var_1_18 = 32.75;
signed char var_1_19 = 0;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 32;
unsigned long int var_1_22 = 10;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 16;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 32;
unsigned char var_1_30 = 2;
signed char var_1_31 = 4;
signed char var_1_32 = -5;
signed char var_1_33 = -16;
signed char var_1_34 = -8;
signed short int var_1_35 = 4;
double var_1_36 = 16.7;
unsigned short int var_1_37 = 100;
signed char var_1_38 = 0;
double var_1_39 = 2.875;
double var_1_40 = 4.5;
double var_1_41 = 9999999999.2;
unsigned char var_1_42 = 32;
double var_1_43 = 9.5;
unsigned char var_1_44 = 16;
unsigned short int var_1_45 = 50;
unsigned long int var_1_46 = 16;
float var_1_47 = 0.875;
signed short int var_1_48 = -8;
double var_1_49 = 0.0;
float var_1_50 = 7.75;
double var_1_51 = 64.6;
unsigned char var_1_52 = 16;
unsigned char var_1_53 = 128;
unsigned long int var_1_54 = 50;
double var_1_55 = 2.5;
unsigned char var_1_56 = 0;
unsigned short int var_1_57 = 16;
unsigned short int var_1_58 = 63205;
float var_1_59 = 4.6;
unsigned char var_1_60 = 0;
signed long int var_1_61 = 8;
signed long int var_1_62 = 8;
float var_1_63 = 49.6;
signed char var_1_64 = -4;
unsigned char var_1_65 = 0;
unsigned long int var_1_66 = 3843864885;
double var_1_67 = 127.2;
unsigned char var_1_68 = 5;
signed char var_1_69 = -10;
double var_1_70 = 16.9;
unsigned char var_1_71 = 0;
signed long int var_1_72 = -1;
double var_1_73 = 16.5;
double var_1_74 = 0.0;
signed char var_1_75 = -10;
signed short int var_1_76 = -25;
unsigned char var_1_77 = 16;
unsigned short int last_1_var_1_13 = 8;
double last_1_var_1_17 = 127.5;
void initially(void) {
}
void step(void) {
 var_1_21 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 if (var_1_21 > var_1_22) {
  if (var_1_22 < var_1_21) {
   var_1_23 = (var_1_24 && var_1_25);
  }
 } else {
  var_1_23 = (! var_1_26);
 }
 if (var_1_24) {
  var_1_27 = ((((((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) + var_1_30) < 0 ) ? -(((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) + var_1_30) : (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) + var_1_30)));
 }
 if (var_1_27 < var_1_29) {
  var_1_31 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 } else {
  var_1_31 = (-32 + (var_1_33 + var_1_34));
 }
 if ((var_1_27 >> var_1_34) < (var_1_28 ^ -25)) {
  var_1_35 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
 }
 if ((var_1_37 >= var_1_21) && var_1_24) {
  if ((var_1_29 << ((((0) < (var_1_38)) ? (0) : (var_1_38)))) >= ((((var_1_35) > (var_1_33)) ? (var_1_35) : (var_1_33)))) {
   var_1_36 = (var_1_39 - (var_1_40 + var_1_41));
  } else {
   if (var_1_24) {
    var_1_36 = (((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40))) < 0 ) ? -((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40))) : ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))));
   }
  }
 } else {
  var_1_36 = var_1_40;
 }
 if ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) ^ (-32 ^ 500)) >= ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
  var_1_42 = (128 - var_1_30);
 } else {
  if ((var_1_37 / 128) < 4) {
   var_1_42 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  } else {
   var_1_42 = (((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) < 0 ) ? -((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) : ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))));
  }
 }
 if ((- var_1_40) > var_1_39) {
  if (var_1_28 > (var_1_29 % var_1_44)) {
   var_1_43 = ((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41)));
  }
 } else {
  if (var_1_42 >= (var_1_28 << var_1_44)) {
   if (var_1_36 > var_1_40) {
    var_1_43 = ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) > (var_1_40)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_40)));
   } else {
    if (var_1_26 && (var_1_38 <= var_1_34)) {
     var_1_43 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
    } else {
     var_1_43 = ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) - var_1_39);
    }
   }
  }
 }
 if ((var_1_42 + var_1_28) < ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
  var_1_45 = ((((var_1_44) < (var_1_27)) ? (var_1_44) : (var_1_27)));
 }
 if (! var_1_25) {
  var_1_46 = (((((3269467962u - var_1_27)) > (var_1_42)) ? ((3269467962u - var_1_27)) : (var_1_42)));
 }
 if (var_1_34 >= var_1_38) {
  var_1_47 = (var_1_39 - var_1_40);
 } else {
  if ((var_1_21 * var_1_46) <= 1u) {
   var_1_47 = var_1_40;
  }
 }
 if (var_1_28 <= 5) {
  if ((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - (var_1_49 - var_1_41)) <= var_1_47) {
   var_1_48 = (var_1_32 + (((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) < 0 ) ? -((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) : ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))));
  }
 } else {
  var_1_48 = ((((128) < 0 ) ? -(128) : (128)));
 }
 if (var_1_25) {
  var_1_50 = ((((var_1_41) < (((((var_1_39 - 8.25f) < 0 ) ? -(var_1_39 - 8.25f) : (var_1_39 - 8.25f))))) ? (var_1_41) : (((((var_1_39 - 8.25f) < 0 ) ? -(var_1_39 - 8.25f) : (var_1_39 - 8.25f))))));
 }
 if (((var_1_37 / var_1_44) & var_1_46) != var_1_42) {
  var_1_51 = (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))));
 } else {
  if ((((((((5) > (var_1_32)) ? (5) : (var_1_32))) < 0 ) ? -((((5) > (var_1_32)) ? (5) : (var_1_32))) : ((((5) > (var_1_32)) ? (5) : (var_1_32))))) > -256) {
   var_1_51 = (var_1_40 + 63.875);
  }
 }
 if (((((0u) < (var_1_46)) ? (0u) : (var_1_46))) < (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) / var_1_44)) {
  var_1_52 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 } else {
  if ((var_1_21 > (var_1_37 | 1u)) || var_1_26) {
   var_1_52 = (var_1_53 - var_1_28);
  } else {
   var_1_52 = ((((var_1_29 + var_1_30) < 0 ) ? -(var_1_29 + var_1_30) : (var_1_29 + var_1_30)));
  }
 }
 if (var_1_23) {
  var_1_54 = ((((var_1_29) > (var_1_38)) ? (var_1_29) : (var_1_38)));
 } else {
  var_1_54 = var_1_38;
 }
 if (! var_1_23) {
  if (var_1_52 < ((((var_1_38) > (var_1_46)) ? (var_1_38) : (var_1_46)))) {
   var_1_55 = (((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))));
  }
 }
 if (! var_1_25) {
  var_1_56 = ((var_1_41 >= var_1_50) || var_1_26);
 }
 if (var_1_23) {
  if (((var_1_31 + var_1_27) + (var_1_28 % var_1_53)) >= var_1_46) {
   var_1_57 = (var_1_58 - ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))));
  }
 } else {
  var_1_57 = (var_1_58 - var_1_42);
 }
 if (var_1_51 > var_1_43) {
  var_1_59 = (15.5f - (var_1_41 + var_1_40));
 }
 if ((var_1_44 >> ((((var_1_38) > (var_1_61)) ? (var_1_38) : (var_1_61)))) > var_1_45) {
  var_1_60 = (! var_1_25);
 }
 var_1_62 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
 if (var_1_34 > ((-32 / var_1_44) / ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) {
  var_1_63 = (var_1_40 - var_1_39);
 } else {
  if ((var_1_22 / var_1_53) >= var_1_37) {
   if (! (var_1_64 >= var_1_22)) {
    if (var_1_23) {
     var_1_63 = var_1_41;
    } else {
     var_1_63 = (var_1_41 + var_1_40);
    }
   }
  }
 }
 if (var_1_63 > (var_1_36 + var_1_49)) {
  if ((var_1_66 - 256u) <= (var_1_42 >> var_1_32)) {
   var_1_65 = (((- var_1_36) != var_1_67) || (! var_1_25));
  }
 }
 if (var_1_69 >= (-2 / var_1_44)) {
  var_1_68 = (((((((((var_1_53) < (128)) ? (var_1_53) : (128))) - 32)) > (var_1_38)) ? ((((((var_1_53) < (128)) ? (var_1_53) : (128))) - 32)) : (var_1_38)));
 }
 if (var_1_23) {
  if ((var_1_51 * 4.6f) <= var_1_50) {
   if (var_1_56) {
    var_1_70 = var_1_41;
   }
  }
 }
 if (var_1_60) {
  var_1_71 = var_1_26;
 } else {
  var_1_71 = var_1_26;
 }
 if (var_1_71) {
  var_1_72 = var_1_33;
 }
 if (var_1_24 && (((((var_1_58) > (var_1_31)) ? (var_1_58) : (var_1_31))) > var_1_46)) {
  var_1_73 = ((var_1_74 - var_1_41) - var_1_39);
 }
 var_1_75 = var_1_32;
 var_1_76 = var_1_42;
 var_1_77 = var_1_30;
 if (-100000 >= last_1_var_1_13) {
  var_1_9 = (((((last_1_var_1_13 + var_1_5)) > (64)) ? ((last_1_var_1_13 + var_1_5)) : (64)));
 } else {
  if ((last_1_var_1_17 / var_1_11) == 999999.6f) {
   var_1_9 = var_1_7;
  }
 }
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 && stepLocal_0) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  var_1_1 = (var_1_4 - var_1_5);
 }
 if (var_1_1 <= (var_1_5 * var_1_4)) {
  if (var_1_2) {
   var_1_6 = (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))) - var_1_5);
  } else {
   var_1_6 = var_1_5;
  }
 } else {
  var_1_6 = var_1_5;
 }
 var_1_17 = var_1_18;
 var_1_19 = 5;
 var_1_20 = var_1_15;
 if (var_1_1 < var_1_20) {
  if (var_1_5 == (~ (var_1_1 + var_1_20))) {
   var_1_12 = (((((var_1_5) > (((((-1) < (var_1_1)) ? (-1) : (var_1_1))))) ? (var_1_5) : (((((-1) < (var_1_1)) ? (-1) : (var_1_1)))))) - 1000);
  } else {
   var_1_12 = ((((var_1_20) < (var_1_8)) ? (var_1_20) : (var_1_8)));
  }
 } else {
  var_1_12 = var_1_6;
 }
 if ((-4 >> ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) >= (var_1_7 | ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) {
  if (var_1_3) {
   var_1_13 = var_1_6;
  } else {
   var_1_13 = var_1_4;
  }
 } else {
  var_1_13 = var_1_1;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -126);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -31);
 assume_abort_if_not(var_1_33 <= 32);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 31);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 65535);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 255);
 assume_abort_if_not(var_1_44 != 0);
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 4611686.018427387900e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 127);
 assume_abort_if_not(var_1_53 <= 254);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65534);
 var_1_61 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 9);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= -127);
 assume_abort_if_not(var_1_64 <= 127);
 assume_abort_if_not(var_1_64 != 0);
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 2147483647);
 assume_abort_if_not(var_1_66 <= 4294967295);
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= -922337.2036854776000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= -128);
 assume_abort_if_not(var_1_69 <= 127);
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= 4611686.018427382800e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) (var_1_4 - var_1_5)))) && ((var_1_1 <= (var_1_5 * var_1_4)) ? (var_1_2 ? (var_1_6 == ((unsigned short int) (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))) - var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5)))) && ((-100000 >= last_1_var_1_13) ? (var_1_9 == ((unsigned short int) (((((last_1_var_1_13 + var_1_5)) > (64)) ? ((last_1_var_1_13 + var_1_5)) : (64))))) : (((last_1_var_1_17 / var_1_11) == 999999.6f) ? (var_1_9 == ((unsigned short int) var_1_7)) : 1))) && ((var_1_1 < var_1_20) ? ((var_1_5 == (~ (var_1_1 + var_1_20))) ? (var_1_12 == ((signed long int) (((((var_1_5) > (((((-1) < (var_1_1)) ? (-1) : (var_1_1))))) ? (var_1_5) : (((((-1) < (var_1_1)) ? (-1) : (var_1_1)))))) - 1000))) : (var_1_12 == ((signed long int) ((((var_1_20) < (var_1_8)) ? (var_1_20) : (var_1_8)))))) : (var_1_12 == ((signed long int) var_1_6)))) && (((-4 >> ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) >= (var_1_7 | ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_3 ? (var_1_13 == ((unsigned short int) var_1_6)) : (var_1_13 == ((unsigned short int) var_1_4))) : (var_1_13 == ((unsigned short int) var_1_1)))) && (var_1_17 == ((double) var_1_18))) && (var_1_19 == ((signed char) 5))) && (var_1_20 == ((unsigned long int) var_1_15))
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
