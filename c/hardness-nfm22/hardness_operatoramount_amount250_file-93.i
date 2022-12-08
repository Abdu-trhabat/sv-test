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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
unsigned char var_1_4 = 1;
double var_1_7 = 31.25;
double var_1_8 = 7.6;
double var_1_9 = 8.9;
double var_1_10 = 256.8;
double var_1_11 = 64.6;
double var_1_12 = 31.8;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 100;
unsigned short int var_1_19 = 256;
unsigned short int var_1_20 = 34248;
double var_1_21 = 25.2;
double var_1_22 = 7.25;
signed long int var_1_23 = 32;
float var_1_24 = 1.6;
float var_1_25 = 64.9;
float var_1_26 = 10000.4;
float var_1_27 = 31.055;
unsigned char var_1_28 = 8;
unsigned short int var_1_29 = 32;
double var_1_30 = 10000000.75;
double var_1_31 = 0.625;
float var_1_32 = 256.5;
float var_1_33 = 31.4;
signed char var_1_34 = 0;
signed char var_1_35 = 5;
signed char var_1_36 = 16;
unsigned long int var_1_37 = 0;
unsigned long int var_1_38 = 2519029488;
unsigned long int var_1_40 = 1355527797;
unsigned short int var_1_41 = 4;
unsigned char var_1_42 = 1;
unsigned short int var_1_43 = 10000;
unsigned short int var_1_44 = 16726;
unsigned char var_1_45 = 64;
unsigned long int var_1_46 = 4;
unsigned long int var_1_47 = 2812656247;
unsigned short int var_1_48 = 50;
unsigned short int var_1_49 = 31171;
signed short int var_1_50 = -32;
float var_1_51 = 255.4;
signed char var_1_52 = -5;
unsigned char var_1_53 = 1;
float var_1_54 = 255.4;
unsigned short int var_1_55 = 4;
signed short int var_1_57 = 1;
unsigned char var_1_58 = 1;
signed short int var_1_59 = 128;
unsigned char var_1_61 = 25;
unsigned char var_1_62 = 10;
unsigned char var_1_63 = 32;
signed char var_1_64 = -128;
signed long int var_1_65 = 2;
unsigned char last_1_var_1_13 = 1;
unsigned short int last_1_var_1_19 = 256;
unsigned short int last_1_var_1_29 = 32;
float last_1_var_1_33 = 31.4;
unsigned short int last_1_var_1_41 = 4;
unsigned long int last_1_var_1_46 = 4;
signed short int last_1_var_1_59 = 128;
signed long int last_1_var_1_65 = 2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_9 = (-64 + var_1_18) << last_1_var_1_65;
 unsigned char stepLocal_8 = last_1_var_1_29 > (last_1_var_1_29 + last_1_var_1_19);
 unsigned char stepLocal_7 = var_1_15;
 if ((var_1_9 >= (var_1_8 - var_1_25)) || stepLocal_8) {
  if ((last_1_var_1_59 + last_1_var_1_29) >= stepLocal_7) {
   var_1_30 = (var_1_10 + var_1_11);
  } else {
   var_1_30 = 2.75;
  }
 } else {
  if (((last_1_var_1_13 / var_1_20) & (last_1_var_1_29 - last_1_var_1_46)) >= stepLocal_9) {
   var_1_30 = (var_1_25 - var_1_31);
  } else {
   var_1_30 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
  }
 }
 signed long int stepLocal_15 = var_1_35 % ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 if (stepLocal_15 > last_1_var_1_13) {
  var_1_51 = var_1_9;
 } else {
  if (last_1_var_1_33 < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + 50.75)) {
   if (! (var_1_42 || var_1_4)) {
    var_1_51 = (var_1_9 - var_1_31);
   } else {
    var_1_51 = ((((var_1_11) < ((var_1_25 - 0.75f))) ? (var_1_11) : ((var_1_25 - 0.75f))));
   }
  }
 }
 if (var_1_51 <= var_1_10) {
  if (var_1_4) {
   var_1_24 = (var_1_8 + var_1_10);
  }
 } else {
  var_1_24 = (var_1_9 - ((var_1_25 + var_1_26) + var_1_8));
 }
 unsigned char stepLocal_13 = var_1_4;
 if (var_1_42 && stepLocal_13) {
  if (var_1_51 == var_1_51) {
   var_1_45 = ((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)));
  } else {
   var_1_45 = ((var_1_17 + 32) + var_1_18);
  }
 } else {
  var_1_45 = var_1_17;
 }
 signed long int stepLocal_3 = last_1_var_1_29;
 if (last_1_var_1_41 < stepLocal_3) {
  var_1_13 = ((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) < (var_1_16)) ? (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) : (var_1_16)));
 } else {
  var_1_13 = ((var_1_17 + 4) + var_1_18);
 }
 if (var_1_11 >= 1.000000000000823E12) {
  var_1_21 = var_1_8;
 }
 if (var_1_4) {
  var_1_22 = var_1_12;
 }
 var_1_28 = var_1_17;
 if ((var_1_9 - (var_1_8 + var_1_25)) >= var_1_11) {
  var_1_29 = var_1_20;
 }
 if (var_1_4) {
  var_1_34 = (var_1_35 + var_1_36);
 } else {
  var_1_34 = (var_1_36 + var_1_35);
 }
 if (! var_1_4) {
  var_1_52 = var_1_35;
 } else {
  var_1_52 = ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)));
 }
 if (var_1_58) {
  var_1_57 = var_1_14;
 }
 if (var_1_4) {
  var_1_59 = var_1_34;
 } else {
  var_1_59 = var_1_43;
 }
 unsigned char stepLocal_18 = var_1_22 >= var_1_9;
 if (stepLocal_18 || var_1_4) {
  var_1_61 = (var_1_17 + ((((var_1_18) > ((var_1_62 + var_1_63))) ? (var_1_18) : ((var_1_62 + var_1_63)))));
 }
 var_1_64 = var_1_62;
 var_1_65 = var_1_28;
 unsigned char stepLocal_11 = var_1_4;
 if (var_1_9 < (var_1_8 - var_1_31)) {
  var_1_37 = (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - var_1_28);
 } else {
  if ((var_1_30 >= var_1_26) && stepLocal_11) {
   var_1_37 = ((1479467232u + var_1_40) - var_1_15);
  } else {
   var_1_37 = var_1_18;
  }
 }
 unsigned char stepLocal_12 = var_1_4;
 if (stepLocal_12 || var_1_42) {
  if (((((var_1_24) < (var_1_51)) ? (var_1_24) : (var_1_51))) <= 7.875) {
   var_1_41 = ((((((((var_1_18) < ((var_1_14 + var_1_15))) ? (var_1_18) : ((var_1_14 + var_1_15))))) < (var_1_34)) ? (((((var_1_18) < ((var_1_14 + var_1_15))) ? (var_1_18) : ((var_1_14 + var_1_15))))) : (var_1_34)));
  } else {
   var_1_41 = ((((2) < ((51214 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) ? (2) : ((51214 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))));
  }
 } else {
  var_1_41 = (((10000 + var_1_43) + var_1_44) - var_1_14);
 }
 unsigned char stepLocal_6 = var_1_18;
 if (! var_1_4) {
  if (stepLocal_6 <= var_1_41) {
   var_1_27 = var_1_10;
  }
 }
 if ((var_1_17 ^ (~ -5)) >= var_1_61) {
  var_1_32 = var_1_25;
 }
 var_1_50 = (((((var_1_18 + var_1_16)) < (((var_1_17 + var_1_61) - var_1_15))) ? ((var_1_18 + var_1_16)) : (((var_1_17 + var_1_61) - var_1_15))));
 if ((var_1_41 == var_1_37) && var_1_4) {
  var_1_1 = ((((var_1_29) < (var_1_59)) ? (var_1_29) : (var_1_59)));
 }
 if (! (var_1_38 >= var_1_13)) {
  if (var_1_25 > (var_1_27 * var_1_27)) {
   var_1_55 = ((((var_1_1) > (var_1_16)) ? (var_1_1) : (var_1_16)));
  }
 }
 signed long int stepLocal_10 = 8 << var_1_1;
 if (var_1_45 >= stepLocal_10) {
  if (var_1_27 < var_1_12) {
   var_1_33 = (var_1_25 - var_1_26);
  }
 } else {
  var_1_33 = var_1_26;
 }
 signed long int stepLocal_2 = 25;
 unsigned short int stepLocal_1 = var_1_29;
 unsigned char stepLocal_0 = var_1_13;
 if (stepLocal_0 == var_1_55) {
  if (var_1_34 < stepLocal_1) {
   var_1_7 = ((var_1_8 - var_1_9) + var_1_10);
  } else {
   if (var_1_29 >= stepLocal_2) {
    var_1_7 = ((((((8.7955268025428961E18 - var_1_8) - var_1_9)) > ((var_1_10 + (var_1_11 + var_1_12)))) ? (((8.7955268025428961E18 - var_1_8) - var_1_9)) : ((var_1_10 + (var_1_11 + var_1_12)))));
   } else {
    var_1_7 = (((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10))) + (var_1_11 + 1.75));
   }
  }
 } else {
  var_1_7 = 10.15;
 }
 signed long int stepLocal_16 = (((var_1_49) < (var_1_18)) ? (var_1_49) : (var_1_18));
 if (stepLocal_16 <= var_1_55) {
  var_1_53 = (((((((((128 - var_1_18)) > (100)) ? ((128 - var_1_18)) : (100)))) < (((((((((var_1_17) < (16)) ? (var_1_17) : (16)))) > (var_1_15)) ? (((((var_1_17) < (16)) ? (var_1_17) : (16)))) : (var_1_15))))) ? ((((((128 - var_1_18)) > (100)) ? ((128 - var_1_18)) : (100)))) : (((((((((var_1_17) < (16)) ? (var_1_17) : (16)))) > (var_1_15)) ? (((((var_1_17) < (16)) ? (var_1_17) : (16)))) : (var_1_15))))));
 }
 unsigned long int stepLocal_17 = var_1_37 & ((((var_1_41) < (var_1_55)) ? (var_1_41) : (var_1_55)));
 if (stepLocal_17 < (256 / var_1_44)) {
  var_1_54 = (var_1_25 + var_1_8);
 } else {
  var_1_54 = ((((var_1_10) < (((((var_1_8 - var_1_31) < 0 ) ? -(var_1_8 - var_1_31) : (var_1_8 - var_1_31))))) ? (var_1_10) : (((((var_1_8 - var_1_31) < 0 ) ? -(var_1_8 - var_1_31) : (var_1_8 - var_1_31))))));
 }
 if (! (var_1_30 >= 63.6f)) {
  var_1_46 = (((((((((var_1_38) > (var_1_47)) ? (var_1_38) : (var_1_47))) - (var_1_55 + var_1_65))) < (var_1_13)) ? ((((((var_1_38) > (var_1_47)) ? (var_1_38) : (var_1_47))) - (var_1_55 + var_1_65))) : (var_1_13)));
 } else {
  var_1_46 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
 }
 if (((((var_1_15) < (var_1_46)) ? (var_1_15) : (var_1_46))) <= -10) {
  var_1_19 = (var_1_20 - var_1_13);
 }
 signed long int stepLocal_5 = var_1_65;
 unsigned long int stepLocal_4 = var_1_46;
 if (var_1_21 <= (var_1_12 * var_1_10)) {
  if (stepLocal_5 <= var_1_29) {
   var_1_23 = ((var_1_46 + var_1_16) + ((var_1_14 + var_1_17) - 10));
  }
 } else {
  if (var_1_59 <= stepLocal_4) {
   var_1_23 = (var_1_16 - var_1_46);
  } else {
   var_1_23 = (((((((((var_1_17) < (var_1_46)) ? (var_1_17) : (var_1_46))) + var_1_18)) > (var_1_14)) ? ((((((var_1_17) < (var_1_46)) ? (var_1_17) : (var_1_46))) + var_1_18)) : (var_1_14)));
  }
 }
 unsigned char stepLocal_14 = var_1_4;
 if (stepLocal_14 || (var_1_47 >= var_1_46)) {
  var_1_48 = (var_1_44 + var_1_46);
 } else {
  var_1_48 = (var_1_15 + ((var_1_49 - 1) - var_1_17));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 64);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741824);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 8192);
 assume_abort_if_not(var_1_43 <= 16383);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 16384);
 assume_abort_if_not(var_1_44 <= 32767);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 2147483647);
 assume_abort_if_not(var_1_47 <= 4294967294);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 24575);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 64);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 63);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_65 = var_1_65;
}
int property() {
 return ((((((((((((((((((((((((((((((((var_1_41 == var_1_37) && var_1_4) ? (var_1_1 == ((signed long int) ((((var_1_29) < (var_1_59)) ? (var_1_29) : (var_1_59))))) : 1) && ((var_1_13 == var_1_55) ? ((var_1_34 < var_1_29) ? (var_1_7 == ((double) ((var_1_8 - var_1_9) + var_1_10))) : ((var_1_29 >= 25) ? (var_1_7 == ((double) ((((((8.7955268025428961E18 - var_1_8) - var_1_9)) > ((var_1_10 + (var_1_11 + var_1_12)))) ? (((8.7955268025428961E18 - var_1_8) - var_1_9)) : ((var_1_10 + (var_1_11 + var_1_12))))))) : (var_1_7 == ((double) (((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10))) + (var_1_11 + 1.75)))))) : (var_1_7 == ((double) 10.15)))) && ((last_1_var_1_41 < last_1_var_1_29) ? (var_1_13 == ((unsigned char) ((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) < (var_1_16)) ? (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) : (var_1_16))))) : (var_1_13 == ((unsigned char) ((var_1_17 + 4) + var_1_18))))) && ((((((var_1_15) < (var_1_46)) ? (var_1_15) : (var_1_46))) <= -10) ? (var_1_19 == ((unsigned short int) (var_1_20 - var_1_13))) : 1)) && ((var_1_11 >= 1.000000000000823E12) ? (var_1_21 == ((double) var_1_8)) : 1)) && (var_1_4 ? (var_1_22 == ((double) var_1_12)) : 1)) && ((var_1_21 <= (var_1_12 * var_1_10)) ? ((var_1_65 <= var_1_29) ? (var_1_23 == ((signed long int) ((var_1_46 + var_1_16) + ((var_1_14 + var_1_17) - 10)))) : 1) : ((var_1_59 <= var_1_46) ? (var_1_23 == ((signed long int) (var_1_16 - var_1_46))) : (var_1_23 == ((signed long int) (((((((((var_1_17) < (var_1_46)) ? (var_1_17) : (var_1_46))) + var_1_18)) > (var_1_14)) ? ((((((var_1_17) < (var_1_46)) ? (var_1_17) : (var_1_46))) + var_1_18)) : (var_1_14)))))))) && ((var_1_51 <= var_1_10) ? (var_1_4 ? (var_1_24 == ((float) (var_1_8 + var_1_10))) : 1) : (var_1_24 == ((float) (var_1_9 - ((var_1_25 + var_1_26) + var_1_8)))))) && ((! var_1_4) ? ((var_1_18 <= var_1_41) ? (var_1_27 == ((float) var_1_10)) : 1) : 1)) && (var_1_28 == ((unsigned char) var_1_17))) && (((var_1_9 - (var_1_8 + var_1_25)) >= var_1_11) ? (var_1_29 == ((unsigned short int) var_1_20)) : 1)) && (((var_1_9 >= (var_1_8 - var_1_25)) || (last_1_var_1_29 > (last_1_var_1_29 + last_1_var_1_19))) ? (((last_1_var_1_59 + last_1_var_1_29) >= var_1_15) ? (var_1_30 == ((double) (var_1_10 + var_1_11))) : (var_1_30 == ((double) 2.75))) : ((((last_1_var_1_13 / var_1_20) & (last_1_var_1_29 - last_1_var_1_46)) >= ((-64 + var_1_18) << last_1_var_1_65)) ? (var_1_30 == ((double) (var_1_25 - var_1_31))) : (var_1_30 == ((double) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))))))) && (((var_1_17 ^ (~ -5)) >= var_1_61) ? (var_1_32 == ((float) var_1_25)) : 1)) && ((var_1_45 >= (8 << var_1_1)) ? ((var_1_27 < var_1_12) ? (var_1_33 == ((float) (var_1_25 - var_1_26))) : 1) : (var_1_33 == ((float) var_1_26)))) && (var_1_4 ? (var_1_34 == ((signed char) (var_1_35 + var_1_36))) : (var_1_34 == ((signed char) (var_1_36 + var_1_35))))) && ((var_1_9 < (var_1_8 - var_1_31)) ? (var_1_37 == ((unsigned long int) (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - var_1_28))) : (((var_1_30 >= var_1_26) && var_1_4) ? (var_1_37 == ((unsigned long int) ((1479467232u + var_1_40) - var_1_15))) : (var_1_37 == ((unsigned long int) var_1_18))))) && ((var_1_4 || var_1_42) ? ((((((var_1_24) < (var_1_51)) ? (var_1_24) : (var_1_51))) <= 7.875) ? (var_1_41 == ((unsigned short int) ((((((((var_1_18) < ((var_1_14 + var_1_15))) ? (var_1_18) : ((var_1_14 + var_1_15))))) < (var_1_34)) ? (((((var_1_18) < ((var_1_14 + var_1_15))) ? (var_1_18) : ((var_1_14 + var_1_15))))) : (var_1_34))))) : (var_1_41 == ((unsigned short int) ((((2) < ((51214 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) ? (2) : ((51214 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))))))) : (var_1_41 == ((unsigned short int) (((10000 + var_1_43) + var_1_44) - var_1_14))))) && ((var_1_42 && var_1_4) ? ((var_1_51 == var_1_51) ? (var_1_45 == ((unsigned char) ((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))))) : (var_1_45 == ((unsigned char) ((var_1_17 + 32) + var_1_18)))) : (var_1_45 == ((unsigned char) var_1_17)))) && ((! (var_1_30 >= 63.6f)) ? (var_1_46 == ((unsigned long int) (((((((((var_1_38) > (var_1_47)) ? (var_1_38) : (var_1_47))) - (var_1_55 + var_1_65))) < (var_1_13)) ? ((((((var_1_38) > (var_1_47)) ? (var_1_38) : (var_1_47))) - (var_1_55 + var_1_65))) : (var_1_13))))) : (var_1_46 == ((unsigned long int) ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) && ((var_1_4 || (var_1_47 >= var_1_46)) ? (var_1_48 == ((unsigned short int) (var_1_44 + var_1_46))) : (var_1_48 == ((unsigned short int) (var_1_15 + ((var_1_49 - 1) - var_1_17)))))) && (var_1_50 == ((signed short int) (((((var_1_18 + var_1_16)) < (((var_1_17 + var_1_61) - var_1_15))) ? ((var_1_18 + var_1_16)) : (((var_1_17 + var_1_61) - var_1_15))))))) && (((var_1_35 % ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) > last_1_var_1_13) ? (var_1_51 == ((float) var_1_9)) : ((last_1_var_1_33 < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + 50.75)) ? ((! (var_1_42 || var_1_4)) ? (var_1_51 == ((float) (var_1_9 - var_1_31))) : (var_1_51 == ((float) ((((var_1_11) < ((var_1_25 - 0.75f))) ? (var_1_11) : ((var_1_25 - 0.75f))))))) : 1))) && ((! var_1_4) ? (var_1_52 == ((signed char) var_1_35)) : (var_1_52 == ((signed char) ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36))))))) && ((((((var_1_49) < (var_1_18)) ? (var_1_49) : (var_1_18))) <= var_1_55) ? (var_1_53 == ((unsigned char) (((((((((128 - var_1_18)) > (100)) ? ((128 - var_1_18)) : (100)))) < (((((((((var_1_17) < (16)) ? (var_1_17) : (16)))) > (var_1_15)) ? (((((var_1_17) < (16)) ? (var_1_17) : (16)))) : (var_1_15))))) ? ((((((128 - var_1_18)) > (100)) ? ((128 - var_1_18)) : (100)))) : (((((((((var_1_17) < (16)) ? (var_1_17) : (16)))) > (var_1_15)) ? (((((var_1_17) < (16)) ? (var_1_17) : (16)))) : (var_1_15)))))))) : 1)) && (((var_1_37 & ((((var_1_41) < (var_1_55)) ? (var_1_41) : (var_1_55)))) < (256 / var_1_44)) ? (var_1_54 == ((float) (var_1_25 + var_1_8))) : (var_1_54 == ((float) ((((var_1_10) < (((((var_1_8 - var_1_31) < 0 ) ? -(var_1_8 - var_1_31) : (var_1_8 - var_1_31))))) ? (var_1_10) : (((((var_1_8 - var_1_31) < 0 ) ? -(var_1_8 - var_1_31) : (var_1_8 - var_1_31)))))))))) && ((! (var_1_38 >= var_1_13)) ? ((var_1_25 > (var_1_27 * var_1_27)) ? (var_1_55 == ((unsigned short int) ((((var_1_1) > (var_1_16)) ? (var_1_1) : (var_1_16))))) : 1) : 1)) && (var_1_58 ? (var_1_57 == ((signed short int) var_1_14)) : 1)) && (var_1_4 ? (var_1_59 == ((signed short int) var_1_34)) : (var_1_59 == ((signed short int) var_1_43)))) && (((var_1_22 >= var_1_9) || var_1_4) ? (var_1_61 == ((unsigned char) (var_1_17 + ((((var_1_18) > ((var_1_62 + var_1_63))) ? (var_1_18) : ((var_1_62 + var_1_63))))))) : 1)) && (var_1_64 == ((signed char) var_1_62))) && (var_1_65 == ((signed long int) var_1_28))
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
