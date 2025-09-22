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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
signed long int var_1_4 = -16;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 5;
signed short int var_1_9 = 8;
signed long int var_1_10 = -1;
double var_1_11 = 1.85;
float var_1_12 = 10.375;
float var_1_13 = 7.5;
float var_1_14 = 128.125;
float var_1_15 = 999999.7;
signed long int var_1_16 = 8;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 16;
unsigned short int var_1_21 = 5;
unsigned short int var_1_23 = 61585;
signed short int var_1_24 = -10000;
unsigned short int var_1_25 = 16936;
signed short int var_1_26 = 8;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 8;
signed long int var_1_31 = 25;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 4;
unsigned char last_1_var_1_17 = 1;
unsigned long int last_1_var_1_20 = 16;
unsigned short int last_1_var_1_21 = 5;
signed short int last_1_var_1_24 = -10000;
signed long int last_1_var_1_31 = 25;
unsigned char last_1_var_1_33 = 1;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = ((((last_1_var_1_20) > (var_1_6)) ? (last_1_var_1_20) : (var_1_6))) / var_1_10;
 if (last_1_var_1_31 == stepLocal_1) {
  var_1_17 = (! (var_1_18 && (! var_1_19)));
 } else {
  if (last_1_var_1_33) {
   var_1_17 = var_1_19;
  }
 }
 signed long int stepLocal_2 = (var_1_23 - var_1_6) - last_1_var_1_24;
 if (var_1_13 == var_1_11) {
  if (last_1_var_1_31 <= stepLocal_2) {
   var_1_21 = var_1_8;
  }
 }
 var_1_20 = ((((last_1_var_1_21) < (64u)) ? (last_1_var_1_21) : (64u)));
 if (var_1_4 <= ((var_1_7 + var_1_8) / var_1_10)) {
  if (7.5 >= var_1_11) {
   var_1_9 = var_1_7;
  } else {
   var_1_9 = var_1_8;
  }
 }
 unsigned char stepLocal_6 = var_1_8;
 if (stepLocal_6 <= var_1_6) {
  if (var_1_19) {
   var_1_33 = ((! var_1_32) || (! var_1_18));
  }
 } else {
  var_1_33 = (var_1_28 || (! (var_1_32 && var_1_18)));
 }
 if (last_1_var_1_33) {
  if (last_1_var_1_17) {
   var_1_1 = (16 - 2);
  } else {
   var_1_1 = var_1_4;
  }
 }
 unsigned long int stepLocal_3 = ~ var_1_20;
 if ((var_1_23 - (var_1_25 - var_1_7)) <= stepLocal_3) {
  if (var_1_18) {
   var_1_24 = (((((var_1_1 - (var_1_8 + var_1_26))) < (var_1_23)) ? ((var_1_1 - (var_1_8 + var_1_26))) : (var_1_23)));
  }
 }
 unsigned short int stepLocal_4 = var_1_21;
 if (! var_1_17) {
  if (stepLocal_4 >= var_1_20) {
   var_1_27 = (var_1_19 || ((var_1_4 <= var_1_10) && var_1_28));
  }
 }
 if (var_1_27) {
  var_1_5 = ((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8))));
 }
 if (var_1_27) {
  var_1_12 = ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)));
 } else {
  var_1_12 = ((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > (var_1_15)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_15)));
 }
 unsigned short int stepLocal_0 = var_1_21;
 if (var_1_12 > (- (var_1_13 + var_1_11))) {
  var_1_16 = var_1_7;
 } else {
  if (stepLocal_0 <= var_1_7) {
   var_1_16 = var_1_21;
  } else {
   var_1_16 = var_1_6;
  }
 }
 unsigned long int stepLocal_5 = (((var_1_24) < (var_1_20)) ? (var_1_24) : (var_1_20));
 if (stepLocal_5 >= var_1_26) {
  var_1_29 = var_1_30;
 }
 if ((var_1_1 * (var_1_1 + var_1_23)) >= (var_1_7 * (-1 - var_1_21))) {
  if (var_1_19 || var_1_27) {
   var_1_31 = (var_1_8 + var_1_24);
  } else {
   var_1_31 = (var_1_26 + var_1_25);
  }
 }
 if (var_1_4 <= var_1_23) {
  if (var_1_31 > var_1_7) {
   var_1_34 = var_1_30;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483647);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 49151);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_33 = var_1_33;
}
int property(void) {
 return (((((((((((((last_1_var_1_33 ? (last_1_var_1_17 ? (var_1_1 == ((signed long int) (16 - 2))) : (var_1_1 == ((signed long int) var_1_4))) : 1) && (var_1_27 ? (var_1_5 == ((unsigned char) ((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8)))))) : 1)) && ((var_1_4 <= ((var_1_7 + var_1_8) / var_1_10)) ? ((7.5 >= var_1_11) ? (var_1_9 == ((signed short int) var_1_7)) : (var_1_9 == ((signed short int) var_1_8))) : 1)) && (var_1_27 ? (var_1_12 == ((float) ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))))) : (var_1_12 == ((float) ((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > (var_1_15)) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : (var_1_15))))))) && ((var_1_12 > (- (var_1_13 + var_1_11))) ? (var_1_16 == ((signed long int) var_1_7)) : ((var_1_21 <= var_1_7) ? (var_1_16 == ((signed long int) var_1_21)) : (var_1_16 == ((signed long int) var_1_6))))) && ((last_1_var_1_31 == (((((last_1_var_1_20) > (var_1_6)) ? (last_1_var_1_20) : (var_1_6))) / var_1_10)) ? (var_1_17 == ((unsigned char) (! (var_1_18 && (! var_1_19))))) : (last_1_var_1_33 ? (var_1_17 == ((unsigned char) var_1_19)) : 1))) && (var_1_20 == ((unsigned long int) ((((last_1_var_1_21) < (64u)) ? (last_1_var_1_21) : (64u)))))) && ((var_1_13 == var_1_11) ? ((last_1_var_1_31 <= ((var_1_23 - var_1_6) - last_1_var_1_24)) ? (var_1_21 == ((unsigned short int) var_1_8)) : 1) : 1)) && (((var_1_23 - (var_1_25 - var_1_7)) <= (~ var_1_20)) ? (var_1_18 ? (var_1_24 == ((signed short int) (((((var_1_1 - (var_1_8 + var_1_26))) < (var_1_23)) ? ((var_1_1 - (var_1_8 + var_1_26))) : (var_1_23))))) : 1) : 1)) && ((! var_1_17) ? ((var_1_21 >= var_1_20) ? (var_1_27 == ((unsigned char) (var_1_19 || ((var_1_4 <= var_1_10) && var_1_28)))) : 1) : 1)) && ((((((var_1_24) < (var_1_20)) ? (var_1_24) : (var_1_20))) >= var_1_26) ? (var_1_29 == ((unsigned char) var_1_30)) : 1)) && (((var_1_1 * (var_1_1 + var_1_23)) >= (var_1_7 * (-1 - var_1_21))) ? ((var_1_19 || var_1_27) ? (var_1_31 == ((signed long int) (var_1_8 + var_1_24))) : (var_1_31 == ((signed long int) (var_1_26 + var_1_25)))) : 1)) && ((var_1_8 <= var_1_6) ? (var_1_19 ? (var_1_33 == ((unsigned char) ((! var_1_32) || (! var_1_18)))) : 1) : (var_1_33 == ((unsigned char) (var_1_28 || (! (var_1_32 && var_1_18))))))) && ((var_1_4 <= var_1_23) ? ((var_1_31 > var_1_7) ? (var_1_34 == ((unsigned char) var_1_30)) : 1) : 1)
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
