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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch28Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 64.4;
float var_1_4 = 5.5;
float var_1_5 = 64.6;
float var_1_6 = 4.4;
unsigned short int var_1_7 = 32;
signed long int var_1_9 = 5;
unsigned char var_1_10 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 5;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 100;
unsigned char var_1_16 = 16;
float var_1_17 = 255.6;
signed short int var_1_18 = 32;
signed char var_1_19 = -4;
signed char var_1_20 = 0;
signed short int var_1_21 = 5;
float var_1_22 = 127.3;
float var_1_24 = 0.0;
float var_1_25 = 0.0;
float var_1_26 = 100.375;
unsigned long int var_1_27 = 4;
signed short int var_1_28 = 2;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 1;
double var_1_32 = 16.125;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 4;
signed short int var_1_40 = -256;
signed short int var_1_41 = 2;
unsigned long int var_1_43 = 16;
signed short int var_1_44 = -16;
signed short int var_1_45 = 18917;
unsigned char var_1_46 = 1;
signed short int var_1_47 = -50;
signed short int var_1_48 = -5;
signed short int var_1_49 = 0;
signed long int var_1_50 = 200;
signed long int var_1_51 = 1806532065;
signed long int var_1_52 = 1000000000;
signed char var_1_53 = -64;
unsigned long int var_1_54 = 128;
unsigned long int var_1_55 = 64;
unsigned long int var_1_56 = 2660287038;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 32;
unsigned char var_1_59 = 128;
double var_1_60 = -0.5;
double var_1_61 = 9.75;
signed short int var_1_62 = -128;
unsigned long int var_1_63 = 2;
unsigned long int last_1_var_1_27 = 4;
signed short int last_1_var_1_40 = -256;
unsigned long int last_1_var_1_43 = 16;
unsigned long int last_1_var_1_54 = 128;
unsigned char last_1_var_1_57 = 1;
double last_1_var_1_60 = -0.5;
unsigned long int last_1_var_1_63 = 2;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_27 / var_1_30) < last_1_var_1_63) {
  if (! var_1_31) {
   if (var_1_35 >= (((((var_1_30 - var_1_15)) < (var_1_14)) ? ((var_1_30 - var_1_15)) : (var_1_14)))) {
    var_1_46 = (! var_1_12);
   } else {
    var_1_46 = (last_1_var_1_57 && var_1_12);
   }
  } else {
   if (100 < last_1_var_1_54) {
    var_1_46 = (! var_1_12);
   }
  }
 }
 if (var_1_46) {
  var_1_57 = var_1_31;
 }
 unsigned long int stepLocal_8 = last_1_var_1_43 / var_1_7;
 if (stepLocal_8 == last_1_var_1_63) {
  if ((var_1_5 * last_1_var_1_60) < var_1_6) {
   var_1_27 = var_1_7;
  } else {
   var_1_27 = var_1_14;
  }
 } else {
  var_1_27 = var_1_14;
 }
 if ((- (var_1_30 - var_1_15)) > var_1_27) {
  var_1_29 = (var_1_12 || var_1_31);
 } else {
  var_1_29 = var_1_12;
 }
 var_1_10 = (var_1_57 && var_1_12);
 if (! (((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20))) < (var_1_14 - var_1_15))) {
  var_1_21 = ((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20)));
 }
 if (var_1_12) {
  var_1_40 = (((((var_1_16 + last_1_var_1_40)) > (var_1_35)) ? ((var_1_16 + last_1_var_1_40)) : (var_1_35)));
 } else {
  if (var_1_15 >= var_1_36) {
   var_1_40 = ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)));
  } else {
   var_1_40 = var_1_36;
  }
 }
 if (var_1_31) {
  var_1_43 = var_1_37;
 }
 if ((- var_1_26) <= var_1_25) {
  var_1_50 = (var_1_39 - (var_1_51 - (var_1_38 + var_1_30)));
 } else {
  var_1_50 = (256 - (var_1_51 - (var_1_52 - var_1_43)));
 }
 if (var_1_7 < (var_1_45 + var_1_21)) {
  var_1_53 = (var_1_39 - 64);
 } else {
  var_1_53 = (var_1_39 - var_1_36);
 }
 var_1_58 = (var_1_59 - var_1_16);
 signed long int stepLocal_12 = var_1_50;
 signed long int stepLocal_11 = 10 + var_1_15;
 if (var_1_31) {
  if (stepLocal_11 < var_1_37) {
   if ((var_1_27 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) <= stepLocal_12) {
    var_1_41 = var_1_14;
   } else {
    var_1_41 = 256;
   }
  } else {
   var_1_41 = var_1_15;
  }
 }
 if ((- 25u) >= (var_1_7 & var_1_50)) {
  var_1_19 = var_1_20;
 }
 unsigned char stepLocal_10 = var_1_15;
 if ((var_1_43 / var_1_9) >= stepLocal_10) {
  var_1_34 = ((var_1_35 + ((((5) < 0 ) ? -(5) : (5)))) + var_1_16);
 } else {
  var_1_34 = (((232 - var_1_36) - var_1_37) - ((((var_1_15) < ((var_1_38 - var_1_39))) ? (var_1_15) : ((var_1_38 - var_1_39)))));
 }
 unsigned char stepLocal_13 = var_1_39;
 if (stepLocal_13 < var_1_27) {
  var_1_47 = ((((((((var_1_41) < ((var_1_35 - var_1_15))) ? (var_1_41) : ((var_1_35 - var_1_15))))) > (-100)) ? (((((var_1_41) < ((var_1_35 - var_1_15))) ? (var_1_41) : ((var_1_35 - var_1_15))))) : (-100)));
 }
 signed short int stepLocal_18 = var_1_40;
 if (! (! var_1_12)) {
  var_1_63 = ((((var_1_36) < (((((var_1_56 - var_1_39) < 0 ) ? -(var_1_56 - var_1_39) : (var_1_56 - var_1_39))))) ? (var_1_36) : (((((var_1_56 - var_1_39) < 0 ) ? -(var_1_56 - var_1_39) : (var_1_56 - var_1_39))))));
 } else {
  if (var_1_47 < stepLocal_18) {
   var_1_63 = var_1_15;
  }
 }
 signed long int stepLocal_15 = var_1_52;
 if (((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) < (var_1_47)) ? (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) : (var_1_47))) > stepLocal_15) {
  var_1_54 = ((((var_1_63) > (var_1_30)) ? (var_1_63) : (var_1_30)));
 } else {
  var_1_54 = (((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_55)) > ((var_1_56 - ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))))) ? ((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_55)) : ((var_1_56 - ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))))));
 }
 if (var_1_29) {
  var_1_62 = var_1_20;
 } else {
  var_1_62 = var_1_54;
 }
 unsigned long int stepLocal_3 = (var_1_43 + var_1_7) | var_1_54;
 unsigned long int stepLocal_2 = var_1_27;
 unsigned long int stepLocal_1 = var_1_54 / var_1_9;
 unsigned long int stepLocal_0 = var_1_43;
 if (var_1_27 <= stepLocal_0) {
  if (stepLocal_2 > var_1_43) {
   var_1_1 = (((var_1_4 + 25.2f) - var_1_5) + var_1_6);
  }
 } else {
  if (((var_1_43 * var_1_27) / var_1_7) >= stepLocal_1) {
   if (-32 > stepLocal_3) {
    var_1_1 = var_1_4;
   } else {
    var_1_1 = var_1_5;
   }
  } else {
   var_1_1 = 256.5f;
  }
 }
 if (var_1_43 <= var_1_54) {
  var_1_13 = ((((var_1_14) < (8)) ? (var_1_14) : (8)));
 } else {
  var_1_13 = ((var_1_15 - 32) + var_1_16);
 }
 unsigned long int stepLocal_5 = var_1_27;
 if (stepLocal_5 < (var_1_63 * var_1_15)) {
  var_1_18 = ((((2) > (((((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) < (var_1_43)) ? (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_43))))) ? (2) : (((((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) < (var_1_43)) ? (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_43))))));
 } else {
  var_1_18 = ((((var_1_15) < (((var_1_16 - var_1_14) + var_1_43))) ? (var_1_15) : (((var_1_16 - var_1_14) + var_1_43))));
 }
 signed long int stepLocal_7 = var_1_21 % ((((var_1_7) < (var_1_15)) ? (var_1_7) : (var_1_15)));
 signed short int stepLocal_6 = var_1_21;
 if (stepLocal_7 <= var_1_63) {
  var_1_22 = (var_1_5 - ((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))));
 } else {
  if (! (var_1_46 || var_1_29)) {
   if (var_1_25 > var_1_5) {
    var_1_22 = (var_1_25 - ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))));
   }
  } else {
   if (stepLocal_6 <= var_1_63) {
    var_1_22 = ((10.2f + var_1_4) - 5.25f);
   }
  }
 }
 if (var_1_12) {
  var_1_28 = (var_1_63 - var_1_15);
 } else {
  var_1_28 = 4;
 }
 unsigned long int stepLocal_9 = var_1_43;
 if (var_1_34 >= stepLocal_9) {
  var_1_32 = (var_1_6 + var_1_4);
 }
 if (var_1_10) {
  var_1_44 = ((var_1_45 - ((((var_1_62) < (var_1_36)) ? (var_1_62) : (var_1_36)))) - var_1_37);
 } else {
  var_1_44 = (var_1_39 - var_1_16);
 }
 unsigned short int stepLocal_14 = var_1_7;
 if (stepLocal_14 < var_1_44) {
  var_1_48 = (((((1 - ((((var_1_35) > (var_1_49)) ? (var_1_35) : (var_1_49))))) < (var_1_27)) ? ((1 - ((((var_1_35) > (var_1_49)) ? (var_1_35) : (var_1_49))))) : (var_1_27)));
 } else {
  var_1_48 = ((var_1_45 - var_1_44) - var_1_30);
 }
 unsigned char stepLocal_17 = (var_1_30 - var_1_39) < var_1_62;
 unsigned long int stepLocal_16 = var_1_55 * (- 4);
 if (var_1_31) {
  if (var_1_29) {
   var_1_60 = var_1_24;
  } else {
   if (stepLocal_17 && (var_1_15 > (var_1_38 << var_1_47))) {
    var_1_60 = ((var_1_24 - var_1_5) - var_1_61);
   } else {
    if (var_1_26 < var_1_5) {
     if (stepLocal_16 <= var_1_9) {
      var_1_60 = (var_1_25 - var_1_24);
     }
    } else {
     var_1_60 = (((((var_1_25) < (((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24))))) ? (var_1_25) : (((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)))))) - 2.5);
    }
   }
  }
 }
 unsigned long int stepLocal_4 = var_1_43 + (16 + var_1_43);
 if (var_1_6 > (- var_1_60)) {
  var_1_17 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 } else {
  if (var_1_15 <= stepLocal_4) {
   var_1_17 = var_1_5;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65535);
 assume_abort_if_not(var_1_7 != 0);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 4611686.018427383000e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 6917529.027641074000e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 127);
 assume_abort_if_not(var_1_30 <= 255);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 64);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= 16382);
 assume_abort_if_not(var_1_45 <= 32766);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 32766);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 1073741823);
 assume_abort_if_not(var_1_51 <= 2147483646);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= 536870911);
 assume_abort_if_not(var_1_52 <= 1073741823);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 2147483647);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 2147483647);
 assume_abort_if_not(var_1_56 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 127);
 assume_abort_if_not(var_1_59 <= 254);
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_27 = var_1_27;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_63 = var_1_63;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_27 <= var_1_43) ? ((var_1_27 > var_1_43) ? (var_1_1 == ((float) (((var_1_4 + 25.2f) - var_1_5) + var_1_6))) : 1) : ((((var_1_43 * var_1_27) / var_1_7) >= (var_1_54 / var_1_9)) ? ((-32 > ((var_1_43 + var_1_7) | var_1_54)) ? (var_1_1 == ((float) var_1_4)) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) 256.5f)))) && (var_1_10 == ((unsigned char) (var_1_57 && var_1_12)))) && ((var_1_43 <= var_1_54) ? (var_1_13 == ((unsigned char) ((((var_1_14) < (8)) ? (var_1_14) : (8))))) : (var_1_13 == ((unsigned char) ((var_1_15 - 32) + var_1_16))))) && ((var_1_6 > (- var_1_60)) ? (var_1_17 == ((float) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : ((var_1_15 <= (var_1_43 + (16 + var_1_43))) ? (var_1_17 == ((float) var_1_5)) : 1))) && ((var_1_27 < (var_1_63 * var_1_15)) ? (var_1_18 == ((signed short int) ((((2) > (((((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) < (var_1_43)) ? (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_43))))) ? (2) : (((((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) < (var_1_43)) ? (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_43)))))))) : (var_1_18 == ((signed short int) ((((var_1_15) < (((var_1_16 - var_1_14) + var_1_43))) ? (var_1_15) : (((var_1_16 - var_1_14) + var_1_43)))))))) && (((- 25u) >= (var_1_7 & var_1_50)) ? (var_1_19 == ((signed char) var_1_20)) : 1)) && ((! (((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20))) < (var_1_14 - var_1_15))) ? (var_1_21 == ((signed short int) ((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20))))) : 1)) && (((var_1_21 % ((((var_1_7) < (var_1_15)) ? (var_1_7) : (var_1_15)))) <= var_1_63) ? (var_1_22 == ((float) (var_1_5 - ((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26)))))) : ((! (var_1_46 || var_1_29)) ? ((var_1_25 > var_1_5) ? (var_1_22 == ((float) (var_1_25 - ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4)))))) : 1) : ((var_1_21 <= var_1_63) ? (var_1_22 == ((float) ((10.2f + var_1_4) - 5.25f))) : 1)))) && (((last_1_var_1_43 / var_1_7) == last_1_var_1_63) ? (((var_1_5 * last_1_var_1_60) < var_1_6) ? (var_1_27 == ((unsigned long int) var_1_7)) : (var_1_27 == ((unsigned long int) var_1_14))) : (var_1_27 == ((unsigned long int) var_1_14)))) && (var_1_12 ? (var_1_28 == ((signed short int) (var_1_63 - var_1_15))) : (var_1_28 == ((signed short int) 4)))) && (((- (var_1_30 - var_1_15)) > var_1_27) ? (var_1_29 == ((unsigned char) (var_1_12 || var_1_31))) : (var_1_29 == ((unsigned char) var_1_12)))) && ((var_1_34 >= var_1_43) ? (var_1_32 == ((double) (var_1_6 + var_1_4))) : 1)) && (((var_1_43 / var_1_9) >= var_1_15) ? (var_1_34 == ((unsigned char) ((var_1_35 + ((((5) < 0 ) ? -(5) : (5)))) + var_1_16))) : (var_1_34 == ((unsigned char) (((232 - var_1_36) - var_1_37) - ((((var_1_15) < ((var_1_38 - var_1_39))) ? (var_1_15) : ((var_1_38 - var_1_39))))))))) && (var_1_12 ? (var_1_40 == ((signed short int) (((((var_1_16 + last_1_var_1_40)) > (var_1_35)) ? ((var_1_16 + last_1_var_1_40)) : (var_1_35))))) : ((var_1_15 >= var_1_36) ? (var_1_40 == ((signed short int) ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) : (var_1_40 == ((signed short int) var_1_36))))) && (var_1_31 ? (((10 + var_1_15) < var_1_37) ? (((var_1_27 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) <= var_1_50) ? (var_1_41 == ((signed short int) var_1_14)) : (var_1_41 == ((signed short int) 256))) : (var_1_41 == ((signed short int) var_1_15))) : 1)) && (var_1_31 ? (var_1_43 == ((unsigned long int) var_1_37)) : 1)) && (var_1_10 ? (var_1_44 == ((signed short int) ((var_1_45 - ((((var_1_62) < (var_1_36)) ? (var_1_62) : (var_1_36)))) - var_1_37))) : (var_1_44 == ((signed short int) (var_1_39 - var_1_16))))) && (((last_1_var_1_27 / var_1_30) < last_1_var_1_63) ? ((! var_1_31) ? ((var_1_35 >= (((((var_1_30 - var_1_15)) < (var_1_14)) ? ((var_1_30 - var_1_15)) : (var_1_14)))) ? (var_1_46 == ((unsigned char) (! var_1_12))) : (var_1_46 == ((unsigned char) (last_1_var_1_57 && var_1_12)))) : ((100 < last_1_var_1_54) ? (var_1_46 == ((unsigned char) (! var_1_12))) : 1)) : 1)) && ((var_1_39 < var_1_27) ? (var_1_47 == ((signed short int) ((((((((var_1_41) < ((var_1_35 - var_1_15))) ? (var_1_41) : ((var_1_35 - var_1_15))))) > (-100)) ? (((((var_1_41) < ((var_1_35 - var_1_15))) ? (var_1_41) : ((var_1_35 - var_1_15))))) : (-100))))) : 1)) && ((var_1_7 < var_1_44) ? (var_1_48 == ((signed short int) (((((1 - ((((var_1_35) > (var_1_49)) ? (var_1_35) : (var_1_49))))) < (var_1_27)) ? ((1 - ((((var_1_35) > (var_1_49)) ? (var_1_35) : (var_1_49))))) : (var_1_27))))) : (var_1_48 == ((signed short int) ((var_1_45 - var_1_44) - var_1_30))))) && (((- var_1_26) <= var_1_25) ? (var_1_50 == ((signed long int) (var_1_39 - (var_1_51 - (var_1_38 + var_1_30))))) : (var_1_50 == ((signed long int) (256 - (var_1_51 - (var_1_52 - var_1_43))))))) && ((var_1_7 < (var_1_45 + var_1_21)) ? (var_1_53 == ((signed char) (var_1_39 - 64))) : (var_1_53 == ((signed char) (var_1_39 - var_1_36))))) && ((((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) < (var_1_47)) ? (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) : (var_1_47))) > var_1_52) ? (var_1_54 == ((unsigned long int) ((((var_1_63) > (var_1_30)) ? (var_1_63) : (var_1_30))))) : (var_1_54 == ((unsigned long int) (((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_55)) > ((var_1_56 - ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35)))))) ? ((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + var_1_55)) : ((var_1_56 - ((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))))))))))) && (var_1_46 ? (var_1_57 == ((unsigned char) var_1_31)) : 1)) && (var_1_58 == ((unsigned char) (var_1_59 - var_1_16)))) && (var_1_31 ? (var_1_29 ? (var_1_60 == ((double) var_1_24)) : ((((var_1_30 - var_1_39) < var_1_62) && (var_1_15 > (var_1_38 << var_1_47))) ? (var_1_60 == ((double) ((var_1_24 - var_1_5) - var_1_61))) : ((var_1_26 < var_1_5) ? (((var_1_55 * (- 4)) <= var_1_9) ? (var_1_60 == ((double) (var_1_25 - var_1_24))) : 1) : (var_1_60 == ((double) (((((var_1_25) < (((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24))))) ? (var_1_25) : (((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)))))) - 2.5)))))) : 1)) && (var_1_29 ? (var_1_62 == ((signed short int) var_1_20)) : (var_1_62 == ((signed short int) var_1_54)))) && ((! (! var_1_12)) ? (var_1_63 == ((unsigned long int) ((((var_1_36) < (((((var_1_56 - var_1_39) < 0 ) ? -(var_1_56 - var_1_39) : (var_1_56 - var_1_39))))) ? (var_1_36) : (((((var_1_56 - var_1_39) < 0 ) ? -(var_1_56 - var_1_39) : (var_1_56 - var_1_39)))))))) : ((var_1_47 < var_1_40) ? (var_1_63 == ((unsigned long int) var_1_15)) : 1))
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
