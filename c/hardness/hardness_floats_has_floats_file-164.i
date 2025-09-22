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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = -256.0;
double var_1_2 = 200.0;
double var_1_3 = 25.0;
double var_1_4 = -1.0;
double var_1_5 = -16.0;
double var_1_6 = 128.0;
double var_1_7 = 128.0;
signed char var_1_8 = -4;
signed char var_1_9 = 25;
unsigned short int var_1_10 = 16;
signed long int var_1_11 = -16;
unsigned short int var_1_12 = 18278;
unsigned short int var_1_13 = 19305;
unsigned long int var_1_14 = 2;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
float var_1_18 = 0.0;
unsigned long int last_1_var_1_14 = 2;
void initially(void) {
}
void step(void) {
 var_1_1 = ((((((var_1_2 - var_1_3)) > (var_1_4)) ? ((var_1_2 - var_1_3)) : (var_1_4))) + ((((var_1_5) > ((var_1_6 - var_1_7))) ? (var_1_5) : ((var_1_6 - var_1_7)))));
 if (var_1_2 <= var_1_1) {
  var_1_8 = var_1_9;
 }
 if (var_1_11 >= var_1_8) {
  var_1_10 = ((var_1_12 + var_1_13) - 4);
 }
 signed long int stepLocal_1 = -128;
 unsigned char stepLocal_0 = var_1_15;
 if (last_1_var_1_14 <= stepLocal_1) {
  if (var_1_7 < 16.0) {
   var_1_14 = (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) < 0 ) ? -((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) : ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))));
  } else {
   var_1_14 = ((((var_1_12) < ((var_1_10 + var_1_13))) ? (var_1_12) : ((var_1_10 + var_1_13))));
  }
 } else {
  if (stepLocal_0 && (var_1_16 && var_1_17)) {
   var_1_14 = (2673323511u - var_1_13);
  }
 }
 var_1_18 = var_1_4;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16384);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
}
int property(void) {
 return ((((var_1_1 == ((double) ((((((var_1_2 - var_1_3)) > (var_1_4)) ? ((var_1_2 - var_1_3)) : (var_1_4))) + ((((var_1_5) > ((var_1_6 - var_1_7))) ? (var_1_5) : ((var_1_6 - var_1_7))))))) && ((var_1_2 <= var_1_1) ? (var_1_8 == ((signed char) var_1_9)) : 1)) && ((var_1_11 >= var_1_8) ? (var_1_10 == ((unsigned short int) ((var_1_12 + var_1_13) - 4))) : 1)) && ((last_1_var_1_14 <= -128) ? ((var_1_7 < 16.0) ? (var_1_14 == ((unsigned long int) (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) < 0 ) ? -((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) : ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) : (var_1_14 == ((unsigned long int) ((((var_1_12) < ((var_1_10 + var_1_13))) ? (var_1_12) : ((var_1_10 + var_1_13))))))) : ((var_1_15 && (var_1_16 && var_1_17)) ? (var_1_14 == ((unsigned long int) (2673323511u - var_1_13))) : 1))) && (var_1_18 == ((float) var_1_4))
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
