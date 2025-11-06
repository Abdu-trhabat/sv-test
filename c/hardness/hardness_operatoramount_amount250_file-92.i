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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 5;
signed short int var_1_8 = 500;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 10;
unsigned char var_1_12 = 5;
signed short int var_1_13 = 8;
unsigned long int var_1_14 = 0;
unsigned long int var_1_18 = 1000000000;
signed long int var_1_19 = 50;
signed long int var_1_20 = 1495534220;
unsigned long int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 17273;
unsigned short int var_1_24 = 43392;
float var_1_25 = 63.4;
float var_1_26 = 127.875;
float var_1_27 = 4.5;
unsigned long int var_1_28 = 2;
unsigned long int var_1_29 = 2760471636;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 1;
unsigned short int var_1_32 = 4;
signed long int var_1_33 = 10;
unsigned long int var_1_34 = 4;
float var_1_35 = 199.25;
float var_1_36 = 0.0;
float var_1_37 = 0.0;
float var_1_38 = 2.8;
float var_1_39 = 9.8;
float var_1_40 = 0.5;
float var_1_41 = 128.4;
float var_1_42 = 100000000000000.75;
float var_1_43 = 4.25;
unsigned long int var_1_44 = 10;
unsigned long int var_1_45 = 1112466972;
signed short int var_1_46 = 8;
signed short int var_1_47 = 10000;
signed short int var_1_48 = -16;
signed short int var_1_49 = 64;
unsigned short int var_1_50 = 5;
signed char var_1_51 = 16;
signed char var_1_52 = 0;
double var_1_53 = 9.25;
double var_1_54 = 0.0;
double var_1_55 = 256.875;
double var_1_56 = 0.0;
double var_1_57 = 5.8;
unsigned long int var_1_58 = 10000000;
unsigned long int var_1_59 = 128;
signed short int var_1_60 = 25;
double var_1_61 = 127.75;
unsigned short int var_1_62 = 100;
signed short int var_1_63 = -5;
unsigned short int var_1_64 = 32;
unsigned long int var_1_65 = 1;
float var_1_66 = 3.25;
signed long int var_1_67 = 256;
double var_1_68 = 256.75;
unsigned long int var_1_69 = 128;
unsigned char last_1_var_1_1 = 0;
unsigned long int last_1_var_1_14 = 0;
signed long int last_1_var_1_19 = 50;
unsigned long int last_1_var_1_28 = 2;
float last_1_var_1_35 = 199.25;
unsigned short int last_1_var_1_50 = 5;
unsigned short int last_1_var_1_62 = 100;
float last_1_var_1_66 = 3.25;
unsigned long int last_1_var_1_69 = 128;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_1) {
  var_1_65 = last_1_var_1_28;
 }
 unsigned char stepLocal_9 = ! 0;
 if ((3.2 + (var_1_43 * last_1_var_1_35)) >= last_1_var_1_66) {
  if (last_1_var_1_1 || stepLocal_9) {
   var_1_61 = var_1_26;
  } else {
   var_1_61 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
  }
 }
 if ((3.2 / 50.5) > (var_1_61 / ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) {
  var_1_64 = var_1_47;
 } else {
  var_1_64 = var_1_51;
 }
 unsigned long int stepLocal_8 = last_1_var_1_14;
 if (var_1_49 <= stepLocal_8) {
  if (var_1_9) {
   var_1_53 = (((((var_1_38) > ((var_1_39 + var_1_40))) ? (var_1_38) : ((var_1_39 + var_1_40)))) - ((var_1_54 - var_1_55) + (var_1_56 - var_1_57)));
  } else {
   var_1_53 = ((((var_1_38) < ((var_1_43 + var_1_39))) ? (var_1_38) : ((var_1_43 + var_1_39))));
  }
 }
 if (var_1_2) {
  if (last_1_var_1_50 > last_1_var_1_62) {
   var_1_1 = (! (! (var_1_5 || var_1_6)));
  }
 } else {
  if (last_1_var_1_50 < (var_1_7 - (31514 - var_1_8))) {
   var_1_1 = (! var_1_9);
  } else {
   var_1_1 = (var_1_9 && var_1_6);
  }
 }
 var_1_10 = ((((var_1_8) > (var_1_11)) ? (var_1_8) : (var_1_11)));
 unsigned long int stepLocal_0 = (3877202530u - var_1_8) >> var_1_13;
 if (8u == stepLocal_0) {
  var_1_12 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
 }
 if (var_1_18 <= var_1_11) {
  if (((var_1_8 | var_1_20) < var_1_13) || (var_1_5 && var_1_1)) {
   var_1_21 = (((((((((2u) > (var_1_8)) ? (2u) : (var_1_8))) + var_1_20)) > (var_1_64)) ? ((((((2u) > (var_1_8)) ? (2u) : (var_1_8))) + var_1_20)) : (var_1_64)));
  } else {
   var_1_21 = ((((((var_1_13) < (var_1_64)) ? (var_1_13) : (var_1_64))) + var_1_8) + var_1_20);
  }
 }
 if (var_1_9) {
  var_1_30 = ((((var_1_13) > (var_1_31)) ? (var_1_13) : (var_1_31)));
 }
 if (var_1_10 < (var_1_23 << var_1_13)) {
  if (((var_1_23 >> var_1_33) + var_1_30) == ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) {
   var_1_32 = ((((var_1_30) > (var_1_8)) ? (var_1_30) : (var_1_8)));
  }
 } else {
  if (var_1_9) {
   var_1_32 = (var_1_31 + var_1_23);
  } else {
   if (var_1_10 > var_1_8) {
    var_1_32 = ((((var_1_12) > ((var_1_24 - var_1_30))) ? (var_1_12) : ((var_1_24 - var_1_30))));
   } else {
    var_1_32 = ((var_1_23 - var_1_8) + (var_1_12 + var_1_30));
   }
  }
 }
 if (var_1_9) {
  if ((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) + var_1_24) != var_1_7) {
   var_1_44 = ((1491051567u + var_1_45) - var_1_33);
  }
 }
 var_1_48 = ((var_1_31 + var_1_49) + 8);
 var_1_58 = ((((var_1_29 - ((((var_1_33) < (var_1_59)) ? (var_1_33) : (var_1_59)))) < 0 ) ? -(var_1_29 - ((((var_1_33) < (var_1_59)) ? (var_1_33) : (var_1_59)))) : (var_1_29 - ((((var_1_33) < (var_1_59)) ? (var_1_33) : (var_1_59))))));
 var_1_62 = 16;
 var_1_66 = var_1_57;
 if (var_1_6) {
  var_1_68 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 } else {
  var_1_68 = (((var_1_57 + var_1_55) + var_1_40) - var_1_41);
 }
 var_1_69 = last_1_var_1_69;
 if (49.3 >= (var_1_68 * var_1_53)) {
  var_1_28 = (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - ((var_1_58 + var_1_24) + var_1_65));
 } else {
  var_1_28 = (var_1_29 - ((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13))));
 }
 if ((var_1_61 * var_1_53) != var_1_61) {
  if (var_1_61 > (var_1_53 + var_1_61)) {
   var_1_14 = (var_1_13 + ((var_1_18 - var_1_8) + var_1_69));
  } else {
   var_1_14 = (3685578368u - var_1_69);
  }
 }
 signed long int stepLocal_3 = var_1_20 + -10000;
 unsigned char stepLocal_2 = var_1_1;
 if (((- var_1_61) > ((((var_1_53) < (var_1_61)) ? (var_1_53) : (var_1_61)))) && stepLocal_2) {
  if (var_1_8 >= stepLocal_3) {
   var_1_22 = ((((var_1_13) < ((var_1_69 + var_1_8))) ? (var_1_13) : ((var_1_69 + var_1_8))));
  } else {
   var_1_22 = ((var_1_69 + var_1_8) + (var_1_23 - var_1_13));
  }
 } else {
  var_1_22 = (var_1_24 - var_1_8);
 }
 signed long int stepLocal_5 = ((((var_1_22) > (var_1_33)) ? (var_1_22) : (var_1_33))) << var_1_65;
 if (stepLocal_5 > ((((var_1_14) > (var_1_64)) ? (var_1_14) : (var_1_64)))) {
  var_1_34 = ((((var_1_11) < (var_1_29)) ? (var_1_11) : (var_1_29)));
 }
 signed short int stepLocal_6 = var_1_13;
 if (! (var_1_34 != (var_1_58 * var_1_23))) {
  if (var_1_6) {
   var_1_35 = ((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))) - var_1_38) - (((((8.5f) > (var_1_39)) ? (8.5f) : (var_1_39))) + var_1_40));
  } else {
   if (stepLocal_6 >= var_1_44) {
    var_1_35 = (((((var_1_40) > (var_1_39)) ? (var_1_40) : (var_1_39))) + var_1_27);
   } else {
    var_1_35 = (var_1_36 - var_1_41);
   }
  }
 } else {
  var_1_35 = (var_1_40 + var_1_27);
 }
 if (((var_1_28 + var_1_58) >> (var_1_51 - var_1_52)) > var_1_69) {
  var_1_50 = var_1_58;
 }
 signed short int stepLocal_1 = var_1_8;
 if (stepLocal_1 >= var_1_21) {
  var_1_19 = last_1_var_1_19;
 } else {
  if (var_1_53 != ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))) {
   var_1_19 = ((var_1_20 - var_1_13) - 128);
  } else {
   var_1_19 = (var_1_13 + last_1_var_1_19);
  }
 }
 unsigned long int stepLocal_4 = var_1_19 + 10u;
 if (stepLocal_4 >= var_1_20) {
  var_1_25 = var_1_26;
 } else {
  var_1_25 = (((((var_1_27 + 255.5f)) > (var_1_26)) ? ((var_1_27 + 255.5f)) : (var_1_26)));
 }
 unsigned char stepLocal_7 = var_1_31;
 if (var_1_28 > stepLocal_7) {
  var_1_42 = (var_1_39 + var_1_43);
 }
 if (var_1_43 <= ((((var_1_66) < ((- var_1_61))) ? (var_1_66) : ((- var_1_61))))) {
  if (var_1_1) {
   var_1_46 = ((var_1_50 + (var_1_47 - var_1_13)) - var_1_33);
  } else {
   var_1_46 = ((((((var_1_33 + var_1_47)) < (var_1_8)) ? ((var_1_33 + var_1_47)) : (var_1_8))) - var_1_13);
  }
 } else {
  var_1_46 = (var_1_47 + var_1_33);
 }
 if (var_1_1) {
  if (10u >= var_1_31) {
   var_1_60 = var_1_34;
  }
 } else {
  var_1_60 = ((4 + var_1_48) - ((((var_1_33) < (var_1_8)) ? (var_1_33) : (var_1_8))));
 }
 if (var_1_69 <= var_1_10) {
  var_1_63 = ((((((var_1_47 - var_1_51) + ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) > ((var_1_31 + (var_1_13 - var_1_33)))) ? (((var_1_47 - var_1_51) + ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) : ((var_1_31 + (var_1_13 - var_1_33)))));
 }
 if (var_1_9) {
  var_1_67 = var_1_22;
 } else {
  var_1_67 = var_1_7;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 536870912);
 assume_abort_if_not(var_1_18 <= 1073741824);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 1073741822);
 assume_abort_if_not(var_1_20 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 16383);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 32767);
 assume_abort_if_not(var_1_24 <= 65534);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 2147483647);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 15);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 4611686.018427383000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741824);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= 8191);
 assume_abort_if_not(var_1_47 <= 16383);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= -8191);
 assume_abort_if_not(var_1_49 <= 8191);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 15);
 assume_abort_if_not(var_1_51 <= 30);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 14);
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 2305843.009213691400e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 2305843.009213691400e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_69 = var_1_69;
}
int property(void) {
 return (((((((((((((((((((((((((((((var_1_2 ? ((last_1_var_1_50 > last_1_var_1_62) ? (var_1_1 == ((unsigned char) (! (! (var_1_5 || var_1_6))))) : 1) : ((last_1_var_1_50 < (var_1_7 - (31514 - var_1_8))) ? (var_1_1 == ((unsigned char) (! var_1_9))) : (var_1_1 == ((unsigned char) (var_1_9 && var_1_6))))) && (var_1_10 == ((unsigned long int) ((((var_1_8) > (var_1_11)) ? (var_1_8) : (var_1_11)))))) && ((8u == ((3877202530u - var_1_8) >> var_1_13)) ? (var_1_12 == ((unsigned char) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) : 1)) && (((var_1_61 * var_1_53) != var_1_61) ? ((var_1_61 > (var_1_53 + var_1_61)) ? (var_1_14 == ((unsigned long int) (var_1_13 + ((var_1_18 - var_1_8) + var_1_69)))) : (var_1_14 == ((unsigned long int) (3685578368u - var_1_69)))) : 1)) && ((var_1_8 >= var_1_21) ? (var_1_19 == ((signed long int) last_1_var_1_19)) : ((var_1_53 != ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))) ? (var_1_19 == ((signed long int) ((var_1_20 - var_1_13) - 128))) : (var_1_19 == ((signed long int) (var_1_13 + last_1_var_1_19)))))) && ((var_1_18 <= var_1_11) ? ((((var_1_8 | var_1_20) < var_1_13) || (var_1_5 && var_1_1)) ? (var_1_21 == ((unsigned long int) (((((((((2u) > (var_1_8)) ? (2u) : (var_1_8))) + var_1_20)) > (var_1_64)) ? ((((((2u) > (var_1_8)) ? (2u) : (var_1_8))) + var_1_20)) : (var_1_64))))) : (var_1_21 == ((unsigned long int) ((((((var_1_13) < (var_1_64)) ? (var_1_13) : (var_1_64))) + var_1_8) + var_1_20)))) : 1)) && ((((- var_1_61) > ((((var_1_53) < (var_1_61)) ? (var_1_53) : (var_1_61)))) && var_1_1) ? ((var_1_8 >= (var_1_20 + -10000)) ? (var_1_22 == ((unsigned short int) ((((var_1_13) < ((var_1_69 + var_1_8))) ? (var_1_13) : ((var_1_69 + var_1_8)))))) : (var_1_22 == ((unsigned short int) ((var_1_69 + var_1_8) + (var_1_23 - var_1_13))))) : (var_1_22 == ((unsigned short int) (var_1_24 - var_1_8))))) && (((var_1_19 + 10u) >= var_1_20) ? (var_1_25 == ((float) var_1_26)) : (var_1_25 == ((float) (((((var_1_27 + 255.5f)) > (var_1_26)) ? ((var_1_27 + 255.5f)) : (var_1_26))))))) && ((49.3 >= (var_1_68 * var_1_53)) ? (var_1_28 == ((unsigned long int) (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - ((var_1_58 + var_1_24) + var_1_65)))) : (var_1_28 == ((unsigned long int) (var_1_29 - ((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))))))) && (var_1_9 ? (var_1_30 == ((unsigned char) ((((var_1_13) > (var_1_31)) ? (var_1_13) : (var_1_31))))) : 1)) && ((var_1_10 < (var_1_23 << var_1_13)) ? ((((var_1_23 >> var_1_33) + var_1_30) == ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) ? (var_1_32 == ((unsigned short int) ((((var_1_30) > (var_1_8)) ? (var_1_30) : (var_1_8))))) : 1) : (var_1_9 ? (var_1_32 == ((unsigned short int) (var_1_31 + var_1_23))) : ((var_1_10 > var_1_8) ? (var_1_32 == ((unsigned short int) ((((var_1_12) > ((var_1_24 - var_1_30))) ? (var_1_12) : ((var_1_24 - var_1_30)))))) : (var_1_32 == ((unsigned short int) ((var_1_23 - var_1_8) + (var_1_12 + var_1_30)))))))) && (((((((var_1_22) > (var_1_33)) ? (var_1_22) : (var_1_33))) << var_1_65) > ((((var_1_14) > (var_1_64)) ? (var_1_14) : (var_1_64)))) ? (var_1_34 == ((unsigned long int) ((((var_1_11) < (var_1_29)) ? (var_1_11) : (var_1_29))))) : 1)) && ((! (var_1_34 != (var_1_58 * var_1_23))) ? (var_1_6 ? (var_1_35 == ((float) ((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))) - var_1_38) - (((((8.5f) > (var_1_39)) ? (8.5f) : (var_1_39))) + var_1_40)))) : ((var_1_13 >= var_1_44) ? (var_1_35 == ((float) (((((var_1_40) > (var_1_39)) ? (var_1_40) : (var_1_39))) + var_1_27))) : (var_1_35 == ((float) (var_1_36 - var_1_41))))) : (var_1_35 == ((float) (var_1_40 + var_1_27))))) && ((var_1_28 > var_1_31) ? (var_1_42 == ((float) (var_1_39 + var_1_43))) : 1)) && (var_1_9 ? (((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) + var_1_24) != var_1_7) ? (var_1_44 == ((unsigned long int) ((1491051567u + var_1_45) - var_1_33))) : 1) : 1)) && ((var_1_43 <= ((((var_1_66) < ((- var_1_61))) ? (var_1_66) : ((- var_1_61))))) ? (var_1_1 ? (var_1_46 == ((signed short int) ((var_1_50 + (var_1_47 - var_1_13)) - var_1_33))) : (var_1_46 == ((signed short int) ((((((var_1_33 + var_1_47)) < (var_1_8)) ? ((var_1_33 + var_1_47)) : (var_1_8))) - var_1_13)))) : (var_1_46 == ((signed short int) (var_1_47 + var_1_33))))) && (var_1_48 == ((signed short int) ((var_1_31 + var_1_49) + 8)))) && ((((var_1_28 + var_1_58) >> (var_1_51 - var_1_52)) > var_1_69) ? (var_1_50 == ((unsigned short int) var_1_58)) : 1)) && ((var_1_49 <= last_1_var_1_14) ? (var_1_9 ? (var_1_53 == ((double) (((((var_1_38) > ((var_1_39 + var_1_40))) ? (var_1_38) : ((var_1_39 + var_1_40)))) - ((var_1_54 - var_1_55) + (var_1_56 - var_1_57))))) : (var_1_53 == ((double) ((((var_1_38) < ((var_1_43 + var_1_39))) ? (var_1_38) : ((var_1_43 + var_1_39))))))) : 1)) && (var_1_58 == ((unsigned long int) ((((var_1_29 - ((((var_1_33) < (var_1_59)) ? (var_1_33) : (var_1_59)))) < 0 ) ? -(var_1_29 - ((((var_1_33) < (var_1_59)) ? (var_1_33) : (var_1_59)))) : (var_1_29 - ((((var_1_33) < (var_1_59)) ? (var_1_33) : (var_1_59))))))))) && (var_1_1 ? ((10u >= var_1_31) ? (var_1_60 == ((signed short int) var_1_34)) : 1) : (var_1_60 == ((signed short int) ((4 + var_1_48) - ((((var_1_33) < (var_1_8)) ? (var_1_33) : (var_1_8)))))))) && (((3.2 + (var_1_43 * last_1_var_1_35)) >= last_1_var_1_66) ? ((last_1_var_1_1 || (! 0)) ? (var_1_61 == ((double) var_1_26)) : (var_1_61 == ((double) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) : 1)) && (var_1_62 == ((unsigned short int) 16))) && ((var_1_69 <= var_1_10) ? (var_1_63 == ((signed short int) ((((((var_1_47 - var_1_51) + ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) > ((var_1_31 + (var_1_13 - var_1_33)))) ? (((var_1_47 - var_1_51) + ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) : ((var_1_31 + (var_1_13 - var_1_33))))))) : 1)) && (((3.2 / 50.5) > (var_1_61 / ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (var_1_64 == ((unsigned short int) var_1_47)) : (var_1_64 == ((unsigned short int) var_1_51)))) && (last_1_var_1_1 ? (var_1_65 == ((unsigned long int) last_1_var_1_28)) : 1)) && (var_1_66 == ((float) var_1_57))) && (var_1_9 ? (var_1_67 == ((signed long int) var_1_22)) : (var_1_67 == ((signed long int) var_1_7)))) && (var_1_6 ? (var_1_68 == ((double) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : (var_1_68 == ((double) (((var_1_57 + var_1_55) + var_1_40) - var_1_41))))) && (var_1_69 == ((unsigned long int) last_1_var_1_69))
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
