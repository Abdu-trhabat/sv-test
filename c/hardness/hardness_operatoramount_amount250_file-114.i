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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Amount250.c", 13, "reach_error"); }
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
signed char var_1_3 = -4;
signed char var_1_4 = 2;
signed char var_1_5 = 10;
signed char var_1_6 = 16;
unsigned char var_1_7 = 25;
unsigned short int var_1_8 = 39481;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 5;
unsigned short int var_1_12 = 29202;
unsigned short int var_1_13 = 18829;
signed char var_1_14 = 50;
double var_1_15 = 127.5;
signed char var_1_16 = 10;
signed char var_1_17 = 8;
double var_1_18 = 5.4;
double var_1_19 = 50.5;
double var_1_20 = 49.5;
double var_1_21 = 99.05;
signed short int var_1_22 = -8;
double var_1_23 = 25.126;
unsigned long int var_1_24 = 1;
unsigned long int var_1_25 = 32;
unsigned short int var_1_26 = 23015;
unsigned long int var_1_27 = 3212285742;
unsigned long int var_1_28 = 1539849895;
double var_1_29 = 25.3;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 10;
unsigned short int var_1_36 = 25;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 200;
unsigned char var_1_39 = 100;
double var_1_40 = 7.6;
unsigned char var_1_41 = 8;
unsigned short int var_1_42 = 2;
unsigned char var_1_43 = 25;
signed short int var_1_44 = 16;
unsigned char var_1_45 = 1;
float var_1_46 = 49.5;
signed short int var_1_47 = 2;
float var_1_48 = 4.5;
float var_1_49 = 49.25;
float var_1_50 = 24.5;
float var_1_51 = 10.4;
float var_1_52 = 255.25;
unsigned char var_1_53 = 1;
double var_1_54 = 16.4;
double var_1_55 = 0.0;
double var_1_56 = 256.3;
unsigned char var_1_58 = 0;
unsigned short int var_1_59 = 10;
double var_1_60 = 10.5;
double var_1_61 = 63.8;
signed short int last_1_var_1_22 = -8;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_5;
 signed long int stepLocal_0 = (var_1_8 - var_1_5) * var_1_6;
 if (var_1_3 < stepLocal_1) {
  if (stepLocal_0 > -256) {
   var_1_7 = (var_1_9 - var_1_5);
  } else {
   var_1_7 = (16 + ((((var_1_5) > ((var_1_6 + var_1_10))) ? (var_1_5) : ((var_1_6 + var_1_10)))));
  }
 } else {
  var_1_7 = (8 + ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))));
 }
 if (((var_1_12 + var_1_13) - var_1_5) < var_1_4) {
  var_1_11 = ((((var_1_5) > (0)) ? (var_1_5) : (0)));
 } else {
  var_1_11 = ((((var_1_9 - var_1_10) < 0 ) ? -(var_1_9 - var_1_10) : (var_1_9 - var_1_10)));
 }
 var_1_14 = (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) - var_1_10);
 if ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) << ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) >= var_1_12) {
  var_1_15 = ((var_1_18 + (2.75 - var_1_19)) + (var_1_20 - var_1_21));
 }
 if ((var_1_9 * 4u) < var_1_6) {
  if (! (((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6))) >= var_1_13)) {
   var_1_35 = (var_1_10 + var_1_5);
  } else {
   var_1_35 = (var_1_17 + var_1_36);
  }
 }
 var_1_37 = ((((var_1_16) < (((var_1_38 - var_1_17) - (var_1_39 - var_1_10)))) ? (var_1_16) : (((var_1_38 - var_1_17) - (var_1_39 - var_1_10)))));
 var_1_42 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 signed long int stepLocal_7 = var_1_11 * (~ var_1_36);
 if (stepLocal_7 < var_1_5) {
  var_1_43 = (var_1_5 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
 }
 var_1_45 = (var_1_31 || var_1_33);
 var_1_46 = ((((var_1_21 - var_1_19) < 0 ) ? -(var_1_21 - var_1_19) : (var_1_21 - var_1_19)));
 var_1_53 = (((var_1_20 - var_1_51) < 2.625) || var_1_34);
 if (var_1_16 == (var_1_6 - var_1_39)) {
  var_1_54 = ((var_1_19 + var_1_18) + 1.95);
 } else {
  var_1_54 = (((var_1_55 - 31.8) - var_1_52) + var_1_20);
 }
 if (var_1_25 > 8u) {
  if ((4u / var_1_28) <= (var_1_27 - var_1_16)) {
   var_1_58 = var_1_34;
  } else {
   if ((((((var_1_27 / var_1_9)) > (var_1_10)) ? ((var_1_27 / var_1_9)) : (var_1_10))) >= var_1_12) {
    var_1_58 = var_1_33;
   } else {
    var_1_58 = var_1_34;
   }
  }
 } else {
  var_1_58 = var_1_33;
 }
 var_1_59 = var_1_9;
 if (var_1_58) {
  var_1_60 = var_1_19;
 } else {
  var_1_60 = var_1_49;
 }
 if (var_1_18 > var_1_20) {
  if (var_1_31) {
   if ((2.25f <= var_1_49) && var_1_53) {
    var_1_61 = (var_1_21 + var_1_18);
   } else {
    var_1_61 = var_1_52;
   }
  }
 }
 if (var_1_53) {
  var_1_23 = 128.6;
 }
 unsigned short int stepLocal_3 = var_1_13;
 unsigned char stepLocal_2 = var_1_9;
 if ((var_1_8 - 5) != stepLocal_2) {
  if ((var_1_18 * var_1_15) >= 4.75) {
   var_1_24 = ((((var_1_25) > (var_1_9)) ? (var_1_25) : (var_1_9)));
  } else {
   var_1_24 = 0u;
  }
 } else {
  if (stepLocal_3 == ((var_1_12 + var_1_26) - var_1_5)) {
   var_1_24 = (var_1_27 - (var_1_28 - var_1_9));
  } else {
   if ((var_1_20 + (var_1_15 / var_1_29)) != var_1_61) {
    var_1_24 = var_1_10;
   } else {
    var_1_24 = var_1_5;
   }
  }
 }
 if (var_1_53) {
  var_1_30 = (var_1_31 || (var_1_45 && var_1_33));
 } else {
  var_1_30 = (var_1_45 || var_1_34);
 }
 unsigned long int stepLocal_6 = - (var_1_27 - var_1_12);
 unsigned short int stepLocal_5 = var_1_36;
 unsigned char stepLocal_4 = var_1_39;
 if (31.375f <= var_1_29) {
  if (var_1_45) {
   if (var_1_9 != stepLocal_4) {
    var_1_40 = ((((((((var_1_20) < (var_1_18)) ? (var_1_20) : (var_1_18)))) > (var_1_19)) ? (((((var_1_20) < (var_1_18)) ? (var_1_20) : (var_1_18)))) : (var_1_19)));
   }
  } else {
   if (var_1_5 <= stepLocal_5) {
    if (stepLocal_6 < var_1_59) {
     var_1_40 = (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21))) - ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))));
    } else {
     var_1_40 = (var_1_20 + var_1_18);
    }
   } else {
    var_1_40 = (var_1_19 - var_1_20);
   }
  }
 }
 if (var_1_43 > var_1_5) {
  if (var_1_10 < (var_1_9 - (var_1_6 + var_1_17))) {
   if (((((var_1_39) > ((var_1_4 % var_1_38))) ? (var_1_39) : ((var_1_4 % var_1_38)))) != var_1_7) {
    if (var_1_54 <= var_1_61) {
     var_1_41 = (128 - var_1_5);
    } else {
     var_1_41 = (8 + var_1_17);
    }
   } else {
    var_1_41 = (var_1_17 + (var_1_39 - var_1_10));
   }
  }
 } else {
  var_1_41 = ((((var_1_17) > (var_1_6)) ? (var_1_17) : (var_1_6)));
 }
 var_1_44 = ((((((((var_1_59 - var_1_5)) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_59 - var_1_5)) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) < 0 ) ? -(((((var_1_59 - var_1_5)) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_59 - var_1_5)) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) : (((((var_1_59 - var_1_5)) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_59 - var_1_5)) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))));
 if (((((var_1_59) < (var_1_42)) ? (var_1_59) : (var_1_42))) < ((var_1_28 - var_1_16) / ((((var_1_26) > (var_1_39)) ? (var_1_26) : (var_1_39))))) {
  var_1_47 = (var_1_6 - var_1_5);
 } else {
  var_1_47 = var_1_39;
 }
 signed char stepLocal_9 = var_1_6;
 signed char stepLocal_8 = var_1_16;
 if (stepLocal_8 > var_1_25) {
  var_1_48 = (var_1_21 - var_1_19);
 } else {
  if (stepLocal_9 != var_1_24) {
   var_1_48 = (var_1_20 - ((((var_1_19) < (((((var_1_21) < (var_1_49)) ? (var_1_21) : (var_1_49))))) ? (var_1_19) : (((((var_1_21) < (var_1_49)) ? (var_1_21) : (var_1_49)))))));
  }
 }
 unsigned char stepLocal_11 = var_1_53 && (var_1_58 || var_1_30);
 unsigned long int stepLocal_10 = var_1_24;
 if (stepLocal_11 && var_1_31) {
  if (stepLocal_10 != var_1_7) {
   var_1_50 = (var_1_49 - var_1_51);
  } else {
   var_1_50 = (((((var_1_19 - var_1_21) + (var_1_20 - var_1_52)) < 0 ) ? -((var_1_19 - var_1_21) + (var_1_20 - var_1_52)) : ((var_1_19 - var_1_21) + (var_1_20 - var_1_52))));
  }
 }
 if ((var_1_23 <= 2.75) && (var_1_44 != var_1_26)) {
  if ((var_1_60 / var_1_55) >= var_1_23) {
   var_1_56 = (((((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19))) < 0 ) ? -((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19))) : ((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19)))));
  } else {
   var_1_56 = (var_1_55 + var_1_20);
  }
 }
 if (! var_1_30) {
  var_1_1 = (((((var_1_3 + 4)) > ((var_1_4 + (var_1_5 - var_1_6)))) ? ((var_1_3 + 4)) : ((var_1_4 + (var_1_5 - var_1_6)))));
 }
 if ((var_1_18 > var_1_20) || var_1_53) {
  if ((var_1_9 * var_1_24) != (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))) - var_1_5)) {
   if (((((var_1_10) > ((var_1_9 * var_1_5))) ? (var_1_10) : ((var_1_9 * var_1_5)))) >= var_1_8) {
    var_1_22 = var_1_4;
   }
  } else {
   var_1_22 = var_1_5;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32768);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16384);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 25);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 25);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 16384);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741823);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 190);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 63);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= 2305843.009213691400e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_22 = var_1_22;
}
int property(void) {
 return ((((((((((((((((((((((((((((! var_1_30) ? (var_1_1 == ((signed char) (((((var_1_3 + 4)) > ((var_1_4 + (var_1_5 - var_1_6)))) ? ((var_1_3 + 4)) : ((var_1_4 + (var_1_5 - var_1_6))))))) : 1) && ((var_1_3 < var_1_5) ? ((((var_1_8 - var_1_5) * var_1_6) > -256) ? (var_1_7 == ((unsigned char) (var_1_9 - var_1_5))) : (var_1_7 == ((unsigned char) (16 + ((((var_1_5) > ((var_1_6 + var_1_10))) ? (var_1_5) : ((var_1_6 + var_1_10)))))))) : (var_1_7 == ((unsigned char) (8 + ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))))))) && ((((var_1_12 + var_1_13) - var_1_5) < var_1_4) ? (var_1_11 == ((unsigned char) ((((var_1_5) > (0)) ? (var_1_5) : (0))))) : (var_1_11 == ((unsigned char) ((((var_1_9 - var_1_10) < 0 ) ? -(var_1_9 - var_1_10) : (var_1_9 - var_1_10))))))) && (var_1_14 == ((signed char) (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) - var_1_10)))) && (((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) << ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) >= var_1_12) ? (var_1_15 == ((double) ((var_1_18 + (2.75 - var_1_19)) + (var_1_20 - var_1_21)))) : 1)) && (((var_1_18 > var_1_20) || var_1_53) ? (((var_1_9 * var_1_24) != (((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))) - var_1_5)) ? ((((((var_1_10) > ((var_1_9 * var_1_5))) ? (var_1_10) : ((var_1_9 * var_1_5)))) >= var_1_8) ? (var_1_22 == ((signed short int) var_1_4)) : 1) : (var_1_22 == ((signed short int) var_1_5))) : 1)) && (var_1_53 ? (var_1_23 == ((double) 128.6)) : 1)) && (((var_1_8 - 5) != var_1_9) ? (((var_1_18 * var_1_15) >= 4.75) ? (var_1_24 == ((unsigned long int) ((((var_1_25) > (var_1_9)) ? (var_1_25) : (var_1_9))))) : (var_1_24 == ((unsigned long int) 0u))) : ((var_1_13 == ((var_1_12 + var_1_26) - var_1_5)) ? (var_1_24 == ((unsigned long int) (var_1_27 - (var_1_28 - var_1_9)))) : (((var_1_20 + (var_1_15 / var_1_29)) != var_1_61) ? (var_1_24 == ((unsigned long int) var_1_10)) : (var_1_24 == ((unsigned long int) var_1_5)))))) && (var_1_53 ? (var_1_30 == ((unsigned char) (var_1_31 || (var_1_45 && var_1_33)))) : (var_1_30 == ((unsigned char) (var_1_45 || var_1_34))))) && (((var_1_9 * 4u) < var_1_6) ? ((! (((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6))) >= var_1_13)) ? (var_1_35 == ((unsigned short int) (var_1_10 + var_1_5))) : (var_1_35 == ((unsigned short int) (var_1_17 + var_1_36)))) : 1)) && (var_1_37 == ((unsigned char) ((((var_1_16) < (((var_1_38 - var_1_17) - (var_1_39 - var_1_10)))) ? (var_1_16) : (((var_1_38 - var_1_17) - (var_1_39 - var_1_10)))))))) && ((31.375f <= var_1_29) ? (var_1_45 ? ((var_1_9 != var_1_39) ? (var_1_40 == ((double) ((((((((var_1_20) < (var_1_18)) ? (var_1_20) : (var_1_18)))) > (var_1_19)) ? (((((var_1_20) < (var_1_18)) ? (var_1_20) : (var_1_18)))) : (var_1_19))))) : 1) : ((var_1_5 <= var_1_36) ? (((- (var_1_27 - var_1_12)) < var_1_59) ? (var_1_40 == ((double) (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21))) - ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) : (var_1_40 == ((double) (var_1_20 + var_1_18)))) : (var_1_40 == ((double) (var_1_19 - var_1_20))))) : 1)) && ((var_1_43 > var_1_5) ? ((var_1_10 < (var_1_9 - (var_1_6 + var_1_17))) ? ((((((var_1_39) > ((var_1_4 % var_1_38))) ? (var_1_39) : ((var_1_4 % var_1_38)))) != var_1_7) ? ((var_1_54 <= var_1_61) ? (var_1_41 == ((unsigned char) (128 - var_1_5))) : (var_1_41 == ((unsigned char) (8 + var_1_17)))) : (var_1_41 == ((unsigned char) (var_1_17 + (var_1_39 - var_1_10))))) : 1) : (var_1_41 == ((unsigned char) ((((var_1_17) > (var_1_6)) ? (var_1_17) : (var_1_6))))))) && (var_1_42 == ((unsigned short int) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) && (((var_1_11 * (~ var_1_36)) < var_1_5) ? (var_1_43 == ((unsigned char) (var_1_5 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) : 1)) && (var_1_44 == ((signed short int) ((((((((var_1_59 - var_1_5)) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_59 - var_1_5)) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) < 0 ) ? -(((((var_1_59 - var_1_5)) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_59 - var_1_5)) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) : (((((var_1_59 - var_1_5)) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_59 - var_1_5)) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))))))) && (var_1_45 == ((unsigned char) (var_1_31 || var_1_33)))) && (var_1_46 == ((float) ((((var_1_21 - var_1_19) < 0 ) ? -(var_1_21 - var_1_19) : (var_1_21 - var_1_19)))))) && ((((((var_1_59) < (var_1_42)) ? (var_1_59) : (var_1_42))) < ((var_1_28 - var_1_16) / ((((var_1_26) > (var_1_39)) ? (var_1_26) : (var_1_39))))) ? (var_1_47 == ((signed short int) (var_1_6 - var_1_5))) : (var_1_47 == ((signed short int) var_1_39)))) && ((var_1_16 > var_1_25) ? (var_1_48 == ((float) (var_1_21 - var_1_19))) : ((var_1_6 != var_1_24) ? (var_1_48 == ((float) (var_1_20 - ((((var_1_19) < (((((var_1_21) < (var_1_49)) ? (var_1_21) : (var_1_49))))) ? (var_1_19) : (((((var_1_21) < (var_1_49)) ? (var_1_21) : (var_1_49))))))))) : 1))) && (((var_1_53 && (var_1_58 || var_1_30)) && var_1_31) ? ((var_1_24 != var_1_7) ? (var_1_50 == ((float) (var_1_49 - var_1_51))) : (var_1_50 == ((float) (((((var_1_19 - var_1_21) + (var_1_20 - var_1_52)) < 0 ) ? -((var_1_19 - var_1_21) + (var_1_20 - var_1_52)) : ((var_1_19 - var_1_21) + (var_1_20 - var_1_52))))))) : 1)) && (var_1_53 == ((unsigned char) (((var_1_20 - var_1_51) < 2.625) || var_1_34)))) && ((var_1_16 == (var_1_6 - var_1_39)) ? (var_1_54 == ((double) ((var_1_19 + var_1_18) + 1.95))) : (var_1_54 == ((double) (((var_1_55 - 31.8) - var_1_52) + var_1_20))))) && (((var_1_23 <= 2.75) && (var_1_44 != var_1_26)) ? (((var_1_60 / var_1_55) >= var_1_23) ? (var_1_56 == ((double) (((((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19))) < 0 ) ? -((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19))) : ((((var_1_55) > (var_1_19)) ? (var_1_55) : (var_1_19))))))) : (var_1_56 == ((double) (var_1_55 + var_1_20)))) : 1)) && ((var_1_25 > 8u) ? (((4u / var_1_28) <= (var_1_27 - var_1_16)) ? (var_1_58 == ((unsigned char) var_1_34)) : (((((((var_1_27 / var_1_9)) > (var_1_10)) ? ((var_1_27 / var_1_9)) : (var_1_10))) >= var_1_12) ? (var_1_58 == ((unsigned char) var_1_33)) : (var_1_58 == ((unsigned char) var_1_34)))) : (var_1_58 == ((unsigned char) var_1_33)))) && (var_1_59 == ((unsigned short int) var_1_9))) && (var_1_58 ? (var_1_60 == ((double) var_1_19)) : (var_1_60 == ((double) var_1_49)))) && ((var_1_18 > var_1_20) ? (var_1_31 ? (((2.25f <= var_1_49) && var_1_53) ? (var_1_61 == ((double) (var_1_21 + var_1_18))) : (var_1_61 == ((double) var_1_52))) : 1) : 1)
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
