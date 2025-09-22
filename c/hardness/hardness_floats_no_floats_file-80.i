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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 256;
signed long int var_1_2 = 256;
signed long int var_1_3 = 0;
signed long int var_1_4 = -2;
signed long int var_1_5 = 8;
signed long int var_1_6 = 10;
signed long int var_1_7 = 5;
signed long int var_1_8 = 128;
signed short int var_1_9 = -1;
signed short int var_1_10 = 1;
signed short int var_1_11 = 10;
signed char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = 2;
signed long int var_1_15 = 2;
signed long int var_1_16 = -10;
signed long int var_1_17 = -16;
signed long int var_1_18 = -5;
signed char var_1_19 = -8;
void initially(void) {
}
void step(void) {
 if ((((((var_1_2 - var_1_3)) > (var_1_4)) ? ((var_1_2 - var_1_3)) : (var_1_4))) <= (((((var_1_5 - var_1_6)) < ((var_1_7 % var_1_8))) ? ((var_1_5 - var_1_6)) : ((var_1_7 % var_1_8))))) {
  var_1_1 = (((((var_1_9 - var_1_10)) < (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11)));
 }
 unsigned char stepLocal_0 = var_1_1 <= var_1_11;
 if (var_1_13 || stepLocal_0) {
  var_1_12 = ((((1 - var_1_14) < 0 ) ? -(1 - var_1_14) : (1 - var_1_14)));
 } else {
  var_1_12 = var_1_14;
 }
 if (var_1_11 == ((((var_1_4) < (-16)) ? (var_1_4) : (-16)))) {
  var_1_15 = ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > ((var_1_17 + var_1_18))) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : ((var_1_17 + var_1_18))));
 } else {
  var_1_15 = 8;
 }
 if (var_1_2 >= (var_1_5 - var_1_6)) {
  if (var_1_13) {
   var_1_19 = var_1_14;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483648);
 assume_abort_if_not(var_1_18 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 - var_1_3)) > (var_1_4)) ? ((var_1_2 - var_1_3)) : (var_1_4))) <= (((((var_1_5 - var_1_6)) < ((var_1_7 % var_1_8))) ? ((var_1_5 - var_1_6)) : ((var_1_7 % var_1_8))))) ? (var_1_1 == ((signed short int) (((((var_1_9 - var_1_10)) < (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11))))) : 1) && ((var_1_13 || (var_1_1 <= var_1_11)) ? (var_1_12 == ((signed char) ((((1 - var_1_14) < 0 ) ? -(1 - var_1_14) : (1 - var_1_14))))) : (var_1_12 == ((signed char) var_1_14)))) && ((var_1_11 == ((((var_1_4) < (-16)) ? (var_1_4) : (-16)))) ? (var_1_15 == ((signed long int) ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > ((var_1_17 + var_1_18))) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : ((var_1_17 + var_1_18)))))) : (var_1_15 == ((signed long int) 8)))) && ((var_1_2 >= (var_1_5 - var_1_6)) ? (var_1_13 ? (var_1_19 == ((signed char) var_1_14)) : 1) : 1)
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
