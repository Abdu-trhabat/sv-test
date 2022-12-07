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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
unsigned short int var_1_8 = 64;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed long int var_1_29 = 50;
signed long int var_1_30 = 16;
signed char var_1_31 = 4;
signed char var_1_32 = 64;
unsigned short int var_1_33 = 16;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 1;
float var_1_36 = 9.8;
float var_1_37 = 1000000000000.2;
float var_1_38 = 128.75;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 32;
signed long int var_1_41 = -5;
double var_1_42 = 49.6;
double var_1_43 = 49.6;
double var_1_44 = 8.2;
signed long int var_1_45 = -2;
unsigned char var_1_46 = 1;
unsigned long int var_1_47 = 16;
unsigned char var_1_48 = 0;
signed long int var_1_49 = -25;
unsigned long int var_1_50 = 1275815169;
unsigned long int var_1_51 = 1483937619;
unsigned long int var_1_52 = 1377781138;
signed long int var_1_53 = -10;
signed long int var_1_54 = 1000000000;
signed long int var_1_55 = 1000000000;
signed long int var_1_56 = 1000000000;
unsigned long int var_1_57 = 1;
unsigned long int var_1_58 = 0;
unsigned long int var_1_59 = 1;
unsigned long int var_1_60 = 3210054013;
float var_1_61 = 4.6;
unsigned char var_1_62 = 2;
signed short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_14 = 1;
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;
double last_1_var_1_28 = 5.5;
void initially(void) {
}
void step(void) {
 var_1_29 = var_1_30;
 var_1_31 = var_1_32;
 if (var_1_34) {
  if (var_1_30 < var_1_32) {
   var_1_33 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 } else {
  if (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))) < var_1_38) {
   var_1_33 = var_1_35;
  }
 }
 var_1_39 = var_1_40;
 if (var_1_29 != var_1_31) {
  if ((-5 | var_1_30) <= var_1_32) {
   var_1_41 = ((((var_1_39) > (var_1_33)) ? (var_1_39) : (var_1_33)));
  }
 }
 if (1000000.4f != var_1_38) {
  if (var_1_38 > var_1_36) {
   var_1_42 = ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)));
  }
 }
 if (var_1_34 && var_1_46) {
  var_1_45 = (((((var_1_39 + var_1_40)) > (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) ? ((var_1_39 + var_1_40)) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))));
 } else {
  var_1_45 = ((var_1_32 + var_1_33) + var_1_40);
 }
 if (var_1_42 < var_1_43) {
  if ((var_1_49 | var_1_39) > var_1_35) {
   var_1_47 = ((((var_1_40) > (var_1_35)) ? (var_1_40) : (var_1_35)));
  } else {
   if (var_1_46) {
    if (var_1_42 >= var_1_44) {
     var_1_47 = ((var_1_50 + ((((1530535536u) < (var_1_51)) ? (1530535536u) : (var_1_51)))) - (((((var_1_52 - var_1_40)) > (((((var_1_39) < (10u)) ? (var_1_39) : (10u))))) ? ((var_1_52 - var_1_40)) : (((((var_1_39) < (10u)) ? (var_1_39) : (10u)))))));
    }
   } else {
    var_1_47 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
   }
  }
 } else {
  if (var_1_48 && var_1_34) {
   var_1_47 = (var_1_50 + var_1_33);
  } else {
   var_1_47 = (((((((256u) < 0 ) ? -(256u) : (256u))) < 0 ) ? -((((256u) < 0 ) ? -(256u) : (256u))) : ((((256u) < 0 ) ? -(256u) : (256u)))));
  }
 }
 if (var_1_52 < (- var_1_51)) {
  if (var_1_34) {
   if ((~ var_1_29) <= var_1_39) {
    if (var_1_48) {
     var_1_53 = (var_1_40 - var_1_33);
    }
   }
  } else {
   if (var_1_41 > ((var_1_35 + var_1_39) << var_1_33)) {
    var_1_53 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
   } else {
    var_1_53 = (var_1_33 - ((var_1_54 + var_1_55) - (var_1_56 - var_1_40)));
   }
  }
 }
 if (var_1_31 < var_1_35) {
  var_1_57 = ((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) + var_1_55) + var_1_56);
 } else {
  var_1_57 = (var_1_51 + var_1_33);
 }
 if (var_1_48) {
  var_1_59 = (((((((var_1_56) > (var_1_54)) ? (var_1_56) : (var_1_54))) < 0 ) ? -((((var_1_56) > (var_1_54)) ? (var_1_56) : (var_1_54))) : ((((var_1_56) > (var_1_54)) ? (var_1_56) : (var_1_54)))));
 } else {
  var_1_59 = (((((var_1_60 - var_1_55)) < (var_1_56)) ? ((var_1_60 - var_1_55)) : (var_1_56)));
 }
 if ((((((128) < 0 ) ? -(128) : (128))) - var_1_62) < var_1_49) {
  var_1_61 = var_1_43;
 }
 signed long int stepLocal_3 = last_1_var_1_23;
 unsigned char stepLocal_2 = ! (last_1_var_1_14 || last_1_var_1_14);
 if (last_1_var_1_23 < stepLocal_3) {
  if (stepLocal_2 && last_1_var_1_24) {
   if (((((2.75f) > (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f))))) ? (2.75f) : (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f)))))) != last_1_var_1_28) {
    var_1_16 = 10;
   } else {
    var_1_16 = var_1_19;
   }
  } else {
   var_1_16 = var_1_19;
  }
 } else {
  var_1_16 = 100;
 }
 if ((((((last_1_var_1_1) > (last_1_var_1_16)) ? (last_1_var_1_1) : (last_1_var_1_16))) | last_1_var_1_16) >= last_1_var_1_23) {
  var_1_23 = (5 - var_1_12);
 } else {
  var_1_23 = ((((var_1_11) > (last_1_var_1_1)) ? (var_1_11) : (last_1_var_1_1)));
 }
 var_1_20 = (var_1_21 - (var_1_22 + 1.5));
 var_1_28 = var_1_21;
 unsigned char stepLocal_0 = var_1_23 > 4;
 if ((var_1_23 <= var_1_23) || stepLocal_0) {
  var_1_1 = (((((var_1_16 + (var_1_16 + var_1_16))) > (-100)) ? ((var_1_16 + (var_1_16 + var_1_16))) : (-100)));
 } else {
  var_1_1 = var_1_16;
 }
 var_1_24 = ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27);
 signed char stepLocal_1 = var_1_16;
 if (stepLocal_1 > (var_1_23 + (var_1_16 ^ var_1_16))) {
  var_1_14 = (var_1_24 || var_1_15);
 }
 if (var_1_14) {
  if (var_1_24) {
   var_1_8 = (((((var_1_11 + var_1_12)) > (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13)));
  }
 }
}
void updateVariables() {
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= -2147483648);
 assume_abort_if_not(var_1_49 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 1073741823);
 assume_abort_if_not(var_1_50 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 1073741824);
 assume_abort_if_not(var_1_51 <= 2147483647);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 1073741823);
 assume_abort_if_not(var_1_52 <= 2147483647);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= 536870911);
 assume_abort_if_not(var_1_54 <= 1073741823);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= 536870912);
 assume_abort_if_not(var_1_55 <= 1073741823);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 536870911);
 assume_abort_if_not(var_1_56 <= 1073741823);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 1073741824);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 2147483647);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 127);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_28 = var_1_28;
}
int property() {
 return (((((((((var_1_23 <= var_1_23) || (var_1_23 > 4)) ? (var_1_1 == ((signed short int) (((((var_1_16 + (var_1_16 + var_1_16))) > (-100)) ? ((var_1_16 + (var_1_16 + var_1_16))) : (-100))))) : (var_1_1 == ((signed short int) var_1_16))) && (var_1_14 ? (var_1_24 ? (var_1_8 == ((unsigned short int) (((((var_1_11 + var_1_12)) > (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13))))) : 1) : 1)) && ((var_1_16 > (var_1_23 + (var_1_16 ^ var_1_16))) ? (var_1_14 == ((unsigned char) (var_1_24 || var_1_15))) : 1)) && ((last_1_var_1_23 < last_1_var_1_23) ? (((! (last_1_var_1_14 || last_1_var_1_14)) && last_1_var_1_24) ? ((((((2.75f) > (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f))))) ? (2.75f) : (((((last_1_var_1_28) < (999999.95f)) ? (last_1_var_1_28) : (999999.95f)))))) != last_1_var_1_28) ? (var_1_16 == ((signed char) 10)) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) 100)))) && (var_1_20 == ((double) (var_1_21 - (var_1_22 + 1.5))))) && (((((((last_1_var_1_1) > (last_1_var_1_16)) ? (last_1_var_1_1) : (last_1_var_1_16))) | last_1_var_1_16) >= last_1_var_1_23) ? (var_1_23 == ((signed long int) (5 - var_1_12))) : (var_1_23 == ((signed long int) ((((var_1_11) > (last_1_var_1_1)) ? (var_1_11) : (last_1_var_1_1))))))) && (var_1_24 == ((unsigned char) ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27)))) && (var_1_28 == ((double) var_1_21))
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
