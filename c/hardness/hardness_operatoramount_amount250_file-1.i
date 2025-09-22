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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
signed long int var_1_11 = -100;
signed long int var_1_12 = 1977712970;
signed long int var_1_13 = 0;
signed long int var_1_14 = 2;
unsigned short int var_1_15 = 1000;
unsigned short int var_1_16 = 64;
float var_1_17 = 49.75;
float var_1_18 = 256.2;
float var_1_19 = 999999999.8;
signed char var_1_20 = -4;
signed char var_1_21 = 8;
signed char var_1_22 = 32;
float var_1_23 = 4.5;
float var_1_24 = 32.5;
float var_1_25 = 199.5;
float var_1_26 = 0.0;
float var_1_27 = 0.0;
float var_1_28 = 128.8;
signed char var_1_29 = 64;
float var_1_30 = 128.5;
float var_1_31 = 10.2;
unsigned long int var_1_32 = 4;
unsigned long int var_1_33 = 3502996739;
unsigned long int var_1_34 = 5;
signed char var_1_35 = -128;
unsigned char var_1_36 = 5;
unsigned char var_1_37 = 200;
unsigned char var_1_38 = 0;
unsigned char var_1_40 = 0;
unsigned long int var_1_41 = 256;
unsigned long int var_1_42 = 3342297017;
unsigned long int var_1_43 = 128;
unsigned long int var_1_44 = 0;
unsigned long int var_1_45 = 2029022744;
unsigned long int var_1_46 = 1820864555;
unsigned long int var_1_47 = 1088921898;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned long int var_1_53 = 1;
unsigned long int var_1_55 = 1;
float var_1_56 = 64.6;
unsigned char var_1_57 = 32;
unsigned short int var_1_58 = 100;
signed short int var_1_59 = 16;
unsigned short int var_1_60 = 1000;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
signed long int last_1_var_1_11 = -100;
unsigned short int last_1_var_1_15 = 1000;
unsigned long int last_1_var_1_32 = 4;
unsigned long int last_1_var_1_34 = 5;
unsigned long int last_1_var_1_44 = 0;
unsigned char last_1_var_1_50 = 0;
unsigned long int last_1_var_1_53 = 1;
unsigned long int last_1_var_1_55 = 1;
unsigned short int last_1_var_1_58 = 100;
unsigned short int last_1_var_1_60 = 1000;
unsigned char last_1_var_1_62 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_50) {
  var_1_58 = var_1_16;
 }
 if ((- var_1_12) < var_1_58) {
  var_1_36 = ((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - 5) - var_1_22);
 } else {
  var_1_36 = var_1_37;
 }
 if (var_1_22 <= (var_1_36 + var_1_14)) {
  var_1_24 = (var_1_25 - (var_1_26 - (var_1_27 - var_1_28)));
 } else {
  var_1_24 = var_1_28;
 }
 if (var_1_6) {
  if (var_1_12 < ((last_1_var_1_11 + last_1_var_1_44) + last_1_var_1_15)) {
   if (((((((((var_1_16) < (last_1_var_1_34)) ? (var_1_16) : (last_1_var_1_34)))) > (var_1_37)) ? (((((var_1_16) < (last_1_var_1_34)) ? (var_1_16) : (last_1_var_1_34)))) : (var_1_37))) < (var_1_22 + (- var_1_12))) {
    var_1_41 = ((((var_1_16) > (var_1_33)) ? (var_1_16) : (var_1_33)));
   } else {
    var_1_41 = ((var_1_42 - last_1_var_1_32) - var_1_14);
   }
  } else {
   if (var_1_22 >= (var_1_42 / var_1_37)) {
    var_1_41 = (var_1_16 + var_1_14);
   } else {
    var_1_41 = (((((var_1_42) < (var_1_33)) ? (var_1_42) : (var_1_33))) - var_1_13);
   }
  }
 } else {
  var_1_41 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 }
 if (var_1_46 >= var_1_41) {
  var_1_57 = (var_1_48 + var_1_22);
 } else {
  var_1_57 = var_1_37;
 }
 if (last_1_var_1_50) {
  var_1_62 = (var_1_8 || var_1_9);
 } else {
  var_1_62 = ((last_1_var_1_62 && var_1_6) || var_1_40);
 }
 unsigned char stepLocal_5 = var_1_62;
 if ((var_1_14 > var_1_12) && stepLocal_5) {
  if (var_1_18 < var_1_28) {
   var_1_38 = (var_1_7 || (var_1_10 && (var_1_6 || var_1_40)));
  }
 }
 signed long int stepLocal_8 = last_1_var_1_58;
 signed long int stepLocal_7 = var_1_37 - (var_1_48 + var_1_49);
 unsigned long int stepLocal_6 = var_1_43;
 if (var_1_23 <= var_1_19) {
  if ((((((last_1_var_1_34) < (last_1_var_1_55)) ? (last_1_var_1_34) : (last_1_var_1_55))) / var_1_37) == stepLocal_6) {
   if (stepLocal_8 >= last_1_var_1_34) {
    var_1_44 = (var_1_33 - last_1_var_1_53);
   } else {
    var_1_44 = ((var_1_45 + ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47)))) - ((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12))));
   }
  } else {
   var_1_44 = ((((last_1_var_1_60) > (var_1_42)) ? (last_1_var_1_60) : (var_1_42)));
  }
 } else {
  if (stepLocal_7 > (last_1_var_1_53 - var_1_14)) {
   var_1_44 = ((((var_1_42) > (((((var_1_49) > ((var_1_45 + var_1_48))) ? (var_1_49) : ((var_1_45 + var_1_48)))))) ? (var_1_42) : (((((var_1_49) > ((var_1_45 + var_1_48))) ? (var_1_49) : ((var_1_45 + var_1_48)))))));
  } else {
   if (last_1_var_1_50) {
    var_1_44 = ((var_1_47 - (last_1_var_1_53 + var_1_16)) + var_1_22);
   } else {
    var_1_44 = (last_1_var_1_53 + last_1_var_1_60);
   }
  }
 }
 var_1_17 = ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)));
 if (var_1_25 >= (var_1_26 - var_1_28)) {
  var_1_30 = ((((10.5f + var_1_28) < 0 ) ? -(10.5f + var_1_28) : (10.5f + var_1_28)));
 } else {
  var_1_30 = (var_1_31 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))));
 }
 if (! var_1_9) {
  var_1_32 = (((((var_1_33 - 25u)) > (32u)) ? ((var_1_33 - 25u)) : (32u)));
 }
 if (var_1_8) {
  var_1_35 = var_1_22;
 } else {
  var_1_35 = ((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21)));
 }
 if (var_1_6) {
  var_1_56 = (((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25))) - var_1_27);
 }
 if (var_1_7) {
  var_1_59 = var_1_37;
 } else {
  var_1_59 = var_1_49;
 }
 if (var_1_10) {
  var_1_60 = (10 + var_1_49);
 }
 var_1_61 = 1;
 unsigned char stepLocal_4 = var_1_38;
 if (((var_1_26 - var_1_28) * var_1_23) == 5.75f) {
  var_1_34 = ((((var_1_22) > ((last_1_var_1_34 + var_1_57))) ? (var_1_22) : ((last_1_var_1_34 + var_1_57))));
 } else {
  if (stepLocal_4 && (last_1_var_1_34 < var_1_58)) {
   var_1_34 = 256u;
  } else {
   var_1_34 = last_1_var_1_34;
  }
 }
 if (var_1_36 <= var_1_32) {
  if ((var_1_36 ^ (var_1_32 ^ var_1_41)) < var_1_44) {
   var_1_1 = (var_1_6 || var_1_7);
  } else {
   if ((var_1_44 == var_1_36) || (var_1_7 && (var_1_32 <= 64))) {
    var_1_1 = ((var_1_8 && (! var_1_7)) && (var_1_9 && var_1_10));
   } else {
    if (var_1_10) {
     var_1_1 = var_1_6;
    }
   }
  }
 }
 signed long int stepLocal_0 = 4;
 if (var_1_8) {
  var_1_11 = ((((var_1_41) > (var_1_59)) ? (var_1_41) : (var_1_59)));
 } else {
  if (var_1_59 < stepLocal_0) {
   var_1_11 = (((((var_1_59) < ((var_1_12 - var_1_13))) ? (var_1_59) : ((var_1_12 - var_1_13)))) - ((((var_1_41) < (var_1_14)) ? (var_1_41) : (var_1_14))));
  } else {
   var_1_11 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
  }
 }
 unsigned char stepLocal_3 = var_1_8;
 unsigned char stepLocal_2 = var_1_8 && var_1_9;
 if (stepLocal_3 && var_1_6) {
  var_1_20 = (var_1_21 - var_1_22);
 } else {
  if ((var_1_19 + var_1_24) >= (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) / var_1_23)) {
   if (stepLocal_2 && ((var_1_16 >= var_1_34) || var_1_7)) {
    var_1_20 = -8;
   }
  } else {
   var_1_20 = var_1_22;
  }
 }
 if (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) >= var_1_19) {
  var_1_29 = ((((-1) > (var_1_22)) ? (-1) : (var_1_22)));
 }
 if (var_1_27 > var_1_26) {
  var_1_51 = (var_1_10 && var_1_8);
 } else {
  if (var_1_62) {
   var_1_51 = (var_1_1 || var_1_8);
  }
 }
 if (var_1_24 >= var_1_27) {
  if (((((var_1_16) > (var_1_44)) ? (var_1_16) : (var_1_44))) < var_1_61) {
   var_1_53 = (((((var_1_16) < (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) ? (var_1_16) : (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))))) + 100000u);
  }
 } else {
  if (var_1_51 || var_1_62) {
   var_1_53 = (var_1_42 - (var_1_37 + var_1_49));
  } else {
   var_1_53 = ((((last_1_var_1_53) > ((var_1_47 + var_1_48))) ? (last_1_var_1_53) : ((var_1_47 + var_1_48))));
  }
 }
 unsigned long int stepLocal_9 = var_1_53 + var_1_34;
 if (var_1_32 > stepLocal_9) {
  var_1_50 = (! var_1_7);
 } else {
  var_1_50 = ((var_1_51 || (var_1_62 && var_1_38)) && var_1_6);
 }
 unsigned char stepLocal_12 = var_1_38;
 unsigned long int stepLocal_11 = var_1_53 / 256u;
 unsigned char stepLocal_10 = var_1_40 && (var_1_44 > var_1_13);
 if (stepLocal_11 > (var_1_60 / 5u)) {
  if (var_1_50 || stepLocal_12) {
   if (stepLocal_10 || (! var_1_9)) {
    var_1_55 = ((((var_1_45) > (var_1_48)) ? (var_1_45) : (var_1_48)));
   } else {
    var_1_55 = (var_1_33 - var_1_32);
   }
  }
 } else {
  var_1_55 = (var_1_49 + ((((1000000000u) > (var_1_37)) ? (1000000000u) : (var_1_37))));
 }
 unsigned long int stepLocal_1 = var_1_55 * var_1_14;
 if (var_1_12 < stepLocal_1) {
  var_1_15 = ((((var_1_60) < ((var_1_61 + var_1_16))) ? (var_1_60) : ((var_1_61 + var_1_16))));
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741822);
 assume_abort_if_not(var_1_12 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 4611686.018427383000e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 2305843.009213691400e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 190);
 assume_abort_if_not(var_1_37 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 3221225470);
 assume_abort_if_not(var_1_42 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741824);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 1073741824);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 64);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_62 = var_1_62;
}
int property(void) {
 return ((((((((((((((((((((((((((var_1_36 <= var_1_32) ? (((var_1_36 ^ (var_1_32 ^ var_1_41)) < var_1_44) ? (var_1_1 == ((unsigned char) (var_1_6 || var_1_7))) : (((var_1_44 == var_1_36) || (var_1_7 && (var_1_32 <= 64))) ? (var_1_1 == ((unsigned char) ((var_1_8 && (! var_1_7)) && (var_1_9 && var_1_10)))) : (var_1_10 ? (var_1_1 == ((unsigned char) var_1_6)) : 1))) : 1) && (var_1_8 ? (var_1_11 == ((signed long int) ((((var_1_41) > (var_1_59)) ? (var_1_41) : (var_1_59))))) : ((var_1_59 < 4) ? (var_1_11 == ((signed long int) (((((var_1_59) < ((var_1_12 - var_1_13))) ? (var_1_59) : ((var_1_12 - var_1_13)))) - ((((var_1_41) < (var_1_14)) ? (var_1_41) : (var_1_14)))))) : (var_1_11 == ((signed long int) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))))) && ((var_1_12 < (var_1_55 * var_1_14)) ? (var_1_15 == ((unsigned short int) ((((var_1_60) < ((var_1_61 + var_1_16))) ? (var_1_60) : ((var_1_61 + var_1_16)))))) : 1)) && (var_1_17 == ((float) ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))))) && ((var_1_8 && var_1_6) ? (var_1_20 == ((signed char) (var_1_21 - var_1_22))) : (((var_1_19 + var_1_24) >= (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) / var_1_23)) ? (((var_1_8 && var_1_9) && ((var_1_16 >= var_1_34) || var_1_7)) ? (var_1_20 == ((signed char) -8)) : 1) : (var_1_20 == ((signed char) var_1_22))))) && ((var_1_22 <= (var_1_36 + var_1_14)) ? (var_1_24 == ((float) (var_1_25 - (var_1_26 - (var_1_27 - var_1_28))))) : (var_1_24 == ((float) var_1_28)))) && ((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) >= var_1_19) ? (var_1_29 == ((signed char) ((((-1) > (var_1_22)) ? (-1) : (var_1_22))))) : 1)) && ((var_1_25 >= (var_1_26 - var_1_28)) ? (var_1_30 == ((float) ((((10.5f + var_1_28) < 0 ) ? -(10.5f + var_1_28) : (10.5f + var_1_28))))) : (var_1_30 == ((float) (var_1_31 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))))) && ((! var_1_9) ? (var_1_32 == ((unsigned long int) (((((var_1_33 - 25u)) > (32u)) ? ((var_1_33 - 25u)) : (32u))))) : 1)) && ((((var_1_26 - var_1_28) * var_1_23) == 5.75f) ? (var_1_34 == ((unsigned long int) ((((var_1_22) > ((last_1_var_1_34 + var_1_57))) ? (var_1_22) : ((last_1_var_1_34 + var_1_57)))))) : ((var_1_38 && (last_1_var_1_34 < var_1_58)) ? (var_1_34 == ((unsigned long int) 256u)) : (var_1_34 == ((unsigned long int) last_1_var_1_34))))) && (var_1_8 ? (var_1_35 == ((signed char) var_1_22)) : (var_1_35 == ((signed char) ((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))))))) && (((- var_1_12) < var_1_58) ? (var_1_36 == ((unsigned char) ((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - 5) - var_1_22))) : (var_1_36 == ((unsigned char) var_1_37)))) && (((var_1_14 > var_1_12) && var_1_62) ? ((var_1_18 < var_1_28) ? (var_1_38 == ((unsigned char) (var_1_7 || (var_1_10 && (var_1_6 || var_1_40))))) : 1) : 1)) && (var_1_6 ? ((var_1_12 < ((last_1_var_1_11 + last_1_var_1_44) + last_1_var_1_15)) ? ((((((((((var_1_16) < (last_1_var_1_34)) ? (var_1_16) : (last_1_var_1_34)))) > (var_1_37)) ? (((((var_1_16) < (last_1_var_1_34)) ? (var_1_16) : (last_1_var_1_34)))) : (var_1_37))) < (var_1_22 + (- var_1_12))) ? (var_1_41 == ((unsigned long int) ((((var_1_16) > (var_1_33)) ? (var_1_16) : (var_1_33))))) : (var_1_41 == ((unsigned long int) ((var_1_42 - last_1_var_1_32) - var_1_14)))) : ((var_1_22 >= (var_1_42 / var_1_37)) ? (var_1_41 == ((unsigned long int) (var_1_16 + var_1_14))) : (var_1_41 == ((unsigned long int) (((((var_1_42) < (var_1_33)) ? (var_1_42) : (var_1_33))) - var_1_13))))) : (var_1_41 == ((unsigned long int) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))) && ((var_1_23 <= var_1_19) ? (((((((last_1_var_1_34) < (last_1_var_1_55)) ? (last_1_var_1_34) : (last_1_var_1_55))) / var_1_37) == var_1_43) ? ((last_1_var_1_58 >= last_1_var_1_34) ? (var_1_44 == ((unsigned long int) (var_1_33 - last_1_var_1_53))) : (var_1_44 == ((unsigned long int) ((var_1_45 + ((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47)))) - ((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12))))))) : (var_1_44 == ((unsigned long int) ((((last_1_var_1_60) > (var_1_42)) ? (last_1_var_1_60) : (var_1_42)))))) : (((var_1_37 - (var_1_48 + var_1_49)) > (last_1_var_1_53 - var_1_14)) ? (var_1_44 == ((unsigned long int) ((((var_1_42) > (((((var_1_49) > ((var_1_45 + var_1_48))) ? (var_1_49) : ((var_1_45 + var_1_48)))))) ? (var_1_42) : (((((var_1_49) > ((var_1_45 + var_1_48))) ? (var_1_49) : ((var_1_45 + var_1_48))))))))) : (last_1_var_1_50 ? (var_1_44 == ((unsigned long int) ((var_1_47 - (last_1_var_1_53 + var_1_16)) + var_1_22))) : (var_1_44 == ((unsigned long int) (last_1_var_1_53 + last_1_var_1_60))))))) && ((var_1_32 > (var_1_53 + var_1_34)) ? (var_1_50 == ((unsigned char) (! var_1_7))) : (var_1_50 == ((unsigned char) ((var_1_51 || (var_1_62 && var_1_38)) && var_1_6))))) && ((var_1_27 > var_1_26) ? (var_1_51 == ((unsigned char) (var_1_10 && var_1_8))) : (var_1_62 ? (var_1_51 == ((unsigned char) (var_1_1 || var_1_8))) : 1))) && ((var_1_24 >= var_1_27) ? ((((((var_1_16) > (var_1_44)) ? (var_1_16) : (var_1_44))) < var_1_61) ? (var_1_53 == ((unsigned long int) (((((var_1_16) < (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) ? (var_1_16) : (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))))) + 100000u))) : 1) : ((var_1_51 || var_1_62) ? (var_1_53 == ((unsigned long int) (var_1_42 - (var_1_37 + var_1_49)))) : (var_1_53 == ((unsigned long int) ((((last_1_var_1_53) > ((var_1_47 + var_1_48))) ? (last_1_var_1_53) : ((var_1_47 + var_1_48))))))))) && (((var_1_53 / 256u) > (var_1_60 / 5u)) ? ((var_1_50 || var_1_38) ? (((var_1_40 && (var_1_44 > var_1_13)) || (! var_1_9)) ? (var_1_55 == ((unsigned long int) ((((var_1_45) > (var_1_48)) ? (var_1_45) : (var_1_48))))) : (var_1_55 == ((unsigned long int) (var_1_33 - var_1_32)))) : 1) : (var_1_55 == ((unsigned long int) (var_1_49 + ((((1000000000u) > (var_1_37)) ? (1000000000u) : (var_1_37)))))))) && (var_1_6 ? (var_1_56 == ((float) (((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25))) - var_1_27))) : 1)) && ((var_1_46 >= var_1_41) ? (var_1_57 == ((unsigned char) (var_1_48 + var_1_22))) : (var_1_57 == ((unsigned char) var_1_37)))) && (last_1_var_1_50 ? (var_1_58 == ((unsigned short int) var_1_16)) : 1)) && (var_1_7 ? (var_1_59 == ((signed short int) var_1_37)) : (var_1_59 == ((signed short int) var_1_49)))) && (var_1_10 ? (var_1_60 == ((unsigned short int) (10 + var_1_49))) : 1)) && (var_1_61 == ((unsigned char) 1))) && (last_1_var_1_50 ? (var_1_62 == ((unsigned char) (var_1_8 || var_1_9))) : (var_1_62 == ((unsigned char) ((last_1_var_1_62 && var_1_6) || var_1_40))))
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
