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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(unsigned char);
signed long int functionized1(signed short int, signed short int);
void functionized2(signed short int, unsigned char, signed long int, unsigned char);
void functionized3(double);
double functionized4(double);
signed long int functionized5(signed char);
unsigned long int functionized6(unsigned long int, unsigned long int);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
signed short int var_1_4 = -2;
signed short int var_1_5 = 50;
signed short int var_1_6 = 2;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 4;
unsigned short int var_1_10 = 5;
signed long int var_1_11 = -5;
unsigned char var_1_12 = 1;
double var_1_13 = 255.375;
double var_1_14 = 64.25;
double var_1_15 = 64.8;
signed char var_1_16 = 2;
signed char var_1_17 = 16;
signed char var_1_18 = -50;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
signed char var_1_21 = -100;
unsigned long int var_1_22 = 3689088955;
unsigned long int var_1_23 = 1113264439;
unsigned char functionized0(unsigned char functionized0_localFunctionVar0) {
 return (var_1_3 && functionized0_localFunctionVar0);
}
signed long int functionized1(signed short int functionized1_localFunctionVar0, signed short int functionized1_localFunctionVar1) {
 return ((((functionized1_localFunctionVar1) < ((functionized1_localFunctionVar0 * var_1_4))) ? (functionized1_localFunctionVar1) : ((functionized1_localFunctionVar0 * var_1_4))));
}
void functionized2(signed short int functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, signed long int functionized2_localFunctionVar2, unsigned char functionized2_localFunctionVar3) {
 if ((functionized2_localFunctionVar1 / var_1_10) == ((functionized2_localFunctionVar0 * functionized2_localFunctionVar3) % functionized2_localFunctionVar2)) {
  var_1_9 = var_1_10;
 } else {
  var_1_9 = (5u + functionized2_localFunctionVar1);
 }
}
void functionized3(double functionized3_localFunctionVar0) {
 if (((((((((functionized3_localFunctionVar0) > (9.999999999999025E12)) ? (functionized3_localFunctionVar0) : (9.999999999999025E12)))) < (var_1_14)) ? (((((functionized3_localFunctionVar0) > (9.999999999999025E12)) ? (functionized3_localFunctionVar0) : (9.999999999999025E12)))) : (var_1_14))) > var_1_15) {
  var_1_12 = 0;
 }
}
double functionized4(double functionized4_localFunctionVar0) {
 return (functionized4_localFunctionVar0 / 99999.24);
}
signed long int functionized5(signed char functionized5_localFunctionVar0) {
 return (functionized5_localFunctionVar0 - var_1_19);
}
unsigned long int functionized6(unsigned long int functionized6_localFunctionVar0, unsigned long int functionized6_localFunctionVar1) {
 return (functionized6_localFunctionVar0 - (functionized6_localFunctionVar1 - 32u));
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (! var_1_3) {
   var_1_1 = (var_1_4 + 5);
  } else {
   var_1_1 = (var_1_5 - var_1_6);
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (functionized0(var_1_2)) {
  if ((functionized1(var_1_6, var_1_5)) > var_1_1) {
   var_1_7 = var_1_8;
  } else {
   var_1_7 = 200;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_7 <= var_1_4) {
  functionized2(var_1_5, var_1_8, var_1_11, var_1_7);
 } else {
  var_1_9 = var_1_8;
 }
 functionized3(var_1_13);
 if (var_1_3 && (50.5 <= functionized4(var_1_15))) {
  var_1_16 = (var_1_17 - ((((-50 + var_1_18) < 0 ) ? -(-50 + var_1_18) : (-50 + var_1_18))));
 } else {
  var_1_16 = ((((functionized5(var_1_17)) > ((var_1_18 + var_1_20))) ? (functionized5(var_1_17)) : ((var_1_18 + var_1_20))));
 }
 if (var_1_9 <= (functionized6(var_1_22, var_1_23))) {
  var_1_21 = 32;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 assume_abort_if_not(var_1_11 != 0);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 ? ((! var_1_3) ? (var_1_1 == ((signed short int) (var_1_4 + 5))) : (var_1_1 == ((signed short int) (var_1_5 - var_1_6)))) : (var_1_1 == ((signed short int) var_1_5))) && ((var_1_3 && var_1_2) ? ((((((var_1_5) < ((var_1_6 * var_1_4))) ? (var_1_5) : ((var_1_6 * var_1_4)))) > var_1_1) ? (var_1_7 == ((unsigned char) var_1_8)) : (var_1_7 == ((unsigned char) 200))) : (var_1_7 == ((unsigned char) var_1_8)))) && ((var_1_7 <= var_1_4) ? (((var_1_8 / var_1_10) == ((var_1_5 * var_1_7) % var_1_11)) ? (var_1_9 == ((unsigned long int) var_1_10)) : (var_1_9 == ((unsigned long int) (5u + var_1_8)))) : (var_1_9 == ((unsigned long int) var_1_8)))) && ((((((((((var_1_13) > (9.999999999999025E12)) ? (var_1_13) : (9.999999999999025E12)))) < (var_1_14)) ? (((((var_1_13) > (9.999999999999025E12)) ? (var_1_13) : (9.999999999999025E12)))) : (var_1_14))) > var_1_15) ? (var_1_12 == ((unsigned char) 0)) : 1)) && ((var_1_3 && (50.5 <= (var_1_15 / 99999.24))) ? (var_1_16 == ((signed char) (var_1_17 - ((((-50 + var_1_18) < 0 ) ? -(-50 + var_1_18) : (-50 + var_1_18)))))) : (var_1_16 == ((signed char) (((((var_1_17 - var_1_19)) > ((var_1_18 + var_1_20))) ? ((var_1_17 - var_1_19)) : ((var_1_18 + var_1_20)))))))) && ((var_1_9 <= (var_1_22 - (var_1_23 - 32u))) ? (var_1_21 == ((signed char) 32)) : 1)
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
