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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch87Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
signed long int var_1_5 = 256;
signed long int var_1_6 = -1;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 16;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 25;
unsigned long int var_1_20 = 3844860889;
unsigned long int var_1_21 = 2027643041;
unsigned long int var_1_22 = 4;
signed long int var_1_23 = 0;
signed long int var_1_25 = 1929320600;
signed long int var_1_26 = 0;
unsigned char var_1_27 = 100;
unsigned char var_1_28 = 32;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 8;
double var_1_32 = 100000000000000.1;
double var_1_34 = 4.5;
double var_1_35 = 5.75;
double var_1_36 = 4.8;
double var_1_37 = 9.1;
double var_1_38 = 3.75;
signed long int var_1_39 = 0;
signed long int var_1_40 = 10;
double var_1_42 = 15.25;
signed long int var_1_43 = 16;
unsigned char var_1_44 = 0;
double var_1_45 = 4.75;
double var_1_46 = 7.8;
double var_1_47 = 5.1;
double var_1_48 = 3.25;
double var_1_49 = 5.8;
signed short int var_1_50 = 64;
double var_1_51 = 1000000000000.5;
float var_1_52 = 31.5;
unsigned char var_1_53 = 16;
signed long int var_1_54 = 50;
signed long int var_1_56 = 2;
unsigned long int var_1_57 = 32;
unsigned long int var_1_58 = 10000;
signed short int var_1_60 = 1;
unsigned long int var_1_61 = 4133250808;
unsigned char var_1_62 = 10;
unsigned char var_1_63 = 200;
unsigned char var_1_64 = 128;
unsigned char var_1_65 = 32;
unsigned long int var_1_66 = 25;
signed char var_1_67 = 16;
double var_1_68 = 99.25;
signed char var_1_69 = -64;
unsigned short int var_1_70 = 16;
unsigned char last_1_var_1_1 = 32;
unsigned char last_1_var_1_10 = 0;
unsigned long int last_1_var_1_19 = 25;
unsigned long int last_1_var_1_22 = 4;
signed long int last_1_var_1_23 = 0;
signed long int last_1_var_1_43 = 16;
double last_1_var_1_45 = 4.75;
signed long int last_1_var_1_54 = 50;
unsigned long int last_1_var_1_58 = 10000;
unsigned char last_1_var_1_65 = 32;
unsigned short int last_1_var_1_70 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = 128 >> var_1_40;
 unsigned long int stepLocal_7 = (last_1_var_1_19 / var_1_7) & last_1_var_1_22;
 if (var_1_26 < stepLocal_7) {
  if (stepLocal_8 < last_1_var_1_19) {
   if (last_1_var_1_45 >= var_1_35) {
    var_1_39 = ((((var_1_30) < (var_1_40)) ? (var_1_30) : (var_1_40)));
   }
  }
 }
 unsigned long int stepLocal_0 = last_1_var_1_58 / ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)));
 if ((last_1_var_1_23 + last_1_var_1_19) == stepLocal_0) {
  var_1_1 = (var_1_7 - var_1_8);
 }
 signed long int stepLocal_12 = ((((var_1_56) < (var_1_31)) ? (var_1_56) : (var_1_31))) % var_1_5;
 if (var_1_18) {
  if (last_1_var_1_10) {
   if (((var_1_40 >> var_1_60) / var_1_6) >= stepLocal_12) {
    var_1_58 = (var_1_31 + (((((var_1_25 - var_1_28)) < (last_1_var_1_1)) ? ((var_1_25 - var_1_28)) : (last_1_var_1_1))));
   } else {
    var_1_58 = (var_1_28 + var_1_25);
   }
  } else {
   if (var_1_36 >= (- last_1_var_1_45)) {
    if (last_1_var_1_45 <= var_1_37) {
     var_1_58 = (var_1_40 + (((((1156387542u - var_1_7)) > (var_1_28)) ? ((1156387542u - var_1_7)) : (var_1_28))));
    } else {
     var_1_58 = ((var_1_61 - (var_1_7 + var_1_60)) - last_1_var_1_1);
    }
   }
  }
 } else {
  var_1_58 = ((var_1_61 - var_1_30) - (((((var_1_21) < (var_1_25)) ? (var_1_21) : (var_1_25))) - (var_1_29 + last_1_var_1_65)));
 }
 if (last_1_var_1_10 && var_1_16) {
  if (var_1_18) {
   var_1_19 = (var_1_20 - (var_1_21 - (last_1_var_1_70 + var_1_8)));
  }
 }
 if (var_1_31 >= (var_1_19 + ((((var_1_5) < (var_1_39)) ? (var_1_5) : (var_1_39))))) {
  var_1_44 = var_1_15;
 }
 unsigned char stepLocal_1 = var_1_13;
 if (var_1_11) {
  if (var_1_12 || stepLocal_1) {
   var_1_10 = var_1_14;
  } else {
   var_1_10 = ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)));
  }
 } else {
  var_1_10 = (var_1_16 || var_1_15);
 }
 if (var_1_17) {
  var_1_45 = var_1_35;
 } else {
  var_1_45 = ((var_1_38 - (var_1_46 + var_1_47)) + (var_1_48 - var_1_49));
 }
 if (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) >= ((~ var_1_29) + var_1_58)) {
  var_1_52 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 }
 if (var_1_58 > var_1_8) {
  var_1_53 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 var_1_62 = (((((((((var_1_7) > (var_1_63)) ? (var_1_7) : (var_1_63)))) < (var_1_64)) ? (((((var_1_7) > (var_1_63)) ? (var_1_7) : (var_1_63)))) : (var_1_64))) - var_1_60);
 unsigned char stepLocal_13 = (var_1_48 + var_1_46) <= var_1_51;
 if (var_1_14 && stepLocal_13) {
  var_1_65 = (((((var_1_64) > (var_1_63)) ? (var_1_64) : (var_1_63))) - (var_1_29 - (50 - var_1_40)));
 } else {
  var_1_65 = ((var_1_29 - 5) + var_1_31);
 }
 if (! var_1_14) {
  if ((((((var_1_47) < (var_1_38)) ? (var_1_47) : (var_1_38))) - (var_1_46 + var_1_34)) <= var_1_35) {
   var_1_66 = ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)));
  } else {
   var_1_66 = (var_1_21 + var_1_40);
  }
 }
 unsigned long int stepLocal_18 = (((var_1_40) > ((- var_1_19))) ? (var_1_40) : ((- var_1_19)));
 if (stepLocal_18 <= ((((var_1_58) > (var_1_20)) ? (var_1_58) : (var_1_20)))) {
  var_1_69 = (var_1_40 + (var_1_28 - var_1_60));
 } else {
  var_1_69 = var_1_28;
 }
 signed long int stepLocal_2 = 0;
 if (var_1_65 >= stepLocal_2) {
  var_1_22 = var_1_65;
 } else {
  var_1_22 = ((((var_1_21) < (((((var_1_39) < (var_1_7)) ? (var_1_39) : (var_1_7))))) ? (var_1_21) : (((((var_1_39) < (var_1_7)) ? (var_1_39) : (var_1_7))))));
 }
 if (var_1_66 >= 128) {
  var_1_54 = (((((last_1_var_1_54) < ((var_1_56 - var_1_28))) ? (last_1_var_1_54) : ((var_1_56 - var_1_28)))) + ((((var_1_58) > (var_1_31)) ? (var_1_58) : (var_1_31))));
 } else {
  var_1_54 = var_1_40;
 }
 if (var_1_44) {
  var_1_27 = (((32 + var_1_28) + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) - (var_1_30 + (var_1_31 + 25)));
 } else {
  var_1_27 = ((((((((var_1_31) > (8)) ? (var_1_31) : (8)))) > (var_1_28)) ? (((((var_1_31) > (8)) ? (var_1_31) : (8)))) : (var_1_28)));
 }
 unsigned long int stepLocal_11 = var_1_66 / var_1_6;
 if (var_1_5 <= stepLocal_11) {
  var_1_57 = (var_1_20 - var_1_40);
 } else {
  var_1_57 = (((((var_1_39 + (var_1_56 + var_1_7))) > (var_1_28)) ? ((var_1_39 + (var_1_56 + var_1_7))) : (var_1_28)));
 }
 if ((- var_1_45) <= ((var_1_34 + var_1_35) - var_1_36)) {
  var_1_32 = ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)));
 } else {
  var_1_32 = (((((31.2 + var_1_37)) < ((var_1_34 - (9.201079347352285E18 - var_1_38)))) ? ((31.2 + var_1_37)) : ((var_1_34 - (9.201079347352285E18 - var_1_38)))));
 }
 var_1_43 = (var_1_22 + last_1_var_1_43);
 unsigned char stepLocal_17 = var_1_49 >= (var_1_52 / var_1_51);
 signed long int stepLocal_16 = var_1_43;
 unsigned char stepLocal_15 = var_1_15;
 signed long int stepLocal_14 = var_1_25;
 if (stepLocal_17 || (var_1_42 > var_1_68)) {
  if (stepLocal_16 >= var_1_57) {
   var_1_67 = ((var_1_40 - var_1_60) + var_1_31);
  } else {
   if (stepLocal_15 && (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) > (var_1_43 | var_1_66))) {
    var_1_67 = (var_1_60 + var_1_40);
   } else {
    var_1_67 = (var_1_28 - var_1_31);
   }
  }
 } else {
  if (stepLocal_14 < var_1_39) {
   var_1_67 = var_1_40;
  } else {
   var_1_67 = var_1_60;
  }
 }
 unsigned long int stepLocal_10 = ((((var_1_28) > (var_1_27)) ? (var_1_28) : (var_1_27))) / var_1_21;
 unsigned char stepLocal_9 = var_1_1;
 if ((var_1_48 - (var_1_46 + var_1_35)) == ((var_1_36 - var_1_34) / var_1_51)) {
  if (stepLocal_9 >= var_1_66) {
   if (stepLocal_10 > (- (var_1_20 - var_1_54))) {
    var_1_50 = ((((var_1_31) < (var_1_28)) ? (var_1_31) : (var_1_28)));
   } else {
    var_1_50 = var_1_57;
   }
  } else {
   var_1_50 = var_1_57;
  }
 } else {
  var_1_50 = var_1_30;
 }
 var_1_70 = var_1_50;
 var_1_9 = (((((var_1_8) < (var_1_70)) ? (var_1_8) : (var_1_70))) + var_1_7);
 unsigned long int stepLocal_6 = (var_1_22 / var_1_7) / -1;
 unsigned long int stepLocal_5 = ((((var_1_7 * var_1_58)) > ((var_1_6 * var_1_54))) ? ((var_1_7 * var_1_58)) : ((var_1_6 * var_1_54)));
 unsigned char stepLocal_4 = var_1_7;
 unsigned char stepLocal_3 = var_1_16;
 if (stepLocal_4 == var_1_9) {
  if ((var_1_58 ^ ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) <= stepLocal_6) {
   var_1_23 = (2 - var_1_7);
  } else {
   if (stepLocal_3 || ((var_1_7 * 64) <= var_1_54)) {
    var_1_23 = (var_1_54 - (var_1_25 - 4));
   } else {
    if (stepLocal_5 >= ((((var_1_58) > (-25)) ? (var_1_58) : (-25)))) {
     var_1_23 = var_1_9;
    } else {
     var_1_23 = var_1_26;
    }
   }
  }
 } else {
  var_1_23 = var_1_22;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483646);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483647);
 assume_abort_if_not(var_1_26 <= 2147483646);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 32);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 64);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 64);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427388000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427388000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 30);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 assume_abort_if_not(var_1_51 != 0.0F);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 1073741823);
 var_1_60 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 30);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 3221225470);
 assume_abort_if_not(var_1_61 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 127);
 assume_abort_if_not(var_1_63 <= 254);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 127);
 assume_abort_if_not(var_1_64 <= 254);
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_70 = var_1_70;
}
int property(void) {
 return (((((((((((((((((((((((((last_1_var_1_23 + last_1_var_1_19) == (last_1_var_1_58 / ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_1 == ((unsigned char) (var_1_7 - var_1_8))) : 1) && (var_1_9 == ((unsigned short int) (((((var_1_8) < (var_1_70)) ? (var_1_8) : (var_1_70))) + var_1_7)))) && (var_1_11 ? ((var_1_12 || var_1_13) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)))))) : (var_1_10 == ((unsigned char) (var_1_16 || var_1_15))))) && ((last_1_var_1_10 && var_1_16) ? (var_1_18 ? (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - (last_1_var_1_70 + var_1_8))))) : 1) : 1)) && ((var_1_65 >= 0) ? (var_1_22 == ((unsigned long int) var_1_65)) : (var_1_22 == ((unsigned long int) ((((var_1_21) < (((((var_1_39) < (var_1_7)) ? (var_1_39) : (var_1_7))))) ? (var_1_21) : (((((var_1_39) < (var_1_7)) ? (var_1_39) : (var_1_7)))))))))) && ((var_1_7 == var_1_9) ? (((var_1_58 ^ ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) <= ((var_1_22 / var_1_7) / -1)) ? (var_1_23 == ((signed long int) (2 - var_1_7))) : ((var_1_16 || ((var_1_7 * 64) <= var_1_54)) ? (var_1_23 == ((signed long int) (var_1_54 - (var_1_25 - 4)))) : (((((((var_1_7 * var_1_58)) > ((var_1_6 * var_1_54))) ? ((var_1_7 * var_1_58)) : ((var_1_6 * var_1_54)))) >= ((((var_1_58) > (-25)) ? (var_1_58) : (-25)))) ? (var_1_23 == ((signed long int) var_1_9)) : (var_1_23 == ((signed long int) var_1_26))))) : (var_1_23 == ((signed long int) var_1_22)))) && (var_1_44 ? (var_1_27 == ((unsigned char) (((32 + var_1_28) + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) - (var_1_30 + (var_1_31 + 25))))) : (var_1_27 == ((unsigned char) ((((((((var_1_31) > (8)) ? (var_1_31) : (8)))) > (var_1_28)) ? (((((var_1_31) > (8)) ? (var_1_31) : (8)))) : (var_1_28))))))) && (((- var_1_45) <= ((var_1_34 + var_1_35) - var_1_36)) ? (var_1_32 == ((double) ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) : (var_1_32 == ((double) (((((31.2 + var_1_37)) < ((var_1_34 - (9.201079347352285E18 - var_1_38)))) ? ((31.2 + var_1_37)) : ((var_1_34 - (9.201079347352285E18 - var_1_38))))))))) && ((var_1_26 < ((last_1_var_1_19 / var_1_7) & last_1_var_1_22)) ? (((128 >> var_1_40) < last_1_var_1_19) ? ((last_1_var_1_45 >= var_1_35) ? (var_1_39 == ((signed long int) ((((var_1_30) < (var_1_40)) ? (var_1_30) : (var_1_40))))) : 1) : 1) : 1)) && (var_1_43 == ((signed long int) (var_1_22 + last_1_var_1_43)))) && ((var_1_31 >= (var_1_19 + ((((var_1_5) < (var_1_39)) ? (var_1_5) : (var_1_39))))) ? (var_1_44 == ((unsigned char) var_1_15)) : 1)) && (var_1_17 ? (var_1_45 == ((double) var_1_35)) : (var_1_45 == ((double) ((var_1_38 - (var_1_46 + var_1_47)) + (var_1_48 - var_1_49)))))) && (((var_1_48 - (var_1_46 + var_1_35)) == ((var_1_36 - var_1_34) / var_1_51)) ? ((var_1_1 >= var_1_66) ? (((((((var_1_28) > (var_1_27)) ? (var_1_28) : (var_1_27))) / var_1_21) > (- (var_1_20 - var_1_54))) ? (var_1_50 == ((signed short int) ((((var_1_31) < (var_1_28)) ? (var_1_31) : (var_1_28))))) : (var_1_50 == ((signed short int) var_1_57))) : (var_1_50 == ((signed short int) var_1_57))) : (var_1_50 == ((signed short int) var_1_30)))) && ((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) >= ((~ var_1_29) + var_1_58)) ? (var_1_52 == ((float) ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) : 1)) && ((var_1_58 > var_1_8) ? (var_1_53 == ((unsigned char) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) : 1)) && ((var_1_66 >= 128) ? (var_1_54 == ((signed long int) (((((last_1_var_1_54) < ((var_1_56 - var_1_28))) ? (last_1_var_1_54) : ((var_1_56 - var_1_28)))) + ((((var_1_58) > (var_1_31)) ? (var_1_58) : (var_1_31)))))) : (var_1_54 == ((signed long int) var_1_40)))) && ((var_1_5 <= (var_1_66 / var_1_6)) ? (var_1_57 == ((unsigned long int) (var_1_20 - var_1_40))) : (var_1_57 == ((unsigned long int) (((((var_1_39 + (var_1_56 + var_1_7))) > (var_1_28)) ? ((var_1_39 + (var_1_56 + var_1_7))) : (var_1_28))))))) && (var_1_18 ? (last_1_var_1_10 ? ((((var_1_40 >> var_1_60) / var_1_6) >= (((((var_1_56) < (var_1_31)) ? (var_1_56) : (var_1_31))) % var_1_5)) ? (var_1_58 == ((unsigned long int) (var_1_31 + (((((var_1_25 - var_1_28)) < (last_1_var_1_1)) ? ((var_1_25 - var_1_28)) : (last_1_var_1_1)))))) : (var_1_58 == ((unsigned long int) (var_1_28 + var_1_25)))) : ((var_1_36 >= (- last_1_var_1_45)) ? ((last_1_var_1_45 <= var_1_37) ? (var_1_58 == ((unsigned long int) (var_1_40 + (((((1156387542u - var_1_7)) > (var_1_28)) ? ((1156387542u - var_1_7)) : (var_1_28)))))) : (var_1_58 == ((unsigned long int) ((var_1_61 - (var_1_7 + var_1_60)) - last_1_var_1_1)))) : 1)) : (var_1_58 == ((unsigned long int) ((var_1_61 - var_1_30) - (((((var_1_21) < (var_1_25)) ? (var_1_21) : (var_1_25))) - (var_1_29 + last_1_var_1_65))))))) && (var_1_62 == ((unsigned char) (((((((((var_1_7) > (var_1_63)) ? (var_1_7) : (var_1_63)))) < (var_1_64)) ? (((((var_1_7) > (var_1_63)) ? (var_1_7) : (var_1_63)))) : (var_1_64))) - var_1_60)))) && ((var_1_14 && ((var_1_48 + var_1_46) <= var_1_51)) ? (var_1_65 == ((unsigned char) (((((var_1_64) > (var_1_63)) ? (var_1_64) : (var_1_63))) - (var_1_29 - (50 - var_1_40))))) : (var_1_65 == ((unsigned char) ((var_1_29 - 5) + var_1_31))))) && ((! var_1_14) ? (((((((var_1_47) < (var_1_38)) ? (var_1_47) : (var_1_38))) - (var_1_46 + var_1_34)) <= var_1_35) ? (var_1_66 == ((unsigned long int) ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))))) : (var_1_66 == ((unsigned long int) (var_1_21 + var_1_40)))) : 1)) && (((var_1_49 >= (var_1_52 / var_1_51)) || (var_1_42 > var_1_68)) ? ((var_1_43 >= var_1_57) ? (var_1_67 == ((signed char) ((var_1_40 - var_1_60) + var_1_31))) : ((var_1_15 && (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) > (var_1_43 | var_1_66))) ? (var_1_67 == ((signed char) (var_1_60 + var_1_40))) : (var_1_67 == ((signed char) (var_1_28 - var_1_31))))) : ((var_1_25 < var_1_39) ? (var_1_67 == ((signed char) var_1_40)) : (var_1_67 == ((signed char) var_1_60))))) && ((((((var_1_40) > ((- var_1_19))) ? (var_1_40) : ((- var_1_19)))) <= ((((var_1_58) > (var_1_20)) ? (var_1_58) : (var_1_20)))) ? (var_1_69 == ((signed char) (var_1_40 + (var_1_28 - var_1_60)))) : (var_1_69 == ((signed char) var_1_28)))) && (var_1_70 == ((unsigned short int) var_1_50))
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
