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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 5;
signed char var_1_3 = -128;
signed char var_1_5 = 16;
unsigned short int var_1_6 = 16;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
signed long int var_1_12 = 1710626147;
signed short int var_1_13 = 16;
signed short int var_1_15 = 0;
unsigned long int var_1_16 = 128;
float var_1_17 = 0.8;
float var_1_18 = 99.35;
unsigned long int var_1_21 = 3613035197;
double var_1_22 = 1.2;
double var_1_23 = 10.25;
double var_1_24 = 99999.6;
double var_1_25 = 5.5;
double var_1_26 = 8.45;
double var_1_27 = 3.875;
float var_1_28 = 63.6;
signed long int var_1_29 = -100;
signed short int var_1_31 = 1;
unsigned short int var_1_32 = 5;
unsigned short int var_1_33 = 41347;
unsigned short int var_1_34 = 40392;
signed char var_1_35 = -16;
signed char var_1_36 = 50;
double var_1_37 = 127.5;
double var_1_38 = 0.0;
double var_1_39 = 24.25;
double var_1_40 = 7.8;
double var_1_41 = 0.8;
unsigned short int var_1_42 = 256;
double var_1_43 = 64.2;
double var_1_45 = 0.0;
signed short int var_1_46 = 256;
unsigned long int var_1_47 = 128;
unsigned long int var_1_48 = 4;
signed short int var_1_49 = 16;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
signed short int var_1_52 = 5;
double var_1_53 = 16.5;
unsigned long int var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned long int var_1_58 = 4;
unsigned long int var_1_59 = 32;
double var_1_60 = 7.25;
signed char var_1_61 = 16;
signed short int var_1_63 = 4;
unsigned char var_1_64 = 0;
double var_1_65 = 500.25;
unsigned short int last_1_var_1_1 = 5;
unsigned char last_1_var_1_7 = 64;
unsigned long int last_1_var_1_16 = 128;
double last_1_var_1_22 = 1.2;
signed long int last_1_var_1_29 = -100;
unsigned short int last_1_var_1_32 = 5;
double last_1_var_1_37 = 127.5;
unsigned short int last_1_var_1_42 = 256;
double last_1_var_1_43 = 64.2;
signed short int last_1_var_1_46 = 256;
unsigned long int last_1_var_1_47 = 128;
unsigned long int last_1_var_1_48 = 4;
unsigned char last_1_var_1_55 = 0;
unsigned long int last_1_var_1_58 = 4;
double last_1_var_1_60 = 7.25;
signed short int last_1_var_1_63 = 4;
unsigned char last_1_var_1_64 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = last_1_var_1_42;
 if (stepLocal_8 <= last_1_var_1_29) {
  var_1_49 = last_1_var_1_63;
 } else {
  var_1_49 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 }
 signed long int stepLocal_9 = last_1_var_1_1;
 if (last_1_var_1_60 >= last_1_var_1_43) {
  var_1_50 = var_1_51;
 } else {
  if ((- var_1_31) < stepLocal_9) {
   var_1_50 = (last_1_var_1_55 || var_1_51);
  }
 }
 if (var_1_50) {
  var_1_13 = ((((((((var_1_5) > (var_1_15)) ? (var_1_5) : (var_1_15)))) > ((var_1_3 + var_1_10))) ? (((((var_1_5) > (var_1_15)) ? (var_1_5) : (var_1_15)))) : ((var_1_3 + var_1_10))));
 }
 if (last_1_var_1_55) {
  var_1_42 = (((((var_1_31 + var_1_10)) < (var_1_33)) ? ((var_1_31 + var_1_10)) : (var_1_33)));
 }
 signed long int stepLocal_13 = last_1_var_1_32;
 signed long int stepLocal_12 = var_1_12;
 signed long int stepLocal_11 = (var_1_15 * last_1_var_1_46) % ((((var_1_5) < (var_1_3)) ? (var_1_5) : (var_1_3)));
 if (stepLocal_13 < last_1_var_1_48) {
  if (stepLocal_11 >= var_1_31) {
   var_1_58 = (var_1_21 - (((((var_1_12 - var_1_36)) < (var_1_9)) ? ((var_1_12 - var_1_36)) : (var_1_9))));
  } else {
   var_1_58 = (var_1_21 - last_1_var_1_16);
  }
 } else {
  if (((last_1_var_1_48 % var_1_3) & var_1_8) == stepLocal_12) {
   var_1_58 = (var_1_31 + var_1_36);
  } else {
   var_1_58 = (last_1_var_1_48 + var_1_59);
  }
 }
 unsigned long int stepLocal_4 = last_1_var_1_48;
 if (stepLocal_4 >= last_1_var_1_16) {
  var_1_32 = (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - last_1_var_1_58);
 } else {
  var_1_32 = ((((var_1_33) < (var_1_8)) ? (var_1_33) : (var_1_8)));
 }
 unsigned char stepLocal_3 = last_1_var_1_64;
 if (! ((var_1_17 - var_1_18) <= (last_1_var_1_22 * last_1_var_1_37))) {
  if (((last_1_var_1_32 * var_1_8) < last_1_var_1_32) || stepLocal_3) {
   if (last_1_var_1_64) {
    var_1_16 = (var_1_21 - var_1_8);
   } else {
    var_1_16 = (var_1_21 - var_1_6);
   }
  } else {
   var_1_16 = (var_1_10 + var_1_9);
  }
 } else {
  var_1_16 = ((((var_1_21) < ((last_1_var_1_47 + (1u + var_1_6)))) ? (var_1_21) : ((last_1_var_1_47 + (1u + var_1_6)))));
 }
 if (var_1_50) {
  var_1_22 = var_1_23;
 } else {
  var_1_22 = (((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25)) > (((var_1_26 + 32.5) - var_1_27))) ? ((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25)) : (((var_1_26 + 32.5) - var_1_27))));
 }
 var_1_35 = (var_1_9 - var_1_36);
 var_1_64 = var_1_51;
 if (var_1_50) {
  var_1_28 = (var_1_26 - 3.25f);
 } else {
  if (((var_1_49 + var_1_8) + var_1_13) == ((var_1_16 * var_1_10) / var_1_12)) {
   var_1_28 = (var_1_26 - 1.000000000000005E14f);
  } else {
   var_1_28 = var_1_27;
  }
 }
 if (var_1_28 > (var_1_39 - ((((var_1_38) > (var_1_17)) ? (var_1_38) : (var_1_17))))) {
  var_1_61 = (var_1_54 - var_1_36);
 }
 if (var_1_64) {
  var_1_47 = (((((var_1_31) < (var_1_42)) ? (var_1_31) : (var_1_42))) + var_1_49);
 } else {
  var_1_47 = ((((var_1_31) > (var_1_36)) ? (var_1_31) : (var_1_36)));
 }
 if (var_1_50) {
  if (var_1_64) {
   var_1_55 = (! var_1_51);
  } else {
   var_1_55 = ((var_1_51 || (! var_1_56)) && var_1_57);
  }
 }
 if ((var_1_10 & last_1_var_1_29) > (var_1_16 / var_1_5)) {
  var_1_29 = ((var_1_58 + var_1_15) + (var_1_10 + var_1_9));
 } else {
  if (! var_1_55) {
   var_1_29 = var_1_32;
  }
 }
 signed long int stepLocal_0 = -16;
 if ((((((var_1_49 / var_1_3)) > ((var_1_61 % var_1_5))) ? ((var_1_49 / var_1_3)) : ((var_1_61 % var_1_5)))) != stepLocal_0) {
  var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_1 = ((((var_1_6) > (32)) ? (var_1_6) : (32)));
 }
 signed long int stepLocal_6 = (((var_1_42) < (var_1_36)) ? (var_1_42) : (var_1_36));
 if (var_1_28 <= var_1_26) {
  var_1_43 = 256.661;
 } else {
  if (stepLocal_6 <= var_1_42) {
   var_1_43 = ((((((var_1_45 - 25.5) - var_1_39)) > ((((((var_1_26 - 10.25)) > (var_1_23)) ? ((var_1_26 - 10.25)) : (var_1_23))))) ? (((var_1_45 - 25.5) - var_1_39)) : ((((((var_1_26 - 10.25)) > (var_1_23)) ? ((var_1_26 - 10.25)) : (var_1_23))))));
  }
 }
 unsigned long int stepLocal_17 = (var_1_36 + var_1_42) - var_1_58;
 unsigned long int stepLocal_16 = var_1_54;
 unsigned long int stepLocal_15 = var_1_16;
 unsigned char stepLocal_14 = var_1_9;
 if (var_1_10 < stepLocal_15) {
  if (stepLocal_14 >= var_1_12) {
   var_1_60 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  } else {
   if (var_1_34 > stepLocal_16) {
    var_1_60 = ((var_1_45 - var_1_38) - (((((4.900890029043464E18 - var_1_39)) > (var_1_27)) ? ((4.900890029043464E18 - var_1_39)) : (var_1_27))));
   } else {
    var_1_60 = (var_1_41 + var_1_38);
   }
  }
 } else {
  if (stepLocal_17 < ((var_1_31 + var_1_58) - ((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10))))) {
   var_1_60 = ((((var_1_40) < (var_1_38)) ? (var_1_40) : (var_1_38)));
  }
 }
 signed long int stepLocal_2 = (((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5));
 signed long int stepLocal_1 = (var_1_12 - var_1_6) - (var_1_10 + var_1_32);
 if (last_1_var_1_7 > stepLocal_2) {
  var_1_7 = ((var_1_8 - var_1_9) - var_1_10);
 } else {
  if ((((((var_1_58) < (var_1_8)) ? (var_1_58) : (var_1_8))) * var_1_9) < stepLocal_1) {
   var_1_7 = ((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8)));
  } else {
   var_1_7 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  }
 }
 if (var_1_55) {
  var_1_52 = ((((var_1_61) < (var_1_9)) ? (var_1_61) : (var_1_9)));
 }
 unsigned long int stepLocal_10 = ~ (var_1_47 >> var_1_54);
 if (stepLocal_10 != (var_1_47 ^ var_1_10)) {
  var_1_53 = ((var_1_39 + var_1_41) + (255.7 - var_1_26));
 } else {
  var_1_53 = (2.425 - var_1_27);
 }
 unsigned long int stepLocal_7 = var_1_47 * var_1_15;
 if (var_1_32 != stepLocal_7) {
  var_1_48 = var_1_9;
 }
 unsigned long int stepLocal_5 = var_1_48 & var_1_32;
 if (var_1_64) {
  if (var_1_61 >= stepLocal_5) {
   var_1_37 = (var_1_25 + ((var_1_38 - var_1_39) - 8.25));
  } else {
   var_1_37 = (var_1_26 + var_1_24);
  }
 } else {
  var_1_37 = (var_1_26 + ((((var_1_40) > ((var_1_39 + var_1_41))) ? (var_1_40) : ((var_1_39 + var_1_41)))));
 }
 unsigned long int stepLocal_19 = var_1_58;
 unsigned char stepLocal_18 = var_1_64;
 if (var_1_36 < stepLocal_19) {
  if (stepLocal_18 && (var_1_37 != var_1_23)) {
   var_1_63 = (var_1_7 - ((((var_1_36) < (var_1_9)) ? (var_1_36) : (var_1_9))));
  } else {
   var_1_63 = ((var_1_16 + var_1_29) + var_1_7);
  }
 }
 if (! (! var_1_64)) {
  var_1_46 = var_1_7;
 } else {
  if (64 != (var_1_34 - (var_1_48 + var_1_31))) {
   var_1_46 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  } else {
   var_1_46 = var_1_9;
  }
 }
 unsigned short int stepLocal_20 = var_1_34;
 if (var_1_64) {
  if (var_1_37 > (- (var_1_25 * var_1_40))) {
   if ((var_1_8 - var_1_9) > stepLocal_20) {
    var_1_65 = var_1_27;
   }
  } else {
   var_1_65 = var_1_41;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -128);
 assume_abort_if_not(var_1_5 <= 127);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32767);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 2147483647);
 assume_abort_if_not(var_1_21 <= 4294967294);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 32767);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 2305843.009213691400e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 4611686.018427383000e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 15);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return (((((((((((((((((((((((((((((((var_1_49 / var_1_3)) > ((var_1_61 % var_1_5))) ? ((var_1_49 / var_1_3)) : ((var_1_61 % var_1_5)))) != -16) ? (var_1_1 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_1 == ((unsigned short int) ((((var_1_6) > (32)) ? (var_1_6) : (32)))))) && ((last_1_var_1_7 > ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) ? (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - var_1_10))) : (((((((var_1_58) < (var_1_8)) ? (var_1_58) : (var_1_8))) * var_1_9) < ((var_1_12 - var_1_6) - (var_1_10 + var_1_32))) ? (var_1_7 == ((unsigned char) ((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8))))) : (var_1_7 == ((unsigned char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))) && (var_1_50 ? (var_1_13 == ((signed short int) ((((((((var_1_5) > (var_1_15)) ? (var_1_5) : (var_1_15)))) > ((var_1_3 + var_1_10))) ? (((((var_1_5) > (var_1_15)) ? (var_1_5) : (var_1_15)))) : ((var_1_3 + var_1_10)))))) : 1)) && ((! ((var_1_17 - var_1_18) <= (last_1_var_1_22 * last_1_var_1_37))) ? ((((last_1_var_1_32 * var_1_8) < last_1_var_1_32) || last_1_var_1_64) ? (last_1_var_1_64 ? (var_1_16 == ((unsigned long int) (var_1_21 - var_1_8))) : (var_1_16 == ((unsigned long int) (var_1_21 - var_1_6)))) : (var_1_16 == ((unsigned long int) (var_1_10 + var_1_9)))) : (var_1_16 == ((unsigned long int) ((((var_1_21) < ((last_1_var_1_47 + (1u + var_1_6)))) ? (var_1_21) : ((last_1_var_1_47 + (1u + var_1_6))))))))) && (var_1_50 ? (var_1_22 == ((double) var_1_23)) : (var_1_22 == ((double) (((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25)) > (((var_1_26 + 32.5) - var_1_27))) ? ((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_25)) : (((var_1_26 + 32.5) - var_1_27)))))))) && (var_1_50 ? (var_1_28 == ((float) (var_1_26 - 3.25f))) : ((((var_1_49 + var_1_8) + var_1_13) == ((var_1_16 * var_1_10) / var_1_12)) ? (var_1_28 == ((float) (var_1_26 - 1.000000000000005E14f))) : (var_1_28 == ((float) var_1_27))))) && (((var_1_10 & last_1_var_1_29) > (var_1_16 / var_1_5)) ? (var_1_29 == ((signed long int) ((var_1_58 + var_1_15) + (var_1_10 + var_1_9)))) : ((! var_1_55) ? (var_1_29 == ((signed long int) var_1_32)) : 1))) && ((last_1_var_1_48 >= last_1_var_1_16) ? (var_1_32 == ((unsigned short int) (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - last_1_var_1_58))) : (var_1_32 == ((unsigned short int) ((((var_1_33) < (var_1_8)) ? (var_1_33) : (var_1_8))))))) && (var_1_35 == ((signed char) (var_1_9 - var_1_36)))) && (var_1_64 ? ((var_1_61 >= (var_1_48 & var_1_32)) ? (var_1_37 == ((double) (var_1_25 + ((var_1_38 - var_1_39) - 8.25)))) : (var_1_37 == ((double) (var_1_26 + var_1_24)))) : (var_1_37 == ((double) (var_1_26 + ((((var_1_40) > ((var_1_39 + var_1_41))) ? (var_1_40) : ((var_1_39 + var_1_41))))))))) && (last_1_var_1_55 ? (var_1_42 == ((unsigned short int) (((((var_1_31 + var_1_10)) < (var_1_33)) ? ((var_1_31 + var_1_10)) : (var_1_33))))) : 1)) && ((var_1_28 <= var_1_26) ? (var_1_43 == ((double) 256.661)) : ((((((var_1_42) < (var_1_36)) ? (var_1_42) : (var_1_36))) <= var_1_42) ? (var_1_43 == ((double) ((((((var_1_45 - 25.5) - var_1_39)) > ((((((var_1_26 - 10.25)) > (var_1_23)) ? ((var_1_26 - 10.25)) : (var_1_23))))) ? (((var_1_45 - 25.5) - var_1_39)) : ((((((var_1_26 - 10.25)) > (var_1_23)) ? ((var_1_26 - 10.25)) : (var_1_23)))))))) : 1))) && ((! (! var_1_64)) ? (var_1_46 == ((signed short int) var_1_7)) : ((64 != (var_1_34 - (var_1_48 + var_1_31))) ? (var_1_46 == ((signed short int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_46 == ((signed short int) var_1_9))))) && (var_1_64 ? (var_1_47 == ((unsigned long int) (((((var_1_31) < (var_1_42)) ? (var_1_31) : (var_1_42))) + var_1_49))) : (var_1_47 == ((unsigned long int) ((((var_1_31) > (var_1_36)) ? (var_1_31) : (var_1_36))))))) && ((var_1_32 != (var_1_47 * var_1_15)) ? (var_1_48 == ((unsigned long int) var_1_9)) : 1)) && ((last_1_var_1_42 <= last_1_var_1_29) ? (var_1_49 == ((signed short int) last_1_var_1_63)) : (var_1_49 == ((signed short int) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) && ((last_1_var_1_60 >= last_1_var_1_43) ? (var_1_50 == ((unsigned char) var_1_51)) : (((- var_1_31) < last_1_var_1_1) ? (var_1_50 == ((unsigned char) (last_1_var_1_55 || var_1_51))) : 1))) && (var_1_55 ? (var_1_52 == ((signed short int) ((((var_1_61) < (var_1_9)) ? (var_1_61) : (var_1_9))))) : 1)) && (((~ (var_1_47 >> var_1_54)) != (var_1_47 ^ var_1_10)) ? (var_1_53 == ((double) ((var_1_39 + var_1_41) + (255.7 - var_1_26)))) : (var_1_53 == ((double) (2.425 - var_1_27))))) && (var_1_50 ? (var_1_64 ? (var_1_55 == ((unsigned char) (! var_1_51))) : (var_1_55 == ((unsigned char) ((var_1_51 || (! var_1_56)) && var_1_57)))) : 1)) && ((last_1_var_1_32 < last_1_var_1_48) ? ((((var_1_15 * last_1_var_1_46) % ((((var_1_5) < (var_1_3)) ? (var_1_5) : (var_1_3)))) >= var_1_31) ? (var_1_58 == ((unsigned long int) (var_1_21 - (((((var_1_12 - var_1_36)) < (var_1_9)) ? ((var_1_12 - var_1_36)) : (var_1_9)))))) : (var_1_58 == ((unsigned long int) (var_1_21 - last_1_var_1_16)))) : ((((last_1_var_1_48 % var_1_3) & var_1_8) == var_1_12) ? (var_1_58 == ((unsigned long int) (var_1_31 + var_1_36))) : (var_1_58 == ((unsigned long int) (last_1_var_1_48 + var_1_59)))))) && ((var_1_10 < var_1_16) ? ((var_1_9 >= var_1_12) ? (var_1_60 == ((double) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) : ((var_1_34 > var_1_54) ? (var_1_60 == ((double) ((var_1_45 - var_1_38) - (((((4.900890029043464E18 - var_1_39)) > (var_1_27)) ? ((4.900890029043464E18 - var_1_39)) : (var_1_27)))))) : (var_1_60 == ((double) (var_1_41 + var_1_38))))) : ((((var_1_36 + var_1_42) - var_1_58) < ((var_1_31 + var_1_58) - ((((var_1_6) < (var_1_10)) ? (var_1_6) : (var_1_10))))) ? (var_1_60 == ((double) ((((var_1_40) < (var_1_38)) ? (var_1_40) : (var_1_38))))) : 1))) && ((var_1_28 > (var_1_39 - ((((var_1_38) > (var_1_17)) ? (var_1_38) : (var_1_17))))) ? (var_1_61 == ((signed char) (var_1_54 - var_1_36))) : 1)) && ((var_1_36 < var_1_58) ? ((var_1_64 && (var_1_37 != var_1_23)) ? (var_1_63 == ((signed short int) (var_1_7 - ((((var_1_36) < (var_1_9)) ? (var_1_36) : (var_1_9)))))) : (var_1_63 == ((signed short int) ((var_1_16 + var_1_29) + var_1_7)))) : 1)) && (var_1_64 == ((unsigned char) var_1_51))) && (var_1_64 ? ((var_1_37 > (- (var_1_25 * var_1_40))) ? (((var_1_8 - var_1_9) > var_1_34) ? (var_1_65 == ((double) var_1_27)) : 1) : (var_1_65 == ((double) var_1_41))) : 1)
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
