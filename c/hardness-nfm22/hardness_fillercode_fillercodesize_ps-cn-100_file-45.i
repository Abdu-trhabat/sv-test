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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
unsigned char var_1_20 = 1;
float var_1_21 = 24.5;
float var_1_22 = 499.8;
float var_1_23 = 8.25;
float var_1_24 = 100.75;
double var_1_25 = 32.15;
signed short int var_1_26 = 0;
signed long int var_1_27 = -16;
double var_1_28 = 31.56;
double var_1_29 = 0.9;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 128;
unsigned short int var_1_32 = 128;
signed char var_1_33 = 25;
signed char var_1_34 = 25;
signed short int var_1_35 = -1;
signed long int var_1_36 = -256;
signed char var_1_37 = -32;
signed char var_1_38 = -32;
signed char var_1_39 = -8;
signed char var_1_40 = -10;
double var_1_41 = 49.3;
double var_1_42 = 0.5;
double var_1_43 = 4.8;
unsigned char var_1_44 = 1;
signed char var_1_45 = 100;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned short int var_1_50 = 60724;
unsigned short int var_1_51 = 50;
unsigned short int var_1_52 = 5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
signed short int var_1_55 = -500;
float var_1_56 = 256.4;
signed short int var_1_57 = 10000;
signed short int var_1_58 = 100;
signed long int var_1_59 = -128;
signed short int var_1_60 = -5;
unsigned char var_1_61 = 32;
unsigned char var_1_62 = 5;
void initially(void) {
}
void step(void) {
 if (var_1_20) {
  var_1_19 = ((((((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) > (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))) ? (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) : (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))));
 }
 if (var_1_20) {
  if (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) <= var_1_27) {
   var_1_25 = (var_1_28 - ((((var_1_29) > (((((0.4) < 0 ) ? -(0.4) : (0.4))))) ? (var_1_29) : (((((0.4) < 0 ) ? -(0.4) : (0.4)))))));
  } else {
   var_1_25 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
  }
 }
 var_1_30 = (var_1_31 + var_1_32);
 if (! (var_1_31 > var_1_27)) {
  var_1_33 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if (var_1_25 > (var_1_23 + var_1_29)) {
  var_1_35 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 }
 if (var_1_20 && (var_1_34 > (var_1_30 + var_1_27))) {
  if (! ((var_1_34 % var_1_37) > ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) {
   var_1_36 = (var_1_30 - var_1_31);
  } else {
   var_1_36 = -32;
  }
 }
 if (var_1_36 <= ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) {
  var_1_38 = (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) + var_1_40);
 }
 if (var_1_28 <= var_1_23) {
  var_1_41 = (((((((7.5) < 0 ) ? -(7.5) : (7.5))) < 0 ) ? -((((7.5) < 0 ) ? -(7.5) : (7.5))) : ((((7.5) < 0 ) ? -(7.5) : (7.5)))));
 } else {
  if (var_1_27 != var_1_26) {
   var_1_41 = (((((((((((var_1_23) < (var_1_42)) ? (var_1_23) : (var_1_42)))) < (var_1_29)) ? (((((var_1_23) < (var_1_42)) ? (var_1_23) : (var_1_42)))) : (var_1_29))) < 0 ) ? -((((((((var_1_23) < (var_1_42)) ? (var_1_23) : (var_1_42)))) < (var_1_29)) ? (((((var_1_23) < (var_1_42)) ? (var_1_23) : (var_1_42)))) : (var_1_29))) : ((((((((var_1_23) < (var_1_42)) ? (var_1_23) : (var_1_42)))) < (var_1_29)) ? (((((var_1_23) < (var_1_42)) ? (var_1_23) : (var_1_42)))) : (var_1_29)))));
  } else {
   var_1_41 = (((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) < 0 ) ? -((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) : ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))));
  }
 }
 if (var_1_40 != ((((var_1_27) < (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_27) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))) {
  if ((~ var_1_32) >= (var_1_34 + var_1_45)) {
   if (((((var_1_37) > (var_1_31)) ? (var_1_37) : (var_1_31))) >= var_1_26) {
    var_1_44 = (var_1_46 || var_1_47);
   }
  }
 } else {
  var_1_44 = ((var_1_42 > var_1_25) && (var_1_20 && var_1_48));
 }
 if (var_1_31 >= (var_1_50 - (var_1_51 + var_1_52))) {
  var_1_49 = (! ((var_1_47 && var_1_53) && var_1_54));
 }
 if (var_1_21 > var_1_25) {
  var_1_55 = var_1_33;
 } else {
  if (var_1_24 <= (25.25f / var_1_56)) {
   var_1_55 = ((var_1_52 + (var_1_57 - var_1_58)) - var_1_51);
  } else {
   var_1_55 = (((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) < 0 ) ? -((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) : ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))));
  }
 }
 var_1_59 = var_1_30;
 var_1_60 = var_1_57;
 var_1_61 = var_1_62;
 if (var_1_8 > var_1_9) {
  var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 } else {
  var_1_10 = (var_1_12 - (var_1_13 - 8));
 }
 if (var_1_2) {
  var_1_16 = (var_1_5 || var_1_17);
 }
 var_1_18 = var_1_8;
 unsigned long int stepLocal_2 = var_1_18;
 signed char stepLocal_1 = var_1_10;
 if (stepLocal_2 <= var_1_10) {
  if (var_1_10 <= stepLocal_1) {
   var_1_6 = var_1_10;
  }
 }
 var_1_7 = (((((var_1_8 - var_1_18)) < (var_1_9)) ? ((var_1_8 - var_1_18)) : (var_1_9)));
 if (! var_1_16) {
  if (var_1_16) {
   var_1_14 = ((32 + var_1_10) + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
  } else {
   var_1_14 = -50;
  }
 }
 signed long int stepLocal_3 = var_1_6 * (var_1_6 + var_1_8);
 if (var_1_14 >= stepLocal_3) {
  var_1_15 = ((((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))));
 } else {
  var_1_15 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 }
 signed long int stepLocal_0 = ~ var_1_15;
 if (var_1_16) {
  if (stepLocal_0 <= (var_1_10 + 100000000)) {
   if (! var_1_16) {
    var_1_1 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
   } else {
    var_1_1 = (var_1_15 + 32);
   }
  } else {
   var_1_1 = var_1_15;
  }
 } else {
  var_1_1 = var_1_15;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -126);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32767);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -126);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -128);
 assume_abort_if_not(var_1_37 <= 127);
 assume_abort_if_not(var_1_37 != 0);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65535);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 16384);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 16383);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 1);
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 assume_abort_if_not(var_1_56 != 0.0F);
 var_1_57 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_57 >= 8191);
 assume_abort_if_not(var_1_57 <= 16383);
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 8191);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 254);
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_16 ? (((~ var_1_15) <= (var_1_10 + 100000000)) ? ((! var_1_16) ? (var_1_1 == ((signed short int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : (var_1_1 == ((signed short int) (var_1_15 + 32)))) : (var_1_1 == ((signed short int) var_1_15))) : (var_1_1 == ((signed short int) var_1_15))) && ((var_1_18 <= var_1_10) ? ((var_1_10 <= var_1_10) ? (var_1_6 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_7 == ((unsigned short int) (((((var_1_8 - var_1_18)) < (var_1_9)) ? ((var_1_8 - var_1_18)) : (var_1_9)))))) && ((var_1_8 > var_1_9) ? (var_1_10 == ((signed char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_10 == ((signed char) (var_1_12 - (var_1_13 - 8)))))) && ((! var_1_16) ? (var_1_16 ? (var_1_14 == ((signed short int) ((32 + var_1_10) + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : (var_1_14 == ((signed short int) -50))) : 1)) && ((var_1_14 >= (var_1_6 * (var_1_6 + var_1_8))) ? (var_1_15 == ((signed char) ((((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))))) : (var_1_15 == ((signed char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))))) && (var_1_2 ? (var_1_16 == ((unsigned char) (var_1_5 || var_1_17))) : 1)) && (var_1_18 == ((unsigned long int) var_1_8))
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
