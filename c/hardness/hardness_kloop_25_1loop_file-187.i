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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18725_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 200;
unsigned short int var_1_4 = 100;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -100;
signed short int var_1_7 = 0;
double var_1_8 = 500.75;
double var_1_9 = 99999999999999.12;
double var_1_10 = 63.25;
float var_1_11 = 64.8;
float var_1_12 = 32.5;
float var_1_13 = 256.19;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_1 = var_1_4;
 unsigned char stepLocal_0 = var_1_5;
 if (var_1_2) {
  if (var_1_3 <= stepLocal_1) {
   if (stepLocal_0 && ((var_1_4 / var_1_6) < var_1_3)) {
    var_1_1 = var_1_4;
   }
  } else {
   var_1_1 = var_1_3;
  }
 }
 var_1_7 = 50;
 unsigned long int stepLocal_2 = var_1_1;
 if (var_1_6 != stepLocal_2) {
  var_1_8 = (((((2.9) < (var_1_9)) ? (2.9) : (var_1_9))) + var_1_10);
 }
 unsigned long int stepLocal_4 = - var_1_1;
 unsigned long int stepLocal_3 = var_1_1;
 if (var_1_1 != stepLocal_4) {
  var_1_11 = ((((var_1_9) < ((var_1_12 - var_1_13))) ? (var_1_9) : ((var_1_12 - var_1_13))));
 } else {
  if (stepLocal_3 <= (~ 1u)) {
   var_1_11 = var_1_12;
  } else {
   var_1_11 = var_1_9;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 ? ((var_1_3 <= var_1_4) ? ((var_1_5 && ((var_1_4 / var_1_6) < var_1_3)) ? (var_1_1 == ((unsigned long int) var_1_4)) : 1) : (var_1_1 == ((unsigned long int) var_1_3))) : 1) && (var_1_7 == ((signed short int) 50))) && ((var_1_6 != var_1_1) ? (var_1_8 == ((double) (((((2.9) < (var_1_9)) ? (2.9) : (var_1_9))) + var_1_10))) : 1)) && ((var_1_1 != (- var_1_1)) ? (var_1_11 == ((float) ((((var_1_9) < ((var_1_12 - var_1_13))) ? (var_1_9) : ((var_1_12 - var_1_13)))))) : ((var_1_1 <= (~ 1u)) ? (var_1_11 == ((float) var_1_12)) : (var_1_11 == ((float) var_1_9))))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
