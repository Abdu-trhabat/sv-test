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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
unsigned short int var_1_3 = 2;
unsigned short int var_1_4 = 32;
signed long int var_1_5 = 256;
unsigned short int var_1_6 = 10;
signed char var_1_7 = 2;
signed long int var_1_8 = 1;
signed long int var_1_9 = 2;
unsigned long int var_1_10 = 32;
double var_1_11 = 4.25;
double var_1_12 = 1000000000000000.5;
unsigned long int var_1_13 = 4054687923;
float var_1_14 = 100000000.5;
float var_1_15 = 4.8;
unsigned long int last_1_var_1_1 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_7 >> (var_1_8 + var_1_9)) >= (((((last_1_var_1_1 + var_1_5)) > (var_1_3)) ? ((last_1_var_1_1 + var_1_5)) : (var_1_3)))) {
  var_1_6 = var_1_8;
 } else {
  if (var_1_4 < 64) {
   var_1_6 = var_1_7;
  }
 }
 if ((- var_1_11) != var_1_12) {
  var_1_10 = (var_1_13 - (var_1_4 + ((((var_1_6) < (var_1_3)) ? (var_1_6) : (var_1_3)))));
 }
 unsigned long int stepLocal_1 = ((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6))) / var_1_4;
 unsigned long int stepLocal_0 = var_1_10;
 if (stepLocal_1 > var_1_10) {
  if (stepLocal_0 == var_1_6) {
   var_1_1 = 1000000000u;
  } else {
   var_1_1 = 128u;
  }
 }
 signed long int stepLocal_2 = var_1_9;
 if (stepLocal_2 == (var_1_4 | -5)) {
  var_1_14 = ((((1.5f) > (var_1_15)) ? (1.5f) : (var_1_15)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 3);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 3);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return (((((((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6))) / var_1_4) > var_1_10) ? ((var_1_10 == var_1_6) ? (var_1_1 == ((unsigned long int) 1000000000u)) : (var_1_1 == ((unsigned long int) 128u))) : 1) && (((var_1_7 >> (var_1_8 + var_1_9)) >= (((((last_1_var_1_1 + var_1_5)) > (var_1_3)) ? ((last_1_var_1_1 + var_1_5)) : (var_1_3)))) ? (var_1_6 == ((unsigned short int) var_1_8)) : ((var_1_4 < 64) ? (var_1_6 == ((unsigned short int) var_1_7)) : 1))) && (((- var_1_11) != var_1_12) ? (var_1_10 == ((unsigned long int) (var_1_13 - (var_1_4 + ((((var_1_6) < (var_1_3)) ? (var_1_6) : (var_1_3))))))) : 1)) && ((var_1_9 == (var_1_4 | -5)) ? (var_1_14 == ((float) ((((1.5f) > (var_1_15)) ? (1.5f) : (var_1_15))))) : 1)
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
