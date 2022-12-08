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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 99999999999.75;
float var_1_4 = 31.25;
float var_1_5 = 0.0;
float var_1_6 = 99.5;
float var_1_7 = 500.5;
double var_1_8 = 199.96;
double var_1_9 = 99.8;
unsigned char var_1_10 = 5;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 10;
float var_1_20 = 8.75;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 2;
double var_1_27 = 16.5;
signed long int var_1_28 = 5;
unsigned char var_1_29 = 5;
signed long int var_1_30 = 5;
signed long int var_1_31 = -128;
signed char var_1_32 = -5;
unsigned short int var_1_33 = 8;
signed char var_1_34 = -16;
signed char var_1_35 = 0;
signed char var_1_36 = 64;
signed char var_1_37 = 25;
unsigned char var_1_38 = 32;
signed char var_1_39 = -2;
signed char var_1_40 = -25;
signed char var_1_41 = -16;
signed long int var_1_42 = -8;
signed long int var_1_43 = 1594952725;
unsigned char var_1_44 = 10;
signed long int var_1_45 = 1000;
float var_1_46 = 3.4;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 8;
unsigned long int var_1_49 = 1107988926;
double var_1_50 = 8.25;
unsigned char var_1_51 = 32;
signed short int var_1_52 = -1;
signed long int last_1_var_1_31 = -128;
signed char last_1_var_1_32 = -5;
signed short int last_1_var_1_52 = -1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = var_1_12 - (var_1_16 - var_1_17);
 if (stepLocal_3 > ((((var_1_15) > (last_1_var_1_52)) ? (var_1_15) : (last_1_var_1_52)))) {
  if (var_1_11) {
   var_1_21 = var_1_22;
  } else {
   if (var_1_22) {
    var_1_21 = ((var_1_23 && var_1_24) && var_1_25);
   } else {
    var_1_21 = (var_1_24 || var_1_23);
   }
  }
 }
 signed long int stepLocal_0 = ~ last_1_var_1_32;
 if (stepLocal_0 <= last_1_var_1_31) {
  var_1_1 = (var_1_4 - (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))));
 }
 if (var_1_21) {
  var_1_10 = (var_1_12 - var_1_13);
 } else {
  if ((var_1_6 - var_1_9) == var_1_7) {
   var_1_10 = (((((((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) > (var_1_15)) ? (((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) : (var_1_15))) - ((((var_1_13) > ((var_1_16 - var_1_17))) ? (var_1_13) : ((var_1_16 - var_1_17)))));
  } else {
   var_1_10 = var_1_12;
  }
 }
 var_1_18 = ((((var_1_16) > (5)) ? (var_1_16) : (5)));
 var_1_26 = ((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15)));
 if (var_1_16 >= 5) {
  var_1_27 = ((((var_1_5) > (2.6)) ? (var_1_5) : (2.6)));
 } else {
  if (var_1_23) {
   var_1_27 = (var_1_7 + 255.56);
  } else {
   var_1_27 = ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5)));
  }
 }
 if (var_1_25) {
  var_1_28 = (var_1_14 + var_1_12);
 } else {
  var_1_28 = (1000000000 - var_1_13);
 }
 var_1_29 = (var_1_12 - ((((var_1_13) < (var_1_16)) ? (var_1_13) : (var_1_16))));
 if (! var_1_24) {
  var_1_38 = (var_1_12 - ((((16) > ((var_1_36 - var_1_33))) ? (16) : ((var_1_36 - var_1_33)))));
 }
 signed char stepLocal_14 = var_1_34;
 if (var_1_5 <= (var_1_27 + var_1_7)) {
  var_1_44 = (((((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))) < 0 ) ? -((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))) : ((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16)))));
 } else {
  if (var_1_18 > stepLocal_14) {
   var_1_44 = ((((var_1_13 + var_1_16) < 0 ) ? -(var_1_13 + var_1_16) : (var_1_13 + var_1_16)));
  }
 }
 unsigned char stepLocal_15 = (var_1_26 / var_1_36) == var_1_16;
 if (stepLocal_15 && (var_1_20 < (var_1_6 + var_1_27))) {
  var_1_45 = (var_1_36 - (var_1_26 + (var_1_12 + var_1_33)));
 }
 if (var_1_25) {
  var_1_50 = var_1_6;
 }
 if (var_1_7 > var_1_4) {
  var_1_51 = ((8 + ((((8) < (var_1_17)) ? (8) : (var_1_17)))) + var_1_36);
 }
 if (var_1_51 < (var_1_47 << var_1_28)) {
  if (var_1_21) {
   var_1_52 = var_1_36;
  }
 }
 unsigned char stepLocal_1 = var_1_38;
 if (var_1_4 < (var_1_1 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) {
  if (stepLocal_1 < var_1_45) {
   var_1_8 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_7);
  } else {
   var_1_8 = (var_1_7 - var_1_4);
  }
 } else {
  var_1_8 = (((((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) > (var_1_6)) ? ((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) : (var_1_6)));
 }
 signed short int stepLocal_11 = var_1_52;
 if (stepLocal_11 >= var_1_37) {
  var_1_41 = (((((var_1_36) > (var_1_35)) ? (var_1_36) : (var_1_35))) - var_1_17);
 }
 signed long int stepLocal_13 = (((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41));
 signed long int stepLocal_12 = var_1_44 % var_1_15;
 if (var_1_16 < stepLocal_12) {
  var_1_42 = ((((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) > (var_1_52)) ? (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) : (var_1_52)));
 } else {
  if (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) <= stepLocal_13) {
   var_1_42 = ((var_1_43 - var_1_15) - var_1_37);
  } else {
   var_1_42 = (var_1_45 + (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))));
  }
 }
 if (var_1_4 == 2.8f) {
  if (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) != var_1_44) {
   var_1_46 = ((0.19999999999999996f + ((((1.8f) > (var_1_6)) ? (1.8f) : (var_1_6)))) - var_1_9);
  } else {
   if (var_1_17 >= ((var_1_15 - var_1_47) + var_1_51)) {
    if (var_1_24) {
     var_1_46 = var_1_5;
    }
   } else {
    var_1_46 = (var_1_7 - ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))));
   }
  }
 }
 signed long int stepLocal_6 = var_1_29 + var_1_51;
 unsigned char stepLocal_5 = var_1_38;
 unsigned char stepLocal_4 = var_1_7 > var_1_6;
 if (stepLocal_4 || var_1_24) {
  var_1_31 = (var_1_14 + var_1_17);
 } else {
  if (var_1_13 != stepLocal_5) {
   var_1_31 = (var_1_42 + (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_29));
  } else {
   if (var_1_24) {
    var_1_31 = ((((var_1_14) < (var_1_42)) ? (var_1_14) : (var_1_42)));
   } else {
    if (var_1_25) {
     var_1_31 = (var_1_18 + var_1_15);
    } else {
     if (var_1_8 >= var_1_8) {
      if (stepLocal_6 < var_1_28) {
       var_1_31 = var_1_17;
      }
     } else {
      var_1_31 = var_1_17;
     }
    }
   }
  }
 }
 signed long int stepLocal_2 = var_1_42;
 if (var_1_52 >= stepLocal_2) {
  if ((var_1_1 + var_1_7) < (var_1_4 - (99999.625 + var_1_6))) {
   var_1_19 = (var_1_12 - 4);
  } else {
   if (var_1_5 != (var_1_7 + (var_1_6 / var_1_20))) {
    var_1_19 = ((((var_1_13) > ((((((var_1_15 - var_1_16)) > (var_1_12)) ? ((var_1_15 - var_1_16)) : (var_1_12))))) ? (var_1_13) : ((((((var_1_15 - var_1_16)) > (var_1_12)) ? ((var_1_15 - var_1_16)) : (var_1_12))))));
   }
  }
 } else {
  var_1_19 = var_1_16;
 }
 if (var_1_25 && ((var_1_1 < var_1_46) && (32 < var_1_13))) {
  var_1_30 = (var_1_14 + var_1_26);
 }
 signed long int stepLocal_9 = - var_1_51;
 unsigned char stepLocal_8 = var_1_17;
 unsigned char stepLocal_7 = var_1_38;
 if (var_1_9 <= var_1_4) {
  if (stepLocal_9 <= (((((var_1_38 * 16)) < (var_1_42)) ? ((var_1_38 * 16)) : (var_1_42)))) {
   if (var_1_23) {
    if ((- var_1_51) == stepLocal_7) {
     if ((var_1_42 >> ((((5) < (var_1_33)) ? (5) : (var_1_33)))) <= stepLocal_8) {
      var_1_32 = ((((var_1_17) < (((((1) > ((var_1_33 + var_1_34))) ? (1) : ((var_1_33 + var_1_34)))))) ? (var_1_17) : (((((1) > ((var_1_33 + var_1_34))) ? (1) : ((var_1_33 + var_1_34)))))));
     }
    } else {
     var_1_32 = ((((((((((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) < (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))) ? (((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) : (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))))) > ((var_1_35 - (var_1_36 - var_1_37)))) ? (((((((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) < (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))) ? (((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) : (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))))) : ((var_1_35 - (var_1_36 - var_1_37)))));
    }
   } else {
    if (var_1_24) {
     var_1_32 = ((((var_1_33) < ((((((var_1_17 - var_1_37)) < (var_1_34)) ? ((var_1_17 - var_1_37)) : (var_1_34))))) ? (var_1_33) : ((((((var_1_17 - var_1_37)) < (var_1_34)) ? ((var_1_17 - var_1_37)) : (var_1_34))))));
    } else {
     var_1_32 = ((((var_1_36) > (var_1_17)) ? (var_1_36) : (var_1_17)));
    }
   }
  }
 }
 if (! var_1_21) {
  var_1_48 = ((var_1_49 - var_1_41) + 256u);
 } else {
  var_1_48 = var_1_19;
 }
 unsigned long int stepLocal_10 = (var_1_28 + var_1_48) << var_1_34;
 if (stepLocal_10 > (var_1_16 | var_1_30)) {
  var_1_39 = var_1_34;
 } else {
  if (var_1_21) {
   var_1_39 = ((((((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35)))) > (((((var_1_40) < (var_1_33)) ? (var_1_40) : (var_1_33))))) ? (((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35)))) : (((((var_1_40) < (var_1_33)) ? (var_1_40) : (var_1_33))))));
  } else {
   var_1_39 = (-1 - var_1_37);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 127);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 63);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 assume_abort_if_not(var_1_20 != 0.0F);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 9);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -63);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -1);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_43 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_43 >= 1073741822);
 assume_abort_if_not(var_1_43 <= 2147483646);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 1073741823);
 assume_abort_if_not(var_1_49 <= 2147483647);
}
void updateLastVariables() {
 last_1_var_1_31 = var_1_31;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_52 = var_1_52;
}
int property() {
 return (((((((((((((((((((((((((~ last_1_var_1_32) <= last_1_var_1_31) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))))) : 1) && ((var_1_4 < (var_1_1 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? ((var_1_38 < var_1_45) ? (var_1_8 == ((double) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_7))) : (var_1_8 == ((double) (var_1_7 - var_1_4)))) : (var_1_8 == ((double) (((((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) > (var_1_6)) ? ((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) : (var_1_6))))))) && (var_1_21 ? (var_1_10 == ((unsigned char) (var_1_12 - var_1_13))) : (((var_1_6 - var_1_9) == var_1_7) ? (var_1_10 == ((unsigned char) (((((((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) > (var_1_15)) ? (((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) : (var_1_15))) - ((((var_1_13) > ((var_1_16 - var_1_17))) ? (var_1_13) : ((var_1_16 - var_1_17))))))) : (var_1_10 == ((unsigned char) var_1_12))))) && (var_1_18 == ((unsigned char) ((((var_1_16) > (5)) ? (var_1_16) : (5)))))) && ((var_1_52 >= var_1_42) ? (((var_1_1 + var_1_7) < (var_1_4 - (99999.625 + var_1_6))) ? (var_1_19 == ((unsigned char) (var_1_12 - 4))) : ((var_1_5 != (var_1_7 + (var_1_6 / var_1_20))) ? (var_1_19 == ((unsigned char) ((((var_1_13) > ((((((var_1_15 - var_1_16)) > (var_1_12)) ? ((var_1_15 - var_1_16)) : (var_1_12))))) ? (var_1_13) : ((((((var_1_15 - var_1_16)) > (var_1_12)) ? ((var_1_15 - var_1_16)) : (var_1_12)))))))) : 1)) : (var_1_19 == ((unsigned char) var_1_16)))) && (((var_1_12 - (var_1_16 - var_1_17)) > ((((var_1_15) > (last_1_var_1_52)) ? (var_1_15) : (last_1_var_1_52)))) ? (var_1_11 ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_22 ? (var_1_21 == ((unsigned char) ((var_1_23 && var_1_24) && var_1_25))) : (var_1_21 == ((unsigned char) (var_1_24 || var_1_23))))) : 1)) && (var_1_26 == ((unsigned short int) ((((var_1_12) > (var_1_15)) ? (var_1_12) : (var_1_15)))))) && ((var_1_16 >= 5) ? (var_1_27 == ((double) ((((var_1_5) > (2.6)) ? (var_1_5) : (2.6))))) : (var_1_23 ? (var_1_27 == ((double) (var_1_7 + 255.56))) : (var_1_27 == ((double) ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5)))))))) && (var_1_25 ? (var_1_28 == ((signed long int) (var_1_14 + var_1_12))) : (var_1_28 == ((signed long int) (1000000000 - var_1_13))))) && (var_1_29 == ((unsigned char) (var_1_12 - ((((var_1_13) < (var_1_16)) ? (var_1_13) : (var_1_16))))))) && ((var_1_25 && ((var_1_1 < var_1_46) && (32 < var_1_13))) ? (var_1_30 == ((signed long int) (var_1_14 + var_1_26))) : 1)) && (((var_1_7 > var_1_6) || var_1_24) ? (var_1_31 == ((signed long int) (var_1_14 + var_1_17))) : ((var_1_13 != var_1_38) ? (var_1_31 == ((signed long int) (var_1_42 + (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_29)))) : (var_1_24 ? (var_1_31 == ((signed long int) ((((var_1_14) < (var_1_42)) ? (var_1_14) : (var_1_42))))) : (var_1_25 ? (var_1_31 == ((signed long int) (var_1_18 + var_1_15))) : ((var_1_8 >= var_1_8) ? (((var_1_29 + var_1_51) < var_1_28) ? (var_1_31 == ((signed long int) var_1_17)) : 1) : (var_1_31 == ((signed long int) var_1_17)))))))) && ((var_1_9 <= var_1_4) ? (((- var_1_51) <= (((((var_1_38 * 16)) < (var_1_42)) ? ((var_1_38 * 16)) : (var_1_42)))) ? (var_1_23 ? (((- var_1_51) == var_1_38) ? (((var_1_42 >> ((((5) < (var_1_33)) ? (5) : (var_1_33)))) <= var_1_17) ? (var_1_32 == ((signed char) ((((var_1_17) < (((((1) > ((var_1_33 + var_1_34))) ? (1) : ((var_1_33 + var_1_34)))))) ? (var_1_17) : (((((1) > ((var_1_33 + var_1_34))) ? (1) : ((var_1_33 + var_1_34))))))))) : 1) : (var_1_32 == ((signed char) ((((((((((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) < (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))) ? (((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) : (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))))) > ((var_1_35 - (var_1_36 - var_1_37)))) ? (((((((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) < (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))) ? (((((var_1_33) < (-10)) ? (var_1_33) : (-10)))) : (((((var_1_34) < (var_1_17)) ? (var_1_34) : (var_1_17))))))) : ((var_1_35 - (var_1_36 - var_1_37)))))))) : (var_1_24 ? (var_1_32 == ((signed char) ((((var_1_33) < ((((((var_1_17 - var_1_37)) < (var_1_34)) ? ((var_1_17 - var_1_37)) : (var_1_34))))) ? (var_1_33) : ((((((var_1_17 - var_1_37)) < (var_1_34)) ? ((var_1_17 - var_1_37)) : (var_1_34)))))))) : (var_1_32 == ((signed char) ((((var_1_36) > (var_1_17)) ? (var_1_36) : (var_1_17))))))) : 1) : 1)) && ((! var_1_24) ? (var_1_38 == ((unsigned char) (var_1_12 - ((((16) > ((var_1_36 - var_1_33))) ? (16) : ((var_1_36 - var_1_33))))))) : 1)) && ((((var_1_28 + var_1_48) << var_1_34) > (var_1_16 | var_1_30)) ? (var_1_39 == ((signed char) var_1_34)) : (var_1_21 ? (var_1_39 == ((signed char) ((((((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35)))) > (((((var_1_40) < (var_1_33)) ? (var_1_40) : (var_1_33))))) ? (((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35)))) : (((((var_1_40) < (var_1_33)) ? (var_1_40) : (var_1_33)))))))) : (var_1_39 == ((signed char) (-1 - var_1_37)))))) && ((var_1_52 >= var_1_37) ? (var_1_41 == ((signed char) (((((var_1_36) > (var_1_35)) ? (var_1_36) : (var_1_35))) - var_1_17))) : 1)) && ((var_1_16 < (var_1_44 % var_1_15)) ? (var_1_42 == ((signed long int) ((((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) > (var_1_52)) ? (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) : (var_1_52))))) : ((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) <= ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) ? (var_1_42 == ((signed long int) ((var_1_43 - var_1_15) - var_1_37))) : (var_1_42 == ((signed long int) (var_1_45 + (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))))) && ((var_1_5 <= (var_1_27 + var_1_7)) ? (var_1_44 == ((unsigned char) (((((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))) < 0 ) ? -((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))) : ((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))))))) : ((var_1_18 > var_1_34) ? (var_1_44 == ((unsigned char) ((((var_1_13 + var_1_16) < 0 ) ? -(var_1_13 + var_1_16) : (var_1_13 + var_1_16))))) : 1))) && ((((var_1_26 / var_1_36) == var_1_16) && (var_1_20 < (var_1_6 + var_1_27))) ? (var_1_45 == ((signed long int) (var_1_36 - (var_1_26 + (var_1_12 + var_1_33))))) : 1)) && ((var_1_4 == 2.8f) ? ((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) != var_1_44) ? (var_1_46 == ((float) ((0.19999999999999996f + ((((1.8f) > (var_1_6)) ? (1.8f) : (var_1_6)))) - var_1_9))) : ((var_1_17 >= ((var_1_15 - var_1_47) + var_1_51)) ? (var_1_24 ? (var_1_46 == ((float) var_1_5)) : 1) : (var_1_46 == ((float) (var_1_7 - ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))))))) : 1)) && ((! var_1_21) ? (var_1_48 == ((unsigned long int) ((var_1_49 - var_1_41) + 256u))) : (var_1_48 == ((unsigned long int) var_1_19)))) && (var_1_25 ? (var_1_50 == ((double) var_1_6)) : 1)) && ((var_1_7 > var_1_4) ? (var_1_51 == ((unsigned char) ((8 + ((((8) < (var_1_17)) ? (8) : (var_1_17)))) + var_1_36))) : 1)) && ((var_1_51 < (var_1_47 << var_1_28)) ? (var_1_21 ? (var_1_52 == ((signed short int) var_1_36)) : 1) : 1)
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
