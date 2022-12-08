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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67PS_CN_100.c", 13, "reach_error"); }
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
unsigned long int var_1_33 = 16;
signed char var_1_34 = -4;
double var_1_35 = 32.2;
double var_1_36 = 7.5;
float var_1_37 = 0.9;
float var_1_38 = 1000.5;
float var_1_39 = 200.8;
unsigned long int var_1_40 = 0;
signed short int var_1_41 = 256;
signed short int var_1_42 = -64;
unsigned short int var_1_43 = 2;
unsigned short int var_1_44 = 53718;
unsigned short int var_1_45 = 32;
unsigned short int var_1_46 = 8;
unsigned short int var_1_47 = 256;
float var_1_48 = 200.625;
signed long int var_1_49 = 64;
unsigned short int var_1_50 = 2;
unsigned short int var_1_51 = 30074;
unsigned short int var_1_52 = 10;
signed long int var_1_53 = -1000000;
signed long int var_1_54 = -100000;
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
   var_1_29 = (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_33);
  }
 }
 var_1_34 = 50;
 if (var_1_30) {
  var_1_35 = ((((var_1_28) > (var_1_36)) ? (var_1_28) : (var_1_36)));
 }
 if (var_1_27 > var_1_23) {
  if (! var_1_30) {
   var_1_37 = ((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36)));
  }
 } else {
  var_1_37 = (var_1_38 - ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) > (var_1_39)) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : (var_1_39))));
 }
 if (var_1_23 > 64.15) {
  var_1_40 = ((((var_1_33) > ((var_1_31 - 5u))) ? (var_1_33) : ((var_1_31 - 5u))));
 } else {
  if (var_1_41 <= (var_1_25 % ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) {
   var_1_40 = (var_1_32 + ((((var_1_33) > (10u)) ? (var_1_33) : (10u))));
  } else {
   var_1_40 = var_1_32;
  }
 }
 if (var_1_39 == (- ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) {
  var_1_43 = (((((var_1_44 - var_1_45)) > (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) ? ((var_1_44 - var_1_45)) : (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))));
 }
 if (((var_1_34 * var_1_44) * var_1_26) > var_1_46) {
  if (var_1_32 <= var_1_46) {
   var_1_48 = ((((((((127.9f) < 0 ) ? -(127.9f) : (127.9f)))) > (((((var_1_38) > (var_1_28)) ? (var_1_38) : (var_1_28))))) ? (((((127.9f) < 0 ) ? -(127.9f) : (127.9f)))) : (((((var_1_38) > (var_1_28)) ? (var_1_38) : (var_1_28))))));
  } else {
   if (var_1_32 != var_1_29) {
    var_1_48 = (((((((var_1_39) > (0.75f)) ? (var_1_39) : (0.75f))) < 0 ) ? -((((var_1_39) > (0.75f)) ? (var_1_39) : (0.75f))) : ((((var_1_39) > (0.75f)) ? (var_1_39) : (0.75f)))));
   }
  }
 } else {
  var_1_48 = ((((((((-0.5f) < (var_1_36)) ? (-0.5f) : (var_1_36)))) > (var_1_38)) ? (((((-0.5f) < (var_1_36)) ? (-0.5f) : (var_1_36)))) : (var_1_38)));
 }
 if (var_1_38 <= var_1_28) {
  var_1_49 = (var_1_44 - (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) + (var_1_43 + var_1_46)));
 } else {
  var_1_49 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if (var_1_30) {
  var_1_50 = (128 + ((((var_1_51 - var_1_52) < 0 ) ? -(var_1_51 - var_1_52) : (var_1_51 - var_1_52))));
 } else {
  var_1_50 = ((((var_1_44) < (var_1_51)) ? (var_1_44) : (var_1_51)));
 }
 if (((((49.5) < 0 ) ? -(49.5) : (49.5))) >= (var_1_38 - var_1_39)) {
  var_1_53 = ((((var_1_47) < (var_1_43)) ? (var_1_47) : (var_1_43)));
 } else {
  var_1_53 = ((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) < (var_1_34)) ? (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) : (var_1_34)));
 }
 var_1_54 = var_1_24;
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
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= -32768);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= -32767);
 assume_abort_if_not(var_1_42 <= 32767);
 assume_abort_if_not(var_1_42 != 0);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 32767);
 assume_abort_if_not(var_1_44 <= 65534);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 32767);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 65534);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 65534);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 16383);
 assume_abort_if_not(var_1_51 <= 32767);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 16383);
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
