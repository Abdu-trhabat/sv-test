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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch81Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
float var_1_9 = 32.6;
signed long int var_1_10 = 10;
float var_1_12 = 31.2;
float var_1_13 = 256.4;
signed char var_1_14 = 5;
signed char var_1_15 = -4;
signed char var_1_16 = 25;
signed char var_1_17 = 10;
signed char var_1_18 = 25;
double var_1_19 = 25.65;
signed short int var_1_20 = -16;
unsigned char var_1_21 = 25;
float var_1_22 = 49.8;
signed long int var_1_23 = 100000;
unsigned char var_1_24 = 1;
unsigned short int var_1_25 = 10;
double var_1_26 = 64.25;
double var_1_27 = 10.2;
double var_1_28 = 500.25;
double var_1_29 = -0.6;
double var_1_30 = 256.75;
double var_1_31 = 10000.8;
double var_1_32 = 10.4;
double var_1_33 = 32.4;
double var_1_34 = 50.5;
double var_1_35 = 50.1;
double var_1_36 = 9999999999.25;
double var_1_38 = 49.6;
unsigned char var_1_39 = 8;
signed char var_1_40 = 50;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 10;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
float var_1_50 = 3.875;
unsigned long int var_1_51 = 16;
unsigned long int var_1_52 = 3123193878;
double var_1_53 = 7.5;
signed long int var_1_54 = -256;
double var_1_55 = 15.6;
unsigned short int var_1_57 = 4;
unsigned short int var_1_58 = 34045;
float var_1_59 = 4.25;
signed char var_1_60 = -16;
double var_1_61 = 50.5;
unsigned long int var_1_62 = 8;
signed long int last_1_var_1_1 = 128;
unsigned char last_1_var_1_21 = 25;
unsigned char last_1_var_1_24 = 1;
unsigned short int last_1_var_1_25 = 10;
double last_1_var_1_27 = 10.2;
double last_1_var_1_36 = 9999999999.25;
unsigned char last_1_var_1_39 = 8;
unsigned char last_1_var_1_42 = 10;
unsigned char last_1_var_1_44 = 0;
unsigned long int last_1_var_1_51 = 16;
double last_1_var_1_53 = 7.5;
signed long int last_1_var_1_54 = -256;
unsigned short int last_1_var_1_57 = 4;
unsigned long int last_1_var_1_62 = 8;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_44 && last_1_var_1_44) {
  var_1_14 = ((((var_1_15) > ((var_1_16 + (var_1_17 - var_1_18)))) ? (var_1_15) : ((var_1_16 + (var_1_17 - var_1_18)))));
 }
 if (var_1_14 >= (var_1_41 - (64 - var_1_17))) {
  var_1_44 = (! (var_1_45 && var_1_46));
 } else {
  var_1_44 = ((var_1_47 || var_1_48) || var_1_49);
 }
 signed long int stepLocal_22 = last_1_var_1_21;
 if (stepLocal_22 < last_1_var_1_54) {
  if (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) >= (last_1_var_1_27 + var_1_31)) {
   var_1_62 = (var_1_18 + last_1_var_1_62);
  } else {
   if (var_1_46) {
    var_1_62 = last_1_var_1_51;
   }
  }
 } else {
  var_1_62 = var_1_58;
 }
 signed long int stepLocal_20 = (((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57));
 signed char stepLocal_19 = var_1_18;
 if (stepLocal_20 > var_1_43) {
  if (((var_1_17 - last_1_var_1_62) * last_1_var_1_25) == stepLocal_19) {
   var_1_51 = (last_1_var_1_62 + last_1_var_1_39);
  } else {
   var_1_51 = ((((((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))) < ((var_1_52 - var_1_43))) ? (((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))) : ((var_1_52 - var_1_43))));
  }
 }
 unsigned char stepLocal_7 = var_1_12 < (9.5f - var_1_22);
 signed long int stepLocal_6 = last_1_var_1_1;
 signed long int stepLocal_5 = var_1_10 / var_1_23;
 if (stepLocal_7 || (var_1_15 < (last_1_var_1_24 / var_1_10))) {
  if (last_1_var_1_21 <= stepLocal_6) {
   if (((((1) > (last_1_var_1_42)) ? (1) : (last_1_var_1_42))) < stepLocal_5) {
    var_1_21 = ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)));
   } else {
    var_1_21 = (var_1_17 + var_1_18);
   }
  }
 }
 unsigned char stepLocal_8 = var_1_21;
 if (! var_1_44) {
  if (var_1_44) {
   var_1_24 = var_1_17;
  } else {
   var_1_24 = (200 - (var_1_17 + var_1_18));
  }
 } else {
  if (stepLocal_8 < -10000) {
   var_1_24 = var_1_18;
  } else {
   var_1_24 = 50;
  }
 }
 unsigned char stepLocal_13 = var_1_21;
 if (var_1_44) {
  if ((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) / var_1_23) > stepLocal_13) {
   var_1_36 = (((((var_1_34) > ((var_1_35 + var_1_38))) ? (var_1_34) : ((var_1_35 + var_1_38)))) - var_1_28);
  }
 } else {
  var_1_36 = ((((var_1_28) < ((var_1_38 - (var_1_34 + var_1_35)))) ? (var_1_28) : ((var_1_38 - (var_1_34 + var_1_35)))));
 }
 unsigned char stepLocal_10 = var_1_44;
 if (stepLocal_10 && (var_1_44 && (var_1_24 != var_1_16))) {
  var_1_29 = (var_1_30 + (var_1_31 + var_1_32));
 } else {
  var_1_29 = var_1_13;
 }
 if (var_1_13 < (- (last_1_var_1_53 * last_1_var_1_53))) {
  var_1_42 = ((((var_1_18) > ((var_1_17 + var_1_43))) ? (var_1_18) : ((var_1_17 + var_1_43))));
 } else {
  var_1_42 = ((((((((var_1_41) < (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))) ? (var_1_41) : (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))))) > (var_1_18)) ? (((((var_1_41) < (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))) ? (var_1_41) : (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))))) : (var_1_18)));
 }
 signed long int stepLocal_9 = last_1_var_1_42;
 if (128.8 <= (((((last_1_var_1_36 / var_1_26)) < (var_1_12)) ? ((last_1_var_1_36 / var_1_26)) : (var_1_12)))) {
  if (stepLocal_9 <= var_1_23) {
   var_1_25 = (61453 - last_1_var_1_54);
  } else {
   var_1_25 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
  }
 } else {
  var_1_25 = ((((var_1_18) < (last_1_var_1_51)) ? (var_1_18) : (last_1_var_1_51)));
 }
 if ((var_1_32 <= var_1_28) && var_1_48) {
  var_1_54 = (var_1_17 - var_1_25);
 } else {
  var_1_54 = (var_1_17 - (((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))) + 8));
 }
 signed char stepLocal_12 = var_1_15;
 signed long int stepLocal_11 = - var_1_18;
 if (stepLocal_11 > var_1_10) {
  if ((var_1_10 + var_1_25) != stepLocal_12) {
   var_1_33 = ((var_1_34 + var_1_35) - var_1_28);
  } else {
   var_1_33 = var_1_12;
  }
 }
 signed char stepLocal_18 = var_1_18;
 signed long int stepLocal_17 = (((var_1_16) < (var_1_25)) ? (var_1_16) : (var_1_25));
 unsigned char stepLocal_16 = var_1_44;
 if ((var_1_17 + var_1_41) >= stepLocal_17) {
  if (stepLocal_18 <= var_1_25) {
   var_1_50 = ((var_1_31 + 500.8f) + ((((var_1_34) > (var_1_38)) ? (var_1_34) : (var_1_38))));
  } else {
   if (stepLocal_16 && var_1_49) {
    var_1_50 = (((((((((var_1_35 - var_1_38)) > (var_1_28)) ? ((var_1_35 - var_1_38)) : (var_1_28)))) < (((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (var_1_30)) ? (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) : (var_1_30))))) ? ((((((var_1_35 - var_1_38)) > (var_1_28)) ? ((var_1_35 - var_1_38)) : (var_1_28)))) : (((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (var_1_30)) ? (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) : (var_1_30))))));
   }
  }
 }
 var_1_19 = (((((((var_1_12) > (8.4)) ? (var_1_12) : (8.4))) < 0 ) ? -((((var_1_12) > (8.4)) ? (var_1_12) : (8.4))) : ((((var_1_12) > (8.4)) ? (var_1_12) : (8.4)))));
 if ((var_1_12 * var_1_13) > var_1_19) {
  var_1_20 = var_1_16;
 }
 if (! var_1_45) {
  if (var_1_29 <= (- ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) {
   var_1_55 = ((((16.125) > (var_1_12)) ? (16.125) : (var_1_12)));
  } else {
   var_1_55 = 9.99999999995E10;
  }
 } else {
  var_1_55 = (var_1_34 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))));
 }
 var_1_59 = var_1_38;
 if (var_1_45) {
  var_1_60 = var_1_15;
 }
 if (var_1_49) {
  var_1_61 = var_1_12;
 } else {
  var_1_61 = var_1_31;
 }
 signed char stepLocal_15 = var_1_15;
 signed char stepLocal_14 = var_1_18;
 if (1.2 >= (var_1_26 * var_1_36)) {
  var_1_39 = ((((var_1_18) > (10)) ? (var_1_18) : (10)));
 } else {
  if (stepLocal_15 <= ((last_1_var_1_39 / var_1_40) + last_1_var_1_39)) {
   if (stepLocal_14 >= var_1_51) {
    var_1_39 = (var_1_41 - var_1_18);
   } else {
    if ((var_1_33 / var_1_26) < (var_1_32 + var_1_28)) {
     var_1_39 = (var_1_17 + var_1_18);
    } else {
     var_1_39 = (var_1_17 + 4);
    }
   }
  } else {
   var_1_39 = (16 + var_1_18);
  }
 }
 if ((- (var_1_38 * var_1_50)) >= 8.5) {
  var_1_57 = ((((var_1_41) > ((var_1_58 - var_1_20))) ? (var_1_41) : ((var_1_58 - var_1_20))));
 } else {
  var_1_57 = var_1_17;
 }
 unsigned char stepLocal_4 = var_1_24;
 unsigned long int stepLocal_3 = var_1_62;
 unsigned char stepLocal_2 = var_1_44;
 if (stepLocal_3 == (var_1_57 / var_1_10)) {
  if (! (var_1_25 <= var_1_57)) {
   if (stepLocal_2 && var_1_44) {
    if (stepLocal_4 > (var_1_42 + (var_1_62 + var_1_10))) {
     var_1_9 = var_1_12;
    } else {
     var_1_9 = var_1_12;
    }
   } else {
    var_1_9 = var_1_12;
   }
  } else {
   var_1_9 = var_1_13;
  }
 } else {
  var_1_9 = var_1_13;
 }
 if ((- var_1_9) > var_1_29) {
  var_1_27 = ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) < 0 ) ? -((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) : ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) - var_1_28);
 }
 signed short int stepLocal_1 = var_1_20;
 signed long int stepLocal_0 = ~ ((((4) < 0 ) ? -(4) : (4)));
 if (! (var_1_9 > var_1_27)) {
  if (stepLocal_0 >= (var_1_20 ^ ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) {
   if (var_1_42 <= stepLocal_1) {
    var_1_1 = var_1_20;
   }
  } else {
   var_1_1 = ((((var_1_20) > (var_1_60)) ? (var_1_20) : (var_1_60)));
  }
 }
 signed long int stepLocal_21 = var_1_54 * (var_1_41 / var_1_40);
 if ((var_1_18 * var_1_54) < stepLocal_21) {
  if (var_1_27 > var_1_32) {
   var_1_53 = (127.4 + var_1_32);
  }
 }
}
void updateVariables() {
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 assume_abort_if_not(var_1_10 != 0);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 assume_abort_if_not(var_1_23 != 0);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -230584.3009213691390e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691390e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -230584.3009213691390e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691390e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -128);
 assume_abort_if_not(var_1_40 <= 127);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 127);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 2147483647);
 assume_abort_if_not(var_1_52 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_62 = var_1_62;
}
int property() {
 return (((((((((((((((((((((((((! (var_1_9 > var_1_27)) ? (((~ ((((4) < 0 ) ? -(4) : (4)))) >= (var_1_20 ^ ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? ((var_1_42 <= var_1_20) ? (var_1_1 == ((signed long int) var_1_20)) : 1) : (var_1_1 == ((signed long int) ((((var_1_20) > (var_1_60)) ? (var_1_20) : (var_1_60)))))) : 1) && ((var_1_62 == (var_1_57 / var_1_10)) ? ((! (var_1_25 <= var_1_57)) ? ((var_1_44 && var_1_44) ? ((var_1_24 > (var_1_42 + (var_1_62 + var_1_10))) ? (var_1_9 == ((float) var_1_12)) : (var_1_9 == ((float) var_1_12))) : (var_1_9 == ((float) var_1_12))) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_13)))) && ((last_1_var_1_44 && last_1_var_1_44) ? (var_1_14 == ((signed char) ((((var_1_15) > ((var_1_16 + (var_1_17 - var_1_18)))) ? (var_1_15) : ((var_1_16 + (var_1_17 - var_1_18))))))) : 1)) && (var_1_19 == ((double) (((((((var_1_12) > (8.4)) ? (var_1_12) : (8.4))) < 0 ) ? -((((var_1_12) > (8.4)) ? (var_1_12) : (8.4))) : ((((var_1_12) > (8.4)) ? (var_1_12) : (8.4)))))))) && (((var_1_12 * var_1_13) > var_1_19) ? (var_1_20 == ((signed short int) var_1_16)) : 1)) && (((var_1_12 < (9.5f - var_1_22)) || (var_1_15 < (last_1_var_1_24 / var_1_10))) ? ((last_1_var_1_21 <= last_1_var_1_1) ? ((((((1) > (last_1_var_1_42)) ? (1) : (last_1_var_1_42))) < (var_1_10 / var_1_23)) ? (var_1_21 == ((unsigned char) ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))))) : (var_1_21 == ((unsigned char) (var_1_17 + var_1_18)))) : 1) : 1)) && ((! var_1_44) ? (var_1_44 ? (var_1_24 == ((unsigned char) var_1_17)) : (var_1_24 == ((unsigned char) (200 - (var_1_17 + var_1_18))))) : ((var_1_21 < -10000) ? (var_1_24 == ((unsigned char) var_1_18)) : (var_1_24 == ((unsigned char) 50))))) && ((128.8 <= (((((last_1_var_1_36 / var_1_26)) < (var_1_12)) ? ((last_1_var_1_36 / var_1_26)) : (var_1_12)))) ? ((last_1_var_1_42 <= var_1_23) ? (var_1_25 == ((unsigned short int) (61453 - last_1_var_1_54))) : (var_1_25 == ((unsigned short int) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))) : (var_1_25 == ((unsigned short int) ((((var_1_18) < (last_1_var_1_51)) ? (var_1_18) : (last_1_var_1_51))))))) && (((- var_1_9) > var_1_29) ? (var_1_27 == ((double) ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) < 0 ) ? -((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) : ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) - var_1_28))) : 1)) && ((var_1_44 && (var_1_44 && (var_1_24 != var_1_16))) ? (var_1_29 == ((double) (var_1_30 + (var_1_31 + var_1_32)))) : (var_1_29 == ((double) var_1_13)))) && (((- var_1_18) > var_1_10) ? (((var_1_10 + var_1_25) != var_1_15) ? (var_1_33 == ((double) ((var_1_34 + var_1_35) - var_1_28))) : (var_1_33 == ((double) var_1_12))) : 1)) && (var_1_44 ? (((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) / var_1_23) > var_1_21) ? (var_1_36 == ((double) (((((var_1_34) > ((var_1_35 + var_1_38))) ? (var_1_34) : ((var_1_35 + var_1_38)))) - var_1_28))) : 1) : (var_1_36 == ((double) ((((var_1_28) < ((var_1_38 - (var_1_34 + var_1_35)))) ? (var_1_28) : ((var_1_38 - (var_1_34 + var_1_35))))))))) && ((1.2 >= (var_1_26 * var_1_36)) ? (var_1_39 == ((unsigned char) ((((var_1_18) > (10)) ? (var_1_18) : (10))))) : ((var_1_15 <= ((last_1_var_1_39 / var_1_40) + last_1_var_1_39)) ? ((var_1_18 >= var_1_51) ? (var_1_39 == ((unsigned char) (var_1_41 - var_1_18))) : (((var_1_33 / var_1_26) < (var_1_32 + var_1_28)) ? (var_1_39 == ((unsigned char) (var_1_17 + var_1_18))) : (var_1_39 == ((unsigned char) (var_1_17 + 4))))) : (var_1_39 == ((unsigned char) (16 + var_1_18)))))) && ((var_1_13 < (- (last_1_var_1_53 * last_1_var_1_53))) ? (var_1_42 == ((unsigned char) ((((var_1_18) > ((var_1_17 + var_1_43))) ? (var_1_18) : ((var_1_17 + var_1_43)))))) : (var_1_42 == ((unsigned char) ((((((((var_1_41) < (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))) ? (var_1_41) : (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))))) > (var_1_18)) ? (((((var_1_41) < (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))) ? (var_1_41) : (((((var_1_43) > (var_1_17)) ? (var_1_43) : (var_1_17))))))) : (var_1_18))))))) && ((var_1_14 >= (var_1_41 - (64 - var_1_17))) ? (var_1_44 == ((unsigned char) (! (var_1_45 && var_1_46)))) : (var_1_44 == ((unsigned char) ((var_1_47 || var_1_48) || var_1_49))))) && (((var_1_17 + var_1_41) >= ((((var_1_16) < (var_1_25)) ? (var_1_16) : (var_1_25)))) ? ((var_1_18 <= var_1_25) ? (var_1_50 == ((float) ((var_1_31 + 500.8f) + ((((var_1_34) > (var_1_38)) ? (var_1_34) : (var_1_38)))))) : ((var_1_44 && var_1_49) ? (var_1_50 == ((float) (((((((((var_1_35 - var_1_38)) > (var_1_28)) ? ((var_1_35 - var_1_38)) : (var_1_28)))) < (((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (var_1_30)) ? (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) : (var_1_30))))) ? ((((((var_1_35 - var_1_38)) > (var_1_28)) ? ((var_1_35 - var_1_38)) : (var_1_28)))) : (((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (var_1_30)) ? (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) : (var_1_30)))))))) : 1)) : 1)) && ((((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57))) > var_1_43) ? ((((var_1_17 - last_1_var_1_62) * last_1_var_1_25) == var_1_18) ? (var_1_51 == ((unsigned long int) (last_1_var_1_62 + last_1_var_1_39))) : (var_1_51 == ((unsigned long int) ((((((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))) < ((var_1_52 - var_1_43))) ? (((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))) : ((var_1_52 - var_1_43))))))) : 1)) && (((var_1_18 * var_1_54) < (var_1_54 * (var_1_41 / var_1_40))) ? ((var_1_27 > var_1_32) ? (var_1_53 == ((double) (127.4 + var_1_32))) : 1) : 1)) && (((var_1_32 <= var_1_28) && var_1_48) ? (var_1_54 == ((signed long int) (var_1_17 - var_1_25))) : (var_1_54 == ((signed long int) (var_1_17 - (((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))) + 8)))))) && ((! var_1_45) ? ((var_1_29 <= (- ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) ? (var_1_55 == ((double) ((((16.125) > (var_1_12)) ? (16.125) : (var_1_12))))) : (var_1_55 == ((double) 9.99999999995E10))) : (var_1_55 == ((double) (var_1_34 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) && (((- (var_1_38 * var_1_50)) >= 8.5) ? (var_1_57 == ((unsigned short int) ((((var_1_41) > ((var_1_58 - var_1_20))) ? (var_1_41) : ((var_1_58 - var_1_20)))))) : (var_1_57 == ((unsigned short int) var_1_17)))) && (var_1_59 == ((float) var_1_38))) && (var_1_45 ? (var_1_60 == ((signed char) var_1_15)) : 1)) && (var_1_49 ? (var_1_61 == ((double) var_1_12)) : (var_1_61 == ((double) var_1_31)))) && ((last_1_var_1_21 < last_1_var_1_54) ? ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) >= (last_1_var_1_27 + var_1_31)) ? (var_1_62 == ((unsigned long int) (var_1_18 + last_1_var_1_62))) : (var_1_46 ? (var_1_62 == ((unsigned long int) last_1_var_1_51)) : 1)) : (var_1_62 == ((unsigned long int) var_1_58)))
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
