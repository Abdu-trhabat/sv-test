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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 7.3;
double var_1_13 = 0.2;
double var_1_14 = 99.75;
double var_1_15 = 4.75;
float var_1_16 = 256.3;
float var_1_20 = 3.875;
float var_1_21 = 8.25;
float var_1_22 = 4.25;
double var_1_23 = 1000.625;
unsigned long int var_1_24 = 64;
unsigned short int var_1_27 = 2;
unsigned char var_1_30 = 128;
double var_1_31 = 10000000.1;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 10;
unsigned short int var_1_37 = 500;
signed long int var_1_38 = 16;
unsigned short int var_1_39 = 100;
float var_1_40 = 50.2;
unsigned long int var_1_41 = 8;
unsigned long int var_1_42 = 3715455415;
signed short int var_1_43 = 0;
signed char var_1_44 = -32;
signed char var_1_45 = 5;
signed char var_1_46 = 64;
signed char var_1_47 = 4;
unsigned char var_1_48 = 128;
unsigned char var_1_49 = 32;
unsigned short int var_1_50 = 55503;
unsigned char var_1_51 = 100;
unsigned char var_1_52 = 200;
signed long int var_1_53 = -1;
double var_1_54 = 2.6;
signed short int var_1_55 = -4;
double var_1_56 = 128.375;
unsigned char var_1_57 = 0;
signed short int var_1_58 = -5;
unsigned char var_1_59 = 8;
unsigned short int var_1_60 = 32;
unsigned short int var_1_61 = 41889;
signed char var_1_62 = 64;
signed char var_1_63 = -10;
double var_1_64 = 255.88;
double var_1_65 = 16.5;
double var_1_66 = 0.8;
signed short int var_1_67 = -128;
signed char var_1_68 = -50;
unsigned long int last_1_var_1_24 = 64;
unsigned short int last_1_var_1_27 = 2;
unsigned char last_1_var_1_30 = 128;
unsigned short int last_1_var_1_37 = 500;
signed long int last_1_var_1_38 = 16;
unsigned short int last_1_var_1_39 = 100;
unsigned char last_1_var_1_49 = 32;
unsigned char last_1_var_1_57 = 0;
signed short int last_1_var_1_58 = -5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_7 = last_1_var_1_30;
 signed long int stepLocal_6 = last_1_var_1_30;
 unsigned char stepLocal_5 = last_1_var_1_57;
 if (stepLocal_7 < last_1_var_1_39) {
  if (stepLocal_6 < last_1_var_1_49) {
   if (((last_1_var_1_49 - var_1_32) >= last_1_var_1_27) && stepLocal_5) {
    var_1_39 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
   } else {
    var_1_39 = last_1_var_1_24;
   }
  } else {
   var_1_39 = (((((((last_1_var_1_49) > (var_1_36)) ? (last_1_var_1_49) : (var_1_36))) < 0 ) ? -((((last_1_var_1_49) > (var_1_36)) ? (last_1_var_1_49) : (var_1_36))) : ((((last_1_var_1_49) > (var_1_36)) ? (last_1_var_1_49) : (var_1_36)))));
  }
 }
 signed long int stepLocal_9 = last_1_var_1_39;
 if (var_1_35 == stepLocal_9) {
  var_1_41 = ((((last_1_var_1_39) < 0 ) ? -(last_1_var_1_39) : (last_1_var_1_39)));
 } else {
  var_1_41 = (var_1_42 - last_1_var_1_38);
 }
 signed long int stepLocal_12 = last_1_var_1_37;
 unsigned short int stepLocal_11 = var_1_50;
 signed long int stepLocal_10 = last_1_var_1_30;
 if (stepLocal_10 > (var_1_50 - 32)) {
  if (stepLocal_11 >= last_1_var_1_58) {
   var_1_49 = ((64 + var_1_51) - var_1_36);
  } else {
   var_1_49 = var_1_51;
  }
 } else {
  if (stepLocal_12 == (var_1_48 + last_1_var_1_27)) {
   var_1_49 = (var_1_52 - ((((var_1_35) > ((64 - var_1_36))) ? (var_1_35) : ((64 - var_1_36)))));
  } else {
   var_1_49 = (var_1_52 - var_1_47);
  }
 }
 unsigned char stepLocal_4 = var_1_10;
 if ((var_1_15 > var_1_22) && stepLocal_4) {
  var_1_27 = (last_1_var_1_49 + ((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49))));
 }
 var_1_23 = (var_1_15 - var_1_22);
 if ((var_1_31 - 0.7) > var_1_21) {
  if (var_1_11) {
   var_1_30 = 64;
  }
 } else {
  var_1_30 = ((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)));
 }
 signed long int stepLocal_8 = -1;
 if (var_1_39 >= stepLocal_8) {
  var_1_40 = (var_1_21 + var_1_13);
 }
 if (! var_1_8) {
  var_1_43 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 } else {
  var_1_43 = var_1_35;
 }
 if (var_1_13 != 50.2) {
  var_1_54 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 }
 var_1_60 = (((((var_1_33 + var_1_35)) > ((((((var_1_61) < (38176)) ? (var_1_61) : (38176))) - var_1_51))) ? ((var_1_33 + var_1_35)) : ((((((var_1_61) < (38176)) ? (var_1_61) : (38176))) - var_1_51))));
 if ((var_1_15 / -0.5f) >= (9.99999999994E10 - var_1_21)) {
  var_1_62 = (((((((((var_1_36) < (-4)) ? (var_1_36) : (-4))) + var_1_63)) > (var_1_45)) ? ((((((var_1_36) < (-4)) ? (var_1_36) : (-4))) + var_1_63)) : (var_1_45)));
 } else {
  var_1_62 = ((((var_1_46) < (var_1_63)) ? (var_1_46) : (var_1_63)));
 }
 if ((var_1_39 % ((((var_1_35) > (var_1_51)) ? (var_1_35) : (var_1_51)))) > (8 % var_1_48)) {
  var_1_57 = (var_1_8 || (! var_1_11));
 } else {
  if ((var_1_31 * var_1_23) <= var_1_15) {
   var_1_57 = 0;
  }
 }
 if ((- var_1_54) <= ((((((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))) < (64.8)) ? (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))) : (64.8)))) {
  var_1_34 = (2 + (var_1_35 - var_1_36));
 } else {
  var_1_34 = var_1_35;
 }
 if ((var_1_14 - var_1_22) < ((var_1_21 / var_1_56) / 128.841)) {
  var_1_55 = (((((var_1_48) > (10)) ? (var_1_48) : (10))) - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))));
 } else {
  var_1_55 = ((((-64) < (var_1_62)) ? (-64) : (var_1_62)));
 }
 var_1_24 = ((((((var_1_30 + var_1_34) + var_1_34)) < (var_1_27)) ? (((var_1_30 + var_1_34) + var_1_34)) : (var_1_27)));
 if (((var_1_27 / var_1_59) << 5) >= var_1_51) {
  var_1_58 = (((var_1_34 + var_1_27) + 256) - var_1_36);
 }
 unsigned short int stepLocal_3 = var_1_39;
 signed long int stepLocal_2 = var_1_58 + var_1_55;
 if (stepLocal_2 != (var_1_39 - (var_1_39 + var_1_49))) {
  var_1_16 = ((((var_1_20 - var_1_15) < 0 ) ? -(var_1_20 - var_1_15) : (var_1_20 - var_1_15)));
 } else {
  if (stepLocal_3 <= var_1_39) {
   var_1_16 = ((var_1_21 - var_1_22) + 99.95f);
  } else {
   var_1_16 = (15.1f - var_1_15);
  }
 }
 unsigned char stepLocal_0 = ((((var_1_24) < (var_1_43)) ? (var_1_24) : (var_1_43))) > var_1_49;
 if (((var_1_41 | var_1_58) <= var_1_49) || stepLocal_0) {
  var_1_1 = ((! 1) && ((var_1_49 < var_1_58) && var_1_8));
 } else {
  var_1_1 = 1;
 }
 if (var_1_1) {
  var_1_67 = var_1_51;
 } else {
  var_1_67 = var_1_33;
 }
 if (! (var_1_60 <= var_1_36)) {
  if (! (var_1_11 && var_1_1)) {
   var_1_37 = ((var_1_36 + var_1_41) + var_1_35);
  } else {
   var_1_37 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 }
 var_1_38 = (var_1_55 + (last_1_var_1_38 + var_1_37));
 if (var_1_30 < var_1_37) {
  var_1_9 = ((var_1_8 || (var_1_1 || var_1_10)) && var_1_11);
 } else {
  var_1_9 = (! var_1_11);
 }
 if (var_1_62 <= var_1_37) {
  var_1_64 = (31.5 - (((((var_1_22) > (var_1_21)) ? (var_1_22) : (var_1_21))) + var_1_65));
 }
 unsigned char stepLocal_14 = var_1_42 != var_1_67;
 unsigned char stepLocal_13 = var_1_9;
 if (var_1_10 && stepLocal_14) {
  if (var_1_1 && stepLocal_13) {
   var_1_68 = (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) - var_1_36);
  } else {
   var_1_68 = (50 + var_1_36);
  }
 } else {
  var_1_68 = var_1_63;
 }
 signed long int stepLocal_1 = 100 * var_1_68;
 if (var_1_58 == stepLocal_1) {
  var_1_12 = (((((0.875 + (var_1_13 + 64.4))) > (1.0000000000000005E15)) ? ((0.875 + (var_1_13 + 64.4))) : (1.0000000000000005E15)));
 } else {
  var_1_12 = (((((var_1_14 - var_1_15)) > (var_1_13)) ? ((var_1_14 - var_1_15)) : (var_1_13)));
 }
 if (((((var_1_55) > (var_1_30)) ? (var_1_55) : (var_1_30))) <= var_1_42) {
  var_1_44 = ((((((((var_1_36) > (var_1_45)) ? (var_1_36) : (var_1_45)))) < ((var_1_46 - var_1_47))) ? (((((var_1_36) > (var_1_45)) ? (var_1_36) : (var_1_45)))) : ((var_1_46 - var_1_47))));
 } else {
  if (var_1_57 && var_1_11) {
   if ((var_1_12 + var_1_21) >= var_1_31) {
    if (((((0) > ((var_1_48 - var_1_36))) ? (0) : ((var_1_48 - var_1_36)))) > 64) {
     var_1_44 = (var_1_47 - var_1_36);
    } else {
     var_1_44 = var_1_45;
    }
   }
  } else {
   var_1_44 = (var_1_36 + 32);
  }
 }
 if (((var_1_32 / var_1_52) / (var_1_50 + var_1_48)) <= ((((var_1_38) > ((var_1_44 + var_1_49))) ? (var_1_38) : ((var_1_44 + var_1_49))))) {
  if (var_1_16 >= var_1_65) {
   var_1_66 = var_1_65;
  }
 } else {
  var_1_66 = var_1_22;
 }
 if ((var_1_64 + (var_1_21 + var_1_20)) == var_1_15) {
  var_1_53 = (((((((((var_1_33 - var_1_60)) > (var_1_30)) ? ((var_1_33 - var_1_60)) : (var_1_30)))) > ((((((var_1_49) > (8)) ? (var_1_49) : (8))) - var_1_48))) ? ((((((var_1_33 - var_1_60)) > (var_1_30)) ? ((var_1_33 - var_1_60)) : (var_1_30)))) : ((((((var_1_49) > (8)) ? (var_1_49) : (8))) - var_1_48))));
 } else {
  if (var_1_66 <= var_1_14) {
   var_1_53 = (var_1_49 + -4);
  }
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -230584.3009213691390e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 63);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 2147483647);
 assume_abort_if_not(var_1_42 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -1);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 127);
 assume_abort_if_not(var_1_48 <= 255);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65535);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 64);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 127);
 assume_abort_if_not(var_1_52 <= 254);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 assume_abort_if_not(var_1_56 != 0.0F);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 255);
 assume_abort_if_not(var_1_59 != 0);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 32767);
 assume_abort_if_not(var_1_61 <= 65534);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -63);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
}
int property() {
 return ((((((((((((((((((((((((((((((var_1_41 | var_1_58) <= var_1_49) || (((((var_1_24) < (var_1_43)) ? (var_1_24) : (var_1_43))) > var_1_49)) ? (var_1_1 == ((unsigned char) ((! 1) && ((var_1_49 < var_1_58) && var_1_8)))) : (var_1_1 == ((unsigned char) 1))) && ((var_1_30 < var_1_37) ? (var_1_9 == ((unsigned char) ((var_1_8 || (var_1_1 || var_1_10)) && var_1_11))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && ((var_1_58 == (100 * var_1_68)) ? (var_1_12 == ((double) (((((0.875 + (var_1_13 + 64.4))) > (1.0000000000000005E15)) ? ((0.875 + (var_1_13 + 64.4))) : (1.0000000000000005E15))))) : (var_1_12 == ((double) (((((var_1_14 - var_1_15)) > (var_1_13)) ? ((var_1_14 - var_1_15)) : (var_1_13))))))) && (((var_1_58 + var_1_55) != (var_1_39 - (var_1_39 + var_1_49))) ? (var_1_16 == ((float) ((((var_1_20 - var_1_15) < 0 ) ? -(var_1_20 - var_1_15) : (var_1_20 - var_1_15))))) : ((var_1_39 <= var_1_39) ? (var_1_16 == ((float) ((var_1_21 - var_1_22) + 99.95f))) : (var_1_16 == ((float) (15.1f - var_1_15)))))) && (var_1_23 == ((double) (var_1_15 - var_1_22)))) && (var_1_24 == ((unsigned long int) ((((((var_1_30 + var_1_34) + var_1_34)) < (var_1_27)) ? (((var_1_30 + var_1_34) + var_1_34)) : (var_1_27)))))) && (((var_1_15 > var_1_22) && var_1_10) ? (var_1_27 == ((unsigned short int) (last_1_var_1_49 + ((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49)))))) : 1)) && (((var_1_31 - 0.7) > var_1_21) ? (var_1_11 ? (var_1_30 == ((unsigned char) 64)) : 1) : (var_1_30 == ((unsigned char) ((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33))))))) && (((- var_1_54) <= ((((((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))) < (64.8)) ? (((((var_1_20) < (var_1_13)) ? (var_1_20) : (var_1_13)))) : (64.8)))) ? (var_1_34 == ((unsigned char) (2 + (var_1_35 - var_1_36)))) : (var_1_34 == ((unsigned char) var_1_35)))) && ((! (var_1_60 <= var_1_36)) ? ((! (var_1_11 && var_1_1)) ? (var_1_37 == ((unsigned short int) ((var_1_36 + var_1_41) + var_1_35))) : (var_1_37 == ((unsigned short int) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) : 1)) && (var_1_38 == ((signed long int) (var_1_55 + (last_1_var_1_38 + var_1_37))))) && ((last_1_var_1_30 < last_1_var_1_39) ? ((last_1_var_1_30 < last_1_var_1_49) ? ((((last_1_var_1_49 - var_1_32) >= last_1_var_1_27) && last_1_var_1_57) ? (var_1_39 == ((unsigned short int) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (var_1_39 == ((unsigned short int) last_1_var_1_24))) : (var_1_39 == ((unsigned short int) (((((((last_1_var_1_49) > (var_1_36)) ? (last_1_var_1_49) : (var_1_36))) < 0 ) ? -((((last_1_var_1_49) > (var_1_36)) ? (last_1_var_1_49) : (var_1_36))) : ((((last_1_var_1_49) > (var_1_36)) ? (last_1_var_1_49) : (var_1_36)))))))) : 1)) && ((var_1_39 >= -1) ? (var_1_40 == ((float) (var_1_21 + var_1_13))) : 1)) && ((var_1_35 == last_1_var_1_39) ? (var_1_41 == ((unsigned long int) ((((last_1_var_1_39) < 0 ) ? -(last_1_var_1_39) : (last_1_var_1_39))))) : (var_1_41 == ((unsigned long int) (var_1_42 - last_1_var_1_38))))) && ((! var_1_8) ? (var_1_43 == ((signed short int) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) : (var_1_43 == ((signed short int) var_1_35)))) && ((((((var_1_55) > (var_1_30)) ? (var_1_55) : (var_1_30))) <= var_1_42) ? (var_1_44 == ((signed char) ((((((((var_1_36) > (var_1_45)) ? (var_1_36) : (var_1_45)))) < ((var_1_46 - var_1_47))) ? (((((var_1_36) > (var_1_45)) ? (var_1_36) : (var_1_45)))) : ((var_1_46 - var_1_47)))))) : ((var_1_57 && var_1_11) ? (((var_1_12 + var_1_21) >= var_1_31) ? ((((((0) > ((var_1_48 - var_1_36))) ? (0) : ((var_1_48 - var_1_36)))) > 64) ? (var_1_44 == ((signed char) (var_1_47 - var_1_36))) : (var_1_44 == ((signed char) var_1_45))) : 1) : (var_1_44 == ((signed char) (var_1_36 + 32)))))) && ((last_1_var_1_30 > (var_1_50 - 32)) ? ((var_1_50 >= last_1_var_1_58) ? (var_1_49 == ((unsigned char) ((64 + var_1_51) - var_1_36))) : (var_1_49 == ((unsigned char) var_1_51))) : ((last_1_var_1_37 == (var_1_48 + last_1_var_1_27)) ? (var_1_49 == ((unsigned char) (var_1_52 - ((((var_1_35) > ((64 - var_1_36))) ? (var_1_35) : ((64 - var_1_36))))))) : (var_1_49 == ((unsigned char) (var_1_52 - var_1_47)))))) && (((var_1_64 + (var_1_21 + var_1_20)) == var_1_15) ? (var_1_53 == ((signed long int) (((((((((var_1_33 - var_1_60)) > (var_1_30)) ? ((var_1_33 - var_1_60)) : (var_1_30)))) > ((((((var_1_49) > (8)) ? (var_1_49) : (8))) - var_1_48))) ? ((((((var_1_33 - var_1_60)) > (var_1_30)) ? ((var_1_33 - var_1_60)) : (var_1_30)))) : ((((((var_1_49) > (8)) ? (var_1_49) : (8))) - var_1_48)))))) : ((var_1_66 <= var_1_14) ? (var_1_53 == ((signed long int) (var_1_49 + -4))) : 1))) && ((var_1_13 != 50.2) ? (var_1_54 == ((double) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : 1)) && (((var_1_14 - var_1_22) < ((var_1_21 / var_1_56) / 128.841)) ? (var_1_55 == ((signed short int) (((((var_1_48) > (10)) ? (var_1_48) : (10))) - ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))))) : (var_1_55 == ((signed short int) ((((-64) < (var_1_62)) ? (-64) : (var_1_62))))))) && (((var_1_39 % ((((var_1_35) > (var_1_51)) ? (var_1_35) : (var_1_51)))) > (8 % var_1_48)) ? (var_1_57 == ((unsigned char) (var_1_8 || (! var_1_11)))) : (((var_1_31 * var_1_23) <= var_1_15) ? (var_1_57 == ((unsigned char) 0)) : 1))) && ((((var_1_27 / var_1_59) << 5) >= var_1_51) ? (var_1_58 == ((signed short int) (((var_1_34 + var_1_27) + 256) - var_1_36))) : 1)) && (var_1_60 == ((unsigned short int) (((((var_1_33 + var_1_35)) > ((((((var_1_61) < (38176)) ? (var_1_61) : (38176))) - var_1_51))) ? ((var_1_33 + var_1_35)) : ((((((var_1_61) < (38176)) ? (var_1_61) : (38176))) - var_1_51))))))) && (((var_1_15 / -0.5f) >= (9.99999999994E10 - var_1_21)) ? (var_1_62 == ((signed char) (((((((((var_1_36) < (-4)) ? (var_1_36) : (-4))) + var_1_63)) > (var_1_45)) ? ((((((var_1_36) < (-4)) ? (var_1_36) : (-4))) + var_1_63)) : (var_1_45))))) : (var_1_62 == ((signed char) ((((var_1_46) < (var_1_63)) ? (var_1_46) : (var_1_63))))))) && ((var_1_62 <= var_1_37) ? (var_1_64 == ((double) (31.5 - (((((var_1_22) > (var_1_21)) ? (var_1_22) : (var_1_21))) + var_1_65)))) : 1)) && ((((var_1_32 / var_1_52) / (var_1_50 + var_1_48)) <= ((((var_1_38) > ((var_1_44 + var_1_49))) ? (var_1_38) : ((var_1_44 + var_1_49))))) ? ((var_1_16 >= var_1_65) ? (var_1_66 == ((double) var_1_65)) : 1) : (var_1_66 == ((double) var_1_22)))) && (var_1_1 ? (var_1_67 == ((signed short int) var_1_51)) : (var_1_67 == ((signed short int) var_1_33)))) && ((var_1_10 && (var_1_42 != var_1_67)) ? ((var_1_1 && var_1_9) ? (var_1_68 == ((signed char) (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) - var_1_36))) : (var_1_68 == ((signed char) (50 + var_1_36)))) : (var_1_68 == ((signed char) var_1_63)))
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
