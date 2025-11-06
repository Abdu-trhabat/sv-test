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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch34Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 64;
unsigned char var_1_3 = 200;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
double var_1_7 = 31.75;
double var_1_8 = 64.75;
double var_1_9 = 1.625;
double var_1_10 = 0.0;
double var_1_11 = 15.75;
double var_1_12 = 199.6;
double var_1_13 = 199.2;
unsigned short int var_1_14 = 128;
unsigned short int var_1_15 = 24244;
unsigned char var_1_16 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 256;
double var_1_21 = 100000.8;
unsigned long int var_1_22 = 16;
float var_1_23 = 25.35;
float var_1_24 = 1.425;
signed short int var_1_25 = -2;
signed short int var_1_26 = 8;
signed short int var_1_27 = -8;
signed long int var_1_28 = 2;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 200;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 10;
unsigned long int var_1_35 = 4;
unsigned short int var_1_36 = 56702;
unsigned long int var_1_37 = 4;
signed long int var_1_38 = -128;
signed long int var_1_39 = 5;
unsigned long int var_1_40 = 10;
unsigned short int var_1_41 = 0;
unsigned short int var_1_42 = 52745;
unsigned char var_1_43 = 1;
signed long int var_1_44 = -200;
signed short int var_1_46 = 4;
unsigned char var_1_47 = 1;
signed long int var_1_48 = 50;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
signed short int var_1_53 = 1;
unsigned long int var_1_54 = 4;
unsigned long int var_1_56 = 1000000000;
unsigned long int var_1_57 = 4;
signed short int var_1_58 = -16;
signed char var_1_59 = 25;
unsigned long int var_1_60 = 0;
unsigned long int var_1_61 = 1758116995;
unsigned long int var_1_62 = 2236392794;
signed short int var_1_63 = 5;
unsigned char last_1_var_1_16 = 1;
unsigned long int last_1_var_1_22 = 16;
signed long int last_1_var_1_44 = -200;
unsigned long int last_1_var_1_54 = 4;
signed short int last_1_var_1_58 = -16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = (var_1_36 - var_1_31) + last_1_var_1_44;
 if (stepLocal_3 > (var_1_32 >> var_1_37)) {
  if (var_1_11 > var_1_8) {
   var_1_35 = ((((var_1_5) > (1u)) ? (var_1_5) : (1u)));
  }
 } else {
  var_1_35 = (var_1_15 + ((((last_1_var_1_58) < (var_1_3)) ? (last_1_var_1_58) : (var_1_3))));
 }
 if (! last_1_var_1_16) {
  var_1_49 = ((var_1_18 && var_1_50) && (var_1_51 && var_1_52));
 } else {
  var_1_49 = (! var_1_18);
 }
 if (var_1_13 >= var_1_10) {
  var_1_14 = (((((8) > (var_1_4)) ? (8) : (var_1_4))) + (var_1_15 - var_1_3));
 } else {
  var_1_14 = var_1_5;
 }
 if (var_1_19) {
  var_1_20 = var_1_3;
 } else {
  var_1_20 = var_1_4;
 }
 var_1_22 = ((((last_1_var_1_22) > (var_1_4)) ? (last_1_var_1_22) : (var_1_4)));
 if (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < var_1_35) {
  if (var_1_49) {
   var_1_40 = ((((var_1_5) < ((var_1_31 + (var_1_37 + var_1_3)))) ? (var_1_5) : ((var_1_31 + (var_1_37 + var_1_3)))));
  } else {
   var_1_40 = ((((((var_1_32 + var_1_37)) > ((var_1_33 + 32u))) ? ((var_1_32 + var_1_37)) : ((var_1_33 + 32u)))) + var_1_20);
  }
 }
 if (var_1_47 || var_1_43) {
  var_1_46 = ((((((((var_1_5) < (var_1_27)) ? (var_1_5) : (var_1_27)))) > (((((var_1_26) > (var_1_33)) ? (var_1_26) : (var_1_33))))) ? (((((var_1_5) < (var_1_27)) ? (var_1_5) : (var_1_27)))) : (((((var_1_26) > (var_1_33)) ? (var_1_26) : (var_1_33))))));
 } else {
  if ((((((10) < (var_1_32)) ? (10) : (var_1_32))) << var_1_40) != (var_1_48 - var_1_5)) {
   var_1_46 = (var_1_33 - (27566 - var_1_32));
  } else {
   var_1_46 = var_1_3;
  }
 }
 if ((var_1_20 * ((((10) > (var_1_3)) ? (10) : (var_1_3)))) >= var_1_20) {
  var_1_53 = ((((var_1_32 - var_1_3) < 0 ) ? -(var_1_32 - var_1_3) : (var_1_32 - var_1_3)));
 }
 var_1_58 = var_1_27;
 if (var_1_50) {
  var_1_59 = var_1_33;
 } else {
  var_1_59 = var_1_37;
 }
 var_1_63 = var_1_4;
 signed short int stepLocal_8 = var_1_27;
 if (var_1_49) {
  var_1_44 = (var_1_39 + var_1_32);
 } else {
  if (stepLocal_8 == (var_1_35 * last_1_var_1_44)) {
   var_1_44 = -500;
  }
 }
 if (var_1_11 <= (- var_1_12)) {
  if (var_1_49) {
   var_1_38 = ((((((((4 + var_1_39)) > (var_1_14)) ? ((4 + var_1_39)) : (var_1_14))) < 0 ) ? -(((((4 + var_1_39)) > (var_1_14)) ? ((4 + var_1_39)) : (var_1_14))) : (((((4 + var_1_39)) > (var_1_14)) ? ((4 + var_1_39)) : (var_1_14)))));
  }
 }
 unsigned short int stepLocal_10 = var_1_42;
 unsigned char stepLocal_9 = var_1_50;
 if (last_1_var_1_54 > stepLocal_10) {
  var_1_54 = var_1_4;
 } else {
  if (stepLocal_9 || ((var_1_53 * 10) < var_1_22)) {
   var_1_54 = (((1000000000u + var_1_56) + 1799569305u) - var_1_57);
  } else {
   if (var_1_49) {
    var_1_54 = var_1_38;
   } else {
    var_1_54 = 256u;
   }
  }
 }
 unsigned char stepLocal_12 = var_1_19;
 signed long int stepLocal_11 = var_1_63 * 32;
 if (var_1_49 && stepLocal_12) {
  if (stepLocal_11 <= var_1_15) {
   var_1_60 = (((var_1_61 - var_1_54) - var_1_33) + var_1_15);
  } else {
   var_1_60 = ((((((var_1_20) > (var_1_3)) ? (var_1_20) : (var_1_3))) + var_1_20) + 50u);
  }
 } else {
  var_1_60 = (((((var_1_62 - (var_1_36 + var_1_20))) > (var_1_32)) ? ((var_1_62 - (var_1_36 + var_1_20))) : (var_1_32)));
 }
 unsigned char stepLocal_1 = var_1_4;
 if (stepLocal_1 >= var_1_44) {
  var_1_7 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 }
 if (((((100 + var_1_3) < 0 ) ? -(100 + var_1_3) : (100 + var_1_3))) <= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) {
  if (((((var_1_40) > (25)) ? (var_1_40) : (25))) < var_1_20) {
   var_1_23 = (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) - var_1_10);
  } else {
   if (var_1_20 <= (~ var_1_22)) {
    var_1_23 = var_1_24;
   }
  }
 } else {
  var_1_23 = var_1_12;
 }
 unsigned char stepLocal_7 = var_1_32;
 unsigned char stepLocal_6 = var_1_19;
 unsigned short int stepLocal_5 = var_1_36;
 unsigned char stepLocal_4 = var_1_31;
 if (((var_1_34 >> var_1_37) >= (var_1_31 / var_1_36)) || stepLocal_6) {
  if (stepLocal_7 >= var_1_15) {
   var_1_41 = var_1_4;
  } else {
   if (stepLocal_5 > (var_1_4 >> 1)) {
    var_1_41 = (((((var_1_42 - (var_1_34 + var_1_4))) < ((var_1_38 + ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))))) ? ((var_1_42 - (var_1_34 + var_1_4))) : ((var_1_38 + ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))))));
   } else {
    var_1_41 = ((((var_1_42) > (var_1_37)) ? (var_1_42) : (var_1_37)));
   }
  }
 } else {
  if (stepLocal_4 < var_1_37) {
   if (var_1_49) {
    var_1_41 = (var_1_37 + (var_1_5 + var_1_32));
   } else {
    if (! var_1_49) {
     var_1_41 = (var_1_42 - var_1_32);
    }
   }
  }
 }
 if (var_1_60 < ((var_1_4 % var_1_15) * var_1_5)) {
  if ((! var_1_49) && last_1_var_1_16) {
   var_1_16 = (! var_1_18);
  } else {
   var_1_16 = var_1_19;
  }
 } else {
  var_1_16 = var_1_18;
 }
 signed long int stepLocal_0 = (var_1_3 - var_1_4) - var_1_5;
 if (var_1_16) {
  if (stepLocal_0 <= var_1_54) {
   var_1_1 = var_1_3;
  }
 }
 if (var_1_16) {
  if (var_1_20 >= var_1_5) {
   var_1_9 = ((((((var_1_10 - var_1_11) - var_1_12)) < (var_1_8)) ? (((var_1_10 - var_1_11) - var_1_12)) : (var_1_8)));
  }
 } else {
  if ((((((var_1_5 + 4)) < ((var_1_20 - var_1_4))) ? ((var_1_5 + 4)) : ((var_1_20 - var_1_4)))) == var_1_3) {
   var_1_9 = var_1_12;
  } else {
   var_1_9 = (var_1_11 + ((((var_1_13) > (9.99999999999998E13)) ? (var_1_13) : (9.99999999999998E13))));
  }
 }
 if (var_1_19 && (var_1_9 <= (9.999999995E8 * var_1_11))) {
  var_1_21 = ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12)));
 } else {
  var_1_21 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 }
 if (var_1_23 > var_1_21) {
  if ((1 * (var_1_22 & var_1_15)) > (var_1_60 + (var_1_3 + var_1_60))) {
   if (var_1_15 > ((((var_1_5) > (var_1_60)) ? (var_1_5) : (var_1_60)))) {
    var_1_25 = (var_1_4 - var_1_5);
   } else {
    var_1_25 = ((var_1_5 - (var_1_4 + var_1_3)) + ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))));
   }
  } else {
   var_1_25 = (var_1_5 + (var_1_3 + var_1_4));
  }
 }
 if ((var_1_7 / var_1_10) != ((((var_1_11) < (var_1_21)) ? (var_1_11) : (var_1_21)))) {
  var_1_28 = (var_1_27 + ((((var_1_4) > (var_1_14)) ? (var_1_4) : (var_1_14))));
 }
 signed long int stepLocal_2 = var_1_28;
 if ((var_1_12 / var_1_10) > 8.25) {
  if (stepLocal_2 > var_1_22) {
   var_1_30 = (var_1_31 - (var_1_32 - var_1_33));
  } else {
   var_1_30 = (var_1_32 + ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))));
  }
 } else {
  var_1_30 = ((var_1_33 + var_1_34) + var_1_32);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 191);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 64);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 4611686.018427383000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16383);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -16383);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -16383);
 assume_abort_if_not(var_1_27 <= 16383);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 127);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 63);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 32767);
 assume_abort_if_not(var_1_36 <= 65535);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 7);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= -1073741823);
 assume_abort_if_not(var_1_39 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 32767);
 assume_abort_if_not(var_1_42 <= 65534);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_48 >= -1);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 536870912);
 assume_abort_if_not(var_1_56 <= 1073741823);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 2147483647);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 1610612735);
 assume_abort_if_not(var_1_61 <= 2147483647);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 2147483647);
 assume_abort_if_not(var_1_62 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_58 = var_1_58;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_16 ? ((((var_1_3 - var_1_4) - var_1_5) <= var_1_54) ? (var_1_1 == ((unsigned short int) var_1_3)) : 1) : 1) && ((var_1_4 >= var_1_44) ? (var_1_7 == ((double) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : 1)) && (var_1_16 ? ((var_1_20 >= var_1_5) ? (var_1_9 == ((double) ((((((var_1_10 - var_1_11) - var_1_12)) < (var_1_8)) ? (((var_1_10 - var_1_11) - var_1_12)) : (var_1_8))))) : 1) : (((((((var_1_5 + 4)) < ((var_1_20 - var_1_4))) ? ((var_1_5 + 4)) : ((var_1_20 - var_1_4)))) == var_1_3) ? (var_1_9 == ((double) var_1_12)) : (var_1_9 == ((double) (var_1_11 + ((((var_1_13) > (9.99999999999998E13)) ? (var_1_13) : (9.99999999999998E13))))))))) && ((var_1_13 >= var_1_10) ? (var_1_14 == ((unsigned short int) (((((8) > (var_1_4)) ? (8) : (var_1_4))) + (var_1_15 - var_1_3)))) : (var_1_14 == ((unsigned short int) var_1_5)))) && ((var_1_60 < ((var_1_4 % var_1_15) * var_1_5)) ? (((! var_1_49) && last_1_var_1_16) ? (var_1_16 == ((unsigned char) (! var_1_18))) : (var_1_16 == ((unsigned char) var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_19 ? (var_1_20 == ((unsigned long int) var_1_3)) : (var_1_20 == ((unsigned long int) var_1_4)))) && ((var_1_19 && (var_1_9 <= (9.999999995E8 * var_1_11))) ? (var_1_21 == ((double) ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12))))) : (var_1_21 == ((double) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) && (var_1_22 == ((unsigned long int) ((((last_1_var_1_22) > (var_1_4)) ? (last_1_var_1_22) : (var_1_4)))))) && ((((((100 + var_1_3) < 0 ) ? -(100 + var_1_3) : (100 + var_1_3))) <= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) ? ((((((var_1_40) > (25)) ? (var_1_40) : (25))) < var_1_20) ? (var_1_23 == ((float) (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11))) - var_1_10))) : ((var_1_20 <= (~ var_1_22)) ? (var_1_23 == ((float) var_1_24)) : 1)) : (var_1_23 == ((float) var_1_12)))) && ((var_1_23 > var_1_21) ? (((1 * (var_1_22 & var_1_15)) > (var_1_60 + (var_1_3 + var_1_60))) ? ((var_1_15 > ((((var_1_5) > (var_1_60)) ? (var_1_5) : (var_1_60)))) ? (var_1_25 == ((signed short int) (var_1_4 - var_1_5))) : (var_1_25 == ((signed short int) ((var_1_5 - (var_1_4 + var_1_3)) + ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))))) : (var_1_25 == ((signed short int) (var_1_5 + (var_1_3 + var_1_4))))) : 1)) && (((var_1_7 / var_1_10) != ((((var_1_11) < (var_1_21)) ? (var_1_11) : (var_1_21)))) ? (var_1_28 == ((signed long int) (var_1_27 + ((((var_1_4) > (var_1_14)) ? (var_1_4) : (var_1_14)))))) : 1)) && (((var_1_12 / var_1_10) > 8.25) ? ((var_1_28 > var_1_22) ? (var_1_30 == ((unsigned char) (var_1_31 - (var_1_32 - var_1_33)))) : (var_1_30 == ((unsigned char) (var_1_32 + ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))))) : (var_1_30 == ((unsigned char) ((var_1_33 + var_1_34) + var_1_32))))) && ((((var_1_36 - var_1_31) + last_1_var_1_44) > (var_1_32 >> var_1_37)) ? ((var_1_11 > var_1_8) ? (var_1_35 == ((unsigned long int) ((((var_1_5) > (1u)) ? (var_1_5) : (1u))))) : 1) : (var_1_35 == ((unsigned long int) (var_1_15 + ((((last_1_var_1_58) < (var_1_3)) ? (last_1_var_1_58) : (var_1_3)))))))) && ((var_1_11 <= (- var_1_12)) ? (var_1_49 ? (var_1_38 == ((signed long int) ((((((((4 + var_1_39)) > (var_1_14)) ? ((4 + var_1_39)) : (var_1_14))) < 0 ) ? -(((((4 + var_1_39)) > (var_1_14)) ? ((4 + var_1_39)) : (var_1_14))) : (((((4 + var_1_39)) > (var_1_14)) ? ((4 + var_1_39)) : (var_1_14))))))) : 1) : 1)) && ((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < var_1_35) ? (var_1_49 ? (var_1_40 == ((unsigned long int) ((((var_1_5) < ((var_1_31 + (var_1_37 + var_1_3)))) ? (var_1_5) : ((var_1_31 + (var_1_37 + var_1_3))))))) : (var_1_40 == ((unsigned long int) ((((((var_1_32 + var_1_37)) > ((var_1_33 + 32u))) ? ((var_1_32 + var_1_37)) : ((var_1_33 + 32u)))) + var_1_20)))) : 1)) && ((((var_1_34 >> var_1_37) >= (var_1_31 / var_1_36)) || var_1_19) ? ((var_1_32 >= var_1_15) ? (var_1_41 == ((unsigned short int) var_1_4)) : ((var_1_36 > (var_1_4 >> 1)) ? (var_1_41 == ((unsigned short int) (((((var_1_42 - (var_1_34 + var_1_4))) < ((var_1_38 + ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))))) ? ((var_1_42 - (var_1_34 + var_1_4))) : ((var_1_38 + ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))))))))) : (var_1_41 == ((unsigned short int) ((((var_1_42) > (var_1_37)) ? (var_1_42) : (var_1_37))))))) : ((var_1_31 < var_1_37) ? (var_1_49 ? (var_1_41 == ((unsigned short int) (var_1_37 + (var_1_5 + var_1_32)))) : ((! var_1_49) ? (var_1_41 == ((unsigned short int) (var_1_42 - var_1_32))) : 1)) : 1))) && (var_1_49 ? (var_1_44 == ((signed long int) (var_1_39 + var_1_32))) : ((var_1_27 == (var_1_35 * last_1_var_1_44)) ? (var_1_44 == ((signed long int) -500)) : 1))) && ((var_1_47 || var_1_43) ? (var_1_46 == ((signed short int) ((((((((var_1_5) < (var_1_27)) ? (var_1_5) : (var_1_27)))) > (((((var_1_26) > (var_1_33)) ? (var_1_26) : (var_1_33))))) ? (((((var_1_5) < (var_1_27)) ? (var_1_5) : (var_1_27)))) : (((((var_1_26) > (var_1_33)) ? (var_1_26) : (var_1_33)))))))) : (((((((10) < (var_1_32)) ? (10) : (var_1_32))) << var_1_40) != (var_1_48 - var_1_5)) ? (var_1_46 == ((signed short int) (var_1_33 - (27566 - var_1_32)))) : (var_1_46 == ((signed short int) var_1_3))))) && ((! last_1_var_1_16) ? (var_1_49 == ((unsigned char) ((var_1_18 && var_1_50) && (var_1_51 && var_1_52)))) : (var_1_49 == ((unsigned char) (! var_1_18))))) && (((var_1_20 * ((((10) > (var_1_3)) ? (10) : (var_1_3)))) >= var_1_20) ? (var_1_53 == ((signed short int) ((((var_1_32 - var_1_3) < 0 ) ? -(var_1_32 - var_1_3) : (var_1_32 - var_1_3))))) : 1)) && ((last_1_var_1_54 > var_1_42) ? (var_1_54 == ((unsigned long int) var_1_4)) : ((var_1_50 || ((var_1_53 * 10) < var_1_22)) ? (var_1_54 == ((unsigned long int) (((1000000000u + var_1_56) + 1799569305u) - var_1_57))) : (var_1_49 ? (var_1_54 == ((unsigned long int) var_1_38)) : (var_1_54 == ((unsigned long int) 256u)))))) && (var_1_58 == ((signed short int) var_1_27))) && (var_1_50 ? (var_1_59 == ((signed char) var_1_33)) : (var_1_59 == ((signed char) var_1_37)))) && ((var_1_49 && var_1_19) ? (((var_1_63 * 32) <= var_1_15) ? (var_1_60 == ((unsigned long int) (((var_1_61 - var_1_54) - var_1_33) + var_1_15))) : (var_1_60 == ((unsigned long int) ((((((var_1_20) > (var_1_3)) ? (var_1_20) : (var_1_3))) + var_1_20) + 50u)))) : (var_1_60 == ((unsigned long int) (((((var_1_62 - (var_1_36 + var_1_20))) > (var_1_32)) ? ((var_1_62 - (var_1_36 + var_1_20))) : (var_1_32))))))) && (var_1_63 == ((signed short int) var_1_4))
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
