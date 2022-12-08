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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_7 = 9.75;
double var_1_8 = 0.0;
double var_1_9 = 0.0;
double var_1_10 = 8.5;
signed short int var_1_11 = 100;
unsigned short int var_1_13 = 128;
unsigned short int var_1_14 = 38532;
unsigned short int var_1_15 = 50;
signed short int var_1_16 = -2;
signed long int var_1_17 = 2;
float var_1_19 = 128.25;
float var_1_20 = 128.5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 8;
double var_1_23 = 7.5;
unsigned long int var_1_24 = 100000000;
unsigned long int var_1_25 = 3814067957;
unsigned long int var_1_26 = 3784783147;
unsigned long int var_1_27 = 3632130737;
unsigned long int var_1_28 = 1000000000;
unsigned long int var_1_29 = 1000000000;
unsigned long int var_1_30 = 3796301328;
unsigned long int var_1_32 = 32;
signed long int var_1_33 = 10;
signed long int var_1_36 = 8;
signed char var_1_39 = -2;
signed char var_1_40 = 50;
signed char var_1_41 = 2;
signed char var_1_42 = 8;
signed short int var_1_43 = -128;
float var_1_44 = 0.0;
signed long int var_1_45 = 64;
double var_1_46 = 64.75;
float var_1_47 = 999999999.7;
unsigned char var_1_48 = 1;
unsigned char var_1_50 = 0;
double var_1_51 = 255.4;
unsigned short int last_1_var_1_1 = 32;
double last_1_var_1_7 = 9.75;
signed short int last_1_var_1_11 = 100;
unsigned short int last_1_var_1_13 = 128;
unsigned short int last_1_var_1_15 = 50;
signed long int last_1_var_1_17 = 2;
unsigned char last_1_var_1_21 = 0;
unsigned long int last_1_var_1_24 = 100000000;
unsigned long int last_1_var_1_32 = 32;
signed long int last_1_var_1_33 = 10;
signed long int last_1_var_1_36 = 8;
signed char last_1_var_1_39 = -2;
signed short int last_1_var_1_43 = -128;
signed long int last_1_var_1_45 = 64;
double last_1_var_1_46 = 64.75;
unsigned char last_1_var_1_48 = 1;
double last_1_var_1_51 = 255.4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_11 = (((last_1_var_1_36) > (last_1_var_1_17)) ? (last_1_var_1_36) : (last_1_var_1_17));
 unsigned long int stepLocal_10 = var_1_14 - last_1_var_1_32;
 unsigned long int stepLocal_9 = var_1_5 + (var_1_27 - var_1_28);
 unsigned long int stepLocal_8 = var_1_27;
 signed long int stepLocal_7 = last_1_var_1_15;
 if (((1.5 * var_1_20) * var_1_8) >= (var_1_10 * ((((var_1_9) < (32.5)) ? (var_1_9) : (32.5))))) {
  if (last_1_var_1_48) {
   if (var_1_10 < var_1_9) {
    var_1_24 = (((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) < (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))))) - last_1_var_1_32);
   } else {
    var_1_24 = (var_1_27 - ((var_1_28 + var_1_29) - 10000000u));
   }
  } else {
   if (stepLocal_8 == last_1_var_1_32) {
    var_1_24 = (((((var_1_30 - last_1_var_1_13) < 0 ) ? -(var_1_30 - last_1_var_1_13) : (var_1_30 - last_1_var_1_13))) - var_1_28);
   } else {
    if (! last_1_var_1_21) {
     if (var_1_25 >= stepLocal_9) {
      var_1_24 = (((((var_1_27 - (last_1_var_1_17 + var_1_6))) > (8u)) ? ((var_1_27 - (last_1_var_1_17 + var_1_6))) : (8u)));
     }
    } else {
     var_1_24 = (var_1_14 + var_1_5);
    }
   }
  }
 } else {
  if (last_1_var_1_21) {
   if (last_1_var_1_21) {
    if (stepLocal_10 == var_1_6) {
     var_1_24 = (var_1_30 - ((((8u + 16u) < 0 ) ? -(8u + 16u) : (8u + 16u))));
    }
   }
  } else {
   if (stepLocal_7 == (last_1_var_1_17 * last_1_var_1_13)) {
    if (((((((((last_1_var_1_1) < (var_1_26)) ? (last_1_var_1_1) : (var_1_26)))) > (var_1_28)) ? (((((last_1_var_1_1) < (var_1_26)) ? (last_1_var_1_1) : (var_1_26)))) : (var_1_28))) > stepLocal_11) {
     var_1_24 = (var_1_25 - var_1_14);
    } else {
     var_1_24 = (var_1_25 - last_1_var_1_32);
    }
   } else {
    var_1_24 = ((1823167497u - var_1_14) + ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))));
   }
  }
 }
 if (last_1_var_1_11 <= (last_1_var_1_32 % 256)) {
  var_1_33 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 } else {
  if ((last_1_var_1_13 <= -4) && last_1_var_1_48) {
   var_1_33 = ((((last_1_var_1_39) > (last_1_var_1_45)) ? (last_1_var_1_39) : (last_1_var_1_45)));
  } else {
   var_1_33 = ((((last_1_var_1_43) > ((var_1_14 - last_1_var_1_33))) ? (last_1_var_1_43) : ((var_1_14 - last_1_var_1_33))));
  }
 }
 signed long int stepLocal_16 = last_1_var_1_13;
 signed long int stepLocal_15 = last_1_var_1_36;
 if (last_1_var_1_17 <= stepLocal_15) {
  var_1_39 = ((((((64 - var_1_40)) < (var_1_41)) ? ((64 - var_1_40)) : (var_1_41))) - (32 + var_1_42));
 } else {
  if ((last_1_var_1_11 >> last_1_var_1_32) <= stepLocal_16) {
   var_1_39 = var_1_40;
  } else {
   if (var_1_23 <= ((((var_1_9) > (var_1_20)) ? (var_1_9) : (var_1_20)))) {
    var_1_39 = (var_1_40 + var_1_42);
   } else {
    var_1_39 = (((((var_1_42 + var_1_40)) < (var_1_41)) ? ((var_1_42 + var_1_40)) : (var_1_41)));
   }
  }
 }
 if (last_1_var_1_21) {
  var_1_32 = ((((last_1_var_1_45) < 0 ) ? -(last_1_var_1_45) : (last_1_var_1_45)));
 } else {
  if (var_1_10 < (var_1_20 * last_1_var_1_46)) {
   var_1_32 = ((((last_1_var_1_45 + 32u) < 0 ) ? -(last_1_var_1_45 + 32u) : (last_1_var_1_45 + 32u)));
  } else {
   var_1_32 = last_1_var_1_1;
  }
 }
 if ((var_1_9 * var_1_10) <= ((var_1_20 - var_1_8) / var_1_23)) {
  var_1_22 = (var_1_6 + last_1_var_1_39);
 } else {
  if (last_1_var_1_48) {
   var_1_22 = last_1_var_1_32;
  } else {
   var_1_22 = last_1_var_1_32;
  }
 }
 if (last_1_var_1_36 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) {
  if ((var_1_10 + (last_1_var_1_51 / var_1_9)) >= var_1_8) {
   var_1_11 = (last_1_var_1_11 - 256);
  }
 } else {
  if (last_1_var_1_48) {
   var_1_11 = last_1_var_1_36;
  } else {
   var_1_11 = last_1_var_1_36;
  }
 }
 if ((32 + (last_1_var_1_43 - last_1_var_1_24)) < 25) {
  var_1_15 = (var_1_5 + ((((last_1_var_1_33) < (last_1_var_1_43)) ? (last_1_var_1_33) : (last_1_var_1_43))));
 }
 signed long int stepLocal_1 = last_1_var_1_36;
 if (var_1_5 >= stepLocal_1) {
  var_1_13 = (((((((((var_1_14 - var_1_5)) > (var_1_6)) ? ((var_1_14 - var_1_5)) : (var_1_6)))) < (last_1_var_1_36)) ? ((((((var_1_14 - var_1_5)) > (var_1_6)) ? ((var_1_14 - var_1_5)) : (var_1_6)))) : (last_1_var_1_36)));
 } else {
  var_1_13 = ((((last_1_var_1_13) < 0 ) ? -(last_1_var_1_13) : (last_1_var_1_13)));
 }
 if (last_1_var_1_7 <= (((((last_1_var_1_51 / var_1_23)) > ((- var_1_8))) ? ((last_1_var_1_51 / var_1_23)) : ((- var_1_8))))) {
  var_1_48 = (last_1_var_1_48 || var_1_50);
 }
 if (var_1_48) {
  var_1_17 = (var_1_6 - 1);
 }
 if (var_1_48) {
  var_1_46 = var_1_20;
 }
 var_1_7 = (256.08 - (var_1_8 - (var_1_9 - var_1_10)));
 if (var_1_44 == var_1_9) {
  var_1_45 = -25;
 }
 signed long int stepLocal_3 = var_1_11 ^ (var_1_22 - 128);
 signed long int stepLocal_2 = - var_1_33;
 if (var_1_24 >= stepLocal_2) {
  if ((((((var_1_6) < (var_1_24)) ? (var_1_6) : (var_1_24))) / var_1_14) == stepLocal_3) {
   var_1_16 = -4;
  } else {
   var_1_16 = var_1_11;
  }
 } else {
  var_1_16 = var_1_15;
 }
 if (var_1_20 >= ((var_1_44 - var_1_10) - var_1_9)) {
  if (25 <= (var_1_15 / ((((var_1_28) < (var_1_14)) ? (var_1_28) : (var_1_14))))) {
   if (var_1_13 == var_1_33) {
    var_1_43 = 2;
   } else {
    var_1_43 = ((var_1_42 + var_1_41) + var_1_24);
   }
  } else {
   if (var_1_22 > 2) {
    var_1_43 = (((((10) < (var_1_42)) ? (10) : (var_1_42))) - 8);
   } else {
    var_1_43 = (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))));
   }
  }
 } else {
  if (var_1_22 != var_1_39) {
   var_1_43 = ((((var_1_24) < (var_1_40)) ? (var_1_24) : (var_1_40)));
  } else {
   var_1_43 = var_1_40;
  }
 }
 signed long int stepLocal_0 = 50 * var_1_39;
 if ((var_1_45 | var_1_13) >= stepLocal_0) {
  var_1_1 = ((((var_1_13) < (((((var_1_45) > ((var_1_5 + var_1_6))) ? (var_1_45) : ((var_1_5 + var_1_6)))))) ? (var_1_13) : (((((var_1_45) > ((var_1_5 + var_1_6))) ? (var_1_45) : ((var_1_5 + var_1_6)))))));
 }
 signed long int stepLocal_6 = (4 + var_1_22) - ((((var_1_6) < (var_1_11)) ? (var_1_6) : (var_1_11)));
 signed long int stepLocal_5 = (((var_1_1) < (((((var_1_17) > (var_1_5)) ? (var_1_17) : (var_1_5))))) ? (var_1_1) : (((((var_1_17) > (var_1_5)) ? (var_1_17) : (var_1_5)))));
 if (((((var_1_14) > (((((var_1_22) > (var_1_22)) ? (var_1_22) : (var_1_22))))) ? (var_1_14) : (((((var_1_22) > (var_1_22)) ? (var_1_22) : (var_1_22)))))) < stepLocal_5) {
  if ((var_1_5 % var_1_14) == stepLocal_6) {
   var_1_21 = 0;
  } else {
   var_1_21 = 0;
  }
 }
 if (5 >= var_1_15) {
  if (var_1_48) {
   if (! (! var_1_48)) {
    if (var_1_50 && var_1_48) {
     var_1_51 = var_1_9;
    } else {
     var_1_51 = var_1_20;
    }
   }
  } else {
   var_1_51 = var_1_8;
  }
 } else {
  var_1_51 = var_1_10;
 }
 unsigned short int stepLocal_4 = var_1_5;
 if (var_1_16 >= stepLocal_4) {
  var_1_19 = (((((var_1_8) < (var_1_20)) ? (var_1_8) : (var_1_20))) - var_1_9);
 }
 if (var_1_21) {
  var_1_47 = var_1_10;
 } else {
  var_1_47 = var_1_9;
 }
 signed long int stepLocal_14 = var_1_17;
 unsigned short int stepLocal_13 = var_1_15;
 unsigned char stepLocal_12 = var_1_15 != var_1_16;
 if (last_1_var_1_36 <= stepLocal_14) {
  if (var_1_21 && stepLocal_12) {
   if (var_1_5 > stepLocal_13) {
    var_1_36 = (var_1_22 - last_1_var_1_36);
   } else {
    var_1_36 = (var_1_5 + (var_1_45 - var_1_33));
   }
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 4611686.018427382800e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 2305843.009213691390e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 536870911);
 assume_abort_if_not(var_1_28 <= 1073741824);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 536870912);
 assume_abort_if_not(var_1_29 <= 1073741823);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 3221225470);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -1);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 4611686.018427387900e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_51 = var_1_51;
}
int property() {
 return ((((((((((((((((((((((var_1_45 | var_1_13) >= (50 * var_1_39)) ? (var_1_1 == ((unsigned short int) ((((var_1_13) < (((((var_1_45) > ((var_1_5 + var_1_6))) ? (var_1_45) : ((var_1_5 + var_1_6)))))) ? (var_1_13) : (((((var_1_45) > ((var_1_5 + var_1_6))) ? (var_1_45) : ((var_1_5 + var_1_6))))))))) : 1) && (var_1_7 == ((double) (256.08 - (var_1_8 - (var_1_9 - var_1_10)))))) && ((last_1_var_1_36 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? (((var_1_10 + (last_1_var_1_51 / var_1_9)) >= var_1_8) ? (var_1_11 == ((signed short int) (last_1_var_1_11 - 256))) : 1) : (last_1_var_1_48 ? (var_1_11 == ((signed short int) last_1_var_1_36)) : (var_1_11 == ((signed short int) last_1_var_1_36))))) && ((var_1_5 >= last_1_var_1_36) ? (var_1_13 == ((unsigned short int) (((((((((var_1_14 - var_1_5)) > (var_1_6)) ? ((var_1_14 - var_1_5)) : (var_1_6)))) < (last_1_var_1_36)) ? ((((((var_1_14 - var_1_5)) > (var_1_6)) ? ((var_1_14 - var_1_5)) : (var_1_6)))) : (last_1_var_1_36))))) : (var_1_13 == ((unsigned short int) ((((last_1_var_1_13) < 0 ) ? -(last_1_var_1_13) : (last_1_var_1_13))))))) && (((32 + (last_1_var_1_43 - last_1_var_1_24)) < 25) ? (var_1_15 == ((unsigned short int) (var_1_5 + ((((last_1_var_1_33) < (last_1_var_1_43)) ? (last_1_var_1_33) : (last_1_var_1_43)))))) : 1)) && ((var_1_24 >= (- var_1_33)) ? (((((((var_1_6) < (var_1_24)) ? (var_1_6) : (var_1_24))) / var_1_14) == (var_1_11 ^ (var_1_22 - 128))) ? (var_1_16 == ((signed short int) -4)) : (var_1_16 == ((signed short int) var_1_11))) : (var_1_16 == ((signed short int) var_1_15)))) && (var_1_48 ? (var_1_17 == ((signed long int) (var_1_6 - 1))) : 1)) && ((var_1_16 >= var_1_5) ? (var_1_19 == ((float) (((((var_1_8) < (var_1_20)) ? (var_1_8) : (var_1_20))) - var_1_9))) : 1)) && ((((((var_1_14) > (((((var_1_22) > (var_1_22)) ? (var_1_22) : (var_1_22))))) ? (var_1_14) : (((((var_1_22) > (var_1_22)) ? (var_1_22) : (var_1_22)))))) < ((((var_1_1) < (((((var_1_17) > (var_1_5)) ? (var_1_17) : (var_1_5))))) ? (var_1_1) : (((((var_1_17) > (var_1_5)) ? (var_1_17) : (var_1_5))))))) ? (((var_1_5 % var_1_14) == ((4 + var_1_22) - ((((var_1_6) < (var_1_11)) ? (var_1_6) : (var_1_11))))) ? (var_1_21 == ((unsigned char) 0)) : (var_1_21 == ((unsigned char) 0))) : 1)) && (((var_1_9 * var_1_10) <= ((var_1_20 - var_1_8) / var_1_23)) ? (var_1_22 == ((unsigned short int) (var_1_6 + last_1_var_1_39))) : (last_1_var_1_48 ? (var_1_22 == ((unsigned short int) last_1_var_1_32)) : (var_1_22 == ((unsigned short int) last_1_var_1_32))))) && ((((1.5 * var_1_20) * var_1_8) >= (var_1_10 * ((((var_1_9) < (32.5)) ? (var_1_9) : (32.5))))) ? (last_1_var_1_48 ? ((var_1_10 < var_1_9) ? (var_1_24 == ((unsigned long int) (((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) < (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))))) - last_1_var_1_32))) : (var_1_24 == ((unsigned long int) (var_1_27 - ((var_1_28 + var_1_29) - 10000000u))))) : ((var_1_27 == last_1_var_1_32) ? (var_1_24 == ((unsigned long int) (((((var_1_30 - last_1_var_1_13) < 0 ) ? -(var_1_30 - last_1_var_1_13) : (var_1_30 - last_1_var_1_13))) - var_1_28))) : ((! last_1_var_1_21) ? ((var_1_25 >= (var_1_5 + (var_1_27 - var_1_28))) ? (var_1_24 == ((unsigned long int) (((((var_1_27 - (last_1_var_1_17 + var_1_6))) > (8u)) ? ((var_1_27 - (last_1_var_1_17 + var_1_6))) : (8u))))) : 1) : (var_1_24 == ((unsigned long int) (var_1_14 + var_1_5)))))) : (last_1_var_1_21 ? (last_1_var_1_21 ? (((var_1_14 - last_1_var_1_32) == var_1_6) ? (var_1_24 == ((unsigned long int) (var_1_30 - ((((8u + 16u) < 0 ) ? -(8u + 16u) : (8u + 16u)))))) : 1) : 1) : ((last_1_var_1_15 == (last_1_var_1_17 * last_1_var_1_13)) ? ((((((((((last_1_var_1_1) < (var_1_26)) ? (last_1_var_1_1) : (var_1_26)))) > (var_1_28)) ? (((((last_1_var_1_1) < (var_1_26)) ? (last_1_var_1_1) : (var_1_26)))) : (var_1_28))) > ((((last_1_var_1_36) > (last_1_var_1_17)) ? (last_1_var_1_36) : (last_1_var_1_17)))) ? (var_1_24 == ((unsigned long int) (var_1_25 - var_1_14))) : (var_1_24 == ((unsigned long int) (var_1_25 - last_1_var_1_32)))) : (var_1_24 == ((unsigned long int) ((1823167497u - var_1_14) + ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))))) && (last_1_var_1_21 ? (var_1_32 == ((unsigned long int) ((((last_1_var_1_45) < 0 ) ? -(last_1_var_1_45) : (last_1_var_1_45))))) : ((var_1_10 < (var_1_20 * last_1_var_1_46)) ? (var_1_32 == ((unsigned long int) ((((last_1_var_1_45 + 32u) < 0 ) ? -(last_1_var_1_45 + 32u) : (last_1_var_1_45 + 32u))))) : (var_1_32 == ((unsigned long int) last_1_var_1_1))))) && ((last_1_var_1_11 <= (last_1_var_1_32 % 256)) ? (var_1_33 == ((signed long int) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : (((last_1_var_1_13 <= -4) && last_1_var_1_48) ? (var_1_33 == ((signed long int) ((((last_1_var_1_39) > (last_1_var_1_45)) ? (last_1_var_1_39) : (last_1_var_1_45))))) : (var_1_33 == ((signed long int) ((((last_1_var_1_43) > ((var_1_14 - last_1_var_1_33))) ? (last_1_var_1_43) : ((var_1_14 - last_1_var_1_33))))))))) && ((last_1_var_1_36 <= var_1_17) ? ((var_1_21 && (var_1_15 != var_1_16)) ? ((var_1_5 > var_1_15) ? (var_1_36 == ((signed long int) (var_1_22 - last_1_var_1_36))) : (var_1_36 == ((signed long int) (var_1_5 + (var_1_45 - var_1_33))))) : 1) : 1)) && ((last_1_var_1_17 <= last_1_var_1_36) ? (var_1_39 == ((signed char) ((((((64 - var_1_40)) < (var_1_41)) ? ((64 - var_1_40)) : (var_1_41))) - (32 + var_1_42)))) : (((last_1_var_1_11 >> last_1_var_1_32) <= last_1_var_1_13) ? (var_1_39 == ((signed char) var_1_40)) : ((var_1_23 <= ((((var_1_9) > (var_1_20)) ? (var_1_9) : (var_1_20)))) ? (var_1_39 == ((signed char) (var_1_40 + var_1_42))) : (var_1_39 == ((signed char) (((((var_1_42 + var_1_40)) < (var_1_41)) ? ((var_1_42 + var_1_40)) : (var_1_41))))))))) && ((var_1_20 >= ((var_1_44 - var_1_10) - var_1_9)) ? ((25 <= (var_1_15 / ((((var_1_28) < (var_1_14)) ? (var_1_28) : (var_1_14))))) ? ((var_1_13 == var_1_33) ? (var_1_43 == ((signed short int) 2)) : (var_1_43 == ((signed short int) ((var_1_42 + var_1_41) + var_1_24)))) : ((var_1_22 > 2) ? (var_1_43 == ((signed short int) (((((10) < (var_1_42)) ? (10) : (var_1_42))) - 8))) : (var_1_43 == ((signed short int) (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))))) : ((var_1_22 != var_1_39) ? (var_1_43 == ((signed short int) ((((var_1_24) < (var_1_40)) ? (var_1_24) : (var_1_40))))) : (var_1_43 == ((signed short int) var_1_40))))) && ((var_1_44 == var_1_9) ? (var_1_45 == ((signed long int) -25)) : 1)) && (var_1_48 ? (var_1_46 == ((double) var_1_20)) : 1)) && (var_1_21 ? (var_1_47 == ((float) var_1_10)) : (var_1_47 == ((float) var_1_9)))) && ((last_1_var_1_7 <= (((((last_1_var_1_51 / var_1_23)) > ((- var_1_8))) ? ((last_1_var_1_51 / var_1_23)) : ((- var_1_8))))) ? (var_1_48 == ((unsigned char) (last_1_var_1_48 || var_1_50))) : 1)) && ((5 >= var_1_15) ? (var_1_48 ? ((! (! var_1_48)) ? ((var_1_50 && var_1_48) ? (var_1_51 == ((double) var_1_9)) : (var_1_51 == ((double) var_1_20))) : 1) : (var_1_51 == ((double) var_1_8))) : (var_1_51 == ((double) var_1_10)))
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
