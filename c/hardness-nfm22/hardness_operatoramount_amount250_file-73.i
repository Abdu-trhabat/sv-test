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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 32;
unsigned long int var_1_4 = 1982060228;
signed char var_1_7 = 50;
double var_1_10 = 31.8;
double var_1_11 = 10.5;
signed char var_1_12 = -2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
signed char var_1_15 = -25;
signed char var_1_16 = 64;
signed char var_1_17 = 2;
signed char var_1_18 = 64;
float var_1_19 = 5.9;
float var_1_21 = 32.5;
float var_1_22 = 0.75;
unsigned char var_1_23 = 10;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 8;
double var_1_28 = 9.8;
double var_1_29 = 15.6;
double var_1_30 = 0.0;
double var_1_31 = 0.0;
double var_1_32 = 0.4;
signed long int var_1_33 = -500;
unsigned long int var_1_34 = 128;
double var_1_35 = 99.06;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 25;
float var_1_40 = 2.2;
signed long int var_1_41 = -128;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
signed char var_1_47 = 50;
signed char var_1_48 = 100;
float var_1_49 = 1.1;
signed short int var_1_50 = -128;
float var_1_51 = 0.8;
float var_1_52 = 16.6;
float var_1_53 = 49.875;
signed short int var_1_54 = -64;
unsigned short int var_1_55 = 4;
signed long int var_1_56 = 10;
signed long int var_1_57 = 1587091326;
signed long int var_1_58 = 1000000000;
unsigned long int var_1_59 = 5;
signed short int var_1_61 = 0;
signed long int var_1_62 = 8;
signed short int var_1_63 = 16;
unsigned short int var_1_64 = 50;
unsigned short int var_1_66 = 63312;
unsigned short int var_1_67 = 20142;
signed long int var_1_68 = 8;
unsigned short int var_1_69 = 100;
float last_1_var_1_19 = 5.9;
unsigned char last_1_var_1_42 = 0;
float last_1_var_1_49 = 1.1;
unsigned short int last_1_var_1_55 = 4;
unsigned long int last_1_var_1_59 = 5;
unsigned short int last_1_var_1_64 = 50;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = last_1_var_1_64;
 if (stepLocal_4 <= 25u) {
  var_1_56 = ((last_1_var_1_55 + var_1_25) - (var_1_57 - (var_1_58 - var_1_18)));
 }
 var_1_36 = (! (last_1_var_1_42 && var_1_37));
 signed long int stepLocal_3 = - var_1_41;
 if (stepLocal_3 == var_1_17) {
  var_1_42 = (var_1_37 || (var_1_36 || var_1_43));
 } else {
  var_1_42 = (! var_1_43);
 }
 if (((((((((last_1_var_1_19) < (last_1_var_1_49)) ? (last_1_var_1_19) : (last_1_var_1_49)))) < (-0.6)) ? (((((last_1_var_1_19) < (last_1_var_1_49)) ? (last_1_var_1_19) : (last_1_var_1_49)))) : (-0.6))) == (var_1_10 - var_1_11)) {
  var_1_7 = (((((4 + var_1_12)) > (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) ? ((4 + var_1_12)) : (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))));
 } else {
  var_1_7 = ((var_1_16 - var_1_17) - var_1_18);
 }
 if (var_1_37) {
  var_1_44 = (var_1_45 || var_1_46);
 } else {
  var_1_44 = var_1_43;
 }
 if (var_1_43) {
  var_1_55 = var_1_27;
 } else {
  var_1_55 = var_1_48;
 }
 var_1_61 = ((var_1_15 + var_1_16) + var_1_12);
 if (((var_1_11 - var_1_30) * var_1_10) < var_1_52) {
  var_1_63 = (128 + var_1_15);
 } else {
  var_1_63 = (var_1_48 - var_1_18);
 }
 unsigned char stepLocal_11 = var_1_43;
 if (var_1_36 && stepLocal_11) {
  if (! var_1_44) {
   var_1_69 = ((((var_1_25) > (var_1_18)) ? (var_1_25) : (var_1_18)));
  } else {
   if (var_1_42) {
    var_1_69 = var_1_26;
   } else {
    var_1_69 = var_1_26;
   }
  }
 }
 signed long int stepLocal_9 = ((((var_1_56 * var_1_56)) < (var_1_16)) ? ((var_1_56 * var_1_56)) : (var_1_16));
 signed long int stepLocal_8 = var_1_57;
 if ((((((var_1_48) < (last_1_var_1_64)) ? (var_1_48) : (last_1_var_1_64))) ^ var_1_69) > stepLocal_9) {
  if (var_1_56 > stepLocal_8) {
   var_1_64 = (var_1_66 - (var_1_67 - var_1_16));
  }
 } else {
  var_1_64 = var_1_25;
 }
 if ((! var_1_42) && var_1_44) {
  var_1_19 = (var_1_21 + var_1_22);
 }
 if (var_1_44) {
  var_1_28 = (var_1_29 - (var_1_30 - (var_1_31 - 256.6)));
 } else {
  var_1_28 = (((((var_1_31 + var_1_22)) > ((var_1_21 + var_1_32))) ? ((var_1_31 + var_1_22)) : ((var_1_21 + var_1_32))));
 }
 if (var_1_42) {
  var_1_34 = ((((((((((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) > (var_1_25)) ? (((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) : (var_1_25)))) < ((var_1_18 + var_1_64))) ? (((((((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) > (var_1_25)) ? (((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) : (var_1_25)))) : ((var_1_18 + var_1_64))));
 } else {
  if ((- var_1_28) >= (var_1_10 - (var_1_31 + var_1_35))) {
   var_1_34 = (((((4018046835u - var_1_4)) < (((((var_1_16) < (var_1_26)) ? (var_1_16) : (var_1_26))))) ? ((4018046835u - var_1_4)) : (((((var_1_16) < (var_1_26)) ? (var_1_16) : (var_1_26))))));
  } else {
   var_1_34 = var_1_55;
  }
 }
 if (var_1_22 == 1.5f) {
  if (var_1_42) {
   var_1_38 = ((((var_1_64) < (var_1_25)) ? (var_1_64) : (var_1_25)));
  }
 }
 unsigned short int stepLocal_5 = var_1_69;
 if ((var_1_55 * var_1_64) < stepLocal_5) {
  var_1_59 = (var_1_61 + ((((var_1_55) < (last_1_var_1_59)) ? (var_1_55) : (last_1_var_1_59))));
 } else {
  var_1_59 = ((((var_1_48) > (16u)) ? (var_1_48) : (16u)));
 }
 signed char stepLocal_7 = var_1_17;
 unsigned char stepLocal_6 = var_1_42;
 if (var_1_64 >= stepLocal_7) {
  if (var_1_37 && stepLocal_6) {
   if (var_1_35 >= var_1_11) {
    var_1_62 = (var_1_61 - var_1_64);
   } else {
    var_1_62 = (var_1_26 - var_1_64);
   }
  }
 } else {
  var_1_62 = (var_1_25 - 64);
 }
 unsigned short int stepLocal_1 = var_1_55;
 unsigned long int stepLocal_0 = var_1_34;
 if ((var_1_34 / ((((var_1_16) > (var_1_4)) ? (var_1_16) : (var_1_4)))) <= stepLocal_0) {
  if (stepLocal_1 < var_1_18) {
   var_1_23 = (var_1_17 + ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))));
  } else {
   var_1_23 = (((((200 - ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))) < ((((((128 - var_1_17)) < (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((128 - var_1_17)) : (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))))))) ? ((200 - ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))) : ((((((128 - var_1_17)) < (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((128 - var_1_17)) : (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))))))));
  }
 } else {
  var_1_23 = var_1_27;
 }
 if (1000 >= var_1_23) {
  var_1_47 = (var_1_18 - ((((var_1_16) < ((var_1_48 - var_1_17))) ? (var_1_16) : ((var_1_48 - var_1_17)))));
 }
 signed long int stepLocal_10 = var_1_55 / var_1_48;
 if (var_1_23 >= stepLocal_10) {
  var_1_68 = var_1_61;
 } else {
  var_1_68 = var_1_18;
 }
 if ((var_1_4 + var_1_23) <= 32u) {
  if (((var_1_7 + var_1_25) - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) <= var_1_59) {
   var_1_50 = var_1_13;
  } else {
   var_1_50 = var_1_7;
  }
 } else {
  var_1_50 = 256;
 }
 if (var_1_44) {
  var_1_1 = (var_1_23 + ((var_1_4 - var_1_64) - var_1_23));
 }
 if (var_1_26 >= var_1_17) {
  if ((var_1_16 * var_1_61) >= (var_1_17 - 4)) {
   var_1_33 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
  } else {
   var_1_33 = (var_1_25 + (var_1_68 - 8));
  }
 } else {
  if ((var_1_12 < var_1_14) || var_1_44) {
   var_1_33 = (var_1_25 + (var_1_26 - (var_1_17 + var_1_68)));
  } else {
   var_1_33 = 5;
  }
 }
 signed long int stepLocal_2 = var_1_68;
 if ((-1 - var_1_16) < stepLocal_2) {
  if ((((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28))) * 2.6f) > var_1_19) {
   var_1_40 = ((((var_1_31) > (((((var_1_29) < (var_1_35)) ? (var_1_29) : (var_1_35))))) ? (var_1_31) : (((((var_1_29) < (var_1_35)) ? (var_1_29) : (var_1_35))))));
  } else {
   var_1_40 = (((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31))) - var_1_30);
  }
 } else {
  var_1_40 = (((((var_1_32 + var_1_22)) < (var_1_29)) ? ((var_1_32 + var_1_22)) : (var_1_29)));
 }
 if (! var_1_36) {
  if (((8 & var_1_48) * var_1_13) > var_1_41) {
   if (var_1_25 <= var_1_17) {
    var_1_54 = var_1_17;
   } else {
    if (var_1_23 >= var_1_55) {
     var_1_54 = (var_1_16 - (var_1_48 + var_1_33));
    }
   }
  } else {
   var_1_54 = (var_1_18 - var_1_33);
  }
 }
 if ((! var_1_45) && ((var_1_25 * 32) > var_1_12)) {
  var_1_49 = (var_1_30 - var_1_31);
 } else {
  if (var_1_15 > (var_1_41 * var_1_13)) {
   var_1_49 = ((6.4801649572748462E18f - var_1_31) - var_1_29);
  } else {
   if (var_1_1 < ((var_1_50 * var_1_23) * var_1_48)) {
    var_1_49 = (var_1_32 + var_1_31);
   } else {
    var_1_49 = ((8.3161214439142072E18f - var_1_31) - var_1_29);
   }
  }
 }
 if ((var_1_11 + var_1_10) <= ((((var_1_49) < (var_1_31)) ? (var_1_49) : (var_1_31)))) {
  var_1_51 = (var_1_21 + var_1_32);
 } else {
  var_1_51 = ((((var_1_22 + (var_1_52 + var_1_53)) < 0 ) ? -(var_1_22 + (var_1_52 + var_1_53)) : (var_1_22 + (var_1_52 + var_1_53))));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1610612735);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 62);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 4611686.018427382800e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 2305843.009213691390e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427387900e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -2147483648);
 assume_abort_if_not(var_1_41 <= 2147483647);
 assume_abort_if_not(var_1_41 != 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 63);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -230584.3009213691390e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -230584.3009213691390e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691390e+12F && var_1_53 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_57 >= 1073741823);
 assume_abort_if_not(var_1_57 <= 2147483646);
 var_1_58 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_58 >= 536870911);
 assume_abort_if_not(var_1_58 <= 1073741823);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 32767);
 assume_abort_if_not(var_1_66 <= 65534);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 16383);
 assume_abort_if_not(var_1_67 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_64 = var_1_64;
}
int property() {
 return (((((((((((((((((((((((((var_1_44 ? (var_1_1 == ((unsigned long int) (var_1_23 + ((var_1_4 - var_1_64) - var_1_23)))) : 1) && ((((((((((last_1_var_1_19) < (last_1_var_1_49)) ? (last_1_var_1_19) : (last_1_var_1_49)))) < (-0.6)) ? (((((last_1_var_1_19) < (last_1_var_1_49)) ? (last_1_var_1_19) : (last_1_var_1_49)))) : (-0.6))) == (var_1_10 - var_1_11)) ? (var_1_7 == ((signed char) (((((4 + var_1_12)) > (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) ? ((4 + var_1_12)) : (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))))))))) : (var_1_7 == ((signed char) ((var_1_16 - var_1_17) - var_1_18))))) && (((! var_1_42) && var_1_44) ? (var_1_19 == ((float) (var_1_21 + var_1_22))) : 1)) && (((var_1_34 / ((((var_1_16) > (var_1_4)) ? (var_1_16) : (var_1_4)))) <= var_1_34) ? ((var_1_55 < var_1_18) ? (var_1_23 == ((unsigned char) (var_1_17 + ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))))) : (var_1_23 == ((unsigned char) (((((200 - ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))) < ((((((128 - var_1_17)) < (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((128 - var_1_17)) : (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))))))) ? ((200 - ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))) : ((((((128 - var_1_17)) < (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))))) ? ((128 - var_1_17)) : (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))))))))))) : (var_1_23 == ((unsigned char) var_1_27)))) && (var_1_44 ? (var_1_28 == ((double) (var_1_29 - (var_1_30 - (var_1_31 - 256.6))))) : (var_1_28 == ((double) (((((var_1_31 + var_1_22)) > ((var_1_21 + var_1_32))) ? ((var_1_31 + var_1_22)) : ((var_1_21 + var_1_32)))))))) && ((var_1_26 >= var_1_17) ? (((var_1_16 * var_1_61) >= (var_1_17 - 4)) ? (var_1_33 == ((signed long int) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) : (var_1_33 == ((signed long int) (var_1_25 + (var_1_68 - 8))))) : (((var_1_12 < var_1_14) || var_1_44) ? (var_1_33 == ((signed long int) (var_1_25 + (var_1_26 - (var_1_17 + var_1_68))))) : (var_1_33 == ((signed long int) 5))))) && (var_1_42 ? (var_1_34 == ((unsigned long int) ((((((((((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) > (var_1_25)) ? (((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) : (var_1_25)))) < ((var_1_18 + var_1_64))) ? (((((((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) > (var_1_25)) ? (((((var_1_26) < (var_1_55)) ? (var_1_26) : (var_1_55)))) : (var_1_25)))) : ((var_1_18 + var_1_64)))))) : (((- var_1_28) >= (var_1_10 - (var_1_31 + var_1_35))) ? (var_1_34 == ((unsigned long int) (((((4018046835u - var_1_4)) < (((((var_1_16) < (var_1_26)) ? (var_1_16) : (var_1_26))))) ? ((4018046835u - var_1_4)) : (((((var_1_16) < (var_1_26)) ? (var_1_16) : (var_1_26)))))))) : (var_1_34 == ((unsigned long int) var_1_55))))) && (var_1_36 == ((unsigned char) (! (last_1_var_1_42 && var_1_37))))) && ((var_1_22 == 1.5f) ? (var_1_42 ? (var_1_38 == ((unsigned long int) ((((var_1_64) < (var_1_25)) ? (var_1_64) : (var_1_25))))) : 1) : 1)) && (((-1 - var_1_16) < var_1_68) ? (((((((var_1_22) > (var_1_28)) ? (var_1_22) : (var_1_28))) * 2.6f) > var_1_19) ? (var_1_40 == ((float) ((((var_1_31) > (((((var_1_29) < (var_1_35)) ? (var_1_29) : (var_1_35))))) ? (var_1_31) : (((((var_1_29) < (var_1_35)) ? (var_1_29) : (var_1_35)))))))) : (var_1_40 == ((float) (((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31))) - var_1_30)))) : (var_1_40 == ((float) (((((var_1_32 + var_1_22)) < (var_1_29)) ? ((var_1_32 + var_1_22)) : (var_1_29))))))) && (((- var_1_41) == var_1_17) ? (var_1_42 == ((unsigned char) (var_1_37 || (var_1_36 || var_1_43)))) : (var_1_42 == ((unsigned char) (! var_1_43))))) && (var_1_37 ? (var_1_44 == ((unsigned char) (var_1_45 || var_1_46))) : (var_1_44 == ((unsigned char) var_1_43)))) && ((1000 >= var_1_23) ? (var_1_47 == ((signed char) (var_1_18 - ((((var_1_16) < ((var_1_48 - var_1_17))) ? (var_1_16) : ((var_1_48 - var_1_17))))))) : 1)) && (((! var_1_45) && ((var_1_25 * 32) > var_1_12)) ? (var_1_49 == ((float) (var_1_30 - var_1_31))) : ((var_1_15 > (var_1_41 * var_1_13)) ? (var_1_49 == ((float) ((6.4801649572748462E18f - var_1_31) - var_1_29))) : ((var_1_1 < ((var_1_50 * var_1_23) * var_1_48)) ? (var_1_49 == ((float) (var_1_32 + var_1_31))) : (var_1_49 == ((float) ((8.3161214439142072E18f - var_1_31) - var_1_29))))))) && (((var_1_4 + var_1_23) <= 32u) ? ((((var_1_7 + var_1_25) - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) <= var_1_59) ? (var_1_50 == ((signed short int) var_1_13)) : (var_1_50 == ((signed short int) var_1_7))) : (var_1_50 == ((signed short int) 256)))) && (((var_1_11 + var_1_10) <= ((((var_1_49) < (var_1_31)) ? (var_1_49) : (var_1_31)))) ? (var_1_51 == ((float) (var_1_21 + var_1_32))) : (var_1_51 == ((float) ((((var_1_22 + (var_1_52 + var_1_53)) < 0 ) ? -(var_1_22 + (var_1_52 + var_1_53)) : (var_1_22 + (var_1_52 + var_1_53)))))))) && ((! var_1_36) ? ((((8 & var_1_48) * var_1_13) > var_1_41) ? ((var_1_25 <= var_1_17) ? (var_1_54 == ((signed short int) var_1_17)) : ((var_1_23 >= var_1_55) ? (var_1_54 == ((signed short int) (var_1_16 - (var_1_48 + var_1_33)))) : 1)) : (var_1_54 == ((signed short int) (var_1_18 - var_1_33)))) : 1)) && (var_1_43 ? (var_1_55 == ((unsigned short int) var_1_27)) : (var_1_55 == ((unsigned short int) var_1_48)))) && ((last_1_var_1_64 <= 25u) ? (var_1_56 == ((signed long int) ((last_1_var_1_55 + var_1_25) - (var_1_57 - (var_1_58 - var_1_18))))) : 1)) && (((var_1_55 * var_1_64) < var_1_69) ? (var_1_59 == ((unsigned long int) (var_1_61 + ((((var_1_55) < (last_1_var_1_59)) ? (var_1_55) : (last_1_var_1_59)))))) : (var_1_59 == ((unsigned long int) ((((var_1_48) > (16u)) ? (var_1_48) : (16u))))))) && (var_1_61 == ((signed short int) ((var_1_15 + var_1_16) + var_1_12)))) && ((var_1_64 >= var_1_17) ? ((var_1_37 && var_1_42) ? ((var_1_35 >= var_1_11) ? (var_1_62 == ((signed long int) (var_1_61 - var_1_64))) : (var_1_62 == ((signed long int) (var_1_26 - var_1_64)))) : 1) : (var_1_62 == ((signed long int) (var_1_25 - 64))))) && ((((var_1_11 - var_1_30) * var_1_10) < var_1_52) ? (var_1_63 == ((signed short int) (128 + var_1_15))) : (var_1_63 == ((signed short int) (var_1_48 - var_1_18))))) && (((((((var_1_48) < (last_1_var_1_64)) ? (var_1_48) : (last_1_var_1_64))) ^ var_1_69) > (((((var_1_56 * var_1_56)) < (var_1_16)) ? ((var_1_56 * var_1_56)) : (var_1_16)))) ? ((var_1_56 > var_1_57) ? (var_1_64 == ((unsigned short int) (var_1_66 - (var_1_67 - var_1_16)))) : 1) : (var_1_64 == ((unsigned short int) var_1_25)))) && ((var_1_23 >= (var_1_55 / var_1_48)) ? (var_1_68 == ((signed long int) var_1_61)) : (var_1_68 == ((signed long int) var_1_18)))) && ((var_1_36 && var_1_43) ? ((! var_1_44) ? (var_1_69 == ((unsigned short int) ((((var_1_25) > (var_1_18)) ? (var_1_25) : (var_1_18))))) : (var_1_42 ? (var_1_69 == ((unsigned short int) var_1_26)) : (var_1_69 == ((unsigned short int) var_1_26)))) : 1)
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
