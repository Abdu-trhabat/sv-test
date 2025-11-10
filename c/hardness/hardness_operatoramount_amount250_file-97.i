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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 4;
double var_1_5 = 0.8;
unsigned long int var_1_6 = 8;
unsigned long int var_1_7 = 2819353023;
unsigned long int var_1_9 = 2;
unsigned long int var_1_10 = 1224777821;
unsigned long int var_1_11 = 3973068675;
unsigned long int var_1_12 = 1000000000;
unsigned long int var_1_13 = 1000000000;
unsigned long int var_1_14 = 1477884391;
unsigned short int var_1_15 = 4;
double var_1_16 = 15.25;
unsigned short int var_1_17 = 10;
unsigned short int var_1_18 = 5;
unsigned short int var_1_19 = 0;
unsigned short int var_1_20 = 200;
unsigned long int var_1_21 = 1;
signed char var_1_22 = -10;
signed char var_1_23 = 50;
signed char var_1_24 = 32;
signed char var_1_25 = 50;
signed char var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 200;
unsigned long int var_1_31 = 2;
unsigned short int var_1_32 = 32;
unsigned short int var_1_34 = 24008;
unsigned char var_1_35 = 2;
unsigned long int var_1_36 = 1;
signed short int var_1_37 = 2;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
signed char var_1_40 = 32;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 4;
signed short int var_1_45 = 0;
unsigned short int var_1_46 = 2;
unsigned short int var_1_47 = 39444;
unsigned short int var_1_48 = 10000;
unsigned long int var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned short int var_1_51 = 10000;
signed short int var_1_52 = 10;
unsigned long int var_1_53 = 16;
signed char var_1_54 = -2;
signed char var_1_55 = 8;
signed char var_1_56 = -8;
double var_1_57 = 8.5;
float var_1_58 = 255.15;
float var_1_59 = 64.4;
float var_1_60 = 1.2;
double var_1_61 = 8.875;
double var_1_62 = 4.5;
double var_1_63 = 200.875;
double var_1_64 = 2.25;
double var_1_65 = 4.5;
double var_1_66 = 4.6;
double var_1_67 = 0.0;
unsigned long int var_1_68 = 25;
unsigned char var_1_69 = 4;
unsigned char var_1_71 = 64;
signed char var_1_72 = 0;
float var_1_73 = 9999999999999.25;
double var_1_74 = 10.75;
unsigned long int last_1_var_1_1 = 4;
unsigned short int last_1_var_1_15 = 4;
unsigned long int last_1_var_1_21 = 1;
unsigned long int last_1_var_1_30 = 200;
unsigned short int last_1_var_1_32 = 32;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_30 * (~ last_1_var_1_1)) >= (last_1_var_1_15 / var_1_36)) {
  var_1_66 = ((((var_1_65) > (var_1_61)) ? (var_1_65) : (var_1_61)));
 } else {
  var_1_66 = (var_1_62 - (var_1_67 - var_1_63));
 }
 signed char stepLocal_6 = var_1_24;
 if (stepLocal_6 >= last_1_var_1_21) {
  var_1_38 = ((((((var_1_26) < (-1)) ? (var_1_26) : (-1))) >= var_1_13) && var_1_39);
 }
 unsigned long int stepLocal_19 = var_1_10;
 if (last_1_var_1_32 > stepLocal_19) {
  var_1_74 = (((((var_1_62) > (var_1_67)) ? (var_1_62) : (var_1_67))) - var_1_63);
 } else {
  var_1_74 = 9.999999994E8;
 }
 signed long int stepLocal_16 = var_1_42 / var_1_24;
 if ((- var_1_74) < ((var_1_58 - var_1_59) / var_1_60)) {
  var_1_57 = ((((var_1_61) < (3.87)) ? (var_1_61) : (3.87)));
 } else {
  if (stepLocal_16 < var_1_9) {
   var_1_57 = ((var_1_62 - var_1_63) + (var_1_64 + var_1_65));
  }
 }
 if ((- ((((50.75) > (var_1_57)) ? (50.75) : (var_1_57)))) < (var_1_74 / 0.05)) {
  var_1_30 = (var_1_11 - var_1_20);
 } else {
  var_1_30 = var_1_19;
 }
 unsigned char stepLocal_17 = (var_1_26 << var_1_10) >= var_1_30;
 if (var_1_29) {
  if (((var_1_11 - var_1_12) < 256u) || stepLocal_17) {
   var_1_69 = var_1_71;
  } else {
   var_1_69 = var_1_44;
  }
 } else {
  var_1_69 = var_1_42;
 }
 if (var_1_57 > var_1_74) {
  var_1_22 = var_1_23;
 } else {
  var_1_22 = (1 - ((var_1_24 + var_1_25) - var_1_26));
 }
 var_1_27 = (var_1_28 && var_1_29);
 signed long int stepLocal_5 = 10;
 unsigned char stepLocal_4 = var_1_24 < var_1_19;
 unsigned char stepLocal_3 = var_1_27;
 if ((((((0) < (var_1_18)) ? (0) : (var_1_18))) >> var_1_36) >= stepLocal_5) {
  if (var_1_27 || stepLocal_4) {
   var_1_35 = (var_1_25 + var_1_26);
  } else {
   if (stepLocal_3 && var_1_28) {
    var_1_35 = ((var_1_25 + var_1_36) + var_1_26);
   } else {
    var_1_35 = (var_1_36 + var_1_24);
   }
  }
 }
 var_1_37 = var_1_20;
 unsigned char stepLocal_8 = var_1_29;
 if (stepLocal_8 && var_1_27) {
  var_1_46 = ((((((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20)))) > ((var_1_43 + var_1_26))) ? (((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20)))) : ((var_1_43 + var_1_26))));
 } else {
  if (var_1_27) {
   var_1_46 = (((((var_1_47) > ((var_1_34 + 21566))) ? (var_1_47) : ((var_1_34 + 21566)))) - (var_1_25 + (var_1_48 - var_1_43)));
  } else {
   var_1_46 = (var_1_47 - var_1_36);
  }
 }
 var_1_50 = ((var_1_29 && var_1_28) && (! var_1_39));
 if (var_1_27) {
  var_1_72 = var_1_55;
 } else {
  var_1_72 = var_1_25;
 }
 unsigned long int stepLocal_18 = var_1_12;
 if (stepLocal_18 > var_1_48) {
  var_1_73 = ((((var_1_61) < (var_1_65)) ? (var_1_61) : (var_1_65)));
 } else {
  var_1_73 = ((((var_1_64) < ((var_1_63 + var_1_62))) ? (var_1_64) : ((var_1_63 + var_1_62))));
 }
 if (var_1_74 >= var_1_66) {
  var_1_31 = var_1_24;
 } else {
  var_1_31 = (var_1_6 + (var_1_24 + var_1_26));
 }
 if (var_1_73 < var_1_66) {
  var_1_32 = (((((var_1_19) > (var_1_17)) ? (var_1_19) : (var_1_17))) + (var_1_34 - 1));
 }
 if (var_1_39) {
  if (var_1_32 > (var_1_46 / var_1_24)) {
   var_1_51 = (40801 - ((((((((var_1_19) < (var_1_42)) ? (var_1_19) : (var_1_42)))) < ((4 + var_1_20))) ? (((((var_1_19) < (var_1_42)) ? (var_1_19) : (var_1_42)))) : ((4 + var_1_20)))));
  } else {
   var_1_51 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
  }
 }
 if (((- var_1_57) * var_1_57) == var_1_74) {
  if (var_1_38) {
   var_1_15 = ((((128) > ((var_1_17 + 32))) ? (128) : ((var_1_17 + 32))));
  } else {
   var_1_15 = (var_1_17 + ((((var_1_18) > ((var_1_19 + var_1_20))) ? (var_1_18) : ((var_1_19 + var_1_20)))));
  }
 } else {
  var_1_15 = var_1_17;
 }
 unsigned long int stepLocal_2 = - (var_1_11 * var_1_9);
 if ((var_1_6 | (var_1_31 + var_1_14)) < stepLocal_2) {
  if (var_1_5 >= var_1_16) {
   var_1_21 = (3729661190u - ((((var_1_6) > (var_1_9)) ? (var_1_6) : (var_1_9))));
  }
 }
 if (var_1_38 || var_1_27) {
  var_1_68 = (((((25u + (var_1_14 - var_1_34))) < (1u)) ? ((25u + (var_1_14 - var_1_34))) : (1u)));
 } else {
  var_1_68 = ((((10u) < 0 ) ? -(10u) : (10u)));
 }
 var_1_45 = var_1_69;
 if (var_1_10 >= (var_1_31 + var_1_9)) {
  var_1_40 = var_1_23;
 }
 unsigned short int stepLocal_15 = var_1_47;
 signed char stepLocal_14 = var_1_24;
 if ((var_1_32 & var_1_20) > stepLocal_14) {
  if (10u < stepLocal_15) {
   if (var_1_28) {
    var_1_54 = ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) < (var_1_44)) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : (var_1_44)));
   } else {
    var_1_54 = (((var_1_55 + var_1_56) + 25) + var_1_24);
   }
  }
 } else {
  var_1_54 = (var_1_26 + (10 + var_1_36));
 }
 unsigned char stepLocal_9 = (var_1_11 - var_1_31) != var_1_51;
 if (stepLocal_9 || (var_1_44 > var_1_68)) {
  var_1_49 = ((((var_1_18) > (var_1_31)) ? (var_1_18) : (var_1_31)));
 }
 signed short int stepLocal_13 = var_1_45;
 unsigned long int stepLocal_12 = (var_1_11 - var_1_10) + var_1_12;
 unsigned long int stepLocal_11 = var_1_49;
 if (var_1_46 < stepLocal_11) {
  if (stepLocal_13 <= var_1_23) {
   var_1_53 = var_1_18;
  } else {
   var_1_53 = ((((32u) < (var_1_13)) ? (32u) : (var_1_13)));
  }
 } else {
  if (stepLocal_12 >= var_1_47) {
   var_1_53 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
  }
 }
 unsigned long int stepLocal_7 = var_1_49;
 if (stepLocal_7 <= 25) {
  var_1_41 = ((var_1_42 + var_1_43) - 32);
 } else {
  if (var_1_27) {
   var_1_41 = (5 + (var_1_43 - (var_1_36 + var_1_44)));
  }
 }
 unsigned long int stepLocal_1 = (((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53));
 unsigned char stepLocal_0 = var_1_38;
 if (stepLocal_0 && var_1_50) {
  if (var_1_74 == var_1_57) {
   var_1_1 = (var_1_6 + 10u);
  }
 } else {
  if ((var_1_7 - var_1_6) <= stepLocal_1) {
   if (var_1_57 != var_1_74) {
    if (var_1_57 < var_1_74) {
     var_1_1 = (((1000000000u - 10u) + var_1_9) + var_1_6);
    } else {
     var_1_1 = ((((((var_1_10 + 1393715471u)) < (var_1_11)) ? ((var_1_10 + 1393715471u)) : (var_1_11))) - (256u + var_1_9));
    }
   } else {
    var_1_1 = (((((var_1_6 + var_1_9)) < (var_1_11)) ? ((var_1_6 + var_1_9)) : (var_1_11)));
   }
  } else {
   var_1_1 = (((var_1_12 + var_1_13) + var_1_14) - var_1_9);
  }
 }
 unsigned long int stepLocal_10 = var_1_6;
 if (stepLocal_10 > (var_1_1 * var_1_20)) {
  var_1_52 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 2147483647);
 assume_abort_if_not(var_1_7 <= 4294967295);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 536870911);
 assume_abort_if_not(var_1_12 <= 1073741824);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 536870912);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741824);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16384);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 31);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 32);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 16383);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 30);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 63);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 64);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 31);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 32767);
 assume_abort_if_not(var_1_47 <= 65534);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 8191);
 assume_abort_if_not(var_1_48 <= 16383);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -15);
 assume_abort_if_not(var_1_55 <= 16);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -15);
 assume_abort_if_not(var_1_56 <= 16);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 assume_abort_if_not(var_1_60 != 0.0F);
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -922337.2036854766000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= -230584.3009213691400e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= -230584.3009213691400e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= 4611686.018427383000e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_38 && var_1_50) ? ((var_1_74 == var_1_57) ? (var_1_1 == ((unsigned long int) (var_1_6 + 10u))) : 1) : (((var_1_7 - var_1_6) <= ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))) ? ((var_1_57 != var_1_74) ? ((var_1_57 < var_1_74) ? (var_1_1 == ((unsigned long int) (((1000000000u - 10u) + var_1_9) + var_1_6))) : (var_1_1 == ((unsigned long int) ((((((var_1_10 + 1393715471u)) < (var_1_11)) ? ((var_1_10 + 1393715471u)) : (var_1_11))) - (256u + var_1_9))))) : (var_1_1 == ((unsigned long int) (((((var_1_6 + var_1_9)) < (var_1_11)) ? ((var_1_6 + var_1_9)) : (var_1_11)))))) : (var_1_1 == ((unsigned long int) (((var_1_12 + var_1_13) + var_1_14) - var_1_9))))) && ((((- var_1_57) * var_1_57) == var_1_74) ? (var_1_38 ? (var_1_15 == ((unsigned short int) ((((128) > ((var_1_17 + 32))) ? (128) : ((var_1_17 + 32)))))) : (var_1_15 == ((unsigned short int) (var_1_17 + ((((var_1_18) > ((var_1_19 + var_1_20))) ? (var_1_18) : ((var_1_19 + var_1_20)))))))) : (var_1_15 == ((unsigned short int) var_1_17)))) && (((var_1_6 | (var_1_31 + var_1_14)) < (- (var_1_11 * var_1_9))) ? ((var_1_5 >= var_1_16) ? (var_1_21 == ((unsigned long int) (3729661190u - ((((var_1_6) > (var_1_9)) ? (var_1_6) : (var_1_9)))))) : 1) : 1)) && ((var_1_57 > var_1_74) ? (var_1_22 == ((signed char) var_1_23)) : (var_1_22 == ((signed char) (1 - ((var_1_24 + var_1_25) - var_1_26)))))) && (var_1_27 == ((unsigned char) (var_1_28 && var_1_29)))) && (((- ((((50.75) > (var_1_57)) ? (50.75) : (var_1_57)))) < (var_1_74 / 0.05)) ? (var_1_30 == ((unsigned long int) (var_1_11 - var_1_20))) : (var_1_30 == ((unsigned long int) var_1_19)))) && ((var_1_74 >= var_1_66) ? (var_1_31 == ((unsigned long int) var_1_24)) : (var_1_31 == ((unsigned long int) (var_1_6 + (var_1_24 + var_1_26)))))) && ((var_1_73 < var_1_66) ? (var_1_32 == ((unsigned short int) (((((var_1_19) > (var_1_17)) ? (var_1_19) : (var_1_17))) + (var_1_34 - 1)))) : 1)) && (((((((0) < (var_1_18)) ? (0) : (var_1_18))) >> var_1_36) >= 10) ? ((var_1_27 || (var_1_24 < var_1_19)) ? (var_1_35 == ((unsigned char) (var_1_25 + var_1_26))) : ((var_1_27 && var_1_28) ? (var_1_35 == ((unsigned char) ((var_1_25 + var_1_36) + var_1_26))) : (var_1_35 == ((unsigned char) (var_1_36 + var_1_24))))) : 1)) && (var_1_37 == ((signed short int) var_1_20))) && ((var_1_24 >= last_1_var_1_21) ? (var_1_38 == ((unsigned char) ((((((var_1_26) < (-1)) ? (var_1_26) : (-1))) >= var_1_13) && var_1_39))) : 1)) && ((var_1_10 >= (var_1_31 + var_1_9)) ? (var_1_40 == ((signed char) var_1_23)) : 1)) && ((var_1_49 <= 25) ? (var_1_41 == ((unsigned char) ((var_1_42 + var_1_43) - 32))) : (var_1_27 ? (var_1_41 == ((unsigned char) (5 + (var_1_43 - (var_1_36 + var_1_44))))) : 1))) && (var_1_45 == ((signed short int) var_1_69))) && ((var_1_29 && var_1_27) ? (var_1_46 == ((unsigned short int) ((((((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20)))) > ((var_1_43 + var_1_26))) ? (((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20)))) : ((var_1_43 + var_1_26)))))) : (var_1_27 ? (var_1_46 == ((unsigned short int) (((((var_1_47) > ((var_1_34 + 21566))) ? (var_1_47) : ((var_1_34 + 21566)))) - (var_1_25 + (var_1_48 - var_1_43))))) : (var_1_46 == ((unsigned short int) (var_1_47 - var_1_36)))))) && ((((var_1_11 - var_1_31) != var_1_51) || (var_1_44 > var_1_68)) ? (var_1_49 == ((unsigned long int) ((((var_1_18) > (var_1_31)) ? (var_1_18) : (var_1_31))))) : 1)) && (var_1_50 == ((unsigned char) ((var_1_29 && var_1_28) && (! var_1_39))))) && (var_1_39 ? ((var_1_32 > (var_1_46 / var_1_24)) ? (var_1_51 == ((unsigned short int) (40801 - ((((((((var_1_19) < (var_1_42)) ? (var_1_19) : (var_1_42)))) < ((4 + var_1_20))) ? (((((var_1_19) < (var_1_42)) ? (var_1_19) : (var_1_42)))) : ((4 + var_1_20))))))) : (var_1_51 == ((unsigned short int) ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))) : 1)) && ((var_1_6 > (var_1_1 * var_1_20)) ? (var_1_52 == ((signed short int) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : 1)) && ((var_1_46 < var_1_49) ? ((var_1_45 <= var_1_23) ? (var_1_53 == ((unsigned long int) var_1_18)) : (var_1_53 == ((unsigned long int) ((((32u) < (var_1_13)) ? (32u) : (var_1_13)))))) : ((((var_1_11 - var_1_10) + var_1_12) >= var_1_47) ? (var_1_53 == ((unsigned long int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : 1))) && (((var_1_32 & var_1_20) > var_1_24) ? ((10u < var_1_47) ? (var_1_28 ? (var_1_54 == ((signed char) ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) < (var_1_44)) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : (var_1_44))))) : (var_1_54 == ((signed char) (((var_1_55 + var_1_56) + 25) + var_1_24)))) : 1) : (var_1_54 == ((signed char) (var_1_26 + (10 + var_1_36)))))) && (((- var_1_74) < ((var_1_58 - var_1_59) / var_1_60)) ? (var_1_57 == ((double) ((((var_1_61) < (3.87)) ? (var_1_61) : (3.87))))) : (((var_1_42 / var_1_24) < var_1_9) ? (var_1_57 == ((double) ((var_1_62 - var_1_63) + (var_1_64 + var_1_65)))) : 1))) && (((last_1_var_1_30 * (~ last_1_var_1_1)) >= (last_1_var_1_15 / var_1_36)) ? (var_1_66 == ((double) ((((var_1_65) > (var_1_61)) ? (var_1_65) : (var_1_61))))) : (var_1_66 == ((double) (var_1_62 - (var_1_67 - var_1_63)))))) && ((var_1_38 || var_1_27) ? (var_1_68 == ((unsigned long int) (((((25u + (var_1_14 - var_1_34))) < (1u)) ? ((25u + (var_1_14 - var_1_34))) : (1u))))) : (var_1_68 == ((unsigned long int) ((((10u) < 0 ) ? -(10u) : (10u))))))) && (var_1_29 ? ((((var_1_11 - var_1_12) < 256u) || ((var_1_26 << var_1_10) >= var_1_30)) ? (var_1_69 == ((unsigned char) var_1_71)) : (var_1_69 == ((unsigned char) var_1_44))) : (var_1_69 == ((unsigned char) var_1_42)))) && (var_1_27 ? (var_1_72 == ((signed char) var_1_55)) : (var_1_72 == ((signed char) var_1_25)))) && ((var_1_12 > var_1_48) ? (var_1_73 == ((float) ((((var_1_61) < (var_1_65)) ? (var_1_61) : (var_1_65))))) : (var_1_73 == ((float) ((((var_1_64) < ((var_1_63 + var_1_62))) ? (var_1_64) : ((var_1_63 + var_1_62)))))))) && ((last_1_var_1_32 > var_1_10) ? (var_1_74 == ((double) (((((var_1_62) > (var_1_67)) ? (var_1_62) : (var_1_67))) - var_1_63))) : (var_1_74 == ((double) 9.999999994E8)))
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
