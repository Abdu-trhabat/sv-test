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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_8 = 10;
signed char var_1_10 = 64;
signed char var_1_11 = 10;
signed char var_1_12 = 8;
signed char var_1_13 = 0;
signed char var_1_14 = -8;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
signed char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
signed short int var_1_20 = -128;
float var_1_21 = 32.5;
float var_1_22 = 99999.25;
signed short int var_1_23 = 64;
signed long int var_1_24 = -4;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 100;
double var_1_27 = 32.4;
double var_1_28 = 0.0;
double var_1_29 = 31.5;
double var_1_30 = 49.5;
double var_1_31 = 256.3;
double var_1_32 = 4.4;
double var_1_33 = 8.8;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 17182;
unsigned short int var_1_36 = 31875;
signed long int var_1_37 = 1253842326;
signed long int var_1_38 = 0;
double var_1_39 = 256.8;
signed short int var_1_40 = 32;
signed char var_1_41 = -100;
signed char var_1_42 = -4;
double var_1_43 = 63.75;
double var_1_44 = 0.0;
double var_1_45 = 0.0;
signed char var_1_46 = -128;
signed char var_1_47 = 16;
signed char var_1_48 = 50;
unsigned long int var_1_49 = 5;
float var_1_52 = 8.15;
float var_1_55 = 9.8;
float var_1_56 = 999.6;
signed long int var_1_57 = -16;
float var_1_58 = 1.125;
float var_1_59 = 63.8;
float var_1_60 = 10000000000000.25;
float var_1_61 = 5.45;
unsigned short int var_1_62 = 2;
unsigned char last_1_var_1_15 = 0;
signed short int last_1_var_1_20 = -128;
float last_1_var_1_21 = 32.5;
unsigned long int last_1_var_1_49 = 5;
float last_1_var_1_52 = 8.15;
float last_1_var_1_60 = 10000000000000.25;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_15) {
  var_1_27 = ((var_1_28 - var_1_29) - ((4.1406872328101468E18 - var_1_30) + var_1_31));
 } else {
  if (var_1_31 == ((((var_1_22) > ((last_1_var_1_60 + last_1_var_1_21))) ? (var_1_22) : ((last_1_var_1_60 + last_1_var_1_21))))) {
   var_1_27 = (((((var_1_30 + var_1_29)) < ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28))))) ? ((var_1_30 + var_1_29)) : ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28))))));
  } else {
   var_1_27 = (((((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) > (2.75)) ? ((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) : (2.75)));
  }
 }
 if (last_1_var_1_52 > last_1_var_1_52) {
  var_1_15 = ((last_1_var_1_52 == 31.65) || var_1_16);
 }
 if (var_1_16) {
  var_1_18 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 } else {
  var_1_18 = (var_1_19 - 64);
 }
 var_1_20 = (var_1_13 - ((var_1_11 + 50) + ((((last_1_var_1_20) > (var_1_19)) ? (last_1_var_1_20) : (var_1_19)))));
 var_1_24 = -100;
 if (var_1_16) {
  var_1_25 = ((((var_1_11) > ((var_1_19 - (64 - var_1_8)))) ? (var_1_11) : ((var_1_19 - (64 - var_1_8)))));
 } else {
  var_1_25 = (var_1_19 - ((((var_1_10) > (var_1_26)) ? (var_1_10) : (var_1_26))));
 }
 unsigned char stepLocal_5 = var_1_19;
 if (var_1_15) {
  var_1_43 = ((var_1_31 + var_1_30) - ((var_1_44 + var_1_45) - var_1_29));
 } else {
  if (stepLocal_5 <= var_1_8) {
   if (var_1_15) {
    var_1_43 = ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) > (var_1_29)) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (var_1_29)));
   } else {
    var_1_43 = (((((var_1_28 - var_1_30) < 0 ) ? -(var_1_28 - var_1_30) : (var_1_28 - var_1_30))) - (var_1_45 + var_1_29));
   }
  } else {
   var_1_43 = (((((0.625 + (var_1_30 - var_1_44))) > (var_1_29)) ? ((0.625 + (var_1_30 - var_1_44))) : (var_1_29)));
  }
 }
 if (var_1_15) {
  var_1_46 = (32 + ((((var_1_8) > ((var_1_47 - var_1_48))) ? (var_1_8) : ((var_1_47 - var_1_48)))));
 }
 var_1_57 = var_1_8;
 if (var_1_15) {
  var_1_58 = (var_1_59 - 128.4f);
 } else {
  var_1_58 = ((((var_1_31) < (var_1_29)) ? (var_1_31) : (var_1_29)));
 }
 var_1_60 = (var_1_30 - ((var_1_44 - var_1_61) + 0.8f));
 var_1_62 = var_1_13;
 unsigned char stepLocal_1 = var_1_15;
 if (! var_1_15) {
  var_1_23 = ((((var_1_8) < (var_1_20)) ? (var_1_8) : (var_1_20)));
 } else {
  if (stepLocal_1 || (var_1_10 > var_1_13)) {
   var_1_23 = ((var_1_19 + 2) - var_1_10);
  } else {
   var_1_23 = var_1_19;
  }
 }
 unsigned char stepLocal_8 = var_1_15;
 signed short int stepLocal_7 = var_1_20;
 signed char stepLocal_6 = var_1_47;
 if (stepLocal_8 || var_1_15) {
  if (stepLocal_6 >= var_1_23) {
   if (-100 < stepLocal_7) {
    var_1_52 = (((((((((var_1_30 - var_1_45)) > ((var_1_29 - var_1_28))) ? ((var_1_30 - var_1_45)) : ((var_1_29 - var_1_28))))) > ((var_1_44 + (var_1_55 + var_1_56)))) ? ((((((var_1_30 - var_1_45)) > ((var_1_29 - var_1_28))) ? ((var_1_30 - var_1_45)) : ((var_1_29 - var_1_28))))) : ((var_1_44 + (var_1_55 + var_1_56)))));
   } else {
    var_1_52 = (var_1_31 - 4.8f);
   }
  }
 }
 if (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) == (var_1_13 + var_1_10)) {
  if ((var_1_23 * 256) >= var_1_11) {
   var_1_17 = (((((var_1_12 - var_1_10)) > (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5)))))))) ? ((var_1_12 - var_1_10)) : (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5)))))))));
  } else {
   var_1_17 = var_1_13;
  }
 }
 signed long int stepLocal_4 = var_1_14 >> var_1_37;
 signed long int stepLocal_3 = (var_1_35 + var_1_36) - ((((64) < (var_1_62)) ? (64) : (var_1_62)));
 if (stepLocal_3 <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) {
  if ((var_1_11 / var_1_36) < stepLocal_4) {
   var_1_34 = ((((var_1_11) < (var_1_36)) ? (var_1_11) : (var_1_36)));
  } else {
   var_1_34 = ((((var_1_8) > (32)) ? (var_1_8) : (32)));
  }
 } else {
  var_1_34 = ((((var_1_11) > (var_1_62)) ? (var_1_11) : (var_1_62)));
 }
 if (var_1_60 <= (var_1_58 * var_1_30)) {
  var_1_40 = (var_1_62 - var_1_11);
 } else {
  if (var_1_15) {
   var_1_40 = (((((var_1_26) > ((256 + var_1_62))) ? (var_1_26) : ((256 + var_1_62)))) - var_1_11);
  } else {
   var_1_40 = (128 - var_1_11);
  }
 }
 if ((var_1_29 / ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < ((var_1_27 + var_1_32) + var_1_22)) {
  if (var_1_15) {
   var_1_41 = -8;
  }
 } else {
  if ((- var_1_17) >= ((var_1_24 + var_1_20) * (var_1_13 + -100))) {
   if (! ((var_1_19 - var_1_13) > var_1_36)) {
    var_1_41 = (var_1_8 + var_1_42);
   } else {
    var_1_41 = (var_1_8 - (32 + 8));
   }
  } else {
   var_1_41 = (var_1_42 + var_1_8);
  }
 }
 if ((last_1_var_1_49 * var_1_62) <= var_1_41) {
  if (var_1_43 <= var_1_60) {
   var_1_49 = (((((var_1_10) < (var_1_36)) ? (var_1_10) : (var_1_36))) + var_1_8);
  } else {
   if ((last_1_var_1_49 * var_1_11) < var_1_19) {
    var_1_49 = ((((((var_1_35 + var_1_47)) > (var_1_8)) ? ((var_1_35 + var_1_47)) : (var_1_8))) + var_1_19);
   } else {
    var_1_49 = var_1_36;
   }
  }
 } else {
  if (var_1_28 <= var_1_58) {
   var_1_49 = ((((var_1_48) > (var_1_8)) ? (var_1_48) : (var_1_8)));
  } else {
   var_1_49 = ((((var_1_37) < (((((var_1_62) < ((var_1_35 + var_1_62))) ? (var_1_62) : ((var_1_35 + var_1_62)))))) ? (var_1_37) : (((((var_1_62) < ((var_1_35 + var_1_62))) ? (var_1_62) : ((var_1_35 + var_1_62)))))));
  }
 }
 unsigned char stepLocal_2 = var_1_27 > var_1_30;
 if ((var_1_15 || (var_1_23 > var_1_8)) && stepLocal_2) {
  var_1_33 = (var_1_31 - var_1_29);
 } else {
  var_1_33 = (var_1_31 + var_1_30);
 }
 if (((((var_1_28) > ((var_1_32 + 63.125))) ? (var_1_28) : ((var_1_32 + 63.125)))) <= (var_1_22 / var_1_39)) {
  if ((var_1_29 / ((((var_1_39) < (var_1_28)) ? (var_1_39) : (var_1_28)))) >= (var_1_32 * var_1_33)) {
   var_1_38 = var_1_10;
  }
 } else {
  var_1_38 = var_1_36;
 }
 if ((4.5 / 9999.5) > ((((var_1_33) > (var_1_27)) ? (var_1_33) : (var_1_27)))) {
  var_1_21 = 4.6f;
 } else {
  if (var_1_15) {
   var_1_21 = var_1_22;
  } else {
   var_1_21 = ((((var_1_22) < (64.8f)) ? (var_1_22) : (64.8f)));
  }
 }
 unsigned char stepLocal_0 = var_1_15;
 if (var_1_21 > var_1_52) {
  if (var_1_52 < var_1_21) {
   if (((var_1_15 || var_1_15) && var_1_15) && stepLocal_0) {
    var_1_1 = (8 - (64 - var_1_8));
   } else {
    if (var_1_60 <= (var_1_52 / 15.8)) {
     var_1_1 = -4;
    } else {
     var_1_1 = ((((((var_1_10 - var_1_8) - var_1_11)) > ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14))))) ? (((var_1_10 - var_1_8) - var_1_11)) : ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14))))));
    }
   }
  }
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 62);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 4611686.018427382800e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 16383);
 assume_abort_if_not(var_1_35 <= 32768);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 16384);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 1073741823);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 assume_abort_if_not(var_1_39 != 0.0F);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -63);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 2305843.009213691390e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 2305843.009213691390e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691390e+12F && var_1_61 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_60 = var_1_60;
}
int property() {
 return (((((((((((((((((((((((var_1_21 > var_1_52) ? ((var_1_52 < var_1_21) ? ((((var_1_15 || var_1_15) && var_1_15) && var_1_15) ? (var_1_1 == ((signed char) (8 - (64 - var_1_8)))) : ((var_1_60 <= (var_1_52 / 15.8)) ? (var_1_1 == ((signed char) -4)) : (var_1_1 == ((signed char) ((((((var_1_10 - var_1_8) - var_1_11)) > ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14))))) ? (((var_1_10 - var_1_8) - var_1_11)) : ((((((var_1_12 - var_1_13)) < (var_1_14)) ? ((var_1_12 - var_1_13)) : (var_1_14)))))))))) : 1) : 1) && ((last_1_var_1_52 > last_1_var_1_52) ? (var_1_15 == ((unsigned char) ((last_1_var_1_52 == 31.65) || var_1_16))) : 1)) && ((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) == (var_1_13 + var_1_10)) ? (((var_1_23 * 256) >= var_1_11) ? (var_1_17 == ((signed char) (((((var_1_12 - var_1_10)) > (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5)))))))) ? ((var_1_12 - var_1_10)) : (((((var_1_14) < (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))) ? (var_1_14) : (((((var_1_8) < (-5)) ? (var_1_8) : (-5))))))))))) : (var_1_17 == ((signed char) var_1_13))) : 1)) && (var_1_16 ? (var_1_18 == ((unsigned char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : (var_1_18 == ((unsigned char) (var_1_19 - 64))))) && (var_1_20 == ((signed short int) (var_1_13 - ((var_1_11 + 50) + ((((last_1_var_1_20) > (var_1_19)) ? (last_1_var_1_20) : (var_1_19)))))))) && (((4.5 / 9999.5) > ((((var_1_33) > (var_1_27)) ? (var_1_33) : (var_1_27)))) ? (var_1_21 == ((float) 4.6f)) : (var_1_15 ? (var_1_21 == ((float) var_1_22)) : (var_1_21 == ((float) ((((var_1_22) < (64.8f)) ? (var_1_22) : (64.8f)))))))) && ((! var_1_15) ? (var_1_23 == ((signed short int) ((((var_1_8) < (var_1_20)) ? (var_1_8) : (var_1_20))))) : ((var_1_15 || (var_1_10 > var_1_13)) ? (var_1_23 == ((signed short int) ((var_1_19 + 2) - var_1_10))) : (var_1_23 == ((signed short int) var_1_19))))) && (var_1_24 == ((signed long int) -100))) && (var_1_16 ? (var_1_25 == ((unsigned char) ((((var_1_11) > ((var_1_19 - (64 - var_1_8)))) ? (var_1_11) : ((var_1_19 - (64 - var_1_8))))))) : (var_1_25 == ((unsigned char) (var_1_19 - ((((var_1_10) > (var_1_26)) ? (var_1_10) : (var_1_26)))))))) && (last_1_var_1_15 ? (var_1_27 == ((double) ((var_1_28 - var_1_29) - ((4.1406872328101468E18 - var_1_30) + var_1_31)))) : ((var_1_31 == ((((var_1_22) > ((last_1_var_1_60 + last_1_var_1_21))) ? (var_1_22) : ((last_1_var_1_60 + last_1_var_1_21))))) ? (var_1_27 == ((double) (((((var_1_30 + var_1_29)) < ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28))))) ? ((var_1_30 + var_1_29)) : ((((((var_1_31 + var_1_32)) < (var_1_28)) ? ((var_1_31 + var_1_32)) : (var_1_28)))))))) : (var_1_27 == ((double) (((((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) > (2.75)) ? ((((((var_1_28 - var_1_30)) < ((var_1_31 - var_1_29))) ? ((var_1_28 - var_1_30)) : ((var_1_31 - var_1_29))))) : (2.75)))))))) && (((var_1_15 || (var_1_23 > var_1_8)) && (var_1_27 > var_1_30)) ? (var_1_33 == ((double) (var_1_31 - var_1_29))) : (var_1_33 == ((double) (var_1_31 + var_1_30))))) && ((((var_1_35 + var_1_36) - ((((64) < (var_1_62)) ? (64) : (var_1_62)))) <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) ? (((var_1_11 / var_1_36) < (var_1_14 >> var_1_37)) ? (var_1_34 == ((unsigned short int) ((((var_1_11) < (var_1_36)) ? (var_1_11) : (var_1_36))))) : (var_1_34 == ((unsigned short int) ((((var_1_8) > (32)) ? (var_1_8) : (32)))))) : (var_1_34 == ((unsigned short int) ((((var_1_11) > (var_1_62)) ? (var_1_11) : (var_1_62))))))) && ((((((var_1_28) > ((var_1_32 + 63.125))) ? (var_1_28) : ((var_1_32 + 63.125)))) <= (var_1_22 / var_1_39)) ? (((var_1_29 / ((((var_1_39) < (var_1_28)) ? (var_1_39) : (var_1_28)))) >= (var_1_32 * var_1_33)) ? (var_1_38 == ((signed long int) var_1_10)) : 1) : (var_1_38 == ((signed long int) var_1_36)))) && ((var_1_60 <= (var_1_58 * var_1_30)) ? (var_1_40 == ((signed short int) (var_1_62 - var_1_11))) : (var_1_15 ? (var_1_40 == ((signed short int) (((((var_1_26) > ((256 + var_1_62))) ? (var_1_26) : ((256 + var_1_62)))) - var_1_11))) : (var_1_40 == ((signed short int) (128 - var_1_11)))))) && (((var_1_29 / ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < ((var_1_27 + var_1_32) + var_1_22)) ? (var_1_15 ? (var_1_41 == ((signed char) -8)) : 1) : (((- var_1_17) >= ((var_1_24 + var_1_20) * (var_1_13 + -100))) ? ((! ((var_1_19 - var_1_13) > var_1_36)) ? (var_1_41 == ((signed char) (var_1_8 + var_1_42))) : (var_1_41 == ((signed char) (var_1_8 - (32 + 8))))) : (var_1_41 == ((signed char) (var_1_42 + var_1_8)))))) && (var_1_15 ? (var_1_43 == ((double) ((var_1_31 + var_1_30) - ((var_1_44 + var_1_45) - var_1_29)))) : ((var_1_19 <= var_1_8) ? (var_1_15 ? (var_1_43 == ((double) ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) > (var_1_29)) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (var_1_29))))) : (var_1_43 == ((double) (((((var_1_28 - var_1_30) < 0 ) ? -(var_1_28 - var_1_30) : (var_1_28 - var_1_30))) - (var_1_45 + var_1_29))))) : (var_1_43 == ((double) (((((0.625 + (var_1_30 - var_1_44))) > (var_1_29)) ? ((0.625 + (var_1_30 - var_1_44))) : (var_1_29)))))))) && (var_1_15 ? (var_1_46 == ((signed char) (32 + ((((var_1_8) > ((var_1_47 - var_1_48))) ? (var_1_8) : ((var_1_47 - var_1_48))))))) : 1)) && (((last_1_var_1_49 * var_1_62) <= var_1_41) ? ((var_1_43 <= var_1_60) ? (var_1_49 == ((unsigned long int) (((((var_1_10) < (var_1_36)) ? (var_1_10) : (var_1_36))) + var_1_8))) : (((last_1_var_1_49 * var_1_11) < var_1_19) ? (var_1_49 == ((unsigned long int) ((((((var_1_35 + var_1_47)) > (var_1_8)) ? ((var_1_35 + var_1_47)) : (var_1_8))) + var_1_19))) : (var_1_49 == ((unsigned long int) var_1_36)))) : ((var_1_28 <= var_1_58) ? (var_1_49 == ((unsigned long int) ((((var_1_48) > (var_1_8)) ? (var_1_48) : (var_1_8))))) : (var_1_49 == ((unsigned long int) ((((var_1_37) < (((((var_1_62) < ((var_1_35 + var_1_62))) ? (var_1_62) : ((var_1_35 + var_1_62)))))) ? (var_1_37) : (((((var_1_62) < ((var_1_35 + var_1_62))) ? (var_1_62) : ((var_1_35 + var_1_62)))))))))))) && ((var_1_15 || var_1_15) ? ((var_1_47 >= var_1_23) ? ((-100 < var_1_20) ? (var_1_52 == ((float) (((((((((var_1_30 - var_1_45)) > ((var_1_29 - var_1_28))) ? ((var_1_30 - var_1_45)) : ((var_1_29 - var_1_28))))) > ((var_1_44 + (var_1_55 + var_1_56)))) ? ((((((var_1_30 - var_1_45)) > ((var_1_29 - var_1_28))) ? ((var_1_30 - var_1_45)) : ((var_1_29 - var_1_28))))) : ((var_1_44 + (var_1_55 + var_1_56))))))) : (var_1_52 == ((float) (var_1_31 - 4.8f)))) : 1) : 1)) && (var_1_57 == ((signed long int) var_1_8))) && (var_1_15 ? (var_1_58 == ((float) (var_1_59 - 128.4f))) : (var_1_58 == ((float) ((((var_1_31) < (var_1_29)) ? (var_1_31) : (var_1_29))))))) && (var_1_60 == ((float) (var_1_30 - ((var_1_44 - var_1_61) + 0.8f))))) && (var_1_62 == ((unsigned short int) var_1_13))
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
