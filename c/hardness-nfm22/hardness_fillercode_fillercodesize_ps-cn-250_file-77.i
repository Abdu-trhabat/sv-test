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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
float var_1_2 = 255.5;
float var_1_3 = 99.8;
signed char var_1_4 = -25;
float var_1_6 = 255.25;
unsigned short int var_1_7 = 16;
signed char var_1_8 = -10;
signed char var_1_9 = -8;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 10000;
unsigned short int var_1_12 = 5;
signed short int var_1_13 = 200;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 35895;
unsigned short int var_1_17 = 18336;
unsigned char var_1_18 = 0;
signed long int var_1_19 = -50;
unsigned char var_1_20 = 10;
signed long int var_1_21 = 4;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 5;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 1;
unsigned short int var_1_32 = 50;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
float var_1_37 = 1000000000.075;
float var_1_38 = 4.1;
float var_1_39 = -0.1;
float var_1_40 = 3.75;
unsigned long int var_1_41 = 5;
unsigned long int var_1_42 = 2557504894;
unsigned long int var_1_43 = 2157368521;
double var_1_44 = 4.5;
unsigned long int var_1_45 = 1725770268;
float var_1_46 = 16.25;
unsigned long int var_1_47 = 128;
unsigned char var_1_48 = 50;
unsigned char var_1_49 = 128;
double var_1_50 = 25.8;
double var_1_51 = 0.0;
double var_1_52 = 3.6;
signed long int var_1_53 = 16;
double var_1_54 = 9.725;
signed char var_1_55 = -32;
signed short int var_1_56 = 256;
signed short int var_1_57 = 2;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 32;
signed short int var_1_62 = -64;
unsigned long int var_1_63 = 16;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
double var_1_66 = 64.625;
double var_1_67 = 5.55;
signed short int var_1_68 = -16;
unsigned char var_1_69 = 8;
signed short int var_1_70 = 25;
signed char last_1_var_1_8 = -10;
unsigned char last_1_var_1_15 = 0;
signed long int last_1_var_1_19 = -50;
void initially(void) {
}
void step(void) {
 if (var_1_21 <= -1) {
  var_1_20 = (((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) < 0 ) ? -((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) : ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))));
 }
 if (var_1_21 >= var_1_20) {
  if (var_1_21 > var_1_20) {
   var_1_23 = (((((var_1_24) < (128)) ? (var_1_24) : (128))) - ((((var_1_25) > ((var_1_26 + var_1_27))) ? (var_1_25) : ((var_1_26 + var_1_27)))));
  } else {
   if (var_1_21 != var_1_20) {
    var_1_23 = var_1_26;
   }
  }
 } else {
  var_1_23 = var_1_26;
 }
 if (var_1_24 >= ((((10) < 0 ) ? -(10) : (10)))) {
  var_1_28 = ((var_1_29 - (var_1_30 + var_1_31)) + var_1_25);
 } else {
  var_1_28 = ((((((((var_1_22) > (var_1_26)) ? (var_1_22) : (var_1_26)))) < (var_1_24)) ? (((((var_1_22) > (var_1_26)) ? (var_1_22) : (var_1_26)))) : (var_1_24)));
 }
 if ((var_1_30 % ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) <= var_1_28) {
  if (var_1_26 < var_1_24) {
   var_1_32 = var_1_23;
  } else {
   var_1_32 = ((((var_1_23) > (var_1_31)) ? (var_1_23) : (var_1_31)));
  }
 } else {
  if (var_1_30 == var_1_31) {
   var_1_32 = var_1_20;
  } else {
   var_1_32 = var_1_30;
  }
 }
 if (var_1_25 < (var_1_24 - var_1_31)) {
  if (var_1_34) {
   if (var_1_26 <= (var_1_24 - var_1_27)) {
    var_1_33 = var_1_35;
   }
  }
 } else {
  var_1_33 = var_1_36;
 }
 if (var_1_27 > var_1_24) {
  if (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) <= var_1_30) {
   var_1_37 = (var_1_38 + var_1_39);
  } else {
   var_1_37 = (8.6f - var_1_40);
  }
 } else {
  if ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) < 0 ) ? -((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) : ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) >= var_1_30) {
   if (var_1_27 != (var_1_24 - var_1_30)) {
    if (var_1_25 <= 32) {
     var_1_37 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
    } else {
     var_1_37 = (((((((var_1_40) > (var_1_38)) ? (var_1_40) : (var_1_38))) < 0 ) ? -((((var_1_40) > (var_1_38)) ? (var_1_40) : (var_1_38))) : ((((var_1_40) > (var_1_38)) ? (var_1_40) : (var_1_38)))));
    }
   }
  }
 }
 if (var_1_31 <= var_1_23) {
  if (var_1_26 <= (var_1_27 / 16)) {
   if (-64 <= ((-32 / var_1_29) % var_1_24)) {
    if ((~ var_1_32) >= var_1_24) {
     var_1_41 = ((((var_1_42 - var_1_25) < 0 ) ? -(var_1_42 - var_1_25) : (var_1_42 - var_1_25)));
    } else {
     if (var_1_32 < var_1_23) {
      var_1_41 = ((((((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43))) < 0 ) ? -((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43))) : ((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43))))) - var_1_32);
     } else {
      if (var_1_22 <= (var_1_43 * var_1_24)) {
       var_1_41 = 4u;
      } else {
       if (var_1_22 <= var_1_23) {
        var_1_41 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
       } else {
        if ((var_1_40 - var_1_44) <= var_1_38) {
         var_1_41 = ((((((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) > (((((var_1_26) > (1u)) ? (var_1_26) : (1u))))) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_26) > (1u)) ? (var_1_26) : (1u))))))) > ((var_1_43 - 50u))) ? (((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) > (((((var_1_26) > (1u)) ? (var_1_26) : (1u))))) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_26) > (1u)) ? (var_1_26) : (1u))))))) : ((var_1_43 - 50u))));
        } else {
         var_1_41 = (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) - (var_1_45 - var_1_28));
        }
       }
      }
     }
    }
   } else {
    if (var_1_32 > var_1_43) {
     var_1_41 = (var_1_23 + var_1_26);
    }
   }
  }
 } else {
  if (var_1_39 > var_1_46) {
   var_1_41 = (var_1_43 - ((((var_1_31) > (var_1_27)) ? (var_1_31) : (var_1_27))));
  } else {
   if (var_1_44 <= (- var_1_39)) {
    if (var_1_31 <= 32) {
     var_1_41 = ((((var_1_30) > (var_1_47)) ? (var_1_30) : (var_1_47)));
    } else {
     var_1_41 = ((((((((var_1_27) < (var_1_30)) ? (var_1_27) : (var_1_30)))) > (var_1_23)) ? (((((var_1_27) < (var_1_30)) ? (var_1_27) : (var_1_30)))) : (var_1_23)));
    }
   }
  }
 }
 if ((- var_1_46) >= (9.75f * var_1_37)) {
  var_1_48 = (((((var_1_24) < (var_1_49)) ? (var_1_24) : (var_1_49))) - ((((var_1_31) > ((var_1_30 + var_1_27))) ? (var_1_31) : ((var_1_30 + var_1_27)))));
 } else {
  var_1_48 = (var_1_24 - var_1_26);
 }
 if (var_1_46 >= (((((var_1_37 / -0.6f)) < (9.999999999905E10f)) ? ((var_1_37 / -0.6f)) : (9.999999999905E10f)))) {
  if (var_1_32 <= (var_1_49 / var_1_24)) {
   var_1_50 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  } else {
   if (var_1_33) {
    var_1_50 = ((((var_1_40 - (var_1_51 - var_1_52)) < 0 ) ? -(var_1_40 - (var_1_51 - var_1_52)) : (var_1_40 - (var_1_51 - var_1_52))));
   } else {
    var_1_50 = (((((((10.5 - var_1_40) < 0 ) ? -(10.5 - var_1_40) : (10.5 - var_1_40))) < 0 ) ? -((((10.5 - var_1_40) < 0 ) ? -(10.5 - var_1_40) : (10.5 - var_1_40))) : ((((10.5 - var_1_40) < 0 ) ? -(10.5 - var_1_40) : (10.5 - var_1_40)))));
   }
  }
 }
 if (var_1_34 || var_1_35) {
  if (var_1_23 <= var_1_31) {
   var_1_53 = (var_1_29 + (var_1_25 + var_1_22));
  } else {
   var_1_53 = (((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) < 0 ) ? -((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) : ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))));
  }
 } else {
  var_1_53 = ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (((((var_1_29) < (var_1_32)) ? (var_1_29) : (var_1_32))))) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (((((var_1_29) < (var_1_32)) ? (var_1_29) : (var_1_32))))));
 }
 var_1_54 = ((((var_1_38) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_38) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))));
 if (var_1_44 < var_1_46) {
  var_1_55 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  if (((((var_1_49) > (var_1_32)) ? (var_1_49) : (var_1_32))) > ((var_1_22 ^ var_1_29) ^ var_1_24)) {
   var_1_55 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  }
 }
 if (var_1_34) {
  if ((((((((var_1_57) < (var_1_28)) ? (var_1_57) : (var_1_28))) < 0 ) ? -((((var_1_57) < (var_1_28)) ? (var_1_57) : (var_1_28))) : ((((var_1_57) < (var_1_28)) ? (var_1_57) : (var_1_28))))) <= var_1_26) {
   var_1_56 = ((((var_1_28) > (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_28) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))));
  }
 } else {
  if ((((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))) - var_1_26) > var_1_25) {
   var_1_56 = (((((var_1_24 + var_1_48) < 0 ) ? -(var_1_24 + var_1_48) : (var_1_24 + var_1_48))) + ((((var_1_55) < (var_1_25)) ? (var_1_55) : (var_1_25))));
  } else {
   if (((((var_1_26) > (var_1_31)) ? (var_1_26) : (var_1_31))) > -64) {
    var_1_56 = var_1_28;
   } else {
    var_1_56 = (1 - var_1_25);
   }
  }
 }
 if (var_1_33) {
  var_1_58 = ((((((var_1_22) < (var_1_31)) ? (var_1_22) : (var_1_31))) <= var_1_25) || ((var_1_35 && var_1_59) && var_1_60));
 }
 if (var_1_50 > ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) {
  if ((var_1_20 / var_1_29) < var_1_57) {
   var_1_61 = 100;
  }
 }
 if (var_1_44 < var_1_37) {
  var_1_62 = var_1_49;
 }
 if (var_1_35) {
  var_1_63 = var_1_26;
 } else {
  var_1_63 = var_1_42;
 }
 if (var_1_35) {
  var_1_64 = var_1_22;
 }
 var_1_65 = var_1_24;
 if (var_1_34) {
  var_1_66 = var_1_67;
 }
 var_1_68 = var_1_61;
 if (var_1_48 < 5) {
  var_1_69 = (((((var_1_25 + var_1_27)) > (((((var_1_26) > (var_1_30)) ? (var_1_26) : (var_1_30))))) ? ((var_1_25 + var_1_27)) : (((((var_1_26) > (var_1_30)) ? (var_1_26) : (var_1_30))))));
 }
 if (var_1_23 > (var_1_22 & var_1_24)) {
  if (var_1_58) {
   var_1_70 = var_1_61;
  }
 }
 signed long int stepLocal_0 = (((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4));
 if (stepLocal_0 <= last_1_var_1_8) {
  if ((- var_1_3) > ((((var_1_2) > (var_1_6)) ? (var_1_2) : (var_1_6)))) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if ((- var_1_7) < (var_1_1 * var_1_4)) {
  var_1_8 = var_1_9;
 }
 if ((var_1_6 * var_1_2) <= var_1_3) {
  if (last_1_var_1_15) {
   var_1_13 = (-10 + var_1_12);
  } else {
   var_1_13 = var_1_4;
  }
 }
 signed long int stepLocal_1 = var_1_16 - (var_1_17 - 256);
 if (var_1_3 != var_1_6) {
  if (var_1_13 >= stepLocal_1) {
   var_1_15 = var_1_18;
  } else {
   var_1_15 = var_1_18;
  }
 } else {
  var_1_15 = var_1_18;
 }
 var_1_10 = (50 + ((var_1_11 + 10000) - var_1_12));
 unsigned short int stepLocal_4 = var_1_1;
 signed long int stepLocal_3 = var_1_7 + (128 + var_1_1);
 signed long int stepLocal_2 = - var_1_10;
 if (var_1_1 < stepLocal_2) {
  if (stepLocal_3 <= last_1_var_1_19) {
   var_1_19 = var_1_4;
  }
 } else {
  if (stepLocal_4 < (((((var_1_10) < (var_1_17)) ? (var_1_10) : (var_1_17))) / var_1_11)) {
   var_1_19 = ((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9)));
  } else {
   var_1_19 = var_1_16;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -127);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 8191);
 assume_abort_if_not(var_1_11 <= 16384);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65535);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 16383);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483648);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 64);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 63);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -461168.6018427382800e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 2147483647);
 assume_abort_if_not(var_1_42 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 4294967294);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 127);
 assume_abort_if_not(var_1_49 <= 254);
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 4611686.018427382800e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_57 >= -32767);
 assume_abort_if_not(var_1_57 <= 32767);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 1);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 1);
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= -922337.2036854765600e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_19 = var_1_19;
}
int property() {
 return ((((((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) <= last_1_var_1_8) ? (((- var_1_3) > ((((var_1_2) > (var_1_6)) ? (var_1_2) : (var_1_6)))) ? (var_1_1 == ((unsigned short int) var_1_7)) : (var_1_1 == ((unsigned short int) var_1_7))) : (var_1_1 == ((unsigned short int) var_1_7))) && (((- var_1_7) < (var_1_1 * var_1_4)) ? (var_1_8 == ((signed char) var_1_9)) : 1)) && (var_1_10 == ((unsigned short int) (50 + ((var_1_11 + 10000) - var_1_12))))) && (((var_1_6 * var_1_2) <= var_1_3) ? (last_1_var_1_15 ? (var_1_13 == ((signed short int) (-10 + var_1_12))) : (var_1_13 == ((signed short int) var_1_4))) : 1)) && ((var_1_3 != var_1_6) ? ((var_1_13 >= (var_1_16 - (var_1_17 - 256))) ? (var_1_15 == ((unsigned char) var_1_18)) : (var_1_15 == ((unsigned char) var_1_18))) : (var_1_15 == ((unsigned char) var_1_18)))) && ((var_1_1 < (- var_1_10)) ? (((var_1_7 + (128 + var_1_1)) <= last_1_var_1_19) ? (var_1_19 == ((signed long int) var_1_4)) : 1) : ((var_1_1 < (((((var_1_10) < (var_1_17)) ? (var_1_10) : (var_1_17))) / var_1_11)) ? (var_1_19 == ((signed long int) ((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9))))) : (var_1_19 == ((signed long int) var_1_16))))
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
