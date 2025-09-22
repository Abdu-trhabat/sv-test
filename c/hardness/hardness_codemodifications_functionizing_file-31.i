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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(void);
signed long int functionized1(unsigned char);
unsigned char functionized2(void);
signed long int functionized3(void);
signed long int functionized4(void);
void functionized5(unsigned char, signed char);
void functionized6(signed char);
void functionized7(unsigned char);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 50;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
unsigned long int var_1_9 = 1;
signed char var_1_10 = 4;
signed char var_1_11 = 50;
signed char var_1_12 = 5;
signed char var_1_13 = 16;
signed char var_1_14 = 5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
void functionized0(void) {
 var_1_8 = (((((var_1_5 + (64 - 16))) < (64)) ? ((var_1_5 + (64 - 16))) : (64)));
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0) {
 return (functionized1_localFunctionVar0 + var_1_4);
}
unsigned char functionized2(void) {
 return (var_1_6 > var_1_8);
}
signed long int functionized3(void) {
 return ((((((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) > (var_1_15)) ? (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) : (var_1_15)));
}
signed long int functionized4(void) {
 return ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
}
void functionized5(unsigned char functionized5_localFunctionVar0, signed char functionized5_localFunctionVar1) {
 if (var_1_3 <= 16) {
  var_1_16 = functionized5_localFunctionVar1;
 } else {
  var_1_16 = functionized5_localFunctionVar0;
 }
}
void functionized6(signed char functionized6_localFunctionVar0) {
 var_1_17 = functionized6_localFunctionVar0;
}
void functionized7(unsigned char functionized7_localFunctionVar0) {
 if (var_1_19) {
  var_1_18 = functionized7_localFunctionVar0;
 } else {
  var_1_18 = 0;
 }
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) > (var_1_4)) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (var_1_4)));
 } else {
  var_1_1 = ((var_1_5 + var_1_6) - var_1_7);
 }
 functionized0();
 if ((var_1_1 * var_1_7) >= var_1_3) {
  var_1_9 = (5u + var_1_4);
 } else {
  if (var_1_2) {
   var_1_9 = var_1_4;
  } else {
   var_1_9 = var_1_1;
  }
 }
 if (functionized1(var_1_6) >= var_1_5) {
  if (functionized2()) {
   var_1_10 = ((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + (var_1_12 + var_1_13)) - ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))));
  } else {
   var_1_10 = functionized3();
  }
 }
 if (((-128 | var_1_12) >= functionized4()) || var_1_2) {
  functionized5(var_1_6, var_1_12);
 } else {
  var_1_16 = var_1_12;
 }
 functionized6(var_1_13);
 if (var_1_12 <= (var_1_9 / 64)) {
  var_1_18 = (! var_1_19);
 } else {
  functionized7(var_1_20);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 64);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((unsigned char) ((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) > (var_1_4)) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (var_1_4))))) : (var_1_1 == ((unsigned char) ((var_1_5 + var_1_6) - var_1_7)))) && (var_1_8 == ((unsigned char) (((((var_1_5 + (64 - 16))) < (64)) ? ((var_1_5 + (64 - 16))) : (64)))))) && (((var_1_1 * var_1_7) >= var_1_3) ? (var_1_9 == ((unsigned long int) (5u + var_1_4))) : (var_1_2 ? (var_1_9 == ((unsigned long int) var_1_4)) : (var_1_9 == ((unsigned long int) var_1_1))))) && (((var_1_6 + var_1_4) >= var_1_5) ? ((var_1_6 > var_1_8) ? (var_1_10 == ((signed char) ((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + (var_1_12 + var_1_13)) - ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) : (var_1_10 == ((signed char) ((((((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) > (var_1_15)) ? (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) : (var_1_15)))))) : 1)) && ((((-128 | var_1_12) >= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) || var_1_2) ? ((var_1_3 <= 16) ? (var_1_16 == ((unsigned char) var_1_12)) : (var_1_16 == ((unsigned char) var_1_6))) : (var_1_16 == ((unsigned char) var_1_12)))) && (var_1_17 == ((unsigned short int) var_1_13))) && ((var_1_12 <= (var_1_9 / 64)) ? (var_1_18 == ((unsigned char) (! var_1_19))) : (var_1_19 ? (var_1_18 == ((unsigned char) var_1_20)) : (var_1_18 == ((unsigned char) 0))))
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
