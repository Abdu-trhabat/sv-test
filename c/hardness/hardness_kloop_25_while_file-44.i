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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4425_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 32;
signed char var_1_5 = -1;
signed char var_1_6 = 50;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 0;
signed char var_1_12 = 8;
unsigned char var_1_13 = 1;
signed char var_1_14 = 64;
signed char var_1_15 = 16;
signed char var_1_16 = 16;
unsigned long int var_1_17 = 4;
signed long int var_1_18 = 4;
unsigned long int last_1_var_1_17 = 4;
void initially(void) {
}
void step(void) {
 var_1_8 = (var_1_9 - (var_1_10 + var_1_11));
 if (! var_1_13) {
  var_1_12 = ((((((var_1_14 - var_1_11) - ((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15))))) > (var_1_16)) ? (((var_1_14 - var_1_11) - ((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15))))) : (var_1_16)));
 } else {
  var_1_12 = 2;
 }
 signed long int stepLocal_2 = var_1_14 >> var_1_18;
 if (stepLocal_2 != ((last_1_var_1_17 * var_1_10) / ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) {
  var_1_17 = var_1_9;
 } else {
  var_1_17 = var_1_14;
 }
 signed long int stepLocal_1 = var_1_5 - var_1_6;
 signed long int stepLocal_0 = var_1_8 / var_1_7;
 if (var_1_12 > stepLocal_1) {
  if (stepLocal_0 <= var_1_5) {
   var_1_1 = var_1_12;
  }
 } else {
  var_1_1 = var_1_7;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 255);
 assume_abort_if_not(var_1_7 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 64);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 62);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 6);
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return ((((var_1_12 > (var_1_5 - var_1_6)) ? (((var_1_8 / var_1_7) <= var_1_5) ? (var_1_1 == ((signed long int) var_1_12)) : 1) : (var_1_1 == ((signed long int) var_1_7))) && (var_1_8 == ((unsigned char) (var_1_9 - (var_1_10 + var_1_11))))) && ((! var_1_13) ? (var_1_12 == ((signed char) ((((((var_1_14 - var_1_11) - ((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15))))) > (var_1_16)) ? (((var_1_14 - var_1_11) - ((((var_1_10) > (var_1_15)) ? (var_1_10) : (var_1_15))))) : (var_1_16))))) : (var_1_12 == ((signed char) 2)))) && (((var_1_14 >> var_1_18) != ((last_1_var_1_17 * var_1_10) / ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) ? (var_1_17 == ((unsigned long int) var_1_9)) : (var_1_17 == ((unsigned long int) var_1_14)))
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
