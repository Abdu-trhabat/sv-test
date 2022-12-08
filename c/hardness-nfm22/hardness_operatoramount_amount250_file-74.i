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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch74Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 16.66;
unsigned char var_1_3 = 32;
double var_1_4 = 49.275;
double var_1_7 = -0.5;
double var_1_8 = -0.4;
unsigned char var_1_9 = 25;
float var_1_10 = 127.075;
float var_1_11 = 1.2;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 1;
signed short int var_1_16 = 4;
float var_1_17 = 4.25;
unsigned long int var_1_18 = 2897317397;
unsigned long int var_1_19 = 16;
unsigned long int var_1_20 = 5;
float var_1_21 = 9999999.25;
float var_1_22 = 64.6;
float var_1_23 = 7.25;
unsigned char var_1_24 = 8;
unsigned long int var_1_26 = 8;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_32 = 0;
float var_1_33 = 8.75;
float var_1_34 = 5.5;
unsigned char var_1_35 = 0;
double var_1_36 = 8.75;
unsigned short int var_1_37 = 10;
unsigned short int var_1_38 = 5;
unsigned short int var_1_39 = 58582;
unsigned short int var_1_40 = 51488;
unsigned short int var_1_41 = 54678;
unsigned char var_1_42 = 128;
signed long int var_1_43 = -4;
unsigned short int var_1_44 = 16;
unsigned short int var_1_45 = 54460;
float var_1_46 = 31.125;
float var_1_47 = 16.25;
unsigned short int var_1_48 = 32;
signed char var_1_49 = -4;
signed short int var_1_50 = 30036;
float var_1_51 = 255.5;
float var_1_52 = 256.174;
unsigned short int var_1_53 = 200;
unsigned char var_1_54 = 1;
unsigned char var_1_56 = 0;
double var_1_58 = 9999.4;
unsigned short int var_1_59 = 5;
signed short int var_1_61 = -32;
signed long int var_1_62 = -200;
signed short int var_1_63 = 64;
unsigned char last_1_var_1_28 = 1;
unsigned short int last_1_var_1_38 = 5;
signed long int last_1_var_1_43 = -4;
unsigned short int last_1_var_1_48 = 32;
unsigned short int last_1_var_1_53 = 200;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_28) {
  if (255.5f != (var_1_10 - var_1_11)) {
   var_1_9 = (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) + ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))));
  }
 } else {
  var_1_9 = var_1_14;
 }
 if ((32 & last_1_var_1_38) >= var_1_13) {
  var_1_16 = (var_1_3 + var_1_14);
 } else {
  if (last_1_var_1_28) {
   var_1_16 = (last_1_var_1_43 - var_1_14);
  } else {
   var_1_16 = var_1_15;
  }
 }
 unsigned long int stepLocal_7 = ~ var_1_18;
 if (var_1_13 <= stepLocal_7) {
  var_1_43 = ((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15)));
 }
 if ((- var_1_4) > (var_1_21 / var_1_36)) {
  var_1_35 = (var_1_29 && var_1_32);
 }
 var_1_37 = ((((var_1_19) > (var_1_3)) ? (var_1_19) : (var_1_3)));
 var_1_42 = (var_1_15 + (((((64) < 0 ) ? -(64) : (64))) + var_1_20));
 if ((last_1_var_1_53 * var_1_15) >= var_1_13) {
  var_1_53 = (5 + last_1_var_1_53);
 } else {
  var_1_53 = ((((10) < (var_1_3)) ? (10) : (var_1_3)));
 }
 var_1_63 = var_1_13;
 if (var_1_35) {
  if (var_1_9 != (var_1_9 | var_1_12)) {
   var_1_56 = (((32 / var_1_39) > (var_1_9 % var_1_40)) || (var_1_35 || var_1_30));
  }
 }
 signed short int stepLocal_2 = var_1_16;
 signed long int stepLocal_1 = var_1_15 * var_1_42;
 if (stepLocal_2 > ((((var_1_19) > (4)) ? (var_1_19) : (4)))) {
  if (! var_1_56) {
   var_1_26 = var_1_16;
  }
 } else {
  if ((((((var_1_18) > (3968627268u)) ? (var_1_18) : (3968627268u))) - var_1_13) > stepLocal_1) {
   if (var_1_56) {
    var_1_26 = var_1_16;
   } else {
    var_1_26 = var_1_13;
   }
  }
 }
 unsigned short int stepLocal_10 = var_1_53;
 if (stepLocal_10 <= var_1_19) {
  var_1_48 = (var_1_45 - var_1_9);
 } else {
  var_1_48 = ((last_1_var_1_48 + var_1_9) + var_1_14);
 }
 unsigned long int stepLocal_0 = (var_1_18 - var_1_37) * var_1_13;
 if (stepLocal_0 < (5u >> (var_1_19 + var_1_20))) {
  var_1_17 = ((var_1_21 + (var_1_22 - 4.3f)) + var_1_7);
 } else {
  var_1_17 = ((((var_1_7) < ((var_1_22 - var_1_23))) ? (var_1_7) : ((var_1_22 - var_1_23))));
 }
 unsigned long int stepLocal_6 = (var_1_15 + var_1_12) - var_1_26;
 unsigned char stepLocal_5 = var_1_9;
 if (var_1_9 < stepLocal_6) {
  if (var_1_21 >= var_1_17) {
   var_1_33 = ((((((7.6955603716244398E18f - var_1_22) - var_1_23)) < (var_1_21)) ? (((7.6955603716244398E18f - var_1_22) - var_1_23)) : (var_1_21)));
  } else {
   if (var_1_29) {
    if ((var_1_18 & 10) == stepLocal_5) {
     var_1_33 = var_1_34;
    } else {
     var_1_33 = var_1_8;
    }
   } else {
    var_1_33 = var_1_23;
   }
  }
 }
 if (63.5f <= ((- var_1_23) * var_1_33)) {
  var_1_46 = ((var_1_22 + var_1_47) - var_1_23);
 }
 var_1_38 = (((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) < (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41))) - var_1_48);
 if ((var_1_9 < (var_1_45 * var_1_41)) && var_1_30) {
  if (((((var_1_36) > (var_1_22)) ? (var_1_36) : (var_1_22))) > var_1_17) {
   var_1_59 = (var_1_41 - (4 + var_1_3));
  } else {
   if (var_1_26 >= (var_1_16 + var_1_37)) {
    if (var_1_37 >= 100) {
     var_1_59 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
    } else {
     var_1_59 = var_1_39;
    }
   } else {
    var_1_59 = (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_50);
   }
  }
 } else {
  if (var_1_37 != (var_1_12 * var_1_37)) {
   var_1_59 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
  } else {
   var_1_59 = (var_1_45 - (var_1_38 + var_1_13));
  }
 }
 unsigned long int stepLocal_16 = var_1_18 * ((((var_1_26) < (var_1_12)) ? (var_1_26) : (var_1_12)));
 if (var_1_53 == stepLocal_16) {
  var_1_62 = ((((var_1_63) > ((var_1_50 - (var_1_59 + var_1_45)))) ? (var_1_63) : ((var_1_50 - (var_1_59 + var_1_45)))));
 } else {
  var_1_62 = var_1_43;
 }
 signed long int stepLocal_12 = (var_1_40 - var_1_14) * (var_1_59 / var_1_41);
 unsigned short int stepLocal_11 = var_1_45;
 if ((var_1_37 - (var_1_50 - var_1_13)) != stepLocal_12) {
  var_1_49 = ((((var_1_13) < (var_1_19)) ? (var_1_13) : (var_1_19)));
 } else {
  if (stepLocal_11 > var_1_37) {
   var_1_49 = (8 - var_1_19);
  } else {
   var_1_49 = (var_1_14 - (var_1_15 + var_1_20));
  }
 }
 if (var_1_16 > var_1_62) {
  var_1_54 = (var_1_56 || var_1_30);
 }
 if (var_1_54) {
  if (var_1_35 || var_1_56) {
   var_1_24 = var_1_15;
  }
 }
 if (var_1_54) {
  var_1_61 = var_1_42;
 } else {
  var_1_61 = var_1_16;
 }
 unsigned char stepLocal_4 = var_1_54 && var_1_35;
 signed long int stepLocal_3 = (((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12));
 if (var_1_56 || stepLocal_4) {
  var_1_28 = (var_1_29 && var_1_30);
 } else {
  if ((var_1_38 * var_1_19) == stepLocal_3) {
   var_1_28 = var_1_30;
  } else {
   if (! var_1_30) {
    var_1_28 = (! var_1_32);
   } else {
    var_1_28 = ((var_1_59 <= var_1_3) || (var_1_56 || (var_1_35 || var_1_30)));
   }
  }
 }
 if (var_1_49 <= (128 - var_1_3)) {
  var_1_1 = var_1_4;
 } else {
  if (var_1_28 || var_1_35) {
   var_1_1 = (var_1_7 + var_1_8);
  }
 }
 unsigned short int stepLocal_9 = var_1_37;
 unsigned char stepLocal_8 = var_1_28;
 if (var_1_56 || stepLocal_8) {
  if (stepLocal_9 <= ((((var_1_20) < ((50 + 8))) ? (var_1_20) : ((50 + 8))))) {
   var_1_44 = ((var_1_45 - (32 + var_1_61)) - var_1_15);
  }
 } else {
  var_1_44 = (var_1_39 - (var_1_12 + var_1_61));
 }
 unsigned char stepLocal_13 = var_1_30;
 if (var_1_54) {
  if (var_1_23 == var_1_8) {
   if (((var_1_15 >= var_1_19) || (! var_1_28)) || stepLocal_13) {
    var_1_51 = ((((var_1_22) < (var_1_34)) ? (var_1_22) : (var_1_34)));
   } else {
    var_1_51 = (((((var_1_8) > ((var_1_22 - var_1_47))) ? (var_1_8) : ((var_1_22 - var_1_47)))) + 4.75f);
   }
  } else {
   var_1_51 = (((((((((var_1_22 + var_1_47)) > (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))) ? ((var_1_22 + var_1_47)) : (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))))) < ((var_1_7 + var_1_52))) ? ((((((var_1_22 + var_1_47)) > (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))) ? ((var_1_22 + var_1_47)) : (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))))) : ((var_1_7 + var_1_52))));
  }
 }
 unsigned long int stepLocal_15 = var_1_19;
 unsigned char stepLocal_14 = var_1_56;
 if ((var_1_35 && (var_1_54 && var_1_28)) && stepLocal_14) {
  if (var_1_26 > stepLocal_15) {
   var_1_58 = (var_1_7 + var_1_22);
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 64);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 17);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 16);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65534);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 49150);
 assume_abort_if_not(var_1_45 <= 65534);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 16383);
 assume_abort_if_not(var_1_50 <= 32767);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -461168.6018427382800e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_28 = var_1_28;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_53 = var_1_53;
}
int property() {
 return ((((((((((((((((((((((((((var_1_49 <= (128 - var_1_3)) ? (var_1_1 == ((double) var_1_4)) : ((var_1_28 || var_1_35) ? (var_1_1 == ((double) (var_1_7 + var_1_8))) : 1)) && (last_1_var_1_28 ? ((255.5f != (var_1_10 - var_1_11)) ? (var_1_9 == ((unsigned char) (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) + ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))))) : 1) : (var_1_9 == ((unsigned char) var_1_14)))) && (((32 & last_1_var_1_38) >= var_1_13) ? (var_1_16 == ((signed short int) (var_1_3 + var_1_14))) : (last_1_var_1_28 ? (var_1_16 == ((signed short int) (last_1_var_1_43 - var_1_14))) : (var_1_16 == ((signed short int) var_1_15))))) && ((((var_1_18 - var_1_37) * var_1_13) < (5u >> (var_1_19 + var_1_20))) ? (var_1_17 == ((float) ((var_1_21 + (var_1_22 - 4.3f)) + var_1_7))) : (var_1_17 == ((float) ((((var_1_7) < ((var_1_22 - var_1_23))) ? (var_1_7) : ((var_1_22 - var_1_23)))))))) && (var_1_54 ? ((var_1_35 || var_1_56) ? (var_1_24 == ((unsigned char) var_1_15)) : 1) : 1)) && ((var_1_16 > ((((var_1_19) > (4)) ? (var_1_19) : (4)))) ? ((! var_1_56) ? (var_1_26 == ((unsigned long int) var_1_16)) : 1) : (((((((var_1_18) > (3968627268u)) ? (var_1_18) : (3968627268u))) - var_1_13) > (var_1_15 * var_1_42)) ? (var_1_56 ? (var_1_26 == ((unsigned long int) var_1_16)) : (var_1_26 == ((unsigned long int) var_1_13))) : 1))) && ((var_1_56 || (var_1_54 && var_1_35)) ? (var_1_28 == ((unsigned char) (var_1_29 && var_1_30))) : (((var_1_38 * var_1_19) == ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) ? (var_1_28 == ((unsigned char) var_1_30)) : ((! var_1_30) ? (var_1_28 == ((unsigned char) (! var_1_32))) : (var_1_28 == ((unsigned char) ((var_1_59 <= var_1_3) || (var_1_56 || (var_1_35 || var_1_30))))))))) && ((var_1_9 < ((var_1_15 + var_1_12) - var_1_26)) ? ((var_1_21 >= var_1_17) ? (var_1_33 == ((float) ((((((7.6955603716244398E18f - var_1_22) - var_1_23)) < (var_1_21)) ? (((7.6955603716244398E18f - var_1_22) - var_1_23)) : (var_1_21))))) : (var_1_29 ? (((var_1_18 & 10) == var_1_9) ? (var_1_33 == ((float) var_1_34)) : (var_1_33 == ((float) var_1_8))) : (var_1_33 == ((float) var_1_23)))) : 1)) && (((- var_1_4) > (var_1_21 / var_1_36)) ? (var_1_35 == ((unsigned char) (var_1_29 && var_1_32))) : 1)) && (var_1_37 == ((unsigned short int) ((((var_1_19) > (var_1_3)) ? (var_1_19) : (var_1_3)))))) && (var_1_38 == ((unsigned short int) (((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) < (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41))) - var_1_48)))) && (var_1_42 == ((unsigned char) (var_1_15 + (((((64) < 0 ) ? -(64) : (64))) + var_1_20))))) && ((var_1_13 <= (~ var_1_18)) ? (var_1_43 == ((signed long int) ((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))))) : 1)) && ((var_1_56 || var_1_28) ? ((var_1_37 <= ((((var_1_20) < ((50 + 8))) ? (var_1_20) : ((50 + 8))))) ? (var_1_44 == ((unsigned short int) ((var_1_45 - (32 + var_1_61)) - var_1_15))) : 1) : (var_1_44 == ((unsigned short int) (var_1_39 - (var_1_12 + var_1_61)))))) && ((63.5f <= ((- var_1_23) * var_1_33)) ? (var_1_46 == ((float) ((var_1_22 + var_1_47) - var_1_23))) : 1)) && ((var_1_53 <= var_1_19) ? (var_1_48 == ((unsigned short int) (var_1_45 - var_1_9))) : (var_1_48 == ((unsigned short int) ((last_1_var_1_48 + var_1_9) + var_1_14))))) && (((var_1_37 - (var_1_50 - var_1_13)) != ((var_1_40 - var_1_14) * (var_1_59 / var_1_41))) ? (var_1_49 == ((signed char) ((((var_1_13) < (var_1_19)) ? (var_1_13) : (var_1_19))))) : ((var_1_45 > var_1_37) ? (var_1_49 == ((signed char) (8 - var_1_19))) : (var_1_49 == ((signed char) (var_1_14 - (var_1_15 + var_1_20))))))) && (var_1_54 ? ((var_1_23 == var_1_8) ? ((((var_1_15 >= var_1_19) || (! var_1_28)) || var_1_30) ? (var_1_51 == ((float) ((((var_1_22) < (var_1_34)) ? (var_1_22) : (var_1_34))))) : (var_1_51 == ((float) (((((var_1_8) > ((var_1_22 - var_1_47))) ? (var_1_8) : ((var_1_22 - var_1_47)))) + 4.75f)))) : (var_1_51 == ((float) (((((((((var_1_22 + var_1_47)) > (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))) ? ((var_1_22 + var_1_47)) : (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))))) < ((var_1_7 + var_1_52))) ? ((((((var_1_22 + var_1_47)) > (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))) ? ((var_1_22 + var_1_47)) : (((((var_1_21) > (var_1_8)) ? (var_1_21) : (var_1_8))))))) : ((var_1_7 + var_1_52))))))) : 1)) && (((last_1_var_1_53 * var_1_15) >= var_1_13) ? (var_1_53 == ((unsigned short int) (5 + last_1_var_1_53))) : (var_1_53 == ((unsigned short int) ((((10) < (var_1_3)) ? (10) : (var_1_3))))))) && ((var_1_16 > var_1_62) ? (var_1_54 == ((unsigned char) (var_1_56 || var_1_30))) : 1)) && (var_1_35 ? ((var_1_9 != (var_1_9 | var_1_12)) ? (var_1_56 == ((unsigned char) (((32 / var_1_39) > (var_1_9 % var_1_40)) || (var_1_35 || var_1_30)))) : 1) : 1)) && (((var_1_35 && (var_1_54 && var_1_28)) && var_1_56) ? ((var_1_26 > var_1_19) ? (var_1_58 == ((double) (var_1_7 + var_1_22))) : 1) : 1)) && (((var_1_9 < (var_1_45 * var_1_41)) && var_1_30) ? ((((((var_1_36) > (var_1_22)) ? (var_1_36) : (var_1_22))) > var_1_17) ? (var_1_59 == ((unsigned short int) (var_1_41 - (4 + var_1_3)))) : ((var_1_26 >= (var_1_16 + var_1_37)) ? ((var_1_37 >= 100) ? (var_1_59 == ((unsigned short int) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : (var_1_59 == ((unsigned short int) var_1_39))) : (var_1_59 == ((unsigned short int) (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_50))))) : ((var_1_37 != (var_1_12 * var_1_37)) ? (var_1_59 == ((unsigned short int) ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) : (var_1_59 == ((unsigned short int) (var_1_45 - (var_1_38 + var_1_13))))))) && (var_1_54 ? (var_1_61 == ((signed short int) var_1_42)) : (var_1_61 == ((signed short int) var_1_16)))) && ((var_1_53 == (var_1_18 * ((((var_1_26) < (var_1_12)) ? (var_1_26) : (var_1_12))))) ? (var_1_62 == ((signed long int) ((((var_1_63) > ((var_1_50 - (var_1_59 + var_1_45)))) ? (var_1_63) : ((var_1_50 - (var_1_59 + var_1_45))))))) : (var_1_62 == ((signed long int) var_1_43)))) && (var_1_63 == ((signed short int) var_1_13))
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
