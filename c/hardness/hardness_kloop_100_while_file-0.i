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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
double var_1_2 = 99999999999.3;
double var_1_3 = 1.7;
double var_1_4 = 16.75;
signed short int var_1_5 = -64;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 3089346389;
unsigned long int var_1_8 = 50;
unsigned long int var_1_9 = 1;
signed char var_1_10 = -128;
unsigned char var_1_11 = 1;
signed char var_1_12 = 4;
signed char var_1_13 = -4;
signed char var_1_14 = 64;
signed char var_1_15 = 25;
signed char var_1_16 = 50;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
double var_1_20 = 99.4;
double var_1_21 = 64.4;
unsigned long int var_1_22 = 64;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed long int var_1_25 = -256;
signed char var_1_26 = 5;
signed char var_1_27 = 2;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 64;
double var_1_30 = 32.8;
unsigned char var_1_31 = 0;
unsigned long int var_1_32 = 200;
float var_1_34 = 64.6;
float var_1_35 = 100000.2;
float var_1_36 = 1.5;
float var_1_37 = 499.5;
float var_1_38 = 24.66;
signed long int var_1_39 = -50;
unsigned char var_1_40 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_2 < (1.2 / 9.5)) {
  var_1_6 = (var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))));
 } else {
  var_1_6 = 2u;
 }
 unsigned char stepLocal_2 = var_1_18;
 if (var_1_11 || stepLocal_2) {
  var_1_17 = (var_1_14 + var_1_15);
 } else {
  var_1_17 = (var_1_19 - var_1_16);
 }
 var_1_20 = var_1_21;
 var_1_25 = (((((var_1_6 + -2)) < (64)) ? ((var_1_6 + -2)) : (64)));
 signed char stepLocal_4 = var_1_15;
 if ((- var_1_14) > stepLocal_4) {
  var_1_26 = (var_1_27 + var_1_15);
 } else {
  var_1_26 = var_1_15;
 }
 if ((var_1_27 / 10) > var_1_13) {
  var_1_28 = (((((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) < 0 ) ? -((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) : ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) < (var_1_15)) ? ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) < 0 ) ? -((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) : ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) : (var_1_15)));
 } else {
  var_1_28 = var_1_14;
 }
 unsigned char stepLocal_5 = var_1_28;
 if (var_1_14 < stepLocal_5) {
  var_1_32 = (((((var_1_19 + var_1_16)) > (var_1_8)) ? ((var_1_19 + var_1_16)) : (var_1_8)));
 } else {
  var_1_32 = var_1_31;
 }
 var_1_39 = var_1_31;
 var_1_40 = 0;
 if ((var_1_2 - var_1_3) == (- var_1_20)) {
  if (var_1_3 <= ((var_1_20 * 1.5) + 127.4)) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = -64;
  }
 } else {
  var_1_1 = 100;
 }
 signed short int stepLocal_3 = var_1_5;
 if (stepLocal_3 >= (var_1_32 + var_1_7)) {
  var_1_22 = ((((var_1_14) > (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_14) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))));
 } else {
  if (((((var_1_2) < (var_1_20)) ? (var_1_2) : (var_1_20))) <= var_1_20) {
   var_1_22 = var_1_9;
  }
 }
 if (var_1_25 < var_1_19) {
  var_1_23 = (! 1);
 } else {
  var_1_23 = (! var_1_24);
 }
 if (var_1_4 > var_1_30) {
  var_1_29 = (var_1_19 - var_1_15);
 } else {
  if (var_1_12 == (var_1_39 / var_1_14)) {
   var_1_29 = (var_1_14 + (var_1_15 + var_1_31));
  } else {
   var_1_29 = (var_1_19 - var_1_31);
  }
 }
 if (5 < var_1_12) {
  if (var_1_24 || var_1_23) {
   if (var_1_1 >= var_1_14) {
    var_1_34 = ((((((((var_1_21) > (var_1_35)) ? (var_1_21) : (var_1_35)))) < ((var_1_36 - (var_1_37 + var_1_38)))) ? (((((var_1_21) > (var_1_35)) ? (var_1_21) : (var_1_35)))) : ((var_1_36 - (var_1_37 + var_1_38)))));
   }
  }
 } else {
  var_1_34 = var_1_21;
 }
 unsigned long int stepLocal_1 = var_1_7;
 unsigned char stepLocal_0 = var_1_20 == var_1_2;
 if (var_1_23 && stepLocal_0) {
  if (stepLocal_1 == var_1_8) {
   var_1_10 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
  } else {
   var_1_10 = ((var_1_14 - var_1_15) - var_1_16);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 2147483647);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 62);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((((((var_1_2 - var_1_3) == (- var_1_20)) ? ((var_1_3 <= ((var_1_20 * 1.5) + 127.4)) ? (var_1_1 == ((signed short int) var_1_5)) : (var_1_1 == ((signed short int) -64))) : (var_1_1 == ((signed short int) 100))) && ((var_1_2 < (1.2 / 9.5)) ? (var_1_6 == ((unsigned long int) (var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))) : (var_1_6 == ((unsigned long int) 2u)))) && ((var_1_23 && (var_1_20 == var_1_2)) ? ((var_1_7 == var_1_8) ? (var_1_10 == ((signed char) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : (var_1_10 == ((signed char) ((var_1_14 - var_1_15) - var_1_16)))) : 1)) && ((var_1_11 || var_1_18) ? (var_1_17 == ((unsigned char) (var_1_14 + var_1_15))) : (var_1_17 == ((unsigned char) (var_1_19 - var_1_16))))) && (var_1_20 == ((double) var_1_21))) && ((var_1_5 >= (var_1_32 + var_1_7)) ? (var_1_22 == ((unsigned long int) ((((var_1_14) > (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_14) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))) : ((((((var_1_2) < (var_1_20)) ? (var_1_2) : (var_1_20))) <= var_1_20) ? (var_1_22 == ((unsigned long int) var_1_9)) : 1))) && ((var_1_25 < var_1_19) ? (var_1_23 == ((unsigned char) (! 1))) : (var_1_23 == ((unsigned char) (! var_1_24))))) && (var_1_25 == ((signed long int) (((((var_1_6 + -2)) < (64)) ? ((var_1_6 + -2)) : (64)))))) && (((- var_1_14) > var_1_15) ? (var_1_26 == ((signed char) (var_1_27 + var_1_15))) : (var_1_26 == ((signed char) var_1_15)))) && (((var_1_27 / 10) > var_1_13) ? (var_1_28 == ((unsigned char) (((((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) < 0 ) ? -((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) : ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) < (var_1_15)) ? ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) < 0 ) ? -((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) : ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) : (var_1_15))))) : (var_1_28 == ((unsigned char) var_1_14)))) && ((var_1_4 > var_1_30) ? (var_1_29 == ((unsigned char) (var_1_19 - var_1_15))) : ((var_1_12 == (var_1_39 / var_1_14)) ? (var_1_29 == ((unsigned char) (var_1_14 + (var_1_15 + var_1_31)))) : (var_1_29 == ((unsigned char) (var_1_19 - var_1_31)))))) && ((var_1_14 < var_1_28) ? (var_1_32 == ((unsigned long int) (((((var_1_19 + var_1_16)) > (var_1_8)) ? ((var_1_19 + var_1_16)) : (var_1_8))))) : (var_1_32 == ((unsigned long int) var_1_31)))) && ((5 < var_1_12) ? ((var_1_24 || var_1_23) ? ((var_1_1 >= var_1_14) ? (var_1_34 == ((float) ((((((((var_1_21) > (var_1_35)) ? (var_1_21) : (var_1_35)))) < ((var_1_36 - (var_1_37 + var_1_38)))) ? (((((var_1_21) > (var_1_35)) ? (var_1_21) : (var_1_35)))) : ((var_1_36 - (var_1_37 + var_1_38))))))) : 1) : 1) : (var_1_34 == ((float) var_1_21)))) && (var_1_39 == ((signed long int) var_1_31))) && (var_1_40 == ((unsigned char) 0))
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
