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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169Amount250.c", 13, "reach_error"); }
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
signed long int var_1_2 = 50;
signed long int var_1_3 = 256;
signed long int var_1_4 = 16;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
float var_1_7 = 99.5;
signed long int var_1_8 = 5;
float var_1_9 = 499.6;
float var_1_10 = 1.1;
float var_1_11 = 1.8;
float var_1_12 = 100.6;
float var_1_13 = 200.4;
float var_1_14 = 256.5;
float var_1_15 = 10.5;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed long int var_1_19 = 10;
unsigned short int var_1_20 = 2;
unsigned short int var_1_21 = 56821;
unsigned short int var_1_22 = 256;
unsigned char var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 8;
signed char var_1_30 = 5;
signed char var_1_31 = -32;
signed char var_1_32 = -2;
unsigned short int var_1_33 = 500;
float var_1_34 = 2.6;
float var_1_35 = 32.125;
unsigned long int var_1_36 = 100;
unsigned long int var_1_37 = 1203069193;
unsigned long int var_1_38 = 10000000;
float var_1_39 = 63.2;
float var_1_40 = 16.5;
float var_1_41 = -0.95;
unsigned long int var_1_42 = 3652908486;
float var_1_43 = 25.75;
float var_1_44 = 16.5;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 25;
signed char var_1_47 = 4;
unsigned char var_1_48 = 100;
unsigned char var_1_49 = 100;
unsigned long int var_1_50 = 1;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 25;
unsigned char var_1_53 = 200;
double var_1_54 = 255.2;
unsigned char var_1_55 = 1;
unsigned short int var_1_56 = 256;
signed long int var_1_57 = -2;
signed short int var_1_58 = -4;
unsigned long int var_1_59 = 8;
unsigned short int var_1_61 = 10;
unsigned short int var_1_62 = 30743;
unsigned short int var_1_63 = 10000;
unsigned char var_1_64 = 0;
double var_1_65 = 10000000000000.8;
unsigned long int var_1_66 = 256;
signed char var_1_67 = -10;
float var_1_68 = 255.85;
float last_1_var_1_35 = 32.125;
unsigned long int last_1_var_1_36 = 100;
unsigned long int last_1_var_1_59 = 8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_12 = var_1_38;
 signed long int stepLocal_11 = ((((var_1_27) > (var_1_51)) ? (var_1_27) : (var_1_51))) - (var_1_48 - var_1_29);
 if (stepLocal_12 >= ((((last_1_var_1_59) > ((- var_1_37))) ? (last_1_var_1_59) : ((- var_1_37))))) {
  if (var_1_24 >= stepLocal_11) {
   var_1_50 = ((4076336116u - last_1_var_1_36) - var_1_27);
  }
 } else {
  var_1_50 = ((((((var_1_27 + var_1_49) + var_1_25)) > (((((((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) < (var_1_48)) ? (((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) : (var_1_48))))) ? (((var_1_27 + var_1_49) + var_1_25)) : (((((((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) < (var_1_48)) ? (((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) : (var_1_48))))));
 }
 unsigned short int stepLocal_16 = var_1_22;
 if (32.7f != last_1_var_1_35) {
  var_1_59 = var_1_21;
 } else {
  if (last_1_var_1_36 > stepLocal_16) {
   var_1_59 = ((((64u) < (var_1_53)) ? (64u) : (var_1_53)));
  }
 }
 if ((10 * -16) == ((50 + var_1_4) % var_1_21)) {
  var_1_35 = ((((var_1_12) < ((9999999.4f + var_1_15))) ? (var_1_12) : ((9999999.4f + var_1_15))));
 } else {
  if (var_1_59 != (var_1_3 | (-1 + var_1_28))) {
   var_1_35 = (((((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) < 0 ) ? -((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) : ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)))));
  } else {
   var_1_35 = (var_1_14 + var_1_12);
  }
 }
 signed long int stepLocal_0 = var_1_2 - (var_1_3 + var_1_4);
 if (1 < stepLocal_0) {
  var_1_1 = (! (var_1_5 || var_1_6));
 }
 signed long int stepLocal_1 = (var_1_3 - var_1_8) + var_1_2;
 if (var_1_4 > stepLocal_1) {
  if (! var_1_5) {
   var_1_7 = var_1_9;
  }
 } else {
  var_1_7 = ((((((4.625f) > (var_1_10)) ? (4.625f) : (var_1_10))) - (var_1_11 + var_1_12)) + (var_1_13 + (var_1_14 - var_1_15)));
 }
 signed long int stepLocal_2 = var_1_2;
 if (127.725f < var_1_13) {
  if (var_1_4 < stepLocal_2) {
   var_1_16 = (! (var_1_17 && var_1_18));
  } else {
   if (var_1_10 < (var_1_14 * var_1_12)) {
    var_1_16 = ((var_1_15 >= (var_1_14 + 7.5f)) || var_1_17);
   } else {
    var_1_16 = var_1_18;
   }
  }
 } else {
  var_1_16 = var_1_5;
 }
 if (var_1_6) {
  var_1_19 = ((((-2) > (var_1_4)) ? (-2) : (var_1_4)));
 }
 unsigned char stepLocal_6 = var_1_18;
 signed long int stepLocal_5 = (var_1_19 | var_1_22) | var_1_4;
 unsigned char stepLocal_4 = var_1_1;
 if (var_1_5 || stepLocal_6) {
  if (stepLocal_5 > var_1_26) {
   if (stepLocal_4 && var_1_6) {
    var_1_30 = var_1_31;
   }
  }
 }
 unsigned char stepLocal_7 = var_1_6;
 if (var_1_18 && stepLocal_7) {
  var_1_33 = 10;
 }
 if (var_1_1) {
  var_1_34 = (((((((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14)))) < (var_1_12)) ? (((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_12))) + var_1_11);
 }
 var_1_39 = ((((var_1_12) < (var_1_40)) ? (var_1_12) : (var_1_40)));
 unsigned long int stepLocal_8 = var_1_42 - var_1_8;
 if (var_1_37 <= stepLocal_8) {
  var_1_41 = (var_1_13 + var_1_14);
 }
 if (var_1_17 || (var_1_41 == var_1_15)) {
  var_1_43 = (var_1_44 - (var_1_10 + var_1_14));
 }
 if (((var_1_29 % var_1_47) & 32) == var_1_22) {
  if ((- var_1_44) < var_1_39) {
   var_1_46 = var_1_27;
  } else {
   var_1_46 = (((var_1_48 + var_1_49) - var_1_29) - var_1_28);
  }
 }
 unsigned char stepLocal_13 = var_1_48;
 if ((5u & (var_1_29 + var_1_4)) >= stepLocal_13) {
  var_1_52 = (var_1_27 - var_1_29);
 } else {
  if (var_1_17) {
   var_1_52 = ((((((var_1_49 + var_1_48)) > ((var_1_53 - 32))) ? ((var_1_49 + var_1_48)) : ((var_1_53 - 32)))) - 50);
  } else {
   var_1_52 = (((((((((100) < 0 ) ? -(100) : (100))) + var_1_28)) > (var_1_29)) ? ((((((100) < 0 ) ? -(100) : (100))) + var_1_28)) : (var_1_29)));
  }
 }
 var_1_54 = var_1_10;
 var_1_56 = var_1_49;
 signed long int stepLocal_18 = var_1_4;
 signed long int stepLocal_17 = var_1_8;
 if (var_1_10 >= var_1_41) {
  if ((- var_1_53) < stepLocal_18) {
   if ((var_1_24 ^ (var_1_42 - var_1_56)) == stepLocal_17) {
    var_1_64 = var_1_17;
   } else {
    var_1_64 = var_1_18;
   }
  }
 }
 var_1_65 = var_1_13;
 if (var_1_17) {
  var_1_66 = var_1_25;
 } else {
  var_1_66 = var_1_51;
 }
 var_1_68 = var_1_9;
 if (((var_1_37 * var_1_50) + var_1_3) != ((((var_1_56) > (var_1_59)) ? (var_1_56) : (var_1_59)))) {
  var_1_55 = (var_1_16 && var_1_5);
 } else {
  var_1_55 = (! var_1_6);
 }
 if (var_1_15 == (- var_1_43)) {
  var_1_20 = (var_1_21 - var_1_22);
 }
 unsigned char stepLocal_3 = var_1_6;
 if (stepLocal_3 || ((var_1_21 * var_1_20) >= var_1_3)) {
  var_1_23 = ((((((((var_1_24) > (((((1) > (var_1_25)) ? (1) : (var_1_25))))) ? (var_1_24) : (((((1) > (var_1_25)) ? (1) : (var_1_25))))))) < ((var_1_26 + 2))) ? (((((var_1_24) > (((((1) > (var_1_25)) ? (1) : (var_1_25))))) ? (var_1_24) : (((((1) > (var_1_25)) ? (1) : (var_1_25))))))) : ((var_1_26 + 2))));
 } else {
  var_1_23 = (var_1_27 - (var_1_28 + var_1_29));
 }
 unsigned char stepLocal_10 = var_1_5;
 unsigned short int stepLocal_9 = var_1_20;
 if (var_1_18 && stepLocal_10) {
  if (var_1_4 != stepLocal_9) {
   var_1_45 = var_1_18;
  }
 }
 if (((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2))) >= var_1_19) {
  var_1_61 = (var_1_23 + (var_1_62 - (var_1_63 - var_1_51)));
 }
 signed char stepLocal_19 = var_1_47;
 if (! (var_1_25 < var_1_20)) {
  if (stepLocal_19 != ((var_1_29 - var_1_28) ^ var_1_66)) {
   var_1_67 = var_1_29;
  }
 } else {
  var_1_67 = var_1_53;
 }
 if (var_1_55 || var_1_6) {
  if (var_1_5) {
   if (var_1_34 > var_1_13) {
    var_1_36 = (((((var_1_33) > ((1537811546u - var_1_21))) ? (var_1_33) : ((1537811546u - var_1_21)))) + var_1_50);
   } else {
    var_1_36 = (3798402642u - ((((var_1_25) > (var_1_4)) ? (var_1_25) : (var_1_4))));
   }
  } else {
   var_1_36 = ((var_1_37 + 1121932705u) - var_1_21);
  }
 } else {
  var_1_36 = (((((var_1_28 + var_1_3)) < (var_1_38)) ? ((var_1_28 + var_1_3)) : (var_1_38)));
 }
 signed long int stepLocal_14 = var_1_2;
 if (stepLocal_14 > var_1_48) {
  if (! var_1_55) {
   var_1_57 = ((var_1_56 + var_1_26) + var_1_53);
  } else {
   var_1_57 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 }
 signed long int stepLocal_15 = var_1_26 - var_1_49;
 if (stepLocal_15 >= var_1_61) {
  if (var_1_43 == var_1_65) {
   var_1_58 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
  } else {
   var_1_58 = (var_1_31 + (((((((var_1_46) > (var_1_53)) ? (var_1_46) : (var_1_53))) < 0 ) ? -((((var_1_46) > (var_1_53)) ? (var_1_46) : (var_1_53))) : ((((var_1_46) > (var_1_53)) ? (var_1_46) : (var_1_53))))));
  }
 }
 if (! ((var_1_57 | var_1_27) == var_1_28)) {
  var_1_32 = (-4 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1073741824);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 64);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -127);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 1073741823);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -922337.2036854766000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 2147483647);
 assume_abort_if_not(var_1_42 <= 4294967295);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -128);
 assume_abort_if_not(var_1_47 <= 127);
 assume_abort_if_not(var_1_47 != 0);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 95);
 assume_abort_if_not(var_1_48 <= 127);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 95);
 assume_abort_if_not(var_1_49 <= 127);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 127);
 assume_abort_if_not(var_1_51 <= 255);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 190);
 assume_abort_if_not(var_1_53 <= 254);
 var_1_62 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_62 >= 16383);
 assume_abort_if_not(var_1_62 <= 32767);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 8191);
 assume_abort_if_not(var_1_63 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_35 = var_1_35;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_59 = var_1_59;
}
int property(void) {
 return (((((((((((((((((((((((((((((((1 < (var_1_2 - (var_1_3 + var_1_4))) ? (var_1_1 == ((unsigned char) (! (var_1_5 || var_1_6)))) : 1) && ((var_1_4 > ((var_1_3 - var_1_8) + var_1_2)) ? ((! var_1_5) ? (var_1_7 == ((float) var_1_9)) : 1) : (var_1_7 == ((float) ((((((4.625f) > (var_1_10)) ? (4.625f) : (var_1_10))) - (var_1_11 + var_1_12)) + (var_1_13 + (var_1_14 - var_1_15))))))) && ((127.725f < var_1_13) ? ((var_1_4 < var_1_2) ? (var_1_16 == ((unsigned char) (! (var_1_17 && var_1_18)))) : ((var_1_10 < (var_1_14 * var_1_12)) ? (var_1_16 == ((unsigned char) ((var_1_15 >= (var_1_14 + 7.5f)) || var_1_17))) : (var_1_16 == ((unsigned char) var_1_18)))) : (var_1_16 == ((unsigned char) var_1_5)))) && (var_1_6 ? (var_1_19 == ((signed long int) ((((-2) > (var_1_4)) ? (-2) : (var_1_4))))) : 1)) && ((var_1_15 == (- var_1_43)) ? (var_1_20 == ((unsigned short int) (var_1_21 - var_1_22))) : 1)) && ((var_1_6 || ((var_1_21 * var_1_20) >= var_1_3)) ? (var_1_23 == ((unsigned char) ((((((((var_1_24) > (((((1) > (var_1_25)) ? (1) : (var_1_25))))) ? (var_1_24) : (((((1) > (var_1_25)) ? (1) : (var_1_25))))))) < ((var_1_26 + 2))) ? (((((var_1_24) > (((((1) > (var_1_25)) ? (1) : (var_1_25))))) ? (var_1_24) : (((((1) > (var_1_25)) ? (1) : (var_1_25))))))) : ((var_1_26 + 2)))))) : (var_1_23 == ((unsigned char) (var_1_27 - (var_1_28 + var_1_29)))))) && ((var_1_5 || var_1_18) ? ((((var_1_19 | var_1_22) | var_1_4) > var_1_26) ? ((var_1_1 && var_1_6) ? (var_1_30 == ((signed char) var_1_31)) : 1) : 1) : 1)) && ((! ((var_1_57 | var_1_27) == var_1_28)) ? (var_1_32 == ((signed char) (-4 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))) : 1)) && ((var_1_18 && var_1_6) ? (var_1_33 == ((unsigned short int) 10)) : 1)) && (var_1_1 ? (var_1_34 == ((float) (((((((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14)))) < (var_1_12)) ? (((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_12))) + var_1_11))) : 1)) && (((10 * -16) == ((50 + var_1_4) % var_1_21)) ? (var_1_35 == ((float) ((((var_1_12) < ((9999999.4f + var_1_15))) ? (var_1_12) : ((9999999.4f + var_1_15)))))) : ((var_1_59 != (var_1_3 | (-1 + var_1_28))) ? (var_1_35 == ((float) (((((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) < 0 ) ? -((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) : ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))))))) : (var_1_35 == ((float) (var_1_14 + var_1_12)))))) && ((var_1_55 || var_1_6) ? (var_1_5 ? ((var_1_34 > var_1_13) ? (var_1_36 == ((unsigned long int) (((((var_1_33) > ((1537811546u - var_1_21))) ? (var_1_33) : ((1537811546u - var_1_21)))) + var_1_50))) : (var_1_36 == ((unsigned long int) (3798402642u - ((((var_1_25) > (var_1_4)) ? (var_1_25) : (var_1_4))))))) : (var_1_36 == ((unsigned long int) ((var_1_37 + 1121932705u) - var_1_21)))) : (var_1_36 == ((unsigned long int) (((((var_1_28 + var_1_3)) < (var_1_38)) ? ((var_1_28 + var_1_3)) : (var_1_38))))))) && (var_1_39 == ((float) ((((var_1_12) < (var_1_40)) ? (var_1_12) : (var_1_40)))))) && ((var_1_37 <= (var_1_42 - var_1_8)) ? (var_1_41 == ((float) (var_1_13 + var_1_14))) : 1)) && ((var_1_17 || (var_1_41 == var_1_15)) ? (var_1_43 == ((float) (var_1_44 - (var_1_10 + var_1_14)))) : 1)) && ((var_1_18 && var_1_5) ? ((var_1_4 != var_1_20) ? (var_1_45 == ((unsigned char) var_1_18)) : 1) : 1)) && ((((var_1_29 % var_1_47) & 32) == var_1_22) ? (((- var_1_44) < var_1_39) ? (var_1_46 == ((unsigned char) var_1_27)) : (var_1_46 == ((unsigned char) (((var_1_48 + var_1_49) - var_1_29) - var_1_28)))) : 1)) && ((var_1_38 >= ((((last_1_var_1_59) > ((- var_1_37))) ? (last_1_var_1_59) : ((- var_1_37))))) ? ((var_1_24 >= (((((var_1_27) > (var_1_51)) ? (var_1_27) : (var_1_51))) - (var_1_48 - var_1_29))) ? (var_1_50 == ((unsigned long int) ((4076336116u - last_1_var_1_36) - var_1_27))) : 1) : (var_1_50 == ((unsigned long int) ((((((var_1_27 + var_1_49) + var_1_25)) > (((((((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) < (var_1_48)) ? (((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) : (var_1_48))))) ? (((var_1_27 + var_1_49) + var_1_25)) : (((((((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) < (var_1_48)) ? (((((var_1_37) > (last_1_var_1_36)) ? (var_1_37) : (last_1_var_1_36)))) : (var_1_48)))))))))) && (((5u & (var_1_29 + var_1_4)) >= var_1_48) ? (var_1_52 == ((unsigned char) (var_1_27 - var_1_29))) : (var_1_17 ? (var_1_52 == ((unsigned char) ((((((var_1_49 + var_1_48)) > ((var_1_53 - 32))) ? ((var_1_49 + var_1_48)) : ((var_1_53 - 32)))) - 50))) : (var_1_52 == ((unsigned char) (((((((((100) < 0 ) ? -(100) : (100))) + var_1_28)) > (var_1_29)) ? ((((((100) < 0 ) ? -(100) : (100))) + var_1_28)) : (var_1_29)))))))) && (var_1_54 == ((double) var_1_10))) && ((((var_1_37 * var_1_50) + var_1_3) != ((((var_1_56) > (var_1_59)) ? (var_1_56) : (var_1_59)))) ? (var_1_55 == ((unsigned char) (var_1_16 && var_1_5))) : (var_1_55 == ((unsigned char) (! var_1_6))))) && (var_1_56 == ((unsigned short int) var_1_49))) && ((var_1_2 > var_1_48) ? ((! var_1_55) ? (var_1_57 == ((signed long int) ((var_1_56 + var_1_26) + var_1_53))) : (var_1_57 == ((signed long int) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))) : 1)) && (((var_1_26 - var_1_49) >= var_1_61) ? ((var_1_43 == var_1_65) ? (var_1_58 == ((signed short int) ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))) : (var_1_58 == ((signed short int) (var_1_31 + (((((((var_1_46) > (var_1_53)) ? (var_1_46) : (var_1_53))) < 0 ) ? -((((var_1_46) > (var_1_53)) ? (var_1_46) : (var_1_53))) : ((((var_1_46) > (var_1_53)) ? (var_1_46) : (var_1_53))))))))) : 1)) && ((32.7f != last_1_var_1_35) ? (var_1_59 == ((unsigned long int) var_1_21)) : ((last_1_var_1_36 > var_1_22) ? (var_1_59 == ((unsigned long int) ((((64u) < (var_1_53)) ? (64u) : (var_1_53))))) : 1))) && ((((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2))) >= var_1_19) ? (var_1_61 == ((unsigned short int) (var_1_23 + (var_1_62 - (var_1_63 - var_1_51))))) : 1)) && ((var_1_10 >= var_1_41) ? (((- var_1_53) < var_1_4) ? (((var_1_24 ^ (var_1_42 - var_1_56)) == var_1_8) ? (var_1_64 == ((unsigned char) var_1_17)) : (var_1_64 == ((unsigned char) var_1_18))) : 1) : 1)) && (var_1_65 == ((double) var_1_13))) && (var_1_17 ? (var_1_66 == ((unsigned long int) var_1_25)) : (var_1_66 == ((unsigned long int) var_1_51)))) && ((! (var_1_25 < var_1_20)) ? ((var_1_47 != ((var_1_29 - var_1_28) ^ var_1_66)) ? (var_1_67 == ((signed char) var_1_29)) : 1) : (var_1_67 == ((signed char) var_1_53)))) && (var_1_68 == ((float) var_1_9))
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
