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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(double, signed long int, signed long int);
void functionized1(void);
void functionized2(unsigned char, signed short int);
signed long int functionized3(signed long int);
unsigned char functionized4(signed short int);
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed long int var_1_4 = 200;
signed long int var_1_5 = 100;
signed char var_1_6 = -4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
unsigned char var_1_10 = 8;
double var_1_11 = 10.925;
float var_1_12 = 25.25;
signed short int var_1_13 = 64;
signed short int var_1_14 = 4;
signed char var_1_15 = -4;
signed char var_1_16 = -50;
signed char var_1_17 = 10;
signed char var_1_18 = 32;
signed char var_1_19 = 32;
signed char var_1_20 = 5;
signed long int var_1_21 = -8;
unsigned long int var_1_22 = 4;
void functionized0(double functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1, signed long int localFunctionVar2) {
 if (var_1_3 <= functionized0_localFunctionVar0) {
  var_1_1 = (((((localFunctionVar2) > (functionized0_localFunctionVar1)) ? (localFunctionVar2) : (functionized0_localFunctionVar1))) - var_1_5);
 } else {
  var_1_1 = functionized0_localFunctionVar1;
 }
}
void functionized1(void) {
 if (32.5 >= var_1_3) {
  if (var_1_7 && var_1_8) {
   var_1_6 = -4;
  }
 }
}
void functionized2(unsigned char functionized2_localFunctionVar0, signed short int functionized2_localFunctionVar1) {
 if ((- 16.75) <= var_1_12) {
  var_1_13 = (functionized2_localFunctionVar0 - functionized2_localFunctionVar1);
 } else {
  var_1_13 = ((((var_1_9) > (functionized2_localFunctionVar0)) ? (var_1_9) : (functionized2_localFunctionVar0)));
 }
}
signed long int functionized3(signed long int functionized3_localFunctionVar0) {
 return (functionized3_localFunctionVar0 * var_1_14);
}
unsigned char functionized4(signed short int functionized4_localFunctionVar0) {
 return (functionized4_localFunctionVar0 >= (var_1_10 - 10));
}
void initially(void) {
}
void step(void) {
 if (var_1_2 < var_1_3) {
  functionized0(var_1_2, var_1_4, 1);
 } else {
  var_1_1 = var_1_4;
 }
 functionized1();
 if (((var_1_5 / var_1_10) < var_1_1) && var_1_7) {
  var_1_9 = 32;
 }
 var_1_11 = 199.4;
 if (((var_1_11 * var_1_3) > var_1_2) && (var_1_10 != var_1_1)) {
  var_1_12 = 32.75f;
 }
 functionized2(var_1_10, var_1_14);
 if (var_1_8 || (functionized3(var_1_5) <= (~ 100000000))) {
  if (functionized4(var_1_14)) {
   if (! var_1_8) {
    var_1_15 = var_1_16;
   }
  }
 } else {
  var_1_15 = (var_1_17 - ((var_1_18 + var_1_19) - var_1_20));
 }
 var_1_21 = var_1_6;
 var_1_22 = var_1_18;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 255);
 assume_abort_if_not(var_1_10 != 0);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 31);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 32);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 < var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed long int) (((((1) > (var_1_4)) ? (1) : (var_1_4))) - var_1_5))) : (var_1_1 == ((signed long int) var_1_4))) : (var_1_1 == ((signed long int) var_1_4))) && ((32.5 >= var_1_3) ? ((var_1_7 && var_1_8) ? (var_1_6 == ((signed char) -4)) : 1) : 1)) && ((((var_1_5 / var_1_10) < var_1_1) && var_1_7) ? (var_1_9 == ((signed char) 32)) : 1)) && (var_1_11 == ((double) 199.4))) && ((((var_1_11 * var_1_3) > var_1_2) && (var_1_10 != var_1_1)) ? (var_1_12 == ((float) 32.75f)) : 1)) && (((- 16.75) <= var_1_12) ? (var_1_13 == ((signed short int) (var_1_10 - var_1_14))) : (var_1_13 == ((signed short int) ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))))) && ((var_1_8 || ((var_1_5 * var_1_14) <= (~ 100000000))) ? ((var_1_14 >= (var_1_10 - 10)) ? ((! var_1_8) ? (var_1_15 == ((signed char) var_1_16)) : 1) : 1) : (var_1_15 == ((signed char) (var_1_17 - ((var_1_18 + var_1_19) - var_1_20)))))) && (var_1_21 == ((signed long int) var_1_6))) && (var_1_22 == ((unsigned long int) var_1_18))
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
