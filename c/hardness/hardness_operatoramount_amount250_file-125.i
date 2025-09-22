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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
signed long int var_1_2 = 1;
signed long int var_1_3 = 4;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 62157;
unsigned short int var_1_8 = 2;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed char var_1_16 = 5;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 10;
unsigned long int var_1_19 = 2510449126;
signed char var_1_20 = 25;
signed char var_1_21 = 4;
double var_1_22 = 50.5;
double var_1_23 = 128.875;
double var_1_24 = 16.6;
double var_1_25 = 0.35;
double var_1_26 = 32.2;
double var_1_27 = 999999999.6;
signed short int var_1_29 = 25;
signed short int var_1_30 = 25443;
signed short int var_1_31 = 23585;
unsigned char var_1_32 = 25;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 64;
signed char var_1_36 = -16;
signed char var_1_37 = 64;
signed char var_1_38 = 100;
signed char var_1_39 = 10;
unsigned long int var_1_40 = 16;
unsigned long int var_1_41 = 2300736417;
signed long int var_1_42 = 500;
signed char var_1_43 = -64;
signed char var_1_45 = 100;
unsigned short int var_1_46 = 10;
unsigned short int var_1_47 = 24622;
unsigned char var_1_48 = 100;
signed char var_1_50 = -25;
signed short int var_1_51 = 0;
double var_1_52 = 15.5;
unsigned char var_1_53 = 10;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 2;
unsigned char var_1_56 = 32;
unsigned short int var_1_57 = 10;
unsigned long int var_1_58 = 10;
unsigned long int var_1_60 = 2396916403;
double var_1_61 = 3.6;
signed short int var_1_62 = -64;
signed short int var_1_63 = 26185;
signed short int var_1_64 = 10;
unsigned char var_1_65 = 10;
unsigned char var_1_66 = 16;
double var_1_67 = 25.8;
signed char var_1_68 = -25;
unsigned char last_1_var_1_9 = 1;
double last_1_var_1_22 = 50.5;
unsigned long int last_1_var_1_40 = 16;
signed long int last_1_var_1_42 = 500;
unsigned short int last_1_var_1_46 = 10;
unsigned short int last_1_var_1_57 = 10;
unsigned long int last_1_var_1_58 = 10;
double last_1_var_1_61 = 3.6;
unsigned char last_1_var_1_65 = 10;
double last_1_var_1_67 = 25.8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_23 = (var_1_27 * last_1_var_1_67) != (last_1_var_1_61 + var_1_23);
 if (last_1_var_1_9 || stepLocal_23) {
  var_1_58 = (var_1_41 - var_1_33);
 } else {
  var_1_58 = (((((((((var_1_41) < (var_1_60)) ? (var_1_41) : (var_1_60))) - var_1_56)) < (var_1_45)) ? ((((((var_1_41) < (var_1_60)) ? (var_1_41) : (var_1_60))) - var_1_56)) : (var_1_45)));
 }
 unsigned char stepLocal_13 = var_1_34;
 if (var_1_2 > stepLocal_13) {
  var_1_42 = (last_1_var_1_42 + (var_1_38 + last_1_var_1_57));
 }
 if (var_1_12) {
  var_1_40 = (((((var_1_41) < (((((3916741855u) < 0 ) ? -(3916741855u) : (3916741855u))))) ? (var_1_41) : (((((3916741855u) < 0 ) ? -(3916741855u) : (3916741855u)))))) - ((((var_1_37) > (var_1_34)) ? (var_1_37) : (var_1_34))));
 } else {
  if (var_1_25 > var_1_23) {
   if (last_1_var_1_65 != last_1_var_1_46) {
    var_1_40 = (var_1_41 - var_1_7);
   } else {
    if (((((((((var_1_2) > (var_1_30)) ? (var_1_2) : (var_1_30)))) > (last_1_var_1_58)) ? (((((var_1_2) > (var_1_30)) ? (var_1_2) : (var_1_30)))) : (last_1_var_1_58))) > var_1_17) {
     var_1_40 = ((((var_1_33) > (((((var_1_31) > ((var_1_41 - last_1_var_1_46))) ? (var_1_31) : ((var_1_41 - last_1_var_1_46)))))) ? (var_1_33) : (((((var_1_31) > ((var_1_41 - last_1_var_1_46))) ? (var_1_31) : ((var_1_41 - last_1_var_1_46)))))));
    }
   }
  } else {
   if (var_1_38 >= var_1_31) {
    if (var_1_14) {
     var_1_40 = var_1_33;
    }
   }
  }
 }
 unsigned long int stepLocal_26 = var_1_40 / var_1_55;
 if (stepLocal_26 <= var_1_18) {
  var_1_65 = (var_1_33 - 1);
 } else {
  var_1_65 = ((((var_1_34) < (var_1_66)) ? (var_1_34) : (var_1_66)));
 }
 signed long int stepLocal_14 = (((var_1_8 - var_1_45) < 0 ) ? -(var_1_8 - var_1_45) : (var_1_8 - var_1_45));
 if (var_1_26 < last_1_var_1_22) {
  if (stepLocal_14 > var_1_31) {
   var_1_46 = ((var_1_47 - ((((var_1_39) < (var_1_18)) ? (var_1_39) : (var_1_18)))) + var_1_38);
  }
 }
 unsigned short int stepLocal_3 = var_1_6;
 unsigned char stepLocal_2 = var_1_10;
 unsigned char stepLocal_1 = var_1_10;
 if (stepLocal_3 < last_1_var_1_40) {
  if (var_1_5 || stepLocal_2) {
   if (var_1_11 || stepLocal_1) {
    var_1_9 = (! var_1_12);
   } else {
    var_1_9 = ((var_1_5 || (var_1_13 && var_1_14)) && var_1_15);
   }
  }
 } else {
  var_1_9 = (! (var_1_15 && var_1_12));
 }
 if (var_1_13) {
  var_1_36 = ((var_1_37 - (var_1_17 + 25)) - (var_1_38 - (var_1_18 + var_1_39)));
 } else {
  if (var_1_9) {
   var_1_36 = (var_1_17 + var_1_18);
  } else {
   var_1_36 = (var_1_39 + ((((var_1_17) > (var_1_20)) ? (var_1_17) : (var_1_20))));
  }
 }
 signed long int stepLocal_5 = 500 << (var_1_17 - var_1_18);
 unsigned short int stepLocal_4 = var_1_18;
 if (stepLocal_5 > var_1_7) {
  if ((var_1_19 - var_1_6) == stepLocal_4) {
   var_1_16 = ((var_1_18 + var_1_17) + var_1_20);
  } else {
   var_1_16 = (var_1_17 - ((((var_1_18) < (var_1_21)) ? (var_1_18) : (var_1_21))));
  }
 } else {
  var_1_16 = var_1_20;
 }
 signed long int stepLocal_12 = - var_1_31;
 if (stepLocal_12 < var_1_20) {
  var_1_32 = (var_1_33 - var_1_17);
 } else {
  var_1_32 = ((((((var_1_34 + var_1_35) - var_1_17)) < (var_1_33)) ? (((var_1_34 + var_1_35) - var_1_17)) : (var_1_33)));
 }
 unsigned char stepLocal_17 = var_1_10;
 unsigned char stepLocal_16 = var_1_15;
 signed long int stepLocal_15 = ((((var_1_31 / var_1_7)) > (var_1_42)) ? ((var_1_31 / var_1_7)) : (var_1_42));
 if (stepLocal_17 && var_1_12) {
  if (var_1_12) {
   var_1_48 = (var_1_33 - ((((var_1_35) > (var_1_39)) ? (var_1_35) : (var_1_39))));
  } else {
   if (stepLocal_16 && (var_1_5 && var_1_11)) {
    var_1_48 = ((((50) > (var_1_34)) ? (50) : (var_1_34)));
   }
  }
 } else {
  if (stepLocal_15 != -8) {
   var_1_48 = var_1_21;
  }
 }
 if (var_1_12) {
  var_1_50 = (((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))) + var_1_39);
 }
 var_1_51 = var_1_16;
 signed long int stepLocal_22 = var_1_2;
 signed char stepLocal_21 = var_1_20;
 unsigned long int stepLocal_20 = var_1_19;
 if ((var_1_37 >> (var_1_54 + var_1_55)) < stepLocal_22) {
  if (var_1_2 != stepLocal_21) {
   if (var_1_23 > var_1_25) {
    if (stepLocal_20 < var_1_6) {
     var_1_53 = (var_1_33 - var_1_45);
    } else {
     var_1_53 = (((((((var_1_34) < (var_1_21)) ? (var_1_34) : (var_1_21))) < 0 ) ? -((((var_1_34) < (var_1_21)) ? (var_1_34) : (var_1_21))) : ((((var_1_34) < (var_1_21)) ? (var_1_34) : (var_1_21)))));
    }
   } else {
    var_1_53 = (var_1_55 + (var_1_17 + (var_1_56 - var_1_18)));
   }
  }
 }
 unsigned char stepLocal_25 = var_1_9;
 if (var_1_12 || stepLocal_25) {
  var_1_62 = ((var_1_38 + var_1_33) - (var_1_63 - ((((var_1_18) < (var_1_64)) ? (var_1_18) : (var_1_64)))));
 } else {
  var_1_62 = ((((2) > (((var_1_31 - var_1_35) - var_1_63))) ? (2) : (((var_1_31 - var_1_35) - var_1_63))));
 }
 var_1_67 = var_1_26;
 var_1_68 = var_1_54;
 if (var_1_46 <= (16 + var_1_42)) {
  var_1_57 = var_1_42;
 }
 signed long int stepLocal_0 = var_1_2 - var_1_3;
 if (stepLocal_0 <= var_1_42) {
  if (var_1_9) {
   var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 } else {
  var_1_1 = (var_1_7 - var_1_8);
 }
 signed char stepLocal_8 = var_1_20;
 unsigned long int stepLocal_7 = var_1_46 + (var_1_40 / var_1_7);
 signed char stepLocal_6 = var_1_20;
 if (stepLocal_8 <= (var_1_19 * var_1_18)) {
  if (var_1_40 != stepLocal_6) {
   if ((var_1_36 * 32) < stepLocal_7) {
    if (var_1_15) {
     var_1_22 = var_1_23;
    } else {
     var_1_22 = 1.0000000000000125E13;
    }
   }
  } else {
   var_1_22 = var_1_23;
  }
 }
 signed long int stepLocal_11 = var_1_21 ^ var_1_3;
 unsigned char stepLocal_10 = (var_1_42 <= var_1_2) && (var_1_26 <= var_1_23);
 unsigned long int stepLocal_9 = var_1_19 % var_1_17;
 if ((~ var_1_1) <= stepLocal_11) {
  var_1_24 = (var_1_25 - (var_1_26 + var_1_27));
 } else {
  if (stepLocal_9 != (~ var_1_40)) {
   if (stepLocal_10 && var_1_9) {
    if (var_1_9) {
     var_1_24 = var_1_25;
    }
   } else {
    var_1_24 = 99.6;
   }
  } else {
   var_1_24 = var_1_23;
  }
 }
 signed long int stepLocal_19 = var_1_47 << var_1_38;
 unsigned short int stepLocal_18 = var_1_7;
 if (stepLocal_19 < var_1_1) {
  if (var_1_18 >= stepLocal_18) {
   var_1_52 = ((((var_1_23) < (var_1_27)) ? (var_1_23) : (var_1_27)));
  } else {
   var_1_52 = var_1_27;
  }
 }
 unsigned long int stepLocal_24 = (var_1_18 * var_1_58) + ((((var_1_7) > (var_1_1)) ? (var_1_7) : (var_1_1)));
 if (var_1_20 < stepLocal_24) {
  var_1_61 = (var_1_27 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))));
 }
 if ((((((var_1_7 - var_1_21)) < (var_1_17)) ? ((var_1_7 - var_1_21)) : (var_1_17))) < var_1_46) {
  if (((((var_1_61) > (var_1_27)) ? (var_1_61) : (var_1_27))) < var_1_23) {
   var_1_29 = (1 - var_1_17);
  } else {
   var_1_29 = ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_18) - var_1_21);
  }
 } else {
  var_1_29 = ((((var_1_40) > (var_1_30)) ? (var_1_40) : (var_1_30)));
 }
 if (var_1_52 < var_1_67) {
  var_1_43 = ((((var_1_37) > (var_1_18)) ? (var_1_37) : (var_1_18)));
 } else {
  if (! var_1_9) {
   var_1_43 = (((var_1_45 - var_1_17) - var_1_39) - 2);
  } else {
   var_1_43 = (var_1_17 + var_1_20);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 11);
 assume_abort_if_not(var_1_17 <= 22);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 11);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 16382);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 16382);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 63);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 64);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 62);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 31);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 94);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 16383);
 assume_abort_if_not(var_1_47 <= 32767);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 3);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 3);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 31);
 assume_abort_if_not(var_1_56 <= 63);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 2147483647);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_63 >= 16383);
 assume_abort_if_not(var_1_63 <= 32766);
 var_1_64 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 16383);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_67 = var_1_67;
}
int property(void) {
 return (((((((((((((((((((((((((var_1_2 - var_1_3) <= var_1_42) ? (var_1_9 ? (var_1_1 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : 1) : (var_1_1 == ((unsigned short int) (var_1_7 - var_1_8)))) && ((var_1_6 < last_1_var_1_40) ? ((var_1_5 || var_1_10) ? ((var_1_11 || var_1_10) ? (var_1_9 == ((unsigned char) (! var_1_12))) : (var_1_9 == ((unsigned char) ((var_1_5 || (var_1_13 && var_1_14)) && var_1_15)))) : 1) : (var_1_9 == ((unsigned char) (! (var_1_15 && var_1_12)))))) && (((500 << (var_1_17 - var_1_18)) > var_1_7) ? (((var_1_19 - var_1_6) == var_1_18) ? (var_1_16 == ((signed char) ((var_1_18 + var_1_17) + var_1_20))) : (var_1_16 == ((signed char) (var_1_17 - ((((var_1_18) < (var_1_21)) ? (var_1_18) : (var_1_21))))))) : (var_1_16 == ((signed char) var_1_20)))) && ((var_1_20 <= (var_1_19 * var_1_18)) ? ((var_1_40 != var_1_20) ? (((var_1_36 * 32) < (var_1_46 + (var_1_40 / var_1_7))) ? (var_1_15 ? (var_1_22 == ((double) var_1_23)) : (var_1_22 == ((double) 1.0000000000000125E13))) : 1) : (var_1_22 == ((double) var_1_23))) : 1)) && (((~ var_1_1) <= (var_1_21 ^ var_1_3)) ? (var_1_24 == ((double) (var_1_25 - (var_1_26 + var_1_27)))) : (((var_1_19 % var_1_17) != (~ var_1_40)) ? ((((var_1_42 <= var_1_2) && (var_1_26 <= var_1_23)) && var_1_9) ? (var_1_9 ? (var_1_24 == ((double) var_1_25)) : 1) : (var_1_24 == ((double) 99.6))) : (var_1_24 == ((double) var_1_23))))) && (((((((var_1_7 - var_1_21)) < (var_1_17)) ? ((var_1_7 - var_1_21)) : (var_1_17))) < var_1_46) ? ((((((var_1_61) > (var_1_27)) ? (var_1_61) : (var_1_27))) < var_1_23) ? (var_1_29 == ((signed short int) (1 - var_1_17))) : (var_1_29 == ((signed short int) ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_18) - var_1_21)))) : (var_1_29 == ((signed short int) ((((var_1_40) > (var_1_30)) ? (var_1_40) : (var_1_30))))))) && (((- var_1_31) < var_1_20) ? (var_1_32 == ((unsigned char) (var_1_33 - var_1_17))) : (var_1_32 == ((unsigned char) ((((((var_1_34 + var_1_35) - var_1_17)) < (var_1_33)) ? (((var_1_34 + var_1_35) - var_1_17)) : (var_1_33))))))) && (var_1_13 ? (var_1_36 == ((signed char) ((var_1_37 - (var_1_17 + 25)) - (var_1_38 - (var_1_18 + var_1_39))))) : (var_1_9 ? (var_1_36 == ((signed char) (var_1_17 + var_1_18))) : (var_1_36 == ((signed char) (var_1_39 + ((((var_1_17) > (var_1_20)) ? (var_1_17) : (var_1_20))))))))) && (var_1_12 ? (var_1_40 == ((unsigned long int) (((((var_1_41) < (((((3916741855u) < 0 ) ? -(3916741855u) : (3916741855u))))) ? (var_1_41) : (((((3916741855u) < 0 ) ? -(3916741855u) : (3916741855u)))))) - ((((var_1_37) > (var_1_34)) ? (var_1_37) : (var_1_34)))))) : ((var_1_25 > var_1_23) ? ((last_1_var_1_65 != last_1_var_1_46) ? (var_1_40 == ((unsigned long int) (var_1_41 - var_1_7))) : ((((((((((var_1_2) > (var_1_30)) ? (var_1_2) : (var_1_30)))) > (last_1_var_1_58)) ? (((((var_1_2) > (var_1_30)) ? (var_1_2) : (var_1_30)))) : (last_1_var_1_58))) > var_1_17) ? (var_1_40 == ((unsigned long int) ((((var_1_33) > (((((var_1_31) > ((var_1_41 - last_1_var_1_46))) ? (var_1_31) : ((var_1_41 - last_1_var_1_46)))))) ? (var_1_33) : (((((var_1_31) > ((var_1_41 - last_1_var_1_46))) ? (var_1_31) : ((var_1_41 - last_1_var_1_46))))))))) : 1)) : ((var_1_38 >= var_1_31) ? (var_1_14 ? (var_1_40 == ((unsigned long int) var_1_33)) : 1) : 1)))) && ((var_1_2 > var_1_34) ? (var_1_42 == ((signed long int) (last_1_var_1_42 + (var_1_38 + last_1_var_1_57)))) : 1)) && ((var_1_52 < var_1_67) ? (var_1_43 == ((signed char) ((((var_1_37) > (var_1_18)) ? (var_1_37) : (var_1_18))))) : ((! var_1_9) ? (var_1_43 == ((signed char) (((var_1_45 - var_1_17) - var_1_39) - 2))) : (var_1_43 == ((signed char) (var_1_17 + var_1_20)))))) && ((var_1_26 < last_1_var_1_22) ? ((((((var_1_8 - var_1_45) < 0 ) ? -(var_1_8 - var_1_45) : (var_1_8 - var_1_45))) > var_1_31) ? (var_1_46 == ((unsigned short int) ((var_1_47 - ((((var_1_39) < (var_1_18)) ? (var_1_39) : (var_1_18)))) + var_1_38))) : 1) : 1)) && ((var_1_10 && var_1_12) ? (var_1_12 ? (var_1_48 == ((unsigned char) (var_1_33 - ((((var_1_35) > (var_1_39)) ? (var_1_35) : (var_1_39)))))) : ((var_1_15 && (var_1_5 && var_1_11)) ? (var_1_48 == ((unsigned char) ((((50) > (var_1_34)) ? (50) : (var_1_34))))) : 1)) : (((((((var_1_31 / var_1_7)) > (var_1_42)) ? ((var_1_31 / var_1_7)) : (var_1_42))) != -8) ? (var_1_48 == ((unsigned char) var_1_21)) : 1))) && (var_1_12 ? (var_1_50 == ((signed char) (((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))) + var_1_39))) : 1)) && (var_1_51 == ((signed short int) var_1_16))) && (((var_1_47 << var_1_38) < var_1_1) ? ((var_1_18 >= var_1_7) ? (var_1_52 == ((double) ((((var_1_23) < (var_1_27)) ? (var_1_23) : (var_1_27))))) : (var_1_52 == ((double) var_1_27))) : 1)) && (((var_1_37 >> (var_1_54 + var_1_55)) < var_1_2) ? ((var_1_2 != var_1_20) ? ((var_1_23 > var_1_25) ? ((var_1_19 < var_1_6) ? (var_1_53 == ((unsigned char) (var_1_33 - var_1_45))) : (var_1_53 == ((unsigned char) (((((((var_1_34) < (var_1_21)) ? (var_1_34) : (var_1_21))) < 0 ) ? -((((var_1_34) < (var_1_21)) ? (var_1_34) : (var_1_21))) : ((((var_1_34) < (var_1_21)) ? (var_1_34) : (var_1_21)))))))) : (var_1_53 == ((unsigned char) (var_1_55 + (var_1_17 + (var_1_56 - var_1_18)))))) : 1) : 1)) && ((var_1_46 <= (16 + var_1_42)) ? (var_1_57 == ((unsigned short int) var_1_42)) : 1)) && ((last_1_var_1_9 || ((var_1_27 * last_1_var_1_67) != (last_1_var_1_61 + var_1_23))) ? (var_1_58 == ((unsigned long int) (var_1_41 - var_1_33))) : (var_1_58 == ((unsigned long int) (((((((((var_1_41) < (var_1_60)) ? (var_1_41) : (var_1_60))) - var_1_56)) < (var_1_45)) ? ((((((var_1_41) < (var_1_60)) ? (var_1_41) : (var_1_60))) - var_1_56)) : (var_1_45))))))) && ((var_1_20 < ((var_1_18 * var_1_58) + ((((var_1_7) > (var_1_1)) ? (var_1_7) : (var_1_1))))) ? (var_1_61 == ((double) (var_1_27 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26)))))) : 1)) && ((var_1_12 || var_1_9) ? (var_1_62 == ((signed short int) ((var_1_38 + var_1_33) - (var_1_63 - ((((var_1_18) < (var_1_64)) ? (var_1_18) : (var_1_64))))))) : (var_1_62 == ((signed short int) ((((2) > (((var_1_31 - var_1_35) - var_1_63))) ? (2) : (((var_1_31 - var_1_35) - var_1_63)))))))) && (((var_1_40 / var_1_55) <= var_1_18) ? (var_1_65 == ((unsigned char) (var_1_33 - 1))) : (var_1_65 == ((unsigned char) ((((var_1_34) < (var_1_66)) ? (var_1_34) : (var_1_66))))))) && (var_1_67 == ((double) var_1_26))) && (var_1_68 == ((signed char) var_1_54))
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
