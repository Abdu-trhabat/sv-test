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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = -0.25;
double var_1_2 = -0.125;
double var_1_3 = 127.5;
unsigned char var_1_4 = 4;
double var_1_5 = 25.6;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 0;
signed char var_1_8 = 1;
signed char var_1_9 = 4;
signed char var_1_10 = 10;
unsigned char var_1_11 = 8;
unsigned short int var_1_12 = 64;
unsigned short int var_1_13 = 58659;
signed char var_1_14 = 10;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 2325636107;
signed char var_1_17 = 5;
signed char var_1_18 = 1;
unsigned char var_1_19 = 0;
signed char var_1_20 = -100;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 0;
signed long int var_1_24 = 1183233533;
unsigned char var_1_25 = 5;
signed char var_1_26 = 1;
signed short int var_1_27 = 10;
unsigned char var_1_28 = 5;
float var_1_29 = 0.3;
float var_1_30 = 0.8049999999999999;
unsigned short int var_1_31 = 256;
signed short int var_1_32 = -5;
signed short int var_1_34 = -16;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned long int var_1_37 = 256;
unsigned long int var_1_38 = 10;
unsigned long int var_1_39 = 2695186277;
unsigned long int var_1_40 = 1155758983;
unsigned long int var_1_41 = 1000000000;
unsigned long int var_1_42 = 1995129822;
unsigned short int var_1_43 = 128;
unsigned long int var_1_44 = 100000000;
unsigned long int var_1_45 = 2215639021;
unsigned long int var_1_46 = 32;
signed short int var_1_47 = -256;
double var_1_48 = 63.8;
double var_1_49 = 8.2;
double var_1_50 = 128.8;
signed short int var_1_51 = 10000;
unsigned long int var_1_52 = 256;
signed char var_1_53 = -4;
signed short int var_1_54 = 100;
unsigned short int var_1_55 = 1;
unsigned char last_1_var_1_4 = 4;
unsigned char last_1_var_1_11 = 8;
unsigned char last_1_var_1_19 = 0;
signed long int last_1_var_1_23 = 0;
unsigned char last_1_var_1_25 = 5;
signed short int last_1_var_1_34 = -16;
unsigned char last_1_var_1_35 = 0;
unsigned long int last_1_var_1_37 = 256;
unsigned long int last_1_var_1_44 = 100000000;
signed short int last_1_var_1_47 = -256;
unsigned long int last_1_var_1_52 = 256;
unsigned short int last_1_var_1_55 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_17 / (var_1_28 + 10)) > last_1_var_1_23) {
  if (! var_1_21) {
   var_1_38 = (var_1_39 - (var_1_6 + var_1_13));
  }
 } else {
  if (var_1_24 <= last_1_var_1_34) {
   var_1_38 = last_1_var_1_55;
  } else {
   var_1_38 = ((((((1985616304u) < (var_1_40)) ? (1985616304u) : (var_1_40))) - (var_1_41 - 25u)) + (var_1_42 - 100000000u));
  }
 }
 unsigned long int stepLocal_14 = last_1_var_1_44;
 signed char stepLocal_13 = var_1_9;
 signed char stepLocal_12 = var_1_10;
 signed long int stepLocal_11 = 32 << var_1_9;
 unsigned char stepLocal_10 = var_1_6;
 signed long int stepLocal_9 = var_1_13 - ((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)));
 if (stepLocal_11 < (last_1_var_1_25 | var_1_17)) {
  if (stepLocal_9 > (((((last_1_var_1_44) > (last_1_var_1_52)) ? (last_1_var_1_44) : (last_1_var_1_52))) ^ last_1_var_1_37)) {
   var_1_32 = var_1_20;
  } else {
   if (var_1_3 >= var_1_30) {
    if (3.625 >= (var_1_30 - var_1_29)) {
     if (stepLocal_12 <= (last_1_var_1_25 * var_1_16)) {
      var_1_32 = (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - last_1_var_1_44);
     } else {
      var_1_32 = var_1_20;
     }
    }
   } else {
    var_1_32 = ((var_1_28 + var_1_18) - (var_1_10 + last_1_var_1_47));
   }
  }
 } else {
  if (((var_1_28 + var_1_16) >> 8) >= stepLocal_14) {
   if (last_1_var_1_44 == stepLocal_10) {
    var_1_32 = ((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7)));
   } else {
    var_1_32 = (last_1_var_1_47 - var_1_17);
   }
  } else {
   if (stepLocal_13 > ((var_1_10 + var_1_24) + last_1_var_1_11)) {
    var_1_32 = ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9)));
   } else {
    var_1_32 = var_1_20;
   }
  }
 }
 unsigned long int stepLocal_15 = var_1_32 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
 if (stepLocal_15 == var_1_38) {
  var_1_46 = ((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28)));
 } else {
  var_1_46 = ((((((((var_1_41) > (var_1_39)) ? (var_1_41) : (var_1_39)))) > (256u)) ? (((((var_1_41) > (var_1_39)) ? (var_1_41) : (var_1_39)))) : (256u)));
 }
 unsigned char stepLocal_6 = var_1_17 <= (var_1_18 / var_1_20);
 unsigned char stepLocal_5 = last_1_var_1_55 < (~ var_1_10);
 if (stepLocal_6 || last_1_var_1_35) {
  if (last_1_var_1_35 || stepLocal_5) {
   var_1_19 = (! (! var_1_21));
  } else {
   var_1_19 = ((! last_1_var_1_35) || var_1_21);
  }
 } else {
  var_1_19 = var_1_22;
 }
 if ((8 < ((((last_1_var_1_4) < (last_1_var_1_23)) ? (last_1_var_1_4) : (last_1_var_1_23)))) || last_1_var_1_19) {
  if (last_1_var_1_19 || (last_1_var_1_34 <= 256)) {
   var_1_55 = (var_1_28 + var_1_7);
  } else {
   var_1_55 = var_1_10;
  }
 }
 if (! (var_1_55 >= (var_1_7 >> var_1_28))) {
  var_1_27 = ((((var_1_28) > (var_1_10)) ? (var_1_28) : (var_1_10)));
 } else {
  if ((var_1_29 - var_1_30) < var_1_2) {
   if (var_1_21) {
    var_1_27 = ((((var_1_7) < (-10)) ? (var_1_7) : (-10)));
   } else {
    var_1_27 = (((((var_1_17 - ((((10) < (var_1_28)) ? (10) : (var_1_28))))) < (var_1_10)) ? ((var_1_17 - ((((10) < (var_1_28)) ? (10) : (var_1_28))))) : (var_1_10)));
   }
  }
 }
 var_1_1 = ((((9.999999999999925E13) < ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) ? (9.999999999999925E13) : ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))));
 if (var_1_1 <= (25.75 / var_1_5)) {
  var_1_4 = (var_1_6 - var_1_7);
 }
 var_1_8 = (var_1_9 - var_1_10);
 var_1_11 = ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)));
 var_1_25 = var_1_10;
 if (var_1_18 >= var_1_32) {
  var_1_26 = var_1_18;
 }
 if (var_1_30 >= 3.375f) {
  if (var_1_28 <= (128 - var_1_10)) {
   var_1_43 = (((((var_1_13) > (58018)) ? (var_1_13) : (58018))) - (((((50) > (var_1_6)) ? (50) : (var_1_6))) + var_1_7));
  }
 }
 var_1_44 = (var_1_45 - var_1_42);
 var_1_53 = var_1_17;
 if ((var_1_4 / -5) >= (-8 + var_1_18)) {
  var_1_34 = (((((1) < (var_1_38)) ? (1) : (var_1_38))) + var_1_4);
 } else {
  if (var_1_55 != var_1_17) {
   var_1_34 = (((((((var_1_17) > (-256)) ? (var_1_17) : (-256))) < 0 ) ? -((((var_1_17) > (-256)) ? (var_1_17) : (-256))) : ((((var_1_17) > (-256)) ? (var_1_17) : (-256)))));
  } else {
   var_1_34 = ((var_1_17 + 25) + var_1_9);
  }
 }
 unsigned char stepLocal_8 = var_1_19;
 unsigned short int stepLocal_7 = var_1_13;
 if (stepLocal_7 < var_1_18) {
  var_1_23 = (var_1_18 + var_1_17);
 } else {
  if (stepLocal_8 && var_1_15) {
   var_1_23 = (10 - var_1_38);
  } else {
   if (! (var_1_5 > var_1_2)) {
    var_1_23 = var_1_25;
   } else {
    var_1_23 = ((var_1_24 - var_1_17) - ((((var_1_44) < (var_1_6)) ? (var_1_44) : (var_1_6))));
   }
  }
 }
 if (var_1_21) {
  var_1_37 = ((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_13) + var_1_46);
 } else {
  var_1_37 = ((((var_1_11) > (var_1_27)) ? (var_1_11) : (var_1_27)));
 }
 if (var_1_18 <= var_1_37) {
  var_1_52 = var_1_39;
 } else {
  var_1_52 = var_1_45;
 }
 if (var_1_19) {
  var_1_54 = var_1_11;
 }
 signed long int stepLocal_1 = ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8))) * ((((var_1_10) < (var_1_23)) ? (var_1_10) : (var_1_23)));
 unsigned short int stepLocal_0 = var_1_43;
 if (stepLocal_1 > var_1_6) {
  if (stepLocal_0 < (var_1_6 * var_1_10)) {
   var_1_12 = ((var_1_13 - var_1_43) - 10);
  } else {
   var_1_12 = 100;
  }
 } else {
  var_1_12 = var_1_10;
 }
 if ((~ var_1_37) == (~ var_1_12)) {
  var_1_31 = var_1_28;
 } else {
  var_1_31 = ((((var_1_7) > (var_1_13)) ? (var_1_7) : (var_1_13)));
 }
 if ((var_1_2 * var_1_5) > ((8.394412519810758E18 - var_1_48) - (var_1_49 + var_1_50))) {
  var_1_47 = (((((((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54)))) > ((var_1_7 + var_1_17))) ? (((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54)))) : ((var_1_7 + var_1_17)))) - ((var_1_51 - var_1_28) + var_1_34));
 }
 if ((((((var_1_34) > (var_1_54)) ? (var_1_34) : (var_1_54))) / var_1_13) < ((((var_1_27) > ((var_1_28 - var_1_7))) ? (var_1_27) : ((var_1_28 - var_1_7))))) {
  var_1_35 = (var_1_21 || (! var_1_22));
 } else {
  var_1_35 = (! (var_1_21 && (var_1_22 || var_1_36)));
 }
 unsigned char stepLocal_4 = var_1_38 == var_1_10;
 unsigned long int stepLocal_3 = (var_1_16 * var_1_32) * var_1_31;
 unsigned short int stepLocal_2 = var_1_31;
 if (stepLocal_4 || var_1_19) {
  if ((var_1_16 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) > stepLocal_2) {
   var_1_14 = (var_1_10 - (var_1_17 + var_1_18));
  } else {
   if (var_1_10 > stepLocal_3) {
    var_1_14 = 4;
   } else {
    var_1_14 = (var_1_18 + var_1_17);
   }
  }
 } else {
  var_1_14 = var_1_18;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -461168.6018427383000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 assume_abort_if_not(var_1_5 != 0.0F);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 127);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 49150);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967295);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= 1073741822);
 assume_abort_if_not(var_1_24 <= 2147483646);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 7);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 536870911);
 assume_abort_if_not(var_1_41 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 1073741823);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427388000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427388000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427388000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_51 >= 8191);
 assume_abort_if_not(var_1_51 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_4 = var_1_4;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_55 = var_1_55;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_1 == ((double) ((((9.999999999999925E13) < ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) ? (9.999999999999925E13) : ((var_1_2 + ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))))) && ((var_1_1 <= (25.75 / var_1_5)) ? (var_1_4 == ((unsigned char) (var_1_6 - var_1_7))) : 1)) && (var_1_8 == ((signed char) (var_1_9 - var_1_10)))) && (var_1_11 == ((unsigned char) ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))))) && (((((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8))) * ((((var_1_10) < (var_1_23)) ? (var_1_10) : (var_1_23)))) > var_1_6) ? ((var_1_43 < (var_1_6 * var_1_10)) ? (var_1_12 == ((unsigned short int) ((var_1_13 - var_1_43) - 10))) : (var_1_12 == ((unsigned short int) 100))) : (var_1_12 == ((unsigned short int) var_1_10)))) && (((var_1_38 == var_1_10) || var_1_19) ? (((var_1_16 - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) > var_1_31) ? (var_1_14 == ((signed char) (var_1_10 - (var_1_17 + var_1_18)))) : ((var_1_10 > ((var_1_16 * var_1_32) * var_1_31)) ? (var_1_14 == ((signed char) 4)) : (var_1_14 == ((signed char) (var_1_18 + var_1_17))))) : (var_1_14 == ((signed char) var_1_18)))) && (((var_1_17 <= (var_1_18 / var_1_20)) || last_1_var_1_35) ? ((last_1_var_1_35 || (last_1_var_1_55 < (~ var_1_10))) ? (var_1_19 == ((unsigned char) (! (! var_1_21)))) : (var_1_19 == ((unsigned char) ((! last_1_var_1_35) || var_1_21)))) : (var_1_19 == ((unsigned char) var_1_22)))) && ((var_1_13 < var_1_18) ? (var_1_23 == ((signed long int) (var_1_18 + var_1_17))) : ((var_1_19 && var_1_15) ? (var_1_23 == ((signed long int) (10 - var_1_38))) : ((! (var_1_5 > var_1_2)) ? (var_1_23 == ((signed long int) var_1_25)) : (var_1_23 == ((signed long int) ((var_1_24 - var_1_17) - ((((var_1_44) < (var_1_6)) ? (var_1_44) : (var_1_6)))))))))) && (var_1_25 == ((unsigned char) var_1_10))) && ((var_1_18 >= var_1_32) ? (var_1_26 == ((signed char) var_1_18)) : 1)) && ((! (var_1_55 >= (var_1_7 >> var_1_28))) ? (var_1_27 == ((signed short int) ((((var_1_28) > (var_1_10)) ? (var_1_28) : (var_1_10))))) : (((var_1_29 - var_1_30) < var_1_2) ? (var_1_21 ? (var_1_27 == ((signed short int) ((((var_1_7) < (-10)) ? (var_1_7) : (-10))))) : (var_1_27 == ((signed short int) (((((var_1_17 - ((((10) < (var_1_28)) ? (10) : (var_1_28))))) < (var_1_10)) ? ((var_1_17 - ((((10) < (var_1_28)) ? (10) : (var_1_28))))) : (var_1_10)))))) : 1))) && (((~ var_1_37) == (~ var_1_12)) ? (var_1_31 == ((unsigned short int) var_1_28)) : (var_1_31 == ((unsigned short int) ((((var_1_7) > (var_1_13)) ? (var_1_7) : (var_1_13))))))) && (((32 << var_1_9) < (last_1_var_1_25 | var_1_17)) ? (((var_1_13 - ((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)))) > (((((last_1_var_1_44) > (last_1_var_1_52)) ? (last_1_var_1_44) : (last_1_var_1_52))) ^ last_1_var_1_37)) ? (var_1_32 == ((signed short int) var_1_20)) : ((var_1_3 >= var_1_30) ? ((3.625 >= (var_1_30 - var_1_29)) ? ((var_1_10 <= (last_1_var_1_25 * var_1_16)) ? (var_1_32 == ((signed short int) (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - last_1_var_1_44))) : (var_1_32 == ((signed short int) var_1_20))) : 1) : (var_1_32 == ((signed short int) ((var_1_28 + var_1_18) - (var_1_10 + last_1_var_1_47)))))) : ((((var_1_28 + var_1_16) >> 8) >= last_1_var_1_44) ? ((last_1_var_1_44 == var_1_6) ? (var_1_32 == ((signed short int) ((((var_1_17) < (var_1_7)) ? (var_1_17) : (var_1_7))))) : (var_1_32 == ((signed short int) (last_1_var_1_47 - var_1_17)))) : ((var_1_9 > ((var_1_10 + var_1_24) + last_1_var_1_11)) ? (var_1_32 == ((signed short int) ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9))))) : (var_1_32 == ((signed short int) var_1_20)))))) && (((var_1_4 / -5) >= (-8 + var_1_18)) ? (var_1_34 == ((signed short int) (((((1) < (var_1_38)) ? (1) : (var_1_38))) + var_1_4))) : ((var_1_55 != var_1_17) ? (var_1_34 == ((signed short int) (((((((var_1_17) > (-256)) ? (var_1_17) : (-256))) < 0 ) ? -((((var_1_17) > (-256)) ? (var_1_17) : (-256))) : ((((var_1_17) > (-256)) ? (var_1_17) : (-256))))))) : (var_1_34 == ((signed short int) ((var_1_17 + 25) + var_1_9)))))) && (((((((var_1_34) > (var_1_54)) ? (var_1_34) : (var_1_54))) / var_1_13) < ((((var_1_27) > ((var_1_28 - var_1_7))) ? (var_1_27) : ((var_1_28 - var_1_7))))) ? (var_1_35 == ((unsigned char) (var_1_21 || (! var_1_22)))) : (var_1_35 == ((unsigned char) (! (var_1_21 && (var_1_22 || var_1_36))))))) && (var_1_21 ? (var_1_37 == ((unsigned long int) ((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_13) + var_1_46))) : (var_1_37 == ((unsigned long int) ((((var_1_11) > (var_1_27)) ? (var_1_11) : (var_1_27))))))) && (((var_1_17 / (var_1_28 + 10)) > last_1_var_1_23) ? ((! var_1_21) ? (var_1_38 == ((unsigned long int) (var_1_39 - (var_1_6 + var_1_13)))) : 1) : ((var_1_24 <= last_1_var_1_34) ? (var_1_38 == ((unsigned long int) last_1_var_1_55)) : (var_1_38 == ((unsigned long int) ((((((1985616304u) < (var_1_40)) ? (1985616304u) : (var_1_40))) - (var_1_41 - 25u)) + (var_1_42 - 100000000u))))))) && ((var_1_30 >= 3.375f) ? ((var_1_28 <= (128 - var_1_10)) ? (var_1_43 == ((unsigned short int) (((((var_1_13) > (58018)) ? (var_1_13) : (58018))) - (((((50) > (var_1_6)) ? (50) : (var_1_6))) + var_1_7)))) : 1) : 1)) && (var_1_44 == ((unsigned long int) (var_1_45 - var_1_42)))) && (((var_1_32 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) == var_1_38) ? (var_1_46 == ((unsigned long int) ((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28))))) : (var_1_46 == ((unsigned long int) ((((((((var_1_41) > (var_1_39)) ? (var_1_41) : (var_1_39)))) > (256u)) ? (((((var_1_41) > (var_1_39)) ? (var_1_41) : (var_1_39)))) : (256u))))))) && (((var_1_2 * var_1_5) > ((8.394412519810758E18 - var_1_48) - (var_1_49 + var_1_50))) ? (var_1_47 == ((signed short int) (((((((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54)))) > ((var_1_7 + var_1_17))) ? (((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54)))) : ((var_1_7 + var_1_17)))) - ((var_1_51 - var_1_28) + var_1_34)))) : 1)) && ((var_1_18 <= var_1_37) ? (var_1_52 == ((unsigned long int) var_1_39)) : (var_1_52 == ((unsigned long int) var_1_45)))) && (var_1_53 == ((signed char) var_1_17))) && (var_1_19 ? (var_1_54 == ((signed short int) var_1_11)) : 1)) && (((8 < ((((last_1_var_1_4) < (last_1_var_1_23)) ? (last_1_var_1_4) : (last_1_var_1_23)))) || last_1_var_1_19) ? ((last_1_var_1_19 || (last_1_var_1_34 <= 256)) ? (var_1_55 == ((unsigned short int) (var_1_28 + var_1_7))) : (var_1_55 == ((unsigned short int) var_1_10))) : 1)
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
