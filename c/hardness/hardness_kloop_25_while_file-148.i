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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14825_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 256.625;
float var_1_2 = 100000000.25;
float var_1_3 = 8.5;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
float var_1_10 = 128.5;
signed long int var_1_11 = -32;
float var_1_12 = 255.7;
float var_1_13 = 2.4;
float var_1_14 = 128.625;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - var_1_3);
 if (var_1_5 && var_1_6) {
  var_1_4 = (! var_1_7);
 } else {
  var_1_4 = (! ((var_1_1 > var_1_3) || var_1_7));
 }
 signed long int stepLocal_0 = var_1_11;
 if (var_1_3 <= var_1_1) {
  if (((((-8) < 0 ) ? -(-8) : (-8))) <= stepLocal_0) {
   var_1_10 = ((((var_1_2) > (8.75f)) ? (var_1_2) : (8.75f)));
  } else {
   var_1_10 = (var_1_12 + (var_1_13 - var_1_14));
  }
 } else {
  var_1_10 = var_1_13;
 }
 if (var_1_3 >= (var_1_10 + var_1_2)) {
  var_1_8 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_1 == ((float) (var_1_2 - var_1_3))) && ((var_1_5 && var_1_6) ? (var_1_4 == ((unsigned char) (! var_1_7))) : (var_1_4 == ((unsigned char) (! ((var_1_1 > var_1_3) || var_1_7)))))) && ((var_1_3 >= (var_1_10 + var_1_2)) ? (var_1_8 == ((unsigned char) var_1_9)) : 1)) && ((var_1_3 <= var_1_1) ? ((((((-8) < 0 ) ? -(-8) : (-8))) <= var_1_11) ? (var_1_10 == ((float) ((((var_1_2) > (8.75f)) ? (var_1_2) : (8.75f))))) : (var_1_10 == ((float) (var_1_12 + (var_1_13 - var_1_14))))) : (var_1_10 == ((float) var_1_13)))
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
