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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -4;
signed long int var_1_2 = -32;
signed long int var_1_3 = -5;
signed short int var_1_4 = -16;
signed short int var_1_5 = -8;
unsigned char var_1_6 = 1;
signed short int var_1_8 = 10;
unsigned long int var_1_9 = 2201536560;
unsigned long int var_1_10 = 2;
double var_1_11 = 10.5;
double var_1_12 = 7.2;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 50;
unsigned short int var_1_16 = 57115;
unsigned short int var_1_17 = 64;
unsigned short int var_1_18 = 0;
unsigned short int var_1_19 = 32;
signed short int var_1_20 = -1;
signed short int var_1_21 = 1;
signed short int var_1_22 = 4;
signed short int var_1_23 = 5;
signed short int var_1_24 = 10;
signed short int var_1_25 = 0;
unsigned long int var_1_26 = 50;
signed char var_1_27 = 0;
signed char var_1_28 = -10;
signed char var_1_29 = 4;
signed char var_1_30 = 16;
signed long int var_1_31 = 0;
unsigned char var_1_32 = 10;
double var_1_33 = 256.8;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 50;
unsigned char var_1_38 = 32;
unsigned char var_1_39 = 10;
unsigned short int var_1_40 = 10;
unsigned short int last_1_var_1_19 = 32;
unsigned long int last_1_var_1_26 = 50;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_5 = last_1_var_1_26 >= last_1_var_1_19;
 unsigned long int stepLocal_4 = last_1_var_1_26;
 if (stepLocal_4 != -16) {
  var_1_13 = 0;
 } else {
  if (stepLocal_5 || var_1_6) {
   var_1_13 = 0;
  } else {
   var_1_13 = var_1_14;
  }
 }
 unsigned char stepLocal_6 = var_1_13;
 if (var_1_13) {
  if ((var_1_14 && (var_1_10 < var_1_17)) && stepLocal_6) {
   var_1_19 = var_1_18;
  } else {
   var_1_19 = var_1_17;
  }
 } else {
  var_1_19 = var_1_18;
 }
 signed long int stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = var_1_3;
 if (var_1_2 == stepLocal_0) {
  if (stepLocal_1 <= var_1_2) {
   var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  if (var_1_13) {
   if (var_1_13) {
    var_1_1 = var_1_5;
   } else {
    var_1_1 = var_1_4;
   }
  } else {
   var_1_1 = var_1_5;
  }
 }
 if (! var_1_13) {
  var_1_15 = (((((var_1_16 - var_1_17)) > (var_1_18)) ? ((var_1_16 - var_1_17)) : (var_1_18)));
 }
 if (7.7 <= (var_1_12 * var_1_11)) {
  var_1_20 = (var_1_21 - (var_1_22 + var_1_23));
 } else {
  var_1_20 = ((128 + var_1_24) + var_1_22);
 }
 unsigned short int stepLocal_7 = var_1_16;
 if (stepLocal_7 <= var_1_17) {
  var_1_26 = ((((4u) < (var_1_18)) ? (4u) : (var_1_18)));
 } else {
  var_1_26 = var_1_23;
 }
 if (var_1_18 <= (var_1_10 / var_1_16)) {
  var_1_27 = (((((var_1_28 + var_1_29)) > (var_1_30)) ? ((var_1_28 + var_1_29)) : (var_1_30)));
 } else {
  var_1_27 = var_1_30;
 }
 var_1_31 = (var_1_26 + (((((var_1_23 - var_1_22)) > ((-5 + var_1_30))) ? ((var_1_23 - var_1_22)) : ((-5 + var_1_30)))));
 if (var_1_12 < (64.25 - var_1_33)) {
  if (! (var_1_13 || var_1_14)) {
   if (var_1_31 < var_1_26) {
    var_1_32 = (((((128 - var_1_34)) < (var_1_35)) ? ((128 - var_1_34)) : (var_1_35)));
   } else {
    var_1_32 = (var_1_36 - ((var_1_37 - var_1_38) + var_1_39));
   }
  }
 } else {
  var_1_32 = var_1_36;
 }
 var_1_40 = var_1_18;
 unsigned long int stepLocal_3 = ((((var_1_9 - var_1_10)) > (var_1_31)) ? ((var_1_9 - var_1_10)) : (var_1_31));
 unsigned char stepLocal_2 = var_1_13;
 if (stepLocal_3 < var_1_26) {
  if ((var_1_11 / 1.3) <= var_1_12) {
   if (((var_1_31 * var_1_4) >= var_1_5) && stepLocal_2) {
    var_1_8 = -8;
   } else {
    var_1_8 = var_1_5;
   }
  } else {
   var_1_8 = -16;
  }
 } else {
  var_1_8 = var_1_4;
 }
 if (var_1_1 > (var_1_22 + var_1_31)) {
  var_1_25 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 } else {
  if (var_1_26 >= (- var_1_26)) {
   var_1_25 = var_1_5;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 32766);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -8191);
 assume_abort_if_not(var_1_24 <= 8191);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -63);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -63);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 127);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 32);
 assume_abort_if_not(var_1_37 <= 64);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 32);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_26 = var_1_26;
}
int property(void) {
 return ((((((((((((var_1_2 == var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed short int) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((signed short int) var_1_5))) : (var_1_13 ? (var_1_13 ? (var_1_1 == ((signed short int) var_1_5)) : (var_1_1 == ((signed short int) var_1_4))) : (var_1_1 == ((signed short int) var_1_5)))) && (((((((var_1_9 - var_1_10)) > (var_1_31)) ? ((var_1_9 - var_1_10)) : (var_1_31))) < var_1_26) ? (((var_1_11 / 1.3) <= var_1_12) ? ((((var_1_31 * var_1_4) >= var_1_5) && var_1_13) ? (var_1_8 == ((signed short int) -8)) : (var_1_8 == ((signed short int) var_1_5))) : (var_1_8 == ((signed short int) -16))) : (var_1_8 == ((signed short int) var_1_4)))) && ((last_1_var_1_26 != -16) ? (var_1_13 == ((unsigned char) 0)) : (((last_1_var_1_26 >= last_1_var_1_19) || var_1_6) ? (var_1_13 == ((unsigned char) 0)) : (var_1_13 == ((unsigned char) var_1_14))))) && ((! var_1_13) ? (var_1_15 == ((unsigned short int) (((((var_1_16 - var_1_17)) > (var_1_18)) ? ((var_1_16 - var_1_17)) : (var_1_18))))) : 1)) && (var_1_13 ? (((var_1_14 && (var_1_10 < var_1_17)) && var_1_13) ? (var_1_19 == ((unsigned short int) var_1_18)) : (var_1_19 == ((unsigned short int) var_1_17))) : (var_1_19 == ((unsigned short int) var_1_18)))) && ((7.7 <= (var_1_12 * var_1_11)) ? (var_1_20 == ((signed short int) (var_1_21 - (var_1_22 + var_1_23)))) : (var_1_20 == ((signed short int) ((128 + var_1_24) + var_1_22))))) && ((var_1_1 > (var_1_22 + var_1_31)) ? (var_1_25 == ((signed short int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : ((var_1_26 >= (- var_1_26)) ? (var_1_25 == ((signed short int) var_1_5)) : 1))) && ((var_1_16 <= var_1_17) ? (var_1_26 == ((unsigned long int) ((((4u) < (var_1_18)) ? (4u) : (var_1_18))))) : (var_1_26 == ((unsigned long int) var_1_23)))) && ((var_1_18 <= (var_1_10 / var_1_16)) ? (var_1_27 == ((signed char) (((((var_1_28 + var_1_29)) > (var_1_30)) ? ((var_1_28 + var_1_29)) : (var_1_30))))) : (var_1_27 == ((signed char) var_1_30)))) && (var_1_31 == ((signed long int) (var_1_26 + (((((var_1_23 - var_1_22)) > ((-5 + var_1_30))) ? ((var_1_23 - var_1_22)) : ((-5 + var_1_30)))))))) && ((var_1_12 < (64.25 - var_1_33)) ? ((! (var_1_13 || var_1_14)) ? ((var_1_31 < var_1_26) ? (var_1_32 == ((unsigned char) (((((128 - var_1_34)) < (var_1_35)) ? ((128 - var_1_34)) : (var_1_35))))) : (var_1_32 == ((unsigned char) (var_1_36 - ((var_1_37 - var_1_38) + var_1_39))))) : 1) : (var_1_32 == ((unsigned char) var_1_36)))) && (var_1_40 == ((unsigned short int) var_1_18))
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
