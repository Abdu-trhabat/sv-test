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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 500;
float var_1_4 = 0.5;
float var_1_5 = 256.875;
unsigned long int var_1_6 = 50;
unsigned long int var_1_7 = 1908897212;
unsigned long int var_1_8 = 8;
unsigned long int var_1_9 = 16;
unsigned long int var_1_10 = 128;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 5;
unsigned long int var_1_14 = 10;
unsigned long int var_1_15 = 5;
unsigned long int var_1_18 = 2474382353;
unsigned long int var_1_19 = 3385929947;
unsigned long int var_1_20 = 25;
signed long int var_1_21 = 25;
signed long int var_1_22 = 25;
signed long int var_1_23 = 1722968938;
unsigned long int var_1_24 = 2;
signed short int var_1_25 = -25;
unsigned long int var_1_26 = 100;
unsigned long int var_1_27 = 1122883741;
double var_1_28 = 15.85;
double var_1_29 = 2.3;
double var_1_30 = 128.25;
double var_1_31 = 2.6;
double var_1_32 = 9.8;
double var_1_33 = 0.0;
double var_1_34 = 0.0;
double var_1_35 = 63.6;
signed char var_1_36 = 64;
signed char var_1_37 = 8;
signed char var_1_38 = -5;
signed char var_1_39 = 2;
signed char var_1_40 = -1;
signed char var_1_41 = -1;
unsigned short int var_1_42 = 25;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 1;
signed long int var_1_46 = -32;
signed long int var_1_48 = 1192419743;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
float var_1_53 = 256.5;
float var_1_54 = 0.0;
float var_1_55 = 16.8;
signed char var_1_56 = -32;
signed char var_1_57 = 100;
signed char var_1_58 = 25;
signed char var_1_59 = 1;
signed char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
signed char var_1_63 = 5;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
double var_1_67 = 1000.6;
double var_1_69 = 10.966;
double var_1_70 = 7.5;
unsigned long int var_1_71 = 10;
unsigned char var_1_73 = 1;
unsigned long int last_1_var_1_1 = 500;
unsigned long int last_1_var_1_14 = 10;
unsigned long int last_1_var_1_24 = 2;
signed char last_1_var_1_41 = -1;
signed long int last_1_var_1_46 = -32;
unsigned char last_1_var_1_49 = 0;
unsigned char last_1_var_1_73 = 1;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_8 = 5u;
 signed long int stepLocal_7 = var_1_22;
 if (var_1_18 <= stepLocal_8) {
  if (last_1_var_1_73) {
   var_1_62 = ((var_1_38 >= var_1_39) || (var_1_50 || var_1_52));
  }
 } else {
  if (((var_1_59 >> var_1_63) * var_1_39) <= stepLocal_7) {
   if (! last_1_var_1_49) {
    var_1_62 = (! var_1_52);
   } else {
    var_1_62 = ((var_1_64 || var_1_65) || var_1_66);
   }
  } else {
   var_1_62 = var_1_50;
  }
 }
 unsigned char stepLocal_1 = var_1_62;
 unsigned long int stepLocal_0 = var_1_7;
 if (stepLocal_0 > (var_1_20 / var_1_12)) {
  if (stepLocal_1 || (var_1_4 == var_1_5)) {
   var_1_26 = ((var_1_7 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) - var_1_22);
  }
 }
 if (last_1_var_1_14 >= -5) {
  var_1_67 = var_1_69;
 } else {
  if (last_1_var_1_24 <= last_1_var_1_1) {
   if ((var_1_35 - (var_1_32 + var_1_55)) <= var_1_31) {
    var_1_67 = (((var_1_54 - var_1_55) - var_1_32) + ((((((((var_1_31) > (var_1_30)) ? (var_1_31) : (var_1_30)))) < (var_1_70)) ? (((((var_1_31) > (var_1_30)) ? (var_1_31) : (var_1_30)))) : (var_1_70))));
   } else {
    var_1_67 = (((((var_1_55 + ((((var_1_30) > (var_1_70)) ? (var_1_30) : (var_1_70))))) > (var_1_33)) ? ((var_1_55 + ((((var_1_30) > (var_1_70)) ? (var_1_30) : (var_1_70))))) : (var_1_33)));
   }
  }
 }
 unsigned char stepLocal_6 = var_1_45;
 signed long int stepLocal_5 = (((var_1_38) < ((last_1_var_1_46 | var_1_12))) ? (var_1_38) : ((last_1_var_1_46 | var_1_12)));
 unsigned long int stepLocal_4 = var_1_48 * var_1_8;
 unsigned long int stepLocal_3 = var_1_45 - var_1_10;
 if (last_1_var_1_41 == stepLocal_6) {
  if (256 < stepLocal_3) {
   if (stepLocal_4 > var_1_9) {
    var_1_49 = (var_1_50 && var_1_51);
   }
  } else {
   var_1_49 = (! 0);
  }
 } else {
  if (stepLocal_5 < var_1_44) {
   var_1_49 = (var_1_50 && ((last_1_var_1_41 > var_1_25) || (var_1_51 && var_1_52)));
  } else {
   var_1_49 = 0;
  }
 }
 var_1_14 = (var_1_8 + var_1_12);
 if (var_1_12 >= 5) {
  var_1_43 = (var_1_12 - ((var_1_44 - var_1_42) + var_1_45));
 } else {
  if (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) <= (((((- var_1_44)) < (var_1_42)) ? ((- var_1_44)) : (var_1_42)))) {
   var_1_43 = var_1_12;
  }
 }
 if (var_1_51) {
  var_1_53 = (((((var_1_31 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) < (9.9999999975E8f)) ? ((var_1_31 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (9.9999999975E8f)));
 } else {
  var_1_53 = ((var_1_31 - (var_1_54 - var_1_55)) + (0.8f - var_1_32));
 }
 var_1_61 = var_1_52;
 unsigned long int stepLocal_11 = (var_1_44 << var_1_25) | var_1_26;
 if (stepLocal_11 <= (((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23))) * var_1_57)) {
  var_1_73 = ((var_1_49 && var_1_65) || var_1_66);
 } else {
  var_1_73 = var_1_50;
 }
 unsigned long int stepLocal_2 = var_1_19 - var_1_27;
 if ((var_1_67 * 1.42f) != var_1_67) {
  if (var_1_61) {
   var_1_28 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  }
 } else {
  if (stepLocal_2 >= (16u / var_1_18)) {
   var_1_28 = (var_1_30 + (var_1_31 - var_1_32));
  } else {
   var_1_28 = ((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))) - ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))) - var_1_35);
  }
 }
 if (var_1_67 > (var_1_53 * (var_1_67 * var_1_28))) {
  var_1_1 = var_1_6;
 } else {
  var_1_1 = ((var_1_7 - (var_1_8 + 32u)) + ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))));
 }
 if (var_1_28 < ((((var_1_53) > (var_1_67)) ? (var_1_53) : (var_1_67)))) {
  var_1_11 = (((((128) > (var_1_12)) ? (128) : (var_1_12))) - var_1_13);
 }
 if (((1 - var_1_11) / ((((var_1_12) > (var_1_25)) ? (var_1_12) : (var_1_25)))) == var_1_9) {
  var_1_24 = ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)));
 } else {
  var_1_24 = (((((var_1_22 + var_1_8)) < ((var_1_7 + var_1_9))) ? ((var_1_22 + var_1_8)) : ((var_1_7 + var_1_9))));
 }
 if (var_1_49 && var_1_62) {
  var_1_21 = ((((((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13)))) < (var_1_11)) ? (((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13)))) : (var_1_11)));
 } else {
  var_1_21 = ((var_1_23 - (var_1_12 + var_1_13)) - (var_1_8 + (5 + var_1_11)));
 }
 if ((((((var_1_11 + var_1_19)) < (var_1_22)) ? ((var_1_11 + var_1_19)) : (var_1_22))) == (((((var_1_18 / var_1_42)) < (var_1_44)) ? ((var_1_18 / var_1_42)) : (var_1_44)))) {
  if (var_1_73) {
   var_1_46 = var_1_12;
  } else {
   if (var_1_73 || var_1_49) {
    var_1_46 = ((((((((var_1_40) < (var_1_37)) ? (var_1_40) : (var_1_37)))) < (((var_1_48 - var_1_44) - var_1_23))) ? (((((var_1_40) < (var_1_37)) ? (var_1_40) : (var_1_37)))) : (((var_1_48 - var_1_44) - var_1_23))));
   } else {
    if (var_1_24 > var_1_45) {
     var_1_46 = (var_1_13 + var_1_37);
    }
   }
  }
 } else {
  var_1_46 = var_1_11;
 }
 signed long int stepLocal_10 = var_1_21;
 unsigned long int stepLocal_9 = - var_1_14;
 if (stepLocal_10 >= ((((var_1_58) < (var_1_27)) ? (var_1_58) : (var_1_27)))) {
  if (var_1_7 > stepLocal_9) {
   var_1_71 = var_1_58;
  } else {
   var_1_71 = var_1_57;
  }
 }
 if (var_1_73 || var_1_61) {
  if (var_1_73) {
   if ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - 10u) < var_1_7) {
    var_1_15 = ((((((((var_1_20) < (5u)) ? (var_1_20) : (5u)))) > (var_1_8)) ? (((((var_1_20) < (5u)) ? (var_1_20) : (5u)))) : (var_1_8)));
   } else {
    var_1_15 = (var_1_12 + (var_1_1 + var_1_13));
   }
  }
 } else {
  var_1_15 = (((((((((var_1_12 + var_1_10)) > (var_1_9)) ? ((var_1_12 + var_1_10)) : (var_1_9)))) > (var_1_7)) ? ((((((var_1_12 + var_1_10)) > (var_1_9)) ? ((var_1_12 + var_1_10)) : (var_1_9)))) : (var_1_7)));
 }
 if (var_1_24 != (2343164411u - var_1_22)) {
  if (var_1_7 <= var_1_46) {
   var_1_36 = var_1_37;
  }
 } else {
  if (256 >= var_1_8) {
   var_1_36 = ((((64) < 0 ) ? -(64) : (64)));
  } else {
   var_1_36 = ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) + var_1_39) + var_1_40);
  }
 }
 if (var_1_24 >= var_1_15) {
  if ((! var_1_62) && var_1_50) {
   if (var_1_62 && var_1_52) {
    var_1_56 = ((((((var_1_57 - var_1_45)) > (2)) ? ((var_1_57 - var_1_45)) : (2))) - (((((((var_1_44) > (var_1_39)) ? (var_1_44) : (var_1_39))) < 0 ) ? -((((var_1_44) > (var_1_39)) ? (var_1_44) : (var_1_39))) : ((((var_1_44) > (var_1_39)) ? (var_1_44) : (var_1_39))))));
   } else {
    var_1_56 = ((var_1_42 + (var_1_58 - var_1_59)) + (var_1_39 + var_1_60));
   }
  } else {
   if (var_1_1 >= var_1_59) {
    var_1_56 = (var_1_44 - 32);
   }
  }
 } else {
  var_1_56 = var_1_44;
 }
 if (! var_1_62) {
  if (var_1_8 == ((var_1_71 >> var_1_42) % var_1_23)) {
   var_1_41 = ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741823);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 536870912);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 4294967294);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 1073741822);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32768);
 assume_abort_if_not(var_1_25 <= 32767);
 assume_abort_if_not(var_1_25 != 0);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 1073741824);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -32);
 assume_abort_if_not(var_1_38 <= 32);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -31);
 assume_abort_if_not(var_1_39 <= 31);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 31);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 32);
 assume_abort_if_not(var_1_44 <= 64);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_48 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_48 >= 1073741822);
 assume_abort_if_not(var_1_48 <= 2147483646);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 2305843.009213691400e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 62);
 assume_abort_if_not(var_1_57 <= 126);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 31);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 31);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -31);
 assume_abort_if_not(var_1_60 <= 31);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 1);
 assume_abort_if_not(var_1_63 <= 6);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 0);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 0);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 0);
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= -922337.2036854766000e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854766000e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= -461168.6018427383000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_73 = var_1_73;
}
int property(void) {
 return ((((((((((((((((((((var_1_67 > (var_1_53 * (var_1_67 * var_1_28))) ? (var_1_1 == ((unsigned long int) var_1_6)) : (var_1_1 == ((unsigned long int) ((var_1_7 - (var_1_8 + 32u)) + ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))))) && ((var_1_28 < ((((var_1_53) > (var_1_67)) ? (var_1_53) : (var_1_67)))) ? (var_1_11 == ((unsigned char) (((((128) > (var_1_12)) ? (128) : (var_1_12))) - var_1_13))) : 1)) && (var_1_14 == ((unsigned long int) (var_1_8 + var_1_12)))) && ((var_1_73 || var_1_61) ? (var_1_73 ? (((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - 10u) < var_1_7) ? (var_1_15 == ((unsigned long int) ((((((((var_1_20) < (5u)) ? (var_1_20) : (5u)))) > (var_1_8)) ? (((((var_1_20) < (5u)) ? (var_1_20) : (5u)))) : (var_1_8))))) : (var_1_15 == ((unsigned long int) (var_1_12 + (var_1_1 + var_1_13))))) : 1) : (var_1_15 == ((unsigned long int) (((((((((var_1_12 + var_1_10)) > (var_1_9)) ? ((var_1_12 + var_1_10)) : (var_1_9)))) > (var_1_7)) ? ((((((var_1_12 + var_1_10)) > (var_1_9)) ? ((var_1_12 + var_1_10)) : (var_1_9)))) : (var_1_7))))))) && ((var_1_49 && var_1_62) ? (var_1_21 == ((signed long int) ((((((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13)))) < (var_1_11)) ? (((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13)))) : (var_1_11))))) : (var_1_21 == ((signed long int) ((var_1_23 - (var_1_12 + var_1_13)) - (var_1_8 + (5 + var_1_11))))))) && ((((1 - var_1_11) / ((((var_1_12) > (var_1_25)) ? (var_1_12) : (var_1_25)))) == var_1_9) ? (var_1_24 == ((unsigned long int) ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))))) : (var_1_24 == ((unsigned long int) (((((var_1_22 + var_1_8)) < ((var_1_7 + var_1_9))) ? ((var_1_22 + var_1_8)) : ((var_1_7 + var_1_9)))))))) && ((var_1_7 > (var_1_20 / var_1_12)) ? ((var_1_62 || (var_1_4 == var_1_5)) ? (var_1_26 == ((unsigned long int) ((var_1_7 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) - var_1_22))) : 1) : 1)) && (((var_1_67 * 1.42f) != var_1_67) ? (var_1_61 ? (var_1_28 == ((double) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) : 1) : (((var_1_19 - var_1_27) >= (16u / var_1_18)) ? (var_1_28 == ((double) (var_1_30 + (var_1_31 - var_1_32)))) : (var_1_28 == ((double) ((((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))) - ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))) - var_1_35)))))) && ((var_1_24 != (2343164411u - var_1_22)) ? ((var_1_7 <= var_1_46) ? (var_1_36 == ((signed char) var_1_37)) : 1) : ((256 >= var_1_8) ? (var_1_36 == ((signed char) ((((64) < 0 ) ? -(64) : (64))))) : (var_1_36 == ((signed char) ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) + var_1_39) + var_1_40)))))) && ((! var_1_62) ? ((var_1_8 == ((var_1_71 >> var_1_42) % var_1_23)) ? (var_1_41 == ((signed char) ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40))))) : 1) : 1)) && ((var_1_12 >= 5) ? (var_1_43 == ((unsigned char) (var_1_12 - ((var_1_44 - var_1_42) + var_1_45)))) : ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) <= (((((- var_1_44)) < (var_1_42)) ? ((- var_1_44)) : (var_1_42)))) ? (var_1_43 == ((unsigned char) var_1_12)) : 1))) && (((((((var_1_11 + var_1_19)) < (var_1_22)) ? ((var_1_11 + var_1_19)) : (var_1_22))) == (((((var_1_18 / var_1_42)) < (var_1_44)) ? ((var_1_18 / var_1_42)) : (var_1_44)))) ? (var_1_73 ? (var_1_46 == ((signed long int) var_1_12)) : ((var_1_73 || var_1_49) ? (var_1_46 == ((signed long int) ((((((((var_1_40) < (var_1_37)) ? (var_1_40) : (var_1_37)))) < (((var_1_48 - var_1_44) - var_1_23))) ? (((((var_1_40) < (var_1_37)) ? (var_1_40) : (var_1_37)))) : (((var_1_48 - var_1_44) - var_1_23)))))) : ((var_1_24 > var_1_45) ? (var_1_46 == ((signed long int) (var_1_13 + var_1_37))) : 1))) : (var_1_46 == ((signed long int) var_1_11)))) && ((last_1_var_1_41 == var_1_45) ? ((256 < (var_1_45 - var_1_10)) ? (((var_1_48 * var_1_8) > var_1_9) ? (var_1_49 == ((unsigned char) (var_1_50 && var_1_51))) : 1) : (var_1_49 == ((unsigned char) (! 0)))) : ((((((var_1_38) < ((last_1_var_1_46 | var_1_12))) ? (var_1_38) : ((last_1_var_1_46 | var_1_12)))) < var_1_44) ? (var_1_49 == ((unsigned char) (var_1_50 && ((last_1_var_1_41 > var_1_25) || (var_1_51 && var_1_52))))) : (var_1_49 == ((unsigned char) 0))))) && (var_1_51 ? (var_1_53 == ((float) (((((var_1_31 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) < (9.9999999975E8f)) ? ((var_1_31 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (9.9999999975E8f))))) : (var_1_53 == ((float) ((var_1_31 - (var_1_54 - var_1_55)) + (0.8f - var_1_32)))))) && ((var_1_24 >= var_1_15) ? (((! var_1_62) && var_1_50) ? ((var_1_62 && var_1_52) ? (var_1_56 == ((signed char) ((((((var_1_57 - var_1_45)) > (2)) ? ((var_1_57 - var_1_45)) : (2))) - (((((((var_1_44) > (var_1_39)) ? (var_1_44) : (var_1_39))) < 0 ) ? -((((var_1_44) > (var_1_39)) ? (var_1_44) : (var_1_39))) : ((((var_1_44) > (var_1_39)) ? (var_1_44) : (var_1_39)))))))) : (var_1_56 == ((signed char) ((var_1_42 + (var_1_58 - var_1_59)) + (var_1_39 + var_1_60))))) : ((var_1_1 >= var_1_59) ? (var_1_56 == ((signed char) (var_1_44 - 32))) : 1)) : (var_1_56 == ((signed char) var_1_44)))) && (var_1_61 == ((unsigned char) var_1_52))) && ((var_1_18 <= 5u) ? (last_1_var_1_73 ? (var_1_62 == ((unsigned char) ((var_1_38 >= var_1_39) || (var_1_50 || var_1_52)))) : 1) : ((((var_1_59 >> var_1_63) * var_1_39) <= var_1_22) ? ((! last_1_var_1_49) ? (var_1_62 == ((unsigned char) (! var_1_52))) : (var_1_62 == ((unsigned char) ((var_1_64 || var_1_65) || var_1_66)))) : (var_1_62 == ((unsigned char) var_1_50))))) && ((last_1_var_1_14 >= -5) ? (var_1_67 == ((double) var_1_69)) : ((last_1_var_1_24 <= last_1_var_1_1) ? (((var_1_35 - (var_1_32 + var_1_55)) <= var_1_31) ? (var_1_67 == ((double) (((var_1_54 - var_1_55) - var_1_32) + ((((((((var_1_31) > (var_1_30)) ? (var_1_31) : (var_1_30)))) < (var_1_70)) ? (((((var_1_31) > (var_1_30)) ? (var_1_31) : (var_1_30)))) : (var_1_70)))))) : (var_1_67 == ((double) (((((var_1_55 + ((((var_1_30) > (var_1_70)) ? (var_1_30) : (var_1_70))))) > (var_1_33)) ? ((var_1_55 + ((((var_1_30) > (var_1_70)) ? (var_1_30) : (var_1_70))))) : (var_1_33)))))) : 1))) && ((var_1_21 >= ((((var_1_58) < (var_1_27)) ? (var_1_58) : (var_1_27)))) ? ((var_1_7 > (- var_1_14)) ? (var_1_71 == ((unsigned long int) var_1_58)) : (var_1_71 == ((unsigned long int) var_1_57))) : 1)) && ((((var_1_44 << var_1_25) | var_1_26) <= (((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23))) * var_1_57)) ? (var_1_73 == ((unsigned char) ((var_1_49 && var_1_65) || var_1_66))) : (var_1_73 == ((unsigned char) var_1_50)))
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
