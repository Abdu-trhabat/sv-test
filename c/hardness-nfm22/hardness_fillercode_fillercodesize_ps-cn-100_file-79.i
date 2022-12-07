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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 0;
double var_1_9 = 127.625;
double var_1_10 = 256.8;
double var_1_11 = 0.30000000000000004;
signed long int var_1_12 = -2;
double var_1_13 = 2.475;
double var_1_14 = 25.2;
double var_1_15 = 500.125;
double var_1_16 = 10.75;
double var_1_17 = 255.4;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 8;
unsigned char var_1_25 = 10;
float var_1_26 = 16.8;
unsigned long int var_1_27 = 64;
unsigned long int var_1_28 = 256;
signed short int var_1_29 = 16;
signed short int var_1_30 = 64;
signed long int var_1_31 = -64;
double var_1_32 = 255.5;
double var_1_33 = 16.5;
double var_1_34 = 9.25;
double var_1_35 = 8.8;
signed long int var_1_36 = 4;
signed long int var_1_37 = 64;
double var_1_38 = 63.6;
double var_1_39 = 4.65;
double var_1_40 = 0.0;
double var_1_41 = 32.6;
signed short int var_1_42 = 128;
signed short int var_1_43 = -1;
signed short int var_1_44 = -10;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned short int var_1_50 = 56772;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
float var_1_54 = -0.125;
float var_1_55 = 100000000.8;
float var_1_56 = 10000.55;
float var_1_57 = 7.22;
float var_1_58 = 16.25;
signed short int var_1_59 = -32;
signed char var_1_60 = 10;
signed char var_1_61 = 16;
signed short int var_1_62 = 4;
signed short int var_1_63 = 25;
unsigned char var_1_64 = 50;
unsigned char var_1_65 = 50;
unsigned char var_1_66 = 1;
double var_1_67 = -0.25;
unsigned char var_1_68 = 4;
float var_1_69 = 3.2;
unsigned char last_1_var_1_18 = 1;
unsigned char last_1_var_1_20 = 100;
void initially(void) {
}
void step(void) {
 if ((var_1_29 - var_1_30) <= var_1_31) {
  var_1_28 = var_1_30;
 }
 var_1_32 = ((((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)))) > (var_1_35)) ? (((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)))) : (var_1_35)));
 var_1_36 = (((((var_1_30) > (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) ? (var_1_30) : (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))) + var_1_37);
 if (256 > (-10 >> var_1_28)) {
  var_1_38 = (var_1_39 - (((((var_1_40 - 128.375)) < (var_1_41)) ? ((var_1_40 - 128.375)) : (var_1_41))));
 } else {
  var_1_38 = var_1_41;
 }
 if (! (var_1_35 >= (var_1_41 - var_1_40))) {
  var_1_42 = (((((var_1_43 - 256)) < (var_1_44)) ? ((var_1_43 - 256)) : (var_1_44)));
 }
 if (((var_1_36 * var_1_28) | var_1_30) <= (var_1_31 + 8u)) {
  if (((((16u) < (var_1_31)) ? (16u) : (var_1_31))) < var_1_28) {
   var_1_45 = var_1_46;
  } else {
   var_1_45 = var_1_47;
  }
 }
 if (var_1_46) {
  if ((var_1_36 <= var_1_43) || (var_1_33 < ((((var_1_41) < (var_1_32)) ? (var_1_41) : (var_1_32))))) {
   var_1_48 = var_1_49;
  }
 } else {
  if (((- var_1_37) ^ (var_1_50 - var_1_30)) < var_1_43) {
   var_1_48 = (var_1_49 || var_1_51);
  } else {
   var_1_48 = (var_1_49 || (var_1_51 || var_1_52));
  }
 }
 if (var_1_36 <= var_1_43) {
  var_1_53 = (var_1_45 || var_1_47);
 }
 if ((var_1_50 | 10) != var_1_42) {
  if (var_1_39 >= var_1_35) {
   var_1_54 = (var_1_40 - (((((var_1_55 + var_1_56)) > (var_1_39)) ? ((var_1_55 + var_1_56)) : (var_1_39))));
  } else {
   var_1_54 = (var_1_39 - var_1_57);
  }
 } else {
  var_1_54 = ((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) < ((var_1_55 + (255.6f - var_1_56)))) ? (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) : ((var_1_55 + (255.6f - var_1_56)))));
 }
 if (((var_1_36 / var_1_60) % var_1_61) >= (var_1_37 * ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) {
  var_1_59 = (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) + var_1_60);
 } else {
  var_1_59 = ((((((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) < ((var_1_62 - var_1_63))) ? (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) : ((var_1_62 - var_1_63))));
 }
 if (var_1_47) {
  var_1_64 = ((((((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) < 0 ) ? -((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) : ((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))))) < 0 ) ? -(((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) < 0 ) ? -((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) : ((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))))) : (((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) < 0 ) ? -((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) : ((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66)))))));
 } else {
  if (var_1_51) {
   if (var_1_42 <= var_1_44) {
    var_1_64 = var_1_66;
   }
  }
 }
 if (var_1_50 >= var_1_66) {
  var_1_67 = var_1_39;
 }
 var_1_68 = var_1_66;
 var_1_69 = 7.25f;
 signed long int stepLocal_1 = last_1_var_1_20;
 unsigned char stepLocal_0 = last_1_var_1_18;
 if (stepLocal_0 && last_1_var_1_18) {
  if (((((last_1_var_1_20) < ((last_1_var_1_20 * last_1_var_1_20))) ? (last_1_var_1_20) : ((last_1_var_1_20 * last_1_var_1_20)))) > stepLocal_1) {
   var_1_7 = var_1_8;
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_3) {
  if (var_1_2) {
   var_1_18 = (! var_1_19);
  }
 }
 var_1_26 = var_1_16;
 var_1_27 = 10u;
 unsigned long int stepLocal_2 = var_1_27;
 if (stepLocal_2 != (var_1_8 + var_1_7)) {
  var_1_9 = ((((var_1_10) < (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))) ? (var_1_10) : (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))));
 } else {
  var_1_9 = ((((var_1_11) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_11) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))));
 }
 if (var_1_8 >= var_1_7) {
  if (var_1_15 >= var_1_26) {
   var_1_20 = (var_1_21 - ((((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))))));
  } else {
   var_1_20 = var_1_24;
  }
 } else {
  var_1_20 = var_1_22;
 }
 if (var_1_18) {
  if (! var_1_18) {
   var_1_1 = (var_1_7 + 5);
  } else {
   var_1_1 = (var_1_20 - var_1_20);
  }
 } else {
  var_1_1 = var_1_20;
 }
 if ((var_1_13 - var_1_14) >= (var_1_15 - (var_1_16 + var_1_17))) {
  var_1_12 = (var_1_20 + var_1_20);
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427387900e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427387900e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -1);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -1073741823);
 assume_abort_if_not(var_1_37 <= 1073741823);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 4611686.018427382800e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= -1);
 assume_abort_if_not(var_1_43 <= 32766);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= -32767);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65535);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -922337.2036854765600e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -128);
 assume_abort_if_not(var_1_60 <= 127);
 assume_abort_if_not(var_1_60 != 0);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -128);
 assume_abort_if_not(var_1_61 <= 127);
 assume_abort_if_not(var_1_61 != 0);
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= -1);
 assume_abort_if_not(var_1_62 <= 32766);
 var_1_63 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 32766);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 254);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 254);
}
void updateLastVariables() {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((var_1_18 ? ((! var_1_18) ? (var_1_1 == ((signed short int) (var_1_7 + 5))) : (var_1_1 == ((signed short int) (var_1_20 - var_1_20)))) : (var_1_1 == ((signed short int) var_1_20))) && ((last_1_var_1_18 && last_1_var_1_18) ? ((((((last_1_var_1_20) < ((last_1_var_1_20 * last_1_var_1_20))) ? (last_1_var_1_20) : ((last_1_var_1_20 * last_1_var_1_20)))) > last_1_var_1_20) ? (var_1_7 == ((unsigned char) var_1_8)) : (var_1_7 == ((unsigned char) var_1_8))) : (var_1_7 == ((unsigned char) var_1_8)))) && ((var_1_27 != (var_1_8 + var_1_7)) ? (var_1_9 == ((double) ((((var_1_10) < (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))) ? (var_1_10) : (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6)))))))) : (var_1_9 == ((double) ((((var_1_11) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_11) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))))))) && (((var_1_13 - var_1_14) >= (var_1_15 - (var_1_16 + var_1_17))) ? (var_1_12 == ((signed long int) (var_1_20 + var_1_20))) : 1)) && (var_1_3 ? (var_1_2 ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1) : 1)) && ((var_1_8 >= var_1_7) ? ((var_1_15 >= var_1_26) ? (var_1_20 == ((unsigned char) (var_1_21 - ((((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))))))) : (var_1_20 == ((unsigned char) var_1_24))) : (var_1_20 == ((unsigned char) var_1_22)))) && (var_1_26 == ((float) var_1_16))) && (var_1_27 == ((unsigned long int) 10u))
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
