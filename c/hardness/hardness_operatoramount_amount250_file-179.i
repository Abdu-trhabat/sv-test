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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned short int var_1_4 = 100;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 4;
unsigned short int var_1_8 = 256;
double var_1_9 = 24.2;
double var_1_10 = 100000000000000.2;
double var_1_11 = 0.5;
double var_1_12 = -0.71;
double var_1_14 = 99.625;
unsigned long int var_1_15 = 128;
unsigned char var_1_16 = 1;
unsigned long int var_1_19 = 4196694662;
unsigned long int var_1_20 = 1000000000;
unsigned long int var_1_21 = 25;
signed long int var_1_22 = 5;
signed short int var_1_23 = -16;
signed short int var_1_24 = 500;
signed char var_1_25 = 64;
signed char var_1_26 = 64;
signed char var_1_27 = 2;
signed char var_1_28 = 2;
unsigned long int var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 128;
signed long int var_1_35 = -10000000;
unsigned short int var_1_36 = 1;
float var_1_37 = 255.4;
unsigned short int var_1_38 = 64;
unsigned char var_1_39 = 4;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 200;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 64;
unsigned long int var_1_47 = 5;
signed short int var_1_48 = 5;
float var_1_49 = 200.8;
unsigned short int var_1_50 = 44400;
unsigned short int var_1_51 = 54845;
float var_1_53 = 15.75;
unsigned long int var_1_54 = 4;
unsigned char var_1_55 = 4;
unsigned char var_1_56 = 50;
signed short int var_1_57 = 0;
signed short int var_1_58 = 26126;
signed long int var_1_59 = 4;
unsigned long int var_1_60 = 4;
signed short int var_1_61 = 4;
double last_1_var_1_9 = 24.2;
unsigned long int last_1_var_1_29 = 1;
unsigned char last_1_var_1_30 = 0;
unsigned short int last_1_var_1_36 = 1;
signed short int last_1_var_1_48 = 5;
unsigned long int last_1_var_1_60 = 4;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_5 = var_1_8;
 unsigned short int stepLocal_4 = var_1_6;
 signed long int stepLocal_3 = (var_1_8 << var_1_16) / -200;
 if (stepLocal_5 <= last_1_var_1_36) {
  if ((((((last_1_var_1_60 % var_1_16)) > (var_1_4)) ? ((last_1_var_1_60 % var_1_16)) : (var_1_4))) >= stepLocal_4) {
   if (last_1_var_1_30) {
    if ((- var_1_10) <= (- ((((last_1_var_1_9) < 0 ) ? -(last_1_var_1_9) : (last_1_var_1_9))))) {
     if ((var_1_7 + var_1_6) == stepLocal_3) {
      var_1_15 = ((var_1_19 - (var_1_20 - var_1_8)) - var_1_21);
     } else {
      var_1_15 = var_1_21;
     }
    } else {
     var_1_15 = var_1_16;
    }
   } else {
    var_1_15 = var_1_21;
   }
  } else {
   var_1_15 = var_1_6;
  }
 }
 unsigned long int stepLocal_2 = (((last_1_var_1_29) < ((var_1_4 + 5u))) ? (last_1_var_1_29) : ((var_1_4 + 5u)));
 unsigned short int stepLocal_1 = var_1_4;
 unsigned short int stepLocal_0 = var_1_7;
 if (last_1_var_1_60 > stepLocal_1) {
  if (stepLocal_0 >= last_1_var_1_48) {
   var_1_9 = var_1_10;
  } else {
   var_1_9 = (var_1_11 + var_1_12);
  }
 } else {
  if (stepLocal_2 > 10000u) {
   var_1_9 = (var_1_14 - 7.15);
  }
 }
 if (((((var_1_16) > (2)) ? (var_1_16) : (2))) > 0) {
  var_1_22 = var_1_8;
 } else {
  var_1_22 = ((var_1_6 + var_1_4) + var_1_16);
 }
 if ((var_1_20 * ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7)))) > (var_1_21 % (64u + var_1_6))) {
  var_1_25 = ((var_1_26 - var_1_27) - var_1_28);
 } else {
  var_1_25 = var_1_27;
 }
 unsigned long int stepLocal_6 = var_1_21;
 if (stepLocal_6 >= var_1_4) {
  var_1_29 = var_1_20;
 } else {
  var_1_29 = ((var_1_19 - var_1_8) - (((((var_1_26 + var_1_16)) > (var_1_27)) ? ((var_1_26 + var_1_16)) : (var_1_27))));
 }
 var_1_30 = (var_1_31 || var_1_32);
 unsigned long int stepLocal_9 = var_1_29;
 if (stepLocal_9 < var_1_26) {
  var_1_37 = (10.58f - var_1_14);
 }
 signed long int stepLocal_14 = 2;
 unsigned char stepLocal_13 = var_1_32;
 if (stepLocal_14 > var_1_8) {
  if ((var_1_30 && var_1_31) || stepLocal_13) {
   var_1_39 = (((((var_1_27) < (var_1_26)) ? (var_1_27) : (var_1_26))) + var_1_28);
  } else {
   var_1_39 = (((((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))) < ((var_1_43 + var_1_44))) ? (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))) : ((var_1_43 + var_1_44)))) - (var_1_27 + ((((5) < (var_1_45)) ? (5) : (var_1_45)))));
  }
 }
 unsigned char stepLocal_16 = var_1_43 == var_1_4;
 signed long int stepLocal_15 = var_1_6 - var_1_42;
 if (stepLocal_16 && var_1_31) {
  if (256 >= stepLocal_15) {
   var_1_46 = 0;
  }
 }
 if (var_1_5 != (var_1_26 + var_1_15)) {
  var_1_47 = ((var_1_45 + var_1_29) + var_1_7);
 }
 signed char stepLocal_23 = var_1_26;
 unsigned short int stepLocal_22 = var_1_50;
 if (stepLocal_23 <= var_1_28) {
  if (stepLocal_22 <= var_1_20) {
   var_1_54 = ((((var_1_26) < (var_1_6)) ? (var_1_26) : (var_1_6)));
  } else {
   var_1_54 = var_1_50;
  }
 } else {
  var_1_54 = (var_1_19 - var_1_5);
 }
 unsigned char stepLocal_24 = var_1_30;
 if (var_1_31 || stepLocal_24) {
  if (var_1_30) {
   var_1_59 = var_1_34;
  } else {
   var_1_59 = var_1_7;
  }
 } else {
  var_1_59 = var_1_29;
 }
 var_1_60 = var_1_42;
 unsigned long int stepLocal_8 = var_1_15;
 if (stepLocal_8 < var_1_7) {
  var_1_36 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 unsigned char stepLocal_17 = var_1_32;
 if (stepLocal_17 || ((var_1_9 + var_1_37) != var_1_10)) {
  if (var_1_30) {
   var_1_48 = (((((((((var_1_7 + var_1_26)) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? ((var_1_7 + var_1_26)) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) < (var_1_34)) ? ((((((var_1_7 + var_1_26)) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? ((var_1_7 + var_1_26)) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) : (var_1_34)));
  }
 }
 if (var_1_15 >= var_1_47) {
  var_1_1 = ((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) + (var_1_6 - var_1_7)) + ((((var_1_8) > (16)) ? (var_1_8) : (16))));
 } else {
  var_1_1 = (((((var_1_7 + var_1_6)) > (var_1_8)) ? ((var_1_7 + var_1_6)) : (var_1_8)));
 }
 if ((var_1_20 - var_1_21) < var_1_19) {
  if (var_1_30) {
   if (((((var_1_7) > (var_1_60)) ? (var_1_7) : (var_1_60))) >= (var_1_15 / ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) {
    var_1_23 = (((((var_1_24 - var_1_4)) > (var_1_5)) ? ((var_1_24 - var_1_4)) : (var_1_5)));
   } else {
    var_1_23 = var_1_5;
   }
  }
 } else {
  var_1_23 = var_1_7;
 }
 signed long int stepLocal_7 = var_1_6 * (var_1_34 - 10);
 if (stepLocal_7 >= var_1_54) {
  if (var_1_31) {
   var_1_33 = ((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)));
  } else {
   var_1_33 = ((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28)));
  }
 } else {
  var_1_33 = 64;
 }
 if ((- 500.05f) >= (- (- var_1_9))) {
  var_1_35 = (var_1_16 - var_1_4);
 } else {
  var_1_35 = ((((((((var_1_27) < (var_1_47)) ? (var_1_27) : (var_1_47)))) < (var_1_39)) ? (((((var_1_27) < (var_1_47)) ? (var_1_27) : (var_1_47)))) : (var_1_39)));
 }
 signed long int stepLocal_12 = var_1_26 / ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 unsigned long int stepLocal_11 = var_1_29;
 unsigned char stepLocal_10 = (var_1_29 < var_1_59) || var_1_30;
 if (var_1_5 > stepLocal_11) {
  if (stepLocal_12 != (var_1_5 - var_1_16)) {
   if ((var_1_30 && var_1_31) && stepLocal_10) {
    var_1_38 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
   } else {
    var_1_38 = ((((var_1_26) < ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_16 + 50)))) ? (var_1_26) : ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_16 + 50)))));
   }
  }
 } else {
  var_1_38 = ((((var_1_48) > (var_1_4)) ? (var_1_48) : (var_1_4)));
 }
 signed char stepLocal_21 = var_1_27;
 unsigned long int stepLocal_20 = var_1_15;
 unsigned long int stepLocal_19 = var_1_54;
 signed long int stepLocal_18 = 25 / var_1_34;
 if ((var_1_12 * var_1_9) >= 9.999999995E8) {
  if (var_1_47 != stepLocal_18) {
   if ((((((var_1_50) < (var_1_51)) ? (var_1_50) : (var_1_51))) - var_1_44) > stepLocal_21) {
    if ((var_1_47 / var_1_26) <= stepLocal_20) {
     var_1_49 = (var_1_12 + var_1_11);
    }
   } else {
    var_1_49 = var_1_10;
   }
  }
 } else {
  if (var_1_37 >= var_1_14) {
   if (stepLocal_19 >= var_1_16) {
    var_1_49 = (var_1_12 + var_1_11);
   }
  } else {
   var_1_49 = ((((var_1_11) < ((var_1_12 + var_1_53))) ? (var_1_11) : ((var_1_12 + var_1_53))));
  }
 }
 if ((50 * var_1_29) == var_1_35) {
  var_1_55 = (((((var_1_42 - var_1_56)) > (var_1_27)) ? ((var_1_42 - var_1_56)) : (var_1_27)));
 }
 if (var_1_31) {
  if (var_1_30) {
   var_1_57 = ((((-100) < (var_1_4)) ? (-100) : (var_1_4)));
  } else {
   var_1_57 = (var_1_28 + var_1_55);
  }
 } else {
  if (! var_1_32) {
   var_1_57 = ((var_1_58 - var_1_44) - ((((var_1_6) > (var_1_54)) ? (var_1_6) : (var_1_54))));
  } else {
   var_1_57 = ((((16) < ((var_1_7 + var_1_44))) ? (16) : ((var_1_7 + var_1_44))));
  }
 }
 signed short int stepLocal_27 = var_1_48;
 signed long int stepLocal_26 = var_1_44 * 64;
 unsigned long int stepLocal_25 = var_1_15 / var_1_58;
 if (var_1_21 > stepLocal_25) {
  if (var_1_33 < stepLocal_26) {
   if (var_1_35 > stepLocal_27) {
    var_1_61 = (var_1_28 - 500);
   }
  } else {
   var_1_61 = var_1_34;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 16384);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 8191);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 8191);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 255);
 assume_abort_if_not(var_1_16 != 0);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 3221225470);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 536870911);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -1);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 62);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 255);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 127);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 127);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 63);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 64);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65535);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65535);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 16382);
 assume_abort_if_not(var_1_58 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_60 = var_1_60;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_15 >= var_1_47) ? (var_1_1 == ((unsigned short int) ((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) + (var_1_6 - var_1_7)) + ((((var_1_8) > (16)) ? (var_1_8) : (16)))))) : (var_1_1 == ((unsigned short int) (((((var_1_7 + var_1_6)) > (var_1_8)) ? ((var_1_7 + var_1_6)) : (var_1_8)))))) && ((last_1_var_1_60 > var_1_4) ? ((var_1_7 >= last_1_var_1_48) ? (var_1_9 == ((double) var_1_10)) : (var_1_9 == ((double) (var_1_11 + var_1_12)))) : ((((((last_1_var_1_29) < ((var_1_4 + 5u))) ? (last_1_var_1_29) : ((var_1_4 + 5u)))) > 10000u) ? (var_1_9 == ((double) (var_1_14 - 7.15))) : 1))) && ((var_1_8 <= last_1_var_1_36) ? (((((((last_1_var_1_60 % var_1_16)) > (var_1_4)) ? ((last_1_var_1_60 % var_1_16)) : (var_1_4))) >= var_1_6) ? (last_1_var_1_30 ? (((- var_1_10) <= (- ((((last_1_var_1_9) < 0 ) ? -(last_1_var_1_9) : (last_1_var_1_9))))) ? (((var_1_7 + var_1_6) == ((var_1_8 << var_1_16) / -200)) ? (var_1_15 == ((unsigned long int) ((var_1_19 - (var_1_20 - var_1_8)) - var_1_21))) : (var_1_15 == ((unsigned long int) var_1_21))) : (var_1_15 == ((unsigned long int) var_1_16))) : (var_1_15 == ((unsigned long int) var_1_21))) : (var_1_15 == ((unsigned long int) var_1_6))) : 1)) && ((((((var_1_16) > (2)) ? (var_1_16) : (2))) > 0) ? (var_1_22 == ((signed long int) var_1_8)) : (var_1_22 == ((signed long int) ((var_1_6 + var_1_4) + var_1_16))))) && (((var_1_20 - var_1_21) < var_1_19) ? (var_1_30 ? ((((((var_1_7) > (var_1_60)) ? (var_1_7) : (var_1_60))) >= (var_1_15 / ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? (var_1_23 == ((signed short int) (((((var_1_24 - var_1_4)) > (var_1_5)) ? ((var_1_24 - var_1_4)) : (var_1_5))))) : (var_1_23 == ((signed short int) var_1_5))) : 1) : (var_1_23 == ((signed short int) var_1_7)))) && (((var_1_20 * ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7)))) > (var_1_21 % (64u + var_1_6))) ? (var_1_25 == ((signed char) ((var_1_26 - var_1_27) - var_1_28))) : (var_1_25 == ((signed char) var_1_27)))) && ((var_1_21 >= var_1_4) ? (var_1_29 == ((unsigned long int) var_1_20)) : (var_1_29 == ((unsigned long int) ((var_1_19 - var_1_8) - (((((var_1_26 + var_1_16)) > (var_1_27)) ? ((var_1_26 + var_1_16)) : (var_1_27)))))))) && (var_1_30 == ((unsigned char) (var_1_31 || var_1_32)))) && (((var_1_6 * (var_1_34 - 10)) >= var_1_54) ? (var_1_31 ? (var_1_33 == ((unsigned char) ((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28))))) : (var_1_33 == ((unsigned char) ((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28)))))) : (var_1_33 == ((unsigned char) 64)))) && (((- 500.05f) >= (- (- var_1_9))) ? (var_1_35 == ((signed long int) (var_1_16 - var_1_4))) : (var_1_35 == ((signed long int) ((((((((var_1_27) < (var_1_47)) ? (var_1_27) : (var_1_47)))) < (var_1_39)) ? (((((var_1_27) < (var_1_47)) ? (var_1_27) : (var_1_47)))) : (var_1_39))))))) && ((var_1_15 < var_1_7) ? (var_1_36 == ((unsigned short int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : 1)) && ((var_1_29 < var_1_26) ? (var_1_37 == ((float) (10.58f - var_1_14))) : 1)) && ((var_1_5 > var_1_29) ? (((var_1_26 / ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) != (var_1_5 - var_1_16)) ? (((var_1_30 && var_1_31) && ((var_1_29 < var_1_59) || var_1_30)) ? (var_1_38 == ((unsigned short int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) : (var_1_38 == ((unsigned short int) ((((var_1_26) < ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_16 + 50)))) ? (var_1_26) : ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_16 + 50)))))))) : 1) : (var_1_38 == ((unsigned short int) ((((var_1_48) > (var_1_4)) ? (var_1_48) : (var_1_4))))))) && ((2 > var_1_8) ? (((var_1_30 && var_1_31) || var_1_32) ? (var_1_39 == ((unsigned char) (((((var_1_27) < (var_1_26)) ? (var_1_27) : (var_1_26))) + var_1_28))) : (var_1_39 == ((unsigned char) (((((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))) < ((var_1_43 + var_1_44))) ? (((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))) : ((var_1_43 + var_1_44)))) - (var_1_27 + ((((5) < (var_1_45)) ? (5) : (var_1_45)))))))) : 1)) && (((var_1_43 == var_1_4) && var_1_31) ? ((256 >= (var_1_6 - var_1_42)) ? (var_1_46 == ((unsigned char) 0)) : 1) : 1)) && ((var_1_5 != (var_1_26 + var_1_15)) ? (var_1_47 == ((unsigned long int) ((var_1_45 + var_1_29) + var_1_7))) : 1)) && ((var_1_32 || ((var_1_9 + var_1_37) != var_1_10)) ? (var_1_30 ? (var_1_48 == ((signed short int) (((((((((var_1_7 + var_1_26)) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? ((var_1_7 + var_1_26)) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) < (var_1_34)) ? ((((((var_1_7 + var_1_26)) < (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? ((var_1_7 + var_1_26)) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) : (var_1_34))))) : 1) : 1)) && (((var_1_12 * var_1_9) >= 9.999999995E8) ? ((var_1_47 != (25 / var_1_34)) ? (((((((var_1_50) < (var_1_51)) ? (var_1_50) : (var_1_51))) - var_1_44) > var_1_27) ? (((var_1_47 / var_1_26) <= var_1_15) ? (var_1_49 == ((float) (var_1_12 + var_1_11))) : 1) : (var_1_49 == ((float) var_1_10))) : 1) : ((var_1_37 >= var_1_14) ? ((var_1_54 >= var_1_16) ? (var_1_49 == ((float) (var_1_12 + var_1_11))) : 1) : (var_1_49 == ((float) ((((var_1_11) < ((var_1_12 + var_1_53))) ? (var_1_11) : ((var_1_12 + var_1_53))))))))) && ((var_1_26 <= var_1_28) ? ((var_1_50 <= var_1_20) ? (var_1_54 == ((unsigned long int) ((((var_1_26) < (var_1_6)) ? (var_1_26) : (var_1_6))))) : (var_1_54 == ((unsigned long int) var_1_50))) : (var_1_54 == ((unsigned long int) (var_1_19 - var_1_5))))) && (((50 * var_1_29) == var_1_35) ? (var_1_55 == ((unsigned char) (((((var_1_42 - var_1_56)) > (var_1_27)) ? ((var_1_42 - var_1_56)) : (var_1_27))))) : 1)) && (var_1_31 ? (var_1_30 ? (var_1_57 == ((signed short int) ((((-100) < (var_1_4)) ? (-100) : (var_1_4))))) : (var_1_57 == ((signed short int) (var_1_28 + var_1_55)))) : ((! var_1_32) ? (var_1_57 == ((signed short int) ((var_1_58 - var_1_44) - ((((var_1_6) > (var_1_54)) ? (var_1_6) : (var_1_54)))))) : (var_1_57 == ((signed short int) ((((16) < ((var_1_7 + var_1_44))) ? (16) : ((var_1_7 + var_1_44))))))))) && ((var_1_31 || var_1_30) ? (var_1_30 ? (var_1_59 == ((signed long int) var_1_34)) : (var_1_59 == ((signed long int) var_1_7))) : (var_1_59 == ((signed long int) var_1_29)))) && (var_1_60 == ((unsigned long int) var_1_42))) && ((var_1_21 > (var_1_15 / var_1_58)) ? ((var_1_33 < (var_1_44 * 64)) ? ((var_1_35 > var_1_48) ? (var_1_61 == ((signed short int) (var_1_28 - 500))) : 1) : (var_1_61 == ((signed short int) var_1_34))) : 1)
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
