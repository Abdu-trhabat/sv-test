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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 9.3;
float var_1_4 = 4.5;
float var_1_5 = 0.0;
float var_1_6 = 2.4;
float var_1_7 = 50.1;
float var_1_8 = 0.8;
float var_1_9 = 32.5;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 45600;
unsigned short int var_1_14 = 29321;
unsigned short int var_1_15 = 32;
unsigned short int var_1_16 = 1;
unsigned short int var_1_17 = 50;
unsigned short int var_1_18 = 5;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = -0.25;
unsigned long int var_1_22 = 16;
signed char var_1_23 = -32;
signed char var_1_24 = 64;
signed char var_1_25 = 16;
signed char var_1_26 = 1;
signed char var_1_27 = 0;
signed char var_1_28 = 2;
signed char var_1_29 = 32;
double var_1_32 = 16.5;
signed char var_1_33 = -8;
signed char var_1_34 = -2;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
signed short int var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 128;
signed char var_1_40 = -64;
unsigned long int var_1_41 = 3234858142;
unsigned long int var_1_42 = 10;
unsigned short int var_1_43 = 64;
double var_1_44 = 5.5;
signed short int var_1_45 = 128;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
float var_1_50 = 63.6;
signed short int var_1_51 = 8;
signed short int var_1_52 = 31739;
signed short int var_1_53 = 10000;
unsigned long int var_1_54 = 8;
unsigned long int var_1_55 = 32;
unsigned long int var_1_56 = 200;
unsigned char var_1_57 = 0;
float var_1_58 = 0.0;
unsigned long int var_1_59 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_7 < (var_1_8 * var_1_6)) {
  var_1_11 = ((((0) < (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16)))))) ? (0) : (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16)))))));
 } else {
  var_1_11 = ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - var_1_15) + var_1_16);
 }
 if (var_1_8 >= 25.5f) {
  var_1_19 = (! var_1_20);
 }
 if (var_1_15 > var_1_13) {
  if (var_1_8 <= var_1_6) {
   var_1_21 = (var_1_8 + var_1_6);
  } else {
   var_1_21 = ((var_1_6 + var_1_8) - ((((256.85) < ((var_1_5 - var_1_9))) ? (256.85) : ((var_1_5 - var_1_9)))));
  }
 } else {
  var_1_21 = (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) + (var_1_9 - var_1_8));
 }
 var_1_38 = (var_1_39 - var_1_26);
 var_1_50 = ((((var_1_7) < (9.93f)) ? (var_1_7) : (9.93f)));
 var_1_51 = ((var_1_52 - (var_1_53 - var_1_39)) - ((((var_1_11) < (var_1_18)) ? (var_1_11) : (var_1_18))));
 if (var_1_21 > var_1_6) {
  if (! (var_1_12 != var_1_53)) {
   var_1_54 = ((((var_1_15) < (((((var_1_52) > (var_1_39)) ? (var_1_52) : (var_1_39))))) ? (var_1_15) : (((((var_1_52) > (var_1_39)) ? (var_1_52) : (var_1_39))))));
  }
 }
 if (((((var_1_5) < (((((var_1_21) > (var_1_50)) ? (var_1_21) : (var_1_50))))) ? (var_1_5) : (((((var_1_21) > (var_1_50)) ? (var_1_21) : (var_1_50)))))) != (- var_1_8)) {
  var_1_55 = var_1_26;
 } else {
  if (var_1_47) {
   var_1_55 = var_1_38;
  } else {
   var_1_55 = var_1_56;
  }
 }
 signed long int stepLocal_8 = var_1_16 / var_1_14;
 if (((var_1_55 + var_1_13) - var_1_18) != stepLocal_8) {
  if (((var_1_58 - var_1_6) - var_1_4) < ((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) {
   var_1_57 = var_1_36;
  } else {
   var_1_57 = var_1_47;
  }
 }
 if (var_1_15 > (var_1_13 ^ (var_1_16 / var_1_14))) {
  var_1_17 = (var_1_13 - 64);
 } else {
  if ((var_1_54 * var_1_11) <= var_1_12) {
   var_1_17 = (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + (var_1_14 - var_1_18));
  } else {
   var_1_17 = var_1_13;
  }
 }
 if (var_1_13 <= var_1_12) {
  if (((var_1_13 * var_1_12) % var_1_23) > var_1_14) {
   var_1_22 = var_1_13;
  } else {
   var_1_22 = var_1_17;
  }
 } else {
  var_1_22 = var_1_18;
 }
 unsigned char stepLocal_0 = var_1_57;
 if (var_1_19) {
  var_1_35 = (((var_1_22 == var_1_34) && var_1_20) || var_1_36);
 } else {
  if (var_1_20) {
   if (var_1_19 || stepLocal_0) {
    var_1_35 = (var_1_19 && (var_1_57 && var_1_36));
   } else {
    var_1_35 = var_1_36;
   }
  } else {
   var_1_35 = var_1_36;
  }
 }
 if ((var_1_4 / 1.85) < ((15.75 - var_1_5) * var_1_9)) {
  var_1_43 = ((((var_1_39) > (var_1_22)) ? (var_1_39) : (var_1_22)));
 }
 unsigned short int stepLocal_7 = var_1_12;
 unsigned char stepLocal_6 = (var_1_6 / var_1_32) > var_1_50;
 if (stepLocal_6 && var_1_20) {
  if (var_1_14 >= stepLocal_7) {
   var_1_44 = (var_1_4 - var_1_6);
  }
 } else {
  var_1_44 = ((((var_1_8) > (((var_1_9 + var_1_6) - var_1_5))) ? (var_1_8) : (((var_1_9 + var_1_6) - var_1_5))));
 }
 if (var_1_22 >= (var_1_17 / -4)) {
  var_1_1 = (var_1_4 - (var_1_5 - var_1_6));
 } else {
  if (64.075 <= var_1_5) {
   var_1_1 = (var_1_6 + ((((var_1_7) < ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9)))));
  } else {
   if (! var_1_19) {
    var_1_1 = ((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7)));
   }
  }
 }
 if (var_1_6 > ((var_1_44 * var_1_9) / var_1_5)) {
  var_1_24 = (((((var_1_25 - var_1_26)) < ((((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28))) - ((((100) > (64)) ? (100) : (64)))))) ? ((var_1_25 - var_1_26)) : ((((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28))) - ((((100) > (64)) ? (100) : (64)))))));
 }
 if (var_1_35) {
  if (var_1_22 < (var_1_43 + 2)) {
   if (256.5 > (9.9999999995E9 / var_1_32)) {
    var_1_29 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
   } else {
    if (var_1_9 > var_1_8) {
     var_1_29 = ((((var_1_26) > (var_1_28)) ? (var_1_26) : (var_1_28)));
    } else {
     if (var_1_17 <= var_1_15) {
      var_1_29 = var_1_28;
     } else {
      var_1_29 = var_1_27;
     }
    }
   }
  } else {
   var_1_29 = ((((-1) < 0 ) ? -(-1) : (-1)));
  }
 } else {
  var_1_29 = (var_1_33 + var_1_34);
 }
 unsigned long int stepLocal_5 = (((var_1_43) < ((var_1_42 / var_1_14))) ? (var_1_43) : ((var_1_42 / var_1_14)));
 unsigned char stepLocal_4 = var_1_39;
 if ((var_1_18 * (var_1_41 - var_1_42)) >= stepLocal_4) {
  if (var_1_16 <= stepLocal_5) {
   var_1_40 = (((((((64) < (var_1_25)) ? (64) : (var_1_25))) < 0 ) ? -((((64) < (var_1_25)) ? (64) : (var_1_25))) : ((((64) < (var_1_25)) ? (64) : (var_1_25)))));
  } else {
   var_1_40 = ((((var_1_28) > ((var_1_25 - var_1_26))) ? (var_1_28) : ((var_1_25 - var_1_26))));
  }
 }
 if (((((var_1_1) < (var_1_21)) ? (var_1_1) : (var_1_21))) <= var_1_58) {
  if ((var_1_21 < var_1_9) && var_1_57) {
   var_1_59 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
  } else {
   var_1_59 = var_1_22;
  }
 } else {
  var_1_59 = var_1_17;
 }
 if (var_1_59 <= var_1_12) {
  var_1_45 = (((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))) - var_1_39);
 }
 if (var_1_59 < var_1_22) {
  var_1_46 = ((var_1_19 || (var_1_36 || var_1_47)) && var_1_48);
 } else {
  if (((((var_1_11) > (var_1_18)) ? (var_1_11) : (var_1_18))) >= (((((var_1_34) > (var_1_26)) ? (var_1_34) : (var_1_26))) % var_1_14)) {
   var_1_46 = (! var_1_48);
  } else {
   if (var_1_15 <= var_1_41) {
    var_1_46 = 1;
   } else {
    if (((var_1_39 - var_1_26) + var_1_11) == (var_1_33 * (var_1_16 / var_1_13))) {
     var_1_46 = ((var_1_28 >= ((((var_1_42) > (var_1_13)) ? (var_1_42) : (var_1_13)))) && var_1_36);
    } else {
     var_1_46 = (((var_1_44 * var_1_7) < var_1_1) && var_1_20);
    }
   }
  }
 }
 unsigned char stepLocal_3 = var_1_11 >= var_1_14;
 signed long int stepLocal_2 = (((var_1_34) > (var_1_13)) ? (var_1_34) : (var_1_13));
 unsigned short int stepLocal_1 = var_1_18;
 if (stepLocal_3 && var_1_57) {
  var_1_37 = ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25)));
 } else {
  if (var_1_16 < stepLocal_1) {
   var_1_37 = (((((((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28)))) > (var_1_18)) ? (((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28)))) : (var_1_18))) - var_1_15);
  } else {
   if ((var_1_25 * var_1_45) >= stepLocal_2) {
    var_1_37 = ((((var_1_33 + var_1_28) < 0 ) ? -(var_1_33 + var_1_28) : (var_1_33 + var_1_28)));
   } else {
    var_1_37 = ((((((((var_1_25) < (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))) ? (var_1_25) : (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))))) < ((var_1_27 - var_1_15))) ? (((((var_1_25) < (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))) ? (var_1_25) : (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))))) : ((var_1_27 - var_1_15))));
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -128);
 assume_abort_if_not(var_1_23 <= 127);
 assume_abort_if_not(var_1_23 != 0);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -1);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -1);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -63);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967295);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_52 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_52 >= 16382);
 assume_abort_if_not(var_1_52 <= 32766);
 var_1_53 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_53 >= 8191);
 assume_abort_if_not(var_1_53 <= 16383);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 4611686.018427388000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((((((((((((var_1_22 >= (var_1_17 / -4)) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - var_1_6)))) : ((64.075 <= var_1_5) ? (var_1_1 == ((float) (var_1_6 + ((((var_1_7) < ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9))))))) : ((! var_1_19) ? (var_1_1 == ((float) ((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7))))) : 1))) && ((var_1_7 < (var_1_8 * var_1_6)) ? (var_1_11 == ((unsigned short int) ((((0) < (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16)))))) ? (0) : (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16))))))))) : (var_1_11 == ((unsigned short int) ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - var_1_15) + var_1_16))))) && ((var_1_15 > (var_1_13 ^ (var_1_16 / var_1_14))) ? (var_1_17 == ((unsigned short int) (var_1_13 - 64))) : (((var_1_54 * var_1_11) <= var_1_12) ? (var_1_17 == ((unsigned short int) (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + (var_1_14 - var_1_18)))) : (var_1_17 == ((unsigned short int) var_1_13))))) && ((var_1_8 >= 25.5f) ? (var_1_19 == ((unsigned char) (! var_1_20))) : 1)) && ((var_1_15 > var_1_13) ? ((var_1_8 <= var_1_6) ? (var_1_21 == ((double) (var_1_8 + var_1_6))) : (var_1_21 == ((double) ((var_1_6 + var_1_8) - ((((256.85) < ((var_1_5 - var_1_9))) ? (256.85) : ((var_1_5 - var_1_9)))))))) : (var_1_21 == ((double) (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) + (var_1_9 - var_1_8)))))) && ((var_1_13 <= var_1_12) ? ((((var_1_13 * var_1_12) % var_1_23) > var_1_14) ? (var_1_22 == ((unsigned long int) var_1_13)) : (var_1_22 == ((unsigned long int) var_1_17))) : (var_1_22 == ((unsigned long int) var_1_18)))) && ((var_1_6 > ((var_1_44 * var_1_9) / var_1_5)) ? (var_1_24 == ((signed char) (((((var_1_25 - var_1_26)) < ((((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28))) - ((((100) > (64)) ? (100) : (64)))))) ? ((var_1_25 - var_1_26)) : ((((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28))) - ((((100) > (64)) ? (100) : (64))))))))) : 1)) && (var_1_35 ? ((var_1_22 < (var_1_43 + 2)) ? ((256.5 > (9.9999999995E9 / var_1_32)) ? (var_1_29 == ((signed char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : ((var_1_9 > var_1_8) ? (var_1_29 == ((signed char) ((((var_1_26) > (var_1_28)) ? (var_1_26) : (var_1_28))))) : ((var_1_17 <= var_1_15) ? (var_1_29 == ((signed char) var_1_28)) : (var_1_29 == ((signed char) var_1_27))))) : (var_1_29 == ((signed char) ((((-1) < 0 ) ? -(-1) : (-1)))))) : (var_1_29 == ((signed char) (var_1_33 + var_1_34))))) && (var_1_19 ? (var_1_35 == ((unsigned char) (((var_1_22 == var_1_34) && var_1_20) || var_1_36))) : (var_1_20 ? ((var_1_19 || var_1_57) ? (var_1_35 == ((unsigned char) (var_1_19 && (var_1_57 && var_1_36)))) : (var_1_35 == ((unsigned char) var_1_36))) : (var_1_35 == ((unsigned char) var_1_36))))) && (((var_1_11 >= var_1_14) && var_1_57) ? (var_1_37 == ((signed short int) ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))))) : ((var_1_16 < var_1_18) ? (var_1_37 == ((signed short int) (((((((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28)))) > (var_1_18)) ? (((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28)))) : (var_1_18))) - var_1_15))) : (((var_1_25 * var_1_45) >= ((((var_1_34) > (var_1_13)) ? (var_1_34) : (var_1_13)))) ? (var_1_37 == ((signed short int) ((((var_1_33 + var_1_28) < 0 ) ? -(var_1_33 + var_1_28) : (var_1_33 + var_1_28))))) : (var_1_37 == ((signed short int) ((((((((var_1_25) < (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))) ? (var_1_25) : (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))))) < ((var_1_27 - var_1_15))) ? (((((var_1_25) < (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))) ? (var_1_25) : (((((-32) < (var_1_40)) ? (-32) : (var_1_40))))))) : ((var_1_27 - var_1_15)))))))))) && (var_1_38 == ((unsigned char) (var_1_39 - var_1_26)))) && (((var_1_18 * (var_1_41 - var_1_42)) >= var_1_39) ? ((var_1_16 <= ((((var_1_43) < ((var_1_42 / var_1_14))) ? (var_1_43) : ((var_1_42 / var_1_14))))) ? (var_1_40 == ((signed char) (((((((64) < (var_1_25)) ? (64) : (var_1_25))) < 0 ) ? -((((64) < (var_1_25)) ? (64) : (var_1_25))) : ((((64) < (var_1_25)) ? (64) : (var_1_25))))))) : (var_1_40 == ((signed char) ((((var_1_28) > ((var_1_25 - var_1_26))) ? (var_1_28) : ((var_1_25 - var_1_26))))))) : 1)) && (((var_1_4 / 1.85) < ((15.75 - var_1_5) * var_1_9)) ? (var_1_43 == ((unsigned short int) ((((var_1_39) > (var_1_22)) ? (var_1_39) : (var_1_22))))) : 1)) && ((((var_1_6 / var_1_32) > var_1_50) && var_1_20) ? ((var_1_14 >= var_1_12) ? (var_1_44 == ((double) (var_1_4 - var_1_6))) : 1) : (var_1_44 == ((double) ((((var_1_8) > (((var_1_9 + var_1_6) - var_1_5))) ? (var_1_8) : (((var_1_9 + var_1_6) - var_1_5)))))))) && ((var_1_59 <= var_1_12) ? (var_1_45 == ((signed short int) (((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))) - var_1_39))) : 1)) && ((var_1_59 < var_1_22) ? (var_1_46 == ((unsigned char) ((var_1_19 || (var_1_36 || var_1_47)) && var_1_48))) : ((((((var_1_11) > (var_1_18)) ? (var_1_11) : (var_1_18))) >= (((((var_1_34) > (var_1_26)) ? (var_1_34) : (var_1_26))) % var_1_14)) ? (var_1_46 == ((unsigned char) (! var_1_48))) : ((var_1_15 <= var_1_41) ? (var_1_46 == ((unsigned char) 1)) : ((((var_1_39 - var_1_26) + var_1_11) == (var_1_33 * (var_1_16 / var_1_13))) ? (var_1_46 == ((unsigned char) ((var_1_28 >= ((((var_1_42) > (var_1_13)) ? (var_1_42) : (var_1_13)))) && var_1_36))) : (var_1_46 == ((unsigned char) (((var_1_44 * var_1_7) < var_1_1) && var_1_20)))))))) && (var_1_50 == ((float) ((((var_1_7) < (9.93f)) ? (var_1_7) : (9.93f)))))) && (var_1_51 == ((signed short int) ((var_1_52 - (var_1_53 - var_1_39)) - ((((var_1_11) < (var_1_18)) ? (var_1_11) : (var_1_18))))))) && ((var_1_21 > var_1_6) ? ((! (var_1_12 != var_1_53)) ? (var_1_54 == ((unsigned long int) ((((var_1_15) < (((((var_1_52) > (var_1_39)) ? (var_1_52) : (var_1_39))))) ? (var_1_15) : (((((var_1_52) > (var_1_39)) ? (var_1_52) : (var_1_39)))))))) : 1) : 1)) && ((((((var_1_5) < (((((var_1_21) > (var_1_50)) ? (var_1_21) : (var_1_50))))) ? (var_1_5) : (((((var_1_21) > (var_1_50)) ? (var_1_21) : (var_1_50)))))) != (- var_1_8)) ? (var_1_55 == ((unsigned long int) var_1_26)) : (var_1_47 ? (var_1_55 == ((unsigned long int) var_1_38)) : (var_1_55 == ((unsigned long int) var_1_56))))) && ((((var_1_55 + var_1_13) - var_1_18) != (var_1_16 / var_1_14)) ? ((((var_1_58 - var_1_6) - var_1_4) < ((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) ? (var_1_57 == ((unsigned char) var_1_36)) : (var_1_57 == ((unsigned char) var_1_47))) : 1)) && ((((((var_1_1) < (var_1_21)) ? (var_1_1) : (var_1_21))) <= var_1_58) ? (((var_1_21 < var_1_9) && var_1_57) ? (var_1_59 == ((unsigned long int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) : (var_1_59 == ((unsigned long int) var_1_22))) : (var_1_59 == ((unsigned long int) var_1_17)))
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
