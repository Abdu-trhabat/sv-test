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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 4.0;
unsigned char var_1_2 = 0;
double var_1_3 = 4.0;
double var_1_4 = 64.0;
double var_1_5 = 4.0;
double var_1_6 = 256.0;
double var_1_7 = -64.0;
unsigned char var_1_8 = 1;
signed long int var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed char var_1_12 = -16;
signed char var_1_13 = 5;
signed char var_1_14 = 5;
signed char var_1_15 = 0;
signed char var_1_16 = 5;
unsigned char last_1_var_1_8 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_8) {
  var_1_1 = (((((var_1_3 - ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) > ((var_1_6 + var_1_7))) ? ((var_1_3 - ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : ((var_1_6 + var_1_7))));
 } else {
  var_1_1 = (((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5))) - var_1_4);
 }
 unsigned char stepLocal_0 = var_1_2 && (-16 > var_1_9);
 if (var_1_7 > -32.0) {
  if ((var_1_1 > (- var_1_6)) || stepLocal_0) {
   var_1_8 = var_1_10;
  } else {
   var_1_8 = var_1_11;
  }
 } else {
  var_1_8 = 0;
 }
 if (var_1_8) {
  var_1_12 = (var_1_13 + (10 - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))));
 }
 if (var_1_13 <= (var_1_15 ^ var_1_14)) {
  var_1_16 = (var_1_15 + var_1_14);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return (((last_1_var_1_8 ? (var_1_1 == ((double) (((((var_1_3 - ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) > ((var_1_6 + var_1_7))) ? ((var_1_3 - ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : ((var_1_6 + var_1_7)))))) : (var_1_1 == ((double) (((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5))) - var_1_4)))) && ((var_1_7 > -32.0) ? (((var_1_1 > (- var_1_6)) || (var_1_2 && (-16 > var_1_9))) ? (var_1_8 == ((unsigned char) var_1_10)) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) 0)))) && (var_1_8 ? (var_1_12 == ((signed char) (var_1_13 + (10 - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))))))) : 1)) && ((var_1_13 <= (var_1_15 ^ var_1_14)) ? (var_1_16 == ((signed char) (var_1_15 + var_1_14))) : 1)
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
