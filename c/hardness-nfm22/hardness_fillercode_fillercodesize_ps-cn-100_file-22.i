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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned short int var_1_4 = 256;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 128;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 16;
unsigned short int var_1_13 = 256;
unsigned short int var_1_17 = 4;
double var_1_18 = 64.2;
unsigned short int var_1_19 = 53045;
double var_1_20 = 1.75;
double var_1_21 = 50.35;
double var_1_22 = 5.5;
double var_1_23 = 7.125;
unsigned long int var_1_24 = 50;
unsigned long int var_1_25 = 1907531378;
unsigned long int var_1_26 = 8;
unsigned char var_1_27 = 0;
signed long int var_1_28 = 8;
signed long int var_1_29 = 2;
signed long int var_1_30 = 1;
unsigned long int var_1_31 = 0;
unsigned long int var_1_32 = 32;
signed long int var_1_33 = -16;
signed long int var_1_34 = 0;
unsigned long int var_1_35 = 1;
unsigned long int var_1_36 = 1;
unsigned long int var_1_37 = 4092582027;
unsigned long int var_1_38 = 2745889904;
unsigned long int var_1_39 = 8;
signed char var_1_40 = -4;
signed short int var_1_41 = -32;
unsigned char var_1_42 = 0;
signed char var_1_43 = 1;
signed char var_1_44 = 4;
signed char var_1_45 = 16;
signed char var_1_46 = 0;
unsigned char var_1_47 = 1;
signed char var_1_48 = 5;
float var_1_49 = 32.8;
float var_1_50 = 5.875;
float var_1_51 = 32.25;
signed short int var_1_52 = -8;
signed short int var_1_53 = 8;
unsigned long int var_1_54 = 100000000;
signed char var_1_55 = 32;
signed short int var_1_56 = 25;
signed short int var_1_57 = -50;
signed short int var_1_58 = 1;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 256;
unsigned long int last_1_var_1_24 = 50;
unsigned char last_1_var_1_27 = 0;
void initially(void) {
}
void step(void) {
 var_1_28 = var_1_29;
 if ((var_1_28 + 100000000u) != ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))) {
  var_1_30 = (((((var_1_33 + ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) > (var_1_29)) ? ((var_1_33 + ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) : (var_1_29)));
 } else {
  var_1_30 = var_1_29;
 }
 if ((~ var_1_33) > ((((200) < 0 ) ? -(200) : (200)))) {
  var_1_35 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 } else {
  var_1_35 = (((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < (var_1_38)) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (var_1_38))) - ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))));
 }
 if (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < (var_1_34 << ((((1) < 0 ) ? -(1) : (1))))) {
  if (var_1_42) {
   var_1_40 = ((((-16) < 0 ) ? -(-16) : (-16)));
  }
 } else {
  var_1_40 = ((var_1_43 + var_1_44) - var_1_45);
 }
 if (var_1_42) {
  if (var_1_47 || (var_1_45 > var_1_30)) {
   var_1_46 = ((((var_1_43 - var_1_45) < 0 ) ? -(var_1_43 - var_1_45) : (var_1_43 - var_1_45)));
  } else {
   if (var_1_34 >= (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) - var_1_45)) {
    var_1_46 = ((((var_1_44 + ((((var_1_43) < (var_1_48)) ? (var_1_43) : (var_1_48)))) < 0 ) ? -(var_1_44 + ((((var_1_43) < (var_1_48)) ? (var_1_43) : (var_1_48)))) : (var_1_44 + ((((var_1_43) < (var_1_48)) ? (var_1_43) : (var_1_48))))));
   } else {
    var_1_46 = ((var_1_44 - var_1_43) + var_1_48);
   }
  }
 } else {
  if (((((var_1_49) < (var_1_50)) ? (var_1_49) : (var_1_50))) <= (var_1_51 - 127.375f)) {
   var_1_46 = var_1_48;
  }
 }
 var_1_52 = (((((((var_1_43) < (var_1_53)) ? (var_1_43) : (var_1_53))) < 0 ) ? -((((var_1_43) < (var_1_53)) ? (var_1_43) : (var_1_53))) : ((((var_1_43) < (var_1_53)) ? (var_1_43) : (var_1_53)))));
 if ((((((var_1_43) < (var_1_29)) ? (var_1_43) : (var_1_29))) >> ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) >= var_1_35) {
  if (var_1_39 <= var_1_44) {
   if ((var_1_52 ^ 4) < var_1_29) {
    var_1_54 = ((((var_1_43) > ((3462168556u - 64u))) ? (var_1_43) : ((3462168556u - 64u))));
   } else {
    var_1_54 = (var_1_44 + var_1_45);
   }
  } else {
   var_1_54 = ((((var_1_45) < ((((((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) < 0 ) ? -((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) : ((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))))))) ? (var_1_45) : ((((((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) < 0 ) ? -((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))) : ((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39))))))));
  }
 } else {
  var_1_54 = ((((var_1_45) < (((((((((2u) < 0 ) ? -(2u) : (2u)))) > (var_1_36)) ? (((((2u) < 0 ) ? -(2u) : (2u)))) : (var_1_36))))) ? (var_1_45) : (((((((((2u) < 0 ) ? -(2u) : (2u)))) > (var_1_36)) ? (((((2u) < 0 ) ? -(2u) : (2u)))) : (var_1_36))))));
 }
 if (var_1_49 > var_1_51) {
  var_1_56 = (((((((var_1_48) < (var_1_57)) ? (var_1_48) : (var_1_57))) < 0 ) ? -((((var_1_48) < (var_1_57)) ? (var_1_48) : (var_1_57))) : ((((var_1_48) < (var_1_57)) ? (var_1_48) : (var_1_57)))));
 } else {
  var_1_56 = ((((var_1_44) > ((16 + var_1_46))) ? (var_1_44) : ((16 + var_1_46))));
 }
 if (var_1_47 || (var_1_29 > (64 | var_1_48))) {
  var_1_58 = (var_1_44 + var_1_43);
 }
 if (var_1_41 <= var_1_32) {
  var_1_59 = (! var_1_60);
 }
 var_1_61 = var_1_43;
 if (last_1_var_1_27) {
  var_1_20 = (((((((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) > (16.6)) ? (((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) : (16.6))) - var_1_23);
 } else {
  var_1_20 = var_1_22;
 }
 if ((- 3.75) < ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))) {
  var_1_27 = 0;
 }
 if (var_1_9 < (var_1_8 << var_1_4)) {
  var_1_10 = (var_1_11 + var_1_12);
 } else {
  var_1_10 = var_1_11;
 }
 unsigned char stepLocal_0 = var_1_27;
 if ((var_1_10 <= var_1_10) || stepLocal_0) {
  var_1_13 = ((((((((var_1_10) > (var_1_10)) ? (var_1_10) : (var_1_10)))) > (var_1_10)) ? (((((var_1_10) > (var_1_10)) ? (var_1_10) : (var_1_10)))) : (var_1_10)));
 } else {
  var_1_13 = var_1_10;
 }
 unsigned short int stepLocal_1 = var_1_7;
 if (stepLocal_1 == last_1_var_1_24) {
  var_1_24 = (2332545940u - (1490203111u - var_1_11));
 } else {
  var_1_24 = (var_1_10 + (var_1_25 - var_1_11));
 }
 signed long int stepLocal_2 = var_1_19 - var_1_7;
 if (var_1_10 > stepLocal_2) {
  var_1_26 = var_1_10;
 }
 if (var_1_20 < var_1_20) {
  var_1_1 = ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)));
 } else {
  var_1_1 = (((var_1_6 + var_1_7) - var_1_10) + var_1_10);
 }
 if ((var_1_20 / var_1_18) > var_1_20) {
  var_1_17 = ((var_1_19 - ((((var_1_26) > (var_1_12)) ? (var_1_26) : (var_1_12)))) - var_1_7);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 8191);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8192);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 49150);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483647);
 assume_abort_if_not(var_1_29 <= 2147483646);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -1073741823);
 assume_abort_if_not(var_1_33 <= 1073741823);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -1073741823);
 assume_abort_if_not(var_1_34 <= 1073741823);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= -32767);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -63);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_53 >= -32766);
 assume_abort_if_not(var_1_53 <= 32766);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -32);
 assume_abort_if_not(var_1_55 <= 32);
 var_1_57 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_57 >= -32766);
 assume_abort_if_not(var_1_57 <= 32766);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 0);
}
void updateLastVariables() {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_27 = var_1_27;
}
int property() {
 return ((((((((var_1_20 < var_1_20) ? (var_1_1 == ((unsigned short int) ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))))) : (var_1_1 == ((unsigned short int) (((var_1_6 + var_1_7) - var_1_10) + var_1_10)))) && ((var_1_9 < (var_1_8 << var_1_4)) ? (var_1_10 == ((unsigned char) (var_1_11 + var_1_12))) : (var_1_10 == ((unsigned char) var_1_11)))) && (((var_1_10 <= var_1_10) || var_1_27) ? (var_1_13 == ((unsigned short int) ((((((((var_1_10) > (var_1_10)) ? (var_1_10) : (var_1_10)))) > (var_1_10)) ? (((((var_1_10) > (var_1_10)) ? (var_1_10) : (var_1_10)))) : (var_1_10))))) : (var_1_13 == ((unsigned short int) var_1_10)))) && (((var_1_20 / var_1_18) > var_1_20) ? (var_1_17 == ((unsigned short int) ((var_1_19 - ((((var_1_26) > (var_1_12)) ? (var_1_26) : (var_1_12)))) - var_1_7))) : 1)) && (last_1_var_1_27 ? (var_1_20 == ((double) (((((((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) > (16.6)) ? (((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22)))) : (16.6))) - var_1_23))) : (var_1_20 == ((double) var_1_22)))) && ((var_1_7 == last_1_var_1_24) ? (var_1_24 == ((unsigned long int) (2332545940u - (1490203111u - var_1_11)))) : (var_1_24 == ((unsigned long int) (var_1_10 + (var_1_25 - var_1_11)))))) && ((var_1_10 > (var_1_19 - var_1_7)) ? (var_1_26 == ((unsigned long int) var_1_10)) : 1)) && (((- 3.75) < ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))) ? (var_1_27 == ((unsigned char) 0)) : 1)
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
