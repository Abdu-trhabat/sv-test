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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 4;
unsigned long int var_1_7 = 2819353023;
unsigned long int var_1_10 = 1224777821;
unsigned long int var_1_11 = 3973068675;
unsigned long int var_1_12 = 1000000000;
unsigned long int var_1_13 = 1000000000;
unsigned long int var_1_14 = 1477884391;
unsigned short int var_1_15 = 4;
unsigned long int var_1_21 = 1;
signed char var_1_22 = -10;
signed char var_1_23 = 50;
signed char var_1_24 = 32;
signed char var_1_25 = 50;
signed char var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 200;
unsigned long int var_1_31 = 2;
unsigned short int var_1_32 = 32;
unsigned short int var_1_34 = 24008;
unsigned char var_1_35 = 2;
signed short int var_1_36 = 2;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
signed char var_1_39 = 32;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 32;
double var_1_45 = 127.1;
double var_1_46 = 64.5;
unsigned char var_1_47 = 128;
unsigned long int var_1_48 = 16;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned short int var_1_59 = 8;
float var_1_60 = 10000.6;
float var_1_61 = 256.75;
signed short int var_1_62 = -32;
signed char var_1_63 = -10;
unsigned long int last_1_var_1_1 = 4;
unsigned short int last_1_var_1_15 = 4;
unsigned char last_1_var_1_27 = 0;
unsigned long int last_1_var_1_30 = 200;
unsigned long int last_1_var_1_31 = 2;
unsigned short int last_1_var_1_32 = 32;
unsigned char last_1_var_1_35 = 2;
signed short int last_1_var_1_36 = 2;
unsigned char last_1_var_1_37 = 1;
unsigned char last_1_var_1_40 = 1;
unsigned char last_1_var_1_42 = 5;
unsigned char last_1_var_1_43 = 32;
unsigned char last_1_var_1_49 = 1;
unsigned char last_1_var_1_57 = 0;
unsigned char last_1_var_1_58 = 0;
float last_1_var_1_60 = 10000.6;
void initially(void) {
}
void step(void) {
 if (var_1_29) {
  if (last_1_var_1_58) {
   if (! (last_1_var_1_60 <= last_1_var_1_60)) {
    var_1_49 = (! var_1_28);
   } else {
    if ((last_1_var_1_15 >> 10) > var_1_12) {
     var_1_49 = (! var_1_38);
    } else {
     var_1_49 = var_1_28;
    }
   }
  } else {
   if ((var_1_7 & var_1_11) > (- var_1_47)) {
    var_1_49 = ((var_1_28 && (last_1_var_1_57 || var_1_50)) && var_1_51);
   } else {
    var_1_49 = (var_1_38 || var_1_52);
   }
  }
 } else {
  if (var_1_7 == last_1_var_1_36) {
   var_1_49 = ((! var_1_50) || ((last_1_var_1_58 || var_1_51) && var_1_52));
  } else {
   if (last_1_var_1_58 || var_1_52) {
    if ((last_1_var_1_27 || last_1_var_1_57) || (var_1_10 > var_1_34)) {
     var_1_49 = (! var_1_51);
    } else {
     if (last_1_var_1_1 == (last_1_var_1_35 * last_1_var_1_36)) {
      var_1_49 = (((last_1_var_1_32 * var_1_12) == last_1_var_1_32) || (last_1_var_1_57 || (var_1_52 || var_1_51)));
     } else {
      var_1_49 = (last_1_var_1_27 || (! (! var_1_51)));
     }
    }
   } else {
    var_1_49 = (var_1_52 || (! var_1_51));
   }
  }
 }
 if (((- last_1_var_1_60) * last_1_var_1_60) == last_1_var_1_60) {
  if (last_1_var_1_49) {
   var_1_15 = ((((128) > ((last_1_var_1_35 + 32))) ? (128) : ((last_1_var_1_35 + 32))));
  } else {
   var_1_15 = (last_1_var_1_35 + ((((last_1_var_1_42) > ((last_1_var_1_35 + last_1_var_1_40))) ? (last_1_var_1_42) : ((last_1_var_1_35 + last_1_var_1_40)))));
  }
 } else {
  var_1_15 = last_1_var_1_35;
 }
 unsigned char stepLocal_9 = var_1_38;
 unsigned long int stepLocal_8 = var_1_10;
 if ((- ((((last_1_var_1_60) < (var_1_46)) ? (last_1_var_1_60) : (var_1_46)))) == ((((last_1_var_1_60) < 0 ) ? -(last_1_var_1_60) : (last_1_var_1_60)))) {
  if (stepLocal_9 || ((- 64u) >= var_1_10)) {
   var_1_57 = (! (var_1_29 && (var_1_51 && var_1_50)));
  } else {
   if (stepLocal_8 >= (last_1_var_1_43 | (var_1_24 << last_1_var_1_30))) {
    if (! last_1_var_1_58) {
     if (var_1_50) {
      var_1_57 = (! ((var_1_28 && var_1_29) && var_1_51));
     } else {
      var_1_57 = (last_1_var_1_49 && (last_1_var_1_58 && (var_1_52 || var_1_38)));
     }
    }
   } else {
    var_1_57 = (! var_1_51);
   }
  }
 }
 unsigned char stepLocal_5 = last_1_var_1_60 < last_1_var_1_60;
 unsigned char stepLocal_4 = last_1_var_1_57;
 unsigned long int stepLocal_3 = (32 + last_1_var_1_31) >> var_1_23;
 if (stepLocal_3 >= 2u) {
  if (last_1_var_1_57 || stepLocal_5) {
   var_1_35 = (var_1_24 + var_1_26);
  } else {
   if (stepLocal_4 && var_1_28) {
    var_1_35 = ((var_1_26 + var_1_24) + var_1_25);
   } else {
    var_1_35 = (var_1_24 + var_1_26);
   }
  }
 }
 if (last_1_var_1_37) {
  var_1_60 = 3.5f;
 } else {
  var_1_60 = var_1_61;
 }
 if ((- var_1_46) <= var_1_60) {
  var_1_58 = 0;
 }
 if (var_1_60 <= 4.4) {
  var_1_40 = var_1_26;
 } else {
  if (! var_1_28) {
   var_1_40 = (128 - (var_1_25 + (var_1_24 - var_1_41)));
  }
 }
 if (var_1_60 > var_1_60) {
  var_1_22 = var_1_23;
 } else {
  var_1_22 = (1 - ((var_1_24 + var_1_25) - var_1_26));
 }
 var_1_27 = (var_1_28 && var_1_29);
 var_1_36 = var_1_26;
 var_1_42 = ((((var_1_26) > (var_1_24)) ? (var_1_26) : (var_1_24)));
 if (var_1_58) {
  var_1_48 = (var_1_11 - var_1_34);
 } else {
  var_1_48 = ((((var_1_42) < (var_1_47)) ? (var_1_42) : (var_1_47)));
 }
 var_1_59 = var_1_36;
 var_1_63 = var_1_26;
 unsigned char stepLocal_7 = var_1_57;
 if (var_1_49) {
  if (stepLocal_7 || var_1_49) {
   var_1_56 = (var_1_47 - var_1_41);
  } else {
   var_1_56 = ((((var_1_26) < (var_1_41)) ? (var_1_26) : (var_1_41)));
  }
 }
 signed long int stepLocal_1 = (((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35));
 unsigned char stepLocal_0 = var_1_57;
 if (var_1_27 && stepLocal_0) {
  if (var_1_60 == var_1_60) {
   var_1_1 = (var_1_15 + 10u);
  }
 } else {
  if ((var_1_7 - var_1_15) <= stepLocal_1) {
   if (var_1_60 != var_1_60) {
    if (var_1_60 < var_1_60) {
     var_1_1 = (((1000000000u - 10u) + var_1_59) + var_1_15);
    } else {
     var_1_1 = ((((((var_1_10 + 1393715471u)) < (var_1_11)) ? ((var_1_10 + 1393715471u)) : (var_1_11))) - (256u + var_1_59));
    }
   } else {
    var_1_1 = (((((var_1_15 + var_1_59)) < (var_1_11)) ? ((var_1_15 + var_1_59)) : (var_1_11)));
   }
  } else {
   var_1_1 = (((var_1_12 + var_1_13) + var_1_14) - var_1_59);
  }
 }
 if (var_1_7 < ((var_1_41 << var_1_34) + (var_1_11 - var_1_15))) {
  if (var_1_42 <= var_1_63) {
   if ((var_1_60 / ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))) >= var_1_60) {
    var_1_43 = (((((((var_1_41) < (var_1_26)) ? (var_1_41) : (var_1_26))) < 0 ) ? -((((var_1_41) < (var_1_26)) ? (var_1_41) : (var_1_26))) : ((((var_1_41) < (var_1_26)) ? (var_1_41) : (var_1_26)))));
   } else {
    var_1_43 = (var_1_47 - var_1_41);
   }
  }
 }
 if ((- ((((50.75) > (var_1_60)) ? (50.75) : (var_1_60)))) < (var_1_60 / 0.05)) {
  var_1_30 = (var_1_11 - var_1_35);
 } else {
  var_1_30 = var_1_42;
 }
 if (var_1_60 >= var_1_60) {
  var_1_31 = var_1_24;
 } else {
  var_1_31 = (var_1_35 + (var_1_24 + var_1_26));
 }
 unsigned char stepLocal_6 = var_1_35;
 if (stepLocal_6 >= var_1_14) {
  var_1_37 = ((((((var_1_43) < (-1)) ? (var_1_43) : (-1))) >= var_1_25) && var_1_38);
 }
 unsigned long int stepLocal_2 = var_1_35 | (var_1_59 + var_1_14);
 if (stepLocal_2 < (- (var_1_11 * var_1_35))) {
  if (var_1_60 >= var_1_60) {
   var_1_21 = (3729661190u - ((((var_1_35) > (var_1_35)) ? (var_1_35) : (var_1_35))));
  }
 }
 unsigned char stepLocal_10 = var_1_46 < var_1_60;
 if (stepLocal_10 || ((var_1_10 + var_1_15) <= ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) {
  var_1_62 = ((((16) < (var_1_41)) ? (16) : (var_1_41)));
 }
 if (var_1_60 < var_1_60) {
  var_1_32 = (((((var_1_56) > (var_1_35)) ? (var_1_56) : (var_1_35))) + (var_1_34 - 1));
 }
 if (var_1_62 >= (var_1_40 + var_1_13)) {
  var_1_39 = var_1_26;
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 2147483647);
 assume_abort_if_not(var_1_7 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 536870911);
 assume_abort_if_not(var_1_12 <= 1073741824);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 536870912);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741824);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 31);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 32);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 16383);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 31);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
 assume_abort_if_not(var_1_45 != 0.0F);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 127);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -922337.2036854765600e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
}
int property() {
 return ((((((((((((((((((((((((var_1_27 && var_1_57) ? ((var_1_60 == var_1_60) ? (var_1_1 == ((unsigned long int) (var_1_15 + 10u))) : 1) : (((var_1_7 - var_1_15) <= ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) ? ((var_1_60 != var_1_60) ? ((var_1_60 < var_1_60) ? (var_1_1 == ((unsigned long int) (((1000000000u - 10u) + var_1_59) + var_1_15))) : (var_1_1 == ((unsigned long int) ((((((var_1_10 + 1393715471u)) < (var_1_11)) ? ((var_1_10 + 1393715471u)) : (var_1_11))) - (256u + var_1_59))))) : (var_1_1 == ((unsigned long int) (((((var_1_15 + var_1_59)) < (var_1_11)) ? ((var_1_15 + var_1_59)) : (var_1_11)))))) : (var_1_1 == ((unsigned long int) (((var_1_12 + var_1_13) + var_1_14) - var_1_59))))) && ((((- last_1_var_1_60) * last_1_var_1_60) == last_1_var_1_60) ? (last_1_var_1_49 ? (var_1_15 == ((unsigned short int) ((((128) > ((last_1_var_1_35 + 32))) ? (128) : ((last_1_var_1_35 + 32)))))) : (var_1_15 == ((unsigned short int) (last_1_var_1_35 + ((((last_1_var_1_42) > ((last_1_var_1_35 + last_1_var_1_40))) ? (last_1_var_1_42) : ((last_1_var_1_35 + last_1_var_1_40)))))))) : (var_1_15 == ((unsigned short int) last_1_var_1_35)))) && (((var_1_35 | (var_1_59 + var_1_14)) < (- (var_1_11 * var_1_35))) ? ((var_1_60 >= var_1_60) ? (var_1_21 == ((unsigned long int) (3729661190u - ((((var_1_35) > (var_1_35)) ? (var_1_35) : (var_1_35)))))) : 1) : 1)) && ((var_1_60 > var_1_60) ? (var_1_22 == ((signed char) var_1_23)) : (var_1_22 == ((signed char) (1 - ((var_1_24 + var_1_25) - var_1_26)))))) && (var_1_27 == ((unsigned char) (var_1_28 && var_1_29)))) && (((- ((((50.75) > (var_1_60)) ? (50.75) : (var_1_60)))) < (var_1_60 / 0.05)) ? (var_1_30 == ((unsigned long int) (var_1_11 - var_1_35))) : (var_1_30 == ((unsigned long int) var_1_42)))) && ((var_1_60 >= var_1_60) ? (var_1_31 == ((unsigned long int) var_1_24)) : (var_1_31 == ((unsigned long int) (var_1_35 + (var_1_24 + var_1_26)))))) && ((var_1_60 < var_1_60) ? (var_1_32 == ((unsigned short int) (((((var_1_56) > (var_1_35)) ? (var_1_56) : (var_1_35))) + (var_1_34 - 1)))) : 1)) && ((((32 + last_1_var_1_31) >> var_1_23) >= 2u) ? ((last_1_var_1_57 || (last_1_var_1_60 < last_1_var_1_60)) ? (var_1_35 == ((unsigned char) (var_1_24 + var_1_26))) : ((last_1_var_1_57 && var_1_28) ? (var_1_35 == ((unsigned char) ((var_1_26 + var_1_24) + var_1_25))) : (var_1_35 == ((unsigned char) (var_1_24 + var_1_26))))) : 1)) && (var_1_36 == ((signed short int) var_1_26))) && ((var_1_35 >= var_1_14) ? (var_1_37 == ((unsigned char) ((((((var_1_43) < (-1)) ? (var_1_43) : (-1))) >= var_1_25) && var_1_38))) : 1)) && ((var_1_62 >= (var_1_40 + var_1_13)) ? (var_1_39 == ((signed char) var_1_26)) : 1)) && ((var_1_60 <= 4.4) ? (var_1_40 == ((unsigned char) var_1_26)) : ((! var_1_28) ? (var_1_40 == ((unsigned char) (128 - (var_1_25 + (var_1_24 - var_1_41))))) : 1))) && (var_1_42 == ((unsigned char) ((((var_1_26) > (var_1_24)) ? (var_1_26) : (var_1_24)))))) && ((var_1_7 < ((var_1_41 << var_1_34) + (var_1_11 - var_1_15))) ? ((var_1_42 <= var_1_63) ? (((var_1_60 / ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46)))) >= var_1_60) ? (var_1_43 == ((unsigned char) (((((((var_1_41) < (var_1_26)) ? (var_1_41) : (var_1_26))) < 0 ) ? -((((var_1_41) < (var_1_26)) ? (var_1_41) : (var_1_26))) : ((((var_1_41) < (var_1_26)) ? (var_1_41) : (var_1_26))))))) : (var_1_43 == ((unsigned char) (var_1_47 - var_1_41)))) : 1) : 1)) && (var_1_58 ? (var_1_48 == ((unsigned long int) (var_1_11 - var_1_34))) : (var_1_48 == ((unsigned long int) ((((var_1_42) < (var_1_47)) ? (var_1_42) : (var_1_47))))))) && (var_1_29 ? (last_1_var_1_58 ? ((! (last_1_var_1_60 <= last_1_var_1_60)) ? (var_1_49 == ((unsigned char) (! var_1_28))) : (((last_1_var_1_15 >> 10) > var_1_12) ? (var_1_49 == ((unsigned char) (! var_1_38))) : (var_1_49 == ((unsigned char) var_1_28)))) : (((var_1_7 & var_1_11) > (- var_1_47)) ? (var_1_49 == ((unsigned char) ((var_1_28 && (last_1_var_1_57 || var_1_50)) && var_1_51))) : (var_1_49 == ((unsigned char) (var_1_38 || var_1_52))))) : ((var_1_7 == last_1_var_1_36) ? (var_1_49 == ((unsigned char) ((! var_1_50) || ((last_1_var_1_58 || var_1_51) && var_1_52)))) : ((last_1_var_1_58 || var_1_52) ? (((last_1_var_1_27 || last_1_var_1_57) || (var_1_10 > var_1_34)) ? (var_1_49 == ((unsigned char) (! var_1_51))) : ((last_1_var_1_1 == (last_1_var_1_35 * last_1_var_1_36)) ? (var_1_49 == ((unsigned char) (((last_1_var_1_32 * var_1_12) == last_1_var_1_32) || (last_1_var_1_57 || (var_1_52 || var_1_51))))) : (var_1_49 == ((unsigned char) (last_1_var_1_27 || (! (! var_1_51))))))) : (var_1_49 == ((unsigned char) (var_1_52 || (! var_1_51)))))))) && (var_1_49 ? ((var_1_57 || var_1_49) ? (var_1_56 == ((unsigned char) (var_1_47 - var_1_41))) : (var_1_56 == ((unsigned char) ((((var_1_26) < (var_1_41)) ? (var_1_26) : (var_1_41)))))) : 1)) && (((- ((((last_1_var_1_60) < (var_1_46)) ? (last_1_var_1_60) : (var_1_46)))) == ((((last_1_var_1_60) < 0 ) ? -(last_1_var_1_60) : (last_1_var_1_60)))) ? ((var_1_38 || ((- 64u) >= var_1_10)) ? (var_1_57 == ((unsigned char) (! (var_1_29 && (var_1_51 && var_1_50))))) : ((var_1_10 >= (last_1_var_1_43 | (var_1_24 << last_1_var_1_30))) ? ((! last_1_var_1_58) ? (var_1_50 ? (var_1_57 == ((unsigned char) (! ((var_1_28 && var_1_29) && var_1_51)))) : (var_1_57 == ((unsigned char) (last_1_var_1_49 && (last_1_var_1_58 && (var_1_52 || var_1_38)))))) : 1) : (var_1_57 == ((unsigned char) (! var_1_51))))) : 1)) && (((- var_1_46) <= var_1_60) ? (var_1_58 == ((unsigned char) 0)) : 1)) && (var_1_59 == ((unsigned short int) var_1_36))) && (last_1_var_1_37 ? (var_1_60 == ((float) 3.5f)) : (var_1_60 == ((float) var_1_61)))) && (((var_1_46 < var_1_60) || ((var_1_10 + var_1_15) <= ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) ? (var_1_62 == ((signed short int) ((((16) < (var_1_41)) ? (16) : (var_1_41))))) : 1)) && (var_1_63 == ((signed char) var_1_26))
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
