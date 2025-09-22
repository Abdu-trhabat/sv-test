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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 32;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 128;
signed char var_1_16 = 0;
double var_1_17 = 7.2;
signed char var_1_18 = -16;
unsigned long int var_1_19 = 0;
unsigned long int var_1_20 = 1751472022;
signed char var_1_21 = 64;
signed char var_1_22 = 5;
signed char var_1_23 = 1;
signed char var_1_24 = 2;
signed char var_1_25 = 4;
signed char var_1_26 = 8;
double var_1_27 = 7.5;
double var_1_28 = 0.0;
double var_1_29 = 0.0;
double var_1_30 = 99.5;
double var_1_31 = 32.875;
double var_1_32 = 5.8;
signed long int var_1_33 = 10;
signed long int var_1_34 = 1000000000;
signed short int var_1_35 = 32;
unsigned char var_1_36 = 50;
signed char var_1_37 = -5;
signed char var_1_38 = 64;
double var_1_39 = 31.1;
double var_1_41 = 2.5;
unsigned short int var_1_42 = 32;
unsigned short int var_1_43 = 23043;
unsigned short int var_1_44 = 23523;
unsigned short int var_1_45 = 51199;
unsigned short int var_1_46 = 55412;
double var_1_47 = 7.6;
double var_1_48 = 25.5;
double var_1_49 = 8.4;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
signed long int var_1_52 = 200;
signed char var_1_53 = 16;
unsigned char var_1_54 = 64;
unsigned long int var_1_55 = 2545924148;
signed char var_1_56 = 16;
unsigned short int var_1_58 = 100;
unsigned short int var_1_61 = 25;
signed short int var_1_62 = 32656;
unsigned short int var_1_63 = 10000;
signed short int var_1_64 = -4;
float var_1_65 = 128.375;
unsigned long int var_1_66 = 100;
unsigned long int var_1_67 = 2524175048;
unsigned long int var_1_68 = 1636669343;
signed char var_1_69 = -8;
unsigned short int last_1_var_1_13 = 32;
unsigned long int last_1_var_1_19 = 0;
double last_1_var_1_27 = 7.5;
signed long int last_1_var_1_33 = 10;
double last_1_var_1_39 = 31.1;
double last_1_var_1_47 = 7.6;
signed long int last_1_var_1_52 = 200;
unsigned char last_1_var_1_54 = 64;
unsigned short int last_1_var_1_58 = 100;
signed short int last_1_var_1_64 = -4;
unsigned long int last_1_var_1_66 = 100;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_17 = (var_1_62 - var_1_23) - var_1_26;
 unsigned char stepLocal_16 = ! (10 <= var_1_25);
 signed long int stepLocal_15 = last_1_var_1_13;
 if (last_1_var_1_39 < var_1_32) {
  if (last_1_var_1_19 > stepLocal_15) {
   if (var_1_11 && stepLocal_16) {
    var_1_58 = (((((var_1_46) < (var_1_45)) ? (var_1_46) : (var_1_45))) - last_1_var_1_64);
   } else {
    var_1_58 = (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) + var_1_61);
   }
  }
 } else {
  if (stepLocal_17 >= last_1_var_1_52) {
   var_1_58 = (((10000 - var_1_26) + (var_1_63 - var_1_25)) + var_1_43);
  } else {
   var_1_58 = (var_1_45 - last_1_var_1_54);
  }
 }
 signed long int stepLocal_2 = last_1_var_1_52;
 if (stepLocal_2 >= last_1_var_1_66) {
  var_1_13 = (var_1_14 + var_1_15);
 }
 unsigned long int stepLocal_4 = last_1_var_1_66;
 if (var_1_17 <= last_1_var_1_27) {
  var_1_19 = (((((last_1_var_1_19) > (last_1_var_1_58)) ? (last_1_var_1_19) : (last_1_var_1_58))) + var_1_15);
 } else {
  if (last_1_var_1_47 == last_1_var_1_27) {
   if (last_1_var_1_19 != stepLocal_4) {
    var_1_19 = (last_1_var_1_58 + ((((last_1_var_1_66) < (last_1_var_1_58)) ? (last_1_var_1_66) : (last_1_var_1_58))));
   } else {
    var_1_19 = ((((last_1_var_1_19) < 0 ) ? -(last_1_var_1_19) : (last_1_var_1_19)));
   }
  } else {
   var_1_19 = (last_1_var_1_66 + (var_1_20 - last_1_var_1_19));
  }
 }
 if ((var_1_19 / ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) >= var_1_19) {
  var_1_39 = ((((var_1_29) > (var_1_41)) ? (var_1_29) : (var_1_41)));
 }
 unsigned long int stepLocal_12 = var_1_20;
 if (var_1_39 <= var_1_48) {
  var_1_54 = (var_1_24 + var_1_38);
 } else {
  if ((var_1_55 - ((((var_1_44) > (var_1_46)) ? (var_1_44) : (var_1_46)))) > stepLocal_12) {
   var_1_54 = var_1_24;
  } else {
   var_1_54 = var_1_23;
  }
 }
 if (var_1_12 && var_1_10) {
  var_1_21 = (var_1_22 - (16 + ((((16) > (var_1_23)) ? (16) : (var_1_23)))));
 } else {
  var_1_21 = (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))) - ((var_1_24 + var_1_25) + var_1_26));
 }
 var_1_47 = (var_1_30 + ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))));
 if (last_1_var_1_66 >= var_1_23) {
  var_1_66 = (var_1_67 - var_1_44);
 } else {
  var_1_66 = ((var_1_20 + var_1_68) - var_1_14);
 }
 unsigned char stepLocal_11 = (var_1_23 / var_1_45) >= var_1_58;
 unsigned long int stepLocal_10 = var_1_19;
 if (stepLocal_11 || var_1_10) {
  if (var_1_43 <= stepLocal_10) {
   var_1_52 = (var_1_58 + var_1_24);
  }
 }
 if (var_1_47 == var_1_17) {
  if (var_1_5) {
   var_1_27 = ((((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))) - ((((var_1_30) > (4.8)) ? (var_1_30) : (4.8)))) - var_1_31);
  } else {
   var_1_27 = var_1_32;
  }
 } else {
  if (var_1_26 < ((((var_1_19) < (var_1_13)) ? (var_1_19) : (var_1_13)))) {
   if (-256 <= var_1_24) {
    var_1_27 = (var_1_31 - var_1_29);
   } else {
    var_1_27 = var_1_31;
   }
  }
 }
 signed long int stepLocal_9 = var_1_23 << var_1_66;
 if (var_1_19 <= stepLocal_9) {
  var_1_50 = ((var_1_46 < var_1_25) || var_1_51);
 } else {
  var_1_50 = (! var_1_51);
 }
 unsigned short int stepLocal_3 = var_1_14;
 if (var_1_27 >= (var_1_39 / ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) {
  if (stepLocal_3 < var_1_52) {
   var_1_16 = var_1_18;
  } else {
   var_1_16 = ((((-64) < (var_1_18)) ? (-64) : (var_1_18)));
  }
 }
 if (var_1_23 <= var_1_14) {
  if ((var_1_32 == (var_1_28 + var_1_31)) || var_1_50) {
   if (var_1_28 > 8.6) {
    var_1_37 = ((((var_1_24 + (var_1_25 - var_1_23)) < 0 ) ? -(var_1_24 + (var_1_25 - var_1_23)) : (var_1_24 + (var_1_25 - var_1_23))));
   }
  } else {
   var_1_37 = (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - (var_1_38 - ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)))));
  }
 } else {
  var_1_37 = (var_1_26 - ((((var_1_38) > ((var_1_24 + var_1_25))) ? (var_1_38) : ((var_1_24 + var_1_25)))));
 }
 signed long int stepLocal_8 = var_1_52;
 unsigned char stepLocal_7 = var_1_10;
 if (stepLocal_7 && ((var_1_46 + var_1_13) >= ((((1000) < (var_1_19)) ? (1000) : (var_1_19))))) {
  if (stepLocal_8 != (- var_1_19)) {
   var_1_49 = (((((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) < 0 ) ? -((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) : ((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32)))));
  } else {
   var_1_49 = var_1_30;
  }
 }
 unsigned long int stepLocal_14 = var_1_19 | var_1_15;
 unsigned long int stepLocal_13 = var_1_66;
 if (var_1_44 != stepLocal_14) {
  if ((var_1_58 * var_1_19) >= stepLocal_13) {
   var_1_56 = ((((var_1_22) > ((((((var_1_23 + var_1_25)) < (var_1_18)) ? ((var_1_23 + var_1_25)) : (var_1_18))))) ? (var_1_22) : ((((((var_1_23 + var_1_25)) < (var_1_18)) ? ((var_1_23 + var_1_25)) : (var_1_18))))));
  }
 }
 if (((((var_1_49) > (var_1_47)) ? (var_1_49) : (var_1_47))) == var_1_49) {
  var_1_65 = 128.5f;
 }
 if (! var_1_12) {
  if (! var_1_50) {
   var_1_36 = var_1_25;
  }
 }
 unsigned char stepLocal_5 = var_1_11;
 if (((var_1_49 + var_1_28) / var_1_17) <= (- var_1_30)) {
  var_1_33 = ((var_1_26 - (var_1_34 - var_1_25)) + (var_1_23 + var_1_58));
 } else {
  if ((var_1_39 <= var_1_30) || stepLocal_5) {
   var_1_33 = var_1_36;
  } else {
   var_1_33 = last_1_var_1_33;
  }
 }
 unsigned long int stepLocal_18 = - var_1_66;
 if (var_1_13 <= stepLocal_18) {
  var_1_64 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
 } else {
  var_1_64 = (var_1_36 + var_1_21);
 }
 signed long int stepLocal_1 = var_1_33 + var_1_58;
 signed long int stepLocal_0 = var_1_33;
 if (stepLocal_0 != var_1_66) {
  if (var_1_66 >= stepLocal_1) {
   var_1_1 = var_1_5;
  } else {
   if (((4.6 * var_1_47) * 1.000000002E8) >= ((var_1_47 + var_1_39) + (3.75 + var_1_39))) {
    var_1_1 = (! (var_1_10 || var_1_11));
   }
  }
 } else {
  var_1_1 = var_1_12;
 }
 if (var_1_50) {
  var_1_42 = ((((((var_1_43 + var_1_44)) > ((var_1_45 - var_1_24))) ? ((var_1_43 + var_1_44)) : ((var_1_45 - var_1_24)))) - var_1_64);
 } else {
  var_1_42 = (((((var_1_45) > ((var_1_46 - 5))) ? (var_1_45) : ((var_1_46 - 5)))) - var_1_23);
 }
 if (var_1_5 || var_1_1) {
  var_1_53 = ((((((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)))) < ((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - 5))) ? (((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)))) : ((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - 5))));
 } else {
  var_1_53 = (var_1_26 + ((var_1_24 + var_1_25) - var_1_23));
 }
 if (var_1_52 < (var_1_20 * var_1_66)) {
  if (var_1_1) {
   var_1_69 = var_1_18;
  }
 }
 unsigned char stepLocal_6 = var_1_33 <= var_1_42;
 if (var_1_31 > (var_1_27 * var_1_28)) {
  if (stepLocal_6 && var_1_12) {
   var_1_35 = ((((((((var_1_24) > (var_1_23)) ? (var_1_24) : (var_1_23)))) < (var_1_25)) ? (((((var_1_24) > (var_1_23)) ? (var_1_24) : (var_1_23)))) : (var_1_25)));
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741823);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 31);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= 536870911);
 assume_abort_if_not(var_1_34 <= 1073741823);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16383);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 16384);
 assume_abort_if_not(var_1_44 <= 32767);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 49150);
 assume_abort_if_not(var_1_45 <= 65534);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 49150);
 assume_abort_if_not(var_1_46 <= 65534);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 2147483647);
 assume_abort_if_not(var_1_55 <= 4294967295);
 var_1_61 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 32767);
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= 16383);
 assume_abort_if_not(var_1_62 <= 32767);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 8191);
 assume_abort_if_not(var_1_63 <= 16383);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 2147483647);
 assume_abort_if_not(var_1_67 <= 4294967294);
 var_1_68 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_68 >= 1073741824);
 assume_abort_if_not(var_1_68 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_66 = var_1_66;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_33 != var_1_66) ? ((var_1_66 >= (var_1_33 + var_1_58)) ? (var_1_1 == ((unsigned char) var_1_5)) : ((((4.6 * var_1_47) * 1.000000002E8) >= ((var_1_47 + var_1_39) + (3.75 + var_1_39))) ? (var_1_1 == ((unsigned char) (! (var_1_10 || var_1_11)))) : 1)) : (var_1_1 == ((unsigned char) var_1_12))) && ((last_1_var_1_52 >= last_1_var_1_66) ? (var_1_13 == ((unsigned short int) (var_1_14 + var_1_15))) : 1)) && ((var_1_27 >= (var_1_39 / ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? ((var_1_14 < var_1_52) ? (var_1_16 == ((signed char) var_1_18)) : (var_1_16 == ((signed char) ((((-64) < (var_1_18)) ? (-64) : (var_1_18)))))) : 1)) && ((var_1_17 <= last_1_var_1_27) ? (var_1_19 == ((unsigned long int) (((((last_1_var_1_19) > (last_1_var_1_58)) ? (last_1_var_1_19) : (last_1_var_1_58))) + var_1_15))) : ((last_1_var_1_47 == last_1_var_1_27) ? ((last_1_var_1_19 != last_1_var_1_66) ? (var_1_19 == ((unsigned long int) (last_1_var_1_58 + ((((last_1_var_1_66) < (last_1_var_1_58)) ? (last_1_var_1_66) : (last_1_var_1_58)))))) : (var_1_19 == ((unsigned long int) ((((last_1_var_1_19) < 0 ) ? -(last_1_var_1_19) : (last_1_var_1_19)))))) : (var_1_19 == ((unsigned long int) (last_1_var_1_66 + (var_1_20 - last_1_var_1_19))))))) && ((var_1_12 && var_1_10) ? (var_1_21 == ((signed char) (var_1_22 - (16 + ((((16) > (var_1_23)) ? (16) : (var_1_23))))))) : (var_1_21 == ((signed char) (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))) - ((var_1_24 + var_1_25) + var_1_26)))))) && ((var_1_47 == var_1_17) ? (var_1_5 ? (var_1_27 == ((double) ((((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))) - ((((var_1_30) > (4.8)) ? (var_1_30) : (4.8)))) - var_1_31))) : (var_1_27 == ((double) var_1_32))) : ((var_1_26 < ((((var_1_19) < (var_1_13)) ? (var_1_19) : (var_1_13)))) ? ((-256 <= var_1_24) ? (var_1_27 == ((double) (var_1_31 - var_1_29))) : (var_1_27 == ((double) var_1_31))) : 1))) && ((((var_1_49 + var_1_28) / var_1_17) <= (- var_1_30)) ? (var_1_33 == ((signed long int) ((var_1_26 - (var_1_34 - var_1_25)) + (var_1_23 + var_1_58)))) : (((var_1_39 <= var_1_30) || var_1_11) ? (var_1_33 == ((signed long int) var_1_36)) : (var_1_33 == ((signed long int) last_1_var_1_33))))) && ((var_1_31 > (var_1_27 * var_1_28)) ? (((var_1_33 <= var_1_42) && var_1_12) ? (var_1_35 == ((signed short int) ((((((((var_1_24) > (var_1_23)) ? (var_1_24) : (var_1_23)))) < (var_1_25)) ? (((((var_1_24) > (var_1_23)) ? (var_1_24) : (var_1_23)))) : (var_1_25))))) : 1) : 1)) && ((! var_1_12) ? ((! var_1_50) ? (var_1_36 == ((unsigned char) var_1_25)) : 1) : 1)) && ((var_1_23 <= var_1_14) ? (((var_1_32 == (var_1_28 + var_1_31)) || var_1_50) ? ((var_1_28 > 8.6) ? (var_1_37 == ((signed char) ((((var_1_24 + (var_1_25 - var_1_23)) < 0 ) ? -(var_1_24 + (var_1_25 - var_1_23)) : (var_1_24 + (var_1_25 - var_1_23)))))) : 1) : (var_1_37 == ((signed char) (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - (var_1_38 - ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)))))))) : (var_1_37 == ((signed char) (var_1_26 - ((((var_1_38) > ((var_1_24 + var_1_25))) ? (var_1_38) : ((var_1_24 + var_1_25))))))))) && (((var_1_19 / ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) >= var_1_19) ? (var_1_39 == ((double) ((((var_1_29) > (var_1_41)) ? (var_1_29) : (var_1_41))))) : 1)) && (var_1_50 ? (var_1_42 == ((unsigned short int) ((((((var_1_43 + var_1_44)) > ((var_1_45 - var_1_24))) ? ((var_1_43 + var_1_44)) : ((var_1_45 - var_1_24)))) - var_1_64))) : (var_1_42 == ((unsigned short int) (((((var_1_45) > ((var_1_46 - 5))) ? (var_1_45) : ((var_1_46 - 5)))) - var_1_23))))) && (var_1_47 == ((double) (var_1_30 + ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))))))) && ((var_1_10 && ((var_1_46 + var_1_13) >= ((((1000) < (var_1_19)) ? (1000) : (var_1_19))))) ? ((var_1_52 != (- var_1_19)) ? (var_1_49 == ((double) (((((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) < 0 ) ? -((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) : ((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))))))) : (var_1_49 == ((double) var_1_30))) : 1)) && ((var_1_19 <= (var_1_23 << var_1_66)) ? (var_1_50 == ((unsigned char) ((var_1_46 < var_1_25) || var_1_51))) : (var_1_50 == ((unsigned char) (! var_1_51))))) && ((((var_1_23 / var_1_45) >= var_1_58) || var_1_10) ? ((var_1_43 <= var_1_19) ? (var_1_52 == ((signed long int) (var_1_58 + var_1_24))) : 1) : 1)) && ((var_1_5 || var_1_1) ? (var_1_53 == ((signed char) ((((((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)))) < ((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - 5))) ? (((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)))) : ((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) - 5)))))) : (var_1_53 == ((signed char) (var_1_26 + ((var_1_24 + var_1_25) - var_1_23)))))) && ((var_1_39 <= var_1_48) ? (var_1_54 == ((unsigned char) (var_1_24 + var_1_38))) : (((var_1_55 - ((((var_1_44) > (var_1_46)) ? (var_1_44) : (var_1_46)))) > var_1_20) ? (var_1_54 == ((unsigned char) var_1_24)) : (var_1_54 == ((unsigned char) var_1_23))))) && ((var_1_44 != (var_1_19 | var_1_15)) ? (((var_1_58 * var_1_19) >= var_1_66) ? (var_1_56 == ((signed char) ((((var_1_22) > ((((((var_1_23 + var_1_25)) < (var_1_18)) ? ((var_1_23 + var_1_25)) : (var_1_18))))) ? (var_1_22) : ((((((var_1_23 + var_1_25)) < (var_1_18)) ? ((var_1_23 + var_1_25)) : (var_1_18)))))))) : 1) : 1)) && ((last_1_var_1_39 < var_1_32) ? ((last_1_var_1_19 > last_1_var_1_13) ? ((var_1_11 && (! (10 <= var_1_25))) ? (var_1_58 == ((unsigned short int) (((((var_1_46) < (var_1_45)) ? (var_1_46) : (var_1_45))) - last_1_var_1_64))) : (var_1_58 == ((unsigned short int) (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) + var_1_61)))) : 1) : ((((var_1_62 - var_1_23) - var_1_26) >= last_1_var_1_52) ? (var_1_58 == ((unsigned short int) (((10000 - var_1_26) + (var_1_63 - var_1_25)) + var_1_43))) : (var_1_58 == ((unsigned short int) (var_1_45 - last_1_var_1_54)))))) && ((var_1_13 <= (- var_1_66)) ? (var_1_64 == ((signed short int) ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) : (var_1_64 == ((signed short int) (var_1_36 + var_1_21))))) && ((((((var_1_49) > (var_1_47)) ? (var_1_49) : (var_1_47))) == var_1_49) ? (var_1_65 == ((float) 128.5f)) : 1)) && ((last_1_var_1_66 >= var_1_23) ? (var_1_66 == ((unsigned long int) (var_1_67 - var_1_44))) : (var_1_66 == ((unsigned long int) ((var_1_20 + var_1_68) - var_1_14))))) && ((var_1_52 < (var_1_20 * var_1_66)) ? (var_1_1 ? (var_1_69 == ((signed char) var_1_18)) : 1) : 1)
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
