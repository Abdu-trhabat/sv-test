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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 0;
signed long int var_1_3 = -16;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 64;
float var_1_8 = 64.0;
float var_1_9 = 32.0;
float var_1_10 = 50.0;
float var_1_11 = 128.0;
float var_1_12 = 200.0;
unsigned short int var_1_13 = 64;
unsigned short int var_1_14 = 1;
unsigned short int var_1_15 = 8;
float var_1_16 = -32.0;
signed short int var_1_17 = 64;
signed char var_1_18 = 1;
signed char var_1_19 = 5;
float last_1_var_1_16 = -32.0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_3;
 if (var_1_2) {
  if (64 < stepLocal_0) {
   var_1_1 = (! (var_1_4 && var_1_5));
  }
 } else {
  if (var_1_5) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_4;
  }
 }
 if (((var_1_8 - var_1_9) / -128.0f) < (((((var_1_10 + var_1_11)) < (var_1_12)) ? ((var_1_10 + var_1_11)) : (var_1_12)))) {
  var_1_7 = (var_1_13 + ((var_1_14 + var_1_15) + 128));
 }
 if (var_1_12 <= last_1_var_1_16) {
  var_1_16 = -8.0f;
 }
 if (var_1_4) {
  if (var_1_16 <= (- var_1_8)) {
   var_1_17 = (var_1_14 + var_1_15);
  }
 } else {
  var_1_17 = var_1_14;
 }
 var_1_18 = var_1_19;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 8192);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 8192);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return ((((var_1_2 ? ((64 < var_1_3) ? (var_1_1 == ((unsigned char) (! (var_1_4 && var_1_5)))) : 1) : (var_1_5 ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_4)))) && ((((var_1_8 - var_1_9) / -128.0f) < (((((var_1_10 + var_1_11)) < (var_1_12)) ? ((var_1_10 + var_1_11)) : (var_1_12)))) ? (var_1_7 == ((unsigned short int) (var_1_13 + ((var_1_14 + var_1_15) + 128)))) : 1)) && ((var_1_12 <= last_1_var_1_16) ? (var_1_16 == ((float) -8.0f)) : 1)) && (var_1_4 ? ((var_1_16 <= (- var_1_8)) ? (var_1_17 == ((signed short int) (var_1_14 + var_1_15))) : 1) : (var_1_17 == ((signed short int) var_1_14)))) && (var_1_18 == ((signed char) var_1_19))
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
