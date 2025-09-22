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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 999999999999.6;
double var_1_2 = 31.5;
signed char var_1_3 = -2;
double var_1_4 = 10.57;
double var_1_5 = 4.6;
double var_1_6 = 25.25;
signed char var_1_7 = 16;
signed char var_1_8 = -25;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 16;
signed long int var_1_12 = -16;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 64;
unsigned short int var_1_20 = 256;
double var_1_21 = 4.25;
signed short int var_1_22 = 32;
unsigned char var_1_23 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 64;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 128;
signed short int var_1_31 = 4;
signed long int var_1_32 = -2;
signed short int var_1_33 = 128;
unsigned char var_1_34 = 50;
signed long int var_1_35 = 256;
signed long int var_1_36 = -128;
double last_1_var_1_1 = 999999999999.6;
signed short int last_1_var_1_31 = 4;
signed long int last_1_var_1_32 = -2;
signed long int last_1_var_1_35 = 256;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((last_1_var_1_35) < 0 ) ? -(last_1_var_1_35) : (last_1_var_1_35));
 if ((last_1_var_1_1 * var_1_4) != (- ((((var_1_21) > (var_1_2)) ? (var_1_21) : (var_1_2))))) {
  if (stepLocal_0 > (var_1_11 - last_1_var_1_32)) {
   var_1_22 = var_1_19;
  } else {
   var_1_22 = var_1_7;
  }
 } else {
  var_1_22 = 128;
 }
 var_1_1 = (var_1_2 + (4.5 - 128.8));
 if (var_1_2 == (var_1_1 / var_1_4)) {
  if ((var_1_5 - var_1_6) <= var_1_2) {
   var_1_3 = (var_1_7 - 16);
  } else {
   var_1_3 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
  }
 }
 if (var_1_6 > var_1_2) {
  var_1_9 = (! var_1_10);
 } else {
  if (-100 != (var_1_7 / var_1_12)) {
   var_1_9 = var_1_13;
  } else {
   var_1_9 = (var_1_13 || (var_1_14 || var_1_15));
  }
 }
 if (! (var_1_13 && var_1_10)) {
  if ((var_1_5 * var_1_1) != (var_1_4 * var_1_6)) {
   var_1_16 = var_1_17;
  }
 }
 unsigned char stepLocal_1 = var_1_14;
 if (var_1_21 > var_1_5) {
  if (var_1_13 && stepLocal_1) {
   if (var_1_5 > var_1_4) {
    var_1_23 = ((var_1_9 || var_1_10) && var_1_25);
   }
  } else {
   var_1_23 = 1;
  }
 }
 var_1_33 = var_1_29;
 var_1_34 = var_1_30;
 var_1_35 = var_1_36;
 if (var_1_23) {
  var_1_18 = (((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + 2)) > (var_1_17)) ? ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + 2)) : (var_1_17)));
 }
 if ((var_1_5 / ((((var_1_4) > (var_1_21)) ? (var_1_4) : (var_1_21)))) < var_1_2) {
  var_1_20 = ((((var_1_19) < (((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))))) ? (var_1_19) : (((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))))));
 } else {
  var_1_20 = ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (var_1_18)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_18)));
 }
 signed long int stepLocal_2 = var_1_22 * var_1_7;
 if (stepLocal_2 < (var_1_35 / var_1_12)) {
  var_1_26 = (var_1_19 + var_1_29);
 } else {
  var_1_26 = var_1_30;
 }
 unsigned char stepLocal_5 = var_1_25;
 if (stepLocal_5 && var_1_23) {
  var_1_32 = (((((32 - 2)) < (var_1_17)) ? ((32 - 2)) : (var_1_17)));
 } else {
  var_1_32 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 signed long int stepLocal_4 = var_1_32 + var_1_11;
 signed short int stepLocal_3 = var_1_22;
 if (last_1_var_1_31 <= stepLocal_3) {
  if (((- var_1_6) + var_1_5) <= var_1_21) {
   if (stepLocal_4 >= (var_1_32 + var_1_17)) {
    var_1_31 = var_1_22;
   } else {
    var_1_31 = -10;
   }
  } else {
   var_1_31 = var_1_32;
  }
 } else {
  var_1_31 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -461168.6018427383000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483647);
 assume_abort_if_not(var_1_36 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_35 = var_1_35;
}
int property(void) {
 return (((((((((((((var_1_1 == ((double) (var_1_2 + (4.5 - 128.8)))) && ((var_1_2 == (var_1_1 / var_1_4)) ? (((var_1_5 - var_1_6) <= var_1_2) ? (var_1_3 == ((signed char) (var_1_7 - 16))) : (var_1_3 == ((signed char) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))))) : 1)) && ((var_1_6 > var_1_2) ? (var_1_9 == ((unsigned char) (! var_1_10))) : ((-100 != (var_1_7 / var_1_12)) ? (var_1_9 == ((unsigned char) var_1_13)) : (var_1_9 == ((unsigned char) (var_1_13 || (var_1_14 || var_1_15))))))) && ((! (var_1_13 && var_1_10)) ? (((var_1_5 * var_1_1) != (var_1_4 * var_1_6)) ? (var_1_16 == ((unsigned char) var_1_17)) : 1) : 1)) && (var_1_23 ? (var_1_18 == ((unsigned char) (((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + 2)) > (var_1_17)) ? ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) + 2)) : (var_1_17))))) : 1)) && (((var_1_5 / ((((var_1_4) > (var_1_21)) ? (var_1_4) : (var_1_21)))) < var_1_2) ? (var_1_20 == ((unsigned short int) ((((var_1_19) < (((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))))) ? (var_1_19) : (((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17)))))))) : (var_1_20 == ((unsigned short int) ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (var_1_18)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_18))))))) && (((last_1_var_1_1 * var_1_4) != (- ((((var_1_21) > (var_1_2)) ? (var_1_21) : (var_1_2))))) ? ((((((last_1_var_1_35) < 0 ) ? -(last_1_var_1_35) : (last_1_var_1_35))) > (var_1_11 - last_1_var_1_32)) ? (var_1_22 == ((signed short int) var_1_19)) : (var_1_22 == ((signed short int) var_1_7))) : (var_1_22 == ((signed short int) 128)))) && ((var_1_21 > var_1_5) ? ((var_1_13 && var_1_14) ? ((var_1_5 > var_1_4) ? (var_1_23 == ((unsigned char) ((var_1_9 || var_1_10) && var_1_25))) : 1) : (var_1_23 == ((unsigned char) 1))) : 1)) && (((var_1_22 * var_1_7) < (var_1_35 / var_1_12)) ? (var_1_26 == ((unsigned char) (var_1_19 + var_1_29))) : (var_1_26 == ((unsigned char) var_1_30)))) && ((last_1_var_1_31 <= var_1_22) ? ((((- var_1_6) + var_1_5) <= var_1_21) ? (((var_1_32 + var_1_11) >= (var_1_32 + var_1_17)) ? (var_1_31 == ((signed short int) var_1_22)) : (var_1_31 == ((signed short int) -10))) : (var_1_31 == ((signed short int) var_1_32))) : (var_1_31 == ((signed short int) var_1_8)))) && ((var_1_25 && var_1_23) ? (var_1_32 == ((signed long int) (((((32 - 2)) < (var_1_17)) ? ((32 - 2)) : (var_1_17))))) : (var_1_32 == ((signed long int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))) && (var_1_33 == ((signed short int) var_1_29))) && (var_1_34 == ((unsigned char) var_1_30))) && (var_1_35 == ((signed long int) var_1_36))
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
