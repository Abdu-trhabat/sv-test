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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = -0.5;
float var_1_4 = 32.5;
float var_1_5 = 10.25;
float var_1_6 = 15.2;
unsigned long int var_1_8 = 2;
unsigned long int var_1_9 = 25;
unsigned long int var_1_10 = 0;
unsigned long int var_1_11 = 2;
unsigned long int var_1_12 = 200;
signed char var_1_13 = 0;
signed char var_1_15 = 16;
signed char var_1_16 = -5;
signed char var_1_17 = -1;
signed short int var_1_18 = 128;
signed char var_1_19 = 32;
signed char var_1_20 = 0;
signed char var_1_21 = 8;
float var_1_22 = 15.9;
unsigned long int var_1_24 = 5;
double var_1_25 = 1.15;
double var_1_26 = 499.2;
unsigned long int var_1_27 = 1530103944;
unsigned long int var_1_28 = 1784541223;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned short int var_1_32 = 256;
unsigned short int var_1_33 = 16;
signed long int var_1_34 = 4;
signed long int var_1_35 = 1934909157;
signed short int var_1_36 = 100;
signed char var_1_38 = 2;
unsigned long int var_1_39 = 3439005890;
signed short int var_1_40 = 25;
signed short int var_1_41 = 27350;
double var_1_42 = 49.2;
double var_1_43 = 99999999.6;
double var_1_44 = 0.8;
double var_1_45 = 1000000.75;
double var_1_46 = 100.1;
unsigned short int var_1_47 = 58733;
unsigned char var_1_48 = 128;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 5;
unsigned char var_1_51 = 5;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
signed long int var_1_54 = -128;
signed long int var_1_55 = -500;
unsigned char var_1_56 = 2;
unsigned char var_1_57 = 100;
unsigned char var_1_58 = 64;
double var_1_59 = -0.7;
float var_1_60 = 128.4;
float var_1_61 = 2.75;
float var_1_62 = 4.5;
float var_1_63 = 15.25;
signed char var_1_64 = -5;
unsigned char last_1_var_1_29 = 0;
double last_1_var_1_42 = 49.2;
double last_1_var_1_59 = -0.7;
float last_1_var_1_60 = 128.4;
void initially(void) {
}
void step(void) {
 if (((((last_1_var_1_42) < 0 ) ? -(last_1_var_1_42) : (last_1_var_1_42))) <= var_1_4) {
  var_1_52 = (var_1_30 && var_1_31);
 } else {
  if (last_1_var_1_29) {
   var_1_52 = (var_1_30 && var_1_31);
  } else {
   var_1_52 = (! (! var_1_53));
  }
 }
 if (var_1_52) {
  if (var_1_52 && (var_1_17 == var_1_15)) {
   if (var_1_9 != ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) {
    var_1_29 = (! ((var_1_26 <= var_1_5) || var_1_30));
   } else {
    if (var_1_11 <= 8u) {
     var_1_29 = (! (var_1_52 || (var_1_30 && var_1_31)));
    } else {
     var_1_29 = 0;
    }
   }
  } else {
   var_1_29 = var_1_30;
  }
 }
 unsigned long int stepLocal_6 = (((((((var_1_18) > (var_1_9)) ? (var_1_18) : (var_1_9)))) > (var_1_11)) ? (((((var_1_18) > (var_1_9)) ? (var_1_18) : (var_1_9)))) : (var_1_11));
 if (stepLocal_6 <= var_1_12) {
  if ((last_1_var_1_59 / ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))) == last_1_var_1_60) {
   var_1_24 = ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)));
  } else {
   var_1_24 = ((((((var_1_27 + var_1_28) - 8u)) < (var_1_10)) ? (((var_1_27 + var_1_28) - 8u)) : (var_1_10)));
  }
 }
 signed long int stepLocal_0 = -5 + 64;
 if (var_1_29) {
  if (stepLocal_0 < var_1_24) {
   var_1_1 = (((((var_1_4 - var_1_5)) > ((var_1_6 - 5.4f))) ? ((var_1_4 - var_1_5)) : ((var_1_6 - 5.4f))));
  } else {
   var_1_1 = ((((((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) < (var_1_6)) ? (((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) : (var_1_6)));
  }
 } else {
  if (var_1_29) {
   var_1_1 = ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)));
  } else {
   var_1_1 = (var_1_5 - var_1_4);
  }
 }
 if (((var_1_4 - var_1_5) * var_1_1) <= var_1_6) {
  var_1_8 = var_1_9;
 } else {
  var_1_8 = ((((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) > (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))) ? (((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) : (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))));
 }
 unsigned long int stepLocal_5 = var_1_10;
 signed char stepLocal_4 = var_1_15;
 if (stepLocal_4 >= ((((var_1_12) < ((var_1_17 & var_1_11))) ? (var_1_12) : ((var_1_17 & var_1_11))))) {
  if (var_1_24 < stepLocal_5) {
   var_1_22 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 }
 var_1_32 = (((((var_1_18 + var_1_21)) < (((((var_1_20) < (var_1_33)) ? (var_1_20) : (var_1_33))))) ? ((var_1_18 + var_1_21)) : (((((var_1_20) < (var_1_33)) ? (var_1_20) : (var_1_33))))));
 if ((var_1_24 / var_1_28) < var_1_8) {
  var_1_48 = (var_1_49 - (var_1_21 + ((((var_1_20) < (var_1_50)) ? (var_1_20) : (var_1_50)))));
 } else {
  if ((var_1_47 * (var_1_20 >> var_1_51)) > var_1_19) {
   if (var_1_24 >= var_1_38) {
    var_1_48 = ((((var_1_21) > (var_1_49)) ? (var_1_21) : (var_1_49)));
   }
  } else {
   var_1_48 = (((((var_1_51) < (var_1_50)) ? (var_1_51) : (var_1_50))) + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))));
  }
 }
 var_1_56 = ((var_1_57 + var_1_58) - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))));
 if (((var_1_43 + var_1_44) - 2.6) <= (var_1_26 + var_1_4)) {
  var_1_42 = (var_1_45 + var_1_46);
 } else {
  if ((58597 - var_1_20) >= var_1_15) {
   if (var_1_24 > (var_1_21 ^ (var_1_47 - var_1_40))) {
    if (var_1_52 || (! (var_1_38 <= var_1_47))) {
     var_1_42 = (((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) - var_1_6)) > (var_1_5)) ? ((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) - var_1_6)) : (var_1_5)));
    }
   } else {
    var_1_42 = var_1_5;
   }
  }
 }
 if (var_1_1 > 99.5f) {
  var_1_34 = ((((((var_1_35 - var_1_18) - var_1_20)) > ((var_1_32 + var_1_56))) ? (((var_1_35 - var_1_18) - var_1_20)) : ((var_1_32 + var_1_56))));
 } else {
  var_1_34 = (((((var_1_33 + (var_1_21 - var_1_32))) < (var_1_17)) ? ((var_1_33 + (var_1_21 - var_1_32))) : (var_1_17)));
 }
 if (var_1_42 >= 99.5) {
  var_1_59 = ((((var_1_4) < (((((((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) > (var_1_46)) ? (((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) : (var_1_46))))) ? (var_1_4) : (((((((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) > (var_1_46)) ? (((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) : (var_1_46))))));
 } else {
  var_1_59 = (var_1_44 - var_1_5);
 }
 unsigned long int stepLocal_11 = var_1_10;
 unsigned long int stepLocal_10 = var_1_34 + var_1_24;
 if ((var_1_47 & var_1_51) == stepLocal_10) {
  var_1_64 = var_1_17;
 } else {
  if (stepLocal_11 == var_1_41) {
   if (var_1_62 != 9.8f) {
    var_1_64 = var_1_17;
   } else {
    var_1_64 = var_1_15;
   }
  } else {
   var_1_64 = 10;
  }
 }
 unsigned char stepLocal_3 = var_1_52 || (! var_1_29);
 unsigned char stepLocal_2 = var_1_42 >= var_1_4;
 signed short int stepLocal_1 = var_1_18;
 if (var_1_52 && stepLocal_2) {
  var_1_13 = ((var_1_15 + var_1_16) + var_1_17);
 } else {
  if ((((((var_1_34) < (var_1_16)) ? (var_1_34) : (var_1_16))) + var_1_17) == stepLocal_1) {
   if (var_1_52 || stepLocal_3) {
    if (var_1_52) {
     var_1_13 = (var_1_19 - (((((4 + var_1_20)) > ((var_1_21 + 5))) ? ((4 + var_1_20)) : ((var_1_21 + 5)))));
    } else {
     var_1_13 = ((((var_1_15) > ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_20))) ? (var_1_15) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_20))));
    }
   }
  }
 }
 if ((var_1_19 - var_1_21) <= var_1_15) {
  if (var_1_29 || var_1_31) {
   if (((var_1_34 * var_1_64) / var_1_38) >= var_1_19) {
    if ((var_1_27 - var_1_20) != (var_1_39 - ((((var_1_18) > (var_1_24)) ? (var_1_18) : (var_1_24))))) {
     var_1_36 = (var_1_17 + (((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) - var_1_40));
    }
   }
  } else {
   var_1_36 = ((4 + var_1_21) - (var_1_41 - 128));
  }
 } else {
  var_1_36 = var_1_40;
 }
 if ((- 8u) >= var_1_39) {
  if (var_1_12 >= (var_1_10 % (var_1_27 + var_1_41))) {
   var_1_54 = ((((((((((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) > ((var_1_40 - var_1_35))) ? (((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) : ((var_1_40 - var_1_35))))) < (var_1_21)) ? (((((((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) > ((var_1_40 - var_1_35))) ? (((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) : ((var_1_40 - var_1_35))))) : (var_1_21)));
  } else {
   var_1_54 = (((var_1_50 + var_1_18) - ((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24)))) + var_1_41);
  }
 } else {
  var_1_54 = (var_1_17 + ((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19))));
 }
 signed long int stepLocal_9 = var_1_54 / var_1_57;
 unsigned long int stepLocal_8 = var_1_8;
 unsigned char stepLocal_7 = (var_1_24 + var_1_55) >= -5;
 if ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) <= var_1_54) && stepLocal_7) {
  if (stepLocal_9 > (var_1_54 ^ (var_1_27 / var_1_41))) {
   var_1_60 = (var_1_45 + (var_1_61 - var_1_62));
  }
 } else {
  if ((((((var_1_54 ^ var_1_39)) < ((var_1_24 & var_1_18))) ? ((var_1_54 ^ var_1_39)) : ((var_1_24 & var_1_18)))) != stepLocal_8) {
   var_1_60 = ((2.75f + var_1_63) + ((((var_1_61) < (var_1_45)) ? (var_1_61) : (var_1_45))));
  } else {
   var_1_60 = (var_1_61 + ((((var_1_46) > (var_1_62)) ? (var_1_46) : (var_1_62))));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -31);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -31);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 1073741823);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741824);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 1073741822);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -128);
 assume_abort_if_not(var_1_38 <= 127);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967295);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427388000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427388000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 32767);
 assume_abort_if_not(var_1_47 <= 65535);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 127);
 assume_abort_if_not(var_1_49 <= 254);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 6);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= -1073741823);
 assume_abort_if_not(var_1_55 <= 1073741823);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 63);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 64);
 assume_abort_if_not(var_1_58 <= 127);
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= -230584.3009213691400e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691400e+12F && var_1_63 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_60 = var_1_60;
}
int property(void) {
 return ((((((((((((((((var_1_29 ? (((-5 + 64) < var_1_24) ? (var_1_1 == ((float) (((((var_1_4 - var_1_5)) > ((var_1_6 - 5.4f))) ? ((var_1_4 - var_1_5)) : ((var_1_6 - 5.4f)))))) : (var_1_1 == ((float) ((((((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) < (var_1_6)) ? (((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) : (var_1_6)))))) : (var_1_29 ? (var_1_1 == ((float) ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4))))) : (var_1_1 == ((float) (var_1_5 - var_1_4))))) && ((((var_1_4 - var_1_5) * var_1_1) <= var_1_6) ? (var_1_8 == ((unsigned long int) var_1_9)) : (var_1_8 == ((unsigned long int) ((((((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) > (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))) ? (((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)))) : (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))))))))) && ((var_1_52 && (var_1_42 >= var_1_4)) ? (var_1_13 == ((signed char) ((var_1_15 + var_1_16) + var_1_17))) : (((((((var_1_34) < (var_1_16)) ? (var_1_34) : (var_1_16))) + var_1_17) == var_1_18) ? ((var_1_52 || (var_1_52 || (! var_1_29))) ? (var_1_52 ? (var_1_13 == ((signed char) (var_1_19 - (((((4 + var_1_20)) > ((var_1_21 + 5))) ? ((4 + var_1_20)) : ((var_1_21 + 5))))))) : (var_1_13 == ((signed char) ((((var_1_15) > ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_20))) ? (var_1_15) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_20))))))) : 1) : 1))) && ((var_1_15 >= ((((var_1_12) < ((var_1_17 & var_1_11))) ? (var_1_12) : ((var_1_17 & var_1_11))))) ? ((var_1_24 < var_1_10) ? (var_1_22 == ((float) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : 1) : 1)) && ((((((((((var_1_18) > (var_1_9)) ? (var_1_18) : (var_1_9)))) > (var_1_11)) ? (((((var_1_18) > (var_1_9)) ? (var_1_18) : (var_1_9)))) : (var_1_11))) <= var_1_12) ? (((last_1_var_1_59 / ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))) == last_1_var_1_60) ? (var_1_24 == ((unsigned long int) ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_24 == ((unsigned long int) ((((((var_1_27 + var_1_28) - 8u)) < (var_1_10)) ? (((var_1_27 + var_1_28) - 8u)) : (var_1_10)))))) : 1)) && (var_1_52 ? ((var_1_52 && (var_1_17 == var_1_15)) ? ((var_1_9 != ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) ? (var_1_29 == ((unsigned char) (! ((var_1_26 <= var_1_5) || var_1_30)))) : ((var_1_11 <= 8u) ? (var_1_29 == ((unsigned char) (! (var_1_52 || (var_1_30 && var_1_31))))) : (var_1_29 == ((unsigned char) 0)))) : (var_1_29 == ((unsigned char) var_1_30))) : 1)) && (var_1_32 == ((unsigned short int) (((((var_1_18 + var_1_21)) < (((((var_1_20) < (var_1_33)) ? (var_1_20) : (var_1_33))))) ? ((var_1_18 + var_1_21)) : (((((var_1_20) < (var_1_33)) ? (var_1_20) : (var_1_33))))))))) && ((var_1_1 > 99.5f) ? (var_1_34 == ((signed long int) ((((((var_1_35 - var_1_18) - var_1_20)) > ((var_1_32 + var_1_56))) ? (((var_1_35 - var_1_18) - var_1_20)) : ((var_1_32 + var_1_56)))))) : (var_1_34 == ((signed long int) (((((var_1_33 + (var_1_21 - var_1_32))) < (var_1_17)) ? ((var_1_33 + (var_1_21 - var_1_32))) : (var_1_17))))))) && (((var_1_19 - var_1_21) <= var_1_15) ? ((var_1_29 || var_1_31) ? ((((var_1_34 * var_1_64) / var_1_38) >= var_1_19) ? (((var_1_27 - var_1_20) != (var_1_39 - ((((var_1_18) > (var_1_24)) ? (var_1_18) : (var_1_24))))) ? (var_1_36 == ((signed short int) (var_1_17 + (((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) - var_1_40)))) : 1) : 1) : (var_1_36 == ((signed short int) ((4 + var_1_21) - (var_1_41 - 128))))) : (var_1_36 == ((signed short int) var_1_40)))) && ((((var_1_43 + var_1_44) - 2.6) <= (var_1_26 + var_1_4)) ? (var_1_42 == ((double) (var_1_45 + var_1_46))) : (((58597 - var_1_20) >= var_1_15) ? ((var_1_24 > (var_1_21 ^ (var_1_47 - var_1_40))) ? ((var_1_52 || (! (var_1_38 <= var_1_47))) ? (var_1_42 == ((double) (((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) - var_1_6)) > (var_1_5)) ? ((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) - var_1_6)) : (var_1_5))))) : 1) : (var_1_42 == ((double) var_1_5))) : 1))) && (((var_1_24 / var_1_28) < var_1_8) ? (var_1_48 == ((unsigned char) (var_1_49 - (var_1_21 + ((((var_1_20) < (var_1_50)) ? (var_1_20) : (var_1_50))))))) : (((var_1_47 * (var_1_20 >> var_1_51)) > var_1_19) ? ((var_1_24 >= var_1_38) ? (var_1_48 == ((unsigned char) ((((var_1_21) > (var_1_49)) ? (var_1_21) : (var_1_49))))) : 1) : (var_1_48 == ((unsigned char) (((((var_1_51) < (var_1_50)) ? (var_1_51) : (var_1_50))) + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))))) && ((((((last_1_var_1_42) < 0 ) ? -(last_1_var_1_42) : (last_1_var_1_42))) <= var_1_4) ? (var_1_52 == ((unsigned char) (var_1_30 && var_1_31))) : (last_1_var_1_29 ? (var_1_52 == ((unsigned char) (var_1_30 && var_1_31))) : (var_1_52 == ((unsigned char) (! (! var_1_53))))))) && (((- 8u) >= var_1_39) ? ((var_1_12 >= (var_1_10 % (var_1_27 + var_1_41))) ? (var_1_54 == ((signed long int) ((((((((((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) > ((var_1_40 - var_1_35))) ? (((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) : ((var_1_40 - var_1_35))))) < (var_1_21)) ? (((((((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) > ((var_1_40 - var_1_35))) ? (((((var_1_51) > (var_1_36)) ? (var_1_51) : (var_1_36)))) : ((var_1_40 - var_1_35))))) : (var_1_21))))) : (var_1_54 == ((signed long int) (((var_1_50 + var_1_18) - ((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24)))) + var_1_41)))) : (var_1_54 == ((signed long int) (var_1_17 + ((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19)))))))) && (var_1_56 == ((unsigned char) ((var_1_57 + var_1_58) - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))))) && ((var_1_42 >= 99.5) ? (var_1_59 == ((double) ((((var_1_4) < (((((((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) > (var_1_46)) ? (((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) : (var_1_46))))) ? (var_1_4) : (((((((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) > (var_1_46)) ? (((((var_1_43) > (var_1_5)) ? (var_1_43) : (var_1_5)))) : (var_1_46)))))))) : (var_1_59 == ((double) (var_1_44 - var_1_5))))) && (((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) <= var_1_54) && ((var_1_24 + var_1_55) >= -5)) ? (((var_1_54 / var_1_57) > (var_1_54 ^ (var_1_27 / var_1_41))) ? (var_1_60 == ((float) (var_1_45 + (var_1_61 - var_1_62)))) : 1) : (((((((var_1_54 ^ var_1_39)) < ((var_1_24 & var_1_18))) ? ((var_1_54 ^ var_1_39)) : ((var_1_24 & var_1_18)))) != var_1_8) ? (var_1_60 == ((float) ((2.75f + var_1_63) + ((((var_1_61) < (var_1_45)) ? (var_1_61) : (var_1_45)))))) : (var_1_60 == ((float) (var_1_61 + ((((var_1_46) > (var_1_62)) ? (var_1_46) : (var_1_62))))))))) && (((var_1_47 & var_1_51) == (var_1_34 + var_1_24)) ? (var_1_64 == ((signed char) var_1_17)) : ((var_1_10 == var_1_41) ? ((var_1_62 != 9.8f) ? (var_1_64 == ((signed char) var_1_17)) : (var_1_64 == ((signed char) var_1_15))) : (var_1_64 == ((signed char) 10))))
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
