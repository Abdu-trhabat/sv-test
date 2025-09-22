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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = -0.6;
signed long int var_1_3 = -32;
float var_1_5 = 127.2;
float var_1_6 = 4.5;
float var_1_7 = 2.25;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
signed char var_1_11 = -128;
signed char var_1_12 = 32;
signed char var_1_13 = 1;
signed char var_1_14 = 16;
signed char var_1_15 = -1;
signed char var_1_16 = -16;
void initially(void) {
}
void step(void) {
 var_1_8 = (var_1_9 && var_1_10);
 var_1_13 = ((((var_1_12) > ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16))) ? (var_1_12) : ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16))));
 signed char stepLocal_1 = var_1_13;
 unsigned char stepLocal_0 = var_1_8;
 if (((var_1_13 * -2) != var_1_3) || stepLocal_0) {
  if (stepLocal_1 > var_1_3) {
   if (! (var_1_3 > var_1_13)) {
    var_1_1 = (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7);
   } else {
    var_1_1 = var_1_6;
   }
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = 99.75f;
 }
 if (var_1_5 <= var_1_1) {
  var_1_11 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -126);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_13 * -2) != var_1_3) || var_1_8) ? ((var_1_13 > var_1_3) ? ((! (var_1_3 > var_1_13)) ? (var_1_1 == ((float) (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))) : (var_1_1 == ((float) var_1_6))) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) 99.75f))) && (var_1_8 == ((unsigned char) (var_1_9 && var_1_10)))) && ((var_1_5 <= var_1_1) ? (var_1_11 == ((signed char) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : 1)) && (var_1_13 == ((signed char) ((((var_1_12) > ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16))) ? (var_1_12) : ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16))))))
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
