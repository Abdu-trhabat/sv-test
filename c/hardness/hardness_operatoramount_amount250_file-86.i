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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
signed char var_1_8 = 1;
signed char var_1_9 = 32;
signed char var_1_10 = 5;
signed char var_1_11 = 2;
signed char var_1_12 = -100;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 4;
signed char var_1_17 = -50;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 0;
unsigned long int var_1_23 = 100;
double var_1_25 = 9.1;
double var_1_26 = 100000000000.375;
double var_1_27 = 31.39;
signed char var_1_28 = -4;
unsigned char var_1_29 = 128;
signed char var_1_30 = 50;
signed char var_1_31 = 5;
double var_1_32 = 10.4;
signed char var_1_34 = 5;
signed char var_1_35 = 2;
float var_1_36 = 256.9;
float var_1_37 = 999999999999.6;
float var_1_38 = 10.25;
float var_1_39 = 25.4;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
signed short int var_1_42 = 2;
signed short int var_1_43 = -16;
signed short int var_1_44 = 28882;
signed short int var_1_45 = 10000;
unsigned short int var_1_46 = 50;
unsigned short int var_1_47 = 2;
signed char var_1_48 = -32;
signed char var_1_49 = 64;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
float var_1_55 = 31.8;
unsigned long int var_1_56 = 1;
unsigned long int var_1_57 = 3129218366;
unsigned long int var_1_58 = 1000000000;
double var_1_59 = 31.2;
double var_1_60 = 1000000.625;
double var_1_61 = 256.85;
signed short int var_1_62 = -4;
unsigned char var_1_63 = 0;
signed char last_1_var_1_1 = 0;
unsigned char last_1_var_1_13 = 0;
unsigned long int last_1_var_1_23 = 100;
double last_1_var_1_25 = 9.1;
double last_1_var_1_32 = 10.4;
signed short int last_1_var_1_42 = 2;
signed short int last_1_var_1_43 = -16;
unsigned short int last_1_var_1_46 = 50;
unsigned char last_1_var_1_50 = 1;
float last_1_var_1_55 = 31.8;
double last_1_var_1_59 = 31.2;
unsigned char last_1_var_1_63 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_7 = last_1_var_1_1;
 if ((((((last_1_var_1_55 * last_1_var_1_25)) > (last_1_var_1_59)) ? ((last_1_var_1_55 * last_1_var_1_25)) : (last_1_var_1_59))) <= last_1_var_1_59) {
  if (stepLocal_7 >= var_1_31) {
   var_1_32 = (var_1_27 - var_1_26);
  } else {
   var_1_32 = (var_1_26 - var_1_27);
  }
 }
 signed long int stepLocal_2 = (((var_1_8) > (var_1_11)) ? (var_1_8) : (var_1_11));
 if (last_1_var_1_42 <= stepLocal_2) {
  var_1_23 = (var_1_10 + last_1_var_1_46);
 } else {
  var_1_23 = var_1_18;
 }
 if ((((((last_1_var_1_25) > (last_1_var_1_32)) ? (last_1_var_1_25) : (last_1_var_1_32))) + ((((last_1_var_1_59) < (last_1_var_1_32)) ? (last_1_var_1_59) : (last_1_var_1_32)))) >= last_1_var_1_59) {
  if (var_1_53) {
   if (last_1_var_1_23 == var_1_44) {
    var_1_63 = var_1_41;
   } else {
    var_1_63 = 0;
   }
  }
 } else {
  var_1_63 = var_1_52;
 }
 if (! (var_1_12 <= (var_1_6 - var_1_10))) {
  if (! last_1_var_1_63) {
   var_1_13 = (! var_1_14);
  } else {
   var_1_13 = var_1_15;
  }
 } else {
  var_1_13 = var_1_14;
 }
 if (var_1_13 && (var_1_9 < var_1_17)) {
  var_1_34 = (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30))) - ((var_1_35 + 25) + var_1_10));
 } else {
  var_1_34 = var_1_8;
 }
 if (var_1_13) {
  var_1_58 = (var_1_10 + var_1_31);
 }
 unsigned long int stepLocal_20 = var_1_31 * last_1_var_1_23;
 unsigned long int stepLocal_19 = last_1_var_1_23 | var_1_6;
 unsigned short int stepLocal_18 = var_1_47;
 if ((2 * var_1_29) != stepLocal_20) {
  if (var_1_8 < stepLocal_18) {
   if ((((((last_1_var_1_43) > (var_1_11)) ? (last_1_var_1_43) : (var_1_11))) - var_1_18) == stepLocal_19) {
    var_1_59 = ((var_1_60 + var_1_61) + var_1_39);
   }
  } else {
   var_1_59 = var_1_26;
  }
 } else {
  var_1_59 = var_1_39;
 }
 if (var_1_27 > var_1_59) {
  var_1_56 = ((((var_1_44) < ((var_1_57 - (var_1_47 + var_1_9)))) ? (var_1_44) : ((var_1_57 - (var_1_47 + var_1_9)))));
 } else {
  var_1_56 = (var_1_57 - (((((256u + var_1_18)) < (var_1_7)) ? ((256u + var_1_18)) : (var_1_7))));
 }
 unsigned char stepLocal_17 = last_1_var_1_13;
 signed char stepLocal_16 = var_1_17;
 unsigned char stepLocal_15 = var_1_54;
 unsigned char stepLocal_14 = last_1_var_1_63;
 if (var_1_41 && stepLocal_17) {
  if (last_1_var_1_50) {
   var_1_50 = (var_1_14 && ((var_1_51 && var_1_52) && var_1_53));
  } else {
   var_1_50 = var_1_15;
  }
 } else {
  if (var_1_14 || stepLocal_14) {
   if (((2 & var_1_18) % var_1_44) < stepLocal_16) {
    var_1_50 = (! ((var_1_38 < var_1_39) || var_1_54));
   } else {
    if (stepLocal_15 || var_1_14) {
     var_1_50 = var_1_41;
    }
   }
  } else {
   var_1_50 = (((var_1_26 * last_1_var_1_32) > last_1_var_1_32) || var_1_54);
  }
 }
 if (var_1_50) {
  var_1_62 = var_1_6;
 }
 signed char stepLocal_1 = var_1_11;
 signed char stepLocal_0 = var_1_7;
 if (var_1_8 > stepLocal_0) {
  if (stepLocal_1 == (var_1_6 / var_1_17)) {
   var_1_16 = ((((((((var_1_9 + var_1_6) < 0 ) ? -(var_1_9 + var_1_6) : (var_1_9 + var_1_6)))) > (((((var_1_18) < ((var_1_19 - var_1_7))) ? (var_1_18) : ((var_1_19 - var_1_7)))))) ? (((((var_1_9 + var_1_6) < 0 ) ? -(var_1_9 + var_1_6) : (var_1_9 + var_1_6)))) : (((((var_1_18) < ((var_1_19 - var_1_7))) ? (var_1_18) : ((var_1_19 - var_1_7)))))));
  }
 }
 unsigned char stepLocal_6 = var_1_19;
 if (stepLocal_6 != (var_1_29 - (100 - var_1_9))) {
  var_1_28 = ((((((var_1_6 - var_1_7)) < (var_1_10)) ? ((var_1_6 - var_1_7)) : (var_1_10))) + (var_1_9 - (var_1_30 - var_1_31)));
 }
 signed char stepLocal_8 = var_1_12;
 if (stepLocal_8 <= var_1_28) {
  var_1_40 = (! (! var_1_14));
 } else {
  var_1_40 = (var_1_15 || (var_1_13 && var_1_41));
 }
 var_1_55 = var_1_27;
 if (! (var_1_13 || (var_1_59 > var_1_32))) {
  if (var_1_13) {
   if (var_1_50) {
    var_1_1 = (((((var_1_6 - var_1_7) + var_1_8) < 0 ) ? -((var_1_6 - var_1_7) + var_1_8) : ((var_1_6 - var_1_7) + var_1_8)));
   } else {
    var_1_1 = (((((var_1_7 - var_1_6)) < (((var_1_9 + var_1_10) - var_1_11))) ? ((var_1_7 - var_1_6)) : (((var_1_9 + var_1_10) - var_1_11))));
   }
  } else {
   var_1_1 = var_1_12;
  }
 } else {
  var_1_1 = (var_1_9 - ((((var_1_11) < (var_1_7)) ? (var_1_11) : (var_1_7))));
 }
 unsigned long int stepLocal_10 = var_1_56;
 unsigned char stepLocal_9 = var_1_63;
 if ((-16 != -256) && stepLocal_9) {
  if (var_1_6 < stepLocal_10) {
   var_1_42 = (((((var_1_9) > (var_1_29)) ? (var_1_9) : (var_1_29))) - 10);
  }
 } else {
  var_1_42 = ((((var_1_23) < (var_1_18)) ? (var_1_23) : (var_1_18)));
 }
 if (var_1_50) {
  var_1_48 = (var_1_31 + ((((var_1_30) < (var_1_6)) ? (var_1_30) : (var_1_6))));
 } else {
  if (! (var_1_63 && var_1_50)) {
   var_1_48 = ((var_1_49 - var_1_6) - var_1_10);
  }
 }
 unsigned char stepLocal_5 = var_1_18;
 unsigned long int stepLocal_4 = var_1_58;
 signed char stepLocal_3 = var_1_11;
 if (stepLocal_3 > (var_1_7 + var_1_34)) {
  if (stepLocal_4 >= (var_1_11 + -1)) {
   var_1_25 = ((((50.7) < ((var_1_26 - var_1_27))) ? (50.7) : ((var_1_26 - var_1_27))));
  }
 } else {
  if (((((32) > (var_1_17)) ? (32) : (var_1_17))) >= stepLocal_5) {
   var_1_25 = var_1_27;
  } else {
   var_1_25 = var_1_26;
  }
 }
 if ((var_1_9 << 1) >= var_1_12) {
  if (((var_1_19 - var_1_6) / var_1_17) < var_1_7) {
   if (var_1_11 > var_1_10) {
    var_1_20 = var_1_14;
   }
  }
 } else {
  if (((var_1_32 + var_1_59) + var_1_55) >= var_1_25) {
   var_1_20 = var_1_14;
  }
 }
 if ((var_1_55 * var_1_32) <= 9999.125) {
  var_1_36 = (var_1_27 - ((((var_1_26) > (var_1_37)) ? (var_1_26) : (var_1_37))));
 } else {
  if (var_1_55 <= var_1_25) {
   var_1_36 = (((((var_1_38 + var_1_39)) > (var_1_27)) ? ((var_1_38 + var_1_39)) : (var_1_27)));
  } else {
   var_1_36 = var_1_38;
  }
 }
 if ((var_1_25 * var_1_59) >= var_1_55) {
  if (var_1_59 != var_1_39) {
   var_1_43 = var_1_8;
  } else {
   if (var_1_59 != (((((var_1_59 / 31.5)) > (var_1_59)) ? ((var_1_59 / 31.5)) : (var_1_59)))) {
    if (var_1_50 || (var_1_14 || (var_1_59 > var_1_32))) {
     var_1_43 = (((var_1_44 - var_1_56) - (var_1_45 - var_1_10)) - ((((var_1_19) > (var_1_7)) ? (var_1_19) : (var_1_7))));
    }
   }
  }
 } else {
  var_1_43 = (((((((((var_1_30 + var_1_1)) > (var_1_48)) ? ((var_1_30 + var_1_1)) : (var_1_48)))) < (var_1_31)) ? ((((((var_1_30 + var_1_1)) > (var_1_48)) ? ((var_1_30 + var_1_1)) : (var_1_48)))) : (var_1_31)));
 }
 signed char stepLocal_13 = var_1_10;
 signed long int stepLocal_12 = var_1_62 * var_1_43;
 signed char stepLocal_11 = var_1_11;
 if (var_1_18 <= stepLocal_12) {
  if (var_1_50) {
   if (stepLocal_11 > var_1_31) {
    var_1_46 = var_1_47;
   }
  }
 } else {
  if (((var_1_12 / var_1_17) / var_1_30) <= stepLocal_13) {
   var_1_46 = ((((((((var_1_29) < (var_1_9)) ? (var_1_29) : (var_1_9)))) < (var_1_31)) ? (((((var_1_29) < (var_1_9)) ? (var_1_29) : (var_1_9)))) : (var_1_31)));
  } else {
   var_1_46 = ((((var_1_9) > (var_1_62)) ? (var_1_9) : (var_1_62)));
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -128);
 assume_abort_if_not(var_1_17 <= 127);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 255);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 31);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 32);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 24574);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= 8191);
 assume_abort_if_not(var_1_45 <= 16383);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 65534);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 62);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 1);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= -230584.3009213691400e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -230584.3009213691400e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_63 = var_1_63;
}
int property(void) {
 return ((((((((((((((((((((((! (var_1_13 || (var_1_59 > var_1_32))) ? (var_1_13 ? (var_1_50 ? (var_1_1 == ((signed char) (((((var_1_6 - var_1_7) + var_1_8) < 0 ) ? -((var_1_6 - var_1_7) + var_1_8) : ((var_1_6 - var_1_7) + var_1_8))))) : (var_1_1 == ((signed char) (((((var_1_7 - var_1_6)) < (((var_1_9 + var_1_10) - var_1_11))) ? ((var_1_7 - var_1_6)) : (((var_1_9 + var_1_10) - var_1_11))))))) : (var_1_1 == ((signed char) var_1_12))) : (var_1_1 == ((signed char) (var_1_9 - ((((var_1_11) < (var_1_7)) ? (var_1_11) : (var_1_7))))))) && ((! (var_1_12 <= (var_1_6 - var_1_10))) ? ((! last_1_var_1_63) ? (var_1_13 == ((unsigned char) (! var_1_14))) : (var_1_13 == ((unsigned char) var_1_15))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_8 > var_1_7) ? ((var_1_11 == (var_1_6 / var_1_17)) ? (var_1_16 == ((unsigned char) ((((((((var_1_9 + var_1_6) < 0 ) ? -(var_1_9 + var_1_6) : (var_1_9 + var_1_6)))) > (((((var_1_18) < ((var_1_19 - var_1_7))) ? (var_1_18) : ((var_1_19 - var_1_7)))))) ? (((((var_1_9 + var_1_6) < 0 ) ? -(var_1_9 + var_1_6) : (var_1_9 + var_1_6)))) : (((((var_1_18) < ((var_1_19 - var_1_7))) ? (var_1_18) : ((var_1_19 - var_1_7))))))))) : 1) : 1)) && (((var_1_9 << 1) >= var_1_12) ? ((((var_1_19 - var_1_6) / var_1_17) < var_1_7) ? ((var_1_11 > var_1_10) ? (var_1_20 == ((unsigned char) var_1_14)) : 1) : 1) : ((((var_1_32 + var_1_59) + var_1_55) >= var_1_25) ? (var_1_20 == ((unsigned char) var_1_14)) : 1))) && ((last_1_var_1_42 <= ((((var_1_8) > (var_1_11)) ? (var_1_8) : (var_1_11)))) ? (var_1_23 == ((unsigned long int) (var_1_10 + last_1_var_1_46))) : (var_1_23 == ((unsigned long int) var_1_18)))) && ((var_1_11 > (var_1_7 + var_1_34)) ? ((var_1_58 >= (var_1_11 + -1)) ? (var_1_25 == ((double) ((((50.7) < ((var_1_26 - var_1_27))) ? (50.7) : ((var_1_26 - var_1_27)))))) : 1) : ((((((32) > (var_1_17)) ? (32) : (var_1_17))) >= var_1_18) ? (var_1_25 == ((double) var_1_27)) : (var_1_25 == ((double) var_1_26))))) && ((var_1_19 != (var_1_29 - (100 - var_1_9))) ? (var_1_28 == ((signed char) ((((((var_1_6 - var_1_7)) < (var_1_10)) ? ((var_1_6 - var_1_7)) : (var_1_10))) + (var_1_9 - (var_1_30 - var_1_31))))) : 1)) && (((((((last_1_var_1_55 * last_1_var_1_25)) > (last_1_var_1_59)) ? ((last_1_var_1_55 * last_1_var_1_25)) : (last_1_var_1_59))) <= last_1_var_1_59) ? ((last_1_var_1_1 >= var_1_31) ? (var_1_32 == ((double) (var_1_27 - var_1_26))) : (var_1_32 == ((double) (var_1_26 - var_1_27)))) : 1)) && ((var_1_13 && (var_1_9 < var_1_17)) ? (var_1_34 == ((signed char) (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30))) - ((var_1_35 + 25) + var_1_10)))) : (var_1_34 == ((signed char) var_1_8)))) && (((var_1_55 * var_1_32) <= 9999.125) ? (var_1_36 == ((float) (var_1_27 - ((((var_1_26) > (var_1_37)) ? (var_1_26) : (var_1_37)))))) : ((var_1_55 <= var_1_25) ? (var_1_36 == ((float) (((((var_1_38 + var_1_39)) > (var_1_27)) ? ((var_1_38 + var_1_39)) : (var_1_27))))) : (var_1_36 == ((float) var_1_38))))) && ((var_1_12 <= var_1_28) ? (var_1_40 == ((unsigned char) (! (! var_1_14)))) : (var_1_40 == ((unsigned char) (var_1_15 || (var_1_13 && var_1_41)))))) && (((-16 != -256) && var_1_63) ? ((var_1_6 < var_1_56) ? (var_1_42 == ((signed short int) (((((var_1_9) > (var_1_29)) ? (var_1_9) : (var_1_29))) - 10))) : 1) : (var_1_42 == ((signed short int) ((((var_1_23) < (var_1_18)) ? (var_1_23) : (var_1_18))))))) && (((var_1_25 * var_1_59) >= var_1_55) ? ((var_1_59 != var_1_39) ? (var_1_43 == ((signed short int) var_1_8)) : ((var_1_59 != (((((var_1_59 / 31.5)) > (var_1_59)) ? ((var_1_59 / 31.5)) : (var_1_59)))) ? ((var_1_50 || (var_1_14 || (var_1_59 > var_1_32))) ? (var_1_43 == ((signed short int) (((var_1_44 - var_1_56) - (var_1_45 - var_1_10)) - ((((var_1_19) > (var_1_7)) ? (var_1_19) : (var_1_7)))))) : 1) : 1)) : (var_1_43 == ((signed short int) (((((((((var_1_30 + var_1_1)) > (var_1_48)) ? ((var_1_30 + var_1_1)) : (var_1_48)))) < (var_1_31)) ? ((((((var_1_30 + var_1_1)) > (var_1_48)) ? ((var_1_30 + var_1_1)) : (var_1_48)))) : (var_1_31))))))) && ((var_1_18 <= (var_1_62 * var_1_43)) ? (var_1_50 ? ((var_1_11 > var_1_31) ? (var_1_46 == ((unsigned short int) var_1_47)) : 1) : 1) : ((((var_1_12 / var_1_17) / var_1_30) <= var_1_10) ? (var_1_46 == ((unsigned short int) ((((((((var_1_29) < (var_1_9)) ? (var_1_29) : (var_1_9)))) < (var_1_31)) ? (((((var_1_29) < (var_1_9)) ? (var_1_29) : (var_1_9)))) : (var_1_31))))) : (var_1_46 == ((unsigned short int) ((((var_1_9) > (var_1_62)) ? (var_1_9) : (var_1_62)))))))) && (var_1_50 ? (var_1_48 == ((signed char) (var_1_31 + ((((var_1_30) < (var_1_6)) ? (var_1_30) : (var_1_6)))))) : ((! (var_1_63 && var_1_50)) ? (var_1_48 == ((signed char) ((var_1_49 - var_1_6) - var_1_10))) : 1))) && ((var_1_41 && last_1_var_1_13) ? (last_1_var_1_50 ? (var_1_50 == ((unsigned char) (var_1_14 && ((var_1_51 && var_1_52) && var_1_53)))) : (var_1_50 == ((unsigned char) var_1_15))) : ((var_1_14 || last_1_var_1_63) ? ((((2 & var_1_18) % var_1_44) < var_1_17) ? (var_1_50 == ((unsigned char) (! ((var_1_38 < var_1_39) || var_1_54)))) : ((var_1_54 || var_1_14) ? (var_1_50 == ((unsigned char) var_1_41)) : 1)) : (var_1_50 == ((unsigned char) (((var_1_26 * last_1_var_1_32) > last_1_var_1_32) || var_1_54)))))) && (var_1_55 == ((float) var_1_27))) && ((var_1_27 > var_1_59) ? (var_1_56 == ((unsigned long int) ((((var_1_44) < ((var_1_57 - (var_1_47 + var_1_9)))) ? (var_1_44) : ((var_1_57 - (var_1_47 + var_1_9))))))) : (var_1_56 == ((unsigned long int) (var_1_57 - (((((256u + var_1_18)) < (var_1_7)) ? ((256u + var_1_18)) : (var_1_7)))))))) && (var_1_13 ? (var_1_58 == ((unsigned long int) (var_1_10 + var_1_31))) : 1)) && (((2 * var_1_29) != (var_1_31 * last_1_var_1_23)) ? ((var_1_8 < var_1_47) ? (((((((last_1_var_1_43) > (var_1_11)) ? (last_1_var_1_43) : (var_1_11))) - var_1_18) == (last_1_var_1_23 | var_1_6)) ? (var_1_59 == ((double) ((var_1_60 + var_1_61) + var_1_39))) : 1) : (var_1_59 == ((double) var_1_26))) : (var_1_59 == ((double) var_1_39)))) && (var_1_50 ? (var_1_62 == ((signed short int) var_1_6)) : 1)) && (((((((last_1_var_1_25) > (last_1_var_1_32)) ? (last_1_var_1_25) : (last_1_var_1_32))) + ((((last_1_var_1_59) < (last_1_var_1_32)) ? (last_1_var_1_59) : (last_1_var_1_32)))) >= last_1_var_1_59) ? (var_1_53 ? ((last_1_var_1_23 == var_1_44) ? (var_1_63 == ((unsigned char) var_1_41)) : (var_1_63 == ((unsigned char) 0))) : 1) : (var_1_63 == ((unsigned char) var_1_52)))
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
