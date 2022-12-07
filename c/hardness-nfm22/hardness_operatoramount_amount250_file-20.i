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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 0;
unsigned short int var_1_8 = 21062;
signed long int var_1_9 = -4;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 2706779013;
float var_1_13 = 25.1;
float var_1_15 = 9.25;
float var_1_16 = 0.8;
float var_1_17 = 9.75;
signed long int var_1_18 = 10;
signed long int var_1_19 = 2050467977;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 63087;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 10000;
unsigned long int var_1_25 = 25;
unsigned long int var_1_26 = 3474534728;
unsigned char var_1_27 = 4;
unsigned long int var_1_28 = 16;
unsigned long int var_1_29 = 1956549945;
unsigned short int var_1_30 = 5;
float var_1_31 = 2.625;
float var_1_32 = 5.95;
float var_1_33 = 50.992;
float var_1_34 = 0.0;
float var_1_35 = 10.88;
float var_1_36 = 128.8;
float var_1_37 = 0.0;
float var_1_38 = 255.9;
float var_1_39 = 7.8;
unsigned char var_1_40 = 128;
float var_1_41 = 1000000.2;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 32;
signed short int var_1_45 = 32;
unsigned long int var_1_47 = 0;
unsigned short int var_1_48 = 8;
unsigned long int var_1_49 = 128;
float var_1_51 = 3.2;
unsigned char var_1_52 = 16;
unsigned char var_1_53 = 100;
unsigned char var_1_54 = 4;
signed char var_1_55 = 64;
signed char var_1_56 = 1;
signed char var_1_57 = 10;
signed long int var_1_58 = 256;
unsigned long int var_1_59 = 32;
signed long int var_1_60 = 50;
signed long int var_1_61 = 10;
unsigned long int last_1_var_1_10 = 256;
unsigned long int last_1_var_1_25 = 25;
unsigned long int last_1_var_1_28 = 16;
unsigned short int last_1_var_1_30 = 5;
unsigned char last_1_var_1_42 = 100;
signed short int last_1_var_1_45 = 32;
unsigned char last_1_var_1_52 = 16;
unsigned long int last_1_var_1_59 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_3) {
  var_1_60 = (last_1_var_1_30 + (last_1_var_1_25 - var_1_43));
 }
 signed long int stepLocal_5 = last_1_var_1_42;
 if (var_1_3) {
  if (stepLocal_5 != ((3451179663u - var_1_6) * var_1_8)) {
   var_1_18 = (last_1_var_1_59 - ((var_1_19 - last_1_var_1_28) - var_1_6));
  }
 } else {
  var_1_18 = ((((var_1_8) > (((((last_1_var_1_59) < 0 ) ? -(last_1_var_1_59) : (last_1_var_1_59))))) ? (var_1_8) : (((((last_1_var_1_59) < 0 ) ? -(last_1_var_1_59) : (last_1_var_1_59))))));
 }
 var_1_59 = var_1_18;
 unsigned long int stepLocal_3 = last_1_var_1_10;
 if (last_1_var_1_45 <= stepLocal_3) {
  var_1_9 = last_1_var_1_45;
 }
 var_1_47 = ((((last_1_var_1_52) < (var_1_40)) ? (last_1_var_1_52) : (var_1_40)));
 if (256u <= last_1_var_1_52) {
  if (var_1_40 > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) * var_1_26)) {
   var_1_42 = ((((((((var_1_6) < ((var_1_5 + var_1_43))) ? (var_1_6) : ((var_1_5 + var_1_43))))) > (var_1_44)) ? (((((var_1_6) < ((var_1_5 + var_1_43))) ? (var_1_6) : ((var_1_5 + var_1_43))))) : (var_1_44)));
  }
 }
 var_1_10 = (var_1_11 - var_1_42);
 var_1_49 = ((var_1_19 - var_1_42) + var_1_8);
 var_1_27 = (var_1_6 + var_1_5);
 if ((var_1_17 - var_1_36) > (var_1_38 / var_1_37)) {
  var_1_51 = var_1_37;
 } else {
  var_1_51 = var_1_35;
 }
 if (var_1_29 >= var_1_40) {
  if ((var_1_37 - var_1_16) <= ((((255.5f) > (var_1_34)) ? (255.5f) : (var_1_34)))) {
   var_1_55 = (var_1_6 - ((((var_1_54) < (((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57))))) ? (var_1_54) : (((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57)))))));
  } else {
   if (var_1_2) {
    var_1_55 = var_1_6;
   } else {
    var_1_55 = var_1_57;
   }
  }
 } else {
  var_1_55 = var_1_57;
 }
 unsigned short int stepLocal_10 = var_1_8;
 signed long int stepLocal_9 = var_1_6 * var_1_23;
 unsigned long int stepLocal_8 = var_1_29;
 if (stepLocal_10 <= (45332 - ((((var_1_27) > (var_1_6)) ? (var_1_27) : (var_1_6))))) {
  if (((var_1_8 + 28549) - var_1_47) > stepLocal_9) {
   if (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) > stepLocal_8) {
    var_1_30 = var_1_21;
   } else {
    var_1_30 = var_1_47;
   }
  }
 } else {
  var_1_30 = var_1_8;
 }
 if (var_1_35 < (var_1_16 - var_1_39)) {
  if ((var_1_47 / var_1_5) < (~ var_1_53)) {
   var_1_61 = var_1_26;
  } else {
   var_1_61 = var_1_27;
  }
 } else {
  var_1_61 = var_1_56;
 }
 unsigned char stepLocal_1 = var_1_2;
 signed long int stepLocal_0 = (64 + var_1_5) - (var_1_6 + 10);
 if (stepLocal_1 || var_1_3) {
  if (var_1_49 == stepLocal_0) {
   var_1_1 = var_1_49;
  }
 }
 signed short int stepLocal_18 = var_1_1;
 unsigned short int stepLocal_17 = var_1_8;
 if (stepLocal_18 < var_1_60) {
  if (var_1_32 > (- ((((var_1_36) > (var_1_17)) ? (var_1_36) : (var_1_17))))) {
   var_1_52 = ((((100) < (var_1_5)) ? (100) : (var_1_5)));
  } else {
   if (var_1_40 <= stepLocal_17) {
    var_1_52 = (((((var_1_6) > (var_1_43)) ? (var_1_6) : (var_1_43))) + var_1_5);
   } else {
    var_1_52 = (128 - (var_1_53 - var_1_54));
   }
  }
 }
 if (var_1_2) {
  var_1_22 = ((var_1_8 - (var_1_23 - var_1_6)) + ((((128) > (var_1_27)) ? (128) : (var_1_27))));
 } else {
  var_1_22 = ((((((((var_1_6) > (var_1_30)) ? (var_1_6) : (var_1_30)))) < (((57988 - var_1_9) - var_1_5))) ? (((((var_1_6) > (var_1_30)) ? (var_1_6) : (var_1_30)))) : (((57988 - var_1_9) - var_1_5))));
 }
 var_1_58 = var_1_52;
 unsigned short int stepLocal_13 = var_1_22;
 signed long int stepLocal_12 = (((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8));
 unsigned char stepLocal_11 = var_1_5;
 if (var_1_52 == stepLocal_13) {
  if (var_1_26 > stepLocal_12) {
   if (var_1_2) {
    var_1_31 = ((((((((var_1_16 - var_1_17)) < ((var_1_32 + var_1_33))) ? ((var_1_16 - var_1_17)) : ((var_1_32 + var_1_33)))) < 0 ) ? -(((((var_1_16 - var_1_17)) < ((var_1_32 + var_1_33))) ? ((var_1_16 - var_1_17)) : ((var_1_32 + var_1_33)))) : (((((var_1_16 - var_1_17)) < ((var_1_32 + var_1_33))) ? ((var_1_16 - var_1_17)) : ((var_1_32 + var_1_33))))));
   } else {
    var_1_31 = ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)));
   }
  } else {
   var_1_31 = (((var_1_34 - var_1_35) + var_1_36) - (var_1_37 - ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))));
  }
 } else {
  if (var_1_38 < (9.999999999998E11f - var_1_35)) {
   if (var_1_51 < (var_1_15 + var_1_35)) {
    var_1_31 = (((((var_1_32) > (var_1_39)) ? (var_1_32) : (var_1_39))) + ((((var_1_35) < ((var_1_38 - var_1_36))) ? (var_1_35) : ((var_1_38 - var_1_36)))));
   }
  } else {
   if (stepLocal_11 >= (var_1_23 / var_1_40)) {
    var_1_31 = ((((10.875f) < (var_1_41)) ? (10.875f) : (var_1_41)));
   }
  }
 }
 if (((3.5f + var_1_51) / ((((var_1_37) > (var_1_34)) ? (var_1_37) : (var_1_34)))) < var_1_38) {
  if (var_1_3 && var_1_2) {
   var_1_45 = (((((var_1_40 - var_1_18)) > (-1)) ? ((var_1_40 - var_1_18)) : (-1)));
  } else {
   var_1_45 = (var_1_5 + ((((var_1_47) < (var_1_43)) ? (var_1_47) : (var_1_43))));
  }
 } else {
  if (var_1_31 >= ((var_1_31 + var_1_39) * var_1_38)) {
   var_1_45 = (var_1_5 + var_1_47);
  }
 }
 signed short int stepLocal_7 = var_1_45;
 unsigned short int stepLocal_6 = var_1_22;
 if (var_1_55 < stepLocal_6) {
  var_1_20 = ((var_1_5 + ((((var_1_1) > (var_1_6)) ? (var_1_1) : (var_1_6)))) + 16);
 } else {
  if (var_1_2) {
   if (4 >= stepLocal_7) {
    var_1_20 = ((((var_1_21 - (var_1_8 - 16)) < 0 ) ? -(var_1_21 - (var_1_8 - 16)) : (var_1_21 - (var_1_8 - 16))));
   } else {
    var_1_20 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
   }
  } else {
   var_1_20 = var_1_8;
  }
 }
 if (var_1_2 || (var_1_20 == (var_1_60 >> var_1_60))) {
  if (var_1_3) {
   if (var_1_15 <= var_1_17) {
    var_1_25 = ((var_1_26 - var_1_21) - var_1_23);
   } else {
    var_1_25 = (var_1_26 - var_1_60);
   }
  } else {
   if (var_1_9 > (var_1_60 / var_1_5)) {
    var_1_25 = var_1_42;
   }
  }
 } else {
  var_1_25 = var_1_11;
 }
 if (((((var_1_17) < (var_1_31)) ? (var_1_17) : (var_1_31))) > var_1_15) {
  var_1_28 = ((var_1_6 + var_1_61) + var_1_23);
 } else {
  var_1_28 = ((((((var_1_19 - var_1_21)) > (var_1_23)) ? ((var_1_19 - var_1_21)) : (var_1_23))) + ((var_1_29 - var_1_47) - var_1_9));
 }
 signed long int stepLocal_2 = var_1_6 / var_1_5;
 if (stepLocal_2 > var_1_20) {
  var_1_7 = ((var_1_8 - var_1_5) + var_1_6);
 }
 unsigned char stepLocal_4 = var_1_6;
 if (stepLocal_4 >= (var_1_20 ^ var_1_59)) {
  var_1_13 = ((((var_1_15) > ((var_1_16 - var_1_17))) ? (var_1_15) : ((var_1_16 - var_1_17))));
 }
 unsigned char stepLocal_16 = var_1_27;
 unsigned char stepLocal_15 = var_1_42;
 signed long int stepLocal_14 = var_1_23 & var_1_21;
 if (var_1_2) {
  if ((var_1_11 % ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) != stepLocal_14) {
   var_1_48 = ((((((((var_1_6) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_6) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) > (var_1_52)) ? (((((var_1_6) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_6) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) : (var_1_52)));
  } else {
   if (var_1_27 < stepLocal_15) {
    var_1_48 = ((((((var_1_8 - var_1_40)) < (var_1_58)) ? ((var_1_8 - var_1_40)) : (var_1_58))) + var_1_6);
   }
  }
 } else {
  if (var_1_33 <= var_1_32) {
   if (stepLocal_16 >= (var_1_26 / 4)) {
    var_1_48 = var_1_6;
   }
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 64);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 64);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 1610612734);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 8191);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 3221225470);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 1610612735);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -461168.6018427382800e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 2305843.009213691390e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 4611686.018427382800e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 255);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 63);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 126);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 126);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_59 = var_1_59;
}
int property() {
 return (((((((((((((((((((((((((var_1_2 || var_1_3) ? ((var_1_49 == ((64 + var_1_5) - (var_1_6 + 10))) ? (var_1_1 == ((signed short int) var_1_49)) : 1) : 1) && (((var_1_6 / var_1_5) > var_1_20) ? (var_1_7 == ((unsigned short int) ((var_1_8 - var_1_5) + var_1_6))) : 1)) && ((last_1_var_1_45 <= last_1_var_1_10) ? (var_1_9 == ((signed long int) last_1_var_1_45)) : 1)) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_42)))) && ((var_1_6 >= (var_1_20 ^ var_1_59)) ? (var_1_13 == ((float) ((((var_1_15) > ((var_1_16 - var_1_17))) ? (var_1_15) : ((var_1_16 - var_1_17)))))) : 1)) && (var_1_3 ? ((last_1_var_1_42 != ((3451179663u - var_1_6) * var_1_8)) ? (var_1_18 == ((signed long int) (last_1_var_1_59 - ((var_1_19 - last_1_var_1_28) - var_1_6)))) : 1) : (var_1_18 == ((signed long int) ((((var_1_8) > (((((last_1_var_1_59) < 0 ) ? -(last_1_var_1_59) : (last_1_var_1_59))))) ? (var_1_8) : (((((last_1_var_1_59) < 0 ) ? -(last_1_var_1_59) : (last_1_var_1_59)))))))))) && ((var_1_55 < var_1_22) ? (var_1_20 == ((unsigned short int) ((var_1_5 + ((((var_1_1) > (var_1_6)) ? (var_1_1) : (var_1_6)))) + 16))) : (var_1_2 ? ((4 >= var_1_45) ? (var_1_20 == ((unsigned short int) ((((var_1_21 - (var_1_8 - 16)) < 0 ) ? -(var_1_21 - (var_1_8 - 16)) : (var_1_21 - (var_1_8 - 16)))))) : (var_1_20 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) : (var_1_20 == ((unsigned short int) var_1_8))))) && (var_1_2 ? (var_1_22 == ((unsigned short int) ((var_1_8 - (var_1_23 - var_1_6)) + ((((128) > (var_1_27)) ? (128) : (var_1_27)))))) : (var_1_22 == ((unsigned short int) ((((((((var_1_6) > (var_1_30)) ? (var_1_6) : (var_1_30)))) < (((57988 - var_1_9) - var_1_5))) ? (((((var_1_6) > (var_1_30)) ? (var_1_6) : (var_1_30)))) : (((57988 - var_1_9) - var_1_5)))))))) && ((var_1_2 || (var_1_20 == (var_1_60 >> var_1_60))) ? (var_1_3 ? ((var_1_15 <= var_1_17) ? (var_1_25 == ((unsigned long int) ((var_1_26 - var_1_21) - var_1_23))) : (var_1_25 == ((unsigned long int) (var_1_26 - var_1_60)))) : ((var_1_9 > (var_1_60 / var_1_5)) ? (var_1_25 == ((unsigned long int) var_1_42)) : 1)) : (var_1_25 == ((unsigned long int) var_1_11)))) && (var_1_27 == ((unsigned char) (var_1_6 + var_1_5)))) && ((((((var_1_17) < (var_1_31)) ? (var_1_17) : (var_1_31))) > var_1_15) ? (var_1_28 == ((unsigned long int) ((var_1_6 + var_1_61) + var_1_23))) : (var_1_28 == ((unsigned long int) ((((((var_1_19 - var_1_21)) > (var_1_23)) ? ((var_1_19 - var_1_21)) : (var_1_23))) + ((var_1_29 - var_1_47) - var_1_9)))))) && ((var_1_8 <= (45332 - ((((var_1_27) > (var_1_6)) ? (var_1_27) : (var_1_6))))) ? ((((var_1_8 + 28549) - var_1_47) > (var_1_6 * var_1_23)) ? ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) > var_1_29) ? (var_1_30 == ((unsigned short int) var_1_21)) : (var_1_30 == ((unsigned short int) var_1_47))) : 1) : (var_1_30 == ((unsigned short int) var_1_8)))) && ((var_1_52 == var_1_22) ? ((var_1_26 > ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) ? (var_1_2 ? (var_1_31 == ((float) ((((((((var_1_16 - var_1_17)) < ((var_1_32 + var_1_33))) ? ((var_1_16 - var_1_17)) : ((var_1_32 + var_1_33)))) < 0 ) ? -(((((var_1_16 - var_1_17)) < ((var_1_32 + var_1_33))) ? ((var_1_16 - var_1_17)) : ((var_1_32 + var_1_33)))) : (((((var_1_16 - var_1_17)) < ((var_1_32 + var_1_33))) ? ((var_1_16 - var_1_17)) : ((var_1_32 + var_1_33)))))))) : (var_1_31 == ((float) ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))))) : (var_1_31 == ((float) (((var_1_34 - var_1_35) + var_1_36) - (var_1_37 - ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))))))) : ((var_1_38 < (9.999999999998E11f - var_1_35)) ? ((var_1_51 < (var_1_15 + var_1_35)) ? (var_1_31 == ((float) (((((var_1_32) > (var_1_39)) ? (var_1_32) : (var_1_39))) + ((((var_1_35) < ((var_1_38 - var_1_36))) ? (var_1_35) : ((var_1_38 - var_1_36))))))) : 1) : ((var_1_5 >= (var_1_23 / var_1_40)) ? (var_1_31 == ((float) ((((10.875f) < (var_1_41)) ? (10.875f) : (var_1_41))))) : 1)))) && ((256u <= last_1_var_1_52) ? ((var_1_40 > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) * var_1_26)) ? (var_1_42 == ((unsigned char) ((((((((var_1_6) < ((var_1_5 + var_1_43))) ? (var_1_6) : ((var_1_5 + var_1_43))))) > (var_1_44)) ? (((((var_1_6) < ((var_1_5 + var_1_43))) ? (var_1_6) : ((var_1_5 + var_1_43))))) : (var_1_44))))) : 1) : 1)) && ((((3.5f + var_1_51) / ((((var_1_37) > (var_1_34)) ? (var_1_37) : (var_1_34)))) < var_1_38) ? ((var_1_3 && var_1_2) ? (var_1_45 == ((signed short int) (((((var_1_40 - var_1_18)) > (-1)) ? ((var_1_40 - var_1_18)) : (-1))))) : (var_1_45 == ((signed short int) (var_1_5 + ((((var_1_47) < (var_1_43)) ? (var_1_47) : (var_1_43))))))) : ((var_1_31 >= ((var_1_31 + var_1_39) * var_1_38)) ? (var_1_45 == ((signed short int) (var_1_5 + var_1_47))) : 1))) && (var_1_47 == ((unsigned long int) ((((last_1_var_1_52) < (var_1_40)) ? (last_1_var_1_52) : (var_1_40)))))) && (var_1_2 ? (((var_1_11 % ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) != (var_1_23 & var_1_21)) ? (var_1_48 == ((unsigned short int) ((((((((var_1_6) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_6) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) > (var_1_52)) ? (((((var_1_6) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_6) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) : (var_1_52))))) : ((var_1_27 < var_1_42) ? (var_1_48 == ((unsigned short int) ((((((var_1_8 - var_1_40)) < (var_1_58)) ? ((var_1_8 - var_1_40)) : (var_1_58))) + var_1_6))) : 1)) : ((var_1_33 <= var_1_32) ? ((var_1_27 >= (var_1_26 / 4)) ? (var_1_48 == ((unsigned short int) var_1_6)) : 1) : 1))) && (var_1_49 == ((unsigned long int) ((var_1_19 - var_1_42) + var_1_8)))) && (((var_1_17 - var_1_36) > (var_1_38 / var_1_37)) ? (var_1_51 == ((float) var_1_37)) : (var_1_51 == ((float) var_1_35)))) && ((var_1_1 < var_1_60) ? ((var_1_32 > (- ((((var_1_36) > (var_1_17)) ? (var_1_36) : (var_1_17))))) ? (var_1_52 == ((unsigned char) ((((100) < (var_1_5)) ? (100) : (var_1_5))))) : ((var_1_40 <= var_1_8) ? (var_1_52 == ((unsigned char) (((((var_1_6) > (var_1_43)) ? (var_1_6) : (var_1_43))) + var_1_5))) : (var_1_52 == ((unsigned char) (128 - (var_1_53 - var_1_54)))))) : 1)) && ((var_1_29 >= var_1_40) ? (((var_1_37 - var_1_16) <= ((((255.5f) > (var_1_34)) ? (255.5f) : (var_1_34)))) ? (var_1_55 == ((signed char) (var_1_6 - ((((var_1_54) < (((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57))))) ? (var_1_54) : (((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57))))))))) : (var_1_2 ? (var_1_55 == ((signed char) var_1_6)) : (var_1_55 == ((signed char) var_1_57)))) : (var_1_55 == ((signed char) var_1_57)))) && (var_1_58 == ((signed long int) var_1_52))) && (var_1_59 == ((unsigned long int) var_1_18))) && (var_1_3 ? (var_1_60 == ((signed long int) (last_1_var_1_30 + (last_1_var_1_25 - var_1_43)))) : 1)) && ((var_1_35 < (var_1_16 - var_1_39)) ? (((var_1_47 / var_1_5) < (~ var_1_53)) ? (var_1_61 == ((signed long int) var_1_26)) : (var_1_61 == ((signed long int) var_1_27))) : (var_1_61 == ((signed long int) var_1_56)))
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
