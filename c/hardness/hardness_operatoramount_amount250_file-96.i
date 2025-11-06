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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 200;
signed long int var_1_2 = 64;
signed long int var_1_3 = 50;
signed long int var_1_4 = 256;
signed long int var_1_5 = 8;
float var_1_6 = 100000000.15;
unsigned char var_1_8 = 0;
float var_1_9 = -0.25;
float var_1_10 = 63.5;
signed short int var_1_11 = 1;
signed short int var_1_12 = -128;
signed short int var_1_13 = 1;
signed short int var_1_14 = -128;
signed short int var_1_15 = 128;
float var_1_16 = 1000000000000.145;
float var_1_17 = 255.4;
float var_1_18 = 1.8;
float var_1_19 = 50.2;
unsigned short int var_1_20 = 2;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 256;
unsigned short int var_1_24 = 32;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 50;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 4;
float var_1_32 = 128.6;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 0;
signed short int var_1_35 = -16;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
signed short int var_1_41 = -256;
signed char var_1_42 = -5;
float var_1_43 = 3.875;
float var_1_45 = 127.5;
float var_1_46 = 4.28;
float var_1_47 = 0.0;
float var_1_48 = 32.75;
unsigned long int var_1_49 = 2;
signed char var_1_50 = 8;
signed char var_1_51 = 32;
unsigned short int var_1_52 = 1;
unsigned char var_1_53 = 8;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 1;
signed long int var_1_59 = 64;
signed long int var_1_60 = 2017269147;
unsigned long int var_1_61 = 50;
unsigned long int var_1_62 = 1000000000;
unsigned char var_1_63 = 1;
signed long int var_1_64 = 1398614151;
signed long int var_1_65 = 1178557918;
signed long int var_1_66 = -8;
double var_1_67 = 4.375;
double var_1_68 = 15.6;
signed char var_1_69 = -2;
double var_1_70 = 49.85;
unsigned char last_1_var_1_63 = 1;
void initially(void) {
}
void step(void) {
 var_1_1 = ((((var_1_2) < ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))) ? (var_1_2) : ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))));
 var_1_11 = ((((var_1_12) < (2)) ? (var_1_12) : (2)));
 signed long int stepLocal_2 = var_1_3;
 if (var_1_4 <= stepLocal_2) {
  var_1_13 = (((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))));
 }
 if (! (var_1_10 > var_1_9)) {
  var_1_16 = ((((((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) > (var_1_10)) ? (((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) : (var_1_10)));
 }
 if (var_1_18 <= (- var_1_10)) {
  var_1_19 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
 }
 if (var_1_8 || var_1_37) {
  var_1_36 = (! (var_1_37 && var_1_38));
 } else {
  if (var_1_39 || var_1_8) {
   var_1_36 = (! var_1_40);
  } else {
   var_1_36 = (var_1_38 || (! (var_1_39 || var_1_40)));
  }
 }
 unsigned short int stepLocal_5 = var_1_22;
 if (stepLocal_5 <= (- 10)) {
  var_1_41 = ((((128) < 0 ) ? -(128) : (128)));
 }
 var_1_42 = ((((var_1_33) < (((64 - var_1_31) - (var_1_34 + var_1_27)))) ? (var_1_33) : (((64 - var_1_31) - (var_1_34 + var_1_27)))));
 if (! var_1_36) {
  var_1_54 = var_1_38;
 } else {
  var_1_54 = ((var_1_38 || var_1_55) || var_1_56);
 }
 signed long int stepLocal_15 = var_1_3;
 signed long int stepLocal_14 = (((var_1_30) > (var_1_15)) ? (var_1_30) : (var_1_15));
 if (var_1_23 == stepLocal_15) {
  if (stepLocal_14 <= ((var_1_64 - var_1_28) - (var_1_65 - var_1_22))) {
   var_1_63 = (last_1_var_1_63 && var_1_38);
  }
 } else {
  var_1_63 = var_1_58;
 }
 if (var_1_56) {
  var_1_66 = var_1_4;
 }
 var_1_67 = var_1_47;
 var_1_68 = var_1_18;
 var_1_69 = var_1_33;
 signed long int stepLocal_1 = (((-4) < (var_1_66)) ? (-4) : (var_1_66));
 signed long int stepLocal_0 = var_1_4;
 if (0 == stepLocal_1) {
  if (var_1_54) {
   if (stepLocal_0 < var_1_5) {
    var_1_6 = ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)));
   } else {
    var_1_6 = var_1_10;
   }
  }
 }
 signed long int stepLocal_10 = (var_1_34 * var_1_29) + var_1_30;
 unsigned char stepLocal_9 = var_1_63;
 if (stepLocal_10 <= (var_1_33 / var_1_28)) {
  var_1_50 = ((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)));
 } else {
  if ((! 0) && stepLocal_9) {
   var_1_50 = ((32 - (var_1_51 - var_1_34)) + var_1_33);
  } else {
   var_1_50 = ((((((((-2) < ((-4 + var_1_51))) ? (-2) : ((-4 + var_1_51))))) > (var_1_30)) ? (((((-2) < ((-4 + var_1_51))) ? (-2) : ((-4 + var_1_51))))) : (var_1_30)));
  }
 }
 signed long int stepLocal_11 = var_1_30 - var_1_28;
 if (stepLocal_11 > var_1_4) {
  if (! (var_1_48 < var_1_45)) {
   if (var_1_63) {
    var_1_52 = ((((256) > ((var_1_28 + var_1_31))) ? (256) : ((var_1_28 + var_1_31))));
   }
  } else {
   var_1_52 = 0;
  }
 }
 signed short int stepLocal_13 = var_1_13;
 if (var_1_66 >= stepLocal_13) {
  var_1_57 = var_1_40;
 } else {
  var_1_57 = (! (var_1_40 && (var_1_55 || var_1_58)));
 }
 signed long int stepLocal_8 = (((25) < ((var_1_23 << var_1_66))) ? (25) : ((var_1_23 << var_1_66)));
 signed long int stepLocal_7 = var_1_66;
 signed long int stepLocal_6 = var_1_5;
 if (var_1_5 != stepLocal_7) {
  var_1_43 = ((((var_1_9) < ((var_1_17 - (var_1_45 + var_1_46)))) ? (var_1_9) : ((var_1_17 - (var_1_45 + var_1_46)))));
 } else {
  if (var_1_52 < stepLocal_6) {
   if (var_1_52 <= stepLocal_8) {
    var_1_43 = ((((256.55f) > (var_1_47)) ? (256.55f) : (var_1_47)));
   }
  } else {
   var_1_43 = (var_1_17 - (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))) + var_1_48));
  }
 }
 if ((((((128.25f + var_1_16)) > (var_1_43)) ? ((128.25f + var_1_16)) : (var_1_43))) < ((((var_1_18) > (var_1_10)) ? (var_1_18) : (var_1_10)))) {
  var_1_20 = ((((var_1_21) > ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))))) ? (var_1_21) : ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))))));
 }
 if (! var_1_63) {
  if (var_1_15 != ((((var_1_31) > (((((-5) > (var_1_20)) ? (-5) : (var_1_20))))) ? (var_1_31) : (((((-5) > (var_1_20)) ? (-5) : (var_1_20))))))) {
   var_1_49 = (2u + 5u);
  } else {
   var_1_49 = (var_1_21 + var_1_27);
  }
 } else {
  var_1_49 = ((var_1_34 + var_1_26) + (var_1_30 + var_1_1));
 }
 if (2 <= var_1_52) {
  if (! var_1_54) {
   if (! var_1_36) {
    var_1_59 = ((((((var_1_60 - var_1_49)) > ((var_1_26 + var_1_49))) ? ((var_1_60 - var_1_49)) : ((var_1_26 + var_1_49)))) - var_1_34);
   } else {
    var_1_59 = (var_1_29 + -128);
   }
  } else {
   var_1_59 = var_1_3;
  }
 } else {
  var_1_59 = (var_1_12 + (((((var_1_31 + var_1_52)) > (var_1_26)) ? ((var_1_31 + var_1_52)) : (var_1_26))));
 }
 if (var_1_38) {
  var_1_61 = (var_1_59 + (var_1_22 + var_1_1));
 } else {
  var_1_61 = (((var_1_62 - var_1_49) + var_1_33) + var_1_29);
 }
 signed long int stepLocal_17 = (((var_1_28 - var_1_23) < 0 ) ? -(var_1_28 - var_1_23) : (var_1_28 - var_1_23));
 signed long int stepLocal_16 = var_1_66;
 if (var_1_49 > stepLocal_16) {
  if (var_1_56) {
   if (var_1_36) {
    if (stepLocal_17 <= var_1_52) {
     var_1_70 = 1.00000000000005E13;
    } else {
     var_1_70 = var_1_18;
    }
   } else {
    var_1_70 = var_1_45;
   }
  } else {
   var_1_70 = var_1_9;
  }
 } else {
  var_1_70 = var_1_18;
 }
 unsigned long int stepLocal_3 = var_1_61;
 if (var_1_10 >= (var_1_18 - var_1_17)) {
  if (var_1_57) {
   if (stepLocal_3 >= var_1_22) {
    var_1_24 = var_1_22;
   }
  }
 } else {
  var_1_24 = (32 + var_1_23);
 }
 signed short int stepLocal_4 = var_1_14;
 if (! (var_1_1 <= (- var_1_3))) {
  if (var_1_49 > stepLocal_4) {
   var_1_25 = ((((((var_1_26 - var_1_27)) < (var_1_28)) ? ((var_1_26 - var_1_27)) : (var_1_28))) - var_1_29);
  } else {
   var_1_25 = ((var_1_26 - (var_1_30 + var_1_31)) - var_1_27);
  }
 } else {
  var_1_25 = (var_1_27 + var_1_31);
 }
 if ((var_1_49 * var_1_5) <= ((var_1_1 ^ var_1_22) + (var_1_3 ^ var_1_66))) {
  if ((((((32) > (var_1_27)) ? (32) : (var_1_27))) << (var_1_33 + var_1_34)) <= (var_1_31 / ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) {
   var_1_32 = var_1_10;
  } else {
   var_1_32 = 16.2f;
  }
 }
 if ((var_1_18 > var_1_16) && (var_1_20 < (var_1_3 * var_1_23))) {
  var_1_35 = var_1_66;
 } else {
  if (((((((((var_1_66) > (var_1_12)) ? (var_1_66) : (var_1_12)))) > (var_1_31)) ? (((((var_1_66) > (var_1_12)) ? (var_1_66) : (var_1_12)))) : (var_1_31))) > var_1_49) {
   var_1_35 = (var_1_34 - var_1_33);
  }
 }
 signed short int stepLocal_12 = var_1_12;
 if (var_1_38) {
  var_1_53 = ((((var_1_34) < (2)) ? (var_1_34) : (2)));
 } else {
  if (stepLocal_12 == var_1_61) {
   var_1_53 = (var_1_27 + (var_1_31 + var_1_30));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483647);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32766);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32766);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 190);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 13);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 12);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 31);
 assume_abort_if_not(var_1_51 <= 63);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_60 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_60 >= 1073741822);
 assume_abort_if_not(var_1_60 <= 2147483646);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 536870912);
 assume_abort_if_not(var_1_62 <= 1073741824);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= 1073741823);
 assume_abort_if_not(var_1_64 <= 2147483647);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= 1073741823);
 assume_abort_if_not(var_1_65 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_63 = var_1_63;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_1 == ((signed long int) ((((var_1_2) < ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))))) ? (var_1_2) : ((var_1_3 - ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))))))) && ((0 == ((((-4) < (var_1_66)) ? (-4) : (var_1_66)))) ? (var_1_54 ? ((var_1_4 < var_1_5) ? (var_1_6 == ((float) ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) : (var_1_6 == ((float) var_1_10))) : 1) : 1)) && (var_1_11 == ((signed short int) ((((var_1_12) < (2)) ? (var_1_12) : (2)))))) && ((var_1_4 <= var_1_3) ? (var_1_13 == ((signed short int) (((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))))) : 1)) && ((! (var_1_10 > var_1_9)) ? (var_1_16 == ((float) ((((((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) > (var_1_10)) ? (((((var_1_9) > ((var_1_17 - var_1_18))) ? (var_1_9) : ((var_1_17 - var_1_18))))) : (var_1_10))))) : 1)) && ((var_1_18 <= (- var_1_10)) ? (var_1_19 == ((float) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) : 1)) && (((((((128.25f + var_1_16)) > (var_1_43)) ? ((128.25f + var_1_16)) : (var_1_43))) < ((((var_1_18) > (var_1_10)) ? (var_1_18) : (var_1_10)))) ? (var_1_20 == ((unsigned short int) ((((var_1_21) > ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))))) ? (var_1_21) : ((256 + ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))))))) : 1)) && ((var_1_10 >= (var_1_18 - var_1_17)) ? (var_1_57 ? ((var_1_61 >= var_1_22) ? (var_1_24 == ((unsigned short int) var_1_22)) : 1) : 1) : (var_1_24 == ((unsigned short int) (32 + var_1_23))))) && ((! (var_1_1 <= (- var_1_3))) ? ((var_1_49 > var_1_14) ? (var_1_25 == ((unsigned char) ((((((var_1_26 - var_1_27)) < (var_1_28)) ? ((var_1_26 - var_1_27)) : (var_1_28))) - var_1_29))) : (var_1_25 == ((unsigned char) ((var_1_26 - (var_1_30 + var_1_31)) - var_1_27)))) : (var_1_25 == ((unsigned char) (var_1_27 + var_1_31))))) && (((var_1_49 * var_1_5) <= ((var_1_1 ^ var_1_22) + (var_1_3 ^ var_1_66))) ? (((((((32) > (var_1_27)) ? (32) : (var_1_27))) << (var_1_33 + var_1_34)) <= (var_1_31 / ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_32 == ((float) var_1_10)) : (var_1_32 == ((float) 16.2f))) : 1)) && (((var_1_18 > var_1_16) && (var_1_20 < (var_1_3 * var_1_23))) ? (var_1_35 == ((signed short int) var_1_66)) : ((((((((((var_1_66) > (var_1_12)) ? (var_1_66) : (var_1_12)))) > (var_1_31)) ? (((((var_1_66) > (var_1_12)) ? (var_1_66) : (var_1_12)))) : (var_1_31))) > var_1_49) ? (var_1_35 == ((signed short int) (var_1_34 - var_1_33))) : 1))) && ((var_1_8 || var_1_37) ? (var_1_36 == ((unsigned char) (! (var_1_37 && var_1_38)))) : ((var_1_39 || var_1_8) ? (var_1_36 == ((unsigned char) (! var_1_40))) : (var_1_36 == ((unsigned char) (var_1_38 || (! (var_1_39 || var_1_40)))))))) && ((var_1_22 <= (- 10)) ? (var_1_41 == ((signed short int) ((((128) < 0 ) ? -(128) : (128))))) : 1)) && (var_1_42 == ((signed char) ((((var_1_33) < (((64 - var_1_31) - (var_1_34 + var_1_27)))) ? (var_1_33) : (((64 - var_1_31) - (var_1_34 + var_1_27)))))))) && ((var_1_5 != var_1_66) ? (var_1_43 == ((float) ((((var_1_9) < ((var_1_17 - (var_1_45 + var_1_46)))) ? (var_1_9) : ((var_1_17 - (var_1_45 + var_1_46))))))) : ((var_1_52 < var_1_5) ? ((var_1_52 <= ((((25) < ((var_1_23 << var_1_66))) ? (25) : ((var_1_23 << var_1_66))))) ? (var_1_43 == ((float) ((((256.55f) > (var_1_47)) ? (256.55f) : (var_1_47))))) : 1) : (var_1_43 == ((float) (var_1_17 - (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))) + var_1_48))))))) && ((! var_1_63) ? ((var_1_15 != ((((var_1_31) > (((((-5) > (var_1_20)) ? (-5) : (var_1_20))))) ? (var_1_31) : (((((-5) > (var_1_20)) ? (-5) : (var_1_20))))))) ? (var_1_49 == ((unsigned long int) (2u + 5u))) : (var_1_49 == ((unsigned long int) (var_1_21 + var_1_27)))) : (var_1_49 == ((unsigned long int) ((var_1_34 + var_1_26) + (var_1_30 + var_1_1)))))) && ((((var_1_34 * var_1_29) + var_1_30) <= (var_1_33 / var_1_28)) ? (var_1_50 == ((signed char) ((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33))))) : (((! 0) && var_1_63) ? (var_1_50 == ((signed char) ((32 - (var_1_51 - var_1_34)) + var_1_33))) : (var_1_50 == ((signed char) ((((((((-2) < ((-4 + var_1_51))) ? (-2) : ((-4 + var_1_51))))) > (var_1_30)) ? (((((-2) < ((-4 + var_1_51))) ? (-2) : ((-4 + var_1_51))))) : (var_1_30)))))))) && (((var_1_30 - var_1_28) > var_1_4) ? ((! (var_1_48 < var_1_45)) ? (var_1_63 ? (var_1_52 == ((unsigned short int) ((((256) > ((var_1_28 + var_1_31))) ? (256) : ((var_1_28 + var_1_31)))))) : 1) : (var_1_52 == ((unsigned short int) 0))) : 1)) && (var_1_38 ? (var_1_53 == ((unsigned char) ((((var_1_34) < (2)) ? (var_1_34) : (2))))) : ((var_1_12 == var_1_61) ? (var_1_53 == ((unsigned char) (var_1_27 + (var_1_31 + var_1_30)))) : 1))) && ((! var_1_36) ? (var_1_54 == ((unsigned char) var_1_38)) : (var_1_54 == ((unsigned char) ((var_1_38 || var_1_55) || var_1_56))))) && ((var_1_66 >= var_1_13) ? (var_1_57 == ((unsigned char) var_1_40)) : (var_1_57 == ((unsigned char) (! (var_1_40 && (var_1_55 || var_1_58))))))) && ((2 <= var_1_52) ? ((! var_1_54) ? ((! var_1_36) ? (var_1_59 == ((signed long int) ((((((var_1_60 - var_1_49)) > ((var_1_26 + var_1_49))) ? ((var_1_60 - var_1_49)) : ((var_1_26 + var_1_49)))) - var_1_34))) : (var_1_59 == ((signed long int) (var_1_29 + -128)))) : (var_1_59 == ((signed long int) var_1_3))) : (var_1_59 == ((signed long int) (var_1_12 + (((((var_1_31 + var_1_52)) > (var_1_26)) ? ((var_1_31 + var_1_52)) : (var_1_26)))))))) && (var_1_38 ? (var_1_61 == ((unsigned long int) (var_1_59 + (var_1_22 + var_1_1)))) : (var_1_61 == ((unsigned long int) (((var_1_62 - var_1_49) + var_1_33) + var_1_29))))) && ((var_1_23 == var_1_3) ? ((((((var_1_30) > (var_1_15)) ? (var_1_30) : (var_1_15))) <= ((var_1_64 - var_1_28) - (var_1_65 - var_1_22))) ? (var_1_63 == ((unsigned char) (last_1_var_1_63 && var_1_38))) : 1) : (var_1_63 == ((unsigned char) var_1_58)))) && (var_1_56 ? (var_1_66 == ((signed long int) var_1_4)) : 1)) && (var_1_67 == ((double) var_1_47))) && (var_1_68 == ((double) var_1_18))) && (var_1_69 == ((signed char) var_1_33))) && ((var_1_49 > var_1_66) ? (var_1_56 ? (var_1_36 ? ((((((var_1_28 - var_1_23) < 0 ) ? -(var_1_28 - var_1_23) : (var_1_28 - var_1_23))) <= var_1_52) ? (var_1_70 == ((double) 1.00000000000005E13)) : (var_1_70 == ((double) var_1_18))) : (var_1_70 == ((double) var_1_45))) : (var_1_70 == ((double) var_1_9))) : (var_1_70 == ((double) var_1_18)))
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
