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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
unsigned long int var_1_4 = 4042214920;
signed long int var_1_6 = -128;
signed char var_1_8 = 8;
signed char var_1_10 = 1;
signed char var_1_11 = 100;
signed char var_1_12 = 64;
signed char var_1_13 = 16;
signed long int var_1_14 = -256;
signed char var_1_15 = 0;
unsigned short int var_1_16 = 16;
unsigned short int var_1_18 = 55243;
unsigned short int var_1_19 = 49474;
signed short int var_1_21 = 16;
unsigned short int var_1_22 = 128;
double var_1_23 = 31.5;
double var_1_24 = 16.5;
double var_1_25 = 32.1;
unsigned short int var_1_28 = 61466;
signed long int var_1_29 = -8;
unsigned long int var_1_30 = 2;
double var_1_31 = 127.3;
double var_1_32 = 64.6;
double var_1_33 = 16.4;
double var_1_34 = 499.8;
double var_1_35 = 1.775;
double var_1_36 = 1.75;
double var_1_37 = 128.75;
double var_1_39 = 16.2;
signed long int var_1_40 = -200;
unsigned short int var_1_43 = 10;
signed char var_1_44 = 25;
signed char var_1_45 = -1;
signed char var_1_46 = -4;
unsigned char var_1_47 = 4;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 50;
unsigned char var_1_50 = 50;
unsigned char var_1_51 = 10;
float var_1_52 = 3.4;
float var_1_53 = 8.5;
float var_1_54 = 15.25;
float var_1_55 = 63.5;
unsigned long int var_1_56 = 2;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
unsigned short int var_1_60 = 50;
signed long int var_1_61 = -50;
signed long int var_1_62 = -1000000;
signed long int var_1_63 = 1000000000;
unsigned short int var_1_64 = 64;
unsigned short int var_1_65 = 22957;
unsigned short int last_1_var_1_16 = 16;
unsigned short int last_1_var_1_22 = 128;
signed long int last_1_var_1_29 = -8;
unsigned long int last_1_var_1_30 = 2;
signed long int last_1_var_1_40 = -200;
unsigned short int last_1_var_1_43 = 10;
unsigned char last_1_var_1_47 = 4;
unsigned long int last_1_var_1_56 = 2;
unsigned char last_1_var_1_57 = 1;
unsigned short int last_1_var_1_64 = 64;
void initially(void) {
}
void step(void) {
 if ((((((last_1_var_1_47) > (last_1_var_1_56)) ? (last_1_var_1_47) : (last_1_var_1_56))) >= 256u) && var_1_59) {
  if ((var_1_25 - (var_1_54 + 9.25)) <= var_1_23) {
   if (var_1_58) {
    var_1_60 = ((((10) < (var_1_48)) ? (10) : (var_1_48)));
   } else {
    var_1_60 = ((((var_1_49) < (var_1_18)) ? (var_1_49) : (var_1_18)));
   }
  }
 } else {
  var_1_60 = (((((last_1_var_1_40) > (var_1_48)) ? (last_1_var_1_40) : (var_1_48))) + last_1_var_1_47);
 }
 signed long int stepLocal_14 = last_1_var_1_40;
 if (((var_1_50 / var_1_49) >> var_1_13) >= stepLocal_14) {
  var_1_61 = last_1_var_1_40;
 } else {
  var_1_61 = var_1_11;
 }
 if (last_1_var_1_57) {
  if (last_1_var_1_16 != (var_1_15 | 5u)) {
   if (last_1_var_1_16 > (256u * last_1_var_1_64)) {
    var_1_16 = var_1_13;
   } else {
    var_1_16 = (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_15);
   }
  } else {
   if ((last_1_var_1_22 / ((((var_1_6) > (var_1_21)) ? (var_1_6) : (var_1_21)))) >= var_1_13) {
    var_1_16 = 5;
   }
  }
 }
 signed long int stepLocal_12 = ((((var_1_10 * last_1_var_1_43)) > (last_1_var_1_40)) ? ((var_1_10 * last_1_var_1_43)) : (last_1_var_1_40));
 unsigned long int stepLocal_11 = (var_1_13 + last_1_var_1_30) + ((((last_1_var_1_29) > (var_1_11)) ? (last_1_var_1_29) : (var_1_11)));
 unsigned char stepLocal_10 = last_1_var_1_57;
 if (var_1_21 > stepLocal_11) {
  if ((var_1_15 != last_1_var_1_29) && stepLocal_10) {
   var_1_47 = 128;
  } else {
   if (var_1_35 <= 0.5) {
    var_1_47 = ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)));
   } else {
    if (stepLocal_12 > (last_1_var_1_43 / ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) {
     var_1_47 = (((var_1_48 + var_1_49) - var_1_15) + (var_1_13 + (var_1_50 - var_1_51)));
    } else {
     var_1_47 = (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) + var_1_15);
    }
   }
  }
 } else {
  var_1_47 = (1 + var_1_15);
 }
 if (var_1_36 >= ((((var_1_24) > (((((-0.4) > (var_1_33)) ? (-0.4) : (var_1_33))))) ? (var_1_24) : (((((-0.4) > (var_1_33)) ? (-0.4) : (var_1_33))))))) {
  var_1_53 = (var_1_35 - (((((var_1_54 + var_1_55)) < (var_1_36)) ? ((var_1_54 + var_1_55)) : (var_1_36))));
 }
 var_1_56 = ((var_1_13 + var_1_18) + var_1_19);
 var_1_57 = ((! var_1_58) && var_1_59);
 var_1_62 = (var_1_12 - ((var_1_63 + 1000000000) - var_1_18));
 unsigned short int stepLocal_6 = var_1_60;
 unsigned short int stepLocal_5 = var_1_16;
 unsigned short int stepLocal_4 = var_1_28;
 if ((var_1_18 / ((((var_1_21) > (var_1_6)) ? (var_1_21) : (var_1_6)))) <= stepLocal_6) {
  var_1_34 = (((((var_1_35 - var_1_36)) > ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - 2.8))) ? ((var_1_35 - var_1_36)) : ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - 2.8))));
 } else {
  if ((var_1_32 + (var_1_25 * 15.4f)) <= ((- var_1_36) * (var_1_24 - var_1_35))) {
   if (var_1_4 != stepLocal_5) {
    var_1_34 = ((((var_1_36 - var_1_35) < 0 ) ? -(var_1_36 - var_1_35) : (var_1_36 - var_1_35)));
   } else {
    var_1_34 = (var_1_35 - var_1_36);
   }
  } else {
   if (var_1_60 < stepLocal_4) {
    var_1_34 = var_1_32;
   }
  }
 }
 unsigned short int stepLocal_8 = var_1_16;
 if (stepLocal_8 < ((((var_1_13 * var_1_61) < 0 ) ? -(var_1_13 * var_1_61) : (var_1_13 * var_1_61)))) {
  var_1_43 = (var_1_12 + (27324 - var_1_15));
 } else {
  var_1_43 = (var_1_12 + var_1_47);
 }
 if ((var_1_23 - ((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25)))) <= var_1_53) {
  var_1_22 = (((((4 + var_1_13)) > ((var_1_47 + (var_1_11 + var_1_12)))) ? ((4 + var_1_13)) : ((var_1_47 + (var_1_11 + var_1_12)))));
 } else {
  var_1_22 = (((((var_1_19) > ((var_1_28 - 25))) ? (var_1_19) : ((var_1_28 - 25)))) - (var_1_13 + var_1_12));
 }
 signed char stepLocal_7 = var_1_12;
 if (var_1_57) {
  if (stepLocal_7 < 50) {
   var_1_37 = (var_1_32 + var_1_33);
  } else {
   var_1_37 = ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (var_1_36)) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (var_1_36)));
  }
 }
 if (var_1_57) {
  var_1_39 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 } else {
  var_1_39 = (var_1_32 + ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))));
 }
 unsigned char stepLocal_13 = var_1_57;
 if (var_1_57 || stepLocal_13) {
  var_1_52 = (var_1_35 - 100.5f);
 } else {
  var_1_52 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 }
 if (var_1_34 != 5.6) {
  var_1_30 = ((((var_1_47) < (var_1_28)) ? (var_1_47) : (var_1_28)));
 } else {
  var_1_30 = var_1_28;
 }
 if (var_1_61 >= var_1_30) {
  var_1_1 = (var_1_4 - var_1_16);
 } else {
  if (((var_1_61 * var_1_16) / var_1_6) <= (var_1_4 / 5u)) {
   var_1_1 = (var_1_16 + var_1_16);
  } else {
   var_1_1 = ((((var_1_4) < (var_1_16)) ? (var_1_4) : (var_1_16)));
  }
 }
 unsigned char stepLocal_9 = var_1_1 >= var_1_1;
 if (stepLocal_9 && var_1_57) {
  var_1_44 = (var_1_13 + (var_1_45 + var_1_46));
 }
 if (var_1_47 >= var_1_10) {
  if (16.5f <= var_1_24) {
   var_1_29 = (var_1_11 - var_1_19);
  }
 } else {
  if ((var_1_15 & var_1_22) >= (var_1_18 + var_1_44)) {
   var_1_29 = (((2005264091 - 1) - ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) - var_1_19);
  } else {
   var_1_29 = ((var_1_47 - var_1_11) + var_1_13);
  }
 }
 unsigned short int stepLocal_0 = var_1_22;
 if (stepLocal_0 != var_1_29) {
  var_1_8 = (var_1_10 - ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))));
 } else {
  var_1_8 = (var_1_11 - ((var_1_13 + 5) + 10));
 }
 unsigned long int stepLocal_15 = var_1_1;
 if (var_1_60 <= stepLocal_15) {
  var_1_64 = (5 + (var_1_65 - var_1_44));
 }
 unsigned long int stepLocal_2 = ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) / var_1_6;
 signed long int stepLocal_1 = (var_1_13 + var_1_15) - var_1_11;
 if (var_1_12 < stepLocal_1) {
  if (var_1_4 <= stepLocal_2) {
   var_1_14 = ((((var_1_15) < (var_1_43)) ? (var_1_15) : (var_1_43)));
  }
 } else {
  var_1_14 = (-1 - var_1_13);
 }
 unsigned long int stepLocal_3 = var_1_1;
 if (((((var_1_16) > (8)) ? (var_1_16) : (8))) <= stepLocal_3) {
  var_1_31 = (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_33);
 }
 if ((- var_1_19) >= var_1_62) {
  var_1_40 = (((((var_1_47 - var_1_22)) < (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) ? ((var_1_47 - var_1_22)) : (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))));
 } else {
  if (32u >= var_1_43) {
   var_1_40 = ((((var_1_28) > (((((var_1_10) > (32)) ? (var_1_10) : (32))))) ? (var_1_28) : (((((var_1_10) > (32)) ? (var_1_10) : (32))))));
  } else {
   if ((var_1_8 + var_1_61) == var_1_60) {
    var_1_40 = ((var_1_15 + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) - ((var_1_61 + var_1_12) + var_1_13));
   }
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 2147483647);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 32767);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -32768);
 assume_abort_if_not(var_1_21 <= 32767);
 assume_abort_if_not(var_1_21 != 0);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 49150);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -461168.6018427382800e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -31);
 assume_abort_if_not(var_1_45 <= 32);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -31);
 assume_abort_if_not(var_1_46 <= 31);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 31);
 assume_abort_if_not(var_1_48 <= 64);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 32);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 31);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 31);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 0);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 1);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_63 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_63 >= 536870911);
 assume_abort_if_not(var_1_63 <= 1073741823);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 16383);
 assume_abort_if_not(var_1_65 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_64 = var_1_64;
}
int property() {
 return (((((((((((((((((((((((var_1_61 >= var_1_30) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_16))) : ((((var_1_61 * var_1_16) / var_1_6) <= (var_1_4 / 5u)) ? (var_1_1 == ((unsigned long int) (var_1_16 + var_1_16))) : (var_1_1 == ((unsigned long int) ((((var_1_4) < (var_1_16)) ? (var_1_4) : (var_1_16))))))) && ((var_1_22 != var_1_29) ? (var_1_8 == ((signed char) (var_1_10 - ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))))) : (var_1_8 == ((signed char) (var_1_11 - ((var_1_13 + 5) + 10)))))) && ((var_1_12 < ((var_1_13 + var_1_15) - var_1_11)) ? ((var_1_4 <= (((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) / var_1_6)) ? (var_1_14 == ((signed long int) ((((var_1_15) < (var_1_43)) ? (var_1_15) : (var_1_43))))) : 1) : (var_1_14 == ((signed long int) (-1 - var_1_13))))) && (last_1_var_1_57 ? ((last_1_var_1_16 != (var_1_15 | 5u)) ? ((last_1_var_1_16 > (256u * last_1_var_1_64)) ? (var_1_16 == ((unsigned short int) var_1_13)) : (var_1_16 == ((unsigned short int) (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_15)))) : (((last_1_var_1_22 / ((((var_1_6) > (var_1_21)) ? (var_1_6) : (var_1_21)))) >= var_1_13) ? (var_1_16 == ((unsigned short int) 5)) : 1)) : 1)) && (((var_1_23 - ((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25)))) <= var_1_53) ? (var_1_22 == ((unsigned short int) (((((4 + var_1_13)) > ((var_1_47 + (var_1_11 + var_1_12)))) ? ((4 + var_1_13)) : ((var_1_47 + (var_1_11 + var_1_12))))))) : (var_1_22 == ((unsigned short int) (((((var_1_19) > ((var_1_28 - 25))) ? (var_1_19) : ((var_1_28 - 25)))) - (var_1_13 + var_1_12)))))) && ((var_1_47 >= var_1_10) ? ((16.5f <= var_1_24) ? (var_1_29 == ((signed long int) (var_1_11 - var_1_19))) : 1) : (((var_1_15 & var_1_22) >= (var_1_18 + var_1_44)) ? (var_1_29 == ((signed long int) (((2005264091 - 1) - ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) - var_1_19))) : (var_1_29 == ((signed long int) ((var_1_47 - var_1_11) + var_1_13)))))) && ((var_1_34 != 5.6) ? (var_1_30 == ((unsigned long int) ((((var_1_47) < (var_1_28)) ? (var_1_47) : (var_1_28))))) : (var_1_30 == ((unsigned long int) var_1_28)))) && ((((((var_1_16) > (8)) ? (var_1_16) : (8))) <= var_1_1) ? (var_1_31 == ((double) (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_33))) : 1)) && (((var_1_18 / ((((var_1_21) > (var_1_6)) ? (var_1_21) : (var_1_6)))) <= var_1_60) ? (var_1_34 == ((double) (((((var_1_35 - var_1_36)) > ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - 2.8))) ? ((var_1_35 - var_1_36)) : ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - 2.8)))))) : (((var_1_32 + (var_1_25 * 15.4f)) <= ((- var_1_36) * (var_1_24 - var_1_35))) ? ((var_1_4 != var_1_16) ? (var_1_34 == ((double) ((((var_1_36 - var_1_35) < 0 ) ? -(var_1_36 - var_1_35) : (var_1_36 - var_1_35))))) : (var_1_34 == ((double) (var_1_35 - var_1_36)))) : ((var_1_60 < var_1_28) ? (var_1_34 == ((double) var_1_32)) : 1)))) && (var_1_57 ? ((var_1_12 < 50) ? (var_1_37 == ((double) (var_1_32 + var_1_33))) : (var_1_37 == ((double) ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (var_1_36)) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (var_1_36)))))) : 1)) && (var_1_57 ? (var_1_39 == ((double) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (var_1_39 == ((double) (var_1_32 + ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))))) && (((- var_1_19) >= var_1_62) ? (var_1_40 == ((signed long int) (((((var_1_47 - var_1_22)) < (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) ? ((var_1_47 - var_1_22)) : (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))))) : ((32u >= var_1_43) ? (var_1_40 == ((signed long int) ((((var_1_28) > (((((var_1_10) > (32)) ? (var_1_10) : (32))))) ? (var_1_28) : (((((var_1_10) > (32)) ? (var_1_10) : (32)))))))) : (((var_1_8 + var_1_61) == var_1_60) ? (var_1_40 == ((signed long int) ((var_1_15 + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) - ((var_1_61 + var_1_12) + var_1_13)))) : 1)))) && ((var_1_16 < ((((var_1_13 * var_1_61) < 0 ) ? -(var_1_13 * var_1_61) : (var_1_13 * var_1_61)))) ? (var_1_43 == ((unsigned short int) (var_1_12 + (27324 - var_1_15)))) : (var_1_43 == ((unsigned short int) (var_1_12 + var_1_47))))) && (((var_1_1 >= var_1_1) && var_1_57) ? (var_1_44 == ((signed char) (var_1_13 + (var_1_45 + var_1_46)))) : 1)) && ((var_1_21 > ((var_1_13 + last_1_var_1_30) + ((((last_1_var_1_29) > (var_1_11)) ? (last_1_var_1_29) : (var_1_11))))) ? (((var_1_15 != last_1_var_1_29) && last_1_var_1_57) ? (var_1_47 == ((unsigned char) 128)) : ((var_1_35 <= 0.5) ? (var_1_47 == ((unsigned char) ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))))) : (((((((var_1_10 * last_1_var_1_43)) > (last_1_var_1_40)) ? ((var_1_10 * last_1_var_1_43)) : (last_1_var_1_40))) > (last_1_var_1_43 / ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_47 == ((unsigned char) (((var_1_48 + var_1_49) - var_1_15) + (var_1_13 + (var_1_50 - var_1_51))))) : (var_1_47 == ((unsigned char) (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) + var_1_15)))))) : (var_1_47 == ((unsigned char) (1 + var_1_15))))) && ((var_1_57 || var_1_57) ? (var_1_52 == ((float) (var_1_35 - 100.5f))) : (var_1_52 == ((float) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))) && ((var_1_36 >= ((((var_1_24) > (((((-0.4) > (var_1_33)) ? (-0.4) : (var_1_33))))) ? (var_1_24) : (((((-0.4) > (var_1_33)) ? (-0.4) : (var_1_33))))))) ? (var_1_53 == ((float) (var_1_35 - (((((var_1_54 + var_1_55)) < (var_1_36)) ? ((var_1_54 + var_1_55)) : (var_1_36)))))) : 1)) && (var_1_56 == ((unsigned long int) ((var_1_13 + var_1_18) + var_1_19)))) && (var_1_57 == ((unsigned char) ((! var_1_58) && var_1_59)))) && (((((((last_1_var_1_47) > (last_1_var_1_56)) ? (last_1_var_1_47) : (last_1_var_1_56))) >= 256u) && var_1_59) ? (((var_1_25 - (var_1_54 + 9.25)) <= var_1_23) ? (var_1_58 ? (var_1_60 == ((unsigned short int) ((((10) < (var_1_48)) ? (10) : (var_1_48))))) : (var_1_60 == ((unsigned short int) ((((var_1_49) < (var_1_18)) ? (var_1_49) : (var_1_18)))))) : 1) : (var_1_60 == ((unsigned short int) (((((last_1_var_1_40) > (var_1_48)) ? (last_1_var_1_40) : (var_1_48))) + last_1_var_1_47))))) && ((((var_1_50 / var_1_49) >> var_1_13) >= last_1_var_1_40) ? (var_1_61 == ((signed long int) last_1_var_1_40)) : (var_1_61 == ((signed long int) var_1_11)))) && (var_1_62 == ((signed long int) (var_1_12 - ((var_1_63 + 1000000000) - var_1_18))))) && ((var_1_60 <= var_1_1) ? (var_1_64 == ((unsigned short int) (5 + (var_1_65 - var_1_44)))) : 1)
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
