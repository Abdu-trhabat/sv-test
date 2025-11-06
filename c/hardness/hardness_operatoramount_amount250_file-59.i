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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 32;
unsigned long int var_1_4 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 64;
signed short int var_1_7 = -2;
signed short int var_1_8 = 1;
unsigned long int var_1_9 = 4064846883;
unsigned char var_1_10 = 1;
unsigned char var_1_12 = 128;
float var_1_13 = 15.5;
float var_1_14 = 5.25;
float var_1_15 = 2.1390000000000002;
float var_1_16 = 128.2;
float var_1_17 = 99999999999.5;
float var_1_18 = 200.1;
float var_1_19 = 25.8;
float var_1_20 = 499.5;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 1;
signed short int var_1_26 = -2;
signed char var_1_27 = 10;
signed char var_1_28 = -64;
unsigned char var_1_29 = 5;
signed long int var_1_30 = 4;
signed long int var_1_31 = 100;
signed long int var_1_32 = 5;
unsigned char var_1_33 = 1;
float var_1_34 = 64.9;
unsigned char var_1_35 = 4;
float var_1_36 = 128.125;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 4;
unsigned char var_1_39 = 100;
unsigned char var_1_40 = 4;
signed char var_1_41 = 8;
signed char var_1_43 = 16;
double var_1_44 = 32.4;
signed long int var_1_45 = -1000;
unsigned char var_1_47 = 4;
unsigned char var_1_48 = 0;
unsigned long int var_1_49 = 0;
signed short int var_1_50 = 16;
float var_1_51 = -0.8;
unsigned char last_1_var_1_33 = 1;
unsigned char last_1_var_1_35 = 4;
unsigned char last_1_var_1_38 = 4;
signed long int last_1_var_1_45 = -1000;
unsigned char last_1_var_1_48 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_20 = 128;
 signed long int stepLocal_19 = 64;
 unsigned char stepLocal_18 = last_1_var_1_33;
 if (stepLocal_18 || var_1_24) {
  if (! ((last_1_var_1_45 | var_1_6) == var_1_28)) {
   var_1_48 = (var_1_24 || (last_1_var_1_33 && (! var_1_23)));
  } else {
   var_1_48 = var_1_24;
  }
 } else {
  if (stepLocal_20 > (100000 % var_1_5)) {
   if (stepLocal_19 < (((((last_1_var_1_45 - 128)) < (var_1_43)) ? ((last_1_var_1_45 - 128)) : (var_1_43)))) {
    var_1_48 = var_1_25;
   }
  } else {
   var_1_48 = var_1_23;
  }
 }
 if (last_1_var_1_48) {
  var_1_44 = (var_1_19 + var_1_15);
 }
 if (! var_1_48) {
  if ((var_1_4 >= var_1_2) && var_1_48) {
   var_1_10 = ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)));
  } else {
   var_1_10 = ((((((((var_1_6) > (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))) ? (var_1_6) : (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))))) < (var_1_12)) ? (((((var_1_6) > (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))) ? (var_1_6) : (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))))) : (var_1_12)));
  }
 }
 if (var_1_44 <= ((((var_1_19) > (var_1_18)) ? (var_1_19) : (var_1_18)))) {
  if (var_1_14 <= var_1_19) {
   var_1_27 = ((((var_1_8) > (var_1_28)) ? (var_1_8) : (var_1_28)));
  } else {
   var_1_27 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  }
 }
 var_1_32 = ((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6)));
 signed long int stepLocal_13 = var_1_8 / var_1_5;
 if (stepLocal_13 > last_1_var_1_38) {
  var_1_38 = (2 + ((var_1_39 - var_1_8) - ((((1) > (var_1_40)) ? (1) : (var_1_40)))));
 } else {
  var_1_38 = ((((var_1_37) > (var_1_40)) ? (var_1_37) : (var_1_40)));
 }
 var_1_49 = var_1_31;
 if (((((var_1_19) > (var_1_15)) ? (var_1_19) : (var_1_15))) < 5.6f) {
  if (var_1_23) {
   var_1_51 = 16.75f;
  }
 }
 signed long int stepLocal_7 = var_1_32;
 if (stepLocal_7 >= 2) {
  if (var_1_48) {
   var_1_30 = (10 - var_1_31);
  }
 } else {
  var_1_30 = (var_1_49 - (var_1_5 + var_1_8));
 }
 if ((var_1_49 + (var_1_49 + 4u)) != var_1_49) {
  var_1_1 = ((var_1_5 - 2) - var_1_6);
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_12 < var_1_49) {
  var_1_13 = (((7.5f + var_1_14) + var_1_15) + var_1_16);
 } else {
  var_1_13 = (var_1_16 + ((var_1_17 + var_1_18) - var_1_19));
 }
 unsigned long int stepLocal_8 = var_1_9 - var_1_1;
 if (var_1_14 == (- (var_1_13 / var_1_34))) {
  if (var_1_49 <= stepLocal_8) {
   var_1_33 = (! var_1_24);
  } else {
   var_1_33 = (! var_1_23);
  }
 } else {
  var_1_33 = (var_1_25 && var_1_23);
 }
 signed long int stepLocal_12 = (((var_1_1) > (var_1_8)) ? (var_1_1) : (var_1_8));
 signed char stepLocal_11 = var_1_28;
 unsigned long int stepLocal_10 = var_1_9 / (var_1_8 + var_1_5);
 unsigned long int stepLocal_9 = ~ var_1_49;
 if (stepLocal_11 != (100 / ((((var_1_5) < (5)) ? (var_1_5) : (5))))) {
  var_1_35 = (var_1_5 - var_1_8);
 } else {
  if (stepLocal_10 != var_1_32) {
   var_1_35 = ((((var_1_6) < ((var_1_5 - var_1_8))) ? (var_1_6) : ((var_1_5 - var_1_8))));
  } else {
   if (var_1_51 < ((var_1_17 - var_1_18) / ((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36))))) {
    if ((var_1_1 + (var_1_5 - var_1_6)) <= stepLocal_9) {
     if ((((((var_1_32 + var_1_31)) > (last_1_var_1_35)) ? ((var_1_32 + var_1_31)) : (last_1_var_1_35))) >= stepLocal_12) {
      var_1_35 = (var_1_5 - var_1_37);
     }
    } else {
     var_1_35 = ((((var_1_37) > (5)) ? (var_1_37) : (5)));
    }
   } else {
    var_1_35 = (var_1_37 + var_1_8);
   }
  }
 }
 if (! var_1_23) {
  if ((var_1_34 / var_1_36) >= var_1_13) {
   var_1_47 = ((((((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)))) < (var_1_40)) ? (((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)))) : (var_1_40)));
  } else {
   var_1_47 = (var_1_5 - var_1_39);
  }
 } else {
  var_1_47 = (var_1_8 + var_1_40);
 }
 if (((((var_1_44) > (var_1_13)) ? (var_1_44) : (var_1_13))) > (((((- var_1_36)) < (var_1_13)) ? ((- var_1_36)) : (var_1_13)))) {
  var_1_50 = var_1_6;
 }
 if (var_1_14 > (- var_1_17)) {
  if (var_1_33) {
   var_1_22 = var_1_23;
  } else {
   if (var_1_23) {
    var_1_22 = (! var_1_24);
   } else {
    var_1_22 = (var_1_24 || var_1_25);
   }
  }
 }
 if (var_1_49 > var_1_8) {
  if (var_1_24 || var_1_23) {
   var_1_26 = -50;
  } else {
   var_1_26 = ((((var_1_50) < (var_1_6)) ? (var_1_50) : (var_1_6)));
  }
 }
 signed long int stepLocal_17 = var_1_40 / var_1_8;
 unsigned char stepLocal_16 = var_1_47 < var_1_2;
 signed long int stepLocal_15 = var_1_30;
 if (stepLocal_16 || var_1_24) {
  var_1_45 = var_1_43;
 } else {
  if (var_1_44 >= var_1_34) {
   var_1_45 = var_1_43;
  } else {
   if (stepLocal_17 >= (-200 * var_1_32)) {
    if (stepLocal_15 != var_1_32) {
     var_1_45 = (var_1_8 + var_1_47);
    }
   } else {
    var_1_45 = (((((var_1_40 - var_1_12)) > (((((var_1_47 + var_1_50) < 0 ) ? -(var_1_47 + var_1_50) : (var_1_47 + var_1_50))))) ? ((var_1_40 - var_1_12)) : (((((var_1_47 + var_1_50) < 0 ) ? -(var_1_47 + var_1_50) : (var_1_47 + var_1_50))))));
   }
  }
 }
 signed long int stepLocal_4 = ((((var_1_5 - var_1_6)) < (4)) ? ((var_1_5 - var_1_6)) : (4));
 unsigned long int stepLocal_3 = var_1_9 - var_1_5;
 unsigned long int stepLocal_2 = var_1_49;
 unsigned char stepLocal_1 = var_1_5;
 unsigned long int stepLocal_0 = var_1_49 >> var_1_8;
 if (stepLocal_1 >= (~ ((((var_1_26) < (var_1_49)) ? (var_1_26) : (var_1_49))))) {
  if (var_1_26 <= stepLocal_0) {
   if (stepLocal_2 > (var_1_5 ^ (var_1_8 + var_1_6))) {
    var_1_7 = (((((var_1_8 + 128)) < (var_1_26)) ? ((var_1_8 + 128)) : (var_1_26)));
   } else {
    if (var_1_49 > stepLocal_3) {
     if (var_1_8 >= stepLocal_4) {
      var_1_7 = var_1_5;
     }
    } else {
     var_1_7 = var_1_26;
    }
   }
  }
 } else {
  var_1_7 = var_1_6;
 }
 signed short int stepLocal_6 = var_1_7;
 unsigned long int stepLocal_5 = (((var_1_49) > (var_1_6)) ? (var_1_49) : (var_1_6));
 if ((- 32) == stepLocal_5) {
  if (var_1_17 <= (((((var_1_19) > (var_1_18)) ? (var_1_19) : (var_1_18))) * ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) {
   var_1_20 = ((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18)));
  } else {
   var_1_20 = ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)));
  }
 } else {
  if (stepLocal_6 >= var_1_12) {
   var_1_20 = var_1_14;
  } else {
   var_1_20 = var_1_15;
  }
 }
 if ((- (- var_1_49)) >= var_1_7) {
  var_1_29 = ((((var_1_6) > (var_1_12)) ? (var_1_6) : (var_1_12)));
 } else {
  if (var_1_48 || (var_1_6 <= var_1_49)) {
   var_1_29 = (var_1_5 - var_1_6);
  }
 }
 signed long int stepLocal_14 = var_1_45 * (var_1_45 + var_1_37);
 if (var_1_24) {
  if (stepLocal_14 <= (var_1_49 + var_1_1)) {
   var_1_41 = (var_1_40 + ((((var_1_8) < (var_1_43)) ? (var_1_8) : (var_1_43))));
  }
 } else {
  var_1_41 = var_1_28;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 190);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 31);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -115292.1504606845700e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 1152921.504606845700e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -127);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 95);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -63);
 assume_abort_if_not(var_1_43 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_33 = var_1_33;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_48 = var_1_48;
}
int property(void) {
 return (((((((((((((((((((((((var_1_49 + (var_1_49 + 4u)) != var_1_49) ? (var_1_1 == ((unsigned char) ((var_1_5 - 2) - var_1_6))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_5 >= (~ ((((var_1_26) < (var_1_49)) ? (var_1_26) : (var_1_49))))) ? ((var_1_26 <= (var_1_49 >> var_1_8)) ? ((var_1_49 > (var_1_5 ^ (var_1_8 + var_1_6))) ? (var_1_7 == ((signed short int) (((((var_1_8 + 128)) < (var_1_26)) ? ((var_1_8 + 128)) : (var_1_26))))) : ((var_1_49 > (var_1_9 - var_1_5)) ? ((var_1_8 >= (((((var_1_5 - var_1_6)) < (4)) ? ((var_1_5 - var_1_6)) : (4)))) ? (var_1_7 == ((signed short int) var_1_5)) : 1) : (var_1_7 == ((signed short int) var_1_26)))) : 1) : (var_1_7 == ((signed short int) var_1_6)))) && ((! var_1_48) ? (((var_1_4 >= var_1_2) && var_1_48) ? (var_1_10 == ((unsigned char) ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))))) : (var_1_10 == ((unsigned char) ((((((((var_1_6) > (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))) ? (var_1_6) : (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))))) < (var_1_12)) ? (((((var_1_6) > (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))) ? (var_1_6) : (((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))))) : (var_1_12)))))) : 1)) && ((var_1_12 < var_1_49) ? (var_1_13 == ((float) (((7.5f + var_1_14) + var_1_15) + var_1_16))) : (var_1_13 == ((float) (var_1_16 + ((var_1_17 + var_1_18) - var_1_19)))))) && (((- 32) == ((((var_1_49) > (var_1_6)) ? (var_1_49) : (var_1_6)))) ? ((var_1_17 <= (((((var_1_19) > (var_1_18)) ? (var_1_19) : (var_1_18))) * ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) ? (var_1_20 == ((float) ((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))) : (var_1_20 == ((float) ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))))) : ((var_1_7 >= var_1_12) ? (var_1_20 == ((float) var_1_14)) : (var_1_20 == ((float) var_1_15))))) && ((var_1_14 > (- var_1_17)) ? (var_1_33 ? (var_1_22 == ((unsigned char) var_1_23)) : (var_1_23 ? (var_1_22 == ((unsigned char) (! var_1_24))) : (var_1_22 == ((unsigned char) (var_1_24 || var_1_25))))) : 1)) && ((var_1_49 > var_1_8) ? ((var_1_24 || var_1_23) ? (var_1_26 == ((signed short int) -50)) : (var_1_26 == ((signed short int) ((((var_1_50) < (var_1_6)) ? (var_1_50) : (var_1_6)))))) : 1)) && ((var_1_44 <= ((((var_1_19) > (var_1_18)) ? (var_1_19) : (var_1_18)))) ? ((var_1_14 <= var_1_19) ? (var_1_27 == ((signed char) ((((var_1_8) > (var_1_28)) ? (var_1_8) : (var_1_28))))) : (var_1_27 == ((signed char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))) : 1)) && (((- (- var_1_49)) >= var_1_7) ? (var_1_29 == ((unsigned char) ((((var_1_6) > (var_1_12)) ? (var_1_6) : (var_1_12))))) : ((var_1_48 || (var_1_6 <= var_1_49)) ? (var_1_29 == ((unsigned char) (var_1_5 - var_1_6))) : 1))) && ((var_1_32 >= 2) ? (var_1_48 ? (var_1_30 == ((signed long int) (10 - var_1_31))) : 1) : (var_1_30 == ((signed long int) (var_1_49 - (var_1_5 + var_1_8)))))) && (var_1_32 == ((signed long int) ((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6)))))) && ((var_1_14 == (- (var_1_13 / var_1_34))) ? ((var_1_49 <= (var_1_9 - var_1_1)) ? (var_1_33 == ((unsigned char) (! var_1_24))) : (var_1_33 == ((unsigned char) (! var_1_23)))) : (var_1_33 == ((unsigned char) (var_1_25 && var_1_23))))) && ((var_1_28 != (100 / ((((var_1_5) < (5)) ? (var_1_5) : (5))))) ? (var_1_35 == ((unsigned char) (var_1_5 - var_1_8))) : (((var_1_9 / (var_1_8 + var_1_5)) != var_1_32) ? (var_1_35 == ((unsigned char) ((((var_1_6) < ((var_1_5 - var_1_8))) ? (var_1_6) : ((var_1_5 - var_1_8)))))) : ((var_1_51 < ((var_1_17 - var_1_18) / ((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36))))) ? (((var_1_1 + (var_1_5 - var_1_6)) <= (~ var_1_49)) ? (((((((var_1_32 + var_1_31)) > (last_1_var_1_35)) ? ((var_1_32 + var_1_31)) : (last_1_var_1_35))) >= ((((var_1_1) > (var_1_8)) ? (var_1_1) : (var_1_8)))) ? (var_1_35 == ((unsigned char) (var_1_5 - var_1_37))) : 1) : (var_1_35 == ((unsigned char) ((((var_1_37) > (5)) ? (var_1_37) : (5)))))) : (var_1_35 == ((unsigned char) (var_1_37 + var_1_8))))))) && (((var_1_8 / var_1_5) > last_1_var_1_38) ? (var_1_38 == ((unsigned char) (2 + ((var_1_39 - var_1_8) - ((((1) > (var_1_40)) ? (1) : (var_1_40))))))) : (var_1_38 == ((unsigned char) ((((var_1_37) > (var_1_40)) ? (var_1_37) : (var_1_40))))))) && (var_1_24 ? (((var_1_45 * (var_1_45 + var_1_37)) <= (var_1_49 + var_1_1)) ? (var_1_41 == ((signed char) (var_1_40 + ((((var_1_8) < (var_1_43)) ? (var_1_8) : (var_1_43)))))) : 1) : (var_1_41 == ((signed char) var_1_28)))) && (last_1_var_1_48 ? (var_1_44 == ((double) (var_1_19 + var_1_15))) : 1)) && (((var_1_47 < var_1_2) || var_1_24) ? (var_1_45 == ((signed long int) var_1_43)) : ((var_1_44 >= var_1_34) ? (var_1_45 == ((signed long int) var_1_43)) : (((var_1_40 / var_1_8) >= (-200 * var_1_32)) ? ((var_1_30 != var_1_32) ? (var_1_45 == ((signed long int) (var_1_8 + var_1_47))) : 1) : (var_1_45 == ((signed long int) (((((var_1_40 - var_1_12)) > (((((var_1_47 + var_1_50) < 0 ) ? -(var_1_47 + var_1_50) : (var_1_47 + var_1_50))))) ? ((var_1_40 - var_1_12)) : (((((var_1_47 + var_1_50) < 0 ) ? -(var_1_47 + var_1_50) : (var_1_47 + var_1_50)))))))))))) && ((! var_1_23) ? (((var_1_34 / var_1_36) >= var_1_13) ? (var_1_47 == ((unsigned char) ((((((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)))) < (var_1_40)) ? (((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)))) : (var_1_40))))) : (var_1_47 == ((unsigned char) (var_1_5 - var_1_39)))) : (var_1_47 == ((unsigned char) (var_1_8 + var_1_40))))) && ((last_1_var_1_33 || var_1_24) ? ((! ((last_1_var_1_45 | var_1_6) == var_1_28)) ? (var_1_48 == ((unsigned char) (var_1_24 || (last_1_var_1_33 && (! var_1_23))))) : (var_1_48 == ((unsigned char) var_1_24))) : ((128 > (100000 % var_1_5)) ? ((64 < (((((last_1_var_1_45 - 128)) < (var_1_43)) ? ((last_1_var_1_45 - 128)) : (var_1_43)))) ? (var_1_48 == ((unsigned char) var_1_25)) : 1) : (var_1_48 == ((unsigned char) var_1_23))))) && (var_1_49 == ((unsigned long int) var_1_31))) && ((((((var_1_44) > (var_1_13)) ? (var_1_44) : (var_1_13))) > (((((- var_1_36)) < (var_1_13)) ? ((- var_1_36)) : (var_1_13)))) ? (var_1_50 == ((signed short int) var_1_6)) : 1)) && ((((((var_1_19) > (var_1_15)) ? (var_1_19) : (var_1_15))) < 5.6f) ? (var_1_23 ? (var_1_51 == ((float) 16.75f)) : 1) : 1)
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
