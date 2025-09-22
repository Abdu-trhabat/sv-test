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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
signed long int var_1_5 = 1;
signed long int var_1_6 = 100;
unsigned char var_1_7 = 32;
signed short int var_1_8 = 1;
signed long int var_1_9 = 32;
signed long int var_1_10 = -10;
signed long int var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned short int var_1_14 = 50;
unsigned short int var_1_15 = 1;
signed char var_1_16 = -2;
signed char var_1_17 = 0;
signed char var_1_18 = 4;
signed char var_1_19 = 5;
unsigned char var_1_20 = 0;
unsigned char last_1_var_1_1 = 32;
signed short int last_1_var_1_8 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6));
 if (((last_1_var_1_1 * last_1_var_1_8) * last_1_var_1_8) < stepLocal_0) {
  var_1_1 = var_1_7;
 } else {
  var_1_1 = 10;
 }
 signed long int stepLocal_1 = ~ var_1_1;
 if ((var_1_6 * var_1_5) >= stepLocal_1) {
  var_1_14 = (var_1_1 + var_1_15);
 }
 if ((- var_1_9) >= ((((var_1_10) > ((- var_1_11))) ? (var_1_10) : ((- var_1_11))))) {
  var_1_8 = (4 + var_1_14);
 }
 var_1_12 = var_1_13;
 unsigned long int stepLocal_2 = ((((var_1_14 / 10u)) < (1u)) ? ((var_1_14 / 10u)) : (1u));
 if (stepLocal_2 < 16u) {
  var_1_16 = ((((64) < (var_1_17)) ? (64) : (var_1_17)));
 } else {
  var_1_16 = (var_1_18 - var_1_19);
 }
 var_1_20 = var_1_13;
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return ((((((((last_1_var_1_1 * last_1_var_1_8) * last_1_var_1_8) < ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))) ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) 10))) && (((- var_1_9) >= ((((var_1_10) > ((- var_1_11))) ? (var_1_10) : ((- var_1_11))))) ? (var_1_8 == ((signed short int) (4 + var_1_14))) : 1)) && (var_1_12 == ((unsigned char) var_1_13))) && (((var_1_6 * var_1_5) >= (~ var_1_1)) ? (var_1_14 == ((unsigned short int) (var_1_1 + var_1_15))) : 1)) && (((((((var_1_14 / 10u)) < (1u)) ? ((var_1_14 / 10u)) : (1u))) < 16u) ? (var_1_16 == ((signed char) ((((64) < (var_1_17)) ? (64) : (var_1_17))))) : (var_1_16 == ((signed char) (var_1_18 - var_1_19))))) && (var_1_20 == ((unsigned char) var_1_13))
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
