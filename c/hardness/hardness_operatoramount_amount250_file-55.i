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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 8;
unsigned short int var_1_16 = 45236;
unsigned short int var_1_17 = 60002;
unsigned short int var_1_18 = 26921;
signed long int var_1_19 = -32;
float var_1_20 = 10.3;
double var_1_21 = 4.625;
signed long int var_1_23 = 1000000000;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 4;
unsigned char var_1_27 = 32;
signed char var_1_28 = 4;
unsigned char var_1_29 = 0;
signed char var_1_30 = 64;
double var_1_31 = 128.75;
double var_1_32 = 8.5;
float var_1_33 = 64.62;
float var_1_34 = 1.35;
float var_1_35 = 63.5;
float var_1_36 = 31.7;
float var_1_37 = 32.75;
unsigned long int var_1_38 = 2;
unsigned long int var_1_40 = 2718795108;
unsigned long int var_1_41 = 2;
signed short int var_1_42 = -8;
unsigned char var_1_43 = 1;
double var_1_44 = 32.5;
double var_1_45 = 99999999999.2;
double var_1_46 = 256.25;
double var_1_47 = 8.375;
signed char var_1_48 = 32;
signed char var_1_49 = 10;
signed char var_1_50 = 8;
unsigned long int var_1_51 = 25;
unsigned char var_1_53 = 5;
double var_1_54 = 1.625;
float var_1_55 = 9999999999999.6;
unsigned long int var_1_56 = 128;
unsigned long int var_1_57 = 1000000000;
unsigned long int var_1_58 = 1000000000;
unsigned long int var_1_59 = 32;
signed long int var_1_60 = 8;
signed long int var_1_61 = 16;
signed long int var_1_62 = 1550644391;
unsigned long int var_1_63 = 32;
signed short int var_1_64 = 1;
signed short int var_1_65 = -200;
signed long int var_1_66 = -1;
unsigned char var_1_67 = 128;
signed long int last_1_var_1_19 = -32;
unsigned long int last_1_var_1_38 = 2;
signed short int last_1_var_1_42 = -8;
signed short int last_1_var_1_64 = 1;
void initially(void) {
}
void step(void) {
 if (! var_1_14) {
  if ((! var_1_14) && var_1_25) {
   var_1_24 = (var_1_17 - last_1_var_1_42);
  }
 } else {
  if ((var_1_11 - var_1_17) < last_1_var_1_19) {
   var_1_24 = ((var_1_17 - var_1_13) - var_1_12);
  } else {
   var_1_24 = ((((var_1_12) < (var_1_17)) ? (var_1_12) : (var_1_17)));
  }
 }
 if (31.25 < var_1_10) {
  var_1_15 = (var_1_16 - var_1_24);
 } else {
  var_1_15 = ((var_1_17 - ((((var_1_24) < (var_1_4)) ? (var_1_24) : (var_1_4)))) - (var_1_18 - 25));
 }
 if (var_1_5 > (last_1_var_1_38 % var_1_7)) {
  var_1_6 = var_1_5;
 } else {
  var_1_6 = (var_1_5 + var_1_7);
 }
 if ((var_1_46 - var_1_35) != (var_1_36 - var_1_45)) {
  if (var_1_29) {
   var_1_63 = (var_1_40 - ((((var_1_49) > (var_1_23)) ? (var_1_49) : (var_1_23))));
  }
 } else {
  if (var_1_43) {
   var_1_63 = last_1_var_1_64;
  } else {
   var_1_63 = (var_1_40 - ((var_1_57 - var_1_30) + var_1_16));
  }
 }
 if (! (var_1_63 >= var_1_40)) {
  var_1_54 = var_1_37;
 }
 unsigned char stepLocal_2 = var_1_14;
 if (stepLocal_2 && var_1_29) {
  var_1_28 = ((var_1_30 - var_1_27) - var_1_4);
 }
 var_1_31 = var_1_32;
 unsigned long int stepLocal_6 = var_1_63;
 if (var_1_7 >= stepLocal_6) {
  if (var_1_29) {
   if (var_1_25) {
    var_1_44 = ((((var_1_32) > (49.4)) ? (var_1_32) : (49.4)));
   } else {
    var_1_44 = (var_1_36 - (var_1_45 + var_1_46));
   }
  } else {
   var_1_44 = ((((var_1_45) > (((((var_1_37) < ((var_1_46 + var_1_47))) ? (var_1_37) : ((var_1_46 + var_1_47)))))) ? (var_1_45) : (((((var_1_37) < ((var_1_46 + var_1_47))) ? (var_1_37) : ((var_1_46 + var_1_47)))))));
  }
 } else {
  var_1_44 = (var_1_47 + (((((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) < 0 ) ? -((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) : ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))))));
 }
 if (var_1_45 > var_1_37) {
  var_1_55 = (var_1_37 - var_1_46);
 }
 if (var_1_43) {
  var_1_60 = (var_1_23 - var_1_49);
 } else {
  var_1_60 = ((var_1_57 + var_1_61) - (var_1_62 - var_1_27));
 }
 var_1_65 = var_1_17;
 unsigned char stepLocal_5 = var_1_25;
 unsigned short int stepLocal_4 = var_1_15;
 if (var_1_43) {
  if (stepLocal_4 > ((((- var_1_12) < 0 ) ? -(- var_1_12) : (- var_1_12)))) {
   if ((var_1_30 > (var_1_60 + var_1_7)) || stepLocal_5) {
    var_1_42 = var_1_6;
   } else {
    var_1_42 = var_1_15;
   }
  } else {
   var_1_42 = ((var_1_11 + var_1_13) - var_1_30);
  }
 } else {
  var_1_42 = (var_1_6 + 25);
 }
 if (var_1_10 != (var_1_55 / var_1_20)) {
  if ((((((var_1_10) > (var_1_20)) ? (var_1_10) : (var_1_20))) / var_1_21) == (var_1_55 + var_1_54)) {
   if (((((var_1_4) > (var_1_12)) ? (var_1_4) : (var_1_12))) < ((((((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) > (var_1_65)) ? (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_65)))) {
    var_1_19 = var_1_11;
   } else {
    var_1_19 = (var_1_4 - ((var_1_23 + 1000000000) - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))));
   }
  }
 }
 if ((var_1_4 >> var_1_53) < var_1_63) {
  var_1_51 = var_1_13;
 } else {
  if (((((var_1_60) > (var_1_40)) ? (var_1_60) : (var_1_40))) >= var_1_63) {
   var_1_51 = ((((1u) > (var_1_49)) ? (1u) : (var_1_49)));
  } else {
   var_1_51 = (((((((((2200038692u) < 0 ) ? -(2200038692u) : (2200038692u))) - var_1_60)) < ((var_1_40 - var_1_23))) ? ((((((2200038692u) < 0 ) ? -(2200038692u) : (2200038692u))) - var_1_60)) : ((var_1_40 - var_1_23))));
  }
 }
 unsigned long int stepLocal_11 = var_1_63 + -5;
 unsigned char stepLocal_10 = var_1_25;
 if (stepLocal_11 <= var_1_63) {
  if (stepLocal_10 || (var_1_14 || var_1_43)) {
   var_1_64 = var_1_30;
  } else {
   var_1_64 = var_1_42;
  }
 } else {
  var_1_64 = var_1_17;
 }
 unsigned char stepLocal_0 = (var_1_31 / var_1_10) < 255.625f;
 if (stepLocal_0 && (var_1_7 < (var_1_5 * -100))) {
  var_1_8 = ((((((var_1_11 + var_1_12) - var_1_4)) > (var_1_13)) ? (((var_1_11 + var_1_12) - var_1_4)) : (var_1_13)));
 } else {
  if (var_1_14) {
   var_1_8 = var_1_4;
  } else {
   var_1_8 = var_1_13;
  }
 }
 signed long int stepLocal_1 = var_1_60;
 if ((- var_1_16) <= stepLocal_1) {
  if ((var_1_54 * var_1_21) < (var_1_20 * var_1_10)) {
   var_1_26 = (var_1_12 + (100 - var_1_27));
  } else {
   var_1_26 = var_1_12;
  }
 } else {
  var_1_26 = var_1_13;
 }
 if (var_1_55 < (var_1_32 * (var_1_34 - var_1_35))) {
  if (var_1_10 > (var_1_35 - 64.5f)) {
   var_1_33 = var_1_32;
  }
 } else {
  var_1_33 = (((((var_1_36) < (9.625f)) ? (var_1_36) : (9.625f))) - var_1_37);
 }
 unsigned char stepLocal_8 = var_1_51 <= var_1_13;
 unsigned long int stepLocal_7 = var_1_16 + var_1_51;
 if (var_1_25 || stepLocal_8) {
  var_1_48 = var_1_5;
 } else {
  if (var_1_15 >= stepLocal_7) {
   if (var_1_25) {
    var_1_48 = (var_1_5 + ((((var_1_27) > ((var_1_49 - var_1_50))) ? (var_1_27) : ((var_1_49 - var_1_50)))));
   } else {
    var_1_48 = (var_1_49 - var_1_4);
   }
  } else {
   var_1_48 = var_1_30;
  }
 }
 unsigned short int stepLocal_9 = var_1_16;
 if (stepLocal_9 < (var_1_63 / var_1_30)) {
  var_1_56 = (var_1_49 + var_1_4);
 } else {
  if (var_1_54 < var_1_31) {
   if ((- (var_1_55 + var_1_54)) >= (128.25 + var_1_36)) {
    var_1_56 = (var_1_19 + var_1_15);
   } else {
    var_1_56 = (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - ((var_1_23 + var_1_57) - (var_1_58 - var_1_15)));
   }
  } else {
   var_1_56 = (var_1_40 - ((var_1_59 + var_1_16) + var_1_27));
  }
 }
 signed long int stepLocal_12 = var_1_67 - var_1_49;
 if (stepLocal_12 >= var_1_30) {
  var_1_66 = ((var_1_65 + var_1_63) + ((((var_1_49) > (10)) ? (var_1_49) : (10))));
 } else {
  if (var_1_55 > 500.5f) {
   var_1_66 = var_1_19;
  } else {
   var_1_66 = var_1_13;
  }
 }
 signed char stepLocal_3 = var_1_5;
 if (var_1_19 > stepLocal_3) {
  if ((64.05f * var_1_10) != var_1_33) {
   var_1_38 = ((((var_1_24) < (var_1_51)) ? (var_1_24) : (var_1_51)));
  } else {
   var_1_38 = (var_1_40 - ((((var_1_16) < ((var_1_17 + var_1_24))) ? (var_1_16) : ((var_1_17 + var_1_24)))));
  }
 } else {
  var_1_38 = var_1_41;
 }
 if (-2 == var_1_56) {
  if ((var_1_56 * var_1_15) <= -500) {
   var_1_1 = ((((2 - var_1_4) < 0 ) ? -(2 - var_1_4) : (2 - var_1_4)));
  } else {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 } else {
  var_1_1 = (var_1_5 + 5);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 assume_abort_if_not(var_1_7 != 0);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 64);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 49150);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 16383);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 assume_abort_if_not(var_1_20 != 0.0F);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 536870911);
 assume_abort_if_not(var_1_23 <= 1073741823);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 62);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 6);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 536870912);
 assume_abort_if_not(var_1_57 <= 1073741823);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 536870911);
 assume_abort_if_not(var_1_58 <= 1073741823);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 536870912);
 var_1_61 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 1073741823);
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= 1073741823);
 assume_abort_if_not(var_1_62 <= 2147483646);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 127);
 assume_abort_if_not(var_1_67 <= 255);
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return (((((((((((((((((((((((-2 == var_1_56) ? (((var_1_56 * var_1_15) <= -500) ? (var_1_1 == ((signed char) ((((2 - var_1_4) < 0 ) ? -(2 - var_1_4) : (2 - var_1_4))))) : (var_1_1 == ((signed char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (last_1_var_1_38 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_31 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) ((((((var_1_11 + var_1_12) - var_1_4)) > (var_1_13)) ? (((var_1_11 + var_1_12) - var_1_4)) : (var_1_13))))) : (var_1_14 ? (var_1_8 == ((unsigned char) var_1_4)) : (var_1_8 == ((unsigned char) var_1_13))))) && ((31.25 < var_1_10) ? (var_1_15 == ((unsigned short int) (var_1_16 - var_1_24))) : (var_1_15 == ((unsigned short int) ((var_1_17 - ((((var_1_24) < (var_1_4)) ? (var_1_24) : (var_1_4)))) - (var_1_18 - 25)))))) && ((var_1_10 != (var_1_55 / var_1_20)) ? (((((((var_1_10) > (var_1_20)) ? (var_1_10) : (var_1_20))) / var_1_21) == (var_1_55 + var_1_54)) ? ((((((var_1_4) > (var_1_12)) ? (var_1_4) : (var_1_12))) < ((((((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) > (var_1_65)) ? (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_65)))) ? (var_1_19 == ((signed long int) var_1_11)) : (var_1_19 == ((signed long int) (var_1_4 - ((var_1_23 + 1000000000) - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))))) : 1) : 1)) && ((! var_1_14) ? (((! var_1_14) && var_1_25) ? (var_1_24 == ((unsigned short int) (var_1_17 - last_1_var_1_42))) : 1) : (((var_1_11 - var_1_17) < last_1_var_1_19) ? (var_1_24 == ((unsigned short int) ((var_1_17 - var_1_13) - var_1_12))) : (var_1_24 == ((unsigned short int) ((((var_1_12) < (var_1_17)) ? (var_1_12) : (var_1_17)))))))) && (((- var_1_16) <= var_1_60) ? (((var_1_54 * var_1_21) < (var_1_20 * var_1_10)) ? (var_1_26 == ((unsigned char) (var_1_12 + (100 - var_1_27)))) : (var_1_26 == ((unsigned char) var_1_12))) : (var_1_26 == ((unsigned char) var_1_13)))) && ((var_1_14 && var_1_29) ? (var_1_28 == ((signed char) ((var_1_30 - var_1_27) - var_1_4))) : 1)) && (var_1_31 == ((double) var_1_32))) && ((var_1_55 < (var_1_32 * (var_1_34 - var_1_35))) ? ((var_1_10 > (var_1_35 - 64.5f)) ? (var_1_33 == ((float) var_1_32)) : 1) : (var_1_33 == ((float) (((((var_1_36) < (9.625f)) ? (var_1_36) : (9.625f))) - var_1_37))))) && ((var_1_19 > var_1_5) ? (((64.05f * var_1_10) != var_1_33) ? (var_1_38 == ((unsigned long int) ((((var_1_24) < (var_1_51)) ? (var_1_24) : (var_1_51))))) : (var_1_38 == ((unsigned long int) (var_1_40 - ((((var_1_16) < ((var_1_17 + var_1_24))) ? (var_1_16) : ((var_1_17 + var_1_24)))))))) : (var_1_38 == ((unsigned long int) var_1_41)))) && (var_1_43 ? ((var_1_15 > ((((- var_1_12) < 0 ) ? -(- var_1_12) : (- var_1_12)))) ? (((var_1_30 > (var_1_60 + var_1_7)) || var_1_25) ? (var_1_42 == ((signed short int) var_1_6)) : (var_1_42 == ((signed short int) var_1_15))) : (var_1_42 == ((signed short int) ((var_1_11 + var_1_13) - var_1_30)))) : (var_1_42 == ((signed short int) (var_1_6 + 25))))) && ((var_1_7 >= var_1_63) ? (var_1_29 ? (var_1_25 ? (var_1_44 == ((double) ((((var_1_32) > (49.4)) ? (var_1_32) : (49.4))))) : (var_1_44 == ((double) (var_1_36 - (var_1_45 + var_1_46))))) : (var_1_44 == ((double) ((((var_1_45) > (((((var_1_37) < ((var_1_46 + var_1_47))) ? (var_1_37) : ((var_1_46 + var_1_47)))))) ? (var_1_45) : (((((var_1_37) < ((var_1_46 + var_1_47))) ? (var_1_37) : ((var_1_46 + var_1_47)))))))))) : (var_1_44 == ((double) (var_1_47 + (((((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) < 0 ) ? -((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45))) : ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45)))))))))) && ((var_1_25 || (var_1_51 <= var_1_13)) ? (var_1_48 == ((signed char) var_1_5)) : ((var_1_15 >= (var_1_16 + var_1_51)) ? (var_1_25 ? (var_1_48 == ((signed char) (var_1_5 + ((((var_1_27) > ((var_1_49 - var_1_50))) ? (var_1_27) : ((var_1_49 - var_1_50))))))) : (var_1_48 == ((signed char) (var_1_49 - var_1_4)))) : (var_1_48 == ((signed char) var_1_30))))) && (((var_1_4 >> var_1_53) < var_1_63) ? (var_1_51 == ((unsigned long int) var_1_13)) : ((((((var_1_60) > (var_1_40)) ? (var_1_60) : (var_1_40))) >= var_1_63) ? (var_1_51 == ((unsigned long int) ((((1u) > (var_1_49)) ? (1u) : (var_1_49))))) : (var_1_51 == ((unsigned long int) (((((((((2200038692u) < 0 ) ? -(2200038692u) : (2200038692u))) - var_1_60)) < ((var_1_40 - var_1_23))) ? ((((((2200038692u) < 0 ) ? -(2200038692u) : (2200038692u))) - var_1_60)) : ((var_1_40 - var_1_23))))))))) && ((! (var_1_63 >= var_1_40)) ? (var_1_54 == ((double) var_1_37)) : 1)) && ((var_1_45 > var_1_37) ? (var_1_55 == ((float) (var_1_37 - var_1_46))) : 1)) && ((var_1_16 < (var_1_63 / var_1_30)) ? (var_1_56 == ((unsigned long int) (var_1_49 + var_1_4))) : ((var_1_54 < var_1_31) ? (((- (var_1_55 + var_1_54)) >= (128.25 + var_1_36)) ? (var_1_56 == ((unsigned long int) (var_1_19 + var_1_15))) : (var_1_56 == ((unsigned long int) (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - ((var_1_23 + var_1_57) - (var_1_58 - var_1_15)))))) : (var_1_56 == ((unsigned long int) (var_1_40 - ((var_1_59 + var_1_16) + var_1_27))))))) && (var_1_43 ? (var_1_60 == ((signed long int) (var_1_23 - var_1_49))) : (var_1_60 == ((signed long int) ((var_1_57 + var_1_61) - (var_1_62 - var_1_27)))))) && (((var_1_46 - var_1_35) != (var_1_36 - var_1_45)) ? (var_1_29 ? (var_1_63 == ((unsigned long int) (var_1_40 - ((((var_1_49) > (var_1_23)) ? (var_1_49) : (var_1_23)))))) : 1) : (var_1_43 ? (var_1_63 == ((unsigned long int) last_1_var_1_64)) : (var_1_63 == ((unsigned long int) (var_1_40 - ((var_1_57 - var_1_30) + var_1_16))))))) && (((var_1_63 + -5) <= var_1_63) ? ((var_1_25 || (var_1_14 || var_1_43)) ? (var_1_64 == ((signed short int) var_1_30)) : (var_1_64 == ((signed short int) var_1_42))) : (var_1_64 == ((signed short int) var_1_17)))) && (var_1_65 == ((signed short int) var_1_17))) && (((var_1_67 - var_1_49) >= var_1_30) ? (var_1_66 == ((signed long int) ((var_1_65 + var_1_63) + ((((var_1_49) > (10)) ? (var_1_49) : (10)))))) : ((var_1_55 > 500.5f) ? (var_1_66 == ((signed long int) var_1_19)) : (var_1_66 == ((signed long int) var_1_13))))
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
