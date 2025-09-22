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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 500;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 1;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 1;
unsigned short int var_1_7 = 16;
unsigned short int var_1_8 = 23563;
unsigned short int var_1_9 = 4;
signed long int var_1_10 = 200;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 100;
double var_1_16 = 1.25;
double var_1_17 = 9.625;
double var_1_18 = 100000000000000.05;
double var_1_19 = 7.6;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -200;
signed short int var_1_22 = 8;
signed short int var_1_23 = 32;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 2992004367;
double var_1_26 = 63.25;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed long int var_1_29 = 8;
signed long int var_1_30 = 0;
signed char var_1_31 = 16;
signed char var_1_32 = 8;
signed char var_1_33 = 10;
signed char var_1_35 = 10;
signed char var_1_36 = 25;
signed char var_1_37 = 5;
float var_1_39 = 100.2;
unsigned short int var_1_40 = 100;
unsigned short int var_1_41 = 49538;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 1;
unsigned long int var_1_44 = 25;
unsigned long int var_1_45 = 4270376849;
unsigned long int var_1_46 = 1000000000;
double var_1_47 = 1.6;
unsigned short int var_1_50 = 32;
signed char var_1_51 = -32;
signed char var_1_52 = -10;
signed char var_1_53 = 5;
signed char var_1_54 = 64;
signed char var_1_55 = 32;
unsigned long int var_1_56 = 100;
unsigned char var_1_57 = 0;
unsigned char last_1_var_1_11 = 0;
unsigned long int last_1_var_1_15 = 100;
unsigned char last_1_var_1_20 = 0;
unsigned char last_1_var_1_24 = 0;
signed long int last_1_var_1_29 = 8;
float last_1_var_1_39 = 100.2;
unsigned short int last_1_var_1_40 = 100;
unsigned char last_1_var_1_42 = 1;
unsigned char last_1_var_1_43 = 1;
unsigned long int last_1_var_1_44 = 25;
unsigned long int last_1_var_1_56 = 100;
unsigned char last_1_var_1_57 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_var_1_15 == var_1_2;
 if (stepLocal_0 || last_1_var_1_42) {
  var_1_3 = ((var_1_5 + var_1_6) + ((((var_1_7) > ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9)))));
 }
 signed long int stepLocal_3 = (var_1_6 + 25) / var_1_8;
 signed long int stepLocal_2 = var_1_6 * (var_1_5 * var_1_3);
 if (stepLocal_3 < (100000 << var_1_9)) {
  if (stepLocal_2 > var_1_7) {
   var_1_15 = var_1_9;
  } else {
   var_1_15 = var_1_6;
  }
 } else {
  var_1_15 = 4u;
 }
 signed long int stepLocal_10 = (var_1_6 - var_1_36) / ((((var_1_8) < (var_1_41)) ? (var_1_8) : (var_1_41)));
 if (last_1_var_1_44 < stepLocal_10) {
  var_1_43 = ((last_1_var_1_39 == var_1_18) || var_1_28);
 } else {
  var_1_43 = (var_1_14 || var_1_27);
 }
 if (last_1_var_1_20 && last_1_var_1_11) {
  if (last_1_var_1_15 > ((((last_1_var_1_40) < ((last_1_var_1_56 & var_1_6))) ? (last_1_var_1_40) : ((last_1_var_1_56 & var_1_6))))) {
   if (last_1_var_1_24) {
    var_1_20 = (! var_1_14);
   } else {
    var_1_20 = var_1_13;
   }
  }
 }
 if (((((var_1_25) > (last_1_var_1_56)) ? (var_1_25) : (last_1_var_1_56))) > last_1_var_1_15) {
  if (last_1_var_1_43 || last_1_var_1_20) {
   var_1_47 = (var_1_19 + 31.4);
  }
 } else {
  var_1_47 = var_1_17;
 }
 if ((var_1_47 / var_1_26) < (var_1_18 - var_1_17)) {
  if (var_1_47 < ((((var_1_17) > ((var_1_19 - var_1_18))) ? (var_1_17) : ((var_1_19 - var_1_18))))) {
   if (((var_1_23 * var_1_2) % ((((1u) < (256u)) ? (1u) : (256u)))) >= var_1_7) {
    var_1_24 = (var_1_14 || (var_1_27 || (! var_1_13)));
   } else {
    if (var_1_13) {
     var_1_24 = (! var_1_28);
    }
   }
  } else {
   var_1_24 = var_1_27;
  }
 }
 if (last_1_var_1_42) {
  if (last_1_var_1_57) {
   var_1_11 = (! var_1_13);
  } else {
   var_1_11 = ((! var_1_13) && var_1_14);
  }
 } else {
  var_1_11 = var_1_13;
 }
 unsigned long int stepLocal_14 = (last_1_var_1_44 % var_1_45) >> 1u;
 signed long int stepLocal_13 = last_1_var_1_29;
 if (var_1_28) {
  var_1_56 = (((((var_1_8 + var_1_32)) > (var_1_37)) ? ((var_1_8 + var_1_32)) : (var_1_37)));
 } else {
  if (last_1_var_1_56 < stepLocal_14) {
   if (stepLocal_13 >= var_1_52) {
    var_1_56 = var_1_7;
   }
  }
 }
 unsigned char stepLocal_9 = (var_1_6 << var_1_25) > var_1_31;
 unsigned long int stepLocal_8 = var_1_56;
 if (stepLocal_9 && (var_1_30 <= var_1_56)) {
  if ((((((- var_1_8)) > ((var_1_22 / 100))) ? ((- var_1_8)) : ((var_1_22 / 100)))) >= stepLocal_8) {
   var_1_39 = var_1_17;
  } else {
   var_1_39 = (var_1_19 - var_1_17);
  }
 } else {
  var_1_39 = ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)));
 }
 var_1_1 = ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)));
 signed long int stepLocal_1 = var_1_6 << var_1_5;
 if ((var_1_9 * var_1_2) >= stepLocal_1) {
  var_1_10 = ((((var_1_2) < (var_1_5)) ? (var_1_2) : (var_1_5)));
 }
 signed long int stepLocal_4 = - var_1_10;
 if (var_1_8 < stepLocal_4) {
  var_1_16 = (((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - (((((-8.320171373278239E18) < 0 ) ? -(-8.320171373278239E18) : (-8.320171373278239E18))) - var_1_19));
 } else {
  var_1_16 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
 }
 signed long int stepLocal_7 = (((var_1_30) < (var_1_2)) ? (var_1_30) : (var_1_2));
 unsigned long int stepLocal_6 = var_1_15;
 if (stepLocal_7 >= var_1_56) {
  if (var_1_16 <= ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)))) {
   var_1_33 = (var_1_35 + ((((25) < ((var_1_36 - var_1_37))) ? (25) : ((var_1_36 - var_1_37)))));
  }
 } else {
  if (stepLocal_6 <= ((((-2) > (var_1_3)) ? (-2) : (var_1_3)))) {
   var_1_33 = var_1_37;
  } else {
   var_1_33 = var_1_35;
  }
 }
 if (! (var_1_37 > var_1_8)) {
  if (var_1_37 >= 2) {
   var_1_42 = var_1_14;
  }
 }
 if (! var_1_24) {
  var_1_50 = var_1_6;
 } else {
  var_1_50 = (51585 - var_1_7);
 }
 signed long int stepLocal_12 = (((var_1_5) > (var_1_41)) ? (var_1_5) : (var_1_41));
 if (var_1_11) {
  if (var_1_3 >= stepLocal_12) {
   var_1_51 = var_1_35;
  } else {
   var_1_51 = ((((((var_1_36 - var_1_37)) < (var_1_35)) ? ((var_1_36 - var_1_37)) : (var_1_35))) + ((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53))));
  }
 } else {
  if (var_1_43) {
   var_1_51 = (((((((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) < (var_1_54)) ? (((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) : (var_1_54))) - var_1_55);
  }
 }
 if (var_1_31 > var_1_56) {
  if (! ((var_1_31 > var_1_32) || var_1_14)) {
   if (var_1_47 >= var_1_19) {
    var_1_40 = var_1_2;
   }
  } else {
   if (! var_1_20) {
    if (var_1_35 >= 10) {
     var_1_40 = ((((((var_1_6 + var_1_36)) < ((var_1_22 + var_1_9))) ? ((var_1_6 + var_1_36)) : ((var_1_22 + var_1_9)))) + var_1_32);
    } else {
     if (var_1_11) {
      var_1_40 = ((((var_1_32) < (var_1_5)) ? (var_1_32) : (var_1_5)));
     }
    }
   } else {
    if (var_1_14) {
     var_1_40 = (var_1_41 - var_1_36);
    } else {
     var_1_40 = ((((var_1_2) < (var_1_8)) ? (var_1_2) : (var_1_8)));
    }
   }
  }
 } else {
  var_1_40 = (((((var_1_41 - var_1_6)) < (((((var_1_37) < (var_1_32)) ? (var_1_37) : (var_1_32))))) ? ((var_1_41 - var_1_6)) : (((((var_1_37) < (var_1_32)) ? (var_1_37) : (var_1_32))))));
 }
 unsigned long int stepLocal_5 = var_1_1 & (var_1_5 & var_1_56);
 if (((var_1_6 << var_1_9) / ((((64) < (var_1_8)) ? (64) : (var_1_8)))) > stepLocal_5) {
  if (var_1_47 < var_1_17) {
   var_1_21 = (((var_1_22 + var_1_23) - var_1_6) + -256);
  } else {
   var_1_21 = var_1_9;
  }
 }
 if ((((((var_1_8 * var_1_3)) < (var_1_9)) ? ((var_1_8 * var_1_3)) : (var_1_9))) <= var_1_21) {
  if ((var_1_6 * var_1_25) < 1u) {
   if (var_1_56 < (var_1_25 - var_1_2)) {
    var_1_29 = (var_1_9 + ((((var_1_2) > ((var_1_5 - var_1_7))) ? (var_1_2) : ((var_1_5 - var_1_7)))));
   } else {
    var_1_29 = (var_1_30 - var_1_5);
   }
  } else {
   var_1_29 = (var_1_2 + (var_1_7 - var_1_9));
  }
 } else {
  if (var_1_11 || ((var_1_31 - var_1_32) <= (var_1_23 * var_1_56))) {
   var_1_29 = var_1_3;
  } else {
   var_1_29 = ((((var_1_7) < (((((var_1_21) < (var_1_30)) ? (var_1_21) : (var_1_30))))) ? (var_1_7) : (((((var_1_21) < (var_1_30)) ? (var_1_21) : (var_1_30))))));
  }
 }
 signed long int stepLocal_15 = var_1_8 * var_1_30;
 if (var_1_39 < var_1_16) {
  if (var_1_14) {
   if (stepLocal_15 >= var_1_29) {
    if (var_1_43) {
     var_1_57 = (last_1_var_1_57 && var_1_27);
    } else {
     var_1_57 = var_1_28;
    }
   } else {
    var_1_57 = var_1_27;
   }
  } else {
   var_1_57 = var_1_27;
  }
 } else {
  var_1_57 = var_1_28;
 }
 unsigned char stepLocal_11 = var_1_42;
 if (stepLocal_11 && var_1_57) {
  var_1_44 = ((var_1_45 - (var_1_46 - var_1_6)) - var_1_36);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 8192);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 8191);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967295);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -1);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -1);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65534);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 3221225470);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 536870911);
 assume_abort_if_not(var_1_46 <= 1073741823);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -63);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -63);
 assume_abort_if_not(var_1_53 <= 63);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -1);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
}
int property(void) {
 return ((((((((((((((((((((var_1_1 == ((unsigned short int) ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))))) && (((last_1_var_1_15 == var_1_2) || last_1_var_1_42) ? (var_1_3 == ((unsigned short int) ((var_1_5 + var_1_6) + ((((var_1_7) > ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9))))))) : 1)) && (((var_1_9 * var_1_2) >= (var_1_6 << var_1_5)) ? (var_1_10 == ((signed long int) ((((var_1_2) < (var_1_5)) ? (var_1_2) : (var_1_5))))) : 1)) && (last_1_var_1_42 ? (last_1_var_1_57 ? (var_1_11 == ((unsigned char) (! var_1_13))) : (var_1_11 == ((unsigned char) ((! var_1_13) && var_1_14)))) : (var_1_11 == ((unsigned char) var_1_13)))) && ((((var_1_6 + 25) / var_1_8) < (100000 << var_1_9)) ? (((var_1_6 * (var_1_5 * var_1_3)) > var_1_7) ? (var_1_15 == ((unsigned long int) var_1_9)) : (var_1_15 == ((unsigned long int) var_1_6))) : (var_1_15 == ((unsigned long int) 4u)))) && ((var_1_8 < (- var_1_10)) ? (var_1_16 == ((double) (((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - (((((-8.320171373278239E18) < 0 ) ? -(-8.320171373278239E18) : (-8.320171373278239E18))) - var_1_19)))) : (var_1_16 == ((double) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) && ((last_1_var_1_20 && last_1_var_1_11) ? ((last_1_var_1_15 > ((((last_1_var_1_40) < ((last_1_var_1_56 & var_1_6))) ? (last_1_var_1_40) : ((last_1_var_1_56 & var_1_6))))) ? (last_1_var_1_24 ? (var_1_20 == ((unsigned char) (! var_1_14))) : (var_1_20 == ((unsigned char) var_1_13))) : 1) : 1)) && ((((var_1_6 << var_1_9) / ((((64) < (var_1_8)) ? (64) : (var_1_8)))) > (var_1_1 & (var_1_5 & var_1_56))) ? ((var_1_47 < var_1_17) ? (var_1_21 == ((signed short int) (((var_1_22 + var_1_23) - var_1_6) + -256))) : (var_1_21 == ((signed short int) var_1_9))) : 1)) && (((var_1_47 / var_1_26) < (var_1_18 - var_1_17)) ? ((var_1_47 < ((((var_1_17) > ((var_1_19 - var_1_18))) ? (var_1_17) : ((var_1_19 - var_1_18))))) ? ((((var_1_23 * var_1_2) % ((((1u) < (256u)) ? (1u) : (256u)))) >= var_1_7) ? (var_1_24 == ((unsigned char) (var_1_14 || (var_1_27 || (! var_1_13))))) : (var_1_13 ? (var_1_24 == ((unsigned char) (! var_1_28))) : 1)) : (var_1_24 == ((unsigned char) var_1_27))) : 1)) && (((((((var_1_8 * var_1_3)) < (var_1_9)) ? ((var_1_8 * var_1_3)) : (var_1_9))) <= var_1_21) ? (((var_1_6 * var_1_25) < 1u) ? ((var_1_56 < (var_1_25 - var_1_2)) ? (var_1_29 == ((signed long int) (var_1_9 + ((((var_1_2) > ((var_1_5 - var_1_7))) ? (var_1_2) : ((var_1_5 - var_1_7))))))) : (var_1_29 == ((signed long int) (var_1_30 - var_1_5)))) : (var_1_29 == ((signed long int) (var_1_2 + (var_1_7 - var_1_9))))) : ((var_1_11 || ((var_1_31 - var_1_32) <= (var_1_23 * var_1_56))) ? (var_1_29 == ((signed long int) var_1_3)) : (var_1_29 == ((signed long int) ((((var_1_7) < (((((var_1_21) < (var_1_30)) ? (var_1_21) : (var_1_30))))) ? (var_1_7) : (((((var_1_21) < (var_1_30)) ? (var_1_21) : (var_1_30))))))))))) && ((((((var_1_30) < (var_1_2)) ? (var_1_30) : (var_1_2))) >= var_1_56) ? ((var_1_16 <= ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)))) ? (var_1_33 == ((signed char) (var_1_35 + ((((25) < ((var_1_36 - var_1_37))) ? (25) : ((var_1_36 - var_1_37))))))) : 1) : ((var_1_15 <= ((((-2) > (var_1_3)) ? (-2) : (var_1_3)))) ? (var_1_33 == ((signed char) var_1_37)) : (var_1_33 == ((signed char) var_1_35))))) && ((((var_1_6 << var_1_25) > var_1_31) && (var_1_30 <= var_1_56)) ? (((((((- var_1_8)) > ((var_1_22 / 100))) ? ((- var_1_8)) : ((var_1_22 / 100)))) >= var_1_56) ? (var_1_39 == ((float) var_1_17)) : (var_1_39 == ((float) (var_1_19 - var_1_17)))) : (var_1_39 == ((float) ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))))))) && ((var_1_31 > var_1_56) ? ((! ((var_1_31 > var_1_32) || var_1_14)) ? ((var_1_47 >= var_1_19) ? (var_1_40 == ((unsigned short int) var_1_2)) : 1) : ((! var_1_20) ? ((var_1_35 >= 10) ? (var_1_40 == ((unsigned short int) ((((((var_1_6 + var_1_36)) < ((var_1_22 + var_1_9))) ? ((var_1_6 + var_1_36)) : ((var_1_22 + var_1_9)))) + var_1_32))) : (var_1_11 ? (var_1_40 == ((unsigned short int) ((((var_1_32) < (var_1_5)) ? (var_1_32) : (var_1_5))))) : 1)) : (var_1_14 ? (var_1_40 == ((unsigned short int) (var_1_41 - var_1_36))) : (var_1_40 == ((unsigned short int) ((((var_1_2) < (var_1_8)) ? (var_1_2) : (var_1_8)))))))) : (var_1_40 == ((unsigned short int) (((((var_1_41 - var_1_6)) < (((((var_1_37) < (var_1_32)) ? (var_1_37) : (var_1_32))))) ? ((var_1_41 - var_1_6)) : (((((var_1_37) < (var_1_32)) ? (var_1_37) : (var_1_32)))))))))) && ((! (var_1_37 > var_1_8)) ? ((var_1_37 >= 2) ? (var_1_42 == ((unsigned char) var_1_14)) : 1) : 1)) && ((last_1_var_1_44 < ((var_1_6 - var_1_36) / ((((var_1_8) < (var_1_41)) ? (var_1_8) : (var_1_41))))) ? (var_1_43 == ((unsigned char) ((last_1_var_1_39 == var_1_18) || var_1_28))) : (var_1_43 == ((unsigned char) (var_1_14 || var_1_27))))) && ((var_1_42 && var_1_57) ? (var_1_44 == ((unsigned long int) ((var_1_45 - (var_1_46 - var_1_6)) - var_1_36))) : 1)) && ((((((var_1_25) > (last_1_var_1_56)) ? (var_1_25) : (last_1_var_1_56))) > last_1_var_1_15) ? ((last_1_var_1_43 || last_1_var_1_20) ? (var_1_47 == ((double) (var_1_19 + 31.4))) : 1) : (var_1_47 == ((double) var_1_17)))) && ((! var_1_24) ? (var_1_50 == ((unsigned short int) var_1_6)) : (var_1_50 == ((unsigned short int) (51585 - var_1_7))))) && (var_1_11 ? ((var_1_3 >= ((((var_1_5) > (var_1_41)) ? (var_1_5) : (var_1_41)))) ? (var_1_51 == ((signed char) var_1_35)) : (var_1_51 == ((signed char) ((((((var_1_36 - var_1_37)) < (var_1_35)) ? ((var_1_36 - var_1_37)) : (var_1_35))) + ((((var_1_52) < (var_1_53)) ? (var_1_52) : (var_1_53))))))) : (var_1_43 ? (var_1_51 == ((signed char) (((((((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) < (var_1_54)) ? (((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) : (var_1_54))) - var_1_55))) : 1))) && (var_1_28 ? (var_1_56 == ((unsigned long int) (((((var_1_8 + var_1_32)) > (var_1_37)) ? ((var_1_8 + var_1_32)) : (var_1_37))))) : ((last_1_var_1_56 < ((last_1_var_1_44 % var_1_45) >> 1u)) ? ((last_1_var_1_29 >= var_1_52) ? (var_1_56 == ((unsigned long int) var_1_7)) : 1) : 1))) && ((var_1_39 < var_1_16) ? (var_1_14 ? (((var_1_8 * var_1_30) >= var_1_29) ? (var_1_43 ? (var_1_57 == ((unsigned char) (last_1_var_1_57 && var_1_27))) : (var_1_57 == ((unsigned char) var_1_28))) : (var_1_57 == ((unsigned char) var_1_27))) : (var_1_57 == ((unsigned char) var_1_27))) : (var_1_57 == ((unsigned char) var_1_28)))
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
