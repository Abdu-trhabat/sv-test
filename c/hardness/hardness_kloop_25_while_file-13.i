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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 25;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 8;
unsigned short int var_1_4 = 256;
signed char var_1_5 = 16;
double var_1_6 = 100000000000000.34;
double var_1_7 = 1.15;
double var_1_8 = 0.0;
double var_1_9 = -0.8;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 200;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 5;
unsigned char var_1_14 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 }
 if ((var_1_1 == var_1_4) || var_1_2) {
  var_1_5 = -4;
 }
 var_1_6 = ((((var_1_7) < (((var_1_8 - 25.587) - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) ? (var_1_7) : (((var_1_8 - 25.587) - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))));
 unsigned short int stepLocal_0 = var_1_3;
 if (stepLocal_0 < (var_1_4 * var_1_1)) {
  if ((((((var_1_8) < (var_1_6)) ? (var_1_8) : (var_1_6))) + var_1_7) <= 15.5) {
   var_1_10 = ((var_1_11 - var_1_12) - ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))));
  } else {
   var_1_10 = var_1_13;
  }
 } else {
  var_1_10 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 4611686.018427383000e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 190);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 ? (var_1_1 == ((unsigned short int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : 1) && (((var_1_1 == var_1_4) || var_1_2) ? (var_1_5 == ((signed char) -4)) : 1)) && (var_1_6 == ((double) ((((var_1_7) < (((var_1_8 - 25.587) - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) ? (var_1_7) : (((var_1_8 - 25.587) - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))))))) && ((var_1_3 < (var_1_4 * var_1_1)) ? (((((((var_1_8) < (var_1_6)) ? (var_1_8) : (var_1_6))) + var_1_7) <= 15.5) ? (var_1_10 == ((unsigned char) ((var_1_11 - var_1_12) - ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))))) : (var_1_10 == ((unsigned char) var_1_13))) : (var_1_10 == ((unsigned char) var_1_12)))
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
