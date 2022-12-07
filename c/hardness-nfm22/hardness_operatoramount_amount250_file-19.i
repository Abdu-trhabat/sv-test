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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 50;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 100;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 2;
unsigned char var_1_11 = 200;
unsigned char var_1_12 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
float var_1_20 = -0.4;
float var_1_21 = 1.4;
float var_1_22 = 99.25;
float var_1_23 = 4.625;
float var_1_24 = 3.75;
float var_1_25 = 1.5;
float var_1_26 = 99999999.5;
float var_1_27 = 100000.75;
float var_1_28 = 16.4;
float var_1_29 = 10.375;
float var_1_30 = 16.4;
unsigned char var_1_31 = 4;
unsigned short int var_1_32 = 8;
unsigned short int var_1_33 = 17194;
signed short int var_1_34 = 10;
unsigned long int var_1_36 = 64;
unsigned long int var_1_37 = 3245309954;
unsigned long int var_1_38 = 0;
unsigned short int var_1_39 = 34005;
unsigned char var_1_40 = 5;
unsigned long int var_1_41 = 500;
unsigned long int var_1_42 = 0;
unsigned long int var_1_43 = 2070543947;
float var_1_44 = 100000000000000.25;
unsigned long int var_1_45 = 3053584902;
unsigned char var_1_46 = 1;
double var_1_47 = 2.1;
double var_1_48 = 0.0;
unsigned long int var_1_49 = 10;
unsigned long int var_1_51 = 1000000000;
signed char var_1_52 = -10;
signed short int var_1_53 = 128;
signed char var_1_54 = 0;
unsigned char var_1_55 = 32;
signed char var_1_56 = 4;
signed char var_1_58 = -16;
signed char var_1_59 = 0;
unsigned char last_1_var_1_12 = 0;
float last_1_var_1_20 = -0.4;
float last_1_var_1_23 = 4.625;
float last_1_var_1_27 = 100000.75;
unsigned char last_1_var_1_31 = 4;
signed short int last_1_var_1_34 = 10;
unsigned long int last_1_var_1_38 = 0;
unsigned char last_1_var_1_40 = 5;
unsigned char last_1_var_1_46 = 1;
double last_1_var_1_47 = 2.1;
signed short int last_1_var_1_53 = 128;
void initially(void) {
}
void step(void) {
 if (! (var_1_21 > last_1_var_1_23)) {
  if ((var_1_39 - var_1_10) <= (var_1_11 * last_1_var_1_53)) {
   var_1_38 = ((((var_1_9) < ((16u + var_1_7))) ? (var_1_9) : ((16u + var_1_7))));
  } else {
   var_1_38 = last_1_var_1_38;
  }
 }
 unsigned char stepLocal_5 = var_1_11;
 if ((last_1_var_1_31 + var_1_7) > stepLocal_5) {
  var_1_32 = ((var_1_33 + 19944) - ((10000 - last_1_var_1_31) + var_1_8));
 } else {
  var_1_32 = (var_1_8 + (((((last_1_var_1_38 + var_1_10)) > (var_1_33)) ? ((last_1_var_1_38 + var_1_10)) : (var_1_33))));
 }
 unsigned char stepLocal_1 = last_1_var_1_12;
 signed long int stepLocal_0 = last_1_var_1_40;
 if (stepLocal_1 && last_1_var_1_46) {
  if (stepLocal_0 <= ((((last_1_var_1_34) > (last_1_var_1_40)) ? (last_1_var_1_34) : (last_1_var_1_40)))) {
   if (last_1_var_1_46) {
    var_1_1 = (((var_1_7 + var_1_8) - var_1_9) - var_1_10);
   }
  } else {
   var_1_1 = (var_1_8 + var_1_7);
  }
 } else {
  var_1_1 = ((var_1_11 - var_1_9) - var_1_10);
 }
 if ((last_1_var_1_47 * (- last_1_var_1_20)) >= last_1_var_1_27) {
  var_1_12 = (var_1_16 || var_1_17);
 } else {
  if (last_1_var_1_20 >= last_1_var_1_27) {
   var_1_12 = (var_1_18 && var_1_19);
  } else {
   var_1_12 = (var_1_17 || var_1_16);
  }
 }
 if (var_1_12 && var_1_12) {
  var_1_52 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 }
 signed long int stepLocal_2 = 2;
 if ((var_1_8 % var_1_11) <= stepLocal_2) {
  var_1_20 = ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)));
 }
 var_1_31 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 var_1_54 = var_1_11;
 var_1_55 = var_1_11;
 unsigned long int stepLocal_13 = var_1_38 - var_1_11;
 unsigned char stepLocal_12 = var_1_1;
 unsigned char stepLocal_11 = var_1_11;
 if (-10 >= stepLocal_12) {
  if (var_1_1 < stepLocal_11) {
   var_1_40 = var_1_7;
  }
 } else {
  if (stepLocal_13 > var_1_39) {
   var_1_40 = var_1_10;
  }
 }
 signed long int stepLocal_16 = var_1_31 / ((((var_1_33) < (10000)) ? (var_1_33) : (10000)));
 if (stepLocal_16 >= (var_1_7 / var_1_43)) {
  var_1_46 = var_1_16;
 } else {
  var_1_46 = (var_1_16 || ((var_1_12 || var_1_19) && var_1_18));
 }
 if (var_1_46) {
  var_1_27 = ((var_1_28 + var_1_29) - var_1_30);
 } else {
  var_1_27 = ((256.5f - var_1_29) + var_1_25);
 }
 if (var_1_46) {
  var_1_41 = var_1_55;
 }
 if (var_1_32 < var_1_31) {
  if (var_1_18) {
   var_1_47 = ((((var_1_21) < (var_1_29)) ? (var_1_21) : (var_1_29)));
  } else {
   if (25.85 < var_1_25) {
    var_1_47 = ((((var_1_26) > (var_1_30)) ? (var_1_26) : (var_1_30)));
   } else {
    var_1_47 = (var_1_29 - var_1_28);
   }
  }
 } else {
  if (var_1_8 < var_1_41) {
   if (var_1_46) {
    var_1_47 = 4.5;
   } else {
    var_1_47 = ((((((4.3 + var_1_29) - (var_1_48 - var_1_28))) > (((((var_1_22) < (var_1_26)) ? (var_1_22) : (var_1_26))))) ? (((4.3 + var_1_29) - (var_1_48 - var_1_28))) : (((((var_1_22) < (var_1_26)) ? (var_1_22) : (var_1_26))))));
   }
  } else {
   if (! ((var_1_16 || var_1_12) && var_1_12)) {
    var_1_47 = (var_1_30 - (var_1_48 - var_1_29));
   }
  }
 }
 unsigned short int stepLocal_10 = var_1_33;
 unsigned char stepLocal_9 = var_1_31;
 signed long int stepLocal_8 = var_1_8 + (var_1_52 / var_1_7);
 unsigned char stepLocal_7 = var_1_11;
 unsigned short int stepLocal_6 = var_1_33;
 if (var_1_47 >= ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) {
  if (var_1_33 < stepLocal_8) {
   if (last_1_var_1_34 < stepLocal_9) {
    var_1_34 = ((((var_1_9) < (var_1_7)) ? (var_1_9) : (var_1_7)));
   } else {
    var_1_34 = (((((var_1_10 - var_1_8)) < (var_1_11)) ? ((var_1_10 - var_1_8)) : (var_1_11)));
   }
  }
 } else {
  if ((var_1_1 + last_1_var_1_34) > stepLocal_6) {
   if (last_1_var_1_34 >= stepLocal_10) {
    var_1_34 = ((var_1_9 + var_1_52) - (var_1_11 + var_1_7));
   } else {
    var_1_34 = var_1_9;
   }
  } else {
   if (var_1_1 <= stepLocal_7) {
    var_1_34 = -16;
   }
  }
 }
 var_1_36 = ((var_1_37 - var_1_41) - ((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9))));
 signed long int stepLocal_15 = -10;
 signed long int stepLocal_14 = var_1_34 / var_1_8;
 if (var_1_24 < 9.8f) {
  var_1_42 = (var_1_10 + (var_1_43 - var_1_34));
 } else {
  if (stepLocal_15 > var_1_7) {
   if (! (var_1_12 && var_1_19)) {
    var_1_42 = (((((var_1_43 - var_1_32) < 0 ) ? -(var_1_43 - var_1_32) : (var_1_43 - var_1_32))) + var_1_9);
   } else {
    if (var_1_10 != stepLocal_14) {
     var_1_42 = (((((var_1_37) < (3600336302u)) ? (var_1_37) : (3600336302u))) - var_1_9);
    }
   }
  } else {
   if (var_1_22 > (var_1_25 + (var_1_24 / var_1_44))) {
    var_1_42 = (var_1_43 + (var_1_9 + ((((var_1_1) > (var_1_10)) ? (var_1_1) : (var_1_10)))));
   } else {
    var_1_42 = ((((((((var_1_37) < (var_1_45)) ? (var_1_37) : (var_1_45))) < 0 ) ? -((((var_1_37) < (var_1_45)) ? (var_1_37) : (var_1_45))) : ((((var_1_37) < (var_1_45)) ? (var_1_37) : (var_1_45))))) - var_1_7);
   }
  }
 }
 if (var_1_18 || ((- var_1_27) >= (var_1_22 * var_1_47))) {
  if (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) == var_1_42) {
   var_1_56 = (((((var_1_9) < (var_1_58)) ? (var_1_9) : (var_1_58))) + -25);
  }
 } else {
  var_1_56 = var_1_59;
 }
 signed long int stepLocal_4 = ~ var_1_8;
 unsigned char stepLocal_3 = var_1_10;
 if ((- (var_1_7 * var_1_9)) >= stepLocal_3) {
  if (var_1_18) {
   if (var_1_42 != stepLocal_4) {
    var_1_23 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
   } else {
    var_1_23 = (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + (var_1_25 + var_1_26));
   }
  } else {
   if (var_1_27 <= var_1_21) {
    var_1_23 = var_1_26;
   } else {
    var_1_23 = var_1_21;
   }
  }
 } else {
  var_1_23 = var_1_24;
 }
 unsigned char stepLocal_18 = var_1_12;
 signed long int stepLocal_17 = 5;
 if ((var_1_40 <= 2) || stepLocal_18) {
  var_1_49 = (var_1_39 + ((((var_1_11) < (var_1_32)) ? (var_1_11) : (var_1_32))));
 } else {
  if ((var_1_30 - 16.25f) > ((var_1_29 + 3.4f) - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) {
   if ((var_1_42 * ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) >= stepLocal_17) {
    var_1_49 = ((var_1_43 + (1784827551u - var_1_42)) - ((var_1_51 - var_1_10) + 64u));
   } else {
    var_1_49 = ((((var_1_7) > (var_1_33)) ? (var_1_7) : (var_1_33)));
   }
  } else {
   var_1_49 = ((var_1_9 + var_1_31) + var_1_8);
  }
 }
 if (24.5 > var_1_22) {
  if (var_1_43 <= (var_1_49 | var_1_8)) {
   var_1_53 = last_1_var_1_53;
  }
 } else {
  if (var_1_18) {
   var_1_53 = ((((var_1_38) > (var_1_7)) ? (var_1_38) : (var_1_7)));
  } else {
   var_1_53 = var_1_38;
  }
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 95);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 95);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 190);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -230584.3009213691390e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -230584.3009213691390e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 16383);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 3221225470);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65535);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 1073741823);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 assume_abort_if_not(var_1_44 != 0.0F);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 4611686.018427382800e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 536870912);
 assume_abort_if_not(var_1_51 <= 1073741824);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -63);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -127);
 assume_abort_if_not(var_1_59 <= 126);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_53 = var_1_53;
}
int property() {
 return (((((((((((((((((((((last_1_var_1_12 && last_1_var_1_46) ? ((last_1_var_1_40 <= ((((last_1_var_1_34) > (last_1_var_1_40)) ? (last_1_var_1_34) : (last_1_var_1_40)))) ? (last_1_var_1_46 ? (var_1_1 == ((unsigned char) (((var_1_7 + var_1_8) - var_1_9) - var_1_10))) : 1) : (var_1_1 == ((unsigned char) (var_1_8 + var_1_7)))) : (var_1_1 == ((unsigned char) ((var_1_11 - var_1_9) - var_1_10)))) && (((last_1_var_1_47 * (- last_1_var_1_20)) >= last_1_var_1_27) ? (var_1_12 == ((unsigned char) (var_1_16 || var_1_17))) : ((last_1_var_1_20 >= last_1_var_1_27) ? (var_1_12 == ((unsigned char) (var_1_18 && var_1_19))) : (var_1_12 == ((unsigned char) (var_1_17 || var_1_16)))))) && (((var_1_8 % var_1_11) <= 2) ? (var_1_20 == ((float) ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))) : 1)) && (((- (var_1_7 * var_1_9)) >= var_1_10) ? (var_1_18 ? ((var_1_42 != (~ var_1_8)) ? (var_1_23 == ((float) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) : (var_1_23 == ((float) (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + (var_1_25 + var_1_26))))) : ((var_1_27 <= var_1_21) ? (var_1_23 == ((float) var_1_26)) : (var_1_23 == ((float) var_1_21)))) : (var_1_23 == ((float) var_1_24)))) && (var_1_46 ? (var_1_27 == ((float) ((var_1_28 + var_1_29) - var_1_30))) : (var_1_27 == ((float) ((256.5f - var_1_29) + var_1_25))))) && (var_1_31 == ((unsigned char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) && (((last_1_var_1_31 + var_1_7) > var_1_11) ? (var_1_32 == ((unsigned short int) ((var_1_33 + 19944) - ((10000 - last_1_var_1_31) + var_1_8)))) : (var_1_32 == ((unsigned short int) (var_1_8 + (((((last_1_var_1_38 + var_1_10)) > (var_1_33)) ? ((last_1_var_1_38 + var_1_10)) : (var_1_33)))))))) && ((var_1_47 >= ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) ? ((var_1_33 < (var_1_8 + (var_1_52 / var_1_7))) ? ((last_1_var_1_34 < var_1_31) ? (var_1_34 == ((signed short int) ((((var_1_9) < (var_1_7)) ? (var_1_9) : (var_1_7))))) : (var_1_34 == ((signed short int) (((((var_1_10 - var_1_8)) < (var_1_11)) ? ((var_1_10 - var_1_8)) : (var_1_11)))))) : 1) : (((var_1_1 + last_1_var_1_34) > var_1_33) ? ((last_1_var_1_34 >= var_1_33) ? (var_1_34 == ((signed short int) ((var_1_9 + var_1_52) - (var_1_11 + var_1_7)))) : (var_1_34 == ((signed short int) var_1_9))) : ((var_1_1 <= var_1_11) ? (var_1_34 == ((signed short int) -16)) : 1)))) && (var_1_36 == ((unsigned long int) ((var_1_37 - var_1_41) - ((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9))))))) && ((! (var_1_21 > last_1_var_1_23)) ? (((var_1_39 - var_1_10) <= (var_1_11 * last_1_var_1_53)) ? (var_1_38 == ((unsigned long int) ((((var_1_9) < ((16u + var_1_7))) ? (var_1_9) : ((16u + var_1_7)))))) : (var_1_38 == ((unsigned long int) last_1_var_1_38))) : 1)) && ((-10 >= var_1_1) ? ((var_1_1 < var_1_11) ? (var_1_40 == ((unsigned char) var_1_7)) : 1) : (((var_1_38 - var_1_11) > var_1_39) ? (var_1_40 == ((unsigned char) var_1_10)) : 1))) && (var_1_46 ? (var_1_41 == ((unsigned long int) var_1_55)) : 1)) && ((var_1_24 < 9.8f) ? (var_1_42 == ((unsigned long int) (var_1_10 + (var_1_43 - var_1_34)))) : ((-10 > var_1_7) ? ((! (var_1_12 && var_1_19)) ? (var_1_42 == ((unsigned long int) (((((var_1_43 - var_1_32) < 0 ) ? -(var_1_43 - var_1_32) : (var_1_43 - var_1_32))) + var_1_9))) : ((var_1_10 != (var_1_34 / var_1_8)) ? (var_1_42 == ((unsigned long int) (((((var_1_37) < (3600336302u)) ? (var_1_37) : (3600336302u))) - var_1_9))) : 1)) : ((var_1_22 > (var_1_25 + (var_1_24 / var_1_44))) ? (var_1_42 == ((unsigned long int) (var_1_43 + (var_1_9 + ((((var_1_1) > (var_1_10)) ? (var_1_1) : (var_1_10))))))) : (var_1_42 == ((unsigned long int) ((((((((var_1_37) < (var_1_45)) ? (var_1_37) : (var_1_45))) < 0 ) ? -((((var_1_37) < (var_1_45)) ? (var_1_37) : (var_1_45))) : ((((var_1_37) < (var_1_45)) ? (var_1_37) : (var_1_45))))) - var_1_7))))))) && (((var_1_31 / ((((var_1_33) < (10000)) ? (var_1_33) : (10000)))) >= (var_1_7 / var_1_43)) ? (var_1_46 == ((unsigned char) var_1_16)) : (var_1_46 == ((unsigned char) (var_1_16 || ((var_1_12 || var_1_19) && var_1_18)))))) && ((var_1_32 < var_1_31) ? (var_1_18 ? (var_1_47 == ((double) ((((var_1_21) < (var_1_29)) ? (var_1_21) : (var_1_29))))) : ((25.85 < var_1_25) ? (var_1_47 == ((double) ((((var_1_26) > (var_1_30)) ? (var_1_26) : (var_1_30))))) : (var_1_47 == ((double) (var_1_29 - var_1_28))))) : ((var_1_8 < var_1_41) ? (var_1_46 ? (var_1_47 == ((double) 4.5)) : (var_1_47 == ((double) ((((((4.3 + var_1_29) - (var_1_48 - var_1_28))) > (((((var_1_22) < (var_1_26)) ? (var_1_22) : (var_1_26))))) ? (((4.3 + var_1_29) - (var_1_48 - var_1_28))) : (((((var_1_22) < (var_1_26)) ? (var_1_22) : (var_1_26))))))))) : ((! ((var_1_16 || var_1_12) && var_1_12)) ? (var_1_47 == ((double) (var_1_30 - (var_1_48 - var_1_29)))) : 1)))) && (((var_1_40 <= 2) || var_1_12) ? (var_1_49 == ((unsigned long int) (var_1_39 + ((((var_1_11) < (var_1_32)) ? (var_1_11) : (var_1_32)))))) : (((var_1_30 - 16.25f) > ((var_1_29 + 3.4f) - ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (((var_1_42 * ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) >= 5) ? (var_1_49 == ((unsigned long int) ((var_1_43 + (1784827551u - var_1_42)) - ((var_1_51 - var_1_10) + 64u)))) : (var_1_49 == ((unsigned long int) ((((var_1_7) > (var_1_33)) ? (var_1_7) : (var_1_33)))))) : (var_1_49 == ((unsigned long int) ((var_1_9 + var_1_31) + var_1_8)))))) && ((var_1_12 && var_1_12) ? (var_1_52 == ((signed char) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : 1)) && ((24.5 > var_1_22) ? ((var_1_43 <= (var_1_49 | var_1_8)) ? (var_1_53 == ((signed short int) last_1_var_1_53)) : 1) : (var_1_18 ? (var_1_53 == ((signed short int) ((((var_1_38) > (var_1_7)) ? (var_1_38) : (var_1_7))))) : (var_1_53 == ((signed short int) var_1_38))))) && (var_1_54 == ((signed char) var_1_11))) && (var_1_55 == ((unsigned char) var_1_11))) && ((var_1_18 || ((- var_1_27) >= (var_1_22 * var_1_47))) ? ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) == var_1_42) ? (var_1_56 == ((signed char) (((((var_1_9) < (var_1_58)) ? (var_1_9) : (var_1_58))) + -25))) : 1) : (var_1_56 == ((signed char) var_1_59)))
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
