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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 0;
float var_1_3 = -0.1;
float var_1_4 = 127.25;
float var_1_5 = 2.75;
float var_1_6 = 255.25;
signed char var_1_7 = 25;
signed char var_1_8 = 16;
signed char var_1_9 = -4;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 53860;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 8;
unsigned long int var_1_16 = 64;
unsigned short int var_1_17 = 100;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 100;
unsigned short int var_1_20 = 57356;
unsigned char var_1_21 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 2;
unsigned char var_1_31 = 25;
unsigned char var_1_32 = 10;
signed long int var_1_33 = -256;
signed long int var_1_34 = -4;
signed long int var_1_35 = -8;
signed long int var_1_36 = 500;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 4;
signed char var_1_40 = 32;
signed char var_1_41 = 10;
signed char var_1_42 = 1;
signed char var_1_43 = -8;
signed short int var_1_44 = -256;
unsigned short int var_1_45 = 256;
double var_1_46 = 9.85;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
signed char var_1_50 = -16;
float var_1_51 = 128.5;
signed char var_1_52 = 2;
signed char var_1_53 = 16;
signed char var_1_54 = 0;
unsigned long int var_1_55 = 50;
unsigned long int var_1_56 = 8;
unsigned long int var_1_57 = 3260334368;
signed long int var_1_58 = -500;
unsigned long int var_1_59 = 32;
unsigned short int var_1_60 = 128;
signed short int var_1_61 = -10;
unsigned long int last_1_var_1_16 = 64;
unsigned char last_1_var_1_21 = 0;
signed long int last_1_var_1_33 = -256;
signed long int last_1_var_1_34 = -4;
unsigned char last_1_var_1_37 = 1;
signed short int last_1_var_1_44 = -256;
unsigned char last_1_var_1_47 = 0;
unsigned long int last_1_var_1_55 = 50;
unsigned long int last_1_var_1_59 = 32;
signed short int last_1_var_1_61 = -10;
void initially(void) {
}
void step(void) {
 signed char stepLocal_0 = var_1_9;
 if ((var_1_13 + var_1_8) >= stepLocal_0) {
  if (last_1_var_1_21) {
   var_1_21 = (last_1_var_1_21 || (last_1_var_1_37 || (last_1_var_1_47 || var_1_25)));
  } else {
   if (! last_1_var_1_21) {
    var_1_21 = (var_1_26 || var_1_27);
   }
  }
 } else {
  var_1_21 = var_1_27;
 }
 if (var_1_5 <= var_1_4) {
  var_1_47 = (var_1_48 && ((var_1_41 != var_1_32) || var_1_25));
 } else {
  var_1_47 = ((var_1_21 || var_1_25) && (var_1_48 && var_1_49));
 }
 unsigned char stepLocal_6 = var_1_18;
 signed long int stepLocal_5 = ((((last_1_var_1_33) < (var_1_31)) ? (last_1_var_1_33) : (var_1_31))) / var_1_36;
 if (var_1_25) {
  var_1_35 = ((((((((last_1_var_1_16) < (var_1_15)) ? (last_1_var_1_16) : (var_1_15)))) > (last_1_var_1_33)) ? (((((last_1_var_1_16) < (var_1_15)) ? (last_1_var_1_16) : (var_1_15)))) : (last_1_var_1_33)));
 } else {
  if (-128 <= stepLocal_6) {
   if (last_1_var_1_34 == stepLocal_5) {
    var_1_35 = (((((var_1_14 - 50) + var_1_15) < 0 ) ? -((var_1_14 - 50) + var_1_15) : ((var_1_14 - 50) + var_1_15)));
   }
  } else {
   if (var_1_27) {
    var_1_35 = ((((-64) < (last_1_var_1_33)) ? (-64) : (last_1_var_1_33)));
   }
  }
 }
 if ((- var_1_3) <= (var_1_4 - var_1_5)) {
  if (var_1_3 >= (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))) / var_1_6)) {
   var_1_1 = (((((var_1_7 - var_1_8)) < (var_1_9)) ? ((var_1_7 - var_1_8)) : (var_1_9)));
  } else {
   var_1_1 = ((((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) < (var_1_9)) ? (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) : (var_1_9)));
  }
 }
 if (var_1_4 < 64.4f) {
  var_1_10 = (((((((((((8) > (var_1_8)) ? (8) : (var_1_8))) < 0 ) ? -((((8) > (var_1_8)) ? (8) : (var_1_8))) : ((((8) > (var_1_8)) ? (8) : (var_1_8)))))) > (var_1_11)) ? ((((((((8) > (var_1_8)) ? (8) : (var_1_8))) < 0 ) ? -((((8) > (var_1_8)) ? (8) : (var_1_8))) : ((((8) > (var_1_8)) ? (8) : (var_1_8)))))) : (var_1_11)));
 }
 if (var_1_7 < (~ (var_1_8 - var_1_15))) {
  var_1_16 = ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)));
 } else {
  var_1_16 = ((((last_1_var_1_16) < (((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))))) ? (last_1_var_1_16) : (((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))))));
 }
 if (var_1_3 != var_1_5) {
  var_1_37 = var_1_25;
 } else {
  var_1_37 = (! var_1_25);
 }
 unsigned short int stepLocal_7 = var_1_20;
 if (var_1_11 < stepLocal_7) {
  var_1_38 = var_1_26;
 }
 unsigned char stepLocal_10 = var_1_25;
 if (stepLocal_10 || var_1_27) {
  if (var_1_26) {
   var_1_44 = ((((var_1_11) < (((last_1_var_1_44 - var_1_31) + var_1_7))) ? (var_1_11) : (((last_1_var_1_44 - var_1_31) + var_1_7))));
  } else {
   var_1_44 = ((var_1_18 + ((((var_1_11) > (var_1_29)) ? (var_1_11) : (var_1_29)))) - var_1_14);
  }
 }
 if (var_1_21) {
  var_1_54 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 }
 signed long int stepLocal_4 = var_1_35;
 unsigned short int stepLocal_3 = var_1_20;
 if (var_1_9 <= stepLocal_3) {
  var_1_34 = ((((((((((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) < (var_1_11)) ? (((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) : (var_1_11)))) < (var_1_13)) ? (((((((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) < (var_1_11)) ? (((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) : (var_1_11)))) : (var_1_13)));
 } else {
  if (var_1_14 < stepLocal_4) {
   var_1_34 = (var_1_20 + (var_1_30 + var_1_13));
  }
 }
 unsigned char stepLocal_13 = var_1_14;
 if (stepLocal_13 != (last_1_var_1_59 ^ var_1_35)) {
  if (var_1_26) {
   if (var_1_37) {
    var_1_59 = var_1_19;
   } else {
    var_1_59 = var_1_30;
   }
  }
 } else {
  var_1_59 = var_1_10;
 }
 unsigned long int stepLocal_1 = var_1_59;
 if (var_1_13 == stepLocal_1) {
  var_1_28 = (var_1_29 - var_1_8);
 } else {
  var_1_28 = (var_1_15 + (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) + var_1_32));
 }
 if ((- var_1_8) < var_1_59) {
  if (var_1_27) {
   var_1_39 = (((((var_1_31 + 4)) > (var_1_29)) ? ((var_1_31 + 4)) : (var_1_29)));
  } else {
   var_1_39 = (((((var_1_32 + var_1_31)) < (var_1_29)) ? ((var_1_32 + var_1_31)) : (var_1_29)));
  }
 } else {
  var_1_39 = ((((var_1_15 + var_1_19) < 0 ) ? -(var_1_15 + var_1_19) : (var_1_15 + var_1_19)));
 }
 if (var_1_38) {
  var_1_61 = ((((((((var_1_10) < (var_1_39)) ? (var_1_10) : (var_1_39)))) < (last_1_var_1_61)) ? (((((var_1_10) < (var_1_39)) ? (var_1_10) : (var_1_39)))) : (last_1_var_1_61)));
 }
 unsigned char stepLocal_2 = var_1_38;
 if ((var_1_6 > ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) && stepLocal_2) {
  if (! var_1_37) {
   var_1_33 = ((((var_1_59 + (var_1_35 + var_1_44)) < 0 ) ? -(var_1_59 + (var_1_35 + var_1_44)) : (var_1_59 + (var_1_35 + var_1_44))));
  }
 } else {
  if (! var_1_27) {
   if (! var_1_25) {
    var_1_33 = var_1_59;
   } else {
    var_1_33 = (var_1_19 - var_1_32);
   }
  } else {
   var_1_33 = (-10 + var_1_31);
  }
 }
 signed long int stepLocal_9 = (var_1_61 + var_1_18) * var_1_32;
 unsigned char stepLocal_8 = -5 >= var_1_19;
 if (stepLocal_8 || var_1_27) {
  if (stepLocal_9 <= var_1_11) {
   var_1_40 = var_1_9;
  } else {
   var_1_40 = (((((var_1_32) > ((var_1_41 - var_1_42))) ? (var_1_32) : ((var_1_41 - var_1_42)))) + var_1_43);
  }
 } else {
  var_1_40 = ((((var_1_43) > (100)) ? (var_1_43) : (100)));
 }
 if (var_1_61 >= (((((var_1_15) > (last_1_var_1_55)) ? (var_1_15) : (last_1_var_1_55))) >> var_1_56)) {
  var_1_55 = (var_1_57 - 8u);
 }
 unsigned short int stepLocal_14 = var_1_13;
 if (((var_1_19 * 128) + var_1_55) == stepLocal_14) {
  var_1_60 = var_1_29;
 }
 if (var_1_55 < ((var_1_18 + var_1_19) - var_1_15)) {
  var_1_17 = (((((var_1_20 - var_1_19) - var_1_11) < 0 ) ? -((var_1_20 - var_1_19) - var_1_11) : ((var_1_20 - var_1_19) - var_1_11)));
 }
 if (5.88 > ((((var_1_4) > ((var_1_5 - var_1_46))) ? (var_1_4) : ((var_1_5 - var_1_46))))) {
  var_1_45 = (var_1_13 - var_1_11);
 } else {
  if (var_1_31 > var_1_55) {
   var_1_45 = (var_1_13 - (var_1_19 + var_1_8));
  } else {
   var_1_45 = (((((var_1_13 - var_1_41)) > (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? ((var_1_13 - var_1_41)) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))));
  }
 }
 signed char stepLocal_11 = var_1_43;
 if (((((var_1_6 + var_1_5) < 0 ) ? -(var_1_6 + var_1_5) : (var_1_6 + var_1_5))) <= (var_1_3 / var_1_51)) {
  if ((var_1_13 | (var_1_45 - var_1_29)) > stepLocal_11) {
   var_1_50 = var_1_43;
  } else {
   var_1_50 = (((((var_1_32 + (var_1_52 + var_1_53))) > ((-1 - (var_1_41 + var_1_42)))) ? ((var_1_32 + (var_1_52 + var_1_53))) : ((-1 - (var_1_41 + var_1_42)))));
  }
 } else {
  var_1_50 = ((((var_1_30) < ((((((var_1_7 - var_1_41)) > (var_1_53)) ? ((var_1_7 - var_1_41)) : (var_1_53))))) ? (var_1_30) : ((((((var_1_7 - var_1_41)) > (var_1_53)) ? ((var_1_7 - var_1_41)) : (var_1_53))))));
 }
 unsigned long int stepLocal_12 = var_1_59 / var_1_15;
 if (stepLocal_12 > var_1_17) {
  var_1_58 = ((((var_1_52) < (var_1_61)) ? (var_1_52) : (var_1_61)));
 } else {
  var_1_58 = (((((var_1_32) > (var_1_8)) ? (var_1_32) : (var_1_8))) - ((((var_1_19) < (var_1_30)) ? (var_1_19) : (var_1_30))));
 }
 if (! var_1_47) {
  var_1_12 = (((((var_1_13 - var_1_11)) < ((var_1_8 + var_1_58))) ? ((var_1_13 - var_1_11)) : ((var_1_8 + var_1_58))));
 } else {
  if (var_1_11 > ((128 - var_1_8) / (var_1_14 + var_1_15))) {
   if (((- var_1_15) / 100) > (var_1_28 / ((((50) > (-1000000000)) ? (50) : (-1000000000))))) {
    var_1_12 = 8;
   }
  } else {
   var_1_12 = var_1_14;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 128);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 63);
 assume_abort_if_not(var_1_18 <= 128);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 64);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 49150);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 64);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 64);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483648);
 assume_abort_if_not(var_1_36 <= 2147483647);
 assume_abort_if_not(var_1_36 != 0);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -63);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 1);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 assume_abort_if_not(var_1_51 != 0.0F);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -31);
 assume_abort_if_not(var_1_52 <= 32);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -31);
 assume_abort_if_not(var_1_53 <= 31);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 30);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return (((((((((((((((((((((((((- var_1_3) <= (var_1_4 - var_1_5)) ? ((var_1_3 >= (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))) / var_1_6)) ? (var_1_1 == ((signed char) (((((var_1_7 - var_1_8)) < (var_1_9)) ? ((var_1_7 - var_1_8)) : (var_1_9))))) : (var_1_1 == ((signed char) ((((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) < (var_1_9)) ? (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) : (var_1_9)))))) : 1) && ((var_1_4 < 64.4f) ? (var_1_10 == ((unsigned char) (((((((((((8) > (var_1_8)) ? (8) : (var_1_8))) < 0 ) ? -((((8) > (var_1_8)) ? (8) : (var_1_8))) : ((((8) > (var_1_8)) ? (8) : (var_1_8)))))) > (var_1_11)) ? ((((((((8) > (var_1_8)) ? (8) : (var_1_8))) < 0 ) ? -((((8) > (var_1_8)) ? (8) : (var_1_8))) : ((((8) > (var_1_8)) ? (8) : (var_1_8)))))) : (var_1_11))))) : 1)) && ((! var_1_47) ? (var_1_12 == ((unsigned short int) (((((var_1_13 - var_1_11)) < ((var_1_8 + var_1_58))) ? ((var_1_13 - var_1_11)) : ((var_1_8 + var_1_58)))))) : ((var_1_11 > ((128 - var_1_8) / (var_1_14 + var_1_15))) ? ((((- var_1_15) / 100) > (var_1_28 / ((((50) > (-1000000000)) ? (50) : (-1000000000))))) ? (var_1_12 == ((unsigned short int) 8)) : 1) : (var_1_12 == ((unsigned short int) var_1_14))))) && ((var_1_7 < (~ (var_1_8 - var_1_15))) ? (var_1_16 == ((unsigned long int) ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) : (var_1_16 == ((unsigned long int) ((((last_1_var_1_16) < (((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))))) ? (last_1_var_1_16) : (((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11)))))))))) && ((var_1_55 < ((var_1_18 + var_1_19) - var_1_15)) ? (var_1_17 == ((unsigned short int) (((((var_1_20 - var_1_19) - var_1_11) < 0 ) ? -((var_1_20 - var_1_19) - var_1_11) : ((var_1_20 - var_1_19) - var_1_11))))) : 1)) && (((var_1_13 + var_1_8) >= var_1_9) ? (last_1_var_1_21 ? (var_1_21 == ((unsigned char) (last_1_var_1_21 || (last_1_var_1_37 || (last_1_var_1_47 || var_1_25))))) : ((! last_1_var_1_21) ? (var_1_21 == ((unsigned char) (var_1_26 || var_1_27))) : 1)) : (var_1_21 == ((unsigned char) var_1_27)))) && ((var_1_13 == var_1_59) ? (var_1_28 == ((unsigned char) (var_1_29 - var_1_8))) : (var_1_28 == ((unsigned char) (var_1_15 + (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) + var_1_32)))))) && (((var_1_6 > ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) && var_1_38) ? ((! var_1_37) ? (var_1_33 == ((signed long int) ((((var_1_59 + (var_1_35 + var_1_44)) < 0 ) ? -(var_1_59 + (var_1_35 + var_1_44)) : (var_1_59 + (var_1_35 + var_1_44)))))) : 1) : ((! var_1_27) ? ((! var_1_25) ? (var_1_33 == ((signed long int) var_1_59)) : (var_1_33 == ((signed long int) (var_1_19 - var_1_32)))) : (var_1_33 == ((signed long int) (-10 + var_1_31)))))) && ((var_1_9 <= var_1_20) ? (var_1_34 == ((signed long int) ((((((((((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) < (var_1_11)) ? (((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) : (var_1_11)))) < (var_1_13)) ? (((((((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) < (var_1_11)) ? (((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15)))) : (var_1_11)))) : (var_1_13))))) : ((var_1_14 < var_1_35) ? (var_1_34 == ((signed long int) (var_1_20 + (var_1_30 + var_1_13)))) : 1))) && (var_1_25 ? (var_1_35 == ((signed long int) ((((((((last_1_var_1_16) < (var_1_15)) ? (last_1_var_1_16) : (var_1_15)))) > (last_1_var_1_33)) ? (((((last_1_var_1_16) < (var_1_15)) ? (last_1_var_1_16) : (var_1_15)))) : (last_1_var_1_33))))) : ((-128 <= var_1_18) ? ((last_1_var_1_34 == (((((last_1_var_1_33) < (var_1_31)) ? (last_1_var_1_33) : (var_1_31))) / var_1_36)) ? (var_1_35 == ((signed long int) (((((var_1_14 - 50) + var_1_15) < 0 ) ? -((var_1_14 - 50) + var_1_15) : ((var_1_14 - 50) + var_1_15))))) : 1) : (var_1_27 ? (var_1_35 == ((signed long int) ((((-64) < (last_1_var_1_33)) ? (-64) : (last_1_var_1_33))))) : 1)))) && ((var_1_3 != var_1_5) ? (var_1_37 == ((unsigned char) var_1_25)) : (var_1_37 == ((unsigned char) (! var_1_25))))) && ((var_1_11 < var_1_20) ? (var_1_38 == ((unsigned char) var_1_26)) : 1)) && (((- var_1_8) < var_1_59) ? (var_1_27 ? (var_1_39 == ((unsigned char) (((((var_1_31 + 4)) > (var_1_29)) ? ((var_1_31 + 4)) : (var_1_29))))) : (var_1_39 == ((unsigned char) (((((var_1_32 + var_1_31)) < (var_1_29)) ? ((var_1_32 + var_1_31)) : (var_1_29)))))) : (var_1_39 == ((unsigned char) ((((var_1_15 + var_1_19) < 0 ) ? -(var_1_15 + var_1_19) : (var_1_15 + var_1_19))))))) && (((-5 >= var_1_19) || var_1_27) ? ((((var_1_61 + var_1_18) * var_1_32) <= var_1_11) ? (var_1_40 == ((signed char) var_1_9)) : (var_1_40 == ((signed char) (((((var_1_32) > ((var_1_41 - var_1_42))) ? (var_1_32) : ((var_1_41 - var_1_42)))) + var_1_43)))) : (var_1_40 == ((signed char) ((((var_1_43) > (100)) ? (var_1_43) : (100))))))) && ((var_1_25 || var_1_27) ? (var_1_26 ? (var_1_44 == ((signed short int) ((((var_1_11) < (((last_1_var_1_44 - var_1_31) + var_1_7))) ? (var_1_11) : (((last_1_var_1_44 - var_1_31) + var_1_7)))))) : (var_1_44 == ((signed short int) ((var_1_18 + ((((var_1_11) > (var_1_29)) ? (var_1_11) : (var_1_29)))) - var_1_14)))) : 1)) && ((5.88 > ((((var_1_4) > ((var_1_5 - var_1_46))) ? (var_1_4) : ((var_1_5 - var_1_46))))) ? (var_1_45 == ((unsigned short int) (var_1_13 - var_1_11))) : ((var_1_31 > var_1_55) ? (var_1_45 == ((unsigned short int) (var_1_13 - (var_1_19 + var_1_8)))) : (var_1_45 == ((unsigned short int) (((((var_1_13 - var_1_41)) > (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? ((var_1_13 - var_1_41)) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))))))))) && ((var_1_5 <= var_1_4) ? (var_1_47 == ((unsigned char) (var_1_48 && ((var_1_41 != var_1_32) || var_1_25)))) : (var_1_47 == ((unsigned char) ((var_1_21 || var_1_25) && (var_1_48 && var_1_49)))))) && ((((((var_1_6 + var_1_5) < 0 ) ? -(var_1_6 + var_1_5) : (var_1_6 + var_1_5))) <= (var_1_3 / var_1_51)) ? (((var_1_13 | (var_1_45 - var_1_29)) > var_1_43) ? (var_1_50 == ((signed char) var_1_43)) : (var_1_50 == ((signed char) (((((var_1_32 + (var_1_52 + var_1_53))) > ((-1 - (var_1_41 + var_1_42)))) ? ((var_1_32 + (var_1_52 + var_1_53))) : ((-1 - (var_1_41 + var_1_42)))))))) : (var_1_50 == ((signed char) ((((var_1_30) < ((((((var_1_7 - var_1_41)) > (var_1_53)) ? ((var_1_7 - var_1_41)) : (var_1_53))))) ? (var_1_30) : ((((((var_1_7 - var_1_41)) > (var_1_53)) ? ((var_1_7 - var_1_41)) : (var_1_53)))))))))) && (var_1_21 ? (var_1_54 == ((signed char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : 1)) && ((var_1_61 >= (((((var_1_15) > (last_1_var_1_55)) ? (var_1_15) : (last_1_var_1_55))) >> var_1_56)) ? (var_1_55 == ((unsigned long int) (var_1_57 - 8u))) : 1)) && (((var_1_59 / var_1_15) > var_1_17) ? (var_1_58 == ((signed long int) ((((var_1_52) < (var_1_61)) ? (var_1_52) : (var_1_61))))) : (var_1_58 == ((signed long int) (((((var_1_32) > (var_1_8)) ? (var_1_32) : (var_1_8))) - ((((var_1_19) < (var_1_30)) ? (var_1_19) : (var_1_30)))))))) && ((var_1_14 != (last_1_var_1_59 ^ var_1_35)) ? (var_1_26 ? (var_1_37 ? (var_1_59 == ((unsigned long int) var_1_19)) : (var_1_59 == ((unsigned long int) var_1_30))) : 1) : (var_1_59 == ((unsigned long int) var_1_10)))) && ((((var_1_19 * 128) + var_1_55) == var_1_13) ? (var_1_60 == ((unsigned short int) var_1_29)) : 1)) && (var_1_38 ? (var_1_61 == ((signed short int) ((((((((var_1_10) < (var_1_39)) ? (var_1_10) : (var_1_39)))) < (last_1_var_1_61)) ? (((((var_1_10) < (var_1_39)) ? (var_1_10) : (var_1_39)))) : (last_1_var_1_61))))) : 1)
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
