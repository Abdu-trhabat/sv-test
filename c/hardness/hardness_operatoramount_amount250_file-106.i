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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 16;
signed short int var_1_3 = -4;
unsigned char var_1_4 = 32;
signed short int var_1_5 = 16;
double var_1_6 = 4.25;
unsigned short int var_1_7 = 4;
unsigned short int var_1_8 = 1;
double var_1_9 = 200.6;
unsigned char var_1_10 = 0;
double var_1_11 = 4.875;
double var_1_12 = 63.06;
double var_1_13 = 9.2;
double var_1_14 = 31.5;
signed short int var_1_16 = -10;
double var_1_17 = 32.5;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 99999999999.5;
double var_1_21 = 0.0;
double var_1_22 = 127.5;
signed long int var_1_23 = 5;
unsigned char var_1_24 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
double var_1_29 = 3.8;
signed long int var_1_30 = 50;
unsigned long int var_1_31 = 10000000;
float var_1_32 = 31.6;
double var_1_34 = 25.96;
double var_1_35 = 8.125;
signed long int var_1_36 = 32;
unsigned long int var_1_37 = 3563686477;
signed long int var_1_38 = 1164410121;
unsigned char var_1_39 = 10;
signed long int var_1_40 = 50;
float var_1_41 = -0.4;
unsigned long int var_1_43 = 10;
signed char var_1_44 = -64;
double var_1_46 = 7.75;
unsigned char var_1_47 = 5;
signed char var_1_48 = -100;
signed char var_1_49 = 1;
signed char var_1_50 = -16;
signed char var_1_51 = -10;
signed char var_1_52 = -4;
signed char var_1_53 = 4;
signed long int var_1_54 = -5;
signed char var_1_55 = 16;
unsigned short int var_1_56 = 56309;
unsigned short int var_1_57 = 32;
unsigned char var_1_58 = 2;
double last_1_var_1_6 = 4.25;
double last_1_var_1_29 = 3.8;
signed long int last_1_var_1_36 = 32;
float last_1_var_1_41 = -0.4;
unsigned char last_1_var_1_47 = 5;
signed char last_1_var_1_55 = 16;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = (50u % var_1_7) + var_1_8;
 if (stepLocal_2 > ((var_1_5 + var_1_4) << last_1_var_1_36)) {
  if (last_1_var_1_6 <= var_1_12) {
   var_1_16 = ((((((((last_1_var_1_47) < (var_1_8)) ? (last_1_var_1_47) : (var_1_8)))) > (var_1_4)) ? (((((last_1_var_1_47) < (var_1_8)) ? (last_1_var_1_47) : (var_1_8)))) : (var_1_4)));
  } else {
   var_1_16 = last_1_var_1_47;
  }
 }
 unsigned char stepLocal_1 = var_1_2;
 signed short int stepLocal_0 = var_1_16;
 if ((var_1_16 >> (var_1_7 - var_1_8)) < stepLocal_1) {
  if (var_1_7 == stepLocal_0) {
   var_1_6 = ((((4.4) < (31.5)) ? (4.4) : (31.5)));
  }
 }
 signed short int stepLocal_4 = var_1_16;
 unsigned char stepLocal_3 = var_1_19;
 if (stepLocal_4 > var_1_8) {
  if (var_1_10) {
   if (! (var_1_18 || var_1_19)) {
    var_1_17 = (((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < ((8.270137283157068E18 - var_1_13))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : ((8.270137283157068E18 - var_1_13)))) - var_1_20);
   } else {
    var_1_17 = (((((0.2 + var_1_13)) < ((var_1_12 - (var_1_21 - var_1_22)))) ? ((0.2 + var_1_13)) : ((var_1_12 - (var_1_21 - var_1_22)))));
   }
  }
 } else {
  if (var_1_18 || stepLocal_3) {
   var_1_17 = ((var_1_22 - var_1_13) + var_1_11);
  }
 }
 var_1_1 = var_1_2;
 var_1_31 = ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)));
 unsigned long int stepLocal_8 = var_1_31;
 if (stepLocal_8 > var_1_39) {
  var_1_44 = (((((1 - var_1_7)) > ((var_1_8 - 64))) ? ((1 - var_1_7)) : ((var_1_8 - 64))));
 } else {
  var_1_44 = var_1_7;
 }
 if (var_1_21 <= var_1_35) {
  var_1_46 = ((((var_1_22) < (var_1_35)) ? (var_1_22) : (var_1_35)));
 } else {
  var_1_46 = var_1_35;
 }
 var_1_47 = ((64 - var_1_7) + var_1_4);
 if (var_1_28 && (var_1_39 != var_1_31)) {
  if (var_1_35 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) {
   var_1_48 = (4 - ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))));
  } else {
   var_1_48 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
  }
 } else {
  var_1_48 = ((((var_1_7) > ((var_1_8 + (-2 + var_1_49)))) ? (var_1_7) : ((var_1_8 + (-2 + var_1_49)))));
 }
 signed long int stepLocal_10 = (((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38));
 unsigned short int stepLocal_9 = var_1_7;
 if (((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8))) >= stepLocal_9) {
  if ((var_1_22 + (var_1_12 - var_1_21)) != (var_1_20 - var_1_13)) {
   if (stepLocal_10 < -50) {
    var_1_50 = ((((((var_1_49) < (0)) ? (var_1_49) : (0))) + (var_1_7 - var_1_8)) + (var_1_51 + (var_1_52 + var_1_53)));
   } else {
    var_1_50 = ((((var_1_51) < (var_1_49)) ? (var_1_51) : (var_1_49)));
   }
  } else {
   var_1_50 = ((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52)));
  }
 } else {
  var_1_50 = var_1_53;
 }
 signed long int stepLocal_11 = var_1_56 - var_1_57;
 if (stepLocal_11 < last_1_var_1_55) {
  var_1_55 = (-2 + var_1_49);
 } else {
  var_1_55 = ((((var_1_49) > (((((var_1_7) > (var_1_52)) ? (var_1_7) : (var_1_52))))) ? (var_1_49) : (((((var_1_7) > (var_1_52)) ? (var_1_7) : (var_1_52))))));
 }
 var_1_58 = 2;
 if (var_1_47 > (- (128 - var_1_4))) {
  var_1_3 = ((var_1_47 - var_1_4) + (var_1_2 - (32 + var_1_5)));
 } else {
  var_1_3 = (50 - var_1_47);
 }
 signed long int stepLocal_7 = var_1_39 * var_1_5;
 if (var_1_4 > stepLocal_7) {
  var_1_43 = (((((var_1_58) > (var_1_47)) ? (var_1_58) : (var_1_47))) + var_1_31);
 } else {
  var_1_43 = (((((var_1_5) < (var_1_39)) ? (var_1_5) : (var_1_39))) + var_1_31);
 }
 if (var_1_28) {
  var_1_54 = var_1_58;
 }
 if (var_1_13 >= (var_1_20 - var_1_22)) {
  var_1_23 = ((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) < (var_1_16)) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (var_1_16)));
 }
 if (var_1_31 != (((((var_1_5 / var_1_7)) > ((var_1_37 - var_1_4))) ? ((var_1_5 / var_1_7)) : ((var_1_37 - var_1_4))))) {
  if (var_1_17 > var_1_46) {
   if (var_1_21 < var_1_46) {
    var_1_36 = ((((((((((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) > (var_1_7)) ? (((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) : (var_1_7)))) < (((((var_1_23) > (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) ? (var_1_23) : (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47)))))))) ? (((((((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) > (var_1_7)) ? (((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) : (var_1_7)))) : (((((var_1_23) > (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) ? (var_1_23) : (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47)))))))));
   } else {
    var_1_36 = (((((last_1_var_1_36) > (var_1_7)) ? (last_1_var_1_36) : (var_1_7))) - (var_1_38 - var_1_47));
   }
  } else {
   if ((var_1_13 - 15.4f) > var_1_6) {
    var_1_36 = (((((((((var_1_5) < (-1)) ? (var_1_5) : (-1))) + var_1_54)) < (((((128) < 0 ) ? -(128) : (128))))) ? ((((((var_1_5) < (-1)) ? (var_1_5) : (-1))) + var_1_54)) : (((((128) < 0 ) ? -(128) : (128))))));
   } else {
    if ((var_1_5 / (var_1_7 + var_1_39)) <= var_1_31) {
     var_1_36 = (var_1_40 + ((var_1_23 + var_1_4) - var_1_58));
    }
   }
  }
 }
 unsigned long int stepLocal_6 = var_1_43;
 unsigned short int stepLocal_5 = var_1_8;
 if (var_1_22 >= last_1_var_1_29) {
  if (stepLocal_5 <= (- var_1_7)) {
   var_1_29 = (var_1_22 - var_1_13);
  } else {
   if (stepLocal_6 >= (((((256) < 0 ) ? -(256) : (256))) % var_1_30)) {
    var_1_29 = (var_1_22 + var_1_12);
   } else {
    var_1_29 = (var_1_13 + ((((var_1_22) > (var_1_12)) ? (var_1_22) : (var_1_12))));
   }
  }
 }
 if (var_1_43 == (- var_1_31)) {
  if (var_1_58 >= var_1_5) {
   var_1_32 = ((((var_1_12) > ((var_1_22 + 256.1f))) ? (var_1_12) : ((var_1_22 + 256.1f))));
  }
 }
 if (((((var_1_43) > (var_1_31)) ? (var_1_43) : (var_1_31))) != ((var_1_5 - var_1_1) / var_1_30)) {
  var_1_34 = ((((((((var_1_20) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_20) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) > (var_1_22)) ? (((((var_1_20) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_20) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) : (var_1_22)));
 } else {
  var_1_34 = (var_1_35 + var_1_11);
 }
 if (var_1_29 == var_1_46) {
  var_1_14 = (var_1_13 - ((((5.85) < 0 ) ? -(5.85) : (5.85))));
 }
 if ((1 * (var_1_36 * var_1_1)) < var_1_2) {
  if ((var_1_14 + var_1_12) >= ((var_1_22 + var_1_13) - var_1_21)) {
   var_1_24 = var_1_27;
  } else {
   var_1_24 = var_1_28;
  }
 } else {
  var_1_24 = var_1_27;
 }
 if (var_1_24) {
  var_1_41 = ((var_1_22 - var_1_12) + var_1_35);
 } else {
  if (last_1_var_1_41 > (var_1_32 * (var_1_12 + var_1_6))) {
   if (var_1_46 <= last_1_var_1_41) {
    var_1_41 = var_1_13;
   } else {
    var_1_41 = (((((var_1_21) < (((((var_1_22) < (var_1_12)) ? (var_1_22) : (var_1_12))))) ? (var_1_21) : (((((var_1_22) < (var_1_12)) ? (var_1_22) : (var_1_12)))))) - ((((var_1_13) > (var_1_20)) ? (var_1_13) : (var_1_20))));
   }
  } else {
   var_1_41 = ((((0.3f) < (((((((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) > ((var_1_13 + 31.4f))) ? (((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) : ((var_1_13 + 31.4f)))))) ? (0.3f) : (((((((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) > ((var_1_13 + 31.4f))) ? (((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) : ((var_1_13 + 31.4f)))))));
  }
 }
 if (var_1_24) {
  var_1_9 = (var_1_11 + (var_1_12 - (4.564139767021228E18 - var_1_13)));
 } else {
  var_1_9 = (var_1_12 + ((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 8191);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 4);
 assume_abort_if_not(var_1_7 <= 7);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 3);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 4611686.018427383000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 assume_abort_if_not(var_1_30 != 0);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967295);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= 1073741823);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -1073741823);
 assume_abort_if_not(var_1_40 <= 1073741823);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -31);
 assume_abort_if_not(var_1_49 <= 31);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -31);
 assume_abort_if_not(var_1_51 <= 32);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -15);
 assume_abort_if_not(var_1_52 <= 16);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -15);
 assume_abort_if_not(var_1_53 <= 15);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 32767);
 assume_abort_if_not(var_1_56 <= 65535);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_55 = var_1_55;
}
int property(void) {
 return (((((((((((((((((((((((var_1_1 == ((unsigned char) var_1_2)) && ((var_1_47 > (- (128 - var_1_4))) ? (var_1_3 == ((signed short int) ((var_1_47 - var_1_4) + (var_1_2 - (32 + var_1_5))))) : (var_1_3 == ((signed short int) (50 - var_1_47))))) && (((var_1_16 >> (var_1_7 - var_1_8)) < var_1_2) ? ((var_1_7 == var_1_16) ? (var_1_6 == ((double) ((((4.4) < (31.5)) ? (4.4) : (31.5))))) : 1) : 1)) && (var_1_24 ? (var_1_9 == ((double) (var_1_11 + (var_1_12 - (4.564139767021228E18 - var_1_13))))) : (var_1_9 == ((double) (var_1_12 + ((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11)))))))) && ((var_1_29 == var_1_46) ? (var_1_14 == ((double) (var_1_13 - ((((5.85) < 0 ) ? -(5.85) : (5.85)))))) : 1)) && ((((50u % var_1_7) + var_1_8) > ((var_1_5 + var_1_4) << last_1_var_1_36)) ? ((last_1_var_1_6 <= var_1_12) ? (var_1_16 == ((signed short int) ((((((((last_1_var_1_47) < (var_1_8)) ? (last_1_var_1_47) : (var_1_8)))) > (var_1_4)) ? (((((last_1_var_1_47) < (var_1_8)) ? (last_1_var_1_47) : (var_1_8)))) : (var_1_4))))) : (var_1_16 == ((signed short int) last_1_var_1_47))) : 1)) && ((var_1_16 > var_1_8) ? (var_1_10 ? ((! (var_1_18 || var_1_19)) ? (var_1_17 == ((double) (((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < ((8.270137283157068E18 - var_1_13))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : ((8.270137283157068E18 - var_1_13)))) - var_1_20))) : (var_1_17 == ((double) (((((0.2 + var_1_13)) < ((var_1_12 - (var_1_21 - var_1_22)))) ? ((0.2 + var_1_13)) : ((var_1_12 - (var_1_21 - var_1_22)))))))) : 1) : ((var_1_18 || var_1_19) ? (var_1_17 == ((double) ((var_1_22 - var_1_13) + var_1_11))) : 1))) && ((var_1_13 >= (var_1_20 - var_1_22)) ? (var_1_23 == ((signed long int) ((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) < (var_1_16)) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (var_1_16))))) : 1)) && (((1 * (var_1_36 * var_1_1)) < var_1_2) ? (((var_1_14 + var_1_12) >= ((var_1_22 + var_1_13) - var_1_21)) ? (var_1_24 == ((unsigned char) var_1_27)) : (var_1_24 == ((unsigned char) var_1_28))) : (var_1_24 == ((unsigned char) var_1_27)))) && ((var_1_22 >= last_1_var_1_29) ? ((var_1_8 <= (- var_1_7)) ? (var_1_29 == ((double) (var_1_22 - var_1_13))) : ((var_1_43 >= (((((256) < 0 ) ? -(256) : (256))) % var_1_30)) ? (var_1_29 == ((double) (var_1_22 + var_1_12))) : (var_1_29 == ((double) (var_1_13 + ((((var_1_22) > (var_1_12)) ? (var_1_22) : (var_1_12)))))))) : 1)) && (var_1_31 == ((unsigned long int) ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)))))) && ((var_1_43 == (- var_1_31)) ? ((var_1_58 >= var_1_5) ? (var_1_32 == ((float) ((((var_1_12) > ((var_1_22 + 256.1f))) ? (var_1_12) : ((var_1_22 + 256.1f)))))) : 1) : 1)) && ((((((var_1_43) > (var_1_31)) ? (var_1_43) : (var_1_31))) != ((var_1_5 - var_1_1) / var_1_30)) ? (var_1_34 == ((double) ((((((((var_1_20) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_20) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) > (var_1_22)) ? (((((var_1_20) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_20) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) : (var_1_22))))) : (var_1_34 == ((double) (var_1_35 + var_1_11))))) && ((var_1_31 != (((((var_1_5 / var_1_7)) > ((var_1_37 - var_1_4))) ? ((var_1_5 / var_1_7)) : ((var_1_37 - var_1_4))))) ? ((var_1_17 > var_1_46) ? ((var_1_21 < var_1_46) ? (var_1_36 == ((signed long int) ((((((((((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) > (var_1_7)) ? (((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) : (var_1_7)))) < (((((var_1_23) > (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) ? (var_1_23) : (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47)))))))) ? (((((((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) > (var_1_7)) ? (((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36)))) : (var_1_7)))) : (((((var_1_23) > (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))) ? (var_1_23) : (((((var_1_8) < (var_1_47)) ? (var_1_8) : (var_1_47))))))))))) : (var_1_36 == ((signed long int) (((((last_1_var_1_36) > (var_1_7)) ? (last_1_var_1_36) : (var_1_7))) - (var_1_38 - var_1_47))))) : (((var_1_13 - 15.4f) > var_1_6) ? (var_1_36 == ((signed long int) (((((((((var_1_5) < (-1)) ? (var_1_5) : (-1))) + var_1_54)) < (((((128) < 0 ) ? -(128) : (128))))) ? ((((((var_1_5) < (-1)) ? (var_1_5) : (-1))) + var_1_54)) : (((((128) < 0 ) ? -(128) : (128)))))))) : (((var_1_5 / (var_1_7 + var_1_39)) <= var_1_31) ? (var_1_36 == ((signed long int) (var_1_40 + ((var_1_23 + var_1_4) - var_1_58)))) : 1))) : 1)) && (var_1_24 ? (var_1_41 == ((float) ((var_1_22 - var_1_12) + var_1_35))) : ((last_1_var_1_41 > (var_1_32 * (var_1_12 + var_1_6))) ? ((var_1_46 <= last_1_var_1_41) ? (var_1_41 == ((float) var_1_13)) : (var_1_41 == ((float) (((((var_1_21) < (((((var_1_22) < (var_1_12)) ? (var_1_22) : (var_1_12))))) ? (var_1_21) : (((((var_1_22) < (var_1_12)) ? (var_1_22) : (var_1_12)))))) - ((((var_1_13) > (var_1_20)) ? (var_1_13) : (var_1_20))))))) : (var_1_41 == ((float) ((((0.3f) < (((((((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) > ((var_1_13 + 31.4f))) ? (((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) : ((var_1_13 + 31.4f)))))) ? (0.3f) : (((((((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) > ((var_1_13 + 31.4f))) ? (((((var_1_20) > (var_1_35)) ? (var_1_20) : (var_1_35)))) : ((var_1_13 + 31.4f)))))))))))) && ((var_1_4 > (var_1_39 * var_1_5)) ? (var_1_43 == ((unsigned long int) (((((var_1_58) > (var_1_47)) ? (var_1_58) : (var_1_47))) + var_1_31))) : (var_1_43 == ((unsigned long int) (((((var_1_5) < (var_1_39)) ? (var_1_5) : (var_1_39))) + var_1_31))))) && ((var_1_31 > var_1_39) ? (var_1_44 == ((signed char) (((((1 - var_1_7)) > ((var_1_8 - 64))) ? ((1 - var_1_7)) : ((var_1_8 - 64)))))) : (var_1_44 == ((signed char) var_1_7)))) && ((var_1_21 <= var_1_35) ? (var_1_46 == ((double) ((((var_1_22) < (var_1_35)) ? (var_1_22) : (var_1_35))))) : (var_1_46 == ((double) var_1_35)))) && (var_1_47 == ((unsigned char) ((64 - var_1_7) + var_1_4)))) && ((var_1_28 && (var_1_39 != var_1_31)) ? ((var_1_35 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) ? (var_1_48 == ((signed char) (4 - ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))))) : (var_1_48 == ((signed char) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) : (var_1_48 == ((signed char) ((((var_1_7) > ((var_1_8 + (-2 + var_1_49)))) ? (var_1_7) : ((var_1_8 + (-2 + var_1_49))))))))) && ((((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8))) >= var_1_7) ? (((var_1_22 + (var_1_12 - var_1_21)) != (var_1_20 - var_1_13)) ? ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < -50) ? (var_1_50 == ((signed char) ((((((var_1_49) < (0)) ? (var_1_49) : (0))) + (var_1_7 - var_1_8)) + (var_1_51 + (var_1_52 + var_1_53))))) : (var_1_50 == ((signed char) ((((var_1_51) < (var_1_49)) ? (var_1_51) : (var_1_49)))))) : (var_1_50 == ((signed char) ((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52)))))) : (var_1_50 == ((signed char) var_1_53)))) && (var_1_28 ? (var_1_54 == ((signed long int) var_1_58)) : 1)) && (((var_1_56 - var_1_57) < last_1_var_1_55) ? (var_1_55 == ((signed char) (-2 + var_1_49))) : (var_1_55 == ((signed char) ((((var_1_49) > (((((var_1_7) > (var_1_52)) ? (var_1_7) : (var_1_52))))) ? (var_1_49) : (((((var_1_7) > (var_1_52)) ? (var_1_7) : (var_1_52)))))))))) && (var_1_58 == ((unsigned char) 2))
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
