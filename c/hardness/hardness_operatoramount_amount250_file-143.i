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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
unsigned short int var_1_5 = 54686;
unsigned short int var_1_6 = 64;
signed long int var_1_7 = 50;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 1;
unsigned short int var_1_13 = 43448;
unsigned short int var_1_14 = 1000;
unsigned short int var_1_15 = 10000;
unsigned short int var_1_16 = 128;
unsigned short int var_1_17 = 61803;
signed long int var_1_18 = 5;
signed long int var_1_19 = -1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 7.6;
double var_1_27 = 3.6;
double var_1_28 = 10.1;
double var_1_29 = 1.8;
double var_1_30 = 1000000.8;
signed long int var_1_31 = -32;
unsigned short int var_1_32 = 500;
unsigned char var_1_33 = 1;
float var_1_34 = 32.8;
signed char var_1_35 = 50;
signed char var_1_36 = 50;
float var_1_37 = 0.0;
float var_1_38 = 0.0;
float var_1_39 = 0.0;
unsigned char var_1_40 = 4;
unsigned char var_1_41 = 0;
signed short int var_1_42 = -100;
signed short int var_1_43 = 0;
float var_1_44 = -0.375;
double var_1_46 = 0.0;
signed short int var_1_47 = 16;
signed char var_1_48 = 16;
signed char var_1_49 = 32;
signed char var_1_50 = 32;
double var_1_51 = 15.75;
double var_1_53 = 7.6;
unsigned short int var_1_54 = 32;
unsigned short int var_1_55 = 30972;
unsigned short int var_1_56 = 32403;
unsigned short int var_1_57 = 31906;
signed long int var_1_58 = -5;
signed char var_1_59 = -10;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 200;
unsigned char var_1_62 = 1;
unsigned short int last_1_var_1_15 = 10000;
unsigned short int last_1_var_1_16 = 128;
signed long int last_1_var_1_18 = 5;
unsigned char last_1_var_1_33 = 1;
unsigned short int last_1_var_1_54 = 32;
signed long int last_1_var_1_58 = -5;
unsigned char last_1_var_1_60 = 0;
unsigned long int last_1_var_1_61 = 200;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_10 = var_1_6 < (var_1_5 ^ last_1_var_1_58);
 unsigned char stepLocal_9 = var_1_24;
 if (var_1_25) {
  if (stepLocal_10 || (500 < last_1_var_1_15)) {
   if (last_1_var_1_33) {
    if (last_1_var_1_60 && stepLocal_9) {
     var_1_31 = ((((32) < 0 ) ? -(32) : (32)));
    } else {
     var_1_31 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
    }
   }
  } else {
   var_1_31 = last_1_var_1_18;
  }
 } else {
  var_1_31 = last_1_var_1_61;
 }
 signed long int stepLocal_8 = var_1_31;
 if (var_1_11 > stepLocal_8) {
  var_1_18 = (var_1_19 - var_1_12);
 }
 if (var_1_8 && var_1_9) {
  if (var_1_31 <= var_1_40) {
   var_1_62 = (var_1_24 || var_1_25);
  } else {
   var_1_62 = var_1_24;
  }
 } else {
  var_1_62 = var_1_23;
 }
 unsigned short int stepLocal_7 = var_1_13;
 signed long int stepLocal_6 = 5 + var_1_7;
 if (var_1_62) {
  if (stepLocal_7 < var_1_7) {
   if (last_1_var_1_16 > stepLocal_6) {
    if ((last_1_var_1_16 / var_1_7) < (var_1_13 - last_1_var_1_16)) {
     var_1_16 = (((((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) > (50)) ? ((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) : (50)));
    }
   } else {
    var_1_16 = ((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6)));
   }
  } else {
   var_1_16 = (((((5) < 0 ) ? -(5) : (5))) + 128);
  }
 } else {
  var_1_16 = ((var_1_17 - var_1_14) - var_1_6);
 }
 var_1_42 = (((((var_1_41 + var_1_12) < 0 ) ? -(var_1_41 + var_1_12) : (var_1_41 + var_1_12))) - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))));
 if (var_1_19 < var_1_31) {
  var_1_43 = ((((var_1_14) < (var_1_35)) ? (var_1_14) : (var_1_35)));
 }
 if (var_1_30 == ((var_1_46 - var_1_39) - ((((var_1_29) < (var_1_38)) ? (var_1_29) : (var_1_38))))) {
  var_1_44 = (var_1_30 + ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))));
 } else {
  if (var_1_24) {
   var_1_44 = (0.2f - var_1_29);
  }
 }
 var_1_47 = var_1_36;
 unsigned short int stepLocal_20 = var_1_13;
 if (stepLocal_20 == (var_1_55 / var_1_57)) {
  var_1_60 = var_1_21;
 }
 var_1_61 = (((((16u) < 0 ) ? -(16u) : (16u))) + 5u);
 if (var_1_60) {
  var_1_32 = var_1_6;
 } else {
  var_1_32 = var_1_12;
 }
 if (var_1_29 < var_1_37) {
  var_1_58 = ((((var_1_19) > (var_1_32)) ? (var_1_19) : (var_1_32)));
 } else {
  var_1_58 = ((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36)));
 }
 if ((var_1_31 + var_1_32) < (var_1_5 + var_1_14)) {
  var_1_20 = ((var_1_21 && var_1_22) && var_1_23);
 } else {
  var_1_20 = (var_1_24 || var_1_25);
 }
 unsigned char stepLocal_13 = (- var_1_30) >= var_1_29;
 signed long int stepLocal_12 = ((((var_1_10 << var_1_18)) > (var_1_58)) ? ((var_1_10 << var_1_18)) : (var_1_58));
 signed long int stepLocal_11 = var_1_18;
 if ((var_1_35 - var_1_36) >= stepLocal_11) {
  if (var_1_20) {
   if (stepLocal_13 || var_1_21) {
    if (! var_1_25) {
     var_1_34 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
    } else {
     var_1_34 = ((var_1_37 - var_1_29) - ((var_1_38 + var_1_39) - var_1_30));
    }
   }
  } else {
   if (stepLocal_12 < (1 << (var_1_40 + var_1_41))) {
    var_1_34 = (var_1_39 + ((((256.775f) < (var_1_38)) ? (256.775f) : (var_1_38))));
   } else {
    var_1_34 = ((((16.75f) < (var_1_27)) ? (16.75f) : (var_1_27)));
   }
  }
 }
 if (var_1_42 > ((((var_1_58) < (var_1_41)) ? (var_1_58) : (var_1_41)))) {
  var_1_48 = (((var_1_49 + var_1_50) - var_1_41) - var_1_40);
 } else {
  var_1_48 = ((((-1) > (((16 - var_1_49) + var_1_41))) ? (-1) : (((16 - var_1_49) + var_1_41))));
 }
 unsigned char stepLocal_17 = var_1_40;
 if (var_1_58 < stepLocal_17) {
  var_1_53 = (var_1_37 - var_1_38);
 } else {
  var_1_53 = ((((var_1_39) > (var_1_30)) ? (var_1_39) : (var_1_30)));
 }
 signed long int stepLocal_3 = var_1_32 / var_1_7;
 unsigned long int stepLocal_2 = var_1_61;
 unsigned char stepLocal_1 = var_1_20;
 unsigned long int stepLocal_0 = (((var_1_61) < (var_1_32)) ? (var_1_61) : (var_1_32));
 if (var_1_31 != stepLocal_0) {
  if ((- var_1_5) >= stepLocal_3) {
   if (stepLocal_1 || var_1_62) {
    var_1_1 = ((((var_1_6) > ((var_1_10 + 5))) ? (var_1_6) : ((var_1_10 + 5))));
   } else {
    var_1_1 = (var_1_6 + (var_1_11 + var_1_12));
   }
  } else {
   var_1_1 = (var_1_12 + ((((var_1_6) > (var_1_10)) ? (var_1_6) : (var_1_10))));
  }
 } else {
  if (var_1_7 >= stepLocal_2) {
   var_1_1 = (var_1_13 - var_1_10);
  } else {
   var_1_1 = (var_1_11 + ((var_1_14 + 64) + var_1_12));
  }
 }
 signed long int stepLocal_16 = ~ var_1_6;
 signed long int stepLocal_15 = var_1_40 << 2;
 signed short int stepLocal_14 = var_1_43;
 if (var_1_1 != stepLocal_16) {
  if (stepLocal_14 <= var_1_47) {
   if ((- (var_1_36 ^ var_1_11)) != stepLocal_15) {
    var_1_51 = (((((var_1_38) < (var_1_39)) ? (var_1_38) : (var_1_39))) - var_1_37);
   } else {
    var_1_51 = ((((var_1_28) < (var_1_38)) ? (var_1_28) : (var_1_38)));
   }
  }
 } else {
  if (var_1_21) {
   var_1_51 = ((((var_1_30 + var_1_39) < 0 ) ? -(var_1_30 + var_1_39) : (var_1_30 + var_1_39)));
  } else {
   var_1_51 = (var_1_37 - (var_1_38 + ((((var_1_30) > (var_1_39)) ? (var_1_30) : (var_1_39)))));
  }
 }
 if ((var_1_10 / var_1_57) < var_1_35) {
  if (var_1_5 <= var_1_14) {
   if (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) > var_1_46) {
    var_1_59 = ((((0) > (((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40))))) ? (0) : (((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40))))));
   }
  } else {
   if (var_1_41 < (((((var_1_36) > (var_1_1)) ? (var_1_36) : (var_1_1))) / ((((var_1_50) < (var_1_7)) ? (var_1_50) : (var_1_7))))) {
    var_1_59 = (var_1_41 + var_1_49);
   }
  }
 } else {
  var_1_59 = ((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40)));
 }
 unsigned short int stepLocal_19 = var_1_17;
 signed char stepLocal_18 = var_1_50;
 if (stepLocal_18 < last_1_var_1_54) {
  if (var_1_1 <= stepLocal_19) {
   var_1_54 = ((((((var_1_55) > (25062)) ? (var_1_55) : (25062))) + ((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57)))) - 4);
  }
 }
 if (var_1_22 && (var_1_5 < var_1_54)) {
  if (var_1_17 == (var_1_58 * (var_1_13 - var_1_11))) {
   var_1_33 = (((var_1_10 * var_1_7) <= var_1_54) && var_1_25);
  } else {
   if (var_1_23) {
    var_1_33 = var_1_25;
   }
  }
 } else {
  var_1_33 = var_1_21;
 }
 unsigned char stepLocal_5 = var_1_60;
 signed long int stepLocal_4 = 2 - (17647 - 256);
 if (stepLocal_5 && (! var_1_33)) {
  if (stepLocal_4 >= var_1_54) {
   var_1_15 = (var_1_13 - var_1_10);
  } else {
   var_1_15 = ((((var_1_6) < (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_6) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))));
  }
 }
 if (var_1_33) {
  var_1_26 = ((((var_1_27) > (4.25)) ? (var_1_27) : (4.25)));
 } else {
  var_1_26 = ((((var_1_27) < ((var_1_28 + (var_1_29 - var_1_30)))) ? (var_1_27) : ((var_1_28 + (var_1_29 - var_1_30)))));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16384);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 8192);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 49150);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 4611686.018427383000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 2305843.009213691400e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 2305843.009213691400e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 15);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 15);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 4611686.018427388000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 31);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 31);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 16383);
 assume_abort_if_not(var_1_55 <= 32767);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 16384);
 assume_abort_if_not(var_1_56 <= 32767);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 16384);
 assume_abort_if_not(var_1_57 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return (((((((((((((((((((((((var_1_31 != ((((var_1_61) < (var_1_32)) ? (var_1_61) : (var_1_32)))) ? (((- var_1_5) >= (var_1_32 / var_1_7)) ? ((var_1_20 || var_1_62) ? (var_1_1 == ((unsigned short int) ((((var_1_6) > ((var_1_10 + 5))) ? (var_1_6) : ((var_1_10 + 5)))))) : (var_1_1 == ((unsigned short int) (var_1_6 + (var_1_11 + var_1_12))))) : (var_1_1 == ((unsigned short int) (var_1_12 + ((((var_1_6) > (var_1_10)) ? (var_1_6) : (var_1_10))))))) : ((var_1_7 >= var_1_61) ? (var_1_1 == ((unsigned short int) (var_1_13 - var_1_10))) : (var_1_1 == ((unsigned short int) (var_1_11 + ((var_1_14 + 64) + var_1_12)))))) && ((var_1_60 && (! var_1_33)) ? (((2 - (17647 - 256)) >= var_1_54) ? (var_1_15 == ((unsigned short int) (var_1_13 - var_1_10))) : (var_1_15 == ((unsigned short int) ((((var_1_6) < (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_6) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))))) : 1)) && (var_1_62 ? ((var_1_13 < var_1_7) ? ((last_1_var_1_16 > (5 + var_1_7)) ? (((last_1_var_1_16 / var_1_7) < (var_1_13 - last_1_var_1_16)) ? (var_1_16 == ((unsigned short int) (((((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) > (50)) ? ((((((var_1_13) > (53301)) ? (var_1_13) : (53301))) - var_1_10)) : (50))))) : 1) : (var_1_16 == ((unsigned short int) ((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6)))))) : (var_1_16 == ((unsigned short int) (((((5) < 0 ) ? -(5) : (5))) + 128)))) : (var_1_16 == ((unsigned short int) ((var_1_17 - var_1_14) - var_1_6))))) && ((var_1_11 > var_1_31) ? (var_1_18 == ((signed long int) (var_1_19 - var_1_12))) : 1)) && (((var_1_31 + var_1_32) < (var_1_5 + var_1_14)) ? (var_1_20 == ((unsigned char) ((var_1_21 && var_1_22) && var_1_23))) : (var_1_20 == ((unsigned char) (var_1_24 || var_1_25))))) && (var_1_33 ? (var_1_26 == ((double) ((((var_1_27) > (4.25)) ? (var_1_27) : (4.25))))) : (var_1_26 == ((double) ((((var_1_27) < ((var_1_28 + (var_1_29 - var_1_30)))) ? (var_1_27) : ((var_1_28 + (var_1_29 - var_1_30))))))))) && (var_1_25 ? (((var_1_6 < (var_1_5 ^ last_1_var_1_58)) || (500 < last_1_var_1_15)) ? (last_1_var_1_33 ? ((last_1_var_1_60 && var_1_24) ? (var_1_31 == ((signed long int) ((((32) < 0 ) ? -(32) : (32))))) : (var_1_31 == ((signed long int) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))) : 1) : (var_1_31 == ((signed long int) last_1_var_1_18))) : (var_1_31 == ((signed long int) last_1_var_1_61)))) && (var_1_60 ? (var_1_32 == ((unsigned short int) var_1_6)) : (var_1_32 == ((unsigned short int) var_1_12)))) && ((var_1_22 && (var_1_5 < var_1_54)) ? ((var_1_17 == (var_1_58 * (var_1_13 - var_1_11))) ? (var_1_33 == ((unsigned char) (((var_1_10 * var_1_7) <= var_1_54) && var_1_25))) : (var_1_23 ? (var_1_33 == ((unsigned char) var_1_25)) : 1)) : (var_1_33 == ((unsigned char) var_1_21)))) && (((var_1_35 - var_1_36) >= var_1_18) ? (var_1_20 ? ((((- var_1_30) >= var_1_29) || var_1_21) ? ((! var_1_25) ? (var_1_34 == ((float) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) : (var_1_34 == ((float) ((var_1_37 - var_1_29) - ((var_1_38 + var_1_39) - var_1_30))))) : 1) : (((((((var_1_10 << var_1_18)) > (var_1_58)) ? ((var_1_10 << var_1_18)) : (var_1_58))) < (1 << (var_1_40 + var_1_41))) ? (var_1_34 == ((float) (var_1_39 + ((((256.775f) < (var_1_38)) ? (256.775f) : (var_1_38)))))) : (var_1_34 == ((float) ((((16.75f) < (var_1_27)) ? (16.75f) : (var_1_27))))))) : 1)) && (var_1_42 == ((signed short int) (((((var_1_41 + var_1_12) < 0 ) ? -(var_1_41 + var_1_12) : (var_1_41 + var_1_12))) - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) && ((var_1_19 < var_1_31) ? (var_1_43 == ((signed short int) ((((var_1_14) < (var_1_35)) ? (var_1_14) : (var_1_35))))) : 1)) && ((var_1_30 == ((var_1_46 - var_1_39) - ((((var_1_29) < (var_1_38)) ? (var_1_29) : (var_1_38))))) ? (var_1_44 == ((float) (var_1_30 + ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) : (var_1_24 ? (var_1_44 == ((float) (0.2f - var_1_29))) : 1))) && (var_1_47 == ((signed short int) var_1_36))) && ((var_1_42 > ((((var_1_58) < (var_1_41)) ? (var_1_58) : (var_1_41)))) ? (var_1_48 == ((signed char) (((var_1_49 + var_1_50) - var_1_41) - var_1_40))) : (var_1_48 == ((signed char) ((((-1) > (((16 - var_1_49) + var_1_41))) ? (-1) : (((16 - var_1_49) + var_1_41)))))))) && ((var_1_1 != (~ var_1_6)) ? ((var_1_43 <= var_1_47) ? (((- (var_1_36 ^ var_1_11)) != (var_1_40 << 2)) ? (var_1_51 == ((double) (((((var_1_38) < (var_1_39)) ? (var_1_38) : (var_1_39))) - var_1_37))) : (var_1_51 == ((double) ((((var_1_28) < (var_1_38)) ? (var_1_28) : (var_1_38)))))) : 1) : (var_1_21 ? (var_1_51 == ((double) ((((var_1_30 + var_1_39) < 0 ) ? -(var_1_30 + var_1_39) : (var_1_30 + var_1_39))))) : (var_1_51 == ((double) (var_1_37 - (var_1_38 + ((((var_1_30) > (var_1_39)) ? (var_1_30) : (var_1_39)))))))))) && ((var_1_58 < var_1_40) ? (var_1_53 == ((double) (var_1_37 - var_1_38))) : (var_1_53 == ((double) ((((var_1_39) > (var_1_30)) ? (var_1_39) : (var_1_30))))))) && ((var_1_50 < last_1_var_1_54) ? ((var_1_1 <= var_1_17) ? (var_1_54 == ((unsigned short int) ((((((var_1_55) > (25062)) ? (var_1_55) : (25062))) + ((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57)))) - 4))) : 1) : 1)) && ((var_1_29 < var_1_37) ? (var_1_58 == ((signed long int) ((((var_1_19) > (var_1_32)) ? (var_1_19) : (var_1_32))))) : (var_1_58 == ((signed long int) ((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36))))))) && (((var_1_10 / var_1_57) < var_1_35) ? ((var_1_5 <= var_1_14) ? ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) > var_1_46) ? (var_1_59 == ((signed char) ((((0) > (((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40))))) ? (0) : (((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40)))))))) : 1) : ((var_1_41 < (((((var_1_36) > (var_1_1)) ? (var_1_36) : (var_1_1))) / ((((var_1_50) < (var_1_7)) ? (var_1_50) : (var_1_7))))) ? (var_1_59 == ((signed char) (var_1_41 + var_1_49))) : 1)) : (var_1_59 == ((signed char) ((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40))))))) && ((var_1_13 == (var_1_55 / var_1_57)) ? (var_1_60 == ((unsigned char) var_1_21)) : 1)) && (var_1_61 == ((unsigned long int) (((((16u) < 0 ) ? -(16u) : (16u))) + 5u)))) && ((var_1_8 && var_1_9) ? ((var_1_31 <= var_1_40) ? (var_1_62 == ((unsigned char) (var_1_24 || var_1_25))) : (var_1_62 == ((unsigned char) var_1_24))) : (var_1_62 == ((unsigned char) var_1_23)))
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
