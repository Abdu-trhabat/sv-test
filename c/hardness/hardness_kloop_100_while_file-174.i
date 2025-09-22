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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
signed short int var_1_4 = -128;
float var_1_5 = 10.75;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
float var_1_10 = 1000000000.625;
float var_1_11 = 25.25;
float var_1_12 = 100000000000.5;
float var_1_13 = 32.25;
float var_1_14 = 128.5;
double var_1_15 = 9.5;
double var_1_16 = 10.8;
double var_1_17 = 2.5;
float var_1_18 = 1.6;
float var_1_19 = 9.75;
unsigned char var_1_20 = 10;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 50;
unsigned short int var_1_25 = 8;
unsigned char var_1_26 = 100;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 8;
unsigned long int var_1_29 = 8;
float var_1_30 = 25.35;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 128;
double var_1_33 = 16.8;
signed long int last_1_var_1_1 = -1;
signed short int last_1_var_1_4 = -128;
float last_1_var_1_5 = 10.75;
float last_1_var_1_18 = 1.6;
unsigned char last_1_var_1_20 = 10;
unsigned char last_1_var_1_31 = 4;
void initially(void) {
}
void step(void) {
 if ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) / var_1_30) < var_1_10) {
  var_1_29 = ((((last_1_var_1_20) < (256u)) ? (last_1_var_1_20) : (256u)));
 } else {
  if ((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) / ((((var_1_30) > (var_1_19)) ? (var_1_30) : (var_1_19)))) == 7.5f) {
   var_1_29 = last_1_var_1_31;
  }
 }
 unsigned char stepLocal_5 = var_1_7;
 signed long int stepLocal_4 = (var_1_26 + var_1_27) - var_1_28;
 if (stepLocal_4 > (last_1_var_1_31 * last_1_var_1_1)) {
  if (stepLocal_5 && (last_1_var_1_18 > var_1_11)) {
   var_1_25 = var_1_28;
  }
 } else {
  var_1_25 = last_1_var_1_31;
 }
 signed long int stepLocal_6 = var_1_24 + (var_1_32 - var_1_23);
 if (var_1_25 <= stepLocal_6) {
  var_1_31 = var_1_23;
 }
 if (var_1_12 < var_1_10) {
  var_1_15 = (var_1_14 + (var_1_16 - var_1_17));
 } else {
  if (! var_1_6) {
   var_1_15 = var_1_14;
  } else {
   var_1_15 = var_1_10;
  }
 }
 if ((var_1_16 / var_1_19) > (- var_1_17)) {
  var_1_18 = (((((((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12)))) < (var_1_10)) ? (((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12)))) : (var_1_10))) - ((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))));
 } else {
  if (var_1_16 >= var_1_14) {
   var_1_18 = var_1_11;
  } else {
   var_1_18 = var_1_14;
  }
 }
 unsigned long int stepLocal_2 = var_1_29;
 unsigned short int stepLocal_1 = var_1_25;
 unsigned long int stepLocal_0 = var_1_29 + var_1_25;
 if (stepLocal_0 != -8) {
  if (stepLocal_1 > var_1_29) {
   var_1_1 = var_1_25;
  } else {
   var_1_1 = (var_1_25 - ((((10) > (var_1_29)) ? (10) : (var_1_29))));
  }
 } else {
  if (((((-16) < 0 ) ? -(-16) : (-16))) > stepLocal_2) {
   var_1_1 = (var_1_29 - var_1_25);
  }
 }
 unsigned long int stepLocal_3 = (((((((var_1_25) > (var_1_29)) ? (var_1_25) : (var_1_29)))) < (var_1_1)) ? (((((var_1_25) > (var_1_29)) ? (var_1_25) : (var_1_29)))) : (var_1_1));
 if (stepLocal_3 < (((((var_1_31) < (var_1_1)) ? (var_1_31) : (var_1_1))) * (~ var_1_29))) {
  var_1_20 = (var_1_23 + var_1_24);
 }
 if (var_1_20 < 64) {
  if (var_1_20 <= (var_1_29 | last_1_var_1_4)) {
   var_1_4 = last_1_var_1_4;
  }
 }
 if (var_1_4 != var_1_29) {
  if (var_1_6) {
   if (9999999.8f <= last_1_var_1_5) {
    var_1_5 = (((((var_1_10 - 4.4f)) < (((((var_1_11) > ((var_1_12 - var_1_13))) ? (var_1_11) : ((var_1_12 - var_1_13)))))) ? ((var_1_10 - 4.4f)) : (((((var_1_11) > ((var_1_12 - var_1_13))) ? (var_1_11) : ((var_1_12 - var_1_13)))))));
   } else {
    var_1_5 = 63.2f;
   }
  } else {
   var_1_5 = (0.725f + var_1_14);
  }
 } else {
  var_1_5 = var_1_11;
 }
 unsigned long int stepLocal_7 = ((((var_1_1 * 128u)) > (var_1_29)) ? ((var_1_1 * 128u)) : (var_1_29));
 if ((var_1_29 / var_1_32) >= stepLocal_7) {
  if (var_1_7) {
   var_1_33 = var_1_14;
  } else {
   var_1_33 = 255.5;
  }
 } else {
  var_1_33 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 assume_abort_if_not(var_1_19 != 0.0F);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 63);
 assume_abort_if_not(var_1_26 <= 128);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 64);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 127);
 assume_abort_if_not(var_1_32 <= 255);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_4 = var_1_4;
 last_1_var_1_5 = var_1_5;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_31 = var_1_31;
}
int property(void) {
 return (((((((((((var_1_29 + var_1_25) != -8) ? ((var_1_25 > var_1_29) ? (var_1_1 == ((signed long int) var_1_25)) : (var_1_1 == ((signed long int) (var_1_25 - ((((10) > (var_1_29)) ? (10) : (var_1_29))))))) : ((((((-16) < 0 ) ? -(-16) : (-16))) > var_1_29) ? (var_1_1 == ((signed long int) (var_1_29 - var_1_25))) : 1)) && ((var_1_20 < 64) ? ((var_1_20 <= (var_1_29 | last_1_var_1_4)) ? (var_1_4 == ((signed short int) last_1_var_1_4)) : 1) : 1)) && ((var_1_4 != var_1_29) ? (var_1_6 ? ((9999999.8f <= last_1_var_1_5) ? (var_1_5 == ((float) (((((var_1_10 - 4.4f)) < (((((var_1_11) > ((var_1_12 - var_1_13))) ? (var_1_11) : ((var_1_12 - var_1_13)))))) ? ((var_1_10 - 4.4f)) : (((((var_1_11) > ((var_1_12 - var_1_13))) ? (var_1_11) : ((var_1_12 - var_1_13))))))))) : (var_1_5 == ((float) 63.2f))) : (var_1_5 == ((float) (0.725f + var_1_14)))) : (var_1_5 == ((float) var_1_11)))) && ((var_1_12 < var_1_10) ? (var_1_15 == ((double) (var_1_14 + (var_1_16 - var_1_17)))) : ((! var_1_6) ? (var_1_15 == ((double) var_1_14)) : (var_1_15 == ((double) var_1_10))))) && (((var_1_16 / var_1_19) > (- var_1_17)) ? (var_1_18 == ((float) (((((((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12)))) < (var_1_10)) ? (((((var_1_16) > (var_1_12)) ? (var_1_16) : (var_1_12)))) : (var_1_10))) - ((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17)))))) : ((var_1_16 >= var_1_14) ? (var_1_18 == ((float) var_1_11)) : (var_1_18 == ((float) var_1_14))))) && ((((((((((var_1_25) > (var_1_29)) ? (var_1_25) : (var_1_29)))) < (var_1_1)) ? (((((var_1_25) > (var_1_29)) ? (var_1_25) : (var_1_29)))) : (var_1_1))) < (((((var_1_31) < (var_1_1)) ? (var_1_31) : (var_1_1))) * (~ var_1_29))) ? (var_1_20 == ((unsigned char) (var_1_23 + var_1_24))) : 1)) && ((((var_1_26 + var_1_27) - var_1_28) > (last_1_var_1_31 * last_1_var_1_1)) ? ((var_1_7 && (last_1_var_1_18 > var_1_11)) ? (var_1_25 == ((unsigned short int) var_1_28)) : 1) : (var_1_25 == ((unsigned short int) last_1_var_1_31)))) && (((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) / var_1_30) < var_1_10) ? (var_1_29 == ((unsigned long int) ((((last_1_var_1_20) < (256u)) ? (last_1_var_1_20) : (256u))))) : (((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) / ((((var_1_30) > (var_1_19)) ? (var_1_30) : (var_1_19)))) == 7.5f) ? (var_1_29 == ((unsigned long int) last_1_var_1_31)) : 1))) && ((var_1_25 <= (var_1_24 + (var_1_32 - var_1_23))) ? (var_1_31 == ((unsigned char) var_1_23)) : 1)) && (((var_1_29 / var_1_32) >= (((((var_1_1 * 128u)) > (var_1_29)) ? ((var_1_1 * 128u)) : (var_1_29)))) ? (var_1_7 ? (var_1_33 == ((double) var_1_14)) : (var_1_33 == ((double) 255.5))) : (var_1_33 == ((double) var_1_14)))
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
