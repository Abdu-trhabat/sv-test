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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
signed long int var_1_2 = -2;
signed long int var_1_3 = 100;
signed long int var_1_4 = -256;
signed long int var_1_5 = 10;
signed long int var_1_6 = 8;
signed long int var_1_7 = -4;
unsigned short int var_1_8 = 100;
signed long int var_1_9 = 10;
signed char var_1_10 = 50;
unsigned char var_1_11 = 0;
signed char var_1_12 = 32;
signed char var_1_13 = 50;
signed char var_1_14 = 8;
signed long int var_1_15 = -5;
signed long int var_1_16 = 4;
signed long int var_1_17 = 4;
signed long int var_1_18 = -500;
void initially(void) {
}
void step(void) {
 if (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) > var_1_4) {
  if (var_1_3 > var_1_4) {
   var_1_1 = ((((var_1_5) > (((((var_1_6) < ((var_1_7 + -50))) ? (var_1_6) : ((var_1_7 + -50)))))) ? (var_1_5) : (((((var_1_6) < ((var_1_7 + -50))) ? (var_1_6) : ((var_1_7 + -50)))))));
  }
 }
 if (! var_1_11) {
  var_1_10 = (((var_1_12 + var_1_13) - var_1_14) - ((((-8) < 0 ) ? -(-8) : (-8))));
 }
 if (((var_1_16 - var_1_17) / var_1_9) <= var_1_1) {
  var_1_15 = (var_1_7 + var_1_18);
 } else {
  if (var_1_11 || (var_1_14 != var_1_10)) {
   var_1_15 = var_1_5;
  } else {
   var_1_15 = -10;
  }
 }
 if (var_1_5 != (var_1_6 * (var_1_15 / var_1_9))) {
  var_1_8 = 256;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 31);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 31);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483648);
 assume_abort_if_not(var_1_18 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) > var_1_4) ? ((var_1_3 > var_1_4) ? (var_1_1 == ((signed long int) ((((var_1_5) > (((((var_1_6) < ((var_1_7 + -50))) ? (var_1_6) : ((var_1_7 + -50)))))) ? (var_1_5) : (((((var_1_6) < ((var_1_7 + -50))) ? (var_1_6) : ((var_1_7 + -50))))))))) : 1) : 1) && ((var_1_5 != (var_1_6 * (var_1_15 / var_1_9))) ? (var_1_8 == ((unsigned short int) 256)) : 1)) && ((! var_1_11) ? (var_1_10 == ((signed char) (((var_1_12 + var_1_13) - var_1_14) - ((((-8) < 0 ) ? -(-8) : (-8)))))) : 1)) && ((((var_1_16 - var_1_17) / var_1_9) <= var_1_1) ? (var_1_15 == ((signed long int) (var_1_7 + var_1_18))) : ((var_1_11 || (var_1_14 != var_1_10)) ? (var_1_15 == ((signed long int) var_1_5)) : (var_1_15 == ((signed long int) -10))))
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
