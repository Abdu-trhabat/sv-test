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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch11Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 4.75;
signed long int var_1_6 = -4;
double var_1_7 = 49.8;
double var_1_8 = 255.625;
unsigned short int var_1_9 = 10;
unsigned short int var_1_10 = 10;
double var_1_11 = 127.35;
unsigned short int var_1_14 = 64;
unsigned short int var_1_17 = 8;
double var_1_22 = 25.5;
double var_1_23 = 128.2;
double var_1_24 = 10.5;
double var_1_25 = 200.25;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 128;
double var_1_29 = 4.5;
unsigned short int var_1_30 = 8;
unsigned short int var_1_31 = 51273;
double var_1_32 = 256.2;
unsigned short int var_1_33 = 32;
signed char var_1_34 = -16;
unsigned short int var_1_35 = 500;
signed char var_1_36 = -32;
signed short int var_1_37 = -2;
float var_1_40 = 5.5;
float var_1_41 = 10.2;
unsigned long int var_1_42 = 16;
unsigned long int var_1_43 = 4224349747;
unsigned long int var_1_44 = 1000000000;
unsigned long int var_1_45 = 1000000000;
unsigned long int var_1_46 = 2097757159;
unsigned long int var_1_47 = 128;
unsigned char var_1_48 = 1;
double var_1_49 = 0.75;
double var_1_50 = 24.75;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
float var_1_54 = 2.975;
float var_1_55 = 1000000000.05;
unsigned long int var_1_56 = 8;
unsigned long int var_1_57 = 256;
signed short int var_1_58 = 256;
signed long int var_1_59 = -50;
unsigned short int var_1_60 = 16;
unsigned short int var_1_61 = 10000;
unsigned short int var_1_62 = 4;
float var_1_63 = 64.3;
float var_1_64 = 0.0;
float var_1_65 = 0.5;
double var_1_66 = 127.5;
signed long int var_1_67 = -1;
float var_1_68 = 32.25;
unsigned long int var_1_69 = 0;
signed char var_1_70 = -16;
float var_1_71 = 4.15;
float var_1_72 = 0.75;
double last_1_var_1_1 = 4.75;
unsigned short int last_1_var_1_14 = 64;
unsigned char last_1_var_1_26 = 128;
unsigned short int last_1_var_1_30 = 8;
double last_1_var_1_32 = 256.2;
signed char last_1_var_1_34 = -16;
signed short int last_1_var_1_37 = -2;
unsigned long int last_1_var_1_42 = 16;
unsigned long int last_1_var_1_56 = 8;
signed long int last_1_var_1_59 = -50;
signed long int last_1_var_1_67 = -1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_9 = var_1_28;
 signed long int stepLocal_8 = last_1_var_1_26;
 if (stepLocal_8 == var_1_27) {
  var_1_56 = (((((last_1_var_1_14 + ((((last_1_var_1_30) > (last_1_var_1_26)) ? (last_1_var_1_30) : (last_1_var_1_26))))) > ((2204735768u - last_1_var_1_37))) ? ((last_1_var_1_14 + ((((last_1_var_1_30) > (last_1_var_1_26)) ? (last_1_var_1_30) : (last_1_var_1_26))))) : ((2204735768u - last_1_var_1_37))));
 } else {
  if (! (var_1_55 > ((((last_1_var_1_32) > (var_1_49)) ? (last_1_var_1_32) : (var_1_49))))) {
   if (stepLocal_9 >= last_1_var_1_26) {
    var_1_56 = (var_1_43 - ((((var_1_28 + var_1_35) < 0 ) ? -(var_1_28 + var_1_35) : (var_1_28 + var_1_35))));
   } else {
    var_1_56 = ((((last_1_var_1_56) > (256u)) ? (last_1_var_1_56) : (256u)));
   }
  }
 }
 signed long int stepLocal_7 = (500 << last_1_var_1_67) * last_1_var_1_59;
 if (64 <= stepLocal_7) {
  if ((var_1_49 - var_1_50) >= last_1_var_1_1) {
   var_1_48 = (! (var_1_51 && var_1_52));
  } else {
   var_1_48 = ((var_1_7 >= last_1_var_1_32) && var_1_53);
  }
 } else {
  var_1_48 = var_1_52;
 }
 unsigned short int stepLocal_2 = var_1_10;
 if (stepLocal_2 <= (34429 - var_1_17)) {
  var_1_26 = var_1_27;
 } else {
  var_1_26 = ((((var_1_27) < ((var_1_28 - 10))) ? (var_1_27) : ((var_1_28 - 10))));
 }
 if (var_1_7 < var_1_23) {
  var_1_33 = (((((var_1_31 - 5)) > (var_1_26)) ? ((var_1_31 - 5)) : (var_1_26)));
 } else {
  var_1_33 = var_1_26;
 }
 var_1_54 = (var_1_55 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))));
 unsigned char stepLocal_10 = var_1_24 >= var_1_25;
 if ((1.875f <= var_1_11) || stepLocal_10) {
  var_1_57 = var_1_28;
 }
 if (var_1_48) {
  if (var_1_51) {
   if (var_1_52) {
    var_1_60 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
   } else {
    var_1_60 = ((((var_1_26) > (var_1_31)) ? (var_1_26) : (var_1_31)));
   }
  } else {
   var_1_60 = (var_1_35 + var_1_26);
  }
 } else {
  var_1_60 = (var_1_31 - var_1_26);
 }
 var_1_61 = (var_1_27 + var_1_26);
 unsigned short int stepLocal_11 = var_1_35;
 if (stepLocal_11 >= (var_1_26 + var_1_26)) {
  var_1_62 = var_1_26;
 } else {
  var_1_62 = (((((var_1_26 + var_1_26)) > (var_1_26)) ? ((var_1_26 + var_1_26)) : (var_1_26)));
 }
 unsigned short int stepLocal_13 = var_1_33;
 if (var_1_26 <= stepLocal_13) {
  var_1_66 = (var_1_55 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))));
 } else {
  var_1_66 = (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))));
 }
 var_1_67 = var_1_44;
 var_1_68 = var_1_65;
 var_1_70 = var_1_36;
 unsigned long int stepLocal_0 = (var_1_33 + var_1_56) | var_1_56;
 if (stepLocal_0 < (var_1_6 & 10000)) {
  var_1_1 = var_1_7;
 } else {
  var_1_1 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
 }
 unsigned char stepLocal_4 = var_1_48 || var_1_48;
 if (var_1_48) {
  if (var_1_11 == var_1_1) {
   var_1_37 = ((var_1_27 + var_1_61) + ((((var_1_56) > (var_1_56)) ? (var_1_56) : (var_1_56))));
  } else {
   if (stepLocal_4 || var_1_48) {
    var_1_37 = var_1_26;
   } else {
    var_1_37 = var_1_26;
   }
  }
 }
 unsigned char stepLocal_1 = var_1_48;
 if (stepLocal_1 && (var_1_48 || var_1_48)) {
  if (var_1_48) {
   var_1_14 = var_1_26;
  }
 } else {
  var_1_14 = (((((var_1_26) < ((var_1_26 + var_1_26))) ? (var_1_26) : ((var_1_26 + var_1_26)))) + ((((var_1_26) > (var_1_26)) ? (var_1_26) : (var_1_26))));
 }
 if (var_1_14 > var_1_26) {
  if ((var_1_31 / (var_1_28 + var_1_35)) < (var_1_26 * last_1_var_1_34)) {
   if (var_1_48) {
    var_1_34 = var_1_36;
   } else {
    var_1_34 = var_1_36;
   }
  }
 }
 if (var_1_48) {
  var_1_69 = var_1_28;
 } else {
  var_1_69 = var_1_26;
 }
 if (var_1_11 < (var_1_7 * var_1_1)) {
  var_1_22 = (var_1_23 + var_1_24);
 } else {
  var_1_22 = ((((var_1_25) > (var_1_24)) ? (var_1_25) : (var_1_24)));
 }
 if (var_1_33 > var_1_61) {
  var_1_29 = (var_1_24 + ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))));
 }
 if (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) >= ((1616384703 - var_1_62) - ((((var_1_26) < (var_1_31)) ? (var_1_26) : (var_1_31))))) {
  var_1_32 = ((((var_1_8) > (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? (var_1_8) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))));
 }
 if (var_1_57 >= var_1_26) {
  var_1_40 = (((31.8f + 2.2f) + var_1_41) + 50.3f);
 }
 signed long int stepLocal_6 = var_1_28 / var_1_6;
 unsigned short int stepLocal_5 = var_1_33;
 if (var_1_8 < var_1_25) {
  if (stepLocal_6 == (64 - var_1_31)) {
   var_1_42 = ((((var_1_34) < ((((((var_1_43 - var_1_26)) > (var_1_31)) ? ((var_1_43 - var_1_26)) : (var_1_31))))) ? (var_1_34) : ((((((var_1_43 - var_1_26)) > (var_1_31)) ? ((var_1_43 - var_1_26)) : (var_1_31))))));
  } else {
   var_1_42 = (((var_1_44 + var_1_45) - ((((last_1_var_1_42) < (var_1_26)) ? (last_1_var_1_42) : (var_1_26)))) + (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - 16u));
  }
 } else {
  if ((((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) * var_1_46) > stepLocal_5) {
   var_1_42 = var_1_28;
  } else {
   var_1_42 = (var_1_43 - (last_1_var_1_42 + var_1_26));
  }
 }
 unsigned long int stepLocal_12 = var_1_46;
 if (! var_1_48) {
  if (stepLocal_12 <= var_1_37) {
   var_1_63 = (var_1_23 + var_1_24);
  }
 } else {
  var_1_63 = ((((((var_1_64 - 255.5f) - var_1_55)) < ((((((25.5f - var_1_65)) < (var_1_25)) ? ((25.5f - var_1_65)) : (var_1_25))))) ? (((var_1_64 - 255.5f) - var_1_55)) : ((((((25.5f - var_1_65)) < (var_1_25)) ? ((25.5f - var_1_65)) : (var_1_25))))));
 }
 if (var_1_50 <= var_1_49) {
  var_1_58 = (((((var_1_61) < (var_1_34)) ? (var_1_61) : (var_1_34))) + ((((var_1_26) < (var_1_56)) ? (var_1_26) : (var_1_56))));
 }
 var_1_59 = ((last_1_var_1_59 + ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) + ((((((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) < (var_1_62)) ? (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) : (var_1_62))));
 if (var_1_66 >= var_1_24) {
  var_1_47 = (2u + var_1_26);
 } else {
  var_1_47 = (((((var_1_26) < ((var_1_46 - var_1_58))) ? (var_1_26) : ((var_1_46 - var_1_58)))) + ((((var_1_26) < (var_1_45)) ? (var_1_26) : (var_1_45))));
 }
 signed long int stepLocal_3 = 10;
 if (stepLocal_3 != ((var_1_58 - var_1_58) >> var_1_26)) {
  var_1_30 = (var_1_31 - var_1_26);
 } else {
  var_1_30 = (var_1_26 + var_1_26);
 }
 if (var_1_26 > var_1_37) {
  if (var_1_66 < var_1_7) {
   var_1_9 = var_1_26;
  }
 } else {
  if (var_1_7 == ((- var_1_66) / var_1_11)) {
   if ((var_1_26 / var_1_6) == var_1_30) {
    if (((((- var_1_6) < 0 ) ? -(- var_1_6) : (- var_1_6))) <= -200) {
     var_1_9 = var_1_26;
    } else {
     var_1_9 = var_1_26;
    }
   } else {
    var_1_9 = var_1_26;
   }
  }
 }
 unsigned char stepLocal_15 = var_1_26;
 signed long int stepLocal_14 = var_1_26 - var_1_26;
 if (var_1_30 <= stepLocal_14) {
  var_1_71 = ((100000.9f + (1.00000000625E8f - var_1_72)) + var_1_23);
 } else {
  if (stepLocal_15 < var_1_26) {
   var_1_71 = var_1_23;
  } else {
   var_1_71 = 0.75f;
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 32767);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 32767);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -127);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -230584.3009213691390e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 536870911);
 assume_abort_if_not(var_1_44 <= 1073741824);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 536870912);
 assume_abort_if_not(var_1_45 <= 1073741823);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741823);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 4611686.018427382800e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854765600e+12F && var_1_65 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_67 = var_1_67;
}
int property() {
 return ((((((((((((((((((((((((((((((((var_1_33 + var_1_56) | var_1_56) < (var_1_6 & 10000)) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))))) && ((var_1_26 > var_1_37) ? ((var_1_66 < var_1_7) ? (var_1_9 == ((unsigned short int) var_1_26)) : 1) : ((var_1_7 == ((- var_1_66) / var_1_11)) ? (((var_1_26 / var_1_6) == var_1_30) ? ((((((- var_1_6) < 0 ) ? -(- var_1_6) : (- var_1_6))) <= -200) ? (var_1_9 == ((unsigned short int) var_1_26)) : (var_1_9 == ((unsigned short int) var_1_26))) : (var_1_9 == ((unsigned short int) var_1_26))) : 1))) && ((var_1_48 && (var_1_48 || var_1_48)) ? (var_1_48 ? (var_1_14 == ((unsigned short int) var_1_26)) : 1) : (var_1_14 == ((unsigned short int) (((((var_1_26) < ((var_1_26 + var_1_26))) ? (var_1_26) : ((var_1_26 + var_1_26)))) + ((((var_1_26) > (var_1_26)) ? (var_1_26) : (var_1_26)))))))) && ((var_1_11 < (var_1_7 * var_1_1)) ? (var_1_22 == ((double) (var_1_23 + var_1_24))) : (var_1_22 == ((double) ((((var_1_25) > (var_1_24)) ? (var_1_25) : (var_1_24))))))) && ((var_1_10 <= (34429 - var_1_17)) ? (var_1_26 == ((unsigned char) var_1_27)) : (var_1_26 == ((unsigned char) ((((var_1_27) < ((var_1_28 - 10))) ? (var_1_27) : ((var_1_28 - 10)))))))) && ((var_1_33 > var_1_61) ? (var_1_29 == ((double) (var_1_24 + ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) : 1)) && ((10 != ((var_1_58 - var_1_58) >> var_1_26)) ? (var_1_30 == ((unsigned short int) (var_1_31 - var_1_26))) : (var_1_30 == ((unsigned short int) (var_1_26 + var_1_26))))) && ((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) >= ((1616384703 - var_1_62) - ((((var_1_26) < (var_1_31)) ? (var_1_26) : (var_1_31))))) ? (var_1_32 == ((double) ((((var_1_8) > (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? (var_1_8) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))) : 1)) && ((var_1_7 < var_1_23) ? (var_1_33 == ((unsigned short int) (((((var_1_31 - 5)) > (var_1_26)) ? ((var_1_31 - 5)) : (var_1_26))))) : (var_1_33 == ((unsigned short int) var_1_26)))) && ((var_1_14 > var_1_26) ? (((var_1_31 / (var_1_28 + var_1_35)) < (var_1_26 * last_1_var_1_34)) ? (var_1_48 ? (var_1_34 == ((signed char) var_1_36)) : (var_1_34 == ((signed char) var_1_36))) : 1) : 1)) && (var_1_48 ? ((var_1_11 == var_1_1) ? (var_1_37 == ((signed short int) ((var_1_27 + var_1_61) + ((((var_1_56) > (var_1_56)) ? (var_1_56) : (var_1_56)))))) : (((var_1_48 || var_1_48) || var_1_48) ? (var_1_37 == ((signed short int) var_1_26)) : (var_1_37 == ((signed short int) var_1_26)))) : 1)) && ((var_1_57 >= var_1_26) ? (var_1_40 == ((float) (((31.8f + 2.2f) + var_1_41) + 50.3f))) : 1)) && ((var_1_8 < var_1_25) ? (((var_1_28 / var_1_6) == (64 - var_1_31)) ? (var_1_42 == ((unsigned long int) ((((var_1_34) < ((((((var_1_43 - var_1_26)) > (var_1_31)) ? ((var_1_43 - var_1_26)) : (var_1_31))))) ? (var_1_34) : ((((((var_1_43 - var_1_26)) > (var_1_31)) ? ((var_1_43 - var_1_26)) : (var_1_31)))))))) : (var_1_42 == ((unsigned long int) (((var_1_44 + var_1_45) - ((((last_1_var_1_42) < (var_1_26)) ? (last_1_var_1_42) : (var_1_26)))) + (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - 16u))))) : (((((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) * var_1_46) > var_1_33) ? (var_1_42 == ((unsigned long int) var_1_28)) : (var_1_42 == ((unsigned long int) (var_1_43 - (last_1_var_1_42 + var_1_26))))))) && ((var_1_66 >= var_1_24) ? (var_1_47 == ((unsigned long int) (2u + var_1_26))) : (var_1_47 == ((unsigned long int) (((((var_1_26) < ((var_1_46 - var_1_58))) ? (var_1_26) : ((var_1_46 - var_1_58)))) + ((((var_1_26) < (var_1_45)) ? (var_1_26) : (var_1_45)))))))) && ((64 <= ((500 << last_1_var_1_67) * last_1_var_1_59)) ? (((var_1_49 - var_1_50) >= last_1_var_1_1) ? (var_1_48 == ((unsigned char) (! (var_1_51 && var_1_52)))) : (var_1_48 == ((unsigned char) ((var_1_7 >= last_1_var_1_32) && var_1_53)))) : (var_1_48 == ((unsigned char) var_1_52)))) && (var_1_54 == ((float) (var_1_55 - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) && ((last_1_var_1_26 == var_1_27) ? (var_1_56 == ((unsigned long int) (((((last_1_var_1_14 + ((((last_1_var_1_30) > (last_1_var_1_26)) ? (last_1_var_1_30) : (last_1_var_1_26))))) > ((2204735768u - last_1_var_1_37))) ? ((last_1_var_1_14 + ((((last_1_var_1_30) > (last_1_var_1_26)) ? (last_1_var_1_30) : (last_1_var_1_26))))) : ((2204735768u - last_1_var_1_37)))))) : ((! (var_1_55 > ((((last_1_var_1_32) > (var_1_49)) ? (last_1_var_1_32) : (var_1_49))))) ? ((var_1_28 >= last_1_var_1_26) ? (var_1_56 == ((unsigned long int) (var_1_43 - ((((var_1_28 + var_1_35) < 0 ) ? -(var_1_28 + var_1_35) : (var_1_28 + var_1_35)))))) : (var_1_56 == ((unsigned long int) ((((last_1_var_1_56) > (256u)) ? (last_1_var_1_56) : (256u)))))) : 1))) && (((1.875f <= var_1_11) || (var_1_24 >= var_1_25)) ? (var_1_57 == ((unsigned long int) var_1_28)) : 1)) && ((var_1_50 <= var_1_49) ? (var_1_58 == ((signed short int) (((((var_1_61) < (var_1_34)) ? (var_1_61) : (var_1_34))) + ((((var_1_26) < (var_1_56)) ? (var_1_26) : (var_1_56)))))) : 1)) && (var_1_59 == ((signed long int) ((last_1_var_1_59 + ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) + ((((((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) < (var_1_62)) ? (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))) : (var_1_62))))))) && (var_1_48 ? (var_1_51 ? (var_1_52 ? (var_1_60 == ((unsigned short int) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : (var_1_60 == ((unsigned short int) ((((var_1_26) > (var_1_31)) ? (var_1_26) : (var_1_31)))))) : (var_1_60 == ((unsigned short int) (var_1_35 + var_1_26)))) : (var_1_60 == ((unsigned short int) (var_1_31 - var_1_26))))) && (var_1_61 == ((unsigned short int) (var_1_27 + var_1_26)))) && ((var_1_35 >= (var_1_26 + var_1_26)) ? (var_1_62 == ((unsigned short int) var_1_26)) : (var_1_62 == ((unsigned short int) (((((var_1_26 + var_1_26)) > (var_1_26)) ? ((var_1_26 + var_1_26)) : (var_1_26))))))) && ((! var_1_48) ? ((var_1_46 <= var_1_37) ? (var_1_63 == ((float) (var_1_23 + var_1_24))) : 1) : (var_1_63 == ((float) ((((((var_1_64 - 255.5f) - var_1_55)) < ((((((25.5f - var_1_65)) < (var_1_25)) ? ((25.5f - var_1_65)) : (var_1_25))))) ? (((var_1_64 - 255.5f) - var_1_55)) : ((((((25.5f - var_1_65)) < (var_1_25)) ? ((25.5f - var_1_65)) : (var_1_25)))))))))) && ((var_1_26 <= var_1_33) ? (var_1_66 == ((double) (var_1_55 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) : (var_1_66 == ((double) (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))))) && (var_1_67 == ((signed long int) var_1_44))) && (var_1_68 == ((float) var_1_65))) && (var_1_48 ? (var_1_69 == ((unsigned long int) var_1_28)) : (var_1_69 == ((unsigned long int) var_1_26)))) && (var_1_70 == ((signed char) var_1_36))) && ((var_1_30 <= (var_1_26 - var_1_26)) ? (var_1_71 == ((float) ((100000.9f + (1.00000000625E8f - var_1_72)) + var_1_23))) : ((var_1_26 < var_1_26) ? (var_1_71 == ((float) var_1_23)) : (var_1_71 == ((float) 0.75f))))
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
