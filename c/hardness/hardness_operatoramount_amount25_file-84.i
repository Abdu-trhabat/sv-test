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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
signed long int var_1_2 = 2;
signed long int var_1_3 = 256;
unsigned char var_1_4 = 25;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 10;
float var_1_9 = 9.6;
float var_1_11 = 63.4;
float var_1_12 = 32.125;
signed long int var_1_13 = -8;
signed short int var_1_14 = -2;
float last_1_var_1_9 = 9.6;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_2;
 if (stepLocal_0 != var_1_3) {
  var_1_1 = (var_1_4 + ((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7))));
 } else {
  var_1_1 = ((((((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) < (var_1_7)) ? (((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) : (var_1_7)));
 }
 unsigned char stepLocal_1 = var_1_4;
 if (var_1_5 > stepLocal_1) {
  var_1_8 = (128 - ((((10) > (var_1_5)) ? (10) : (var_1_5))));
 }
 var_1_13 = var_1_7;
 var_1_14 = var_1_7;
 signed long int stepLocal_3 = -8;
 unsigned char stepLocal_2 = var_1_7;
 if ((last_1_var_1_9 * var_1_11) > 16.75f) {
  if (stepLocal_2 <= var_1_13) {
   if (stepLocal_3 > var_1_13) {
    var_1_9 = var_1_12;
   }
  } else {
   var_1_9 = var_1_12;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
}
int property(void) {
 return (((((var_1_2 != var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 + ((((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) > (var_1_7)) ? (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))) : (var_1_7)))))) : (var_1_1 == ((unsigned char) ((((((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) < (var_1_7)) ? (((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6)))) : (var_1_7)))))) && ((var_1_5 > var_1_4) ? (var_1_8 == ((unsigned char) (128 - ((((10) > (var_1_5)) ? (10) : (var_1_5)))))) : 1)) && (((last_1_var_1_9 * var_1_11) > 16.75f) ? ((var_1_7 <= var_1_13) ? ((-8 > var_1_13) ? (var_1_9 == ((float) var_1_12)) : 1) : (var_1_9 == ((float) var_1_12))) : 1)) && (var_1_13 == ((signed long int) var_1_7))) && (var_1_14 == ((signed short int) var_1_7))
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
