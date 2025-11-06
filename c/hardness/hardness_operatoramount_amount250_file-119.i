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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 50;
unsigned char var_1_2 = 25;
signed short int var_1_3 = -100;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 5;
signed long int var_1_11 = 2;
float var_1_12 = 49.6;
float var_1_14 = 100000000000000.8;
float var_1_15 = 256.25;
float var_1_16 = 2.7;
float var_1_17 = 9.8;
unsigned short int var_1_18 = 4;
unsigned short int var_1_19 = 28591;
unsigned short int var_1_20 = 27022;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 32;
signed char var_1_23 = 8;
signed char var_1_25 = -2;
signed char var_1_26 = -10;
double var_1_27 = 0.75;
unsigned long int var_1_28 = 1000;
unsigned long int var_1_29 = 10;
unsigned char var_1_30 = 0;
float var_1_31 = 63.325;
signed long int var_1_32 = 5;
signed long int var_1_33 = -8;
float var_1_34 = 100000.1;
float var_1_35 = 10.25;
signed short int var_1_36 = 256;
unsigned long int var_1_37 = 5;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 10;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 25;
unsigned char var_1_44 = 200;
unsigned long int var_1_45 = 32;
signed char var_1_46 = -4;
signed long int var_1_47 = 2054654072;
signed char var_1_48 = 0;
signed char var_1_49 = 32;
unsigned long int var_1_50 = 1;
unsigned long int var_1_51 = 3016763415;
unsigned long int var_1_52 = 50;
double var_1_53 = 64.5;
signed long int var_1_54 = 50;
float var_1_55 = 999999.75;
unsigned short int var_1_56 = 4;
unsigned short int var_1_57 = 10000;
unsigned short int var_1_58 = 32;
unsigned short int var_1_59 = 25232;
signed short int var_1_60 = -128;
double var_1_61 = 100.5;
unsigned long int last_1_var_1_9 = 5;
unsigned long int last_1_var_1_50 = 1;
signed long int last_1_var_1_54 = 50;
float last_1_var_1_55 = 999999.75;
unsigned short int last_1_var_1_56 = 4;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_55 != (((((var_1_35) < (25.8f)) ? (var_1_35) : (25.8f))) * 9.9999999994E9f)) {
  var_1_37 = last_1_var_1_50;
 } else {
  var_1_37 = ((((last_1_var_1_50) < (4u)) ? (last_1_var_1_50) : (4u)));
 }
 var_1_11 = (last_1_var_1_56 - var_1_2);
 var_1_3 = last_1_var_1_50;
 var_1_1 = var_1_2;
 var_1_7 = (! var_1_8);
 var_1_27 = (var_1_14 + var_1_15);
 if (! (var_1_14 >= ((((var_1_16) > (255.125f)) ? (var_1_16) : (255.125f))))) {
  var_1_30 = var_1_5;
 } else {
  var_1_30 = (! var_1_8);
 }
 unsigned long int stepLocal_11 = 16u;
 signed long int stepLocal_10 = var_1_47;
 if (var_1_44 < stepLocal_10) {
  if (var_1_5) {
   if (var_1_15 != var_1_14) {
    var_1_53 = (var_1_16 + var_1_15);
   }
  }
 } else {
  if (var_1_37 >= stepLocal_11) {
   var_1_53 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
  } else {
   var_1_53 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 }
 if (var_1_6) {
  var_1_60 = var_1_41;
 }
 unsigned long int stepLocal_14 = 64u;
 if (var_1_6) {
  if ((var_1_52 / var_1_41) < stepLocal_14) {
   var_1_61 = (var_1_16 - (var_1_35 + var_1_34));
  }
 } else {
  if (var_1_7) {
   var_1_61 = var_1_34;
  } else {
   var_1_61 = var_1_17;
  }
 }
 if (var_1_7) {
  var_1_54 = ((((last_1_var_1_54) < ((var_1_11 + ((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54)))))) ? (last_1_var_1_54) : ((var_1_11 + ((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54)))))));
 } else {
  var_1_54 = ((((((16) < 0 ) ? -(16) : (16))) - var_1_43) + ((((((((var_1_19) > (var_1_1)) ? (var_1_19) : (var_1_1)))) < (var_1_2)) ? (((((var_1_19) > (var_1_1)) ? (var_1_19) : (var_1_1)))) : (var_1_2))));
 }
 unsigned short int stepLocal_13 = var_1_57;
 unsigned short int stepLocal_12 = var_1_19;
 if (var_1_39) {
  if (stepLocal_12 >= var_1_51) {
   var_1_56 = (((10000 + var_1_57) - 64) + (var_1_2 + ((((var_1_60) < (var_1_58)) ? (var_1_60) : (var_1_58)))));
  } else {
   var_1_56 = ((var_1_20 + var_1_59) - ((((var_1_41) > (var_1_58)) ? (var_1_41) : (var_1_58))));
  }
 } else {
  if (var_1_54 <= stepLocal_13) {
   var_1_56 = var_1_41;
  } else {
   var_1_56 = var_1_20;
  }
 }
 unsigned char stepLocal_2 = var_1_2;
 unsigned char stepLocal_1 = var_1_2;
 signed short int stepLocal_0 = var_1_60;
 if (stepLocal_0 <= (var_1_11 + var_1_2)) {
  if (stepLocal_2 == last_1_var_1_9) {
   if (stepLocal_1 != var_1_11) {
    var_1_9 = 128u;
   } else {
    var_1_9 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   }
  } else {
   var_1_9 = var_1_11;
  }
 } else {
  var_1_9 = 100000000u;
 }
 signed long int stepLocal_4 = -16;
 if (((var_1_19 + var_1_20) - var_1_37) != stepLocal_4) {
  var_1_18 = (var_1_9 + var_1_2);
 }
 if (var_1_60 > var_1_20) {
  var_1_28 = var_1_29;
 }
 unsigned char stepLocal_7 = var_1_5;
 if (var_1_6) {
  if (stepLocal_7 && var_1_7) {
   var_1_38 = ((var_1_28 != (var_1_11 * 5u)) || var_1_5);
  } else {
   var_1_38 = (var_1_5 || var_1_39);
  }
 } else {
  var_1_38 = var_1_5;
 }
 if (var_1_30) {
  if (var_1_38 || (var_1_19 > (var_1_3 / 8))) {
   if (var_1_8 && (var_1_27 < var_1_17)) {
    var_1_40 = (((((var_1_41 - (var_1_42 - var_1_43))) < (128)) ? ((var_1_41 - (var_1_42 - var_1_43))) : (128)));
   } else {
    var_1_40 = (var_1_41 - var_1_42);
   }
  } else {
   if (var_1_60 <= (var_1_33 / var_1_41)) {
    var_1_40 = var_1_41;
   } else {
    var_1_40 = (((((((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))) - var_1_43)) > (((((var_1_2) < (var_1_42)) ? (var_1_2) : (var_1_42))))) ? ((((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))) - var_1_43)) : (((((var_1_2) < (var_1_42)) ? (var_1_2) : (var_1_42))))));
   }
  }
 }
 unsigned long int stepLocal_9 = ~ var_1_28;
 signed long int stepLocal_8 = var_1_19 - (var_1_47 - var_1_60);
 if (stepLocal_8 != -2) {
  if (var_1_53 > (((((var_1_17) > (var_1_34)) ? (var_1_17) : (var_1_34))) - var_1_16)) {
   if (var_1_60 > stepLocal_9) {
    var_1_46 = (32 - ((((((((var_1_43) > (var_1_48)) ? (var_1_43) : (var_1_48)))) < (var_1_49)) ? (((((var_1_43) > (var_1_48)) ? (var_1_43) : (var_1_48)))) : (var_1_49))));
   } else {
    var_1_46 = ((((var_1_49) > (var_1_43)) ? (var_1_49) : (var_1_43)));
   }
  } else {
   var_1_46 = (((((var_1_43 + var_1_26)) > (((((var_1_25) < (var_1_49)) ? (var_1_25) : (var_1_49))))) ? ((var_1_43 + var_1_26)) : (((((var_1_25) < (var_1_49)) ? (var_1_25) : (var_1_49))))));
  }
 } else {
  var_1_46 = ((((var_1_26) < (var_1_48)) ? (var_1_26) : (var_1_48)));
 }
 if (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) <= (((((2 << var_1_3)) < (var_1_43)) ? ((2 << var_1_3)) : (var_1_43)))) {
  if (var_1_38) {
   var_1_50 = (var_1_51 - ((((16u) < (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (16u) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))));
  } else {
   var_1_50 = ((((var_1_41) < ((((((var_1_51 - var_1_56)) > (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29))))) ? ((var_1_51 - var_1_56)) : (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29)))))))) ? (var_1_41) : ((((((var_1_51 - var_1_56)) > (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29))))) ? ((var_1_51 - var_1_56)) : (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29)))))))));
  }
 } else {
  var_1_50 = (var_1_20 + ((var_1_2 + var_1_52) + var_1_44));
 }
 if (var_1_56 <= var_1_9) {
  var_1_4 = (var_1_5 && var_1_6);
 }
 if (-16 < var_1_37) {
  if (((((var_1_19 * var_1_50) < 0 ) ? -(var_1_19 * var_1_50) : (var_1_19 * var_1_50))) == (var_1_20 / ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))) {
   var_1_31 = (var_1_16 - ((((var_1_17) > ((var_1_34 + var_1_35))) ? (var_1_17) : ((var_1_34 + var_1_35)))));
  }
 } else {
  var_1_31 = (var_1_35 - var_1_17);
 }
 unsigned long int stepLocal_6 = var_1_28 & var_1_33;
 if (var_1_4) {
  var_1_36 = (var_1_2 + var_1_25);
 } else {
  if (stepLocal_6 >= var_1_20) {
   var_1_36 = (var_1_56 + var_1_25);
  } else {
   var_1_36 = (var_1_25 + var_1_22);
  }
 }
 if (! var_1_8) {
  var_1_45 = var_1_41;
 } else {
  if (var_1_19 < (- (- var_1_50))) {
   var_1_45 = ((((var_1_44) < ((var_1_42 + var_1_37))) ? (var_1_44) : ((var_1_42 + var_1_37))));
  } else {
   var_1_45 = var_1_43;
  }
 }
 if (var_1_19 != (- (var_1_51 + var_1_33))) {
  var_1_55 = (((((var_1_34 - (var_1_35 + var_1_17))) > (var_1_15)) ? ((var_1_34 - (var_1_35 + var_1_17))) : (var_1_15)));
 } else {
  if (var_1_50 < (var_1_11 * var_1_45)) {
   var_1_55 = ((((var_1_34) > (((((16.375f) < ((var_1_35 + var_1_17))) ? (16.375f) : ((var_1_35 + var_1_17)))))) ? (var_1_34) : (((((16.375f) < ((var_1_35 + var_1_17))) ? (16.375f) : ((var_1_35 + var_1_17)))))));
  }
 }
 unsigned long int stepLocal_3 = var_1_45 + 1u;
 if (stepLocal_3 != var_1_37) {
  var_1_12 = ((var_1_14 + var_1_15) + (var_1_16 - var_1_17));
 }
 if (var_1_16 < var_1_15) {
  if (((((var_1_36 + var_1_2) < 0 ) ? -(var_1_36 + var_1_2) : (var_1_36 + var_1_2))) <= (var_1_37 - var_1_20)) {
   var_1_21 = var_1_2;
  }
 } else {
  var_1_21 = ((((((((4) > (var_1_2)) ? (4) : (var_1_2)))) > (var_1_22)) ? (((((4) > (var_1_2)) ? (4) : (var_1_2)))) : (var_1_22)));
 }
 unsigned long int stepLocal_5 = var_1_37;
 if (stepLocal_5 >= ((var_1_28 + var_1_36) - var_1_20)) {
  var_1_23 = (((((8) > (var_1_25)) ? (8) : (var_1_25))) + var_1_26);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 16383);
 assume_abort_if_not(var_1_19 <= 32768);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 16384);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -63);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -63);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 127);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 63);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 127);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= 1073741823);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 536870912);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 8192);
 assume_abort_if_not(var_1_57 <= 16383);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 16383);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 16384);
 assume_abort_if_not(var_1_59 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_56 = var_1_56;
}
int property(void) {
 return ((((((((((((((((((((((((((var_1_1 == ((unsigned char) var_1_2)) && (var_1_3 == ((signed short int) last_1_var_1_50))) && ((var_1_56 <= var_1_9) ? (var_1_4 == ((unsigned char) (var_1_5 && var_1_6))) : 1)) && (var_1_7 == ((unsigned char) (! var_1_8)))) && ((var_1_60 <= (var_1_11 + var_1_2)) ? ((var_1_2 == last_1_var_1_9) ? ((var_1_2 != var_1_11) ? (var_1_9 == ((unsigned long int) 128u)) : (var_1_9 == ((unsigned long int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : (var_1_9 == ((unsigned long int) var_1_11))) : (var_1_9 == ((unsigned long int) 100000000u)))) && (var_1_11 == ((signed long int) (last_1_var_1_56 - var_1_2)))) && (((var_1_45 + 1u) != var_1_37) ? (var_1_12 == ((float) ((var_1_14 + var_1_15) + (var_1_16 - var_1_17)))) : 1)) && ((((var_1_19 + var_1_20) - var_1_37) != -16) ? (var_1_18 == ((unsigned short int) (var_1_9 + var_1_2))) : 1)) && ((var_1_16 < var_1_15) ? ((((((var_1_36 + var_1_2) < 0 ) ? -(var_1_36 + var_1_2) : (var_1_36 + var_1_2))) <= (var_1_37 - var_1_20)) ? (var_1_21 == ((unsigned char) var_1_2)) : 1) : (var_1_21 == ((unsigned char) ((((((((4) > (var_1_2)) ? (4) : (var_1_2)))) > (var_1_22)) ? (((((4) > (var_1_2)) ? (4) : (var_1_2)))) : (var_1_22))))))) && ((var_1_37 >= ((var_1_28 + var_1_36) - var_1_20)) ? (var_1_23 == ((signed char) (((((8) > (var_1_25)) ? (8) : (var_1_25))) + var_1_26))) : 1)) && (var_1_27 == ((double) (var_1_14 + var_1_15)))) && ((var_1_60 > var_1_20) ? (var_1_28 == ((unsigned long int) var_1_29)) : 1)) && ((! (var_1_14 >= ((((var_1_16) > (255.125f)) ? (var_1_16) : (255.125f))))) ? (var_1_30 == ((unsigned char) var_1_5)) : (var_1_30 == ((unsigned char) (! var_1_8))))) && ((-16 < var_1_37) ? ((((((var_1_19 * var_1_50) < 0 ) ? -(var_1_19 * var_1_50) : (var_1_19 * var_1_50))) == (var_1_20 / ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))) ? (var_1_31 == ((float) (var_1_16 - ((((var_1_17) > ((var_1_34 + var_1_35))) ? (var_1_17) : ((var_1_34 + var_1_35))))))) : 1) : (var_1_31 == ((float) (var_1_35 - var_1_17))))) && (var_1_4 ? (var_1_36 == ((signed short int) (var_1_2 + var_1_25))) : (((var_1_28 & var_1_33) >= var_1_20) ? (var_1_36 == ((signed short int) (var_1_56 + var_1_25))) : (var_1_36 == ((signed short int) (var_1_25 + var_1_22)))))) && ((last_1_var_1_55 != (((((var_1_35) < (25.8f)) ? (var_1_35) : (25.8f))) * 9.9999999994E9f)) ? (var_1_37 == ((unsigned long int) last_1_var_1_50)) : (var_1_37 == ((unsigned long int) ((((last_1_var_1_50) < (4u)) ? (last_1_var_1_50) : (4u))))))) && (var_1_6 ? ((var_1_5 && var_1_7) ? (var_1_38 == ((unsigned char) ((var_1_28 != (var_1_11 * 5u)) || var_1_5))) : (var_1_38 == ((unsigned char) (var_1_5 || var_1_39)))) : (var_1_38 == ((unsigned char) var_1_5)))) && (var_1_30 ? ((var_1_38 || (var_1_19 > (var_1_3 / 8))) ? ((var_1_8 && (var_1_27 < var_1_17)) ? (var_1_40 == ((unsigned char) (((((var_1_41 - (var_1_42 - var_1_43))) < (128)) ? ((var_1_41 - (var_1_42 - var_1_43))) : (128))))) : (var_1_40 == ((unsigned char) (var_1_41 - var_1_42)))) : ((var_1_60 <= (var_1_33 / var_1_41)) ? (var_1_40 == ((unsigned char) var_1_41)) : (var_1_40 == ((unsigned char) (((((((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))) - var_1_43)) > (((((var_1_2) < (var_1_42)) ? (var_1_2) : (var_1_42))))) ? ((((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))) - var_1_43)) : (((((var_1_2) < (var_1_42)) ? (var_1_2) : (var_1_42)))))))))) : 1)) && ((! var_1_8) ? (var_1_45 == ((unsigned long int) var_1_41)) : ((var_1_19 < (- (- var_1_50))) ? (var_1_45 == ((unsigned long int) ((((var_1_44) < ((var_1_42 + var_1_37))) ? (var_1_44) : ((var_1_42 + var_1_37)))))) : (var_1_45 == ((unsigned long int) var_1_43))))) && (((var_1_19 - (var_1_47 - var_1_60)) != -2) ? ((var_1_53 > (((((var_1_17) > (var_1_34)) ? (var_1_17) : (var_1_34))) - var_1_16)) ? ((var_1_60 > (~ var_1_28)) ? (var_1_46 == ((signed char) (32 - ((((((((var_1_43) > (var_1_48)) ? (var_1_43) : (var_1_48)))) < (var_1_49)) ? (((((var_1_43) > (var_1_48)) ? (var_1_43) : (var_1_48)))) : (var_1_49)))))) : (var_1_46 == ((signed char) ((((var_1_49) > (var_1_43)) ? (var_1_49) : (var_1_43)))))) : (var_1_46 == ((signed char) (((((var_1_43 + var_1_26)) > (((((var_1_25) < (var_1_49)) ? (var_1_25) : (var_1_49))))) ? ((var_1_43 + var_1_26)) : (((((var_1_25) < (var_1_49)) ? (var_1_25) : (var_1_49))))))))) : (var_1_46 == ((signed char) ((((var_1_26) < (var_1_48)) ? (var_1_26) : (var_1_48))))))) && ((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) <= (((((2 << var_1_3)) < (var_1_43)) ? ((2 << var_1_3)) : (var_1_43)))) ? (var_1_38 ? (var_1_50 == ((unsigned long int) (var_1_51 - ((((16u) < (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (16u) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))))) : (var_1_50 == ((unsigned long int) ((((var_1_41) < ((((((var_1_51 - var_1_56)) > (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29))))) ? ((var_1_51 - var_1_56)) : (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29)))))))) ? (var_1_41) : ((((((var_1_51 - var_1_56)) > (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29))))) ? ((var_1_51 - var_1_56)) : (((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29)))))))))))) : (var_1_50 == ((unsigned long int) (var_1_20 + ((var_1_2 + var_1_52) + var_1_44)))))) && ((var_1_44 < var_1_47) ? (var_1_5 ? ((var_1_15 != var_1_14) ? (var_1_53 == ((double) (var_1_16 + var_1_15))) : 1) : 1) : ((var_1_37 >= 16u) ? (var_1_53 == ((double) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : (var_1_53 == ((double) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))))) && (var_1_7 ? (var_1_54 == ((signed long int) ((((last_1_var_1_54) < ((var_1_11 + ((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54)))))) ? (last_1_var_1_54) : ((var_1_11 + ((((last_1_var_1_54) < 0 ) ? -(last_1_var_1_54) : (last_1_var_1_54))))))))) : (var_1_54 == ((signed long int) ((((((16) < 0 ) ? -(16) : (16))) - var_1_43) + ((((((((var_1_19) > (var_1_1)) ? (var_1_19) : (var_1_1)))) < (var_1_2)) ? (((((var_1_19) > (var_1_1)) ? (var_1_19) : (var_1_1)))) : (var_1_2)))))))) && ((var_1_19 != (- (var_1_51 + var_1_33))) ? (var_1_55 == ((float) (((((var_1_34 - (var_1_35 + var_1_17))) > (var_1_15)) ? ((var_1_34 - (var_1_35 + var_1_17))) : (var_1_15))))) : ((var_1_50 < (var_1_11 * var_1_45)) ? (var_1_55 == ((float) ((((var_1_34) > (((((16.375f) < ((var_1_35 + var_1_17))) ? (16.375f) : ((var_1_35 + var_1_17)))))) ? (var_1_34) : (((((16.375f) < ((var_1_35 + var_1_17))) ? (16.375f) : ((var_1_35 + var_1_17))))))))) : 1))) && (var_1_39 ? ((var_1_19 >= var_1_51) ? (var_1_56 == ((unsigned short int) (((10000 + var_1_57) - 64) + (var_1_2 + ((((var_1_60) < (var_1_58)) ? (var_1_60) : (var_1_58))))))) : (var_1_56 == ((unsigned short int) ((var_1_20 + var_1_59) - ((((var_1_41) > (var_1_58)) ? (var_1_41) : (var_1_58))))))) : ((var_1_54 <= var_1_57) ? (var_1_56 == ((unsigned short int) var_1_41)) : (var_1_56 == ((unsigned short int) var_1_20))))) && (var_1_6 ? (var_1_60 == ((signed short int) var_1_41)) : 1)) && (var_1_6 ? (((var_1_52 / var_1_41) < 64u) ? (var_1_61 == ((double) (var_1_16 - (var_1_35 + var_1_34)))) : 1) : (var_1_7 ? (var_1_61 == ((double) var_1_34)) : (var_1_61 == ((double) var_1_17))))
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
