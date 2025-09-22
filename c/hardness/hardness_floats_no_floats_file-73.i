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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
unsigned char var_1_2 = 1;
signed long int var_1_3 = -4;
signed long int var_1_4 = 200;
signed long int var_1_5 = 0;
signed long int var_1_6 = 4;
signed long int var_1_7 = 16;
signed char var_1_8 = 32;
unsigned short int var_1_10 = 1;
signed char var_1_12 = 8;
signed long int var_1_13 = 10;
signed char var_1_14 = -1;
signed short int var_1_15 = -10;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if ((var_1_3 * var_1_4) == (var_1_5 - var_1_6)) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = 1;
  }
 } else {
  var_1_1 = var_1_7;
 }
 var_1_14 = var_1_10;
 var_1_15 = var_1_10;
 if ((- (- var_1_1)) >= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) {
  var_1_13 = (var_1_12 - var_1_15);
 }
 signed long int stepLocal_0 = (- var_1_13) << var_1_10;
 if (! var_1_2) {
  if (var_1_2) {
   if (stepLocal_0 < var_1_13) {
    var_1_8 = var_1_10;
   } else {
    var_1_8 = (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - var_1_12);
   }
  } else {
   var_1_8 = -10;
  }
 } else {
  var_1_8 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 22);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 ? (((var_1_3 * var_1_4) == (var_1_5 - var_1_6)) ? (var_1_1 == ((signed long int) var_1_7)) : (var_1_1 == ((signed long int) 1))) : (var_1_1 == ((signed long int) var_1_7))) && ((! var_1_2) ? (var_1_2 ? ((((- var_1_13) << var_1_10) < var_1_13) ? (var_1_8 == ((signed char) var_1_10)) : (var_1_8 == ((signed char) (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - var_1_12)))) : (var_1_8 == ((signed char) -10))) : (var_1_8 == ((signed char) var_1_10)))) && (((- (- var_1_1)) >= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) ? (var_1_13 == ((signed long int) (var_1_12 - var_1_15))) : 1)) && (var_1_14 == ((signed char) var_1_10))) && (var_1_15 == ((signed short int) var_1_10))
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
