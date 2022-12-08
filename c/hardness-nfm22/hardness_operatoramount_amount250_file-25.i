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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -64;
signed short int var_1_8 = 4;
unsigned long int var_1_12 = 64;
unsigned long int var_1_13 = 3841337885;
unsigned long int var_1_14 = 2103644672;
unsigned char var_1_15 = 32;
double var_1_17 = 7.5;
unsigned long int var_1_21 = 10;
unsigned char var_1_22 = 200;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 50;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 50;
signed short int var_1_27 = 16;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 10;
unsigned short int var_1_31 = 2;
unsigned short int var_1_32 = 38207;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
signed short int var_1_35 = -10;
unsigned long int var_1_37 = 4;
unsigned long int var_1_39 = 3877443077;
unsigned long int var_1_40 = 1172021345;
float var_1_41 = 5.5;
float var_1_42 = 127.5;
float var_1_43 = 49.75;
float var_1_44 = 5.8;
float var_1_45 = 7.8;
double var_1_46 = 7.5;
double var_1_47 = 999999999999.5;
double var_1_48 = 50.5;
double var_1_49 = 999999999.25;
double var_1_50 = 1.2;
float var_1_51 = 3.25;
signed short int var_1_52 = 256;
float var_1_54 = 256.2;
float var_1_55 = 4.025;
signed short int var_1_56 = -10000;
signed char var_1_57 = 5;
signed char var_1_58 = 0;
signed char var_1_59 = 10;
signed char var_1_60 = 32;
signed char var_1_61 = 2;
signed char var_1_62 = 10;
float var_1_63 = 5.875;
float var_1_64 = 10.8;
float var_1_65 = 7.4;
float var_1_66 = 99.4;
float var_1_67 = 0.0;
float var_1_68 = 256.85;
float var_1_69 = 49.75;
float var_1_70 = 63.75;
signed char var_1_71 = -8;
signed long int var_1_72 = -16;
unsigned long int var_1_74 = 4;
float var_1_75 = 9.5;
float var_1_76 = 4.75;
signed long int last_1_var_1_1 = -64;
unsigned char last_1_var_1_15 = 32;
signed short int last_1_var_1_27 = 16;
unsigned char last_1_var_1_29 = 4;
unsigned short int last_1_var_1_31 = 2;
unsigned char last_1_var_1_33 = 1;
signed short int last_1_var_1_35 = -10;
unsigned long int last_1_var_1_37 = 4;
double last_1_var_1_46 = 7.5;
float last_1_var_1_51 = 3.25;
signed short int last_1_var_1_52 = 256;
float last_1_var_1_54 = 256.2;
signed char last_1_var_1_57 = 5;
signed char last_1_var_1_71 = -8;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_33) {
  if (last_1_var_1_29 != (last_1_var_1_37 - var_1_24)) {
   var_1_27 = (((((last_1_var_1_37) < 0 ) ? -(last_1_var_1_37) : (last_1_var_1_37))) + (var_1_26 + last_1_var_1_57));
  } else {
   if (last_1_var_1_33) {
    var_1_27 = (last_1_var_1_57 - ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))));
   }
  }
 }
 if ((16 / var_1_21) <= last_1_var_1_71) {
  var_1_31 = (((((var_1_32 - last_1_var_1_52)) > (last_1_var_1_35)) ? ((var_1_32 - last_1_var_1_52)) : (last_1_var_1_35)));
 } else {
  if ((last_1_var_1_29 / var_1_13) <= var_1_23) {
   var_1_31 = (var_1_32 - var_1_23);
  }
 }
 if (! last_1_var_1_33) {
  var_1_12 = (var_1_13 - last_1_var_1_15);
 } else {
  var_1_12 = ((var_1_14 - last_1_var_1_27) + last_1_var_1_15);
 }
 var_1_56 = var_1_12;
 var_1_74 = var_1_12;
 if ((last_1_var_1_46 / var_1_17) < (last_1_var_1_46 + (last_1_var_1_54 * last_1_var_1_51))) {
  if ((last_1_var_1_1 / var_1_14) <= (last_1_var_1_31 / ((((var_1_13) < (var_1_21)) ? (var_1_13) : (var_1_21))))) {
   var_1_15 = ((((((var_1_22 - var_1_23) - var_1_24)) > ((var_1_25 - var_1_26))) ? (((var_1_22 - var_1_23) - var_1_24)) : ((var_1_25 - var_1_26))));
  } else {
   var_1_15 = var_1_24;
  }
 } else {
  var_1_15 = var_1_23;
 }
 if (64u >= ((var_1_13 - var_1_74) + var_1_12)) {
  var_1_46 = ((((((((128.75) > ((var_1_47 - var_1_48))) ? (128.75) : ((var_1_47 - var_1_48))))) > ((var_1_49 - var_1_50))) ? (((((128.75) > ((var_1_47 - var_1_48))) ? (128.75) : ((var_1_47 - var_1_48))))) : ((var_1_49 - var_1_50))));
 }
 signed long int stepLocal_5 = ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) - var_1_26;
 if (stepLocal_5 <= last_1_var_1_15) {
  var_1_29 = (((((var_1_25) < (var_1_22)) ? (var_1_25) : (var_1_22))) - var_1_24);
 } else {
  if (last_1_var_1_33) {
   var_1_29 = ((((((((var_1_25) < (var_1_30)) ? (var_1_25) : (var_1_30)))) > ((var_1_23 + var_1_24))) ? (((((var_1_25) < (var_1_30)) ? (var_1_25) : (var_1_30)))) : ((var_1_23 + var_1_24))));
  }
 }
 var_1_33 = (! var_1_34);
 if (! var_1_33) {
  var_1_51 = (var_1_49 - var_1_47);
 } else {
  var_1_51 = ((((var_1_42) > (((((255.5f) < 0 ) ? -(255.5f) : (255.5f))))) ? (var_1_42) : (((((255.5f) < 0 ) ? -(255.5f) : (255.5f))))));
 }
 if (var_1_33) {
  var_1_54 = ((((((1.6f + var_1_55)) > (var_1_42)) ? ((1.6f + var_1_55)) : (var_1_42))) + var_1_43);
 }
 var_1_71 = var_1_61;
 var_1_75 = 49.375f;
 var_1_76 = 4.4f;
 if ((var_1_12 < (var_1_31 | var_1_14)) || var_1_33) {
  var_1_57 = (((((var_1_23 - var_1_58)) > (var_1_22)) ? ((var_1_23 - var_1_58)) : (var_1_22)));
 } else {
  if (var_1_34 && var_1_33) {
   if (var_1_33) {
    if (var_1_15 <= ((~ var_1_40) / var_1_22)) {
     var_1_57 = (var_1_23 + (var_1_59 - (var_1_60 - var_1_61)));
    }
   } else {
    if (((var_1_58 + var_1_29) / var_1_60) == 5) {
     if (var_1_33 || var_1_33) {
      var_1_57 = ((((((var_1_23 - var_1_62)) < (var_1_61)) ? ((var_1_23 - var_1_62)) : (var_1_61))) + (var_1_59 - var_1_60));
     } else {
      var_1_57 = 64;
     }
    }
   }
  }
 }
 if ((((((var_1_31 * var_1_24)) > (var_1_29)) ? ((var_1_31 * var_1_24)) : (var_1_29))) > var_1_56) {
  if (var_1_15 < (-2 * var_1_56)) {
   var_1_64 = ((((var_1_49) < (var_1_45)) ? (var_1_49) : (var_1_45)));
  } else {
   var_1_64 = ((((((var_1_55) > (var_1_65)) ? (var_1_55) : (var_1_65))) + var_1_66) + ((var_1_67 - var_1_68) - var_1_69));
  }
 } else {
  var_1_64 = ((var_1_68 + var_1_69) - (((((var_1_67 + var_1_70)) > (var_1_50)) ? ((var_1_67 + var_1_70)) : (var_1_50))));
 }
 if (var_1_33 || var_1_34) {
  var_1_35 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 } else {
  var_1_35 = (((((4) > (25)) ? (4) : (25))) - ((((var_1_26) > (var_1_15)) ? (var_1_26) : (var_1_15))));
 }
 unsigned short int stepLocal_4 = var_1_31;
 unsigned char stepLocal_3 = var_1_29;
 unsigned char stepLocal_2 = (var_1_35 + 10) <= var_1_35;
 if (var_1_29 > stepLocal_4) {
  if (stepLocal_2 && var_1_33) {
   var_1_8 = ((((var_1_35) < (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_35) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))));
  }
 } else {
  if (var_1_33) {
   var_1_8 = ((var_1_27 + var_1_35) - (var_1_29 + ((((var_1_15) < (2)) ? (var_1_15) : (2)))));
  } else {
   if (stepLocal_3 >= var_1_29) {
    var_1_8 = var_1_29;
   }
  }
 }
 unsigned char stepLocal_11 = var_1_29;
 if (stepLocal_11 <= (var_1_39 * ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) {
  var_1_72 = (((((var_1_32 - var_1_29)) > (var_1_71)) ? ((var_1_32 - var_1_29)) : (var_1_71)));
 }
 if ((var_1_32 - var_1_24) > var_1_22) {
  if ((var_1_50 - var_1_47) >= var_1_17) {
   if ((var_1_56 < (var_1_15 / var_1_25)) && var_1_33) {
    var_1_52 = ((((((((var_1_29) > (var_1_74)) ? (var_1_29) : (var_1_74)))) > (var_1_57)) ? (((((var_1_29) > (var_1_74)) ? (var_1_29) : (var_1_74)))) : (var_1_57)));
   }
  } else {
   var_1_52 = (var_1_24 - (var_1_22 + var_1_30));
  }
 } else {
  if (var_1_33) {
   var_1_52 = (var_1_15 + 64);
  }
 }
 signed long int stepLocal_1 = -128 / -2;
 signed long int stepLocal_0 = 256;
 if (! (var_1_35 >= last_1_var_1_1)) {
  if (stepLocal_0 != var_1_35) {
   var_1_1 = (last_1_var_1_1 + var_1_35);
  }
 } else {
  if (stepLocal_1 >= (last_1_var_1_1 + var_1_35)) {
   var_1_1 = (var_1_35 - last_1_var_1_1);
  } else {
   var_1_1 = ((((((last_1_var_1_1 + var_1_35)) > ((var_1_31 - var_1_15))) ? ((last_1_var_1_1 + var_1_35)) : ((var_1_31 - var_1_15)))) + ((((var_1_29) < (var_1_35)) ? (var_1_29) : (var_1_35))));
  }
 }
 if (var_1_64 >= var_1_44) {
  var_1_63 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
 } else {
  var_1_63 = var_1_47;
 }
 signed short int stepLocal_10 = var_1_52;
 if (var_1_15 == stepLocal_10) {
  if (var_1_33) {
   var_1_41 = (var_1_42 + ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44))));
  }
 } else {
  var_1_41 = (((((var_1_45 + var_1_43)) > ((var_1_42 + var_1_44))) ? ((var_1_45 + var_1_43)) : ((var_1_42 + var_1_44))));
 }
 unsigned char stepLocal_9 = var_1_30;
 unsigned char stepLocal_8 = var_1_76 == var_1_63;
 signed short int stepLocal_7 = var_1_27;
 unsigned char stepLocal_6 = var_1_29;
 if ((var_1_29 < var_1_25) && stepLocal_8) {
  if ((- (var_1_25 - var_1_26)) < stepLocal_9) {
   var_1_37 = var_1_13;
  } else {
   if (stepLocal_6 > var_1_26) {
    var_1_37 = ((var_1_39 - var_1_26) - (((((var_1_14 - var_1_25)) > (var_1_1)) ? ((var_1_14 - var_1_25)) : (var_1_1))));
   } else {
    var_1_37 = ((var_1_14 + 1604009696u) - (var_1_40 - var_1_52));
   }
  }
 } else {
  if (stepLocal_7 != var_1_1) {
   var_1_37 = (var_1_29 + (var_1_14 - last_1_var_1_37));
  } else {
   var_1_37 = ((((var_1_23) < (var_1_22)) ? (var_1_23) : (var_1_22)));
  }
 }
}
void updateVariables() {
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 4294967295);
 assume_abort_if_not(var_1_21 != 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 190);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 3221225470);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 126);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= 31);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 31);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= -230584.3009213691390e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691390e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= 2305843.009213691390e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427382800e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_71 = var_1_71;
}
int property() {
 return ((((((((((((((((((((((((! (var_1_35 >= last_1_var_1_1)) ? ((256 != var_1_35) ? (var_1_1 == ((signed long int) (last_1_var_1_1 + var_1_35))) : 1) : (((-128 / -2) >= (last_1_var_1_1 + var_1_35)) ? (var_1_1 == ((signed long int) (var_1_35 - last_1_var_1_1))) : (var_1_1 == ((signed long int) ((((((last_1_var_1_1 + var_1_35)) > ((var_1_31 - var_1_15))) ? ((last_1_var_1_1 + var_1_35)) : ((var_1_31 - var_1_15)))) + ((((var_1_29) < (var_1_35)) ? (var_1_29) : (var_1_35)))))))) && ((var_1_29 > var_1_31) ? ((((var_1_35 + 10) <= var_1_35) && var_1_33) ? (var_1_8 == ((signed short int) ((((var_1_35) < (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_35) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))) : 1) : (var_1_33 ? (var_1_8 == ((signed short int) ((var_1_27 + var_1_35) - (var_1_29 + ((((var_1_15) < (2)) ? (var_1_15) : (2))))))) : ((var_1_29 >= var_1_29) ? (var_1_8 == ((signed short int) var_1_29)) : 1)))) && ((! last_1_var_1_33) ? (var_1_12 == ((unsigned long int) (var_1_13 - last_1_var_1_15))) : (var_1_12 == ((unsigned long int) ((var_1_14 - last_1_var_1_27) + last_1_var_1_15))))) && (((last_1_var_1_46 / var_1_17) < (last_1_var_1_46 + (last_1_var_1_54 * last_1_var_1_51))) ? (((last_1_var_1_1 / var_1_14) <= (last_1_var_1_31 / ((((var_1_13) < (var_1_21)) ? (var_1_13) : (var_1_21))))) ? (var_1_15 == ((unsigned char) ((((((var_1_22 - var_1_23) - var_1_24)) > ((var_1_25 - var_1_26))) ? (((var_1_22 - var_1_23) - var_1_24)) : ((var_1_25 - var_1_26)))))) : (var_1_15 == ((unsigned char) var_1_24))) : (var_1_15 == ((unsigned char) var_1_23)))) && (last_1_var_1_33 ? ((last_1_var_1_29 != (last_1_var_1_37 - var_1_24)) ? (var_1_27 == ((signed short int) (((((last_1_var_1_37) < 0 ) ? -(last_1_var_1_37) : (last_1_var_1_37))) + (var_1_26 + last_1_var_1_57)))) : (last_1_var_1_33 ? (var_1_27 == ((signed short int) (last_1_var_1_57 - ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))))) : 1)) : 1)) && (((((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) - var_1_26) <= last_1_var_1_15) ? (var_1_29 == ((unsigned char) (((((var_1_25) < (var_1_22)) ? (var_1_25) : (var_1_22))) - var_1_24))) : (last_1_var_1_33 ? (var_1_29 == ((unsigned char) ((((((((var_1_25) < (var_1_30)) ? (var_1_25) : (var_1_30)))) > ((var_1_23 + var_1_24))) ? (((((var_1_25) < (var_1_30)) ? (var_1_25) : (var_1_30)))) : ((var_1_23 + var_1_24)))))) : 1))) && (((16 / var_1_21) <= last_1_var_1_71) ? (var_1_31 == ((unsigned short int) (((((var_1_32 - last_1_var_1_52)) > (last_1_var_1_35)) ? ((var_1_32 - last_1_var_1_52)) : (last_1_var_1_35))))) : (((last_1_var_1_29 / var_1_13) <= var_1_23) ? (var_1_31 == ((unsigned short int) (var_1_32 - var_1_23))) : 1))) && (var_1_33 == ((unsigned char) (! var_1_34)))) && ((var_1_33 || var_1_34) ? (var_1_35 == ((signed short int) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) : (var_1_35 == ((signed short int) (((((4) > (25)) ? (4) : (25))) - ((((var_1_26) > (var_1_15)) ? (var_1_26) : (var_1_15)))))))) && (((var_1_29 < var_1_25) && (var_1_76 == var_1_63)) ? (((- (var_1_25 - var_1_26)) < var_1_30) ? (var_1_37 == ((unsigned long int) var_1_13)) : ((var_1_29 > var_1_26) ? (var_1_37 == ((unsigned long int) ((var_1_39 - var_1_26) - (((((var_1_14 - var_1_25)) > (var_1_1)) ? ((var_1_14 - var_1_25)) : (var_1_1)))))) : (var_1_37 == ((unsigned long int) ((var_1_14 + 1604009696u) - (var_1_40 - var_1_52)))))) : ((var_1_27 != var_1_1) ? (var_1_37 == ((unsigned long int) (var_1_29 + (var_1_14 - last_1_var_1_37)))) : (var_1_37 == ((unsigned long int) ((((var_1_23) < (var_1_22)) ? (var_1_23) : (var_1_22)))))))) && ((var_1_15 == var_1_52) ? (var_1_33 ? (var_1_41 == ((float) (var_1_42 + ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)))))) : 1) : (var_1_41 == ((float) (((((var_1_45 + var_1_43)) > ((var_1_42 + var_1_44))) ? ((var_1_45 + var_1_43)) : ((var_1_42 + var_1_44)))))))) && ((64u >= ((var_1_13 - var_1_74) + var_1_12)) ? (var_1_46 == ((double) ((((((((128.75) > ((var_1_47 - var_1_48))) ? (128.75) : ((var_1_47 - var_1_48))))) > ((var_1_49 - var_1_50))) ? (((((128.75) > ((var_1_47 - var_1_48))) ? (128.75) : ((var_1_47 - var_1_48))))) : ((var_1_49 - var_1_50)))))) : 1)) && ((! var_1_33) ? (var_1_51 == ((float) (var_1_49 - var_1_47))) : (var_1_51 == ((float) ((((var_1_42) > (((((255.5f) < 0 ) ? -(255.5f) : (255.5f))))) ? (var_1_42) : (((((255.5f) < 0 ) ? -(255.5f) : (255.5f)))))))))) && (((var_1_32 - var_1_24) > var_1_22) ? (((var_1_50 - var_1_47) >= var_1_17) ? (((var_1_56 < (var_1_15 / var_1_25)) && var_1_33) ? (var_1_52 == ((signed short int) ((((((((var_1_29) > (var_1_74)) ? (var_1_29) : (var_1_74)))) > (var_1_57)) ? (((((var_1_29) > (var_1_74)) ? (var_1_29) : (var_1_74)))) : (var_1_57))))) : 1) : (var_1_52 == ((signed short int) (var_1_24 - (var_1_22 + var_1_30))))) : (var_1_33 ? (var_1_52 == ((signed short int) (var_1_15 + 64))) : 1))) && (var_1_33 ? (var_1_54 == ((float) ((((((1.6f + var_1_55)) > (var_1_42)) ? ((1.6f + var_1_55)) : (var_1_42))) + var_1_43))) : 1)) && (var_1_56 == ((signed short int) var_1_12))) && (((var_1_12 < (var_1_31 | var_1_14)) || var_1_33) ? (var_1_57 == ((signed char) (((((var_1_23 - var_1_58)) > (var_1_22)) ? ((var_1_23 - var_1_58)) : (var_1_22))))) : ((var_1_34 && var_1_33) ? (var_1_33 ? ((var_1_15 <= ((~ var_1_40) / var_1_22)) ? (var_1_57 == ((signed char) (var_1_23 + (var_1_59 - (var_1_60 - var_1_61))))) : 1) : ((((var_1_58 + var_1_29) / var_1_60) == 5) ? ((var_1_33 || var_1_33) ? (var_1_57 == ((signed char) ((((((var_1_23 - var_1_62)) < (var_1_61)) ? ((var_1_23 - var_1_62)) : (var_1_61))) + (var_1_59 - var_1_60)))) : (var_1_57 == ((signed char) 64))) : 1)) : 1))) && ((var_1_64 >= var_1_44) ? (var_1_63 == ((float) ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))) : (var_1_63 == ((float) var_1_47)))) && (((((((var_1_31 * var_1_24)) > (var_1_29)) ? ((var_1_31 * var_1_24)) : (var_1_29))) > var_1_56) ? ((var_1_15 < (-2 * var_1_56)) ? (var_1_64 == ((float) ((((var_1_49) < (var_1_45)) ? (var_1_49) : (var_1_45))))) : (var_1_64 == ((float) ((((((var_1_55) > (var_1_65)) ? (var_1_55) : (var_1_65))) + var_1_66) + ((var_1_67 - var_1_68) - var_1_69))))) : (var_1_64 == ((float) ((var_1_68 + var_1_69) - (((((var_1_67 + var_1_70)) > (var_1_50)) ? ((var_1_67 + var_1_70)) : (var_1_50)))))))) && (var_1_71 == ((signed char) var_1_61))) && ((var_1_29 <= (var_1_39 * ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (var_1_72 == ((signed long int) (((((var_1_32 - var_1_29)) > (var_1_71)) ? ((var_1_32 - var_1_29)) : (var_1_71))))) : 1)) && (var_1_74 == ((unsigned long int) var_1_12))) && (var_1_75 == ((float) 49.375f))) && (var_1_76 == ((float) 4.4f))
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
