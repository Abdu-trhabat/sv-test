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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 99.25;
signed short int var_1_2 = -32;
signed short int var_1_3 = 2;
signed short int var_1_4 = 0;
signed long int var_1_5 = 32;
signed short int var_1_6 = 32;
signed short int var_1_7 = 18477;
signed short int var_1_8 = 5;
float var_1_9 = 5.8;
float var_1_10 = 0.5;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 50;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 256;
unsigned char var_1_15 = 0;
unsigned long int last_1_var_1_14 = 256;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_3 = var_1_8;
 unsigned long int stepLocal_2 = last_1_var_1_14;
 if (last_1_var_1_14 > stepLocal_3) {
  if (((var_1_6 - var_1_8) + var_1_7) > stepLocal_2) {
   var_1_11 = ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)));
  } else {
   var_1_11 = var_1_12;
  }
 }
 if ((var_1_4 & var_1_7) > ((var_1_12 * var_1_5) * (var_1_11 + var_1_3))) {
  if (var_1_15 && (var_1_9 > var_1_10)) {
   var_1_14 = var_1_7;
  }
 } else {
  var_1_14 = var_1_7;
 }
 signed short int stepLocal_1 = var_1_2;
 signed long int stepLocal_0 = var_1_5;
 if ((var_1_2 ^ ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) != stepLocal_0) {
  if (stepLocal_1 == (var_1_6 - (var_1_7 - var_1_8))) {
   var_1_1 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
  }
 } else {
  var_1_1 = 10.5f;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 16383);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
}
int property(void) {
 return ((((var_1_2 ^ ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) != var_1_5) ? ((var_1_2 == (var_1_6 - (var_1_7 - var_1_8))) ? (var_1_1 == ((float) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) : 1) : (var_1_1 == ((float) 10.5f))) && ((last_1_var_1_14 > var_1_8) ? ((((var_1_6 - var_1_8) + var_1_7) > last_1_var_1_14) ? (var_1_11 == ((unsigned char) ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) : (var_1_11 == ((unsigned char) var_1_12))) : 1)) && (((var_1_4 & var_1_7) > ((var_1_12 * var_1_5) * (var_1_11 + var_1_3))) ? ((var_1_15 && (var_1_9 > var_1_10)) ? (var_1_14 == ((unsigned long int) var_1_7)) : 1) : (var_1_14 == ((unsigned long int) var_1_7)))
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
