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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed char var_1_3 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 50;
double var_1_9 = 32.7;
double var_1_10 = 64.25;
double var_1_11 = 10.3;
double var_1_12 = 3.3;
double var_1_13 = 16.5;
double var_1_14 = 7.125;
unsigned short int var_1_15 = 50;
unsigned short int var_1_16 = 16;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 64;
unsigned long int var_1_19 = 16;
signed short int var_1_20 = 100;
signed short int var_1_21 = 2;
signed short int var_1_22 = 8;
signed long int var_1_23 = -4;
unsigned short int var_1_24 = 128;
signed long int var_1_25 = 2;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
signed char var_1_29 = -100;
signed char var_1_30 = -64;
signed long int var_1_31 = -32;
float var_1_32 = 1.5;
float var_1_33 = 0.375;
float var_1_34 = 999999999.85;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed short int var_1_37 = -256;
float var_1_38 = 5.25;
float var_1_39 = 500.25;
double var_1_40 = 31.25;
double var_1_41 = 4.75;
unsigned long int var_1_42 = 8;
signed char var_1_43 = 16;
unsigned long int var_1_44 = 5;
unsigned long int var_1_45 = 2;
signed short int var_1_46 = 128;
unsigned long int var_1_47 = 3650830092;
unsigned long int var_1_48 = 4;
signed short int var_1_49 = 100;
signed short int var_1_50 = 500;
double var_1_51 = 4.5;
signed char var_1_52 = -10;
signed char var_1_53 = -64;
signed char var_1_54 = 50;
unsigned char var_1_55 = 25;
unsigned char var_1_56 = 4;
unsigned char var_1_57 = 1;
unsigned long int var_1_58 = 25;
unsigned long int var_1_59 = 2673334989;
signed short int var_1_60 = -5;
signed long int var_1_61 = 500;
signed char var_1_62 = 16;
signed long int last_1_var_1_8 = 50;
unsigned long int last_1_var_1_19 = 16;
unsigned char last_1_var_1_27 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_29 * var_1_30) == var_1_31) {
  if (var_1_31 > var_1_29) {
   var_1_28 = (((var_1_32 * var_1_33) > (16.6f / var_1_34)) && var_1_35);
  }
 } else {
  if (5 <= ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) {
   var_1_28 = ((var_1_33 >= var_1_34) || var_1_36);
  }
 }
 if (var_1_36) {
  var_1_37 = (((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) < 0 ) ? -((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) : ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))));
 } else {
  if (var_1_33 >= (var_1_38 - var_1_39)) {
   var_1_37 = ((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)));
  } else {
   if (var_1_29 > var_1_30) {
    var_1_37 = var_1_30;
   } else {
    var_1_37 = var_1_29;
   }
  }
 }
 if ((var_1_30 ^ 8) > (var_1_37 * var_1_31)) {
  var_1_40 = 31.4;
 } else {
  var_1_40 = var_1_41;
 }
 if (var_1_30 < ((-64 << var_1_37) % ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) {
  if (((((var_1_33) < (((((1.000000000003E11) < 0 ) ? -(1.000000000003E11) : (1.000000000003E11))))) ? (var_1_33) : (((((1.000000000003E11) < 0 ) ? -(1.000000000003E11) : (1.000000000003E11)))))) >= var_1_34) {
   var_1_42 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
  } else {
   if (var_1_36) {
    var_1_42 = (var_1_45 + 2u);
   } else {
    var_1_42 = (3843588176u - (((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) < 0 ) ? -((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) : ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))));
   }
  }
 }
 if (var_1_45 != (var_1_47 - var_1_48)) {
  var_1_46 = (var_1_49 - ((((var_1_50) < (5)) ? (var_1_50) : (5))));
 } else {
  var_1_46 = var_1_29;
 }
 if (var_1_44 < (var_1_42 >> var_1_45)) {
  if (var_1_32 > ((var_1_41 * var_1_38) + var_1_40)) {
   var_1_51 = var_1_41;
  }
 } else {
  var_1_51 = var_1_41;
 }
 if (var_1_38 >= ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) {
  if (var_1_34 < ((((var_1_33) < (var_1_40)) ? (var_1_33) : (var_1_40)))) {
   if (((var_1_30 % var_1_43) + -100) < var_1_48) {
    if (var_1_43 < var_1_42) {
     var_1_52 = var_1_53;
    } else {
     var_1_52 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
    }
   }
  } else {
   var_1_52 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
  }
 }
 if (-10 < var_1_52) {
  var_1_55 = (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) + var_1_57);
 }
 if (var_1_45 >= var_1_44) {
  var_1_58 = (var_1_59 - (((((var_1_50) < (var_1_56)) ? (var_1_50) : (var_1_56))) + var_1_57));
 }
 var_1_60 = var_1_52;
 var_1_61 = var_1_54;
 var_1_62 = var_1_54;
 signed long int stepLocal_1 = -1 << last_1_var_1_19;
 unsigned long int stepLocal_0 = -1000000000 + last_1_var_1_19;
 if (stepLocal_1 < var_1_3) {
  if ((last_1_var_1_19 / var_1_3) > stepLocal_0) {
   var_1_1 = (last_1_var_1_27 || var_1_6);
  } else {
   var_1_1 = var_1_7;
  }
 }
 var_1_9 = (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + (var_1_12 + (var_1_13 - var_1_14)));
 if (var_1_10 >= var_1_11) {
  var_1_15 = ((((((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_17)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_17)))) > (var_1_18)) ? (((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_17)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_17)))) : (var_1_18)));
 }
 var_1_25 = -256;
 var_1_26 = var_1_17;
 var_1_27 = var_1_6;
 if (var_1_7 || var_1_1) {
  if ((var_1_26 >= var_1_3) && var_1_1) {
   var_1_8 = ((((var_1_3) < (var_1_26)) ? (var_1_3) : (var_1_26)));
  } else {
   if (var_1_1) {
    var_1_8 = last_1_var_1_8;
   } else {
    var_1_8 = last_1_var_1_8;
   }
  }
 } else {
  var_1_8 = last_1_var_1_8;
 }
 if (var_1_6 || (var_1_16 <= (var_1_22 / var_1_24))) {
  var_1_23 = (((((var_1_8 + (var_1_21 + var_1_24))) < (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? ((var_1_8 + (var_1_21 + var_1_24))) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))));
 }
 if ((((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - var_1_22) >= var_1_23) {
  var_1_19 = ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65535);
 assume_abort_if_not(var_1_24 != 0);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -128);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -128);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -127);
 assume_abort_if_not(var_1_43 <= 127);
 assume_abort_if_not(var_1_43 != 0);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 2147483647);
 assume_abort_if_not(var_1_47 <= 4294967295);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= -1);
 assume_abort_if_not(var_1_49 <= 32766);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 32766);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -127);
 assume_abort_if_not(var_1_53 <= 126);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -126);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 2147483647);
 assume_abort_if_not(var_1_59 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_27 = var_1_27;
}
int property() {
 return ((((((((((-1 << last_1_var_1_19) < var_1_3) ? (((last_1_var_1_19 / var_1_3) > (-1000000000 + last_1_var_1_19)) ? (var_1_1 == ((unsigned char) (last_1_var_1_27 || var_1_6))) : (var_1_1 == ((unsigned char) var_1_7))) : 1) && ((var_1_7 || var_1_1) ? (((var_1_26 >= var_1_3) && var_1_1) ? (var_1_8 == ((signed long int) ((((var_1_3) < (var_1_26)) ? (var_1_3) : (var_1_26))))) : (var_1_1 ? (var_1_8 == ((signed long int) last_1_var_1_8)) : (var_1_8 == ((signed long int) last_1_var_1_8)))) : (var_1_8 == ((signed long int) last_1_var_1_8)))) && (var_1_9 == ((double) (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + (var_1_12 + (var_1_13 - var_1_14)))))) && ((var_1_10 >= var_1_11) ? (var_1_15 == ((unsigned short int) ((((((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_17)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_17)))) > (var_1_18)) ? (((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_17)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_17)))) : (var_1_18))))) : 1)) && (((((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - var_1_22) >= var_1_23) ? (var_1_19 == ((unsigned long int) ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1)) && ((var_1_6 || (var_1_16 <= (var_1_22 / var_1_24))) ? (var_1_23 == ((signed long int) (((((var_1_8 + (var_1_21 + var_1_24))) < (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? ((var_1_8 + (var_1_21 + var_1_24))) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))))) : 1)) && (var_1_25 == ((signed long int) -256))) && (var_1_26 == ((unsigned short int) var_1_17))) && (var_1_27 == ((unsigned char) var_1_6))
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
