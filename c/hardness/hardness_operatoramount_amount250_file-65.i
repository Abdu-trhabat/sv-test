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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
signed long int var_1_4 = -16;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 5;
signed short int var_1_9 = 8;
signed long int var_1_10 = -1;
double var_1_12 = 4.55;
unsigned char var_1_13 = 200;
unsigned char var_1_14 = 2;
double var_1_15 = 9.25;
double var_1_16 = 99999999999999.25;
signed long int var_1_17 = 5;
signed long int var_1_18 = 8;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
signed char var_1_21 = -2;
signed long int var_1_23 = -64;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 64;
unsigned char var_1_26 = 1;
signed long int var_1_28 = -10;
unsigned short int var_1_29 = 56364;
unsigned short int var_1_30 = 32;
signed long int var_1_31 = 4;
double var_1_32 = 5.75;
double var_1_33 = 255.9;
double var_1_34 = 1.75;
double var_1_35 = 63.25;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 4;
unsigned long int var_1_40 = 1961509315;
unsigned long int var_1_41 = 1433568485;
unsigned char var_1_42 = 16;
unsigned char var_1_43 = 1;
signed short int var_1_44 = 8;
signed short int var_1_45 = 0;
unsigned long int var_1_46 = 4;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned long int var_1_49 = 25;
unsigned long int var_1_50 = 500;
double var_1_51 = 99.15;
unsigned char var_1_52 = 2;
float var_1_53 = 2.75;
unsigned long int var_1_54 = 256;
float var_1_55 = 32.45;
signed long int var_1_56 = 10;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
double var_1_60 = 2.2;
signed long int var_1_61 = -32;
signed short int last_1_var_1_9 = 8;
signed long int last_1_var_1_17 = 5;
unsigned char last_1_var_1_19 = 1;
unsigned char last_1_var_1_37 = 1;
signed short int last_1_var_1_45 = 0;
unsigned long int last_1_var_1_49 = 25;
unsigned long int last_1_var_1_54 = 256;
signed long int last_1_var_1_61 = -32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = var_1_8;
 signed long int stepLocal_2 = (var_1_4 + last_1_var_1_17) * var_1_10;
 if (stepLocal_2 <= last_1_var_1_61) {
  if (stepLocal_3 <= var_1_13) {
   var_1_18 = (var_1_13 + last_1_var_1_49);
  }
 }
 unsigned char stepLocal_15 = var_1_20;
 if (last_1_var_1_37 && stepLocal_15) {
  var_1_50 = (((((((((var_1_8) > (last_1_var_1_9)) ? (var_1_8) : (last_1_var_1_9)))) > (var_1_14)) ? (((((var_1_8) > (last_1_var_1_9)) ? (var_1_8) : (last_1_var_1_9)))) : (var_1_14))) + var_1_6);
 }
 signed long int stepLocal_0 = (var_1_13 - var_1_14) - 10;
 if (var_1_7 > stepLocal_0) {
  var_1_12 = ((((((31.25 + var_1_15)) > (((((5.5) < 0 ) ? -(5.5) : (5.5))))) ? ((31.25 + var_1_15)) : (((((5.5) < 0 ) ? -(5.5) : (5.5)))))) - var_1_16);
 }
 var_1_37 = (! (var_1_20 && var_1_38));
 var_1_39 = ((var_1_40 + var_1_41) - var_1_13);
 signed long int stepLocal_14 = ((((32 - var_1_44)) < (var_1_23)) ? ((32 - var_1_44)) : (var_1_23));
 if (stepLocal_14 >= var_1_10) {
  var_1_42 = (var_1_7 - ((((32) < 0 ) ? -(32) : (32))));
 }
 if (var_1_37) {
  var_1_47 = var_1_43;
 } else {
  var_1_47 = (var_1_43 && (var_1_37 && var_1_48));
 }
 unsigned long int stepLocal_17 = (((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39));
 if (stepLocal_17 < var_1_26) {
  var_1_52 = ((((var_1_7) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_7) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))));
 }
 var_1_55 = 50.25f;
 if (((((var_1_10) < (var_1_18)) ? (var_1_10) : (var_1_18))) != (-256 + var_1_50)) {
  var_1_61 = var_1_26;
 }
 if (((var_1_29 - var_1_30) - ((((var_1_7) > (var_1_42)) ? (var_1_7) : (var_1_42)))) == var_1_26) {
  var_1_28 = ((((var_1_31) < ((((((var_1_26 + var_1_8)) > ((var_1_7 + var_1_50))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + var_1_50)))))) ? (var_1_31) : ((((((var_1_26 + var_1_8)) > ((var_1_7 + var_1_50))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + var_1_50)))))));
 }
 signed long int stepLocal_11 = var_1_28;
 if (stepLocal_11 <= var_1_31) {
  var_1_32 = ((var_1_15 - var_1_33) + var_1_34);
 } else {
  if (var_1_37) {
   var_1_32 = (((((((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) > (var_1_16)) ? (((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) : (var_1_16))) - var_1_35);
  } else {
   var_1_32 = (((((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) < (var_1_16)) ? ((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) : (var_1_16)));
  }
 }
 if (var_1_47) {
  var_1_5 = ((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8))));
 }
 unsigned char stepLocal_1 = var_1_7;
 if (var_1_18 > stepLocal_1) {
  var_1_17 = (5 + (var_1_7 + ((((var_1_14) > (var_1_18)) ? (var_1_14) : (var_1_18)))));
 } else {
  var_1_17 = (var_1_6 + var_1_28);
 }
 unsigned long int stepLocal_21 = var_1_39 * (var_1_50 / var_1_13);
 if ((last_1_var_1_54 + (var_1_17 / var_1_25)) <= stepLocal_21) {
  var_1_54 = var_1_46;
 }
 if (last_1_var_1_49 > (var_1_40 << var_1_39)) {
  if (((var_1_16 + var_1_32) + 1.28) < var_1_33) {
   var_1_49 = ((((var_1_40) < ((var_1_7 + ((((var_1_26) < (var_1_5)) ? (var_1_26) : (var_1_5)))))) ? (var_1_40) : ((var_1_7 + ((((var_1_26) < (var_1_5)) ? (var_1_26) : (var_1_5)))))));
  }
 }
 unsigned short int stepLocal_16 = var_1_30;
 if (((((var_1_54) > (var_1_4)) ? (var_1_54) : (var_1_4))) >= stepLocal_16) {
  var_1_51 = (100.25 - var_1_16);
 }
 signed long int stepLocal_6 = ((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4))) / var_1_23;
 unsigned long int stepLocal_5 = ((((var_1_6 * var_1_39)) > (var_1_18)) ? ((var_1_6 * var_1_39)) : (var_1_18));
 if (stepLocal_5 > var_1_17) {
  var_1_21 = var_1_13;
 } else {
  if (var_1_50 == stepLocal_6) {
   var_1_21 = var_1_14;
  } else {
   var_1_21 = var_1_13;
  }
 }
 if ((((((4) < (var_1_49)) ? (4) : (var_1_49))) % var_1_13) < (last_1_var_1_45 >> var_1_46)) {
  if (var_1_54 <= (var_1_4 * (var_1_30 * var_1_14))) {
   if ((var_1_13 / var_1_7) >= last_1_var_1_45) {
    var_1_45 = (((((var_1_25) < (var_1_6)) ? (var_1_25) : (var_1_6))) + last_1_var_1_45);
   }
  }
 }
 signed long int stepLocal_20 = 1;
 unsigned long int stepLocal_19 = var_1_54;
 signed long int stepLocal_18 = var_1_31;
 if (var_1_46 > stepLocal_19) {
  if (stepLocal_20 == var_1_54) {
   var_1_53 = var_1_34;
  } else {
   if (stepLocal_18 != (var_1_26 % var_1_7)) {
    var_1_53 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
   } else {
    var_1_53 = ((((var_1_16 - var_1_35) < 0 ) ? -(var_1_16 - var_1_35) : (var_1_16 - var_1_35)));
   }
  }
 }
 if (var_1_32 < (var_1_12 * var_1_32)) {
  var_1_58 = ((var_1_49 < var_1_10) && var_1_48);
 } else {
  var_1_58 = var_1_48;
 }
 unsigned char stepLocal_4 = var_1_37;
 if (last_1_var_1_19) {
  if (stepLocal_4 || ((2.25 + var_1_51) != 31.625)) {
   var_1_19 = (! var_1_20);
  } else {
   var_1_19 = ((((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8))) < var_1_54) || var_1_20);
  }
 }
 if (var_1_19) {
  var_1_59 = var_1_38;
 }
 if (var_1_37 && var_1_59) {
  var_1_60 = var_1_16;
 } else {
  var_1_60 = var_1_33;
 }
 if (var_1_19) {
  if (var_1_19) {
   var_1_1 = (16 - 2);
  } else {
   var_1_1 = var_1_4;
  }
 }
 unsigned long int stepLocal_10 = var_1_39;
 unsigned char stepLocal_9 = var_1_8;
 unsigned char stepLocal_8 = var_1_8;
 unsigned char stepLocal_7 = var_1_8;
 if (stepLocal_10 > ((var_1_5 + var_1_6) - (var_1_8 + var_1_14))) {
  if (stepLocal_7 <= (var_1_18 + var_1_5)) {
   if ((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)))) < stepLocal_8) {
    var_1_24 = ((var_1_25 - var_1_26) + var_1_14);
   } else {
    if (stepLocal_9 <= ((((var_1_39) > ((var_1_45 / var_1_13))) ? (var_1_39) : ((var_1_45 / var_1_13))))) {
     var_1_24 = ((((var_1_6) < (var_1_25)) ? (var_1_6) : (var_1_25)));
    } else {
     var_1_24 = ((((var_1_14) < ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) ? (var_1_14) : ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))));
    }
   }
  } else {
   var_1_24 = (var_1_7 - var_1_14);
  }
 } else {
  var_1_24 = (((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))));
 }
 unsigned char stepLocal_13 = var_1_26;
 signed long int stepLocal_12 = var_1_17;
 if (((var_1_1 + 8) / var_1_10) != stepLocal_12) {
  if (var_1_17 <= stepLocal_13) {
   var_1_36 = (var_1_7 - ((((var_1_14) < (var_1_26)) ? (var_1_14) : (var_1_26))));
  } else {
   var_1_36 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
  }
 }
 if (var_1_4 <= ((var_1_7 + var_1_8) / var_1_10)) {
  if (7.5 >= var_1_60) {
   var_1_9 = ((((var_1_8 - (var_1_39 + var_1_7)) < 0 ) ? -(var_1_8 - (var_1_39 + var_1_7)) : (var_1_8 - (var_1_39 + var_1_7))));
  } else {
   var_1_9 = var_1_39;
  }
 }
 unsigned long int stepLocal_22 = var_1_50;
 if ((var_1_51 * var_1_32) > var_1_60) {
  var_1_56 = ((((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))) + var_1_29) + ((((var_1_52) < (var_1_30)) ? (var_1_52) : (var_1_30))));
 } else {
  if ((var_1_9 + var_1_46) > stepLocal_22) {
   var_1_56 = (var_1_54 + (var_1_18 + var_1_45));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483647);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 assume_abort_if_not(var_1_10 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 191);
 assume_abort_if_not(var_1_13 <= 255);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 64);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 assume_abort_if_not(var_1_23 != 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 63);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 49151);
 assume_abort_if_not(var_1_29 <= 65535);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 16384);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483647);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741824);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 32767);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 7);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_19 ? (var_1_19 ? (var_1_1 == ((signed long int) (16 - 2))) : (var_1_1 == ((signed long int) var_1_4))) : 1) && (var_1_47 ? (var_1_5 == ((unsigned char) ((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8)))))) : 1)) && ((var_1_4 <= ((var_1_7 + var_1_8) / var_1_10)) ? ((7.5 >= var_1_60) ? (var_1_9 == ((signed short int) ((((var_1_8 - (var_1_39 + var_1_7)) < 0 ) ? -(var_1_8 - (var_1_39 + var_1_7)) : (var_1_8 - (var_1_39 + var_1_7)))))) : (var_1_9 == ((signed short int) var_1_39))) : 1)) && ((var_1_7 > ((var_1_13 - var_1_14) - 10)) ? (var_1_12 == ((double) ((((((31.25 + var_1_15)) > (((((5.5) < 0 ) ? -(5.5) : (5.5))))) ? ((31.25 + var_1_15)) : (((((5.5) < 0 ) ? -(5.5) : (5.5)))))) - var_1_16))) : 1)) && ((var_1_18 > var_1_7) ? (var_1_17 == ((signed long int) (5 + (var_1_7 + ((((var_1_14) > (var_1_18)) ? (var_1_14) : (var_1_18))))))) : (var_1_17 == ((signed long int) (var_1_6 + var_1_28))))) && ((((var_1_4 + last_1_var_1_17) * var_1_10) <= last_1_var_1_61) ? ((var_1_8 <= var_1_13) ? (var_1_18 == ((signed long int) (var_1_13 + last_1_var_1_49))) : 1) : 1)) && (last_1_var_1_19 ? ((var_1_37 || ((2.25 + var_1_51) != 31.625)) ? (var_1_19 == ((unsigned char) (! var_1_20))) : (var_1_19 == ((unsigned char) ((((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8))) < var_1_54) || var_1_20)))) : 1)) && (((((((var_1_6 * var_1_39)) > (var_1_18)) ? ((var_1_6 * var_1_39)) : (var_1_18))) > var_1_17) ? (var_1_21 == ((signed char) var_1_13)) : ((var_1_50 == (((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4))) / var_1_23)) ? (var_1_21 == ((signed char) var_1_14)) : (var_1_21 == ((signed char) var_1_13))))) && ((var_1_39 > ((var_1_5 + var_1_6) - (var_1_8 + var_1_14))) ? ((var_1_8 <= (var_1_18 + var_1_5)) ? (((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)))) < var_1_8) ? (var_1_24 == ((unsigned char) ((var_1_25 - var_1_26) + var_1_14))) : ((var_1_8 <= ((((var_1_39) > ((var_1_45 / var_1_13))) ? (var_1_39) : ((var_1_45 / var_1_13))))) ? (var_1_24 == ((unsigned char) ((((var_1_6) < (var_1_25)) ? (var_1_6) : (var_1_25))))) : (var_1_24 == ((unsigned char) ((((var_1_14) < ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) ? (var_1_14) : ((var_1_7 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))))))) : (var_1_24 == ((unsigned char) (var_1_7 - var_1_14)))) : (var_1_24 == ((unsigned char) (((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) - var_1_25)) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))))) && ((((var_1_29 - var_1_30) - ((((var_1_7) > (var_1_42)) ? (var_1_7) : (var_1_42)))) == var_1_26) ? (var_1_28 == ((signed long int) ((((var_1_31) < ((((((var_1_26 + var_1_8)) > ((var_1_7 + var_1_50))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + var_1_50)))))) ? (var_1_31) : ((((((var_1_26 + var_1_8)) > ((var_1_7 + var_1_50))) ? ((var_1_26 + var_1_8)) : ((var_1_7 + var_1_50))))))))) : 1)) && ((var_1_28 <= var_1_31) ? (var_1_32 == ((double) ((var_1_15 - var_1_33) + var_1_34))) : (var_1_37 ? (var_1_32 == ((double) (((((((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) > (var_1_16)) ? (((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) : (var_1_16))) - var_1_35))) : (var_1_32 == ((double) (((((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) < (var_1_16)) ? ((((((var_1_34 + 1.00000000625E8)) > ((var_1_15 - 1.00000000025E9))) ? ((var_1_34 + 1.00000000625E8)) : ((var_1_15 - 1.00000000025E9))))) : (var_1_16)))))))) && ((((var_1_1 + 8) / var_1_10) != var_1_17) ? ((var_1_17 <= var_1_26) ? (var_1_36 == ((unsigned char) (var_1_7 - ((((var_1_14) < (var_1_26)) ? (var_1_14) : (var_1_26)))))) : (var_1_36 == ((unsigned char) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) : 1)) && (var_1_37 == ((unsigned char) (! (var_1_20 && var_1_38))))) && (var_1_39 == ((unsigned long int) ((var_1_40 + var_1_41) - var_1_13)))) && (((((((32 - var_1_44)) < (var_1_23)) ? ((32 - var_1_44)) : (var_1_23))) >= var_1_10) ? (var_1_42 == ((unsigned char) (var_1_7 - ((((32) < 0 ) ? -(32) : (32)))))) : 1)) && (((((((4) < (var_1_49)) ? (4) : (var_1_49))) % var_1_13) < (last_1_var_1_45 >> var_1_46)) ? ((var_1_54 <= (var_1_4 * (var_1_30 * var_1_14))) ? (((var_1_13 / var_1_7) >= last_1_var_1_45) ? (var_1_45 == ((signed short int) (((((var_1_25) < (var_1_6)) ? (var_1_25) : (var_1_6))) + last_1_var_1_45))) : 1) : 1) : 1)) && (var_1_37 ? (var_1_47 == ((unsigned char) var_1_43)) : (var_1_47 == ((unsigned char) (var_1_43 && (var_1_37 && var_1_48)))))) && ((last_1_var_1_49 > (var_1_40 << var_1_39)) ? ((((var_1_16 + var_1_32) + 1.28) < var_1_33) ? (var_1_49 == ((unsigned long int) ((((var_1_40) < ((var_1_7 + ((((var_1_26) < (var_1_5)) ? (var_1_26) : (var_1_5)))))) ? (var_1_40) : ((var_1_7 + ((((var_1_26) < (var_1_5)) ? (var_1_26) : (var_1_5))))))))) : 1) : 1)) && ((last_1_var_1_37 && var_1_20) ? (var_1_50 == ((unsigned long int) (((((((((var_1_8) > (last_1_var_1_9)) ? (var_1_8) : (last_1_var_1_9)))) > (var_1_14)) ? (((((var_1_8) > (last_1_var_1_9)) ? (var_1_8) : (last_1_var_1_9)))) : (var_1_14))) + var_1_6))) : 1)) && ((((((var_1_54) > (var_1_4)) ? (var_1_54) : (var_1_4))) >= var_1_30) ? (var_1_51 == ((double) (100.25 - var_1_16))) : 1)) && ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) < var_1_26) ? (var_1_52 == ((unsigned char) ((((var_1_7) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_7) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))))) : 1)) && ((var_1_46 > var_1_54) ? ((1 == var_1_54) ? (var_1_53 == ((float) var_1_34)) : ((var_1_31 != (var_1_26 % var_1_7)) ? (var_1_53 == ((float) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) : (var_1_53 == ((float) ((((var_1_16 - var_1_35) < 0 ) ? -(var_1_16 - var_1_35) : (var_1_16 - var_1_35))))))) : 1)) && (((last_1_var_1_54 + (var_1_17 / var_1_25)) <= (var_1_39 * (var_1_50 / var_1_13))) ? (var_1_54 == ((unsigned long int) var_1_46)) : 1)) && (var_1_55 == ((float) 50.25f))) && (((var_1_51 * var_1_32) > var_1_60) ? (var_1_56 == ((signed long int) ((((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))) + var_1_29) + ((((var_1_52) < (var_1_30)) ? (var_1_52) : (var_1_30)))))) : (((var_1_9 + var_1_46) > var_1_50) ? (var_1_56 == ((signed long int) (var_1_54 + (var_1_18 + var_1_45)))) : 1))) && ((var_1_32 < (var_1_12 * var_1_32)) ? (var_1_58 == ((unsigned char) ((var_1_49 < var_1_10) && var_1_48))) : (var_1_58 == ((unsigned char) var_1_48)))) && (var_1_19 ? (var_1_59 == ((unsigned char) var_1_38)) : 1)) && ((var_1_37 && var_1_59) ? (var_1_60 == ((double) var_1_16)) : (var_1_60 == ((double) var_1_33)))) && ((((((var_1_10) < (var_1_18)) ? (var_1_10) : (var_1_18))) != (-256 + var_1_50)) ? (var_1_61 == ((signed long int) var_1_26)) : 1)
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
