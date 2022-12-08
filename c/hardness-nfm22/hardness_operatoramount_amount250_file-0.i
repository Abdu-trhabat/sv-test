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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
double var_1_2 = 99999999999.3;
double var_1_3 = 1.7;
signed short int var_1_9 = -5;
double var_1_10 = 128.6;
double var_1_13 = 0.5;
double var_1_14 = 24.875;
double var_1_15 = 500.5;
double var_1_16 = 3.8;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed short int var_1_23 = 5;
signed short int var_1_25 = -1;
signed short int var_1_26 = 2;
signed short int var_1_27 = 128;
signed long int var_1_28 = -2;
unsigned short int var_1_29 = 5;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 200;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 32;
signed long int var_1_35 = 32;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float var_1_40 = 2.125;
unsigned char var_1_41 = 1;
signed char var_1_42 = 5;
signed short int var_1_43 = -50;
signed long int var_1_44 = 50;
unsigned long int var_1_45 = 0;
unsigned long int var_1_46 = 5;
signed long int var_1_47 = 1000000000;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 2;
double var_1_52 = 24.75;
unsigned short int var_1_53 = 2;
float var_1_54 = 1.8;
unsigned long int var_1_55 = 8;
signed char var_1_56 = 2;
float var_1_57 = 5.8;
double last_1_var_1_10 = 128.6;
unsigned char last_1_var_1_30 = 1;
signed long int last_1_var_1_35 = 32;
unsigned char last_1_var_1_48 = 0;
unsigned char last_1_var_1_50 = 2;
float last_1_var_1_54 = 1.8;
void initially(void) {
}
void step(void) {
 if (((var_1_31 - var_1_32) - var_1_33) != last_1_var_1_30) {
  var_1_30 = var_1_33;
 } else {
  if ((last_1_var_1_50 - last_1_var_1_50) != last_1_var_1_30) {
   var_1_30 = ((((var_1_32) > (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))))) ? (var_1_32) : (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))))));
  } else {
   var_1_30 = var_1_32;
  }
 }
 unsigned char stepLocal_5 = var_1_30;
 if (var_1_30 >= stepLocal_5) {
  var_1_40 = ((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14)));
 }
 if (var_1_20) {
  if (var_1_16 != var_1_40) {
   var_1_50 = var_1_46;
  }
 }
 if ((var_1_2 - var_1_3) == (- var_1_40)) {
  if (var_1_3 <= ((var_1_40 * 1.5) + 127.4)) {
   var_1_1 = (var_1_50 - ((var_1_30 + var_1_30) + var_1_50));
  } else {
   var_1_1 = (((((var_1_50 - (var_1_30 + var_1_30))) < (var_1_50)) ? ((var_1_50 - (var_1_30 + var_1_30))) : (var_1_50)));
  }
 } else {
  var_1_1 = (var_1_50 - (var_1_30 + var_1_30));
 }
 var_1_9 = (((((var_1_50) > (var_1_30)) ? (var_1_50) : (var_1_30))) - (((((27761 - var_1_30)) > (var_1_50)) ? ((27761 - var_1_30)) : (var_1_50))));
 if (var_1_21) {
  if (var_1_14 >= (- 31.9)) {
   var_1_25 = (((((((((var_1_30) > (var_1_50)) ? (var_1_30) : (var_1_50))) + var_1_50)) < (-5)) ? ((((((var_1_30) > (var_1_50)) ? (var_1_30) : (var_1_50))) + var_1_50)) : (-5)));
  } else {
   var_1_25 = (var_1_50 + var_1_30);
  }
 }
 if (var_1_22) {
  var_1_26 = (var_1_30 + var_1_30);
 } else {
  var_1_26 = ((((var_1_50) < (var_1_30)) ? (var_1_50) : (var_1_30)));
 }
 unsigned char stepLocal_1 = var_1_30;
 if (stepLocal_1 < var_1_50) {
  var_1_27 = ((((var_1_50) > (((((var_1_30) < (var_1_30)) ? (var_1_30) : (var_1_30))))) ? (var_1_50) : (((((var_1_30) < (var_1_30)) ? (var_1_30) : (var_1_30))))));
 }
 if (var_1_21) {
  var_1_28 = (((((var_1_50) > (1000)) ? (var_1_50) : (1000))) - var_1_30);
 }
 var_1_29 = (var_1_50 + var_1_30);
 if (((((((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3)))) > (var_1_13)) ? (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3)))) : (var_1_13))) > var_1_16) {
  var_1_36 = 0;
 }
 if (var_1_36 || var_1_36) {
  if (var_1_30 == (((((16 - var_1_50)) < (var_1_30)) ? ((16 - var_1_50)) : (var_1_30)))) {
   var_1_41 = (! (! var_1_22));
  } else {
   if ((! 1) || var_1_20) {
    var_1_41 = var_1_22;
   }
  }
 } else {
  var_1_41 = ((var_1_18 && var_1_22) || (var_1_20 && var_1_39));
 }
 if (! var_1_39) {
  var_1_42 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 }
 var_1_43 = (var_1_32 - 5);
 var_1_52 = var_1_13;
 if (var_1_22) {
  var_1_53 = var_1_50;
 } else {
  var_1_53 = var_1_50;
 }
 if (last_1_var_1_54 == var_1_14) {
  var_1_54 = var_1_14;
 } else {
  var_1_54 = ((((var_1_16) > ((var_1_15 + var_1_14))) ? (var_1_16) : ((var_1_15 + var_1_14))));
 }
 var_1_55 = var_1_30;
 var_1_56 = var_1_32;
 var_1_57 = var_1_13;
 if (var_1_36) {
  if ((last_1_var_1_10 * (var_1_2 - var_1_3)) <= var_1_57) {
   var_1_10 = var_1_13;
  } else {
   var_1_10 = ((var_1_14 + var_1_15) - var_1_16);
  }
 }
 unsigned char stepLocal_0 = var_1_50 <= var_1_50;
 if (var_1_41 || stepLocal_0) {
  var_1_23 = ((((var_1_42) < (5)) ? (var_1_42) : (5)));
 }
 signed long int stepLocal_3 = (var_1_30 - var_1_50) * var_1_9;
 unsigned char stepLocal_2 = var_1_30 >= (var_1_50 - var_1_30);
 if (var_1_23 <= stepLocal_3) {
  var_1_35 = (var_1_55 - (((((var_1_34) < (var_1_26)) ? (var_1_34) : (var_1_26))) + ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))));
 } else {
  if ((var_1_20 || var_1_21) || stepLocal_2) {
   if (var_1_21) {
    var_1_35 = (var_1_29 + last_1_var_1_35);
   }
  }
 }
 signed long int stepLocal_10 = var_1_47 & var_1_30;
 signed long int stepLocal_9 = -16 * (10 / var_1_31);
 if (stepLocal_10 <= var_1_53) {
  var_1_48 = (last_1_var_1_48 && (var_1_22 || (var_1_39 || var_1_49)));
 } else {
  if (stepLocal_9 > var_1_30) {
   var_1_48 = (! (var_1_22 || var_1_39));
  } else {
   var_1_48 = var_1_21;
  }
 }
 if (var_1_14 >= (var_1_16 + var_1_3)) {
  if ((var_1_55 + 10) >= ((-500 + var_1_50) * var_1_50)) {
   if (((((var_1_50) < (var_1_55)) ? (var_1_50) : (var_1_55))) >= var_1_50) {
    var_1_17 = (! (! var_1_18));
   }
  }
 } else {
  if (var_1_50 == ((var_1_50 + var_1_30) - var_1_50)) {
   var_1_17 = ((var_1_48 && var_1_18) || var_1_20);
  } else {
   if ((- var_1_50) == var_1_50) {
    var_1_17 = (! (var_1_20 && var_1_18));
   } else {
    if (var_1_20) {
     if (var_1_18) {
      var_1_17 = ((var_1_16 != (- 9.125)) || var_1_21);
     } else {
      var_1_17 = var_1_22;
     }
    }
   }
  }
 }
 if ((var_1_30 > var_1_1) || var_1_48) {
  if (! var_1_48) {
   var_1_37 = (! (var_1_20 && var_1_18));
  }
 } else {
  if (var_1_23 > var_1_43) {
   var_1_37 = ((! var_1_21) || (! var_1_20));
  } else {
   if (var_1_22 || (var_1_43 >= ((((var_1_42) > (var_1_33)) ? (var_1_42) : (var_1_33))))) {
    var_1_37 = ((var_1_54 > var_1_2) || var_1_21);
   }
  }
 }
 unsigned char stepLocal_4 = var_1_32;
 if (var_1_2 < (var_1_3 * 10.5)) {
  if (stepLocal_4 > var_1_30) {
   var_1_38 = ((var_1_21 && var_1_18) && (var_1_48 || (var_1_17 || var_1_20)));
  } else {
   var_1_38 = (var_1_22 || var_1_39);
  }
 }
 unsigned char stepLocal_8 = var_1_30;
 signed long int stepLocal_7 = var_1_42 >> ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)));
 unsigned long int stepLocal_6 = (3294629264u - var_1_50) + (var_1_42 + var_1_50);
 if (stepLocal_7 <= ((var_1_50 % var_1_31) & -25)) {
  if (var_1_17) {
   if (stepLocal_8 >= var_1_31) {
    var_1_44 = var_1_45;
   } else {
    var_1_44 = ((((((var_1_46 + var_1_34)) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? ((var_1_46 + var_1_34)) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) - var_1_25);
   }
  } else {
   if ((var_1_45 - var_1_46) <= stepLocal_6) {
    var_1_44 = (var_1_34 - ((var_1_47 + 1000000000) - ((((-10) < 0 ) ? -(-10) : (-10)))));
   }
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 191);
 assume_abort_if_not(var_1_31 <= 255);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 64);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 16);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 16);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= 536870911);
 assume_abort_if_not(var_1_47 <= 1073741823);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_54 = var_1_54;
}
int property() {
 return (((((((((((((((((((((((((((((var_1_2 - var_1_3) == (- var_1_40)) ? ((var_1_3 <= ((var_1_40 * 1.5) + 127.4)) ? (var_1_1 == ((signed short int) (var_1_50 - ((var_1_30 + var_1_30) + var_1_50)))) : (var_1_1 == ((signed short int) (((((var_1_50 - (var_1_30 + var_1_30))) < (var_1_50)) ? ((var_1_50 - (var_1_30 + var_1_30))) : (var_1_50)))))) : (var_1_1 == ((signed short int) (var_1_50 - (var_1_30 + var_1_30))))) && (var_1_9 == ((signed short int) (((((var_1_50) > (var_1_30)) ? (var_1_50) : (var_1_30))) - (((((27761 - var_1_30)) > (var_1_50)) ? ((27761 - var_1_30)) : (var_1_50))))))) && (var_1_36 ? (((last_1_var_1_10 * (var_1_2 - var_1_3)) <= var_1_57) ? (var_1_10 == ((double) var_1_13)) : (var_1_10 == ((double) ((var_1_14 + var_1_15) - var_1_16)))) : 1)) && ((var_1_14 >= (var_1_16 + var_1_3)) ? (((var_1_55 + 10) >= ((-500 + var_1_50) * var_1_50)) ? ((((((var_1_50) < (var_1_55)) ? (var_1_50) : (var_1_55))) >= var_1_50) ? (var_1_17 == ((unsigned char) (! (! var_1_18)))) : 1) : 1) : ((var_1_50 == ((var_1_50 + var_1_30) - var_1_50)) ? (var_1_17 == ((unsigned char) ((var_1_48 && var_1_18) || var_1_20))) : (((- var_1_50) == var_1_50) ? (var_1_17 == ((unsigned char) (! (var_1_20 && var_1_18)))) : (var_1_20 ? (var_1_18 ? (var_1_17 == ((unsigned char) ((var_1_16 != (- 9.125)) || var_1_21))) : (var_1_17 == ((unsigned char) var_1_22))) : 1))))) && ((var_1_41 || (var_1_50 <= var_1_50)) ? (var_1_23 == ((signed short int) ((((var_1_42) < (5)) ? (var_1_42) : (5))))) : 1)) && (var_1_21 ? ((var_1_14 >= (- 31.9)) ? (var_1_25 == ((signed short int) (((((((((var_1_30) > (var_1_50)) ? (var_1_30) : (var_1_50))) + var_1_50)) < (-5)) ? ((((((var_1_30) > (var_1_50)) ? (var_1_30) : (var_1_50))) + var_1_50)) : (-5))))) : (var_1_25 == ((signed short int) (var_1_50 + var_1_30)))) : 1)) && (var_1_22 ? (var_1_26 == ((signed short int) (var_1_30 + var_1_30))) : (var_1_26 == ((signed short int) ((((var_1_50) < (var_1_30)) ? (var_1_50) : (var_1_30))))))) && ((var_1_30 < var_1_50) ? (var_1_27 == ((signed short int) ((((var_1_50) > (((((var_1_30) < (var_1_30)) ? (var_1_30) : (var_1_30))))) ? (var_1_50) : (((((var_1_30) < (var_1_30)) ? (var_1_30) : (var_1_30)))))))) : 1)) && (var_1_21 ? (var_1_28 == ((signed long int) (((((var_1_50) > (1000)) ? (var_1_50) : (1000))) - var_1_30))) : 1)) && (var_1_29 == ((unsigned short int) (var_1_50 + var_1_30)))) && ((((var_1_31 - var_1_32) - var_1_33) != last_1_var_1_30) ? (var_1_30 == ((unsigned char) var_1_33)) : (((last_1_var_1_50 - last_1_var_1_50) != last_1_var_1_30) ? (var_1_30 == ((unsigned char) ((((var_1_32) > (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))))) ? (var_1_32) : (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)))))))) : (var_1_30 == ((unsigned char) var_1_32))))) && ((var_1_23 <= ((var_1_30 - var_1_50) * var_1_9)) ? (var_1_35 == ((signed long int) (var_1_55 - (((((var_1_34) < (var_1_26)) ? (var_1_34) : (var_1_26))) + ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))))) : (((var_1_20 || var_1_21) || (var_1_30 >= (var_1_50 - var_1_30))) ? (var_1_21 ? (var_1_35 == ((signed long int) (var_1_29 + last_1_var_1_35))) : 1) : 1))) && ((((((((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3)))) > (var_1_13)) ? (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3)))) : (var_1_13))) > var_1_16) ? (var_1_36 == ((unsigned char) 0)) : 1)) && (((var_1_30 > var_1_1) || var_1_48) ? ((! var_1_48) ? (var_1_37 == ((unsigned char) (! (var_1_20 && var_1_18)))) : 1) : ((var_1_23 > var_1_43) ? (var_1_37 == ((unsigned char) ((! var_1_21) || (! var_1_20)))) : ((var_1_22 || (var_1_43 >= ((((var_1_42) > (var_1_33)) ? (var_1_42) : (var_1_33))))) ? (var_1_37 == ((unsigned char) ((var_1_54 > var_1_2) || var_1_21))) : 1)))) && ((var_1_2 < (var_1_3 * 10.5)) ? ((var_1_32 > var_1_30) ? (var_1_38 == ((unsigned char) ((var_1_21 && var_1_18) && (var_1_48 || (var_1_17 || var_1_20))))) : (var_1_38 == ((unsigned char) (var_1_22 || var_1_39)))) : 1)) && ((var_1_30 >= var_1_30) ? (var_1_40 == ((float) ((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14))))) : 1)) && ((var_1_36 || var_1_36) ? ((var_1_30 == (((((16 - var_1_50)) < (var_1_30)) ? ((16 - var_1_50)) : (var_1_30)))) ? (var_1_41 == ((unsigned char) (! (! var_1_22)))) : (((! 1) || var_1_20) ? (var_1_41 == ((unsigned char) var_1_22)) : 1)) : (var_1_41 == ((unsigned char) ((var_1_18 && var_1_22) || (var_1_20 && var_1_39)))))) && ((! var_1_39) ? (var_1_42 == ((signed char) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) : 1)) && (var_1_43 == ((signed short int) (var_1_32 - 5)))) && (((var_1_42 >> ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))) <= ((var_1_50 % var_1_31) & -25)) ? (var_1_17 ? ((var_1_30 >= var_1_31) ? (var_1_44 == ((signed long int) var_1_45)) : (var_1_44 == ((signed long int) ((((((var_1_46 + var_1_34)) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? ((var_1_46 + var_1_34)) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) - var_1_25)))) : (((var_1_45 - var_1_46) <= ((3294629264u - var_1_50) + (var_1_42 + var_1_50))) ? (var_1_44 == ((signed long int) (var_1_34 - ((var_1_47 + 1000000000) - ((((-10) < 0 ) ? -(-10) : (-10))))))) : 1)) : 1)) && (((var_1_47 & var_1_30) <= var_1_53) ? (var_1_48 == ((unsigned char) (last_1_var_1_48 && (var_1_22 || (var_1_39 || var_1_49))))) : (((-16 * (10 / var_1_31)) > var_1_30) ? (var_1_48 == ((unsigned char) (! (var_1_22 || var_1_39)))) : (var_1_48 == ((unsigned char) var_1_21))))) && (var_1_20 ? ((var_1_16 != var_1_40) ? (var_1_50 == ((unsigned char) var_1_46)) : 1) : 1)) && (var_1_52 == ((double) var_1_13))) && (var_1_22 ? (var_1_53 == ((unsigned short int) var_1_50)) : (var_1_53 == ((unsigned short int) var_1_50)))) && ((last_1_var_1_54 == var_1_14) ? (var_1_54 == ((float) var_1_14)) : (var_1_54 == ((float) ((((var_1_16) > ((var_1_15 + var_1_14))) ? (var_1_16) : ((var_1_15 + var_1_14)))))))) && (var_1_55 == ((unsigned long int) var_1_30))) && (var_1_56 == ((signed char) var_1_32))) && (var_1_57 == ((float) var_1_13))
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
