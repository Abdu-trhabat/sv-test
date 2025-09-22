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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 15.175;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
double var_1_8 = 49.5;
double var_1_9 = 100000.8;
double var_1_10 = 64.75;
double var_1_11 = 0.4;
unsigned short int var_1_12 = 5;
signed long int var_1_14 = 4;
unsigned short int var_1_15 = 10;
unsigned long int var_1_16 = 0;
double var_1_17 = 2.625;
double var_1_18 = 1.75;
double var_1_19 = 9.4;
signed short int var_1_20 = -128;
signed short int var_1_21 = -500;
signed short int var_1_22 = 2;
signed short int var_1_23 = -32;
signed short int var_1_24 = -2;
signed short int var_1_25 = 32;
signed short int var_1_26 = 10000;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned short int var_1_29 = 200;
unsigned char var_1_30 = 10;
unsigned char var_1_31 = 2;
unsigned char var_1_32 = 25;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 25;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
float var_1_38 = 5.3;
float var_1_39 = 10000000000000.5;
float var_1_40 = 0.0;
float var_1_41 = 3.6;
unsigned char var_1_42 = 50;
double last_1_var_1_1 = 15.175;
double last_1_var_1_9 = 100000.8;
unsigned short int last_1_var_1_12 = 5;
unsigned long int last_1_var_1_16 = 0;
double last_1_var_1_17 = 2.625;
unsigned char last_1_var_1_27 = 1;
float last_1_var_1_38 = 5.3;
void initially(void) {
}
void step(void) {
 if (-32 <= (last_1_var_1_16 ^ ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) {
  if (((((var_1_8) > (32.25)) ? (var_1_8) : (32.25))) < last_1_var_1_9) {
   var_1_12 = var_1_15;
  } else {
   var_1_12 = 4;
  }
 } else {
  var_1_12 = var_1_15;
 }
 if (var_1_10 >= (((((15.4 * last_1_var_1_17)) < (var_1_11)) ? ((15.4 * last_1_var_1_17)) : (var_1_11)))) {
  if (last_1_var_1_27) {
   var_1_16 = last_1_var_1_12;
  }
 }
 unsigned char stepLocal_5 = var_1_28;
 signed long int stepLocal_4 = var_1_14;
 unsigned char stepLocal_3 = var_1_6;
 if (stepLocal_4 > var_1_32) {
  if (stepLocal_3 || var_1_28) {
   var_1_35 = ((var_1_7 && var_1_6) && var_1_28);
  }
 } else {
  if (((var_1_19 >= last_1_var_1_1) || (var_1_31 != last_1_var_1_16)) || stepLocal_5) {
   var_1_35 = (! (var_1_36 && var_1_37));
  } else {
   var_1_35 = var_1_28;
  }
 }
 var_1_27 = (var_1_35 && var_1_28);
 if (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) >= var_1_8) {
  var_1_17 = (var_1_18 + var_1_19);
 } else {
  if (var_1_35) {
   var_1_17 = var_1_19;
  } else {
   var_1_17 = var_1_18;
  }
 }
 if (var_1_35) {
  var_1_30 = var_1_31;
 } else {
  var_1_30 = (((((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) > (var_1_34)) ? (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) : (var_1_34))) + 16);
 }
 var_1_42 = var_1_32;
 if (var_1_16 <= var_1_12) {
  var_1_20 = ((((((var_1_21 + var_1_22)) > (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))) ? ((var_1_21 + var_1_22)) : (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))))) + (var_1_25 - (var_1_26 - 1)));
 } else {
  var_1_20 = var_1_23;
 }
 unsigned short int stepLocal_2 = var_1_15;
 unsigned long int stepLocal_1 = (var_1_12 + var_1_16) & var_1_16;
 unsigned char stepLocal_0 = var_1_28;
 if (stepLocal_0 || var_1_35) {
  if (var_1_28) {
   if (var_1_35) {
    if (stepLocal_1 >= (var_1_16 | var_1_15)) {
     if (-64 > stepLocal_2) {
      var_1_29 = var_1_25;
     }
    }
   }
  } else {
   var_1_29 = var_1_15;
  }
 } else {
  var_1_29 = var_1_15;
 }
 unsigned long int stepLocal_6 = var_1_16;
 if (((((var_1_29) > (((((var_1_33) < (var_1_32)) ? (var_1_33) : (var_1_32))))) ? (var_1_29) : (((((var_1_33) < (var_1_32)) ? (var_1_33) : (var_1_32)))))) > stepLocal_6) {
  var_1_38 = (var_1_19 + (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) - 1.25f));
 } else {
  var_1_38 = (var_1_39 - (var_1_40 - var_1_41));
 }
 if ((var_1_10 - var_1_11) < last_1_var_1_38) {
  if (last_1_var_1_38 >= var_1_10) {
   var_1_9 = var_1_8;
  }
 }
 if (((((var_1_9) < ((var_1_9 * last_1_var_1_1))) ? (var_1_9) : ((var_1_9 * last_1_var_1_1)))) >= var_1_9) {
  if (var_1_35) {
   if (! var_1_27) {
    var_1_1 = ((((8.125) < (var_1_8)) ? (8.125) : (var_1_8)));
   }
  }
 } else {
  var_1_1 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483647);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -8191);
 assume_abort_if_not(var_1_21 <= 8192);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -8191);
 assume_abort_if_not(var_1_22 <= 8191);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -16383);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -16383);
 assume_abort_if_not(var_1_24 <= 16383);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 8191);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 4611686.018427383000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_38 = var_1_38;
}
int property(void) {
 return ((((((((((((((((var_1_9) < ((var_1_9 * last_1_var_1_1))) ? (var_1_9) : ((var_1_9 * last_1_var_1_1)))) >= var_1_9) ? (var_1_35 ? ((! var_1_27) ? (var_1_1 == ((double) ((((8.125) < (var_1_8)) ? (8.125) : (var_1_8))))) : 1) : 1) : (var_1_1 == ((double) var_1_8))) && (((var_1_10 - var_1_11) < last_1_var_1_38) ? ((last_1_var_1_38 >= var_1_10) ? (var_1_9 == ((double) var_1_8)) : 1) : 1)) && ((-32 <= (last_1_var_1_16 ^ ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) ? ((((((var_1_8) > (32.25)) ? (var_1_8) : (32.25))) < last_1_var_1_9) ? (var_1_12 == ((unsigned short int) var_1_15)) : (var_1_12 == ((unsigned short int) 4))) : (var_1_12 == ((unsigned short int) var_1_15)))) && ((var_1_10 >= (((((15.4 * last_1_var_1_17)) < (var_1_11)) ? ((15.4 * last_1_var_1_17)) : (var_1_11)))) ? (last_1_var_1_27 ? (var_1_16 == ((unsigned long int) last_1_var_1_12)) : 1) : 1)) && ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) >= var_1_8) ? (var_1_17 == ((double) (var_1_18 + var_1_19))) : (var_1_35 ? (var_1_17 == ((double) var_1_19)) : (var_1_17 == ((double) var_1_18))))) && ((var_1_16 <= var_1_12) ? (var_1_20 == ((signed short int) ((((((var_1_21 + var_1_22)) > (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))) ? ((var_1_21 + var_1_22)) : (((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))))) + (var_1_25 - (var_1_26 - 1))))) : (var_1_20 == ((signed short int) var_1_23)))) && (var_1_27 == ((unsigned char) (var_1_35 && var_1_28)))) && ((var_1_28 || var_1_35) ? (var_1_28 ? (var_1_35 ? ((((var_1_12 + var_1_16) & var_1_16) >= (var_1_16 | var_1_15)) ? ((-64 > var_1_15) ? (var_1_29 == ((unsigned short int) var_1_25)) : 1) : 1) : 1) : (var_1_29 == ((unsigned short int) var_1_15))) : (var_1_29 == ((unsigned short int) var_1_15)))) && (var_1_35 ? (var_1_30 == ((unsigned char) var_1_31)) : (var_1_30 == ((unsigned char) (((((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) > (var_1_34)) ? (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) : (var_1_34))) + 16))))) && ((var_1_14 > var_1_32) ? ((var_1_6 || var_1_28) ? (var_1_35 == ((unsigned char) ((var_1_7 && var_1_6) && var_1_28))) : 1) : ((((var_1_19 >= last_1_var_1_1) || (var_1_31 != last_1_var_1_16)) || var_1_28) ? (var_1_35 == ((unsigned char) (! (var_1_36 && var_1_37)))) : (var_1_35 == ((unsigned char) var_1_28))))) && ((((((var_1_29) > (((((var_1_33) < (var_1_32)) ? (var_1_33) : (var_1_32))))) ? (var_1_29) : (((((var_1_33) < (var_1_32)) ? (var_1_33) : (var_1_32)))))) > var_1_16) ? (var_1_38 == ((float) (var_1_19 + (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) - 1.25f)))) : (var_1_38 == ((float) (var_1_39 - (var_1_40 - var_1_41)))))) && (var_1_42 == ((unsigned char) var_1_32))
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
