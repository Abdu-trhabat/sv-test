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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch45no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -10;
signed long int var_1_2 = 4;
signed char var_1_3 = 2;
signed char var_1_4 = 64;
signed char var_1_5 = 64;
signed char var_1_6 = 10;
signed long int var_1_7 = -1;
unsigned char var_1_8 = 128;
signed long int var_1_9 = 64;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 1000000000;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int last_1_var_1_9 = 64;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_5;
 signed long int stepLocal_0 = last_1_var_1_9;
 if (((var_1_8 - var_1_6) / ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) >= stepLocal_0) {
  var_1_7 = (var_1_4 - var_1_8);
 } else {
  if (stepLocal_1 >= (var_1_4 * last_1_var_1_9)) {
   var_1_7 = var_1_5;
  }
 }
 if (var_1_10 && var_1_11) {
  var_1_9 = var_1_5;
 } else {
  var_1_9 = ((var_1_6 - (var_1_12 - var_1_4)) + var_1_7);
 }
 var_1_1 = var_1_2;
 if (var_1_1 >= var_1_2) {
  var_1_3 = (1 - (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) - var_1_6));
 }
 signed long int stepLocal_2 = var_1_4 + ((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)));
 if (stepLocal_2 < var_1_3) {
  var_1_13 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 127);
 assume_abort_if_not(var_1_8 <= 255);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 536870911);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
}
int property(void) {
 return ((((var_1_1 == ((signed long int) var_1_2)) && ((var_1_1 >= var_1_2) ? (var_1_3 == ((signed char) (1 - (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) - var_1_6)))) : 1)) && ((((var_1_8 - var_1_6) / ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) >= last_1_var_1_9) ? (var_1_7 == ((signed long int) (var_1_4 - var_1_8))) : ((var_1_5 >= (var_1_4 * last_1_var_1_9)) ? (var_1_7 == ((signed long int) var_1_5)) : 1))) && ((var_1_10 && var_1_11) ? (var_1_9 == ((signed long int) var_1_5)) : (var_1_9 == ((signed long int) ((var_1_6 - (var_1_12 - var_1_4)) + var_1_7))))) && (((var_1_4 + ((((var_1_9) > (var_1_7)) ? (var_1_9) : (var_1_7)))) < var_1_3) ? (var_1_13 == ((unsigned char) var_1_14)) : 1)
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
