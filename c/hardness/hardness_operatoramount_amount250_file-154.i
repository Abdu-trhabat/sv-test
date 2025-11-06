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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
signed long int var_1_3 = 32;
signed long int var_1_4 = 200;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = -5;
signed char var_1_9 = 1;
float var_1_10 = 127.5;
float var_1_11 = 1.2;
float var_1_12 = 7.5;
float var_1_13 = 5.8;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 25;
unsigned short int var_1_18 = 32;
unsigned short int var_1_19 = 16;
unsigned short int var_1_20 = 52041;
signed char var_1_21 = -4;
signed char var_1_22 = 64;
signed char var_1_23 = 1;
signed char var_1_24 = 10;
signed char var_1_25 = 16;
signed char var_1_26 = 5;
signed char var_1_27 = 25;
signed short int var_1_28 = 10;
unsigned long int var_1_29 = 16;
unsigned long int var_1_30 = 1499074372;
unsigned char var_1_31 = 8;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 50;
unsigned char var_1_36 = 1;
signed short int var_1_37 = 8;
unsigned char var_1_39 = 2;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 5;
signed long int var_1_43 = -32;
signed short int var_1_44 = -1;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 100;
double var_1_47 = 0.2;
double var_1_48 = 9.5;
unsigned short int var_1_49 = 10;
double var_1_50 = 7.8;
unsigned char var_1_52 = 2;
signed char var_1_53 = -32;
signed char var_1_55 = -4;
unsigned char var_1_56 = 1;
unsigned long int var_1_57 = 2;
unsigned long int var_1_58 = 3438010358;
unsigned char var_1_59 = 128;
signed short int var_1_60 = -1;
signed short int var_1_61 = 500;
unsigned long int last_1_var_1_29 = 16;
unsigned char last_1_var_1_32 = 1;
unsigned char last_1_var_1_36 = 1;
unsigned long int last_1_var_1_57 = 2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_3;
 unsigned long int stepLocal_0 = last_1_var_1_57;
 if (var_1_3 <= stepLocal_0) {
  var_1_5 = (var_1_6 && (last_1_var_1_32 || var_1_7));
 } else {
  if (stepLocal_1 == var_1_4) {
   var_1_5 = (var_1_7 && var_1_6);
  }
 }
 if (! var_1_5) {
  var_1_32 = (var_1_33 || var_1_34);
 }
 if (last_1_var_1_36) {
  var_1_1 = (var_1_3 - var_1_4);
 } else {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 }
 signed long int stepLocal_12 = var_1_1;
 if (var_1_22 != stepLocal_12) {
  var_1_43 = (50 - var_1_1);
 }
 signed long int stepLocal_2 = var_1_3;
 if (var_1_9 > stepLocal_2) {
  var_1_10 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - (var_1_12 + var_1_13));
 } else {
  var_1_10 = (var_1_13 - var_1_12);
 }
 if (var_1_7) {
  var_1_31 = var_1_26;
 } else {
  var_1_31 = ((((var_1_24) > (((var_1_23 + var_1_27) + var_1_26))) ? (var_1_24) : (((var_1_23 + var_1_27) + var_1_26))));
 }
 if (var_1_34) {
  var_1_39 = (var_1_16 - var_1_23);
 }
 if (var_1_32) {
  var_1_55 = var_1_26;
 } else {
  var_1_55 = var_1_9;
 }
 var_1_56 = var_1_34;
 var_1_59 = var_1_27;
 var_1_60 = var_1_17;
 var_1_61 = var_1_9;
 signed long int stepLocal_7 = var_1_3;
 unsigned char stepLocal_6 = var_1_16;
 if (var_1_11 != (var_1_12 * (var_1_10 * var_1_13))) {
  if (stepLocal_6 <= (var_1_18 & ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) {
   if (var_1_32) {
    var_1_21 = var_1_9;
   } else {
    var_1_21 = 100;
   }
  } else {
   if (var_1_10 > var_1_13) {
    var_1_21 = ((var_1_22 - var_1_23) - 10);
   }
  }
 } else {
  if (stepLocal_7 > var_1_4) {
   var_1_21 = ((((((var_1_23 + var_1_24)) < (var_1_22)) ? ((var_1_23 + var_1_24)) : (var_1_22))) - var_1_25);
  } else {
   var_1_21 = (var_1_23 + (var_1_24 - ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))));
  }
 }
 if (var_1_6) {
  if (var_1_16 <= ((((var_1_60) > (var_1_20)) ? (var_1_60) : (var_1_20)))) {
   var_1_29 = (((((((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))) + var_1_18)) > (10u)) ? ((((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))) + var_1_18)) : (10u)));
  } else {
   var_1_29 = ((var_1_30 - var_1_18) + (((((var_1_17 + var_1_25)) < (var_1_26)) ? ((var_1_17 + var_1_25)) : (var_1_26))));
  }
 } else {
  var_1_29 = ((var_1_23 + 64u) + ((((last_1_var_1_29) < (var_1_16)) ? (last_1_var_1_29) : (var_1_16))));
 }
 unsigned long int stepLocal_9 = var_1_4 + (var_1_30 / var_1_22);
 if (stepLocal_9 <= (var_1_29 * var_1_18)) {
  var_1_35 = 128u;
 }
 if (var_1_56) {
  var_1_40 = (((((var_1_41 - var_1_24) < 0 ) ? -(var_1_41 - var_1_24) : (var_1_41 - var_1_24))) - (var_1_26 + var_1_27));
 } else {
  var_1_40 = ((((var_1_23) > (var_1_41)) ? (var_1_23) : (var_1_41)));
 }
 var_1_44 = (var_1_35 + var_1_22);
 if (var_1_29 >= var_1_27) {
  var_1_45 = (var_1_41 - ((((var_1_24) > (var_1_26)) ? (var_1_24) : (var_1_26))));
 } else {
  var_1_45 = ((var_1_46 - ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))) + var_1_25);
 }
 signed long int stepLocal_16 = var_1_4;
 if ((var_1_46 << var_1_29) > stepLocal_16) {
  if (var_1_10 == var_1_11) {
   var_1_57 = (var_1_58 - var_1_26);
  }
 }
 signed long int stepLocal_5 = var_1_43;
 if (stepLocal_5 != var_1_3) {
  var_1_19 = var_1_17;
 } else {
  var_1_19 = ((var_1_20 - 16) - ((50 + var_1_17) + var_1_29));
 }
 signed long int stepLocal_10 = var_1_26 - var_1_25;
 if (stepLocal_10 >= var_1_35) {
  var_1_36 = ((var_1_29 > (-32 * var_1_19)) || var_1_6);
 }
 if (var_1_35 > var_1_4) {
  var_1_8 = (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < 0 ) ? -((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) : ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))));
 }
 signed char stepLocal_8 = var_1_25;
 if (stepLocal_8 != var_1_61) {
  if (var_1_36) {
   var_1_28 = ((((var_1_24) > ((var_1_25 + var_1_17))) ? (var_1_24) : ((var_1_25 + var_1_17))));
  } else {
   var_1_28 = (((((-64 + var_1_27)) < (var_1_61)) ? ((-64 + var_1_27)) : (var_1_61)));
  }
 } else {
  var_1_28 = (var_1_25 + var_1_9);
 }
 unsigned short int stepLocal_11 = var_1_20;
 if (stepLocal_11 > (- var_1_57)) {
  var_1_42 = var_1_22;
 }
 signed long int stepLocal_13 = var_1_20 - var_1_17;
 if (stepLocal_13 < var_1_19) {
  var_1_47 = (var_1_13 + (var_1_12 - var_1_48));
 }
 signed long int stepLocal_15 = (((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42));
 signed long int stepLocal_14 = var_1_3;
 if (var_1_35 > stepLocal_15) {
  if ((var_1_1 / var_1_41) != stepLocal_14) {
   var_1_49 = (var_1_20 - var_1_41);
  }
 }
 if (var_1_6) {
  if ((var_1_19 > var_1_46) || (! var_1_33)) {
   var_1_52 = (((((var_1_17 + var_1_46)) < ((var_1_16 - var_1_24))) ? ((var_1_17 + var_1_46)) : ((var_1_16 - var_1_24))));
  } else {
   if (var_1_39 == var_1_29) {
    var_1_52 = var_1_26;
   } else {
    var_1_52 = ((((var_1_17) > (((((var_1_26) > (2)) ? (var_1_26) : (2))))) ? (var_1_17) : (((((var_1_26) > (2)) ? (var_1_26) : (2))))));
   }
  }
 } else {
  var_1_52 = (((((var_1_22) > (var_1_46)) ? (var_1_22) : (var_1_46))) + ((((var_1_26) < (var_1_17)) ? (var_1_26) : (var_1_17))));
 }
 if ((var_1_13 - var_1_12) <= var_1_47) {
  var_1_14 = (var_1_40 + var_1_9);
 }
 if (128u < (((((var_1_24 * var_1_23)) < (var_1_27)) ? ((var_1_24 * var_1_23)) : (var_1_27)))) {
  var_1_37 = ((((var_1_9) < (var_1_16)) ? (var_1_9) : (var_1_16)));
 } else {
  if (! ((var_1_11 * var_1_12) <= var_1_47)) {
   if (var_1_56) {
    if (var_1_6) {
     var_1_37 = (((((var_1_22 + var_1_21)) > ((((((var_1_39 - var_1_16)) > (var_1_20)) ? ((var_1_39 - var_1_16)) : (var_1_20))))) ? ((var_1_22 + var_1_21)) : ((((((var_1_39 - var_1_16)) > (var_1_20)) ? ((var_1_39 - var_1_16)) : (var_1_20))))));
    } else {
     var_1_37 = ((((var_1_19) > ((var_1_27 - ((((var_1_23) > (var_1_26)) ? (var_1_23) : (var_1_26)))))) ? (var_1_19) : ((var_1_27 - ((((var_1_23) > (var_1_26)) ? (var_1_23) : (var_1_26)))))));
    }
   } else {
    var_1_37 = (var_1_23 - var_1_39);
   }
  }
 }
 if (((- var_1_37) / var_1_22) > var_1_18) {
  if (var_1_10 <= ((((((((var_1_11) < (var_1_13)) ? (var_1_11) : (var_1_13)))) < (var_1_12)) ? (((((var_1_11) < (var_1_13)) ? (var_1_11) : (var_1_13)))) : (var_1_12)))) {
   var_1_50 = (((((var_1_13 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) > (var_1_48)) ? ((var_1_13 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : (var_1_48)));
  }
 }
 unsigned long int stepLocal_4 = var_1_35;
 signed long int stepLocal_3 = -50;
 if (var_1_50 > var_1_11) {
  if (var_1_11 >= var_1_13) {
   var_1_15 = (var_1_16 - var_1_17);
  } else {
   if (stepLocal_4 < var_1_9) {
    if ((1000 / (var_1_16 + var_1_18)) < stepLocal_3) {
     var_1_15 = var_1_17;
    }
   } else {
    var_1_15 = 0;
   }
  }
 } else {
  var_1_15 = var_1_17;
 }
 if (var_1_15 != var_1_61) {
  var_1_53 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 } else {
  var_1_53 = (var_1_23 - var_1_26);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -126);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 49150);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 62);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 1073741823);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 190);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 63);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 2147483647);
 assume_abort_if_not(var_1_58 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_57 = var_1_57;
}
int property(void) {
 return (((((((((((((((((((((((((((((((last_1_var_1_36 ? (var_1_1 == ((signed long int) (var_1_3 - var_1_4))) : (var_1_1 == ((signed long int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))))) && ((var_1_3 <= last_1_var_1_57) ? (var_1_5 == ((unsigned char) (var_1_6 && (last_1_var_1_32 || var_1_7)))) : ((var_1_3 == var_1_4) ? (var_1_5 == ((unsigned char) (var_1_7 && var_1_6))) : 1))) && ((var_1_35 > var_1_4) ? (var_1_8 == ((signed char) (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < 0 ) ? -((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) : ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))))) : 1)) && ((var_1_9 > var_1_3) ? (var_1_10 == ((float) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - (var_1_12 + var_1_13)))) : (var_1_10 == ((float) (var_1_13 - var_1_12))))) && (((var_1_13 - var_1_12) <= var_1_47) ? (var_1_14 == ((signed short int) (var_1_40 + var_1_9))) : 1)) && ((var_1_50 > var_1_11) ? ((var_1_11 >= var_1_13) ? (var_1_15 == ((unsigned char) (var_1_16 - var_1_17))) : ((var_1_35 < var_1_9) ? (((1000 / (var_1_16 + var_1_18)) < -50) ? (var_1_15 == ((unsigned char) var_1_17)) : 1) : (var_1_15 == ((unsigned char) 0)))) : (var_1_15 == ((unsigned char) var_1_17)))) && ((var_1_43 != var_1_3) ? (var_1_19 == ((unsigned short int) var_1_17)) : (var_1_19 == ((unsigned short int) ((var_1_20 - 16) - ((50 + var_1_17) + var_1_29)))))) && ((var_1_11 != (var_1_12 * (var_1_10 * var_1_13))) ? ((var_1_16 <= (var_1_18 & ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (var_1_32 ? (var_1_21 == ((signed char) var_1_9)) : (var_1_21 == ((signed char) 100))) : ((var_1_10 > var_1_13) ? (var_1_21 == ((signed char) ((var_1_22 - var_1_23) - 10))) : 1)) : ((var_1_3 > var_1_4) ? (var_1_21 == ((signed char) ((((((var_1_23 + var_1_24)) < (var_1_22)) ? ((var_1_23 + var_1_24)) : (var_1_22))) - var_1_25))) : (var_1_21 == ((signed char) (var_1_23 + (var_1_24 - ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))))))))) && ((var_1_25 != var_1_61) ? (var_1_36 ? (var_1_28 == ((signed short int) ((((var_1_24) > ((var_1_25 + var_1_17))) ? (var_1_24) : ((var_1_25 + var_1_17)))))) : (var_1_28 == ((signed short int) (((((-64 + var_1_27)) < (var_1_61)) ? ((-64 + var_1_27)) : (var_1_61)))))) : (var_1_28 == ((signed short int) (var_1_25 + var_1_9))))) && (var_1_6 ? ((var_1_16 <= ((((var_1_60) > (var_1_20)) ? (var_1_60) : (var_1_20)))) ? (var_1_29 == ((unsigned long int) (((((((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))) + var_1_18)) > (10u)) ? ((((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))) + var_1_18)) : (10u))))) : (var_1_29 == ((unsigned long int) ((var_1_30 - var_1_18) + (((((var_1_17 + var_1_25)) < (var_1_26)) ? ((var_1_17 + var_1_25)) : (var_1_26))))))) : (var_1_29 == ((unsigned long int) ((var_1_23 + 64u) + ((((last_1_var_1_29) < (var_1_16)) ? (last_1_var_1_29) : (var_1_16)))))))) && (var_1_7 ? (var_1_31 == ((unsigned char) var_1_26)) : (var_1_31 == ((unsigned char) ((((var_1_24) > (((var_1_23 + var_1_27) + var_1_26))) ? (var_1_24) : (((var_1_23 + var_1_27) + var_1_26)))))))) && ((! var_1_5) ? (var_1_32 == ((unsigned char) (var_1_33 || var_1_34))) : 1)) && (((var_1_4 + (var_1_30 / var_1_22)) <= (var_1_29 * var_1_18)) ? (var_1_35 == ((unsigned long int) 128u)) : 1)) && (((var_1_26 - var_1_25) >= var_1_35) ? (var_1_36 == ((unsigned char) ((var_1_29 > (-32 * var_1_19)) || var_1_6))) : 1)) && ((128u < (((((var_1_24 * var_1_23)) < (var_1_27)) ? ((var_1_24 * var_1_23)) : (var_1_27)))) ? (var_1_37 == ((signed short int) ((((var_1_9) < (var_1_16)) ? (var_1_9) : (var_1_16))))) : ((! ((var_1_11 * var_1_12) <= var_1_47)) ? (var_1_56 ? (var_1_6 ? (var_1_37 == ((signed short int) (((((var_1_22 + var_1_21)) > ((((((var_1_39 - var_1_16)) > (var_1_20)) ? ((var_1_39 - var_1_16)) : (var_1_20))))) ? ((var_1_22 + var_1_21)) : ((((((var_1_39 - var_1_16)) > (var_1_20)) ? ((var_1_39 - var_1_16)) : (var_1_20)))))))) : (var_1_37 == ((signed short int) ((((var_1_19) > ((var_1_27 - ((((var_1_23) > (var_1_26)) ? (var_1_23) : (var_1_26)))))) ? (var_1_19) : ((var_1_27 - ((((var_1_23) > (var_1_26)) ? (var_1_23) : (var_1_26)))))))))) : (var_1_37 == ((signed short int) (var_1_23 - var_1_39)))) : 1))) && (var_1_34 ? (var_1_39 == ((unsigned char) (var_1_16 - var_1_23))) : 1)) && (var_1_56 ? (var_1_40 == ((unsigned char) (((((var_1_41 - var_1_24) < 0 ) ? -(var_1_41 - var_1_24) : (var_1_41 - var_1_24))) - (var_1_26 + var_1_27)))) : (var_1_40 == ((unsigned char) ((((var_1_23) > (var_1_41)) ? (var_1_23) : (var_1_41))))))) && ((var_1_20 > (- var_1_57)) ? (var_1_42 == ((unsigned char) var_1_22)) : 1)) && ((var_1_22 != var_1_1) ? (var_1_43 == ((signed long int) (50 - var_1_1))) : 1)) && (var_1_44 == ((signed short int) (var_1_35 + var_1_22)))) && ((var_1_29 >= var_1_27) ? (var_1_45 == ((unsigned char) (var_1_41 - ((((var_1_24) > (var_1_26)) ? (var_1_24) : (var_1_26)))))) : (var_1_45 == ((unsigned char) ((var_1_46 - ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))) + var_1_25))))) && (((var_1_20 - var_1_17) < var_1_19) ? (var_1_47 == ((double) (var_1_13 + (var_1_12 - var_1_48)))) : 1)) && ((var_1_35 > ((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42)))) ? (((var_1_1 / var_1_41) != var_1_3) ? (var_1_49 == ((unsigned short int) (var_1_20 - var_1_41))) : 1) : 1)) && ((((- var_1_37) / var_1_22) > var_1_18) ? ((var_1_10 <= ((((((((var_1_11) < (var_1_13)) ? (var_1_11) : (var_1_13)))) < (var_1_12)) ? (((((var_1_11) < (var_1_13)) ? (var_1_11) : (var_1_13)))) : (var_1_12)))) ? (var_1_50 == ((double) (((((var_1_13 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) > (var_1_48)) ? ((var_1_13 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : (var_1_48))))) : 1) : 1)) && (var_1_6 ? (((var_1_19 > var_1_46) || (! var_1_33)) ? (var_1_52 == ((unsigned char) (((((var_1_17 + var_1_46)) < ((var_1_16 - var_1_24))) ? ((var_1_17 + var_1_46)) : ((var_1_16 - var_1_24)))))) : ((var_1_39 == var_1_29) ? (var_1_52 == ((unsigned char) var_1_26)) : (var_1_52 == ((unsigned char) ((((var_1_17) > (((((var_1_26) > (2)) ? (var_1_26) : (2))))) ? (var_1_17) : (((((var_1_26) > (2)) ? (var_1_26) : (2)))))))))) : (var_1_52 == ((unsigned char) (((((var_1_22) > (var_1_46)) ? (var_1_22) : (var_1_46))) + ((((var_1_26) < (var_1_17)) ? (var_1_26) : (var_1_17)))))))) && ((var_1_15 != var_1_61) ? (var_1_53 == ((signed char) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) : (var_1_53 == ((signed char) (var_1_23 - var_1_26))))) && (var_1_32 ? (var_1_55 == ((signed char) var_1_26)) : (var_1_55 == ((signed char) var_1_9)))) && (var_1_56 == ((unsigned char) var_1_34))) && (((var_1_46 << var_1_29) > var_1_4) ? ((var_1_10 == var_1_11) ? (var_1_57 == ((unsigned long int) (var_1_58 - var_1_26))) : 1) : 1)) && (var_1_59 == ((unsigned char) var_1_27))) && (var_1_60 == ((signed short int) var_1_17))) && (var_1_61 == ((signed short int) var_1_9))
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
