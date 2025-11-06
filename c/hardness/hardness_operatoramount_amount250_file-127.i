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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 1000;
signed long int var_1_4 = 16;
signed long int var_1_5 = 100000;
signed short int var_1_6 = 10;
signed short int var_1_7 = 16;
signed short int var_1_8 = 128;
unsigned short int var_1_9 = 61303;
unsigned short int var_1_10 = 8;
unsigned short int var_1_12 = 32244;
double var_1_13 = 8.5;
double var_1_14 = 10.9;
double var_1_15 = 1.25;
double var_1_16 = 0.0;
double var_1_17 = 5.75;
float var_1_18 = 0.0;
float var_1_19 = 0.0;
float var_1_20 = 1.75;
double var_1_21 = 0.2;
double var_1_22 = 256.52;
double var_1_23 = 49.2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
signed short int var_1_28 = 64;
signed short int var_1_29 = 100;
signed short int var_1_30 = 256;
signed short int var_1_31 = 5;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 200;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 16;
unsigned char var_1_37 = 128;
signed char var_1_38 = -32;
signed long int var_1_39 = -10;
signed char var_1_40 = 5;
signed char var_1_41 = 16;
signed long int var_1_42 = 1177283252;
signed char var_1_43 = 1;
signed char var_1_44 = 16;
signed char var_1_45 = 50;
signed char var_1_46 = 10;
double var_1_47 = 500.9;
double var_1_49 = 5.25;
signed long int var_1_50 = 16;
signed long int var_1_51 = -16;
float var_1_52 = 1000000.55;
unsigned char var_1_53 = 64;
unsigned short int var_1_54 = 1000;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
signed char var_1_59 = 25;
unsigned short int last_1_var_1_10 = 8;
double last_1_var_1_21 = 0.2;
unsigned char last_1_var_1_24 = 1;
signed short int last_1_var_1_28 = 64;
unsigned char last_1_var_1_32 = 1;
signed long int last_1_var_1_50 = 16;
float last_1_var_1_52 = 1000000.55;
unsigned char last_1_var_1_53 = 64;
unsigned short int last_1_var_1_54 = 1000;
unsigned char last_1_var_1_55 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_17 < var_1_49) && (var_1_25 && last_1_var_1_24)) {
  if ((~ 1u) < (var_1_33 * last_1_var_1_50)) {
   if (var_1_27 || (last_1_var_1_52 > last_1_var_1_21)) {
    var_1_54 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
   }
  } else {
   var_1_54 = var_1_44;
  }
 } else {
  var_1_54 = var_1_34;
 }
 if (var_1_39 > ((var_1_40 - var_1_31) / var_1_37)) {
  if ((var_1_12 * var_1_35) >= (var_1_51 * last_1_var_1_10)) {
   if (var_1_30 == var_1_31) {
    if (last_1_var_1_24) {
     var_1_50 = (((((((((1 + var_1_45)) > (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))) ? ((1 + var_1_45)) : (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))))) > ((((((last_1_var_1_10) < (var_1_30)) ? (last_1_var_1_10) : (var_1_30))) - last_1_var_1_32))) ? ((((((1 + var_1_45)) > (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))) ? ((1 + var_1_45)) : (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))))) : ((((((last_1_var_1_10) < (var_1_30)) ? (last_1_var_1_10) : (var_1_30))) - last_1_var_1_32))));
    } else {
     var_1_50 = (((((last_1_var_1_10 - (1661125568 - var_1_37))) < (((((var_1_7) < (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28))))) ? (var_1_7) : (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28)))))))) ? ((last_1_var_1_10 - (1661125568 - var_1_37))) : (((((var_1_7) < (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28))))) ? (var_1_7) : (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28)))))))));
    }
   } else {
    var_1_50 = ((((last_1_var_1_54) < (var_1_40)) ? (last_1_var_1_54) : (var_1_40)));
   }
  } else {
   var_1_50 = (var_1_30 - var_1_37);
  }
 }
 if (last_1_var_1_24) {
  if (last_1_var_1_55) {
   var_1_10 = (var_1_6 + (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) - last_1_var_1_53));
  }
 } else {
  var_1_10 = (var_1_7 + var_1_6);
 }
 if (-32 < last_1_var_1_50) {
  var_1_24 = (! (var_1_25 && var_1_26));
 } else {
  if (8.9 < ((var_1_19 - var_1_17) - var_1_16)) {
   var_1_24 = ((last_1_var_1_50 <= (last_1_var_1_10 / var_1_9)) && var_1_27);
  } else {
   var_1_24 = var_1_25;
  }
 }
 var_1_13 = (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) - (var_1_16 - var_1_17));
 if (var_1_26) {
  var_1_36 = 128;
 } else {
  var_1_36 = (var_1_37 - var_1_35);
 }
 signed long int stepLocal_4 = var_1_50;
 signed short int stepLocal_3 = var_1_30;
 unsigned short int stepLocal_2 = var_1_54;
 if (stepLocal_2 <= var_1_12) {
  if ((((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) < 0 ) ? -((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) : ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))))) > var_1_19) {
   if (var_1_50 > stepLocal_3) {
    var_1_38 = (var_1_34 - (((((64 - var_1_40)) < ((var_1_41 + 32))) ? ((64 - var_1_40)) : ((var_1_41 + 32)))));
   } else {
    var_1_38 = (var_1_34 - var_1_40);
   }
  } else {
   if (stepLocal_4 > ((var_1_42 - var_1_34) - var_1_54)) {
    var_1_38 = (((((var_1_41) > (var_1_40)) ? (var_1_41) : (var_1_40))) - (((((var_1_43 + var_1_34)) < (var_1_44)) ? ((var_1_43 + var_1_34)) : (var_1_44))));
   } else {
    if (var_1_25) {
     var_1_38 = ((var_1_41 + (var_1_45 - var_1_46)) - var_1_34);
    }
   }
  }
 } else {
  var_1_38 = ((((var_1_43) > ((var_1_45 + var_1_41))) ? (var_1_43) : ((var_1_45 + var_1_41))));
 }
 if (var_1_19 < 0.09999999999999998f) {
  var_1_59 = ((((((((var_1_45) > ((var_1_34 + var_1_40))) ? (var_1_45) : ((var_1_34 + var_1_40))))) < (var_1_46)) ? (((((var_1_45) > ((var_1_34 + var_1_40))) ? (var_1_45) : ((var_1_34 + var_1_40))))) : (var_1_46)));
 }
 if (var_1_50 == var_1_10) {
  if (var_1_7 >= var_1_12) {
   var_1_28 = var_1_7;
  } else {
   if ((- (var_1_50 + var_1_6)) >= var_1_50) {
    var_1_28 = (var_1_36 - var_1_6);
   } else {
    if ((var_1_15 / var_1_16) <= var_1_22) {
     var_1_28 = var_1_6;
    } else {
     var_1_28 = (((31424 - var_1_36) - var_1_6) - var_1_7);
    }
   }
  }
 } else {
  var_1_28 = ((var_1_6 + ((((var_1_36) < (var_1_29)) ? (var_1_36) : (var_1_29)))) - (((((var_1_30 + var_1_31)) < (var_1_7)) ? ((var_1_30 + var_1_31)) : (var_1_7))));
 }
 if (var_1_28 != var_1_40) {
  var_1_53 = var_1_44;
 }
 if (((var_1_9 - var_1_36) - var_1_6) < var_1_50) {
  var_1_8 = var_1_7;
 } else {
  if (-128 < var_1_50) {
   var_1_8 = (var_1_7 - (var_1_36 + ((((var_1_6) > (32)) ? (var_1_6) : (32)))));
  } else {
   var_1_8 = ((((var_1_36) < (var_1_9)) ? (var_1_36) : (var_1_9)));
  }
 }
 if (! var_1_24) {
  if ((4 + var_1_53) >= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) {
   var_1_1 = ((var_1_53 + var_1_6) - var_1_7);
  } else {
   var_1_1 = (var_1_7 - 2);
  }
 } else {
  var_1_1 = ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)));
 }
 if (var_1_6 < (var_1_8 ^ var_1_54)) {
  if ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) % var_1_12) >= ((((var_1_35 + var_1_1) < 0 ) ? -(var_1_35 + var_1_1) : (var_1_35 + var_1_1)))) {
   var_1_52 = ((((((((var_1_20) < ((var_1_17 - var_1_16))) ? (var_1_20) : ((var_1_17 - var_1_16))))) < (var_1_14)) ? (((((var_1_20) < ((var_1_17 - var_1_16))) ? (var_1_20) : ((var_1_17 - var_1_16))))) : (var_1_14)));
  }
 } else {
  var_1_52 = ((((var_1_22) < ((((((var_1_17 + var_1_49)) > (var_1_14)) ? ((var_1_17 + var_1_49)) : (var_1_14))))) ? (var_1_22) : ((((((var_1_17 + var_1_49)) > (var_1_14)) ? ((var_1_17 + var_1_49)) : (var_1_14))))));
 }
 unsigned short int stepLocal_8 = var_1_10;
 unsigned short int stepLocal_7 = var_1_54;
 signed long int stepLocal_6 = (((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34));
 signed long int stepLocal_5 = (((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5));
 if (var_1_46 <= stepLocal_6) {
  if (stepLocal_5 > var_1_42) {
   if (var_1_42 < stepLocal_7) {
    var_1_55 = (var_1_27 || ((var_1_56 || var_1_57) || var_1_58));
   } else {
    var_1_55 = (! var_1_56);
   }
  } else {
   if (var_1_44 > stepLocal_8) {
    var_1_55 = var_1_26;
   }
  }
 } else {
  var_1_55 = var_1_58;
 }
 if (! var_1_24) {
  if (var_1_15 > var_1_52) {
   var_1_47 = ((((var_1_23) < (var_1_14)) ? (var_1_23) : (var_1_14)));
  }
 } else {
  if (var_1_6 >= var_1_44) {
   var_1_47 = (((((((((var_1_23) < (var_1_22)) ? (var_1_23) : (var_1_22))) + var_1_17)) < ((var_1_20 - (var_1_16 - var_1_49)))) ? ((((((var_1_23) < (var_1_22)) ? (var_1_23) : (var_1_22))) + var_1_17)) : ((var_1_20 - (var_1_16 - var_1_49)))));
  }
 }
 if (! var_1_55) {
  var_1_32 = ((var_1_33 - var_1_34) - var_1_35);
 } else {
  var_1_32 = ((((((((var_1_34 + var_1_35) < 0 ) ? -(var_1_34 + var_1_35) : (var_1_34 + var_1_35)))) > (var_1_33)) ? (((((var_1_34 + var_1_35) < 0 ) ? -(var_1_34 + var_1_35) : (var_1_34 + var_1_35)))) : (var_1_33)));
 }
 unsigned char stepLocal_1 = var_1_14 <= var_1_15;
 if (var_1_47 >= ((((2.7f) > ((31.4f * var_1_20))) ? (2.7f) : ((31.4f * var_1_20))))) {
  if (stepLocal_1 || var_1_55) {
   var_1_21 = ((var_1_22 + var_1_23) + var_1_17);
  } else {
   var_1_21 = ((((var_1_20) > (var_1_15)) ? (var_1_20) : (var_1_15)));
  }
 } else {
  var_1_21 = var_1_14;
 }
 signed long int stepLocal_0 = 1000000;
 if (((var_1_19 - 9.5f) - var_1_15) >= var_1_21) {
  if (! var_1_55) {
   if (stepLocal_0 > var_1_50) {
    var_1_18 = (var_1_16 - var_1_17);
   } else {
    var_1_18 = (var_1_20 - ((((var_1_16) < (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17))))) ? (var_1_16) : (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17)))))));
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 49151);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 4611686.018427383000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427388000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 190);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 127);
 assume_abort_if_not(var_1_37 <= 254);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= -2147483648);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= 1073741823);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 126);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 31);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 31);
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= -2147483648);
 assume_abort_if_not(var_1_51 <= 2147483647);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 0);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
}
int property(void) {
 return ((((((((((((((((((! var_1_24) ? (((4 + var_1_53) >= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) ? (var_1_1 == ((signed short int) ((var_1_53 + var_1_6) - var_1_7))) : (var_1_1 == ((signed short int) (var_1_7 - 2)))) : (var_1_1 == ((signed short int) ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))))) && ((((var_1_9 - var_1_36) - var_1_6) < var_1_50) ? (var_1_8 == ((signed short int) var_1_7)) : ((-128 < var_1_50) ? (var_1_8 == ((signed short int) (var_1_7 - (var_1_36 + ((((var_1_6) > (32)) ? (var_1_6) : (32))))))) : (var_1_8 == ((signed short int) ((((var_1_36) < (var_1_9)) ? (var_1_36) : (var_1_9)))))))) && (last_1_var_1_24 ? (last_1_var_1_55 ? (var_1_10 == ((unsigned short int) (var_1_6 + (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) - last_1_var_1_53)))) : 1) : (var_1_10 == ((unsigned short int) (var_1_7 + var_1_6))))) && (var_1_13 == ((double) (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) - (var_1_16 - var_1_17))))) && ((((var_1_19 - 9.5f) - var_1_15) >= var_1_21) ? ((! var_1_55) ? ((1000000 > var_1_50) ? (var_1_18 == ((float) (var_1_16 - var_1_17))) : (var_1_18 == ((float) (var_1_20 - ((((var_1_16) < (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17))))) ? (var_1_16) : (((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17)))))))))) : 1) : 1)) && ((var_1_47 >= ((((2.7f) > ((31.4f * var_1_20))) ? (2.7f) : ((31.4f * var_1_20))))) ? (((var_1_14 <= var_1_15) || var_1_55) ? (var_1_21 == ((double) ((var_1_22 + var_1_23) + var_1_17))) : (var_1_21 == ((double) ((((var_1_20) > (var_1_15)) ? (var_1_20) : (var_1_15)))))) : (var_1_21 == ((double) var_1_14)))) && ((-32 < last_1_var_1_50) ? (var_1_24 == ((unsigned char) (! (var_1_25 && var_1_26)))) : ((8.9 < ((var_1_19 - var_1_17) - var_1_16)) ? (var_1_24 == ((unsigned char) ((last_1_var_1_50 <= (last_1_var_1_10 / var_1_9)) && var_1_27))) : (var_1_24 == ((unsigned char) var_1_25))))) && ((var_1_50 == var_1_10) ? ((var_1_7 >= var_1_12) ? (var_1_28 == ((signed short int) var_1_7)) : (((- (var_1_50 + var_1_6)) >= var_1_50) ? (var_1_28 == ((signed short int) (var_1_36 - var_1_6))) : (((var_1_15 / var_1_16) <= var_1_22) ? (var_1_28 == ((signed short int) var_1_6)) : (var_1_28 == ((signed short int) (((31424 - var_1_36) - var_1_6) - var_1_7)))))) : (var_1_28 == ((signed short int) ((var_1_6 + ((((var_1_36) < (var_1_29)) ? (var_1_36) : (var_1_29)))) - (((((var_1_30 + var_1_31)) < (var_1_7)) ? ((var_1_30 + var_1_31)) : (var_1_7)))))))) && ((! var_1_55) ? (var_1_32 == ((unsigned char) ((var_1_33 - var_1_34) - var_1_35))) : (var_1_32 == ((unsigned char) ((((((((var_1_34 + var_1_35) < 0 ) ? -(var_1_34 + var_1_35) : (var_1_34 + var_1_35)))) > (var_1_33)) ? (((((var_1_34 + var_1_35) < 0 ) ? -(var_1_34 + var_1_35) : (var_1_34 + var_1_35)))) : (var_1_33))))))) && (var_1_26 ? (var_1_36 == ((unsigned char) 128)) : (var_1_36 == ((unsigned char) (var_1_37 - var_1_35))))) && ((var_1_54 <= var_1_12) ? (((((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) < 0 ) ? -((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) : ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))))) > var_1_19) ? ((var_1_50 > var_1_30) ? (var_1_38 == ((signed char) (var_1_34 - (((((64 - var_1_40)) < ((var_1_41 + 32))) ? ((64 - var_1_40)) : ((var_1_41 + 32))))))) : (var_1_38 == ((signed char) (var_1_34 - var_1_40)))) : ((var_1_50 > ((var_1_42 - var_1_34) - var_1_54)) ? (var_1_38 == ((signed char) (((((var_1_41) > (var_1_40)) ? (var_1_41) : (var_1_40))) - (((((var_1_43 + var_1_34)) < (var_1_44)) ? ((var_1_43 + var_1_34)) : (var_1_44)))))) : (var_1_25 ? (var_1_38 == ((signed char) ((var_1_41 + (var_1_45 - var_1_46)) - var_1_34))) : 1))) : (var_1_38 == ((signed char) ((((var_1_43) > ((var_1_45 + var_1_41))) ? (var_1_43) : ((var_1_45 + var_1_41)))))))) && ((! var_1_24) ? ((var_1_15 > var_1_52) ? (var_1_47 == ((double) ((((var_1_23) < (var_1_14)) ? (var_1_23) : (var_1_14))))) : 1) : ((var_1_6 >= var_1_44) ? (var_1_47 == ((double) (((((((((var_1_23) < (var_1_22)) ? (var_1_23) : (var_1_22))) + var_1_17)) < ((var_1_20 - (var_1_16 - var_1_49)))) ? ((((((var_1_23) < (var_1_22)) ? (var_1_23) : (var_1_22))) + var_1_17)) : ((var_1_20 - (var_1_16 - var_1_49))))))) : 1))) && ((var_1_39 > ((var_1_40 - var_1_31) / var_1_37)) ? (((var_1_12 * var_1_35) >= (var_1_51 * last_1_var_1_10)) ? ((var_1_30 == var_1_31) ? (last_1_var_1_24 ? (var_1_50 == ((signed long int) (((((((((1 + var_1_45)) > (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))) ? ((1 + var_1_45)) : (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))))) > ((((((last_1_var_1_10) < (var_1_30)) ? (last_1_var_1_10) : (var_1_30))) - last_1_var_1_32))) ? ((((((1 + var_1_45)) > (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))) ? ((1 + var_1_45)) : (((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))))) : ((((((last_1_var_1_10) < (var_1_30)) ? (last_1_var_1_10) : (var_1_30))) - last_1_var_1_32)))))) : (var_1_50 == ((signed long int) (((((last_1_var_1_10 - (1661125568 - var_1_37))) < (((((var_1_7) < (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28))))) ? (var_1_7) : (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28)))))))) ? ((last_1_var_1_10 - (1661125568 - var_1_37))) : (((((var_1_7) < (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28))))) ? (var_1_7) : (((((last_1_var_1_28) < 0 ) ? -(last_1_var_1_28) : (last_1_var_1_28)))))))))))) : (var_1_50 == ((signed long int) ((((last_1_var_1_54) < (var_1_40)) ? (last_1_var_1_54) : (var_1_40)))))) : (var_1_50 == ((signed long int) (var_1_30 - var_1_37)))) : 1)) && ((var_1_6 < (var_1_8 ^ var_1_54)) ? (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) % var_1_12) >= ((((var_1_35 + var_1_1) < 0 ) ? -(var_1_35 + var_1_1) : (var_1_35 + var_1_1)))) ? (var_1_52 == ((float) ((((((((var_1_20) < ((var_1_17 - var_1_16))) ? (var_1_20) : ((var_1_17 - var_1_16))))) < (var_1_14)) ? (((((var_1_20) < ((var_1_17 - var_1_16))) ? (var_1_20) : ((var_1_17 - var_1_16))))) : (var_1_14))))) : 1) : (var_1_52 == ((float) ((((var_1_22) < ((((((var_1_17 + var_1_49)) > (var_1_14)) ? ((var_1_17 + var_1_49)) : (var_1_14))))) ? (var_1_22) : ((((((var_1_17 + var_1_49)) > (var_1_14)) ? ((var_1_17 + var_1_49)) : (var_1_14)))))))))) && ((var_1_28 != var_1_40) ? (var_1_53 == ((unsigned char) var_1_44)) : 1)) && (((var_1_17 < var_1_49) && (var_1_25 && last_1_var_1_24)) ? (((~ 1u) < (var_1_33 * last_1_var_1_50)) ? ((var_1_27 || (last_1_var_1_52 > last_1_var_1_21)) ? (var_1_54 == ((unsigned short int) ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) : 1) : (var_1_54 == ((unsigned short int) var_1_44))) : (var_1_54 == ((unsigned short int) var_1_34)))) && ((var_1_46 <= ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) ? ((((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))) > var_1_42) ? ((var_1_42 < var_1_54) ? (var_1_55 == ((unsigned char) (var_1_27 || ((var_1_56 || var_1_57) || var_1_58)))) : (var_1_55 == ((unsigned char) (! var_1_56)))) : ((var_1_44 > var_1_10) ? (var_1_55 == ((unsigned char) var_1_26)) : 1)) : (var_1_55 == ((unsigned char) var_1_58)))) && ((var_1_19 < 0.09999999999999998f) ? (var_1_59 == ((signed char) ((((((((var_1_45) > ((var_1_34 + var_1_40))) ? (var_1_45) : ((var_1_34 + var_1_40))))) < (var_1_46)) ? (((((var_1_45) > ((var_1_34 + var_1_40))) ? (var_1_45) : ((var_1_34 + var_1_40))))) : (var_1_46))))) : 1)
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
