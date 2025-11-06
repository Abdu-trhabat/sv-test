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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned char var_1_2 = 0;
unsigned long int var_1_5 = 10;
signed long int var_1_7 = 100;
unsigned char var_1_8 = 4;
signed long int var_1_9 = 2;
float var_1_10 = 5.75;
float var_1_11 = 255.25;
float var_1_12 = 100.8;
float var_1_13 = 99.8;
signed long int var_1_14 = -4;
double var_1_15 = 127.2;
double var_1_16 = 32.5;
double var_1_17 = 1.25;
double var_1_18 = 99999999999999.75;
float var_1_19 = 1000.5;
float var_1_20 = 15.2;
float var_1_21 = 1000000000.4;
float var_1_22 = 5.3;
float var_1_23 = 1.875;
float var_1_24 = 0.75;
signed short int var_1_25 = -5;
signed short int var_1_26 = 10000;
signed short int var_1_27 = 16;
signed short int var_1_28 = 16;
double var_1_29 = 15.8;
double var_1_30 = 7.85;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
double var_1_33 = 31.25;
signed long int var_1_34 = -1;
signed long int var_1_35 = 64;
signed long int var_1_36 = 0;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 2;
signed short int var_1_40 = 64;
signed short int var_1_41 = 25;
unsigned long int var_1_42 = 8;
unsigned long int var_1_43 = 1358630310;
unsigned long int var_1_44 = 3879178151;
double var_1_45 = 0.45;
unsigned long int var_1_46 = 2484017831;
double var_1_47 = 1.9;
unsigned char var_1_48 = 1;
signed long int var_1_49 = 50;
signed long int var_1_50 = -4;
signed char var_1_51 = -16;
double var_1_52 = 5.25;
signed long int var_1_53 = 25;
float var_1_54 = 10.5;
unsigned short int var_1_55 = 8;
unsigned short int var_1_56 = 48802;
signed long int last_1_var_1_7 = 100;
signed long int last_1_var_1_34 = -1;
signed short int last_1_var_1_40 = 64;
double last_1_var_1_45 = 0.45;
signed char last_1_var_1_51 = -16;
unsigned short int last_1_var_1_55 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (var_1_32) {
   var_1_40 = (((((last_1_var_1_55) < (var_1_41)) ? (last_1_var_1_55) : (var_1_41))) - var_1_38);
  }
 }
 if (last_1_var_1_40 != last_1_var_1_51) {
  var_1_1 = var_1_5;
 } else {
  if ((50.6f + 199.5f) >= last_1_var_1_45) {
   var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 }
 unsigned char stepLocal_3 = var_1_8;
 if (stepLocal_3 >= (~ var_1_1)) {
  var_1_15 = (var_1_16 - ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))));
 } else {
  var_1_15 = (var_1_13 + var_1_12);
 }
 signed long int stepLocal_0 = 128 - var_1_8;
 if (stepLocal_0 == var_1_1) {
  var_1_7 = ((1176345877 - var_1_8) - var_1_9);
 } else {
  var_1_7 = (var_1_8 - ((((last_1_var_1_7) < 0 ) ? -(last_1_var_1_7) : (last_1_var_1_7))));
 }
 var_1_14 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 if (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) > var_1_18) {
  var_1_19 = ((var_1_20 + (var_1_21 - var_1_22)) + var_1_13);
 } else {
  if ((var_1_11 / var_1_23) <= (- var_1_17)) {
   var_1_19 = (var_1_21 + var_1_24);
  } else {
   var_1_19 = var_1_21;
  }
 }
 if (var_1_2) {
  var_1_29 = (var_1_13 + (((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) + var_1_20));
 } else {
  var_1_29 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
 }
 var_1_37 = ((var_1_38 + var_1_39) + var_1_8);
 if (var_1_17 > var_1_24) {
  var_1_42 = ((var_1_43 - var_1_39) + ((((var_1_35) < (256u)) ? (var_1_35) : (256u))));
 } else {
  var_1_42 = (var_1_44 - (var_1_43 - var_1_28));
 }
 signed long int stepLocal_7 = var_1_50;
 if (var_1_8 != stepLocal_7) {
  var_1_51 = var_1_39;
 } else {
  var_1_51 = ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)));
 }
 signed long int stepLocal_6 = (((var_1_40) > (32)) ? (var_1_40) : (32));
 unsigned char stepLocal_5 = var_1_48;
 if ((var_1_32 && var_1_2) || stepLocal_5) {
  var_1_47 = var_1_33;
 } else {
  if (stepLocal_6 > var_1_42) {
   var_1_47 = (var_1_17 - (var_1_21 + var_1_22));
  } else {
   var_1_47 = (var_1_13 + (var_1_20 + var_1_21));
  }
 }
 signed long int stepLocal_2 = var_1_9;
 signed long int stepLocal_1 = -10;
 if (var_1_42 <= stepLocal_1) {
  var_1_10 = var_1_11;
 } else {
  if (var_1_1 > stepLocal_2) {
   if (var_1_2) {
    var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   }
  } else {
   var_1_10 = (var_1_12 + var_1_13);
  }
 }
 if (var_1_31) {
  if (((var_1_14 + var_1_44) + (~ var_1_39)) == (var_1_46 - var_1_9)) {
   if (0u != (var_1_46 - (var_1_43 - var_1_26))) {
    var_1_45 = (var_1_21 - var_1_17);
   }
  } else {
   if (var_1_2) {
    if (var_1_1 <= ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) {
     var_1_45 = ((((var_1_22) > (var_1_12)) ? (var_1_22) : (var_1_12)));
    } else {
     var_1_45 = ((((((var_1_33 + var_1_20)) > (var_1_13)) ? ((var_1_33 + var_1_20)) : (var_1_13))) + var_1_22);
    }
   }
  }
 }
 if (var_1_22 > (var_1_20 + (- var_1_47))) {
  if (var_1_2) {
   if (var_1_31) {
    if (var_1_32) {
     var_1_30 = (((((var_1_24) < (((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20))))) ? (var_1_24) : (((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20)))))) + (var_1_21 + (3.4 + var_1_33)));
    }
   } else {
    var_1_30 = ((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) + 9.99999999999995E13) + var_1_24);
   }
  } else {
   var_1_30 = ((((31.5) > ((((((var_1_13) < (7.5)) ? (var_1_13) : (7.5))) + var_1_24))) ? (31.5) : ((((((var_1_13) < (7.5)) ? (var_1_13) : (7.5))) + var_1_24))));
  }
 } else {
  if (var_1_21 > (- var_1_47)) {
   var_1_30 = var_1_17;
  } else {
   var_1_30 = var_1_24;
  }
 }
 if (((var_1_18 - var_1_17) / ((((0.99) > (var_1_23)) ? (0.99) : (var_1_23)))) >= (- (var_1_11 * var_1_16))) {
  if (var_1_35 >= ((var_1_38 - var_1_43) % var_1_26)) {
   if ((50.6 / 9999999.875) > (((((24.25) > (var_1_17)) ? (24.25) : (var_1_17))) * var_1_20)) {
    if (var_1_45 > var_1_20) {
     var_1_54 = var_1_20;
    } else {
     var_1_54 = var_1_11;
    }
   } else {
    var_1_54 = var_1_18;
   }
  } else {
   var_1_54 = var_1_13;
  }
 } else {
  var_1_54 = var_1_18;
 }
 signed short int stepLocal_4 = var_1_40;
 if (var_1_47 < var_1_10) {
  if (stepLocal_4 < last_1_var_1_34) {
   var_1_34 = (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - (((((var_1_35) > (var_1_26)) ? (var_1_35) : (var_1_26))) + var_1_27));
  }
 } else {
  if (var_1_15 > (2.8 + 1.375)) {
   var_1_34 = ((((-5) > (last_1_var_1_34)) ? (-5) : (last_1_var_1_34)));
  } else {
   var_1_34 = var_1_36;
  }
 }
 if ((var_1_17 - ((((var_1_22) > (var_1_18)) ? (var_1_22) : (var_1_18)))) > var_1_24) {
  var_1_55 = (((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - var_1_34)) < (var_1_39)) ? ((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - var_1_34)) : (var_1_39)));
 } else {
  var_1_55 = 25;
 }
 var_1_49 = (((((var_1_35) > (var_1_28)) ? (var_1_35) : (var_1_28))) + (var_1_50 + ((((var_1_55) < (var_1_38)) ? (var_1_55) : (var_1_38)))));
 unsigned char stepLocal_10 = ! var_1_32;
 signed long int stepLocal_9 = var_1_34;
 signed char stepLocal_8 = var_1_51;
 if (((((var_1_33) < ((var_1_45 * var_1_17))) ? (var_1_33) : ((var_1_45 * var_1_17)))) <= var_1_21) {
  var_1_52 = (16.55 - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))));
 } else {
  if (var_1_2) {
   if (stepLocal_9 < -16) {
    if (var_1_34 <= stepLocal_8) {
     var_1_52 = (var_1_21 - var_1_22);
    } else {
     var_1_52 = ((((((((var_1_21) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_21) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) > (var_1_17)) ? (((((var_1_21) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_21) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) : (var_1_17)));
    }
   } else {
    var_1_52 = (((((var_1_17) < (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18))))) ? (var_1_17) : (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))))) - var_1_16);
   }
  } else {
   if (stepLocal_10 && var_1_48) {
    var_1_52 = ((var_1_21 - var_1_22) + var_1_20);
   }
  }
 }
 if (! var_1_48) {
  if (var_1_40 > 8) {
   var_1_53 = ((var_1_49 + ((((var_1_27) < (var_1_34)) ? (var_1_27) : (var_1_34)))) + ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))));
  }
 } else {
  if (var_1_40 > (var_1_44 * var_1_27)) {
   var_1_53 = ((((((((var_1_1) < (var_1_26)) ? (var_1_1) : (var_1_26)))) < (var_1_49)) ? (((((var_1_1) < (var_1_26)) ? (var_1_1) : (var_1_26)))) : (var_1_49)));
  }
 }
 if ((~ 0) == (~ (var_1_49 + var_1_14))) {
  var_1_25 = ((((var_1_55) > (((((var_1_55) > ((var_1_8 + -1))) ? (var_1_55) : ((var_1_8 + -1)))))) ? (var_1_55) : (((((var_1_55) > ((var_1_8 + -1))) ? (var_1_55) : ((var_1_8 + -1)))))));
 } else {
  var_1_25 = (((var_1_26 - var_1_8) + var_1_27) - ((((var_1_28) < (4)) ? (var_1_28) : (4))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 8191);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 16383);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -115292.1504606845700e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 1152921.504606845700e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1073741823);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483647);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 64);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= -1);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 1073741823);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 2147483647);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 2147483647);
 assume_abort_if_not(var_1_46 <= 4294967295);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= -536870911);
 assume_abort_if_not(var_1_50 <= 536870912);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 32767);
 assume_abort_if_not(var_1_56 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_55 = var_1_55;
}
int property(void) {
 return (((((((((((((((((((((last_1_var_1_40 != last_1_var_1_51) ? (var_1_1 == ((unsigned long int) var_1_5)) : (((50.6f + 199.5f) >= last_1_var_1_45) ? (var_1_1 == ((unsigned long int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : 1)) && (((128 - var_1_8) == var_1_1) ? (var_1_7 == ((signed long int) ((1176345877 - var_1_8) - var_1_9))) : (var_1_7 == ((signed long int) (var_1_8 - ((((last_1_var_1_7) < 0 ) ? -(last_1_var_1_7) : (last_1_var_1_7)))))))) && ((var_1_42 <= -10) ? (var_1_10 == ((float) var_1_11)) : ((var_1_1 > var_1_9) ? (var_1_2 ? (var_1_10 == ((float) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : 1) : (var_1_10 == ((float) (var_1_12 + var_1_13)))))) && (var_1_14 == ((signed long int) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) && ((var_1_8 >= (~ var_1_1)) ? (var_1_15 == ((double) (var_1_16 - ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))))) : (var_1_15 == ((double) (var_1_13 + var_1_12))))) && ((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) > var_1_18) ? (var_1_19 == ((float) ((var_1_20 + (var_1_21 - var_1_22)) + var_1_13))) : (((var_1_11 / var_1_23) <= (- var_1_17)) ? (var_1_19 == ((float) (var_1_21 + var_1_24))) : (var_1_19 == ((float) var_1_21))))) && (((~ 0) == (~ (var_1_49 + var_1_14))) ? (var_1_25 == ((signed short int) ((((var_1_55) > (((((var_1_55) > ((var_1_8 + -1))) ? (var_1_55) : ((var_1_8 + -1)))))) ? (var_1_55) : (((((var_1_55) > ((var_1_8 + -1))) ? (var_1_55) : ((var_1_8 + -1))))))))) : (var_1_25 == ((signed short int) (((var_1_26 - var_1_8) + var_1_27) - ((((var_1_28) < (4)) ? (var_1_28) : (4)))))))) && (var_1_2 ? (var_1_29 == ((double) (var_1_13 + (((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) + var_1_20)))) : (var_1_29 == ((double) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) && ((var_1_22 > (var_1_20 + (- var_1_47))) ? (var_1_2 ? (var_1_31 ? (var_1_32 ? (var_1_30 == ((double) (((((var_1_24) < (((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20))))) ? (var_1_24) : (((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20)))))) + (var_1_21 + (3.4 + var_1_33))))) : 1) : (var_1_30 == ((double) ((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) + 9.99999999999995E13) + var_1_24)))) : (var_1_30 == ((double) ((((31.5) > ((((((var_1_13) < (7.5)) ? (var_1_13) : (7.5))) + var_1_24))) ? (31.5) : ((((((var_1_13) < (7.5)) ? (var_1_13) : (7.5))) + var_1_24))))))) : ((var_1_21 > (- var_1_47)) ? (var_1_30 == ((double) var_1_17)) : (var_1_30 == ((double) var_1_24))))) && ((var_1_47 < var_1_10) ? ((var_1_40 < last_1_var_1_34) ? (var_1_34 == ((signed long int) (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - (((((var_1_35) > (var_1_26)) ? (var_1_35) : (var_1_26))) + var_1_27)))) : 1) : ((var_1_15 > (2.8 + 1.375)) ? (var_1_34 == ((signed long int) ((((-5) > (last_1_var_1_34)) ? (-5) : (last_1_var_1_34))))) : (var_1_34 == ((signed long int) var_1_36))))) && (var_1_37 == ((unsigned char) ((var_1_38 + var_1_39) + var_1_8)))) && (var_1_2 ? (var_1_32 ? (var_1_40 == ((signed short int) (((((last_1_var_1_55) < (var_1_41)) ? (last_1_var_1_55) : (var_1_41))) - var_1_38))) : 1) : 1)) && ((var_1_17 > var_1_24) ? (var_1_42 == ((unsigned long int) ((var_1_43 - var_1_39) + ((((var_1_35) < (256u)) ? (var_1_35) : (256u)))))) : (var_1_42 == ((unsigned long int) (var_1_44 - (var_1_43 - var_1_28)))))) && (var_1_31 ? ((((var_1_14 + var_1_44) + (~ var_1_39)) == (var_1_46 - var_1_9)) ? ((0u != (var_1_46 - (var_1_43 - var_1_26))) ? (var_1_45 == ((double) (var_1_21 - var_1_17))) : 1) : (var_1_2 ? ((var_1_1 <= ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) ? (var_1_45 == ((double) ((((var_1_22) > (var_1_12)) ? (var_1_22) : (var_1_12))))) : (var_1_45 == ((double) ((((((var_1_33 + var_1_20)) > (var_1_13)) ? ((var_1_33 + var_1_20)) : (var_1_13))) + var_1_22)))) : 1)) : 1)) && (((var_1_32 && var_1_2) || var_1_48) ? (var_1_47 == ((double) var_1_33)) : ((((((var_1_40) > (32)) ? (var_1_40) : (32))) > var_1_42) ? (var_1_47 == ((double) (var_1_17 - (var_1_21 + var_1_22)))) : (var_1_47 == ((double) (var_1_13 + (var_1_20 + var_1_21))))))) && (var_1_49 == ((signed long int) (((((var_1_35) > (var_1_28)) ? (var_1_35) : (var_1_28))) + (var_1_50 + ((((var_1_55) < (var_1_38)) ? (var_1_55) : (var_1_38)))))))) && ((var_1_8 != var_1_50) ? (var_1_51 == ((signed char) var_1_39)) : (var_1_51 == ((signed char) ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))))))) && ((((((var_1_33) < ((var_1_45 * var_1_17))) ? (var_1_33) : ((var_1_45 * var_1_17)))) <= var_1_21) ? (var_1_52 == ((double) (16.55 - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))) : (var_1_2 ? ((var_1_34 < -16) ? ((var_1_34 <= var_1_51) ? (var_1_52 == ((double) (var_1_21 - var_1_22))) : (var_1_52 == ((double) ((((((((var_1_21) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_21) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) > (var_1_17)) ? (((((var_1_21) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_21) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) : (var_1_17)))))) : (var_1_52 == ((double) (((((var_1_17) < (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18))))) ? (var_1_17) : (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))))) - var_1_16)))) : (((! var_1_32) && var_1_48) ? (var_1_52 == ((double) ((var_1_21 - var_1_22) + var_1_20))) : 1)))) && ((! var_1_48) ? ((var_1_40 > 8) ? (var_1_53 == ((signed long int) ((var_1_49 + ((((var_1_27) < (var_1_34)) ? (var_1_27) : (var_1_34)))) + ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) : 1) : ((var_1_40 > (var_1_44 * var_1_27)) ? (var_1_53 == ((signed long int) ((((((((var_1_1) < (var_1_26)) ? (var_1_1) : (var_1_26)))) < (var_1_49)) ? (((((var_1_1) < (var_1_26)) ? (var_1_1) : (var_1_26)))) : (var_1_49))))) : 1))) && ((((var_1_18 - var_1_17) / ((((0.99) > (var_1_23)) ? (0.99) : (var_1_23)))) >= (- (var_1_11 * var_1_16))) ? ((var_1_35 >= ((var_1_38 - var_1_43) % var_1_26)) ? (((50.6 / 9999999.875) > (((((24.25) > (var_1_17)) ? (24.25) : (var_1_17))) * var_1_20)) ? ((var_1_45 > var_1_20) ? (var_1_54 == ((float) var_1_20)) : (var_1_54 == ((float) var_1_11))) : (var_1_54 == ((float) var_1_18))) : (var_1_54 == ((float) var_1_13))) : (var_1_54 == ((float) var_1_18)))) && (((var_1_17 - ((((var_1_22) > (var_1_18)) ? (var_1_22) : (var_1_18)))) > var_1_24) ? (var_1_55 == ((unsigned short int) (((((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - var_1_34)) < (var_1_39)) ? ((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - var_1_34)) : (var_1_39))))) : (var_1_55 == ((unsigned short int) 25)))
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
