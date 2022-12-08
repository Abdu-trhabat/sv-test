// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 5;
signed short int var_1_9 = 8;
signed long int var_1_10 = -1;
double var_1_12 = 4.55;
unsigned char var_1_13 = 200;
unsigned char var_1_14 = 2;
double var_1_15 = 9.25;
double var_1_16 = 99999999999999.25;
signed long int var_1_17 = 5;
signed long int var_1_18 = 8;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
signed char var_1_21 = -2;
signed long int var_1_23 = -64;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 64;
unsigned char var_1_26 = 1;
signed long int var_1_28 = -10;
unsigned short int var_1_29 = 56364;
double var_1_32 = 5.75;
double var_1_33 = 255.9;
double var_1_34 = 1.75;
double var_1_35 = 63.25;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 4;
unsigned long int var_1_40 = 1961509315;
unsigned long int var_1_41 = 1433568485;
unsigned char var_1_42 = 16;
signed long int var_1_43 = -1;
unsigned short int var_1_44 = 64;
unsigned short int var_1_45 = 18846;
unsigned short int var_1_46 = 31820;
unsigned char var_1_47 = 1;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 0;
float var_1_52 = 16.5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned long int var_1_56 = 25;
unsigned long int var_1_57 = 100;
unsigned long int var_1_58 = 2924506323;
unsigned char var_1_60 = 5;
signed char var_1_61 = -8;
unsigned short int var_1_62 = 32;
unsigned short int var_1_63 = 10000;
unsigned char var_1_64 = 16;
signed long int last_1_var_1_1 = 10;
unsigned char last_1_var_1_5 = 100;
signed short int last_1_var_1_9 = 8;
double last_1_var_1_12 = 4.55;
signed char last_1_var_1_21 = -2;
signed long int last_1_var_1_28 = -10;
double last_1_var_1_32 = 5.75;
unsigned char last_1_var_1_36 = 8;
unsigned char last_1_var_1_42 = 16;
signed long int last_1_var_1_43 = -1;
unsigned short int last_1_var_1_44 = 64;
unsigned char last_1_var_1_51 = 0;
unsigned long int last_1_var_1_57 = 100;
unsigned char last_1_var_1_60 = 5;
signed char last_1_var_1_61 = -8;
unsigned short int last_1_var_1_62 = 32;
unsigned char last_1_var_1_64 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_10 = (last_1_var_1_44 + var_1_6) - (var_1_8 + var_1_14);
 signed long int stepLocal_9 = var_1_10;
 signed long int stepLocal_8 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)));
 unsigned char stepLocal_7 = var_1_8;
 if (last_1_var_1_1 > stepLocal_10) {
  if (stepLocal_9 <= (last_1_var_1_36 / var_1_13)) {
   if (stepLocal_8 < var_1_10) {
    var_1_24 = ((var_1_25 - var_1_26) + var_1_14);
   } else {
    if (stepLocal_7 <= ((((last_1_var_1_64) > ((last_1_var_1_60 / var_1_13))) ? (last_1_var_1_64) : ((last_1_var_1_60 / var_1_13))))) {
     var_1_24 = ((((var_1_6) < (var_1_25)) ? (var_1_6) : (var_1_25)));
    } else {
     var_1_24 = ((((var_1_14) < ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) ? (var_1_14) : ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))));
    }
   }
  } else {
   var_1_24 = (var_1_7 - var_1_14);
  }
 } else {
  var_1_24 = (((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))));
 }
 if (((var_1_29 - last_1_var_1_60) - ((((var_1_7) > (last_1_var_1_64)) ? (var_1_7) : (last_1_var_1_64)))) == var_1_26) {
  var_1_28 = ((((last_1_var_1_61) < ((((((var_1_26 + var_1_8)) > ((var_1_7 + last_1_var_1_57))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + last_1_var_1_57)))))) ? (last_1_var_1_61) : ((((((var_1_26 + var_1_8)) > ((var_1_7 + last_1_var_1_57))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + last_1_var_1_57)))))));
 }
 signed long int stepLocal_22 = last_1_var_1_5;
 if (stepLocal_22 <= var_1_8) {
  var_1_62 = (((30089 - last_1_var_1_62) - (var_1_63 - last_1_var_1_28)) + ((((var_1_45) > (var_1_8)) ? (var_1_45) : (var_1_8))));
 } else {
  var_1_62 = ((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25)));
 }
 signed long int stepLocal_15 = last_1_var_1_64;
 if (var_1_34 > (last_1_var_1_32 + last_1_var_1_12)) {
  if (stepLocal_15 > last_1_var_1_60) {
   var_1_44 = ((var_1_45 + var_1_46) - last_1_var_1_64);
  } else {
   var_1_44 = (((((last_1_var_1_21 + (30135 - var_1_13))) > (var_1_45)) ? ((last_1_var_1_21 + (30135 - var_1_13))) : (var_1_45)));
  }
 }
 signed long int stepLocal_21 = last_1_var_1_36;
 if (stepLocal_21 != ((last_1_var_1_42 >> last_1_var_1_43) + (var_1_41 * var_1_6))) {
  var_1_60 = var_1_7;
 } else {
  var_1_60 = var_1_7;
 }
 signed long int stepLocal_13 = last_1_var_1_28;
 signed long int stepLocal_12 = (last_1_var_1_9 + 8) / var_1_10;
 if (stepLocal_12 != last_1_var_1_28) {
  if (stepLocal_13 <= var_1_26) {
   var_1_36 = (var_1_7 - ((((var_1_14) < (var_1_26)) ? (var_1_14) : (var_1_26))));
  } else {
   var_1_36 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
  }
 }
 signed long int stepLocal_0 = (var_1_13 - var_1_14) - 10;
 if (var_1_7 > stepLocal_0) {
  var_1_12 = ((((((31.25 + var_1_15)) > (((((5.5) < 0 ) ? -(5.5) : (5.5))))) ? ((31.25 + var_1_15)) : (((((5.5) < 0 ) ? -(5.5) : (5.5)))))) - var_1_16);
 }
 var_1_37 = (! (var_1_20 && var_1_38));
 var_1_39 = ((var_1_40 + var_1_41) - var_1_13);
 if (var_1_6 <= var_1_23) {
  var_1_50 = (var_1_7 - var_1_25);
 }
 var_1_61 = var_1_14;
 var_1_64 = var_1_8;
 unsigned char stepLocal_18 = var_1_24;
 if (var_1_6 < stepLocal_18) {
  if ((- (var_1_16 / var_1_52)) > var_1_15) {
   var_1_51 = ((var_1_38 && var_1_53) || (var_1_54 || var_1_55));
  }
 } else {
  if (! (var_1_37 && last_1_var_1_51)) {
   var_1_51 = (var_1_55 || (! var_1_38));
  } else {
   var_1_51 = ((! var_1_53) && var_1_20);
  }
 }
 unsigned char stepLocal_11 = var_1_50;
 if (var_1_24 <= stepLocal_11) {
  var_1_32 = ((var_1_15 - var_1_33) + var_1_34);
 } else {
  if (var_1_37) {
   var_1_32 = (((((((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) > (var_1_16)) ? (((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) : (var_1_16))) - var_1_35);
  } else {
   var_1_32 = (((((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) < (var_1_16)) ? ((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) : (var_1_16)));
  }
 }
 unsigned char stepLocal_6 = var_1_50;
 unsigned char stepLocal_5 = var_1_64;
 if ((((((var_1_6 * var_1_60)) > (var_1_36)) ? ((var_1_6 * var_1_60)) : (var_1_36))) > stepLocal_5) {
  var_1_21 = var_1_13;
 } else {
  if (stepLocal_6 == (((((var_1_7) < (var_1_62)) ? (var_1_7) : (var_1_62))) / var_1_23)) {
   var_1_21 = var_1_14;
  } else {
   var_1_21 = var_1_13;
  }
 }
 if (var_1_20) {
  var_1_43 = (var_1_64 + var_1_36);
 }
 if (var_1_50 <= ((var_1_7 + var_1_8) / var_1_10)) {
  if (7.5 >= var_1_12) {
   var_1_9 = ((((var_1_8 - (var_1_50 + var_1_7)) < 0 ) ? -(var_1_8 - (var_1_50 + var_1_7)) : (var_1_8 - (var_1_50 + var_1_7))));
  } else {
   var_1_9 = var_1_50;
  }
 }
 if (var_1_37) {
  if (var_1_51) {
   var_1_1 = (16 - 2);
  } else {
   var_1_1 = var_1_50;
  }
 }
 if (var_1_8 >= var_1_29) {
  var_1_56 = (var_1_28 + var_1_9);
 } else {
  var_1_56 = ((((var_1_14) > (var_1_7)) ? (var_1_14) : (var_1_7)));
 }
 signed long int stepLocal_14 = var_1_43;
 if ((((((var_1_8) < (var_1_50)) ? (var_1_8) : (var_1_50))) - ((((var_1_44) < (var_1_9)) ? (var_1_44) : (var_1_9)))) >= stepLocal_14) {
  var_1_42 = ((((((((1) < 0 ) ? -(1) : (1)))) < (((((var_1_26) < (var_1_14)) ? (var_1_26) : (var_1_14))))) ? (((((1) < 0 ) ? -(1) : (1)))) : (((((var_1_26) < (var_1_14)) ? (var_1_26) : (var_1_14))))));
 }
 unsigned char stepLocal_17 = var_1_37;
 signed char stepLocal_16 = var_1_61;
 if (stepLocal_17 && (var_1_32 <= (var_1_16 - var_1_15))) {
  var_1_47 = ((var_1_43 >= var_1_60) && (! (! 0)));
 } else {
  if (stepLocal_16 < var_1_25) {
   var_1_47 = (var_1_20 || var_1_38);
  }
 }
 unsigned char stepLocal_4 = var_1_51;
 if (var_1_37) {
  if (stepLocal_4 || ((2.25 + var_1_12) != 31.625)) {
   var_1_19 = (! var_1_20);
  } else {
   var_1_19 = ((((((var_1_60) > (var_1_8)) ? (var_1_60) : (var_1_8))) < var_1_56) || var_1_20);
  }
 }
 if (var_1_47) {
  var_1_5 = ((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8))));
 }
 unsigned char stepLocal_3 = var_1_8;
 signed long int stepLocal_2 = (var_1_5 + var_1_36) * var_1_10;
 if (stepLocal_2 <= var_1_62) {
  if (stepLocal_3 <= var_1_13) {
   var_1_18 = (var_1_13 + var_1_56);
  }
 }
 unsigned char stepLocal_1 = var_1_7;
 if (var_1_18 > stepLocal_1) {
  var_1_17 = (5 + (var_1_7 + ((((var_1_14) > (var_1_18)) ? (var_1_14) : (var_1_18)))));
 } else {
  var_1_17 = (var_1_6 + var_1_62);
 }
 unsigned long int stepLocal_20 = var_1_41 << var_1_61;
 signed long int stepLocal_19 = - var_1_10;
 if (((((var_1_44) > (var_1_8)) ? (var_1_44) : (var_1_8))) != stepLocal_20) {
  if (var_1_46 > stepLocal_19) {
   if ((var_1_16 * var_1_12) <= (var_1_33 - var_1_35)) {
    var_1_57 = ((((var_1_45) < ((var_1_58 - ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))) ? (var_1_45) : ((var_1_58 - ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))));
   } else {
    var_1_57 = (var_1_58 - (((((var_1_40 - var_1_7)) > (var_1_42)) ? ((var_1_40 - var_1_7)) : (var_1_42))));
   }
  } else {
   var_1_57 = (((((var_1_58 - var_1_17)) < (((((var_1_29) < (var_1_61)) ? (var_1_29) : (var_1_61))))) ? ((var_1_58 - var_1_17)) : (((((var_1_29) < (var_1_61)) ? (var_1_29) : (var_1_61))))));
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 assume_abort_if_not(var_1_10 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 191);
 assume_abort_if_not(var_1_13 <= 255);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 64);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 assume_abort_if_not(var_1_23 != 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 63);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 49151);
 assume_abort_if_not(var_1_29 <= 65535);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741824);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 16383);
 assume_abort_if_not(var_1_45 <= 32767);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 16384);
 assume_abort_if_not(var_1_46 <= 32767);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
 assume_abort_if_not(var_1_52 != 0.0F);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 0);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 2147483647);
 assume_abort_if_not(var_1_58 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 8191);
 assume_abort_if_not(var_1_63 <= 16383);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_5 = var_1_5;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_64 = var_1_64;
}
int property() {
 return (((((((((((((((((((((((((var_1_37 ? (var_1_51 ? (var_1_1 == ((signed long int) (16 - 2))) : (var_1_1 == ((signed long int) var_1_50))) : 1) && (var_1_47 ? (var_1_5 == ((unsigned char) ((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8)))))) : 1)) && ((var_1_50 <= ((var_1_7 + var_1_8) / var_1_10)) ? ((7.5 >= var_1_12) ? (var_1_9 == ((signed short int) ((((var_1_8 - (var_1_50 + var_1_7)) < 0 ) ? -(var_1_8 - (var_1_50 + var_1_7)) : (var_1_8 - (var_1_50 + var_1_7)))))) : (var_1_9 == ((signed short int) var_1_50))) : 1)) && ((var_1_7 > ((var_1_13 - var_1_14) - 10)) ? (var_1_12 == ((double) ((((((31.25 + var_1_15)) > (((((5.5) < 0 ) ? -(5.5) : (5.5))))) ? ((31.25 + var_1_15)) : (((((5.5) < 0 ) ? -(5.5) : (5.5)))))) - var_1_16))) : 1)) && ((var_1_18 > var_1_7) ? (var_1_17 == ((signed long int) (5 + (var_1_7 + ((((var_1_14) > (var_1_18)) ? (var_1_14) : (var_1_18))))))) : (var_1_17 == ((signed long int) (var_1_6 + var_1_62))))) && ((((var_1_5 + var_1_36) * var_1_10) <= var_1_62) ? ((var_1_8 <= var_1_13) ? (var_1_18 == ((signed long int) (var_1_13 + var_1_56))) : 1) : 1)) && (var_1_37 ? ((var_1_51 || ((2.25 + var_1_12) != 31.625)) ? (var_1_19 == ((unsigned char) (! var_1_20))) : (var_1_19 == ((unsigned char) ((((((var_1_60) > (var_1_8)) ? (var_1_60) : (var_1_8))) < var_1_56) || var_1_20)))) : 1)) && (((((((var_1_6 * var_1_60)) > (var_1_36)) ? ((var_1_6 * var_1_60)) : (var_1_36))) > var_1_64) ? (var_1_21 == ((signed char) var_1_13)) : ((var_1_50 == (((((var_1_7) < (var_1_62)) ? (var_1_7) : (var_1_62))) / var_1_23)) ? (var_1_21 == ((signed char) var_1_14)) : (var_1_21 == ((signed char) var_1_13))))) && ((last_1_var_1_1 > ((last_1_var_1_44 + var_1_6) - (var_1_8 + var_1_14))) ? ((var_1_10 <= (last_1_var_1_36 / var_1_13)) ? (((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)))) < var_1_10) ? (var_1_24 == ((unsigned char) ((var_1_25 - var_1_26) + var_1_14))) : ((var_1_8 <= ((((last_1_var_1_64) > ((last_1_var_1_60 / var_1_13))) ? (last_1_var_1_64) : ((last_1_var_1_60 / var_1_13))))) ? (var_1_24 == ((unsigned char) ((((var_1_6) < (var_1_25)) ? (var_1_6) : (var_1_25))))) : (var_1_24 == ((unsigned char) ((((var_1_14) < ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) ? (var_1_14) : ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))))))) : (var_1_24 == ((unsigned char) (var_1_7 - var_1_14)))) : (var_1_24 == ((unsigned char) (((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))))) && ((((var_1_29 - last_1_var_1_60) - ((((var_1_7) > (last_1_var_1_64)) ? (var_1_7) : (last_1_var_1_64)))) == var_1_26) ? (var_1_28 == ((signed long int) ((((last_1_var_1_61) < ((((((var_1_26 + var_1_8)) > ((var_1_7 + last_1_var_1_57))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + last_1_var_1_57)))))) ? (last_1_var_1_61) : ((((((var_1_26 + var_1_8)) > ((var_1_7 + last_1_var_1_57))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + last_1_var_1_57))))))))) : 1)) && ((var_1_24 <= var_1_50) ? (var_1_32 == ((double) ((var_1_15 - var_1_33) + var_1_34))) : (var_1_37 ? (var_1_32 == ((double) (((((((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) > (var_1_16)) ? (((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) : (var_1_16))) - var_1_35))) : (var_1_32 == ((double) (((((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) < (var_1_16)) ? ((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) : (var_1_16)))))))) && ((((last_1_var_1_9 + 8) / var_1_10) != last_1_var_1_28) ? ((last_1_var_1_28 <= var_1_26) ? (var_1_36 == ((unsigned char) (var_1_7 - ((((var_1_14) < (var_1_26)) ? (var_1_14) : (var_1_26)))))) : (var_1_36 == ((unsigned char) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) : 1)) && (var_1_37 == ((unsigned char) (! (var_1_20 && var_1_38))))) && (var_1_39 == ((unsigned long int) ((var_1_40 + var_1_41) - var_1_13)))) && (((((((var_1_8) < (var_1_50)) ? (var_1_8) : (var_1_50))) - ((((var_1_44) < (var_1_9)) ? (var_1_44) : (var_1_9)))) >= var_1_43) ? (var_1_42 == ((unsigned char) ((((((((1) < 0 ) ? -(1) : (1)))) < (((((var_1_26) < (var_1_14)) ? (var_1_26) : (var_1_14))))) ? (((((1) < 0 ) ? -(1) : (1)))) : (((((var_1_26) < (var_1_14)) ? (var_1_26) : (var_1_14)))))))) : 1)) && (var_1_20 ? (var_1_43 == ((signed long int) (var_1_64 + var_1_36))) : 1)) && ((var_1_34 > (last_1_var_1_32 + last_1_var_1_12)) ? ((last_1_var_1_64 > last_1_var_1_60) ? (var_1_44 == ((unsigned short int) ((var_1_45 + var_1_46) - last_1_var_1_64))) : (var_1_44 == ((unsigned short int) (((((last_1_var_1_21 + (30135 - var_1_13))) > (var_1_45)) ? ((last_1_var_1_21 + (30135 - var_1_13))) : (var_1_45)))))) : 1)) && ((var_1_37 && (var_1_32 <= (var_1_16 - var_1_15))) ? (var_1_47 == ((unsigned char) ((var_1_43 >= var_1_60) && (! (! 0))))) : ((var_1_61 < var_1_25) ? (var_1_47 == ((unsigned char) (var_1_20 || var_1_38))) : 1))) && ((var_1_6 <= var_1_23) ? (var_1_50 == ((unsigned char) (var_1_7 - var_1_25))) : 1)) && ((var_1_6 < var_1_24) ? (((- (var_1_16 / var_1_52)) > var_1_15) ? (var_1_51 == ((unsigned char) ((var_1_38 && var_1_53) || (var_1_54 || var_1_55)))) : 1) : ((! (var_1_37 && last_1_var_1_51)) ? (var_1_51 == ((unsigned char) (var_1_55 || (! var_1_38)))) : (var_1_51 == ((unsigned char) ((! var_1_53) && var_1_20)))))) && ((var_1_8 >= var_1_29) ? (var_1_56 == ((unsigned long int) (var_1_28 + var_1_9))) : (var_1_56 == ((unsigned long int) ((((var_1_14) > (var_1_7)) ? (var_1_14) : (var_1_7))))))) && ((((((var_1_44) > (var_1_8)) ? (var_1_44) : (var_1_8))) != (var_1_41 << var_1_61)) ? ((var_1_46 > (- var_1_10)) ? (((var_1_16 * var_1_12) <= (var_1_33 - var_1_35)) ? (var_1_57 == ((unsigned long int) ((((var_1_45) < ((var_1_58 - ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))) ? (var_1_45) : ((var_1_58 - ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))))))) : (var_1_57 == ((unsigned long int) (var_1_58 - (((((var_1_40 - var_1_7)) > (var_1_42)) ? ((var_1_40 - var_1_7)) : (var_1_42))))))) : (var_1_57 == ((unsigned long int) (((((var_1_58 - var_1_17)) < (((((var_1_29) < (var_1_61)) ? (var_1_29) : (var_1_61))))) ? ((var_1_58 - var_1_17)) : (((((var_1_29) < (var_1_61)) ? (var_1_29) : (var_1_61))))))))) : 1)) && ((last_1_var_1_36 != ((last_1_var_1_42 >> last_1_var_1_43) + (var_1_41 * var_1_6))) ? (var_1_60 == ((unsigned char) var_1_7)) : (var_1_60 == ((unsigned char) var_1_7)))) && (var_1_61 == ((signed char) var_1_14))) && ((last_1_var_1_5 <= var_1_8) ? (var_1_62 == ((unsigned short int) (((30089 - last_1_var_1_62) - (var_1_63 - last_1_var_1_28)) + ((((var_1_45) > (var_1_8)) ? (var_1_45) : (var_1_8)))))) : (var_1_62 == ((unsigned short int) ((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))))))) && (var_1_64 == ((unsigned char) var_1_8))
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
