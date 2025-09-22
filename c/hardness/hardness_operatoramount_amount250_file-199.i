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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 9.125;
double var_1_6 = 64.5;
double var_1_7 = 15.5;
double var_1_8 = 10000000000.249;
double var_1_9 = 127.5;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 64;
signed long int var_1_16 = 1;
unsigned short int var_1_17 = 16;
signed long int var_1_18 = 4;
signed char var_1_19 = -1;
signed char var_1_20 = -1;
signed char var_1_21 = -2;
unsigned char var_1_22 = 1;
double var_1_23 = 49.5;
unsigned char var_1_24 = 0;
signed char var_1_25 = 8;
unsigned long int var_1_26 = 3898356127;
unsigned long int var_1_27 = 25;
signed char var_1_28 = 100;
signed char var_1_29 = 4;
signed char var_1_30 = 32;
signed char var_1_31 = 8;
signed char var_1_32 = 4;
unsigned char var_1_33 = 16;
double var_1_34 = 32.5;
double var_1_35 = 255.25;
double var_1_36 = 100000000.8;
double var_1_37 = 3.75;
double var_1_38 = 0.0;
double var_1_39 = 127.75;
double var_1_40 = 100.6;
signed short int var_1_41 = -4;
float var_1_42 = 256.2;
signed short int var_1_43 = 19137;
float var_1_44 = 127.6;
float var_1_45 = 0.0;
float var_1_46 = 100.5;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned long int var_1_50 = 25;
unsigned long int var_1_52 = 4107459798;
unsigned char var_1_53 = 1;
float var_1_54 = 25.2;
signed short int var_1_55 = 4;
double var_1_56 = 99999999999.7;
unsigned char var_1_57 = 1;
signed short int var_1_58 = 32;
signed short int var_1_61 = 25166;
signed short int var_1_62 = 22153;
unsigned long int var_1_63 = 8;
signed char var_1_64 = -4;
signed long int var_1_65 = 5;
signed short int var_1_66 = 8;
double last_1_var_1_34 = 32.5;
float last_1_var_1_44 = 127.6;
unsigned char last_1_var_1_47 = 1;
unsigned char last_1_var_1_53 = 1;
unsigned long int last_1_var_1_63 = 8;
signed long int last_1_var_1_65 = 5;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_65 % ((((var_1_17) > (var_1_28)) ? (var_1_17) : (var_1_28)))) <= var_1_31) {
  if (((((4) < 0 ) ? -(4) : (4))) < var_1_16) {
   if (last_1_var_1_47) {
    if (last_1_var_1_65 == var_1_17) {
     var_1_48 = (var_1_14 && var_1_12);
    } else {
     var_1_48 = (! var_1_14);
    }
   } else {
    var_1_48 = (var_1_12 || (last_1_var_1_53 || (! var_1_24)));
   }
  } else {
   var_1_48 = (var_1_24 || var_1_49);
  }
 } else {
  var_1_48 = var_1_12;
 }
 signed char stepLocal_4 = var_1_32;
 if (last_1_var_1_63 == stepLocal_4) {
  var_1_33 = ((((((((var_1_31) > (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_31) : (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))))) < (var_1_32)) ? (((((var_1_31) > (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_31) : (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))))) : (var_1_32)));
 }
 if (var_1_31 <= (var_1_33 | var_1_52)) {
  var_1_63 = ((((var_1_17) > (50u)) ? (var_1_17) : (50u)));
 } else {
  var_1_63 = var_1_52;
 }
 unsigned char stepLocal_1 = last_1_var_1_47 || (last_1_var_1_34 > last_1_var_1_44);
 unsigned char stepLocal_0 = last_1_var_1_47;
 if ((- last_1_var_1_34) < (0.125f + last_1_var_1_44)) {
  if (last_1_var_1_53 || stepLocal_1) {
   var_1_1 = (((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) < 0 ) ? -((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) : ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))));
  } else {
   if (stepLocal_0 || last_1_var_1_53) {
    var_1_1 = ((((var_1_6) < (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))) ? (var_1_6) : (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))));
   }
  }
 } else {
  if (last_1_var_1_47) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = 8.25;
  }
 }
 var_1_19 = (((((var_1_17 + var_1_20)) < (var_1_21)) ? ((var_1_17 + var_1_20)) : (var_1_21)));
 var_1_44 = ((var_1_38 - var_1_46) - var_1_39);
 if (var_1_16 > var_1_21) {
  var_1_47 = 0;
 }
 unsigned char stepLocal_6 = var_1_47;
 if ((var_1_32 > var_1_63) && stepLocal_6) {
  var_1_54 = ((((((var_1_46 + var_1_36) + 255.75f)) > (var_1_9)) ? (((var_1_46 + var_1_36) + 255.75f)) : (var_1_9)));
 } else {
  var_1_54 = ((((((var_1_45) > (var_1_38)) ? (var_1_45) : (var_1_38))) - var_1_46) - var_1_39);
 }
 signed long int stepLocal_9 = var_1_30 ^ var_1_17;
 if (var_1_16 > stepLocal_9) {
  if (! var_1_49) {
   var_1_57 = ((var_1_28 > 25) && var_1_24);
  } else {
   var_1_57 = var_1_14;
  }
 }
 if (var_1_57) {
  var_1_65 = -100;
 }
 if (var_1_18 == var_1_16) {
  if (var_1_48 && (var_1_63 < var_1_65)) {
   var_1_53 = (var_1_24 || var_1_49);
  } else {
   var_1_53 = var_1_49;
  }
 }
 signed long int stepLocal_3 = ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) >> var_1_17;
 signed long int stepLocal_2 = var_1_65;
 if (1 < stepLocal_2) {
  var_1_10 = (var_1_12 && ((var_1_63 > var_1_65) || var_1_14));
 } else {
  if (stepLocal_3 > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) {
   var_1_10 = var_1_14;
  }
 }
 if ((var_1_1 * 256.8) == var_1_9) {
  if (((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6))) <= var_1_1) {
   var_1_22 = ((var_1_6 > (var_1_9 / var_1_23)) && var_1_24);
  }
 } else {
  if (! var_1_24) {
   if ((16 > var_1_15) && var_1_47) {
    var_1_22 = (var_1_24 || var_1_12);
   } else {
    var_1_22 = var_1_14;
   }
  } else {
   var_1_22 = var_1_24;
  }
 }
 if (((var_1_26 - var_1_17) - var_1_27) >= var_1_15) {
  var_1_25 = (var_1_20 + var_1_17);
 } else {
  if (! var_1_24) {
   if (var_1_44 != (var_1_9 * ((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))))) {
    var_1_25 = ((((var_1_20 + var_1_17) < 0 ) ? -(var_1_20 + var_1_17) : (var_1_20 + var_1_17)));
   } else {
    var_1_25 = ((((((var_1_28 - var_1_17)) > (var_1_29)) ? ((var_1_28 - var_1_17)) : (var_1_29))) - ((((((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) > (var_1_32)) ? (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) : (var_1_32))));
   }
  } else {
   var_1_25 = ((((((((var_1_20) > (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))) ? (var_1_20) : (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))))) > (var_1_31)) ? (((((var_1_20) > (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))) ? (var_1_20) : (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))))) : (var_1_31)));
  }
 }
 if (var_1_57) {
  var_1_41 = var_1_25;
 }
 unsigned long int stepLocal_5 = var_1_63;
 if ((var_1_29 - (var_1_43 - var_1_17)) >= stepLocal_5) {
  var_1_42 = (((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35))) + 4.9f);
 } else {
  if (((var_1_38 - var_1_40) * var_1_54) <= (var_1_37 * var_1_36)) {
   var_1_42 = (((((var_1_37 + 10.5f)) < (var_1_8)) ? ((var_1_37 + 10.5f)) : (var_1_8)));
  }
 }
 if ((var_1_31 * var_1_30) == var_1_65) {
  if (var_1_57) {
   var_1_50 = ((((((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27)))) < ((var_1_52 - var_1_16))) ? (((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27)))) : ((var_1_52 - var_1_16))));
  }
 }
 if (var_1_37 < var_1_42) {
  var_1_56 = (((((49.3) < (var_1_36)) ? (49.3) : (var_1_36))) + var_1_39);
 }
 if (var_1_53) {
  var_1_64 = ((((var_1_28) > (var_1_17)) ? (var_1_28) : (var_1_17)));
 }
 unsigned long int stepLocal_11 = (var_1_26 - var_1_43) - var_1_17;
 if (! (((((-8) > (var_1_50)) ? (-8) : (var_1_50))) > var_1_62)) {
  var_1_66 = var_1_62;
 } else {
  if (var_1_52 <= stepLocal_11) {
   var_1_66 = var_1_31;
  }
 }
 if (var_1_6 > var_1_23) {
  var_1_34 = (32.9 + (var_1_35 + var_1_36));
 } else {
  if (var_1_7 <= var_1_56) {
   var_1_34 = ((((((var_1_35 + var_1_36) + var_1_37)) < (-0.8)) ? (((var_1_35 + var_1_36) + var_1_37)) : (-0.8)));
  } else {
   if (var_1_1 >= var_1_36) {
    if (var_1_57) {
     var_1_34 = ((var_1_38 - var_1_39) - var_1_40);
    } else {
     if (500.75f > var_1_56) {
      var_1_34 = 63.65;
     } else {
      var_1_34 = var_1_38;
     }
    }
   } else {
    var_1_34 = var_1_6;
   }
  }
 }
 signed long int stepLocal_8 = var_1_18;
 signed char stepLocal_7 = var_1_28;
 if ((((((var_1_56) > (var_1_46)) ? (var_1_56) : (var_1_46))) / var_1_23) == ((((199.4) < ((var_1_1 / var_1_38))) ? (199.4) : ((var_1_1 / var_1_38))))) {
  if (stepLocal_7 == var_1_15) {
   if (var_1_17 == stepLocal_8) {
    var_1_55 = (((((var_1_17) < (var_1_32)) ? (var_1_17) : (var_1_32))) - var_1_30);
   } else {
    var_1_55 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
   }
  } else {
   if (var_1_8 < var_1_34) {
    var_1_55 = ((var_1_50 + var_1_31) + var_1_17);
   } else {
    var_1_55 = var_1_28;
   }
  }
 }
 unsigned long int stepLocal_10 = var_1_50;
 if (var_1_56 != ((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39)))) {
  if (var_1_38 >= var_1_56) {
   var_1_58 = var_1_31;
  }
 } else {
  if ((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29))) - var_1_17) == stepLocal_10) {
   var_1_58 = var_1_65;
  } else {
   var_1_58 = ((var_1_61 - ((((256) < (var_1_17)) ? (256) : (var_1_17)))) - (var_1_62 - var_1_55));
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 30);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483647);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -127);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 3221225471);
 assume_abort_if_not(var_1_26 <= 4294967295);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 62);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -1);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 4611686.018427383000e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= 16383);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 6917529.027641074000e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 2147483647);
 assume_abort_if_not(var_1_52 <= 4294967294);
 var_1_61 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_61 >= 16382);
 assume_abort_if_not(var_1_61 <= 32766);
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= 16383);
 assume_abort_if_not(var_1_62 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_34 = var_1_34;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_65 = var_1_65;
}
int property(void) {
 return ((((((((((((((((((((((((- last_1_var_1_34) < (0.125f + last_1_var_1_44)) ? ((last_1_var_1_53 || (last_1_var_1_47 || (last_1_var_1_34 > last_1_var_1_44))) ? (var_1_1 == ((double) (((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) < 0 ) ? -((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) : ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))))) : ((last_1_var_1_47 || last_1_var_1_53) ? (var_1_1 == ((double) ((((var_1_6) < (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))) ? (var_1_6) : (((((var_1_7) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))))))))) : 1)) : (last_1_var_1_47 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) 8.25)))) && ((1 < var_1_65) ? (var_1_10 == ((unsigned char) (var_1_12 && ((var_1_63 > var_1_65) || var_1_14)))) : (((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) >> var_1_17) > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) ? (var_1_10 == ((unsigned char) var_1_14)) : 1))) && (var_1_19 == ((signed char) (((((var_1_17 + var_1_20)) < (var_1_21)) ? ((var_1_17 + var_1_20)) : (var_1_21)))))) && (((var_1_1 * 256.8) == var_1_9) ? ((((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6))) <= var_1_1) ? (var_1_22 == ((unsigned char) ((var_1_6 > (var_1_9 / var_1_23)) && var_1_24))) : 1) : ((! var_1_24) ? (((16 > var_1_15) && var_1_47) ? (var_1_22 == ((unsigned char) (var_1_24 || var_1_12))) : (var_1_22 == ((unsigned char) var_1_14))) : (var_1_22 == ((unsigned char) var_1_24))))) && ((((var_1_26 - var_1_17) - var_1_27) >= var_1_15) ? (var_1_25 == ((signed char) (var_1_20 + var_1_17))) : ((! var_1_24) ? ((var_1_44 != (var_1_9 * ((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))))) ? (var_1_25 == ((signed char) ((((var_1_20 + var_1_17) < 0 ) ? -(var_1_20 + var_1_17) : (var_1_20 + var_1_17))))) : (var_1_25 == ((signed char) ((((((var_1_28 - var_1_17)) > (var_1_29)) ? ((var_1_28 - var_1_17)) : (var_1_29))) - ((((((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) > (var_1_32)) ? (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) : (var_1_32))))))) : (var_1_25 == ((signed char) ((((((((var_1_20) > (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))) ? (var_1_20) : (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))))) > (var_1_31)) ? (((((var_1_20) > (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))) ? (var_1_20) : (((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28))))))) : (var_1_31)))))))) && ((last_1_var_1_63 == var_1_32) ? (var_1_33 == ((unsigned char) ((((((((var_1_31) > (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_31) : (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))))) < (var_1_32)) ? (((((var_1_31) > (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_31) : (((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))))) : (var_1_32))))) : 1)) && ((var_1_6 > var_1_23) ? (var_1_34 == ((double) (32.9 + (var_1_35 + var_1_36)))) : ((var_1_7 <= var_1_56) ? (var_1_34 == ((double) ((((((var_1_35 + var_1_36) + var_1_37)) < (-0.8)) ? (((var_1_35 + var_1_36) + var_1_37)) : (-0.8))))) : ((var_1_1 >= var_1_36) ? (var_1_57 ? (var_1_34 == ((double) ((var_1_38 - var_1_39) - var_1_40))) : ((500.75f > var_1_56) ? (var_1_34 == ((double) 63.65)) : (var_1_34 == ((double) var_1_38)))) : (var_1_34 == ((double) var_1_6)))))) && (var_1_57 ? (var_1_41 == ((signed short int) var_1_25)) : 1)) && (((var_1_29 - (var_1_43 - var_1_17)) >= var_1_63) ? (var_1_42 == ((float) (((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35))) + 4.9f))) : ((((var_1_38 - var_1_40) * var_1_54) <= (var_1_37 * var_1_36)) ? (var_1_42 == ((float) (((((var_1_37 + 10.5f)) < (var_1_8)) ? ((var_1_37 + 10.5f)) : (var_1_8))))) : 1))) && (var_1_44 == ((float) ((var_1_38 - var_1_46) - var_1_39)))) && ((var_1_16 > var_1_21) ? (var_1_47 == ((unsigned char) 0)) : 1)) && (((last_1_var_1_65 % ((((var_1_17) > (var_1_28)) ? (var_1_17) : (var_1_28)))) <= var_1_31) ? ((((((4) < 0 ) ? -(4) : (4))) < var_1_16) ? (last_1_var_1_47 ? ((last_1_var_1_65 == var_1_17) ? (var_1_48 == ((unsigned char) (var_1_14 && var_1_12))) : (var_1_48 == ((unsigned char) (! var_1_14)))) : (var_1_48 == ((unsigned char) (var_1_12 || (last_1_var_1_53 || (! var_1_24)))))) : (var_1_48 == ((unsigned char) (var_1_24 || var_1_49)))) : (var_1_48 == ((unsigned char) var_1_12)))) && (((var_1_31 * var_1_30) == var_1_65) ? (var_1_57 ? (var_1_50 == ((unsigned long int) ((((((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27)))) < ((var_1_52 - var_1_16))) ? (((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27)))) : ((var_1_52 - var_1_16)))))) : 1) : 1)) && ((var_1_18 == var_1_16) ? ((var_1_48 && (var_1_63 < var_1_65)) ? (var_1_53 == ((unsigned char) (var_1_24 || var_1_49))) : (var_1_53 == ((unsigned char) var_1_49))) : 1)) && (((var_1_32 > var_1_63) && var_1_47) ? (var_1_54 == ((float) ((((((var_1_46 + var_1_36) + 255.75f)) > (var_1_9)) ? (((var_1_46 + var_1_36) + 255.75f)) : (var_1_9))))) : (var_1_54 == ((float) ((((((var_1_45) > (var_1_38)) ? (var_1_45) : (var_1_38))) - var_1_46) - var_1_39))))) && (((((((var_1_56) > (var_1_46)) ? (var_1_56) : (var_1_46))) / var_1_23) == ((((199.4) < ((var_1_1 / var_1_38))) ? (199.4) : ((var_1_1 / var_1_38))))) ? ((var_1_28 == var_1_15) ? ((var_1_17 == var_1_18) ? (var_1_55 == ((signed short int) (((((var_1_17) < (var_1_32)) ? (var_1_17) : (var_1_32))) - var_1_30))) : (var_1_55 == ((signed short int) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) : ((var_1_8 < var_1_34) ? (var_1_55 == ((signed short int) ((var_1_50 + var_1_31) + var_1_17))) : (var_1_55 == ((signed short int) var_1_28)))) : 1)) && ((var_1_37 < var_1_42) ? (var_1_56 == ((double) (((((49.3) < (var_1_36)) ? (49.3) : (var_1_36))) + var_1_39))) : 1)) && ((var_1_16 > (var_1_30 ^ var_1_17)) ? ((! var_1_49) ? (var_1_57 == ((unsigned char) ((var_1_28 > 25) && var_1_24))) : (var_1_57 == ((unsigned char) var_1_14))) : 1)) && ((var_1_56 != ((((var_1_36) < (var_1_39)) ? (var_1_36) : (var_1_39)))) ? ((var_1_38 >= var_1_56) ? (var_1_58 == ((signed short int) var_1_31)) : 1) : (((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29))) - var_1_17) == var_1_50) ? (var_1_58 == ((signed short int) var_1_65)) : (var_1_58 == ((signed short int) ((var_1_61 - ((((256) < (var_1_17)) ? (256) : (var_1_17)))) - (var_1_62 - var_1_55))))))) && ((var_1_31 <= (var_1_33 | var_1_52)) ? (var_1_63 == ((unsigned long int) ((((var_1_17) > (50u)) ? (var_1_17) : (50u))))) : (var_1_63 == ((unsigned long int) var_1_52)))) && (var_1_53 ? (var_1_64 == ((signed char) ((((var_1_28) > (var_1_17)) ? (var_1_28) : (var_1_17))))) : 1)) && (var_1_57 ? (var_1_65 == ((signed long int) -100)) : 1)) && ((! (((((-8) > (var_1_50)) ? (-8) : (var_1_50))) > var_1_62)) ? (var_1_66 == ((signed short int) var_1_62)) : ((var_1_52 <= ((var_1_26 - var_1_43) - var_1_17)) ? (var_1_66 == ((signed short int) var_1_31)) : 1))
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
