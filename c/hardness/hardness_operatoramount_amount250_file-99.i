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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch99Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 8;
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
double var_1_34 = 10.6;
double var_1_35 = 3.2;
double var_1_36 = 8.9;
signed short int var_1_37 = 32;
signed char var_1_38 = 100;
signed long int var_1_39 = 500;
signed short int var_1_40 = -64;
unsigned long int var_1_41 = 0;
signed char var_1_42 = 32;
signed char var_1_43 = 100;
unsigned char var_1_44 = 2;
unsigned char var_1_45 = 0;
unsigned short int var_1_46 = 10;
unsigned short int var_1_47 = 18030;
unsigned short int var_1_48 = 17703;
unsigned short int var_1_49 = 10000;
unsigned short int var_1_50 = 10000;
unsigned short int var_1_51 = 25937;
unsigned short int var_1_52 = 1;
unsigned short int var_1_53 = 32635;
unsigned short int var_1_54 = 32;
double var_1_55 = 0.5;
double var_1_56 = 1.4;
double var_1_57 = 199.4;
unsigned char var_1_58 = 16;
unsigned char var_1_59 = 50;
unsigned char var_1_60 = 1;
signed char var_1_61 = -8;
unsigned long int var_1_62 = 8;
unsigned long int var_1_63 = 2024376468;
unsigned long int var_1_64 = 1738494262;
unsigned long int var_1_65 = 3248891487;
unsigned long int var_1_66 = 1000000000;
signed short int var_1_67 = -10;
unsigned long int var_1_68 = 64;
unsigned long int var_1_69 = 32;
unsigned long int var_1_70 = 5;
unsigned char last_1_var_1_21 = 0;
unsigned char last_1_var_1_28 = 2;
double last_1_var_1_33 = 31.5;
unsigned long int last_1_var_1_41 = 0;
unsigned char last_1_var_1_44 = 2;
signed short int last_1_var_1_67 = -10;
unsigned long int last_1_var_1_68 = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = var_1_32 * last_1_var_1_44;
 if (((var_1_31 << var_1_22) + (var_1_4 ^ last_1_var_1_41)) <= stepLocal_5) {
  var_1_33 = ((((var_1_19) > (var_1_16)) ? (var_1_19) : (var_1_16)));
 } else {
  var_1_33 = (((((var_1_34 - var_1_35)) < ((var_1_36 - 15.8))) ? ((var_1_34 - var_1_35)) : ((var_1_36 - 15.8))));
 }
 if (! last_1_var_1_21) {
  if (last_1_var_1_33 >= var_1_11) {
   var_1_12 = (var_1_8 + 25);
  }
 }
 if (var_1_24) {
  var_1_41 = (((((var_1_31) > (var_1_22)) ? (var_1_31) : (var_1_22))) + var_1_12);
 } else {
  var_1_41 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 var_1_40 = var_1_4;
 signed long int stepLocal_9 = var_1_32 - (var_1_22 + var_1_4);
 if (var_1_36 >= var_1_10) {
  if (stepLocal_9 <= var_1_5) {
   var_1_46 = ((((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))) + (var_1_49 + var_1_50)) - var_1_45);
  } else {
   var_1_46 = (((var_1_51 - var_1_52) + var_1_53) - (var_1_5 + var_1_45));
  }
 }
 var_1_55 = (var_1_56 + var_1_57);
 unsigned long int stepLocal_10 = (64u & var_1_41) + var_1_12;
 if ((((((3096462083u) < 0 ) ? -(3096462083u) : (3096462083u))) - var_1_53) >= stepLocal_10) {
  var_1_61 = var_1_32;
 } else {
  var_1_61 = (var_1_60 + var_1_32);
 }
 unsigned char stepLocal_3 = var_1_5;
 signed long int stepLocal_2 = (((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8));
 if ((- var_1_12) != stepLocal_3) {
  if (var_1_40 > stepLocal_2) {
   var_1_20 = ((var_1_4 + var_1_5) + var_1_8);
  } else {
   var_1_20 = var_1_8;
  }
 }
 if (var_1_10 > (var_1_55 + (var_1_55 + var_1_11))) {
  var_1_15 = (((((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) < 0 ) ? -((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) : ((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))))));
 } else {
  var_1_15 = ((((((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) < (var_1_19)) ? (((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) : (var_1_19)));
 }
 if (! ((var_1_4 > var_1_46) && var_1_25)) {
  if (var_1_55 >= ((var_1_19 + var_1_11) / ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))))) {
   if (var_1_55 > var_1_36) {
    var_1_42 = ((var_1_43 - var_1_22) - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))));
   }
  } else {
   var_1_42 = (var_1_22 + var_1_32);
  }
 }
 signed long int stepLocal_1 = (8 / var_1_4) * ((((var_1_40) < (16)) ? (var_1_40) : (16)));
 if (var_1_15 >= var_1_55) {
  var_1_13 = ((((-16) > (var_1_4)) ? (-16) : (var_1_4)));
 } else {
  if (var_1_5 <= stepLocal_1) {
   var_1_13 = ((((((var_1_5 - var_1_41) + var_1_4)) < (var_1_8)) ? (((var_1_5 - var_1_41) + var_1_4)) : (var_1_8)));
  }
 }
 signed long int stepLocal_6 = 4;
 if (var_1_30 == var_1_19) {
  var_1_37 = ((((((var_1_22 + var_1_46)) > (var_1_31)) ? ((var_1_22 + var_1_46)) : (var_1_31))) - 8);
 } else {
  if (stepLocal_6 >= var_1_13) {
   var_1_37 = var_1_4;
  } else {
   var_1_37 = ((var_1_8 - var_1_46) + var_1_4);
  }
 }
 unsigned short int stepLocal_12 = var_1_46;
 if (var_1_19 <= ((((127.2) < 0 ) ? -(127.2) : (127.2)))) {
  if (stepLocal_12 < last_1_var_1_67) {
   var_1_67 = var_1_4;
  } else {
   var_1_67 = var_1_37;
  }
 } else {
  var_1_67 = var_1_50;
 }
 signed short int stepLocal_13 = var_1_13;
 if (stepLocal_13 < last_1_var_1_68) {
  if (var_1_33 >= (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))) - var_1_34)) {
   if (var_1_23) {
    var_1_68 = var_1_31;
   } else {
    var_1_68 = var_1_69;
   }
  } else {
   var_1_68 = var_1_63;
  }
 } else {
  var_1_68 = var_1_70;
 }
 if (var_1_68 >= var_1_12) {
  var_1_58 = var_1_22;
 } else {
  var_1_58 = (((var_1_59 + 50) - var_1_60) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))));
 }
 unsigned long int stepLocal_4 = var_1_68;
 if (var_1_33 >= var_1_16) {
  if ((var_1_5 << (var_1_22 - 0)) <= stepLocal_4) {
   var_1_21 = (((last_1_var_1_21 || var_1_23) && var_1_24) && var_1_25);
  } else {
   var_1_21 = (var_1_24 && (var_1_25 || var_1_23));
  }
 } else {
  var_1_21 = (var_1_26 || var_1_27);
 }
 unsigned char stepLocal_0 = ! var_1_21;
 if (stepLocal_0 && var_1_21) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  if ((64.888 * var_1_55) > var_1_33) {
   var_1_1 = (var_1_4 - ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))));
  } else {
   var_1_1 = (var_1_5 + var_1_8);
  }
 }
 if (var_1_15 != (var_1_10 - var_1_11)) {
  if (var_1_21) {
   var_1_9 = (var_1_4 + ((((var_1_67) > ((var_1_5 + 10))) ? (var_1_67) : ((var_1_5 + 10)))));
  }
 } else {
  if (var_1_21) {
   var_1_9 = 16;
  } else {
   var_1_9 = var_1_5;
  }
 }
 unsigned char stepLocal_8 = var_1_21;
 signed short int stepLocal_7 = var_1_13;
 if (stepLocal_8 && (var_1_26 && (var_1_29 <= var_1_33))) {
  if (var_1_68 <= stepLocal_7) {
   var_1_38 = var_1_22;
  }
 }
 unsigned short int stepLocal_11 = var_1_22;
 if (var_1_21) {
  var_1_62 = var_1_20;
 } else {
  if (stepLocal_11 < var_1_51) {
   var_1_62 = ((var_1_63 + (var_1_64 - var_1_53)) - var_1_4);
  } else {
   var_1_62 = ((var_1_65 - (var_1_66 - var_1_43)) - var_1_60);
  }
 }
 if ((8 << var_1_51) != var_1_50) {
  var_1_54 = (((((var_1_22) > ((var_1_8 + var_1_58))) ? (var_1_22) : ((var_1_8 + var_1_58)))) + var_1_5);
 }
 if (var_1_27 && var_1_24) {
  var_1_28 = var_1_8;
 } else {
  if (var_1_18 >= (var_1_19 / ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))))) {
   if (last_1_var_1_28 > var_1_67) {
    var_1_28 = (var_1_22 + var_1_8);
   }
  } else {
   if ((var_1_20 / var_1_4) <= var_1_62) {
    if (var_1_62 == var_1_54) {
     var_1_28 = var_1_8;
    }
   } else {
    var_1_28 = (var_1_5 + (var_1_31 - (var_1_22 + var_1_32)));
   }
  }
 }
 if (var_1_21) {
  if (var_1_18 != (- (var_1_10 - var_1_11))) {
   var_1_39 = var_1_9;
  } else {
   var_1_39 = ((((var_1_8) < (((((var_1_5) < (var_1_62)) ? (var_1_5) : (var_1_62))))) ? (var_1_8) : (((((var_1_5) < (var_1_62)) ? (var_1_5) : (var_1_62))))));
  }
 }
 if (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) <= var_1_54) {
  if ((((((var_1_43 + var_1_54)) > ((var_1_20 ^ 0))) ? ((var_1_43 + var_1_54)) : ((var_1_20 ^ 0)))) < var_1_13) {
   var_1_44 = var_1_5;
  } else {
   var_1_44 = (((((var_1_43) > (var_1_22)) ? (var_1_43) : (var_1_22))) + ((((var_1_45) > (var_1_5)) ? (var_1_45) : (var_1_5))));
  }
 } else {
  var_1_44 = ((var_1_22 + var_1_32) + var_1_8);
 }
}
void updateVariables(void) {
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
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
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
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 62);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 16383);
 assume_abort_if_not(var_1_47 <= 32767);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 16383);
 assume_abort_if_not(var_1_48 <= 32767);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 8192);
 assume_abort_if_not(var_1_49 <= 16384);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 8192);
 assume_abort_if_not(var_1_50 <= 16383);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 24575);
 assume_abort_if_not(var_1_51 <= 32767);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 8192);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 16384);
 assume_abort_if_not(var_1_53 <= 32767);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -461168.6018427383000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= -461168.6018427383000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 31);
 assume_abort_if_not(var_1_59 <= 64);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 1073741823);
 assume_abort_if_not(var_1_63 <= 2147483647);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 1610612735);
 assume_abort_if_not(var_1_64 <= 2147483647);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 3221225470);
 assume_abort_if_not(var_1_65 <= 4294967294);
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 536870911);
 assume_abort_if_not(var_1_66 <= 1073741823);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 4294967294);
 var_1_70 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_21 = var_1_21;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_68 = var_1_68;
}
int property(void) {
 return (((((((((((((((((((((((((! var_1_21) && var_1_21) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (((64.888 * var_1_55) > var_1_33) ? (var_1_1 == ((unsigned char) (var_1_4 - ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)))))) : (var_1_1 == ((unsigned char) (var_1_5 + var_1_8))))) && ((var_1_15 != (var_1_10 - var_1_11)) ? (var_1_21 ? (var_1_9 == ((signed short int) (var_1_4 + ((((var_1_67) > ((var_1_5 + 10))) ? (var_1_67) : ((var_1_5 + 10))))))) : 1) : (var_1_21 ? (var_1_9 == ((signed short int) 16)) : (var_1_9 == ((signed short int) var_1_5))))) && ((! last_1_var_1_21) ? ((last_1_var_1_33 >= var_1_11) ? (var_1_12 == ((unsigned short int) (var_1_8 + 25))) : 1) : 1)) && ((var_1_15 >= var_1_55) ? (var_1_13 == ((signed short int) ((((-16) > (var_1_4)) ? (-16) : (var_1_4))))) : ((var_1_5 <= ((8 / var_1_4) * ((((var_1_40) < (16)) ? (var_1_40) : (16))))) ? (var_1_13 == ((signed short int) ((((((var_1_5 - var_1_41) + var_1_4)) < (var_1_8)) ? (((var_1_5 - var_1_41) + var_1_4)) : (var_1_8))))) : 1))) && ((var_1_10 > (var_1_55 + (var_1_55 + var_1_11))) ? (var_1_15 == ((double) (((((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) < 0 ) ? -((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))) : ((((7.25) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (7.25) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))))))) : (var_1_15 == ((double) ((((((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) < (var_1_19)) ? (((((var_1_17) < (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (var_1_17) : (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))))))) : (var_1_19))))))) && (((- var_1_12) != var_1_5) ? ((var_1_40 > ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) ? (var_1_20 == ((unsigned short int) ((var_1_4 + var_1_5) + var_1_8))) : (var_1_20 == ((unsigned short int) var_1_8))) : 1)) && ((var_1_33 >= var_1_16) ? (((var_1_5 << (var_1_22 - 0)) <= var_1_68) ? (var_1_21 == ((unsigned char) (((last_1_var_1_21 || var_1_23) && var_1_24) && var_1_25))) : (var_1_21 == ((unsigned char) (var_1_24 && (var_1_25 || var_1_23))))) : (var_1_21 == ((unsigned char) (var_1_26 || var_1_27))))) && ((var_1_27 && var_1_24) ? (var_1_28 == ((unsigned char) var_1_8)) : ((var_1_18 >= (var_1_19 / ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))))) ? ((last_1_var_1_28 > var_1_67) ? (var_1_28 == ((unsigned char) (var_1_22 + var_1_8))) : 1) : (((var_1_20 / var_1_4) <= var_1_62) ? ((var_1_62 == var_1_54) ? (var_1_28 == ((unsigned char) var_1_8)) : 1) : (var_1_28 == ((unsigned char) (var_1_5 + (var_1_31 - (var_1_22 + var_1_32))))))))) && ((((var_1_31 << var_1_22) + (var_1_4 ^ last_1_var_1_41)) <= (var_1_32 * last_1_var_1_44)) ? (var_1_33 == ((double) ((((var_1_19) > (var_1_16)) ? (var_1_19) : (var_1_16))))) : (var_1_33 == ((double) (((((var_1_34 - var_1_35)) < ((var_1_36 - 15.8))) ? ((var_1_34 - var_1_35)) : ((var_1_36 - 15.8)))))))) && ((var_1_30 == var_1_19) ? (var_1_37 == ((signed short int) ((((((var_1_22 + var_1_46)) > (var_1_31)) ? ((var_1_22 + var_1_46)) : (var_1_31))) - 8))) : ((4 >= var_1_13) ? (var_1_37 == ((signed short int) var_1_4)) : (var_1_37 == ((signed short int) ((var_1_8 - var_1_46) + var_1_4)))))) && ((var_1_21 && (var_1_26 && (var_1_29 <= var_1_33))) ? ((var_1_68 <= var_1_13) ? (var_1_38 == ((signed char) var_1_22)) : 1) : 1)) && (var_1_21 ? ((var_1_18 != (- (var_1_10 - var_1_11))) ? (var_1_39 == ((signed long int) var_1_9)) : (var_1_39 == ((signed long int) ((((var_1_8) < (((((var_1_5) < (var_1_62)) ? (var_1_5) : (var_1_62))))) ? (var_1_8) : (((((var_1_5) < (var_1_62)) ? (var_1_5) : (var_1_62))))))))) : 1)) && (var_1_40 == ((signed short int) var_1_4))) && (var_1_24 ? (var_1_41 == ((unsigned long int) (((((var_1_31) > (var_1_22)) ? (var_1_31) : (var_1_22))) + var_1_12))) : (var_1_41 == ((unsigned long int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) && ((! ((var_1_4 > var_1_46) && var_1_25)) ? ((var_1_55 >= ((var_1_19 + var_1_11) / ((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))))) ? ((var_1_55 > var_1_36) ? (var_1_42 == ((signed char) ((var_1_43 - var_1_22) - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) : 1) : (var_1_42 == ((signed char) (var_1_22 + var_1_32)))) : 1)) && ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) <= var_1_54) ? (((((((var_1_43 + var_1_54)) > ((var_1_20 ^ 0))) ? ((var_1_43 + var_1_54)) : ((var_1_20 ^ 0)))) < var_1_13) ? (var_1_44 == ((unsigned char) var_1_5)) : (var_1_44 == ((unsigned char) (((((var_1_43) > (var_1_22)) ? (var_1_43) : (var_1_22))) + ((((var_1_45) > (var_1_5)) ? (var_1_45) : (var_1_5))))))) : (var_1_44 == ((unsigned char) ((var_1_22 + var_1_32) + var_1_8))))) && ((var_1_36 >= var_1_10) ? (((var_1_32 - (var_1_22 + var_1_4)) <= var_1_5) ? (var_1_46 == ((unsigned short int) ((((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))) + (var_1_49 + var_1_50)) - var_1_45))) : (var_1_46 == ((unsigned short int) (((var_1_51 - var_1_52) + var_1_53) - (var_1_5 + var_1_45))))) : 1)) && (((8 << var_1_51) != var_1_50) ? (var_1_54 == ((unsigned short int) (((((var_1_22) > ((var_1_8 + var_1_58))) ? (var_1_22) : ((var_1_8 + var_1_58)))) + var_1_5))) : 1)) && (var_1_55 == ((double) (var_1_56 + var_1_57)))) && ((var_1_68 >= var_1_12) ? (var_1_58 == ((unsigned char) var_1_22)) : (var_1_58 == ((unsigned char) (((var_1_59 + 50) - var_1_60) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))))) && (((((((3096462083u) < 0 ) ? -(3096462083u) : (3096462083u))) - var_1_53) >= ((64u & var_1_41) + var_1_12)) ? (var_1_61 == ((signed char) var_1_32)) : (var_1_61 == ((signed char) (var_1_60 + var_1_32))))) && (var_1_21 ? (var_1_62 == ((unsigned long int) var_1_20)) : ((var_1_22 < var_1_51) ? (var_1_62 == ((unsigned long int) ((var_1_63 + (var_1_64 - var_1_53)) - var_1_4))) : (var_1_62 == ((unsigned long int) ((var_1_65 - (var_1_66 - var_1_43)) - var_1_60)))))) && ((var_1_19 <= ((((127.2) < 0 ) ? -(127.2) : (127.2)))) ? ((var_1_46 < last_1_var_1_67) ? (var_1_67 == ((signed short int) var_1_4)) : (var_1_67 == ((signed short int) var_1_37))) : (var_1_67 == ((signed short int) var_1_50)))) && ((var_1_13 < last_1_var_1_68) ? ((var_1_33 >= (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))) - var_1_34)) ? (var_1_23 ? (var_1_68 == ((unsigned long int) var_1_31)) : (var_1_68 == ((unsigned long int) var_1_69))) : (var_1_68 == ((unsigned long int) var_1_63))) : (var_1_68 == ((unsigned long int) var_1_70)))
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
