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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Amount100.c", 13, "reach_error"); }
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
signed char var_1_3 = -4;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 37230;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned short int var_1_13 = 31000;
unsigned short int var_1_14 = 4;
signed char var_1_15 = 32;
signed char var_1_16 = 10;
signed char var_1_17 = -10;
signed char var_1_18 = 50;
unsigned char var_1_19 = 50;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 5;
signed short int var_1_22 = 32;
double var_1_23 = 32.1;
double var_1_24 = 25.8;
double var_1_25 = 127.3;
signed short int var_1_26 = 23297;
unsigned char var_1_27 = 100;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 128;
signed long int var_1_31 = -100;
unsigned short int var_1_32 = 256;
signed long int var_1_33 = 5;
double var_1_34 = 2.5;
unsigned short int var_1_36 = 16;
unsigned short int last_1_var_1_6 = 5;
unsigned short int last_1_var_1_9 = 2;
signed char last_1_var_1_15 = 32;
unsigned char last_1_var_1_27 = 100;
signed long int last_1_var_1_33 = 5;
unsigned short int last_1_var_1_36 = 16;
void initially(void) {
}
void step(void) {
 if (var_1_7) {
  var_1_31 = (var_1_29 - (last_1_var_1_6 + 16));
 } else {
  if (last_1_var_1_15 >= (var_1_28 - 32)) {
   var_1_31 = ((var_1_17 + (var_1_8 - 1000)) + ((((last_1_var_1_27) < (var_1_16)) ? (last_1_var_1_27) : (var_1_16))));
  } else {
   var_1_31 = var_1_17;
  }
 }
 signed long int stepLocal_2 = var_1_31;
 if ((- var_1_31) > stepLocal_2) {
  var_1_19 = (var_1_20 - var_1_21);
 } else {
  if (var_1_10) {
   var_1_19 = var_1_5;
  } else {
   var_1_19 = var_1_21;
  }
 }
 if (var_1_7) {
  var_1_36 = ((((last_1_var_1_36) < (var_1_26)) ? (last_1_var_1_36) : (var_1_26)));
 } else {
  var_1_36 = (var_1_8 - (var_1_13 - var_1_31));
 }
 if ((last_1_var_1_9 / ((((8) < (var_1_3)) ? (8) : (var_1_3)))) >= last_1_var_1_33) {
  if (! (var_1_3 >= last_1_var_1_9)) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = 5;
  }
 }
 if (var_1_13 == var_1_14) {
  var_1_15 = ((-5 + (var_1_16 + var_1_17)) + var_1_18);
 } else {
  if ((var_1_13 <= var_1_8) || var_1_10) {
   var_1_15 = -32;
  }
 }
 if ((- (var_1_23 + var_1_24)) >= (49.6 / var_1_25)) {
  var_1_22 = (((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))) - var_1_19);
 } else {
  var_1_22 = ((var_1_26 - (var_1_21 + var_1_20)) - var_1_5);
 }
 if (var_1_10) {
  var_1_32 = (((var_1_13 - var_1_28) - var_1_30) + 5);
 }
 if (var_1_7) {
  var_1_6 = ((((var_1_19) < ((var_1_8 - var_1_5))) ? (var_1_19) : ((var_1_8 - var_1_5))));
 }
 signed long int stepLocal_3 = 8;
 if (var_1_36 > stepLocal_3) {
  var_1_27 = (((((var_1_20 - (var_1_28 - var_1_29))) > ((var_1_30 - var_1_21))) ? ((var_1_20 - (var_1_28 - var_1_29))) : ((var_1_30 - var_1_21))));
 } else {
  var_1_27 = var_1_29;
 }
 unsigned char stepLocal_5 = var_1_11;
 unsigned char stepLocal_4 = var_1_1;
 if ((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) - var_1_34) >= 32.33) {
  if (stepLocal_5 && (var_1_36 < (var_1_20 + var_1_32))) {
   if (stepLocal_4 < var_1_36) {
    var_1_33 = var_1_30;
   }
  } else {
   var_1_33 = var_1_28;
  }
 } else {
  var_1_33 = var_1_13;
 }
 signed long int stepLocal_1 = (((-2) > (var_1_1)) ? (-2) : (var_1_1));
 signed long int stepLocal_0 = var_1_33;
 if (var_1_8 <= stepLocal_0) {
  var_1_9 = ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8)));
 } else {
  if ((- var_1_33) <= stepLocal_1) {
   var_1_9 = (var_1_1 + ((var_1_13 - var_1_5) - var_1_14));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 24575);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -15);
 assume_abort_if_not(var_1_16 <= 16);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -15);
 assume_abort_if_not(var_1_17 <= 15);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 127);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 16382);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 63);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 127);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_36 = var_1_36;
}
int property(void) {
 return ((((((((((((last_1_var_1_9 / ((((8) < (var_1_3)) ? (8) : (var_1_3)))) >= last_1_var_1_33) ? ((! (var_1_3 >= last_1_var_1_9)) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 5))) : 1) && (var_1_7 ? (var_1_6 == ((unsigned short int) ((((var_1_19) < ((var_1_8 - var_1_5))) ? (var_1_19) : ((var_1_8 - var_1_5)))))) : 1)) && ((var_1_8 <= var_1_33) ? (var_1_9 == ((unsigned short int) ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))))) : (((- var_1_33) <= ((((-2) > (var_1_1)) ? (-2) : (var_1_1)))) ? (var_1_9 == ((unsigned short int) (var_1_1 + ((var_1_13 - var_1_5) - var_1_14)))) : 1))) && ((var_1_13 == var_1_14) ? (var_1_15 == ((signed char) ((-5 + (var_1_16 + var_1_17)) + var_1_18))) : (((var_1_13 <= var_1_8) || var_1_10) ? (var_1_15 == ((signed char) -32)) : 1))) && (((- var_1_31) > var_1_31) ? (var_1_19 == ((unsigned char) (var_1_20 - var_1_21))) : (var_1_10 ? (var_1_19 == ((unsigned char) var_1_5)) : (var_1_19 == ((unsigned char) var_1_21))))) && (((- (var_1_23 + var_1_24)) >= (49.6 / var_1_25)) ? (var_1_22 == ((signed short int) (((((var_1_20) < (var_1_5)) ? (var_1_20) : (var_1_5))) - var_1_19))) : (var_1_22 == ((signed short int) ((var_1_26 - (var_1_21 + var_1_20)) - var_1_5))))) && ((var_1_36 > 8) ? (var_1_27 == ((unsigned char) (((((var_1_20 - (var_1_28 - var_1_29))) > ((var_1_30 - var_1_21))) ? ((var_1_20 - (var_1_28 - var_1_29))) : ((var_1_30 - var_1_21)))))) : (var_1_27 == ((unsigned char) var_1_29)))) && (var_1_7 ? (var_1_31 == ((signed long int) (var_1_29 - (last_1_var_1_6 + 16)))) : ((last_1_var_1_15 >= (var_1_28 - 32)) ? (var_1_31 == ((signed long int) ((var_1_17 + (var_1_8 - 1000)) + ((((last_1_var_1_27) < (var_1_16)) ? (last_1_var_1_27) : (var_1_16)))))) : (var_1_31 == ((signed long int) var_1_17))))) && (var_1_10 ? (var_1_32 == ((unsigned short int) (((var_1_13 - var_1_28) - var_1_30) + 5))) : 1)) && (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) - var_1_34) >= 32.33) ? ((var_1_11 && (var_1_36 < (var_1_20 + var_1_32))) ? ((var_1_1 < var_1_36) ? (var_1_33 == ((signed long int) var_1_30)) : 1) : (var_1_33 == ((signed long int) var_1_28))) : (var_1_33 == ((signed long int) var_1_13)))) && (var_1_7 ? (var_1_36 == ((unsigned short int) ((((last_1_var_1_36) < (var_1_26)) ? (last_1_var_1_36) : (var_1_26))))) : (var_1_36 == ((unsigned short int) (var_1_8 - (var_1_13 - var_1_31)))))
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
