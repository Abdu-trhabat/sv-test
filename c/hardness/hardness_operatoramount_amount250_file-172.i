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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -8;
double var_1_2 = 127.5;
double var_1_3 = -0.5;
double var_1_4 = 0.2;
signed short int var_1_5 = 25;
signed short int var_1_6 = 25;
signed long int var_1_7 = -5;
double var_1_8 = 8.3;
double var_1_9 = 49.5;
signed short int var_1_11 = -32;
signed long int var_1_12 = 2;
signed long int var_1_13 = 2;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 29439;
unsigned short int var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 4.4;
unsigned long int var_1_20 = 2932814267;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
signed long int var_1_24 = 5;
unsigned short int var_1_25 = 46810;
unsigned short int var_1_26 = 32;
unsigned short int var_1_27 = 5;
unsigned short int var_1_28 = 54184;
unsigned char var_1_29 = 10;
unsigned char var_1_30 = 10;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 5;
unsigned long int var_1_36 = 3247476931;
unsigned long int var_1_37 = 3913329066;
unsigned short int var_1_38 = 2;
unsigned short int var_1_39 = 32;
unsigned char var_1_40 = 50;
unsigned char var_1_42 = 0;
signed short int var_1_43 = 64;
signed long int var_1_44 = -4;
signed long int var_1_45 = 1575303231;
signed long int var_1_46 = 10;
signed long int var_1_47 = 50;
signed long int var_1_48 = -8;
signed long int var_1_49 = 25;
signed long int var_1_50 = -4;
signed long int var_1_51 = 1590609727;
signed char var_1_52 = -2;
signed char var_1_53 = 16;
unsigned char last_1_var_1_17 = 0;
signed long int last_1_var_1_24 = 5;
unsigned long int last_1_var_1_34 = 5;
unsigned char last_1_var_1_42 = 0;
signed long int last_1_var_1_44 = -4;
signed long int last_1_var_1_46 = 10;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_17) {
  var_1_42 = (var_1_18 || var_1_23);
 } else {
  var_1_42 = (((last_1_var_1_34 - var_1_13) < last_1_var_1_24) || (var_1_23 && var_1_22));
 }
 signed long int stepLocal_4 = var_1_28 + last_1_var_1_44;
 unsigned char stepLocal_3 = var_1_22;
 if ((- (last_1_var_1_34 & var_1_6)) < stepLocal_4) {
  if (last_1_var_1_42) {
   var_1_34 = (((((var_1_30 + var_1_6)) < (var_1_12)) ? ((var_1_30 + var_1_6)) : (var_1_12)));
  } else {
   var_1_34 = var_1_6;
  }
 } else {
  if (stepLocal_3 && (var_1_13 != var_1_31)) {
   var_1_34 = (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))) - (1348017122u - last_1_var_1_34));
  } else {
   var_1_34 = (((((var_1_36 - var_1_16)) < ((var_1_12 + var_1_33))) ? ((var_1_36 - var_1_16)) : ((var_1_12 + var_1_33))));
  }
 }
 unsigned long int stepLocal_7 = (((-200) > (var_1_20)) ? (-200) : (var_1_20));
 if (var_1_11 >= stepLocal_7) {
  var_1_44 = ((((var_1_39) > (((var_1_45 - var_1_34) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) ? (var_1_39) : (((var_1_45 - var_1_34) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))));
 }
 signed long int stepLocal_1 = var_1_44 / (var_1_25 - var_1_26);
 if (var_1_16 < stepLocal_1) {
  var_1_24 = ((((((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11)))) > (-50)) ? (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11)))) : (-50)));
 }
 if ((var_1_2 * var_1_3) > var_1_4) {
  var_1_1 = (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) - var_1_6);
 } else {
  if (var_1_4 <= var_1_2) {
   var_1_1 = var_1_6;
  }
 }
 signed long int stepLocal_2 = (var_1_12 - var_1_6) * 16;
 if (var_1_13 > stepLocal_2) {
  var_1_27 = ((((var_1_16) > (var_1_6)) ? (var_1_16) : (var_1_6)));
 } else {
  var_1_27 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) - var_1_16);
 }
 if (var_1_21) {
  var_1_29 = ((((((((16) > (var_1_30)) ? (16) : (var_1_30)))) < (var_1_31)) ? (((((16) > (var_1_30)) ? (16) : (var_1_30)))) : (var_1_31)));
 } else {
  var_1_29 = ((((var_1_32 - (4 + var_1_33)) < 0 ) ? -(var_1_32 - (4 + var_1_33)) : (var_1_32 - (4 + var_1_33))));
 }
 unsigned long int stepLocal_6 = var_1_34;
 if (stepLocal_6 > (((((var_1_20 + var_1_36)) > (50)) ? ((var_1_20 + var_1_36)) : (50)))) {
  var_1_40 = (var_1_32 - 25);
 } else {
  var_1_40 = (var_1_32 - var_1_33);
 }
 if (! var_1_23) {
  if (var_1_12 <= ((var_1_32 + var_1_39) ^ var_1_28)) {
   var_1_46 = (((((last_1_var_1_46) < (var_1_45)) ? (last_1_var_1_46) : (var_1_45))) - var_1_26);
  } else {
   var_1_46 = var_1_13;
  }
 } else {
  if (var_1_13 > last_1_var_1_46) {
   var_1_46 = (var_1_13 + (last_1_var_1_46 + var_1_5));
  } else {
   if (var_1_18) {
    if (var_1_22 || var_1_42) {
     var_1_46 = ((((var_1_47 - (var_1_26 + var_1_31)) < 0 ) ? -(var_1_47 - (var_1_26 + var_1_31)) : (var_1_47 - (var_1_26 + var_1_31))));
    } else {
     var_1_46 = ((((((var_1_32 + var_1_15) + (last_1_var_1_46 + var_1_28))) < ((var_1_12 - var_1_13))) ? (((var_1_32 + var_1_15) + (last_1_var_1_46 + var_1_28))) : ((var_1_12 - var_1_13))));
    }
   }
  }
 }
 if (var_1_23) {
  var_1_48 = ((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) > ((var_1_25 + var_1_11))) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : ((var_1_25 + var_1_11))));
 }
 signed long int stepLocal_9 = var_1_24 + 100000;
 signed long int stepLocal_8 = var_1_33 - (var_1_51 - var_1_30);
 if (var_1_42) {
  var_1_49 = ((((var_1_44) < (((((var_1_50) < (var_1_13)) ? (var_1_50) : (var_1_13))))) ? (var_1_44) : (((((var_1_50) < (var_1_13)) ? (var_1_50) : (var_1_13))))));
 } else {
  if ((var_1_25 - ((((16) > (var_1_32)) ? (16) : (var_1_32)))) == stepLocal_9) {
   var_1_49 = (var_1_26 + (var_1_5 + var_1_44));
  } else {
   if (var_1_18) {
    if (var_1_12 > stepLocal_8) {
     var_1_49 = ((((var_1_15) > ((var_1_16 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) ? (var_1_15) : ((var_1_16 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))));
    } else {
     var_1_49 = ((var_1_28 - var_1_15) + var_1_33);
    }
   } else {
    var_1_49 = (((var_1_16 - var_1_46) + var_1_33) + var_1_28);
   }
  }
 }
 if (var_1_12 <= (8 * ((((64) > (var_1_13)) ? (64) : (var_1_13))))) {
  if ((var_1_4 > (- var_1_2)) && (-2 == (var_1_16 / var_1_11))) {
   var_1_17 = (var_1_18 || (! 1));
  } else {
   if (var_1_6 <= var_1_16) {
    var_1_17 = (! var_1_18);
   } else {
    var_1_17 = var_1_18;
   }
  }
 } else {
  if ((((((var_1_8) > (var_1_19)) ? (var_1_8) : (var_1_19))) + var_1_2) != var_1_9) {
   if ((var_1_20 - var_1_34) <= (var_1_6 & 8u)) {
    var_1_17 = ((var_1_11 >= (var_1_15 - var_1_6)) || (! (var_1_21 || var_1_18)));
   } else {
    var_1_17 = ((! var_1_42) || (var_1_22 && var_1_23));
   }
  } else {
   if (var_1_8 <= (var_1_4 * (var_1_9 * var_1_2))) {
    var_1_17 = (! 0);
   } else {
    var_1_17 = (! var_1_18);
   }
  }
 }
 if (((((var_1_24) < (var_1_6)) ? (var_1_24) : (var_1_6))) >= (var_1_12 + (var_1_13 / var_1_11))) {
  if (! var_1_17) {
   var_1_14 = (var_1_6 + 5);
  } else {
   if ((var_1_8 + var_1_9) <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
    if (var_1_5 <= var_1_11) {
     var_1_14 = var_1_6;
    }
   }
  }
 } else {
  var_1_14 = ((var_1_15 - var_1_16) + (5 + 1));
 }
 unsigned long int stepLocal_5 = var_1_20;
 if ((- (var_1_8 * var_1_9)) > var_1_2) {
  if (! var_1_17) {
   var_1_38 = var_1_39;
  } else {
   if (stepLocal_5 != (var_1_46 >> 10)) {
    var_1_38 = var_1_31;
   } else {
    var_1_38 = var_1_28;
   }
  }
 } else {
  var_1_38 = var_1_16;
 }
 if (! var_1_23) {
  var_1_43 = (var_1_31 + (var_1_33 + ((((var_1_38) > (var_1_24)) ? (var_1_38) : (var_1_24)))));
 }
 if (var_1_43 <= var_1_26) {
  var_1_52 = (var_1_33 + var_1_53);
 } else {
  if (var_1_21 || var_1_42) {
   var_1_52 = var_1_33;
  } else {
   var_1_52 = var_1_53;
  }
 }
 signed long int stepLocal_0 = (var_1_5 * var_1_43) % var_1_11;
 if (var_1_4 <= (- (var_1_8 - var_1_9))) {
  var_1_7 = ((((var_1_5) > (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_5) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))));
 } else {
  if (var_1_17) {
   if (stepLocal_0 < var_1_6) {
    var_1_7 = ((((((var_1_6) < (32)) ? (var_1_6) : (32))) - (var_1_12 + var_1_13)) + 2);
   } else {
    var_1_7 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   }
  } else {
   var_1_7 = (100000000 + var_1_12);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32766);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32768);
 assume_abort_if_not(var_1_11 <= 32767);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 536870912);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 536870911);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16383);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 32767);
 assume_abort_if_not(var_1_25 <= 65535);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 32766);
 assume_abort_if_not(var_1_26 != 32767);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 32767);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 127);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 2147483647);
 assume_abort_if_not(var_1_36 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741822);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 2147483646);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= -2147483647);
 assume_abort_if_not(var_1_50 <= 2147483646);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 1073741823);
 assume_abort_if_not(var_1_51 <= 2147483647);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -63);
 assume_abort_if_not(var_1_53 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_46 = var_1_46;
}
int property(void) {
 return ((((((((((((((((((var_1_2 * var_1_3) > var_1_4) ? (var_1_1 == ((signed short int) (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) - var_1_6))) : ((var_1_4 <= var_1_2) ? (var_1_1 == ((signed short int) var_1_6)) : 1)) && ((var_1_4 <= (- (var_1_8 - var_1_9))) ? (var_1_7 == ((signed long int) ((((var_1_5) > (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_5) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))))) : (var_1_17 ? ((((var_1_5 * var_1_43) % var_1_11) < var_1_6) ? (var_1_7 == ((signed long int) ((((((var_1_6) < (32)) ? (var_1_6) : (32))) - (var_1_12 + var_1_13)) + 2))) : (var_1_7 == ((signed long int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : (var_1_7 == ((signed long int) (100000000 + var_1_12)))))) && ((((((var_1_24) < (var_1_6)) ? (var_1_24) : (var_1_6))) >= (var_1_12 + (var_1_13 / var_1_11))) ? ((! var_1_17) ? (var_1_14 == ((unsigned short int) (var_1_6 + 5))) : (((var_1_8 + var_1_9) <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? ((var_1_5 <= var_1_11) ? (var_1_14 == ((unsigned short int) var_1_6)) : 1) : 1)) : (var_1_14 == ((unsigned short int) ((var_1_15 - var_1_16) + (5 + 1)))))) && ((var_1_12 <= (8 * ((((64) > (var_1_13)) ? (64) : (var_1_13))))) ? (((var_1_4 > (- var_1_2)) && (-2 == (var_1_16 / var_1_11))) ? (var_1_17 == ((unsigned char) (var_1_18 || (! 1)))) : ((var_1_6 <= var_1_16) ? (var_1_17 == ((unsigned char) (! var_1_18))) : (var_1_17 == ((unsigned char) var_1_18)))) : (((((((var_1_8) > (var_1_19)) ? (var_1_8) : (var_1_19))) + var_1_2) != var_1_9) ? (((var_1_20 - var_1_34) <= (var_1_6 & 8u)) ? (var_1_17 == ((unsigned char) ((var_1_11 >= (var_1_15 - var_1_6)) || (! (var_1_21 || var_1_18))))) : (var_1_17 == ((unsigned char) ((! var_1_42) || (var_1_22 && var_1_23))))) : ((var_1_8 <= (var_1_4 * (var_1_9 * var_1_2))) ? (var_1_17 == ((unsigned char) (! 0))) : (var_1_17 == ((unsigned char) (! var_1_18))))))) && ((var_1_16 < (var_1_44 / (var_1_25 - var_1_26))) ? (var_1_24 == ((signed long int) ((((((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11)))) > (-50)) ? (((((var_1_12) < (var_1_11)) ? (var_1_12) : (var_1_11)))) : (-50))))) : 1)) && ((var_1_13 > ((var_1_12 - var_1_6) * 16)) ? (var_1_27 == ((unsigned short int) ((((var_1_16) > (var_1_6)) ? (var_1_16) : (var_1_6))))) : (var_1_27 == ((unsigned short int) (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) - var_1_16))))) && (var_1_21 ? (var_1_29 == ((unsigned char) ((((((((16) > (var_1_30)) ? (16) : (var_1_30)))) < (var_1_31)) ? (((((16) > (var_1_30)) ? (16) : (var_1_30)))) : (var_1_31))))) : (var_1_29 == ((unsigned char) ((((var_1_32 - (4 + var_1_33)) < 0 ) ? -(var_1_32 - (4 + var_1_33)) : (var_1_32 - (4 + var_1_33)))))))) && (((- (last_1_var_1_34 & var_1_6)) < (var_1_28 + last_1_var_1_44)) ? (last_1_var_1_42 ? (var_1_34 == ((unsigned long int) (((((var_1_30 + var_1_6)) < (var_1_12)) ? ((var_1_30 + var_1_6)) : (var_1_12))))) : (var_1_34 == ((unsigned long int) var_1_6))) : ((var_1_22 && (var_1_13 != var_1_31)) ? (var_1_34 == ((unsigned long int) (((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))) - (1348017122u - last_1_var_1_34)))) : (var_1_34 == ((unsigned long int) (((((var_1_36 - var_1_16)) < ((var_1_12 + var_1_33))) ? ((var_1_36 - var_1_16)) : ((var_1_12 + var_1_33))))))))) && (((- (var_1_8 * var_1_9)) > var_1_2) ? ((! var_1_17) ? (var_1_38 == ((unsigned short int) var_1_39)) : ((var_1_20 != (var_1_46 >> 10)) ? (var_1_38 == ((unsigned short int) var_1_31)) : (var_1_38 == ((unsigned short int) var_1_28)))) : (var_1_38 == ((unsigned short int) var_1_16)))) && ((var_1_34 > (((((var_1_20 + var_1_36)) > (50)) ? ((var_1_20 + var_1_36)) : (50)))) ? (var_1_40 == ((unsigned char) (var_1_32 - 25))) : (var_1_40 == ((unsigned char) (var_1_32 - var_1_33))))) && (last_1_var_1_17 ? (var_1_42 == ((unsigned char) (var_1_18 || var_1_23))) : (var_1_42 == ((unsigned char) (((last_1_var_1_34 - var_1_13) < last_1_var_1_24) || (var_1_23 && var_1_22)))))) && ((! var_1_23) ? (var_1_43 == ((signed short int) (var_1_31 + (var_1_33 + ((((var_1_38) > (var_1_24)) ? (var_1_38) : (var_1_24))))))) : 1)) && ((var_1_11 >= ((((-200) > (var_1_20)) ? (-200) : (var_1_20)))) ? (var_1_44 == ((signed long int) ((((var_1_39) > (((var_1_45 - var_1_34) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) ? (var_1_39) : (((var_1_45 - var_1_34) - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))))) : 1)) && ((! var_1_23) ? ((var_1_12 <= ((var_1_32 + var_1_39) ^ var_1_28)) ? (var_1_46 == ((signed long int) (((((last_1_var_1_46) < (var_1_45)) ? (last_1_var_1_46) : (var_1_45))) - var_1_26))) : (var_1_46 == ((signed long int) var_1_13))) : ((var_1_13 > last_1_var_1_46) ? (var_1_46 == ((signed long int) (var_1_13 + (last_1_var_1_46 + var_1_5)))) : (var_1_18 ? ((var_1_22 || var_1_42) ? (var_1_46 == ((signed long int) ((((var_1_47 - (var_1_26 + var_1_31)) < 0 ) ? -(var_1_47 - (var_1_26 + var_1_31)) : (var_1_47 - (var_1_26 + var_1_31)))))) : (var_1_46 == ((signed long int) ((((((var_1_32 + var_1_15) + (last_1_var_1_46 + var_1_28))) < ((var_1_12 - var_1_13))) ? (((var_1_32 + var_1_15) + (last_1_var_1_46 + var_1_28))) : ((var_1_12 - var_1_13))))))) : 1)))) && (var_1_23 ? (var_1_48 == ((signed long int) ((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) > ((var_1_25 + var_1_11))) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : ((var_1_25 + var_1_11)))))) : 1)) && (var_1_42 ? (var_1_49 == ((signed long int) ((((var_1_44) < (((((var_1_50) < (var_1_13)) ? (var_1_50) : (var_1_13))))) ? (var_1_44) : (((((var_1_50) < (var_1_13)) ? (var_1_50) : (var_1_13)))))))) : (((var_1_25 - ((((16) > (var_1_32)) ? (16) : (var_1_32)))) == (var_1_24 + 100000)) ? (var_1_49 == ((signed long int) (var_1_26 + (var_1_5 + var_1_44)))) : (var_1_18 ? ((var_1_12 > (var_1_33 - (var_1_51 - var_1_30))) ? (var_1_49 == ((signed long int) ((((var_1_15) > ((var_1_16 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) ? (var_1_15) : ((var_1_16 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))))))) : (var_1_49 == ((signed long int) ((var_1_28 - var_1_15) + var_1_33)))) : (var_1_49 == ((signed long int) (((var_1_16 - var_1_46) + var_1_33) + var_1_28))))))) && ((var_1_43 <= var_1_26) ? (var_1_52 == ((signed char) (var_1_33 + var_1_53))) : ((var_1_21 || var_1_42) ? (var_1_52 == ((signed char) var_1_33)) : (var_1_52 == ((signed char) var_1_53))))
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
