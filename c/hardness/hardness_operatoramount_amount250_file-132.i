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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
signed long int var_1_6 = 200;
signed long int var_1_7 = 16;
signed long int var_1_8 = 32;
signed long int var_1_9 = 256;
unsigned char var_1_10 = 32;
signed char var_1_11 = -4;
signed char var_1_12 = -32;
signed char var_1_13 = -2;
float var_1_14 = 4.2;
signed short int var_1_15 = -8;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 64;
signed short int var_1_18 = -50;
float var_1_19 = 7.96;
double var_1_20 = 8.75;
float var_1_21 = 5.15;
float var_1_22 = 15.5;
float var_1_23 = 7.25;
float var_1_24 = 49.1;
float var_1_25 = 15.75;
signed long int var_1_26 = -16;
signed char var_1_27 = 64;
unsigned char var_1_28 = 1;
signed char var_1_29 = 0;
signed char var_1_30 = 0;
signed char var_1_31 = 2;
signed char var_1_32 = -64;
signed long int var_1_33 = -32;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
signed char var_1_36 = 8;
unsigned long int var_1_37 = 100;
unsigned long int var_1_38 = 2123371663;
unsigned long int var_1_39 = 3757436863;
double var_1_40 = 16.4;
double var_1_41 = 50.5;
double var_1_42 = 9.5;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 128;
double var_1_46 = 9.75;
double var_1_47 = 8.75;
double var_1_48 = 100.4;
signed short int var_1_49 = 5;
signed short int var_1_50 = 23898;
signed short int var_1_51 = 10000;
signed char var_1_52 = 8;
signed char var_1_53 = -8;
signed char var_1_54 = 2;
signed char var_1_55 = -4;
signed char var_1_56 = -10;
unsigned char var_1_57 = 64;
float var_1_58 = 9.5;
float var_1_59 = 0.0;
float var_1_60 = 32.75;
unsigned short int var_1_61 = 5;
unsigned short int var_1_62 = 0;
signed char var_1_63 = -8;
signed char var_1_64 = -5;
unsigned char last_1_var_1_1 = 5;
signed short int last_1_var_1_15 = -8;
float last_1_var_1_19 = 7.96;
unsigned long int last_1_var_1_37 = 100;
double last_1_var_1_40 = 16.4;
signed short int last_1_var_1_49 = 5;
unsigned short int last_1_var_1_61 = 5;
void initially(void) {
}
void step(void) {
 if (var_1_8 < last_1_var_1_61) {
  var_1_26 = ((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49)));
 }
 if (var_1_35) {
  if (var_1_41 > last_1_var_1_40) {
   if (var_1_24 <= 256.8f) {
    var_1_58 = ((((var_1_47) > ((var_1_48 + var_1_42))) ? (var_1_47) : ((var_1_48 + var_1_42))));
   } else {
    var_1_58 = (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - (var_1_59 - var_1_60));
   }
  } else {
   var_1_58 = ((((var_1_42) < (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21))))) ? (var_1_42) : (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21))))));
  }
 } else {
  var_1_58 = ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)));
 }
 var_1_34 = (var_1_28 && var_1_35);
 if (var_1_34) {
  var_1_36 = ((((((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)))) > (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) ? (((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)))) : (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))));
 } else {
  if (var_1_35) {
   var_1_36 = 10;
  } else {
   var_1_36 = -10;
  }
 }
 var_1_57 = ((((var_1_30) < (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) ? (var_1_30) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))));
 var_1_62 = var_1_44;
 if (var_1_34) {
  if (var_1_35) {
   var_1_63 = (var_1_55 + (var_1_54 + var_1_56));
  } else {
   var_1_63 = ((var_1_30 - var_1_29) + (var_1_64 + var_1_55));
  }
 } else {
  var_1_63 = var_1_56;
 }
 signed long int stepLocal_0 = (var_1_6 + var_1_7) - ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
 if ((last_1_var_1_1 * var_1_62) == stepLocal_0) {
  var_1_1 = var_1_10;
 }
 if ((31.5 / var_1_20) != ((((last_1_var_1_19) > (var_1_14)) ? (last_1_var_1_19) : (var_1_14)))) {
  if (var_1_34) {
   if (var_1_17 < var_1_7) {
    var_1_19 = (((((var_1_21 - var_1_22)) > (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25)))))) ? ((var_1_21 - var_1_22)) : (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25)))))));
   } else {
    var_1_19 = var_1_24;
   }
  } else {
   if (var_1_20 < var_1_23) {
    var_1_19 = ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)));
   } else {
    var_1_19 = var_1_25;
   }
  }
 }
 if (1.00000003E7f > var_1_24) {
  if (var_1_6 != var_1_57) {
   if (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) > var_1_12) {
    var_1_52 = (((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))) + var_1_53);
   } else {
    var_1_52 = (var_1_29 + (var_1_54 + var_1_55));
   }
  } else {
   if (var_1_45 <= var_1_7) {
    var_1_52 = ((var_1_54 + ((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56)))) + ((((-50) < 0 ) ? -(-50) : (-50))));
   }
  }
 } else {
  var_1_52 = var_1_30;
 }
 if (var_1_19 < (var_1_19 + var_1_58)) {
  var_1_15 = var_1_57;
 } else {
  if ((256u < last_1_var_1_15) || var_1_34) {
   var_1_15 = (((((var_1_57 - var_1_17)) < (var_1_18)) ? ((var_1_57 - var_1_17)) : (var_1_18)));
  } else {
   var_1_15 = (((((var_1_17 - var_1_57)) < (last_1_var_1_15)) ? ((var_1_17 - var_1_57)) : (last_1_var_1_15)));
  }
 }
 signed long int stepLocal_14 = (var_1_29 + var_1_33) / var_1_44;
 unsigned char stepLocal_13 = var_1_45;
 unsigned char stepLocal_12 = var_1_34;
 if (stepLocal_12 && var_1_35) {
  if (stepLocal_13 < var_1_17) {
   var_1_46 = (var_1_41 + (var_1_47 + var_1_48));
  }
 } else {
  if (stepLocal_14 >= ((var_1_38 - var_1_15) - var_1_30)) {
   var_1_46 = (var_1_42 + ((((var_1_47) > (var_1_41)) ? (var_1_47) : (var_1_41))));
  }
 }
 signed long int stepLocal_7 = var_1_7;
 signed long int stepLocal_6 = var_1_29 - var_1_26;
 signed long int stepLocal_5 = var_1_7;
 if (stepLocal_5 <= (var_1_15 / ((((var_1_33) < (var_1_38)) ? (var_1_33) : (var_1_38))))) {
  if ((var_1_36 % var_1_33) >= stepLocal_6) {
   var_1_40 = var_1_24;
  } else {
   if (8.3 < (var_1_58 / var_1_20)) {
    if (var_1_36 <= stepLocal_7) {
     var_1_40 = (var_1_41 + var_1_42);
    } else {
     var_1_40 = var_1_22;
    }
   } else {
    var_1_40 = var_1_23;
   }
  }
 } else {
  var_1_40 = var_1_24;
 }
 unsigned char stepLocal_2 = var_1_16;
 if (stepLocal_2 && var_1_28) {
  if (var_1_24 <= var_1_40) {
   var_1_27 = ((var_1_29 + var_1_30) - var_1_31);
  } else {
   var_1_27 = ((((var_1_31) > (8)) ? (var_1_31) : (8)));
  }
 } else {
  var_1_27 = var_1_31;
 }
 if (((((var_1_40) < ((5.6 - var_1_59))) ? (var_1_40) : ((5.6 - var_1_59)))) <= ((((var_1_23) > (var_1_25)) ? (var_1_23) : (var_1_25)))) {
  var_1_61 = var_1_29;
 } else {
  var_1_61 = var_1_51;
 }
 unsigned char stepLocal_4 = var_1_1;
 if (((var_1_31 + 100) - var_1_61) == stepLocal_4) {
  if (((((var_1_25) > ((var_1_24 - var_1_21))) ? (var_1_25) : ((var_1_24 - var_1_21)))) <= ((((var_1_58) < (var_1_46)) ? (var_1_58) : (var_1_46)))) {
   var_1_37 = (((((((((3826329098u) < 0 ) ? -(3826329098u) : (3826329098u))) - (var_1_38 - var_1_7))) < ((var_1_39 - (last_1_var_1_37 + var_1_1)))) ? ((((((3826329098u) < 0 ) ? -(3826329098u) : (3826329098u))) - (var_1_38 - var_1_7))) : ((var_1_39 - (last_1_var_1_37 + var_1_1)))));
  }
 }
 unsigned long int stepLocal_18 = var_1_37;
 unsigned long int stepLocal_17 = var_1_39 - 25u;
 unsigned char stepLocal_16 = var_1_22 < var_1_41;
 unsigned long int stepLocal_15 = var_1_10 + var_1_37;
 if (var_1_34) {
  if (-5 >= stepLocal_18) {
   if (stepLocal_15 > last_1_var_1_49) {
    if (((((last_1_var_1_49) < (var_1_38)) ? (last_1_var_1_49) : (var_1_38))) < stepLocal_17) {
     var_1_49 = ((var_1_50 - (var_1_51 - var_1_30)) - ((((var_1_26) < (var_1_44)) ? (var_1_26) : (var_1_44))));
    } else {
     var_1_49 = (((((-10) > (var_1_30)) ? (-10) : (var_1_30))) + (var_1_26 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))));
    }
   } else {
    if (var_1_35) {
     var_1_49 = (var_1_13 + (((((var_1_26 + -16)) > (var_1_1)) ? ((var_1_26 + -16)) : (var_1_1))));
    } else {
     if (stepLocal_16 || ((var_1_50 > var_1_31) || var_1_34)) {
      var_1_49 = ((((var_1_26) > (last_1_var_1_49)) ? (var_1_26) : (last_1_var_1_49)));
     }
    }
   }
  }
 } else {
  var_1_49 = 32;
 }
 unsigned short int stepLocal_1 = var_1_62;
 if ((((((5) < (var_1_26)) ? (5) : (var_1_26))) + (var_1_7 << var_1_37)) < stepLocal_1) {
  var_1_11 = (var_1_12 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))));
 } else {
  if ((((((var_1_46) < (var_1_19)) ? (var_1_46) : (var_1_19))) * var_1_40) < 4.745f) {
   var_1_11 = var_1_12;
  } else {
   var_1_11 = var_1_13;
  }
 }
 unsigned long int stepLocal_3 = var_1_37;
 if (stepLocal_3 >= (var_1_31 / var_1_33)) {
  var_1_32 = (var_1_13 + var_1_12);
 } else {
  if (! var_1_34) {
   var_1_32 = (var_1_13 + ((((((((var_1_29) > (var_1_12)) ? (var_1_29) : (var_1_12)))) > (var_1_30)) ? (((((var_1_29) > (var_1_12)) ? (var_1_29) : (var_1_12)))) : (var_1_30))));
  } else {
   var_1_32 = ((((-16) < (-25)) ? (-16) : (-25)));
  }
 }
 unsigned char stepLocal_11 = var_1_28;
 unsigned long int stepLocal_10 = var_1_9 * var_1_38;
 signed short int stepLocal_9 = var_1_49;
 unsigned char stepLocal_8 = var_1_1;
 if (stepLocal_11 && var_1_16) {
  if (stepLocal_9 >= var_1_39) {
   var_1_43 = (var_1_29 + ((((var_1_44 - var_1_30) < 0 ) ? -(var_1_44 - var_1_30) : (var_1_44 - var_1_30))));
  } else {
   if (((((var_1_8) > (var_1_37)) ? (var_1_8) : (var_1_37))) <= stepLocal_8) {
    if (stepLocal_10 <= ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) {
     var_1_43 = var_1_31;
    }
   }
  }
 } else {
  var_1_43 = (var_1_45 - var_1_29);
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741824);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -32767);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 assume_abort_if_not(var_1_20 != 0.0F);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 assume_abort_if_not(var_1_33 != 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 0);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 1073741823);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 63);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 127);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -230584.3009213691400e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 16382);
 assume_abort_if_not(var_1_50 <= 32766);
 var_1_51 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_51 >= 8191);
 assume_abort_if_not(var_1_51 <= 16383);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -63);
 assume_abort_if_not(var_1_53 <= 63);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -31);
 assume_abort_if_not(var_1_54 <= 32);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -31);
 assume_abort_if_not(var_1_55 <= 31);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -31);
 assume_abort_if_not(var_1_56 <= 31);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 4611686.018427383000e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= -31);
 assume_abort_if_not(var_1_64 <= 32);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return (((((((((((((((((((((last_1_var_1_1 * var_1_62) == ((var_1_6 + var_1_7) - ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_1 == ((unsigned char) var_1_10)) : 1) && (((((((5) < (var_1_26)) ? (5) : (var_1_26))) + (var_1_7 << var_1_37)) < var_1_62) ? (var_1_11 == ((signed char) (var_1_12 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) : (((((((var_1_46) < (var_1_19)) ? (var_1_46) : (var_1_19))) * var_1_40) < 4.745f) ? (var_1_11 == ((signed char) var_1_12)) : (var_1_11 == ((signed char) var_1_13))))) && ((var_1_19 < (var_1_19 + var_1_58)) ? (var_1_15 == ((signed short int) var_1_57)) : (((256u < last_1_var_1_15) || var_1_34) ? (var_1_15 == ((signed short int) (((((var_1_57 - var_1_17)) < (var_1_18)) ? ((var_1_57 - var_1_17)) : (var_1_18))))) : (var_1_15 == ((signed short int) (((((var_1_17 - var_1_57)) < (last_1_var_1_15)) ? ((var_1_17 - var_1_57)) : (last_1_var_1_15)))))))) && (((31.5 / var_1_20) != ((((last_1_var_1_19) > (var_1_14)) ? (last_1_var_1_19) : (var_1_14)))) ? (var_1_34 ? ((var_1_17 < var_1_7) ? (var_1_19 == ((float) (((((var_1_21 - var_1_22)) > (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25)))))) ? ((var_1_21 - var_1_22)) : (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))))))) : (var_1_19 == ((float) var_1_24))) : ((var_1_20 < var_1_23) ? (var_1_19 == ((float) ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))))) : (var_1_19 == ((float) var_1_25)))) : 1)) && ((var_1_8 < last_1_var_1_61) ? (var_1_26 == ((signed long int) ((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49))))) : 1)) && ((var_1_16 && var_1_28) ? ((var_1_24 <= var_1_40) ? (var_1_27 == ((signed char) ((var_1_29 + var_1_30) - var_1_31))) : (var_1_27 == ((signed char) ((((var_1_31) > (8)) ? (var_1_31) : (8)))))) : (var_1_27 == ((signed char) var_1_31)))) && ((var_1_37 >= (var_1_31 / var_1_33)) ? (var_1_32 == ((signed char) (var_1_13 + var_1_12))) : ((! var_1_34) ? (var_1_32 == ((signed char) (var_1_13 + ((((((((var_1_29) > (var_1_12)) ? (var_1_29) : (var_1_12)))) > (var_1_30)) ? (((((var_1_29) > (var_1_12)) ? (var_1_29) : (var_1_12)))) : (var_1_30)))))) : (var_1_32 == ((signed char) ((((-16) < (-25)) ? (-16) : (-25)))))))) && (var_1_34 == ((unsigned char) (var_1_28 && var_1_35)))) && (var_1_34 ? (var_1_36 == ((signed char) ((((((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)))) > (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) ? (((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)))) : (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30)))))))) : (var_1_35 ? (var_1_36 == ((signed char) 10)) : (var_1_36 == ((signed char) -10))))) && ((((var_1_31 + 100) - var_1_61) == var_1_1) ? ((((((var_1_25) > ((var_1_24 - var_1_21))) ? (var_1_25) : ((var_1_24 - var_1_21)))) <= ((((var_1_58) < (var_1_46)) ? (var_1_58) : (var_1_46)))) ? (var_1_37 == ((unsigned long int) (((((((((3826329098u) < 0 ) ? -(3826329098u) : (3826329098u))) - (var_1_38 - var_1_7))) < ((var_1_39 - (last_1_var_1_37 + var_1_1)))) ? ((((((3826329098u) < 0 ) ? -(3826329098u) : (3826329098u))) - (var_1_38 - var_1_7))) : ((var_1_39 - (last_1_var_1_37 + var_1_1))))))) : 1) : 1)) && ((var_1_7 <= (var_1_15 / ((((var_1_33) < (var_1_38)) ? (var_1_33) : (var_1_38))))) ? (((var_1_36 % var_1_33) >= (var_1_29 - var_1_26)) ? (var_1_40 == ((double) var_1_24)) : ((8.3 < (var_1_58 / var_1_20)) ? ((var_1_36 <= var_1_7) ? (var_1_40 == ((double) (var_1_41 + var_1_42))) : (var_1_40 == ((double) var_1_22))) : (var_1_40 == ((double) var_1_23)))) : (var_1_40 == ((double) var_1_24)))) && ((var_1_28 && var_1_16) ? ((var_1_49 >= var_1_39) ? (var_1_43 == ((unsigned char) (var_1_29 + ((((var_1_44 - var_1_30) < 0 ) ? -(var_1_44 - var_1_30) : (var_1_44 - var_1_30)))))) : ((((((var_1_8) > (var_1_37)) ? (var_1_8) : (var_1_37))) <= var_1_1) ? (((var_1_9 * var_1_38) <= ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) ? (var_1_43 == ((unsigned char) var_1_31)) : 1) : 1)) : (var_1_43 == ((unsigned char) (var_1_45 - var_1_29))))) && ((var_1_34 && var_1_35) ? ((var_1_45 < var_1_17) ? (var_1_46 == ((double) (var_1_41 + (var_1_47 + var_1_48)))) : 1) : ((((var_1_29 + var_1_33) / var_1_44) >= ((var_1_38 - var_1_15) - var_1_30)) ? (var_1_46 == ((double) (var_1_42 + ((((var_1_47) > (var_1_41)) ? (var_1_47) : (var_1_41)))))) : 1))) && (var_1_34 ? ((-5 >= var_1_37) ? (((var_1_10 + var_1_37) > last_1_var_1_49) ? ((((((last_1_var_1_49) < (var_1_38)) ? (last_1_var_1_49) : (var_1_38))) < (var_1_39 - 25u)) ? (var_1_49 == ((signed short int) ((var_1_50 - (var_1_51 - var_1_30)) - ((((var_1_26) < (var_1_44)) ? (var_1_26) : (var_1_44)))))) : (var_1_49 == ((signed short int) (((((-10) > (var_1_30)) ? (-10) : (var_1_30))) + (var_1_26 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))))) : (var_1_35 ? (var_1_49 == ((signed short int) (var_1_13 + (((((var_1_26 + -16)) > (var_1_1)) ? ((var_1_26 + -16)) : (var_1_1)))))) : (((var_1_22 < var_1_41) || ((var_1_50 > var_1_31) || var_1_34)) ? (var_1_49 == ((signed short int) ((((var_1_26) > (last_1_var_1_49)) ? (var_1_26) : (last_1_var_1_49))))) : 1))) : 1) : (var_1_49 == ((signed short int) 32)))) && ((1.00000003E7f > var_1_24) ? ((var_1_6 != var_1_57) ? ((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) > var_1_12) ? (var_1_52 == ((signed char) (((((var_1_30) < (var_1_29)) ? (var_1_30) : (var_1_29))) + var_1_53))) : (var_1_52 == ((signed char) (var_1_29 + (var_1_54 + var_1_55))))) : ((var_1_45 <= var_1_7) ? (var_1_52 == ((signed char) ((var_1_54 + ((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56)))) + ((((-50) < 0 ) ? -(-50) : (-50)))))) : 1)) : (var_1_52 == ((signed char) var_1_30)))) && (var_1_57 == ((unsigned char) ((((var_1_30) < (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) ? (var_1_30) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))))) && (var_1_35 ? ((var_1_41 > last_1_var_1_40) ? ((var_1_24 <= 256.8f) ? (var_1_58 == ((float) ((((var_1_47) > ((var_1_48 + var_1_42))) ? (var_1_47) : ((var_1_48 + var_1_42)))))) : (var_1_58 == ((float) (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - (var_1_59 - var_1_60))))) : (var_1_58 == ((float) ((((var_1_42) < (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21))))) ? (var_1_42) : (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21))))))))) : (var_1_58 == ((float) ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))))))) && ((((((var_1_40) < ((5.6 - var_1_59))) ? (var_1_40) : ((5.6 - var_1_59)))) <= ((((var_1_23) > (var_1_25)) ? (var_1_23) : (var_1_25)))) ? (var_1_61 == ((unsigned short int) var_1_29)) : (var_1_61 == ((unsigned short int) var_1_51)))) && (var_1_62 == ((unsigned short int) var_1_44))) && (var_1_34 ? (var_1_35 ? (var_1_63 == ((signed char) (var_1_55 + (var_1_54 + var_1_56)))) : (var_1_63 == ((signed char) ((var_1_30 - var_1_29) + (var_1_64 + var_1_55))))) : (var_1_63 == ((signed char) var_1_56)))
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
