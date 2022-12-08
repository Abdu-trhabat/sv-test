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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch15Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -10;
float var_1_3 = 32.4;
float var_1_4 = 49.2;
signed short int var_1_7 = 10;
signed short int var_1_8 = 64;
signed short int var_1_9 = 256;
signed char var_1_10 = -5;
signed char var_1_11 = 5;
double var_1_12 = 256.4;
float var_1_13 = 2.6;
float var_1_14 = 128.125;
double var_1_15 = 32.5;
double var_1_16 = 10000000000.25;
signed char var_1_17 = -5;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1;
signed short int var_1_22 = 17178;
signed short int var_1_23 = 5;
signed long int var_1_25 = -4;
signed short int var_1_26 = 10;
unsigned char var_1_27 = 0;
signed short int var_1_28 = -16;
signed short int var_1_29 = 32;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
signed short int var_1_32 = 0;
signed short int var_1_33 = 10;
signed long int var_1_34 = -10;
signed long int var_1_35 = 200;
double var_1_36 = 4.85;
double var_1_37 = 2.5;
double var_1_38 = 15.75;
signed char var_1_39 = -100;
signed char var_1_40 = 1;
signed short int var_1_41 = -32;
signed char var_1_42 = 4;
signed char var_1_43 = -8;
signed short int var_1_44 = -25;
signed char last_1_var_1_10 = -5;
signed long int last_1_var_1_21 = 1;
signed long int last_1_var_1_25 = -4;
void initially(void) {
}
void step(void) {
 if (! var_1_27) {
  if (var_1_27) {
   var_1_26 = (((((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) < 0 ) ? -((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) : ((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))));
  } else {
   if (var_1_29 >= 25) {
    if ((0 > var_1_29) || var_1_30) {
     var_1_26 = (((((((-50) < 0 ) ? -(-50) : (-50))) < 0 ) ? -((((-50) < 0 ) ? -(-50) : (-50))) : ((((-50) < 0 ) ? -(-50) : (-50)))));
    } else {
     if (var_1_31) {
      var_1_26 = (var_1_32 - var_1_33);
     } else {
      var_1_26 = var_1_32;
     }
    }
   } else {
    var_1_26 = var_1_29;
   }
  }
 }
 var_1_34 = ((((128) < (((((var_1_35) > ((-5 + var_1_29))) ? (var_1_35) : ((-5 + var_1_29)))))) ? (128) : (((((var_1_35) > ((-5 + var_1_29))) ? (var_1_35) : ((-5 + var_1_29)))))));
 if (var_1_27) {
  var_1_36 = (((((4.2) < (var_1_37)) ? (4.2) : (var_1_37))) - ((8.021944736140885E18 - var_1_38) - 16.75));
 } else {
  var_1_36 = ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)));
 }
 var_1_39 = var_1_40;
 if (var_1_31) {
  var_1_41 = ((((((((var_1_40) < (var_1_32)) ? (var_1_40) : (var_1_32)))) > (var_1_28)) ? (((((var_1_40) < (var_1_32)) ? (var_1_40) : (var_1_32)))) : (var_1_28)));
 }
 if (var_1_33 <= var_1_35) {
  var_1_42 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 }
 if ((! var_1_27) || var_1_31) {
  var_1_44 = var_1_28;
 } else {
  if (var_1_30 || var_1_27) {
   var_1_44 = var_1_43;
  } else {
   if (4u >= var_1_33) {
    var_1_44 = var_1_33;
   } else {
    var_1_44 = 2;
   }
  }
 }
 if (last_1_var_1_10 < last_1_var_1_25) {
  if (var_1_11 <= last_1_var_1_25) {
   var_1_19 = var_1_20;
  }
 }
 var_1_10 = var_1_11;
 if (var_1_4 >= (var_1_3 * (var_1_13 + var_1_14))) {
  var_1_12 = (((((var_1_15 - var_1_16)) < (-0.85)) ? ((var_1_15 - var_1_16)) : (-0.85)));
 } else {
  var_1_12 = var_1_16;
 }
 unsigned char stepLocal_1 = var_1_19;
 if (var_1_12 <= ((((var_1_12) < (var_1_12)) ? (var_1_12) : (var_1_12)))) {
  if (var_1_19 || stepLocal_1) {
   var_1_17 = var_1_11;
  } else {
   var_1_17 = var_1_11;
  }
 }
 if (var_1_19) {
  var_1_25 = (var_1_17 + ((((var_1_17) < (((((var_1_8) < (var_1_17)) ? (var_1_8) : (var_1_17))))) ? (var_1_17) : (((((var_1_8) < (var_1_17)) ? (var_1_8) : (var_1_17)))))));
 } else {
  var_1_25 = var_1_10;
 }
 unsigned char stepLocal_0 = var_1_12 > var_1_12;
 if (var_1_19 || stepLocal_0) {
  var_1_1 = (var_1_17 + var_1_17);
 } else {
  var_1_1 = ((((((var_1_7 + 1)) < (var_1_8)) ? ((var_1_7 + 1)) : (var_1_8))) - (24762 - var_1_9));
 }
 signed long int stepLocal_3 = var_1_22 + var_1_11;
 signed long int stepLocal_2 = (var_1_22 - var_1_23) - var_1_9;
 if (var_1_20) {
  if (var_1_10 < stepLocal_2) {
   if (var_1_19) {
    if (last_1_var_1_21 == stepLocal_3) {
     var_1_21 = var_1_1;
    }
   } else {
    var_1_21 = var_1_10;
   }
  } else {
   var_1_21 = var_1_11;
  }
 } else {
  var_1_21 = var_1_9;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 16383);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16384);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32766);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32766);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -1);
 assume_abort_if_not(var_1_32 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32766);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483647);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -126);
 assume_abort_if_not(var_1_43 <= 126);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_25 = var_1_25;
}
int property() {
 return (((((((var_1_19 || (var_1_12 > var_1_12)) ? (var_1_1 == ((signed short int) (var_1_17 + var_1_17))) : (var_1_1 == ((signed short int) ((((((var_1_7 + 1)) < (var_1_8)) ? ((var_1_7 + 1)) : (var_1_8))) - (24762 - var_1_9))))) && (var_1_10 == ((signed char) var_1_11))) && ((var_1_4 >= (var_1_3 * (var_1_13 + var_1_14))) ? (var_1_12 == ((double) (((((var_1_15 - var_1_16)) < (-0.85)) ? ((var_1_15 - var_1_16)) : (-0.85))))) : (var_1_12 == ((double) var_1_16)))) && ((var_1_12 <= ((((var_1_12) < (var_1_12)) ? (var_1_12) : (var_1_12)))) ? ((var_1_19 || var_1_19) ? (var_1_17 == ((signed char) var_1_11)) : (var_1_17 == ((signed char) var_1_11))) : 1)) && ((last_1_var_1_10 < last_1_var_1_25) ? ((var_1_11 <= last_1_var_1_25) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_20 ? ((var_1_10 < ((var_1_22 - var_1_23) - var_1_9)) ? (var_1_19 ? ((last_1_var_1_21 == (var_1_22 + var_1_11)) ? (var_1_21 == ((signed long int) var_1_1)) : 1) : (var_1_21 == ((signed long int) var_1_10))) : (var_1_21 == ((signed long int) var_1_11))) : (var_1_21 == ((signed long int) var_1_9)))) && (var_1_19 ? (var_1_25 == ((signed long int) (var_1_17 + ((((var_1_17) < (((((var_1_8) < (var_1_17)) ? (var_1_8) : (var_1_17))))) ? (var_1_17) : (((((var_1_8) < (var_1_17)) ? (var_1_8) : (var_1_17))))))))) : (var_1_25 == ((signed long int) var_1_10)))
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
