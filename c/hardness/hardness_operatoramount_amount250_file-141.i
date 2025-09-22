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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
double var_1_10 = 100.25;
double var_1_14 = 499.075;
double var_1_15 = 0.125;
unsigned short int var_1_16 = 2;
unsigned short int var_1_17 = 50270;
unsigned short int var_1_18 = 54142;
unsigned short int var_1_19 = 48930;
unsigned short int var_1_20 = 10000;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 4;
double var_1_24 = 50.15;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 100;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 64;
unsigned short int var_1_32 = 0;
unsigned short int var_1_33 = 30922;
unsigned short int var_1_34 = 25;
unsigned short int var_1_35 = 100;
unsigned long int var_1_36 = 50;
float var_1_38 = 5.625;
double var_1_39 = 15.25;
float var_1_40 = 127.25;
float var_1_41 = 0.4;
float var_1_42 = 5.25;
float var_1_43 = 128.95;
float var_1_44 = 16.875;
unsigned long int var_1_45 = 16;
unsigned long int var_1_46 = 3747867460;
unsigned long int var_1_48 = 1875668268;
unsigned long int var_1_49 = 1000000000;
unsigned long int var_1_50 = 3771011516;
double var_1_51 = 1.375;
double var_1_52 = 16.5;
double var_1_53 = 32.1;
signed long int var_1_54 = 64;
unsigned char var_1_55 = 0;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 4;
unsigned char var_1_60 = 25;
unsigned long int var_1_61 = 128;
unsigned char last_1_var_1_1 = 1;
double last_1_var_1_10 = 100.25;
unsigned short int last_1_var_1_16 = 2;
unsigned char last_1_var_1_21 = 1;
unsigned short int last_1_var_1_32 = 0;
unsigned short int last_1_var_1_35 = 100;
unsigned long int last_1_var_1_36 = 50;
float last_1_var_1_40 = 127.25;
unsigned long int last_1_var_1_45 = 16;
signed long int last_1_var_1_54 = 64;
unsigned char last_1_var_1_55 = 0;
unsigned char last_1_var_1_58 = 1;
unsigned char last_1_var_1_59 = 4;
unsigned long int last_1_var_1_61 = 128;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_18 = var_1_17 / var_1_49;
 unsigned long int stepLocal_17 = last_1_var_1_45;
 unsigned char stepLocal_16 = var_1_57;
 if (last_1_var_1_55) {
  if (stepLocal_16 && last_1_var_1_1) {
   if (last_1_var_1_36 < stepLocal_18) {
    if (stepLocal_17 < last_1_var_1_54) {
     var_1_61 = var_1_31;
    } else {
     var_1_61 = var_1_34;
    }
   } else {
    var_1_61 = var_1_18;
   }
  }
 } else {
  var_1_61 = last_1_var_1_16;
 }
 if (last_1_var_1_21) {
  if (var_1_8) {
   var_1_16 = last_1_var_1_61;
  }
 } else {
  if (last_1_var_1_55) {
   var_1_16 = (((((var_1_17) < (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_17) : (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))))) - ((var_1_20 - 64) + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))));
  }
 }
 var_1_54 = (var_1_30 + (var_1_33 + last_1_var_1_59));
 unsigned long int stepLocal_10 = last_1_var_1_45 / var_1_25;
 unsigned char stepLocal_9 = (9.5f / var_1_38) != last_1_var_1_10;
 signed long int stepLocal_8 = var_1_25 - var_1_26;
 if (last_1_var_1_45 > stepLocal_10) {
  if ((last_1_var_1_10 / ((((var_1_24) < (var_1_38)) ? (var_1_24) : (var_1_38)))) <= (var_1_14 + (last_1_var_1_10 * last_1_var_1_40))) {
   var_1_36 = (var_1_27 + var_1_28);
  } else {
   if ((var_1_30 >= last_1_var_1_45) || stepLocal_9) {
    if (var_1_31 < stepLocal_8) {
     var_1_36 = ((((var_1_33) < (2u)) ? (var_1_33) : (2u)));
    } else {
     var_1_36 = var_1_18;
    }
   }
  }
 } else {
  var_1_36 = var_1_20;
 }
 unsigned char stepLocal_7 = var_1_28;
 unsigned long int stepLocal_6 = var_1_36;
 if (stepLocal_6 > ((((((((last_1_var_1_35) > (var_1_31)) ? (last_1_var_1_35) : (var_1_31)))) < (32)) ? (((((last_1_var_1_35) > (var_1_31)) ? (last_1_var_1_35) : (var_1_31)))) : (32)))) {
  if (stepLocal_7 < (var_1_25 % var_1_31)) {
   var_1_35 = (((((var_1_18 - var_1_30)) > ((var_1_17 - var_1_25))) ? ((var_1_18 - var_1_30)) : ((var_1_17 - var_1_25))));
  } else {
   if (var_1_9) {
    var_1_35 = var_1_18;
   } else {
    var_1_35 = 16;
   }
  }
 } else {
  var_1_35 = 256;
 }
 signed long int stepLocal_0 = last_1_var_1_35 % var_1_4;
 if (last_1_var_1_35 != stepLocal_0) {
  var_1_1 = (last_1_var_1_55 || (! (last_1_var_1_1 && var_1_7)));
 } else {
  var_1_1 = (var_1_7 || (var_1_8 || var_1_9));
 }
 if (var_1_1) {
  var_1_58 = (var_1_22 && ((var_1_17 <= var_1_31) || (var_1_7 || var_1_57)));
 } else {
  var_1_58 = ((! var_1_22) || (var_1_7 || var_1_8));
 }
 if (! (var_1_1 && var_1_58)) {
  var_1_39 = ((((var_1_15) < (4.25)) ? (var_1_15) : (4.25)));
 } else {
  var_1_39 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 }
 if ((- ((((256u) > (var_1_20)) ? (256u) : (var_1_20)))) <= (- (var_1_50 | 16u))) {
  if (last_1_var_1_58) {
   var_1_55 = ((-10 < var_1_4) && var_1_8);
  }
 } else {
  if ((1 << var_1_34) >= (~ last_1_var_1_36)) {
   if (var_1_25 < var_1_31) {
    var_1_55 = (! var_1_22);
   } else {
    var_1_55 = (var_1_7 || var_1_8);
   }
  } else {
   var_1_55 = (var_1_22 && var_1_57);
  }
 }
 if (var_1_55) {
  var_1_21 = var_1_22;
 } else {
  var_1_21 = 0;
 }
 signed long int stepLocal_2 = (var_1_25 - var_1_26) + (- var_1_17);
 signed long int stepLocal_1 = (((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20));
 if (! ((var_1_14 / var_1_24) >= 24.8)) {
  if (var_1_9) {
   if (((((var_1_36) < (var_1_18)) ? (var_1_36) : (var_1_18))) >= stepLocal_1) {
    if (var_1_4 < stepLocal_2) {
     var_1_23 = ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)));
    } else {
     var_1_23 = (((((var_1_28) < (128)) ? (var_1_28) : (128))) - var_1_26);
    }
   } else {
    var_1_23 = var_1_26;
   }
  } else {
   var_1_23 = var_1_28;
  }
 }
 if (var_1_22) {
  if (var_1_39 != var_1_24) {
   var_1_29 = (var_1_28 - 32);
  } else {
   var_1_29 = (var_1_28 - var_1_26);
  }
 } else {
  var_1_29 = ((((((var_1_30 + var_1_31) - var_1_26)) > (var_1_28)) ? (((var_1_30 + var_1_31) - var_1_26)) : (var_1_28)));
 }
 unsigned char stepLocal_5 = var_1_27;
 signed long int stepLocal_4 = var_1_54;
 unsigned char stepLocal_3 = var_1_25;
 if (last_1_var_1_32 > stepLocal_3) {
  if (var_1_1) {
   var_1_32 = var_1_18;
  }
 } else {
  if (stepLocal_4 > (var_1_31 / var_1_4)) {
   var_1_32 = ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)));
  } else {
   if (((((last_1_var_1_32) > (var_1_20)) ? (last_1_var_1_32) : (var_1_20))) > stepLocal_5) {
    var_1_32 = (((((32) < 0 ) ? -(32) : (32))) + (var_1_33 - var_1_31));
   } else {
    var_1_32 = (var_1_25 + (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + (8 + var_1_27)));
   }
  }
 }
 var_1_51 = (var_1_43 + (var_1_44 - ((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))));
 if (var_1_61 == var_1_25) {
  if (var_1_1 && var_1_58) {
   if (((((var_1_36) > (var_1_30)) ? (var_1_36) : (var_1_30))) > var_1_27) {
    var_1_40 = var_1_15;
   } else {
    if (var_1_33 <= 10) {
     var_1_40 = (((((var_1_41 - var_1_42)) < (var_1_15)) ? ((var_1_41 - var_1_42)) : (var_1_15)));
    } else {
     var_1_40 = ((((((var_1_43) < (9.4f)) ? (var_1_43) : (9.4f))) + var_1_44) - var_1_41);
    }
   }
  }
 } else {
  var_1_40 = var_1_42;
 }
 if (((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))) >= var_1_39) {
  var_1_10 = var_1_14;
 } else {
  if (var_1_55) {
   var_1_10 = var_1_14;
  } else {
   if (var_1_39 <= (- (var_1_39 * var_1_51))) {
    var_1_10 = ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)));
   }
  }
 }
 signed long int stepLocal_15 = 4;
 unsigned short int stepLocal_14 = var_1_18;
 unsigned char stepLocal_13 = 31.51f < var_1_52;
 if (var_1_15 > var_1_40) {
  if (stepLocal_15 >= var_1_27) {
   if (stepLocal_14 == ((var_1_33 + var_1_54) | var_1_54)) {
    var_1_59 = ((((var_1_60) > (var_1_27)) ? (var_1_60) : (var_1_27)));
   } else {
    var_1_59 = var_1_26;
   }
  }
 } else {
  if (stepLocal_13 || var_1_58) {
   var_1_59 = (var_1_28 - var_1_30);
  } else {
   var_1_59 = var_1_28;
  }
 }
 unsigned short int stepLocal_12 = var_1_16;
 signed long int stepLocal_11 = 4;
 if (var_1_38 == var_1_24) {
  if (var_1_55) {
   var_1_45 = ((var_1_46 - ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) - var_1_25);
  } else {
   var_1_45 = (var_1_46 - ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))));
  }
 } else {
  if ((var_1_35 / var_1_4) >= stepLocal_11) {
   if (var_1_27 < stepLocal_12) {
    var_1_45 = ((var_1_48 - (var_1_49 - var_1_54)) + (var_1_26 + ((((var_1_27) < (var_1_17)) ? (var_1_27) : (var_1_17)))));
   }
  } else {
   if (var_1_43 < var_1_51) {
    var_1_45 = (((((var_1_50 - ((((var_1_30) > (var_1_19)) ? (var_1_30) : (var_1_19))))) < (((((var_1_27) < ((4243127044u - var_1_59))) ? (var_1_27) : ((4243127044u - var_1_59)))))) ? ((var_1_50 - ((((var_1_30) > (var_1_19)) ? (var_1_30) : (var_1_19))))) : (((((var_1_27) < ((4243127044u - var_1_59))) ? (var_1_27) : ((4243127044u - var_1_59)))))));
   } else {
    var_1_45 = (var_1_34 + ((((((((var_1_54) < (var_1_19)) ? (var_1_54) : (var_1_19)))) > (var_1_25)) ? (((((var_1_54) < (var_1_19)) ? (var_1_54) : (var_1_19)))) : (var_1_25))));
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 32767);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 32767);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 8192);
 assume_abort_if_not(var_1_20 <= 16384);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 assume_abort_if_not(var_1_24 != 0.0F);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 255);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 63);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 64);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 16383);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 16384);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 assume_abort_if_not(var_1_38 != 0.0F);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 3221225470);
 assume_abort_if_not(var_1_46 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 1073741823);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 536870911);
 assume_abort_if_not(var_1_49 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 2147483647);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return ((((((((((((((((((last_1_var_1_35 != (last_1_var_1_35 % var_1_4)) ? (var_1_1 == ((unsigned char) (last_1_var_1_55 || (! (last_1_var_1_1 && var_1_7))))) : (var_1_1 == ((unsigned char) (var_1_7 || (var_1_8 || var_1_9))))) && ((((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))) >= var_1_39) ? (var_1_10 == ((double) var_1_14)) : (var_1_55 ? (var_1_10 == ((double) var_1_14)) : ((var_1_39 <= (- (var_1_39 * var_1_51))) ? (var_1_10 == ((double) ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))) : 1)))) && (last_1_var_1_21 ? (var_1_8 ? (var_1_16 == ((unsigned short int) last_1_var_1_61)) : 1) : (last_1_var_1_55 ? (var_1_16 == ((unsigned short int) (((((var_1_17) < (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_17) : (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))))) - ((var_1_20 - 64) + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) : 1))) && (var_1_55 ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) 0)))) && ((! ((var_1_14 / var_1_24) >= 24.8)) ? (var_1_9 ? ((((((var_1_36) < (var_1_18)) ? (var_1_36) : (var_1_18))) >= ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) ? ((var_1_4 < ((var_1_25 - var_1_26) + (- var_1_17))) ? (var_1_23 == ((unsigned char) ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) : (var_1_23 == ((unsigned char) (((((var_1_28) < (128)) ? (var_1_28) : (128))) - var_1_26)))) : (var_1_23 == ((unsigned char) var_1_26))) : (var_1_23 == ((unsigned char) var_1_28))) : 1)) && (var_1_22 ? ((var_1_39 != var_1_24) ? (var_1_29 == ((unsigned char) (var_1_28 - 32))) : (var_1_29 == ((unsigned char) (var_1_28 - var_1_26)))) : (var_1_29 == ((unsigned char) ((((((var_1_30 + var_1_31) - var_1_26)) > (var_1_28)) ? (((var_1_30 + var_1_31) - var_1_26)) : (var_1_28))))))) && ((last_1_var_1_32 > var_1_25) ? (var_1_1 ? (var_1_32 == ((unsigned short int) var_1_18)) : 1) : ((var_1_54 > (var_1_31 / var_1_4)) ? (var_1_32 == ((unsigned short int) ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))))) : ((((((last_1_var_1_32) > (var_1_20)) ? (last_1_var_1_32) : (var_1_20))) > var_1_27) ? (var_1_32 == ((unsigned short int) (((((32) < 0 ) ? -(32) : (32))) + (var_1_33 - var_1_31)))) : (var_1_32 == ((unsigned short int) (var_1_25 + (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + (8 + var_1_27))))))))) && ((var_1_36 > ((((((((last_1_var_1_35) > (var_1_31)) ? (last_1_var_1_35) : (var_1_31)))) < (32)) ? (((((last_1_var_1_35) > (var_1_31)) ? (last_1_var_1_35) : (var_1_31)))) : (32)))) ? ((var_1_28 < (var_1_25 % var_1_31)) ? (var_1_35 == ((unsigned short int) (((((var_1_18 - var_1_30)) > ((var_1_17 - var_1_25))) ? ((var_1_18 - var_1_30)) : ((var_1_17 - var_1_25)))))) : (var_1_9 ? (var_1_35 == ((unsigned short int) var_1_18)) : (var_1_35 == ((unsigned short int) 16)))) : (var_1_35 == ((unsigned short int) 256)))) && ((last_1_var_1_45 > (last_1_var_1_45 / var_1_25)) ? (((last_1_var_1_10 / ((((var_1_24) < (var_1_38)) ? (var_1_24) : (var_1_38)))) <= (var_1_14 + (last_1_var_1_10 * last_1_var_1_40))) ? (var_1_36 == ((unsigned long int) (var_1_27 + var_1_28))) : (((var_1_30 >= last_1_var_1_45) || ((9.5f / var_1_38) != last_1_var_1_10)) ? ((var_1_31 < (var_1_25 - var_1_26)) ? (var_1_36 == ((unsigned long int) ((((var_1_33) < (2u)) ? (var_1_33) : (2u))))) : (var_1_36 == ((unsigned long int) var_1_18))) : 1)) : (var_1_36 == ((unsigned long int) var_1_20)))) && ((! (var_1_1 && var_1_58)) ? (var_1_39 == ((double) ((((var_1_15) < (4.25)) ? (var_1_15) : (4.25))))) : (var_1_39 == ((double) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))))) && ((var_1_61 == var_1_25) ? ((var_1_1 && var_1_58) ? ((((((var_1_36) > (var_1_30)) ? (var_1_36) : (var_1_30))) > var_1_27) ? (var_1_40 == ((float) var_1_15)) : ((var_1_33 <= 10) ? (var_1_40 == ((float) (((((var_1_41 - var_1_42)) < (var_1_15)) ? ((var_1_41 - var_1_42)) : (var_1_15))))) : (var_1_40 == ((float) ((((((var_1_43) < (9.4f)) ? (var_1_43) : (9.4f))) + var_1_44) - var_1_41))))) : 1) : (var_1_40 == ((float) var_1_42)))) && ((var_1_38 == var_1_24) ? (var_1_55 ? (var_1_45 == ((unsigned long int) ((var_1_46 - ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) - var_1_25))) : (var_1_45 == ((unsigned long int) (var_1_46 - ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))))) : (((var_1_35 / var_1_4) >= 4) ? ((var_1_27 < var_1_16) ? (var_1_45 == ((unsigned long int) ((var_1_48 - (var_1_49 - var_1_54)) + (var_1_26 + ((((var_1_27) < (var_1_17)) ? (var_1_27) : (var_1_17))))))) : 1) : ((var_1_43 < var_1_51) ? (var_1_45 == ((unsigned long int) (((((var_1_50 - ((((var_1_30) > (var_1_19)) ? (var_1_30) : (var_1_19))))) < (((((var_1_27) < ((4243127044u - var_1_59))) ? (var_1_27) : ((4243127044u - var_1_59)))))) ? ((var_1_50 - ((((var_1_30) > (var_1_19)) ? (var_1_30) : (var_1_19))))) : (((((var_1_27) < ((4243127044u - var_1_59))) ? (var_1_27) : ((4243127044u - var_1_59))))))))) : (var_1_45 == ((unsigned long int) (var_1_34 + ((((((((var_1_54) < (var_1_19)) ? (var_1_54) : (var_1_19)))) > (var_1_25)) ? (((((var_1_54) < (var_1_19)) ? (var_1_54) : (var_1_19)))) : (var_1_25)))))))))) && (var_1_51 == ((double) (var_1_43 + (var_1_44 - ((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53)))))))) && (var_1_54 == ((signed long int) (var_1_30 + (var_1_33 + last_1_var_1_59))))) && (((- ((((256u) > (var_1_20)) ? (256u) : (var_1_20)))) <= (- (var_1_50 | 16u))) ? (last_1_var_1_58 ? (var_1_55 == ((unsigned char) ((-10 < var_1_4) && var_1_8))) : 1) : (((1 << var_1_34) >= (~ last_1_var_1_36)) ? ((var_1_25 < var_1_31) ? (var_1_55 == ((unsigned char) (! var_1_22))) : (var_1_55 == ((unsigned char) (var_1_7 || var_1_8)))) : (var_1_55 == ((unsigned char) (var_1_22 && var_1_57)))))) && (var_1_1 ? (var_1_58 == ((unsigned char) (var_1_22 && ((var_1_17 <= var_1_31) || (var_1_7 || var_1_57))))) : (var_1_58 == ((unsigned char) ((! var_1_22) || (var_1_7 || var_1_8)))))) && ((var_1_15 > var_1_40) ? ((4 >= var_1_27) ? ((var_1_18 == ((var_1_33 + var_1_54) | var_1_54)) ? (var_1_59 == ((unsigned char) ((((var_1_60) > (var_1_27)) ? (var_1_60) : (var_1_27))))) : (var_1_59 == ((unsigned char) var_1_26))) : 1) : (((31.51f < var_1_52) || var_1_58) ? (var_1_59 == ((unsigned char) (var_1_28 - var_1_30))) : (var_1_59 == ((unsigned char) var_1_28))))) && (last_1_var_1_55 ? ((var_1_57 && last_1_var_1_1) ? ((last_1_var_1_36 < (var_1_17 / var_1_49)) ? ((last_1_var_1_45 < last_1_var_1_54) ? (var_1_61 == ((unsigned long int) var_1_31)) : (var_1_61 == ((unsigned long int) var_1_34))) : (var_1_61 == ((unsigned long int) var_1_18))) : 1) : (var_1_61 == ((unsigned long int) last_1_var_1_16)))
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
