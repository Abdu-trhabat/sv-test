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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -128;
signed short int var_1_8 = 0;
signed short int var_1_9 = 1;
signed char var_1_10 = -128;
signed char var_1_11 = 64;
signed char var_1_12 = -1;
signed char var_1_13 = 2;
signed char var_1_14 = 8;
unsigned long int var_1_15 = 10;
unsigned long int var_1_16 = 2868481788;
unsigned long int var_1_17 = 4;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
float var_1_21 = 15.5;
signed short int var_1_22 = -10;
signed long int var_1_23 = -16;
float var_1_24 = 49.75;
float var_1_25 = 5.9;
float var_1_26 = 31.05;
signed char var_1_27 = 0;
signed long int var_1_28 = 10;
unsigned char var_1_29 = 0;
unsigned long int var_1_30 = 0;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 64;
double var_1_33 = 256.62;
double var_1_34 = 10.625;
double var_1_35 = 100000000000000.38;
unsigned short int var_1_36 = 32;
double var_1_38 = 128.375;
unsigned long int var_1_39 = 2;
void initially(void) {
}
void step(void) {
 var_1_15 = (var_1_16 - ((var_1_13 + var_1_14) + var_1_17));
 if (! (var_1_13 == var_1_12)) {
  var_1_21 = var_1_24;
 } else {
  var_1_21 = (var_1_25 - var_1_26);
 }
 var_1_39 = var_1_31;
 if ((var_1_39 / (var_1_31 + var_1_32)) > ((var_1_15 / var_1_23) & var_1_17)) {
  if ((var_1_13 * var_1_39) == var_1_11) {
   var_1_30 = var_1_16;
  }
 } else {
  var_1_30 = var_1_13;
 }
 unsigned long int stepLocal_4 = var_1_30;
 if (var_1_23 < stepLocal_4) {
  var_1_36 = (var_1_31 + var_1_32);
 }
 signed long int stepLocal_7 = var_1_8 % var_1_23;
 unsigned long int stepLocal_6 = var_1_39;
 unsigned long int stepLocal_5 = var_1_16;
 if (stepLocal_7 < var_1_39) {
  if (stepLocal_5 > 256u) {
   if (var_1_12 < stepLocal_6) {
    var_1_38 = var_1_35;
   } else {
    var_1_38 = ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25)));
   }
  } else {
   var_1_38 = var_1_25;
  }
 }
 if (var_1_30 <= (var_1_15 / 25)) {
  var_1_10 = ((((var_1_11) > ((var_1_12 - var_1_13))) ? (var_1_11) : ((var_1_12 - var_1_13))));
 } else {
  var_1_10 = (((((var_1_13 - var_1_14)) < (var_1_11)) ? ((var_1_13 - var_1_14)) : (var_1_11)));
 }
 signed char stepLocal_0 = var_1_12;
 if (stepLocal_0 >= ((((var_1_30) < (var_1_14)) ? (var_1_30) : (var_1_14)))) {
  var_1_27 = ((((8 - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))) < 0 ) ? -(8 - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))) : (8 - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13))))));
 } else {
  var_1_27 = ((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14)));
 }
 signed long int stepLocal_1 = (((var_1_8) < ((var_1_36 / var_1_22))) ? (var_1_8) : ((var_1_36 / var_1_22)));
 if (var_1_23 > stepLocal_1) {
  var_1_28 = (((((var_1_17) < (var_1_14)) ? (var_1_17) : (var_1_14))) + ((((var_1_11) < (-1000)) ? (var_1_11) : (-1000))));
 } else {
  var_1_28 = var_1_9;
 }
 signed char stepLocal_3 = var_1_11;
 signed char stepLocal_2 = var_1_13;
 if (var_1_27 < stepLocal_2) {
  if (stepLocal_3 != (var_1_14 - var_1_13)) {
   var_1_29 = var_1_20;
  }
 }
 if ((var_1_38 + 128.25f) == (var_1_26 - var_1_25)) {
  var_1_33 = (((((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) < 0 ) ? -((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) : ((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26)))));
 } else {
  var_1_33 = (var_1_34 + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 }
 if (var_1_29) {
  var_1_18 = (var_1_19 || (! var_1_20));
 }
 if (var_1_29) {
  if (! var_1_18) {
   if ((-32 & var_1_39) >= var_1_30) {
    var_1_1 = ((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)));
   } else {
    var_1_1 = ((var_1_39 + -4) + var_1_9);
   }
  }
 } else {
  if (var_1_8 <= var_1_30) {
   var_1_1 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
  }
 }
}
void updateVariables(void) {
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32767);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1073741823);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -32768);
 assume_abort_if_not(var_1_22 <= 32767);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 128);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((var_1_29 ? ((! var_1_18) ? (((-32 & var_1_39) >= var_1_30) ? (var_1_1 == ((signed short int) ((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8))))) : (var_1_1 == ((signed short int) ((var_1_39 + -4) + var_1_9)))) : 1) : ((var_1_8 <= var_1_30) ? (var_1_1 == ((signed short int) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : 1)) && ((var_1_30 <= (var_1_15 / 25)) ? (var_1_10 == ((signed char) ((((var_1_11) > ((var_1_12 - var_1_13))) ? (var_1_11) : ((var_1_12 - var_1_13)))))) : (var_1_10 == ((signed char) (((((var_1_13 - var_1_14)) < (var_1_11)) ? ((var_1_13 - var_1_14)) : (var_1_11))))))) && (var_1_15 == ((unsigned long int) (var_1_16 - ((var_1_13 + var_1_14) + var_1_17))))) && (var_1_29 ? (var_1_18 == ((unsigned char) (var_1_19 || (! var_1_20)))) : 1)) && ((! (var_1_13 == var_1_12)) ? (var_1_21 == ((float) var_1_24)) : (var_1_21 == ((float) (var_1_25 - var_1_26))))) && ((var_1_12 >= ((((var_1_30) < (var_1_14)) ? (var_1_30) : (var_1_14)))) ? (var_1_27 == ((signed char) ((((8 - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))) < 0 ) ? -(8 - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))) : (8 - ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)))))))) : (var_1_27 == ((signed char) ((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14))))))) && ((var_1_23 > ((((var_1_8) < ((var_1_36 / var_1_22))) ? (var_1_8) : ((var_1_36 / var_1_22))))) ? (var_1_28 == ((signed long int) (((((var_1_17) < (var_1_14)) ? (var_1_17) : (var_1_14))) + ((((var_1_11) < (-1000)) ? (var_1_11) : (-1000)))))) : (var_1_28 == ((signed long int) var_1_9)))) && ((var_1_27 < var_1_13) ? ((var_1_11 != (var_1_14 - var_1_13)) ? (var_1_29 == ((unsigned char) var_1_20)) : 1) : 1)) && (((var_1_39 / (var_1_31 + var_1_32)) > ((var_1_15 / var_1_23) & var_1_17)) ? (((var_1_13 * var_1_39) == var_1_11) ? (var_1_30 == ((unsigned long int) var_1_16)) : 1) : (var_1_30 == ((unsigned long int) var_1_13)))) && (((var_1_38 + 128.25f) == (var_1_26 - var_1_25)) ? (var_1_33 == ((double) (((((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) < 0 ) ? -((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) : ((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))))))) : (var_1_33 == ((double) (var_1_34 + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))))) && ((var_1_23 < var_1_30) ? (var_1_36 == ((unsigned short int) (var_1_31 + var_1_32))) : 1)) && (((var_1_8 % var_1_23) < var_1_39) ? ((var_1_16 > 256u) ? ((var_1_12 < var_1_39) ? (var_1_38 == ((double) var_1_35)) : (var_1_38 == ((double) ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25)))))) : (var_1_38 == ((double) var_1_25))) : 1)) && (var_1_39 == ((unsigned long int) var_1_31))
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
