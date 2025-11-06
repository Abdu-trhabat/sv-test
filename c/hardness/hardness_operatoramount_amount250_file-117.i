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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned long int var_1_4 = 1584235566;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1;
unsigned long int var_1_8 = 2;
unsigned char var_1_9 = 100;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 0;
double var_1_12 = 49.25;
double var_1_13 = 3.25;
double var_1_14 = 128.5;
double var_1_15 = 16.2;
unsigned short int var_1_16 = 32;
unsigned short int var_1_17 = 61396;
unsigned short int var_1_18 = 24402;
unsigned long int var_1_19 = 0;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 128;
unsigned short int var_1_24 = 2;
unsigned long int var_1_25 = 3987994744;
signed short int var_1_26 = 0;
unsigned long int var_1_27 = 5;
signed long int var_1_28 = 4;
unsigned long int var_1_29 = 3326692060;
signed short int var_1_30 = -64;
unsigned long int var_1_31 = 4;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed char var_1_37 = 1;
signed char var_1_38 = 32;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 0;
double var_1_41 = 0.25;
unsigned long int var_1_42 = 0;
unsigned long int var_1_43 = 2;
unsigned long int var_1_44 = 10;
unsigned long int var_1_45 = 1822689474;
signed long int var_1_46 = 10;
double var_1_47 = 4.2;
double var_1_48 = 15.95;
double var_1_49 = 99.7;
double var_1_50 = 16.4;
unsigned short int var_1_51 = 64;
signed long int var_1_52 = 32;
double var_1_53 = 7.375;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
signed char var_1_57 = 32;
signed char var_1_58 = 50;
signed char var_1_59 = -8;
signed long int var_1_60 = 1;
double var_1_61 = 15.6;
unsigned long int last_1_var_1_1 = 256;
unsigned char last_1_var_1_9 = 100;
unsigned long int last_1_var_1_27 = 5;
unsigned short int last_1_var_1_51 = 64;
void initially(void) {
}
void step(void) {
 if ((var_1_29 <= var_1_6) || (last_1_var_1_27 < last_1_var_1_1)) {
  var_1_44 = (((((var_1_22 + ((((last_1_var_1_9) < (last_1_var_1_51)) ? (last_1_var_1_9) : (last_1_var_1_51))))) < ((var_1_10 + var_1_21))) ? ((var_1_22 + ((((last_1_var_1_9) < (last_1_var_1_51)) ? (last_1_var_1_9) : (last_1_var_1_51))))) : ((var_1_10 + var_1_21))));
 } else {
  if (var_1_35) {
   var_1_44 = (var_1_29 - (((((last_1_var_1_1) < (last_1_var_1_51)) ? (last_1_var_1_1) : (last_1_var_1_51))) + ((((var_1_28) < (var_1_5)) ? (var_1_28) : (var_1_5)))));
  } else {
   var_1_44 = ((var_1_4 + var_1_45) - ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) > (last_1_var_1_1)) ? (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (last_1_var_1_1))));
  }
 }
 unsigned long int stepLocal_3 = 64u;
 if (var_1_6 >= stepLocal_3) {
  var_1_12 = var_1_13;
 } else {
  var_1_12 = (((((var_1_14) > (64.5)) ? (var_1_14) : (64.5))) - var_1_15);
 }
 var_1_19 = (var_1_17 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))));
 signed long int stepLocal_9 = ((((var_1_10 - var_1_17)) < (-8)) ? ((var_1_10 - var_1_17)) : (-8));
 if (var_1_28 < stepLocal_9) {
  var_1_30 = (((((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) > ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28)))))) ? ((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) : ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28)))))));
 }
 var_1_32 = ((var_1_33 || var_1_34) || var_1_35);
 var_1_36 = (! var_1_33);
 var_1_41 = ((((var_1_14) > (-0.25)) ? (var_1_14) : (-0.25)));
 if (10000.8 >= ((((var_1_14) > ((var_1_15 / 0.75))) ? (var_1_14) : ((var_1_15 / 0.75))))) {
  var_1_43 = (var_1_17 + var_1_5);
 } else {
  var_1_43 = var_1_17;
 }
 var_1_46 = (var_1_5 - var_1_10);
 unsigned char stepLocal_17 = var_1_34;
 if (var_1_35 || stepLocal_17) {
  var_1_53 = var_1_13;
 }
 if (var_1_36) {
  var_1_57 = (((var_1_58 - var_1_28) - var_1_22) + ((((var_1_38) < (var_1_21)) ? (var_1_38) : (var_1_21))));
 }
 var_1_59 = var_1_22;
 var_1_60 = var_1_19;
 var_1_61 = var_1_50;
 unsigned long int stepLocal_1 = var_1_19;
 unsigned long int stepLocal_0 = var_1_19;
 if (stepLocal_1 < 16u) {
  if (stepLocal_0 >= 4u) {
   var_1_1 = ((((((var_1_4 - var_1_5) + var_1_6)) > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (((var_1_4 - var_1_5) + var_1_6)) : (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))));
  } else {
   var_1_1 = ((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8)));
  }
 } else {
  var_1_1 = var_1_7;
 }
 unsigned long int stepLocal_2 = var_1_1;
 if (var_1_7 != stepLocal_2) {
  var_1_9 = (((((var_1_10) < (0)) ? (var_1_10) : (0))) + var_1_11);
 }
 unsigned long int stepLocal_14 = var_1_43;
 signed char stepLocal_13 = var_1_38;
 if (stepLocal_13 >= (var_1_43 & var_1_17)) {
  if (var_1_28 < stepLocal_14) {
   var_1_39 = var_1_28;
  }
 } else {
  if ((var_1_14 - 256.375) > var_1_13) {
   var_1_39 = (((((var_1_11 + (var_1_21 + var_1_28))) > ((var_1_22 + var_1_10))) ? ((var_1_11 + (var_1_21 + var_1_28))) : ((var_1_22 + var_1_10))));
  }
 }
 unsigned char stepLocal_16 = var_1_48 < (var_1_14 - var_1_15);
 if (stepLocal_16 && (var_1_43 > var_1_39)) {
  var_1_52 = ((((var_1_28) > (var_1_1)) ? (var_1_28) : (var_1_1)));
 }
 unsigned long int stepLocal_15 = var_1_1;
 if (var_1_13 >= ((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14)))) {
  if (stepLocal_15 < (var_1_44 / ((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17))))) {
   var_1_42 = (var_1_29 - var_1_10);
  }
 }
 if (((var_1_14 - var_1_15) > (var_1_13 * var_1_61)) && ((100 << var_1_46) == var_1_4)) {
  var_1_51 = (var_1_17 - 16);
 } else {
  var_1_51 = (last_1_var_1_51 + (var_1_42 + var_1_11));
 }
 unsigned long int stepLocal_4 = var_1_4;
 if (4 > stepLocal_4) {
  if (var_1_32) {
   var_1_16 = (((var_1_17 - 10) - var_1_52) - var_1_10);
  } else {
   var_1_16 = var_1_17;
  }
 } else {
  var_1_16 = (((((var_1_17 - (var_1_18 - 1))) > (var_1_52)) ? ((var_1_17 - (var_1_18 - 1))) : (var_1_52)));
 }
 unsigned long int stepLocal_7 = var_1_19;
 unsigned char stepLocal_6 = var_1_32;
 if (((var_1_22 * var_1_10) <= var_1_18) || stepLocal_6) {
  var_1_24 = (var_1_17 - var_1_21);
 } else {
  if (stepLocal_7 == (var_1_25 - var_1_10)) {
   var_1_24 = ((((10) > ((var_1_17 - var_1_18))) ? (10) : ((var_1_17 - var_1_18))));
  } else {
   var_1_24 = ((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16)));
  }
 }
 if (var_1_8 == var_1_42) {
  var_1_26 = (((((var_1_11 - (var_1_10 + var_1_23))) > (((((-16) < (5)) ? (-16) : (5))))) ? ((var_1_11 - (var_1_10 + var_1_23))) : (((((-16) < (5)) ? (-16) : (5))))));
 } else {
  var_1_26 = ((((((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) < (var_1_21)) ? (((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) : (var_1_21)));
 }
 if (var_1_26 != ((var_1_10 - var_1_18) % var_1_17)) {
  if (var_1_45 >= (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) + 2u)) {
   var_1_47 = var_1_13;
  } else {
   var_1_47 = (var_1_48 + ((((256.2) < (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))))) ? (256.2) : (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))))));
  }
 }
 signed long int stepLocal_12 = var_1_28;
 unsigned short int stepLocal_11 = var_1_17;
 signed long int stepLocal_10 = 10;
 if (var_1_22 <= stepLocal_10) {
  if (stepLocal_12 >= (~ var_1_44)) {
   var_1_31 = (var_1_22 + ((var_1_21 + var_1_10) + var_1_23));
  }
 } else {
  if (var_1_25 >= stepLocal_11) {
   var_1_31 = (var_1_18 + ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))));
  } else {
   var_1_31 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  }
 }
 unsigned long int stepLocal_5 = (var_1_17 - var_1_43) >> (var_1_21 - var_1_22);
 if (var_1_24 == stepLocal_5) {
  var_1_20 = (var_1_23 - var_1_10);
 } else {
  var_1_20 = var_1_23;
 }
 if (var_1_13 > var_1_41) {
  var_1_37 = (((((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) < 0 ) ? -((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) : ((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38))))));
 } else {
  if ((var_1_13 / 0.5) >= ((((var_1_14 + var_1_15) < 0 ) ? -(var_1_14 + var_1_15) : (var_1_14 + var_1_15)))) {
   if ((var_1_31 * var_1_43) > var_1_6) {
    var_1_37 = var_1_22;
   } else {
    var_1_37 = (var_1_28 + (var_1_22 + var_1_21));
   }
  } else {
   var_1_37 = var_1_21;
  }
 }
 signed long int stepLocal_8 = var_1_39 >> var_1_28;
 if (var_1_5 <= stepLocal_8) {
  var_1_27 = ((var_1_29 - var_1_5) - var_1_31);
 } else {
  var_1_27 = var_1_17;
 }
 if (((var_1_27 ^ var_1_19) > var_1_43) && (! (var_1_21 <= var_1_20))) {
  if (var_1_33 || (var_1_19 >= var_1_20)) {
   if (var_1_37 >= var_1_43) {
    var_1_54 = (var_1_55 && var_1_56);
   } else {
    var_1_54 = ((var_1_4 >= var_1_43) && var_1_35);
   }
  } else {
   var_1_54 = (! var_1_35);
  }
 } else {
  var_1_54 = 1;
 }
 if (var_1_54) {
  var_1_40 = ((var_1_11 <= (var_1_23 - var_1_10)) && var_1_35);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 57342);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 16383);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 15);
 assume_abort_if_not(var_1_21 <= 30);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 14);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967295);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 7);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 3221225470);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 0);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741824);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 31);
 assume_abort_if_not(var_1_58 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_51 = var_1_51;
}
int property(void) {
 return ((((((((((((((((((((((((((((((var_1_19 < 16u) ? ((var_1_19 >= 4u) ? (var_1_1 == ((unsigned long int) ((((((var_1_4 - var_1_5) + var_1_6)) > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (((var_1_4 - var_1_5) + var_1_6)) : (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))))))) : (var_1_1 == ((unsigned long int) ((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8)))))) : (var_1_1 == ((unsigned long int) var_1_7))) && ((var_1_7 != var_1_1) ? (var_1_9 == ((unsigned char) (((((var_1_10) < (0)) ? (var_1_10) : (0))) + var_1_11))) : 1)) && ((var_1_6 >= 64u) ? (var_1_12 == ((double) var_1_13)) : (var_1_12 == ((double) (((((var_1_14) > (64.5)) ? (var_1_14) : (64.5))) - var_1_15))))) && ((4 > var_1_4) ? (var_1_32 ? (var_1_16 == ((unsigned short int) (((var_1_17 - 10) - var_1_52) - var_1_10))) : (var_1_16 == ((unsigned short int) var_1_17))) : (var_1_16 == ((unsigned short int) (((((var_1_17 - (var_1_18 - 1))) > (var_1_52)) ? ((var_1_17 - (var_1_18 - 1))) : (var_1_52))))))) && (var_1_19 == ((unsigned long int) (var_1_17 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))) && ((var_1_24 == ((var_1_17 - var_1_43) >> (var_1_21 - var_1_22))) ? (var_1_20 == ((unsigned char) (var_1_23 - var_1_10))) : (var_1_20 == ((unsigned char) var_1_23)))) && ((((var_1_22 * var_1_10) <= var_1_18) || var_1_32) ? (var_1_24 == ((unsigned short int) (var_1_17 - var_1_21))) : ((var_1_19 == (var_1_25 - var_1_10)) ? (var_1_24 == ((unsigned short int) ((((10) > ((var_1_17 - var_1_18))) ? (10) : ((var_1_17 - var_1_18)))))) : (var_1_24 == ((unsigned short int) ((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16)))))))) && ((var_1_8 == var_1_42) ? (var_1_26 == ((signed short int) (((((var_1_11 - (var_1_10 + var_1_23))) > (((((-16) < (5)) ? (-16) : (5))))) ? ((var_1_11 - (var_1_10 + var_1_23))) : (((((-16) < (5)) ? (-16) : (5)))))))) : (var_1_26 == ((signed short int) ((((((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) < (var_1_21)) ? (((((var_1_22) > (var_1_10)) ? (var_1_22) : (var_1_10)))) : (var_1_21))))))) && ((var_1_5 <= (var_1_39 >> var_1_28)) ? (var_1_27 == ((unsigned long int) ((var_1_29 - var_1_5) - var_1_31))) : (var_1_27 == ((unsigned long int) var_1_17)))) && ((var_1_28 < (((((var_1_10 - var_1_17)) < (-8)) ? ((var_1_10 - var_1_17)) : (-8)))) ? (var_1_30 == ((signed short int) (((((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) > ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28)))))) ? ((((((((-64) < 0 ) ? -(-64) : (-64))) < 0 ) ? -((((-64) < 0 ) ? -(-64) : (-64))) : ((((-64) < 0 ) ? -(-64) : (-64)))))) : ((64 - ((((var_1_10) < (var_1_28)) ? (var_1_10) : (var_1_28))))))))) : 1)) && ((var_1_22 <= 10) ? ((var_1_28 >= (~ var_1_44)) ? (var_1_31 == ((unsigned long int) (var_1_22 + ((var_1_21 + var_1_10) + var_1_23)))) : 1) : ((var_1_25 >= var_1_17) ? (var_1_31 == ((unsigned long int) (var_1_18 + ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))) : (var_1_31 == ((unsigned long int) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))))) && (var_1_32 == ((unsigned char) ((var_1_33 || var_1_34) || var_1_35)))) && (var_1_36 == ((unsigned char) (! var_1_33)))) && ((var_1_13 > var_1_41) ? (var_1_37 == ((signed char) (((((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) < 0 ) ? -((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))) : ((var_1_21 + var_1_28) + ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)))))))) : (((var_1_13 / 0.5) >= ((((var_1_14 + var_1_15) < 0 ) ? -(var_1_14 + var_1_15) : (var_1_14 + var_1_15)))) ? (((var_1_31 * var_1_43) > var_1_6) ? (var_1_37 == ((signed char) var_1_22)) : (var_1_37 == ((signed char) (var_1_28 + (var_1_22 + var_1_21))))) : (var_1_37 == ((signed char) var_1_21))))) && ((var_1_38 >= (var_1_43 & var_1_17)) ? ((var_1_28 < var_1_43) ? (var_1_39 == ((unsigned char) var_1_28)) : 1) : (((var_1_14 - 256.375) > var_1_13) ? (var_1_39 == ((unsigned char) (((((var_1_11 + (var_1_21 + var_1_28))) > ((var_1_22 + var_1_10))) ? ((var_1_11 + (var_1_21 + var_1_28))) : ((var_1_22 + var_1_10)))))) : 1))) && (var_1_54 ? (var_1_40 == ((unsigned char) ((var_1_11 <= (var_1_23 - var_1_10)) && var_1_35))) : 1)) && (var_1_41 == ((double) ((((var_1_14) > (-0.25)) ? (var_1_14) : (-0.25)))))) && ((var_1_13 >= ((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14)))) ? ((var_1_1 < (var_1_44 / ((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17))))) ? (var_1_42 == ((unsigned long int) (var_1_29 - var_1_10))) : 1) : 1)) && ((10000.8 >= ((((var_1_14) > ((var_1_15 / 0.75))) ? (var_1_14) : ((var_1_15 / 0.75))))) ? (var_1_43 == ((unsigned long int) (var_1_17 + var_1_5))) : (var_1_43 == ((unsigned long int) var_1_17)))) && (((var_1_29 <= var_1_6) || (last_1_var_1_27 < last_1_var_1_1)) ? (var_1_44 == ((unsigned long int) (((((var_1_22 + ((((last_1_var_1_9) < (last_1_var_1_51)) ? (last_1_var_1_9) : (last_1_var_1_51))))) < ((var_1_10 + var_1_21))) ? ((var_1_22 + ((((last_1_var_1_9) < (last_1_var_1_51)) ? (last_1_var_1_9) : (last_1_var_1_51))))) : ((var_1_10 + var_1_21)))))) : (var_1_35 ? (var_1_44 == ((unsigned long int) (var_1_29 - (((((last_1_var_1_1) < (last_1_var_1_51)) ? (last_1_var_1_1) : (last_1_var_1_51))) + ((((var_1_28) < (var_1_5)) ? (var_1_28) : (var_1_5))))))) : (var_1_44 == ((unsigned long int) ((var_1_4 + var_1_45) - ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) > (last_1_var_1_1)) ? (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (last_1_var_1_1))))))))) && (var_1_46 == ((signed long int) (var_1_5 - var_1_10)))) && ((var_1_26 != ((var_1_10 - var_1_18) % var_1_17)) ? ((var_1_45 >= (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) + 2u)) ? (var_1_47 == ((double) var_1_13)) : (var_1_47 == ((double) (var_1_48 + ((((256.2) < (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))))) ? (256.2) : (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50)))))))))) : 1)) && ((((var_1_14 - var_1_15) > (var_1_13 * var_1_61)) && ((100 << var_1_46) == var_1_4)) ? (var_1_51 == ((unsigned short int) (var_1_17 - 16))) : (var_1_51 == ((unsigned short int) (last_1_var_1_51 + (var_1_42 + var_1_11)))))) && (((var_1_48 < (var_1_14 - var_1_15)) && (var_1_43 > var_1_39)) ? (var_1_52 == ((signed long int) ((((var_1_28) > (var_1_1)) ? (var_1_28) : (var_1_1))))) : 1)) && ((var_1_35 || var_1_34) ? (var_1_53 == ((double) var_1_13)) : 1)) && ((((var_1_27 ^ var_1_19) > var_1_43) && (! (var_1_21 <= var_1_20))) ? ((var_1_33 || (var_1_19 >= var_1_20)) ? ((var_1_37 >= var_1_43) ? (var_1_54 == ((unsigned char) (var_1_55 && var_1_56))) : (var_1_54 == ((unsigned char) ((var_1_4 >= var_1_43) && var_1_35)))) : (var_1_54 == ((unsigned char) (! var_1_35)))) : (var_1_54 == ((unsigned char) 1)))) && (var_1_36 ? (var_1_57 == ((signed char) (((var_1_58 - var_1_28) - var_1_22) + ((((var_1_38) < (var_1_21)) ? (var_1_38) : (var_1_21)))))) : 1)) && (var_1_59 == ((signed char) var_1_22))) && (var_1_60 == ((signed long int) var_1_19))) && (var_1_61 == ((double) var_1_50))
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
