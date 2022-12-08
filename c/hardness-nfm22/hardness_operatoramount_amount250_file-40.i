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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 4.5;
unsigned char var_1_3 = 50;
unsigned char var_1_4 = 32;
float var_1_10 = -0.5;
float var_1_11 = 500.84;
float var_1_12 = 5.7;
float var_1_13 = 32.25;
float var_1_14 = 9.5;
float var_1_15 = 1.2;
float var_1_16 = 0.0;
float var_1_17 = 31.3;
float var_1_18 = 0.0;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 10;
unsigned char var_1_23 = 25;
unsigned long int var_1_24 = 1;
unsigned long int var_1_26 = 3147096398;
unsigned long int var_1_27 = 1442241618;
unsigned long int var_1_28 = 1789785220;
signed short int var_1_30 = -500;
unsigned char var_1_31 = 4;
float var_1_32 = 7.75;
signed long int var_1_33 = -32;
signed short int var_1_34 = -10;
signed short int var_1_35 = 4;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 10;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 16;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 16;
unsigned char var_1_46 = 10;
unsigned char var_1_47 = 64;
unsigned long int var_1_48 = 1;
signed short int var_1_51 = -2;
signed short int var_1_54 = 29456;
signed long int var_1_55 = 32;
signed short int var_1_56 = -64;
double var_1_58 = 16.5;
float last_1_var_1_1 = 4.5;
float last_1_var_1_15 = 1.2;
unsigned char last_1_var_1_20 = 8;
signed short int last_1_var_1_35 = 4;
unsigned char last_1_var_1_36 = 0;
unsigned char last_1_var_1_41 = 10;
unsigned long int last_1_var_1_48 = 1;
signed short int last_1_var_1_56 = -64;
double last_1_var_1_58 = 16.5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = 2;
 if ((var_1_21 - var_1_23) != stepLocal_5) {
  var_1_34 = var_1_21;
 } else {
  var_1_34 = ((((last_1_var_1_35) < 0 ) ? -(last_1_var_1_35) : (last_1_var_1_35)));
 }
 var_1_35 = (var_1_34 + var_1_21);
 if (-16 != (last_1_var_1_56 - var_1_3)) {
  var_1_15 = ((((((var_1_16 - var_1_17)) < ((var_1_18 - 9.2f))) ? ((var_1_16 - var_1_17)) : ((var_1_18 - 9.2f)))) - var_1_13);
 } else {
  if (((var_1_18 - var_1_17) * var_1_12) != (63.25f + last_1_var_1_58)) {
   var_1_15 = ((((((((var_1_18) > (64.625f)) ? (var_1_18) : (64.625f)))) < (var_1_14)) ? (((((var_1_18) > (64.625f)) ? (var_1_18) : (64.625f)))) : (var_1_14)));
  } else {
   if (last_1_var_1_36) {
    var_1_15 = var_1_11;
   } else {
    var_1_15 = var_1_11;
   }
  }
 }
 if (((var_1_15 + var_1_17) + var_1_16) >= (var_1_12 / ((((var_1_18) < (var_1_32)) ? (var_1_18) : (var_1_32))))) {
  var_1_31 = ((((16) < (var_1_21)) ? (16) : (var_1_21)));
 }
 if (var_1_35 < ((((var_1_34) < (var_1_4)) ? (var_1_34) : (var_1_4)))) {
  if ((((((256.6f) < (var_1_10)) ? (256.6f) : (var_1_10))) / var_1_16) > var_1_15) {
   var_1_58 = ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13)));
  }
 } else {
  var_1_58 = var_1_17;
 }
 unsigned long int stepLocal_10 = var_1_28;
 if (last_1_var_1_41 >= stepLocal_10) {
  var_1_41 = (((var_1_42 - var_1_43) + var_1_44) + 1);
 } else {
  if ((var_1_16 * var_1_58) >= (var_1_58 / 0.75f)) {
   var_1_41 = var_1_21;
  } else {
   var_1_41 = (var_1_23 + var_1_22);
  }
 }
 if ((last_1_var_1_20 / (var_1_3 + var_1_4)) == ((((8) < (last_1_var_1_41)) ? (8) : (last_1_var_1_41)))) {
  if ((last_1_var_1_41 > last_1_var_1_20) && last_1_var_1_36) {
   if ((last_1_var_1_15 + last_1_var_1_15) != last_1_var_1_1) {
    var_1_1 = 8.6f;
   }
  } else {
   if ((last_1_var_1_20 & last_1_var_1_41) != var_1_4) {
    if (last_1_var_1_36) {
     var_1_1 = (((((var_1_10 + ((((127.3f) > (var_1_11)) ? (127.3f) : (var_1_11))))) > (var_1_12)) ? ((var_1_10 + ((((127.3f) > (var_1_11)) ? (127.3f) : (var_1_11))))) : (var_1_12)));
    }
   } else {
    var_1_1 = (((((31.5f) > (var_1_13)) ? (31.5f) : (var_1_13))) - var_1_14);
   }
  }
 }
 if ((var_1_22 / var_1_21) > (-25 / var_1_3)) {
  var_1_45 = (var_1_44 + var_1_46);
 } else {
  var_1_45 = ((var_1_47 - 1) + ((((var_1_43) > (var_1_4)) ? (var_1_43) : (var_1_4))));
 }
 unsigned char stepLocal_18 = var_1_42;
 if (-32 > stepLocal_18) {
  var_1_55 = (var_1_23 + var_1_22);
 } else {
  var_1_55 = var_1_47;
 }
 signed long int stepLocal_9 = - var_1_31;
 signed long int stepLocal_8 = 32 + var_1_3;
 signed short int stepLocal_7 = var_1_34;
 signed long int stepLocal_6 = (-256 / var_1_21) << var_1_55;
 if (stepLocal_9 == var_1_35) {
  if ((58871 - var_1_41) > stepLocal_8) {
   var_1_36 = (! var_1_37);
  } else {
   var_1_36 = (var_1_37 && var_1_38);
  }
 } else {
  if (stepLocal_6 >= var_1_27) {
   if (var_1_35 >= stepLocal_7) {
    if (var_1_17 < (var_1_10 + 1.0000000098E8f)) {
     var_1_36 = ((var_1_38 || var_1_39) || var_1_40);
    }
   } else {
    var_1_36 = var_1_37;
   }
  } else {
   var_1_36 = var_1_40;
  }
 }
 signed long int stepLocal_1 = - var_1_4;
 signed long int stepLocal_0 = var_1_31 + var_1_22;
 if (stepLocal_1 < var_1_3) {
  if (var_1_36) {
   if (var_1_12 >= var_1_1) {
    if (var_1_12 >= var_1_1) {
     var_1_24 = (((((var_1_26) < ((var_1_27 + var_1_28))) ? (var_1_26) : ((var_1_27 + var_1_28)))) - 128u);
    }
   } else {
    var_1_24 = (var_1_4 + var_1_22);
   }
  }
 } else {
  if (var_1_26 > stepLocal_0) {
   var_1_24 = (((((var_1_55) < (100000u)) ? (var_1_55) : (100000u))) + var_1_27);
  } else {
   var_1_24 = var_1_23;
  }
 }
 signed long int stepLocal_4 = var_1_55;
 signed long int stepLocal_3 = (1 - var_1_21) / 100;
 unsigned char stepLocal_2 = var_1_22;
 if ((- (var_1_23 * var_1_4)) < stepLocal_2) {
  if (var_1_58 < (var_1_15 + var_1_1)) {
   var_1_30 = ((((var_1_34) > (((((((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) < (var_1_23)) ? (((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) : (var_1_23))))) ? (var_1_34) : (((((((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) < (var_1_23)) ? (((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) : (var_1_23))))));
  } else {
   if ((var_1_4 >> var_1_23) > stepLocal_3) {
    var_1_30 = (((((var_1_4) < ((var_1_34 - var_1_3))) ? (var_1_4) : ((var_1_34 - var_1_3)))) + var_1_23);
   }
  }
 } else {
  if (var_1_34 > stepLocal_4) {
   var_1_30 = var_1_34;
  } else {
   var_1_30 = var_1_34;
  }
 }
 if (var_1_1 < var_1_1) {
  var_1_33 = (var_1_4 - var_1_22);
 } else {
  if (((((var_1_11) < (var_1_18)) ? (var_1_11) : (var_1_18))) <= var_1_1) {
   var_1_33 = (((((var_1_30 + var_1_30)) < (((((var_1_22) < ((var_1_31 + var_1_21))) ? (var_1_22) : ((var_1_31 + var_1_21)))))) ? ((var_1_30 + var_1_30)) : (((((var_1_22) < ((var_1_31 + var_1_21))) ? (var_1_22) : ((var_1_31 + var_1_21)))))));
  } else {
   var_1_33 = ((var_1_4 - var_1_23) + var_1_41);
  }
 }
 unsigned char stepLocal_19 = var_1_37;
 if ((last_1_var_1_56 == var_1_24) || stepLocal_19) {
  var_1_56 = ((((((var_1_33 + var_1_24) + var_1_23)) < ((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) - var_1_44))) ? (((var_1_33 + var_1_24) + var_1_23)) : ((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) - var_1_44))));
 } else {
  if (var_1_13 <= var_1_16) {
   var_1_56 = ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23)));
  } else {
   var_1_56 = (((((var_1_54) < (var_1_44)) ? (var_1_54) : (var_1_44))) - ((((var_1_47) < (var_1_3)) ? (var_1_47) : (var_1_3))));
  }
 }
 if (var_1_36) {
  if (var_1_1 > var_1_14) {
   var_1_20 = (var_1_21 - ((((var_1_4) < (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_4) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))));
  } else {
   var_1_20 = (((((128) < (var_1_21)) ? (128) : (var_1_21))) - var_1_23);
  }
 }
 signed long int stepLocal_11 = - (var_1_3 + var_1_47);
 if (last_1_var_1_48 < stepLocal_11) {
  if (! (var_1_24 > last_1_var_1_48)) {
   var_1_48 = var_1_33;
  }
 }
 signed short int stepLocal_17 = var_1_35;
 unsigned char stepLocal_16 = var_1_47;
 unsigned long int stepLocal_15 = var_1_24;
 unsigned char stepLocal_14 = var_1_37;
 unsigned char stepLocal_13 = var_1_45;
 unsigned char stepLocal_12 = var_1_42;
 if (stepLocal_13 >= ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) {
  if ((var_1_21 - var_1_4) != stepLocal_15) {
   var_1_51 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
  } else {
   var_1_51 = (((((var_1_3) > (var_1_48)) ? (var_1_3) : (var_1_48))) + var_1_47);
  }
 } else {
  if (stepLocal_12 < var_1_44) {
   if (stepLocal_17 < (~ (var_1_22 + var_1_46))) {
    var_1_51 = (((((var_1_42) > (var_1_43)) ? (var_1_42) : (var_1_43))) - var_1_41);
   } else {
    var_1_51 = ((var_1_45 - 8) + var_1_43);
   }
  } else {
   if (stepLocal_16 <= var_1_44) {
    if ((var_1_16 <= var_1_15) && stepLocal_14) {
     var_1_51 = var_1_44;
    } else {
     var_1_51 = ((((var_1_41) > (((var_1_54 - var_1_47) - (var_1_24 + var_1_43)))) ? (var_1_41) : (((var_1_54 - var_1_47) - (var_1_24 + var_1_43)))));
    }
   }
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 128);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 4611686.018427382800e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 1073741823);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741824);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 32);
 assume_abort_if_not(var_1_42 <= 64);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 32);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 63);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_54 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_54 >= 16382);
 assume_abort_if_not(var_1_54 <= 32766);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_58 = var_1_58;
}
int property() {
 return ((((((((((((((((((last_1_var_1_20 / (var_1_3 + var_1_4)) == ((((8) < (last_1_var_1_41)) ? (8) : (last_1_var_1_41)))) ? (((last_1_var_1_41 > last_1_var_1_20) && last_1_var_1_36) ? (((last_1_var_1_15 + last_1_var_1_15) != last_1_var_1_1) ? (var_1_1 == ((float) 8.6f)) : 1) : (((last_1_var_1_20 & last_1_var_1_41) != var_1_4) ? (last_1_var_1_36 ? (var_1_1 == ((float) (((((var_1_10 + ((((127.3f) > (var_1_11)) ? (127.3f) : (var_1_11))))) > (var_1_12)) ? ((var_1_10 + ((((127.3f) > (var_1_11)) ? (127.3f) : (var_1_11))))) : (var_1_12))))) : 1) : (var_1_1 == ((float) (((((31.5f) > (var_1_13)) ? (31.5f) : (var_1_13))) - var_1_14))))) : 1) && ((-16 != (last_1_var_1_56 - var_1_3)) ? (var_1_15 == ((float) ((((((var_1_16 - var_1_17)) < ((var_1_18 - 9.2f))) ? ((var_1_16 - var_1_17)) : ((var_1_18 - 9.2f)))) - var_1_13))) : ((((var_1_18 - var_1_17) * var_1_12) != (63.25f + last_1_var_1_58)) ? (var_1_15 == ((float) ((((((((var_1_18) > (64.625f)) ? (var_1_18) : (64.625f)))) < (var_1_14)) ? (((((var_1_18) > (64.625f)) ? (var_1_18) : (64.625f)))) : (var_1_14))))) : (last_1_var_1_36 ? (var_1_15 == ((float) var_1_11)) : (var_1_15 == ((float) var_1_11)))))) && (var_1_36 ? ((var_1_1 > var_1_14) ? (var_1_20 == ((unsigned char) (var_1_21 - ((((var_1_4) < (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_4) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))))) : (var_1_20 == ((unsigned char) (((((128) < (var_1_21)) ? (128) : (var_1_21))) - var_1_23)))) : 1)) && (((- var_1_4) < var_1_3) ? (var_1_36 ? ((var_1_12 >= var_1_1) ? ((var_1_12 >= var_1_1) ? (var_1_24 == ((unsigned long int) (((((var_1_26) < ((var_1_27 + var_1_28))) ? (var_1_26) : ((var_1_27 + var_1_28)))) - 128u))) : 1) : (var_1_24 == ((unsigned long int) (var_1_4 + var_1_22)))) : 1) : ((var_1_26 > (var_1_31 + var_1_22)) ? (var_1_24 == ((unsigned long int) (((((var_1_55) < (100000u)) ? (var_1_55) : (100000u))) + var_1_27))) : (var_1_24 == ((unsigned long int) var_1_23))))) && (((- (var_1_23 * var_1_4)) < var_1_22) ? ((var_1_58 < (var_1_15 + var_1_1)) ? (var_1_30 == ((signed short int) ((((var_1_34) > (((((((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) < (var_1_23)) ? (((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) : (var_1_23))))) ? (var_1_34) : (((((((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) < (var_1_23)) ? (((((var_1_21) < (var_1_3)) ? (var_1_21) : (var_1_3)))) : (var_1_23)))))))) : (((var_1_4 >> var_1_23) > ((1 - var_1_21) / 100)) ? (var_1_30 == ((signed short int) (((((var_1_4) < ((var_1_34 - var_1_3))) ? (var_1_4) : ((var_1_34 - var_1_3)))) + var_1_23))) : 1)) : ((var_1_34 > var_1_55) ? (var_1_30 == ((signed short int) var_1_34)) : (var_1_30 == ((signed short int) var_1_34))))) && ((((var_1_15 + var_1_17) + var_1_16) >= (var_1_12 / ((((var_1_18) < (var_1_32)) ? (var_1_18) : (var_1_32))))) ? (var_1_31 == ((unsigned char) ((((16) < (var_1_21)) ? (16) : (var_1_21))))) : 1)) && ((var_1_1 < var_1_1) ? (var_1_33 == ((signed long int) (var_1_4 - var_1_22))) : ((((((var_1_11) < (var_1_18)) ? (var_1_11) : (var_1_18))) <= var_1_1) ? (var_1_33 == ((signed long int) (((((var_1_30 + var_1_30)) < (((((var_1_22) < ((var_1_31 + var_1_21))) ? (var_1_22) : ((var_1_31 + var_1_21)))))) ? ((var_1_30 + var_1_30)) : (((((var_1_22) < ((var_1_31 + var_1_21))) ? (var_1_22) : ((var_1_31 + var_1_21))))))))) : (var_1_33 == ((signed long int) ((var_1_4 - var_1_23) + var_1_41)))))) && (((var_1_21 - var_1_23) != 2) ? (var_1_34 == ((signed short int) var_1_21)) : (var_1_34 == ((signed short int) ((((last_1_var_1_35) < 0 ) ? -(last_1_var_1_35) : (last_1_var_1_35))))))) && (var_1_35 == ((signed short int) (var_1_34 + var_1_21)))) && (((- var_1_31) == var_1_35) ? (((58871 - var_1_41) > (32 + var_1_3)) ? (var_1_36 == ((unsigned char) (! var_1_37))) : (var_1_36 == ((unsigned char) (var_1_37 && var_1_38)))) : ((((-256 / var_1_21) << var_1_55) >= var_1_27) ? ((var_1_35 >= var_1_34) ? ((var_1_17 < (var_1_10 + 1.0000000098E8f)) ? (var_1_36 == ((unsigned char) ((var_1_38 || var_1_39) || var_1_40))) : 1) : (var_1_36 == ((unsigned char) var_1_37))) : (var_1_36 == ((unsigned char) var_1_40))))) && ((last_1_var_1_41 >= var_1_28) ? (var_1_41 == ((unsigned char) (((var_1_42 - var_1_43) + var_1_44) + 1))) : (((var_1_16 * var_1_58) >= (var_1_58 / 0.75f)) ? (var_1_41 == ((unsigned char) var_1_21)) : (var_1_41 == ((unsigned char) (var_1_23 + var_1_22)))))) && (((var_1_22 / var_1_21) > (-25 / var_1_3)) ? (var_1_45 == ((unsigned char) (var_1_44 + var_1_46))) : (var_1_45 == ((unsigned char) ((var_1_47 - 1) + ((((var_1_43) > (var_1_4)) ? (var_1_43) : (var_1_4)))))))) && ((last_1_var_1_48 < (- (var_1_3 + var_1_47))) ? ((! (var_1_24 > last_1_var_1_48)) ? (var_1_48 == ((unsigned long int) var_1_33)) : 1) : 1)) && ((var_1_45 >= ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) ? (((var_1_21 - var_1_4) != var_1_24) ? (var_1_51 == ((signed short int) ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : (var_1_51 == ((signed short int) (((((var_1_3) > (var_1_48)) ? (var_1_3) : (var_1_48))) + var_1_47)))) : ((var_1_42 < var_1_44) ? ((var_1_35 < (~ (var_1_22 + var_1_46))) ? (var_1_51 == ((signed short int) (((((var_1_42) > (var_1_43)) ? (var_1_42) : (var_1_43))) - var_1_41))) : (var_1_51 == ((signed short int) ((var_1_45 - 8) + var_1_43)))) : ((var_1_47 <= var_1_44) ? (((var_1_16 <= var_1_15) && var_1_37) ? (var_1_51 == ((signed short int) var_1_44)) : (var_1_51 == ((signed short int) ((((var_1_41) > (((var_1_54 - var_1_47) - (var_1_24 + var_1_43)))) ? (var_1_41) : (((var_1_54 - var_1_47) - (var_1_24 + var_1_43)))))))) : 1)))) && ((-32 > var_1_42) ? (var_1_55 == ((signed long int) (var_1_23 + var_1_22))) : (var_1_55 == ((signed long int) var_1_47)))) && (((last_1_var_1_56 == var_1_24) || var_1_37) ? (var_1_56 == ((signed short int) ((((((var_1_33 + var_1_24) + var_1_23)) < ((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) - var_1_44))) ? (((var_1_33 + var_1_24) + var_1_23)) : ((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) - var_1_44)))))) : ((var_1_13 <= var_1_16) ? (var_1_56 == ((signed short int) ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))))) : (var_1_56 == ((signed short int) (((((var_1_54) < (var_1_44)) ? (var_1_54) : (var_1_44))) - ((((var_1_47) < (var_1_3)) ? (var_1_47) : (var_1_3))))))))) && ((var_1_35 < ((((var_1_34) < (var_1_4)) ? (var_1_34) : (var_1_4)))) ? (((((((256.6f) < (var_1_10)) ? (256.6f) : (var_1_10))) / var_1_16) > var_1_15) ? (var_1_58 == ((double) ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13))))) : 1) : (var_1_58 == ((double) var_1_17)))
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
