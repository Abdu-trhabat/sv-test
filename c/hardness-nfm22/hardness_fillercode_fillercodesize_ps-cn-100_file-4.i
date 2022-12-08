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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 10;
double var_1_11 = 15.6;
double var_1_12 = 256.4;
double var_1_13 = 49.15;
unsigned long int var_1_14 = 500;
unsigned long int var_1_15 = 2173307753;
unsigned long int var_1_16 = 3362224480;
signed short int var_1_17 = 16;
signed short int var_1_19 = 16;
signed short int var_1_20 = 4;
signed short int var_1_21 = 0;
signed short int var_1_22 = -25;
signed char var_1_23 = 1;
double var_1_24 = 64.5;
double var_1_25 = 255.25;
double var_1_26 = 8.75;
signed char var_1_27 = 16;
signed char var_1_28 = -1;
unsigned char var_1_29 = 1;
signed char var_1_30 = 5;
signed char var_1_31 = 16;
signed short int var_1_32 = 8;
signed char var_1_33 = 8;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 8;
unsigned long int var_1_36 = 5;
unsigned long int var_1_37 = 5;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
signed long int var_1_40 = -10;
signed long int var_1_41 = 200;
unsigned char var_1_42 = 1;
signed long int var_1_43 = 100;
unsigned char var_1_44 = 0;
signed long int var_1_45 = 4;
unsigned char var_1_46 = 1;
signed short int var_1_47 = -32;
signed short int var_1_48 = 50;
signed short int var_1_49 = 16;
signed short int var_1_50 = 256;
signed short int var_1_51 = 200;
unsigned char var_1_52 = 0;
unsigned short int var_1_53 = 32;
signed long int var_1_54 = 10;
unsigned short int var_1_55 = 256;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
float var_1_58 = 32.875;
float var_1_59 = 15.5;
double var_1_60 = 127.2;
double var_1_61 = 50.5;
double var_1_62 = 0.5;
unsigned short int last_1_var_1_6 = 4;
unsigned short int last_1_var_1_9 = 4;
unsigned long int last_1_var_1_14 = 500;
signed short int last_1_var_1_17 = 16;
void initially(void) {
}
void step(void) {
 if ((var_1_24 / var_1_25) < ((((256.85) > (var_1_26)) ? (256.85) : (var_1_26)))) {
  var_1_23 = var_1_27;
 }
 if (var_1_29) {
  var_1_28 = ((((var_1_27) > ((var_1_30 + var_1_31))) ? (var_1_27) : ((var_1_30 + var_1_31))));
 }
 if (var_1_27 < (var_1_31 >> var_1_28)) {
  var_1_32 = (((((((var_1_30) < (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))) ? (var_1_30) : (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28)))))) < 0 ) ? -((((var_1_30) < (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))) ? (var_1_30) : (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28)))))) : ((((var_1_30) < (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))) ? (var_1_30) : (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))))));
 } else {
  if (var_1_30 >= ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) {
   var_1_32 = ((((var_1_27) > (var_1_23)) ? (var_1_27) : (var_1_23)));
  } else {
   var_1_32 = ((((-8) < 0 ) ? -(-8) : (-8)));
  }
 }
 if ((var_1_35 / var_1_36) < var_1_37) {
  var_1_34 = (! (var_1_38 || var_1_39));
 } else {
  if (var_1_29) {
   if (((((var_1_31) > (var_1_23)) ? (var_1_31) : (var_1_23))) <= (var_1_36 / ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))))) {
    var_1_34 = (! var_1_39);
   }
  }
 }
 if ((var_1_40 * var_1_30) <= var_1_43) {
  var_1_42 = (var_1_34 && var_1_39);
 }
 if (var_1_45 > var_1_41) {
  var_1_44 = var_1_46;
 }
 if (var_1_32 > var_1_40) {
  var_1_47 = ((((var_1_48) < ((((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))) - var_1_51))) ? (var_1_48) : ((((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))) - var_1_51))));
 }
 if (! (var_1_47 <= (var_1_36 % var_1_41))) {
  if ((var_1_49 - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) < var_1_51) {
   var_1_52 = ((var_1_36 >= var_1_45) || (! var_1_39));
  }
 }
 if (var_1_40 < ((((var_1_51 - var_1_54) < 0 ) ? -(var_1_51 - var_1_54) : (var_1_51 - var_1_54)))) {
  if (var_1_25 == var_1_26) {
   var_1_53 = (var_1_51 + ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))));
  }
 } else {
  if (var_1_46 || (var_1_30 <= (var_1_51 | var_1_35))) {
   var_1_53 = ((((var_1_51) < (var_1_55)) ? (var_1_51) : (var_1_55)));
  }
 }
 if (var_1_32 <= var_1_55) {
  if ((var_1_55 | var_1_53) <= var_1_32) {
   var_1_56 = (var_1_46 && var_1_57);
  }
 }
 if (var_1_50 >= (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) & 16)) {
  var_1_58 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
 }
 if (var_1_36 > var_1_53) {
  if (-64 > var_1_32) {
   var_1_60 = ((((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))) < (((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))))) ? (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))) : (((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))))));
  }
 } else {
  var_1_60 = var_1_62;
 }
 signed long int stepLocal_0 = last_1_var_1_9;
 if (var_1_5) {
  if ((last_1_var_1_14 * (last_1_var_1_6 + last_1_var_1_17)) > stepLocal_0) {
   var_1_6 = 256;
  }
 }
 signed long int stepLocal_3 = last_1_var_1_9;
 if (last_1_var_1_14 >= stepLocal_3) {
  var_1_14 = (((((var_1_15) > ((var_1_16 - var_1_10))) ? (var_1_15) : ((var_1_16 - var_1_10)))) - last_1_var_1_17);
 }
 if (var_1_6 <= var_1_14) {
  if ((- var_1_14) > var_1_6) {
   var_1_1 = 0;
  }
 } else {
  var_1_1 = (var_1_4 || var_1_5);
 }
 unsigned char stepLocal_2 = var_1_4;
 unsigned long int stepLocal_1 = var_1_14;
 if (stepLocal_2 || var_1_1) {
  var_1_9 = ((((32) < (var_1_10)) ? (32) : (var_1_10)));
 } else {
  if (stepLocal_1 >= var_1_6) {
   var_1_9 = var_1_10;
  } else {
   var_1_9 = var_1_10;
  }
 }
 unsigned char stepLocal_5 = var_1_1;
 unsigned char stepLocal_4 = var_1_1;
 if (stepLocal_4 && (var_1_5 && (var_1_12 < var_1_13))) {
  if (stepLocal_5 || (last_1_var_1_17 >= ((((var_1_14) > (var_1_6)) ? (var_1_14) : (var_1_6))))) {
   var_1_17 = (((((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) < ((var_1_22 + 64))) ? ((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) : ((var_1_22 + 64))));
  } else {
   var_1_17 = var_1_19;
  }
 }
 if (var_1_14 <= var_1_14) {
  if (! var_1_1) {
   var_1_11 = (var_1_12 - var_1_13);
  }
 } else {
  var_1_11 = var_1_12;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 2147483647);
 assume_abort_if_not(var_1_15 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 3221225470);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -16383);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 16383);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -16383);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -63);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -63);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 4294967295);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 4294967295);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 4294967295);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483648);
 assume_abort_if_not(var_1_40 <= 2147483647);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -2147483648);
 assume_abort_if_not(var_1_41 <= 2147483647);
 assume_abort_if_not(var_1_41 != 0);
 var_1_43 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_43 >= -2147483648);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= -2147483648);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= -32767);
 assume_abort_if_not(var_1_48 <= 32766);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= -1);
 assume_abort_if_not(var_1_49 <= 32766);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= -1);
 assume_abort_if_not(var_1_50 <= 32766);
 var_1_51 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 32766);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 2147483647);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 32767);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= -922337.2036854765600e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -922337.2036854765600e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= -922337.2036854765600e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return ((((((var_1_6 <= var_1_14) ? (((- var_1_14) > var_1_6) ? (var_1_1 == ((unsigned char) 0)) : 1) : (var_1_1 == ((unsigned char) (var_1_4 || var_1_5)))) && (var_1_5 ? (((last_1_var_1_14 * (last_1_var_1_6 + last_1_var_1_17)) > last_1_var_1_9) ? (var_1_6 == ((unsigned short int) 256)) : 1) : 1)) && ((var_1_4 || var_1_1) ? (var_1_9 == ((unsigned short int) ((((32) < (var_1_10)) ? (32) : (var_1_10))))) : ((var_1_14 >= var_1_6) ? (var_1_9 == ((unsigned short int) var_1_10)) : (var_1_9 == ((unsigned short int) var_1_10))))) && ((var_1_14 <= var_1_14) ? ((! var_1_1) ? (var_1_11 == ((double) (var_1_12 - var_1_13))) : 1) : (var_1_11 == ((double) var_1_12)))) && ((last_1_var_1_14 >= last_1_var_1_9) ? (var_1_14 == ((unsigned long int) (((((var_1_15) > ((var_1_16 - var_1_10))) ? (var_1_15) : ((var_1_16 - var_1_10)))) - last_1_var_1_17))) : 1)) && ((var_1_1 && (var_1_5 && (var_1_12 < var_1_13))) ? ((var_1_1 || (last_1_var_1_17 >= ((((var_1_14) > (var_1_6)) ? (var_1_14) : (var_1_6))))) ? (var_1_17 == ((signed short int) (((((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) < ((var_1_22 + 64))) ? ((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) : ((var_1_22 + 64)))))) : (var_1_17 == ((signed short int) var_1_19))) : 1)
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
