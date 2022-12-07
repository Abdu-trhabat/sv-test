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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 8.5;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 1;
unsigned long int var_1_21 = 50;
signed char var_1_22 = -4;
signed char var_1_23 = -10;
unsigned long int var_1_24 = 2;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 1;
signed long int var_1_27 = 25;
signed long int var_1_28 = -4;
unsigned long int var_1_29 = 32;
unsigned long int var_1_30 = 1;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 500;
double var_1_33 = 1.5;
unsigned char var_1_34 = 1;
double var_1_35 = 50.5;
double var_1_36 = 1.9;
unsigned long int var_1_37 = 10000;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
double var_1_40 = 15.5;
double var_1_41 = 0.21999999999999997;
unsigned long int var_1_42 = 128;
signed char var_1_43 = -1;
unsigned long int var_1_45 = 3550443056;
signed char var_1_46 = -8;
signed char var_1_47 = -5;
signed long int var_1_48 = 8;
signed long int var_1_49 = 5;
signed long int var_1_50 = 0;
signed short int var_1_51 = 10;
unsigned char var_1_52 = 25;
signed char var_1_53 = 2;
signed char var_1_54 = 100;
signed char var_1_55 = 8;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 128;
unsigned short int var_1_58 = 128;
unsigned short int var_1_59 = 56221;
float var_1_60 = 5.5;
float var_1_61 = 31.25;
float var_1_62 = 3.75;
double var_1_63 = 9.935;
signed char var_1_64 = 16;
signed char var_1_65 = 16;
signed long int last_1_var_1_9 = -50;
void initially(void) {
}
void step(void) {
 var_1_24 = var_1_25;
 if (var_1_25 != var_1_24) {
  if ((~ var_1_27) != (-50 >> var_1_25)) {
   var_1_26 = (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))) + (((((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) < 0 ) ? -((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) : ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))))));
  } else {
   var_1_26 = ((((var_1_29 + var_1_32) < 0 ) ? -(var_1_29 + var_1_32) : (var_1_29 + var_1_32)));
  }
 } else {
  var_1_26 = 16u;
 }
 if (var_1_34) {
  var_1_33 = (var_1_35 - var_1_36);
 }
 if (var_1_35 >= var_1_33) {
  if (var_1_24 > var_1_30) {
   var_1_37 = var_1_32;
  }
 }
 if (var_1_30 < ((var_1_26 + 16u) * var_1_37)) {
  if (var_1_34 && (var_1_35 < var_1_36)) {
   if (var_1_34) {
    if (var_1_37 <= var_1_25) {
     var_1_38 = (! var_1_39);
    }
   }
  }
 }
 if ((var_1_35 <= 64.5) && var_1_38) {
  var_1_40 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 } else {
  var_1_40 = var_1_36;
 }
 if (var_1_30 < var_1_26) {
  var_1_42 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 if (var_1_24 > (((((var_1_45 - var_1_30)) < (var_1_28)) ? ((var_1_45 - var_1_30)) : (var_1_28)))) {
  var_1_43 = var_1_46;
 } else {
  var_1_43 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
 }
 if (-128 > var_1_30) {
  var_1_48 = (var_1_49 - ((((25) < (var_1_50)) ? (25) : (var_1_50))));
 }
 if (var_1_39) {
  var_1_51 = (((((4 + var_1_47) + var_1_43) < 0 ) ? -((4 + var_1_47) + var_1_43) : ((4 + var_1_47) + var_1_43)));
 }
 if ((var_1_53 - (var_1_54 - var_1_55)) == var_1_37) {
  var_1_52 = (((((var_1_56) > (var_1_57)) ? (var_1_56) : (var_1_57))) - var_1_55);
 }
 if (((((32) < 0 ) ? -(32) : (32))) < (var_1_46 ^ var_1_30)) {
  var_1_58 = var_1_52;
 } else {
  var_1_58 = ((((((var_1_59 - var_1_55) - var_1_56)) < ((128 + var_1_52))) ? (((var_1_59 - var_1_55) - var_1_56)) : ((128 + var_1_52))));
 }
 if (var_1_45 <= var_1_42) {
  var_1_60 = (((((var_1_61 + ((((32.8f) > (var_1_62)) ? (32.8f) : (var_1_62))))) > (var_1_41)) ? ((var_1_61 + ((((32.8f) > (var_1_62)) ? (32.8f) : (var_1_62))))) : (var_1_41)));
 }
 if (var_1_33 > var_1_36) {
  if (var_1_39) {
   var_1_63 = var_1_41;
  }
 } else {
  if ((! var_1_34) || var_1_38) {
   var_1_63 = ((((((((var_1_41) > (var_1_36)) ? (var_1_41) : (var_1_36)))) < (var_1_62)) ? (((((var_1_41) > (var_1_36)) ? (var_1_41) : (var_1_36)))) : (var_1_62)));
  }
 }
 var_1_64 = (64 - ((((var_1_55 - var_1_65) < 0 ) ? -(var_1_55 - var_1_65) : (var_1_55 - var_1_65))));
 signed long int stepLocal_0 = last_1_var_1_9;
 if (stepLocal_0 < last_1_var_1_9) {
  var_1_4 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
 var_1_21 = var_1_6;
 var_1_22 = var_1_23;
 if ((var_1_21 / ((((64u) < 0 ) ? -(64u) : (64u)))) == var_1_4) {
  var_1_1 = (8.8 - 255.2);
 }
 unsigned long int stepLocal_4 = 4256310412u - 128u;
 if (var_1_4 >= stepLocal_4) {
  var_1_9 = (((((var_1_22 + var_1_22) < 0 ) ? -(var_1_22 + var_1_22) : (var_1_22 + var_1_22))) + var_1_22);
 }
 signed long int stepLocal_3 = var_1_9;
 unsigned long int stepLocal_2 = (((var_1_21) > (var_1_5)) ? (var_1_21) : (var_1_5));
 unsigned long int stepLocal_1 = var_1_21 ^ 4u;
 if (var_1_9 <= stepLocal_2) {
  if (stepLocal_3 < var_1_5) {
   if (var_1_9 >= stepLocal_1) {
    var_1_7 = var_1_8;
   }
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_21 >= (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) {
  if (var_1_16 < var_1_9) {
   var_1_13 = var_1_17;
  } else {
   var_1_13 = var_1_17;
  }
 } else {
  var_1_13 = var_1_18;
 }
 signed long int stepLocal_5 = (var_1_22 / 2) / var_1_20;
 if (stepLocal_5 >= (~ 100)) {
  if (var_1_13) {
   var_1_19 = (var_1_17 && var_1_18);
  }
 } else {
  if (var_1_17) {
   var_1_19 = var_1_18;
  } else {
   var_1_19 = var_1_18;
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 65535);
 assume_abort_if_not(var_1_20 != 0);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 assume_abort_if_not(var_1_27 != 0);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 assume_abort_if_not(var_1_28 != 0);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967295);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -126);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= -1);
 assume_abort_if_not(var_1_49 <= 2147483646);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 2147483646);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -1);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= 63);
 assume_abort_if_not(var_1_54 <= 127);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 127);
 assume_abort_if_not(var_1_56 <= 254);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 127);
 assume_abort_if_not(var_1_57 <= 254);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 49150);
 assume_abort_if_not(var_1_59 <= 65534);
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 126);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
}
int property() {
 return (((((((((var_1_21 / ((((64u) < 0 ) ? -(64u) : (64u)))) == var_1_4) ? (var_1_1 == ((double) (8.8 - 255.2))) : 1) && ((last_1_var_1_9 < last_1_var_1_9) ? (var_1_4 == ((unsigned long int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1)) && ((var_1_9 <= ((((var_1_21) > (var_1_5)) ? (var_1_21) : (var_1_5)))) ? ((var_1_9 < var_1_5) ? ((var_1_9 >= (var_1_21 ^ 4u)) ? (var_1_7 == ((float) var_1_8)) : 1) : (var_1_7 == ((float) var_1_8))) : (var_1_7 == ((float) var_1_8)))) && ((var_1_4 >= (4256310412u - 128u)) ? (var_1_9 == ((signed long int) (((((var_1_22 + var_1_22) < 0 ) ? -(var_1_22 + var_1_22) : (var_1_22 + var_1_22))) + var_1_22))) : 1)) && ((var_1_21 >= (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? ((var_1_16 < var_1_9) ? (var_1_13 == ((unsigned char) var_1_17)) : (var_1_13 == ((unsigned char) var_1_17))) : (var_1_13 == ((unsigned char) var_1_18)))) && ((((var_1_22 / 2) / var_1_20) >= (~ 100)) ? (var_1_13 ? (var_1_19 == ((unsigned char) (var_1_17 && var_1_18))) : 1) : (var_1_17 ? (var_1_19 == ((unsigned char) var_1_18)) : (var_1_19 == ((unsigned char) var_1_18))))) && (var_1_21 == ((unsigned long int) var_1_6))) && (var_1_22 == ((signed char) var_1_23))
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
