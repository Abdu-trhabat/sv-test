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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 27042;
unsigned short int var_1_6 = 4;
unsigned short int var_1_7 = 22915;
unsigned short int var_1_8 = 5;
unsigned long int var_1_9 = 0;
signed char var_1_10 = -1;
signed char var_1_11 = 50;
unsigned long int var_1_14 = 1169201967;
signed short int var_1_15 = -2;
unsigned char var_1_16 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = 0.1;
unsigned char var_1_22 = 0;
double var_1_23 = 16.5;
double var_1_24 = 5.5;
double var_1_25 = 0.25;
double var_1_26 = 9.4;
float var_1_27 = 4.5;
double var_1_28 = 0.875;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 25;
signed char var_1_32 = -2;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 32;
signed char var_1_38 = 4;
signed char var_1_40 = 2;
double var_1_41 = 31.5;
double var_1_43 = 8.8;
double var_1_44 = 63.125;
unsigned short int var_1_45 = 5;
double var_1_46 = 5.5;
double var_1_47 = 5.3;
double var_1_48 = 4.5;
double var_1_49 = 1000.6;
unsigned short int var_1_50 = 8;
unsigned short int var_1_51 = 30317;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 64;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 200;
unsigned char var_1_63 = 2;
signed long int var_1_64 = -10;
signed long int var_1_65 = 2;
unsigned long int var_1_66 = 128;
unsigned long int var_1_67 = 1957814293;
signed short int var_1_68 = 10;
signed char var_1_69 = -128;
signed char var_1_70 = 64;
float last_1_var_1_27 = 4.5;
signed char last_1_var_1_38 = 4;
double last_1_var_1_41 = 31.5;
unsigned short int last_1_var_1_45 = 5;
unsigned short int last_1_var_1_50 = 8;
unsigned char last_1_var_1_57 = 1;
unsigned char last_1_var_1_61 = 0;
signed long int last_1_var_1_64 = -10;
unsigned long int last_1_var_1_66 = 128;
signed char last_1_var_1_69 = -128;
void initially(void) {
}
void step(void) {
 if (! (last_1_var_1_69 < var_1_35)) {
  var_1_53 = (var_1_54 - var_1_34);
 } else {
  if ((- var_1_25) >= var_1_44) {
   var_1_53 = ((((((var_1_33 + var_1_55) - ((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))))) < (var_1_11)) ? (((var_1_33 + var_1_55) - ((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))))) : (var_1_11)));
  } else {
   var_1_53 = ((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < ((((((var_1_54) > (var_1_56)) ? (var_1_54) : (var_1_56))) - var_1_34))) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : ((((((var_1_54) > (var_1_56)) ? (var_1_54) : (var_1_56))) - var_1_34))));
  }
 }
 if (var_1_20 || last_1_var_1_61) {
  var_1_23 = ((((15.25) > (var_1_24)) ? (15.25) : (var_1_24)));
 } else {
  var_1_23 = (var_1_25 + var_1_26);
 }
 unsigned short int stepLocal_0 = var_1_8;
 if ((var_1_10 - var_1_11) != stepLocal_0) {
  var_1_9 = last_1_var_1_45;
 } else {
  if ((25.8f + last_1_var_1_27) >= last_1_var_1_41) {
   var_1_9 = ((var_1_14 - var_1_5) + ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))));
  }
 }
 if (var_1_4 > var_1_9) {
  var_1_28 = var_1_26;
 }
 signed long int stepLocal_6 = last_1_var_1_50;
 unsigned char stepLocal_5 = last_1_var_1_57;
 if (last_1_var_1_38 >= stepLocal_6) {
  if (stepLocal_5 && last_1_var_1_61) {
   var_1_41 = ((var_1_43 + var_1_44) + var_1_26);
  }
 }
 var_1_15 = 16;
 if (2 > (var_1_5 / ((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36))))) {
  var_1_45 = (40684 - ((31497 - last_1_var_1_45) - var_1_11));
 }
 signed long int stepLocal_7 = var_1_8 * var_1_45;
 if (var_1_23 == var_1_41) {
  if (stepLocal_7 <= var_1_3) {
   var_1_46 = ((((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43))) + var_1_47) + (var_1_48 - var_1_49));
  } else {
   var_1_46 = (var_1_48 - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))));
  }
 } else {
  var_1_46 = (var_1_43 + var_1_47);
 }
 signed long int stepLocal_11 = -4;
 if (var_1_46 < (var_1_21 / 99.5)) {
  if (stepLocal_11 < var_1_14) {
   var_1_61 = ((128 <= var_1_9) && (var_1_59 && var_1_20));
  }
 } else {
  var_1_61 = ((var_1_15 > (var_1_55 << var_1_32)) || (var_1_60 && (! var_1_59)));
 }
 if (var_1_26 <= (var_1_41 + (- var_1_46))) {
  var_1_30 = (! (var_1_22 && var_1_20));
 }
 signed long int stepLocal_10 = var_1_6 / var_1_55;
 unsigned char stepLocal_9 = var_1_22;
 signed long int stepLocal_8 = - var_1_6;
 if (stepLocal_10 >= var_1_33) {
  if (stepLocal_8 < var_1_36) {
   if (var_1_20) {
    if (var_1_30) {
     var_1_57 = (var_1_30 && ((var_1_30 && var_1_58) || var_1_59));
    } else {
     var_1_57 = var_1_22;
    }
   } else {
    if (stepLocal_9 || (var_1_26 > var_1_28)) {
     var_1_57 = (var_1_58 || var_1_59);
    } else {
     var_1_57 = (var_1_22 || var_1_60);
    }
   }
  }
 } else {
  var_1_57 = var_1_22;
 }
 if (var_1_45 > var_1_37) {
  if (var_1_23 >= var_1_41) {
   var_1_52 = ((((100 + var_1_40) < 0 ) ? -(100 + var_1_40) : (100 + var_1_40)));
  }
 } else {
  var_1_52 = ((((((((var_1_40) > (var_1_33)) ? (var_1_40) : (var_1_33)))) < (((var_1_36 - var_1_37) + var_1_34))) ? (((((var_1_40) > (var_1_33)) ? (var_1_40) : (var_1_33)))) : (((var_1_36 - var_1_37) + var_1_34))));
 }
 if (var_1_30 && var_1_61) {
  var_1_38 = (var_1_35 + ((((var_1_37 - var_1_40) < 0 ) ? -(var_1_37 - var_1_40) : (var_1_37 - var_1_40))));
 } else {
  var_1_38 = (var_1_37 + var_1_40);
 }
 if (var_1_61) {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  var_1_1 = (((var_1_5 - var_1_6) + var_1_7) - var_1_8);
 }
 if (var_1_1 != (var_1_9 / var_1_37)) {
  if (var_1_34 >= (var_1_8 << var_1_6)) {
   var_1_62 = ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)));
  } else {
   var_1_62 = ((((var_1_11) < (8)) ? (var_1_11) : (8)));
  }
 } else {
  var_1_62 = ((var_1_33 - (32 - var_1_63)) + var_1_11);
 }
 if (var_1_46 > 0.8f) {
  if (var_1_21 >= 10.75) {
   if ((((((var_1_7 / var_1_51)) > (var_1_53)) ? ((var_1_7 / var_1_51)) : (var_1_53))) >= 2) {
    var_1_69 = ((var_1_70 - var_1_37) - var_1_63);
   }
  } else {
   var_1_69 = var_1_37;
  }
 }
 var_1_50 = (((var_1_5 + var_1_51) - ((((var_1_6) > (var_1_52)) ? (var_1_6) : (var_1_52)))) - (var_1_37 + (10000 - var_1_34)));
 signed long int stepLocal_13 = var_1_50 / var_1_33;
 unsigned char stepLocal_12 = var_1_55;
 if (var_1_8 >= stepLocal_12) {
  if ((var_1_54 - (var_1_37 + var_1_40)) >= stepLocal_13) {
   var_1_66 = ((((((1910134613u + var_1_67) - var_1_35)) < (last_1_var_1_66)) ? (((1910134613u + var_1_67) - var_1_35)) : (last_1_var_1_66)));
  }
 } else {
  var_1_66 = var_1_54;
 }
 if (var_1_48 > ((var_1_46 + var_1_41) * (var_1_25 * var_1_46))) {
  var_1_68 = var_1_54;
 } else {
  var_1_68 = var_1_50;
 }
 if (((((((((var_1_23) < (var_1_41)) ? (var_1_23) : (var_1_41)))) < (var_1_28)) ? (((((var_1_23) < (var_1_41)) ? (var_1_23) : (var_1_41)))) : (var_1_28))) < (- var_1_46)) {
  if (var_1_5 < 50) {
   if (((var_1_10 - var_1_5) * var_1_66) < (var_1_9 & var_1_4)) {
    var_1_16 = (! var_1_20);
   } else {
    if ((var_1_46 * (var_1_23 / var_1_21)) == (- var_1_28)) {
     var_1_16 = var_1_20;
    } else {
     var_1_16 = var_1_22;
    }
   }
  } else {
   var_1_16 = var_1_22;
  }
 } else {
  var_1_16 = 0;
 }
 if (var_1_16 && var_1_30) {
  if (last_1_var_1_64 > var_1_50) {
   var_1_64 = (((((var_1_55 + var_1_56)) > (var_1_51)) ? ((var_1_55 + var_1_56)) : (var_1_51)));
  } else {
   var_1_64 = ((((-1) > ((var_1_65 - var_1_55))) ? (-1) : ((var_1_65 - var_1_55))));
  }
 } else {
  var_1_64 = var_1_55;
 }
 signed char stepLocal_4 = var_1_10;
 if (stepLocal_4 >= (var_1_64 / var_1_32)) {
  var_1_31 = ((var_1_33 + (var_1_34 + var_1_35)) - (var_1_36 - (var_1_37 - 1)));
 }
 unsigned char stepLocal_3 = var_1_5 <= var_1_64;
 unsigned short int stepLocal_2 = var_1_45;
 unsigned short int stepLocal_1 = var_1_7;
 if (var_1_10 >= stepLocal_1) {
  var_1_27 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
 } else {
  if (var_1_57 && stepLocal_3) {
   if (! ((var_1_8 % 128) != var_1_64)) {
    if (var_1_10 >= stepLocal_2) {
     var_1_27 = var_1_26;
    } else {
     var_1_27 = var_1_24;
    }
   } else {
    var_1_27 = var_1_25;
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 24575);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 8192);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 16384);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -128);
 assume_abort_if_not(var_1_32 <= 127);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 63);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 32);
 assume_abort_if_not(var_1_34 <= 64);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 32);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 31);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -230584.3009213691400e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -230584.3009213691400e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 24575);
 assume_abort_if_not(var_1_51 <= 32767);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 64);
 assume_abort_if_not(var_1_55 <= 127);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 127);
 assume_abort_if_not(var_1_56 <= 254);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 0);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 0);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 1);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 31);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= -1);
 assume_abort_if_not(var_1_65 <= 2147483646);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 1073741824);
 assume_abort_if_not(var_1_67 <= 2147483647);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= 62);
 assume_abort_if_not(var_1_70 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_27 = var_1_27;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_69 = var_1_69;
}
int property(void) {
 return ((((((((((((((((((((((var_1_61 ? (var_1_1 == ((unsigned short int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : (var_1_1 == ((unsigned short int) (((var_1_5 - var_1_6) + var_1_7) - var_1_8)))) && (((var_1_10 - var_1_11) != var_1_8) ? (var_1_9 == ((unsigned long int) last_1_var_1_45)) : (((25.8f + last_1_var_1_27) >= last_1_var_1_41) ? (var_1_9 == ((unsigned long int) ((var_1_14 - var_1_5) + ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))) : 1))) && (var_1_15 == ((signed short int) 16))) && ((((((((((var_1_23) < (var_1_41)) ? (var_1_23) : (var_1_41)))) < (var_1_28)) ? (((((var_1_23) < (var_1_41)) ? (var_1_23) : (var_1_41)))) : (var_1_28))) < (- var_1_46)) ? ((var_1_5 < 50) ? ((((var_1_10 - var_1_5) * var_1_66) < (var_1_9 & var_1_4)) ? (var_1_16 == ((unsigned char) (! var_1_20))) : (((var_1_46 * (var_1_23 / var_1_21)) == (- var_1_28)) ? (var_1_16 == ((unsigned char) var_1_20)) : (var_1_16 == ((unsigned char) var_1_22)))) : (var_1_16 == ((unsigned char) var_1_22))) : (var_1_16 == ((unsigned char) 0)))) && ((var_1_20 || last_1_var_1_61) ? (var_1_23 == ((double) ((((15.25) > (var_1_24)) ? (15.25) : (var_1_24))))) : (var_1_23 == ((double) (var_1_25 + var_1_26))))) && ((var_1_10 >= var_1_7) ? (var_1_27 == ((float) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) : ((var_1_57 && (var_1_5 <= var_1_64)) ? ((! ((var_1_8 % 128) != var_1_64)) ? ((var_1_10 >= var_1_45) ? (var_1_27 == ((float) var_1_26)) : (var_1_27 == ((float) var_1_24))) : (var_1_27 == ((float) var_1_25))) : 1))) && ((var_1_4 > var_1_9) ? (var_1_28 == ((double) var_1_26)) : 1)) && ((var_1_26 <= (var_1_41 + (- var_1_46))) ? (var_1_30 == ((unsigned char) (! (var_1_22 && var_1_20)))) : 1)) && ((var_1_10 >= (var_1_64 / var_1_32)) ? (var_1_31 == ((unsigned char) ((var_1_33 + (var_1_34 + var_1_35)) - (var_1_36 - (var_1_37 - 1))))) : 1)) && ((var_1_30 && var_1_61) ? (var_1_38 == ((signed char) (var_1_35 + ((((var_1_37 - var_1_40) < 0 ) ? -(var_1_37 - var_1_40) : (var_1_37 - var_1_40)))))) : (var_1_38 == ((signed char) (var_1_37 + var_1_40))))) && ((last_1_var_1_38 >= last_1_var_1_50) ? ((last_1_var_1_57 && last_1_var_1_61) ? (var_1_41 == ((double) ((var_1_43 + var_1_44) + var_1_26))) : 1) : 1)) && ((2 > (var_1_5 / ((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36))))) ? (var_1_45 == ((unsigned short int) (40684 - ((31497 - last_1_var_1_45) - var_1_11)))) : 1)) && ((var_1_23 == var_1_41) ? (((var_1_8 * var_1_45) <= var_1_3) ? (var_1_46 == ((double) ((((((var_1_44) < (var_1_43)) ? (var_1_44) : (var_1_43))) + var_1_47) + (var_1_48 - var_1_49)))) : (var_1_46 == ((double) (var_1_48 - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))))) : (var_1_46 == ((double) (var_1_43 + var_1_47))))) && (var_1_50 == ((unsigned short int) (((var_1_5 + var_1_51) - ((((var_1_6) > (var_1_52)) ? (var_1_6) : (var_1_52)))) - (var_1_37 + (10000 - var_1_34)))))) && ((var_1_45 > var_1_37) ? ((var_1_23 >= var_1_41) ? (var_1_52 == ((unsigned char) ((((100 + var_1_40) < 0 ) ? -(100 + var_1_40) : (100 + var_1_40))))) : 1) : (var_1_52 == ((unsigned char) ((((((((var_1_40) > (var_1_33)) ? (var_1_40) : (var_1_33)))) < (((var_1_36 - var_1_37) + var_1_34))) ? (((((var_1_40) > (var_1_33)) ? (var_1_40) : (var_1_33)))) : (((var_1_36 - var_1_37) + var_1_34)))))))) && ((! (last_1_var_1_69 < var_1_35)) ? (var_1_53 == ((unsigned char) (var_1_54 - var_1_34))) : (((- var_1_25) >= var_1_44) ? (var_1_53 == ((unsigned char) ((((((var_1_33 + var_1_55) - ((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))))) < (var_1_11)) ? (((var_1_33 + var_1_55) - ((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))))) : (var_1_11))))) : (var_1_53 == ((unsigned char) ((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < ((((((var_1_54) > (var_1_56)) ? (var_1_54) : (var_1_56))) - var_1_34))) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : ((((((var_1_54) > (var_1_56)) ? (var_1_54) : (var_1_56))) - var_1_34))))))))) && (((var_1_6 / var_1_55) >= var_1_33) ? (((- var_1_6) < var_1_36) ? (var_1_20 ? (var_1_30 ? (var_1_57 == ((unsigned char) (var_1_30 && ((var_1_30 && var_1_58) || var_1_59)))) : (var_1_57 == ((unsigned char) var_1_22))) : ((var_1_22 || (var_1_26 > var_1_28)) ? (var_1_57 == ((unsigned char) (var_1_58 || var_1_59))) : (var_1_57 == ((unsigned char) (var_1_22 || var_1_60))))) : 1) : (var_1_57 == ((unsigned char) var_1_22)))) && ((var_1_46 < (var_1_21 / 99.5)) ? ((-4 < var_1_14) ? (var_1_61 == ((unsigned char) ((128 <= var_1_9) && (var_1_59 && var_1_20)))) : 1) : (var_1_61 == ((unsigned char) ((var_1_15 > (var_1_55 << var_1_32)) || (var_1_60 && (! var_1_59))))))) && ((var_1_1 != (var_1_9 / var_1_37)) ? ((var_1_34 >= (var_1_8 << var_1_6)) ? (var_1_62 == ((unsigned char) ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))))) : (var_1_62 == ((unsigned char) ((((var_1_11) < (8)) ? (var_1_11) : (8)))))) : (var_1_62 == ((unsigned char) ((var_1_33 - (32 - var_1_63)) + var_1_11))))) && ((var_1_16 && var_1_30) ? ((last_1_var_1_64 > var_1_50) ? (var_1_64 == ((signed long int) (((((var_1_55 + var_1_56)) > (var_1_51)) ? ((var_1_55 + var_1_56)) : (var_1_51))))) : (var_1_64 == ((signed long int) ((((-1) > ((var_1_65 - var_1_55))) ? (-1) : ((var_1_65 - var_1_55))))))) : (var_1_64 == ((signed long int) var_1_55)))) && ((var_1_8 >= var_1_55) ? (((var_1_54 - (var_1_37 + var_1_40)) >= (var_1_50 / var_1_33)) ? (var_1_66 == ((unsigned long int) ((((((1910134613u + var_1_67) - var_1_35)) < (last_1_var_1_66)) ? (((1910134613u + var_1_67) - var_1_35)) : (last_1_var_1_66))))) : 1) : (var_1_66 == ((unsigned long int) var_1_54)))) && ((var_1_48 > ((var_1_46 + var_1_41) * (var_1_25 * var_1_46))) ? (var_1_68 == ((signed short int) var_1_54)) : (var_1_68 == ((signed short int) var_1_50)))) && ((var_1_46 > 0.8f) ? ((var_1_21 >= 10.75) ? (((((((var_1_7 / var_1_51)) > (var_1_53)) ? ((var_1_7 / var_1_51)) : (var_1_53))) >= 2) ? (var_1_69 == ((signed char) ((var_1_70 - var_1_37) - var_1_63))) : 1) : (var_1_69 == ((signed char) var_1_37))) : 1)
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
