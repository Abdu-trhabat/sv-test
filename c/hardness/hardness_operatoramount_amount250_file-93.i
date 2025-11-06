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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
signed long int var_1_5 = 10;
signed long int var_1_6 = 5;
double var_1_7 = 31.25;
double var_1_8 = 7.6;
double var_1_9 = 8.9;
double var_1_10 = 256.8;
double var_1_11 = 64.6;
double var_1_12 = 31.8;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 100;
unsigned short int var_1_19 = 256;
unsigned short int var_1_20 = 34248;
double var_1_21 = 25.2;
double var_1_22 = 7.25;
signed long int var_1_23 = 32;
float var_1_24 = 1.6;
float var_1_25 = 64.9;
float var_1_26 = 10000.4;
float var_1_27 = 31.055;
unsigned char var_1_28 = 8;
unsigned short int var_1_29 = 32;
double var_1_30 = 10000000.75;
double var_1_31 = 0.625;
float var_1_32 = 256.5;
float var_1_33 = 31.4;
signed char var_1_34 = 0;
signed char var_1_35 = 5;
signed char var_1_36 = 16;
double var_1_38 = 127.75;
signed char var_1_40 = 16;
unsigned short int var_1_41 = 10;
unsigned short int var_1_42 = 30206;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 128;
signed long int var_1_45 = 0;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 25;
unsigned char var_1_48 = 1;
double var_1_49 = 24.5;
double var_1_50 = 4.27;
double var_1_51 = 9.75;
double var_1_52 = 1.5;
signed long int var_1_53 = 256;
float var_1_54 = 7.8;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 1;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 4;
signed short int var_1_62 = 1;
signed long int var_1_63 = -32;
signed long int var_1_64 = 1000000000;
signed long int last_1_var_1_1 = -256;
double last_1_var_1_22 = 7.25;
float last_1_var_1_33 = 31.4;
signed long int last_1_var_1_45 = 0;
double last_1_var_1_49 = 24.5;
signed long int last_1_var_1_53 = 256;
float last_1_var_1_54 = 7.8;
signed short int last_1_var_1_62 = 1;
signed long int last_1_var_1_63 = -32;
void initially(void) {
}
void step(void) {
 if (var_1_51 > last_1_var_1_54) {
  var_1_53 = (last_1_var_1_62 + var_1_17);
 }
 signed long int stepLocal_5 = var_1_6;
 signed long int stepLocal_4 = var_1_5;
 if (last_1_var_1_22 <= (var_1_12 * var_1_10)) {
  if (last_1_var_1_45 <= stepLocal_4) {
   var_1_23 = ((last_1_var_1_63 + var_1_16) + ((var_1_14 + var_1_17) - 10));
  }
 } else {
  if (stepLocal_5 <= last_1_var_1_63) {
   var_1_23 = (var_1_16 - last_1_var_1_45);
  } else {
   var_1_23 = (((((((((var_1_17) < (last_1_var_1_63)) ? (var_1_17) : (last_1_var_1_63))) + var_1_18)) > (var_1_14)) ? ((((((var_1_17) < (last_1_var_1_63)) ? (var_1_17) : (last_1_var_1_63))) + var_1_18)) : (var_1_14)));
  }
 }
 signed long int stepLocal_14 = last_1_var_1_53;
 if ((- last_1_var_1_49) > (var_1_50 * (var_1_31 - var_1_9))) {
  var_1_55 = (! (! var_1_56));
 } else {
  if (var_1_50 <= (var_1_31 - (var_1_26 + var_1_25))) {
   var_1_55 = (var_1_56 && var_1_57);
  } else {
   if ((var_1_15 / var_1_44) > stepLocal_14) {
    var_1_55 = ((var_1_59 || var_1_57) && var_1_56);
   } else {
    var_1_55 = var_1_60;
   }
  }
 }
 if (var_1_55) {
  var_1_22 = var_1_12;
 }
 if (var_1_11 >= 1.000000000000823E12) {
  var_1_21 = var_1_8;
 }
 if (var_1_11 <= var_1_8) {
  if (var_1_55) {
   var_1_24 = (var_1_10 + var_1_8);
  }
 } else {
  var_1_24 = (var_1_9 - ((var_1_25 + var_1_26) + var_1_8));
 }
 var_1_28 = var_1_17;
 if ((var_1_9 - (var_1_8 + var_1_25)) >= var_1_11) {
  var_1_29 = var_1_20;
 }
 if ((var_1_17 ^ (~ -5)) >= var_1_6) {
  var_1_32 = var_1_25;
 }
 if (var_1_31 >= 1.2) {
  var_1_43 = (((((var_1_44) < (128)) ? (var_1_44) : (128))) - var_1_17);
 } else {
  var_1_43 = (((((((((var_1_17 + var_1_40)) < (var_1_14)) ? ((var_1_17 + var_1_40)) : (var_1_14)))) < (var_1_16)) ? ((((((var_1_17 + var_1_40)) < (var_1_14)) ? ((var_1_17 + var_1_40)) : (var_1_14)))) : (var_1_16)));
 }
 var_1_61 = var_1_40;
 if (var_1_57) {
  var_1_62 = var_1_47;
 }
 signed long int stepLocal_2 = var_1_53;
 signed long int stepLocal_1 = 25;
 signed long int stepLocal_0 = var_1_6;
 if (var_1_5 == stepLocal_2) {
  if (stepLocal_0 < var_1_23) {
   var_1_7 = ((var_1_8 - var_1_9) + var_1_10);
  } else {
   if (var_1_23 >= stepLocal_1) {
    var_1_7 = ((((((8.795526802542896E18 - var_1_8) - var_1_9)) > ((var_1_10 + (var_1_11 + var_1_12)))) ? (((8.795526802542896E18 - var_1_8) - var_1_9)) : ((var_1_10 + (var_1_11 + var_1_12)))));
   } else {
    var_1_7 = (((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10))) + (var_1_11 + 1.75));
   }
  }
 } else {
  var_1_7 = 10.15;
 }
 if ((last_1_var_1_1 == var_1_23) && var_1_55) {
  var_1_1 = ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
 if (((((var_1_15) < (var_1_23)) ? (var_1_15) : (var_1_23))) <= -10) {
  var_1_19 = (var_1_20 - var_1_1);
 }
 if (var_1_55) {
  if ((var_1_48 + var_1_20) < var_1_1) {
   var_1_49 = (((((var_1_11) > (100.5)) ? (var_1_11) : (100.5))) + (((((var_1_12 + var_1_26)) > (((((var_1_10) < (var_1_25)) ? (var_1_10) : (var_1_25))))) ? ((var_1_12 + var_1_26)) : (((((var_1_10) < (var_1_25)) ? (var_1_10) : (var_1_25)))))));
  } else {
   var_1_49 = ((((((var_1_25) < (var_1_8)) ? (var_1_25) : (var_1_8))) - var_1_9) + ((((((((var_1_26) > (var_1_11)) ? (var_1_26) : (var_1_11)))) > (((((25.25) < (var_1_12)) ? (25.25) : (var_1_12))))) ? (((((var_1_26) > (var_1_11)) ? (var_1_26) : (var_1_11)))) : (((((25.25) < (var_1_12)) ? (25.25) : (var_1_12)))))));
  }
 } else {
  var_1_49 = ((var_1_12 + var_1_11) + ((var_1_50 + var_1_51) + ((((var_1_52) > (var_1_26)) ? (var_1_52) : (var_1_26)))));
 }
 unsigned char stepLocal_6 = var_1_18;
 if (! var_1_55) {
  if (stepLocal_6 <= var_1_61) {
   var_1_27 = var_1_10;
  }
 }
 if (var_1_55) {
  var_1_34 = (var_1_35 + var_1_36);
 } else {
  if (var_1_49 <= (((((var_1_9) < (var_1_49)) ? (var_1_9) : (var_1_49))) / var_1_38)) {
   if (var_1_55) {
    var_1_34 = var_1_17;
   } else {
    var_1_34 = ((((var_1_36) < ((var_1_17 - var_1_40))) ? (var_1_36) : ((var_1_17 - var_1_40))));
   }
  } else {
   var_1_34 = (var_1_17 - var_1_40);
  }
 }
 if (var_1_55) {
  var_1_45 = (var_1_44 + ((((var_1_19) > (var_1_43)) ? (var_1_19) : (var_1_43))));
 } else {
  var_1_45 = ((((var_1_17) < ((((((4 + var_1_35)) > (var_1_1)) ? ((4 + var_1_35)) : (var_1_1))))) ? (var_1_17) : ((((((4 + var_1_35)) > (var_1_1)) ? ((4 + var_1_35)) : (var_1_1))))));
 }
 signed long int stepLocal_3 = var_1_6;
 if (var_1_45 < stepLocal_3) {
  var_1_13 = ((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) < (var_1_16)) ? (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) : (var_1_16)));
 } else {
  var_1_13 = ((var_1_17 + 4) + var_1_18);
 }
 unsigned char stepLocal_12 = var_1_17;
 signed long int stepLocal_11 = 2;
 if (((((var_1_14) < (var_1_53)) ? (var_1_14) : (var_1_53))) > stepLocal_11) {
  var_1_41 = ((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15)));
 } else {
  if (16u >= stepLocal_12) {
   var_1_41 = ((((var_1_45) > (var_1_53)) ? (var_1_45) : (var_1_53)));
  } else {
   var_1_41 = ((((var_1_15) > (((var_1_42 - var_1_18) + var_1_14))) ? (var_1_15) : (((var_1_42 - var_1_18) + var_1_14))));
  }
 }
 if (((var_1_17 << var_1_41) * -64) <= (var_1_40 + var_1_41)) {
  var_1_46 = var_1_40;
 } else {
  var_1_46 = (var_1_40 + ((var_1_47 + 4) + var_1_48));
 }
 unsigned char stepLocal_15 = var_1_55;
 if (((((- var_1_31) < 0 ) ? -(- var_1_31) : (- var_1_31))) > var_1_7) {
  var_1_63 = (var_1_46 + ((var_1_64 - 32) - var_1_48));
 } else {
  if (stepLocal_15 && (var_1_29 <= var_1_17)) {
   var_1_63 = var_1_46;
  } else {
   var_1_63 = var_1_23;
  }
 }
 signed long int stepLocal_9 = ((((25) > (var_1_18)) ? (25) : (var_1_18))) << var_1_63;
 unsigned char stepLocal_8 = var_1_9 >= (var_1_8 - var_1_25);
 signed long int stepLocal_7 = var_1_23 + var_1_6;
 if (stepLocal_8 || (var_1_41 > (var_1_6 + var_1_41))) {
  if (stepLocal_7 >= var_1_15) {
   var_1_30 = (var_1_10 + var_1_11);
  } else {
   var_1_30 = 2.75;
  }
 } else {
  if (((var_1_5 / var_1_20) & (var_1_41 - var_1_63)) >= stepLocal_9) {
   var_1_30 = (var_1_25 - var_1_31);
  } else {
   var_1_30 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
  }
 }
 unsigned char stepLocal_13 = var_1_55;
 if (((var_1_31 - var_1_9) * var_1_30) >= var_1_32) {
  if ((-4 >= var_1_53) && stepLocal_13) {
   var_1_54 = ((256.8f + var_1_51) + var_1_10);
  } else {
   var_1_54 = (var_1_25 - (var_1_26 + var_1_9));
  }
 } else {
  var_1_54 = (var_1_9 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))));
 }
 signed long int stepLocal_10 = var_1_63;
 if (stepLocal_10 >= (8 << var_1_63)) {
  if (last_1_var_1_33 < var_1_12) {
   var_1_33 = (var_1_25 - var_1_26);
  }
 } else {
  var_1_33 = var_1_26;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483647);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483647);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -230584.3009213691400e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 64);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 assume_abort_if_not(var_1_38 != 0.0F);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 16383);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 127);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 32);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -115292.1504606845700e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 1152921.504606845700e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -115292.1504606845700e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 1152921.504606845700e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -230584.3009213691400e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 0);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= 536870911);
 assume_abort_if_not(var_1_64 <= 1073741823);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_63 = var_1_63;
}
int property(void) {
 return (((((((((((((((((((((((((((last_1_var_1_1 == var_1_23) && var_1_55) ? (var_1_1 == ((signed long int) ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1) && ((var_1_5 == var_1_53) ? ((var_1_6 < var_1_23) ? (var_1_7 == ((double) ((var_1_8 - var_1_9) + var_1_10))) : ((var_1_23 >= 25) ? (var_1_7 == ((double) ((((((8.795526802542896E18 - var_1_8) - var_1_9)) > ((var_1_10 + (var_1_11 + var_1_12)))) ? (((8.795526802542896E18 - var_1_8) - var_1_9)) : ((var_1_10 + (var_1_11 + var_1_12))))))) : (var_1_7 == ((double) (((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10))) + (var_1_11 + 1.75)))))) : (var_1_7 == ((double) 10.15)))) && ((var_1_45 < var_1_6) ? (var_1_13 == ((unsigned char) ((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) < (var_1_16)) ? (((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) : (var_1_16))))) : (var_1_13 == ((unsigned char) ((var_1_17 + 4) + var_1_18))))) && ((((((var_1_15) < (var_1_23)) ? (var_1_15) : (var_1_23))) <= -10) ? (var_1_19 == ((unsigned short int) (var_1_20 - var_1_1))) : 1)) && ((var_1_11 >= 1.000000000000823E12) ? (var_1_21 == ((double) var_1_8)) : 1)) && (var_1_55 ? (var_1_22 == ((double) var_1_12)) : 1)) && ((last_1_var_1_22 <= (var_1_12 * var_1_10)) ? ((last_1_var_1_45 <= var_1_5) ? (var_1_23 == ((signed long int) ((last_1_var_1_63 + var_1_16) + ((var_1_14 + var_1_17) - 10)))) : 1) : ((var_1_6 <= last_1_var_1_63) ? (var_1_23 == ((signed long int) (var_1_16 - last_1_var_1_45))) : (var_1_23 == ((signed long int) (((((((((var_1_17) < (last_1_var_1_63)) ? (var_1_17) : (last_1_var_1_63))) + var_1_18)) > (var_1_14)) ? ((((((var_1_17) < (last_1_var_1_63)) ? (var_1_17) : (last_1_var_1_63))) + var_1_18)) : (var_1_14)))))))) && ((var_1_11 <= var_1_8) ? (var_1_55 ? (var_1_24 == ((float) (var_1_10 + var_1_8))) : 1) : (var_1_24 == ((float) (var_1_9 - ((var_1_25 + var_1_26) + var_1_8)))))) && ((! var_1_55) ? ((var_1_18 <= var_1_61) ? (var_1_27 == ((float) var_1_10)) : 1) : 1)) && (var_1_28 == ((unsigned char) var_1_17))) && (((var_1_9 - (var_1_8 + var_1_25)) >= var_1_11) ? (var_1_29 == ((unsigned short int) var_1_20)) : 1)) && (((var_1_9 >= (var_1_8 - var_1_25)) || (var_1_41 > (var_1_6 + var_1_41))) ? (((var_1_23 + var_1_6) >= var_1_15) ? (var_1_30 == ((double) (var_1_10 + var_1_11))) : (var_1_30 == ((double) 2.75))) : ((((var_1_5 / var_1_20) & (var_1_41 - var_1_63)) >= (((((25) > (var_1_18)) ? (25) : (var_1_18))) << var_1_63)) ? (var_1_30 == ((double) (var_1_25 - var_1_31))) : (var_1_30 == ((double) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))))))) && (((var_1_17 ^ (~ -5)) >= var_1_6) ? (var_1_32 == ((float) var_1_25)) : 1)) && ((var_1_63 >= (8 << var_1_63)) ? ((last_1_var_1_33 < var_1_12) ? (var_1_33 == ((float) (var_1_25 - var_1_26))) : 1) : (var_1_33 == ((float) var_1_26)))) && (var_1_55 ? (var_1_34 == ((signed char) (var_1_35 + var_1_36))) : ((var_1_49 <= (((((var_1_9) < (var_1_49)) ? (var_1_9) : (var_1_49))) / var_1_38)) ? (var_1_55 ? (var_1_34 == ((signed char) var_1_17)) : (var_1_34 == ((signed char) ((((var_1_36) < ((var_1_17 - var_1_40))) ? (var_1_36) : ((var_1_17 - var_1_40))))))) : (var_1_34 == ((signed char) (var_1_17 - var_1_40)))))) && ((((((var_1_14) < (var_1_53)) ? (var_1_14) : (var_1_53))) > 2) ? (var_1_41 == ((unsigned short int) ((((var_1_16) < (var_1_15)) ? (var_1_16) : (var_1_15))))) : ((16u >= var_1_17) ? (var_1_41 == ((unsigned short int) ((((var_1_45) > (var_1_53)) ? (var_1_45) : (var_1_53))))) : (var_1_41 == ((unsigned short int) ((((var_1_15) > (((var_1_42 - var_1_18) + var_1_14))) ? (var_1_15) : (((var_1_42 - var_1_18) + var_1_14))))))))) && ((var_1_31 >= 1.2) ? (var_1_43 == ((unsigned char) (((((var_1_44) < (128)) ? (var_1_44) : (128))) - var_1_17))) : (var_1_43 == ((unsigned char) (((((((((var_1_17 + var_1_40)) < (var_1_14)) ? ((var_1_17 + var_1_40)) : (var_1_14)))) < (var_1_16)) ? ((((((var_1_17 + var_1_40)) < (var_1_14)) ? ((var_1_17 + var_1_40)) : (var_1_14)))) : (var_1_16))))))) && (var_1_55 ? (var_1_45 == ((signed long int) (var_1_44 + ((((var_1_19) > (var_1_43)) ? (var_1_19) : (var_1_43)))))) : (var_1_45 == ((signed long int) ((((var_1_17) < ((((((4 + var_1_35)) > (var_1_1)) ? ((4 + var_1_35)) : (var_1_1))))) ? (var_1_17) : ((((((4 + var_1_35)) > (var_1_1)) ? ((4 + var_1_35)) : (var_1_1)))))))))) && ((((var_1_17 << var_1_41) * -64) <= (var_1_40 + var_1_41)) ? (var_1_46 == ((unsigned char) var_1_40)) : (var_1_46 == ((unsigned char) (var_1_40 + ((var_1_47 + 4) + var_1_48)))))) && (var_1_55 ? (((var_1_48 + var_1_20) < var_1_1) ? (var_1_49 == ((double) (((((var_1_11) > (100.5)) ? (var_1_11) : (100.5))) + (((((var_1_12 + var_1_26)) > (((((var_1_10) < (var_1_25)) ? (var_1_10) : (var_1_25))))) ? ((var_1_12 + var_1_26)) : (((((var_1_10) < (var_1_25)) ? (var_1_10) : (var_1_25))))))))) : (var_1_49 == ((double) ((((((var_1_25) < (var_1_8)) ? (var_1_25) : (var_1_8))) - var_1_9) + ((((((((var_1_26) > (var_1_11)) ? (var_1_26) : (var_1_11)))) > (((((25.25) < (var_1_12)) ? (25.25) : (var_1_12))))) ? (((((var_1_26) > (var_1_11)) ? (var_1_26) : (var_1_11)))) : (((((25.25) < (var_1_12)) ? (25.25) : (var_1_12)))))))))) : (var_1_49 == ((double) ((var_1_12 + var_1_11) + ((var_1_50 + var_1_51) + ((((var_1_52) > (var_1_26)) ? (var_1_52) : (var_1_26))))))))) && ((var_1_51 > last_1_var_1_54) ? (var_1_53 == ((signed long int) (last_1_var_1_62 + var_1_17))) : 1)) && ((((var_1_31 - var_1_9) * var_1_30) >= var_1_32) ? (((-4 >= var_1_53) && var_1_55) ? (var_1_54 == ((float) ((256.8f + var_1_51) + var_1_10))) : (var_1_54 == ((float) (var_1_25 - (var_1_26 + var_1_9))))) : (var_1_54 == ((float) (var_1_9 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))))) && (((- last_1_var_1_49) > (var_1_50 * (var_1_31 - var_1_9))) ? (var_1_55 == ((unsigned char) (! (! var_1_56)))) : ((var_1_50 <= (var_1_31 - (var_1_26 + var_1_25))) ? (var_1_55 == ((unsigned char) (var_1_56 && var_1_57))) : (((var_1_15 / var_1_44) > last_1_var_1_53) ? (var_1_55 == ((unsigned char) ((var_1_59 || var_1_57) && var_1_56))) : (var_1_55 == ((unsigned char) var_1_60)))))) && (var_1_61 == ((unsigned char) var_1_40))) && (var_1_57 ? (var_1_62 == ((signed short int) var_1_47)) : 1)) && ((((((- var_1_31) < 0 ) ? -(- var_1_31) : (- var_1_31))) > var_1_7) ? (var_1_63 == ((signed long int) (var_1_46 + ((var_1_64 - 32) - var_1_48)))) : ((var_1_55 && (var_1_29 <= var_1_17)) ? (var_1_63 == ((signed long int) var_1_46)) : (var_1_63 == ((signed long int) var_1_23))))
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
