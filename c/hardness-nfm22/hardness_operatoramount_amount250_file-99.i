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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 8;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 200;
unsigned char var_1_5 = 0;
unsigned char var_1_8 = 4;
signed short int var_1_9 = -256;
double var_1_10 = 256.6;
double var_1_11 = 99.25;
unsigned short int var_1_12 = 256;
signed short int var_1_13 = 8;
double var_1_15 = 4.6;
double var_1_16 = 1.8;
double var_1_17 = -0.8;
double var_1_18 = 4.625;
double var_1_19 = -0.625;
unsigned short int var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 2;
double var_1_29 = 9.9;
double var_1_30 = 1.5;
unsigned char var_1_31 = 100;
unsigned char var_1_32 = 1;
double var_1_33 = 31.5;
double var_1_34 = 24.3;
double var_1_35 = 63.4;
double var_1_36 = 0.0;
double var_1_37 = 64.2;
float var_1_38 = 999999.75;
unsigned short int var_1_39 = 100;
unsigned short int var_1_40 = 10000;
signed char var_1_42 = -8;
unsigned long int var_1_43 = 8;
unsigned long int var_1_44 = 2024376468;
unsigned long int var_1_45 = 1738494262;
unsigned long int var_1_46 = 3248891487;
unsigned long int var_1_47 = 1000000000;
signed short int var_1_48 = -10;
signed short int var_1_49 = -5;
signed short int var_1_50 = 21822;
unsigned short int var_1_51 = 256;
unsigned short int var_1_52 = 18188;
signed char var_1_53 = -2;
unsigned short int var_1_55 = 256;
unsigned short int var_1_56 = 55516;
unsigned short int var_1_57 = 21704;
unsigned short int var_1_58 = 34958;
float var_1_59 = 2.2;
float var_1_60 = 0.0;
unsigned short int var_1_61 = 4;
unsigned short int var_1_63 = 50;
unsigned char var_1_64 = 4;
signed short int var_1_65 = -32;
unsigned char last_1_var_1_1 = 8;
signed short int last_1_var_1_13 = 8;
unsigned char last_1_var_1_28 = 2;
double last_1_var_1_33 = 31.5;
unsigned short int last_1_var_1_39 = 100;
unsigned short int last_1_var_1_51 = 256;
unsigned short int last_1_var_1_55 = 256;
unsigned short int last_1_var_1_61 = 4;
unsigned short int last_1_var_1_63 = 50;
unsigned char last_1_var_1_64 = 4;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_28 <= (var_1_56 - var_1_40)) {
  var_1_55 = ((var_1_52 + var_1_57) - (last_1_var_1_55 + last_1_var_1_64));
 } else {
  var_1_55 = (var_1_58 - var_1_57);
 }
 signed long int stepLocal_5 = (var_1_22 - last_1_var_1_39) + last_1_var_1_1;
 if (stepLocal_5 <= ((last_1_var_1_28 / var_1_4) * last_1_var_1_13)) {
  if (var_1_29 < 255.5) {
   var_1_33 = (((((var_1_34) > (((((var_1_35) > (99.375)) ? (var_1_35) : (99.375))))) ? (var_1_34) : (((((var_1_35) > (99.375)) ? (var_1_35) : (99.375)))))) - ((var_1_36 - 1.0000000000000005E15) + var_1_37));
  }
 } else {
  var_1_33 = (var_1_34 - var_1_36);
 }
 signed long int stepLocal_4 = last_1_var_1_55;
 if (last_1_var_1_33 >= var_1_16) {
  if ((var_1_5 << (var_1_22 - 0)) <= stepLocal_4) {
   var_1_21 = (((var_1_3 || var_1_23) && var_1_24) && var_1_25);
  } else {
   var_1_21 = (var_1_24 && (var_1_25 || var_1_23));
  }
 } else {
  var_1_21 = (var_1_26 || var_1_27);
 }
 unsigned char stepLocal_11 = var_1_26;
 if (stepLocal_11 || (! var_1_21)) {
  var_1_53 = (((((var_1_22 + 1)) < (var_1_32)) ? ((var_1_22 + 1)) : (var_1_32)));
 }
 var_1_38 = var_1_18;
 var_1_59 = (var_1_37 - (var_1_60 - var_1_36));
 if (var_1_32 != (((((var_1_50 % var_1_4)) > (last_1_var_1_63)) ? ((var_1_50 % var_1_4)) : (last_1_var_1_63)))) {
  var_1_63 = (var_1_57 + var_1_52);
 }
 if (var_1_55 <= var_1_40) {
  if (var_1_21) {
   if (var_1_29 < var_1_33) {
    var_1_65 = (((((64) < (var_1_22)) ? (64) : (var_1_22))) - var_1_50);
   }
  } else {
   var_1_65 = var_1_22;
  }
 } else {
  var_1_65 = var_1_55;
 }
 if (var_1_59 != (var_1_10 - var_1_11)) {
  if (var_1_21) {
   var_1_9 = (var_1_4 + ((((var_1_53) > ((var_1_5 + 10))) ? (var_1_53) : ((var_1_5 + 10)))));
  }
 } else {
  if (var_1_21) {
   var_1_9 = 16;
  } else {
   var_1_9 = var_1_5;
  }
 }
 if (! var_1_21) {
  if (var_1_59 >= var_1_11) {
   var_1_12 = (var_1_8 + 25);
  }
 }
 if (var_1_10 > (var_1_38 + (var_1_59 + var_1_11))) {
  var_1_15 = (((((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) < 0 ) ? -((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) : ((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))))));
 } else {
  var_1_15 = ((((((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) < (var_1_19)) ? (((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) : (var_1_19)));
 }
 unsigned char stepLocal_0 = var_1_21;
 if ((! var_1_21) && stepLocal_0) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  if ((64.888 * var_1_15) > var_1_33) {
   var_1_1 = (var_1_4 - ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))));
  } else {
   var_1_1 = (var_1_5 + var_1_8);
  }
 }
 if (! (var_1_44 < var_1_9)) {
  var_1_64 = var_1_22;
 } else {
  var_1_64 = var_1_4;
 }
 if (var_1_21 && var_1_24) {
  var_1_49 = (var_1_9 + ((((var_1_31) < (var_1_1)) ? (var_1_31) : (var_1_1))));
 } else {
  var_1_49 = ((((((var_1_50 - var_1_1) - var_1_40)) > (var_1_9)) ? (((var_1_50 - var_1_1) - var_1_40)) : (var_1_9)));
 }
 signed long int stepLocal_1 = (8 / var_1_4) * ((((var_1_65) < (16)) ? (var_1_65) : (16)));
 if (var_1_59 >= var_1_33) {
  var_1_13 = ((((-16) > (var_1_4)) ? (-16) : (var_1_4)));
 } else {
  if (var_1_5 <= stepLocal_1) {
   var_1_13 = ((((((var_1_5 - var_1_1) + var_1_4)) < (var_1_8)) ? (((var_1_5 - var_1_1) + var_1_4)) : (var_1_8)));
  }
 }
 unsigned long int stepLocal_7 = ((((3096462083u) < 0 ) ? -(3096462083u) : (3096462083u))) - var_1_8;
 if (stepLocal_7 >= ((64u & var_1_53) + var_1_13)) {
  var_1_42 = var_1_22;
 } else {
  var_1_42 = (var_1_32 + var_1_22);
 }
 signed long int stepLocal_12 = ((((var_1_58) > (var_1_56)) ? (var_1_58) : (var_1_56))) - (var_1_4 + var_1_8);
 if (stepLocal_12 != last_1_var_1_61) {
  if (var_1_16 <= var_1_33) {
   var_1_61 = (var_1_40 + var_1_31);
  } else {
   var_1_61 = (var_1_58 - var_1_64);
  }
 }
 if (var_1_61 < 128) {
  if (var_1_59 != var_1_38) {
   if ((((((var_1_61 / var_1_4)) < (var_1_47)) ? ((var_1_61 / var_1_4)) : (var_1_47))) <= (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - var_1_5)) {
    var_1_51 = var_1_13;
   } else {
    var_1_51 = (var_1_32 + var_1_4);
   }
  } else {
   if (((var_1_61 % var_1_31) * var_1_55) < var_1_5) {
    var_1_51 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
   }
  }
 } else {
  if (! var_1_26) {
   if (var_1_44 < var_1_40) {
    var_1_51 = (var_1_40 + (var_1_52 - var_1_31));
   } else {
    var_1_51 = last_1_var_1_51;
   }
  } else {
   var_1_51 = 10;
  }
 }
 unsigned char stepLocal_6 = var_1_4;
 if (stepLocal_6 <= var_1_55) {
  if (var_1_36 >= var_1_11) {
   var_1_39 = var_1_5;
  }
 } else {
  var_1_39 = (((var_1_40 + 10000) - var_1_64) + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
 }
 signed long int stepLocal_3 = (((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8));
 signed long int stepLocal_2 = - var_1_1;
 if (stepLocal_2 != var_1_5) {
  if (var_1_51 > stepLocal_3) {
   var_1_20 = ((var_1_4 + var_1_5) + var_1_8);
  } else {
   var_1_20 = var_1_8;
  }
 }
 unsigned short int stepLocal_10 = var_1_40;
 signed long int stepLocal_9 = (((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8));
 unsigned short int stepLocal_8 = var_1_40;
 if (stepLocal_10 <= (500 / var_1_4)) {
  if (stepLocal_9 >= var_1_32) {
   if (stepLocal_8 >= var_1_22) {
    if (var_1_21) {
     var_1_48 = (var_1_39 + var_1_42);
    } else {
     if (var_1_27) {
      var_1_48 = ((((var_1_39) < (50)) ? (var_1_39) : (50)));
     }
    }
   }
  }
 } else {
  var_1_48 = (var_1_31 - var_1_1);
 }
 if (var_1_27 && var_1_24) {
  var_1_28 = var_1_8;
 } else {
  if (var_1_18 >= (var_1_19 / ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))))) {
   if (var_1_51 > var_1_55) {
    var_1_28 = (var_1_22 + var_1_8);
   }
  } else {
   if ((var_1_12 / var_1_4) <= last_1_var_1_28) {
    if (last_1_var_1_28 == last_1_var_1_28) {
     var_1_28 = var_1_8;
    }
   } else {
    var_1_28 = (var_1_5 + (var_1_31 - (var_1_22 + var_1_32)));
   }
  }
 }
 if (var_1_21) {
  var_1_43 = var_1_28;
 } else {
  if (var_1_33 < var_1_29) {
   var_1_43 = ((var_1_44 + (var_1_45 - var_1_8)) - var_1_5);
  } else {
   var_1_43 = ((var_1_46 - (var_1_47 - var_1_28)) - var_1_28);
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 63);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 31);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 2305843.009213691390e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 8191);
 assume_abort_if_not(var_1_40 <= 16384);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 1073741823);
 assume_abort_if_not(var_1_44 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1610612735);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 3221225470);
 assume_abort_if_not(var_1_46 <= 4294967294);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 536870911);
 assume_abort_if_not(var_1_47 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 16382);
 assume_abort_if_not(var_1_50 <= 32766);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 16383);
 assume_abort_if_not(var_1_52 <= 32767);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 32767);
 assume_abort_if_not(var_1_56 <= 65535);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 16384);
 assume_abort_if_not(var_1_57 <= 32767);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65534);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 4611686.018427382800e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854765600e+12F && var_1_60 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
}
int property() {
 return ((((((((((((((((((((((((! var_1_21) && var_1_21) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (((64.888 * var_1_15) > var_1_33) ? (var_1_1 == ((unsigned char) (var_1_4 - ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)))))) : (var_1_1 == ((unsigned char) (var_1_5 + var_1_8))))) && ((var_1_59 != (var_1_10 - var_1_11)) ? (var_1_21 ? (var_1_9 == ((signed short int) (var_1_4 + ((((var_1_53) > ((var_1_5 + 10))) ? (var_1_53) : ((var_1_5 + 10))))))) : 1) : (var_1_21 ? (var_1_9 == ((signed short int) 16)) : (var_1_9 == ((signed short int) var_1_5))))) && ((! var_1_21) ? ((var_1_59 >= var_1_11) ? (var_1_12 == ((unsigned short int) (var_1_8 + 25))) : 1) : 1)) && ((var_1_59 >= var_1_33) ? (var_1_13 == ((signed short int) ((((-16) > (var_1_4)) ? (-16) : (var_1_4))))) : ((var_1_5 <= ((8 / var_1_4) * ((((var_1_65) < (16)) ? (var_1_65) : (16))))) ? (var_1_13 == ((signed short int) ((((((var_1_5 - var_1_1) + var_1_4)) < (var_1_8)) ? (((var_1_5 - var_1_1) + var_1_4)) : (var_1_8))))) : 1))) && ((var_1_10 > (var_1_38 + (var_1_59 + var_1_11))) ? (var_1_15 == ((double) (((((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) < 0 ) ? -((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) : ((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))))))) : (var_1_15 == ((double) ((((((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) < (var_1_19)) ? (((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) : (var_1_19))))))) && (((- var_1_1) != var_1_5) ? ((var_1_51 > ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) ? (var_1_20 == ((unsigned short int) ((var_1_4 + var_1_5) + var_1_8))) : (var_1_20 == ((unsigned short int) var_1_8))) : 1)) && ((last_1_var_1_33 >= var_1_16) ? (((var_1_5 << (var_1_22 - 0)) <= last_1_var_1_55) ? (var_1_21 == ((unsigned char) (((var_1_3 || var_1_23) && var_1_24) && var_1_25))) : (var_1_21 == ((unsigned char) (var_1_24 && (var_1_25 || var_1_23))))) : (var_1_21 == ((unsigned char) (var_1_26 || var_1_27))))) && ((var_1_27 && var_1_24) ? (var_1_28 == ((unsigned char) var_1_8)) : ((var_1_18 >= (var_1_19 / ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))))) ? ((var_1_51 > var_1_55) ? (var_1_28 == ((unsigned char) (var_1_22 + var_1_8))) : 1) : (((var_1_12 / var_1_4) <= last_1_var_1_28) ? ((last_1_var_1_28 == last_1_var_1_28) ? (var_1_28 == ((unsigned char) var_1_8)) : 1) : (var_1_28 == ((unsigned char) (var_1_5 + (var_1_31 - (var_1_22 + var_1_32))))))))) && ((((var_1_22 - last_1_var_1_39) + last_1_var_1_1) <= ((last_1_var_1_28 / var_1_4) * last_1_var_1_13)) ? ((var_1_29 < 255.5) ? (var_1_33 == ((double) (((((var_1_34) > (((((var_1_35) > (99.375)) ? (var_1_35) : (99.375))))) ? (var_1_34) : (((((var_1_35) > (99.375)) ? (var_1_35) : (99.375)))))) - ((var_1_36 - 1.0000000000000005E15) + var_1_37)))) : 1) : (var_1_33 == ((double) (var_1_34 - var_1_36))))) && (var_1_38 == ((float) var_1_18))) && ((var_1_4 <= var_1_55) ? ((var_1_36 >= var_1_11) ? (var_1_39 == ((unsigned short int) var_1_5)) : 1) : (var_1_39 == ((unsigned short int) (((var_1_40 + 10000) - var_1_64) + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))))) && (((((((3096462083u) < 0 ) ? -(3096462083u) : (3096462083u))) - var_1_8) >= ((64u & var_1_53) + var_1_13)) ? (var_1_42 == ((signed char) var_1_22)) : (var_1_42 == ((signed char) (var_1_32 + var_1_22))))) && (var_1_21 ? (var_1_43 == ((unsigned long int) var_1_28)) : ((var_1_33 < var_1_29) ? (var_1_43 == ((unsigned long int) ((var_1_44 + (var_1_45 - var_1_8)) - var_1_5))) : (var_1_43 == ((unsigned long int) ((var_1_46 - (var_1_47 - var_1_28)) - var_1_28)))))) && ((var_1_40 <= (500 / var_1_4)) ? ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) >= var_1_32) ? ((var_1_40 >= var_1_22) ? (var_1_21 ? (var_1_48 == ((signed short int) (var_1_39 + var_1_42))) : (var_1_27 ? (var_1_48 == ((signed short int) ((((var_1_39) < (50)) ? (var_1_39) : (50))))) : 1)) : 1) : 1) : (var_1_48 == ((signed short int) (var_1_31 - var_1_1))))) && ((var_1_21 && var_1_24) ? (var_1_49 == ((signed short int) (var_1_9 + ((((var_1_31) < (var_1_1)) ? (var_1_31) : (var_1_1)))))) : (var_1_49 == ((signed short int) ((((((var_1_50 - var_1_1) - var_1_40)) > (var_1_9)) ? (((var_1_50 - var_1_1) - var_1_40)) : (var_1_9))))))) && ((var_1_61 < 128) ? ((var_1_59 != var_1_38) ? (((((((var_1_61 / var_1_4)) < (var_1_47)) ? ((var_1_61 / var_1_4)) : (var_1_47))) <= (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - var_1_5)) ? (var_1_51 == ((unsigned short int) var_1_13)) : (var_1_51 == ((unsigned short int) (var_1_32 + var_1_4)))) : ((((var_1_61 % var_1_31) * var_1_55) < var_1_5) ? (var_1_51 == ((unsigned short int) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) : 1)) : ((! var_1_26) ? ((var_1_44 < var_1_40) ? (var_1_51 == ((unsigned short int) (var_1_40 + (var_1_52 - var_1_31)))) : (var_1_51 == ((unsigned short int) last_1_var_1_51))) : (var_1_51 == ((unsigned short int) 10))))) && ((var_1_26 || (! var_1_21)) ? (var_1_53 == ((signed char) (((((var_1_22 + 1)) < (var_1_32)) ? ((var_1_22 + 1)) : (var_1_32))))) : 1)) && ((last_1_var_1_28 <= (var_1_56 - var_1_40)) ? (var_1_55 == ((unsigned short int) ((var_1_52 + var_1_57) - (last_1_var_1_55 + last_1_var_1_64)))) : (var_1_55 == ((unsigned short int) (var_1_58 - var_1_57))))) && (var_1_59 == ((float) (var_1_37 - (var_1_60 - var_1_36))))) && (((((((var_1_58) > (var_1_56)) ? (var_1_58) : (var_1_56))) - (var_1_4 + var_1_8)) != last_1_var_1_61) ? ((var_1_16 <= var_1_33) ? (var_1_61 == ((unsigned short int) (var_1_40 + var_1_31))) : (var_1_61 == ((unsigned short int) (var_1_58 - var_1_64)))) : 1)) && ((var_1_32 != (((((var_1_50 % var_1_4)) > (last_1_var_1_63)) ? ((var_1_50 % var_1_4)) : (last_1_var_1_63)))) ? (var_1_63 == ((unsigned short int) (var_1_57 + var_1_52))) : 1)) && ((! (var_1_44 < var_1_9)) ? (var_1_64 == ((unsigned char) var_1_22)) : (var_1_64 == ((unsigned char) var_1_4)))) && ((var_1_55 <= var_1_40) ? (var_1_21 ? ((var_1_29 < var_1_33) ? (var_1_65 == ((signed short int) (((((64) < (var_1_22)) ? (64) : (var_1_22))) - var_1_50))) : 1) : (var_1_65 == ((signed short int) var_1_22))) : (var_1_65 == ((signed short int) var_1_55)))
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
