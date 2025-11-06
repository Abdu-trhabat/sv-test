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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 4.75;
signed long int var_1_7 = 64;
signed long int var_1_8 = 128;
signed long int var_1_9 = -25;
double var_1_10 = 0.55;
double var_1_11 = 255.4;
double var_1_12 = 15.5;
unsigned short int var_1_13 = 128;
unsigned short int var_1_14 = 4;
unsigned short int var_1_15 = 63025;
unsigned short int var_1_16 = 32;
unsigned char var_1_17 = 0;
double var_1_18 = -0.5;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 16;
float var_1_23 = 15.65;
float var_1_24 = 1.2;
float var_1_25 = 49.375;
float var_1_26 = 255.3;
float var_1_27 = 3.2;
float var_1_28 = -0.5;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 1000000000;
signed char var_1_32 = 0;
signed long int var_1_33 = 64;
unsigned char var_1_35 = 128;
signed short int var_1_36 = 100;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 5;
signed long int var_1_40 = 16;
signed short int var_1_41 = 27640;
signed short int var_1_42 = 28439;
double var_1_43 = 128.6;
double var_1_44 = 0.0;
double var_1_45 = 0.0;
double var_1_46 = 9.8;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
float var_1_49 = 7.5;
float var_1_51 = 15.875;
float var_1_52 = 999999.5;
signed long int var_1_53 = 4;
signed long int var_1_54 = 25;
signed short int var_1_55 = 10;
unsigned char var_1_56 = 10;
float var_1_58 = 1.8;
unsigned short int var_1_60 = 29012;
unsigned short int var_1_61 = 22362;
unsigned short int var_1_62 = 5;
unsigned char var_1_63 = 1;
signed short int var_1_65 = 5;
signed long int var_1_66 = -500;
signed long int var_1_67 = -1;
signed long int var_1_68 = 100000;
double last_1_var_1_1 = 4.75;
unsigned long int last_1_var_1_22 = 16;
unsigned char last_1_var_1_35 = 128;
unsigned char last_1_var_1_47 = 0;
unsigned short int last_1_var_1_62 = 5;
unsigned char last_1_var_1_63 = 1;
signed short int last_1_var_1_65 = 5;
signed long int last_1_var_1_67 = -1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = last_1_var_1_63;
 unsigned char stepLocal_2 = var_1_8 > last_1_var_1_65;
 if (last_1_var_1_63 && stepLocal_2) {
  var_1_17 = (last_1_var_1_63 && (! 1));
 } else {
  if (stepLocal_3 || (var_1_12 <= (last_1_var_1_1 / var_1_18))) {
   if (! last_1_var_1_63) {
    var_1_17 = (var_1_19 || (! var_1_20));
   } else {
    if ((255.5f / var_1_18) < (var_1_10 * var_1_11)) {
     var_1_17 = var_1_19;
    } else {
     var_1_17 = (! (! var_1_19));
    }
   }
  } else {
   var_1_17 = var_1_21;
  }
 }
 unsigned long int stepLocal_6 = (3147088468u - last_1_var_1_67) * last_1_var_1_22;
 signed long int stepLocal_5 = last_1_var_1_62 * ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 if (stepLocal_5 != last_1_var_1_67) {
  var_1_31 = (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - (var_1_33 + last_1_var_1_67));
 } else {
  if (last_1_var_1_22 >= stepLocal_6) {
   var_1_31 = last_1_var_1_35;
  }
 }
 if (var_1_11 < 15.4) {
  var_1_67 = (((((last_1_var_1_62) < (var_1_56)) ? (last_1_var_1_62) : (var_1_56))) - ((((var_1_38) < (var_1_33)) ? (var_1_38) : (var_1_33))));
 } else {
  if (last_1_var_1_47) {
   var_1_67 = var_1_68;
  } else {
   var_1_67 = var_1_33;
  }
 }
 if ((- var_1_67) <= var_1_9) {
  if (! (var_1_28 != (var_1_44 / var_1_18))) {
   var_1_47 = ((var_1_27 <= ((((var_1_45) > (5.6f)) ? (var_1_45) : (5.6f)))) && var_1_19);
  }
 } else {
  var_1_47 = (var_1_19 && (var_1_30 || var_1_48));
 }
 if (var_1_20) {
  if (((((var_1_42) > (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) ? (var_1_42) : (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) <= var_1_67) {
   var_1_43 = (var_1_26 - (((((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))) < 0 ) ? -((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))) : ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))))));
  } else {
   var_1_43 = (var_1_26 - (((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))) - var_1_46));
  }
 }
 if (var_1_18 != var_1_43) {
  var_1_23 = ((((var_1_11) > ((((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26))) ? (var_1_11) : ((((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26))));
 } else {
  if ((((((var_1_26) > (var_1_24)) ? (var_1_26) : (var_1_24))) - var_1_25) <= (var_1_10 + (255.25f + var_1_11))) {
   var_1_23 = 3.4f;
  } else {
   var_1_23 = ((((((var_1_11 + 4.5f)) < ((var_1_10 + var_1_27))) ? ((var_1_11 + 4.5f)) : ((var_1_10 + var_1_27)))) + ((((var_1_12) > (var_1_28)) ? (var_1_12) : (var_1_28))));
  }
 }
 if ((((((var_1_11) > (var_1_28)) ? (var_1_11) : (var_1_28))) / 24.625) > var_1_12) {
  var_1_35 = 64;
 }
 signed long int stepLocal_19 = var_1_33;
 if (stepLocal_19 <= last_1_var_1_65) {
  if (var_1_19) {
   var_1_65 = var_1_55;
  }
 } else {
  var_1_65 = last_1_var_1_65;
 }
 var_1_66 = ((((((((var_1_67) < (var_1_61)) ? (var_1_67) : (var_1_61)))) > (32)) ? (((((var_1_67) < (var_1_61)) ? (var_1_67) : (var_1_61)))) : (32)));
 signed long int stepLocal_0 = (var_1_7 - var_1_8) / ((((128) < (var_1_9)) ? (128) : (var_1_9)));
 if (((var_1_35 + var_1_31) | var_1_35) < stepLocal_0) {
  var_1_1 = ((var_1_10 + var_1_11) + var_1_12);
 } else {
  var_1_1 = var_1_10;
 }
 unsigned char stepLocal_4 = ! var_1_47;
 if (var_1_43 != var_1_27) {
  if ((-500 != -128) && stepLocal_4) {
   var_1_29 = (var_1_20 && var_1_19);
  } else {
   var_1_29 = (var_1_19 || (var_1_47 && var_1_30));
  }
 }
 if (var_1_11 > (- var_1_1)) {
  var_1_62 = ((((((last_1_var_1_62 + var_1_56) + var_1_61)) < (((((last_1_var_1_62 + var_1_55) < 0 ) ? -(last_1_var_1_62 + var_1_55) : (last_1_var_1_62 + var_1_55))))) ? (((last_1_var_1_62 + var_1_56) + var_1_61)) : (((((last_1_var_1_62 + var_1_55) < 0 ) ? -(last_1_var_1_62 + var_1_55) : (last_1_var_1_62 + var_1_55))))));
 }
 if (var_1_29) {
  var_1_22 = var_1_31;
 }
 if (var_1_21) {
  if (var_1_66 == ((((var_1_38 - var_1_39) < 0 ) ? -(var_1_38 - var_1_39) : (var_1_38 - var_1_39)))) {
   if ((128 - var_1_40) >= var_1_35) {
    var_1_36 = ((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - var_1_66) - (var_1_38 + 32));
   } else {
    var_1_36 = var_1_62;
   }
  } else {
   var_1_36 = var_1_66;
  }
 }
 unsigned short int stepLocal_17 = var_1_16;
 signed long int stepLocal_16 = ((((var_1_38) > (var_1_36)) ? (var_1_38) : (var_1_36))) << 16;
 if (stepLocal_16 > (var_1_16 * (var_1_55 - var_1_65))) {
  if (stepLocal_17 < ((var_1_60 + var_1_61) - (var_1_38 + var_1_65))) {
   var_1_58 = ((var_1_45 - ((((var_1_46) < (var_1_51)) ? (var_1_46) : (var_1_51)))) - var_1_26);
  } else {
   var_1_58 = (var_1_52 - (var_1_45 - var_1_51));
  }
 } else {
  var_1_58 = (var_1_45 - ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))));
 }
 unsigned short int stepLocal_18 = var_1_62;
 if (var_1_30) {
  if (var_1_17) {
   var_1_63 = (var_1_29 || var_1_20);
  }
 } else {
  if (stepLocal_18 > (((((var_1_42 + var_1_66)) < (var_1_62)) ? ((var_1_42 + var_1_66)) : (var_1_62)))) {
   var_1_63 = ((! var_1_48) && var_1_21);
  } else {
   var_1_63 = (var_1_20 && var_1_19);
  }
 }
 unsigned long int stepLocal_1 = ((((((2u) < (var_1_8)) ? (2u) : (var_1_8))) < 0 ) ? -((((2u) < (var_1_8)) ? (2u) : (var_1_8))) : ((((2u) < (var_1_8)) ? (2u) : (var_1_8))));
 if (var_1_63) {
  if (var_1_43 == var_1_11) {
   var_1_13 = (44770 - var_1_14);
  } else {
   if (stepLocal_1 <= (var_1_9 | var_1_14)) {
    var_1_13 = ((((var_1_14) < ((var_1_15 - var_1_16))) ? (var_1_14) : ((var_1_15 - var_1_16))));
   }
  }
 } else {
  var_1_13 = var_1_14;
 }
 signed long int stepLocal_15 = 50;
 signed long int stepLocal_14 = var_1_7;
 signed long int stepLocal_13 = var_1_9 ^ var_1_67;
 unsigned long int stepLocal_12 = ((((var_1_55 * var_1_22)) > (var_1_13)) ? ((var_1_55 * var_1_22)) : (var_1_13));
 signed long int stepLocal_11 = var_1_9;
 signed long int stepLocal_10 = (38897 - var_1_13) + var_1_38;
 unsigned char stepLocal_9 = var_1_39;
 if (stepLocal_14 < var_1_66) {
  if (stepLocal_10 > -32) {
   if (var_1_40 < stepLocal_15) {
    var_1_53 = (var_1_41 - var_1_42);
   } else {
    if (-4 != stepLocal_11) {
     var_1_53 = (var_1_54 - var_1_14);
    } else {
     if (stepLocal_9 != ((5 >> var_1_55) >> var_1_56)) {
      var_1_53 = (-256 + var_1_62);
     }
    }
   }
  } else {
   var_1_53 = (var_1_42 - var_1_38);
  }
 } else {
  if (var_1_39 >= stepLocal_12) {
   var_1_53 = ((((var_1_62) > (var_1_32)) ? (var_1_62) : (var_1_32)));
  } else {
   if ((var_1_55 * (var_1_22 / var_1_42)) > stepLocal_13) {
    var_1_53 = (((((var_1_56 - var_1_22)) > ((var_1_16 - var_1_14))) ? ((var_1_56 - var_1_22)) : ((var_1_16 - var_1_14))));
   }
  }
 }
 signed long int stepLocal_8 = (((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33));
 signed long int stepLocal_7 = var_1_9 + var_1_16;
 if (stepLocal_8 <= ((((var_1_22) > ((var_1_53 * var_1_66))) ? (var_1_22) : ((var_1_53 * var_1_66))))) {
  if (stepLocal_7 <= var_1_31) {
   var_1_49 = (var_1_27 + var_1_12);
  } else {
   var_1_49 = ((var_1_46 - 5.25f) + (var_1_51 - var_1_52));
  }
 }
}
void updateVariables(void) {
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1073741823);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 127);
 assume_abort_if_not(var_1_38 <= 255);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 16382);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= 16382);
 assume_abort_if_not(var_1_42 <= 32766);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 4611686.018427383000e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 4611686.018427383000e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= -1);
 assume_abort_if_not(var_1_54 <= 2147483646);
 var_1_55 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 30);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 30);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 16383);
 assume_abort_if_not(var_1_60 <= 32768);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 16384);
 assume_abort_if_not(var_1_61 <= 32767);
 var_1_68 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_68 >= -2147483647);
 assume_abort_if_not(var_1_68 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
}
int property(void) {
 return (((((((((((((((((((((var_1_35 + var_1_31) | var_1_35) < ((var_1_7 - var_1_8) / ((((128) < (var_1_9)) ? (128) : (var_1_9))))) ? (var_1_1 == ((double) ((var_1_10 + var_1_11) + var_1_12))) : (var_1_1 == ((double) var_1_10))) && (var_1_63 ? ((var_1_43 == var_1_11) ? (var_1_13 == ((unsigned short int) (44770 - var_1_14))) : (((((((((2u) < (var_1_8)) ? (2u) : (var_1_8))) < 0 ) ? -((((2u) < (var_1_8)) ? (2u) : (var_1_8))) : ((((2u) < (var_1_8)) ? (2u) : (var_1_8))))) <= (var_1_9 | var_1_14)) ? (var_1_13 == ((unsigned short int) ((((var_1_14) < ((var_1_15 - var_1_16))) ? (var_1_14) : ((var_1_15 - var_1_16)))))) : 1)) : (var_1_13 == ((unsigned short int) var_1_14)))) && ((last_1_var_1_63 && (var_1_8 > last_1_var_1_65)) ? (var_1_17 == ((unsigned char) (last_1_var_1_63 && (! 1)))) : ((last_1_var_1_63 || (var_1_12 <= (last_1_var_1_1 / var_1_18))) ? ((! last_1_var_1_63) ? (var_1_17 == ((unsigned char) (var_1_19 || (! var_1_20)))) : (((255.5f / var_1_18) < (var_1_10 * var_1_11)) ? (var_1_17 == ((unsigned char) var_1_19)) : (var_1_17 == ((unsigned char) (! (! var_1_19)))))) : (var_1_17 == ((unsigned char) var_1_21))))) && (var_1_29 ? (var_1_22 == ((unsigned long int) var_1_31)) : 1)) && ((var_1_18 != var_1_43) ? (var_1_23 == ((float) ((((var_1_11) > ((((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26))) ? (var_1_11) : ((((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) - var_1_26)))))) : (((((((var_1_26) > (var_1_24)) ? (var_1_26) : (var_1_24))) - var_1_25) <= (var_1_10 + (255.25f + var_1_11))) ? (var_1_23 == ((float) 3.4f)) : (var_1_23 == ((float) ((((((var_1_11 + 4.5f)) < ((var_1_10 + var_1_27))) ? ((var_1_11 + 4.5f)) : ((var_1_10 + var_1_27)))) + ((((var_1_12) > (var_1_28)) ? (var_1_12) : (var_1_28))))))))) && ((var_1_43 != var_1_27) ? (((-500 != -128) && (! var_1_47)) ? (var_1_29 == ((unsigned char) (var_1_20 && var_1_19))) : (var_1_29 == ((unsigned char) (var_1_19 || (var_1_47 && var_1_30))))) : 1)) && (((last_1_var_1_62 * ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) != last_1_var_1_67) ? (var_1_31 == ((signed long int) (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - (var_1_33 + last_1_var_1_67)))) : ((last_1_var_1_22 >= ((3147088468u - last_1_var_1_67) * last_1_var_1_22)) ? (var_1_31 == ((signed long int) last_1_var_1_35)) : 1))) && (((((((var_1_11) > (var_1_28)) ? (var_1_11) : (var_1_28))) / 24.625) > var_1_12) ? (var_1_35 == ((unsigned char) 64)) : 1)) && (var_1_21 ? ((var_1_66 == ((((var_1_38 - var_1_39) < 0 ) ? -(var_1_38 - var_1_39) : (var_1_38 - var_1_39)))) ? (((128 - var_1_40) >= var_1_35) ? (var_1_36 == ((signed short int) ((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - var_1_66) - (var_1_38 + 32)))) : (var_1_36 == ((signed short int) var_1_62))) : (var_1_36 == ((signed short int) var_1_66))) : 1)) && (var_1_20 ? ((((((var_1_42) > (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) ? (var_1_42) : (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) <= var_1_67) ? (var_1_43 == ((double) (var_1_26 - (((((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))) < 0 ) ? -((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))) : ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)))))))) : (var_1_43 == ((double) (var_1_26 - (((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))) - var_1_46))))) : 1)) && (((- var_1_67) <= var_1_9) ? ((! (var_1_28 != (var_1_44 / var_1_18))) ? (var_1_47 == ((unsigned char) ((var_1_27 <= ((((var_1_45) > (5.6f)) ? (var_1_45) : (5.6f)))) && var_1_19))) : 1) : (var_1_47 == ((unsigned char) (var_1_19 && (var_1_30 || var_1_48)))))) && ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) <= ((((var_1_22) > ((var_1_53 * var_1_66))) ? (var_1_22) : ((var_1_53 * var_1_66))))) ? (((var_1_9 + var_1_16) <= var_1_31) ? (var_1_49 == ((float) (var_1_27 + var_1_12))) : (var_1_49 == ((float) ((var_1_46 - 5.25f) + (var_1_51 - var_1_52))))) : 1)) && ((var_1_7 < var_1_66) ? ((((38897 - var_1_13) + var_1_38) > -32) ? ((var_1_40 < 50) ? (var_1_53 == ((signed long int) (var_1_41 - var_1_42))) : ((-4 != var_1_9) ? (var_1_53 == ((signed long int) (var_1_54 - var_1_14))) : ((var_1_39 != ((5 >> var_1_55) >> var_1_56)) ? (var_1_53 == ((signed long int) (-256 + var_1_62))) : 1))) : (var_1_53 == ((signed long int) (var_1_42 - var_1_38)))) : ((var_1_39 >= (((((var_1_55 * var_1_22)) > (var_1_13)) ? ((var_1_55 * var_1_22)) : (var_1_13)))) ? (var_1_53 == ((signed long int) ((((var_1_62) > (var_1_32)) ? (var_1_62) : (var_1_32))))) : (((var_1_55 * (var_1_22 / var_1_42)) > (var_1_9 ^ var_1_67)) ? (var_1_53 == ((signed long int) (((((var_1_56 - var_1_22)) > ((var_1_16 - var_1_14))) ? ((var_1_56 - var_1_22)) : ((var_1_16 - var_1_14)))))) : 1)))) && (((((((var_1_38) > (var_1_36)) ? (var_1_38) : (var_1_36))) << 16) > (var_1_16 * (var_1_55 - var_1_65))) ? ((var_1_16 < ((var_1_60 + var_1_61) - (var_1_38 + var_1_65))) ? (var_1_58 == ((float) ((var_1_45 - ((((var_1_46) < (var_1_51)) ? (var_1_46) : (var_1_51)))) - var_1_26))) : (var_1_58 == ((float) (var_1_52 - (var_1_45 - var_1_51))))) : (var_1_58 == ((float) (var_1_45 - ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)))))))) && ((var_1_11 > (- var_1_1)) ? (var_1_62 == ((unsigned short int) ((((((last_1_var_1_62 + var_1_56) + var_1_61)) < (((((last_1_var_1_62 + var_1_55) < 0 ) ? -(last_1_var_1_62 + var_1_55) : (last_1_var_1_62 + var_1_55))))) ? (((last_1_var_1_62 + var_1_56) + var_1_61)) : (((((last_1_var_1_62 + var_1_55) < 0 ) ? -(last_1_var_1_62 + var_1_55) : (last_1_var_1_62 + var_1_55)))))))) : 1)) && (var_1_30 ? (var_1_17 ? (var_1_63 == ((unsigned char) (var_1_29 || var_1_20))) : 1) : ((var_1_62 > (((((var_1_42 + var_1_66)) < (var_1_62)) ? ((var_1_42 + var_1_66)) : (var_1_62)))) ? (var_1_63 == ((unsigned char) ((! var_1_48) && var_1_21))) : (var_1_63 == ((unsigned char) (var_1_20 && var_1_19)))))) && ((var_1_33 <= last_1_var_1_65) ? (var_1_19 ? (var_1_65 == ((signed short int) var_1_55)) : 1) : (var_1_65 == ((signed short int) last_1_var_1_65)))) && (var_1_66 == ((signed long int) ((((((((var_1_67) < (var_1_61)) ? (var_1_67) : (var_1_61)))) > (32)) ? (((((var_1_67) < (var_1_61)) ? (var_1_67) : (var_1_61)))) : (32)))))) && ((var_1_11 < 15.4) ? (var_1_67 == ((signed long int) (((((last_1_var_1_62) < (var_1_56)) ? (last_1_var_1_62) : (var_1_56))) - ((((var_1_38) < (var_1_33)) ? (var_1_38) : (var_1_33)))))) : (last_1_var_1_47 ? (var_1_67 == ((signed long int) var_1_68)) : (var_1_67 == ((signed long int) var_1_33))))
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
