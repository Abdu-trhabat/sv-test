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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 5;
unsigned char var_1_10 = 25;
double var_1_11 = 4.45;
double var_1_12 = 127.25;
double var_1_13 = 49.845;
double var_1_14 = 127.8;
unsigned char var_1_15 = 64;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 50;
unsigned long int var_1_19 = 0;
signed short int var_1_21 = 5;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 8;
float var_1_24 = 16.4;
unsigned long int var_1_25 = 5;
unsigned long int var_1_26 = 3289965930;
unsigned long int var_1_27 = 3747195770;
signed short int var_1_28 = 32;
double var_1_29 = 63.9;
double var_1_30 = 127.8;
double var_1_31 = 63.6;
double var_1_32 = 0.9;
double var_1_33 = 127.875;
double var_1_34 = 10.5;
double var_1_35 = 0.8;
double var_1_36 = 128.8;
double var_1_37 = 2.2;
double var_1_38 = 2.5;
unsigned char last_1_var_1_1 = 1;
double last_1_var_1_11 = 4.45;
unsigned char last_1_var_1_15 = 64;
unsigned long int last_1_var_1_19 = 0;
signed short int last_1_var_1_21 = 5;
unsigned long int last_1_var_1_25 = 5;
signed short int last_1_var_1_28 = 32;
double last_1_var_1_30 = 127.8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_5 = (((last_1_var_1_19) > (128u)) ? (last_1_var_1_19) : (128u));
 signed long int stepLocal_4 = last_1_var_1_28;
 if (var_1_27 >= stepLocal_5) {
  var_1_30 = (var_1_31 + ((((((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))));
 } else {
  if (var_1_17 > stepLocal_4) {
   if (last_1_var_1_11 <= var_1_31) {
    var_1_30 = ((128.5 + (9.75 + var_1_35)) - var_1_13);
   } else {
    var_1_30 = ((((var_1_12) > ((var_1_14 - (var_1_35 + var_1_36)))) ? (var_1_12) : ((var_1_14 - (var_1_35 + var_1_36)))));
   }
  } else {
   if (! last_1_var_1_1) {
    if (last_1_var_1_1) {
     var_1_30 = var_1_37;
    } else {
     var_1_30 = var_1_38;
    }
   } else {
    var_1_30 = var_1_12;
   }
  }
 }
 if (! (var_1_2 || var_1_3)) {
  var_1_1 = (var_1_4 || var_1_5);
 } else {
  var_1_1 = var_1_6;
 }
 signed long int stepLocal_0 = -8;
 if (stepLocal_0 <= (-1 ^ var_1_10)) {
  var_1_11 = (var_1_12 - var_1_13);
 } else {
  var_1_11 = (var_1_14 - var_1_13);
 }
 unsigned char stepLocal_2 = var_1_17 != (var_1_22 - var_1_23);
 if (stepLocal_2 && ((last_1_var_1_21 + 5) > var_1_18)) {
  var_1_21 = var_1_18;
 } else {
  var_1_21 = var_1_10;
 }
 if (var_1_14 >= var_1_12) {
  var_1_24 = (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) < 0 ) ? -((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) : ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))));
 } else {
  if (var_1_30 > var_1_14) {
   var_1_24 = var_1_13;
  } else {
   var_1_24 = 1.75f;
  }
 }
 if (var_1_13 > var_1_14) {
  if (last_1_var_1_11 > (last_1_var_1_30 / ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) {
   if (last_1_var_1_1) {
    var_1_28 = last_1_var_1_21;
   } else {
    var_1_28 = var_1_18;
   }
  } else {
   var_1_28 = var_1_17;
  }
 } else {
  var_1_28 = last_1_var_1_21;
 }
 if (0.5 < var_1_11) {
  if (var_1_11 >= var_1_30) {
   if (! var_1_1) {
    var_1_7 = var_1_10;
   }
  } else {
   var_1_7 = var_1_10;
  }
 } else {
  var_1_7 = 64;
 }
 signed long int stepLocal_3 = (((var_1_7) > (var_1_17)) ? (var_1_7) : (var_1_17));
 if (stepLocal_3 <= ((((var_1_28) > (last_1_var_1_25)) ? (var_1_28) : (last_1_var_1_25)))) {
  var_1_25 = (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) - ((((var_1_17) > (last_1_var_1_25)) ? (var_1_17) : (last_1_var_1_25))));
 } else {
  var_1_25 = var_1_23;
 }
 if (var_1_18 < (- var_1_21)) {
  if (1 > var_1_18) {
   var_1_19 = var_1_25;
  }
 }
 signed long int stepLocal_1 = - (var_1_10 + var_1_7);
 if (last_1_var_1_15 <= stepLocal_1) {
  var_1_15 = var_1_10;
 } else {
  var_1_15 = ((((var_1_10) < ((((((var_1_17 - 16)) < (var_1_18)) ? ((var_1_17 - 16)) : (var_1_18))))) ? (var_1_10) : ((((((var_1_17 - 16)) < (var_1_18)) ? ((var_1_17 - 16)) : (var_1_18))))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 255);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_30 = var_1_30;
}
int property(void) {
 return ((((((((((! (var_1_2 || var_1_3)) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : (var_1_1 == ((unsigned char) var_1_6))) && ((0.5 < var_1_11) ? ((var_1_11 >= var_1_30) ? ((! var_1_1) ? (var_1_7 == ((unsigned char) var_1_10)) : 1) : (var_1_7 == ((unsigned char) var_1_10))) : (var_1_7 == ((unsigned char) 64)))) && ((-8 <= (-1 ^ var_1_10)) ? (var_1_11 == ((double) (var_1_12 - var_1_13))) : (var_1_11 == ((double) (var_1_14 - var_1_13))))) && ((last_1_var_1_15 <= (- (var_1_10 + var_1_7))) ? (var_1_15 == ((unsigned char) var_1_10)) : (var_1_15 == ((unsigned char) ((((var_1_10) < ((((((var_1_17 - 16)) < (var_1_18)) ? ((var_1_17 - 16)) : (var_1_18))))) ? (var_1_10) : ((((((var_1_17 - 16)) < (var_1_18)) ? ((var_1_17 - 16)) : (var_1_18)))))))))) && ((var_1_18 < (- var_1_21)) ? ((1 > var_1_18) ? (var_1_19 == ((unsigned long int) var_1_25)) : 1) : 1)) && (((var_1_17 != (var_1_22 - var_1_23)) && ((last_1_var_1_21 + 5) > var_1_18)) ? (var_1_21 == ((signed short int) var_1_18)) : (var_1_21 == ((signed short int) var_1_10)))) && ((var_1_14 >= var_1_12) ? (var_1_24 == ((float) (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) < 0 ) ? -((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) : ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) : ((var_1_30 > var_1_14) ? (var_1_24 == ((float) var_1_13)) : (var_1_24 == ((float) 1.75f))))) && ((((((var_1_7) > (var_1_17)) ? (var_1_7) : (var_1_17))) <= ((((var_1_28) > (last_1_var_1_25)) ? (var_1_28) : (last_1_var_1_25)))) ? (var_1_25 == ((unsigned long int) (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) - ((((var_1_17) > (last_1_var_1_25)) ? (var_1_17) : (last_1_var_1_25)))))) : (var_1_25 == ((unsigned long int) var_1_23)))) && ((var_1_13 > var_1_14) ? ((last_1_var_1_11 > (last_1_var_1_30 / ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) ? (last_1_var_1_1 ? (var_1_28 == ((signed short int) last_1_var_1_21)) : (var_1_28 == ((signed short int) var_1_18))) : (var_1_28 == ((signed short int) var_1_17))) : (var_1_28 == ((signed short int) last_1_var_1_21)))) && ((var_1_27 >= ((((last_1_var_1_19) > (128u)) ? (last_1_var_1_19) : (128u)))) ? (var_1_30 == ((double) (var_1_31 + ((((((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))))))) : ((var_1_17 > last_1_var_1_28) ? ((last_1_var_1_11 <= var_1_31) ? (var_1_30 == ((double) ((128.5 + (9.75 + var_1_35)) - var_1_13))) : (var_1_30 == ((double) ((((var_1_12) > ((var_1_14 - (var_1_35 + var_1_36)))) ? (var_1_12) : ((var_1_14 - (var_1_35 + var_1_36)))))))) : ((! last_1_var_1_1) ? (last_1_var_1_1 ? (var_1_30 == ((double) var_1_37)) : (var_1_30 == ((double) var_1_38))) : (var_1_30 == ((double) var_1_12)))))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
