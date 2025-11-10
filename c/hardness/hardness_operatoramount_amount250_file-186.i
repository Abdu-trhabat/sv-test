// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
double var_1_4 = 63.5;
double var_1_5 = 127.5;
double var_1_6 = 8.4;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
signed char var_1_10 = 32;
signed char var_1_14 = 8;
signed char var_1_15 = 0;
unsigned long int var_1_16 = 10;
signed char var_1_17 = 10;
signed char var_1_18 = 25;
signed char var_1_19 = 25;
signed char var_1_20 = 1;
signed char var_1_21 = 5;
float var_1_22 = 5.75;
float var_1_23 = 7.5;
float var_1_24 = 1.25;
float var_1_25 = 64.875;
float var_1_26 = 4.5;
float var_1_27 = 9.4;
float var_1_28 = 127.6;
double var_1_29 = 15.875;
float var_1_30 = 31.6;
signed char var_1_31 = 4;
signed char var_1_33 = 32;
signed char var_1_34 = 1;
signed char var_1_35 = 50;
unsigned long int var_1_36 = 2;
unsigned char var_1_38 = 4;
unsigned char var_1_39 = 200;
unsigned short int var_1_40 = 25;
unsigned short int var_1_41 = 52434;
unsigned short int var_1_42 = 56501;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 8;
double var_1_48 = 8.75;
unsigned long int var_1_49 = 3333679340;
unsigned long int var_1_50 = 4;
unsigned long int var_1_51 = 2823113588;
unsigned short int var_1_52 = 4;
unsigned char var_1_53 = 4;
signed short int var_1_54 = 1;
unsigned long int var_1_55 = 1;
unsigned long int var_1_56 = 16;
unsigned long int var_1_57 = 1414921208;
unsigned char var_1_58 = 1;
unsigned long int var_1_59 = 5;
unsigned long int var_1_61 = 2423033250;
signed long int var_1_62 = -5;
signed char var_1_63 = 8;
unsigned char last_1_var_1_1 = 1;
float last_1_var_1_22 = 5.75;
unsigned long int last_1_var_1_36 = 2;
unsigned char last_1_var_1_38 = 4;
unsigned short int last_1_var_1_40 = 25;
double last_1_var_1_48 = 8.75;
unsigned short int last_1_var_1_52 = 4;
unsigned long int last_1_var_1_59 = 5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_var_1_48 != last_1_var_1_22;
 if (stepLocal_0 && (last_1_var_1_48 <= (last_1_var_1_48 / var_1_6))) {
  var_1_1 = ((last_1_var_1_1 || var_1_8) && var_1_9);
 }
 unsigned long int stepLocal_13 = ((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36))) * (var_1_39 - var_1_35);
 if (stepLocal_13 > var_1_34) {
  var_1_50 = (((((var_1_51 - var_1_35)) > (last_1_var_1_52)) ? ((var_1_51 - var_1_35)) : (last_1_var_1_52)));
 } else {
  var_1_50 = (var_1_34 + var_1_18);
 }
 if (! var_1_1) {
  if ((var_1_14 != var_1_18) || var_1_44) {
   var_1_52 = ((((42009 - var_1_50) < 0 ) ? -(42009 - var_1_50) : (42009 - var_1_50)));
  }
 }
 signed long int stepLocal_5 = last_1_var_1_38;
 if (! ((last_1_var_1_59 * last_1_var_1_36) > var_1_34)) {
  if (var_1_6 <= 31.5) {
   var_1_36 = var_1_34;
  }
 } else {
  if (stepLocal_5 > last_1_var_1_40) {
   if (var_1_6 > (var_1_28 * var_1_24)) {
    var_1_36 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
   } else {
    var_1_36 = var_1_35;
   }
  } else {
   var_1_36 = var_1_35;
  }
 }
 if (! last_1_var_1_1) {
  if (! var_1_45) {
   var_1_58 = (var_1_9 || (! (! var_1_8)));
  } else {
   if (var_1_24 < var_1_27) {
    var_1_58 = (! var_1_45);
   } else {
    if (! (var_1_57 <= 16u)) {
     var_1_58 = (! var_1_9);
    }
   }
  }
 }
 var_1_43 = ((var_1_58 && (var_1_8 && var_1_44)) || var_1_45);
 if (! var_1_43) {
  var_1_22 = ((((((((var_1_23) > (31.6f)) ? (var_1_23) : (31.6f)))) > ((var_1_24 - var_1_25))) ? (((((var_1_23) > (31.6f)) ? (var_1_23) : (31.6f)))) : ((var_1_24 - var_1_25))));
 }
 signed long int stepLocal_4 = (((var_1_52) > (var_1_18)) ? (var_1_52) : (var_1_18));
 if (var_1_21 == stepLocal_4) {
  var_1_31 = ((var_1_33 + ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) - var_1_18);
 }
 var_1_38 = ((var_1_39 - 4) - (var_1_35 + var_1_34));
 if (var_1_44) {
  var_1_54 = ((((25) > ((var_1_33 - 256))) ? (25) : ((var_1_33 - 256))));
 }
 signed char stepLocal_10 = var_1_21;
 if (! var_1_1) {
  if (((10 * var_1_50) | 5) <= stepLocal_10) {
   var_1_46 = (((((var_1_33) > (var_1_18)) ? (var_1_33) : (var_1_18))) + var_1_34);
  } else {
   var_1_46 = (var_1_39 - var_1_35);
  }
 }
 if (((var_1_46 * var_1_36) != var_1_35) || var_1_43) {
  if (! var_1_43) {
   var_1_53 = ((((var_1_33) > (((100 - var_1_35) + var_1_34))) ? (var_1_33) : (((100 - var_1_35) + var_1_34))));
  } else {
   var_1_53 = (var_1_34 + var_1_18);
  }
 }
 if (((((var_1_36) > (var_1_50)) ? (var_1_36) : (var_1_50))) >= (var_1_36 / var_1_16)) {
  if (var_1_8) {
   var_1_15 = (((((var_1_17 - var_1_18)) > (var_1_14)) ? ((var_1_17 - var_1_18)) : (var_1_14)));
  } else {
   var_1_15 = ((((var_1_18) > (var_1_14)) ? (var_1_18) : (var_1_14)));
  }
 } else {
  if (var_1_9 || var_1_58) {
   var_1_15 = (((((var_1_14 + var_1_19)) > (10)) ? ((var_1_14 + var_1_19)) : (10)));
  } else {
   var_1_15 = (var_1_19 + (var_1_20 + var_1_21));
  }
 }
 if (var_1_45) {
  var_1_55 = var_1_35;
 } else {
  if ((var_1_46 - var_1_34) > var_1_15) {
   if (var_1_8 || (! var_1_43)) {
    var_1_55 = ((((var_1_56) < (4u)) ? (var_1_56) : (4u)));
   } else {
    var_1_55 = (var_1_51 - var_1_34);
   }
  } else {
   if (var_1_56 >= var_1_36) {
    var_1_55 = (((((var_1_51) > (2606168154u)) ? (var_1_51) : (2606168154u))) - var_1_52);
   } else {
    var_1_55 = (((((10u) < ((var_1_42 + var_1_41))) ? (10u) : ((var_1_42 + var_1_41)))) + ((((var_1_57 - var_1_33) < 0 ) ? -(var_1_57 - var_1_33) : (var_1_57 - var_1_33))));
   }
  }
 }
 if (var_1_58) {
  if (var_1_9) {
   var_1_62 = var_1_34;
  } else {
   var_1_62 = var_1_18;
  }
 } else {
  var_1_62 = var_1_54;
 }
 if (var_1_54 <= 1) {
  if (var_1_25 < 1.625f) {
   if ((5 / ((((100) > (var_1_16)) ? (100) : (var_1_16)))) < var_1_55) {
    var_1_63 = var_1_17;
   }
  } else {
   var_1_63 = var_1_35;
  }
 } else {
  var_1_63 = -64;
 }
 signed long int stepLocal_12 = var_1_35 + var_1_54;
 unsigned long int stepLocal_11 = var_1_49 - var_1_53;
 if (var_1_42 == stepLocal_12) {
  if ((15.25f * var_1_4) > var_1_25) {
   if (var_1_16 <= stepLocal_11) {
    var_1_48 = var_1_24;
   } else {
    var_1_48 = var_1_23;
   }
  } else {
   var_1_48 = var_1_24;
  }
 }
 unsigned long int stepLocal_15 = ((((var_1_62) < (var_1_55)) ? (var_1_62) : (var_1_55))) * (var_1_49 - var_1_52);
 unsigned char stepLocal_14 = (var_1_51 - var_1_57) == var_1_41;
 if (var_1_58 || stepLocal_14) {
  if (stepLocal_15 < (((((var_1_51) < (var_1_61)) ? (var_1_51) : (var_1_61))) - var_1_42)) {
   var_1_59 = var_1_33;
  } else {
   var_1_59 = 1u;
  }
 } else {
  if (2.09 > var_1_25) {
   var_1_59 = (var_1_51 - var_1_57);
  } else {
   if (var_1_58) {
    var_1_59 = (((((((((var_1_18) < (var_1_57)) ? (var_1_18) : (var_1_57))) + ((((var_1_52) > (100u)) ? (var_1_52) : (100u))))) > (var_1_35)) ? ((((((var_1_18) < (var_1_57)) ? (var_1_18) : (var_1_57))) + ((((var_1_52) > (100u)) ? (var_1_52) : (100u))))) : (var_1_35)));
   }
  }
 }
 unsigned char stepLocal_9 = var_1_1;
 unsigned long int stepLocal_8 = ((((- var_1_59)) < (25)) ? ((- var_1_59)) : (25));
 unsigned char stepLocal_7 = var_1_58;
 unsigned char stepLocal_6 = var_1_58;
 if (stepLocal_8 > var_1_39) {
  if (stepLocal_7 && (var_1_50 != (var_1_33 / var_1_39))) {
   if (var_1_8 && stepLocal_9) {
    if (var_1_8 || stepLocal_6) {
     var_1_40 = (((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - var_1_33);
    }
   } else {
    var_1_40 = (var_1_35 + 5);
   }
  } else {
   var_1_40 = 4;
  }
 } else {
  var_1_40 = var_1_42;
 }
 unsigned long int stepLocal_2 = 128u;
 unsigned long int stepLocal_1 = var_1_36;
 if (((((var_1_59) > (((((var_1_59) < (var_1_36)) ? (var_1_59) : (var_1_36))))) ? (var_1_59) : (((((var_1_59) < (var_1_36)) ? (var_1_59) : (var_1_36)))))) <= stepLocal_2) {
  if (var_1_22 == (var_1_5 * var_1_4)) {
   if (stepLocal_1 <= (var_1_59 + (var_1_59 + 2u))) {
    var_1_10 = (var_1_14 + 5);
   } else {
    var_1_10 = var_1_14;
   }
  }
 } else {
  var_1_10 = var_1_14;
 }
 unsigned char stepLocal_3 = var_1_58;
 if ((((((var_1_25 + var_1_24)) < (var_1_48)) ? ((var_1_25 + var_1_24)) : (var_1_48))) <= 31.3f) {
  if ((var_1_6 >= var_1_48) && stepLocal_3) {
   var_1_26 = (var_1_27 + var_1_28);
  } else {
   if (var_1_6 >= (var_1_48 / var_1_29)) {
    var_1_26 = (var_1_24 - ((((((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30)))) > (24.1f)) ? (((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30)))) : (24.1f))));
   } else {
    if (var_1_58) {
     var_1_26 = var_1_23;
    }
   }
  }
 } else {
  var_1_26 = var_1_28;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 4294967295);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -31);
 assume_abort_if_not(var_1_20 <= 32);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -31);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 190);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65534);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 32767);
 assume_abort_if_not(var_1_42 <= 65534);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967295);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 4294967294);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 1073741823);
 assume_abort_if_not(var_1_57 <= 2147483647);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 2147483647);
 assume_abort_if_not(var_1_61 <= 4294967295);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_59 = var_1_59;
}
int property(void) {
 return ((((((((((((((((((((((last_1_var_1_48 != last_1_var_1_22) && (last_1_var_1_48 <= (last_1_var_1_48 / var_1_6))) ? (var_1_1 == ((unsigned char) ((last_1_var_1_1 || var_1_8) && var_1_9))) : 1) && ((((((var_1_59) > (((((var_1_59) < (var_1_36)) ? (var_1_59) : (var_1_36))))) ? (var_1_59) : (((((var_1_59) < (var_1_36)) ? (var_1_59) : (var_1_36)))))) <= 128u) ? ((var_1_22 == (var_1_5 * var_1_4)) ? ((var_1_36 <= (var_1_59 + (var_1_59 + 2u))) ? (var_1_10 == ((signed char) (var_1_14 + 5))) : (var_1_10 == ((signed char) var_1_14))) : 1) : (var_1_10 == ((signed char) var_1_14)))) && ((((((var_1_36) > (var_1_50)) ? (var_1_36) : (var_1_50))) >= (var_1_36 / var_1_16)) ? (var_1_8 ? (var_1_15 == ((signed char) (((((var_1_17 - var_1_18)) > (var_1_14)) ? ((var_1_17 - var_1_18)) : (var_1_14))))) : (var_1_15 == ((signed char) ((((var_1_18) > (var_1_14)) ? (var_1_18) : (var_1_14)))))) : ((var_1_9 || var_1_58) ? (var_1_15 == ((signed char) (((((var_1_14 + var_1_19)) > (10)) ? ((var_1_14 + var_1_19)) : (10))))) : (var_1_15 == ((signed char) (var_1_19 + (var_1_20 + var_1_21))))))) && ((! var_1_43) ? (var_1_22 == ((float) ((((((((var_1_23) > (31.6f)) ? (var_1_23) : (31.6f)))) > ((var_1_24 - var_1_25))) ? (((((var_1_23) > (31.6f)) ? (var_1_23) : (31.6f)))) : ((var_1_24 - var_1_25)))))) : 1)) && (((((((var_1_25 + var_1_24)) < (var_1_48)) ? ((var_1_25 + var_1_24)) : (var_1_48))) <= 31.3f) ? (((var_1_6 >= var_1_48) && var_1_58) ? (var_1_26 == ((float) (var_1_27 + var_1_28))) : ((var_1_6 >= (var_1_48 / var_1_29)) ? (var_1_26 == ((float) (var_1_24 - ((((((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30)))) > (24.1f)) ? (((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30)))) : (24.1f)))))) : (var_1_58 ? (var_1_26 == ((float) var_1_23)) : 1))) : (var_1_26 == ((float) var_1_28)))) && ((var_1_21 == ((((var_1_52) > (var_1_18)) ? (var_1_52) : (var_1_18)))) ? (var_1_31 == ((signed char) ((var_1_33 + ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) - var_1_18))) : 1)) && ((! ((last_1_var_1_59 * last_1_var_1_36) > var_1_34)) ? ((var_1_6 <= 31.5) ? (var_1_36 == ((unsigned long int) var_1_34)) : 1) : ((last_1_var_1_38 > last_1_var_1_40) ? ((var_1_6 > (var_1_28 * var_1_24)) ? (var_1_36 == ((unsigned long int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) : (var_1_36 == ((unsigned long int) var_1_35))) : (var_1_36 == ((unsigned long int) var_1_35))))) && (var_1_38 == ((unsigned char) ((var_1_39 - 4) - (var_1_35 + var_1_34))))) && (((((((- var_1_59)) < (25)) ? ((- var_1_59)) : (25))) > var_1_39) ? ((var_1_58 && (var_1_50 != (var_1_33 / var_1_39))) ? ((var_1_8 && var_1_1) ? ((var_1_8 || var_1_58) ? (var_1_40 == ((unsigned short int) (((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - var_1_33))) : 1) : (var_1_40 == ((unsigned short int) (var_1_35 + 5)))) : (var_1_40 == ((unsigned short int) 4))) : (var_1_40 == ((unsigned short int) var_1_42)))) && (var_1_43 == ((unsigned char) ((var_1_58 && (var_1_8 && var_1_44)) || var_1_45)))) && ((! var_1_1) ? ((((10 * var_1_50) | 5) <= var_1_21) ? (var_1_46 == ((unsigned char) (((((var_1_33) > (var_1_18)) ? (var_1_33) : (var_1_18))) + var_1_34))) : (var_1_46 == ((unsigned char) (var_1_39 - var_1_35)))) : 1)) && ((var_1_42 == (var_1_35 + var_1_54)) ? (((15.25f * var_1_4) > var_1_25) ? ((var_1_16 <= (var_1_49 - var_1_53)) ? (var_1_48 == ((double) var_1_24)) : (var_1_48 == ((double) var_1_23))) : (var_1_48 == ((double) var_1_24))) : 1)) && (((((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36))) * (var_1_39 - var_1_35)) > var_1_34) ? (var_1_50 == ((unsigned long int) (((((var_1_51 - var_1_35)) > (last_1_var_1_52)) ? ((var_1_51 - var_1_35)) : (last_1_var_1_52))))) : (var_1_50 == ((unsigned long int) (var_1_34 + var_1_18))))) && ((! var_1_1) ? (((var_1_14 != var_1_18) || var_1_44) ? (var_1_52 == ((unsigned short int) ((((42009 - var_1_50) < 0 ) ? -(42009 - var_1_50) : (42009 - var_1_50))))) : 1) : 1)) && ((((var_1_46 * var_1_36) != var_1_35) || var_1_43) ? ((! var_1_43) ? (var_1_53 == ((unsigned char) ((((var_1_33) > (((100 - var_1_35) + var_1_34))) ? (var_1_33) : (((100 - var_1_35) + var_1_34)))))) : (var_1_53 == ((unsigned char) (var_1_34 + var_1_18)))) : 1)) && (var_1_44 ? (var_1_54 == ((signed short int) ((((25) > ((var_1_33 - 256))) ? (25) : ((var_1_33 - 256)))))) : 1)) && (var_1_45 ? (var_1_55 == ((unsigned long int) var_1_35)) : (((var_1_46 - var_1_34) > var_1_15) ? ((var_1_8 || (! var_1_43)) ? (var_1_55 == ((unsigned long int) ((((var_1_56) < (4u)) ? (var_1_56) : (4u))))) : (var_1_55 == ((unsigned long int) (var_1_51 - var_1_34)))) : ((var_1_56 >= var_1_36) ? (var_1_55 == ((unsigned long int) (((((var_1_51) > (2606168154u)) ? (var_1_51) : (2606168154u))) - var_1_52))) : (var_1_55 == ((unsigned long int) (((((10u) < ((var_1_42 + var_1_41))) ? (10u) : ((var_1_42 + var_1_41)))) + ((((var_1_57 - var_1_33) < 0 ) ? -(var_1_57 - var_1_33) : (var_1_57 - var_1_33)))))))))) && ((! last_1_var_1_1) ? ((! var_1_45) ? (var_1_58 == ((unsigned char) (var_1_9 || (! (! var_1_8))))) : ((var_1_24 < var_1_27) ? (var_1_58 == ((unsigned char) (! var_1_45))) : ((! (var_1_57 <= 16u)) ? (var_1_58 == ((unsigned char) (! var_1_9))) : 1))) : 1)) && ((var_1_58 || ((var_1_51 - var_1_57) == var_1_41)) ? (((((((var_1_62) < (var_1_55)) ? (var_1_62) : (var_1_55))) * (var_1_49 - var_1_52)) < (((((var_1_51) < (var_1_61)) ? (var_1_51) : (var_1_61))) - var_1_42)) ? (var_1_59 == ((unsigned long int) var_1_33)) : (var_1_59 == ((unsigned long int) 1u))) : ((2.09 > var_1_25) ? (var_1_59 == ((unsigned long int) (var_1_51 - var_1_57))) : (var_1_58 ? (var_1_59 == ((unsigned long int) (((((((((var_1_18) < (var_1_57)) ? (var_1_18) : (var_1_57))) + ((((var_1_52) > (100u)) ? (var_1_52) : (100u))))) > (var_1_35)) ? ((((((var_1_18) < (var_1_57)) ? (var_1_18) : (var_1_57))) + ((((var_1_52) > (100u)) ? (var_1_52) : (100u))))) : (var_1_35))))) : 1)))) && (var_1_58 ? (var_1_9 ? (var_1_62 == ((signed long int) var_1_34)) : (var_1_62 == ((signed long int) var_1_18))) : (var_1_62 == ((signed long int) var_1_54)))) && ((var_1_54 <= 1) ? ((var_1_25 < 1.625f) ? (((5 / ((((100) > (var_1_16)) ? (100) : (var_1_16)))) < var_1_55) ? (var_1_63 == ((signed char) var_1_17)) : 1) : (var_1_63 == ((signed char) var_1_35))) : (var_1_63 == ((signed char) -64)))
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
