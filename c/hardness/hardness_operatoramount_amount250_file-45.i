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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch45Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
unsigned long int var_1_2 = 16;
unsigned long int var_1_3 = 256;
signed long int var_1_5 = 5;
unsigned long int var_1_6 = 2;
unsigned long int var_1_7 = 8;
unsigned long int var_1_8 = 3974482504;
unsigned long int var_1_9 = 4191564779;
unsigned long int var_1_10 = 1942660812;
unsigned long int var_1_11 = 1000000000;
signed char var_1_12 = -128;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed short int var_1_15 = 128;
signed char var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 2;
signed char var_1_19 = 100;
double var_1_20 = 10.8;
double var_1_21 = 3.175;
double var_1_22 = 200.432;
signed long int var_1_23 = 1;
signed short int var_1_24 = 128;
signed short int var_1_26 = 256;
signed long int var_1_27 = 4;
unsigned char var_1_28 = 25;
double var_1_29 = 8.203;
double var_1_31 = 128.6;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
signed short int var_1_35 = 4;
signed short int var_1_36 = 20346;
signed short int var_1_37 = 10000;
signed long int var_1_38 = -25;
double var_1_39 = 0.0;
double var_1_40 = 5.1;
double var_1_41 = 64.3;
signed short int var_1_43 = 50;
unsigned long int var_1_44 = 3181636060;
signed short int var_1_45 = -2;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned short int var_1_48 = 16;
unsigned long int var_1_49 = 3889430741;
unsigned short int var_1_50 = 48378;
unsigned char var_1_51 = 8;
unsigned char var_1_52 = 1;
signed short int var_1_53 = -4;
double var_1_54 = 1000000000.2;
double var_1_56 = 5.8;
double var_1_57 = 15.5;
double var_1_58 = 128.5;
double var_1_59 = 8.975;
double var_1_60 = 15.8;
double var_1_61 = 3.5;
double var_1_62 = 4.5;
unsigned short int var_1_63 = 25;
unsigned short int var_1_64 = 2;
float var_1_65 = 0.8;
float var_1_66 = 16.6;
signed char var_1_67 = 10;
signed char var_1_68 = -32;
signed long int last_1_var_1_27 = 4;
signed short int last_1_var_1_53 = -4;
void initially(void) {
}
void step(void) {
 if (! ((var_1_11 >> var_1_5) < var_1_18)) {
  var_1_35 = ((var_1_36 - (var_1_37 - var_1_19)) - (var_1_18 + var_1_5));
 }
 var_1_46 = var_1_47;
 if ((((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) / var_1_39) == (- (var_1_40 + 0.625))) {
  var_1_53 = (((((-8) > ((var_1_5 + var_1_19))) ? (-8) : ((var_1_5 + var_1_19)))) + last_1_var_1_53);
 }
 signed long int stepLocal_19 = 0;
 if (var_1_46) {
  if (var_1_45 <= stepLocal_19) {
   var_1_65 = ((((((((var_1_59) < (var_1_61)) ? (var_1_59) : (var_1_61)))) > (var_1_31)) ? (((((var_1_59) < (var_1_61)) ? (var_1_59) : (var_1_61)))) : (var_1_31)));
  } else {
   var_1_65 = ((((var_1_58) > (var_1_56)) ? (var_1_58) : (var_1_56)));
  }
 } else {
  var_1_65 = var_1_56;
 }
 if (var_1_46) {
  var_1_66 = var_1_22;
 } else {
  var_1_66 = var_1_58;
 }
 unsigned long int stepLocal_1 = (var_1_2 * var_1_3) >> var_1_5;
 unsigned char stepLocal_0 = var_1_46;
 if ((var_1_2 >= var_1_3) || stepLocal_0) {
  if (stepLocal_1 >= 50u) {
   var_1_1 = (var_1_5 + (var_1_6 + var_1_7));
  } else {
   var_1_1 = (var_1_5 + ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))));
  }
 } else {
  if (var_1_46) {
   var_1_1 = (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - (var_1_10 - (var_1_11 - var_1_5)));
  }
 }
 if (var_1_1 == var_1_5) {
  var_1_12 = (var_1_5 - (var_1_13 - 8));
 }
 unsigned long int stepLocal_2 = var_1_1;
 if (stepLocal_2 >= (var_1_13 / var_1_10)) {
  var_1_16 = ((((var_1_5) < (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))))) ? (var_1_5) : (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))))));
 } else {
  var_1_16 = ((var_1_5 + var_1_18) - ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19))));
 }
 unsigned long int stepLocal_4 = - (var_1_11 * var_1_10);
 unsigned char stepLocal_3 = var_1_46;
 if ((var_1_18 < var_1_6) && stepLocal_3) {
  if ((var_1_6 ^ var_1_1) <= stepLocal_4) {
   var_1_20 = (var_1_21 + var_1_22);
  } else {
   var_1_20 = var_1_21;
  }
 }
 if (var_1_46) {
  var_1_27 = last_1_var_1_27;
 } else {
  var_1_27 = (var_1_15 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
 }
 unsigned long int stepLocal_9 = (((var_1_5) < (64u)) ? (var_1_5) : (64u));
 if ((var_1_7 & var_1_18) != stepLocal_9) {
  if (! var_1_46) {
   var_1_28 = var_1_13;
  } else {
   var_1_28 = ((((var_1_19) < (((((var_1_13) > (50)) ? (var_1_13) : (50))))) ? (var_1_19) : (((((var_1_13) > (50)) ? (var_1_13) : (50))))));
  }
 }
 unsigned long int stepLocal_11 = var_1_2 * var_1_1;
 unsigned char stepLocal_10 = var_1_31 > var_1_22;
 if (stepLocal_11 > var_1_15) {
  if (var_1_46 || stepLocal_10) {
   var_1_32 = (! var_1_33);
  } else {
   var_1_32 = (var_1_33 && var_1_34);
  }
 }
 unsigned long int stepLocal_12 = var_1_10;
 if (stepLocal_12 <= (var_1_8 - var_1_5)) {
  if (var_1_20 <= (256.5 - (var_1_39 - 64.6))) {
   if (var_1_39 >= ((var_1_40 - var_1_41) + var_1_21)) {
    var_1_38 = (2 - var_1_19);
   } else {
    var_1_38 = (var_1_7 + ((((var_1_53) > (var_1_37)) ? (var_1_53) : (var_1_37))));
   }
  }
 }
 unsigned long int stepLocal_14 = var_1_6;
 unsigned long int stepLocal_13 = var_1_53 + (var_1_44 - 128u);
 if (var_1_1 >= stepLocal_13) {
  var_1_43 = var_1_19;
 } else {
  if (stepLocal_14 >= var_1_5) {
   var_1_43 = ((((((var_1_13 - var_1_5)) < (var_1_45)) ? ((var_1_13 - var_1_5)) : (var_1_45))) + (var_1_19 + var_1_27));
  }
 }
 signed char stepLocal_15 = var_1_18;
 if (stepLocal_15 <= var_1_35) {
  var_1_54 = (((((var_1_31 + ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) < ((var_1_56 - var_1_57))) ? ((var_1_31 + ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) : ((var_1_56 - var_1_57))));
 } else {
  if (var_1_46) {
   var_1_54 = (((3.9672905023478487E18 + 4.5328133947150986E18) - var_1_58) - var_1_59);
  } else {
   if (var_1_32) {
    var_1_54 = (var_1_58 - ((((1.000000000075E10) > ((var_1_60 + var_1_61))) ? (1.000000000075E10) : ((var_1_60 + var_1_61)))));
   } else {
    var_1_54 = (var_1_60 - 49.6);
   }
  }
 }
 if (var_1_32) {
  var_1_67 = (var_1_5 + var_1_68);
 } else {
  if (((var_1_32 && var_1_34) || var_1_47) && var_1_33) {
   var_1_67 = (var_1_68 + var_1_18);
  } else {
   var_1_67 = var_1_19;
  }
 }
 if (! var_1_32) {
  if (var_1_32) {
   var_1_14 = ((32 + var_1_16) + (((((((var_1_5) < (-50)) ? (var_1_5) : (-50))) < 0 ) ? -((((var_1_5) < (-50)) ? (var_1_5) : (-50))) : ((((var_1_5) < (-50)) ? (var_1_5) : (-50))))));
  } else {
   var_1_14 = (var_1_13 - ((((var_1_5) > (var_1_15)) ? (var_1_5) : (var_1_15))));
  }
 }
 unsigned char stepLocal_6 = var_1_1 > (var_1_9 - var_1_10);
 unsigned long int stepLocal_5 = var_1_1 + var_1_3;
 if (stepLocal_6 && var_1_32) {
  if (stepLocal_5 > (var_1_6 + var_1_2)) {
   var_1_23 = (var_1_18 - var_1_7);
  }
 } else {
  var_1_23 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
 }
 if (((var_1_5 < -100000000) || var_1_32) || var_1_46) {
  var_1_29 = ((((var_1_22) < ((var_1_21 + var_1_31))) ? (var_1_22) : ((var_1_21 + var_1_31))));
 }
 if (((var_1_11 * var_1_23) + var_1_37) < ((var_1_49 - var_1_7) - (var_1_26 + var_1_13))) {
  var_1_48 = var_1_37;
 } else {
  if (var_1_23 < var_1_1) {
   var_1_48 = (var_1_50 - var_1_37);
  }
 }
 unsigned long int stepLocal_17 = 8u;
 unsigned long int stepLocal_16 = var_1_14 + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 if (var_1_8 <= stepLocal_16) {
  if (var_1_33) {
   var_1_62 = (var_1_59 - var_1_58);
  }
 } else {
  if (((var_1_1 / 25) << var_1_36) > stepLocal_17) {
   var_1_62 = var_1_56;
  }
 }
 signed long int stepLocal_18 = var_1_23;
 if (var_1_44 > stepLocal_18) {
  var_1_63 = (var_1_64 + (var_1_5 + (var_1_37 - var_1_52)));
 }
 signed long int stepLocal_8 = var_1_23;
 unsigned short int stepLocal_7 = var_1_63;
 if (stepLocal_7 < ((var_1_18 + var_1_5) - var_1_13)) {
  if ((((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18))) << var_1_15) > stepLocal_8) {
   var_1_24 = (var_1_13 - ((((var_1_26) > (var_1_15)) ? (var_1_26) : (var_1_15))));
  } else {
   var_1_24 = (4 - var_1_26);
  }
 } else {
  var_1_24 = ((((((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) < ((var_1_18 + var_1_27))) ? (((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) : ((var_1_18 + var_1_27))));
 }
 if (var_1_34) {
  if ((var_1_22 / var_1_39) <= ((((var_1_21) > ((var_1_20 + var_1_62))) ? (var_1_21) : ((var_1_20 + var_1_62))))) {
   var_1_51 = (128 - var_1_19);
  } else {
   var_1_51 = (var_1_18 + ((((var_1_5 + var_1_52) < 0 ) ? -(var_1_5 + var_1_52) : (var_1_5 + var_1_52))));
  }
 } else {
  var_1_51 = (var_1_13 + (var_1_52 + var_1_18));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 31);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741824);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 536870911);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 16382);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 8191);
 assume_abort_if_not(var_1_37 <= 16383);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 4611686.018427388000e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 2147483647);
 assume_abort_if_not(var_1_44 <= 4294967295);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= -16383);
 assume_abort_if_not(var_1_45 <= 16383);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 3221225471);
 assume_abort_if_not(var_1_49 <= 4294967295);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 32767);
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= -63);
 assume_abort_if_not(var_1_68 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_27 = var_1_27;
 last_1_var_1_53 = var_1_53;
}
int property(void) {
 return (((((((((((((((((((((((((var_1_2 >= var_1_3) || var_1_46) ? ((((var_1_2 * var_1_3) >> var_1_5) >= 50u) ? (var_1_1 == ((unsigned long int) (var_1_5 + (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned long int) (var_1_5 + ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))))))) : (var_1_46 ? (var_1_1 == ((unsigned long int) (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - (var_1_10 - (var_1_11 - var_1_5))))) : 1)) && ((var_1_1 == var_1_5) ? (var_1_12 == ((signed char) (var_1_5 - (var_1_13 - 8)))) : 1)) && ((! var_1_32) ? (var_1_32 ? (var_1_14 == ((signed short int) ((32 + var_1_16) + (((((((var_1_5) < (-50)) ? (var_1_5) : (-50))) < 0 ) ? -((((var_1_5) < (-50)) ? (var_1_5) : (-50))) : ((((var_1_5) < (-50)) ? (var_1_5) : (-50)))))))) : (var_1_14 == ((signed short int) (var_1_13 - ((((var_1_5) > (var_1_15)) ? (var_1_5) : (var_1_15))))))) : 1)) && ((var_1_1 >= (var_1_13 / var_1_10)) ? (var_1_16 == ((signed char) ((((var_1_5) < (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))))) ? (var_1_5) : (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17)))))))) : (var_1_16 == ((signed char) ((var_1_5 + var_1_18) - ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19)))))))) && (((var_1_18 < var_1_6) && var_1_46) ? (((var_1_6 ^ var_1_1) <= (- (var_1_11 * var_1_10))) ? (var_1_20 == ((double) (var_1_21 + var_1_22))) : (var_1_20 == ((double) var_1_21))) : 1)) && (((var_1_1 > (var_1_9 - var_1_10)) && var_1_32) ? (((var_1_1 + var_1_3) > (var_1_6 + var_1_2)) ? (var_1_23 == ((signed long int) (var_1_18 - var_1_7))) : 1) : (var_1_23 == ((signed long int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) && ((var_1_63 < ((var_1_18 + var_1_5) - var_1_13)) ? (((((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18))) << var_1_15) > var_1_23) ? (var_1_24 == ((signed short int) (var_1_13 - ((((var_1_26) > (var_1_15)) ? (var_1_26) : (var_1_15)))))) : (var_1_24 == ((signed short int) (4 - var_1_26)))) : (var_1_24 == ((signed short int) ((((((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) < ((var_1_18 + var_1_27))) ? (((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) : ((var_1_18 + var_1_27)))))))) && (var_1_46 ? (var_1_27 == ((signed long int) last_1_var_1_27)) : (var_1_27 == ((signed long int) (var_1_15 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))))) && (((var_1_7 & var_1_18) != ((((var_1_5) < (64u)) ? (var_1_5) : (64u)))) ? ((! var_1_46) ? (var_1_28 == ((unsigned char) var_1_13)) : (var_1_28 == ((unsigned char) ((((var_1_19) < (((((var_1_13) > (50)) ? (var_1_13) : (50))))) ? (var_1_19) : (((((var_1_13) > (50)) ? (var_1_13) : (50))))))))) : 1)) && ((((var_1_5 < -100000000) || var_1_32) || var_1_46) ? (var_1_29 == ((double) ((((var_1_22) < ((var_1_21 + var_1_31))) ? (var_1_22) : ((var_1_21 + var_1_31)))))) : 1)) && (((var_1_2 * var_1_1) > var_1_15) ? ((var_1_46 || (var_1_31 > var_1_22)) ? (var_1_32 == ((unsigned char) (! var_1_33))) : (var_1_32 == ((unsigned char) (var_1_33 && var_1_34)))) : 1)) && ((! ((var_1_11 >> var_1_5) < var_1_18)) ? (var_1_35 == ((signed short int) ((var_1_36 - (var_1_37 - var_1_19)) - (var_1_18 + var_1_5)))) : 1)) && ((var_1_10 <= (var_1_8 - var_1_5)) ? ((var_1_20 <= (256.5 - (var_1_39 - 64.6))) ? ((var_1_39 >= ((var_1_40 - var_1_41) + var_1_21)) ? (var_1_38 == ((signed long int) (2 - var_1_19))) : (var_1_38 == ((signed long int) (var_1_7 + ((((var_1_53) > (var_1_37)) ? (var_1_53) : (var_1_37))))))) : 1) : 1)) && ((var_1_1 >= (var_1_53 + (var_1_44 - 128u))) ? (var_1_43 == ((signed short int) var_1_19)) : ((var_1_6 >= var_1_5) ? (var_1_43 == ((signed short int) ((((((var_1_13 - var_1_5)) < (var_1_45)) ? ((var_1_13 - var_1_5)) : (var_1_45))) + (var_1_19 + var_1_27)))) : 1))) && (var_1_46 == ((unsigned char) var_1_47))) && ((((var_1_11 * var_1_23) + var_1_37) < ((var_1_49 - var_1_7) - (var_1_26 + var_1_13))) ? (var_1_48 == ((unsigned short int) var_1_37)) : ((var_1_23 < var_1_1) ? (var_1_48 == ((unsigned short int) (var_1_50 - var_1_37))) : 1))) && (var_1_34 ? (((var_1_22 / var_1_39) <= ((((var_1_21) > ((var_1_20 + var_1_62))) ? (var_1_21) : ((var_1_20 + var_1_62))))) ? (var_1_51 == ((unsigned char) (128 - var_1_19))) : (var_1_51 == ((unsigned char) (var_1_18 + ((((var_1_5 + var_1_52) < 0 ) ? -(var_1_5 + var_1_52) : (var_1_5 + var_1_52))))))) : (var_1_51 == ((unsigned char) (var_1_13 + (var_1_52 + var_1_18)))))) && (((((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) / var_1_39) == (- (var_1_40 + 0.625))) ? (var_1_53 == ((signed short int) (((((-8) > ((var_1_5 + var_1_19))) ? (-8) : ((var_1_5 + var_1_19)))) + last_1_var_1_53))) : 1)) && ((var_1_18 <= var_1_35) ? (var_1_54 == ((double) (((((var_1_31 + ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) < ((var_1_56 - var_1_57))) ? ((var_1_31 + ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) : ((var_1_56 - var_1_57)))))) : (var_1_46 ? (var_1_54 == ((double) (((3.9672905023478487E18 + 4.5328133947150986E18) - var_1_58) - var_1_59))) : (var_1_32 ? (var_1_54 == ((double) (var_1_58 - ((((1.000000000075E10) > ((var_1_60 + var_1_61))) ? (1.000000000075E10) : ((var_1_60 + var_1_61))))))) : (var_1_54 == ((double) (var_1_60 - 49.6))))))) && ((var_1_8 <= (var_1_14 + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_33 ? (var_1_62 == ((double) (var_1_59 - var_1_58))) : 1) : ((((var_1_1 / 25) << var_1_36) > 8u) ? (var_1_62 == ((double) var_1_56)) : 1))) && ((var_1_44 > var_1_23) ? (var_1_63 == ((unsigned short int) (var_1_64 + (var_1_5 + (var_1_37 - var_1_52))))) : 1)) && (var_1_46 ? ((var_1_45 <= 0) ? (var_1_65 == ((float) ((((((((var_1_59) < (var_1_61)) ? (var_1_59) : (var_1_61)))) > (var_1_31)) ? (((((var_1_59) < (var_1_61)) ? (var_1_59) : (var_1_61)))) : (var_1_31))))) : (var_1_65 == ((float) ((((var_1_58) > (var_1_56)) ? (var_1_58) : (var_1_56)))))) : (var_1_65 == ((float) var_1_56)))) && (var_1_46 ? (var_1_66 == ((float) var_1_22)) : (var_1_66 == ((float) var_1_58)))) && (var_1_32 ? (var_1_67 == ((signed char) (var_1_5 + var_1_68))) : ((((var_1_32 && var_1_34) || var_1_47) && var_1_33) ? (var_1_67 == ((signed char) (var_1_68 + var_1_18))) : (var_1_67 == ((signed char) var_1_19))))
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
