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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_5 = 63575;
unsigned long int var_1_6 = 10;
unsigned long int var_1_8 = 4065487788;
float var_1_9 = 99999999.5;
signed short int var_1_10 = 16;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 5;
float var_1_13 = 4.25;
signed char var_1_14 = -32;
signed char var_1_15 = 10;
signed char var_1_16 = 64;
signed char var_1_17 = 2;
unsigned long int var_1_18 = 8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 64;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
signed short int var_1_25 = 32;
unsigned char var_1_26 = 128;
signed char var_1_27 = 50;
unsigned short int var_1_28 = 16;
unsigned short int var_1_29 = 10000;
unsigned char var_1_30 = 50;
unsigned char var_1_31 = 200;
double var_1_32 = 31.5;
float var_1_33 = 200.5;
double var_1_34 = 0.25;
double var_1_35 = 2.5;
double var_1_36 = 64.8;
double var_1_37 = 0.0;
double var_1_38 = 2.25;
double var_1_40 = 255.4;
signed char var_1_41 = -4;
signed char var_1_43 = -4;
signed char var_1_44 = -2;
signed char var_1_45 = -32;
signed long int var_1_46 = -128;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
unsigned long int var_1_54 = 5;
signed long int var_1_55 = 4;
signed long int var_1_56 = 1998687335;
signed long int var_1_57 = 1000000000;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 0;
float var_1_60 = 4.2;
signed short int var_1_61 = 4;
double var_1_62 = 50.875;
double var_1_63 = 10.2;
unsigned short int last_1_var_1_1 = 64;
unsigned long int last_1_var_1_6 = 10;
unsigned char last_1_var_1_30 = 50;
signed char last_1_var_1_43 = -4;
signed long int last_1_var_1_46 = -128;
unsigned char last_1_var_1_47 = 0;
signed long int last_1_var_1_55 = 4;
unsigned char last_1_var_1_58 = 1;
signed short int last_1_var_1_61 = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_16 = var_1_24 - var_1_16;
 if (last_1_var_1_47) {
  var_1_55 = (var_1_11 - (var_1_56 - 100));
 } else {
  if (last_1_var_1_61 != stepLocal_16) {
   var_1_55 = ((var_1_56 - var_1_16) - ((var_1_57 - last_1_var_1_46) + 100000000));
  } else {
   var_1_55 = (var_1_45 + last_1_var_1_55);
  }
 }
 if (! last_1_var_1_58) {
  var_1_18 = ((((((((last_1_var_1_30) < 0 ) ? -(last_1_var_1_30) : (last_1_var_1_30)))) < (var_1_16)) ? (((((last_1_var_1_30) < 0 ) ? -(last_1_var_1_30) : (last_1_var_1_30)))) : (var_1_16)));
 } else {
  var_1_18 = (var_1_10 + last_1_var_1_46);
 }
 unsigned char stepLocal_6 = var_1_26;
 if (var_1_18 != stepLocal_6) {
  var_1_30 = ((var_1_31 - 10) - var_1_16);
 } else {
  var_1_30 = ((((var_1_31 - var_1_24) < 0 ) ? -(var_1_31 - var_1_24) : (var_1_31 - var_1_24)));
 }
 unsigned short int stepLocal_15 = var_1_5;
 signed long int stepLocal_14 = (var_1_5 * var_1_21) | 1;
 if (((~ var_1_26) * var_1_31) < stepLocal_14) {
  var_1_46 = ((((var_1_12 - var_1_10) < 0 ) ? -(var_1_12 - var_1_10) : (var_1_12 - var_1_10)));
 } else {
  if (var_1_30 == stepLocal_15) {
   var_1_46 = ((((((((500) < (var_1_29)) ? (500) : (var_1_29)))) > ((var_1_17 + var_1_18))) ? (((((500) < (var_1_29)) ? (500) : (var_1_29)))) : ((var_1_17 + var_1_18))));
  }
 }
 unsigned char stepLocal_17 = var_1_11;
 if (var_1_18 < stepLocal_17) {
  var_1_58 = var_1_49;
 } else {
  var_1_58 = var_1_59;
 }
 signed long int stepLocal_5 = var_1_26 - var_1_21;
 if (var_1_30 < stepLocal_5) {
  var_1_28 = (var_1_30 + (var_1_21 + (var_1_29 - var_1_15)));
 }
 var_1_63 = 4.75;
 if (var_1_55 >= last_1_var_1_1) {
  if (var_1_58) {
   var_1_1 = (var_1_5 - var_1_55);
  }
 }
 if (var_1_16 <= var_1_30) {
  var_1_25 = (var_1_15 + var_1_1);
 }
 signed long int stepLocal_8 = - var_1_55;
 unsigned short int stepLocal_7 = var_1_28;
 if ((var_1_5 - var_1_12) < stepLocal_7) {
  if ((var_1_63 / var_1_33) != var_1_13) {
   var_1_32 = (var_1_34 - (((((255.2 + var_1_35)) < (var_1_36)) ? ((255.2 + var_1_35)) : (var_1_36))));
  } else {
   if (var_1_58) {
    var_1_32 = ((((((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))));
   } else {
    var_1_32 = ((var_1_37 - var_1_35) - var_1_36);
   }
  }
 } else {
  if (! var_1_58) {
   if (var_1_5 >= stepLocal_8) {
    var_1_32 = ((((((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) < (var_1_13)) ? (((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) : (var_1_13)));
   } else {
    var_1_32 = (var_1_36 - var_1_34);
   }
  }
 }
 unsigned short int stepLocal_2 = var_1_1;
 signed long int stepLocal_1 = var_1_10 % (var_1_11 + var_1_12);
 signed long int stepLocal_0 = (((5 - var_1_10) < 0 ) ? -(5 - var_1_10) : (5 - var_1_10));
 if (stepLocal_0 != (((((-10000) > (var_1_1)) ? (-10000) : (var_1_1))) * var_1_8)) {
  if (((var_1_8 * var_1_18) * -4) < stepLocal_2) {
   if (var_1_1 < stepLocal_1) {
    if (! var_1_58) {
     var_1_9 = var_1_13;
    }
   } else {
    var_1_9 = var_1_13;
   }
  } else {
   var_1_9 = var_1_13;
  }
 } else {
  var_1_9 = var_1_13;
 }
 unsigned short int stepLocal_4 = var_1_1;
 if (stepLocal_4 != (- ((((25) > (var_1_17)) ? (25) : (var_1_17))))) {
  var_1_27 = ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)));
 } else {
  var_1_27 = var_1_17;
 }
 if ((var_1_63 * 8.2) < 10.4) {
  var_1_6 = ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - last_1_var_1_6) - ((((var_1_25) < (var_1_5)) ? (var_1_25) : (var_1_5))));
 } else {
  var_1_6 = ((((var_1_5 + var_1_25) < 0 ) ? -(var_1_5 + var_1_25) : (var_1_5 + var_1_25)));
 }
 if ((var_1_6 > var_1_1) && ((var_1_31 <= var_1_29) || var_1_58)) {
  var_1_41 = ((((var_1_17) > (((((var_1_16) < (-16)) ? (var_1_16) : (-16))))) ? (var_1_17) : (((((var_1_16) < (-16)) ? (var_1_16) : (-16))))));
 }
 unsigned char stepLocal_13 = var_1_11 >= ((((var_1_15) > (var_1_29)) ? (var_1_15) : (var_1_29)));
 signed long int stepLocal_12 = var_1_11 | 25;
 signed long int stepLocal_11 = var_1_12 & var_1_11;
 signed long int stepLocal_10 = (((0) > (var_1_41)) ? (0) : (var_1_41));
 if (stepLocal_13 || (var_1_33 > var_1_32)) {
  var_1_43 = (((((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) > (var_1_31)) ? ((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) : (var_1_31)));
 } else {
  if (stepLocal_10 < var_1_16) {
   var_1_43 = (((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))));
  } else {
   if (stepLocal_12 == var_1_8) {
    if (stepLocal_11 == (last_1_var_1_43 * var_1_17)) {
     var_1_43 = (var_1_16 - var_1_17);
    }
   }
  }
 }
 if (var_1_63 <= (var_1_40 + var_1_32)) {
  var_1_47 = var_1_48;
 } else {
  if (var_1_17 > var_1_6) {
   var_1_47 = var_1_49;
  } else {
   var_1_47 = (var_1_48 && var_1_50);
  }
 }
 unsigned char stepLocal_3 = var_1_58;
 if (var_1_47 || stepLocal_3) {
  var_1_20 = ((var_1_21 + var_1_22) - var_1_15);
 }
 if (var_1_5 > var_1_12) {
  var_1_61 = var_1_55;
 } else {
  if (var_1_20 <= var_1_15) {
   var_1_61 = var_1_12;
  }
 }
 if (var_1_47) {
  var_1_54 = (var_1_8 - var_1_5);
 }
 if (var_1_47) {
  var_1_60 = var_1_40;
 } else {
  var_1_60 = var_1_36;
 }
 unsigned long int stepLocal_18 = var_1_54;
 if (-128 != stepLocal_18) {
  var_1_62 = ((((var_1_40) < (var_1_36)) ? (var_1_40) : (var_1_36)));
 }
 if (((- var_1_12) == var_1_61) && (var_1_54 < var_1_20)) {
  var_1_14 = (2 - var_1_15);
 } else {
  if (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) < var_1_5) {
   var_1_14 = ((((((var_1_16 - var_1_17) - var_1_15)) > (16)) ? (((var_1_16 - var_1_17) - var_1_15)) : (16)));
  }
 }
 if (var_1_13 < (var_1_63 + (- var_1_62))) {
  var_1_23 = (var_1_24 + var_1_15);
 } else {
  if (! var_1_47) {
   var_1_23 = (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + (var_1_21 - var_1_17));
  }
 }
 if (var_1_21 > var_1_54) {
  if (var_1_18 > var_1_54) {
   var_1_51 = (((((var_1_22 + var_1_16)) < (var_1_24)) ? ((var_1_22 + var_1_16)) : (var_1_24)));
  } else {
   if ((- var_1_17) >= var_1_46) {
    if (((((var_1_29) < (var_1_46)) ? (var_1_29) : (var_1_46))) <= var_1_11) {
     var_1_51 = ((((((var_1_17 + 10)) > (var_1_12)) ? ((var_1_17 + 10)) : (var_1_12))) + 16);
    } else {
     var_1_51 = 100;
    }
   }
  }
 } else {
  var_1_51 = (var_1_17 + ((((var_1_15) > (((((var_1_24) > (var_1_12)) ? (var_1_24) : (var_1_12))))) ? (var_1_15) : (((((var_1_24) > (var_1_12)) ? (var_1_24) : (var_1_12)))))));
 }
 unsigned long int stepLocal_9 = var_1_18 * var_1_51;
 if (var_1_11 > stepLocal_9) {
  var_1_38 = (((((var_1_35 + var_1_40) < 0 ) ? -(var_1_35 + var_1_40) : (var_1_35 + var_1_40))) - var_1_36);
 } else {
  var_1_38 = var_1_34;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 3221225470);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 128);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 62);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 63);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 64);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 255);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 8191);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 190);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 4611686.018427383000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -63);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -63);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 1073741823);
 assume_abort_if_not(var_1_56 <= 2147483646);
 var_1_57 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_57 >= 536870911);
 assume_abort_if_not(var_1_57 <= 1073741823);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 1);
 assume_abort_if_not(var_1_59 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return (((((((((((((((((((((((((var_1_55 >= last_1_var_1_1) ? (var_1_58 ? (var_1_1 == ((unsigned short int) (var_1_5 - var_1_55))) : 1) : 1) && (((var_1_63 * 8.2) < 10.4) ? (var_1_6 == ((unsigned long int) ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - last_1_var_1_6) - ((((var_1_25) < (var_1_5)) ? (var_1_25) : (var_1_5)))))) : (var_1_6 == ((unsigned long int) ((((var_1_5 + var_1_25) < 0 ) ? -(var_1_5 + var_1_25) : (var_1_5 + var_1_25))))))) && ((((((5 - var_1_10) < 0 ) ? -(5 - var_1_10) : (5 - var_1_10))) != (((((-10000) > (var_1_1)) ? (-10000) : (var_1_1))) * var_1_8)) ? ((((var_1_8 * var_1_18) * -4) < var_1_1) ? ((var_1_1 < (var_1_10 % (var_1_11 + var_1_12))) ? ((! var_1_58) ? (var_1_9 == ((float) var_1_13)) : 1) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_13)))) && ((((- var_1_12) == var_1_61) && (var_1_54 < var_1_20)) ? (var_1_14 == ((signed char) (2 - var_1_15))) : ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) < var_1_5) ? (var_1_14 == ((signed char) ((((((var_1_16 - var_1_17) - var_1_15)) > (16)) ? (((var_1_16 - var_1_17) - var_1_15)) : (16))))) : 1))) && ((! last_1_var_1_58) ? (var_1_18 == ((unsigned long int) ((((((((last_1_var_1_30) < 0 ) ? -(last_1_var_1_30) : (last_1_var_1_30)))) < (var_1_16)) ? (((((last_1_var_1_30) < 0 ) ? -(last_1_var_1_30) : (last_1_var_1_30)))) : (var_1_16))))) : (var_1_18 == ((unsigned long int) (var_1_10 + last_1_var_1_46))))) && ((var_1_47 || var_1_58) ? (var_1_20 == ((unsigned char) ((var_1_21 + var_1_22) - var_1_15))) : 1)) && ((var_1_13 < (var_1_63 + (- var_1_62))) ? (var_1_23 == ((unsigned char) (var_1_24 + var_1_15))) : ((! var_1_47) ? (var_1_23 == ((unsigned char) (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + (var_1_21 - var_1_17)))) : 1))) && ((var_1_16 <= var_1_30) ? (var_1_25 == ((signed short int) (var_1_15 + var_1_1))) : 1)) && ((var_1_1 != (- ((((25) > (var_1_17)) ? (25) : (var_1_17))))) ? (var_1_27 == ((signed char) ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))))) : (var_1_27 == ((signed char) var_1_17)))) && ((var_1_30 < (var_1_26 - var_1_21)) ? (var_1_28 == ((unsigned short int) (var_1_30 + (var_1_21 + (var_1_29 - var_1_15))))) : 1)) && ((var_1_18 != var_1_26) ? (var_1_30 == ((unsigned char) ((var_1_31 - 10) - var_1_16))) : (var_1_30 == ((unsigned char) ((((var_1_31 - var_1_24) < 0 ) ? -(var_1_31 - var_1_24) : (var_1_31 - var_1_24))))))) && (((var_1_5 - var_1_12) < var_1_28) ? (((var_1_63 / var_1_33) != var_1_13) ? (var_1_32 == ((double) (var_1_34 - (((((255.2 + var_1_35)) < (var_1_36)) ? ((255.2 + var_1_35)) : (var_1_36)))))) : (var_1_58 ? (var_1_32 == ((double) ((((((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))))) : (var_1_32 == ((double) ((var_1_37 - var_1_35) - var_1_36))))) : ((! var_1_58) ? ((var_1_5 >= (- var_1_55)) ? (var_1_32 == ((double) ((((((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) < (var_1_13)) ? (((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) : (var_1_13))))) : (var_1_32 == ((double) (var_1_36 - var_1_34)))) : 1))) && ((var_1_11 > (var_1_18 * var_1_51)) ? (var_1_38 == ((double) (((((var_1_35 + var_1_40) < 0 ) ? -(var_1_35 + var_1_40) : (var_1_35 + var_1_40))) - var_1_36))) : (var_1_38 == ((double) var_1_34)))) && (((var_1_6 > var_1_1) && ((var_1_31 <= var_1_29) || var_1_58)) ? (var_1_41 == ((signed char) ((((var_1_17) > (((((var_1_16) < (-16)) ? (var_1_16) : (-16))))) ? (var_1_17) : (((((var_1_16) < (-16)) ? (var_1_16) : (-16)))))))) : 1)) && (((var_1_11 >= ((((var_1_15) > (var_1_29)) ? (var_1_15) : (var_1_29)))) || (var_1_33 > var_1_32)) ? (var_1_43 == ((signed char) (((((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) > (var_1_31)) ? ((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) : (var_1_31))))) : ((((((0) > (var_1_41)) ? (0) : (var_1_41))) < var_1_16) ? (var_1_43 == ((signed char) (((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))))) : (((var_1_11 | 25) == var_1_8) ? (((var_1_12 & var_1_11) == (last_1_var_1_43 * var_1_17)) ? (var_1_43 == ((signed char) (var_1_16 - var_1_17))) : 1) : 1)))) && ((((~ var_1_26) * var_1_31) < ((var_1_5 * var_1_21) | 1)) ? (var_1_46 == ((signed long int) ((((var_1_12 - var_1_10) < 0 ) ? -(var_1_12 - var_1_10) : (var_1_12 - var_1_10))))) : ((var_1_30 == var_1_5) ? (var_1_46 == ((signed long int) ((((((((500) < (var_1_29)) ? (500) : (var_1_29)))) > ((var_1_17 + var_1_18))) ? (((((500) < (var_1_29)) ? (500) : (var_1_29)))) : ((var_1_17 + var_1_18)))))) : 1))) && ((var_1_63 <= (var_1_40 + var_1_32)) ? (var_1_47 == ((unsigned char) var_1_48)) : ((var_1_17 > var_1_6) ? (var_1_47 == ((unsigned char) var_1_49)) : (var_1_47 == ((unsigned char) (var_1_48 && var_1_50)))))) && ((var_1_21 > var_1_54) ? ((var_1_18 > var_1_54) ? (var_1_51 == ((unsigned char) (((((var_1_22 + var_1_16)) < (var_1_24)) ? ((var_1_22 + var_1_16)) : (var_1_24))))) : (((- var_1_17) >= var_1_46) ? ((((((var_1_29) < (var_1_46)) ? (var_1_29) : (var_1_46))) <= var_1_11) ? (var_1_51 == ((unsigned char) ((((((var_1_17 + 10)) > (var_1_12)) ? ((var_1_17 + 10)) : (var_1_12))) + 16))) : (var_1_51 == ((unsigned char) 100))) : 1)) : (var_1_51 == ((unsigned char) (var_1_17 + ((((var_1_15) > (((((var_1_24) > (var_1_12)) ? (var_1_24) : (var_1_12))))) ? (var_1_15) : (((((var_1_24) > (var_1_12)) ? (var_1_24) : (var_1_12))))))))))) && (var_1_47 ? (var_1_54 == ((unsigned long int) (var_1_8 - var_1_5))) : 1)) && (last_1_var_1_47 ? (var_1_55 == ((signed long int) (var_1_11 - (var_1_56 - 100)))) : ((last_1_var_1_61 != (var_1_24 - var_1_16)) ? (var_1_55 == ((signed long int) ((var_1_56 - var_1_16) - ((var_1_57 - last_1_var_1_46) + 100000000)))) : (var_1_55 == ((signed long int) (var_1_45 + last_1_var_1_55)))))) && ((var_1_18 < var_1_11) ? (var_1_58 == ((unsigned char) var_1_49)) : (var_1_58 == ((unsigned char) var_1_59)))) && (var_1_47 ? (var_1_60 == ((float) var_1_40)) : (var_1_60 == ((float) var_1_36)))) && ((var_1_5 > var_1_12) ? (var_1_61 == ((signed short int) var_1_55)) : ((var_1_20 <= var_1_15) ? (var_1_61 == ((signed short int) var_1_12)) : 1))) && ((-128 != var_1_54) ? (var_1_62 == ((double) ((((var_1_40) < (var_1_36)) ? (var_1_40) : (var_1_36))))) : 1)) && (var_1_63 == ((double) 4.75))
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
