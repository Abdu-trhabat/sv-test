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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 4;
unsigned char var_1_17 = 0;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 1794432927;
unsigned long int var_1_20 = 1243784628;
unsigned long int var_1_21 = 10;
unsigned char var_1_22 = 16;
unsigned char var_1_23 = 32;
unsigned char var_1_24 = 2;
double var_1_25 = 0.7;
unsigned char var_1_26 = 0;
double var_1_27 = 255.5;
double var_1_28 = 1.625;
double var_1_29 = 32.2;
double var_1_30 = 15.62;
double var_1_31 = 8.3;
double var_1_32 = 10.75;
double var_1_33 = 8.6;
unsigned long int var_1_34 = 128;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
signed char var_1_39 = 16;
signed char var_1_40 = 16;
signed char var_1_41 = 8;
signed char var_1_42 = -16;
signed char var_1_43 = -50;
unsigned char var_1_44 = 128;
unsigned short int var_1_45 = 32;
double var_1_46 = 1000000000.4;
double var_1_47 = 49.15;
double var_1_48 = 10000000000.5;
unsigned long int var_1_49 = 8;
signed long int var_1_50 = -200;
unsigned long int var_1_51 = 1000000;
unsigned char var_1_52 = 2;
signed char var_1_53 = 10;
double var_1_54 = 99999999.8;
double var_1_55 = 128.75;
double var_1_56 = 100000000.5;
double var_1_57 = 255.4;
double var_1_58 = 128.54;
double var_1_59 = 25.511;
double var_1_60 = 999.4;
double var_1_61 = 5.25;
unsigned long int var_1_62 = 4267859419;
unsigned char var_1_63 = 5;
unsigned long int var_1_64 = 1;
signed char var_1_65 = 64;
signed char var_1_66 = -10;
double var_1_67 = 0.25;
signed long int var_1_68 = 100000000;
double var_1_69 = 7.25;
signed char var_1_70 = 8;
signed short int var_1_71 = -256;
signed char var_1_72 = 16;
double var_1_73 = 32.625;
unsigned long int var_1_74 = 2;
signed char var_1_75 = -2;
unsigned short int last_1_var_1_11 = 0;
float last_1_var_1_12 = 64.75;
unsigned long int last_1_var_1_15 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_17) {
  if (16u > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) {
   var_1_16 = ((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) + 1366391916u) - var_1_21);
  } else {
   var_1_16 = (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))));
  }
 }
 if (var_1_19 > ((((var_1_18) > ((var_1_16 ^ var_1_20))) ? (var_1_18) : ((var_1_16 ^ var_1_20))))) {
  var_1_22 = (128 - ((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) < (var_1_24)) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : (var_1_24))));
 } else {
  if (var_1_20 >= (var_1_16 & var_1_18)) {
   var_1_22 = var_1_23;
  }
 }
 if (var_1_17 || var_1_26) {
  var_1_25 = ((((63.4) < 0 ) ? -(63.4) : (63.4)));
 } else {
  if (((var_1_27 - var_1_28) + (var_1_29 / var_1_30)) < var_1_31) {
   var_1_25 = ((((var_1_32) < (8.5)) ? (var_1_32) : (8.5)));
  } else {
   if (var_1_19 <= (var_1_20 + 25u)) {
    var_1_25 = var_1_32;
   } else {
    var_1_25 = (var_1_33 - (((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < 0 ) ? -((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) : ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))));
   }
  }
 }
 var_1_34 = var_1_24;
 if (var_1_24 < var_1_34) {
  var_1_35 = (var_1_26 && var_1_36);
 } else {
  if ((((((var_1_21) < (var_1_19)) ? (var_1_21) : (var_1_19))) >= (var_1_34 >> var_1_22)) && (! var_1_26)) {
   if (var_1_30 == var_1_25) {
    var_1_35 = (var_1_17 || (var_1_37 && var_1_38));
   }
  } else {
   var_1_35 = var_1_38;
  }
 }
 if ((- ((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20)))) >= var_1_19) {
  var_1_39 = ((var_1_40 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) + var_1_42);
 }
 if ((var_1_23 * var_1_39) < var_1_19) {
  if (var_1_34 <= (~ var_1_40)) {
   if ((var_1_24 / var_1_19) < var_1_21) {
    var_1_43 = var_1_40;
   } else {
    if (var_1_37 && var_1_36) {
     var_1_43 = var_1_40;
    } else {
     if (var_1_26) {
      var_1_43 = var_1_41;
     }
    }
   }
  } else {
   if (var_1_22 >= (var_1_18 | (var_1_44 - var_1_24))) {
    var_1_43 = var_1_42;
   } else {
    var_1_43 = ((((-5) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (-5) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))));
   }
  }
 }
 if ((var_1_25 >= var_1_31) || (var_1_28 != var_1_27)) {
  if (var_1_26 && var_1_37) {
   var_1_45 = (((((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) > (var_1_40)) ? ((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) : (var_1_40)));
  }
 } else {
  var_1_45 = var_1_40;
 }
 if (var_1_32 >= ((((var_1_29) > ((15.1 - var_1_47))) ? (var_1_29) : ((15.1 - var_1_47))))) {
  var_1_46 = ((((((((var_1_33) > (var_1_32)) ? (var_1_33) : (var_1_32)))) < (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))))) ? (((((var_1_33) > (var_1_32)) ? (var_1_33) : (var_1_32)))) : (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))))));
 }
 if ((var_1_21 % var_1_19) <= var_1_45) {
  if ((var_1_27 - ((((var_1_47) > (var_1_33)) ? (var_1_47) : (var_1_33)))) >= var_1_31) {
   if (var_1_25 >= var_1_31) {
    var_1_49 = var_1_40;
   }
  }
 } else {
  if (var_1_17) {
   if ((~ var_1_20) >= var_1_23) {
    var_1_49 = var_1_44;
   }
  } else {
   var_1_49 = ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)));
  }
 }
 if (var_1_41 > var_1_21) {
  if ((var_1_26 || var_1_37) || var_1_17) {
   var_1_50 = (((((((var_1_41) > (var_1_24)) ? (var_1_41) : (var_1_24))) < 0 ) ? -((((var_1_41) > (var_1_24)) ? (var_1_41) : (var_1_24))) : ((((var_1_41) > (var_1_24)) ? (var_1_41) : (var_1_24)))));
  }
 } else {
  var_1_50 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
 }
 if (var_1_26) {
  if (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) >= var_1_20) {
   var_1_51 = (var_1_45 + var_1_22);
  }
 }
 var_1_52 = (128 - var_1_23);
 if ((100 - ((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19)))) > (var_1_34 * var_1_44)) {
  if (var_1_46 <= (- ((((100.25) < 0 ) ? -(100.25) : (100.25))))) {
   var_1_53 = (((((((var_1_40) > (var_1_42)) ? (var_1_40) : (var_1_42))) < 0 ) ? -((((var_1_40) > (var_1_42)) ? (var_1_40) : (var_1_42))) : ((((var_1_40) > (var_1_42)) ? (var_1_40) : (var_1_42)))));
  } else {
   if (var_1_36) {
    if (var_1_37) {
     var_1_53 = var_1_41;
    } else {
     var_1_53 = ((((var_1_41) > ((var_1_40 + var_1_42))) ? (var_1_41) : ((var_1_40 + var_1_42))));
    }
   }
  }
 } else {
  var_1_53 = var_1_42;
 }
 if (((((var_1_24) < (128u)) ? (var_1_24) : (128u))) == var_1_21) {
  if (((((var_1_32) < (((((var_1_30) > (16.95f)) ? (var_1_30) : (16.95f))))) ? (var_1_32) : (((((var_1_30) > (16.95f)) ? (var_1_30) : (16.95f)))))) <= ((((var_1_47 - var_1_33) < 0 ) ? -(var_1_47 - var_1_33) : (var_1_47 - var_1_33)))) {
   if (var_1_46 <= var_1_25) {
    var_1_54 = var_1_48;
   } else {
    var_1_54 = (var_1_55 + ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))));
   }
  } else {
   var_1_54 = var_1_56;
  }
 }
 if (var_1_28 >= var_1_54) {
  var_1_57 = ((((var_1_55 + var_1_56) < 0 ) ? -(var_1_55 + var_1_56) : (var_1_55 + var_1_56)));
 }
 if (var_1_37) {
  var_1_58 = ((var_1_59 + var_1_60) - var_1_33);
 }
 if ((var_1_52 / ((((-10000) < (var_1_19)) ? (-10000) : (var_1_19)))) >= ((((((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) > ((var_1_62 - var_1_20))) ? (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) : ((var_1_62 - var_1_20))))) {
  var_1_61 = var_1_60;
 }
 var_1_63 = (((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) < 0 ) ? -((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) : ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))));
 if ((var_1_23 - var_1_65) >= var_1_49) {
  var_1_64 = var_1_19;
 } else {
  var_1_64 = var_1_52;
 }
 var_1_66 = var_1_40;
 if (var_1_38) {
  var_1_67 = var_1_60;
 }
 var_1_68 = var_1_23;
 if (var_1_38) {
  var_1_69 = var_1_56;
 }
 if ((var_1_63 + (var_1_65 >> var_1_62)) >= ((((var_1_34) > (var_1_21)) ? (var_1_34) : (var_1_21)))) {
  var_1_70 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 }
 if (var_1_65 != var_1_23) {
  var_1_71 = ((((var_1_52 - var_1_23) < 0 ) ? -(var_1_52 - var_1_23) : (var_1_52 - var_1_23)));
 }
 if (var_1_16 >= (128u / var_1_20)) {
  if (16.35f <= var_1_30) {
   var_1_72 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
  } else {
   var_1_72 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
  }
 } else {
  if (var_1_54 <= var_1_58) {
   var_1_72 = ((((var_1_42) < ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) - var_1_40))) ? (var_1_42) : ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) - var_1_40))));
  }
 }
 if ((var_1_44 * ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) > (var_1_62 * var_1_19)) {
  if ((var_1_69 + var_1_31) > (var_1_56 * 49.25)) {
   var_1_73 = var_1_32;
  } else {
   var_1_73 = 31.4;
  }
 }
 var_1_74 = var_1_45;
 var_1_75 = var_1_42;
 unsigned long int stepLocal_1 = var_1_6 - last_1_var_1_15;
 if (stepLocal_1 < ((last_1_var_1_11 ^ last_1_var_1_15) / ((((-8) > (var_1_5)) ? (-8) : (var_1_5))))) {
  if (last_1_var_1_12 == last_1_var_1_12) {
   var_1_11 = last_1_var_1_15;
  }
 }
 if ((var_1_5 <= var_1_4) && var_1_8) {
  if (var_1_8) {
   var_1_7 = (var_1_6 + ((((5) < (var_1_9)) ? (5) : (var_1_9))));
  } else {
   var_1_7 = ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9)));
  }
 } else {
  if ((-8 * var_1_11) < var_1_4) {
   var_1_7 = 1;
  } else {
   var_1_7 = var_1_9;
  }
 }
 if (128 >= last_1_var_1_15) {
  var_1_15 = (var_1_6 + (var_1_4 + var_1_11));
 } else {
  var_1_15 = var_1_7;
 }
 if (var_1_2 != (var_1_3 / ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) {
  var_1_12 = var_1_14;
 }
 if ((10.8 + var_1_12) <= (- var_1_12)) {
  var_1_1 = (((((1) < (var_1_4)) ? (1) : (var_1_4))) + (var_1_5 - var_1_6));
 }
 unsigned char stepLocal_0 = var_1_4;
 if (-4 >= stepLocal_0) {
  if (var_1_12 == var_1_12) {
   var_1_10 = (var_1_7 + var_1_6);
  } else {
   var_1_10 = var_1_5;
  }
 } else {
  var_1_10 = var_1_4;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741823);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -63);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -63);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 127);
 assume_abort_if_not(var_1_44 <= 255);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854765600e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 2147483647);
 assume_abort_if_not(var_1_62 <= 4294967295);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 127);
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_15 = var_1_15;
}
int property() {
 return (((((((10.8 + var_1_12) <= (- var_1_12)) ? (var_1_1 == ((unsigned char) (((((1) < (var_1_4)) ? (1) : (var_1_4))) + (var_1_5 - var_1_6)))) : 1) && (((var_1_5 <= var_1_4) && var_1_8) ? (var_1_8 ? (var_1_7 == ((signed char) (var_1_6 + ((((5) < (var_1_9)) ? (5) : (var_1_9)))))) : (var_1_7 == ((signed char) ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9)))))) : (((-8 * var_1_11) < var_1_4) ? (var_1_7 == ((signed char) 1)) : (var_1_7 == ((signed char) var_1_9))))) && ((-4 >= var_1_4) ? ((var_1_12 == var_1_12) ? (var_1_10 == ((signed short int) (var_1_7 + var_1_6))) : (var_1_10 == ((signed short int) var_1_5))) : (var_1_10 == ((signed short int) var_1_4)))) && (((var_1_6 - last_1_var_1_15) < ((last_1_var_1_11 ^ last_1_var_1_15) / ((((-8) > (var_1_5)) ? (-8) : (var_1_5))))) ? ((last_1_var_1_12 == last_1_var_1_12) ? (var_1_11 == ((unsigned short int) last_1_var_1_15)) : 1) : 1)) && ((var_1_2 != (var_1_3 / ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (var_1_12 == ((float) var_1_14)) : 1)) && ((128 >= last_1_var_1_15) ? (var_1_15 == ((unsigned long int) (var_1_6 + (var_1_4 + var_1_11)))) : (var_1_15 == ((unsigned long int) var_1_7)))
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
