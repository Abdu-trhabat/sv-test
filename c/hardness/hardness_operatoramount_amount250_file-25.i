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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch25Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -64;
signed long int var_1_4 = -256;
signed char var_1_5 = 64;
signed char var_1_6 = -16;
signed char var_1_7 = -32;
signed long int var_1_8 = 200;
double var_1_9 = 31.6;
double var_1_10 = 1.5;
signed long int var_1_11 = -5;
unsigned short int var_1_13 = 64;
unsigned short int var_1_14 = 37410;
float var_1_15 = 4.5;
float var_1_16 = 3.48;
float var_1_17 = 15.2;
float var_1_18 = 4.25;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 4;
signed short int var_1_23 = 128;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned long int var_1_27 = 0;
unsigned long int var_1_28 = 1881328613;
unsigned long int var_1_29 = 2077296343;
signed char var_1_30 = -1;
signed char var_1_31 = 1;
signed char var_1_32 = 2;
signed char var_1_33 = 32;
signed char var_1_34 = 4;
signed long int var_1_35 = 64;
signed long int var_1_36 = 1824231205;
signed char var_1_37 = -1;
unsigned long int var_1_38 = 3387086541;
double var_1_39 = 99999999999.25;
double var_1_40 = 255.5;
double var_1_41 = 25.5;
unsigned short int var_1_42 = 256;
signed char var_1_43 = 0;
signed long int var_1_44 = -200;
float var_1_46 = 16.5;
float var_1_47 = 0.0;
float var_1_48 = 9.5;
float var_1_49 = 63.8;
float var_1_50 = 0.0;
float var_1_51 = 3.2;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
signed short int var_1_54 = 1;
unsigned char var_1_55 = 0;
float var_1_57 = 9.25;
float var_1_58 = 0.0;
float var_1_59 = 64.6;
float var_1_60 = 64.375;
float var_1_61 = 200.25;
signed char var_1_63 = 16;
float var_1_64 = 3.7;
unsigned char var_1_65 = 16;
unsigned long int var_1_66 = 0;
double var_1_67 = 99.9;
signed short int var_1_68 = 16;
unsigned short int var_1_69 = 32;
unsigned short int var_1_71 = 31409;
signed long int last_1_var_1_8 = 200;
signed long int last_1_var_1_11 = -5;
unsigned short int last_1_var_1_13 = 64;
signed short int last_1_var_1_23 = 128;
unsigned long int last_1_var_1_27 = 0;
signed long int last_1_var_1_35 = 64;
signed long int last_1_var_1_44 = -200;
float last_1_var_1_57 = 9.25;
unsigned char last_1_var_1_65 = 16;
unsigned long int last_1_var_1_66 = 0;
unsigned short int last_1_var_1_69 = 32;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_9 = last_1_var_1_44;
 unsigned short int stepLocal_8 = var_1_14;
 if (var_1_29 <= stepLocal_8) {
  var_1_55 = var_1_53;
 } else {
  if (((((last_1_var_1_65) > (var_1_36)) ? (last_1_var_1_65) : (var_1_36))) > stepLocal_9) {
   var_1_55 = (! 0);
  }
 }
 if (var_1_55) {
  var_1_30 = (var_1_31 - (var_1_32 + (var_1_33 - var_1_34)));
 } else {
  var_1_30 = (var_1_7 + (var_1_34 + 4));
 }
 if (var_1_25) {
  var_1_66 = last_1_var_1_69;
 } else {
  var_1_66 = last_1_var_1_8;
 }
 signed char stepLocal_5 = var_1_7;
 if (stepLocal_5 <= (var_1_66 * last_1_var_1_23)) {
  var_1_23 = var_1_7;
 }
 if (var_1_25) {
  var_1_35 = ((((((var_1_36) > (1681572688)) ? (var_1_36) : (1681572688))) - (var_1_14 + last_1_var_1_23)) - last_1_var_1_27);
 } else {
  if ((var_1_38 - 4u) < last_1_var_1_35) {
   var_1_35 = last_1_var_1_65;
  } else {
   if (last_1_var_1_23 != var_1_4) {
    var_1_35 = last_1_var_1_65;
   } else {
    var_1_35 = ((1718673321 - var_1_14) - (((((last_1_var_1_35 + var_1_34)) > (var_1_33)) ? ((last_1_var_1_35 + var_1_34)) : (var_1_33))));
   }
  }
 }
 unsigned long int stepLocal_13 = var_1_29;
 if (var_1_35 < stepLocal_13) {
  var_1_65 = var_1_33;
 }
 var_1_13 = (var_1_14 - var_1_65);
 if (var_1_26) {
  var_1_27 = ((((((((last_1_var_1_66) > (last_1_var_1_11)) ? (last_1_var_1_66) : (last_1_var_1_11)))) > (((var_1_28 + var_1_29) - last_1_var_1_13))) ? (((((last_1_var_1_66) > (last_1_var_1_11)) ? (last_1_var_1_66) : (last_1_var_1_11)))) : (((var_1_28 + var_1_29) - last_1_var_1_13))));
 } else {
  var_1_27 = ((((last_1_var_1_66) < (var_1_14)) ? (last_1_var_1_66) : (var_1_14)));
 }
 var_1_5 = (var_1_6 + var_1_7);
 unsigned short int stepLocal_3 = var_1_13;
 if (stepLocal_3 < -32) {
  var_1_15 = (var_1_16 - ((((var_1_17 - var_1_18) < 0 ) ? -(var_1_17 - var_1_18) : (var_1_17 - var_1_18))));
 }
 var_1_39 = (var_1_40 + var_1_41);
 if (var_1_26 || (var_1_27 >= (~ var_1_6))) {
  var_1_43 = (((((var_1_7) < (var_1_33)) ? (var_1_7) : (var_1_33))) + var_1_6);
 }
 var_1_52 = var_1_53;
 if (! var_1_20) {
  var_1_63 = (var_1_32 - ((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33))));
 } else {
  var_1_63 = ((((var_1_6) < (((((var_1_34) > ((var_1_32 + var_1_33))) ? (var_1_34) : ((var_1_32 + var_1_33)))))) ? (var_1_6) : (((((var_1_34) > ((var_1_32 + var_1_33))) ? (var_1_34) : ((var_1_32 + var_1_33)))))));
 }
 if (! var_1_20) {
  var_1_64 = ((((var_1_51) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_51) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))));
 }
 var_1_67 = var_1_49;
 unsigned char stepLocal_6 = var_1_52;
 if (var_1_20 && stepLocal_6) {
  var_1_24 = (var_1_20 || (var_1_25 || var_1_26));
 } else {
  var_1_24 = (var_1_52 && (var_1_25 && var_1_20));
 }
 if (var_1_25) {
  var_1_46 = ((var_1_47 - ((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49)))) - (var_1_50 - var_1_51));
 } else {
  if ((var_1_48 + var_1_64) <= var_1_51) {
   var_1_46 = ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)));
  }
 }
 if (var_1_24) {
  var_1_11 = (var_1_7 + var_1_4);
 }
 signed char stepLocal_15 = var_1_30;
 unsigned long int stepLocal_14 = var_1_66;
 if (var_1_11 < stepLocal_15) {
  var_1_69 = (16 + var_1_13);
 } else {
  if (var_1_14 > stepLocal_14) {
   var_1_69 = ((var_1_71 - var_1_34) + var_1_11);
  } else {
   var_1_69 = var_1_33;
  }
 }
 if (var_1_55) {
  var_1_68 = var_1_69;
 } else {
  var_1_68 = var_1_6;
 }
 signed long int stepLocal_0 = var_1_35 + var_1_11;
 if (! (var_1_11 >= var_1_35)) {
  if (256 != stepLocal_0) {
   var_1_1 = (((((var_1_4 + -25)) > (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? ((var_1_4 + -25)) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))));
  }
 } else {
  var_1_1 = var_1_4;
 }
 var_1_42 = var_1_1;
 if ((var_1_33 + last_1_var_1_44) > var_1_35) {
  var_1_44 = ((((((var_1_11 + last_1_var_1_44) + var_1_27)) > (((((var_1_68) < (((((0) < (var_1_33)) ? (0) : (var_1_33))))) ? (var_1_68) : (((((0) < (var_1_33)) ? (0) : (var_1_33)))))))) ? (((var_1_11 + last_1_var_1_44) + var_1_27)) : (((((var_1_68) < (((((0) < (var_1_33)) ? (0) : (var_1_33))))) ? (var_1_68) : (((((0) < (var_1_33)) ? (0) : (var_1_33)))))))));
 }
 unsigned long int stepLocal_12 = var_1_28;
 signed short int stepLocal_11 = var_1_23;
 signed char stepLocal_10 = var_1_32;
 if (var_1_51 >= ((- var_1_16) + (var_1_40 + 7.4f))) {
  if (! (! var_1_26)) {
   var_1_57 = (((var_1_58 - var_1_59) - var_1_51) + (var_1_60 + var_1_61));
  } else {
   if (stepLocal_10 != var_1_42) {
    if (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) >= stepLocal_11) {
     var_1_57 = (((((var_1_48) > (var_1_58)) ? (var_1_48) : (var_1_58))) + (var_1_49 - var_1_51));
    } else {
     var_1_57 = (((((var_1_58 + var_1_59)) > (var_1_47)) ? ((var_1_58 + var_1_59)) : (var_1_47)));
    }
   } else {
    if (var_1_47 == last_1_var_1_57) {
     var_1_57 = (var_1_60 + 16.5f);
    } else {
     if (var_1_37 <= stepLocal_12) {
      if (var_1_20) {
       var_1_57 = (3.5f - var_1_48);
      } else {
       if (var_1_60 < var_1_41) {
        var_1_57 = (var_1_41 + var_1_58);
       } else {
        var_1_57 = (((((var_1_58 - var_1_50)) < (127.525f)) ? ((var_1_58 - var_1_50)) : (127.525f)));
       }
      }
     } else {
      var_1_57 = (((((var_1_61 + (var_1_48 - var_1_51))) > ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + (var_1_58 - 8.825f)))) ? ((var_1_61 + (var_1_48 - var_1_51))) : ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + (var_1_58 - 8.825f)))));
     }
    }
   }
  }
 } else {
  var_1_57 = (var_1_49 - (((((var_1_50) > (var_1_47)) ? (var_1_50) : (var_1_47))) - 3.6f));
 }
 signed long int stepLocal_7 = 256 + 5;
 if (var_1_50 > var_1_57) {
  if ((var_1_34 - var_1_33) > stepLocal_7) {
   var_1_54 = (var_1_31 - var_1_32);
  } else {
   var_1_54 = (var_1_34 - (var_1_27 + (var_1_32 + var_1_33)));
  }
 } else {
  var_1_54 = (var_1_33 - var_1_32);
 }
 signed char stepLocal_2 = var_1_6;
 signed long int stepLocal_1 = var_1_1;
 if (stepLocal_2 >= var_1_1) {
  var_1_8 = (-32 + (var_1_54 - var_1_1));
 } else {
  if (128.25 < (- (var_1_9 + var_1_10))) {
   if (stepLocal_1 >= var_1_4) {
    var_1_8 = ((((((((var_1_54) < (var_1_7)) ? (var_1_54) : (var_1_7)))) < (var_1_6)) ? (((((var_1_54) < (var_1_7)) ? (var_1_54) : (var_1_7)))) : (var_1_6)));
   }
  }
 }
 signed long int stepLocal_4 = var_1_8;
 if (stepLocal_4 == var_1_27) {
  var_1_19 = (! (! 0));
 } else {
  var_1_19 = var_1_20;
 }
 if (! var_1_55) {
  if ((var_1_14 * var_1_8) > 128) {
   var_1_21 = (var_1_6 + 200);
  }
 } else {
  if (var_1_17 < var_1_67) {
   var_1_21 = (((((((((var_1_66 - var_1_54)) > (-10000)) ? ((var_1_66 - var_1_54)) : (-10000)))) > (var_1_6)) ? ((((((var_1_66 - var_1_54)) > (-10000)) ? ((var_1_66 - var_1_54)) : (-10000)))) : (var_1_6)));
  } else {
   if (var_1_18 > var_1_67) {
    if (var_1_55) {
     var_1_21 = (((var_1_42 + var_1_54) + var_1_66) + var_1_7);
    }
   } else {
    var_1_21 = var_1_42;
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741823);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 1073741824);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -1);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 31);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 31);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 1073741822);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -128);
 assume_abort_if_not(var_1_37 <= 127);
 assume_abort_if_not(var_1_37 != 0);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967295);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 4611686.018427383000e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 4611686.018427383000e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 2305843.009213691400e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -230584.3009213691400e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -230584.3009213691400e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 16383);
 assume_abort_if_not(var_1_71 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_69 = var_1_69;
}
int property(void) {
 return (((((((((((((((((((((((((((((! (var_1_11 >= var_1_35)) ? ((256 != (var_1_35 + var_1_11)) ? (var_1_1 == ((signed long int) (((((var_1_4 + -25)) > (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? ((var_1_4 + -25)) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))))) : 1) : (var_1_1 == ((signed long int) var_1_4))) && (var_1_5 == ((signed char) (var_1_6 + var_1_7)))) && ((var_1_6 >= var_1_1) ? (var_1_8 == ((signed long int) (-32 + (var_1_54 - var_1_1)))) : ((128.25 < (- (var_1_9 + var_1_10))) ? ((var_1_1 >= var_1_4) ? (var_1_8 == ((signed long int) ((((((((var_1_54) < (var_1_7)) ? (var_1_54) : (var_1_7)))) < (var_1_6)) ? (((((var_1_54) < (var_1_7)) ? (var_1_54) : (var_1_7)))) : (var_1_6))))) : 1) : 1))) && (var_1_24 ? (var_1_11 == ((signed long int) (var_1_7 + var_1_4))) : 1)) && (var_1_13 == ((unsigned short int) (var_1_14 - var_1_65)))) && ((var_1_13 < -32) ? (var_1_15 == ((float) (var_1_16 - ((((var_1_17 - var_1_18) < 0 ) ? -(var_1_17 - var_1_18) : (var_1_17 - var_1_18)))))) : 1)) && ((var_1_8 == var_1_27) ? (var_1_19 == ((unsigned char) (! (! 0)))) : (var_1_19 == ((unsigned char) var_1_20)))) && ((! var_1_55) ? (((var_1_14 * var_1_8) > 128) ? (var_1_21 == ((signed short int) (var_1_6 + 200))) : 1) : ((var_1_17 < var_1_67) ? (var_1_21 == ((signed short int) (((((((((var_1_66 - var_1_54)) > (-10000)) ? ((var_1_66 - var_1_54)) : (-10000)))) > (var_1_6)) ? ((((((var_1_66 - var_1_54)) > (-10000)) ? ((var_1_66 - var_1_54)) : (-10000)))) : (var_1_6))))) : ((var_1_18 > var_1_67) ? (var_1_55 ? (var_1_21 == ((signed short int) (((var_1_42 + var_1_54) + var_1_66) + var_1_7))) : 1) : (var_1_21 == ((signed short int) var_1_42)))))) && ((var_1_7 <= (var_1_66 * last_1_var_1_23)) ? (var_1_23 == ((signed short int) var_1_7)) : 1)) && ((var_1_20 && var_1_52) ? (var_1_24 == ((unsigned char) (var_1_20 || (var_1_25 || var_1_26)))) : (var_1_24 == ((unsigned char) (var_1_52 && (var_1_25 && var_1_20)))))) && (var_1_26 ? (var_1_27 == ((unsigned long int) ((((((((last_1_var_1_66) > (last_1_var_1_11)) ? (last_1_var_1_66) : (last_1_var_1_11)))) > (((var_1_28 + var_1_29) - last_1_var_1_13))) ? (((((last_1_var_1_66) > (last_1_var_1_11)) ? (last_1_var_1_66) : (last_1_var_1_11)))) : (((var_1_28 + var_1_29) - last_1_var_1_13)))))) : (var_1_27 == ((unsigned long int) ((((last_1_var_1_66) < (var_1_14)) ? (last_1_var_1_66) : (var_1_14))))))) && (var_1_55 ? (var_1_30 == ((signed char) (var_1_31 - (var_1_32 + (var_1_33 - var_1_34))))) : (var_1_30 == ((signed char) (var_1_7 + (var_1_34 + 4)))))) && (var_1_25 ? (var_1_35 == ((signed long int) ((((((var_1_36) > (1681572688)) ? (var_1_36) : (1681572688))) - (var_1_14 + last_1_var_1_23)) - last_1_var_1_27))) : (((var_1_38 - 4u) < last_1_var_1_35) ? (var_1_35 == ((signed long int) last_1_var_1_65)) : ((last_1_var_1_23 != var_1_4) ? (var_1_35 == ((signed long int) last_1_var_1_65)) : (var_1_35 == ((signed long int) ((1718673321 - var_1_14) - (((((last_1_var_1_35 + var_1_34)) > (var_1_33)) ? ((last_1_var_1_35 + var_1_34)) : (var_1_33)))))))))) && (var_1_39 == ((double) (var_1_40 + var_1_41)))) && (var_1_42 == ((unsigned short int) var_1_1))) && ((var_1_26 || (var_1_27 >= (~ var_1_6))) ? (var_1_43 == ((signed char) (((((var_1_7) < (var_1_33)) ? (var_1_7) : (var_1_33))) + var_1_6))) : 1)) && (((var_1_33 + last_1_var_1_44) > var_1_35) ? (var_1_44 == ((signed long int) ((((((var_1_11 + last_1_var_1_44) + var_1_27)) > (((((var_1_68) < (((((0) < (var_1_33)) ? (0) : (var_1_33))))) ? (var_1_68) : (((((0) < (var_1_33)) ? (0) : (var_1_33)))))))) ? (((var_1_11 + last_1_var_1_44) + var_1_27)) : (((((var_1_68) < (((((0) < (var_1_33)) ? (0) : (var_1_33))))) ? (var_1_68) : (((((0) < (var_1_33)) ? (0) : (var_1_33))))))))))) : 1)) && (var_1_25 ? (var_1_46 == ((float) ((var_1_47 - ((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49)))) - (var_1_50 - var_1_51)))) : (((var_1_48 + var_1_64) <= var_1_51) ? (var_1_46 == ((float) ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))))) : 1))) && (var_1_52 == ((unsigned char) var_1_53))) && ((var_1_50 > var_1_57) ? (((var_1_34 - var_1_33) > (256 + 5)) ? (var_1_54 == ((signed short int) (var_1_31 - var_1_32))) : (var_1_54 == ((signed short int) (var_1_34 - (var_1_27 + (var_1_32 + var_1_33)))))) : (var_1_54 == ((signed short int) (var_1_33 - var_1_32))))) && ((var_1_29 <= var_1_14) ? (var_1_55 == ((unsigned char) var_1_53)) : ((((((last_1_var_1_65) > (var_1_36)) ? (last_1_var_1_65) : (var_1_36))) > last_1_var_1_44) ? (var_1_55 == ((unsigned char) (! 0))) : 1))) && ((var_1_51 >= ((- var_1_16) + (var_1_40 + 7.4f))) ? ((! (! var_1_26)) ? (var_1_57 == ((float) (((var_1_58 - var_1_59) - var_1_51) + (var_1_60 + var_1_61)))) : ((var_1_32 != var_1_42) ? ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) >= var_1_23) ? (var_1_57 == ((float) (((((var_1_48) > (var_1_58)) ? (var_1_48) : (var_1_58))) + (var_1_49 - var_1_51)))) : (var_1_57 == ((float) (((((var_1_58 + var_1_59)) > (var_1_47)) ? ((var_1_58 + var_1_59)) : (var_1_47)))))) : ((var_1_47 == last_1_var_1_57) ? (var_1_57 == ((float) (var_1_60 + 16.5f))) : ((var_1_37 <= var_1_28) ? (var_1_20 ? (var_1_57 == ((float) (3.5f - var_1_48))) : ((var_1_60 < var_1_41) ? (var_1_57 == ((float) (var_1_41 + var_1_58))) : (var_1_57 == ((float) (((((var_1_58 - var_1_50)) < (127.525f)) ? ((var_1_58 - var_1_50)) : (127.525f))))))) : (var_1_57 == ((float) (((((var_1_61 + (var_1_48 - var_1_51))) > ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + (var_1_58 - 8.825f)))) ? ((var_1_61 + (var_1_48 - var_1_51))) : ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + (var_1_58 - 8.825f))))))))))) : (var_1_57 == ((float) (var_1_49 - (((((var_1_50) > (var_1_47)) ? (var_1_50) : (var_1_47))) - 3.6f)))))) && ((! var_1_20) ? (var_1_63 == ((signed char) (var_1_32 - ((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33)))))) : (var_1_63 == ((signed char) ((((var_1_6) < (((((var_1_34) > ((var_1_32 + var_1_33))) ? (var_1_34) : ((var_1_32 + var_1_33)))))) ? (var_1_6) : (((((var_1_34) > ((var_1_32 + var_1_33))) ? (var_1_34) : ((var_1_32 + var_1_33))))))))))) && ((! var_1_20) ? (var_1_64 == ((float) ((((var_1_51) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_51) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))))))) : 1)) && ((var_1_35 < var_1_29) ? (var_1_65 == ((unsigned char) var_1_33)) : 1)) && (var_1_25 ? (var_1_66 == ((unsigned long int) last_1_var_1_69)) : (var_1_66 == ((unsigned long int) last_1_var_1_8)))) && (var_1_67 == ((double) var_1_49))) && (var_1_55 ? (var_1_68 == ((signed short int) var_1_69)) : (var_1_68 == ((signed short int) var_1_6)))) && ((var_1_11 < var_1_30) ? (var_1_69 == ((unsigned short int) (16 + var_1_13))) : ((var_1_14 > var_1_66) ? (var_1_69 == ((unsigned short int) ((var_1_71 - var_1_34) + var_1_11))) : (var_1_69 == ((unsigned short int) var_1_33))))
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
