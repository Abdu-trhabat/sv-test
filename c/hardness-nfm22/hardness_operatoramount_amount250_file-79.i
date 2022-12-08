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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
signed short int var_1_11 = 4;
unsigned short int var_1_12 = 4;
float var_1_15 = 0.8;
float var_1_16 = 4.48;
float var_1_17 = 8.5;
float var_1_18 = 31.8;
signed short int var_1_19 = 64;
signed long int var_1_20 = 0;
unsigned short int var_1_21 = 25;
unsigned short int var_1_22 = 52809;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 128;
signed long int var_1_26 = -32;
signed short int var_1_28 = 2;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed long int var_1_34 = 0;
signed long int var_1_35 = 1000000000;
signed long int var_1_36 = -8;
signed char var_1_37 = 8;
float var_1_38 = 99.125;
float var_1_40 = 25.5;
float var_1_41 = 3.5;
double var_1_42 = -0.2;
double var_1_45 = 8.25;
double var_1_46 = 999.5;
double var_1_47 = 15.75;
double var_1_48 = 9999999999.25;
signed char var_1_49 = 2;
unsigned long int var_1_50 = 4;
signed long int var_1_51 = 1580869854;
signed short int var_1_52 = -256;
unsigned long int var_1_53 = 0;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 128;
unsigned long int var_1_56 = 4189323048;
signed short int var_1_57 = -1;
signed short int var_1_58 = 31486;
signed short int var_1_59 = -32;
unsigned char var_1_60 = 4;
unsigned char var_1_61 = 128;
signed long int var_1_62 = 5;
signed char var_1_63 = 64;
signed char var_1_64 = 32;
signed short int last_1_var_1_11 = 4;
unsigned char last_1_var_1_24 = 16;
unsigned char last_1_var_1_29 = 1;
signed long int last_1_var_1_34 = 0;
float last_1_var_1_38 = 99.125;
signed char last_1_var_1_49 = 2;
signed short int last_1_var_1_52 = -256;
unsigned long int last_1_var_1_53 = 0;
signed short int last_1_var_1_57 = -1;
signed short int last_1_var_1_59 = -32;
unsigned char last_1_var_1_60 = 4;
signed long int last_1_var_1_62 = 5;
void initially(void) {
}
void step(void) {
 if (-1 > var_1_25) {
  if (last_1_var_1_34 != 8) {
   if ((last_1_var_1_62 + ((((last_1_var_1_60) < 0 ) ? -(last_1_var_1_60) : (last_1_var_1_60)))) >= (last_1_var_1_49 / var_1_28)) {
    var_1_34 = (last_1_var_1_60 + (var_1_22 - (var_1_35 - last_1_var_1_24)));
   }
  }
 }
 if (last_1_var_1_29 && last_1_var_1_29) {
  if (last_1_var_1_38 != 16.5) {
   var_1_1 = ((((-256) > (last_1_var_1_49)) ? (-256) : (last_1_var_1_49)));
  } else {
   var_1_1 = (last_1_var_1_60 - last_1_var_1_60);
  }
 } else {
  var_1_1 = (((((last_1_var_1_49) < (last_1_var_1_24)) ? (last_1_var_1_49) : (last_1_var_1_24))) + last_1_var_1_24);
 }
 unsigned char stepLocal_10 = last_1_var_1_11 < last_1_var_1_24;
 if (stepLocal_10 && var_1_2) {
  var_1_29 = ((var_1_30 || var_1_31) || (var_1_3 && (var_1_32 || var_1_33)));
 }
 signed long int stepLocal_12 = last_1_var_1_52;
 unsigned char stepLocal_11 = last_1_var_1_57 == last_1_var_1_53;
 if (var_1_33) {
  if (stepLocal_12 < last_1_var_1_49) {
   var_1_36 = ((last_1_var_1_60 + 256) - last_1_var_1_52);
  } else {
   if (((var_1_12 - var_1_37) > (last_1_var_1_52 * var_1_28)) && stepLocal_11) {
    var_1_36 = (((((-8) > (last_1_var_1_60)) ? (-8) : (last_1_var_1_60))) + last_1_var_1_24);
   } else {
    var_1_36 = last_1_var_1_49;
   }
  }
 } else {
  var_1_36 = last_1_var_1_57;
 }
 unsigned char stepLocal_6 = last_1_var_1_29;
 unsigned char stepLocal_5 = last_1_var_1_29;
 if (stepLocal_5 && last_1_var_1_29) {
  var_1_24 = var_1_12;
 } else {
  if (last_1_var_1_29 || stepLocal_6) {
   var_1_24 = ((((var_1_12) < (var_1_25)) ? (var_1_12) : (var_1_25)));
  }
 }
 var_1_49 = (var_1_12 + 1);
 var_1_60 = (var_1_61 - var_1_37);
 if (var_1_37 <= ((var_1_63 - var_1_12) - var_1_64)) {
  if (var_1_30) {
   if (var_1_29) {
    var_1_62 = var_1_58;
   } else {
    var_1_62 = var_1_55;
   }
  } else {
   var_1_62 = var_1_34;
  }
 }
 signed long int stepLocal_3 = var_1_49 ^ var_1_49;
 signed char stepLocal_2 = var_1_49;
 signed long int stepLocal_1 = (var_1_49 + var_1_60) << ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 signed long int stepLocal_0 = (var_1_24 * var_1_60) & ((((-50) > (var_1_24)) ? (-50) : (var_1_24)));
 if (stepLocal_1 <= (var_1_49 * var_1_60)) {
  var_1_11 = ((var_1_12 + var_1_24) - var_1_60);
 } else {
  if ((~ (var_1_49 ^ var_1_60)) <= stepLocal_0) {
   if (var_1_29) {
    if ((last_1_var_1_11 | (var_1_60 << var_1_60)) >= stepLocal_2) {
     var_1_11 = ((((var_1_49) > (var_1_49)) ? (var_1_49) : (var_1_49)));
    }
   } else {
    if (stepLocal_3 > var_1_60) {
     var_1_11 = -2;
    }
   }
  } else {
   var_1_11 = var_1_60;
  }
 }
 if (var_1_12 >= 100) {
  if (((var_1_36 + var_1_24) + var_1_34) <= -8) {
   var_1_59 = (var_1_60 - ((((var_1_24) > (var_1_34)) ? (var_1_24) : (var_1_34))));
  } else {
   if (((((var_1_36) > ((last_1_var_1_59 * var_1_37))) ? (var_1_36) : ((last_1_var_1_59 * var_1_37)))) != var_1_60) {
    if ((var_1_56 - var_1_12) > (- (var_1_51 / var_1_22))) {
     var_1_59 = var_1_24;
    }
   }
  }
 } else {
  var_1_59 = var_1_58;
 }
 var_1_19 = ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) > ((var_1_49 + var_1_12))) ? (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : ((var_1_49 + var_1_12))));
 if (var_1_31 || var_1_29) {
  if (16 <= ((var_1_51 - var_1_60) - var_1_37)) {
   var_1_50 = var_1_37;
  }
 } else {
  var_1_50 = var_1_25;
 }
 if (-5 < var_1_12) {
  if (var_1_29) {
   var_1_57 = ((((var_1_24) < (((var_1_55 + var_1_60) - (var_1_12 + var_1_49)))) ? (var_1_24) : (((var_1_55 + var_1_60) - (var_1_12 + var_1_49)))));
  } else {
   var_1_57 = (var_1_24 - var_1_12);
  }
 } else {
  if (! var_1_33) {
   if (((var_1_62 / var_1_54) + -16) > var_1_60) {
    var_1_57 = ((((((var_1_58 - var_1_60)) < (var_1_55)) ? ((var_1_58 - var_1_60)) : (var_1_55))) - var_1_24);
   } else {
    var_1_57 = 50;
   }
  } else {
   var_1_57 = (var_1_24 - 128);
  }
 }
 if ((var_1_1 > var_1_60) && var_1_33) {
  if (var_1_49 < (10 * var_1_11)) {
   if (((((var_1_24) > ((var_1_35 | var_1_50))) ? (var_1_24) : ((var_1_35 | var_1_50)))) >= var_1_28) {
    var_1_42 = var_1_17;
   } else {
    var_1_42 = (var_1_16 + (var_1_45 - var_1_46));
   }
  } else {
   var_1_42 = ((((((((var_1_40) < (var_1_18)) ? (var_1_40) : (var_1_18)))) > (var_1_45)) ? (((((var_1_40) < (var_1_18)) ? (var_1_40) : (var_1_18)))) : (var_1_45)));
  }
 } else {
  var_1_42 = ((var_1_47 + var_1_48) + (var_1_45 - var_1_46));
 }
 signed long int stepLocal_14 = var_1_35 + var_1_11;
 signed long int stepLocal_13 = (var_1_51 - 128) - var_1_60;
 if ((((((var_1_54) < (var_1_55)) ? (var_1_54) : (var_1_55))) - var_1_12) <= stepLocal_13) {
  if (var_1_60 < stepLocal_14) {
   var_1_53 = (var_1_56 - var_1_25);
  }
 } else {
  if (var_1_32) {
   var_1_53 = (var_1_56 - var_1_59);
  }
 }
 if (var_1_36 != (var_1_25 + var_1_53)) {
  var_1_52 = (var_1_62 + var_1_12);
 }
 signed short int stepLocal_4 = var_1_52;
 if (-32 != stepLocal_4) {
  var_1_15 = ((((((((8.25f) > ((var_1_16 + var_1_17))) ? (8.25f) : ((var_1_16 + var_1_17))))) < (var_1_18)) ? (((((8.25f) > ((var_1_16 + var_1_17))) ? (8.25f) : ((var_1_16 + var_1_17))))) : (var_1_18)));
 } else {
  var_1_15 = (127.5f + var_1_16);
 }
 if (var_1_24 <= var_1_59) {
  if (var_1_29 || (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) <= var_1_17)) {
   var_1_21 = (((((var_1_24) < (var_1_24)) ? (var_1_24) : (var_1_24))) + var_1_12);
  } else {
   var_1_21 = ((var_1_22 - ((((var_1_24) > (var_1_12)) ? (var_1_24) : (var_1_12)))) - (var_1_60 + ((((4) < 0 ) ? -(4) : (4)))));
  }
 } else {
  var_1_21 = var_1_24;
 }
 if ((var_1_18 > var_1_42) || var_1_32) {
  var_1_38 = (var_1_40 - var_1_41);
 }
 if (var_1_29) {
  if ((var_1_36 + var_1_62) < -50) {
   var_1_20 = (128 - var_1_12);
  } else {
   if (var_1_38 > ((31.6 * var_1_18) / 5.5)) {
    var_1_20 = (var_1_12 + -8);
   } else {
    var_1_20 = (((((var_1_24 - var_1_12)) < (var_1_60)) ? ((var_1_24 - var_1_12)) : (var_1_60)));
   }
  }
 }
 unsigned char stepLocal_9 = var_1_60;
 signed long int stepLocal_8 = var_1_62 + (var_1_24 + var_1_24);
 unsigned char stepLocal_7 = var_1_24;
 if (var_1_50 >= stepLocal_7) {
  if ((33351 - ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) == stepLocal_8) {
   if ((var_1_62 / ((((var_1_22) < (var_1_28)) ? (var_1_22) : (var_1_28)))) != stepLocal_9) {
    var_1_26 = var_1_24;
   } else {
    var_1_26 = var_1_24;
   }
  } else {
   var_1_26 = var_1_24;
  }
 } else {
  var_1_26 = var_1_24;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 15);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 49150);
 assume_abort_if_not(var_1_22 <= 65534);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 assume_abort_if_not(var_1_28 != 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 536870911);
 assume_abort_if_not(var_1_35 <= 1073741823);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -230584.3009213691390e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -230584.3009213691390e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691390e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 1073741823);
 assume_abort_if_not(var_1_51 <= 2147483647);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 255);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 127);
 assume_abort_if_not(var_1_55 <= 255);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 2147483647);
 assume_abort_if_not(var_1_56 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 16382);
 assume_abort_if_not(var_1_58 <= 32766);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 127);
 assume_abort_if_not(var_1_61 <= 254);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 63);
 assume_abort_if_not(var_1_63 <= 127);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 127);
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_62 = var_1_62;
}
int property() {
 return (((((((((((((((((((((last_1_var_1_29 && last_1_var_1_29) ? ((last_1_var_1_38 != 16.5) ? (var_1_1 == ((signed short int) ((((-256) > (last_1_var_1_49)) ? (-256) : (last_1_var_1_49))))) : (var_1_1 == ((signed short int) (last_1_var_1_60 - last_1_var_1_60)))) : (var_1_1 == ((signed short int) (((((last_1_var_1_49) < (last_1_var_1_24)) ? (last_1_var_1_49) : (last_1_var_1_24))) + last_1_var_1_24)))) && ((((var_1_49 + var_1_60) << ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) <= (var_1_49 * var_1_60)) ? (var_1_11 == ((signed short int) ((var_1_12 + var_1_24) - var_1_60))) : (((~ (var_1_49 ^ var_1_60)) <= ((var_1_24 * var_1_60) & ((((-50) > (var_1_24)) ? (-50) : (var_1_24))))) ? (var_1_29 ? (((last_1_var_1_11 | (var_1_60 << var_1_60)) >= var_1_49) ? (var_1_11 == ((signed short int) ((((var_1_49) > (var_1_49)) ? (var_1_49) : (var_1_49))))) : 1) : (((var_1_49 ^ var_1_49) > var_1_60) ? (var_1_11 == ((signed short int) -2)) : 1)) : (var_1_11 == ((signed short int) var_1_60))))) && ((-32 != var_1_52) ? (var_1_15 == ((float) ((((((((8.25f) > ((var_1_16 + var_1_17))) ? (8.25f) : ((var_1_16 + var_1_17))))) < (var_1_18)) ? (((((8.25f) > ((var_1_16 + var_1_17))) ? (8.25f) : ((var_1_16 + var_1_17))))) : (var_1_18))))) : (var_1_15 == ((float) (127.5f + var_1_16))))) && (var_1_19 == ((signed short int) ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) > ((var_1_49 + var_1_12))) ? (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : ((var_1_49 + var_1_12))))))) && (var_1_29 ? (((var_1_36 + var_1_62) < -50) ? (var_1_20 == ((signed long int) (128 - var_1_12))) : ((var_1_38 > ((31.6 * var_1_18) / 5.5)) ? (var_1_20 == ((signed long int) (var_1_12 + -8))) : (var_1_20 == ((signed long int) (((((var_1_24 - var_1_12)) < (var_1_60)) ? ((var_1_24 - var_1_12)) : (var_1_60))))))) : 1)) && ((var_1_24 <= var_1_59) ? ((var_1_29 || (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) <= var_1_17)) ? (var_1_21 == ((unsigned short int) (((((var_1_24) < (var_1_24)) ? (var_1_24) : (var_1_24))) + var_1_12))) : (var_1_21 == ((unsigned short int) ((var_1_22 - ((((var_1_24) > (var_1_12)) ? (var_1_24) : (var_1_12)))) - (var_1_60 + ((((4) < 0 ) ? -(4) : (4)))))))) : (var_1_21 == ((unsigned short int) var_1_24)))) && ((last_1_var_1_29 && last_1_var_1_29) ? (var_1_24 == ((unsigned char) var_1_12)) : ((last_1_var_1_29 || last_1_var_1_29) ? (var_1_24 == ((unsigned char) ((((var_1_12) < (var_1_25)) ? (var_1_12) : (var_1_25))))) : 1))) && ((var_1_50 >= var_1_24) ? (((33351 - ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) == (var_1_62 + (var_1_24 + var_1_24))) ? (((var_1_62 / ((((var_1_22) < (var_1_28)) ? (var_1_22) : (var_1_28)))) != var_1_60) ? (var_1_26 == ((signed long int) var_1_24)) : (var_1_26 == ((signed long int) var_1_24))) : (var_1_26 == ((signed long int) var_1_24))) : (var_1_26 == ((signed long int) var_1_24)))) && (((last_1_var_1_11 < last_1_var_1_24) && var_1_2) ? (var_1_29 == ((unsigned char) ((var_1_30 || var_1_31) || (var_1_3 && (var_1_32 || var_1_33))))) : 1)) && ((-1 > var_1_25) ? ((last_1_var_1_34 != 8) ? (((last_1_var_1_62 + ((((last_1_var_1_60) < 0 ) ? -(last_1_var_1_60) : (last_1_var_1_60)))) >= (last_1_var_1_49 / var_1_28)) ? (var_1_34 == ((signed long int) (last_1_var_1_60 + (var_1_22 - (var_1_35 - last_1_var_1_24))))) : 1) : 1) : 1)) && (var_1_33 ? ((last_1_var_1_52 < last_1_var_1_49) ? (var_1_36 == ((signed long int) ((last_1_var_1_60 + 256) - last_1_var_1_52))) : ((((var_1_12 - var_1_37) > (last_1_var_1_52 * var_1_28)) && (last_1_var_1_57 == last_1_var_1_53)) ? (var_1_36 == ((signed long int) (((((-8) > (last_1_var_1_60)) ? (-8) : (last_1_var_1_60))) + last_1_var_1_24))) : (var_1_36 == ((signed long int) last_1_var_1_49)))) : (var_1_36 == ((signed long int) last_1_var_1_57)))) && (((var_1_18 > var_1_42) || var_1_32) ? (var_1_38 == ((float) (var_1_40 - var_1_41))) : 1)) && (((var_1_1 > var_1_60) && var_1_33) ? ((var_1_49 < (10 * var_1_11)) ? ((((((var_1_24) > ((var_1_35 | var_1_50))) ? (var_1_24) : ((var_1_35 | var_1_50)))) >= var_1_28) ? (var_1_42 == ((double) var_1_17)) : (var_1_42 == ((double) (var_1_16 + (var_1_45 - var_1_46))))) : (var_1_42 == ((double) ((((((((var_1_40) < (var_1_18)) ? (var_1_40) : (var_1_18)))) > (var_1_45)) ? (((((var_1_40) < (var_1_18)) ? (var_1_40) : (var_1_18)))) : (var_1_45)))))) : (var_1_42 == ((double) ((var_1_47 + var_1_48) + (var_1_45 - var_1_46)))))) && (var_1_49 == ((signed char) (var_1_12 + 1)))) && ((var_1_31 || var_1_29) ? ((16 <= ((var_1_51 - var_1_60) - var_1_37)) ? (var_1_50 == ((unsigned long int) var_1_37)) : 1) : (var_1_50 == ((unsigned long int) var_1_25)))) && ((var_1_36 != (var_1_25 + var_1_53)) ? (var_1_52 == ((signed short int) (var_1_62 + var_1_12))) : 1)) && (((((((var_1_54) < (var_1_55)) ? (var_1_54) : (var_1_55))) - var_1_12) <= ((var_1_51 - 128) - var_1_60)) ? ((var_1_60 < (var_1_35 + var_1_11)) ? (var_1_53 == ((unsigned long int) (var_1_56 - var_1_25))) : 1) : (var_1_32 ? (var_1_53 == ((unsigned long int) (var_1_56 - var_1_59))) : 1))) && ((-5 < var_1_12) ? (var_1_29 ? (var_1_57 == ((signed short int) ((((var_1_24) < (((var_1_55 + var_1_60) - (var_1_12 + var_1_49)))) ? (var_1_24) : (((var_1_55 + var_1_60) - (var_1_12 + var_1_49))))))) : (var_1_57 == ((signed short int) (var_1_24 - var_1_12)))) : ((! var_1_33) ? ((((var_1_62 / var_1_54) + -16) > var_1_60) ? (var_1_57 == ((signed short int) ((((((var_1_58 - var_1_60)) < (var_1_55)) ? ((var_1_58 - var_1_60)) : (var_1_55))) - var_1_24))) : (var_1_57 == ((signed short int) 50))) : (var_1_57 == ((signed short int) (var_1_24 - 128)))))) && ((var_1_12 >= 100) ? ((((var_1_36 + var_1_24) + var_1_34) <= -8) ? (var_1_59 == ((signed short int) (var_1_60 - ((((var_1_24) > (var_1_34)) ? (var_1_24) : (var_1_34)))))) : ((((((var_1_36) > ((last_1_var_1_59 * var_1_37))) ? (var_1_36) : ((last_1_var_1_59 * var_1_37)))) != var_1_60) ? (((var_1_56 - var_1_12) > (- (var_1_51 / var_1_22))) ? (var_1_59 == ((signed short int) var_1_24)) : 1) : 1)) : (var_1_59 == ((signed short int) var_1_58)))) && (var_1_60 == ((unsigned char) (var_1_61 - var_1_37)))) && ((var_1_37 <= ((var_1_63 - var_1_12) - var_1_64)) ? (var_1_30 ? (var_1_29 ? (var_1_62 == ((signed long int) var_1_58)) : (var_1_62 == ((signed long int) var_1_55))) : (var_1_62 == ((signed long int) var_1_34))) : 1)
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
