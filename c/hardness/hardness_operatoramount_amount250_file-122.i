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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 127.35;
double var_1_4 = 255.2;
double var_1_5 = 4.2;
double var_1_6 = 32.5;
double var_1_7 = 0.0;
double var_1_8 = 3.125;
unsigned short int var_1_9 = 256;
unsigned long int var_1_10 = 4;
unsigned long int var_1_11 = 2;
unsigned short int var_1_12 = 58398;
unsigned short int var_1_13 = 26114;
unsigned short int var_1_14 = 24847;
float var_1_15 = 5.8;
unsigned char var_1_17 = 0;
float var_1_18 = 25.75;
double var_1_19 = 7.95;
double var_1_20 = 31.25;
float var_1_21 = 0.0;
signed long int var_1_22 = 100;
signed long int var_1_24 = 1000000000;
unsigned long int var_1_25 = 50;
signed char var_1_26 = 16;
signed char var_1_27 = 2;
signed char var_1_28 = 64;
signed char var_1_29 = 5;
float var_1_30 = 127.4;
float var_1_31 = 9999999999.5;
float var_1_32 = 255.2;
float var_1_33 = 5.25;
double var_1_34 = 4.75;
unsigned short int var_1_35 = 16;
unsigned short int var_1_36 = 0;
float var_1_37 = 255.125;
unsigned char var_1_38 = 128;
unsigned long int var_1_39 = 16;
unsigned short int var_1_40 = 5;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned short int var_1_45 = 1;
unsigned char var_1_46 = 100;
unsigned char var_1_47 = 128;
unsigned char var_1_48 = 128;
signed short int var_1_49 = 128;
signed long int var_1_50 = 5;
signed long int var_1_51 = 64;
unsigned long int var_1_52 = 64;
unsigned long int var_1_53 = 2516855925;
signed short int var_1_54 = 8;
float var_1_55 = 63.5;
unsigned short int var_1_56 = 32;
float var_1_57 = 9.6;
unsigned short int var_1_58 = 10000;
double last_1_var_1_1 = 127.35;
unsigned short int last_1_var_1_9 = 256;
unsigned long int last_1_var_1_25 = 50;
float last_1_var_1_31 = 9999999999.5;
double last_1_var_1_34 = 4.75;
float last_1_var_1_37 = 255.125;
unsigned char last_1_var_1_41 = 1;
unsigned short int last_1_var_1_58 = 10000;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_15 = var_1_14 & var_1_28;
 unsigned char stepLocal_14 = last_1_var_1_41;
 if (stepLocal_14 || (((((last_1_var_1_1) < (last_1_var_1_34)) ? (last_1_var_1_1) : (last_1_var_1_34))) <= var_1_19)) {
  var_1_58 = var_1_13;
 } else {
  if (var_1_24 <= stepLocal_15) {
   var_1_58 = var_1_36;
  }
 }
 unsigned long int stepLocal_7 = (((last_1_var_1_58) > (last_1_var_1_25)) ? (last_1_var_1_58) : (last_1_var_1_25));
 if (((((25) > (var_1_10)) ? (25) : (var_1_10))) > stepLocal_7) {
  var_1_39 = ((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)));
 } else {
  var_1_39 = (var_1_36 + var_1_12);
 }
 signed long int stepLocal_1 = last_1_var_1_9 * ((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)));
 if ((256 >> var_1_11) != stepLocal_1) {
  var_1_22 = (var_1_10 - (var_1_11 + last_1_var_1_9));
 } else {
  if ((- last_1_var_1_1) < var_1_4) {
   var_1_22 = (((var_1_24 - var_1_11) - var_1_13) + last_1_var_1_9);
  } else {
   var_1_22 = (var_1_11 - var_1_10);
  }
 }
 if (last_1_var_1_37 <= last_1_var_1_31) {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = (var_1_6 - ((2.5684615569228887E18 + var_1_7) - var_1_8));
 }
 var_1_30 = (var_1_7 + var_1_21);
 unsigned char stepLocal_10 = var_1_38;
 unsigned short int stepLocal_9 = var_1_36;
 unsigned char stepLocal_8 = var_1_38;
 if (((var_1_14 / 64) / ((((var_1_11) > (var_1_28)) ? (var_1_11) : (var_1_28)))) <= stepLocal_8) {
  var_1_40 = (var_1_28 + var_1_29);
 } else {
  if ((- (var_1_38 - var_1_29)) < stepLocal_9) {
   var_1_40 = ((((64) < (var_1_12)) ? (64) : (var_1_12)));
  } else {
   if (var_1_11 >= stepLocal_10) {
    var_1_40 = (((((var_1_14) > (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_14) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))) + var_1_28);
   } else {
    var_1_40 = (var_1_12 - (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - (16 + var_1_28)));
   }
  }
 }
 if (var_1_17) {
  if (var_1_42) {
   var_1_41 = (var_1_43 && (! var_1_44));
  }
 }
 if (var_1_41) {
  var_1_45 = var_1_14;
 } else {
  var_1_45 = var_1_28;
 }
 unsigned char stepLocal_13 = var_1_43;
 if (((((var_1_30) > (var_1_33)) ? (var_1_30) : (var_1_33))) != var_1_20) {
  if (stepLocal_13 && var_1_17) {
   if (var_1_8 != (- (- var_1_7))) {
    var_1_50 = ((((((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36)))) < (var_1_12)) ? (((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36)))) : (var_1_12)));
   } else {
    var_1_50 = (var_1_51 + ((((-10) > (var_1_48)) ? (-10) : (var_1_48))));
   }
  }
 }
 if (! var_1_41) {
  var_1_54 = ((((256) > (var_1_38)) ? (256) : (var_1_38)));
 }
 if (var_1_4 < var_1_21) {
  var_1_55 = ((((var_1_32) > (var_1_19)) ? (var_1_32) : (var_1_19)));
 }
 if (var_1_41) {
  var_1_56 = 1;
 }
 if (var_1_41) {
  var_1_57 = var_1_21;
 }
 if (var_1_11 <= var_1_47) {
  if (! var_1_41) {
   var_1_52 = ((((((((var_1_36) < ((64u + var_1_48))) ? (var_1_36) : ((64u + var_1_48))))) > (var_1_39)) ? (((((var_1_36) < ((64u + var_1_48))) ? (var_1_36) : ((64u + var_1_48))))) : (var_1_39)));
  } else {
   var_1_52 = (var_1_53 - var_1_39);
  }
 } else {
  var_1_52 = (((((var_1_53 - var_1_22)) < (var_1_58)) ? ((var_1_53 - var_1_22)) : (var_1_58)));
 }
 unsigned long int stepLocal_3 = var_1_52;
 if (var_1_12 == stepLocal_3) {
  if ((((((var_1_7) < (var_1_18)) ? (var_1_7) : (var_1_18))) - var_1_6) > 63.8) {
   var_1_31 = (var_1_8 - var_1_32);
  } else {
   var_1_31 = 49.75f;
  }
 } else {
  var_1_31 = (var_1_20 - (var_1_33 + var_1_7));
 }
 if (var_1_6 < (- (var_1_31 / 100.75))) {
  var_1_15 = (var_1_6 - (var_1_7 + var_1_8));
 } else {
  if ((var_1_39 <= var_1_10) || var_1_41) {
   if ((var_1_8 - (var_1_7 + var_1_18)) <= (var_1_6 - (var_1_19 + var_1_20))) {
    var_1_15 = (((((((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) < (var_1_8)) ? (((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) : (var_1_8))) - var_1_6);
   }
  } else {
   var_1_15 = ((var_1_7 - (var_1_21 - 127.125f)) + 31.8f);
  }
 }
 if (((((256) < 0 ) ? -(256) : (256))) <= ((-50 + var_1_24) / ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) {
  var_1_25 = (var_1_40 + var_1_10);
 } else {
  var_1_25 = ((((var_1_14) < (var_1_11)) ? (var_1_14) : (var_1_11)));
 }
 unsigned short int stepLocal_2 = var_1_12;
 if (var_1_15 <= (var_1_1 + var_1_4)) {
  if (var_1_14 != stepLocal_2) {
   var_1_26 = ((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) + 25) - (var_1_28 - var_1_29));
  } else {
   var_1_26 = var_1_11;
  }
 } else {
  var_1_26 = var_1_29;
 }
 unsigned char stepLocal_4 = (var_1_29 + var_1_25) < var_1_12;
 if (var_1_7 < var_1_18) {
  if (stepLocal_4 || (128 <= -32)) {
   if (var_1_41) {
    var_1_35 = (((((((var_1_36) < (var_1_12)) ? (var_1_36) : (var_1_12))) < 0 ) ? -((((var_1_36) < (var_1_12)) ? (var_1_36) : (var_1_12))) : ((((var_1_36) < (var_1_12)) ? (var_1_36) : (var_1_12)))));
   }
  }
 }
 unsigned long int stepLocal_6 = (((var_1_45) < (var_1_11)) ? (var_1_45) : (var_1_11));
 unsigned long int stepLocal_5 = var_1_38 - ((((var_1_28) < (var_1_10)) ? (var_1_28) : (var_1_10)));
 if (! var_1_41) {
  var_1_37 = (((((var_1_8 - var_1_7)) < (var_1_20)) ? ((var_1_8 - var_1_7)) : (var_1_20)));
 } else {
  if (stepLocal_6 == var_1_12) {
   var_1_37 = ((((((var_1_21 - var_1_8)) < (var_1_7)) ? ((var_1_21 - var_1_8)) : (var_1_7))) + var_1_33);
  } else {
   if (stepLocal_5 < (500u ^ var_1_36)) {
    var_1_37 = ((((var_1_18) > (var_1_5)) ? (var_1_18) : (var_1_5)));
   } else {
    var_1_37 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
   }
  }
 }
 unsigned long int stepLocal_11 = var_1_25;
 if (stepLocal_11 > (var_1_24 / var_1_28)) {
  var_1_46 = ((((((1) < 0 ) ? -(1) : (1))) + ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))) + ((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))));
 } else {
  var_1_46 = (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - var_1_11);
 }
 unsigned long int stepLocal_12 = var_1_52;
 if (stepLocal_12 >= var_1_39) {
  var_1_49 = ((((var_1_38) > (var_1_48)) ? (var_1_38) : (var_1_48)));
 }
 if (var_1_41) {
  if (16 != (var_1_52 * var_1_10)) {
   var_1_34 = var_1_33;
  } else {
   if ((var_1_22 + var_1_39) < (((((var_1_14) < (var_1_24)) ? (var_1_14) : (var_1_24))) << var_1_27)) {
    var_1_34 = (var_1_21 + var_1_8);
   } else {
    var_1_34 = var_1_20;
   }
  }
 }
 signed long int stepLocal_0 = 10000;
 if (((64 << var_1_10) >> var_1_11) > stepLocal_0) {
  if (! (var_1_7 < (var_1_8 + var_1_34))) {
   var_1_9 = (var_1_12 - (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_10));
  }
 } else {
  var_1_9 = (((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) < 0 ) ? -((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) : ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 2305843.009213691400e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 24);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 30);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16383);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427388000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427388000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 2305843.009213691400e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= 536870911);
 assume_abort_if_not(var_1_24 <= 1073741823);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 63);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 65534);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 127);
 assume_abort_if_not(var_1_38 <= 255);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 127);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 127);
 assume_abort_if_not(var_1_48 <= 254);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= -1073741823);
 assume_abort_if_not(var_1_51 <= 1073741823);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 2147483647);
 assume_abort_if_not(var_1_53 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_58 = var_1_58;
}
int property(void) {
 return ((((((((((((((((((((((((last_1_var_1_37 <= last_1_var_1_31) ? (var_1_1 == ((double) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((double) (var_1_6 - ((2.5684615569228887E18 + var_1_7) - var_1_8))))) && ((((64 << var_1_10) >> var_1_11) > 10000) ? ((! (var_1_7 < (var_1_8 + var_1_34))) ? (var_1_9 == ((unsigned short int) (var_1_12 - (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_10)))) : 1) : (var_1_9 == ((unsigned short int) (((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) < 0 ) ? -((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) : ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))))))))) && ((var_1_6 < (- (var_1_31 / 100.75))) ? (var_1_15 == ((float) (var_1_6 - (var_1_7 + var_1_8)))) : (((var_1_39 <= var_1_10) || var_1_41) ? (((var_1_8 - (var_1_7 + var_1_18)) <= (var_1_6 - (var_1_19 + var_1_20))) ? (var_1_15 == ((float) (((((((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) < (var_1_8)) ? (((((var_1_20) < (31.5f)) ? (var_1_20) : (31.5f)))) : (var_1_8))) - var_1_6))) : 1) : (var_1_15 == ((float) ((var_1_7 - (var_1_21 - 127.125f)) + 31.8f)))))) && (((256 >> var_1_11) != (last_1_var_1_9 * ((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14))))) ? (var_1_22 == ((signed long int) (var_1_10 - (var_1_11 + last_1_var_1_9)))) : (((- last_1_var_1_1) < var_1_4) ? (var_1_22 == ((signed long int) (((var_1_24 - var_1_11) - var_1_13) + last_1_var_1_9))) : (var_1_22 == ((signed long int) (var_1_11 - var_1_10)))))) && ((((((256) < 0 ) ? -(256) : (256))) <= ((-50 + var_1_24) / ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (var_1_25 == ((unsigned long int) (var_1_40 + var_1_10))) : (var_1_25 == ((unsigned long int) ((((var_1_14) < (var_1_11)) ? (var_1_14) : (var_1_11))))))) && ((var_1_15 <= (var_1_1 + var_1_4)) ? ((var_1_14 != var_1_12) ? (var_1_26 == ((signed char) ((((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) + 25) - (var_1_28 - var_1_29)))) : (var_1_26 == ((signed char) var_1_11))) : (var_1_26 == ((signed char) var_1_29)))) && (var_1_30 == ((float) (var_1_7 + var_1_21)))) && ((var_1_12 == var_1_52) ? (((((((var_1_7) < (var_1_18)) ? (var_1_7) : (var_1_18))) - var_1_6) > 63.8) ? (var_1_31 == ((float) (var_1_8 - var_1_32))) : (var_1_31 == ((float) 49.75f))) : (var_1_31 == ((float) (var_1_20 - (var_1_33 + var_1_7)))))) && (var_1_41 ? ((16 != (var_1_52 * var_1_10)) ? (var_1_34 == ((double) var_1_33)) : (((var_1_22 + var_1_39) < (((((var_1_14) < (var_1_24)) ? (var_1_14) : (var_1_24))) << var_1_27)) ? (var_1_34 == ((double) (var_1_21 + var_1_8))) : (var_1_34 == ((double) var_1_20)))) : 1)) && ((var_1_7 < var_1_18) ? ((((var_1_29 + var_1_25) < var_1_12) || (128 <= -32)) ? (var_1_41 ? (var_1_35 == ((unsigned short int) (((((((var_1_36) < (var_1_12)) ? (var_1_36) : (var_1_12))) < 0 ) ? -((((var_1_36) < (var_1_12)) ? (var_1_36) : (var_1_12))) : ((((var_1_36) < (var_1_12)) ? (var_1_36) : (var_1_12))))))) : 1) : 1) : 1)) && ((! var_1_41) ? (var_1_37 == ((float) (((((var_1_8 - var_1_7)) < (var_1_20)) ? ((var_1_8 - var_1_7)) : (var_1_20))))) : ((((((var_1_45) < (var_1_11)) ? (var_1_45) : (var_1_11))) == var_1_12) ? (var_1_37 == ((float) ((((((var_1_21 - var_1_8)) < (var_1_7)) ? ((var_1_21 - var_1_8)) : (var_1_7))) + var_1_33))) : (((var_1_38 - ((((var_1_28) < (var_1_10)) ? (var_1_28) : (var_1_10)))) < (500u ^ var_1_36)) ? (var_1_37 == ((float) ((((var_1_18) > (var_1_5)) ? (var_1_18) : (var_1_5))))) : (var_1_37 == ((float) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))))) && ((((((25) > (var_1_10)) ? (25) : (var_1_10))) > ((((last_1_var_1_58) > (last_1_var_1_25)) ? (last_1_var_1_58) : (last_1_var_1_25)))) ? (var_1_39 == ((unsigned long int) ((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14))))) : (var_1_39 == ((unsigned long int) (var_1_36 + var_1_12))))) && ((((var_1_14 / 64) / ((((var_1_11) > (var_1_28)) ? (var_1_11) : (var_1_28)))) <= var_1_38) ? (var_1_40 == ((unsigned short int) (var_1_28 + var_1_29))) : (((- (var_1_38 - var_1_29)) < var_1_36) ? (var_1_40 == ((unsigned short int) ((((64) < (var_1_12)) ? (64) : (var_1_12))))) : ((var_1_11 >= var_1_38) ? (var_1_40 == ((unsigned short int) (((((var_1_14) > (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_14) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))) + var_1_28))) : (var_1_40 == ((unsigned short int) (var_1_12 - (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - (16 + var_1_28))))))))) && (var_1_17 ? (var_1_42 ? (var_1_41 == ((unsigned char) (var_1_43 && (! var_1_44)))) : 1) : 1)) && (var_1_41 ? (var_1_45 == ((unsigned short int) var_1_14)) : (var_1_45 == ((unsigned short int) var_1_28)))) && ((var_1_25 > (var_1_24 / var_1_28)) ? (var_1_46 == ((unsigned char) ((((((1) < 0 ) ? -(1) : (1))) + ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))) + ((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28)))))) : (var_1_46 == ((unsigned char) (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - var_1_11))))) && ((var_1_52 >= var_1_39) ? (var_1_49 == ((signed short int) ((((var_1_38) > (var_1_48)) ? (var_1_38) : (var_1_48))))) : 1)) && ((((((var_1_30) > (var_1_33)) ? (var_1_30) : (var_1_33))) != var_1_20) ? ((var_1_43 && var_1_17) ? ((var_1_8 != (- (- var_1_7))) ? (var_1_50 == ((signed long int) ((((((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36)))) < (var_1_12)) ? (((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36)))) : (var_1_12))))) : (var_1_50 == ((signed long int) (var_1_51 + ((((-10) > (var_1_48)) ? (-10) : (var_1_48))))))) : 1) : 1)) && ((var_1_11 <= var_1_47) ? ((! var_1_41) ? (var_1_52 == ((unsigned long int) ((((((((var_1_36) < ((64u + var_1_48))) ? (var_1_36) : ((64u + var_1_48))))) > (var_1_39)) ? (((((var_1_36) < ((64u + var_1_48))) ? (var_1_36) : ((64u + var_1_48))))) : (var_1_39))))) : (var_1_52 == ((unsigned long int) (var_1_53 - var_1_39)))) : (var_1_52 == ((unsigned long int) (((((var_1_53 - var_1_22)) < (var_1_58)) ? ((var_1_53 - var_1_22)) : (var_1_58))))))) && ((! var_1_41) ? (var_1_54 == ((signed short int) ((((256) > (var_1_38)) ? (256) : (var_1_38))))) : 1)) && ((var_1_4 < var_1_21) ? (var_1_55 == ((float) ((((var_1_32) > (var_1_19)) ? (var_1_32) : (var_1_19))))) : 1)) && (var_1_41 ? (var_1_56 == ((unsigned short int) 1)) : 1)) && (var_1_41 ? (var_1_57 == ((float) var_1_21)) : 1)) && ((last_1_var_1_41 || (((((last_1_var_1_1) < (last_1_var_1_34)) ? (last_1_var_1_1) : (last_1_var_1_34))) <= var_1_19)) ? (var_1_58 == ((unsigned short int) var_1_13)) : ((var_1_24 <= (var_1_14 & var_1_28)) ? (var_1_58 == ((unsigned short int) var_1_36)) : 1))
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
