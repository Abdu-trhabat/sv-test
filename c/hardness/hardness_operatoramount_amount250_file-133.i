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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 64.5;
unsigned char var_1_3 = 0;
double var_1_6 = 15.375;
float var_1_7 = 127.5;
float var_1_8 = 10000000000.6;
float var_1_9 = 0.0;
float var_1_10 = 50.7;
float var_1_11 = 63.75;
unsigned char var_1_12 = 1;
float var_1_13 = 0.0;
float var_1_14 = 24.8;
unsigned short int var_1_15 = 4;
unsigned short int var_1_16 = 100;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 128;
unsigned short int var_1_20 = 2;
unsigned short int var_1_21 = 58621;
unsigned short int var_1_22 = 1;
unsigned short int var_1_23 = 128;
unsigned short int var_1_24 = 2;
unsigned short int var_1_25 = 4;
signed short int var_1_26 = -64;
signed short int var_1_27 = 25;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 32;
unsigned char var_1_30 = 1;
signed long int var_1_31 = 32;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned short int var_1_36 = 50;
signed long int var_1_37 = -10;
signed long int var_1_38 = 5;
signed short int var_1_39 = -8;
unsigned long int var_1_40 = 64;
unsigned long int var_1_41 = 2217990920;
unsigned long int var_1_42 = 100;
unsigned long int var_1_43 = 10;
signed short int var_1_44 = 5;
signed short int var_1_45 = 32;
float var_1_46 = 1.75;
float var_1_47 = 0.0;
double var_1_48 = 128.2;
unsigned char var_1_49 = 8;
unsigned short int var_1_50 = 10;
double var_1_52 = 15.375;
unsigned short int var_1_53 = 256;
double var_1_55 = 9999999.4;
double var_1_57 = -0.8;
unsigned char var_1_58 = 2;
signed long int var_1_59 = 1138343207;
unsigned short int var_1_60 = 10;
unsigned short int var_1_61 = 22077;
unsigned char last_1_var_1_34 = 0;
unsigned long int last_1_var_1_42 = 100;
unsigned short int last_1_var_1_50 = 10;
unsigned short int last_1_var_1_60 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_9 = last_1_var_1_50;
 unsigned short int stepLocal_8 = var_1_16;
 if (stepLocal_8 <= var_1_17) {
  if ((var_1_16 << last_1_var_1_42) > stepLocal_9) {
   var_1_40 = (var_1_41 - var_1_29);
  }
 }
 signed long int stepLocal_6 = (var_1_29 * var_1_21) / var_1_31;
 if (stepLocal_6 < var_1_24) {
  if (! last_1_var_1_34) {
   var_1_30 = (last_1_var_1_34 && (last_1_var_1_34 && (! var_1_32)));
  }
 } else {
  if (! last_1_var_1_34) {
   var_1_30 = ((! var_1_33) && var_1_32);
  }
 }
 if (! var_1_30) {
  var_1_34 = (! (var_1_32 && var_1_35));
 } else {
  var_1_34 = var_1_35;
 }
 if (var_1_12 || var_1_3) {
  var_1_11 = var_1_8;
 } else {
  if (var_1_10 >= (var_1_8 - (var_1_13 - var_1_9))) {
   if (var_1_8 < -0.875f) {
    var_1_11 = ((((var_1_14) < (var_1_10)) ? (var_1_14) : (var_1_10)));
   } else {
    var_1_11 = (((((var_1_10 - var_1_8)) < ((var_1_9 + var_1_7))) ? ((var_1_10 - var_1_8)) : ((var_1_9 + var_1_7))));
   }
  }
 }
 var_1_15 = (var_1_16 + var_1_17);
 var_1_28 = var_1_29;
 unsigned long int stepLocal_7 = var_1_40 - 1;
 if (stepLocal_7 < var_1_22) {
  var_1_39 = 256;
 }
 if (var_1_30) {
  var_1_42 = (var_1_43 + var_1_17);
 }
 if (((-50 <= var_1_16) || var_1_35) && var_1_30) {
  if (! (var_1_43 != var_1_40)) {
   var_1_48 = ((((var_1_9) < (var_1_14)) ? (var_1_9) : (var_1_14)));
  } else {
   var_1_48 = (var_1_8 - var_1_9);
  }
 }
 signed long int stepLocal_15 = var_1_17 / ((((var_1_21) < (var_1_59)) ? (var_1_21) : (var_1_59)));
 if (((((-50) < (-32)) ? (-50) : (-32))) < stepLocal_15) {
  var_1_58 = var_1_29;
 } else {
  var_1_58 = 10;
 }
 if ((var_1_40 <= var_1_42) && var_1_34) {
  var_1_52 = (var_1_47 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))));
 } else {
  if (((((var_1_6) < (10.2f)) ? (var_1_6) : (10.2f))) > (var_1_47 - var_1_10)) {
   var_1_52 = (((((var_1_10 - ((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) < ((var_1_7 + var_1_9))) ? ((var_1_10 - ((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) : ((var_1_7 + var_1_9))));
  } else {
   var_1_52 = var_1_7;
  }
 }
 unsigned char stepLocal_2 = var_1_30;
 unsigned char stepLocal_1 = var_1_21 > 4;
 if (var_1_34 || stepLocal_1) {
  if ((var_1_48 < -0.5) && stepLocal_2) {
   var_1_25 = var_1_21;
  }
 } else {
  var_1_25 = (var_1_21 - ((((5) < (256)) ? (5) : (256))));
 }
 if (var_1_52 <= ((var_1_13 - var_1_10) - var_1_9)) {
  var_1_36 = (var_1_21 - (var_1_24 + var_1_22));
 }
 if (((((var_1_6) > ((- var_1_8))) ? (var_1_6) : ((- var_1_8)))) > var_1_52) {
  var_1_50 = (var_1_21 - var_1_29);
 } else {
  var_1_50 = ((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27)));
 }
 signed long int stepLocal_0 = (var_1_16 & var_1_25) + ((((1) < 0 ) ? -(1) : (1)));
 if (stepLocal_0 >= ((((var_1_17) < (var_1_42)) ? (var_1_17) : (var_1_42)))) {
  if (var_1_8 < (var_1_13 - var_1_10)) {
   var_1_18 = ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) < ((var_1_17 + var_1_20))) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : ((var_1_17 + var_1_20))));
  }
 } else {
  if ((var_1_9 * var_1_7) != var_1_14) {
   var_1_18 = (((var_1_21 - var_1_22) - ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) - var_1_16);
  }
 }
 var_1_37 = ((((((((var_1_18) > (var_1_27)) ? (var_1_18) : (var_1_27)))) > (var_1_38)) ? (((((var_1_18) > (var_1_27)) ? (var_1_18) : (var_1_27)))) : (var_1_38)));
 if (((- var_1_40) + var_1_36) > ((((var_1_23) < (var_1_37)) ? (var_1_23) : (var_1_37)))) {
  var_1_53 = var_1_29;
 } else {
  var_1_53 = (var_1_17 + var_1_29);
 }
 unsigned short int stepLocal_14 = var_1_36;
 signed short int stepLocal_13 = var_1_45;
 signed long int stepLocal_12 = var_1_24 + var_1_53;
 if (stepLocal_14 <= (((((~ var_1_40)) > (var_1_15)) ? ((~ var_1_40)) : (var_1_15)))) {
  if (var_1_14 != var_1_48) {
   if (stepLocal_13 == ((((var_1_31) > (var_1_16)) ? (var_1_31) : (var_1_16)))) {
    var_1_55 = (var_1_9 + ((((1.0000000003E9) < (var_1_8)) ? (1.0000000003E9) : (var_1_8))));
   } else {
    if (var_1_52 > (var_1_10 / var_1_47)) {
     if (var_1_45 <= stepLocal_12) {
      var_1_55 = var_1_8;
     } else {
      var_1_55 = ((((var_1_9) < (((var_1_10 + var_1_57) + var_1_8))) ? (var_1_9) : (((var_1_10 + var_1_57) + var_1_8))));
     }
    }
   }
  } else {
   var_1_55 = (var_1_10 + var_1_8);
  }
 }
 if (var_1_34 && var_1_30) {
  if (var_1_55 <= ((10.5 + var_1_55) / var_1_6)) {
   var_1_1 = (var_1_7 + 255.2f);
  }
 } else {
  var_1_1 = ((var_1_8 - (var_1_9 - var_1_10)) + ((((256.4f) > (64.6f)) ? (256.4f) : (64.6f))));
 }
 unsigned char stepLocal_5 = var_1_53 > var_1_20;
 signed long int stepLocal_4 = (((var_1_16) < (var_1_23)) ? (var_1_16) : (var_1_23));
 unsigned short int stepLocal_3 = var_1_53;
 if (stepLocal_5 && var_1_34) {
  if (var_1_17 <= stepLocal_4) {
   if (var_1_42 >= stepLocal_3) {
    var_1_26 = (var_1_21 + ((var_1_22 + var_1_27) - var_1_23));
   } else {
    var_1_26 = (var_1_23 - var_1_24);
   }
  }
 } else {
  var_1_26 = (((((var_1_27) > (var_1_23)) ? (var_1_27) : (var_1_23))) - var_1_24);
 }
 unsigned short int stepLocal_11 = var_1_24;
 signed long int stepLocal_10 = var_1_53 / -4;
 if ((var_1_40 / ((((var_1_21) < (var_1_31)) ? (var_1_21) : (var_1_31)))) > stepLocal_10) {
  if (stepLocal_11 > (var_1_25 / var_1_21)) {
   var_1_46 = var_1_7;
  } else {
   var_1_46 = (((((var_1_10) < ((var_1_47 - var_1_8))) ? (var_1_10) : ((var_1_47 - var_1_8)))) - var_1_9);
  }
 } else {
  var_1_46 = (var_1_47 - ((((var_1_9 + var_1_7) < 0 ) ? -(var_1_9 + var_1_7) : (var_1_9 + var_1_7))));
 }
 if ((var_1_21 / var_1_41) <= var_1_23) {
  if (var_1_13 != (- var_1_55)) {
   var_1_49 = var_1_29;
  }
 } else {
  var_1_49 = var_1_29;
 }
 if (last_1_var_1_60 > var_1_25) {
  if (var_1_10 < var_1_13) {
   if (var_1_33) {
    var_1_60 = (var_1_27 + (var_1_61 - var_1_49));
   } else {
    if (var_1_34) {
     var_1_60 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
    }
   }
  } else {
   var_1_60 = var_1_24;
  }
 } else {
  var_1_60 = var_1_24;
 }
 if ((var_1_16 * var_1_60) != var_1_23) {
  if (var_1_18 >= var_1_24) {
   var_1_44 = (((var_1_29 + var_1_49) + var_1_27) + (var_1_22 + var_1_45));
  }
 } else {
  var_1_44 = (var_1_22 - ((var_1_29 + 10) + var_1_27));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 2305843.009213691400e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 4611686.018427388000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 57342);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 8192);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 16383);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 8191);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 assume_abort_if_not(var_1_31 != 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -2147483647);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= -8191);
 assume_abort_if_not(var_1_45 <= 8191);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 4611686.018427383000e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_59 >= 1073741823);
 assume_abort_if_not(var_1_59 <= 2147483647);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 16383);
 assume_abort_if_not(var_1_61 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_34 = var_1_34;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_60 = var_1_60;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_34 && var_1_30) ? ((var_1_55 <= ((10.5 + var_1_55) / var_1_6)) ? (var_1_1 == ((float) (var_1_7 + 255.2f))) : 1) : (var_1_1 == ((float) ((var_1_8 - (var_1_9 - var_1_10)) + ((((256.4f) > (64.6f)) ? (256.4f) : (64.6f))))))) && ((var_1_12 || var_1_3) ? (var_1_11 == ((float) var_1_8)) : ((var_1_10 >= (var_1_8 - (var_1_13 - var_1_9))) ? ((var_1_8 < -0.875f) ? (var_1_11 == ((float) ((((var_1_14) < (var_1_10)) ? (var_1_14) : (var_1_10))))) : (var_1_11 == ((float) (((((var_1_10 - var_1_8)) < ((var_1_9 + var_1_7))) ? ((var_1_10 - var_1_8)) : ((var_1_9 + var_1_7))))))) : 1))) && (var_1_15 == ((unsigned short int) (var_1_16 + var_1_17)))) && ((((var_1_16 & var_1_25) + ((((1) < 0 ) ? -(1) : (1)))) >= ((((var_1_17) < (var_1_42)) ? (var_1_17) : (var_1_42)))) ? ((var_1_8 < (var_1_13 - var_1_10)) ? (var_1_18 == ((unsigned short int) ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) < ((var_1_17 + var_1_20))) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : ((var_1_17 + var_1_20)))))) : 1) : (((var_1_9 * var_1_7) != var_1_14) ? (var_1_18 == ((unsigned short int) (((var_1_21 - var_1_22) - ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) - var_1_16))) : 1))) && ((var_1_34 || (var_1_21 > 4)) ? (((var_1_48 < -0.5) && var_1_30) ? (var_1_25 == ((unsigned short int) var_1_21)) : 1) : (var_1_25 == ((unsigned short int) (var_1_21 - ((((5) < (256)) ? (5) : (256)))))))) && (((var_1_53 > var_1_20) && var_1_34) ? ((var_1_17 <= ((((var_1_16) < (var_1_23)) ? (var_1_16) : (var_1_23)))) ? ((var_1_42 >= var_1_53) ? (var_1_26 == ((signed short int) (var_1_21 + ((var_1_22 + var_1_27) - var_1_23)))) : (var_1_26 == ((signed short int) (var_1_23 - var_1_24)))) : 1) : (var_1_26 == ((signed short int) (((((var_1_27) > (var_1_23)) ? (var_1_27) : (var_1_23))) - var_1_24))))) && (var_1_28 == ((unsigned char) var_1_29))) && ((((var_1_29 * var_1_21) / var_1_31) < var_1_24) ? ((! last_1_var_1_34) ? (var_1_30 == ((unsigned char) (last_1_var_1_34 && (last_1_var_1_34 && (! var_1_32))))) : 1) : ((! last_1_var_1_34) ? (var_1_30 == ((unsigned char) ((! var_1_33) && var_1_32))) : 1))) && ((! var_1_30) ? (var_1_34 == ((unsigned char) (! (var_1_32 && var_1_35)))) : (var_1_34 == ((unsigned char) var_1_35)))) && ((var_1_52 <= ((var_1_13 - var_1_10) - var_1_9)) ? (var_1_36 == ((unsigned short int) (var_1_21 - (var_1_24 + var_1_22)))) : 1)) && (var_1_37 == ((signed long int) ((((((((var_1_18) > (var_1_27)) ? (var_1_18) : (var_1_27)))) > (var_1_38)) ? (((((var_1_18) > (var_1_27)) ? (var_1_18) : (var_1_27)))) : (var_1_38)))))) && (((var_1_40 - 1) < var_1_22) ? (var_1_39 == ((signed short int) 256)) : 1)) && ((var_1_16 <= var_1_17) ? (((var_1_16 << last_1_var_1_42) > last_1_var_1_50) ? (var_1_40 == ((unsigned long int) (var_1_41 - var_1_29))) : 1) : 1)) && (var_1_30 ? (var_1_42 == ((unsigned long int) (var_1_43 + var_1_17))) : 1)) && (((var_1_16 * var_1_60) != var_1_23) ? ((var_1_18 >= var_1_24) ? (var_1_44 == ((signed short int) (((var_1_29 + var_1_49) + var_1_27) + (var_1_22 + var_1_45)))) : 1) : (var_1_44 == ((signed short int) (var_1_22 - ((var_1_29 + 10) + var_1_27)))))) && (((var_1_40 / ((((var_1_21) < (var_1_31)) ? (var_1_21) : (var_1_31)))) > (var_1_53 / -4)) ? ((var_1_24 > (var_1_25 / var_1_21)) ? (var_1_46 == ((float) var_1_7)) : (var_1_46 == ((float) (((((var_1_10) < ((var_1_47 - var_1_8))) ? (var_1_10) : ((var_1_47 - var_1_8)))) - var_1_9)))) : (var_1_46 == ((float) (var_1_47 - ((((var_1_9 + var_1_7) < 0 ) ? -(var_1_9 + var_1_7) : (var_1_9 + var_1_7)))))))) && ((((-50 <= var_1_16) || var_1_35) && var_1_30) ? ((! (var_1_43 != var_1_40)) ? (var_1_48 == ((double) ((((var_1_9) < (var_1_14)) ? (var_1_9) : (var_1_14))))) : (var_1_48 == ((double) (var_1_8 - var_1_9)))) : 1)) && (((var_1_21 / var_1_41) <= var_1_23) ? ((var_1_13 != (- var_1_55)) ? (var_1_49 == ((unsigned char) var_1_29)) : 1) : (var_1_49 == ((unsigned char) var_1_29)))) && ((((((var_1_6) > ((- var_1_8))) ? (var_1_6) : ((- var_1_8)))) > var_1_52) ? (var_1_50 == ((unsigned short int) (var_1_21 - var_1_29))) : (var_1_50 == ((unsigned short int) ((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))))))) && (((var_1_40 <= var_1_42) && var_1_34) ? (var_1_52 == ((double) (var_1_47 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))) : ((((((var_1_6) < (10.2f)) ? (var_1_6) : (10.2f))) > (var_1_47 - var_1_10)) ? (var_1_52 == ((double) (((((var_1_10 - ((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) < ((var_1_7 + var_1_9))) ? ((var_1_10 - ((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) : ((var_1_7 + var_1_9)))))) : (var_1_52 == ((double) var_1_7))))) && ((((- var_1_40) + var_1_36) > ((((var_1_23) < (var_1_37)) ? (var_1_23) : (var_1_37)))) ? (var_1_53 == ((unsigned short int) var_1_29)) : (var_1_53 == ((unsigned short int) (var_1_17 + var_1_29))))) && ((var_1_36 <= (((((~ var_1_40)) > (var_1_15)) ? ((~ var_1_40)) : (var_1_15)))) ? ((var_1_14 != var_1_48) ? ((var_1_45 == ((((var_1_31) > (var_1_16)) ? (var_1_31) : (var_1_16)))) ? (var_1_55 == ((double) (var_1_9 + ((((1.0000000003E9) < (var_1_8)) ? (1.0000000003E9) : (var_1_8)))))) : ((var_1_52 > (var_1_10 / var_1_47)) ? ((var_1_45 <= (var_1_24 + var_1_53)) ? (var_1_55 == ((double) var_1_8)) : (var_1_55 == ((double) ((((var_1_9) < (((var_1_10 + var_1_57) + var_1_8))) ? (var_1_9) : (((var_1_10 + var_1_57) + var_1_8))))))) : 1)) : (var_1_55 == ((double) (var_1_10 + var_1_8)))) : 1)) && ((((((-50) < (-32)) ? (-50) : (-32))) < (var_1_17 / ((((var_1_21) < (var_1_59)) ? (var_1_21) : (var_1_59))))) ? (var_1_58 == ((unsigned char) var_1_29)) : (var_1_58 == ((unsigned char) 10)))) && ((last_1_var_1_60 > var_1_25) ? ((var_1_10 < var_1_13) ? (var_1_33 ? (var_1_60 == ((unsigned short int) (var_1_27 + (var_1_61 - var_1_49)))) : (var_1_34 ? (var_1_60 == ((unsigned short int) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : 1)) : (var_1_60 == ((unsigned short int) var_1_24))) : (var_1_60 == ((unsigned short int) var_1_24)))
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
