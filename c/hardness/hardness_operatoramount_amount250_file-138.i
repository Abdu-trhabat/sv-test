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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
double var_1_7 = 4.4;
double var_1_8 = 127.2;
double var_1_9 = 128.9;
double var_1_10 = 32.5;
double var_1_11 = 128.8;
double var_1_12 = 4.8;
double var_1_13 = 128.5;
double var_1_14 = 9.75;
double var_1_15 = 32.125;
float var_1_16 = 2.5;
float var_1_17 = 10000000000000.25;
double var_1_18 = 100000000000.5;
unsigned char var_1_19 = 0;
signed short int var_1_20 = 4;
signed short int var_1_22 = 25;
float var_1_23 = 15.7;
signed char var_1_24 = 10;
signed short int var_1_25 = 10;
signed short int var_1_26 = -4;
unsigned long int var_1_27 = 25;
signed char var_1_28 = 2;
unsigned long int var_1_29 = 2552771704;
unsigned char var_1_30 = 10;
unsigned char var_1_31 = 2;
signed long int var_1_32 = 64;
signed long int var_1_34 = 1940762584;
unsigned long int var_1_35 = 0;
unsigned long int var_1_36 = 5;
float var_1_37 = 100000.78;
signed char var_1_38 = 2;
signed char var_1_39 = 1;
float var_1_40 = 0.25;
float var_1_41 = 31.75;
float var_1_43 = 0.0;
float var_1_44 = 0.0;
signed long int var_1_45 = -10000;
signed long int var_1_46 = 25;
unsigned short int var_1_47 = 1;
unsigned short int var_1_48 = 16;
unsigned short int var_1_49 = 1;
unsigned short int var_1_50 = 28171;
unsigned short int var_1_51 = 50255;
signed short int var_1_52 = 128;
unsigned long int var_1_53 = 32;
unsigned long int var_1_54 = 1225764959;
unsigned char var_1_55 = 8;
unsigned char var_1_56 = 64;
unsigned char var_1_57 = 64;
double var_1_58 = 1.4;
double var_1_59 = 200.25;
double var_1_60 = 1.75;
double var_1_61 = 256.25;
signed long int var_1_62 = 1;
float var_1_63 = 0.0;
unsigned short int var_1_64 = 5;
unsigned char var_1_65 = 128;
unsigned char last_1_var_1_1 = 0;
double last_1_var_1_7 = 4.4;
signed short int last_1_var_1_20 = 4;
signed short int last_1_var_1_26 = -4;
signed long int last_1_var_1_45 = -10000;
unsigned short int last_1_var_1_47 = 1;
unsigned long int last_1_var_1_53 = 32;
double last_1_var_1_58 = 1.4;
unsigned short int last_1_var_1_64 = 5;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_5 = last_1_var_1_53;
 if (var_1_28 < stepLocal_5) {
  var_1_35 = ((((var_1_29) > (var_1_36)) ? (var_1_29) : (var_1_36)));
 } else {
  var_1_35 = 2u;
 }
 if (var_1_5) {
  var_1_26 = ((((last_1_var_1_45) > (var_1_24)) ? (last_1_var_1_45) : (var_1_24)));
 }
 if (var_1_4) {
  var_1_45 = last_1_var_1_45;
 } else {
  var_1_45 = ((((var_1_26) < (var_1_46)) ? (var_1_26) : (var_1_46)));
 }
 if (last_1_var_1_1) {
  var_1_48 = (38941 - ((((last_1_var_1_47) > (var_1_22)) ? (last_1_var_1_47) : (var_1_22))));
 } else {
  var_1_48 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 if (var_1_6) {
  var_1_52 = ((64 + var_1_45) - var_1_48);
 } else {
  var_1_52 = (var_1_24 + ((var_1_31 + var_1_39) + ((((-128) > (-50)) ? (-128) : (-50)))));
 }
 signed short int stepLocal_2 = var_1_22;
 if (last_1_var_1_58 <= var_1_17) {
  if (((last_1_var_1_26 ^ -32) + (50 - var_1_28)) < stepLocal_2) {
   if (last_1_var_1_7 <= 1.25) {
    var_1_27 = ((((((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28)))) < ((((((3444168938u) > (var_1_29)) ? (3444168938u) : (var_1_29))) - (last_1_var_1_20 + last_1_var_1_26)))) ? (((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28)))) : ((((((3444168938u) > (var_1_29)) ? (3444168938u) : (var_1_29))) - (last_1_var_1_20 + last_1_var_1_26)))));
   } else {
    var_1_27 = ((((var_1_29) < (var_1_22)) ? (var_1_29) : (var_1_22)));
   }
  }
 }
 signed long int stepLocal_0 = last_1_var_1_47;
 if (stepLocal_0 < last_1_var_1_26) {
  var_1_1 = (var_1_4 || (! (var_1_5 && var_1_6)));
 }
 signed long int stepLocal_3 = ~ (var_1_45 / -2);
 if (var_1_27 > stepLocal_3) {
  var_1_30 = ((((var_1_28) < (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) ? (var_1_28) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))));
 }
 var_1_55 = ((((((64) < (var_1_56)) ? (64) : (var_1_56))) + var_1_57) - 4);
 if (var_1_13 <= (var_1_44 - var_1_40)) {
  var_1_58 = (((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))) + var_1_40);
 } else {
  if (! var_1_5) {
   var_1_58 = ((var_1_40 - var_1_59) + (((((var_1_60 - var_1_61)) > (var_1_10)) ? ((var_1_60 - var_1_61)) : (var_1_10))));
  } else {
   var_1_58 = ((((var_1_44) < (200.1)) ? (var_1_44) : (200.1)));
  }
 }
 if (var_1_35 > (var_1_45 - last_1_var_1_53)) {
  var_1_53 = (((((last_1_var_1_53 + (var_1_54 - var_1_45))) > (((((last_1_var_1_53) < (var_1_29)) ? (last_1_var_1_53) : (var_1_29))))) ? ((last_1_var_1_53 + (var_1_54 - var_1_45))) : (((((last_1_var_1_53) < (var_1_29)) ? (last_1_var_1_53) : (var_1_29))))));
 } else {
  var_1_53 = 200u;
 }
 var_1_47 = (var_1_52 + var_1_27);
 if (((var_1_14 - var_1_13) * (var_1_16 - var_1_17)) != var_1_58) {
  if (var_1_5) {
   var_1_15 = var_1_13;
  } else {
   var_1_15 = var_1_18;
  }
 } else {
  var_1_15 = var_1_10;
 }
 signed long int stepLocal_6 = var_1_24 / ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)));
 if (stepLocal_6 >= var_1_53) {
  var_1_37 = ((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) < 0 ) ? -((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) : ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
 } else {
  var_1_37 = (var_1_11 + (((((5.9f - var_1_40)) < (var_1_12)) ? ((5.9f - var_1_40)) : (var_1_12))));
 }
 unsigned long int stepLocal_8 = var_1_36;
 if (var_1_12 < (var_1_43 - var_1_40)) {
  if (var_1_53 > stepLocal_8) {
   var_1_49 = (((((((((var_1_22) > (0)) ? (var_1_22) : (0)))) < ((var_1_35 + var_1_28))) ? (((((var_1_22) > (0)) ? (var_1_22) : (0)))) : ((var_1_35 + var_1_28)))) + (((((var_1_50 - var_1_47)) < (var_1_55)) ? ((var_1_50 - var_1_47)) : (var_1_55))));
  } else {
   var_1_49 = (var_1_51 - (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - var_1_35));
  }
 } else {
  var_1_49 = (63427 - var_1_31);
 }
 signed short int stepLocal_11 = var_1_26;
 signed long int stepLocal_10 = var_1_28 * (var_1_65 - var_1_57);
 if (stepLocal_10 >= ((((var_1_48) > ((1 / var_1_38))) ? (var_1_48) : ((1 / var_1_38))))) {
  if (var_1_56 >= stepLocal_11) {
   var_1_64 = last_1_var_1_64;
  } else {
   var_1_64 = var_1_49;
  }
 }
 if ((((((- var_1_15)) < ((- 7.75))) ? ((- var_1_15)) : ((- 7.75)))) <= (- var_1_15)) {
  if (var_1_1) {
   var_1_7 = ((((((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) < 0 ) ? -(((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12)));
  } else {
   var_1_7 = (var_1_11 + var_1_10);
  }
 } else {
  var_1_7 = (var_1_13 - var_1_14);
 }
 unsigned char stepLocal_1 = var_1_4;
 if (var_1_15 == var_1_13) {
  if (var_1_16 > var_1_15) {
   if (stepLocal_1 && var_1_1) {
    if (! (var_1_17 == var_1_15)) {
     var_1_19 = (! var_1_4);
    } else {
     var_1_19 = var_1_4;
    }
   }
  }
 }
 unsigned long int stepLocal_4 = (((var_1_35) > (var_1_53)) ? (var_1_35) : (var_1_53));
 if (var_1_19) {
  if (! var_1_5) {
   if (stepLocal_4 <= var_1_29) {
    var_1_32 = ((var_1_34 - var_1_35) - var_1_31);
   } else {
    var_1_32 = ((((((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))) < 0 ) ? -((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))) : ((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))))) + (var_1_35 - var_1_31));
   }
  }
 }
 if ((var_1_49 / var_1_24) <= (((((var_1_22 ^ var_1_52)) > (10)) ? ((var_1_22 ^ var_1_52)) : (10)))) {
  if (var_1_58 >= var_1_15) {
   var_1_23 = ((((var_1_18) < (var_1_11)) ? (var_1_18) : (var_1_11)));
  }
 } else {
  var_1_23 = ((((var_1_11) < (256.4f)) ? (var_1_11) : (256.4f)));
 }
 unsigned char stepLocal_7 = var_1_1;
 if (((((((((24.75) < 0 ) ? -(24.75) : (24.75)))) < ((var_1_16 / 64.5))) ? (((((24.75) < 0 ) ? -(24.75) : (24.75)))) : ((var_1_16 / 64.5)))) < var_1_23) {
  if (var_1_11 >= (- (- var_1_10))) {
   var_1_41 = var_1_14;
  } else {
   if ((var_1_5 && var_1_1) && stepLocal_7) {
    var_1_41 = (var_1_40 - (((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44))) - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))));
   } else {
    var_1_41 = ((((var_1_43) > (((((var_1_10) > (256.2f)) ? (var_1_10) : (256.2f))))) ? (var_1_43) : (((((var_1_10) > (256.2f)) ? (var_1_10) : (256.2f))))));
   }
  }
 } else {
  var_1_41 = (((((32.75f) < (var_1_11)) ? (32.75f) : (var_1_11))) + var_1_10);
 }
 unsigned short int stepLocal_9 = var_1_64;
 if (((var_1_63 - var_1_59) - var_1_16) <= ((((var_1_10) > (var_1_44)) ? (var_1_10) : (var_1_44)))) {
  if (((- var_1_51) + var_1_55) >= stepLocal_9) {
   var_1_62 = var_1_64;
  } else {
   var_1_62 = var_1_46;
  }
 } else {
  var_1_62 = var_1_52;
 }
 if (var_1_8 == var_1_13) {
  if ((var_1_13 < var_1_9) && var_1_4) {
   var_1_20 = var_1_27;
  } else {
   var_1_20 = (var_1_27 + var_1_48);
  }
 } else {
  if (! (var_1_15 < var_1_7)) {
   if ((var_1_27 * var_1_48) < var_1_32) {
    var_1_20 = ((var_1_27 + var_1_48) - var_1_22);
   } else {
    var_1_20 = var_1_22;
   }
  } else {
   var_1_20 = var_1_22;
  }
 }
 if (var_1_37 == (var_1_10 + var_1_15)) {
  var_1_25 = (var_1_22 - (var_1_20 + var_1_35));
 } else {
  var_1_25 = (var_1_24 + var_1_20);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32766);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -128);
 assume_abort_if_not(var_1_24 <= 127);
 assume_abort_if_not(var_1_24 != 0);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 2147483647);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= 1073741822);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -128);
 assume_abort_if_not(var_1_38 <= 127);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -128);
 assume_abort_if_not(var_1_39 <= 127);
 assume_abort_if_not(var_1_39 != 0);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 4611686.018427383000e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 4611686.018427383000e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_46 >= -2147483647);
 assume_abort_if_not(var_1_46 <= 2147483646);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 16383);
 assume_abort_if_not(var_1_50 <= 32767);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65534);
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 1073741823);
 assume_abort_if_not(var_1_54 <= 2147483647);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 63);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 64);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= 4611686.018427388000e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 127);
 assume_abort_if_not(var_1_65 <= 255);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((last_1_var_1_47 < last_1_var_1_26) ? (var_1_1 == ((unsigned char) (var_1_4 || (! (var_1_5 && var_1_6))))) : 1) && (((((((- var_1_15)) < ((- 7.75))) ? ((- var_1_15)) : ((- 7.75)))) <= (- var_1_15)) ? (var_1_1 ? (var_1_7 == ((double) ((((((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) < 0 ) ? -(((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12))))) : (var_1_7 == ((double) (var_1_11 + var_1_10)))) : (var_1_7 == ((double) (var_1_13 - var_1_14))))) && ((((var_1_14 - var_1_13) * (var_1_16 - var_1_17)) != var_1_58) ? (var_1_5 ? (var_1_15 == ((double) var_1_13)) : (var_1_15 == ((double) var_1_18))) : (var_1_15 == ((double) var_1_10)))) && ((var_1_15 == var_1_13) ? ((var_1_16 > var_1_15) ? ((var_1_4 && var_1_1) ? ((! (var_1_17 == var_1_15)) ? (var_1_19 == ((unsigned char) (! var_1_4))) : (var_1_19 == ((unsigned char) var_1_4))) : 1) : 1) : 1)) && ((var_1_8 == var_1_13) ? (((var_1_13 < var_1_9) && var_1_4) ? (var_1_20 == ((signed short int) var_1_27)) : (var_1_20 == ((signed short int) (var_1_27 + var_1_48)))) : ((! (var_1_15 < var_1_7)) ? (((var_1_27 * var_1_48) < var_1_32) ? (var_1_20 == ((signed short int) ((var_1_27 + var_1_48) - var_1_22))) : (var_1_20 == ((signed short int) var_1_22))) : (var_1_20 == ((signed short int) var_1_22))))) && (((var_1_49 / var_1_24) <= (((((var_1_22 ^ var_1_52)) > (10)) ? ((var_1_22 ^ var_1_52)) : (10)))) ? ((var_1_58 >= var_1_15) ? (var_1_23 == ((float) ((((var_1_18) < (var_1_11)) ? (var_1_18) : (var_1_11))))) : 1) : (var_1_23 == ((float) ((((var_1_11) < (256.4f)) ? (var_1_11) : (256.4f))))))) && ((var_1_37 == (var_1_10 + var_1_15)) ? (var_1_25 == ((signed short int) (var_1_22 - (var_1_20 + var_1_35)))) : (var_1_25 == ((signed short int) (var_1_24 + var_1_20))))) && (var_1_5 ? (var_1_26 == ((signed short int) ((((last_1_var_1_45) > (var_1_24)) ? (last_1_var_1_45) : (var_1_24))))) : 1)) && ((last_1_var_1_58 <= var_1_17) ? ((((last_1_var_1_26 ^ -32) + (50 - var_1_28)) < var_1_22) ? ((last_1_var_1_7 <= 1.25) ? (var_1_27 == ((unsigned long int) ((((((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28)))) < ((((((3444168938u) > (var_1_29)) ? (3444168938u) : (var_1_29))) - (last_1_var_1_20 + last_1_var_1_26)))) ? (((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28)))) : ((((((3444168938u) > (var_1_29)) ? (3444168938u) : (var_1_29))) - (last_1_var_1_20 + last_1_var_1_26))))))) : (var_1_27 == ((unsigned long int) ((((var_1_29) < (var_1_22)) ? (var_1_29) : (var_1_22)))))) : 1) : 1)) && ((var_1_27 > (~ (var_1_45 / -2))) ? (var_1_30 == ((unsigned char) ((((var_1_28) < (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) ? (var_1_28) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))))) : 1)) && (var_1_19 ? ((! var_1_5) ? ((((((var_1_35) > (var_1_53)) ? (var_1_35) : (var_1_53))) <= var_1_29) ? (var_1_32 == ((signed long int) ((var_1_34 - var_1_35) - var_1_31))) : (var_1_32 == ((signed long int) ((((((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))) < 0 ) ? -((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))) : ((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))))) + (var_1_35 - var_1_31))))) : 1) : 1)) && ((var_1_28 < last_1_var_1_53) ? (var_1_35 == ((unsigned long int) ((((var_1_29) > (var_1_36)) ? (var_1_29) : (var_1_36))))) : (var_1_35 == ((unsigned long int) 2u)))) && (((var_1_24 / ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))) >= var_1_53) ? (var_1_37 == ((float) ((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) < 0 ) ? -((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) : ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) : (var_1_37 == ((float) (var_1_11 + (((((5.9f - var_1_40)) < (var_1_12)) ? ((5.9f - var_1_40)) : (var_1_12)))))))) && ((((((((((24.75) < 0 ) ? -(24.75) : (24.75)))) < ((var_1_16 / 64.5))) ? (((((24.75) < 0 ) ? -(24.75) : (24.75)))) : ((var_1_16 / 64.5)))) < var_1_23) ? ((var_1_11 >= (- (- var_1_10))) ? (var_1_41 == ((float) var_1_14)) : (((var_1_5 && var_1_1) && var_1_1) ? (var_1_41 == ((float) (var_1_40 - (((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44))) - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) : (var_1_41 == ((float) ((((var_1_43) > (((((var_1_10) > (256.2f)) ? (var_1_10) : (256.2f))))) ? (var_1_43) : (((((var_1_10) > (256.2f)) ? (var_1_10) : (256.2f)))))))))) : (var_1_41 == ((float) (((((32.75f) < (var_1_11)) ? (32.75f) : (var_1_11))) + var_1_10))))) && (var_1_4 ? (var_1_45 == ((signed long int) last_1_var_1_45)) : (var_1_45 == ((signed long int) ((((var_1_26) < (var_1_46)) ? (var_1_26) : (var_1_46))))))) && (var_1_47 == ((unsigned short int) (var_1_52 + var_1_27)))) && (last_1_var_1_1 ? (var_1_48 == ((unsigned short int) (38941 - ((((last_1_var_1_47) > (var_1_22)) ? (last_1_var_1_47) : (var_1_22)))))) : (var_1_48 == ((unsigned short int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))) && ((var_1_12 < (var_1_43 - var_1_40)) ? ((var_1_53 > var_1_36) ? (var_1_49 == ((unsigned short int) (((((((((var_1_22) > (0)) ? (var_1_22) : (0)))) < ((var_1_35 + var_1_28))) ? (((((var_1_22) > (0)) ? (var_1_22) : (0)))) : ((var_1_35 + var_1_28)))) + (((((var_1_50 - var_1_47)) < (var_1_55)) ? ((var_1_50 - var_1_47)) : (var_1_55)))))) : (var_1_49 == ((unsigned short int) (var_1_51 - (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - var_1_35))))) : (var_1_49 == ((unsigned short int) (63427 - var_1_31))))) && (var_1_6 ? (var_1_52 == ((signed short int) ((64 + var_1_45) - var_1_48))) : (var_1_52 == ((signed short int) (var_1_24 + ((var_1_31 + var_1_39) + ((((-128) > (-50)) ? (-128) : (-50))))))))) && ((var_1_35 > (var_1_45 - last_1_var_1_53)) ? (var_1_53 == ((unsigned long int) (((((last_1_var_1_53 + (var_1_54 - var_1_45))) > (((((last_1_var_1_53) < (var_1_29)) ? (last_1_var_1_53) : (var_1_29))))) ? ((last_1_var_1_53 + (var_1_54 - var_1_45))) : (((((last_1_var_1_53) < (var_1_29)) ? (last_1_var_1_53) : (var_1_29)))))))) : (var_1_53 == ((unsigned long int) 200u)))) && (var_1_55 == ((unsigned char) ((((((64) < (var_1_56)) ? (64) : (var_1_56))) + var_1_57) - 4)))) && ((var_1_13 <= (var_1_44 - var_1_40)) ? (var_1_58 == ((double) (((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))) + var_1_40))) : ((! var_1_5) ? (var_1_58 == ((double) ((var_1_40 - var_1_59) + (((((var_1_60 - var_1_61)) > (var_1_10)) ? ((var_1_60 - var_1_61)) : (var_1_10)))))) : (var_1_58 == ((double) ((((var_1_44) < (200.1)) ? (var_1_44) : (200.1)))))))) && ((((var_1_63 - var_1_59) - var_1_16) <= ((((var_1_10) > (var_1_44)) ? (var_1_10) : (var_1_44)))) ? ((((- var_1_51) + var_1_55) >= var_1_64) ? (var_1_62 == ((signed long int) var_1_64)) : (var_1_62 == ((signed long int) var_1_46))) : (var_1_62 == ((signed long int) var_1_52)))) && (((var_1_28 * (var_1_65 - var_1_57)) >= ((((var_1_48) > ((1 / var_1_38))) ? (var_1_48) : ((1 / var_1_38))))) ? ((var_1_56 >= var_1_26) ? (var_1_64 == ((unsigned short int) last_1_var_1_64)) : (var_1_64 == ((unsigned short int) var_1_49))) : 1)
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
