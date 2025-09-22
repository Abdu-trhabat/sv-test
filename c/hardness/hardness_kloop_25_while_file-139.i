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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13925_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 32;
float var_1_2 = 4.5;
float var_1_3 = 8.5;
float var_1_4 = 256.25;
signed short int var_1_5 = 64;
signed short int var_1_6 = 8;
unsigned char var_1_7 = 100;
signed char var_1_8 = -4;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 0;
unsigned long int var_1_12 = 3771969139;
void initially(void) {
}
void step(void) {
 if (((((var_1_2) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? (var_1_2) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) <= var_1_4) {
  var_1_1 = ((((32 - (var_1_5 + var_1_6)) < 0 ) ? -(32 - (var_1_5 + var_1_6)) : (32 - (var_1_5 + var_1_6))));
 } else {
  var_1_1 = var_1_6;
 }
 if ((var_1_1 / var_1_8) == (var_1_5 << var_1_6)) {
  var_1_7 = (var_1_9 - var_1_10);
 } else {
  var_1_7 = var_1_10;
 }
 signed char stepLocal_0 = var_1_8;
 if ((((((var_1_9 + -8)) < ((var_1_6 + -50))) ? ((var_1_9 + -8)) : ((var_1_6 + -50)))) > stepLocal_0) {
  var_1_11 = (var_1_12 - var_1_7);
 } else {
  var_1_11 = (var_1_5 + var_1_9);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -128);
 assume_abort_if_not(var_1_8 <= 127);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2) < (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? (var_1_2) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) <= var_1_4) ? (var_1_1 == ((signed short int) ((((32 - (var_1_5 + var_1_6)) < 0 ) ? -(32 - (var_1_5 + var_1_6)) : (32 - (var_1_5 + var_1_6)))))) : (var_1_1 == ((signed short int) var_1_6))) && (((var_1_1 / var_1_8) == (var_1_5 << var_1_6)) ? (var_1_7 == ((unsigned char) (var_1_9 - var_1_10))) : (var_1_7 == ((unsigned char) var_1_10)))) && (((((((var_1_9 + -8)) < ((var_1_6 + -50))) ? ((var_1_9 + -8)) : ((var_1_6 + -50)))) > var_1_8) ? (var_1_11 == ((unsigned long int) (var_1_12 - var_1_7))) : (var_1_11 == ((unsigned long int) (var_1_5 + var_1_9))))
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
