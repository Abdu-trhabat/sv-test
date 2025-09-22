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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10225_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
double var_1_2 = 9999999.6;
double var_1_3 = 9999999999999.6;
double var_1_4 = 256.75;
double var_1_5 = 63.4;
unsigned long int var_1_6 = 4;
signed long int var_1_7 = 5;
unsigned long int var_1_8 = 1000;
unsigned long int var_1_9 = 2796236537;
unsigned long int var_1_10 = 64;
signed long int var_1_11 = 16;
signed long int var_1_12 = -64;
unsigned short int var_1_13 = 4;
signed long int var_1_14 = 16;
void initially(void) {
}
void step(void) {
 if (((var_1_2 - var_1_3) * var_1_4) <= var_1_5) {
  var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_1 < (var_1_1 & (var_1_9 - var_1_10))) {
  var_1_7 = var_1_11;
 }
 var_1_13 = 5;
 var_1_14 = var_1_11;
 if ((var_1_6 | var_1_9) <= var_1_14) {
  if (var_1_8 > (var_1_9 * ((((var_1_1) > (var_1_14)) ? (var_1_1) : (var_1_14))))) {
   if (var_1_4 != var_1_2) {
    var_1_12 = var_1_11;
   }
  }
 } else {
  var_1_12 = 256;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483647);
 assume_abort_if_not(var_1_11 <= 2147483646);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 - var_1_3) * var_1_4) <= var_1_5) ? (var_1_1 == ((unsigned long int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_1 == ((unsigned long int) var_1_6))) && ((var_1_1 < (var_1_1 & (var_1_9 - var_1_10))) ? (var_1_7 == ((signed long int) var_1_11)) : 1)) && (((var_1_6 | var_1_9) <= var_1_14) ? ((var_1_8 > (var_1_9 * ((((var_1_1) > (var_1_14)) ? (var_1_1) : (var_1_14))))) ? ((var_1_4 != var_1_2) ? (var_1_12 == ((signed long int) var_1_11)) : 1) : 1) : (var_1_12 == ((signed long int) 256)))) && (var_1_13 == ((unsigned short int) 5))) && (var_1_14 == ((signed long int) var_1_11))
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
