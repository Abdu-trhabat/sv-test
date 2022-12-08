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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 100;
signed long int var_1_8 = -256;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 200;
signed char var_1_14 = 16;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 4;
unsigned char var_1_21 = 0;
double var_1_22 = 255.8;
double var_1_23 = 1.4;
double var_1_24 = 99.3;
double var_1_25 = 4.4;
double var_1_26 = 255.5;
signed char var_1_27 = -5;
signed char var_1_28 = 8;
signed long int var_1_29 = 256;
signed short int var_1_30 = -4;
signed char var_1_31 = 64;
signed char var_1_32 = 32;
signed char var_1_33 = 5;
signed char var_1_34 = 5;
signed char var_1_35 = 10;
float var_1_36 = 24.25;
float var_1_37 = 99.45;
unsigned short int var_1_38 = 50;
unsigned char var_1_39 = 1;
unsigned short int var_1_40 = 25;
signed short int var_1_41 = -16;
float var_1_42 = 1.875;
float var_1_43 = 127.65;
signed short int var_1_44 = 18989;
signed long int var_1_45 = 0;
signed long int var_1_47 = 4;
signed long int var_1_49 = 1323290040;
unsigned long int var_1_50 = 256;
unsigned long int var_1_51 = 2879067185;
unsigned long int var_1_52 = 1000000000;
unsigned long int var_1_53 = 1000000000;
unsigned long int var_1_54 = 4;
unsigned long int var_1_55 = 4;
signed short int var_1_58 = 1;
signed char var_1_59 = -32;
unsigned char last_1_var_1_1 = 4;
signed long int last_1_var_1_8 = -256;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_17 = 0;
unsigned char last_1_var_1_19 = 4;
unsigned char last_1_var_1_21 = 0;
unsigned short int last_1_var_1_38 = 50;
unsigned char last_1_var_1_39 = 1;
signed short int last_1_var_1_41 = -16;
signed long int last_1_var_1_45 = 0;
unsigned long int last_1_var_1_54 = 4;
unsigned long int last_1_var_1_55 = 4;
void initially(void) {
}
void step(void) {
 if ((var_1_37 - ((((var_1_42) > (var_1_43)) ? (var_1_42) : (var_1_43)))) != var_1_24) {
  if (! ((var_1_18 > var_1_15) || last_1_var_1_39)) {
   var_1_41 = ((((((var_1_34 - var_1_14)) < (last_1_var_1_55)) ? ((var_1_34 - var_1_14)) : (last_1_var_1_55))) + ((((var_1_5) > (var_1_16)) ? (var_1_5) : (var_1_16))));
  } else {
   var_1_41 = (((((last_1_var_1_54 - (var_1_44 - last_1_var_1_54))) > (((((((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) < (var_1_5)) ? (((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) : (var_1_5))))) ? ((last_1_var_1_54 - (var_1_44 - last_1_var_1_54))) : (((((((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) < (var_1_5)) ? (((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) : (var_1_5))))));
  }
 } else {
  var_1_41 = ((1 - var_1_15) + var_1_34);
 }
 signed long int stepLocal_4 = ((((var_1_18) > (last_1_var_1_1)) ? (var_1_18) : (last_1_var_1_1))) >> var_1_14;
 if (stepLocal_4 > last_1_var_1_41) {
  var_1_21 = (! var_1_10);
 }
 unsigned char stepLocal_6 = var_1_15;
 if (var_1_16 <= stepLocal_6) {
  if (var_1_21) {
   var_1_31 = 25;
  } else {
   var_1_31 = (((var_1_32 - var_1_33) - (var_1_34 + var_1_35)) + var_1_14);
  }
 } else {
  var_1_31 = var_1_32;
 }
 if (var_1_21) {
  var_1_8 = ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)));
 } else {
  var_1_8 = (25 + var_1_6);
 }
 signed long int stepLocal_1 = (var_1_6 + var_1_14) - var_1_7;
 if (var_1_10) {
  var_1_13 = var_1_7;
 } else {
  if (stepLocal_1 >= (last_1_var_1_8 | ((((last_1_var_1_55) < (var_1_5)) ? (last_1_var_1_55) : (var_1_5))))) {
   var_1_13 = ((var_1_15 + var_1_16) - var_1_6);
  } else {
   var_1_13 = var_1_14;
  }
 }
 signed long int stepLocal_3 = last_1_var_1_19;
 signed long int stepLocal_2 = var_1_5 ^ 50;
 if (last_1_var_1_21) {
  if (var_1_16 >= stepLocal_3) {
   var_1_17 = (((((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_16)) > (var_1_7)) ? ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_16)) : (var_1_7)));
  }
 } else {
  if (var_1_6 != stepLocal_2) {
   var_1_17 = ((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6)));
  } else {
   var_1_17 = (((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6))) + ((((1) > ((var_1_14 + var_1_18))) ? (1) : ((var_1_14 + var_1_18)))));
  }
 }
 if (((last_1_var_1_17 / -2) <= last_1_var_1_41) && last_1_var_1_9) {
  var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
 } else {
  var_1_1 = (var_1_6 + var_1_7);
 }
 if (var_1_11) {
  var_1_12 = var_1_6;
 }
 if (! (var_1_15 > (var_1_7 / var_1_16))) {
  var_1_22 = (((var_1_23 + var_1_24) + var_1_25) + var_1_26);
 }
 var_1_27 = var_1_28;
 if (var_1_21) {
  var_1_36 = (var_1_37 - 500.4f);
 }
 unsigned char stepLocal_7 = var_1_5;
 if (-100 <= stepLocal_7) {
  var_1_39 = (! var_1_10);
 }
 var_1_58 = var_1_15;
 signed char stepLocal_18 = var_1_31;
 signed long int stepLocal_17 = (((((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))));
 if (stepLocal_18 >= var_1_34) {
  if (stepLocal_17 < var_1_13) {
   var_1_59 = (var_1_34 - var_1_32);
  } else {
   var_1_59 = var_1_5;
  }
 } else {
  var_1_59 = var_1_32;
 }
 if (var_1_26 < var_1_22) {
  if (var_1_11) {
   if (((((var_1_12) > (var_1_17)) ? (var_1_12) : (var_1_17))) >= ((((var_1_35) > ((last_1_var_1_38 | var_1_1))) ? (var_1_35) : ((last_1_var_1_38 | var_1_1))))) {
    var_1_38 = (8 + var_1_18);
   }
  }
 }
 unsigned char stepLocal_0 = var_1_58 < var_1_17;
 if (stepLocal_0 && var_1_39) {
  var_1_9 = ((var_1_58 > var_1_17) || var_1_10);
 } else {
  var_1_9 = (! var_1_11);
 }
 if (var_1_9 || var_1_39) {
  var_1_19 = (var_1_14 + ((((var_1_7) > (var_1_16)) ? (var_1_7) : (var_1_16))));
 } else {
  if (var_1_18 != ((((var_1_5) > (var_1_38)) ? (var_1_5) : (var_1_38)))) {
   var_1_19 = (var_1_5 - var_1_6);
  }
 }
 if (var_1_1 != var_1_27) {
  var_1_40 = ((((var_1_14) < (((((((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) < (var_1_38)) ? (((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) : (var_1_38))))) ? (var_1_14) : (((((((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) < (var_1_38)) ? (((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) : (var_1_38))))));
 } else {
  var_1_40 = var_1_32;
 }
 signed long int stepLocal_5 = var_1_59 * (var_1_18 << 1);
 if (((~ 256) * var_1_15) <= stepLocal_5) {
  var_1_29 = (((var_1_8 + 25) - var_1_7) + var_1_16);
 }
 if (! ((var_1_41 > var_1_27) || var_1_9)) {
  var_1_50 = ((((var_1_51 - 1u) < 0 ) ? -(var_1_51 - 1u) : (var_1_51 - 1u)));
 } else {
  if (var_1_9) {
   var_1_50 = (((var_1_52 + var_1_53) - var_1_35) + var_1_1);
  }
 }
 signed long int stepLocal_16 = (-5 / var_1_5) * var_1_40;
 signed long int stepLocal_15 = (var_1_12 + var_1_34) * var_1_8;
 unsigned char stepLocal_14 = var_1_18;
 signed long int stepLocal_13 = (((var_1_35) < (var_1_31)) ? (var_1_35) : (var_1_31));
 if (stepLocal_16 <= var_1_1) {
  if (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) >= stepLocal_14) {
   if ((var_1_17 + (var_1_53 | var_1_15)) > stepLocal_15) {
    if (-16 >= stepLocal_13) {
     if (var_1_39) {
      var_1_55 = ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)));
     }
    } else {
     var_1_55 = var_1_33;
    }
   } else {
    var_1_55 = var_1_7;
   }
  }
 } else {
  var_1_55 = 4u;
 }
 signed long int stepLocal_9 = ~ var_1_16;
 unsigned char stepLocal_8 = var_1_15;
 if (var_1_11) {
  if ((- (var_1_42 * var_1_37)) <= var_1_25) {
   if (stepLocal_8 <= var_1_34) {
    var_1_45 = (var_1_7 - var_1_40);
   } else {
    if ((var_1_40 >> (4 + var_1_47)) > stepLocal_9) {
     var_1_45 = var_1_28;
    } else {
     var_1_45 = (var_1_13 - (var_1_49 - last_1_var_1_45));
    }
   }
  } else {
   var_1_45 = (((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14))) - var_1_7);
  }
 } else {
  var_1_45 = (var_1_44 + (var_1_40 - var_1_32));
 }
 unsigned char stepLocal_12 = var_1_7;
 unsigned char stepLocal_11 = var_1_1;
 signed long int stepLocal_10 = var_1_7 >> var_1_58;
 if (stepLocal_10 < (var_1_38 + var_1_15)) {
  var_1_54 = ((((var_1_7) < (var_1_15)) ? (var_1_7) : (var_1_15)));
 } else {
  if (-25 >= stepLocal_12) {
   if (stepLocal_11 <= last_1_var_1_54) {
    var_1_54 = ((((((var_1_53 + 8u)) < (var_1_45)) ? ((var_1_53 + 8u)) : (var_1_45))) + ((var_1_18 + var_1_32) + var_1_50));
   } else {
    var_1_54 = ((var_1_49 - var_1_47) + var_1_13);
   }
  } else {
   var_1_54 = (var_1_27 + ((((((((var_1_50) > (var_1_49)) ? (var_1_50) : (var_1_49)))) < (var_1_44)) ? (((((var_1_50) > (var_1_49)) ? (var_1_50) : (var_1_49)))) : (var_1_44))));
  }
 }
 if (var_1_27 > (var_1_16 - var_1_6)) {
  var_1_30 = ((var_1_18 + (var_1_40 - var_1_15)) + ((((var_1_54) < (var_1_54)) ? (var_1_54) : (var_1_54))));
 } else {
  if (var_1_14 > var_1_15) {
   var_1_30 = ((((var_1_40) > (var_1_27)) ? (var_1_40) : (var_1_27)));
  } else {
   var_1_30 = (10 - var_1_6);
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 190);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 64);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -115292.1504606845700e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 1152921.504606845700e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -115292.1504606845700e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 1152921.504606845700e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -230584.3009213691390e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -127);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 31);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 31);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 32);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 16383);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 4);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 1073741823);
 assume_abort_if_not(var_1_49 <= 2147483646);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 536870911);
 assume_abort_if_not(var_1_52 <= 1073741824);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 536870912);
 assume_abort_if_not(var_1_53 <= 1073741823);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
}
int property() {
 return ((((((((((((((((((((((((((last_1_var_1_17 / -2) <= last_1_var_1_41) && last_1_var_1_9) ? (var_1_1 == ((unsigned char) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned char) (var_1_6 + var_1_7)))) && (var_1_21 ? (var_1_8 == ((signed long int) ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) : (var_1_8 == ((signed long int) (25 + var_1_6))))) && (((var_1_58 < var_1_17) && var_1_39) ? (var_1_9 == ((unsigned char) ((var_1_58 > var_1_17) || var_1_10))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && (var_1_11 ? (var_1_12 == ((unsigned char) var_1_6)) : 1)) && (var_1_10 ? (var_1_13 == ((unsigned char) var_1_7)) : ((((var_1_6 + var_1_14) - var_1_7) >= (last_1_var_1_8 | ((((last_1_var_1_55) < (var_1_5)) ? (last_1_var_1_55) : (var_1_5))))) ? (var_1_13 == ((unsigned char) ((var_1_15 + var_1_16) - var_1_6))) : (var_1_13 == ((unsigned char) var_1_14))))) && (last_1_var_1_21 ? ((var_1_16 >= last_1_var_1_19) ? (var_1_17 == ((unsigned char) (((((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_16)) > (var_1_7)) ? ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_16)) : (var_1_7))))) : 1) : ((var_1_6 != (var_1_5 ^ 50)) ? (var_1_17 == ((unsigned char) ((((var_1_14) < (var_1_6)) ? (var_1_14) : (var_1_6))))) : (var_1_17 == ((unsigned char) (((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6))) + ((((1) > ((var_1_14 + var_1_18))) ? (1) : ((var_1_14 + var_1_18)))))))))) && ((var_1_9 || var_1_39) ? (var_1_19 == ((unsigned char) (var_1_14 + ((((var_1_7) > (var_1_16)) ? (var_1_7) : (var_1_16)))))) : ((var_1_18 != ((((var_1_5) > (var_1_38)) ? (var_1_5) : (var_1_38)))) ? (var_1_19 == ((unsigned char) (var_1_5 - var_1_6))) : 1))) && (((((((var_1_18) > (last_1_var_1_1)) ? (var_1_18) : (last_1_var_1_1))) >> var_1_14) > last_1_var_1_41) ? (var_1_21 == ((unsigned char) (! var_1_10))) : 1)) && ((! (var_1_15 > (var_1_7 / var_1_16))) ? (var_1_22 == ((double) (((var_1_23 + var_1_24) + var_1_25) + var_1_26))) : 1)) && (var_1_27 == ((signed char) var_1_28))) && ((((~ 256) * var_1_15) <= (var_1_59 * (var_1_18 << 1))) ? (var_1_29 == ((signed long int) (((var_1_8 + 25) - var_1_7) + var_1_16))) : 1)) && ((var_1_27 > (var_1_16 - var_1_6)) ? (var_1_30 == ((signed short int) ((var_1_18 + (var_1_40 - var_1_15)) + ((((var_1_54) < (var_1_54)) ? (var_1_54) : (var_1_54)))))) : ((var_1_14 > var_1_15) ? (var_1_30 == ((signed short int) ((((var_1_40) > (var_1_27)) ? (var_1_40) : (var_1_27))))) : (var_1_30 == ((signed short int) (10 - var_1_6)))))) && ((var_1_16 <= var_1_15) ? (var_1_21 ? (var_1_31 == ((signed char) 25)) : (var_1_31 == ((signed char) (((var_1_32 - var_1_33) - (var_1_34 + var_1_35)) + var_1_14)))) : (var_1_31 == ((signed char) var_1_32)))) && (var_1_21 ? (var_1_36 == ((float) (var_1_37 - 500.4f))) : 1)) && ((var_1_26 < var_1_22) ? (var_1_11 ? ((((((var_1_12) > (var_1_17)) ? (var_1_12) : (var_1_17))) >= ((((var_1_35) > ((last_1_var_1_38 | var_1_1))) ? (var_1_35) : ((last_1_var_1_38 | var_1_1))))) ? (var_1_38 == ((unsigned short int) (8 + var_1_18))) : 1) : 1) : 1)) && ((-100 <= var_1_5) ? (var_1_39 == ((unsigned char) (! var_1_10))) : 1)) && ((var_1_1 != var_1_27) ? (var_1_40 == ((unsigned short int) ((((var_1_14) < (((((((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) < (var_1_38)) ? (((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) : (var_1_38))))) ? (var_1_14) : (((((((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) < (var_1_38)) ? (((((var_1_33) > (var_1_19)) ? (var_1_33) : (var_1_19)))) : (var_1_38)))))))) : (var_1_40 == ((unsigned short int) var_1_32)))) && (((var_1_37 - ((((var_1_42) > (var_1_43)) ? (var_1_42) : (var_1_43)))) != var_1_24) ? ((! ((var_1_18 > var_1_15) || last_1_var_1_39)) ? (var_1_41 == ((signed short int) ((((((var_1_34 - var_1_14)) < (last_1_var_1_55)) ? ((var_1_34 - var_1_14)) : (last_1_var_1_55))) + ((((var_1_5) > (var_1_16)) ? (var_1_5) : (var_1_16)))))) : (var_1_41 == ((signed short int) (((((last_1_var_1_54 - (var_1_44 - last_1_var_1_54))) > (((((((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) < (var_1_5)) ? (((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) : (var_1_5))))) ? ((last_1_var_1_54 - (var_1_44 - last_1_var_1_54))) : (((((((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) < (var_1_5)) ? (((((var_1_7) > (var_1_28)) ? (var_1_7) : (var_1_28)))) : (var_1_5))))))))) : (var_1_41 == ((signed short int) ((1 - var_1_15) + var_1_34))))) && (var_1_11 ? (((- (var_1_42 * var_1_37)) <= var_1_25) ? ((var_1_15 <= var_1_34) ? (var_1_45 == ((signed long int) (var_1_7 - var_1_40))) : (((var_1_40 >> (4 + var_1_47)) > (~ var_1_16)) ? (var_1_45 == ((signed long int) var_1_28)) : (var_1_45 == ((signed long int) (var_1_13 - (var_1_49 - last_1_var_1_45)))))) : (var_1_45 == ((signed long int) (((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14))) - var_1_7)))) : (var_1_45 == ((signed long int) (var_1_44 + (var_1_40 - var_1_32)))))) && ((! ((var_1_41 > var_1_27) || var_1_9)) ? (var_1_50 == ((unsigned long int) ((((var_1_51 - 1u) < 0 ) ? -(var_1_51 - 1u) : (var_1_51 - 1u))))) : (var_1_9 ? (var_1_50 == ((unsigned long int) (((var_1_52 + var_1_53) - var_1_35) + var_1_1))) : 1))) && (((var_1_7 >> var_1_58) < (var_1_38 + var_1_15)) ? (var_1_54 == ((unsigned long int) ((((var_1_7) < (var_1_15)) ? (var_1_7) : (var_1_15))))) : ((-25 >= var_1_7) ? ((var_1_1 <= last_1_var_1_54) ? (var_1_54 == ((unsigned long int) ((((((var_1_53 + 8u)) < (var_1_45)) ? ((var_1_53 + 8u)) : (var_1_45))) + ((var_1_18 + var_1_32) + var_1_50)))) : (var_1_54 == ((unsigned long int) ((var_1_49 - var_1_47) + var_1_13)))) : (var_1_54 == ((unsigned long int) (var_1_27 + ((((((((var_1_50) > (var_1_49)) ? (var_1_50) : (var_1_49)))) < (var_1_44)) ? (((((var_1_50) > (var_1_49)) ? (var_1_50) : (var_1_49)))) : (var_1_44))))))))) && ((((-5 / var_1_5) * var_1_40) <= var_1_1) ? ((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) >= var_1_18) ? (((var_1_17 + (var_1_53 | var_1_15)) > ((var_1_12 + var_1_34) * var_1_8)) ? ((-16 >= ((((var_1_35) < (var_1_31)) ? (var_1_35) : (var_1_31)))) ? (var_1_39 ? (var_1_55 == ((unsigned long int) ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1) : (var_1_55 == ((unsigned long int) var_1_33))) : (var_1_55 == ((unsigned long int) var_1_7))) : 1) : (var_1_55 == ((unsigned long int) 4u)))) && (var_1_58 == ((signed short int) var_1_15))) && ((var_1_31 >= var_1_34) ? ((((((((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) < (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) < var_1_13) ? (var_1_59 == ((signed char) (var_1_34 - var_1_32))) : (var_1_59 == ((signed char) var_1_5))) : (var_1_59 == ((signed char) var_1_32)))
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
