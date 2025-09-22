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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = -2.0;
signed long int var_1_4 = 2;
float var_1_5 = -5.0;
double var_1_6 = 5.0;
double var_1_7 = 32.0;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 2;
unsigned char var_1_11 = 100;
signed char var_1_12 = 50;
unsigned char var_1_13 = 128;
float var_1_14 = 64.0;
unsigned long int var_1_15 = 32;
signed short int var_1_16 = 5;
void initially(void) {
}
void step(void) {
 var_1_14 = var_1_7;
 var_1_15 = var_1_13;
 var_1_16 = var_1_15;
 unsigned long int stepLocal_2 = (((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16));
 if (stepLocal_2 < var_1_15) {
  var_1_6 = ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7)));
 }
 signed char stepLocal_4 = var_1_12;
 signed long int stepLocal_3 = (var_1_10 << var_1_15) ^ var_1_12;
 if (var_1_9) {
  var_1_8 = (var_1_10 + var_1_11);
 } else {
  if (var_1_16 < stepLocal_3) {
   if (stepLocal_4 <= var_1_15) {
    var_1_8 = (var_1_13 - var_1_10);
   }
  } else {
   var_1_8 = (((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))) < 0 ) ? -((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))) : ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))));
  }
 }
 signed long int stepLocal_1 = var_1_16 + var_1_8;
 signed long int stepLocal_0 = (((var_1_8) < (var_1_4)) ? (var_1_8) : (var_1_4));
 if (stepLocal_1 < var_1_4) {
  if (var_1_16 <= stepLocal_0) {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = 10.0f;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 127);
 assume_abort_if_not(var_1_13 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_16 + var_1_8) < var_1_4) ? ((var_1_16 <= ((((var_1_8) < (var_1_4)) ? (var_1_8) : (var_1_4)))) ? (var_1_1 == ((float) var_1_5)) : 1) : (var_1_1 == ((float) 10.0f))) && ((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) < var_1_15) ? (var_1_6 == ((double) ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7))))) : 1)) && (var_1_9 ? (var_1_8 == ((unsigned char) (var_1_10 + var_1_11))) : ((var_1_16 < ((var_1_10 << var_1_15) ^ var_1_12)) ? ((var_1_12 <= var_1_15) ? (var_1_8 == ((unsigned char) (var_1_13 - var_1_10))) : 1) : (var_1_8 == ((unsigned char) (((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))) < 0 ) ? -((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))) : ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))))))))) && (var_1_14 == ((float) var_1_7))) && (var_1_15 == ((unsigned long int) var_1_13))) && (var_1_16 == ((signed short int) var_1_15))
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
