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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed short int var_1_5 = -16;
signed short int var_1_6 = -16;
signed short int var_1_7 = -2;
signed short int var_1_8 = -32;
float var_1_9 = 1.75;
signed short int var_1_10 = 256;
signed short int var_1_11 = 32;
float var_1_12 = 2.125;
float var_1_13 = 63.375;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 50820;
unsigned long int var_1_16 = 1940175438;
unsigned long int var_1_17 = 2058630425;
unsigned long int var_1_18 = 100000;
unsigned long int var_1_19 = 128;
unsigned short int var_1_20 = 41527;
signed long int var_1_21 = -10;
double var_1_22 = 127.1;
double var_1_23 = 15.8;
double var_1_24 = 63.2;
signed long int var_1_26 = 0;
signed long int var_1_28 = 1895511932;
unsigned long int var_1_29 = 256;
signed char var_1_31 = 4;
signed long int var_1_32 = 10000;
signed long int var_1_34 = 1744455711;
unsigned short int var_1_35 = 16;
unsigned short int var_1_36 = 16;
unsigned short int var_1_37 = 256;
unsigned short int var_1_38 = 10;
unsigned long int var_1_39 = 10;
unsigned long int var_1_40 = 100;
unsigned long int var_1_41 = 1000000000;
signed char var_1_42 = 0;
signed char var_1_43 = 5;
signed char var_1_44 = 16;
signed char var_1_45 = 1;
signed char var_1_46 = 10;
signed char var_1_47 = 1;
signed short int var_1_48 = -256;
signed short int var_1_49 = 23807;
double var_1_50 = 24.5;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 1;
unsigned long int var_1_58 = 128;
unsigned long int var_1_59 = 4186321149;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned long int var_1_62 = 200;
unsigned long int var_1_63 = 3609046058;
signed short int var_1_64 = -256;
unsigned char var_1_65 = 25;
signed char var_1_66 = 0;
signed char var_1_67 = -100;
signed short int var_1_68 = 50;
double var_1_69 = 64.35;
double var_1_70 = 3.12;
double var_1_71 = 16.25;
double var_1_72 = 24.7;
unsigned char var_1_73 = 1;
unsigned short int var_1_74 = 1;
double var_1_75 = 128.1;
signed long int last_1_var_1_26 = 0;
unsigned long int last_1_var_1_29 = 256;
unsigned short int last_1_var_1_35 = 16;
unsigned char last_1_var_1_57 = 1;
signed short int last_1_var_1_64 = -256;
unsigned char last_1_var_1_65 = 25;
unsigned char last_1_var_1_73 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_52 && last_1_var_1_57) {
  var_1_58 = ((((last_1_var_1_65) > (var_1_19)) ? (last_1_var_1_65) : (var_1_19)));
 } else {
  var_1_58 = ((((((var_1_17 + var_1_28)) < (var_1_59)) ? ((var_1_17 + var_1_28)) : (var_1_59))) - ((((((((last_1_var_1_64) < 0 ) ? -(last_1_var_1_64) : (last_1_var_1_64)))) > (50u)) ? (((((last_1_var_1_64) < 0 ) ? -(last_1_var_1_64) : (last_1_var_1_64)))) : (50u))));
 }
 if ((var_1_47 | last_1_var_1_26) > var_1_17) {
  var_1_57 = ((! var_1_52) && var_1_56);
 }
 signed short int stepLocal_4 = var_1_6;
 if (! last_1_var_1_73) {
  var_1_39 = ((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + var_1_28) - ((((last_1_var_1_35) < 0 ) ? -(last_1_var_1_35) : (last_1_var_1_35))));
 } else {
  if (64 > stepLocal_4) {
   var_1_39 = (var_1_37 + (var_1_40 + (var_1_41 - 1u)));
  }
 }
 if ((var_1_39 + (var_1_15 - var_1_11)) >= ((var_1_16 + var_1_17) - ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) {
  var_1_14 = var_1_11;
 } else {
  var_1_14 = (var_1_20 - ((((2) < 0 ) ? -(2) : (2))));
 }
 if (var_1_14 <= (((((var_1_10) < (16)) ? (var_1_10) : (16))) - var_1_11)) {
  var_1_9 = (var_1_12 - var_1_13);
 } else {
  var_1_9 = var_1_12;
 }
 if ((- (var_1_23 - var_1_22)) <= (var_1_12 + (- var_1_9))) {
  var_1_65 = (((((var_1_43 + var_1_44)) < (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45)));
 }
 signed long int stepLocal_9 = var_1_34;
 signed char stepLocal_8 = var_1_43;
 if (stepLocal_9 >= (var_1_41 + var_1_39)) {
  if (stepLocal_8 != var_1_7) {
   var_1_50 = ((((var_1_12) > ((var_1_23 - var_1_24))) ? (var_1_12) : ((var_1_23 - var_1_24))));
  } else {
   var_1_50 = var_1_22;
  }
 } else {
  var_1_50 = var_1_24;
 }
 var_1_67 = (((((var_1_47 - (50 + var_1_44))) < (var_1_45)) ? ((var_1_47 - (50 + var_1_44))) : (var_1_45)));
 var_1_68 = var_1_44;
 var_1_73 = var_1_52;
 var_1_74 = var_1_43;
 var_1_75 = var_1_23;
 if (var_1_57) {
  if (var_1_11 > var_1_6) {
   var_1_51 = var_1_52;
  } else {
   if (var_1_58 > var_1_68) {
    var_1_51 = (var_1_55 && var_1_56);
   }
  }
 }
 unsigned char stepLocal_1 = var_1_51;
 if (var_1_73) {
  if ((var_1_18 == var_1_11) && stepLocal_1) {
   var_1_26 = (((((((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) < (var_1_5)) ? (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) : (var_1_5))) + var_1_20);
  } else {
   var_1_26 = (var_1_20 - ((var_1_28 - var_1_14) - var_1_11));
  }
 } else {
  var_1_26 = var_1_7;
 }
 if (var_1_67 <= ((-16 / var_1_31) & var_1_8)) {
  if (last_1_var_1_29 < var_1_19) {
   var_1_29 = (((((var_1_11 + (1u + var_1_15))) > (((((10000u) < ((var_1_39 + var_1_17))) ? (10000u) : ((var_1_39 + var_1_17)))))) ? ((var_1_11 + (1u + var_1_15))) : (((((10000u) < ((var_1_39 + var_1_17))) ? (10000u) : ((var_1_39 + var_1_17)))))));
  }
 }
 if (var_1_51) {
  var_1_35 = ((((var_1_11) > (var_1_20)) ? (var_1_11) : (var_1_20)));
 } else {
  var_1_35 = (var_1_20 - var_1_11);
 }
 if ((var_1_12 - (9.3 + var_1_22)) < (var_1_13 - (var_1_23 + var_1_24))) {
  if (var_1_57) {
   var_1_21 = (((((var_1_20 - var_1_35)) < (var_1_10)) ? ((var_1_20 - var_1_35)) : (var_1_10)));
  }
 } else {
  var_1_21 = (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_8);
 }
 if (var_1_23 < ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) {
  if (var_1_43 > (var_1_40 * ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) {
   var_1_60 = (var_1_52 || var_1_56);
  } else {
   var_1_60 = (! ((var_1_73 && var_1_52) || var_1_61));
  }
 } else {
  var_1_60 = (! (! (var_1_55 && var_1_52)));
 }
 unsigned long int stepLocal_10 = var_1_39;
 if (! var_1_60) {
  var_1_62 = (var_1_63 - (var_1_28 - var_1_20));
 } else {
  if (var_1_20 > stepLocal_10) {
   var_1_62 = (((((var_1_21) < (100u)) ? (var_1_21) : (100u))) + var_1_49);
  }
 }
 if (var_1_73) {
  var_1_69 = (var_1_24 - ((((var_1_22) < (var_1_13)) ? (var_1_22) : (var_1_13))));
 } else {
  var_1_69 = ((var_1_70 + var_1_71) + var_1_72);
 }
 unsigned long int stepLocal_0 = var_1_58;
 if (stepLocal_0 >= (var_1_29 * (10u * var_1_39))) {
  var_1_1 = ((var_1_5 + -25) + ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))));
 } else {
  var_1_1 = (var_1_5 + (var_1_8 + -2));
 }
 if (var_1_29 > 1u) {
  var_1_64 = (last_1_var_1_64 + (var_1_45 - 64));
 } else {
  if (var_1_61) {
   if (var_1_29 < (var_1_45 * var_1_39)) {
    var_1_64 = ((var_1_44 + var_1_45) + ((var_1_29 + var_1_1) - var_1_43));
   } else {
    var_1_64 = (var_1_43 + -50);
   }
  } else {
   var_1_64 = ((((var_1_46) < (var_1_49)) ? (var_1_46) : (var_1_49)));
  }
 }
 if (var_1_7 == var_1_62) {
  var_1_36 = (var_1_20 - ((((((((var_1_11) < (8)) ? (var_1_11) : (8)))) < (((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38))))) ? (((((var_1_11) < (8)) ? (var_1_11) : (8)))) : (((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)))))));
 } else {
  if (var_1_7 > var_1_39) {
   var_1_36 = ((((var_1_37) < (var_1_11)) ? (var_1_37) : (var_1_11)));
  } else {
   var_1_36 = var_1_20;
  }
 }
 if (var_1_62 <= (var_1_47 - var_1_38)) {
  var_1_48 = var_1_62;
 } else {
  var_1_48 = ((((((var_1_49 - var_1_43) - var_1_45)) > (((((var_1_44) < ((var_1_5 + var_1_31))) ? (var_1_44) : ((var_1_5 + var_1_31)))))) ? (((var_1_49 - var_1_43) - var_1_45)) : (((((var_1_44) < ((var_1_5 + var_1_31))) ? (var_1_44) : ((var_1_5 + var_1_31)))))));
 }
 if (((var_1_24 - var_1_12) * var_1_69) < (var_1_69 + var_1_13)) {
  var_1_66 = 32;
 }
 signed short int stepLocal_3 = var_1_11;
 unsigned long int stepLocal_2 = var_1_39 / var_1_15;
 if (stepLocal_3 == ((var_1_7 & var_1_36) + var_1_58)) {
  if (stepLocal_2 < var_1_16) {
   var_1_32 = ((((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))) - var_1_20) - var_1_11);
  }
 }
 signed long int stepLocal_7 = var_1_32;
 signed long int stepLocal_6 = (((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46));
 unsigned long int stepLocal_5 = var_1_58;
 if ((var_1_58 + var_1_38) > stepLocal_7) {
  if ((var_1_39 * var_1_16) <= stepLocal_5) {
   var_1_42 = ((((((var_1_43 + var_1_44) - var_1_45)) < (var_1_46)) ? (((var_1_43 + var_1_44) - var_1_45)) : (var_1_46)));
  } else {
   if (var_1_44 >= stepLocal_6) {
    if (! var_1_60) {
     var_1_42 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
    } else {
     var_1_42 = (var_1_43 + (var_1_44 - var_1_47));
    }
   }
  }
 } else {
  var_1_42 = ((var_1_44 - var_1_47) + var_1_43);
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -8191);
 assume_abort_if_not(var_1_5 <= 8192);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -8191);
 assume_abort_if_not(var_1_8 <= 8192);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65535);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 1073741823);
 assume_abort_if_not(var_1_16 <= 2147483648);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 1073741824);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427388000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427388000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 1610612734);
 assume_abort_if_not(var_1_28 <= 2147483646);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -128);
 assume_abort_if_not(var_1_31 <= 127);
 assume_abort_if_not(var_1_31 != 0);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= 1073741822);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32767);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 32767);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1073741824);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 536870911);
 assume_abort_if_not(var_1_41 <= 1073741823);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 16382);
 assume_abort_if_not(var_1_49 <= 32766);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 2147483647);
 assume_abort_if_not(var_1_59 <= 4294967294);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 0);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 2147483647);
 assume_abort_if_not(var_1_63 <= 4294967294);
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= -230584.3009213691400e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691400e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= -230584.3009213691400e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= -461168.6018427383000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_73 = var_1_73;
}
int property(void) {
 return (((((((((((((((((((((((((((var_1_58 >= (var_1_29 * (10u * var_1_39))) ? (var_1_1 == ((signed short int) ((var_1_5 + -25) + ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))))) : (var_1_1 == ((signed short int) (var_1_5 + (var_1_8 + -2))))) && ((var_1_14 <= (((((var_1_10) < (16)) ? (var_1_10) : (16))) - var_1_11)) ? (var_1_9 == ((float) (var_1_12 - var_1_13))) : (var_1_9 == ((float) var_1_12)))) && (((var_1_39 + (var_1_15 - var_1_11)) >= ((var_1_16 + var_1_17) - ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_14 == ((unsigned short int) var_1_11)) : (var_1_14 == ((unsigned short int) (var_1_20 - ((((2) < 0 ) ? -(2) : (2)))))))) && (((var_1_12 - (9.3 + var_1_22)) < (var_1_13 - (var_1_23 + var_1_24))) ? (var_1_57 ? (var_1_21 == ((signed long int) (((((var_1_20 - var_1_35)) < (var_1_10)) ? ((var_1_20 - var_1_35)) : (var_1_10))))) : 1) : (var_1_21 == ((signed long int) (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_8))))) && (var_1_73 ? (((var_1_18 == var_1_11) && var_1_51) ? (var_1_26 == ((signed long int) (((((((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) < (var_1_5)) ? (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) : (var_1_5))) + var_1_20))) : (var_1_26 == ((signed long int) (var_1_20 - ((var_1_28 - var_1_14) - var_1_11))))) : (var_1_26 == ((signed long int) var_1_7)))) && ((var_1_67 <= ((-16 / var_1_31) & var_1_8)) ? ((last_1_var_1_29 < var_1_19) ? (var_1_29 == ((unsigned long int) (((((var_1_11 + (1u + var_1_15))) > (((((10000u) < ((var_1_39 + var_1_17))) ? (10000u) : ((var_1_39 + var_1_17)))))) ? ((var_1_11 + (1u + var_1_15))) : (((((10000u) < ((var_1_39 + var_1_17))) ? (10000u) : ((var_1_39 + var_1_17))))))))) : 1) : 1)) && ((var_1_11 == ((var_1_7 & var_1_36) + var_1_58)) ? (((var_1_39 / var_1_15) < var_1_16) ? (var_1_32 == ((signed long int) ((((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))) - var_1_20) - var_1_11))) : 1) : 1)) && (var_1_51 ? (var_1_35 == ((unsigned short int) ((((var_1_11) > (var_1_20)) ? (var_1_11) : (var_1_20))))) : (var_1_35 == ((unsigned short int) (var_1_20 - var_1_11))))) && ((var_1_7 == var_1_62) ? (var_1_36 == ((unsigned short int) (var_1_20 - ((((((((var_1_11) < (8)) ? (var_1_11) : (8)))) < (((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38))))) ? (((((var_1_11) < (8)) ? (var_1_11) : (8)))) : (((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38))))))))) : ((var_1_7 > var_1_39) ? (var_1_36 == ((unsigned short int) ((((var_1_37) < (var_1_11)) ? (var_1_37) : (var_1_11))))) : (var_1_36 == ((unsigned short int) var_1_20))))) && ((! last_1_var_1_73) ? (var_1_39 == ((unsigned long int) ((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + var_1_28) - ((((last_1_var_1_35) < 0 ) ? -(last_1_var_1_35) : (last_1_var_1_35)))))) : ((64 > var_1_6) ? (var_1_39 == ((unsigned long int) (var_1_37 + (var_1_40 + (var_1_41 - 1u))))) : 1))) && (((var_1_58 + var_1_38) > var_1_32) ? (((var_1_39 * var_1_16) <= var_1_58) ? (var_1_42 == ((signed char) ((((((var_1_43 + var_1_44) - var_1_45)) < (var_1_46)) ? (((var_1_43 + var_1_44) - var_1_45)) : (var_1_46))))) : ((var_1_44 >= ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) ? ((! var_1_60) ? (var_1_42 == ((signed char) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : (var_1_42 == ((signed char) (var_1_43 + (var_1_44 - var_1_47))))) : 1)) : (var_1_42 == ((signed char) ((var_1_44 - var_1_47) + var_1_43))))) && ((var_1_62 <= (var_1_47 - var_1_38)) ? (var_1_48 == ((signed short int) var_1_62)) : (var_1_48 == ((signed short int) ((((((var_1_49 - var_1_43) - var_1_45)) > (((((var_1_44) < ((var_1_5 + var_1_31))) ? (var_1_44) : ((var_1_5 + var_1_31)))))) ? (((var_1_49 - var_1_43) - var_1_45)) : (((((var_1_44) < ((var_1_5 + var_1_31))) ? (var_1_44) : ((var_1_5 + var_1_31))))))))))) && ((var_1_34 >= (var_1_41 + var_1_39)) ? ((var_1_43 != var_1_7) ? (var_1_50 == ((double) ((((var_1_12) > ((var_1_23 - var_1_24))) ? (var_1_12) : ((var_1_23 - var_1_24)))))) : (var_1_50 == ((double) var_1_22))) : (var_1_50 == ((double) var_1_24)))) && (var_1_57 ? ((var_1_11 > var_1_6) ? (var_1_51 == ((unsigned char) var_1_52)) : ((var_1_58 > var_1_68) ? (var_1_51 == ((unsigned char) (var_1_55 && var_1_56))) : 1)) : 1)) && (((var_1_47 | last_1_var_1_26) > var_1_17) ? (var_1_57 == ((unsigned char) ((! var_1_52) && var_1_56))) : 1)) && ((var_1_52 && last_1_var_1_57) ? (var_1_58 == ((unsigned long int) ((((last_1_var_1_65) > (var_1_19)) ? (last_1_var_1_65) : (var_1_19))))) : (var_1_58 == ((unsigned long int) ((((((var_1_17 + var_1_28)) < (var_1_59)) ? ((var_1_17 + var_1_28)) : (var_1_59))) - ((((((((last_1_var_1_64) < 0 ) ? -(last_1_var_1_64) : (last_1_var_1_64)))) > (50u)) ? (((((last_1_var_1_64) < 0 ) ? -(last_1_var_1_64) : (last_1_var_1_64)))) : (50u)))))))) && ((var_1_23 < ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) ? ((var_1_43 > (var_1_40 * ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) ? (var_1_60 == ((unsigned char) (var_1_52 || var_1_56))) : (var_1_60 == ((unsigned char) (! ((var_1_73 && var_1_52) || var_1_61))))) : (var_1_60 == ((unsigned char) (! (! (var_1_55 && var_1_52))))))) && ((! var_1_60) ? (var_1_62 == ((unsigned long int) (var_1_63 - (var_1_28 - var_1_20)))) : ((var_1_20 > var_1_39) ? (var_1_62 == ((unsigned long int) (((((var_1_21) < (100u)) ? (var_1_21) : (100u))) + var_1_49))) : 1))) && ((var_1_29 > 1u) ? (var_1_64 == ((signed short int) (last_1_var_1_64 + (var_1_45 - 64)))) : (var_1_61 ? ((var_1_29 < (var_1_45 * var_1_39)) ? (var_1_64 == ((signed short int) ((var_1_44 + var_1_45) + ((var_1_29 + var_1_1) - var_1_43)))) : (var_1_64 == ((signed short int) (var_1_43 + -50)))) : (var_1_64 == ((signed short int) ((((var_1_46) < (var_1_49)) ? (var_1_46) : (var_1_49)))))))) && (((- (var_1_23 - var_1_22)) <= (var_1_12 + (- var_1_9))) ? (var_1_65 == ((unsigned char) (((((var_1_43 + var_1_44)) < (var_1_45)) ? ((var_1_43 + var_1_44)) : (var_1_45))))) : 1)) && ((((var_1_24 - var_1_12) * var_1_69) < (var_1_69 + var_1_13)) ? (var_1_66 == ((signed char) 32)) : 1)) && (var_1_67 == ((signed char) (((((var_1_47 - (50 + var_1_44))) < (var_1_45)) ? ((var_1_47 - (50 + var_1_44))) : (var_1_45)))))) && (var_1_68 == ((signed short int) var_1_44))) && (var_1_73 ? (var_1_69 == ((double) (var_1_24 - ((((var_1_22) < (var_1_13)) ? (var_1_22) : (var_1_13)))))) : (var_1_69 == ((double) ((var_1_70 + var_1_71) + var_1_72))))) && (var_1_73 == ((unsigned char) var_1_52))) && (var_1_74 == ((unsigned short int) var_1_43))) && (var_1_75 == ((double) var_1_23))
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
