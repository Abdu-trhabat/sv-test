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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed long int var_1_3 = -10;
signed char var_1_4 = -8;
signed char var_1_5 = 32;
signed char var_1_6 = -10;
signed char var_1_7 = 10;
signed char var_1_8 = 10;
signed long int var_1_9 = 10;
float var_1_10 = 64.6;
float var_1_12 = 15.6;
float var_1_13 = 127.125;
float var_1_14 = 63.9;
float var_1_15 = 499.75;
float var_1_16 = 1000000000000.6;
double var_1_17 = -0.8;
double var_1_18 = 4.6;
signed short int var_1_19 = -64;
signed long int var_1_20 = -8;
signed long int var_1_21 = 2;
unsigned short int var_1_22 = 128;
signed char var_1_23 = 10;
unsigned short int var_1_24 = 52269;
unsigned short int var_1_25 = 26824;
unsigned short int var_1_26 = 21491;
unsigned char var_1_27 = 2;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 1;
unsigned short int var_1_30 = 128;
unsigned long int var_1_32 = 25;
unsigned char var_1_33 = 8;
unsigned char var_1_35 = 128;
signed short int var_1_36 = 50;
signed short int var_1_37 = 22861;
unsigned long int var_1_38 = 2;
unsigned long int var_1_39 = 2475958070;
unsigned long int var_1_40 = 25;
signed short int var_1_41 = 256;
signed short int var_1_43 = 10000;
signed short int var_1_44 = 64;
unsigned long int var_1_45 = 200;
unsigned long int var_1_46 = 1645853747;
unsigned long int var_1_47 = 2722407725;
unsigned long int var_1_48 = 2581795556;
signed long int var_1_49 = -10;
unsigned short int var_1_50 = 16;
signed long int var_1_51 = 64;
unsigned char var_1_52 = 4;
float var_1_53 = 8.2;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 1;
unsigned char var_1_60 = 0;
float var_1_61 = 4.5;
float var_1_62 = 0.9;
unsigned char var_1_63 = 0;
signed long int var_1_64 = 16;
signed char var_1_65 = 5;
signed long int var_1_66 = 64;
unsigned char var_1_67 = 4;
unsigned char var_1_68 = 10;
signed char var_1_70 = 100;
float last_1_var_1_10 = 64.6;
double last_1_var_1_17 = -0.8;
unsigned long int last_1_var_1_32 = 25;
unsigned long int last_1_var_1_38 = 2;
signed long int last_1_var_1_49 = -10;
unsigned char last_1_var_1_63 = 0;
signed long int last_1_var_1_64 = 16;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_14 = last_1_var_1_38 / var_1_26;
 unsigned short int stepLocal_13 = var_1_26;
 if (stepLocal_14 < last_1_var_1_49) {
  if (stepLocal_13 == (((((51166) > (var_1_24)) ? (51166) : (var_1_24))) - ((((var_1_25) > (0)) ? (var_1_25) : (0))))) {
   var_1_54 = ((var_1_55 && var_1_56) && (var_1_57 && (last_1_var_1_63 || var_1_58)));
  } else {
   var_1_54 = (! (var_1_57 && var_1_55));
  }
 } else {
  if (! (var_1_5 > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) {
   if (last_1_var_1_63) {
    if (((((last_1_var_1_17) < (last_1_var_1_10)) ? (last_1_var_1_17) : (last_1_var_1_10))) >= last_1_var_1_17) {
     var_1_54 = (last_1_var_1_63 || (var_1_56 && var_1_55));
    }
   } else {
    var_1_54 = (! (var_1_57 && (last_1_var_1_63 || var_1_56)));
   }
  } else {
   var_1_54 = (var_1_55 && (var_1_58 && var_1_60));
  }
 }
 signed long int stepLocal_2 = var_1_6 * (var_1_7 - var_1_8);
 if (last_1_var_1_64 >= stepLocal_2) {
  var_1_17 = (var_1_14 + ((((499.5) > (var_1_15)) ? (499.5) : (var_1_15))));
 }
 if (var_1_54) {
  var_1_64 = var_1_24;
 }
 if (var_1_15 > var_1_16) {
  var_1_18 = (var_1_12 - (var_1_14 + var_1_13));
 }
 var_1_19 = var_1_6;
 if (var_1_17 > (50.15 + var_1_12)) {
  var_1_27 = ((var_1_8 + var_1_7) + ((((var_1_23) > ((var_1_28 - var_1_29))) ? (var_1_23) : ((var_1_28 - var_1_29)))));
 }
 var_1_52 = (((((var_1_29) > (8)) ? (var_1_29) : (8))) + (var_1_23 + 32));
 var_1_63 = var_1_60;
 var_1_65 = var_1_8;
 if (var_1_57) {
  var_1_66 = var_1_51;
 } else {
  var_1_66 = var_1_5;
 }
 var_1_67 = (var_1_35 - var_1_8);
 var_1_70 = var_1_6;
 unsigned char stepLocal_10 = var_1_54;
 unsigned short int stepLocal_9 = var_1_26;
 unsigned char stepLocal_8 = var_1_63;
 unsigned char stepLocal_7 = var_1_35;
 if (stepLocal_10 || var_1_63) {
  if (stepLocal_8 && (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < var_1_18)) {
   if (var_1_28 < stepLocal_7) {
    var_1_41 = ((((var_1_4) < (((((var_1_29) < (var_1_7)) ? (var_1_29) : (var_1_7))))) ? (var_1_4) : (((((var_1_29) < (var_1_7)) ? (var_1_29) : (var_1_7))))));
   } else {
    var_1_41 = ((var_1_35 - (var_1_43 - var_1_19)) + var_1_28);
   }
  } else {
   var_1_41 = ((((((var_1_37 - var_1_35) - 8)) > (var_1_19)) ? (((var_1_37 - var_1_35) - 8)) : (var_1_19)));
  }
 } else {
  if (stepLocal_9 < var_1_37) {
   var_1_41 = ((((var_1_6) > (var_1_44)) ? (var_1_6) : (var_1_44)));
  }
 }
 if (var_1_54) {
  if ((var_1_7 - (var_1_8 + var_1_23)) < (2 * var_1_66)) {
   if (var_1_3 > var_1_66) {
    var_1_22 = (var_1_24 - (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_7));
   } else {
    var_1_22 = var_1_7;
   }
  } else {
   var_1_22 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
  }
 }
 if (var_1_63) {
  var_1_32 = last_1_var_1_32;
 } else {
  var_1_32 = (var_1_24 + ((((var_1_28) > (var_1_8)) ? (var_1_28) : (var_1_8))));
 }
 if (4.5 > ((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16)))) {
  var_1_45 = ((2028031234u + var_1_46) - var_1_26);
 } else {
  var_1_45 = (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))));
 }
 signed long int stepLocal_1 = var_1_3 | -10;
 if (var_1_41 < stepLocal_1) {
  var_1_9 = var_1_8;
 }
 if (var_1_19 != var_1_4) {
  if (var_1_63 && (var_1_3 > (var_1_9 ^ var_1_66))) {
   var_1_10 = (((((var_1_12) < ((var_1_13 + var_1_14))) ? (var_1_12) : ((var_1_13 + var_1_14)))) - (var_1_15 + var_1_16));
  } else {
   var_1_10 = (var_1_16 + var_1_13);
  }
 } else {
  var_1_10 = var_1_14;
 }
 unsigned long int stepLocal_15 = var_1_45 % var_1_26;
 if ((var_1_17 + var_1_13) <= (var_1_17 * var_1_12)) {
  if (stepLocal_15 > (var_1_40 * var_1_50)) {
   var_1_61 = var_1_14;
  }
 } else {
  var_1_61 = var_1_62;
 }
 if (((((var_1_61) > (var_1_18)) ? (var_1_61) : (var_1_18))) == (- var_1_16)) {
  var_1_68 = var_1_29;
 }
 signed long int stepLocal_0 = var_1_9 % var_1_3;
 if (8 < stepLocal_0) {
  var_1_1 = ((((((var_1_4 + 16)) > (var_1_5)) ? ((var_1_4 + 16)) : (var_1_5))) + (var_1_6 + (var_1_7 - var_1_8)));
 } else {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 }
 if (var_1_54) {
  var_1_53 = 2.5f;
 } else {
  if (((var_1_39 - var_1_67) <= (var_1_48 - 100u)) && ((var_1_61 + var_1_14) == (var_1_15 - var_1_16))) {
   var_1_53 = ((((var_1_15) > (var_1_13)) ? (var_1_15) : (var_1_13)));
  } else {
   var_1_53 = var_1_13;
  }
 }
 unsigned long int stepLocal_6 = (((var_1_23) > ((var_1_39 - var_1_68))) ? (var_1_23) : ((var_1_39 - var_1_68)));
 if (((~ var_1_32) & 25) > stepLocal_6) {
  var_1_38 = (((((var_1_40) > (var_1_7)) ? (var_1_40) : (var_1_7))) + ((((var_1_68) > (var_1_66)) ? (var_1_68) : (var_1_66))));
 } else {
  var_1_38 = (((((((var_1_28) > (var_1_35)) ? (var_1_28) : (var_1_35))) < 0 ) ? -((((var_1_28) > (var_1_35)) ? (var_1_28) : (var_1_35))) : ((((var_1_28) > (var_1_35)) ? (var_1_28) : (var_1_35)))));
 }
 signed char stepLocal_4 = var_1_5;
 signed long int stepLocal_3 = 200 - var_1_7;
 if (var_1_6 >= stepLocal_4) {
  if (stepLocal_3 <= var_1_4) {
   var_1_20 = ((((((var_1_8 - var_1_7)) > (var_1_21)) ? ((var_1_8 - var_1_7)) : (var_1_21))) + (var_1_38 + var_1_4));
  } else {
   var_1_20 = (var_1_7 + var_1_32);
  }
 }
 if ((var_1_8 < -128) && var_1_63) {
  var_1_33 = var_1_28;
 } else {
  if (var_1_19 <= var_1_20) {
   var_1_33 = (var_1_29 + ((((var_1_7 + 5) < 0 ) ? -(var_1_7 + 5) : (var_1_7 + 5))));
  } else {
   var_1_33 = (var_1_35 - var_1_28);
  }
 }
 unsigned long int stepLocal_12 = var_1_19 & var_1_32;
 signed long int stepLocal_11 = (var_1_37 / var_1_3) / var_1_28;
 if (stepLocal_11 == (var_1_8 - var_1_40)) {
  if ((var_1_44 / ((((32) < 0 ) ? -(32) : (32)))) > stepLocal_12) {
   var_1_49 = (var_1_51 - var_1_26);
  } else {
   var_1_49 = (10000000 - ((((var_1_33) < (var_1_23)) ? (var_1_33) : (var_1_23))));
  }
 } else {
  var_1_49 = (((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49))) + var_1_24);
 }
 if (var_1_63 && (var_1_13 < var_1_10)) {
  if (var_1_63) {
   var_1_30 = ((((var_1_29) > (var_1_20)) ? (var_1_29) : (var_1_20)));
  } else {
   if (var_1_17 > var_1_10) {
    var_1_30 = var_1_8;
   } else {
    var_1_30 = (var_1_23 + 4);
   }
  }
 }
 signed char stepLocal_5 = var_1_5;
 if (stepLocal_5 < var_1_49) {
  var_1_36 = ((var_1_37 - var_1_7) - var_1_28);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -31);
 assume_abort_if_not(var_1_4 <= 32);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -31);
 assume_abort_if_not(var_1_6 <= 32);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 31);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 31);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -1073741823);
 assume_abort_if_not(var_1_21 <= 1073741823);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 32767);
 assume_abort_if_not(var_1_24 <= 65534);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 16383);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 63);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 16382);
 assume_abort_if_not(var_1_37 <= 32766);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967295);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= 8191);
 assume_abort_if_not(var_1_43 <= 16383);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= -32767);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741824);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 2147483647);
 assume_abort_if_not(var_1_47 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 2147483647);
 assume_abort_if_not(var_1_48 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 32767);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= -1);
 assume_abort_if_not(var_1_51 <= 2147483646);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 0);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= -922337.2036854766000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854766000e+12F && var_1_62 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((((((8 < (var_1_9 % var_1_3)) ? (var_1_1 == ((signed char) ((((((var_1_4 + 16)) > (var_1_5)) ? ((var_1_4 + 16)) : (var_1_5))) + (var_1_6 + (var_1_7 - var_1_8))))) : (var_1_1 == ((signed char) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))))) && ((var_1_41 < (var_1_3 | -10)) ? (var_1_9 == ((signed long int) var_1_8)) : 1)) && ((var_1_19 != var_1_4) ? ((var_1_63 && (var_1_3 > (var_1_9 ^ var_1_66))) ? (var_1_10 == ((float) (((((var_1_12) < ((var_1_13 + var_1_14))) ? (var_1_12) : ((var_1_13 + var_1_14)))) - (var_1_15 + var_1_16)))) : (var_1_10 == ((float) (var_1_16 + var_1_13)))) : (var_1_10 == ((float) var_1_14)))) && ((last_1_var_1_64 >= (var_1_6 * (var_1_7 - var_1_8))) ? (var_1_17 == ((double) (var_1_14 + ((((499.5) > (var_1_15)) ? (499.5) : (var_1_15)))))) : 1)) && ((var_1_15 > var_1_16) ? (var_1_18 == ((double) (var_1_12 - (var_1_14 + var_1_13)))) : 1)) && (var_1_19 == ((signed short int) var_1_6))) && ((var_1_6 >= var_1_5) ? (((200 - var_1_7) <= var_1_4) ? (var_1_20 == ((signed long int) ((((((var_1_8 - var_1_7)) > (var_1_21)) ? ((var_1_8 - var_1_7)) : (var_1_21))) + (var_1_38 + var_1_4)))) : (var_1_20 == ((signed long int) (var_1_7 + var_1_32)))) : 1)) && (var_1_54 ? (((var_1_7 - (var_1_8 + var_1_23)) < (2 * var_1_66)) ? ((var_1_3 > var_1_66) ? (var_1_22 == ((unsigned short int) (var_1_24 - (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_7)))) : (var_1_22 == ((unsigned short int) var_1_7))) : (var_1_22 == ((unsigned short int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) : 1)) && ((var_1_17 > (50.15 + var_1_12)) ? (var_1_27 == ((unsigned char) ((var_1_8 + var_1_7) + ((((var_1_23) > ((var_1_28 - var_1_29))) ? (var_1_23) : ((var_1_28 - var_1_29))))))) : 1)) && ((var_1_63 && (var_1_13 < var_1_10)) ? (var_1_63 ? (var_1_30 == ((unsigned short int) ((((var_1_29) > (var_1_20)) ? (var_1_29) : (var_1_20))))) : ((var_1_17 > var_1_10) ? (var_1_30 == ((unsigned short int) var_1_8)) : (var_1_30 == ((unsigned short int) (var_1_23 + 4))))) : 1)) && (var_1_63 ? (var_1_32 == ((unsigned long int) last_1_var_1_32)) : (var_1_32 == ((unsigned long int) (var_1_24 + ((((var_1_28) > (var_1_8)) ? (var_1_28) : (var_1_8)))))))) && (((var_1_8 < -128) && var_1_63) ? (var_1_33 == ((unsigned char) var_1_28)) : ((var_1_19 <= var_1_20) ? (var_1_33 == ((unsigned char) (var_1_29 + ((((var_1_7 + 5) < 0 ) ? -(var_1_7 + 5) : (var_1_7 + 5)))))) : (var_1_33 == ((unsigned char) (var_1_35 - var_1_28)))))) && ((var_1_5 < var_1_49) ? (var_1_36 == ((signed short int) ((var_1_37 - var_1_7) - var_1_28))) : 1)) && ((((~ var_1_32) & 25) > ((((var_1_23) > ((var_1_39 - var_1_68))) ? (var_1_23) : ((var_1_39 - var_1_68))))) ? (var_1_38 == ((unsigned long int) (((((var_1_40) > (var_1_7)) ? (var_1_40) : (var_1_7))) + ((((var_1_68) > (var_1_66)) ? (var_1_68) : (var_1_66)))))) : (var_1_38 == ((unsigned long int) (((((((var_1_28) > (var_1_35)) ? (var_1_28) : (var_1_35))) < 0 ) ? -((((var_1_28) > (var_1_35)) ? (var_1_28) : (var_1_35))) : ((((var_1_28) > (var_1_35)) ? (var_1_28) : (var_1_35))))))))) && ((var_1_54 || var_1_63) ? ((var_1_63 && (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < var_1_18)) ? ((var_1_28 < var_1_35) ? (var_1_41 == ((signed short int) ((((var_1_4) < (((((var_1_29) < (var_1_7)) ? (var_1_29) : (var_1_7))))) ? (var_1_4) : (((((var_1_29) < (var_1_7)) ? (var_1_29) : (var_1_7)))))))) : (var_1_41 == ((signed short int) ((var_1_35 - (var_1_43 - var_1_19)) + var_1_28)))) : (var_1_41 == ((signed short int) ((((((var_1_37 - var_1_35) - 8)) > (var_1_19)) ? (((var_1_37 - var_1_35) - 8)) : (var_1_19)))))) : ((var_1_26 < var_1_37) ? (var_1_41 == ((signed short int) ((((var_1_6) > (var_1_44)) ? (var_1_6) : (var_1_44))))) : 1))) && ((4.5 > ((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16)))) ? (var_1_45 == ((unsigned long int) ((2028031234u + var_1_46) - var_1_26))) : (var_1_45 == ((unsigned long int) (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))))) && ((((var_1_37 / var_1_3) / var_1_28) == (var_1_8 - var_1_40)) ? (((var_1_44 / ((((32) < 0 ) ? -(32) : (32)))) > (var_1_19 & var_1_32)) ? (var_1_49 == ((signed long int) (var_1_51 - var_1_26))) : (var_1_49 == ((signed long int) (10000000 - ((((var_1_33) < (var_1_23)) ? (var_1_33) : (var_1_23))))))) : (var_1_49 == ((signed long int) (((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49))) + var_1_24))))) && (var_1_52 == ((unsigned char) (((((var_1_29) > (8)) ? (var_1_29) : (8))) + (var_1_23 + 32))))) && (var_1_54 ? (var_1_53 == ((float) 2.5f)) : ((((var_1_39 - var_1_67) <= (var_1_48 - 100u)) && ((var_1_61 + var_1_14) == (var_1_15 - var_1_16))) ? (var_1_53 == ((float) ((((var_1_15) > (var_1_13)) ? (var_1_15) : (var_1_13))))) : (var_1_53 == ((float) var_1_13))))) && (((last_1_var_1_38 / var_1_26) < last_1_var_1_49) ? ((var_1_26 == (((((51166) > (var_1_24)) ? (51166) : (var_1_24))) - ((((var_1_25) > (0)) ? (var_1_25) : (0))))) ? (var_1_54 == ((unsigned char) ((var_1_55 && var_1_56) && (var_1_57 && (last_1_var_1_63 || var_1_58))))) : (var_1_54 == ((unsigned char) (! (var_1_57 && var_1_55))))) : ((! (var_1_5 > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (last_1_var_1_63 ? ((((((last_1_var_1_17) < (last_1_var_1_10)) ? (last_1_var_1_17) : (last_1_var_1_10))) >= last_1_var_1_17) ? (var_1_54 == ((unsigned char) (last_1_var_1_63 || (var_1_56 && var_1_55)))) : 1) : (var_1_54 == ((unsigned char) (! (var_1_57 && (last_1_var_1_63 || var_1_56)))))) : (var_1_54 == ((unsigned char) (var_1_55 && (var_1_58 && var_1_60))))))) && (((var_1_17 + var_1_13) <= (var_1_17 * var_1_12)) ? (((var_1_45 % var_1_26) > (var_1_40 * var_1_50)) ? (var_1_61 == ((float) var_1_14)) : 1) : (var_1_61 == ((float) var_1_62)))) && (var_1_63 == ((unsigned char) var_1_60))) && (var_1_54 ? (var_1_64 == ((signed long int) var_1_24)) : 1)) && (var_1_65 == ((signed char) var_1_8))) && (var_1_57 ? (var_1_66 == ((signed long int) var_1_51)) : (var_1_66 == ((signed long int) var_1_5)))) && (var_1_67 == ((unsigned char) (var_1_35 - var_1_8)))) && ((((((var_1_61) > (var_1_18)) ? (var_1_61) : (var_1_18))) == (- var_1_16)) ? (var_1_68 == ((unsigned char) var_1_29)) : 1)) && (var_1_70 == ((signed char) var_1_6))
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
