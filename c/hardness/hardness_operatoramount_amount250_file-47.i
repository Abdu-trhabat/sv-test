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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 5;
signed char var_1_3 = -32;
signed char var_1_6 = 100;
signed char var_1_7 = 0;
signed char var_1_8 = 5;
double var_1_9 = 63.25;
double var_1_10 = 99.125;
double var_1_11 = 32.5;
double var_1_12 = 2.375;
double var_1_13 = 10000000.625;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_24 = 1;
signed short int var_1_26 = 256;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 50;
unsigned long int var_1_29 = 3517940211;
unsigned long int var_1_30 = 3875048777;
unsigned char var_1_31 = 200;
unsigned long int var_1_33 = 5;
unsigned long int var_1_34 = 2168421042;
signed short int var_1_35 = 0;
signed long int var_1_36 = -4;
unsigned short int var_1_37 = 16;
unsigned short int var_1_39 = 47859;
float var_1_40 = 50.25;
float var_1_41 = 0.0;
signed char var_1_42 = -128;
double var_1_43 = 0.0;
signed char var_1_44 = -5;
signed char var_1_45 = 64;
signed char var_1_46 = 8;
signed char var_1_47 = 0;
signed char var_1_48 = 8;
unsigned char var_1_49 = 128;
signed long int var_1_50 = 64;
signed long int var_1_51 = -100;
unsigned short int var_1_52 = 16;
unsigned short int var_1_53 = 45066;
unsigned char var_1_54 = 0;
signed long int var_1_55 = 8;
double last_1_var_1_9 = 63.25;
unsigned char last_1_var_1_14 = 1;
unsigned char last_1_var_1_20 = 0;
signed short int last_1_var_1_24 = 1;
unsigned long int last_1_var_1_33 = 5;
signed long int last_1_var_1_36 = -4;
unsigned short int last_1_var_1_37 = 16;
signed long int last_1_var_1_50 = 64;
signed long int last_1_var_1_55 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_9 = ~ var_1_7;
 signed long int stepLocal_8 = last_1_var_1_50;
 if (last_1_var_1_9 == 1000.6) {
  if ((var_1_26 + var_1_15) > stepLocal_9) {
   if (var_1_26 != stepLocal_8) {
    var_1_27 = (! ((last_1_var_1_14 || var_1_17) && var_1_16));
   } else {
    var_1_27 = ((! var_1_16) || var_1_19);
   }
  } else {
   var_1_27 = (var_1_17 && var_1_16);
  }
 } else {
  var_1_27 = var_1_17;
 }
 unsigned short int stepLocal_19 = var_1_53;
 if (var_1_16) {
  var_1_54 = ((var_1_26 == (var_1_8 * last_1_var_1_33)) && var_1_19);
 } else {
  if (stepLocal_19 > last_1_var_1_55) {
   var_1_54 = var_1_17;
  }
 }
 unsigned char stepLocal_4 = last_1_var_1_14;
 unsigned char stepLocal_3 = var_1_17;
 if (stepLocal_4 && last_1_var_1_20) {
  if (var_1_11 == (last_1_var_1_9 / 128.5)) {
   if (stepLocal_3 || (last_1_var_1_36 <= (var_1_6 - var_1_7))) {
    var_1_20 = (last_1_var_1_20 || var_1_16);
   } else {
    var_1_20 = (last_1_var_1_20 && var_1_19);
   }
  } else {
   var_1_20 = (((5 < var_1_15) || var_1_17) && var_1_16);
  }
 }
 signed long int stepLocal_13 = last_1_var_1_24 & last_1_var_1_55;
 if (stepLocal_13 >= (~ var_1_3)) {
  var_1_35 = (((((last_1_var_1_24 - var_1_26)) > ((((((256) < 0 ) ? -(256) : (256))) - (var_1_7 + var_1_31)))) ? ((last_1_var_1_24 - var_1_26)) : ((((((256) < 0 ) ? -(256) : (256))) - (var_1_7 + var_1_31)))));
 }
 unsigned long int stepLocal_2 = var_1_7 / ((((8u) < 0 ) ? -(8u) : (8u)));
 signed char stepLocal_1 = var_1_7;
 if (last_1_var_1_20) {
  var_1_14 = (((var_1_6 / var_1_15) >= var_1_7) || (var_1_16 && var_1_17));
 } else {
  if (stepLocal_1 <= var_1_15) {
   if (last_1_var_1_9 != var_1_12) {
    if (stepLocal_2 < 256u) {
     var_1_14 = (! (! 0));
    } else {
     var_1_14 = (! (! var_1_16));
    }
   } else {
    var_1_14 = (var_1_18 || (var_1_16 && var_1_19));
   }
  }
 }
 var_1_36 = (((((256) < (2)) ? (256) : (2))) - ((((var_1_26) < (((((var_1_31) > (4)) ? (var_1_31) : (4))))) ? (var_1_26) : (((((var_1_31) > (4)) ? (var_1_31) : (4)))))));
 if (var_1_10 >= (var_1_13 / var_1_41)) {
  var_1_49 = ((var_1_48 + var_1_46) + var_1_47);
 }
 signed char stepLocal_20 = var_1_6;
 if (var_1_12 > (var_1_10 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) {
  if (var_1_15 > stepLocal_20) {
   var_1_55 = var_1_39;
  }
 } else {
  var_1_55 = var_1_31;
 }
 if (var_1_6 > (var_1_7 + var_1_35)) {
  if (var_1_3 >= var_1_6) {
   if (var_1_54) {
    var_1_9 = (((var_1_10 + var_1_11) - var_1_12) + var_1_13);
   } else {
    if (var_1_27) {
     var_1_9 = var_1_11;
    } else {
     var_1_9 = var_1_12;
    }
   }
  } else {
   var_1_9 = var_1_13;
  }
 } else {
  var_1_9 = var_1_13;
 }
 if (((var_1_29 - var_1_6) > (var_1_30 - 4u)) || var_1_20) {
  var_1_28 = (((((((var_1_6) > ((var_1_31 - var_1_7))) ? (var_1_6) : ((var_1_31 - var_1_7)))) < 0 ) ? -((((var_1_6) > ((var_1_31 - var_1_7))) ? (var_1_6) : ((var_1_31 - var_1_7)))) : ((((var_1_6) > ((var_1_31 - var_1_7))) ? (var_1_6) : ((var_1_31 - var_1_7))))));
 } else {
  if ((- (var_1_29 / var_1_31)) < (var_1_7 / var_1_15)) {
   if (var_1_54 || var_1_14) {
    var_1_28 = var_1_31;
   }
  }
 }
 signed long int stepLocal_14 = 25 + var_1_36;
 if (stepLocal_14 < var_1_35) {
  var_1_37 = (var_1_26 + ((((last_1_var_1_37) < (var_1_6)) ? (last_1_var_1_37) : (var_1_6))));
 } else {
  var_1_37 = (((((var_1_7 + var_1_26)) > ((var_1_39 - var_1_6))) ? ((var_1_7 + var_1_26)) : ((var_1_39 - var_1_6))));
 }
 signed char stepLocal_0 = var_1_3;
 if (var_1_20) {
  var_1_1 = (((((((10) < (var_1_3)) ? (10) : (var_1_3))) < 0 ) ? -((((10) < (var_1_3)) ? (10) : (var_1_3))) : ((((10) < (var_1_3)) ? (10) : (var_1_3)))));
 } else {
  if (var_1_27) {
   if (stepLocal_0 <= var_1_37) {
    var_1_1 = 8;
   } else {
    var_1_1 = ((var_1_6 - var_1_7) - 64);
   }
  } else {
   var_1_1 = (var_1_7 + var_1_8);
  }
 }
 unsigned long int stepLocal_7 = var_1_15;
 signed short int stepLocal_6 = var_1_26;
 unsigned char stepLocal_5 = ! (var_1_14 && var_1_54);
 if (! (var_1_3 < var_1_1)) {
  if (var_1_35 > stepLocal_7) {
   if (var_1_20 || stepLocal_5) {
    var_1_24 = ((((((-24459) < 0 ) ? -(-24459) : (-24459))) - var_1_26) - var_1_7);
   }
  } else {
   if (stepLocal_6 <= var_1_15) {
    var_1_24 = ((((var_1_8) > (var_1_35)) ? (var_1_8) : (var_1_35)));
   }
  }
 } else {
  var_1_24 = ((25 - ((((var_1_7) < (var_1_26)) ? (var_1_7) : (var_1_26)))) + -32);
 }
 if (var_1_24 == var_1_39) {
  var_1_40 = ((((((var_1_41 - var_1_11) - var_1_12)) > (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (((var_1_41 - var_1_11) - var_1_12)) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))));
 } else {
  var_1_40 = (0.5f - 9.999999999925E10f);
 }
 unsigned long int stepLocal_12 = 1u;
 signed short int stepLocal_11 = var_1_24;
 unsigned long int stepLocal_10 = var_1_30 % 1000000u;
 if (stepLocal_12 <= var_1_15) {
  if (stepLocal_11 == var_1_35) {
   var_1_33 = (((((var_1_28) < (((((var_1_26) > (10u)) ? (var_1_26) : (10u))))) ? (var_1_28) : (((((var_1_26) > (10u)) ? (var_1_26) : (10u)))))) + 128u);
  }
 } else {
  if (var_1_29 < stepLocal_10) {
   var_1_33 = ((((var_1_28) < (var_1_6)) ? (var_1_28) : (var_1_6)));
  } else {
   var_1_33 = (var_1_34 - var_1_26);
  }
 }
 if (5 > (((((var_1_6) < (var_1_44)) ? (var_1_6) : (var_1_44))) * 100)) {
  var_1_52 = ((((((((((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) < (var_1_39)) ? (((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) : (var_1_39)))) < ((var_1_53 - ((((var_1_48) < (var_1_28)) ? (var_1_48) : (var_1_28)))))) ? (((((((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) < (var_1_39)) ? (((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) : (var_1_39)))) : ((var_1_53 - ((((var_1_48) < (var_1_28)) ? (var_1_48) : (var_1_28)))))));
 } else {
  var_1_52 = (2 + var_1_45);
 }
 signed long int stepLocal_18 = var_1_55;
 if (stepLocal_18 < var_1_30) {
  var_1_50 = (((((((((var_1_52) < (25)) ? (var_1_52) : (25))) - var_1_7)) > (((((var_1_51) < ((var_1_48 - 2))) ? (var_1_51) : ((var_1_48 - 2)))))) ? ((((((var_1_52) < (25)) ? (var_1_52) : (25))) - var_1_7)) : (((((var_1_51) < ((var_1_48 - 2))) ? (var_1_51) : ((var_1_48 - 2)))))));
 } else {
  var_1_50 = ((((var_1_49) > (var_1_6)) ? (var_1_49) : (var_1_6)));
 }
 unsigned char stepLocal_17 = (63.75 + var_1_9) == var_1_9;
 signed long int stepLocal_16 = var_1_50 / 2;
 signed long int stepLocal_15 = - var_1_48;
 if ((var_1_11 - (var_1_43 - var_1_10)) > var_1_9) {
  if (var_1_54) {
   var_1_42 = (var_1_8 + ((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))));
  } else {
   if (var_1_14 || stepLocal_17) {
    if (var_1_33 < stepLocal_16) {
     var_1_42 = (var_1_7 - (var_1_45 - var_1_46));
    } else {
     if (var_1_11 != var_1_13) {
      var_1_42 = (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) + (((((var_1_7) < (var_1_47)) ? (var_1_7) : (var_1_47))) - var_1_48));
     }
    }
   } else {
    if (stepLocal_15 < var_1_47) {
     var_1_42 = (var_1_46 - ((((var_1_6) > (((((var_1_45) < (2)) ? (var_1_45) : (2))))) ? (var_1_6) : (((((var_1_45) < (2)) ? (var_1_45) : (2)))))));
    }
   }
  }
 } else {
  var_1_42 = (var_1_47 - (var_1_46 + 10));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -126);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 62);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 4294967295);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 2147483647);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 127);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 4611686.018427383000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 4611686.018427388000e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -63);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 63);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= -2147483647);
 assume_abort_if_not(var_1_51 <= 2147483646);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 32767);
 assume_abort_if_not(var_1_53 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_55 = var_1_55;
}
int property(void) {
 return (((((((((((((((((var_1_20 ? (var_1_1 == ((signed char) (((((((10) < (var_1_3)) ? (10) : (var_1_3))) < 0 ) ? -((((10) < (var_1_3)) ? (10) : (var_1_3))) : ((((10) < (var_1_3)) ? (10) : (var_1_3))))))) : (var_1_27 ? ((var_1_3 <= var_1_37) ? (var_1_1 == ((signed char) 8)) : (var_1_1 == ((signed char) ((var_1_6 - var_1_7) - 64)))) : (var_1_1 == ((signed char) (var_1_7 + var_1_8))))) && ((var_1_6 > (var_1_7 + var_1_35)) ? ((var_1_3 >= var_1_6) ? (var_1_54 ? (var_1_9 == ((double) (((var_1_10 + var_1_11) - var_1_12) + var_1_13))) : (var_1_27 ? (var_1_9 == ((double) var_1_11)) : (var_1_9 == ((double) var_1_12)))) : (var_1_9 == ((double) var_1_13))) : (var_1_9 == ((double) var_1_13)))) && (last_1_var_1_20 ? (var_1_14 == ((unsigned char) (((var_1_6 / var_1_15) >= var_1_7) || (var_1_16 && var_1_17)))) : ((var_1_7 <= var_1_15) ? ((last_1_var_1_9 != var_1_12) ? (((var_1_7 / ((((8u) < 0 ) ? -(8u) : (8u)))) < 256u) ? (var_1_14 == ((unsigned char) (! (! 0)))) : (var_1_14 == ((unsigned char) (! (! var_1_16))))) : (var_1_14 == ((unsigned char) (var_1_18 || (var_1_16 && var_1_19))))) : 1))) && ((last_1_var_1_14 && last_1_var_1_20) ? ((var_1_11 == (last_1_var_1_9 / 128.5)) ? ((var_1_17 || (last_1_var_1_36 <= (var_1_6 - var_1_7))) ? (var_1_20 == ((unsigned char) (last_1_var_1_20 || var_1_16))) : (var_1_20 == ((unsigned char) (last_1_var_1_20 && var_1_19)))) : (var_1_20 == ((unsigned char) (((5 < var_1_15) || var_1_17) && var_1_16)))) : 1)) && ((! (var_1_3 < var_1_1)) ? ((var_1_35 > var_1_15) ? ((var_1_20 || (! (var_1_14 && var_1_54))) ? (var_1_24 == ((signed short int) ((((((-24459) < 0 ) ? -(-24459) : (-24459))) - var_1_26) - var_1_7))) : 1) : ((var_1_26 <= var_1_15) ? (var_1_24 == ((signed short int) ((((var_1_8) > (var_1_35)) ? (var_1_8) : (var_1_35))))) : 1)) : (var_1_24 == ((signed short int) ((25 - ((((var_1_7) < (var_1_26)) ? (var_1_7) : (var_1_26)))) + -32))))) && ((last_1_var_1_9 == 1000.6) ? (((var_1_26 + var_1_15) > (~ var_1_7)) ? ((var_1_26 != last_1_var_1_50) ? (var_1_27 == ((unsigned char) (! ((last_1_var_1_14 || var_1_17) && var_1_16)))) : (var_1_27 == ((unsigned char) ((! var_1_16) || var_1_19)))) : (var_1_27 == ((unsigned char) (var_1_17 && var_1_16)))) : (var_1_27 == ((unsigned char) var_1_17)))) && ((((var_1_29 - var_1_6) > (var_1_30 - 4u)) || var_1_20) ? (var_1_28 == ((unsigned char) (((((((var_1_6) > ((var_1_31 - var_1_7))) ? (var_1_6) : ((var_1_31 - var_1_7)))) < 0 ) ? -((((var_1_6) > ((var_1_31 - var_1_7))) ? (var_1_6) : ((var_1_31 - var_1_7)))) : ((((var_1_6) > ((var_1_31 - var_1_7))) ? (var_1_6) : ((var_1_31 - var_1_7)))))))) : (((- (var_1_29 / var_1_31)) < (var_1_7 / var_1_15)) ? ((var_1_54 || var_1_14) ? (var_1_28 == ((unsigned char) var_1_31)) : 1) : 1))) && ((1u <= var_1_15) ? ((var_1_24 == var_1_35) ? (var_1_33 == ((unsigned long int) (((((var_1_28) < (((((var_1_26) > (10u)) ? (var_1_26) : (10u))))) ? (var_1_28) : (((((var_1_26) > (10u)) ? (var_1_26) : (10u)))))) + 128u))) : 1) : ((var_1_29 < (var_1_30 % 1000000u)) ? (var_1_33 == ((unsigned long int) ((((var_1_28) < (var_1_6)) ? (var_1_28) : (var_1_6))))) : (var_1_33 == ((unsigned long int) (var_1_34 - var_1_26)))))) && (((last_1_var_1_24 & last_1_var_1_55) >= (~ var_1_3)) ? (var_1_35 == ((signed short int) (((((last_1_var_1_24 - var_1_26)) > ((((((256) < 0 ) ? -(256) : (256))) - (var_1_7 + var_1_31)))) ? ((last_1_var_1_24 - var_1_26)) : ((((((256) < 0 ) ? -(256) : (256))) - (var_1_7 + var_1_31))))))) : 1)) && (var_1_36 == ((signed long int) (((((256) < (2)) ? (256) : (2))) - ((((var_1_26) < (((((var_1_31) > (4)) ? (var_1_31) : (4))))) ? (var_1_26) : (((((var_1_31) > (4)) ? (var_1_31) : (4)))))))))) && (((25 + var_1_36) < var_1_35) ? (var_1_37 == ((unsigned short int) (var_1_26 + ((((last_1_var_1_37) < (var_1_6)) ? (last_1_var_1_37) : (var_1_6)))))) : (var_1_37 == ((unsigned short int) (((((var_1_7 + var_1_26)) > ((var_1_39 - var_1_6))) ? ((var_1_7 + var_1_26)) : ((var_1_39 - var_1_6)))))))) && ((var_1_24 == var_1_39) ? (var_1_40 == ((float) ((((((var_1_41 - var_1_11) - var_1_12)) > (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (((var_1_41 - var_1_11) - var_1_12)) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) : (var_1_40 == ((float) (0.5f - 9.999999999925E10f))))) && (((var_1_11 - (var_1_43 - var_1_10)) > var_1_9) ? (var_1_54 ? (var_1_42 == ((signed char) (var_1_8 + ((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44)))))) : ((var_1_14 || ((63.75 + var_1_9) == var_1_9)) ? ((var_1_33 < (var_1_50 / 2)) ? (var_1_42 == ((signed char) (var_1_7 - (var_1_45 - var_1_46)))) : ((var_1_11 != var_1_13) ? (var_1_42 == ((signed char) (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) + (((((var_1_7) < (var_1_47)) ? (var_1_7) : (var_1_47))) - var_1_48)))) : 1)) : (((- var_1_48) < var_1_47) ? (var_1_42 == ((signed char) (var_1_46 - ((((var_1_6) > (((((var_1_45) < (2)) ? (var_1_45) : (2))))) ? (var_1_6) : (((((var_1_45) < (2)) ? (var_1_45) : (2))))))))) : 1))) : (var_1_42 == ((signed char) (var_1_47 - (var_1_46 + 10)))))) && ((var_1_10 >= (var_1_13 / var_1_41)) ? (var_1_49 == ((unsigned char) ((var_1_48 + var_1_46) + var_1_47))) : 1)) && ((var_1_55 < var_1_30) ? (var_1_50 == ((signed long int) (((((((((var_1_52) < (25)) ? (var_1_52) : (25))) - var_1_7)) > (((((var_1_51) < ((var_1_48 - 2))) ? (var_1_51) : ((var_1_48 - 2)))))) ? ((((((var_1_52) < (25)) ? (var_1_52) : (25))) - var_1_7)) : (((((var_1_51) < ((var_1_48 - 2))) ? (var_1_51) : ((var_1_48 - 2))))))))) : (var_1_50 == ((signed long int) ((((var_1_49) > (var_1_6)) ? (var_1_49) : (var_1_6))))))) && ((5 > (((((var_1_6) < (var_1_44)) ? (var_1_6) : (var_1_44))) * 100)) ? (var_1_52 == ((unsigned short int) ((((((((((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) < (var_1_39)) ? (((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) : (var_1_39)))) < ((var_1_53 - ((((var_1_48) < (var_1_28)) ? (var_1_48) : (var_1_28)))))) ? (((((((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) < (var_1_39)) ? (((((var_1_45) < (var_1_33)) ? (var_1_45) : (var_1_33)))) : (var_1_39)))) : ((var_1_53 - ((((var_1_48) < (var_1_28)) ? (var_1_48) : (var_1_28))))))))) : (var_1_52 == ((unsigned short int) (2 + var_1_45))))) && (var_1_16 ? (var_1_54 == ((unsigned char) ((var_1_26 == (var_1_8 * last_1_var_1_33)) && var_1_19))) : ((var_1_53 > last_1_var_1_55) ? (var_1_54 == ((unsigned char) var_1_17)) : 1))) && ((var_1_12 > (var_1_10 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? ((var_1_15 > var_1_6) ? (var_1_55 == ((signed long int) var_1_39)) : 1) : (var_1_55 == ((signed long int) var_1_31)))
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
