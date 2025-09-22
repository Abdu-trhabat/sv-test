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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 64.8;
unsigned char var_1_2 = 1;
float var_1_5 = 5.4;
double var_1_6 = 0.0;
double var_1_7 = 3.375;
double var_1_8 = 0.0;
double var_1_9 = 10.35;
double var_1_10 = 1.75;
double var_1_11 = 9.5;
signed long int var_1_12 = 4;
signed long int var_1_13 = 1000000;
signed short int var_1_14 = -8;
signed short int var_1_15 = 1;
signed short int var_1_16 = -4;
signed short int var_1_17 = -8;
signed long int var_1_18 = -64;
unsigned short int var_1_19 = 43273;
unsigned short int var_1_20 = 58654;
unsigned short int var_1_21 = 0;
signed long int var_1_22 = -8;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 5;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 64;
unsigned short int var_1_28 = 256;
unsigned short int var_1_29 = 256;
unsigned short int var_1_30 = 5;
unsigned short int var_1_31 = 50;
unsigned short int var_1_32 = 57788;
unsigned short int var_1_33 = 4;
unsigned short int var_1_34 = 8;
signed short int var_1_35 = -32;
signed short int var_1_36 = 10000;
signed short int var_1_37 = 2;
signed short int var_1_38 = 1;
signed short int var_1_39 = -8;
unsigned short int var_1_40 = 1;
unsigned short int var_1_41 = 8;
unsigned short int var_1_42 = 16398;
unsigned short int var_1_43 = 31577;
unsigned short int var_1_44 = 50;
signed short int var_1_45 = 10;
signed short int var_1_46 = 10000;
signed short int var_1_48 = 5;
signed char var_1_49 = -4;
signed char var_1_50 = 1;
signed char var_1_51 = 10;
unsigned short int var_1_52 = 0;
signed char var_1_53 = 1;
signed char var_1_54 = -10;
signed char var_1_55 = 8;
signed char var_1_56 = 4;
signed char var_1_57 = 5;
signed char var_1_58 = 10;
signed char var_1_59 = 1;
signed char var_1_60 = 2;
signed char var_1_61 = 0;
signed char var_1_62 = 4;
signed char var_1_63 = 0;
signed char var_1_64 = 8;
unsigned long int var_1_65 = 10;
unsigned long int var_1_66 = 4126902848;
unsigned long int var_1_67 = 1653361986;
unsigned long int var_1_68 = 1000000000;
signed short int var_1_69 = -256;
signed short int var_1_70 = -2;
float var_1_71 = 1000000000000.25;
float var_1_72 = 49.44;
unsigned short int var_1_73 = 10;
double var_1_74 = 0.0;
unsigned short int var_1_75 = 0;
double var_1_76 = 9.6;
double var_1_78 = -0.5;
double var_1_79 = 0.5;
double last_1_var_1_76 = 9.6;
void initially(void) {
}
void step(void) {
 if ((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_21) < ((var_1_13 % var_1_22) * var_1_16)) {
  if ((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9))) - var_1_6) <= last_1_var_1_76) {
   var_1_18 = (var_1_19 - var_1_21);
  } else {
   if (var_1_2) {
    if (var_1_23) {
     var_1_18 = (((((var_1_20) > (var_1_24)) ? (var_1_20) : (var_1_24))) - var_1_21);
    }
   }
  }
 } else {
  if (var_1_25) {
   var_1_18 = ((((var_1_17) < (4)) ? (var_1_17) : (4)));
  } else {
   var_1_18 = var_1_20;
  }
 }
 var_1_11 = (((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9))) - var_1_8);
 var_1_12 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
 signed long int stepLocal_2 = var_1_13;
 if ((var_1_29 * var_1_18) < stepLocal_2) {
  if (var_1_2) {
   var_1_35 = (((var_1_36 - var_1_37) - (10000 - var_1_38)) + ((((var_1_15) < (var_1_39)) ? (var_1_15) : (var_1_39))));
  } else {
   var_1_35 = var_1_37;
  }
 }
 if (var_1_16 <= var_1_37) {
  var_1_40 = 2;
 } else {
  var_1_40 = (((((var_1_33 + var_1_36)) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? ((var_1_33 + var_1_36)) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))));
 }
 var_1_49 = ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51)));
 if (((~ 5) + (var_1_39 * var_1_34)) > var_1_18) {
  var_1_52 = ((var_1_38 + var_1_53) + (var_1_46 + 32));
 }
 if (var_1_42 >= var_1_24) {
  if (var_1_12 <= var_1_51) {
   var_1_54 = (var_1_55 + ((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57))));
  } else {
   if (var_1_25) {
    var_1_54 = (var_1_58 - 2);
   } else {
    var_1_54 = ((var_1_59 + var_1_60) - ((var_1_61 + var_1_62) + (var_1_63 + var_1_64)));
   }
  }
 } else {
  var_1_54 = ((((var_1_63) < (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) ? (var_1_63) : (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))));
 }
 if ((- var_1_7) <= ((var_1_74 - var_1_10) - var_1_8)) {
  var_1_73 = var_1_62;
 }
 var_1_78 = var_1_10;
 var_1_79 = var_1_72;
 signed long int stepLocal_1 = var_1_18;
 unsigned short int stepLocal_0 = var_1_21;
 if (stepLocal_1 < -128) {
  if (var_1_13 < stepLocal_0) {
   if (var_1_79 >= (var_1_7 / ((((var_1_8) < (8.2)) ? (var_1_8) : (8.2))))) {
    var_1_26 = ((((((((var_1_21) > (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_21) : (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))))) > (((((((((5) > (var_1_30)) ? (5) : (var_1_30)))) < (var_1_31)) ? (((((5) > (var_1_30)) ? (5) : (var_1_30)))) : (var_1_31))))) ? (((((var_1_21) > (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_21) : (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))))) : (((((((((5) > (var_1_30)) ? (5) : (var_1_30)))) < (var_1_31)) ? (((((5) > (var_1_30)) ? (5) : (var_1_30)))) : (var_1_31))))));
   } else {
    var_1_26 = (var_1_32 - var_1_21);
   }
  } else {
   var_1_26 = ((((var_1_21) > (((((var_1_33 + var_1_34) < 0 ) ? -(var_1_33 + var_1_34) : (var_1_33 + var_1_34))))) ? (var_1_21) : (((((var_1_33 + var_1_34) < 0 ) ? -(var_1_33 + var_1_34) : (var_1_33 + var_1_34))))));
  }
 } else {
  var_1_26 = (var_1_33 + var_1_21);
 }
 unsigned char stepLocal_9 = (var_1_13 > var_1_18) && var_1_23;
 if (stepLocal_9 && (var_1_26 != var_1_44)) {
  var_1_76 = (var_1_10 + var_1_7);
 }
 if (var_1_78 > var_1_79) {
  if (var_1_78 >= (var_1_5 - ((((var_1_79) < 0 ) ? -(var_1_79) : (var_1_79))))) {
   var_1_1 = ((var_1_6 - (var_1_7 + 255.5)) - ((var_1_8 - var_1_9) + var_1_10));
  }
 } else {
  var_1_1 = ((((((((var_1_10) < ((49.5 + var_1_8))) ? (var_1_10) : ((49.5 + var_1_8))))) < (var_1_9)) ? (((((var_1_10) < ((49.5 + var_1_8))) ? (var_1_10) : ((49.5 + var_1_8))))) : (var_1_9)));
 }
 if (var_1_9 > var_1_78) {
  var_1_14 = (((((var_1_15 + 8)) > (((((((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) < (var_1_17)) ? (((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) : (var_1_17))))) ? ((var_1_15 + 8)) : (((((((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) < (var_1_17)) ? (((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) : (var_1_17))))));
 }
 if (var_1_43 > 5) {
  if (var_1_25 && var_1_23) {
   var_1_45 = ((var_1_36 - (var_1_46 - var_1_37)) + var_1_15);
  } else {
   if (((((var_1_1 + var_1_10) < 0 ) ? -(var_1_1 + var_1_10) : (var_1_1 + var_1_10))) > (var_1_6 - var_1_9)) {
    var_1_45 = var_1_48;
   } else {
    var_1_45 = (var_1_46 - ((((var_1_37) > (100)) ? (var_1_37) : (100))));
   }
  }
 }
 unsigned short int stepLocal_3 = var_1_73;
 if (var_1_40 <= stepLocal_3) {
  if (! var_1_2) {
   var_1_65 = ((((var_1_60) < (var_1_30)) ? (var_1_60) : (var_1_30)));
  } else {
   var_1_65 = (var_1_66 - (var_1_67 - (var_1_68 - var_1_53)));
  }
 } else {
  var_1_65 = ((var_1_67 - var_1_36) + (var_1_37 + 100000000u));
 }
 unsigned char stepLocal_6 = var_1_61 < (var_1_12 * var_1_40);
 unsigned short int stepLocal_5 = var_1_26;
 unsigned short int stepLocal_4 = var_1_31;
 if (var_1_22 >= stepLocal_5) {
  var_1_69 = ((((var_1_17) > (var_1_59)) ? (var_1_17) : (var_1_59)));
 } else {
  if (var_1_2 || stepLocal_6) {
   if ((- 2.5) >= (- var_1_78)) {
    var_1_69 = (((var_1_36 - var_1_37) - (var_1_46 - var_1_38)) + (var_1_59 - (10000 - var_1_62)));
   } else {
    if (var_1_21 >= stepLocal_4) {
     var_1_69 = (((((var_1_70 + 10)) < ((var_1_62 - var_1_53))) ? ((var_1_70 + 10)) : ((var_1_62 - var_1_53))));
    }
   }
  } else {
   var_1_69 = (((((var_1_61 + (var_1_52 + var_1_53))) > (((((var_1_55) > ((var_1_64 - var_1_36))) ? (var_1_55) : ((var_1_64 - var_1_36)))))) ? ((var_1_61 + (var_1_52 + var_1_53))) : (((((var_1_55) > ((var_1_64 - var_1_36))) ? (var_1_55) : ((var_1_64 - var_1_36)))))));
  }
 }
 unsigned char stepLocal_8 = var_1_5 >= ((((var_1_79) < (var_1_76)) ? (var_1_79) : (var_1_76)));
 unsigned char stepLocal_7 = var_1_23;
 if ((var_1_79 * var_1_8) != 4.8) {
  if (var_1_2 || stepLocal_8) {
   var_1_71 = (var_1_10 + (var_1_7 - (var_1_9 + var_1_72)));
  } else {
   var_1_71 = ((((var_1_8 + (var_1_7 - var_1_10)) < 0 ) ? -(var_1_8 + (var_1_7 - var_1_10)) : (var_1_8 + (var_1_7 - var_1_10))));
  }
 } else {
  if (stepLocal_7 || (var_1_66 >= 2u)) {
   var_1_71 = ((var_1_6 - var_1_72) - (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))) + var_1_10));
  }
 }
 if ((- var_1_11) >= (- var_1_8)) {
  if (! (var_1_76 <= var_1_5)) {
   var_1_75 = var_1_37;
  } else {
   var_1_75 = var_1_29;
  }
 } else {
  var_1_75 = var_1_44;
 }
 if (((((var_1_22) < (var_1_36)) ? (var_1_22) : (var_1_36))) >= var_1_65) {
  if (var_1_23 || (! var_1_2)) {
   if (var_1_25) {
    var_1_41 = ((((var_1_31) < (((var_1_42 + var_1_43) - ((((var_1_37) < (var_1_44)) ? (var_1_37) : (var_1_44)))))) ? (var_1_31) : (((var_1_42 + var_1_43) - ((((var_1_37) < (var_1_44)) ? (var_1_37) : (var_1_44)))))));
   } else {
    if ((var_1_33 % (3361636999u - var_1_42)) <= var_1_32) {
     var_1_41 = ((((var_1_34 + (var_1_42 - var_1_37)) < 0 ) ? -(var_1_34 + (var_1_42 - var_1_37)) : (var_1_34 + (var_1_42 - var_1_37))));
    }
   }
  }
 } else {
  var_1_41 = var_1_43;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 2305843.009213691400e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483646);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -16383);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -32767);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32767);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65535);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65535);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483648);
 assume_abort_if_not(var_1_22 <= 2147483647);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -1);
 assume_abort_if_not(var_1_24 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 8191);
 assume_abort_if_not(var_1_36 <= 16383);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 8191);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 8191);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= -16383);
 assume_abort_if_not(var_1_39 <= 16383);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 16383);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16384);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 32767);
 var_1_46 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_46 >= 8191);
 assume_abort_if_not(var_1_46 <= 16383);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= -32767);
 assume_abort_if_not(var_1_48 <= 32766);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -127);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -127);
 assume_abort_if_not(var_1_51 <= 126);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -63);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -63);
 assume_abort_if_not(var_1_56 <= 63);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= -63);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -1);
 assume_abort_if_not(var_1_58 <= 126);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 32);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 31);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 32);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 31);
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 2147483647);
 assume_abort_if_not(var_1_66 <= 4294967294);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 1073741823);
 assume_abort_if_not(var_1_67 <= 2147483647);
 var_1_68 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_68 >= 536870911);
 assume_abort_if_not(var_1_68 <= 1073741823);
 var_1_70 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_70 >= -16383);
 assume_abort_if_not(var_1_70 <= 16383);
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= 4611686.018427388000e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_76 = var_1_76;
}
int property(void) {
 return (((((((((((((((((((((var_1_78 > var_1_79) ? ((var_1_78 >= (var_1_5 - ((((var_1_79) < 0 ) ? -(var_1_79) : (var_1_79))))) ? (var_1_1 == ((double) ((var_1_6 - (var_1_7 + 255.5)) - ((var_1_8 - var_1_9) + var_1_10)))) : 1) : (var_1_1 == ((double) ((((((((var_1_10) < ((49.5 + var_1_8))) ? (var_1_10) : ((49.5 + var_1_8))))) < (var_1_9)) ? (((((var_1_10) < ((49.5 + var_1_8))) ? (var_1_10) : ((49.5 + var_1_8))))) : (var_1_9)))))) && (var_1_11 == ((double) (((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9))) - var_1_8)))) && (var_1_12 == ((signed long int) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) && ((var_1_9 > var_1_78) ? (var_1_14 == ((signed short int) (((((var_1_15 + 8)) > (((((((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) < (var_1_17)) ? (((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) : (var_1_17))))) ? ((var_1_15 + 8)) : (((((((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) < (var_1_17)) ? (((((-64) > (var_1_16)) ? (-64) : (var_1_16)))) : (var_1_17)))))))) : 1)) && (((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_21) < ((var_1_13 % var_1_22) * var_1_16)) ? (((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9))) - var_1_6) <= last_1_var_1_76) ? (var_1_18 == ((signed long int) (var_1_19 - var_1_21))) : (var_1_2 ? (var_1_23 ? (var_1_18 == ((signed long int) (((((var_1_20) > (var_1_24)) ? (var_1_20) : (var_1_24))) - var_1_21))) : 1) : 1)) : (var_1_25 ? (var_1_18 == ((signed long int) ((((var_1_17) < (4)) ? (var_1_17) : (4))))) : (var_1_18 == ((signed long int) var_1_20))))) && ((var_1_18 < -128) ? ((var_1_13 < var_1_21) ? ((var_1_79 >= (var_1_7 / ((((var_1_8) < (8.2)) ? (var_1_8) : (8.2))))) ? (var_1_26 == ((unsigned short int) ((((((((var_1_21) > (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_21) : (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))))) > (((((((((5) > (var_1_30)) ? (5) : (var_1_30)))) < (var_1_31)) ? (((((5) > (var_1_30)) ? (5) : (var_1_30)))) : (var_1_31))))) ? (((((var_1_21) > (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_21) : (((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))))) : (((((((((5) > (var_1_30)) ? (5) : (var_1_30)))) < (var_1_31)) ? (((((5) > (var_1_30)) ? (5) : (var_1_30)))) : (var_1_31)))))))) : (var_1_26 == ((unsigned short int) (var_1_32 - var_1_21)))) : (var_1_26 == ((unsigned short int) ((((var_1_21) > (((((var_1_33 + var_1_34) < 0 ) ? -(var_1_33 + var_1_34) : (var_1_33 + var_1_34))))) ? (var_1_21) : (((((var_1_33 + var_1_34) < 0 ) ? -(var_1_33 + var_1_34) : (var_1_33 + var_1_34))))))))) : (var_1_26 == ((unsigned short int) (var_1_33 + var_1_21))))) && (((var_1_29 * var_1_18) < var_1_13) ? (var_1_2 ? (var_1_35 == ((signed short int) (((var_1_36 - var_1_37) - (10000 - var_1_38)) + ((((var_1_15) < (var_1_39)) ? (var_1_15) : (var_1_39)))))) : (var_1_35 == ((signed short int) var_1_37))) : 1)) && ((var_1_16 <= var_1_37) ? (var_1_40 == ((unsigned short int) 2)) : (var_1_40 == ((unsigned short int) (((((var_1_33 + var_1_36)) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? ((var_1_33 + var_1_36)) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))))) && ((((((var_1_22) < (var_1_36)) ? (var_1_22) : (var_1_36))) >= var_1_65) ? ((var_1_23 || (! var_1_2)) ? (var_1_25 ? (var_1_41 == ((unsigned short int) ((((var_1_31) < (((var_1_42 + var_1_43) - ((((var_1_37) < (var_1_44)) ? (var_1_37) : (var_1_44)))))) ? (var_1_31) : (((var_1_42 + var_1_43) - ((((var_1_37) < (var_1_44)) ? (var_1_37) : (var_1_44))))))))) : (((var_1_33 % (3361636999u - var_1_42)) <= var_1_32) ? (var_1_41 == ((unsigned short int) ((((var_1_34 + (var_1_42 - var_1_37)) < 0 ) ? -(var_1_34 + (var_1_42 - var_1_37)) : (var_1_34 + (var_1_42 - var_1_37)))))) : 1)) : 1) : (var_1_41 == ((unsigned short int) var_1_43)))) && ((var_1_43 > 5) ? ((var_1_25 && var_1_23) ? (var_1_45 == ((signed short int) ((var_1_36 - (var_1_46 - var_1_37)) + var_1_15))) : ((((((var_1_1 + var_1_10) < 0 ) ? -(var_1_1 + var_1_10) : (var_1_1 + var_1_10))) > (var_1_6 - var_1_9)) ? (var_1_45 == ((signed short int) var_1_48)) : (var_1_45 == ((signed short int) (var_1_46 - ((((var_1_37) > (100)) ? (var_1_37) : (100)))))))) : 1)) && (var_1_49 == ((signed char) ((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51)))))) && ((((~ 5) + (var_1_39 * var_1_34)) > var_1_18) ? (var_1_52 == ((unsigned short int) ((var_1_38 + var_1_53) + (var_1_46 + 32)))) : 1)) && ((var_1_42 >= var_1_24) ? ((var_1_12 <= var_1_51) ? (var_1_54 == ((signed char) (var_1_55 + ((((var_1_56) < (var_1_57)) ? (var_1_56) : (var_1_57)))))) : (var_1_25 ? (var_1_54 == ((signed char) (var_1_58 - 2))) : (var_1_54 == ((signed char) ((var_1_59 + var_1_60) - ((var_1_61 + var_1_62) + (var_1_63 + var_1_64))))))) : (var_1_54 == ((signed char) ((((var_1_63) < (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64))))) ? (var_1_63) : (((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)))))))))) && ((var_1_40 <= var_1_73) ? ((! var_1_2) ? (var_1_65 == ((unsigned long int) ((((var_1_60) < (var_1_30)) ? (var_1_60) : (var_1_30))))) : (var_1_65 == ((unsigned long int) (var_1_66 - (var_1_67 - (var_1_68 - var_1_53)))))) : (var_1_65 == ((unsigned long int) ((var_1_67 - var_1_36) + (var_1_37 + 100000000u)))))) && ((var_1_22 >= var_1_26) ? (var_1_69 == ((signed short int) ((((var_1_17) > (var_1_59)) ? (var_1_17) : (var_1_59))))) : ((var_1_2 || (var_1_61 < (var_1_12 * var_1_40))) ? (((- 2.5) >= (- var_1_78)) ? (var_1_69 == ((signed short int) (((var_1_36 - var_1_37) - (var_1_46 - var_1_38)) + (var_1_59 - (10000 - var_1_62))))) : ((var_1_21 >= var_1_31) ? (var_1_69 == ((signed short int) (((((var_1_70 + 10)) < ((var_1_62 - var_1_53))) ? ((var_1_70 + 10)) : ((var_1_62 - var_1_53)))))) : 1)) : (var_1_69 == ((signed short int) (((((var_1_61 + (var_1_52 + var_1_53))) > (((((var_1_55) > ((var_1_64 - var_1_36))) ? (var_1_55) : ((var_1_64 - var_1_36)))))) ? ((var_1_61 + (var_1_52 + var_1_53))) : (((((var_1_55) > ((var_1_64 - var_1_36))) ? (var_1_55) : ((var_1_64 - var_1_36)))))))))))) && (((var_1_79 * var_1_8) != 4.8) ? ((var_1_2 || (var_1_5 >= ((((var_1_79) < (var_1_76)) ? (var_1_79) : (var_1_76))))) ? (var_1_71 == ((float) (var_1_10 + (var_1_7 - (var_1_9 + var_1_72))))) : (var_1_71 == ((float) ((((var_1_8 + (var_1_7 - var_1_10)) < 0 ) ? -(var_1_8 + (var_1_7 - var_1_10)) : (var_1_8 + (var_1_7 - var_1_10))))))) : ((var_1_23 || (var_1_66 >= 2u)) ? (var_1_71 == ((float) ((var_1_6 - var_1_72) - (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))) + var_1_10)))) : 1))) && (((- var_1_7) <= ((var_1_74 - var_1_10) - var_1_8)) ? (var_1_73 == ((unsigned short int) var_1_62)) : 1)) && (((- var_1_11) >= (- var_1_8)) ? ((! (var_1_76 <= var_1_5)) ? (var_1_75 == ((unsigned short int) var_1_37)) : (var_1_75 == ((unsigned short int) var_1_29))) : (var_1_75 == ((unsigned short int) var_1_44)))) && ((((var_1_13 > var_1_18) && var_1_23) && (var_1_26 != var_1_44)) ? (var_1_76 == ((double) (var_1_10 + var_1_7))) : 1)) && (var_1_78 == ((double) var_1_10))) && (var_1_79 == ((double) var_1_72))
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
