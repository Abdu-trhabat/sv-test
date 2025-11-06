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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13Amount250.c", 13, "reach_error"); }
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
signed long int var_1_2 = -4;
signed long int var_1_3 = 2;
signed short int var_1_5 = 25;
signed short int var_1_6 = 10;
signed short int var_1_7 = 128;
signed short int var_1_8 = 256;
signed char var_1_9 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -10;
signed char var_1_12 = -25;
double var_1_13 = 64.875;
double var_1_15 = 1.625;
double var_1_16 = 32.2;
double var_1_17 = 8.6;
double var_1_18 = 10.5;
signed long int var_1_19 = 1994586494;
signed long int var_1_20 = 4;
unsigned long int var_1_21 = 50;
unsigned long int var_1_22 = 1000000000;
unsigned long int var_1_23 = 2;
unsigned char var_1_24 = 0;
float var_1_25 = 31.6;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 5.5;
unsigned short int var_1_31 = 100;
unsigned short int var_1_32 = 35973;
unsigned short int var_1_33 = 256;
unsigned short int var_1_34 = 4;
unsigned short int var_1_35 = 43883;
unsigned short int var_1_36 = 10;
signed short int var_1_37 = 5;
float var_1_38 = 999999999999.5;
float var_1_39 = 0.0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 10;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 4;
unsigned char var_1_44 = 4;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
signed short int var_1_47 = -1;
signed short int var_1_48 = 10000;
signed short int var_1_49 = 10000;
unsigned short int var_1_50 = 100;
unsigned short int var_1_51 = 32;
unsigned short int var_1_52 = 5;
float var_1_53 = 1000.5;
unsigned char var_1_54 = 50;
unsigned char var_1_55 = 64;
unsigned char var_1_56 = 100;
unsigned char var_1_57 = 64;
signed short int var_1_58 = -32;
double var_1_59 = 256.5;
double var_1_60 = 100000.125;
double var_1_61 = 24.6;
double var_1_62 = 9.2;
signed short int var_1_63 = 10000;
unsigned long int var_1_65 = 5;
unsigned char var_1_66 = 1;
float var_1_67 = 9.125;
signed short int var_1_68 = -100;
signed short int var_1_69 = 32;
unsigned short int var_1_70 = 25;
double last_1_var_1_13 = 64.875;
float last_1_var_1_53 = 1000.5;
unsigned char last_1_var_1_66 = 1;
unsigned short int last_1_var_1_70 = 25;
void initially(void) {
}
void step(void) {
 if ((var_1_2 <= var_1_3) || last_1_var_1_66) {
  var_1_1 = 0;
 }
 if ((9.5f / var_1_25) != var_1_18) {
  if (! var_1_1) {
   if (var_1_16 > (- var_1_15)) {
    var_1_24 = (var_1_26 || var_1_27);
   } else {
    var_1_24 = ((var_1_27 && var_1_26) || (! (! var_1_28)));
   }
  } else {
   var_1_24 = (var_1_26 || var_1_27);
  }
 } else {
  var_1_24 = var_1_29;
 }
 if ((var_1_39 + 128.5f) == (var_1_17 / var_1_25)) {
  var_1_66 = ((var_1_24 && var_1_1) || var_1_29);
 } else {
  var_1_66 = var_1_29;
 }
 if (! (last_1_var_1_13 <= last_1_var_1_53)) {
  var_1_65 = var_1_20;
 } else {
  var_1_65 = var_1_56;
 }
 signed long int stepLocal_4 = var_1_6 * var_1_20;
 signed long int stepLocal_3 = var_1_19;
 if (var_1_65 >= stepLocal_4) {
  if (var_1_24) {
   var_1_21 = (((var_1_22 - var_1_8) + var_1_20) + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))));
  } else {
   var_1_21 = ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < ((var_1_22 + (var_1_8 + var_1_20)))) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : ((var_1_22 + (var_1_8 + var_1_20)))));
  }
 } else {
  if (var_1_8 < stepLocal_3) {
   var_1_21 = (var_1_22 + var_1_23);
  } else {
   var_1_21 = (var_1_19 + ((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22))));
  }
 }
 unsigned char stepLocal_15 = var_1_6 >= (var_1_12 / var_1_42);
 unsigned char stepLocal_14 = var_1_42;
 unsigned char stepLocal_13 = var_1_43;
 signed long int stepLocal_12 = 0;
 if (var_1_21 <= stepLocal_14) {
  if (((var_1_15 * 1000000.25) != ((((1000000.25) < (var_1_25)) ? (1000000.25) : (var_1_25)))) && stepLocal_15) {
   if (var_1_52 >= stepLocal_12) {
    var_1_53 = var_1_39;
   } else {
    var_1_53 = (var_1_16 - var_1_39);
   }
  } else {
   var_1_53 = ((((((var_1_16 - var_1_15)) > (var_1_18)) ? ((var_1_16 - var_1_15)) : (var_1_18))) + var_1_17);
  }
 } else {
  if (stepLocal_13 <= var_1_48) {
   var_1_53 = var_1_15;
  } else {
   var_1_53 = ((((var_1_17) > (var_1_39)) ? (var_1_17) : (var_1_39)));
  }
 }
 if (var_1_66 || var_1_1) {
  var_1_5 = ((((50) < (var_1_6)) ? (50) : (var_1_6)));
 } else {
  if (var_1_1) {
   var_1_5 = (var_1_7 - var_1_8);
  }
 }
 unsigned long int stepLocal_0 = var_1_21;
 if (stepLocal_0 > var_1_7) {
  var_1_9 = ((var_1_10 + var_1_11) + var_1_12);
 }
 if (var_1_29 || var_1_66) {
  var_1_30 = (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_15);
 } else {
  if (! var_1_24) {
   var_1_30 = var_1_18;
  } else {
   var_1_30 = var_1_16;
  }
 }
 signed long int stepLocal_6 = var_1_35 - var_1_36;
 unsigned short int stepLocal_5 = var_1_34;
 if (var_1_27) {
  var_1_31 = ((((var_1_8) > ((var_1_32 - ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)))))) ? (var_1_8) : ((var_1_32 - ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)))))));
 } else {
  if ((var_1_8 + var_1_21) != stepLocal_5) {
   if (var_1_32 < stepLocal_6) {
    var_1_31 = var_1_36;
   }
  } else {
   var_1_31 = var_1_36;
  }
 }
 unsigned char stepLocal_7 = var_1_66;
 if (((var_1_35 - var_1_36) >= 16) && stepLocal_7) {
  var_1_37 = ((((var_1_10 + ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)))) < 0 ) ? -(var_1_10 + ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)))) : (var_1_10 + ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))))));
 }
 signed short int stepLocal_8 = var_1_37;
 if (stepLocal_8 > var_1_65) {
  var_1_38 = (var_1_16 - var_1_15);
 } else {
  var_1_38 = (var_1_15 - ((((var_1_16) > ((var_1_39 - 64.5f))) ? (var_1_16) : ((var_1_39 - 64.5f)))));
 }
 if (((((var_1_35) > ((var_1_32 >> var_1_41))) ? (var_1_35) : ((var_1_32 >> var_1_41)))) > var_1_21) {
  var_1_40 = ((((((((var_1_41) < ((var_1_42 - var_1_43))) ? (var_1_41) : ((var_1_42 - var_1_43))))) < (((((var_1_44) > (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_44) : (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))))))) ? (((((var_1_41) < ((var_1_42 - var_1_43))) ? (var_1_41) : ((var_1_42 - var_1_43))))) : (((((var_1_44) > (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_44) : (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))))))));
 } else {
  var_1_40 = var_1_42;
 }
 var_1_47 = (((var_1_48 + var_1_49) - var_1_42) - (16 + var_1_5));
 unsigned long int stepLocal_9 = (((var_1_22) > (var_1_19)) ? (var_1_22) : (var_1_19));
 if (var_1_46 <= stepLocal_9) {
  var_1_50 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 } else {
  var_1_50 = (var_1_32 - var_1_45);
 }
 signed long int stepLocal_11 = var_1_19;
 signed long int stepLocal_10 = -2;
 if (var_1_35 >= stepLocal_11) {
  var_1_51 = var_1_52;
 } else {
  if ((var_1_21 + (var_1_20 * var_1_6)) <= stepLocal_10) {
   var_1_51 = (var_1_32 - 256);
  }
 }
 var_1_54 = ((var_1_55 + var_1_56) - (var_1_57 - 32));
 var_1_68 = var_1_12;
 signed long int stepLocal_20 = var_1_11 / var_1_55;
 signed long int stepLocal_19 = var_1_20;
 if ((- var_1_5) == stepLocal_19) {
  if (stepLocal_20 > (var_1_56 - ((((last_1_var_1_70) < (var_1_57)) ? (last_1_var_1_70) : (var_1_57))))) {
   if (var_1_29) {
    var_1_70 = var_1_42;
   }
  } else {
   var_1_70 = 128;
  }
 } else {
  var_1_70 = 50;
 }
 if (var_1_35 == var_1_37) {
  if (var_1_19 < ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) {
   var_1_59 = ((((var_1_39) > ((var_1_15 - var_1_16))) ? (var_1_39) : ((var_1_15 - var_1_16))));
  }
 } else {
  if (((((var_1_52) < (var_1_6)) ? (var_1_52) : (var_1_6))) > var_1_11) {
   if (var_1_28) {
    var_1_59 = (((((((((7.8 - var_1_39)) < (var_1_16)) ? ((7.8 - var_1_39)) : (var_1_16)))) > (((((var_1_18) > (var_1_15)) ? (var_1_18) : (var_1_15))))) ? ((((((7.8 - var_1_39)) < (var_1_16)) ? ((7.8 - var_1_39)) : (var_1_16)))) : (((((var_1_18) > (var_1_15)) ? (var_1_18) : (var_1_15))))));
   } else {
    if ((~ var_1_65) >= (2214230434u - var_1_36)) {
     var_1_59 = ((var_1_39 - var_1_60) - var_1_16);
    } else {
     var_1_59 = (((((9.9999999999957E10) > (var_1_17)) ? (9.9999999999957E10) : (var_1_17))) + ((var_1_61 - var_1_62) + var_1_18));
    }
   }
  }
 }
 unsigned char stepLocal_17 = var_1_28;
 if (var_1_24 && stepLocal_17) {
  if (var_1_59 <= var_1_25) {
   var_1_63 = (var_1_45 - var_1_8);
  } else {
   var_1_63 = var_1_46;
  }
 }
 unsigned char stepLocal_16 = var_1_56;
 if ((var_1_17 * var_1_25) < var_1_59) {
  var_1_58 = ((((var_1_57) < (var_1_12)) ? (var_1_57) : (var_1_12)));
 } else {
  if (var_1_66) {
   var_1_58 = var_1_57;
  } else {
   if (var_1_37 == stepLocal_16) {
    var_1_58 = (var_1_56 + var_1_37);
   } else {
    var_1_58 = (8 - (var_1_56 + var_1_49));
   }
  }
 }
 signed short int stepLocal_18 = var_1_68;
 if (var_1_65 <= stepLocal_18) {
  var_1_67 = (((((var_1_17 + (var_1_18 + var_1_62))) < (31.5f)) ? ((var_1_17 + (var_1_18 + var_1_62))) : (31.5f)));
 }
 if (var_1_1) {
  var_1_69 = var_1_63;
 } else {
  var_1_69 = var_1_45;
 }
 signed short int stepLocal_2 = var_1_63;
 signed long int stepLocal_1 = var_1_8 - (var_1_19 - var_1_20);
 if (stepLocal_2 > var_1_65) {
  var_1_13 = ((var_1_15 - var_1_16) + (((((var_1_17) > (499.25)) ? (var_1_17) : (499.25))) + var_1_18));
 } else {
  if ((2 | 32) <= stepLocal_1) {
   var_1_13 = ((((4.8) < (var_1_17)) ? (4.8) : (var_1_17)));
  } else {
   var_1_13 = (var_1_18 + var_1_16);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32767);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -31);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -31);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 536870912);
 assume_abort_if_not(var_1_22 <= 1073741824);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 32767);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 4611686.018427383000e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 15);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 127);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 8191);
 assume_abort_if_not(var_1_48 <= 16383);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 8191);
 assume_abort_if_not(var_1_49 <= 16383);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 65534);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 63);
 assume_abort_if_not(var_1_55 <= 127);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 64);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 63);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691400e+12F && var_1_62 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_70 = var_1_70;
}
int property(void) {
 return ((((((((((((((((((((((((((var_1_2 <= var_1_3) || last_1_var_1_66) ? (var_1_1 == ((unsigned char) 0)) : 1) && ((var_1_66 || var_1_1) ? (var_1_5 == ((signed short int) ((((50) < (var_1_6)) ? (50) : (var_1_6))))) : (var_1_1 ? (var_1_5 == ((signed short int) (var_1_7 - var_1_8))) : 1))) && ((var_1_21 > var_1_7) ? (var_1_9 == ((signed char) ((var_1_10 + var_1_11) + var_1_12))) : 1)) && ((var_1_63 > var_1_65) ? (var_1_13 == ((double) ((var_1_15 - var_1_16) + (((((var_1_17) > (499.25)) ? (var_1_17) : (499.25))) + var_1_18)))) : (((2 | 32) <= (var_1_8 - (var_1_19 - var_1_20))) ? (var_1_13 == ((double) ((((4.8) < (var_1_17)) ? (4.8) : (var_1_17))))) : (var_1_13 == ((double) (var_1_18 + var_1_16)))))) && ((var_1_65 >= (var_1_6 * var_1_20)) ? (var_1_24 ? (var_1_21 == ((unsigned long int) (((var_1_22 - var_1_8) + var_1_20) + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) : (var_1_21 == ((unsigned long int) ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < ((var_1_22 + (var_1_8 + var_1_20)))) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : ((var_1_22 + (var_1_8 + var_1_20)))))))) : ((var_1_8 < var_1_19) ? (var_1_21 == ((unsigned long int) (var_1_22 + var_1_23))) : (var_1_21 == ((unsigned long int) (var_1_19 + ((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22))))))))) && (((9.5f / var_1_25) != var_1_18) ? ((! var_1_1) ? ((var_1_16 > (- var_1_15)) ? (var_1_24 == ((unsigned char) (var_1_26 || var_1_27))) : (var_1_24 == ((unsigned char) ((var_1_27 && var_1_26) || (! (! var_1_28)))))) : (var_1_24 == ((unsigned char) (var_1_26 || var_1_27)))) : (var_1_24 == ((unsigned char) var_1_29)))) && ((var_1_29 || var_1_66) ? (var_1_30 == ((double) (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_15))) : ((! var_1_24) ? (var_1_30 == ((double) var_1_18)) : (var_1_30 == ((double) var_1_16))))) && (var_1_27 ? (var_1_31 == ((unsigned short int) ((((var_1_8) > ((var_1_32 - ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)))))) ? (var_1_8) : ((var_1_32 - ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))))))))) : (((var_1_8 + var_1_21) != var_1_34) ? ((var_1_32 < (var_1_35 - var_1_36)) ? (var_1_31 == ((unsigned short int) var_1_36)) : 1) : (var_1_31 == ((unsigned short int) var_1_36))))) && ((((var_1_35 - var_1_36) >= 16) && var_1_66) ? (var_1_37 == ((signed short int) ((((var_1_10 + ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)))) < 0 ) ? -(var_1_10 + ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)))) : (var_1_10 + ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)))))))) : 1)) && ((var_1_37 > var_1_65) ? (var_1_38 == ((float) (var_1_16 - var_1_15))) : (var_1_38 == ((float) (var_1_15 - ((((var_1_16) > ((var_1_39 - 64.5f))) ? (var_1_16) : ((var_1_39 - 64.5f))))))))) && ((((((var_1_35) > ((var_1_32 >> var_1_41))) ? (var_1_35) : ((var_1_32 >> var_1_41)))) > var_1_21) ? (var_1_40 == ((unsigned char) ((((((((var_1_41) < ((var_1_42 - var_1_43))) ? (var_1_41) : ((var_1_42 - var_1_43))))) < (((((var_1_44) > (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_44) : (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))))))) ? (((((var_1_41) < ((var_1_42 - var_1_43))) ? (var_1_41) : ((var_1_42 - var_1_43))))) : (((((var_1_44) > (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_44) : (((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))))))))) : (var_1_40 == ((unsigned char) var_1_42)))) && (var_1_47 == ((signed short int) (((var_1_48 + var_1_49) - var_1_42) - (16 + var_1_5))))) && ((var_1_46 <= ((((var_1_22) > (var_1_19)) ? (var_1_22) : (var_1_19)))) ? (var_1_50 == ((unsigned short int) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) : (var_1_50 == ((unsigned short int) (var_1_32 - var_1_45))))) && ((var_1_35 >= var_1_19) ? (var_1_51 == ((unsigned short int) var_1_52)) : (((var_1_21 + (var_1_20 * var_1_6)) <= -2) ? (var_1_51 == ((unsigned short int) (var_1_32 - 256))) : 1))) && ((var_1_21 <= var_1_42) ? ((((var_1_15 * 1000000.25) != ((((1000000.25) < (var_1_25)) ? (1000000.25) : (var_1_25)))) && (var_1_6 >= (var_1_12 / var_1_42))) ? ((var_1_52 >= 0) ? (var_1_53 == ((float) var_1_39)) : (var_1_53 == ((float) (var_1_16 - var_1_39)))) : (var_1_53 == ((float) ((((((var_1_16 - var_1_15)) > (var_1_18)) ? ((var_1_16 - var_1_15)) : (var_1_18))) + var_1_17)))) : ((var_1_43 <= var_1_48) ? (var_1_53 == ((float) var_1_15)) : (var_1_53 == ((float) ((((var_1_17) > (var_1_39)) ? (var_1_17) : (var_1_39)))))))) && (var_1_54 == ((unsigned char) ((var_1_55 + var_1_56) - (var_1_57 - 32))))) && (((var_1_17 * var_1_25) < var_1_59) ? (var_1_58 == ((signed short int) ((((var_1_57) < (var_1_12)) ? (var_1_57) : (var_1_12))))) : (var_1_66 ? (var_1_58 == ((signed short int) var_1_57)) : ((var_1_37 == var_1_56) ? (var_1_58 == ((signed short int) (var_1_56 + var_1_37))) : (var_1_58 == ((signed short int) (8 - (var_1_56 + var_1_49)))))))) && ((var_1_35 == var_1_37) ? ((var_1_19 < ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) ? (var_1_59 == ((double) ((((var_1_39) > ((var_1_15 - var_1_16))) ? (var_1_39) : ((var_1_15 - var_1_16)))))) : 1) : ((((((var_1_52) < (var_1_6)) ? (var_1_52) : (var_1_6))) > var_1_11) ? (var_1_28 ? (var_1_59 == ((double) (((((((((7.8 - var_1_39)) < (var_1_16)) ? ((7.8 - var_1_39)) : (var_1_16)))) > (((((var_1_18) > (var_1_15)) ? (var_1_18) : (var_1_15))))) ? ((((((7.8 - var_1_39)) < (var_1_16)) ? ((7.8 - var_1_39)) : (var_1_16)))) : (((((var_1_18) > (var_1_15)) ? (var_1_18) : (var_1_15)))))))) : (((~ var_1_65) >= (2214230434u - var_1_36)) ? (var_1_59 == ((double) ((var_1_39 - var_1_60) - var_1_16))) : (var_1_59 == ((double) (((((9.9999999999957E10) > (var_1_17)) ? (9.9999999999957E10) : (var_1_17))) + ((var_1_61 - var_1_62) + var_1_18)))))) : 1))) && ((var_1_24 && var_1_28) ? ((var_1_59 <= var_1_25) ? (var_1_63 == ((signed short int) (var_1_45 - var_1_8))) : (var_1_63 == ((signed short int) var_1_46))) : 1)) && ((! (last_1_var_1_13 <= last_1_var_1_53)) ? (var_1_65 == ((unsigned long int) var_1_20)) : (var_1_65 == ((unsigned long int) var_1_56)))) && (((var_1_39 + 128.5f) == (var_1_17 / var_1_25)) ? (var_1_66 == ((unsigned char) ((var_1_24 && var_1_1) || var_1_29))) : (var_1_66 == ((unsigned char) var_1_29)))) && ((var_1_65 <= var_1_68) ? (var_1_67 == ((float) (((((var_1_17 + (var_1_18 + var_1_62))) < (31.5f)) ? ((var_1_17 + (var_1_18 + var_1_62))) : (31.5f))))) : 1)) && (var_1_68 == ((signed short int) var_1_12))) && (var_1_1 ? (var_1_69 == ((signed short int) var_1_63)) : (var_1_69 == ((signed short int) var_1_45)))) && (((- var_1_5) == var_1_20) ? (((var_1_11 / var_1_55) > (var_1_56 - ((((last_1_var_1_70) < (var_1_57)) ? (last_1_var_1_70) : (var_1_57))))) ? (var_1_29 ? (var_1_70 == ((unsigned short int) var_1_42)) : 1) : (var_1_70 == ((unsigned short int) 128))) : (var_1_70 == ((unsigned short int) 50)))
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
