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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 5;
signed char var_1_3 = -32;
signed char var_1_6 = 100;
signed char var_1_7 = 0;
signed char var_1_8 = 5;
double var_1_9 = 63.25;
double var_1_10 = 99.125;
double var_1_11 = 32.5;
double var_1_12 = 2.375;
double var_1_13 = 10000000.625;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_24 = 1;
float var_1_25 = 49.9;
signed char var_1_26 = 64;
unsigned char var_1_27 = 64;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 3559873434;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 25;
unsigned char var_1_33 = 200;
float var_1_34 = 256.5;
signed long int var_1_35 = 16;
signed long int var_1_36 = 1828643428;
signed long int var_1_37 = 1618754263;
signed long int var_1_38 = 128;
signed long int var_1_39 = 256;
unsigned long int var_1_40 = 256;
double var_1_41 = 63.5;
signed short int var_1_42 = -5;
signed short int var_1_43 = 20509;
signed short int var_1_44 = 31371;
signed short int var_1_45 = 1;
double var_1_46 = 7.75;
double var_1_47 = 255.875;
unsigned char var_1_48 = 16;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 8;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 50;
unsigned char var_1_53 = 32;
unsigned char var_1_54 = 50;
unsigned char var_1_55 = 4;
signed short int var_1_56 = 16;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 32;
signed char last_1_var_1_1 = 5;
double last_1_var_1_9 = 63.25;
unsigned char last_1_var_1_14 = 1;
signed short int last_1_var_1_24 = 1;
float last_1_var_1_25 = 49.9;
unsigned long int last_1_var_1_29 = 4;
unsigned char last_1_var_1_31 = 0;
float last_1_var_1_34 = 256.5;
signed long int last_1_var_1_38 = 128;
signed long int last_1_var_1_39 = 256;
double last_1_var_1_41 = 63.5;
signed short int last_1_var_1_45 = 1;
unsigned char last_1_var_1_48 = 16;
signed short int last_1_var_1_56 = 16;
unsigned char last_1_var_1_57 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_12 + last_1_var_1_9) < last_1_var_1_25) {
  var_1_38 = (((((last_1_var_1_1) > (var_1_7)) ? (last_1_var_1_1) : (var_1_7))) + ((((((((last_1_var_1_45) < (var_1_8)) ? (last_1_var_1_45) : (var_1_8)))) > (last_1_var_1_39)) ? (((((last_1_var_1_45) < (var_1_8)) ? (last_1_var_1_45) : (var_1_8)))) : (last_1_var_1_39))));
 } else {
  var_1_38 = last_1_var_1_1;
 }
 if (var_1_6 > (var_1_7 + last_1_var_1_38)) {
  if (var_1_3 >= var_1_6) {
   if (last_1_var_1_14) {
    var_1_9 = (((var_1_10 + var_1_11) - var_1_12) + var_1_13);
   } else {
    if (last_1_var_1_14) {
     var_1_9 = var_1_11;
    } else {
     var_1_9 = var_1_12;
    }
   }
  } else {
   var_1_9 = var_1_13;
  }
 } else {
  var_1_9 = var_1_13;
 }
 signed char stepLocal_0 = var_1_3;
 if (last_1_var_1_57) {
  var_1_1 = (((((((10) < (var_1_3)) ? (10) : (var_1_3))) < 0 ) ? -((((10) < (var_1_3)) ? (10) : (var_1_3))) : ((((10) < (var_1_3)) ? (10) : (var_1_3)))));
 } else {
  if (last_1_var_1_14) {
   if (stepLocal_0 <= last_1_var_1_24) {
    var_1_1 = 8;
   } else {
    var_1_1 = ((var_1_6 - var_1_7) - 64);
   }
  } else {
   var_1_1 = (var_1_7 + var_1_8);
  }
 }
 unsigned long int stepLocal_6 = last_1_var_1_29;
 if ((last_1_var_1_41 + var_1_11) != (- last_1_var_1_25)) {
  if (last_1_var_1_56 < stepLocal_6) {
   var_1_27 = var_1_6;
  }
 } else {
  var_1_27 = var_1_6;
 }
 unsigned long int stepLocal_9 = var_1_15;
 if (var_1_10 >= (var_1_12 - var_1_11)) {
  if (((var_1_6 * var_1_27) / 100) < stepLocal_9) {
   var_1_31 = (! var_1_19);
  } else {
   var_1_31 = (var_1_18 || var_1_19);
  }
 } else {
  var_1_31 = (! 0);
 }
 unsigned long int stepLocal_2 = 256u;
 unsigned long int stepLocal_1 = var_1_15;
 if (last_1_var_1_31) {
  var_1_14 = (((var_1_6 / var_1_15) >= var_1_7) || (var_1_16 && var_1_17));
 } else {
  if (var_1_7 <= stepLocal_1) {
   if (last_1_var_1_34 != var_1_12) {
    if ((var_1_7 / ((((8u) < 0 ) ? -(8u) : (8u)))) < stepLocal_2) {
     var_1_14 = (! (! 0));
    } else {
     var_1_14 = (! (! var_1_16));
    }
   } else {
    var_1_14 = (var_1_18 || (var_1_16 && var_1_19));
   }
  }
 }
 if (var_1_13 > var_1_10) {
  var_1_34 = 4.5f;
 }
 var_1_57 = var_1_17;
 var_1_58 = var_1_33;
 signed char stepLocal_8 = var_1_3;
 signed long int stepLocal_7 = ((((0) > (10)) ? (0) : (10))) | var_1_7;
 if (stepLocal_8 == var_1_15) {
  if (var_1_58 < stepLocal_7) {
   var_1_29 = (((((var_1_30 - var_1_58)) < (var_1_6)) ? ((var_1_30 - var_1_58)) : (var_1_6)));
  } else {
   var_1_29 = ((((var_1_58) > ((var_1_30 - var_1_6))) ? (var_1_58) : ((var_1_30 - var_1_6))));
  }
 }
 if ((var_1_29 >> 4u) >= var_1_15) {
  if (var_1_16) {
   var_1_32 = (((((var_1_33 - var_1_6)) < (((64 - 32) + var_1_7))) ? ((var_1_33 - var_1_6)) : (((64 - 32) + var_1_7))));
  }
 } else {
  var_1_32 = var_1_33;
 }
 if (var_1_3 != last_1_var_1_48) {
  if (last_1_var_1_48 == (var_1_33 - 2)) {
   var_1_48 = (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6))) + (var_1_49 + var_1_50));
  }
 } else {
  if (last_1_var_1_48 > var_1_32) {
   var_1_48 = ((var_1_51 + (var_1_52 + var_1_53)) - (var_1_50 + (var_1_54 - var_1_55)));
  } else {
   var_1_48 = var_1_6;
  }
 }
 signed long int stepLocal_14 = var_1_38;
 unsigned char stepLocal_13 = var_1_14;
 signed long int stepLocal_12 = var_1_6 - var_1_7;
 if (1.5f < (var_1_12 * var_1_34)) {
  if (var_1_38 < stepLocal_12) {
   if (var_1_31) {
    var_1_46 = (var_1_11 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))));
   } else {
    var_1_46 = ((((var_1_11) > (((var_1_10 - var_1_12) + var_1_13))) ? (var_1_11) : (((var_1_10 - var_1_12) + var_1_13))));
   }
  } else {
   var_1_46 = (((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) - ((((var_1_12) > (var_1_47)) ? (var_1_12) : (var_1_47))));
  }
 } else {
  if (stepLocal_14 >= var_1_29) {
   var_1_46 = (((((var_1_47) < (var_1_11)) ? (var_1_47) : (var_1_11))) - ((((5.75) > (var_1_10)) ? (5.75) : (var_1_10))));
  } else {
   if (! var_1_57) {
    if (stepLocal_13 && var_1_17) {
     var_1_46 = ((((((var_1_12 + var_1_11) - var_1_10)) > (var_1_47)) ? (((var_1_12 + var_1_11) - var_1_10)) : (var_1_47)));
    }
   }
  }
 }
 signed char stepLocal_11 = var_1_6;
 if (stepLocal_11 != var_1_30) {
  var_1_45 = (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) + (((((var_1_33) < (var_1_7)) ? (var_1_33) : (var_1_7))) - var_1_27));
 }
 unsigned char stepLocal_5 = var_1_48;
 if (stepLocal_5 > var_1_3) {
  var_1_25 = var_1_11;
 } else {
  var_1_25 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
 }
 if ((var_1_25 < var_1_13) || var_1_18) {
  if (((((100000.5) > (9.99999999992E10)) ? (100000.5) : (9.99999999992E10))) >= var_1_12) {
   var_1_26 = (16 - 32);
  } else {
   var_1_26 = var_1_3;
  }
 }
 if (var_1_58 > var_1_29) {
  var_1_40 = ((((((((var_1_33) > (var_1_26)) ? (var_1_33) : (var_1_26)))) > (var_1_1)) ? (((((var_1_33) > (var_1_26)) ? (var_1_33) : (var_1_26)))) : (var_1_1)));
 } else {
  var_1_40 = ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)));
 }
 unsigned char stepLocal_4 = var_1_1 <= (var_1_6 - var_1_7);
 unsigned char stepLocal_3 = var_1_14;
 if (var_1_31 && stepLocal_3) {
  if (var_1_11 == (var_1_46 / 128.5)) {
   if (var_1_17 || stepLocal_4) {
    var_1_20 = (var_1_14 || var_1_16);
   } else {
    var_1_20 = (var_1_14 && var_1_19);
   }
  } else {
   var_1_20 = (((5 < var_1_15) || var_1_17) && var_1_16);
  }
 }
 unsigned char stepLocal_10 = var_1_14;
 if (var_1_20 && stepLocal_10) {
  var_1_41 = ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10)));
 } else {
  if (var_1_34 > (- var_1_25)) {
   var_1_41 = ((var_1_11 - var_1_12) + var_1_13);
  }
 }
 if (var_1_41 <= (((((var_1_11) < (var_1_9)) ? (var_1_11) : (var_1_9))) + var_1_12)) {
  var_1_39 = ((((((((var_1_33) > (var_1_27)) ? (var_1_33) : (var_1_27)))) > (var_1_3)) ? (((((var_1_33) > (var_1_27)) ? (var_1_33) : (var_1_27)))) : (var_1_3)));
 }
 var_1_42 = ((((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44))) - ((((var_1_6) > (var_1_39)) ? (var_1_6) : (var_1_39)))) - (var_1_7 + var_1_33));
 if (! (var_1_11 != (var_1_12 - var_1_10))) {
  var_1_24 = ((((((((var_1_42) < (var_1_7)) ? (var_1_42) : (var_1_7)))) > (var_1_3)) ? (((((var_1_42) < (var_1_7)) ? (var_1_42) : (var_1_7)))) : (var_1_3)));
 } else {
  var_1_24 = (var_1_6 - var_1_7);
 }
 signed long int stepLocal_15 = 100;
 if (var_1_7 <= stepLocal_15) {
  if (var_1_18) {
   var_1_56 = (var_1_24 + var_1_55);
  } else {
   var_1_56 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 } else {
  var_1_56 = var_1_24;
 }
 if (var_1_57) {
  var_1_35 = ((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))) - var_1_24) - var_1_6);
 } else {
  var_1_35 = (var_1_36 - var_1_27);
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -126);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 62);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 4294967295);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 1073741822);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 1073741822);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= 16382);
 assume_abort_if_not(var_1_43 <= 32766);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 16382);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 64);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 63);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 32);
 assume_abort_if_not(var_1_52 <= 64);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 32);
 assume_abort_if_not(var_1_53 <= 63);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 31);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 31);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
}
int property() {
 return (((((((((((((((((((((((last_1_var_1_57 ? (var_1_1 == ((signed char) (((((((10) < (var_1_3)) ? (10) : (var_1_3))) < 0 ) ? -((((10) < (var_1_3)) ? (10) : (var_1_3))) : ((((10) < (var_1_3)) ? (10) : (var_1_3))))))) : (last_1_var_1_14 ? ((var_1_3 <= last_1_var_1_24) ? (var_1_1 == ((signed char) 8)) : (var_1_1 == ((signed char) ((var_1_6 - var_1_7) - 64)))) : (var_1_1 == ((signed char) (var_1_7 + var_1_8))))) && ((var_1_6 > (var_1_7 + last_1_var_1_38)) ? ((var_1_3 >= var_1_6) ? (last_1_var_1_14 ? (var_1_9 == ((double) (((var_1_10 + var_1_11) - var_1_12) + var_1_13))) : (last_1_var_1_14 ? (var_1_9 == ((double) var_1_11)) : (var_1_9 == ((double) var_1_12)))) : (var_1_9 == ((double) var_1_13))) : (var_1_9 == ((double) var_1_13)))) && (last_1_var_1_31 ? (var_1_14 == ((unsigned char) (((var_1_6 / var_1_15) >= var_1_7) || (var_1_16 && var_1_17)))) : ((var_1_7 <= var_1_15) ? ((last_1_var_1_34 != var_1_12) ? (((var_1_7 / ((((8u) < 0 ) ? -(8u) : (8u)))) < 256u) ? (var_1_14 == ((unsigned char) (! (! 0)))) : (var_1_14 == ((unsigned char) (! (! var_1_16))))) : (var_1_14 == ((unsigned char) (var_1_18 || (var_1_16 && var_1_19))))) : 1))) && ((var_1_31 && var_1_14) ? ((var_1_11 == (var_1_46 / 128.5)) ? ((var_1_17 || (var_1_1 <= (var_1_6 - var_1_7))) ? (var_1_20 == ((unsigned char) (var_1_14 || var_1_16))) : (var_1_20 == ((unsigned char) (var_1_14 && var_1_19)))) : (var_1_20 == ((unsigned char) (((5 < var_1_15) || var_1_17) && var_1_16)))) : 1)) && ((! (var_1_11 != (var_1_12 - var_1_10))) ? (var_1_24 == ((signed short int) ((((((((var_1_42) < (var_1_7)) ? (var_1_42) : (var_1_7)))) > (var_1_3)) ? (((((var_1_42) < (var_1_7)) ? (var_1_42) : (var_1_7)))) : (var_1_3))))) : (var_1_24 == ((signed short int) (var_1_6 - var_1_7))))) && ((var_1_48 > var_1_3) ? (var_1_25 == ((float) var_1_11)) : (var_1_25 == ((float) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))))) && (((var_1_25 < var_1_13) || var_1_18) ? ((((((100000.5) > (9.99999999992E10)) ? (100000.5) : (9.99999999992E10))) >= var_1_12) ? (var_1_26 == ((signed char) (16 - 32))) : (var_1_26 == ((signed char) var_1_3))) : 1)) && (((last_1_var_1_41 + var_1_11) != (- last_1_var_1_25)) ? ((last_1_var_1_56 < last_1_var_1_29) ? (var_1_27 == ((unsigned char) var_1_6)) : 1) : (var_1_27 == ((unsigned char) var_1_6)))) && ((var_1_3 == var_1_15) ? ((var_1_58 < (((((0) > (10)) ? (0) : (10))) | var_1_7)) ? (var_1_29 == ((unsigned long int) (((((var_1_30 - var_1_58)) < (var_1_6)) ? ((var_1_30 - var_1_58)) : (var_1_6))))) : (var_1_29 == ((unsigned long int) ((((var_1_58) > ((var_1_30 - var_1_6))) ? (var_1_58) : ((var_1_30 - var_1_6))))))) : 1)) && ((var_1_10 >= (var_1_12 - var_1_11)) ? ((((var_1_6 * var_1_27) / 100) < var_1_15) ? (var_1_31 == ((unsigned char) (! var_1_19))) : (var_1_31 == ((unsigned char) (var_1_18 || var_1_19)))) : (var_1_31 == ((unsigned char) (! 0))))) && (((var_1_29 >> 4u) >= var_1_15) ? (var_1_16 ? (var_1_32 == ((unsigned char) (((((var_1_33 - var_1_6)) < (((64 - 32) + var_1_7))) ? ((var_1_33 - var_1_6)) : (((64 - 32) + var_1_7)))))) : 1) : (var_1_32 == ((unsigned char) var_1_33)))) && ((var_1_13 > var_1_10) ? (var_1_34 == ((float) 4.5f)) : 1)) && (var_1_57 ? (var_1_35 == ((signed long int) ((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))) - var_1_24) - var_1_6))) : (var_1_35 == ((signed long int) (var_1_36 - var_1_27))))) && (((var_1_12 + last_1_var_1_9) < last_1_var_1_25) ? (var_1_38 == ((signed long int) (((((last_1_var_1_1) > (var_1_7)) ? (last_1_var_1_1) : (var_1_7))) + ((((((((last_1_var_1_45) < (var_1_8)) ? (last_1_var_1_45) : (var_1_8)))) > (last_1_var_1_39)) ? (((((last_1_var_1_45) < (var_1_8)) ? (last_1_var_1_45) : (var_1_8)))) : (last_1_var_1_39)))))) : (var_1_38 == ((signed long int) last_1_var_1_1)))) && ((var_1_41 <= (((((var_1_11) < (var_1_9)) ? (var_1_11) : (var_1_9))) + var_1_12)) ? (var_1_39 == ((signed long int) ((((((((var_1_33) > (var_1_27)) ? (var_1_33) : (var_1_27)))) > (var_1_3)) ? (((((var_1_33) > (var_1_27)) ? (var_1_33) : (var_1_27)))) : (var_1_3))))) : 1)) && ((var_1_58 > var_1_29) ? (var_1_40 == ((unsigned long int) ((((((((var_1_33) > (var_1_26)) ? (var_1_33) : (var_1_26)))) > (var_1_1)) ? (((((var_1_33) > (var_1_26)) ? (var_1_33) : (var_1_26)))) : (var_1_1))))) : (var_1_40 == ((unsigned long int) ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))))) && ((var_1_20 && var_1_14) ? (var_1_41 == ((double) ((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10))))) : ((var_1_34 > (- var_1_25)) ? (var_1_41 == ((double) ((var_1_11 - var_1_12) + var_1_13))) : 1))) && (var_1_42 == ((signed short int) ((((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44))) - ((((var_1_6) > (var_1_39)) ? (var_1_6) : (var_1_39)))) - (var_1_7 + var_1_33))))) && ((var_1_6 != var_1_30) ? (var_1_45 == ((signed short int) (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) + (((((var_1_33) < (var_1_7)) ? (var_1_33) : (var_1_7))) - var_1_27)))) : 1)) && ((1.5f < (var_1_12 * var_1_34)) ? ((var_1_38 < (var_1_6 - var_1_7)) ? (var_1_31 ? (var_1_46 == ((double) (var_1_11 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) : (var_1_46 == ((double) ((((var_1_11) > (((var_1_10 - var_1_12) + var_1_13))) ? (var_1_11) : (((var_1_10 - var_1_12) + var_1_13))))))) : (var_1_46 == ((double) (((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))) - ((((var_1_12) > (var_1_47)) ? (var_1_12) : (var_1_47))))))) : ((var_1_38 >= var_1_29) ? (var_1_46 == ((double) (((((var_1_47) < (var_1_11)) ? (var_1_47) : (var_1_11))) - ((((5.75) > (var_1_10)) ? (5.75) : (var_1_10)))))) : ((! var_1_57) ? ((var_1_14 && var_1_17) ? (var_1_46 == ((double) ((((((var_1_12 + var_1_11) - var_1_10)) > (var_1_47)) ? (((var_1_12 + var_1_11) - var_1_10)) : (var_1_47))))) : 1) : 1)))) && ((var_1_3 != last_1_var_1_48) ? ((last_1_var_1_48 == (var_1_33 - 2)) ? (var_1_48 == ((unsigned char) (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6))) + (var_1_49 + var_1_50)))) : 1) : ((last_1_var_1_48 > var_1_32) ? (var_1_48 == ((unsigned char) ((var_1_51 + (var_1_52 + var_1_53)) - (var_1_50 + (var_1_54 - var_1_55))))) : (var_1_48 == ((unsigned char) var_1_6))))) && ((var_1_7 <= 100) ? (var_1_18 ? (var_1_56 == ((signed short int) (var_1_24 + var_1_55))) : (var_1_56 == ((signed short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) : (var_1_56 == ((signed short int) var_1_24)))) && (var_1_57 == ((unsigned char) var_1_17))) && (var_1_58 == ((unsigned char) var_1_33))
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
