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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_7 = 9.75;
double var_1_8 = 0.0;
double var_1_9 = 0.0;
double var_1_10 = 8.5;
signed short int var_1_11 = 100;
signed long int var_1_13 = -128;
signed char var_1_14 = -10;
signed char var_1_15 = 4;
signed char var_1_16 = -2;
signed char var_1_17 = 50;
signed short int var_1_18 = -5;
signed short int var_1_19 = 10000;
signed short int var_1_20 = 25;
float var_1_21 = 31.7;
unsigned short int var_1_22 = 0;
unsigned short int var_1_23 = 0;
float var_1_24 = 10000000000000.5;
float var_1_25 = 32.2;
float var_1_26 = 5.25;
float var_1_27 = 99.25;
float var_1_28 = 0.7;
float var_1_32 = 127.25;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
double var_1_35 = 1.875;
float var_1_36 = 256.5;
signed short int var_1_37 = 128;
signed short int var_1_38 = 18873;
unsigned char var_1_39 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
signed short int var_1_43 = 1;
signed short int var_1_44 = 28720;
unsigned short int var_1_45 = 16;
unsigned short int var_1_46 = 0;
unsigned short int var_1_47 = 39740;
signed short int var_1_48 = -25;
unsigned long int var_1_49 = 2;
unsigned long int var_1_50 = 5;
unsigned long int var_1_51 = 2020144391;
unsigned long int var_1_52 = 1853316859;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 64;
signed short int var_1_56 = -16;
signed long int var_1_57 = 8;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 200;
signed long int var_1_60 = -4;
float var_1_61 = 50.25;
unsigned short int last_1_var_1_1 = 32;
signed short int last_1_var_1_11 = 100;
signed short int last_1_var_1_18 = -5;
unsigned char last_1_var_1_33 = 1;
signed short int last_1_var_1_43 = 1;
unsigned short int last_1_var_1_45 = 16;
signed short int last_1_var_1_48 = -25;
unsigned long int last_1_var_1_49 = 2;
unsigned char last_1_var_1_53 = 1;
signed short int last_1_var_1_56 = -16;
unsigned char last_1_var_1_58 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_34) {
  var_1_39 = (last_1_var_1_33 && var_1_41);
 } else {
  var_1_39 = (last_1_var_1_53 || var_1_42);
 }
 unsigned long int stepLocal_16 = (~ last_1_var_1_49) + var_1_23;
 if (stepLocal_16 < var_1_47) {
  var_1_57 = ((((var_1_16) > ((((((last_1_var_1_48 + last_1_var_1_11)) > (var_1_5)) ? ((last_1_var_1_48 + last_1_var_1_11)) : (var_1_5))))) ? (var_1_16) : ((((((last_1_var_1_48 + last_1_var_1_11)) > (var_1_5)) ? ((last_1_var_1_48 + last_1_var_1_11)) : (var_1_5))))));
 } else {
  var_1_57 = (((((last_1_var_1_48) > (64)) ? (last_1_var_1_48) : (64))) + last_1_var_1_1);
 }
 var_1_48 = (var_1_57 - var_1_23);
 if (last_1_var_1_58 >= ((((last_1_var_1_18) < (var_1_5)) ? (last_1_var_1_18) : (var_1_5)))) {
  var_1_33 = var_1_34;
 }
 if (var_1_39) {
  var_1_37 = ((var_1_38 - var_1_23) - var_1_19);
 } else {
  if (! (var_1_33 && (var_1_34 || var_1_39))) {
   if (var_1_39) {
    var_1_37 = 128;
   } else {
    var_1_37 = var_1_16;
   }
  }
 }
 unsigned short int stepLocal_15 = var_1_23;
 signed short int stepLocal_14 = var_1_20;
 if (var_1_57 >= stepLocal_15) {
  if (last_1_var_1_56 > stepLocal_14) {
   var_1_56 = ((var_1_38 - var_1_19) - var_1_57);
  } else {
   var_1_56 = (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) + var_1_15);
  }
 } else {
  var_1_56 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 }
 var_1_13 = ((((((((last_1_var_1_45) > (last_1_var_1_18)) ? (last_1_var_1_45) : (last_1_var_1_18)))) < (var_1_5)) ? (((((last_1_var_1_45) > (last_1_var_1_18)) ? (last_1_var_1_45) : (last_1_var_1_18)))) : (var_1_5)));
 var_1_7 = (256.08 - (var_1_8 - (var_1_9 - var_1_10)));
 if (var_1_34) {
  var_1_58 = ((var_1_59 - var_1_22) - (8 + var_1_23));
 }
 signed long int stepLocal_18 = 10;
 unsigned long int stepLocal_17 = var_1_52;
 if (((((var_1_54) < (var_1_57)) ? (var_1_54) : (var_1_57))) < stepLocal_18) {
  if (var_1_23 > stepLocal_17) {
   var_1_61 = ((63.75f + var_1_28) - (var_1_25 + var_1_10));
  } else {
   var_1_61 = var_1_32;
  }
 }
 unsigned char stepLocal_13 = var_1_34;
 if (stepLocal_13 && var_1_39) {
  var_1_53 = 1;
 } else {
  var_1_53 = ((var_1_24 > var_1_7) && var_1_41);
 }
 if (var_1_5 > var_1_13) {
  var_1_18 = (var_1_56 + var_1_15);
 } else {
  if (var_1_13 <= var_1_37) {
   var_1_18 = ((var_1_37 + (var_1_19 - var_1_58)) - var_1_20);
  }
 }
 if (var_1_53 || var_1_39) {
  if ((-64 > var_1_16) || (var_1_39 || (var_1_22 <= var_1_37))) {
   var_1_36 = (var_1_27 + var_1_10);
  } else {
   if (var_1_17 >= (var_1_22 - var_1_23)) {
    var_1_36 = var_1_26;
   } else {
    var_1_36 = ((((var_1_32) > (var_1_10)) ? (var_1_32) : (var_1_10)));
   }
  }
 }
 if (var_1_33 || (var_1_7 <= var_1_27)) {
  var_1_60 = var_1_16;
 } else {
  var_1_60 = var_1_19;
 }
 unsigned short int stepLocal_9 = var_1_22;
 if (stepLocal_9 != ((((var_1_20) < (var_1_57)) ? (var_1_20) : (var_1_57)))) {
  var_1_45 = (var_1_5 + ((var_1_57 + var_1_18) + var_1_46));
 } else {
  var_1_45 = (var_1_47 - (var_1_23 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))));
 }
 if (var_1_24 == (8.4f - var_1_9)) {
  if (var_1_7 > (- (var_1_25 / var_1_9))) {
   var_1_35 = var_1_9;
  } else {
   var_1_35 = var_1_32;
  }
 } else {
  if (var_1_34) {
   if (var_1_5 < var_1_60) {
    var_1_35 = var_1_24;
   } else {
    var_1_35 = var_1_8;
   }
  }
 }
 signed long int stepLocal_12 = 0;
 unsigned char stepLocal_11 = var_1_23 == (var_1_57 * var_1_20);
 unsigned char stepLocal_10 = var_1_33;
 if (stepLocal_10 && ((var_1_35 * var_1_36) > 1.00000000000006E13)) {
  if (stepLocal_12 <= var_1_13) {
   var_1_49 = var_1_50;
  }
 } else {
  if (stepLocal_11 || (var_1_8 >= var_1_27)) {
   var_1_49 = ((var_1_51 + var_1_52) - var_1_47);
  } else {
   var_1_49 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
  }
 }
 if (last_1_var_1_11 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) {
  if ((var_1_10 + (var_1_35 / var_1_9)) >= var_1_8) {
   var_1_11 = (var_1_13 - 256);
  }
 } else {
  if (var_1_53) {
   var_1_11 = last_1_var_1_11;
  } else {
   var_1_11 = var_1_13;
  }
 }
 signed long int stepLocal_0 = var_1_11 | var_1_37;
 if (stepLocal_0 >= (50 * var_1_13)) {
  var_1_1 = ((((var_1_37) < (((((var_1_11) > ((var_1_5 + var_1_6))) ? (var_1_11) : ((var_1_5 + var_1_6)))))) ? (var_1_37) : (((((var_1_11) > ((var_1_5 + var_1_6))) ? (var_1_11) : ((var_1_5 + var_1_6)))))));
 }
 if (var_1_1 < var_1_5) {
  if ((32 + (var_1_60 - var_1_56)) < 25) {
   var_1_14 = ((((var_1_15) > ((var_1_16 + var_1_17))) ? (var_1_15) : ((var_1_16 + var_1_17))));
  }
 } else {
  var_1_14 = (((((var_1_16 + var_1_17)) < (var_1_15)) ? ((var_1_16 + var_1_17)) : (var_1_15)));
 }
 unsigned char stepLocal_8 = var_1_33;
 signed long int stepLocal_7 = var_1_6 + (~ var_1_60);
 signed short int stepLocal_6 = var_1_11;
 signed long int stepLocal_5 = var_1_13;
 signed long int stepLocal_4 = -4;
 signed long int stepLocal_3 = - var_1_19;
 unsigned short int stepLocal_2 = var_1_1;
 if (stepLocal_8 && ((- var_1_60) < var_1_20)) {
  if (stepLocal_7 <= var_1_38) {
   var_1_43 = (var_1_22 - (var_1_44 - var_1_23));
  } else {
   if (var_1_22 < stepLocal_5) {
    if (stepLocal_4 > var_1_60) {
     var_1_43 = ((((var_1_60 + var_1_17) < 0 ) ? -(var_1_60 + var_1_17) : (var_1_60 + var_1_17)));
    }
   } else {
    if (! var_1_41) {
     var_1_43 = (var_1_19 - var_1_23);
    } else {
     var_1_43 = ((((var_1_17) < (var_1_23)) ? (var_1_17) : (var_1_23)));
    }
   }
  }
 } else {
  if (stepLocal_2 > -256) {
   if (stepLocal_3 >= ((var_1_60 - var_1_22) / var_1_38)) {
    if (var_1_19 <= stepLocal_6) {
     var_1_43 = (var_1_60 - var_1_19);
    } else {
     var_1_43 = (((((var_1_60) < (var_1_44)) ? (var_1_60) : (var_1_44))) - var_1_38);
    }
   } else {
    var_1_43 = ((((last_1_var_1_43) > (var_1_22)) ? (last_1_var_1_43) : (var_1_22)));
   }
  } else {
   var_1_43 = ((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)));
  }
 }
 signed short int stepLocal_1 = var_1_43;
 if ((var_1_19 << ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) <= stepLocal_1) {
  if (var_1_39) {
   var_1_21 = ((var_1_10 - (var_1_9 - var_1_24)) + ((var_1_25 - var_1_26) + (var_1_27 - var_1_28)));
  } else {
   if (var_1_39) {
    if (var_1_39) {
     if (! var_1_39) {
      var_1_21 = (((((var_1_26 + (var_1_28 - var_1_25))) > (((((var_1_8) < (var_1_24)) ? (var_1_8) : (var_1_24))))) ? ((var_1_26 + (var_1_28 - var_1_25))) : (((((var_1_8) < (var_1_24)) ? (var_1_8) : (var_1_24))))));
     } else {
      var_1_21 = (var_1_24 - var_1_9);
     }
    } else {
     if (var_1_28 >= (- var_1_10)) {
      var_1_21 = (var_1_10 - var_1_24);
     } else {
      var_1_21 = (var_1_25 - var_1_8);
     }
    }
   }
  }
 } else {
  var_1_21 = var_1_32;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 4611686.018427383000e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 2305843.009213691400e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 8191);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 16382);
 assume_abort_if_not(var_1_38 <= 32766);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 16383);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 16383);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 32767);
 assume_abort_if_not(var_1_47 <= 65534);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 1073741823);
 assume_abort_if_not(var_1_51 <= 2147483647);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 1073741824);
 assume_abort_if_not(var_1_52 <= 2147483647);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 255);
 assume_abort_if_not(var_1_54 != 0);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 190);
 assume_abort_if_not(var_1_59 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_58 = var_1_58;
}
int property(void) {
 return (((((((((((((((((((((((var_1_11 | var_1_37) >= (50 * var_1_13)) ? (var_1_1 == ((unsigned short int) ((((var_1_37) < (((((var_1_11) > ((var_1_5 + var_1_6))) ? (var_1_11) : ((var_1_5 + var_1_6)))))) ? (var_1_37) : (((((var_1_11) > ((var_1_5 + var_1_6))) ? (var_1_11) : ((var_1_5 + var_1_6))))))))) : 1) && (var_1_7 == ((double) (256.08 - (var_1_8 - (var_1_9 - var_1_10)))))) && ((last_1_var_1_11 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? (((var_1_10 + (var_1_35 / var_1_9)) >= var_1_8) ? (var_1_11 == ((signed short int) (var_1_13 - 256))) : 1) : (var_1_53 ? (var_1_11 == ((signed short int) last_1_var_1_11)) : (var_1_11 == ((signed short int) var_1_13))))) && (var_1_13 == ((signed long int) ((((((((last_1_var_1_45) > (last_1_var_1_18)) ? (last_1_var_1_45) : (last_1_var_1_18)))) < (var_1_5)) ? (((((last_1_var_1_45) > (last_1_var_1_18)) ? (last_1_var_1_45) : (last_1_var_1_18)))) : (var_1_5)))))) && ((var_1_1 < var_1_5) ? (((32 + (var_1_60 - var_1_56)) < 25) ? (var_1_14 == ((signed char) ((((var_1_15) > ((var_1_16 + var_1_17))) ? (var_1_15) : ((var_1_16 + var_1_17)))))) : 1) : (var_1_14 == ((signed char) (((((var_1_16 + var_1_17)) < (var_1_15)) ? ((var_1_16 + var_1_17)) : (var_1_15))))))) && ((var_1_5 > var_1_13) ? (var_1_18 == ((signed short int) (var_1_56 + var_1_15))) : ((var_1_13 <= var_1_37) ? (var_1_18 == ((signed short int) ((var_1_37 + (var_1_19 - var_1_58)) - var_1_20))) : 1))) && (((var_1_19 << ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) <= var_1_43) ? (var_1_39 ? (var_1_21 == ((float) ((var_1_10 - (var_1_9 - var_1_24)) + ((var_1_25 - var_1_26) + (var_1_27 - var_1_28))))) : (var_1_39 ? (var_1_39 ? ((! var_1_39) ? (var_1_21 == ((float) (((((var_1_26 + (var_1_28 - var_1_25))) > (((((var_1_8) < (var_1_24)) ? (var_1_8) : (var_1_24))))) ? ((var_1_26 + (var_1_28 - var_1_25))) : (((((var_1_8) < (var_1_24)) ? (var_1_8) : (var_1_24)))))))) : (var_1_21 == ((float) (var_1_24 - var_1_9)))) : ((var_1_28 >= (- var_1_10)) ? (var_1_21 == ((float) (var_1_10 - var_1_24))) : (var_1_21 == ((float) (var_1_25 - var_1_8))))) : 1)) : (var_1_21 == ((float) var_1_32)))) && ((last_1_var_1_58 >= ((((last_1_var_1_18) < (var_1_5)) ? (last_1_var_1_18) : (var_1_5)))) ? (var_1_33 == ((unsigned char) var_1_34)) : 1)) && ((var_1_24 == (8.4f - var_1_9)) ? ((var_1_7 > (- (var_1_25 / var_1_9))) ? (var_1_35 == ((double) var_1_9)) : (var_1_35 == ((double) var_1_32))) : (var_1_34 ? ((var_1_5 < var_1_60) ? (var_1_35 == ((double) var_1_24)) : (var_1_35 == ((double) var_1_8))) : 1))) && ((var_1_53 || var_1_39) ? (((-64 > var_1_16) || (var_1_39 || (var_1_22 <= var_1_37))) ? (var_1_36 == ((float) (var_1_27 + var_1_10))) : ((var_1_17 >= (var_1_22 - var_1_23)) ? (var_1_36 == ((float) var_1_26)) : (var_1_36 == ((float) ((((var_1_32) > (var_1_10)) ? (var_1_32) : (var_1_10))))))) : 1)) && (var_1_39 ? (var_1_37 == ((signed short int) ((var_1_38 - var_1_23) - var_1_19))) : ((! (var_1_33 && (var_1_34 || var_1_39))) ? (var_1_39 ? (var_1_37 == ((signed short int) 128)) : (var_1_37 == ((signed short int) var_1_16))) : 1))) && (var_1_34 ? (var_1_39 == ((unsigned char) (last_1_var_1_33 && var_1_41))) : (var_1_39 == ((unsigned char) (last_1_var_1_53 || var_1_42))))) && ((var_1_33 && ((- var_1_60) < var_1_20)) ? (((var_1_6 + (~ var_1_60)) <= var_1_38) ? (var_1_43 == ((signed short int) (var_1_22 - (var_1_44 - var_1_23)))) : ((var_1_22 < var_1_13) ? ((-4 > var_1_60) ? (var_1_43 == ((signed short int) ((((var_1_60 + var_1_17) < 0 ) ? -(var_1_60 + var_1_17) : (var_1_60 + var_1_17))))) : 1) : ((! var_1_41) ? (var_1_43 == ((signed short int) (var_1_19 - var_1_23))) : (var_1_43 == ((signed short int) ((((var_1_17) < (var_1_23)) ? (var_1_17) : (var_1_23)))))))) : ((var_1_1 > -256) ? (((- var_1_19) >= ((var_1_60 - var_1_22) / var_1_38)) ? ((var_1_19 <= var_1_11) ? (var_1_43 == ((signed short int) (var_1_60 - var_1_19))) : (var_1_43 == ((signed short int) (((((var_1_60) < (var_1_44)) ? (var_1_60) : (var_1_44))) - var_1_38)))) : (var_1_43 == ((signed short int) ((((last_1_var_1_43) > (var_1_22)) ? (last_1_var_1_43) : (var_1_22)))))) : (var_1_43 == ((signed short int) ((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)))))))) && ((var_1_22 != ((((var_1_20) < (var_1_57)) ? (var_1_20) : (var_1_57)))) ? (var_1_45 == ((unsigned short int) (var_1_5 + ((var_1_57 + var_1_18) + var_1_46)))) : (var_1_45 == ((unsigned short int) (var_1_47 - (var_1_23 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))))) && (var_1_48 == ((signed short int) (var_1_57 - var_1_23)))) && ((var_1_33 && ((var_1_35 * var_1_36) > 1.00000000000006E13)) ? ((0 <= var_1_13) ? (var_1_49 == ((unsigned long int) var_1_50)) : 1) : (((var_1_23 == (var_1_57 * var_1_20)) || (var_1_8 >= var_1_27)) ? (var_1_49 == ((unsigned long int) ((var_1_51 + var_1_52) - var_1_47))) : (var_1_49 == ((unsigned long int) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))))) && ((var_1_34 && var_1_39) ? (var_1_53 == ((unsigned char) 1)) : (var_1_53 == ((unsigned char) ((var_1_24 > var_1_7) && var_1_41))))) && ((var_1_57 >= var_1_23) ? ((last_1_var_1_56 > var_1_20) ? (var_1_56 == ((signed short int) ((var_1_38 - var_1_19) - var_1_57))) : (var_1_56 == ((signed short int) (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) + var_1_15)))) : (var_1_56 == ((signed short int) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))) && ((((~ last_1_var_1_49) + var_1_23) < var_1_47) ? (var_1_57 == ((signed long int) ((((var_1_16) > ((((((last_1_var_1_48 + last_1_var_1_11)) > (var_1_5)) ? ((last_1_var_1_48 + last_1_var_1_11)) : (var_1_5))))) ? (var_1_16) : ((((((last_1_var_1_48 + last_1_var_1_11)) > (var_1_5)) ? ((last_1_var_1_48 + last_1_var_1_11)) : (var_1_5)))))))) : (var_1_57 == ((signed long int) (((((last_1_var_1_48) > (64)) ? (last_1_var_1_48) : (64))) + last_1_var_1_1))))) && (var_1_34 ? (var_1_58 == ((unsigned char) ((var_1_59 - var_1_22) - (8 + var_1_23)))) : 1)) && ((var_1_33 || (var_1_7 <= var_1_27)) ? (var_1_60 == ((signed long int) var_1_16)) : (var_1_60 == ((signed long int) var_1_19)))) && ((((((var_1_54) < (var_1_57)) ? (var_1_54) : (var_1_57))) < 10) ? ((var_1_23 > var_1_52) ? (var_1_61 == ((float) ((63.75f + var_1_28) - (var_1_25 + var_1_10)))) : (var_1_61 == ((float) var_1_32))) : 1)
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
