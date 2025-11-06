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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
signed short int var_1_5 = -32;
signed short int var_1_6 = 256;
signed short int var_1_7 = 8;
signed short int var_1_8 = 10;
signed short int var_1_9 = -4;
signed short int var_1_10 = -16;
signed short int var_1_11 = 4;
unsigned short int var_1_12 = 4;
signed short int var_1_13 = 64;
signed short int var_1_15 = -5;
signed short int var_1_16 = 31520;
signed short int var_1_17 = -1;
signed short int var_1_19 = 128;
signed char var_1_20 = -32;
signed char var_1_22 = 8;
signed char var_1_23 = 16;
unsigned long int var_1_24 = 8;
unsigned long int var_1_25 = 2088673933;
signed short int var_1_26 = -32;
signed long int var_1_27 = 10;
float var_1_28 = 24.1;
unsigned short int var_1_29 = 34496;
float var_1_30 = 100.5;
float var_1_31 = 127.25;
float var_1_32 = 15.25;
float var_1_33 = 5.75;
float var_1_34 = 10.6;
signed short int var_1_35 = 5;
signed long int var_1_36 = 2;
signed long int var_1_37 = -1;
double var_1_38 = 32.7;
double var_1_39 = 127.4;
unsigned short int var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned short int var_1_42 = 64482;
unsigned short int var_1_43 = 30909;
signed long int var_1_44 = -2;
unsigned short int var_1_45 = 8;
unsigned short int var_1_46 = 17896;
unsigned char var_1_47 = 32;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned short int var_1_51 = 0;
unsigned short int var_1_52 = 10000;
unsigned short int var_1_53 = 2;
unsigned short int var_1_54 = 1;
double var_1_55 = 15.5;
double var_1_56 = 0.0;
double var_1_57 = 127.6;
unsigned short int var_1_58 = 128;
unsigned short int var_1_59 = 10;
unsigned short int var_1_60 = 8;
float var_1_61 = 4.25;
float var_1_62 = 0.6;
float var_1_63 = 4.5;
float var_1_64 = 255.6;
unsigned short int var_1_65 = 100;
unsigned long int var_1_66 = 4;
signed short int var_1_67 = 1;
float var_1_68 = 0.5;
signed short int var_1_69 = 16;
unsigned short int var_1_70 = 64;
unsigned char var_1_71 = 50;
double var_1_72 = -0.8;
unsigned long int last_1_var_1_24 = 8;
double last_1_var_1_72 = -0.8;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (var_1_3 || var_1_41) {
   if (((63.4 - var_1_30) * last_1_var_1_72) >= last_1_var_1_72) {
    var_1_40 = (var_1_7 + (var_1_16 - (var_1_22 + var_1_12)));
   } else {
    if ((~ var_1_15) <= last_1_var_1_24) {
     var_1_40 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
    }
   }
  } else {
   var_1_40 = (var_1_42 - ((var_1_43 - var_1_19) - var_1_23));
  }
 } else {
  var_1_40 = (var_1_42 - var_1_22);
 }
 unsigned long int stepLocal_13 = last_1_var_1_24;
 if (stepLocal_13 == (128u / var_1_25)) {
  var_1_48 = (! var_1_49);
 } else {
  var_1_48 = ((var_1_3 && (var_1_2 && var_1_49)) || var_1_50);
 }
 if (var_1_48) {
  var_1_55 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 } else {
  var_1_55 = ((((((var_1_56 - var_1_57) - var_1_30)) > ((((((var_1_33 + var_1_39)) > (var_1_34)) ? ((var_1_33 + var_1_39)) : (var_1_34))))) ? (((var_1_56 - var_1_57) - var_1_30)) : ((((((var_1_33 + var_1_39)) > (var_1_34)) ? ((var_1_33 + var_1_39)) : (var_1_34))))));
 }
 if (var_1_34 > (var_1_55 / ((((var_1_56) < (var_1_68)) ? (var_1_56) : (var_1_68))))) {
  var_1_67 = var_1_53;
 } else {
  var_1_67 = var_1_5;
 }
 if ((- 5.1) < (var_1_55 * (- var_1_55))) {
  var_1_26 = -128;
 } else {
  var_1_26 = (var_1_13 + (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) - (2 + var_1_22)));
 }
 if (var_1_48) {
  var_1_27 = ((((var_1_16) > (((var_1_7 - 100) + var_1_10))) ? (var_1_16) : (((var_1_7 - 100) + var_1_10))));
 }
 if ((var_1_29 - 200) < var_1_12) {
  var_1_28 = (((((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - 0.5f)) < (var_1_32)) ? ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - 0.5f)) : (var_1_32)));
 } else {
  var_1_28 = (var_1_33 + var_1_34);
 }
 var_1_47 = ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) > ((var_1_22 + var_1_23))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : ((var_1_22 + var_1_23))));
 unsigned char stepLocal_14 = var_1_48;
 if (var_1_49 && stepLocal_14) {
  var_1_51 = (((var_1_52 - var_1_22) + (var_1_53 + 16)) + var_1_16);
 } else {
  var_1_51 = (var_1_42 - (var_1_16 - var_1_13));
 }
 if (var_1_29 != var_1_7) {
  var_1_54 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
 } else {
  var_1_54 = (((((var_1_52) < ((var_1_23 + var_1_53))) ? (var_1_52) : ((var_1_23 + var_1_53)))) + var_1_13);
 }
 if (var_1_33 <= 16.6f) {
  var_1_61 = ((((((var_1_57 + var_1_62) - var_1_30)) < ((var_1_34 + (var_1_63 + var_1_64)))) ? (((var_1_57 + var_1_62) - var_1_30)) : ((var_1_34 + (var_1_63 + var_1_64)))));
 }
 if (! ((var_1_27 >> var_1_66) <= var_1_23)) {
  if (var_1_32 < var_1_64) {
   var_1_65 = ((((var_1_52) > (var_1_46)) ? (var_1_52) : (var_1_46)));
  }
 }
 var_1_69 = var_1_7;
 if (var_1_50) {
  var_1_70 = var_1_46;
 } else {
  var_1_70 = var_1_60;
 }
 var_1_71 = ((var_1_12 + var_1_66) + var_1_22);
 unsigned char stepLocal_9 = var_1_48;
 signed short int stepLocal_8 = var_1_67;
 signed long int stepLocal_7 = (((var_1_13) > (var_1_10)) ? (var_1_13) : (var_1_10));
 signed short int stepLocal_6 = var_1_6;
 if (var_1_40 > stepLocal_7) {
  if (var_1_12 >= stepLocal_8) {
   if (stepLocal_6 <= (var_1_22 * var_1_40)) {
    if (var_1_48) {
     var_1_24 = (2999457086u - var_1_7);
    }
   } else {
    var_1_24 = ((((var_1_23) > (var_1_7)) ? (var_1_23) : (var_1_7)));
   }
  } else {
   if (stepLocal_9 || (var_1_16 <= var_1_19)) {
    var_1_24 = ((((((var_1_25 - var_1_12)) > (var_1_16)) ? ((var_1_25 - var_1_12)) : (var_1_16))) + var_1_23);
   }
  }
 } else {
  var_1_24 = var_1_7;
 }
 signed long int stepLocal_15 = 256 * var_1_6;
 if ((var_1_40 | ((((var_1_69) > (var_1_37)) ? (var_1_69) : (var_1_37)))) < stepLocal_15) {
  if (! (! var_1_48)) {
   var_1_72 = var_1_57;
  }
 } else {
  var_1_72 = var_1_30;
 }
 if (var_1_2 && var_1_3) {
  if (var_1_72 != 16.5) {
   var_1_1 = ((((-256) > (var_1_5)) ? (-256) : (var_1_5)));
  } else {
   var_1_1 = (var_1_6 - var_1_7);
  }
 } else {
  var_1_1 = (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) + var_1_10);
 }
 signed long int stepLocal_2 = (var_1_5 + var_1_9) << ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 signed long int stepLocal_1 = (var_1_10 * var_1_7) & ((((-50) > (var_1_13)) ? (-50) : (var_1_13)));
 signed short int stepLocal_0 = var_1_8;
 if (stepLocal_2 <= (var_1_8 * var_1_7)) {
  var_1_11 = ((var_1_12 + var_1_13) - var_1_7);
 } else {
  if ((~ (var_1_8 ^ var_1_9)) <= stepLocal_1) {
   if (var_1_48) {
    if ((var_1_70 | (var_1_6 % var_1_15)) >= stepLocal_0) {
     var_1_11 = (var_1_12 - (var_1_16 - var_1_13));
    }
   } else {
    var_1_11 = (var_1_9 + var_1_10);
   }
  } else {
   if (var_1_48) {
    var_1_11 = var_1_7;
   } else {
    var_1_11 = var_1_10;
   }
  }
 }
 signed long int stepLocal_3 = (((var_1_13 + var_1_8) < 0 ) ? -(var_1_13 + var_1_8) : (var_1_13 + var_1_8));
 if ((var_1_5 + var_1_65) == stepLocal_3) {
  var_1_17 = (var_1_10 + (var_1_13 - (var_1_12 + var_1_19)));
 }
 if (var_1_48) {
  var_1_36 = ((((var_1_29) < (var_1_37)) ? (var_1_29) : (var_1_37)));
 } else {
  var_1_36 = ((((var_1_12 + var_1_65) < 0 ) ? -(var_1_12 + var_1_65) : (var_1_12 + var_1_65)));
 }
 unsigned short int stepLocal_11 = var_1_70;
 if (stepLocal_11 == var_1_12) {
  var_1_38 = ((((var_1_34) < ((var_1_33 + var_1_39))) ? (var_1_34) : ((var_1_33 + var_1_39))));
 }
 unsigned short int stepLocal_12 = var_1_54;
 if (var_1_5 >= stepLocal_12) {
  if ((5.6f - var_1_31) != var_1_55) {
   var_1_44 = (((((var_1_13) > (((((var_1_43) > (1)) ? (var_1_43) : (1))))) ? (var_1_13) : (((((var_1_43) > (1)) ? (var_1_43) : (1)))))) - var_1_42);
  }
 }
 if ((((((var_1_38) < (var_1_32)) ? (var_1_38) : (var_1_32))) <= var_1_31) && var_1_48) {
  var_1_45 = (var_1_42 - var_1_22);
 } else {
  var_1_45 = (((((var_1_42 - (var_1_46 - var_1_19))) < (var_1_16)) ? ((var_1_42 - (var_1_46 - var_1_19))) : (var_1_16)));
 }
 signed short int stepLocal_5 = var_1_13;
 signed short int stepLocal_4 = var_1_1;
 if ((var_1_19 ^ (~ var_1_16)) > stepLocal_5) {
  if (var_1_36 >= stepLocal_4) {
   var_1_20 = (((((var_1_12 - var_1_22) < 0 ) ? -(var_1_12 - var_1_22) : (var_1_12 - var_1_22))) - var_1_23);
  }
 } else {
  var_1_20 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 }
 unsigned char stepLocal_10 = var_1_48;
 if ((var_1_72 <= var_1_38) && stepLocal_10) {
  var_1_35 = (256 - var_1_22);
 }
 if (((((var_1_24 + var_1_29) < 0 ) ? -(var_1_24 + var_1_29) : (var_1_24 + var_1_29))) == var_1_43) {
  var_1_58 = ((((var_1_35 + var_1_59) < 0 ) ? -(var_1_35 + var_1_59) : (var_1_35 + var_1_59)));
 } else {
  var_1_58 = var_1_60;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 14);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32768);
 assume_abort_if_not(var_1_15 <= 32767);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 8191);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65535);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483647);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 32767);
 assume_abort_if_not(var_1_42 <= 65534);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 24575);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 16383);
 assume_abort_if_not(var_1_46 <= 32767);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 8192);
 assume_abort_if_not(var_1_52 <= 16384);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 8192);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 4611686.018427383000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 32767);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 65534);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= -230584.3009213691400e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691400e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= -230584.3009213691400e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 30);
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
 assume_abort_if_not(var_1_68 != 0.0F);
}
void updateLastVariables(void) {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_72 = var_1_72;
}
int property(void) {
 return (((((((((((((((((((((((((((var_1_2 && var_1_3) ? ((var_1_72 != 16.5) ? (var_1_1 == ((signed short int) ((((-256) > (var_1_5)) ? (-256) : (var_1_5))))) : (var_1_1 == ((signed short int) (var_1_6 - var_1_7)))) : (var_1_1 == ((signed short int) (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) + var_1_10)))) && ((((var_1_5 + var_1_9) << ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) <= (var_1_8 * var_1_7)) ? (var_1_11 == ((signed short int) ((var_1_12 + var_1_13) - var_1_7))) : (((~ (var_1_8 ^ var_1_9)) <= ((var_1_10 * var_1_7) & ((((-50) > (var_1_13)) ? (-50) : (var_1_13))))) ? (var_1_48 ? (((var_1_70 | (var_1_6 % var_1_15)) >= var_1_8) ? (var_1_11 == ((signed short int) (var_1_12 - (var_1_16 - var_1_13)))) : 1) : (var_1_11 == ((signed short int) (var_1_9 + var_1_10)))) : (var_1_48 ? (var_1_11 == ((signed short int) var_1_7)) : (var_1_11 == ((signed short int) var_1_10)))))) && (((var_1_5 + var_1_65) == ((((var_1_13 + var_1_8) < 0 ) ? -(var_1_13 + var_1_8) : (var_1_13 + var_1_8)))) ? (var_1_17 == ((signed short int) (var_1_10 + (var_1_13 - (var_1_12 + var_1_19))))) : 1)) && (((var_1_19 ^ (~ var_1_16)) > var_1_13) ? ((var_1_36 >= var_1_1) ? (var_1_20 == ((signed char) (((((var_1_12 - var_1_22) < 0 ) ? -(var_1_12 - var_1_22) : (var_1_12 - var_1_22))) - var_1_23))) : 1) : (var_1_20 == ((signed char) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) && ((var_1_40 > ((((var_1_13) > (var_1_10)) ? (var_1_13) : (var_1_10)))) ? ((var_1_12 >= var_1_67) ? ((var_1_6 <= (var_1_22 * var_1_40)) ? (var_1_48 ? (var_1_24 == ((unsigned long int) (2999457086u - var_1_7))) : 1) : (var_1_24 == ((unsigned long int) ((((var_1_23) > (var_1_7)) ? (var_1_23) : (var_1_7)))))) : ((var_1_48 || (var_1_16 <= var_1_19)) ? (var_1_24 == ((unsigned long int) ((((((var_1_25 - var_1_12)) > (var_1_16)) ? ((var_1_25 - var_1_12)) : (var_1_16))) + var_1_23))) : 1)) : (var_1_24 == ((unsigned long int) var_1_7)))) && (((- 5.1) < (var_1_55 * (- var_1_55))) ? (var_1_26 == ((signed short int) -128)) : (var_1_26 == ((signed short int) (var_1_13 + (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) - (2 + var_1_22))))))) && (var_1_48 ? (var_1_27 == ((signed long int) ((((var_1_16) > (((var_1_7 - 100) + var_1_10))) ? (var_1_16) : (((var_1_7 - 100) + var_1_10)))))) : 1)) && (((var_1_29 - 200) < var_1_12) ? (var_1_28 == ((float) (((((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - 0.5f)) < (var_1_32)) ? ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - 0.5f)) : (var_1_32))))) : (var_1_28 == ((float) (var_1_33 + var_1_34))))) && (((var_1_72 <= var_1_38) && var_1_48) ? (var_1_35 == ((signed short int) (256 - var_1_22))) : 1)) && (var_1_48 ? (var_1_36 == ((signed long int) ((((var_1_29) < (var_1_37)) ? (var_1_29) : (var_1_37))))) : (var_1_36 == ((signed long int) ((((var_1_12 + var_1_65) < 0 ) ? -(var_1_12 + var_1_65) : (var_1_12 + var_1_65))))))) && ((var_1_70 == var_1_12) ? (var_1_38 == ((double) ((((var_1_34) < ((var_1_33 + var_1_39))) ? (var_1_34) : ((var_1_33 + var_1_39)))))) : 1)) && (var_1_2 ? ((var_1_3 || var_1_41) ? ((((63.4 - var_1_30) * last_1_var_1_72) >= last_1_var_1_72) ? (var_1_40 == ((unsigned short int) (var_1_7 + (var_1_16 - (var_1_22 + var_1_12))))) : (((~ var_1_15) <= last_1_var_1_24) ? (var_1_40 == ((unsigned short int) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : 1)) : (var_1_40 == ((unsigned short int) (var_1_42 - ((var_1_43 - var_1_19) - var_1_23))))) : (var_1_40 == ((unsigned short int) (var_1_42 - var_1_22))))) && ((var_1_5 >= var_1_54) ? (((5.6f - var_1_31) != var_1_55) ? (var_1_44 == ((signed long int) (((((var_1_13) > (((((var_1_43) > (1)) ? (var_1_43) : (1))))) ? (var_1_13) : (((((var_1_43) > (1)) ? (var_1_43) : (1)))))) - var_1_42))) : 1) : 1)) && (((((((var_1_38) < (var_1_32)) ? (var_1_38) : (var_1_32))) <= var_1_31) && var_1_48) ? (var_1_45 == ((unsigned short int) (var_1_42 - var_1_22))) : (var_1_45 == ((unsigned short int) (((((var_1_42 - (var_1_46 - var_1_19))) < (var_1_16)) ? ((var_1_42 - (var_1_46 - var_1_19))) : (var_1_16))))))) && (var_1_47 == ((unsigned char) ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) > ((var_1_22 + var_1_23))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : ((var_1_22 + var_1_23))))))) && ((last_1_var_1_24 == (128u / var_1_25)) ? (var_1_48 == ((unsigned char) (! var_1_49))) : (var_1_48 == ((unsigned char) ((var_1_3 && (var_1_2 && var_1_49)) || var_1_50))))) && ((var_1_49 && var_1_48) ? (var_1_51 == ((unsigned short int) (((var_1_52 - var_1_22) + (var_1_53 + 16)) + var_1_16))) : (var_1_51 == ((unsigned short int) (var_1_42 - (var_1_16 - var_1_13)))))) && ((var_1_29 != var_1_7) ? (var_1_54 == ((unsigned short int) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) : (var_1_54 == ((unsigned short int) (((((var_1_52) < ((var_1_23 + var_1_53))) ? (var_1_52) : ((var_1_23 + var_1_53)))) + var_1_13))))) && (var_1_48 ? (var_1_55 == ((double) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (var_1_55 == ((double) ((((((var_1_56 - var_1_57) - var_1_30)) > ((((((var_1_33 + var_1_39)) > (var_1_34)) ? ((var_1_33 + var_1_39)) : (var_1_34))))) ? (((var_1_56 - var_1_57) - var_1_30)) : ((((((var_1_33 + var_1_39)) > (var_1_34)) ? ((var_1_33 + var_1_39)) : (var_1_34)))))))))) && ((((((var_1_24 + var_1_29) < 0 ) ? -(var_1_24 + var_1_29) : (var_1_24 + var_1_29))) == var_1_43) ? (var_1_58 == ((unsigned short int) ((((var_1_35 + var_1_59) < 0 ) ? -(var_1_35 + var_1_59) : (var_1_35 + var_1_59))))) : (var_1_58 == ((unsigned short int) var_1_60)))) && ((var_1_33 <= 16.6f) ? (var_1_61 == ((float) ((((((var_1_57 + var_1_62) - var_1_30)) < ((var_1_34 + (var_1_63 + var_1_64)))) ? (((var_1_57 + var_1_62) - var_1_30)) : ((var_1_34 + (var_1_63 + var_1_64))))))) : 1)) && ((! ((var_1_27 >> var_1_66) <= var_1_23)) ? ((var_1_32 < var_1_64) ? (var_1_65 == ((unsigned short int) ((((var_1_52) > (var_1_46)) ? (var_1_52) : (var_1_46))))) : 1) : 1)) && ((var_1_34 > (var_1_55 / ((((var_1_56) < (var_1_68)) ? (var_1_56) : (var_1_68))))) ? (var_1_67 == ((signed short int) var_1_53)) : (var_1_67 == ((signed short int) var_1_5)))) && (var_1_69 == ((signed short int) var_1_7))) && (var_1_50 ? (var_1_70 == ((unsigned short int) var_1_46)) : (var_1_70 == ((unsigned short int) var_1_60)))) && (var_1_71 == ((unsigned char) ((var_1_12 + var_1_66) + var_1_22)))) && (((var_1_40 | ((((var_1_69) > (var_1_37)) ? (var_1_69) : (var_1_37)))) < (256 * var_1_6)) ? ((! (! var_1_48)) ? (var_1_72 == ((double) var_1_57)) : 1) : (var_1_72 == ((double) var_1_30)))
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
