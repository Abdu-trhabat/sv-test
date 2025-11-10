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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -4;
unsigned char var_1_2 = 0;
signed long int var_1_5 = 1788365988;
signed long int var_1_6 = 25;
signed long int var_1_7 = 1000000000;
signed long int var_1_8 = 1;
signed long int var_1_10 = 2055641894;
signed long int var_1_11 = 1;
signed long int var_1_12 = 4;
signed short int var_1_13 = 10;
unsigned char var_1_14 = 1;
signed short int var_1_15 = -8;
unsigned long int var_1_16 = 5;
double var_1_17 = 9.75;
double var_1_19 = 99.6;
double var_1_20 = 0.75;
double var_1_21 = 9.6;
double var_1_22 = 0.0;
double var_1_23 = 10.25;
double var_1_24 = 32.75;
double var_1_25 = 7.1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 32;
double var_1_29 = 24.7;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 16;
signed short int var_1_32 = 8;
signed short int var_1_33 = 26470;
unsigned long int var_1_34 = 10000000;
unsigned long int var_1_35 = 2200721456;
unsigned short int var_1_36 = 0;
unsigned short int var_1_37 = 22793;
unsigned short int var_1_38 = 10000;
signed short int var_1_39 = 10;
signed short int var_1_40 = -25;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned short int var_1_47 = 16;
unsigned short int var_1_48 = 32;
signed char var_1_49 = -5;
signed char var_1_50 = 16;
signed char var_1_51 = 0;
signed char var_1_52 = 10;
unsigned char var_1_53 = 8;
unsigned char var_1_54 = 2;
signed long int var_1_55 = -256;
signed long int var_1_56 = 256;
signed char var_1_57 = -16;
signed char var_1_58 = 5;
signed char var_1_59 = -32;
signed char var_1_60 = 1;
signed char var_1_61 = 5;
signed char var_1_62 = 32;
signed char var_1_63 = 10;
unsigned long int var_1_64 = 200;
unsigned long int var_1_65 = 2107399197;
unsigned char var_1_66 = 50;
unsigned char var_1_67 = 128;
unsigned char var_1_68 = 32;
unsigned char var_1_69 = 4;
unsigned char var_1_70 = 32;
unsigned char var_1_71 = 4;
unsigned long int var_1_72 = 8;
unsigned long int var_1_73 = 3870347271;
unsigned char var_1_74 = 128;
float var_1_75 = 32.4;
signed long int var_1_76 = 32;
unsigned char last_1_var_1_26 = 1;
signed short int last_1_var_1_39 = 10;
signed long int last_1_var_1_55 = -256;
unsigned long int last_1_var_1_64 = 200;
float last_1_var_1_75 = 32.4;
signed long int last_1_var_1_76 = 32;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_75 < var_1_29) {
  var_1_41 = ((var_1_7 > last_1_var_1_64) && (var_1_42 || (var_1_27 && var_1_43)));
 }
 if (var_1_29 < var_1_20) {
  if (last_1_var_1_26) {
   var_1_72 = ((((((var_1_73 - var_1_38) - var_1_12)) < (var_1_68)) ? (((var_1_73 - var_1_38) - var_1_12)) : (var_1_68)));
  } else {
   var_1_72 = var_1_68;
  }
 }
 unsigned long int stepLocal_8 = var_1_11 * (var_1_37 + var_1_72);
 if (var_1_24 <= var_1_21) {
  if (stepLocal_8 != (128 / var_1_33)) {
   var_1_44 = (var_1_45 && var_1_46);
  } else {
   var_1_44 = (! var_1_27);
  }
 }
 unsigned char stepLocal_3 = var_1_14;
 signed long int stepLocal_2 = var_1_6;
 if (var_1_72 == stepLocal_2) {
  if (stepLocal_3 || var_1_2) {
   var_1_13 = ((((-32) < (var_1_15)) ? (-32) : (var_1_15)));
  }
 }
 var_1_34 = (var_1_35 - var_1_7);
 var_1_36 = (var_1_33 + (var_1_37 - (var_1_38 - var_1_31)));
 if (((((var_1_38) > ((1 * var_1_5))) ? (var_1_38) : ((1 * var_1_5)))) != 2) {
  var_1_39 = (var_1_31 + (((((last_1_var_1_39) < (var_1_30)) ? (last_1_var_1_39) : (var_1_30))) + var_1_40));
 } else {
  var_1_39 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 }
 if ((((((var_1_24 - var_1_22)) < ((var_1_19 * var_1_20))) ? ((var_1_24 - var_1_22)) : ((var_1_19 * var_1_20)))) <= var_1_29) {
  var_1_47 = ((((var_1_48) < (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (var_1_48) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))));
 } else {
  var_1_47 = (4 + (var_1_30 + (var_1_13 + var_1_31)));
 }
 signed long int stepLocal_12 = 1 + ((((-64) < (var_1_12)) ? (-64) : (var_1_12)));
 if (var_1_24 == (var_1_22 - (var_1_29 + var_1_21))) {
  if (var_1_6 >= stepLocal_12) {
   var_1_57 = (((((((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58))) + var_1_59)) > ((var_1_60 + var_1_61))) ? ((((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58))) + var_1_59)) : ((var_1_60 + var_1_61))));
  } else {
   var_1_57 = (var_1_61 + 32);
  }
 } else {
  var_1_57 = (((((1 - (var_1_62 + var_1_63))) < (((((var_1_60) < (var_1_52)) ? (var_1_60) : (var_1_52))))) ? ((1 - (var_1_62 + var_1_63))) : (((((var_1_60) < (var_1_52)) ? (var_1_60) : (var_1_52))))));
 }
 if (var_1_43) {
  var_1_74 = var_1_62;
 }
 if ((var_1_24 / var_1_22) <= var_1_20) {
  var_1_75 = 4.5f;
 }
 signed char stepLocal_18 = var_1_52;
 unsigned long int stepLocal_17 = var_1_72;
 if ((var_1_38 - var_1_62) < stepLocal_17) {
  if (stepLocal_18 < last_1_var_1_76) {
   var_1_76 = ((((var_1_30) > (var_1_59)) ? (var_1_30) : (var_1_59)));
  }
 } else {
  if (var_1_41) {
   var_1_76 = var_1_6;
  }
 }
 if (last_1_var_1_26 || (var_1_41 && var_1_44)) {
  var_1_26 = (var_1_44 && var_1_27);
 }
 if (var_1_44 && var_1_41) {
  if (var_1_44) {
   var_1_16 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  } else {
   var_1_16 = (((((3507549886u - var_1_11) - 256u) < 0 ) ? -((3507549886u - var_1_11) - 256u) : ((3507549886u - var_1_11) - 256u)));
  }
 }
 signed short int stepLocal_7 = var_1_39;
 if (var_1_29 <= var_1_19) {
  var_1_32 = (((((var_1_13) < ((var_1_30 + var_1_31))) ? (var_1_13) : ((var_1_30 + var_1_31)))) + -16);
 } else {
  if (var_1_6 < stepLocal_7) {
   var_1_32 = ((var_1_33 - var_1_31) - var_1_13);
  } else {
   var_1_32 = (var_1_13 - var_1_31);
  }
 }
 unsigned long int stepLocal_4 = var_1_72;
 if (var_1_44) {
  if (var_1_11 > stepLocal_4) {
   var_1_17 = (var_1_19 + var_1_20);
  } else {
   if (! var_1_26) {
    var_1_17 = ((var_1_21 - (var_1_22 - var_1_23)) + var_1_20);
   } else {
    var_1_17 = (var_1_21 - 7.4);
   }
  }
 } else {
  var_1_17 = (((var_1_23 + var_1_24) + var_1_25) - var_1_21);
 }
 unsigned long int stepLocal_6 = var_1_34;
 signed long int stepLocal_5 = var_1_8;
 if (stepLocal_5 < var_1_34) {
  if (var_1_5 >= stepLocal_6) {
   if ((((((var_1_25) > (var_1_21)) ? (var_1_25) : (var_1_21))) * (- var_1_23)) < (15.5 - (var_1_24 + var_1_29))) {
    var_1_28 = ((((((((0) < (var_1_30)) ? (0) : (var_1_30)))) < (var_1_31)) ? (((((0) < (var_1_30)) ? (0) : (var_1_30)))) : (var_1_31)));
   }
  } else {
   var_1_28 = var_1_31;
  }
 } else {
  var_1_28 = var_1_30;
 }
 if (! (((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) >= (var_1_76 - var_1_10))) {
  var_1_49 = (((((10 - ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51))))) > ((var_1_52 + 25))) ? ((10 - ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51))))) : ((var_1_52 + 25))));
 }
 signed short int stepLocal_1 = var_1_32;
 signed short int stepLocal_0 = var_1_32;
 if (var_1_26) {
  if (var_1_72 != stepLocal_1) {
   if (var_1_72 < stepLocal_0) {
    var_1_1 = ((var_1_5 - ((((2) > (var_1_6)) ? (2) : (var_1_6)))) - 64);
   } else {
    var_1_1 = ((var_1_6 - (var_1_7 - var_1_8)) + var_1_72);
   }
  } else {
   if (8.5f >= var_1_75) {
    var_1_1 = (((((var_1_32 + (var_1_8 - var_1_7))) > (var_1_6)) ? ((var_1_32 + (var_1_8 - var_1_7))) : (var_1_6)));
   } else {
    var_1_1 = (((var_1_10 - var_1_8) - var_1_7) - (var_1_6 + ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))));
   }
  }
 } else {
  var_1_1 = (var_1_7 - (((((var_1_6 + var_1_11)) < (var_1_5)) ? ((var_1_6 + var_1_11)) : (var_1_5))));
 }
 unsigned char stepLocal_15 = (var_1_12 < var_1_51) && var_1_43;
 signed long int stepLocal_14 = var_1_6 & var_1_33;
 unsigned char stepLocal_13 = var_1_16 != var_1_58;
 if ((~ var_1_40) >= stepLocal_14) {
  if (stepLocal_15 && var_1_46) {
   if ((! (var_1_32 < var_1_11)) || stepLocal_13) {
    var_1_64 = ((((var_1_37) < ((var_1_51 + var_1_38))) ? (var_1_37) : ((var_1_51 + var_1_38))));
   } else {
    var_1_64 = ((((var_1_8) > (((((var_1_33) < ((var_1_38 + 50u))) ? (var_1_33) : ((var_1_38 + 50u)))))) ? (var_1_8) : (((((var_1_33) < ((var_1_38 + 50u))) ? (var_1_33) : ((var_1_38 + 50u)))))));
   }
  } else {
   var_1_64 = ((((((var_1_10 + var_1_65)) > (var_1_35)) ? ((var_1_10 + var_1_65)) : (var_1_35))) - (((((var_1_11 + var_1_72)) < (var_1_1)) ? ((var_1_11 + var_1_72)) : (var_1_1))));
  }
 }
 signed long int stepLocal_10 = - var_1_12;
 unsigned long int stepLocal_9 = (((var_1_16) > (var_1_37)) ? (var_1_16) : (var_1_37));
 if (stepLocal_9 < (var_1_64 / var_1_38)) {
  var_1_53 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
 } else {
  if (stepLocal_10 == var_1_31) {
   if (var_1_26) {
    var_1_53 = var_1_54;
   }
  }
 }
 unsigned long int stepLocal_16 = var_1_64;
 if (var_1_21 >= var_1_22) {
  if (((25u * var_1_7) / var_1_5) != stepLocal_16) {
   var_1_66 = (var_1_67 - var_1_62);
  } else {
   var_1_66 = 4;
  }
 } else {
  var_1_66 = (((var_1_68 - var_1_69) + (var_1_70 - var_1_71)) + (var_1_63 + var_1_62));
 }
 unsigned char stepLocal_11 = var_1_26;
 if (var_1_41 && stepLocal_11) {
  var_1_55 = (((((last_1_var_1_55) > (var_1_56)) ? (last_1_var_1_55) : (var_1_56))) + var_1_66);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 1073741822);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 536870911);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 536870911);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1610612734);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32767);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 2305843.009213691400e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427388000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 16382);
 assume_abort_if_not(var_1_33 <= 32766);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 16383);
 assume_abort_if_not(var_1_37 <= 32767);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 8191);
 assume_abort_if_not(var_1_38 <= 16383);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= -8191);
 assume_abort_if_not(var_1_40 <= 8191);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 126);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -63);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= -1073741823);
 assume_abort_if_not(var_1_56 <= 1073741823);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -63);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -63);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -63);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -63);
 assume_abort_if_not(var_1_61 <= 63);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 1073741824);
 assume_abort_if_not(var_1_65 <= 2147483647);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 127);
 assume_abort_if_not(var_1_67 <= 254);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 32);
 assume_abort_if_not(var_1_68 <= 64);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 32);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 31);
 assume_abort_if_not(var_1_70 <= 63);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 31);
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 3221225470);
 assume_abort_if_not(var_1_73 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_26 = var_1_26;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_76 = var_1_76;
}
int property(void) {
 return ((((((((((((((((((((((var_1_26 ? ((var_1_72 != var_1_32) ? ((var_1_72 < var_1_32) ? (var_1_1 == ((signed long int) ((var_1_5 - ((((2) > (var_1_6)) ? (2) : (var_1_6)))) - 64))) : (var_1_1 == ((signed long int) ((var_1_6 - (var_1_7 - var_1_8)) + var_1_72)))) : ((8.5f >= var_1_75) ? (var_1_1 == ((signed long int) (((((var_1_32 + (var_1_8 - var_1_7))) > (var_1_6)) ? ((var_1_32 + (var_1_8 - var_1_7))) : (var_1_6))))) : (var_1_1 == ((signed long int) (((var_1_10 - var_1_8) - var_1_7) - (var_1_6 + ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))))))) : (var_1_1 == ((signed long int) (var_1_7 - (((((var_1_6 + var_1_11)) < (var_1_5)) ? ((var_1_6 + var_1_11)) : (var_1_5))))))) && ((var_1_72 == var_1_6) ? ((var_1_14 || var_1_2) ? (var_1_13 == ((signed short int) ((((-32) < (var_1_15)) ? (-32) : (var_1_15))))) : 1) : 1)) && ((var_1_44 && var_1_41) ? (var_1_44 ? (var_1_16 == ((unsigned long int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_16 == ((unsigned long int) (((((3507549886u - var_1_11) - 256u) < 0 ) ? -((3507549886u - var_1_11) - 256u) : ((3507549886u - var_1_11) - 256u)))))) : 1)) && (var_1_44 ? ((var_1_11 > var_1_72) ? (var_1_17 == ((double) (var_1_19 + var_1_20))) : ((! var_1_26) ? (var_1_17 == ((double) ((var_1_21 - (var_1_22 - var_1_23)) + var_1_20))) : (var_1_17 == ((double) (var_1_21 - 7.4))))) : (var_1_17 == ((double) (((var_1_23 + var_1_24) + var_1_25) - var_1_21))))) && ((last_1_var_1_26 || (var_1_41 && var_1_44)) ? (var_1_26 == ((unsigned char) (var_1_44 && var_1_27))) : 1)) && ((var_1_8 < var_1_34) ? ((var_1_5 >= var_1_34) ? (((((((var_1_25) > (var_1_21)) ? (var_1_25) : (var_1_21))) * (- var_1_23)) < (15.5 - (var_1_24 + var_1_29))) ? (var_1_28 == ((unsigned char) ((((((((0) < (var_1_30)) ? (0) : (var_1_30)))) < (var_1_31)) ? (((((0) < (var_1_30)) ? (0) : (var_1_30)))) : (var_1_31))))) : 1) : (var_1_28 == ((unsigned char) var_1_31))) : (var_1_28 == ((unsigned char) var_1_30)))) && ((var_1_29 <= var_1_19) ? (var_1_32 == ((signed short int) (((((var_1_13) < ((var_1_30 + var_1_31))) ? (var_1_13) : ((var_1_30 + var_1_31)))) + -16))) : ((var_1_6 < var_1_39) ? (var_1_32 == ((signed short int) ((var_1_33 - var_1_31) - var_1_13))) : (var_1_32 == ((signed short int) (var_1_13 - var_1_31)))))) && (var_1_34 == ((unsigned long int) (var_1_35 - var_1_7)))) && (var_1_36 == ((unsigned short int) (var_1_33 + (var_1_37 - (var_1_38 - var_1_31)))))) && ((((((var_1_38) > ((1 * var_1_5))) ? (var_1_38) : ((1 * var_1_5)))) != 2) ? (var_1_39 == ((signed short int) (var_1_31 + (((((last_1_var_1_39) < (var_1_30)) ? (last_1_var_1_39) : (var_1_30))) + var_1_40)))) : (var_1_39 == ((signed short int) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))) && ((last_1_var_1_75 < var_1_29) ? (var_1_41 == ((unsigned char) ((var_1_7 > last_1_var_1_64) && (var_1_42 || (var_1_27 && var_1_43))))) : 1)) && ((var_1_24 <= var_1_21) ? (((var_1_11 * (var_1_37 + var_1_72)) != (128 / var_1_33)) ? (var_1_44 == ((unsigned char) (var_1_45 && var_1_46))) : (var_1_44 == ((unsigned char) (! var_1_27)))) : 1)) && (((((((var_1_24 - var_1_22)) < ((var_1_19 * var_1_20))) ? ((var_1_24 - var_1_22)) : ((var_1_19 * var_1_20)))) <= var_1_29) ? (var_1_47 == ((unsigned short int) ((((var_1_48) < (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (var_1_48) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) : (var_1_47 == ((unsigned short int) (4 + (var_1_30 + (var_1_13 + var_1_31))))))) && ((! (((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) >= (var_1_76 - var_1_10))) ? (var_1_49 == ((signed char) (((((10 - ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51))))) > ((var_1_52 + 25))) ? ((10 - ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51))))) : ((var_1_52 + 25)))))) : 1)) && ((((((var_1_16) > (var_1_37)) ? (var_1_16) : (var_1_37))) < (var_1_64 / var_1_38)) ? (var_1_53 == ((unsigned char) ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) : (((- var_1_12) == var_1_31) ? (var_1_26 ? (var_1_53 == ((unsigned char) var_1_54)) : 1) : 1))) && ((var_1_41 && var_1_26) ? (var_1_55 == ((signed long int) (((((last_1_var_1_55) > (var_1_56)) ? (last_1_var_1_55) : (var_1_56))) + var_1_66))) : 1)) && ((var_1_24 == (var_1_22 - (var_1_29 + var_1_21))) ? ((var_1_6 >= (1 + ((((-64) < (var_1_12)) ? (-64) : (var_1_12))))) ? (var_1_57 == ((signed char) (((((((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58))) + var_1_59)) > ((var_1_60 + var_1_61))) ? ((((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58))) + var_1_59)) : ((var_1_60 + var_1_61)))))) : (var_1_57 == ((signed char) (var_1_61 + 32)))) : (var_1_57 == ((signed char) (((((1 - (var_1_62 + var_1_63))) < (((((var_1_60) < (var_1_52)) ? (var_1_60) : (var_1_52))))) ? ((1 - (var_1_62 + var_1_63))) : (((((var_1_60) < (var_1_52)) ? (var_1_60) : (var_1_52)))))))))) && (((~ var_1_40) >= (var_1_6 & var_1_33)) ? ((((var_1_12 < var_1_51) && var_1_43) && var_1_46) ? (((! (var_1_32 < var_1_11)) || (var_1_16 != var_1_58)) ? (var_1_64 == ((unsigned long int) ((((var_1_37) < ((var_1_51 + var_1_38))) ? (var_1_37) : ((var_1_51 + var_1_38)))))) : (var_1_64 == ((unsigned long int) ((((var_1_8) > (((((var_1_33) < ((var_1_38 + 50u))) ? (var_1_33) : ((var_1_38 + 50u)))))) ? (var_1_8) : (((((var_1_33) < ((var_1_38 + 50u))) ? (var_1_33) : ((var_1_38 + 50u)))))))))) : (var_1_64 == ((unsigned long int) ((((((var_1_10 + var_1_65)) > (var_1_35)) ? ((var_1_10 + var_1_65)) : (var_1_35))) - (((((var_1_11 + var_1_72)) < (var_1_1)) ? ((var_1_11 + var_1_72)) : (var_1_1))))))) : 1)) && ((var_1_21 >= var_1_22) ? ((((25u * var_1_7) / var_1_5) != var_1_64) ? (var_1_66 == ((unsigned char) (var_1_67 - var_1_62))) : (var_1_66 == ((unsigned char) 4))) : (var_1_66 == ((unsigned char) (((var_1_68 - var_1_69) + (var_1_70 - var_1_71)) + (var_1_63 + var_1_62)))))) && ((var_1_29 < var_1_20) ? (last_1_var_1_26 ? (var_1_72 == ((unsigned long int) ((((((var_1_73 - var_1_38) - var_1_12)) < (var_1_68)) ? (((var_1_73 - var_1_38) - var_1_12)) : (var_1_68))))) : (var_1_72 == ((unsigned long int) var_1_68))) : 1)) && (var_1_43 ? (var_1_74 == ((unsigned char) var_1_62)) : 1)) && (((var_1_24 / var_1_22) <= var_1_20) ? (var_1_75 == ((float) 4.5f)) : 1)) && (((var_1_38 - var_1_62) < var_1_72) ? ((var_1_52 < last_1_var_1_76) ? (var_1_76 == ((signed long int) ((((var_1_30) > (var_1_59)) ? (var_1_30) : (var_1_59))))) : 1) : (var_1_41 ? (var_1_76 == ((signed long int) var_1_6)) : 1))
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
