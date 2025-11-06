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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
unsigned char var_1_4 = 64;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 32;
double var_1_8 = 25.625;
double var_1_9 = 100000000000.5;
double var_1_10 = 999.4;
double var_1_11 = 10.5;
double var_1_12 = 15.25;
double var_1_13 = 4.75;
signed long int var_1_15 = 10000000;
signed long int var_1_16 = 1566461910;
double var_1_17 = 16.85;
double var_1_18 = 127.2;
double var_1_19 = 64.8;
double var_1_20 = 128.5;
double var_1_21 = 255.4;
signed short int var_1_22 = 2;
signed short int var_1_23 = 5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
float var_1_26 = 15.6;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
float var_1_29 = 15.75;
float var_1_30 = 1000000000000.5;
signed char var_1_31 = 1;
signed char var_1_32 = -50;
signed char var_1_33 = 10;
signed char var_1_34 = 10;
signed char var_1_35 = 5;
unsigned long int var_1_36 = 32;
double var_1_37 = 2.25;
unsigned long int var_1_38 = 3846551833;
signed char var_1_39 = -2;
signed char var_1_40 = 1;
signed char var_1_41 = -5;
signed char var_1_42 = -4;
unsigned char var_1_43 = 2;
unsigned char var_1_44 = 1;
signed long int var_1_45 = 2;
unsigned char var_1_46 = 200;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 4;
unsigned long int var_1_49 = 3241879000;
float var_1_50 = 10.25;
float var_1_51 = 32.5;
unsigned long int var_1_52 = 5;
float var_1_53 = 50.875;
float var_1_55 = 3.875;
float var_1_57 = 0.0;
unsigned char var_1_58 = 1;
unsigned short int var_1_59 = 2;
unsigned short int var_1_60 = 64137;
unsigned short int var_1_61 = 10000;
signed long int var_1_62 = -8;
unsigned char var_1_63 = 50;
signed long int last_1_var_1_15 = 10000000;
unsigned long int last_1_var_1_36 = 32;
unsigned char last_1_var_1_43 = 2;
unsigned long int last_1_var_1_48 = 4;
unsigned short int last_1_var_1_59 = 2;
signed long int last_1_var_1_62 = -8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_5 - var_1_7;
 unsigned char stepLocal_0 = var_1_6;
 if (stepLocal_0 >= last_1_var_1_36) {
  if ((last_1_var_1_36 * ((((last_1_var_1_62) > (var_1_4)) ? (last_1_var_1_62) : (var_1_4)))) <= stepLocal_1) {
   if (var_1_9 <= var_1_12) {
    var_1_15 = var_1_7;
   } else {
    var_1_15 = (((((((((last_1_var_1_62) > (var_1_6)) ? (last_1_var_1_62) : (var_1_6)))) < (((((last_1_var_1_36) < (var_1_4)) ? (last_1_var_1_36) : (var_1_4))))) ? (((((last_1_var_1_62) > (var_1_6)) ? (last_1_var_1_62) : (var_1_6)))) : (((((last_1_var_1_36) < (var_1_4)) ? (last_1_var_1_36) : (var_1_4)))))) - (var_1_16 - last_1_var_1_59));
   }
  }
 } else {
  if (var_1_9 >= var_1_11) {
   var_1_15 = ((((((((last_1_var_1_59) < (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) ? (last_1_var_1_59) : (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))))) < ((var_1_7 + last_1_var_1_36))) ? (((((last_1_var_1_59) < (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) ? (last_1_var_1_59) : (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))))) : ((var_1_7 + last_1_var_1_36))));
  } else {
   var_1_15 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
  }
 }
 if (128 < (((((var_1_6) < (last_1_var_1_43)) ? (var_1_6) : (last_1_var_1_43))) << last_1_var_1_15)) {
  var_1_17 = (4.75 + var_1_18);
 } else {
  var_1_17 = (var_1_18 + ((var_1_19 + var_1_20) - ((((var_1_21) < (128.4)) ? (var_1_21) : (128.4)))));
 }
 if (((((var_1_17) < (16.75f)) ? (var_1_17) : (16.75f))) == (- var_1_17)) {
  var_1_52 = ((var_1_16 + 1136067118u) - var_1_35);
 } else {
  var_1_52 = (var_1_38 - var_1_4);
 }
 signed long int stepLocal_6 = -5;
 if (var_1_27) {
  if (stepLocal_6 == (var_1_52 / ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) {
   var_1_58 = (var_1_25 || var_1_28);
  }
 }
 if (var_1_13 != (var_1_17 + var_1_51)) {
  var_1_59 = (var_1_60 - ((10000 + var_1_61) - var_1_40));
 }
 signed long int stepLocal_7 = var_1_61 << var_1_32;
 if (((var_1_41 | var_1_45) / ((((var_1_46) > (var_1_4)) ? (var_1_46) : (var_1_4)))) > stepLocal_7) {
  if (var_1_58) {
   var_1_62 = var_1_35;
  } else {
   var_1_62 = var_1_47;
  }
 } else {
  var_1_62 = -500;
 }
 if (var_1_18 >= (- ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) {
  var_1_29 = (var_1_18 + var_1_30);
 }
 if (50.5f <= var_1_13) {
  var_1_31 = (var_1_32 + ((((var_1_33) > ((var_1_34 - var_1_35))) ? (var_1_33) : ((var_1_34 - var_1_35)))));
 } else {
  var_1_31 = var_1_33;
 }
 signed long int stepLocal_5 = 16;
 signed long int stepLocal_4 = ((((var_1_4 * var_1_16)) < (var_1_15)) ? ((var_1_4 * var_1_16)) : (var_1_15));
 if (stepLocal_4 < var_1_59) {
  var_1_39 = (((((var_1_35 + (var_1_34 - var_1_40))) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? ((var_1_35 + (var_1_34 - var_1_40))) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))));
 } else {
  if (var_1_58) {
   var_1_39 = ((((((var_1_41 + var_1_42)) > (var_1_34)) ? ((var_1_41 + var_1_42)) : (var_1_34))) + var_1_33);
  } else {
   if (var_1_7 >= stepLocal_5) {
    var_1_39 = ((((var_1_40) < ((var_1_32 + (var_1_35 - var_1_34)))) ? (var_1_40) : ((var_1_32 + (var_1_35 - var_1_34)))));
   } else {
    var_1_39 = var_1_41;
   }
  }
 }
 var_1_43 = (((((var_1_5 - var_1_34)) < (var_1_40)) ? ((var_1_5 - var_1_34)) : (var_1_40)));
 if (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) >= (32 >> var_1_45)) {
  var_1_44 = ((var_1_46 - var_1_45) - (((((var_1_35 + var_1_34)) < ((var_1_40 + var_1_47))) ? ((var_1_35 + var_1_34)) : ((var_1_40 + var_1_47)))));
 }
 if (var_1_17 > var_1_9) {
  var_1_50 = 8.8f;
 } else {
  var_1_50 = (((((var_1_20) > (var_1_51)) ? (var_1_20) : (var_1_51))) - 100.5f);
 }
 unsigned long int stepLocal_8 = (var_1_5 / var_1_45) / ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 if ((var_1_61 + (var_1_35 - 2)) != stepLocal_8) {
  var_1_63 = var_1_5;
 }
 if ((((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20))) / ((((var_1_26) > (128.5)) ? (var_1_26) : (128.5)))) > (var_1_30 / var_1_37)) {
  var_1_36 = ((((var_1_52) < ((var_1_38 - ((((var_1_34) < (var_1_6)) ? (var_1_34) : (var_1_6)))))) ? (var_1_52) : ((var_1_38 - ((((var_1_34) < (var_1_6)) ? (var_1_34) : (var_1_6)))))));
 } else {
  if ((var_1_35 % 25) < -128) {
   var_1_36 = var_1_35;
  } else {
   var_1_36 = (var_1_38 - (var_1_15 + var_1_34));
  }
 }
 if (var_1_38 < var_1_44) {
  if (((var_1_59 * var_1_35) >= (last_1_var_1_48 / var_1_5)) && var_1_28) {
   if (! (16 >= (var_1_36 * var_1_52))) {
    var_1_48 = var_1_44;
   } else {
    var_1_48 = ((var_1_49 - var_1_44) - var_1_52);
   }
  }
 } else {
  var_1_48 = (var_1_34 + var_1_46);
 }
 if (var_1_50 >= var_1_30) {
  if ((var_1_20 * var_1_17) <= ((((var_1_19) < (var_1_26)) ? (var_1_19) : (var_1_26)))) {
   var_1_53 = ((((var_1_30 + var_1_55) < 0 ) ? -(var_1_30 + var_1_55) : (var_1_30 + var_1_55)));
  }
 } else {
  if (var_1_49 < var_1_52) {
   var_1_53 = (var_1_21 + var_1_20);
  } else {
   if (var_1_16 < var_1_35) {
    var_1_53 = (var_1_55 + var_1_20);
   } else {
    if (var_1_27) {
     if ((- var_1_63) <= (var_1_16 - var_1_6)) {
      var_1_53 = (((((var_1_51 - var_1_21)) > (var_1_55)) ? ((var_1_51 - var_1_21)) : (var_1_55)));
     } else {
      var_1_53 = (((((var_1_30) < (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19))))) ? (var_1_30) : (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)))))) + 63.8f);
     }
    } else {
     var_1_53 = ((var_1_57 - var_1_19) - ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) > (var_1_20)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_20))));
    }
   }
  }
 }
 signed long int stepLocal_2 = - var_1_6;
 if (stepLocal_2 <= var_1_62) {
  var_1_23 = var_1_6;
 } else {
  var_1_23 = (((((var_1_48 + 2) < 0 ) ? -(var_1_48 + 2) : (var_1_48 + 2))) + var_1_7);
 }
 unsigned char stepLocal_3 = var_1_7;
 if ((var_1_48 / var_1_4) < stepLocal_3) {
  var_1_24 = (var_1_58 && var_1_25);
 } else {
  if (var_1_58) {
   if (((var_1_18 + var_1_17) / ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) >= var_1_17) {
    if (var_1_25) {
     var_1_24 = var_1_27;
    } else {
     var_1_24 = var_1_28;
    }
   } else {
    var_1_24 = var_1_28;
   }
  } else {
   var_1_24 = var_1_28;
  }
 }
 if (var_1_36 < var_1_48) {
  var_1_1 = ((((((var_1_4 + 64)) < (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_4 + 64)) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) - var_1_7);
 } else {
  if ((var_1_8 * (- var_1_9)) > ((((var_1_10) < ((var_1_11 + var_1_12))) ? (var_1_10) : ((var_1_11 + var_1_12))))) {
   if (((256.75 - var_1_13) * var_1_9) <= var_1_10) {
    if (var_1_24) {
     var_1_1 = var_1_5;
    } else {
     var_1_1 = var_1_6;
    }
   } else {
    var_1_1 = var_1_5;
   }
  } else {
   var_1_1 = 5;
  }
 }
 if (var_1_24) {
  var_1_22 = ((((var_1_7) > (((((((((-10) < 0 ) ? -(-10) : (-10)))) < (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63))))) ? (((((-10) < 0 ) ? -(-10) : (-10)))) : (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63)))))))) ? (var_1_7) : (((((((((-10) < 0 ) ? -(-10) : (-10)))) < (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63))))) ? (((((-10) < 0 ) ? -(-10) : (-10)))) : (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63)))))))));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 127);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 1073741823);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -63);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -31);
 assume_abort_if_not(var_1_41 <= 32);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -31);
 assume_abort_if_not(var_1_42 <= 31);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 30);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 190);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 3221225470);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -461168.6018427383000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 4611686.018427383000e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 32767);
 assume_abort_if_not(var_1_60 <= 65534);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 8192);
 assume_abort_if_not(var_1_61 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_62 = var_1_62;
}
int property(void) {
 return ((((((((((((((((((((var_1_36 < var_1_48) ? (var_1_1 == ((unsigned char) ((((((var_1_4 + 64)) < (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_4 + 64)) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) - var_1_7))) : (((var_1_8 * (- var_1_9)) > ((((var_1_10) < ((var_1_11 + var_1_12))) ? (var_1_10) : ((var_1_11 + var_1_12))))) ? ((((256.75 - var_1_13) * var_1_9) <= var_1_10) ? (var_1_24 ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_6))) : (var_1_1 == ((unsigned char) var_1_5))) : (var_1_1 == ((unsigned char) 5)))) && ((var_1_6 >= last_1_var_1_36) ? (((last_1_var_1_36 * ((((last_1_var_1_62) > (var_1_4)) ? (last_1_var_1_62) : (var_1_4)))) <= (var_1_5 - var_1_7)) ? ((var_1_9 <= var_1_12) ? (var_1_15 == ((signed long int) var_1_7)) : (var_1_15 == ((signed long int) (((((((((last_1_var_1_62) > (var_1_6)) ? (last_1_var_1_62) : (var_1_6)))) < (((((last_1_var_1_36) < (var_1_4)) ? (last_1_var_1_36) : (var_1_4))))) ? (((((last_1_var_1_62) > (var_1_6)) ? (last_1_var_1_62) : (var_1_6)))) : (((((last_1_var_1_36) < (var_1_4)) ? (last_1_var_1_36) : (var_1_4)))))) - (var_1_16 - last_1_var_1_59))))) : 1) : ((var_1_9 >= var_1_11) ? (var_1_15 == ((signed long int) ((((((((last_1_var_1_59) < (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) ? (last_1_var_1_59) : (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))))) < ((var_1_7 + last_1_var_1_36))) ? (((((last_1_var_1_59) < (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) ? (last_1_var_1_59) : (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))))) : ((var_1_7 + last_1_var_1_36)))))) : (var_1_15 == ((signed long int) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))) && ((128 < (((((var_1_6) < (last_1_var_1_43)) ? (var_1_6) : (last_1_var_1_43))) << last_1_var_1_15)) ? (var_1_17 == ((double) (4.75 + var_1_18))) : (var_1_17 == ((double) (var_1_18 + ((var_1_19 + var_1_20) - ((((var_1_21) < (128.4)) ? (var_1_21) : (128.4))))))))) && (var_1_24 ? (var_1_22 == ((signed short int) ((((var_1_7) > (((((((((-10) < 0 ) ? -(-10) : (-10)))) < (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63))))) ? (((((-10) < 0 ) ? -(-10) : (-10)))) : (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63)))))))) ? (var_1_7) : (((((((((-10) < 0 ) ? -(-10) : (-10)))) < (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63))))) ? (((((-10) < 0 ) ? -(-10) : (-10)))) : (((((var_1_5) < (var_1_63)) ? (var_1_5) : (var_1_63))))))))))) : 1)) && (((- var_1_6) <= var_1_62) ? (var_1_23 == ((signed short int) var_1_6)) : (var_1_23 == ((signed short int) (((((var_1_48 + 2) < 0 ) ? -(var_1_48 + 2) : (var_1_48 + 2))) + var_1_7))))) && (((var_1_48 / var_1_4) < var_1_7) ? (var_1_24 == ((unsigned char) (var_1_58 && var_1_25))) : (var_1_58 ? ((((var_1_18 + var_1_17) / ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) >= var_1_17) ? (var_1_25 ? (var_1_24 == ((unsigned char) var_1_27)) : (var_1_24 == ((unsigned char) var_1_28))) : (var_1_24 == ((unsigned char) var_1_28))) : (var_1_24 == ((unsigned char) var_1_28))))) && ((var_1_18 >= (- ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (var_1_29 == ((float) (var_1_18 + var_1_30))) : 1)) && ((50.5f <= var_1_13) ? (var_1_31 == ((signed char) (var_1_32 + ((((var_1_33) > ((var_1_34 - var_1_35))) ? (var_1_33) : ((var_1_34 - var_1_35))))))) : (var_1_31 == ((signed char) var_1_33)))) && (((((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20))) / ((((var_1_26) > (128.5)) ? (var_1_26) : (128.5)))) > (var_1_30 / var_1_37)) ? (var_1_36 == ((unsigned long int) ((((var_1_52) < ((var_1_38 - ((((var_1_34) < (var_1_6)) ? (var_1_34) : (var_1_6)))))) ? (var_1_52) : ((var_1_38 - ((((var_1_34) < (var_1_6)) ? (var_1_34) : (var_1_6))))))))) : (((var_1_35 % 25) < -128) ? (var_1_36 == ((unsigned long int) var_1_35)) : (var_1_36 == ((unsigned long int) (var_1_38 - (var_1_15 + var_1_34))))))) && (((((((var_1_4 * var_1_16)) < (var_1_15)) ? ((var_1_4 * var_1_16)) : (var_1_15))) < var_1_59) ? (var_1_39 == ((signed char) (((((var_1_35 + (var_1_34 - var_1_40))) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? ((var_1_35 + (var_1_34 - var_1_40))) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))))) : (var_1_58 ? (var_1_39 == ((signed char) ((((((var_1_41 + var_1_42)) > (var_1_34)) ? ((var_1_41 + var_1_42)) : (var_1_34))) + var_1_33))) : ((var_1_7 >= 16) ? (var_1_39 == ((signed char) ((((var_1_40) < ((var_1_32 + (var_1_35 - var_1_34)))) ? (var_1_40) : ((var_1_32 + (var_1_35 - var_1_34))))))) : (var_1_39 == ((signed char) var_1_41)))))) && (var_1_43 == ((unsigned char) (((((var_1_5 - var_1_34)) < (var_1_40)) ? ((var_1_5 - var_1_34)) : (var_1_40)))))) && ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) >= (32 >> var_1_45)) ? (var_1_44 == ((unsigned char) ((var_1_46 - var_1_45) - (((((var_1_35 + var_1_34)) < ((var_1_40 + var_1_47))) ? ((var_1_35 + var_1_34)) : ((var_1_40 + var_1_47))))))) : 1)) && ((var_1_38 < var_1_44) ? ((((var_1_59 * var_1_35) >= (last_1_var_1_48 / var_1_5)) && var_1_28) ? ((! (16 >= (var_1_36 * var_1_52))) ? (var_1_48 == ((unsigned long int) var_1_44)) : (var_1_48 == ((unsigned long int) ((var_1_49 - var_1_44) - var_1_52)))) : 1) : (var_1_48 == ((unsigned long int) (var_1_34 + var_1_46))))) && ((var_1_17 > var_1_9) ? (var_1_50 == ((float) 8.8f)) : (var_1_50 == ((float) (((((var_1_20) > (var_1_51)) ? (var_1_20) : (var_1_51))) - 100.5f))))) && ((((((var_1_17) < (16.75f)) ? (var_1_17) : (16.75f))) == (- var_1_17)) ? (var_1_52 == ((unsigned long int) ((var_1_16 + 1136067118u) - var_1_35))) : (var_1_52 == ((unsigned long int) (var_1_38 - var_1_4))))) && ((var_1_50 >= var_1_30) ? (((var_1_20 * var_1_17) <= ((((var_1_19) < (var_1_26)) ? (var_1_19) : (var_1_26)))) ? (var_1_53 == ((float) ((((var_1_30 + var_1_55) < 0 ) ? -(var_1_30 + var_1_55) : (var_1_30 + var_1_55))))) : 1) : ((var_1_49 < var_1_52) ? (var_1_53 == ((float) (var_1_21 + var_1_20))) : ((var_1_16 < var_1_35) ? (var_1_53 == ((float) (var_1_55 + var_1_20))) : (var_1_27 ? (((- var_1_63) <= (var_1_16 - var_1_6)) ? (var_1_53 == ((float) (((((var_1_51 - var_1_21)) > (var_1_55)) ? ((var_1_51 - var_1_21)) : (var_1_55))))) : (var_1_53 == ((float) (((((var_1_30) < (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19))))) ? (var_1_30) : (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)))))) + 63.8f)))) : (var_1_53 == ((float) ((var_1_57 - var_1_19) - ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) > (var_1_20)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_20))))))))))) && (var_1_27 ? ((-5 == (var_1_52 / ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) ? (var_1_58 == ((unsigned char) (var_1_25 || var_1_28))) : 1) : 1)) && ((var_1_13 != (var_1_17 + var_1_51)) ? (var_1_59 == ((unsigned short int) (var_1_60 - ((10000 + var_1_61) - var_1_40)))) : 1)) && ((((var_1_41 | var_1_45) / ((((var_1_46) > (var_1_4)) ? (var_1_46) : (var_1_4)))) > (var_1_61 << var_1_32)) ? (var_1_58 ? (var_1_62 == ((signed long int) var_1_35)) : (var_1_62 == ((signed long int) var_1_47))) : (var_1_62 == ((signed long int) -500)))) && (((var_1_61 + (var_1_35 - 2)) != ((var_1_5 / var_1_45) / ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) ? (var_1_63 == ((unsigned char) var_1_5)) : 1)
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
