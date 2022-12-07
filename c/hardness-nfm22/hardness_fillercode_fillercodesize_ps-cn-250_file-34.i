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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
unsigned long int var_1_7 = 16;
unsigned long int var_1_9 = 32;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 8;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -200;
signed short int var_1_15 = 0;
signed short int var_1_16 = 24637;
signed short int var_1_17 = 100;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 10;
double var_1_22 = 128.75;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
double var_1_25 = 10.6;
double var_1_26 = 100.625;
unsigned char var_1_27 = 0;
double var_1_28 = 99.75;
unsigned char var_1_29 = 8;
unsigned long int var_1_30 = 8;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 64;
unsigned long int var_1_33 = 8;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 100;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
double var_1_44 = 99.625;
unsigned char var_1_45 = 0;
signed long int var_1_46 = -50;
signed long int var_1_47 = 10;
signed long int var_1_48 = -128;
signed long int var_1_49 = 16;
unsigned char var_1_50 = 0;
signed char var_1_51 = 10;
double var_1_52 = 256.1;
double var_1_53 = 0.9;
signed long int var_1_54 = -10;
signed long int var_1_55 = 256;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 1;
signed char var_1_58 = 8;
signed char var_1_59 = -16;
unsigned short int var_1_60 = 32;
signed char var_1_61 = -32;
unsigned long int var_1_62 = 4;
unsigned long int var_1_63 = 3948576986;
unsigned long int var_1_64 = 3809237822;
signed short int var_1_65 = -64;
signed short int var_1_66 = -64;
unsigned long int var_1_67 = 200;
double var_1_68 = 4.2;
signed char var_1_69 = 2;
signed long int var_1_70 = 0;
signed short int var_1_71 = -2;
unsigned char var_1_72 = 64;
signed char var_1_73 = -2;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 25;
signed short int var_1_76 = 2;
signed char var_1_77 = -32;
unsigned long int last_1_var_1_7 = 16;
unsigned char last_1_var_1_10 = 16;
signed long int last_1_var_1_14 = -200;
signed short int last_1_var_1_15 = 0;
signed short int last_1_var_1_17 = 100;
unsigned char last_1_var_1_18 = 1;
signed long int last_1_var_1_20 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_23) {
  if (var_1_24) {
   var_1_22 = ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26)));
  } else {
   if (var_1_27) {
    var_1_22 = var_1_26;
   }
  }
 } else {
  var_1_22 = ((((var_1_28 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) < 0 ) ? -(var_1_28 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (var_1_28 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
 }
 if (((((var_1_30) > (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))))) ? (var_1_30) : (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))))) >= var_1_33) {
  if (var_1_23 && var_1_24) {
   var_1_29 = ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)));
  }
 }
 if (var_1_34 > 200) {
  var_1_36 = ((var_1_37 || var_1_38) || var_1_39);
 }
 if (var_1_25 >= ((((var_1_28) > (var_1_26)) ? (var_1_28) : (var_1_26)))) {
  if (var_1_27) {
   var_1_40 = (! 1);
  }
 } else {
  var_1_40 = (((var_1_32 ^ var_1_35) == var_1_30) || var_1_41);
 }
 if (var_1_24) {
  if (var_1_33 > var_1_35) {
   var_1_42 = var_1_41;
  } else {
   if (var_1_35 < ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) {
    var_1_42 = (var_1_41 && var_1_43);
   }
  }
 }
 if (var_1_28 < ((((var_1_22) > (var_1_26)) ? (var_1_22) : (var_1_26)))) {
  if (var_1_36) {
   var_1_44 = (((((((15.5) < (var_1_26)) ? (15.5) : (var_1_26))) < 0 ) ? -((((15.5) < (var_1_26)) ? (15.5) : (var_1_26))) : ((((15.5) < (var_1_26)) ? (15.5) : (var_1_26)))));
  }
 }
 if (var_1_38) {
  var_1_45 = (var_1_39 && (! var_1_41));
 }
 if (! var_1_27) {
  var_1_46 = ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) < (var_1_34)) ? (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (var_1_34)));
 }
 if (var_1_33 > var_1_34) {
  if (var_1_24) {
   var_1_47 = (((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) - var_1_34)) > (((((var_1_29) < (var_1_48)) ? (var_1_29) : (var_1_48))))) ? ((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) - var_1_34)) : (((((var_1_29) < (var_1_48)) ? (var_1_29) : (var_1_48))))));
  }
 } else {
  if (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) > var_1_34) {
   if (var_1_32 > (var_1_31 & var_1_35)) {
    var_1_47 = (((((((var_1_29 - var_1_34) < 0 ) ? -(var_1_29 - var_1_34) : (var_1_29 - var_1_34))) < 0 ) ? -((((var_1_29 - var_1_34) < 0 ) ? -(var_1_29 - var_1_34) : (var_1_29 - var_1_34))) : ((((var_1_29 - var_1_34) < 0 ) ? -(var_1_29 - var_1_34) : (var_1_29 - var_1_34)))));
   } else {
    var_1_47 = (var_1_29 + var_1_34);
   }
  } else {
   var_1_47 = ((((((var_1_29) > (var_1_34)) ? (var_1_29) : (var_1_34))) + var_1_35) - var_1_49);
  }
 }
 if ((var_1_26 >= var_1_28) || ((var_1_48 | var_1_46) > var_1_29)) {
  if (var_1_48 < var_1_46) {
   if (((((var_1_28) < ((99.5f + var_1_44))) ? (var_1_28) : ((99.5f + var_1_44)))) < var_1_25) {
    var_1_50 = (! var_1_41);
   }
  }
 } else {
  if (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) >= -5) {
   var_1_50 = (! (! (! var_1_39)));
  }
 }
 if ((var_1_48 < var_1_29) && ((var_1_22 + var_1_28) <= var_1_26)) {
  var_1_52 = ((var_1_53 + 10.75) - var_1_28);
 } else {
  if (var_1_42) {
   var_1_52 = (var_1_28 - var_1_53);
  }
 }
 if (var_1_32 < (var_1_30 + ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) {
  var_1_54 = (var_1_35 + var_1_29);
 } else {
  if (var_1_30 >= 1u) {
   var_1_54 = (((((((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) > (var_1_55)) ? (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) : (var_1_55))) < 0 ) ? -((((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) > (var_1_55)) ? (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) : (var_1_55))) : ((((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) > (var_1_55)) ? (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) : (var_1_55)))));
  }
 }
 if (var_1_37) {
  var_1_56 = ((var_1_47 != var_1_51) || ((var_1_26 < var_1_22) || (var_1_57 && var_1_41)));
 } else {
  var_1_56 = (! (var_1_41 && var_1_57));
 }
 if (var_1_49 < var_1_30) {
  var_1_58 = (((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) < 0 ) ? -((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) : ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))));
 } else {
  if (((((var_1_60) > (var_1_34)) ? (var_1_60) : (var_1_34))) >= var_1_35) {
   var_1_58 = ((((var_1_59) > (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (var_1_59) : (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))));
  } else {
   var_1_58 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
  }
 }
 if (var_1_44 >= ((((var_1_28 * var_1_26) < 0 ) ? -(var_1_28 * var_1_26) : (var_1_28 * var_1_26)))) {
  if ((- 32u) < ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) {
   var_1_62 = (((((((((var_1_63) < (3587032421u)) ? (var_1_63) : (3587032421u)))) > ((var_1_64 - var_1_29))) ? (((((var_1_63) < (3587032421u)) ? (var_1_63) : (3587032421u)))) : ((var_1_64 - var_1_29)))) - ((((var_1_34) < (var_1_49)) ? (var_1_34) : (var_1_49))));
  }
 } else {
  if ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) << var_1_54) <= var_1_46) {
   if ((var_1_55 + var_1_51) <= var_1_60) {
    var_1_62 = (var_1_63 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))));
   }
  } else {
   var_1_62 = (((((((var_1_29) > (16u)) ? (var_1_29) : (16u))) < 0 ) ? -((((var_1_29) > (16u)) ? (var_1_29) : (16u))) : ((((var_1_29) > (16u)) ? (var_1_29) : (16u)))));
  }
 }
 if (var_1_43) {
  if (((((var_1_32) < (var_1_49)) ? (var_1_32) : (var_1_49))) <= ((((var_1_60) > ((var_1_63 - var_1_35))) ? (var_1_60) : ((var_1_63 - var_1_35))))) {
   var_1_65 = ((((var_1_66) > (var_1_29)) ? (var_1_66) : (var_1_29)));
  }
 } else {
  if (var_1_24) {
   if (var_1_35 >= (var_1_66 * var_1_58)) {
    var_1_65 = var_1_35;
   } else {
    var_1_65 = ((((-2 + var_1_29) < 0 ) ? -(-2 + var_1_29) : (-2 + var_1_29)));
   }
  }
 }
 if (var_1_43 && var_1_27) {
  if ((((((((var_1_52) > (var_1_25)) ? (var_1_52) : (var_1_25))) < 0 ) ? -((((var_1_52) > (var_1_25)) ? (var_1_52) : (var_1_25))) : ((((var_1_52) > (var_1_25)) ? (var_1_52) : (var_1_25))))) > var_1_22) {
   if (var_1_65 >= var_1_48) {
    var_1_67 = ((((var_1_49) < (var_1_29)) ? (var_1_49) : (var_1_29)));
   }
  }
 }
 if (var_1_61 >= var_1_67) {
  var_1_68 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  if (var_1_50) {
   var_1_68 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
  } else {
   if ((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) - var_1_69) >= var_1_60) {
    if ((var_1_67 >> var_1_58) < ((var_1_30 | var_1_32) % ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) {
     var_1_68 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
    }
   } else {
    var_1_68 = var_1_25;
   }
  }
 }
 if (((((((((var_1_54) > (var_1_33)) ? (var_1_54) : (var_1_33)))) > (var_1_46)) ? (((((var_1_54) > (var_1_33)) ? (var_1_54) : (var_1_33)))) : (var_1_46))) <= 10u) {
  if (var_1_59 >= ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) {
   if ((~ var_1_51) >= 100) {
    var_1_70 = var_1_71;
   }
  } else {
   var_1_70 = var_1_59;
  }
 } else {
  var_1_70 = var_1_65;
 }
 if (var_1_39) {
  var_1_72 = var_1_35;
 } else {
  var_1_72 = var_1_69;
 }
 var_1_73 = var_1_61;
 var_1_74 = var_1_35;
 var_1_75 = var_1_34;
 if (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) < var_1_53) {
  var_1_76 = ((((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) > ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) ? (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) : ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))));
 } else {
  var_1_76 = var_1_74;
 }
 var_1_77 = var_1_61;
 unsigned char stepLocal_3 = var_1_13;
 if (((((last_1_var_1_14) > ((last_1_var_1_20 | var_1_9))) ? (last_1_var_1_14) : ((last_1_var_1_20 | var_1_9)))) > stepLocal_3) {
  var_1_15 = (((((var_1_13 + var_1_11)) > (var_1_12)) ? ((var_1_13 + var_1_11)) : (var_1_12)));
 } else {
  var_1_15 = (var_1_13 - ((((last_1_var_1_20) > ((var_1_16 - var_1_11))) ? (last_1_var_1_20) : ((var_1_16 - var_1_11)))));
 }
 if (var_1_15 > var_1_12) {
  var_1_18 = (! var_1_19);
 }
 if (var_1_18) {
  var_1_14 = var_1_12;
 } else {
  var_1_14 = 64;
 }
 if (last_1_var_1_18) {
  if (last_1_var_1_15 <= ((last_1_var_1_7 + last_1_var_1_20) + last_1_var_1_10)) {
   var_1_1 = ((((last_1_var_1_7) < (last_1_var_1_20)) ? (last_1_var_1_7) : (last_1_var_1_20)));
  }
 }
 var_1_20 = last_1_var_1_17;
 signed long int stepLocal_6 = var_1_1;
 signed long int stepLocal_5 = var_1_20;
 unsigned char stepLocal_4 = var_1_13;
 if (stepLocal_4 > var_1_1) {
  if (stepLocal_6 <= 32u) {
   if (stepLocal_5 <= last_1_var_1_17) {
    var_1_17 = var_1_16;
   } else {
    var_1_17 = -50;
   }
  } else {
   var_1_17 = var_1_11;
  }
 }
 signed long int stepLocal_1 = var_1_20 + var_1_1;
 signed short int stepLocal_0 = var_1_17;
 if (stepLocal_0 == var_1_20) {
  if (stepLocal_1 > (var_1_15 % var_1_9)) {
   var_1_7 = var_1_20;
  } else {
   var_1_7 = var_1_1;
  }
 }
 signed long int stepLocal_2 = (- var_1_1) + var_1_20;
 if (stepLocal_2 >= var_1_9) {
  var_1_10 = (var_1_11 + (var_1_12 + var_1_13));
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 assume_abort_if_not(var_1_9 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_48 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_48 >= -2147483647);
 assume_abort_if_not(var_1_48 <= 2147483646);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 2147483646);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -127);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= -2147483646);
 assume_abort_if_not(var_1_55 <= 2147483646);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -126);
 assume_abort_if_not(var_1_59 <= 126);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 65535);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -126);
 assume_abort_if_not(var_1_61 <= 126);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 2147483647);
 assume_abort_if_not(var_1_63 <= 4294967294);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 3221225470);
 assume_abort_if_not(var_1_64 <= 4294967294);
 var_1_66 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_66 >= -32767);
 assume_abort_if_not(var_1_66 <= 32766);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 127);
 var_1_71 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_71 >= -32768);
 assume_abort_if_not(var_1_71 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((last_1_var_1_18 ? ((last_1_var_1_15 <= ((last_1_var_1_7 + last_1_var_1_20) + last_1_var_1_10)) ? (var_1_1 == ((signed long int) ((((last_1_var_1_7) < (last_1_var_1_20)) ? (last_1_var_1_7) : (last_1_var_1_20))))) : 1) : 1) && ((var_1_17 == var_1_20) ? (((var_1_20 + var_1_1) > (var_1_15 % var_1_9)) ? (var_1_7 == ((unsigned long int) var_1_20)) : (var_1_7 == ((unsigned long int) var_1_1))) : 1)) && ((((- var_1_1) + var_1_20) >= var_1_9) ? (var_1_10 == ((unsigned char) (var_1_11 + (var_1_12 + var_1_13)))) : 1)) && (var_1_18 ? (var_1_14 == ((signed long int) var_1_12)) : (var_1_14 == ((signed long int) 64)))) && ((((((last_1_var_1_14) > ((last_1_var_1_20 | var_1_9))) ? (last_1_var_1_14) : ((last_1_var_1_20 | var_1_9)))) > var_1_13) ? (var_1_15 == ((signed short int) (((((var_1_13 + var_1_11)) > (var_1_12)) ? ((var_1_13 + var_1_11)) : (var_1_12))))) : (var_1_15 == ((signed short int) (var_1_13 - ((((last_1_var_1_20) > ((var_1_16 - var_1_11))) ? (last_1_var_1_20) : ((var_1_16 - var_1_11))))))))) && ((var_1_13 > var_1_1) ? ((var_1_1 <= 32u) ? ((var_1_20 <= last_1_var_1_17) ? (var_1_17 == ((signed short int) var_1_16)) : (var_1_17 == ((signed short int) -50))) : (var_1_17 == ((signed short int) var_1_11))) : 1)) && ((var_1_15 > var_1_12) ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1)) && (var_1_20 == ((signed long int) last_1_var_1_17))
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
