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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 16;
unsigned short int var_1_7 = 34024;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 5;
unsigned short int var_1_10 = 32;
float var_1_11 = 10.375;
float var_1_12 = 15.5;
float var_1_13 = 10.6;
float var_1_14 = 1.25;
float var_1_15 = -0.8;
float var_1_16 = 256.4;
double var_1_17 = 63.75;
double var_1_18 = 99.5;
double var_1_20 = 24.5;
double var_1_21 = 100.8;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 64;
unsigned long int var_1_26 = 50;
double var_1_27 = 2.6;
double var_1_28 = 16.5;
unsigned long int var_1_29 = 3064223380;
unsigned long int var_1_30 = 2431200858;
unsigned long int var_1_31 = 3160781306;
unsigned long int var_1_32 = 1833128278;
unsigned char var_1_33 = 100;
float var_1_34 = 0.0;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 32;
unsigned char var_1_37 = 0;
unsigned char var_1_39 = 8;
unsigned short int var_1_40 = 128;
signed short int var_1_41 = -5;
signed char var_1_42 = 1;
double var_1_43 = 32.5;
signed short int var_1_44 = 1;
signed char var_1_47 = 5;
signed char var_1_48 = 100;
signed char var_1_49 = 4;
signed char var_1_50 = 32;
signed char var_1_51 = 5;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
signed short int var_1_57 = -1;
float var_1_59 = 0.8;
float var_1_60 = 255.6;
unsigned char var_1_61 = 2;
float var_1_62 = 127.4;
float var_1_63 = 32.5;
unsigned short int last_1_var_1_1 = 16;
unsigned short int last_1_var_1_40 = 128;
double last_1_var_1_43 = 32.5;
unsigned char last_1_var_1_52 = 0;
unsigned char last_1_var_1_61 = 2;
float last_1_var_1_62 = 127.4;
void initially(void) {
}
void step(void) {
 if (32.8f > ((last_1_var_1_43 * last_1_var_1_62) / var_1_12)) {
  var_1_11 = (var_1_13 + (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16));
 } else {
  if (((var_1_15 / var_1_12) / var_1_17) > var_1_16) {
   var_1_11 = (var_1_15 + var_1_14);
  }
 }
 signed long int stepLocal_5 = (((last_1_var_1_61) < 0 ) ? -(last_1_var_1_61) : (last_1_var_1_61));
 if (var_1_29 == stepLocal_5) {
  var_1_40 = (((((var_1_23 + 100)) > (((last_1_var_1_61 + 16) + var_1_24))) ? ((var_1_23 + 100)) : (((last_1_var_1_61 + 16) + var_1_24))));
 } else {
  var_1_40 = (42672 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))));
 }
 if (((var_1_27 + var_1_28) - var_1_20) > ((- var_1_15) / var_1_12)) {
  if (var_1_15 >= var_1_27) {
   var_1_26 = (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + ((((last_1_var_1_40) > (var_1_7)) ? (last_1_var_1_40) : (var_1_7))));
  }
 } else {
  if (last_1_var_1_52) {
   var_1_26 = (((((var_1_29) > (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))))) ? (var_1_29) : (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))))) - ((((var_1_9) < ((var_1_32 - var_1_7))) ? (var_1_9) : ((var_1_32 - var_1_7)))));
  }
 }
 unsigned long int stepLocal_15 = var_1_26 / var_1_50;
 unsigned long int stepLocal_14 = var_1_31;
 if (stepLocal_15 > var_1_26) {
  if (stepLocal_14 != var_1_37) {
   var_1_57 = var_1_37;
  }
 }
 var_1_52 = (var_1_53 || var_1_54);
 var_1_63 = var_1_20;
 if (var_1_26 >= (((((- 32)) < ((var_1_40 | var_1_9))) ? ((- 32)) : ((var_1_40 | var_1_9))))) {
  var_1_18 = (var_1_14 + (var_1_16 + var_1_15));
 } else {
  var_1_18 = (((((var_1_16 + var_1_15)) < ((var_1_20 - var_1_21))) ? ((var_1_16 + var_1_15)) : ((var_1_20 - var_1_21))));
 }
 if (var_1_13 > ((var_1_34 - 31.75f) - var_1_27)) {
  if (var_1_28 < ((((- var_1_12) < 0 ) ? -(- var_1_12) : (- var_1_12)))) {
   var_1_33 = (var_1_25 + var_1_24);
  } else {
   if ((- var_1_10) != var_1_57) {
    var_1_33 = var_1_24;
   }
  }
 } else {
  if (var_1_24 < var_1_40) {
   if (var_1_13 >= 64.85f) {
    var_1_33 = var_1_24;
   } else {
    var_1_33 = var_1_23;
   }
  } else {
   var_1_33 = var_1_24;
  }
 }
 if (128 >= (var_1_39 * var_1_44)) {
  if ((var_1_25 - var_1_8) <= var_1_33) {
   var_1_47 = ((((var_1_39) < (((var_1_48 - var_1_24) - var_1_37))) ? (var_1_39) : (((var_1_48 - var_1_24) - var_1_37))));
  }
 } else {
  if (((var_1_28 * var_1_63) / ((((var_1_17) > (var_1_34)) ? (var_1_17) : (var_1_34)))) < (- var_1_13)) {
   var_1_47 = ((((var_1_48) > (((var_1_39 - 2) + var_1_24))) ? (var_1_48) : (((var_1_39 - 2) + var_1_24))));
  } else {
   var_1_47 = (var_1_39 + ((var_1_24 + var_1_49) - (var_1_50 - var_1_51)));
  }
 }
 unsigned char stepLocal_0 = var_1_11 >= var_1_18;
 if (var_1_52) {
  if ((var_1_26 <= last_1_var_1_1) || stepLocal_0) {
   var_1_1 = (((((var_1_7 - 16)) > (var_1_8)) ? ((var_1_7 - 16)) : (var_1_8)));
  } else {
   var_1_1 = (var_1_7 - ((10000 - 32) + var_1_9));
  }
 } else {
  var_1_1 = (var_1_9 + var_1_10);
 }
 if (var_1_18 <= ((((var_1_28) > (var_1_18)) ? (var_1_28) : (var_1_18)))) {
  var_1_55 = (! (! var_1_53));
 }
 if (var_1_54 && var_1_55) {
  var_1_62 = (var_1_16 + var_1_13);
 }
 unsigned char stepLocal_1 = var_1_55;
 if (stepLocal_1 && ((var_1_8 % -25) <= (var_1_7 - var_1_1))) {
  var_1_22 = (var_1_23 - (25 + (50 - var_1_24)));
 } else {
  var_1_22 = ((((((64 + var_1_25) - var_1_24)) > (var_1_23)) ? (((64 + var_1_25) - var_1_24)) : (var_1_23)));
 }
 signed long int stepLocal_7 = ((((var_1_25) < (var_1_37)) ? (var_1_25) : (var_1_37))) - var_1_24;
 unsigned char stepLocal_6 = var_1_55;
 if (stepLocal_7 < ((var_1_26 / var_1_7) / var_1_23)) {
  if (var_1_52 && stepLocal_6) {
   if (var_1_16 <= (var_1_21 * 2.5f)) {
    var_1_41 = var_1_37;
   } else {
    var_1_41 = var_1_9;
   }
  } else {
   var_1_41 = var_1_25;
  }
 }
 unsigned long int stepLocal_9 = var_1_26;
 unsigned short int stepLocal_8 = var_1_1;
 if (stepLocal_8 <= var_1_9) {
  if (! var_1_55) {
   var_1_42 = (var_1_39 + (((((-5) < (var_1_24)) ? (-5) : (var_1_24))) + -2));
  } else {
   if (stepLocal_9 >= ((((64) < 0 ) ? -(64) : (64)))) {
    var_1_42 = ((((var_1_37) < (var_1_24)) ? (var_1_37) : (var_1_24)));
   }
  }
 }
 unsigned char stepLocal_16 = var_1_1 >= var_1_9;
 if (var_1_54 || stepLocal_16) {
  if (! var_1_55) {
   var_1_59 = ((((var_1_15) > (var_1_13)) ? (var_1_15) : (var_1_13)));
  }
 } else {
  if (var_1_13 <= 0.25f) {
   var_1_59 = var_1_21;
  } else {
   var_1_59 = (((((var_1_60 - var_1_21)) < (var_1_15)) ? ((var_1_60 - var_1_21)) : (var_1_15)));
  }
 }
 unsigned long int stepLocal_4 = var_1_26;
 unsigned char stepLocal_3 = (- var_1_30) > (var_1_10 * var_1_1);
 signed long int stepLocal_2 = -10;
 if (var_1_55) {
  if (var_1_1 == stepLocal_4) {
   if (stepLocal_2 != (var_1_10 * (var_1_36 * var_1_23))) {
    var_1_35 = (var_1_24 + var_1_25);
   } else {
    var_1_35 = var_1_24;
   }
  } else {
   var_1_35 = ((var_1_24 + var_1_37) + var_1_25);
  }
 } else {
  if (var_1_52 && stepLocal_3) {
   var_1_35 = ((200 - (var_1_24 + var_1_39)) - var_1_37);
  }
 }
 signed long int stepLocal_13 = (((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35));
 unsigned long int stepLocal_12 = (((var_1_40) > (var_1_30)) ? (var_1_40) : (var_1_30));
 signed long int stepLocal_11 = -8;
 unsigned char stepLocal_10 = var_1_52;
 if ((var_1_39 / var_1_44) != stepLocal_13) {
  if (var_1_55) {
   var_1_43 = var_1_21;
  } else {
   var_1_43 = (((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_14);
  }
 } else {
  if (! var_1_52) {
   if (stepLocal_10 && var_1_55) {
    var_1_43 = var_1_21;
   } else {
    if ((var_1_26 | (var_1_8 * 1u)) >= stepLocal_12) {
     if (stepLocal_11 <= var_1_10) {
      var_1_43 = var_1_16;
     } else {
      var_1_43 = var_1_15;
     }
    }
   }
  } else {
   var_1_43 = var_1_14;
  }
 }
 signed char stepLocal_19 = var_1_49;
 unsigned long int stepLocal_18 = var_1_39 + var_1_29;
 unsigned char stepLocal_17 = var_1_33;
 if (stepLocal_17 <= (var_1_23 - var_1_48)) {
  if (stepLocal_19 <= ((((var_1_26) > ((16 << var_1_26))) ? (var_1_26) : ((16 << var_1_26))))) {
   if (stepLocal_18 >= var_1_9) {
    var_1_61 = (var_1_51 + var_1_50);
   } else {
    if (var_1_11 <= var_1_43) {
     var_1_61 = var_1_37;
    }
   }
  }
 } else {
  var_1_61 = var_1_48;
 }
}
void updateVariables(void) {
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 31);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 64);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427388000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427388000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 2147483647);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 1073741823);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 4611686.018427388000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483648);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 31);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= -32768);
 assume_abort_if_not(var_1_44 <= 32767);
 assume_abort_if_not(var_1_44 != 0);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 62);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 31);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 31);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 31);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_62 = var_1_62;
}
int property(void) {
 return ((((((((((((((((((var_1_52 ? (((var_1_26 <= last_1_var_1_1) || (var_1_11 >= var_1_18)) ? (var_1_1 == ((unsigned short int) (((((var_1_7 - 16)) > (var_1_8)) ? ((var_1_7 - 16)) : (var_1_8))))) : (var_1_1 == ((unsigned short int) (var_1_7 - ((10000 - 32) + var_1_9))))) : (var_1_1 == ((unsigned short int) (var_1_9 + var_1_10)))) && ((32.8f > ((last_1_var_1_43 * last_1_var_1_62) / var_1_12)) ? (var_1_11 == ((float) (var_1_13 + (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16)))) : ((((var_1_15 / var_1_12) / var_1_17) > var_1_16) ? (var_1_11 == ((float) (var_1_15 + var_1_14))) : 1))) && ((var_1_26 >= (((((- 32)) < ((var_1_40 | var_1_9))) ? ((- 32)) : ((var_1_40 | var_1_9))))) ? (var_1_18 == ((double) (var_1_14 + (var_1_16 + var_1_15)))) : (var_1_18 == ((double) (((((var_1_16 + var_1_15)) < ((var_1_20 - var_1_21))) ? ((var_1_16 + var_1_15)) : ((var_1_20 - var_1_21)))))))) && ((var_1_55 && ((var_1_8 % -25) <= (var_1_7 - var_1_1))) ? (var_1_22 == ((unsigned char) (var_1_23 - (25 + (50 - var_1_24))))) : (var_1_22 == ((unsigned char) ((((((64 + var_1_25) - var_1_24)) > (var_1_23)) ? (((64 + var_1_25) - var_1_24)) : (var_1_23))))))) && ((((var_1_27 + var_1_28) - var_1_20) > ((- var_1_15) / var_1_12)) ? ((var_1_15 >= var_1_27) ? (var_1_26 == ((unsigned long int) (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + ((((last_1_var_1_40) > (var_1_7)) ? (last_1_var_1_40) : (var_1_7)))))) : 1) : (last_1_var_1_52 ? (var_1_26 == ((unsigned long int) (((((var_1_29) > (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))))) ? (var_1_29) : (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))))) - ((((var_1_9) < ((var_1_32 - var_1_7))) ? (var_1_9) : ((var_1_32 - var_1_7))))))) : 1))) && ((var_1_13 > ((var_1_34 - 31.75f) - var_1_27)) ? ((var_1_28 < ((((- var_1_12) < 0 ) ? -(- var_1_12) : (- var_1_12)))) ? (var_1_33 == ((unsigned char) (var_1_25 + var_1_24))) : (((- var_1_10) != var_1_57) ? (var_1_33 == ((unsigned char) var_1_24)) : 1)) : ((var_1_24 < var_1_40) ? ((var_1_13 >= 64.85f) ? (var_1_33 == ((unsigned char) var_1_24)) : (var_1_33 == ((unsigned char) var_1_23))) : (var_1_33 == ((unsigned char) var_1_24))))) && (var_1_55 ? ((var_1_1 == var_1_26) ? ((-10 != (var_1_10 * (var_1_36 * var_1_23))) ? (var_1_35 == ((unsigned char) (var_1_24 + var_1_25))) : (var_1_35 == ((unsigned char) var_1_24))) : (var_1_35 == ((unsigned char) ((var_1_24 + var_1_37) + var_1_25)))) : ((var_1_52 && ((- var_1_30) > (var_1_10 * var_1_1))) ? (var_1_35 == ((unsigned char) ((200 - (var_1_24 + var_1_39)) - var_1_37))) : 1))) && ((var_1_29 == ((((last_1_var_1_61) < 0 ) ? -(last_1_var_1_61) : (last_1_var_1_61)))) ? (var_1_40 == ((unsigned short int) (((((var_1_23 + 100)) > (((last_1_var_1_61 + 16) + var_1_24))) ? ((var_1_23 + 100)) : (((last_1_var_1_61 + 16) + var_1_24)))))) : (var_1_40 == ((unsigned short int) (42672 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))))) && (((((((var_1_25) < (var_1_37)) ? (var_1_25) : (var_1_37))) - var_1_24) < ((var_1_26 / var_1_7) / var_1_23)) ? ((var_1_52 && var_1_55) ? ((var_1_16 <= (var_1_21 * 2.5f)) ? (var_1_41 == ((signed short int) var_1_37)) : (var_1_41 == ((signed short int) var_1_9))) : (var_1_41 == ((signed short int) var_1_25))) : 1)) && ((var_1_1 <= var_1_9) ? ((! var_1_55) ? (var_1_42 == ((signed char) (var_1_39 + (((((-5) < (var_1_24)) ? (-5) : (var_1_24))) + -2)))) : ((var_1_26 >= ((((64) < 0 ) ? -(64) : (64)))) ? (var_1_42 == ((signed char) ((((var_1_37) < (var_1_24)) ? (var_1_37) : (var_1_24))))) : 1)) : 1)) && (((var_1_39 / var_1_44) != ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) ? (var_1_55 ? (var_1_43 == ((double) var_1_21)) : (var_1_43 == ((double) (((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_14)))) : ((! var_1_52) ? ((var_1_52 && var_1_55) ? (var_1_43 == ((double) var_1_21)) : (((var_1_26 | (var_1_8 * 1u)) >= ((((var_1_40) > (var_1_30)) ? (var_1_40) : (var_1_30)))) ? ((-8 <= var_1_10) ? (var_1_43 == ((double) var_1_16)) : (var_1_43 == ((double) var_1_15))) : 1)) : (var_1_43 == ((double) var_1_14))))) && ((128 >= (var_1_39 * var_1_44)) ? (((var_1_25 - var_1_8) <= var_1_33) ? (var_1_47 == ((signed char) ((((var_1_39) < (((var_1_48 - var_1_24) - var_1_37))) ? (var_1_39) : (((var_1_48 - var_1_24) - var_1_37)))))) : 1) : ((((var_1_28 * var_1_63) / ((((var_1_17) > (var_1_34)) ? (var_1_17) : (var_1_34)))) < (- var_1_13)) ? (var_1_47 == ((signed char) ((((var_1_48) > (((var_1_39 - 2) + var_1_24))) ? (var_1_48) : (((var_1_39 - 2) + var_1_24)))))) : (var_1_47 == ((signed char) (var_1_39 + ((var_1_24 + var_1_49) - (var_1_50 - var_1_51)))))))) && (var_1_52 == ((unsigned char) (var_1_53 || var_1_54)))) && ((var_1_18 <= ((((var_1_28) > (var_1_18)) ? (var_1_28) : (var_1_18)))) ? (var_1_55 == ((unsigned char) (! (! var_1_53)))) : 1)) && (((var_1_26 / var_1_50) > var_1_26) ? ((var_1_31 != var_1_37) ? (var_1_57 == ((signed short int) var_1_37)) : 1) : 1)) && ((var_1_54 || (var_1_1 >= var_1_9)) ? ((! var_1_55) ? (var_1_59 == ((float) ((((var_1_15) > (var_1_13)) ? (var_1_15) : (var_1_13))))) : 1) : ((var_1_13 <= 0.25f) ? (var_1_59 == ((float) var_1_21)) : (var_1_59 == ((float) (((((var_1_60 - var_1_21)) < (var_1_15)) ? ((var_1_60 - var_1_21)) : (var_1_15)))))))) && ((var_1_33 <= (var_1_23 - var_1_48)) ? ((var_1_49 <= ((((var_1_26) > ((16 << var_1_26))) ? (var_1_26) : ((16 << var_1_26))))) ? (((var_1_39 + var_1_29) >= var_1_9) ? (var_1_61 == ((unsigned char) (var_1_51 + var_1_50))) : ((var_1_11 <= var_1_43) ? (var_1_61 == ((unsigned char) var_1_37)) : 1)) : 1) : (var_1_61 == ((unsigned char) var_1_48)))) && ((var_1_54 && var_1_55) ? (var_1_62 == ((float) (var_1_16 + var_1_13))) : 1)) && (var_1_63 == ((float) var_1_20))
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
