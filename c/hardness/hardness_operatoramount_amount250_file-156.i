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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Amount250.c", 13, "reach_error"); }
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
float var_1_3 = 9.75;
float var_1_4 = 0.8;
float var_1_7 = 1.25;
float var_1_8 = 0.0;
float var_1_9 = 4.25;
signed char var_1_12 = 4;
signed char var_1_13 = 100;
signed char var_1_14 = 8;
signed char var_1_15 = 10;
signed long int var_1_16 = 16;
unsigned short int var_1_17 = 1;
unsigned short int var_1_18 = 0;
signed long int var_1_19 = 1799820783;
unsigned char var_1_20 = 16;
unsigned char var_1_21 = 128;
double var_1_22 = 4.4;
double var_1_23 = 4.875;
unsigned char var_1_24 = 2;
unsigned char var_1_25 = 1;
signed short int var_1_26 = 256;
signed short int var_1_27 = -25;
unsigned short int var_1_28 = 5;
unsigned char var_1_29 = 1;
unsigned short int var_1_30 = 28921;
float var_1_31 = 7.25;
float var_1_32 = 1.25;
float var_1_33 = 0.0;
float var_1_34 = 99.75;
float var_1_35 = 64.8;
signed long int var_1_36 = -16;
unsigned long int var_1_37 = 3505173206;
signed long int var_1_38 = -64;
signed long int var_1_39 = -10;
unsigned long int var_1_40 = 10;
signed char var_1_41 = 50;
unsigned char var_1_43 = 0;
signed short int var_1_44 = 4;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
signed long int var_1_47 = -256;
unsigned short int var_1_48 = 1;
unsigned short int var_1_49 = 45285;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
signed char var_1_53 = 25;
float var_1_54 = 0.5;
signed long int var_1_55 = 0;
signed char var_1_56 = 4;
unsigned short int var_1_57 = 8;
double var_1_58 = 3.529;
float var_1_59 = 7.25;
float var_1_60 = 256.8;
unsigned char var_1_61 = 1;
unsigned short int var_1_62 = 64;
unsigned char var_1_63 = 4;
signed long int var_1_64 = 10;
unsigned char last_1_var_1_20 = 16;
unsigned short int last_1_var_1_28 = 5;
unsigned long int last_1_var_1_40 = 10;
signed char last_1_var_1_41 = 50;
unsigned char last_1_var_1_43 = 0;
unsigned short int last_1_var_1_48 = 1;
unsigned char last_1_var_1_50 = 0;
signed long int last_1_var_1_55 = 0;
signed long int last_1_var_1_64 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_21 > (var_1_18 >> var_1_44)) {
  if ((last_1_var_1_64 + var_1_19) >= (last_1_var_1_55 ^ var_1_25)) {
   var_1_43 = (last_1_var_1_50 && var_1_45);
  } else {
   var_1_43 = (last_1_var_1_50 || var_1_46);
  }
 } else {
  var_1_43 = (var_1_46 && var_1_45);
 }
 unsigned char stepLocal_16 = 256.4 >= var_1_9;
 signed long int stepLocal_15 = - last_1_var_1_48;
 if (last_1_var_1_50 || stepLocal_16) {
  if (stepLocal_15 > 10) {
   var_1_59 = 99.6f;
  } else {
   var_1_59 = (var_1_34 + var_1_35);
  }
 } else {
  if (var_1_46) {
   var_1_59 = (var_1_34 - var_1_60);
  }
 }
 unsigned char stepLocal_19 = var_1_45;
 unsigned char stepLocal_18 = last_1_var_1_48 == var_1_15;
 if ((! (last_1_var_1_55 >= last_1_var_1_41)) || stepLocal_19) {
  if (((64 * var_1_49) == last_1_var_1_40) && stepLocal_18) {
   var_1_64 = var_1_18;
  } else {
   var_1_64 = last_1_var_1_64;
  }
 }
 signed long int stepLocal_17 = last_1_var_1_20;
 if ((var_1_21 - var_1_63) > stepLocal_17) {
  if (last_1_var_1_43) {
   var_1_62 = var_1_21;
  } else {
   var_1_62 = last_1_var_1_28;
  }
 }
 signed long int stepLocal_7 = var_1_62 + var_1_13;
 unsigned long int stepLocal_6 = var_1_37 - 4u;
 if (stepLocal_7 >= var_1_62) {
  var_1_36 = (var_1_18 - var_1_62);
 } else {
  if (5u > stepLocal_6) {
   var_1_36 = var_1_38;
  } else {
   var_1_36 = 256;
  }
 }
 var_1_39 = (var_1_25 + var_1_36);
 var_1_20 = (((((var_1_21 - (var_1_14 + 8))) < (var_1_17)) ? ((var_1_21 - (var_1_14 + 8))) : (var_1_17)));
 var_1_22 = (var_1_23 + 9.6);
 if ((1u * var_1_13) < (var_1_15 + var_1_17)) {
  var_1_31 = ((((var_1_23) < ((var_1_9 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) ? (var_1_23) : ((var_1_9 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))));
 } else {
  var_1_31 = ((((((var_1_33 - var_1_34) - var_1_9)) < ((var_1_23 + var_1_35))) ? (((var_1_33 - var_1_34) - var_1_9)) : ((var_1_23 + var_1_35))));
 }
 if (var_1_7 < var_1_22) {
  var_1_50 = var_1_45;
 } else {
  if ((var_1_23 * (10.8 / var_1_4)) > var_1_9) {
   var_1_50 = (var_1_45 || var_1_51);
  } else {
   var_1_50 = ((var_1_45 || var_1_51) || var_1_52);
  }
 }
 var_1_53 = (((((((var_1_44) > (4)) ? (var_1_44) : (4))) < 0 ) ? -((((var_1_44) > (4)) ? (var_1_44) : (4))) : ((((var_1_44) > (4)) ? (var_1_44) : (4)))));
 if ((- (- 0.75)) > (var_1_23 / var_1_8)) {
  var_1_56 = ((var_1_18 + 16) + var_1_44);
 } else {
  var_1_56 = ((((var_1_13) < ((var_1_44 - var_1_25))) ? (var_1_13) : ((var_1_44 - var_1_25))));
 }
 if (! (var_1_13 > var_1_49)) {
  var_1_61 = var_1_46;
 }
 unsigned short int stepLocal_5 = var_1_62;
 unsigned char stepLocal_4 = var_1_50;
 if (stepLocal_4 || var_1_61) {
  var_1_28 = (var_1_13 + var_1_17);
 } else {
  if (stepLocal_5 > var_1_53) {
   var_1_28 = (var_1_62 + (var_1_30 - var_1_18));
  } else {
   var_1_28 = (var_1_14 + var_1_13);
  }
 }
 signed long int stepLocal_8 = var_1_14 * (~ var_1_30);
 if (stepLocal_8 > var_1_28) {
  var_1_40 = ((var_1_19 - var_1_62) + var_1_13);
 } else {
  var_1_40 = var_1_28;
 }
 if (var_1_13 < ((((var_1_40) < (var_1_39)) ? (var_1_40) : (var_1_39)))) {
  var_1_54 = ((((var_1_9) > (((((((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) < (var_1_33)) ? (((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) : (var_1_33))))) ? (var_1_9) : (((((((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) < (var_1_33)) ? (((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) : (var_1_33))))));
 } else {
  var_1_54 = (var_1_34 + var_1_35);
 }
 if ((var_1_22 + var_1_8) <= ((((var_1_7) > (var_1_59)) ? (var_1_7) : (var_1_59)))) {
  var_1_26 = var_1_27;
 } else {
  var_1_26 = (var_1_40 + var_1_20);
 }
 unsigned char stepLocal_12 = var_1_43;
 signed char stepLocal_11 = var_1_14;
 if (stepLocal_11 == var_1_27) {
  if (var_1_54 >= var_1_22) {
   var_1_47 = (var_1_25 - var_1_18);
  } else {
   if (var_1_29 || stepLocal_12) {
    var_1_47 = var_1_62;
   }
  }
 }
 if (var_1_46) {
  var_1_55 = ((var_1_64 + (var_1_47 + last_1_var_1_55)) + (var_1_44 + var_1_17));
 } else {
  var_1_55 = ((((-64) < ((var_1_27 + var_1_47))) ? (-64) : ((var_1_27 + var_1_47))));
 }
 unsigned char stepLocal_0 = ! (var_1_9 == var_1_59);
 if ((var_1_54 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) >= (var_1_31 * var_1_54)) {
  if (var_1_4 > (var_1_7 - (var_1_8 - var_1_9))) {
   if (stepLocal_0 || var_1_43) {
    var_1_1 = (var_1_12 - (var_1_13 - (var_1_14 + var_1_15)));
   } else {
    var_1_1 = var_1_15;
   }
  } else {
   var_1_1 = var_1_14;
  }
 } else {
  var_1_1 = -64;
 }
 signed long int stepLocal_2 = ((((var_1_13) < (50)) ? (var_1_13) : (50))) << (var_1_17 + var_1_18);
 signed char stepLocal_1 = var_1_13;
 if (var_1_59 < var_1_7) {
  if (var_1_61) {
   var_1_16 = (var_1_15 + ((((var_1_14) > (var_1_1)) ? (var_1_14) : (var_1_1))));
  } else {
   var_1_16 = ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)));
  }
 } else {
  if (var_1_15 != stepLocal_1) {
   if (var_1_22 > 7.5f) {
    var_1_16 = (var_1_12 + (var_1_13 + (var_1_14 - var_1_15)));
   }
  } else {
   if (stepLocal_2 >= ((var_1_19 - var_1_15) - var_1_14)) {
    var_1_16 = var_1_15;
   }
  }
 }
 unsigned long int stepLocal_14 = var_1_14 * (~ var_1_40);
 if (256.6 != (((((- var_1_22)) < ((var_1_33 / var_1_58))) ? ((- var_1_22)) : ((var_1_33 / var_1_58))))) {
  if (stepLocal_14 <= var_1_16) {
   var_1_57 = (((((var_1_49 - var_1_30)) > (var_1_64)) ? ((var_1_49 - var_1_30)) : (var_1_64)));
  } else {
   var_1_57 = ((((((var_1_30 - var_1_40)) < (var_1_44)) ? ((var_1_30 - var_1_40)) : (var_1_44))) + 16);
  }
 }
 signed long int stepLocal_10 = -500;
 unsigned long int stepLocal_9 = ((((var_1_18) > (var_1_47)) ? (var_1_18) : (var_1_47))) / ((((var_1_19) > (var_1_37)) ? (var_1_19) : (var_1_37)));
 if (2u > stepLocal_9) {
  if (stepLocal_10 > var_1_14) {
   if (var_1_50) {
    var_1_41 = var_1_14;
   } else {
    var_1_41 = var_1_25;
   }
  }
 } else {
  var_1_41 = var_1_12;
 }
 signed long int stepLocal_3 = var_1_17 + -2;
 if (var_1_3 < ((var_1_23 / var_1_4) + var_1_22)) {
  if (var_1_47 < stepLocal_3) {
   var_1_24 = var_1_21;
  } else {
   if (var_1_3 <= (var_1_22 * var_1_54)) {
    var_1_24 = (var_1_17 + var_1_18);
   }
  }
 } else {
  var_1_24 = ((var_1_17 + var_1_18) + (var_1_14 + 8));
 }
 signed long int stepLocal_13 = var_1_57 + var_1_25;
 if ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) >> var_1_44) >= stepLocal_13) {
  var_1_48 = (var_1_49 - var_1_44);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 4611686.018427388000e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427388000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 31);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 13);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 12);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32767);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16383);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967295);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -2147483647);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 15);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 32767);
 assume_abort_if_not(var_1_49 <= 65534);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= -922337.2036854776000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 assume_abort_if_not(var_1_58 != 0.0F);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((((var_1_54 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) >= (var_1_31 * var_1_54)) ? ((var_1_4 > (var_1_7 - (var_1_8 - var_1_9))) ? (((! (var_1_9 == var_1_59)) || var_1_43) ? (var_1_1 == ((signed char) (var_1_12 - (var_1_13 - (var_1_14 + var_1_15))))) : (var_1_1 == ((signed char) var_1_15))) : (var_1_1 == ((signed char) var_1_14))) : (var_1_1 == ((signed char) -64))) && ((var_1_59 < var_1_7) ? (var_1_61 ? (var_1_16 == ((signed long int) (var_1_15 + ((((var_1_14) > (var_1_1)) ? (var_1_14) : (var_1_1)))))) : (var_1_16 == ((signed long int) ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))))) : ((var_1_15 != var_1_13) ? ((var_1_22 > 7.5f) ? (var_1_16 == ((signed long int) (var_1_12 + (var_1_13 + (var_1_14 - var_1_15))))) : 1) : (((((((var_1_13) < (50)) ? (var_1_13) : (50))) << (var_1_17 + var_1_18)) >= ((var_1_19 - var_1_15) - var_1_14)) ? (var_1_16 == ((signed long int) var_1_15)) : 1)))) && (var_1_20 == ((unsigned char) (((((var_1_21 - (var_1_14 + 8))) < (var_1_17)) ? ((var_1_21 - (var_1_14 + 8))) : (var_1_17)))))) && (var_1_22 == ((double) (var_1_23 + 9.6)))) && ((var_1_3 < ((var_1_23 / var_1_4) + var_1_22)) ? ((var_1_47 < (var_1_17 + -2)) ? (var_1_24 == ((unsigned char) var_1_21)) : ((var_1_3 <= (var_1_22 * var_1_54)) ? (var_1_24 == ((unsigned char) (var_1_17 + var_1_18))) : 1)) : (var_1_24 == ((unsigned char) ((var_1_17 + var_1_18) + (var_1_14 + 8)))))) && (((var_1_22 + var_1_8) <= ((((var_1_7) > (var_1_59)) ? (var_1_7) : (var_1_59)))) ? (var_1_26 == ((signed short int) var_1_27)) : (var_1_26 == ((signed short int) (var_1_40 + var_1_20))))) && ((var_1_50 || var_1_61) ? (var_1_28 == ((unsigned short int) (var_1_13 + var_1_17))) : ((var_1_62 > var_1_53) ? (var_1_28 == ((unsigned short int) (var_1_62 + (var_1_30 - var_1_18)))) : (var_1_28 == ((unsigned short int) (var_1_14 + var_1_13)))))) && (((1u * var_1_13) < (var_1_15 + var_1_17)) ? (var_1_31 == ((float) ((((var_1_23) < ((var_1_9 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) ? (var_1_23) : ((var_1_9 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))))) : (var_1_31 == ((float) ((((((var_1_33 - var_1_34) - var_1_9)) < ((var_1_23 + var_1_35))) ? (((var_1_33 - var_1_34) - var_1_9)) : ((var_1_23 + var_1_35)))))))) && (((var_1_62 + var_1_13) >= var_1_62) ? (var_1_36 == ((signed long int) (var_1_18 - var_1_62))) : ((5u > (var_1_37 - 4u)) ? (var_1_36 == ((signed long int) var_1_38)) : (var_1_36 == ((signed long int) 256))))) && (var_1_39 == ((signed long int) (var_1_25 + var_1_36)))) && (((var_1_14 * (~ var_1_30)) > var_1_28) ? (var_1_40 == ((unsigned long int) ((var_1_19 - var_1_62) + var_1_13))) : (var_1_40 == ((unsigned long int) var_1_28)))) && ((2u > (((((var_1_18) > (var_1_47)) ? (var_1_18) : (var_1_47))) / ((((var_1_19) > (var_1_37)) ? (var_1_19) : (var_1_37))))) ? ((-500 > var_1_14) ? (var_1_50 ? (var_1_41 == ((signed char) var_1_14)) : (var_1_41 == ((signed char) var_1_25))) : 1) : (var_1_41 == ((signed char) var_1_12)))) && ((var_1_21 > (var_1_18 >> var_1_44)) ? (((last_1_var_1_64 + var_1_19) >= (last_1_var_1_55 ^ var_1_25)) ? (var_1_43 == ((unsigned char) (last_1_var_1_50 && var_1_45))) : (var_1_43 == ((unsigned char) (last_1_var_1_50 || var_1_46)))) : (var_1_43 == ((unsigned char) (var_1_46 && var_1_45))))) && ((var_1_14 == var_1_27) ? ((var_1_54 >= var_1_22) ? (var_1_47 == ((signed long int) (var_1_25 - var_1_18))) : ((var_1_29 || var_1_43) ? (var_1_47 == ((signed long int) var_1_62)) : 1)) : 1)) && (((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) >> var_1_44) >= (var_1_57 + var_1_25)) ? (var_1_48 == ((unsigned short int) (var_1_49 - var_1_44))) : 1)) && ((var_1_7 < var_1_22) ? (var_1_50 == ((unsigned char) var_1_45)) : (((var_1_23 * (10.8 / var_1_4)) > var_1_9) ? (var_1_50 == ((unsigned char) (var_1_45 || var_1_51))) : (var_1_50 == ((unsigned char) ((var_1_45 || var_1_51) || var_1_52)))))) && (var_1_53 == ((signed char) (((((((var_1_44) > (4)) ? (var_1_44) : (4))) < 0 ) ? -((((var_1_44) > (4)) ? (var_1_44) : (4))) : ((((var_1_44) > (4)) ? (var_1_44) : (4)))))))) && ((var_1_13 < ((((var_1_40) < (var_1_39)) ? (var_1_40) : (var_1_39)))) ? (var_1_54 == ((float) ((((var_1_9) > (((((((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) < (var_1_33)) ? (((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) : (var_1_33))))) ? (var_1_9) : (((((((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) < (var_1_33)) ? (((((var_1_23) > (64.25f)) ? (var_1_23) : (64.25f)))) : (var_1_33)))))))) : (var_1_54 == ((float) (var_1_34 + var_1_35))))) && (var_1_46 ? (var_1_55 == ((signed long int) ((var_1_64 + (var_1_47 + last_1_var_1_55)) + (var_1_44 + var_1_17)))) : (var_1_55 == ((signed long int) ((((-64) < ((var_1_27 + var_1_47))) ? (-64) : ((var_1_27 + var_1_47)))))))) && (((- (- 0.75)) > (var_1_23 / var_1_8)) ? (var_1_56 == ((signed char) ((var_1_18 + 16) + var_1_44))) : (var_1_56 == ((signed char) ((((var_1_13) < ((var_1_44 - var_1_25))) ? (var_1_13) : ((var_1_44 - var_1_25)))))))) && ((256.6 != (((((- var_1_22)) < ((var_1_33 / var_1_58))) ? ((- var_1_22)) : ((var_1_33 / var_1_58))))) ? (((var_1_14 * (~ var_1_40)) <= var_1_16) ? (var_1_57 == ((unsigned short int) (((((var_1_49 - var_1_30)) > (var_1_64)) ? ((var_1_49 - var_1_30)) : (var_1_64))))) : (var_1_57 == ((unsigned short int) ((((((var_1_30 - var_1_40)) < (var_1_44)) ? ((var_1_30 - var_1_40)) : (var_1_44))) + 16)))) : 1)) && ((last_1_var_1_50 || (256.4 >= var_1_9)) ? (((- last_1_var_1_48) > 10) ? (var_1_59 == ((float) 99.6f)) : (var_1_59 == ((float) (var_1_34 + var_1_35)))) : (var_1_46 ? (var_1_59 == ((float) (var_1_34 - var_1_60))) : 1))) && ((! (var_1_13 > var_1_49)) ? (var_1_61 == ((unsigned char) var_1_46)) : 1)) && (((var_1_21 - var_1_63) > last_1_var_1_20) ? (last_1_var_1_43 ? (var_1_62 == ((unsigned short int) var_1_21)) : (var_1_62 == ((unsigned short int) last_1_var_1_28))) : 1)) && (((! (last_1_var_1_55 >= last_1_var_1_41)) || var_1_45) ? ((((64 * var_1_49) == last_1_var_1_40) && (last_1_var_1_48 == var_1_15)) ? (var_1_64 == ((signed long int) var_1_18)) : (var_1_64 == ((signed long int) last_1_var_1_64))) : 1)
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
