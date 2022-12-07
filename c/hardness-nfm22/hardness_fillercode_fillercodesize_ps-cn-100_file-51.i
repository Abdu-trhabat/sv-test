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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned long int var_1_15 = 1114432789;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
float var_1_25 = -0.575;
signed char var_1_26 = -128;
signed char var_1_27 = 5;
signed char var_1_28 = 1;
signed long int var_1_29 = 1;
float var_1_30 = 10.8;
float var_1_31 = 49.2;
float var_1_32 = 0.4;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 64;
signed char var_1_38 = -8;
signed char var_1_39 = 4;
float var_1_40 = 255.5;
float var_1_41 = 49.4;
unsigned short int var_1_42 = 4;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
float var_1_47 = 1.25;
float var_1_48 = 100.08;
double var_1_49 = 127.4;
signed long int var_1_50 = -2;
float var_1_51 = 99.7;
signed long int var_1_52 = 10000;
unsigned char last_1_var_1_1 = 128;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_17 = 256.8;
unsigned char last_1_var_1_21 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_26 % ((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) > var_1_29) {
  var_1_25 = (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_32);
 }
 if (var_1_32 < ((((var_1_30) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_30) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))) {
  var_1_33 = ((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35)));
 } else {
  if (var_1_36) {
   var_1_33 = ((64 + var_1_37) - 50);
  }
 }
 if (var_1_36) {
  var_1_38 = ((((-8) > (var_1_39)) ? (-8) : (var_1_39)));
 }
 if ((var_1_34 / var_1_37) != (var_1_29 | var_1_39)) {
  var_1_40 = (var_1_31 - ((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))));
 }
 if (var_1_36) {
  var_1_41 = ((((((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))) < (var_1_30)) ? (((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))) : (var_1_30)));
 }
 if (! var_1_36) {
  var_1_42 = ((((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) < 0 ) ? -(((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))));
 }
 if (var_1_37 > var_1_29) {
  var_1_43 = ((var_1_36 && var_1_44) || (! (var_1_45 || var_1_46)));
 } else {
  if (var_1_35 < 32) {
   var_1_43 = var_1_46;
  }
 }
 if (var_1_37 > (var_1_33 ^ 16)) {
  var_1_47 = var_1_32;
 }
 if (var_1_34 > var_1_26) {
  var_1_48 = (((((4.875f) < 0 ) ? -(4.875f) : (4.875f))) - var_1_31);
 } else {
  if (var_1_30 < (- var_1_41)) {
   var_1_48 = (31.6f - ((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))));
  } else {
   if (var_1_43 && var_1_45) {
    if (var_1_41 != var_1_30) {
     var_1_48 = ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)));
    }
   }
  }
 }
 if (var_1_45) {
  if (((((var_1_47) < (var_1_30)) ? (var_1_47) : (var_1_30))) > var_1_25) {
   if (var_1_27 >= var_1_39) {
    var_1_49 = var_1_31;
   } else {
    var_1_49 = ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)));
   }
  }
 }
 if (var_1_45) {
  if (((((var_1_35) < (128)) ? (var_1_35) : (128))) > var_1_29) {
   var_1_50 = (((((((var_1_34 - var_1_42) < 0 ) ? -(var_1_34 - var_1_42) : (var_1_34 - var_1_42))) < 0 ) ? -((((var_1_34 - var_1_42) < 0 ) ? -(var_1_34 - var_1_42) : (var_1_34 - var_1_42))) : ((((var_1_34 - var_1_42) < 0 ) ? -(var_1_34 - var_1_42) : (var_1_34 - var_1_42)))));
  }
 } else {
  var_1_50 = (var_1_34 - (var_1_35 + var_1_37));
 }
 if (4 >= ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) {
  var_1_51 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 }
 if ((var_1_50 / var_1_28) < var_1_37) {
  if (31.5f == var_1_31) {
   var_1_52 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
  }
 } else {
  var_1_52 = var_1_26;
 }
 unsigned char stepLocal_3 = ((((var_1_4) > (last_1_var_1_17)) ? (var_1_4) : (last_1_var_1_17))) > var_1_18;
 if (last_1_var_1_21 || stepLocal_3) {
  if (var_1_18 > ((((last_1_var_1_17) < 0 ) ? -(last_1_var_1_17) : (last_1_var_1_17)))) {
   var_1_19 = last_1_var_1_1;
  } else {
   var_1_19 = var_1_11;
  }
 } else {
  var_1_19 = last_1_var_1_1;
 }
 unsigned long int stepLocal_1 = last_1_var_1_12;
 unsigned long int stepLocal_0 = 32u;
 if (stepLocal_0 >= last_1_var_1_12) {
  if (stepLocal_1 <= last_1_var_1_12) {
   if ((var_1_4 - var_1_5) >= last_1_var_1_17) {
    var_1_1 = var_1_7;
   }
  }
 } else {
  var_1_1 = var_1_7;
 }
 if ((((((~ var_1_1)) < (8)) ? ((~ var_1_1)) : (8))) > var_1_11) {
  var_1_17 = var_1_18;
 }
 if (! (var_1_17 > var_1_5)) {
  var_1_8 = (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) - var_1_11);
 } else {
  var_1_8 = -4;
 }
 unsigned long int stepLocal_4 = var_1_19;
 if ((var_1_18 / ((((5.5) > (var_1_22)) ? (5.5) : (var_1_22)))) > 10.5) {
  if (var_1_13) {
   if (var_1_1 < stepLocal_4) {
    var_1_21 = (! var_1_23);
   } else {
    var_1_21 = var_1_24;
   }
  } else {
   var_1_21 = var_1_23;
  }
 } else {
  var_1_21 = var_1_23;
 }
 unsigned char stepLocal_2 = var_1_21;
 if (var_1_21 && stepLocal_2) {
  var_1_12 = var_1_11;
 } else {
  if (var_1_21) {
   var_1_12 = (((((var_1_19) > ((var_1_11 + var_1_7))) ? (var_1_19) : ((var_1_11 + var_1_7)))) + (var_1_15 - var_1_1));
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 1073741823);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 assume_abort_if_not(var_1_22 != 0.0F);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -128);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -128);
 assume_abort_if_not(var_1_27 <= 127);
 assume_abort_if_not(var_1_27 != 0);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -128);
 assume_abort_if_not(var_1_28 <= 127);
 assume_abort_if_not(var_1_28 != 0);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 64);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_21 = var_1_21;
}
int property() {
 return ((((((32u >= last_1_var_1_12) ? ((last_1_var_1_12 <= last_1_var_1_12) ? (((var_1_4 - var_1_5) >= last_1_var_1_17) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((! (var_1_17 > var_1_5)) ? (var_1_8 == ((signed char) (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) - var_1_11))) : (var_1_8 == ((signed char) -4)))) && ((var_1_21 && var_1_21) ? (var_1_12 == ((unsigned long int) var_1_11)) : (var_1_21 ? (var_1_12 == ((unsigned long int) (((((var_1_19) > ((var_1_11 + var_1_7))) ? (var_1_19) : ((var_1_11 + var_1_7)))) + (var_1_15 - var_1_1)))) : 1))) && (((((((~ var_1_1)) < (8)) ? ((~ var_1_1)) : (8))) > var_1_11) ? (var_1_17 == ((double) var_1_18)) : 1)) && ((last_1_var_1_21 || (((((var_1_4) > (last_1_var_1_17)) ? (var_1_4) : (last_1_var_1_17))) > var_1_18)) ? ((var_1_18 > ((((last_1_var_1_17) < 0 ) ? -(last_1_var_1_17) : (last_1_var_1_17)))) ? (var_1_19 == ((unsigned long int) last_1_var_1_1)) : (var_1_19 == ((unsigned long int) var_1_11))) : (var_1_19 == ((unsigned long int) last_1_var_1_1)))) && (((var_1_18 / ((((5.5) > (var_1_22)) ? (5.5) : (var_1_22)))) > 10.5) ? (var_1_13 ? ((var_1_1 < var_1_19) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23)))
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
