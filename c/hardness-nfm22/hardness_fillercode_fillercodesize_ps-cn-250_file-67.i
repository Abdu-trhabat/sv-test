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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 9.75;
unsigned char var_1_3 = 1;
signed long int var_1_4 = 25;
unsigned char var_1_6 = 1;
float var_1_7 = 7.5;
signed long int var_1_8 = -1000;
float var_1_9 = 9.25;
float var_1_10 = 64.5;
float var_1_11 = 16.25;
signed char var_1_12 = 2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
float var_1_15 = 0.6;
signed char var_1_16 = 32;
unsigned short int var_1_17 = 2;
unsigned short int var_1_19 = 63241;
unsigned short int var_1_20 = 58697;
unsigned short int var_1_21 = 25516;
unsigned long int var_1_22 = 3301682525;
double var_1_23 = 128.9;
signed short int var_1_24 = -32;
signed short int var_1_25 = 2;
signed short int var_1_26 = -256;
double var_1_27 = 7.75;
double var_1_28 = 200.6;
unsigned long int var_1_29 = 100000;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 4154314939;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 64;
double var_1_39 = 25.2;
signed long int var_1_40 = -256;
unsigned short int var_1_41 = 4;
signed char var_1_42 = -100;
signed char var_1_43 = 10;
signed char var_1_44 = 100;
signed char var_1_45 = -16;
signed long int var_1_46 = -10;
unsigned char var_1_47 = 50;
signed long int var_1_48 = -2;
float var_1_49 = -0.5;
float var_1_50 = 8.6;
float var_1_51 = 10.5;
unsigned char var_1_52 = 64;
float var_1_53 = 4.25;
signed short int var_1_54 = 256;
signed short int var_1_55 = -64;
unsigned char var_1_56 = 64;
unsigned char var_1_57 = 2;
signed short int var_1_58 = -32;
signed char var_1_59 = -64;
unsigned long int var_1_60 = 128;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
signed long int var_1_63 = -16;
signed long int var_1_64 = -5;
signed long int var_1_65 = 1000000;
unsigned char var_1_66 = 1;
signed long int var_1_67 = -10;
float var_1_68 = 10000.25;
unsigned long int var_1_69 = 1000;
float var_1_70 = 256.2;
double var_1_71 = 0.75;
double var_1_72 = 0.0;
double var_1_73 = 64.25;
unsigned char var_1_74 = 0;
double last_1_var_1_1 = 9.75;
unsigned char last_1_var_1_3 = 1;
float last_1_var_1_7 = 7.5;
signed char last_1_var_1_12 = 2;
float last_1_var_1_15 = 0.6;
unsigned short int last_1_var_1_17 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_24 < (var_1_25 + var_1_26)) {
  if (5 <= var_1_25) {
   var_1_23 = 4.7;
  }
 } else {
  var_1_23 = ((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)));
 }
 if (var_1_30) {
  if (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) > ((-10 + var_1_26) & var_1_24)) {
   var_1_29 = (((((var_1_31 - 64u) < 0 ) ? -(var_1_31 - 64u) : (var_1_31 - 64u))) - var_1_32);
  } else {
   var_1_29 = var_1_32;
  }
 }
 if (var_1_26 > var_1_24) {
  if (var_1_29 < ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) {
   var_1_33 = (var_1_34 || (var_1_30 && (! var_1_35)));
  } else {
   var_1_33 = var_1_35;
  }
 } else {
  if (var_1_28 != var_1_27) {
   var_1_33 = var_1_34;
  }
 }
 if (var_1_27 > ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
  if (var_1_35) {
   var_1_36 = ((((((64) < 0 ) ? -(64) : (64))) - var_1_37) + var_1_38);
  } else {
   var_1_36 = (((((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))) < 0 ) ? -((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))) : ((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37)))));
  }
 }
 if (var_1_35 || var_1_34) {
  var_1_39 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
 } else {
  var_1_39 = var_1_27;
 }
 if (var_1_38 <= var_1_37) {
  var_1_40 = (var_1_37 - 50);
 } else {
  var_1_40 = ((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - ((((var_1_36) > (5)) ? (var_1_36) : (5)))) + ((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))));
 }
 if (var_1_34) {
  var_1_41 = var_1_38;
 } else {
  var_1_41 = 10;
 }
 if (var_1_33) {
  var_1_42 = var_1_37;
 }
 if ((4u + 1u) <= var_1_32) {
  var_1_43 = ((((((((var_1_37 - var_1_44)) > (var_1_45)) ? ((var_1_37 - var_1_44)) : (var_1_45))) < 0 ) ? -(((((var_1_37 - var_1_44)) > (var_1_45)) ? ((var_1_37 - var_1_44)) : (var_1_45))) : (((((var_1_37 - var_1_44)) > (var_1_45)) ? ((var_1_37 - var_1_44)) : (var_1_45)))));
 }
 if (-64 != ((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25)))) {
  var_1_46 = var_1_31;
 } else {
  var_1_46 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
 }
 if (((((32) < 0 ) ? -(32) : (32))) < var_1_45) {
  if (var_1_28 < var_1_39) {
   var_1_47 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
  }
 }
 if (var_1_29 == ((((var_1_40) > (var_1_47)) ? (var_1_40) : (var_1_47)))) {
  if (var_1_45 > var_1_41) {
   var_1_48 = ((((var_1_31) < (((((var_1_47) > (var_1_41)) ? (var_1_47) : (var_1_41))))) ? (var_1_31) : (((((var_1_47) > (var_1_41)) ? (var_1_47) : (var_1_41))))));
  } else {
   var_1_48 = var_1_24;
  }
 } else {
  if (var_1_44 >= (((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < 0 ) ? -((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) : ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) {
   var_1_48 = (var_1_45 + var_1_47);
  } else {
   var_1_48 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
  }
 }
 if (var_1_33) {
  if (var_1_46 >= var_1_25) {
   if (10u > var_1_32) {
    var_1_49 = ((((var_1_28) < ((((((var_1_50 - var_1_51)) > (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? ((var_1_50 - var_1_51)) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))) ? (var_1_28) : ((((((var_1_50 - var_1_51)) > (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? ((var_1_50 - var_1_51)) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))));
   }
  } else {
   if (var_1_34) {
    var_1_49 = (var_1_50 - var_1_51);
   } else {
    var_1_49 = ((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))));
   }
  }
 } else {
  if (var_1_24 > var_1_36) {
   var_1_49 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
  } else {
   var_1_49 = var_1_50;
  }
 }
 if (var_1_51 != (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) + var_1_53)) {
  if (! var_1_30) {
   if ((var_1_25 / 50) <= var_1_26) {
    var_1_52 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
   }
  }
 } else {
  if (var_1_35) {
   if (var_1_54 <= (var_1_31 % ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) {
    var_1_52 = (var_1_38 + ((((var_1_37) > (var_1_44)) ? (var_1_37) : (var_1_44))));
   } else {
    var_1_52 = ((64 - ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) + (var_1_56 - var_1_57));
   }
  }
 }
 if (var_1_31 < (var_1_52 + var_1_36)) {
  if (var_1_52 > ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) {
   var_1_58 = (var_1_37 + ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))));
  }
 }
 if (var_1_33) {
  if (var_1_38 < var_1_36) {
   var_1_59 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
  } else {
   if ((((((16.25f) < (var_1_49)) ? (16.25f) : (var_1_49))) / 99.25f) > var_1_39) {
    if (var_1_23 >= 0.75) {
     var_1_59 = ((((((((10) < (var_1_57)) ? (10) : (var_1_57)))) > (var_1_44)) ? (((((10) < (var_1_57)) ? (10) : (var_1_57)))) : (var_1_44)));
    }
   }
  }
 } else {
  if (((var_1_60 + var_1_52) * 5u) <= var_1_48) {
   var_1_59 = ((((var_1_44) > (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))))) ? (var_1_44) : (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))))));
  }
 }
 if (var_1_55 > var_1_29) {
  if (var_1_60 != (50u << var_1_46)) {
   if ((- (var_1_49 + var_1_39)) >= (var_1_51 - var_1_50)) {
    if (64 <= (((((((var_1_36) < (var_1_43)) ? (var_1_36) : (var_1_43))) < 0 ) ? -((((var_1_36) < (var_1_43)) ? (var_1_36) : (var_1_43))) : ((((var_1_36) < (var_1_43)) ? (var_1_36) : (var_1_43)))))) {
     var_1_61 = (var_1_34 || var_1_35);
    }
   }
  }
 }
 if (! (var_1_54 > var_1_57)) {
  var_1_62 = ((! var_1_34) && var_1_35);
 }
 if (var_1_53 <= (- 3.7f)) {
  var_1_63 = var_1_38;
 } else {
  if ((var_1_48 / var_1_56) >= var_1_52) {
   var_1_63 = ((((var_1_36 - ((((var_1_52) > (var_1_47)) ? (var_1_52) : (var_1_47)))) < 0 ) ? -(var_1_36 - ((((var_1_52) > (var_1_47)) ? (var_1_52) : (var_1_47)))) : (var_1_36 - ((((var_1_52) > (var_1_47)) ? (var_1_52) : (var_1_47))))));
  } else {
   var_1_63 = ((((var_1_37) > (var_1_47)) ? (var_1_37) : (var_1_47)));
  }
 }
 if (var_1_26 > var_1_54) {
  if (var_1_61) {
   var_1_64 = ((((var_1_42) < (var_1_65)) ? (var_1_42) : (var_1_65)));
  } else {
   if (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) >= ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
    var_1_64 = ((((((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) > ((var_1_56 - var_1_47))) ? (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) : ((var_1_56 - var_1_47))));
   }
  }
 }
 if (var_1_45 < (var_1_48 | var_1_38)) {
  if (var_1_54 < var_1_37) {
   var_1_66 = var_1_35;
  }
 }
 var_1_67 = var_1_55;
 if (var_1_33) {
  var_1_68 = var_1_50;
 } else {
  var_1_68 = var_1_50;
 }
 var_1_69 = var_1_56;
 if (var_1_34) {
  var_1_70 = var_1_27;
 }
 if (((var_1_67 * var_1_69) | 128u) >= var_1_64) {
  var_1_71 = ((var_1_72 - var_1_73) - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))));
 } else {
  var_1_71 = ((((var_1_50) > (var_1_72)) ? (var_1_50) : (var_1_72)));
 }
 if (4.75f > (var_1_72 * var_1_71)) {
  if (var_1_61) {
   var_1_74 = var_1_34;
  }
 }
 signed long int stepLocal_2 = ((((var_1_13) > (last_1_var_1_17)) ? (var_1_13) : (last_1_var_1_17))) | last_1_var_1_12;
 if (last_1_var_1_7 > (var_1_11 + last_1_var_1_15)) {
  if (var_1_14 < stepLocal_2) {
   if (last_1_var_1_3) {
    var_1_16 = -2;
   }
  } else {
   var_1_16 = var_1_13;
  }
 }
 unsigned long int stepLocal_3 = var_1_22 - var_1_20;
 if (last_1_var_1_3) {
  if (var_1_6) {
   if (last_1_var_1_3) {
    var_1_17 = var_1_14;
   } else {
    var_1_17 = (((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - ((var_1_21 - 256) - 256));
   }
  } else {
   if (stepLocal_3 > (var_1_4 / var_1_8)) {
    if (last_1_var_1_1 >= var_1_10) {
     var_1_17 = var_1_14;
    }
   }
  }
 } else {
  var_1_17 = var_1_21;
 }
 var_1_3 = (((5 - last_1_var_1_17) <= (last_1_var_1_17 + last_1_var_1_17)) || var_1_6);
 if (50 != var_1_16) {
  var_1_1 = (1.00000000000025E12 - 24.25);
 }
 var_1_12 = (var_1_13 - var_1_14);
 var_1_15 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 unsigned char stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = (var_1_16 + 100) / var_1_8;
 if (stepLocal_0 >= var_1_17) {
  if (stepLocal_1 || (var_1_17 > (var_1_17 * var_1_8))) {
   var_1_7 = var_1_9;
  } else {
   var_1_7 = (var_1_10 + var_1_11);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 24575);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32768);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32768);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32768);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 3221225470);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 126);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -126);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -922337.2036854776000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_54 >= -32768);
 assume_abort_if_not(var_1_54 <= 32767);
 var_1_55 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_55 >= -32767);
 assume_abort_if_not(var_1_55 <= 32767);
 assume_abort_if_not(var_1_55 != 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 63);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 4294967295);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= -2147483647);
 assume_abort_if_not(var_1_65 <= 2147483646);
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= 4611686.018427382800e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_3 = var_1_3;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return (((((((50 != var_1_16) ? (var_1_1 == ((double) (1.00000000000025E12 - 24.25))) : 1) && (var_1_3 == ((unsigned char) (((5 - last_1_var_1_17) <= (last_1_var_1_17 + last_1_var_1_17)) || var_1_6)))) && ((((var_1_16 + 100) / var_1_8) >= var_1_17) ? ((var_1_3 || (var_1_17 > (var_1_17 * var_1_8))) ? (var_1_7 == ((float) var_1_9)) : (var_1_7 == ((float) (var_1_10 + var_1_11)))) : 1)) && (var_1_12 == ((signed char) (var_1_13 - var_1_14)))) && (var_1_15 == ((float) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) && ((last_1_var_1_7 > (var_1_11 + last_1_var_1_15)) ? ((var_1_14 < (((((var_1_13) > (last_1_var_1_17)) ? (var_1_13) : (last_1_var_1_17))) | last_1_var_1_12)) ? (last_1_var_1_3 ? (var_1_16 == ((signed char) -2)) : 1) : (var_1_16 == ((signed char) var_1_13))) : 1)) && (last_1_var_1_3 ? (var_1_6 ? (last_1_var_1_3 ? (var_1_17 == ((unsigned short int) var_1_14)) : (var_1_17 == ((unsigned short int) (((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - ((var_1_21 - 256) - 256))))) : (((var_1_22 - var_1_20) > (var_1_4 / var_1_8)) ? ((last_1_var_1_1 >= var_1_10) ? (var_1_17 == ((unsigned short int) var_1_14)) : 1) : 1)) : (var_1_17 == ((unsigned short int) var_1_21)))
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
