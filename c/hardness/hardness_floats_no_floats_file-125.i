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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -16;
signed long int var_1_4 = 32;
signed long int var_1_5 = 32;
signed long int var_1_6 = 16;
signed long int var_1_7 = 10;
signed long int var_1_8 = 1;
signed long int var_1_9 = 16;
signed long int var_1_10 = 128;
signed long int var_1_11 = -5;
signed short int var_1_12 = -25;
signed short int var_1_13 = 1000;
signed short int var_1_14 = 10000;
signed short int var_1_15 = 0;
signed long int last_1_var_1_10 = 128;
void initially(void) {
}
void step(void) {
 if (var_1_4 < (var_1_5 / var_1_7)) {
  var_1_6 = ((((last_1_var_1_10) > (((var_1_8 + 4) - var_1_9))) ? (last_1_var_1_10) : (((var_1_8 + 4) - var_1_9))));
 } else {
  var_1_6 = var_1_8;
 }
 var_1_10 = (((var_1_6 + 4) - var_1_8) + ((((var_1_11) > (-64)) ? (var_1_11) : (-64))));
 signed long int stepLocal_0 = var_1_6;
 if ((32 * (var_1_6 | 4)) >= stepLocal_0) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  var_1_1 = var_1_5;
 }
 unsigned long int stepLocal_1 = - ((((8u) > (var_1_9)) ? (8u) : (var_1_9)));
 if (stepLocal_1 <= var_1_8) {
  var_1_12 = (50 - ((32541 - var_1_13) - (var_1_14 - var_1_15)));
 } else {
  var_1_12 = 2;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1073741823);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 8191);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 8191);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 8191);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((((32 * (var_1_6 | 4)) >= var_1_6) ? (var_1_1 == ((signed long int) (var_1_4 - var_1_5))) : (var_1_1 == ((signed long int) var_1_5))) && ((var_1_4 < (var_1_5 / var_1_7)) ? (var_1_6 == ((signed long int) ((((last_1_var_1_10) > (((var_1_8 + 4) - var_1_9))) ? (last_1_var_1_10) : (((var_1_8 + 4) - var_1_9)))))) : (var_1_6 == ((signed long int) var_1_8)))) && (var_1_10 == ((signed long int) (((var_1_6 + 4) - var_1_8) + ((((var_1_11) > (-64)) ? (var_1_11) : (-64))))))) && (((- ((((8u) > (var_1_9)) ? (8u) : (var_1_9)))) <= var_1_8) ? (var_1_12 == ((signed short int) (50 - ((32541 - var_1_13) - (var_1_14 - var_1_15))))) : (var_1_12 == ((signed short int) 2)))
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
