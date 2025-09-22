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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(double);
void functionized1(double, double, unsigned char);
void functionized2(unsigned short int, unsigned long int);
void functionized3(double, double, double, unsigned char, unsigned short int, signed long int, double);
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
double var_1_2 = 24.25;
double var_1_3 = 128.5;
double var_1_4 = 4.5;
double var_1_5 = 49.5;
signed short int var_1_6 = -16;
signed short int var_1_7 = -2;
signed short int var_1_8 = 5;
signed short int var_1_9 = -25;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 128.375;
unsigned short int var_1_14 = 0;
float var_1_15 = 0.0;
float var_1_16 = 4.87;
float var_1_17 = 8.875;
signed char var_1_18 = -16;
double var_1_19 = 4.9;
double var_1_20 = 63.5;
double var_1_21 = 64.8;
double var_1_22 = 100.675;
double var_1_23 = 7.75;
double var_1_24 = 1.8;
unsigned char functionized0(double functionized0_localFunctionVar0) {
 return (((var_1_2 - functionized0_localFunctionVar0) * var_1_4) < var_1_5);
}
void functionized1(double functionized1_localFunctionVar0, double functionized1_localFunctionVar1, unsigned char functionized1_localFunctionVar2) {
 if (! (functionized1_localFunctionVar0 > (255.9 / functionized1_localFunctionVar1))) {
  var_1_10 = functionized1_localFunctionVar2;
 }
}
void functionized2(unsigned short int functionized2_localFunctionVar0, unsigned long int localFunctionVar1) {
 if ((localFunctionVar1 - (var_1_12 + var_1_10)) <= functionized2_localFunctionVar0) {
  var_1_18 = 32;
 }
}
void functionized3(double functionized3_localFunctionVar0, double functionized3_localFunctionVar1, double functionized3_localFunctionVar2, unsigned char functionized3_localFunctionVar3, unsigned short int functionized3_localFunctionVar4, signed long int localFunctionVar5, double localFunctionVar6) {
 if (functionized3_localFunctionVar3 < (localFunctionVar5 + functionized3_localFunctionVar4)) {
  var_1_19 = (functionized3_localFunctionVar0 + (((((localFunctionVar6 + functionized3_localFunctionVar2)) > (((((functionized3_localFunctionVar1) > (var_1_23)) ? (functionized3_localFunctionVar1) : (var_1_23))))) ? ((localFunctionVar6 + functionized3_localFunctionVar2)) : (((((functionized3_localFunctionVar1) > (var_1_23)) ? (functionized3_localFunctionVar1) : (var_1_23)))))));
 } else {
  var_1_19 = (functionized3_localFunctionVar1 + functionized3_localFunctionVar0);
 }
}
void initially(void) {
}
void step(void) {
 if (functionized0(var_1_3)) {
  var_1_1 = ((((-8) < ((var_1_6 + ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))))) ? (-8) : ((var_1_6 + ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))))));
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_8 >= var_1_7) {
  var_1_9 = (-256 + var_1_6);
 } else {
  var_1_9 = (var_1_7 + var_1_6);
 }
 if (var_1_11) {
  var_1_10 = ((((0) < (var_1_12)) ? (0) : (var_1_12)));
 } else {
  functionized1(var_1_5, var_1_13, var_1_12);
 }
 if (! var_1_11) {
  if (((var_1_15 - var_1_16) - var_1_17) <= var_1_13) {
   var_1_14 = var_1_10;
  } else {
   var_1_14 = 128;
  }
 }
 functionized2(var_1_14, 2935136887u);
 functionized3(var_1_20, var_1_22, var_1_21, var_1_12, var_1_14, 1, 199.5);
 if ((32 + var_1_12) != var_1_18) {
  var_1_24 = var_1_21;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 4611686.018427388000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427388000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 - var_1_3) * var_1_4) < var_1_5) ? (var_1_1 == ((signed short int) ((((-8) < ((var_1_6 + ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))))) ? (-8) : ((var_1_6 + ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))))))))) : (var_1_1 == ((signed short int) var_1_6))) && ((var_1_8 >= var_1_7) ? (var_1_9 == ((signed short int) (-256 + var_1_6))) : (var_1_9 == ((signed short int) (var_1_7 + var_1_6))))) && (var_1_11 ? (var_1_10 == ((unsigned char) ((((0) < (var_1_12)) ? (0) : (var_1_12))))) : ((! (var_1_5 > (255.9 / var_1_13))) ? (var_1_10 == ((unsigned char) var_1_12)) : 1))) && ((! var_1_11) ? ((((var_1_15 - var_1_16) - var_1_17) <= var_1_13) ? (var_1_14 == ((unsigned short int) var_1_10)) : (var_1_14 == ((unsigned short int) 128))) : 1)) && (((2935136887u - (var_1_12 + var_1_10)) <= var_1_14) ? (var_1_18 == ((signed char) 32)) : 1)) && ((var_1_12 < (1 + var_1_14)) ? (var_1_19 == ((double) (var_1_20 + (((((199.5 + var_1_21)) > (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))))) ? ((199.5 + var_1_21)) : (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))))))))) : (var_1_19 == ((double) (var_1_22 + var_1_20))))) && (((32 + var_1_12) != var_1_18) ? (var_1_24 == ((double) var_1_21)) : 1)
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
