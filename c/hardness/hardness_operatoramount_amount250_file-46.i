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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 8.25;
double var_1_2 = 4.6;
double var_1_3 = 1.25;
double var_1_4 = 0.0;
double var_1_5 = 2.8;
double var_1_6 = 7.8;
double var_1_7 = 100000000000000.72;
double var_1_8 = 10.3;
double var_1_9 = 64.875;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 3400562154;
unsigned long int var_1_12 = 10000;
unsigned short int var_1_13 = 5;
unsigned long int var_1_15 = 10;
unsigned short int var_1_16 = 62040;
unsigned short int var_1_17 = 33955;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 2;
double var_1_21 = 50.6;
unsigned short int var_1_23 = 2;
unsigned short int var_1_24 = 100;
double var_1_25 = 99.2;
float var_1_26 = 64.2;
unsigned short int var_1_28 = 32;
unsigned short int var_1_29 = 19253;
unsigned short int var_1_30 = 256;
unsigned short int var_1_31 = 10;
unsigned long int var_1_32 = 25;
unsigned long int var_1_33 = 3828629341;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
double var_1_40 = 4.95;
signed long int var_1_41 = 2;
signed long int var_1_42 = 1000000000;
float var_1_43 = 8.8;
signed char var_1_44 = 0;
signed char var_1_45 = 4;
signed char var_1_46 = 25;
signed char var_1_47 = 1;
signed char var_1_48 = -2;
signed char var_1_49 = 100;
signed char var_1_50 = 8;
signed char var_1_51 = 2;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
signed char var_1_54 = 2;
signed char var_1_55 = 5;
signed long int var_1_56 = -1000;
unsigned short int var_1_57 = 4;
unsigned long int var_1_58 = 5;
unsigned long int var_1_59 = 100;
unsigned char var_1_60 = 2;
signed char var_1_61 = 0;
double var_1_62 = 32.9;
signed char var_1_63 = -4;
unsigned long int var_1_64 = 256;
unsigned long int var_1_65 = 1545583973;
unsigned char var_1_66 = 0;
double last_1_var_1_1 = 8.25;
unsigned short int last_1_var_1_23 = 2;
double last_1_var_1_25 = 99.2;
unsigned long int last_1_var_1_32 = 25;
unsigned char last_1_var_1_37 = 0;
signed long int last_1_var_1_41 = 2;
unsigned char last_1_var_1_52 = 0;
unsigned long int last_1_var_1_58 = 5;
unsigned long int last_1_var_1_59 = 100;
unsigned long int last_1_var_1_64 = 256;
unsigned char last_1_var_1_66 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_11 = var_1_38;
 unsigned char stepLocal_10 = last_1_var_1_66;
 if (last_1_var_1_37 && stepLocal_11) {
  if (stepLocal_10 && var_1_39) {
   var_1_52 = (((var_1_36 - var_1_50) <= last_1_var_1_32) || var_1_39);
  }
 } else {
  if (last_1_var_1_37) {
   var_1_52 = (var_1_39 || (last_1_var_1_66 || var_1_53));
  } else {
   var_1_52 = (var_1_38 || (! var_1_39));
  }
 }
 unsigned char stepLocal_0 = (50u >> var_1_15) < last_1_var_1_58;
 if (last_1_var_1_52 && stepLocal_0) {
  var_1_13 = ((((((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) < 0 ) ? -((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) : ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) - var_1_15);
 }
 if (last_1_var_1_64 < (- (- var_1_35))) {
  if (last_1_var_1_25 < last_1_var_1_1) {
   if (last_1_var_1_37) {
    var_1_64 = ((last_1_var_1_41 + var_1_57) + (var_1_65 - var_1_31));
   } else {
    var_1_64 = var_1_30;
   }
  }
 }
 unsigned short int stepLocal_2 = var_1_17;
 unsigned long int stepLocal_1 = var_1_11;
 if (! last_1_var_1_66) {
  if (var_1_7 <= (last_1_var_1_25 * (var_1_2 / var_1_21))) {
   if (last_1_var_1_66) {
    if (! last_1_var_1_37) {
     if ((((((var_1_15 - 2)) < (-2)) ? ((var_1_15 - 2)) : (-2))) >= stepLocal_1) {
      if (stepLocal_2 >= last_1_var_1_23) {
       var_1_18 = var_1_12;
      } else {
       var_1_18 = 10u;
      }
     }
    } else {
     var_1_18 = var_1_15;
    }
   }
  } else {
   var_1_18 = var_1_11;
  }
 } else {
  var_1_18 = var_1_12;
 }
 if (16.75 > (var_1_2 - var_1_3)) {
  var_1_1 = ((var_1_4 - ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) - (((((var_1_7 + var_1_8)) > (var_1_9)) ? ((var_1_7 + var_1_8)) : (var_1_9))));
 } else {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 var_1_10 = (var_1_11 - var_1_12);
 unsigned short int stepLocal_3 = var_1_17;
 if (var_1_2 > var_1_7) {
  if (stepLocal_3 < (- var_1_10)) {
   var_1_23 = (((((25) < (var_1_15)) ? (25) : (var_1_15))) + var_1_24);
  }
 } else {
  var_1_23 = var_1_17;
 }
 var_1_25 = var_1_8;
 unsigned long int stepLocal_5 = var_1_18;
 unsigned long int stepLocal_4 = (((var_1_10) > (var_1_18)) ? (var_1_10) : (var_1_18));
 if (stepLocal_4 > var_1_24) {
  var_1_26 = (var_1_8 + var_1_5);
 } else {
  if (stepLocal_5 > var_1_11) {
   var_1_26 = ((((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))) < ((((((var_1_4 - var_1_7)) > (var_1_8)) ? ((var_1_4 - var_1_7)) : (var_1_8))))) ? (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))) : ((((((var_1_4 - var_1_7)) > (var_1_8)) ? ((var_1_4 - var_1_7)) : (var_1_8))))));
  }
 }
 if (var_1_52) {
  var_1_34 = ((var_1_35 - var_1_15) + var_1_36);
 }
 if (var_1_2 >= var_1_8) {
  var_1_40 = (((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_8)) > ((((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))) - (7.624036358594664E18 - var_1_5)))) ? ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_8)) : ((((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))) - (7.624036358594664E18 - var_1_5)))));
 }
 if (var_1_40 <= var_1_3) {
  var_1_43 = (((((var_1_4 - (var_1_5 + var_1_7))) < ((var_1_6 + var_1_8))) ? ((var_1_4 - (var_1_5 + var_1_7))) : ((var_1_6 + var_1_8))));
 }
 unsigned char stepLocal_9 = var_1_52;
 if (var_1_39 || stepLocal_9) {
  var_1_51 = var_1_48;
 } else {
  var_1_51 = var_1_15;
 }
 unsigned long int stepLocal_14 = var_1_64;
 if (! (var_1_33 >= ((((var_1_64) < (var_1_57)) ? (var_1_64) : (var_1_57))))) {
  if (stepLocal_14 >= (((((var_1_11 - var_1_12)) < (10u)) ? ((var_1_11 - var_1_12)) : (10u)))) {
   var_1_59 = ((((var_1_42) > (last_1_var_1_59)) ? (var_1_42) : (last_1_var_1_59)));
  }
 }
 if (((var_1_1 * var_1_21) + var_1_9) == var_1_2) {
  var_1_60 = var_1_57;
 } else {
  if (var_1_39) {
   if (var_1_4 >= var_1_25) {
    var_1_60 = (var_1_50 + var_1_36);
   } else {
    var_1_60 = var_1_46;
   }
  } else {
   var_1_60 = ((((var_1_55) > (2)) ? (var_1_55) : (2)));
  }
 }
 var_1_62 = var_1_7;
 var_1_66 = var_1_53;
 unsigned char stepLocal_7 = var_1_66;
 if (var_1_52 || stepLocal_7) {
  var_1_37 = (! var_1_38);
 } else {
  var_1_37 = (! (var_1_38 || var_1_39));
 }
 unsigned long int stepLocal_6 = var_1_64;
 if (var_1_62 <= var_1_3) {
  var_1_28 = ((30433 + var_1_29) - 2);
 } else {
  if (stepLocal_6 == var_1_15) {
   var_1_28 = (var_1_24 + (var_1_15 + ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))));
  } else {
   var_1_28 = (var_1_30 + 10);
  }
 }
 unsigned long int stepLocal_13 = var_1_64;
 signed char stepLocal_12 = var_1_49;
 if ((10 | var_1_16) > stepLocal_12) {
  if (var_1_66) {
   if ((var_1_15 + (4 + var_1_24)) <= stepLocal_13) {
    var_1_54 = (var_1_49 - (var_1_15 + var_1_55));
   } else {
    var_1_54 = (((((var_1_47 + var_1_55)) < (var_1_50)) ? ((var_1_47 + var_1_55)) : (var_1_50)));
   }
  }
 }
 if (var_1_66) {
  var_1_61 = var_1_45;
 } else {
  var_1_61 = 8;
 }
 if (var_1_37) {
  var_1_63 = var_1_46;
 }
 if (var_1_40 != var_1_5) {
  var_1_41 = (((((var_1_17 + var_1_13)) < (var_1_30)) ? ((var_1_17 + var_1_13)) : (var_1_30)));
 } else {
  if (var_1_39) {
   var_1_41 = (var_1_54 + var_1_19);
  } else {
   var_1_41 = (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))) + ((var_1_42 - var_1_29) - var_1_24));
  }
 }
 if (var_1_1 == var_1_25) {
  var_1_32 = ((((((3567939989u) > (var_1_33)) ? (3567939989u) : (var_1_33))) - var_1_41) - var_1_13);
 } else {
  var_1_32 = var_1_31;
 }
 if ((- var_1_40) <= var_1_40) {
  if (var_1_31 != (8 >> var_1_57)) {
   var_1_56 = ((var_1_29 + var_1_45) + ((((var_1_46 - var_1_17) < 0 ) ? -(var_1_46 - var_1_17) : (var_1_46 - var_1_17))));
  } else {
   var_1_56 = (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) - var_1_32);
  }
 } else {
  if (var_1_18 >= var_1_24) {
   var_1_56 = (var_1_18 - var_1_24);
  }
 }
 if (((((var_1_50) < (var_1_46)) ? (var_1_50) : (var_1_46))) <= var_1_18) {
  if (((var_1_28 & var_1_16) ^ var_1_56) != (var_1_30 * (var_1_56 / var_1_19))) {
   var_1_58 = ((((((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))) < 0 ) ? -((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))) : ((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) + var_1_55);
  } else {
   var_1_58 = (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) + 100000000u);
  }
 } else {
  var_1_58 = (((((((((var_1_33 - var_1_12)) < (var_1_49)) ? ((var_1_33 - var_1_12)) : (var_1_49)))) < (4u)) ? ((((((var_1_33 - var_1_12)) < (var_1_49)) ? ((var_1_33 - var_1_12)) : (var_1_49)))) : (4u)));
 }
 unsigned long int stepLocal_8 = - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 if (var_1_58 > stepLocal_8) {
  var_1_44 = (var_1_15 - var_1_46);
 } else {
  if (! var_1_66) {
   var_1_44 = ((((var_1_45) > (var_1_48)) ? (var_1_45) : (var_1_48)));
  } else {
   var_1_44 = (((((var_1_46) < ((var_1_49 - var_1_15))) ? (var_1_46) : ((var_1_49 - var_1_15)))) - var_1_50);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 4611686.018427383000e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 31);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 32767);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32768);
 assume_abort_if_not(var_1_19 <= 32767);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 16384);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 3221225470);
 assume_abort_if_not(var_1_33 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 63);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= 536870911);
 assume_abort_if_not(var_1_42 <= 1073741823);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -63);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -63);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 62);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 30);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 1073741823);
 assume_abort_if_not(var_1_65 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_66 = var_1_66;
}
int property(void) {
 return (((((((((((((((((((((((((((16.75 > (var_1_2 - var_1_3)) ? (var_1_1 == ((double) ((var_1_4 - ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) - (((((var_1_7 + var_1_8)) > (var_1_9)) ? ((var_1_7 + var_1_8)) : (var_1_9)))))) : (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_12)))) && ((last_1_var_1_52 && ((50u >> var_1_15) < last_1_var_1_58)) ? (var_1_13 == ((unsigned short int) ((((((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) < 0 ) ? -((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) : ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) - var_1_15))) : 1)) && ((! last_1_var_1_66) ? ((var_1_7 <= (last_1_var_1_25 * (var_1_2 / var_1_21))) ? (last_1_var_1_66 ? ((! last_1_var_1_37) ? (((((((var_1_15 - 2)) < (-2)) ? ((var_1_15 - 2)) : (-2))) >= var_1_11) ? ((var_1_17 >= last_1_var_1_23) ? (var_1_18 == ((unsigned long int) var_1_12)) : (var_1_18 == ((unsigned long int) 10u))) : 1) : (var_1_18 == ((unsigned long int) var_1_15))) : 1) : (var_1_18 == ((unsigned long int) var_1_11))) : (var_1_18 == ((unsigned long int) var_1_12)))) && ((var_1_2 > var_1_7) ? ((var_1_17 < (- var_1_10)) ? (var_1_23 == ((unsigned short int) (((((25) < (var_1_15)) ? (25) : (var_1_15))) + var_1_24))) : 1) : (var_1_23 == ((unsigned short int) var_1_17)))) && (var_1_25 == ((double) var_1_8))) && ((((((var_1_10) > (var_1_18)) ? (var_1_10) : (var_1_18))) > var_1_24) ? (var_1_26 == ((float) (var_1_8 + var_1_5))) : ((var_1_18 > var_1_11) ? (var_1_26 == ((float) ((((((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))) < ((((((var_1_4 - var_1_7)) > (var_1_8)) ? ((var_1_4 - var_1_7)) : (var_1_8))))) ? (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))) : ((((((var_1_4 - var_1_7)) > (var_1_8)) ? ((var_1_4 - var_1_7)) : (var_1_8)))))))) : 1))) && ((var_1_62 <= var_1_3) ? (var_1_28 == ((unsigned short int) ((30433 + var_1_29) - 2))) : ((var_1_64 == var_1_15) ? (var_1_28 == ((unsigned short int) (var_1_24 + (var_1_15 + ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))))))) : (var_1_28 == ((unsigned short int) (var_1_30 + 10)))))) && ((var_1_1 == var_1_25) ? (var_1_32 == ((unsigned long int) ((((((3567939989u) > (var_1_33)) ? (3567939989u) : (var_1_33))) - var_1_41) - var_1_13))) : (var_1_32 == ((unsigned long int) var_1_31)))) && (var_1_52 ? (var_1_34 == ((unsigned char) ((var_1_35 - var_1_15) + var_1_36))) : 1)) && ((var_1_52 || var_1_66) ? (var_1_37 == ((unsigned char) (! var_1_38))) : (var_1_37 == ((unsigned char) (! (var_1_38 || var_1_39)))))) && ((var_1_2 >= var_1_8) ? (var_1_40 == ((double) (((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_8)) > ((((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))) - (7.624036358594664E18 - var_1_5)))) ? ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_8)) : ((((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))) - (7.624036358594664E18 - var_1_5))))))) : 1)) && ((var_1_40 != var_1_5) ? (var_1_41 == ((signed long int) (((((var_1_17 + var_1_13)) < (var_1_30)) ? ((var_1_17 + var_1_13)) : (var_1_30))))) : (var_1_39 ? (var_1_41 == ((signed long int) (var_1_54 + var_1_19))) : (var_1_41 == ((signed long int) (((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18))) + ((var_1_42 - var_1_29) - var_1_24))))))) && ((var_1_40 <= var_1_3) ? (var_1_43 == ((float) (((((var_1_4 - (var_1_5 + var_1_7))) < ((var_1_6 + var_1_8))) ? ((var_1_4 - (var_1_5 + var_1_7))) : ((var_1_6 + var_1_8)))))) : 1)) && ((var_1_58 > (- ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_44 == ((signed char) (var_1_15 - var_1_46))) : ((! var_1_66) ? (var_1_44 == ((signed char) ((((var_1_45) > (var_1_48)) ? (var_1_45) : (var_1_48))))) : (var_1_44 == ((signed char) (((((var_1_46) < ((var_1_49 - var_1_15))) ? (var_1_46) : ((var_1_49 - var_1_15)))) - var_1_50)))))) && ((var_1_39 || var_1_52) ? (var_1_51 == ((signed char) var_1_48)) : (var_1_51 == ((signed char) var_1_15)))) && ((last_1_var_1_37 && var_1_38) ? ((last_1_var_1_66 && var_1_39) ? (var_1_52 == ((unsigned char) (((var_1_36 - var_1_50) <= last_1_var_1_32) || var_1_39))) : 1) : (last_1_var_1_37 ? (var_1_52 == ((unsigned char) (var_1_39 || (last_1_var_1_66 || var_1_53)))) : (var_1_52 == ((unsigned char) (var_1_38 || (! var_1_39))))))) && (((10 | var_1_16) > var_1_49) ? (var_1_66 ? (((var_1_15 + (4 + var_1_24)) <= var_1_64) ? (var_1_54 == ((signed char) (var_1_49 - (var_1_15 + var_1_55)))) : (var_1_54 == ((signed char) (((((var_1_47 + var_1_55)) < (var_1_50)) ? ((var_1_47 + var_1_55)) : (var_1_50)))))) : 1) : 1)) && (((- var_1_40) <= var_1_40) ? ((var_1_31 != (8 >> var_1_57)) ? (var_1_56 == ((signed long int) ((var_1_29 + var_1_45) + ((((var_1_46 - var_1_17) < 0 ) ? -(var_1_46 - var_1_17) : (var_1_46 - var_1_17)))))) : (var_1_56 == ((signed long int) (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) - var_1_32)))) : ((var_1_18 >= var_1_24) ? (var_1_56 == ((signed long int) (var_1_18 - var_1_24))) : 1))) && ((((((var_1_50) < (var_1_46)) ? (var_1_50) : (var_1_46))) <= var_1_18) ? ((((var_1_28 & var_1_16) ^ var_1_56) != (var_1_30 * (var_1_56 / var_1_19))) ? (var_1_58 == ((unsigned long int) ((((((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))) < 0 ) ? -((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))) : ((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) + var_1_55))) : (var_1_58 == ((unsigned long int) (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))) + 100000000u)))) : (var_1_58 == ((unsigned long int) (((((((((var_1_33 - var_1_12)) < (var_1_49)) ? ((var_1_33 - var_1_12)) : (var_1_49)))) < (4u)) ? ((((((var_1_33 - var_1_12)) < (var_1_49)) ? ((var_1_33 - var_1_12)) : (var_1_49)))) : (4u))))))) && ((! (var_1_33 >= ((((var_1_64) < (var_1_57)) ? (var_1_64) : (var_1_57))))) ? ((var_1_64 >= (((((var_1_11 - var_1_12)) < (10u)) ? ((var_1_11 - var_1_12)) : (10u)))) ? (var_1_59 == ((unsigned long int) ((((var_1_42) > (last_1_var_1_59)) ? (var_1_42) : (last_1_var_1_59))))) : 1) : 1)) && ((((var_1_1 * var_1_21) + var_1_9) == var_1_2) ? (var_1_60 == ((unsigned char) var_1_57)) : (var_1_39 ? ((var_1_4 >= var_1_25) ? (var_1_60 == ((unsigned char) (var_1_50 + var_1_36))) : (var_1_60 == ((unsigned char) var_1_46))) : (var_1_60 == ((unsigned char) ((((var_1_55) > (2)) ? (var_1_55) : (2)))))))) && (var_1_66 ? (var_1_61 == ((signed char) var_1_45)) : (var_1_61 == ((signed char) 8)))) && (var_1_62 == ((double) var_1_7))) && (var_1_37 ? (var_1_63 == ((signed char) var_1_46)) : 1)) && ((last_1_var_1_64 < (- (- var_1_35))) ? ((last_1_var_1_25 < last_1_var_1_1) ? (last_1_var_1_37 ? (var_1_64 == ((unsigned long int) ((last_1_var_1_41 + var_1_57) + (var_1_65 - var_1_31)))) : (var_1_64 == ((unsigned long int) var_1_30))) : 1) : 1)) && (var_1_66 == ((unsigned char) var_1_53))
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
