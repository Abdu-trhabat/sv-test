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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 256;
signed long int var_1_2 = 256;
signed long int var_1_3 = 0;
signed long int var_1_4 = -2;
signed long int var_1_5 = 8;
signed long int var_1_6 = 10;
signed long int var_1_7 = 5;
signed long int var_1_8 = 128;
signed short int var_1_9 = -1;
signed short int var_1_10 = 1;
signed short int var_1_11 = 10;
signed char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = 2;
double var_1_15 = 1.8;
double var_1_16 = 25.8;
double var_1_17 = 5.5;
double var_1_18 = 4.3;
double var_1_19 = 500.7;
double var_1_20 = 127.5;
double var_1_21 = 1.5;
double var_1_22 = 99.84;
unsigned short int var_1_23 = 4;
signed char var_1_24 = -64;
void initially(void) {
}
void step(void) {
 if ((((((var_1_2 - var_1_3)) > (var_1_4)) ? ((var_1_2 - var_1_3)) : (var_1_4))) <= (((((var_1_5 - var_1_6)) < ((var_1_7 % var_1_8))) ? ((var_1_5 - var_1_6)) : ((var_1_7 % var_1_8))))) {
  var_1_1 = (((((var_1_9 - var_1_10)) < (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11)));
 }
 unsigned char stepLocal_0 = var_1_1 <= var_1_11;
 if (var_1_13 || stepLocal_0) {
  var_1_12 = ((((1 - var_1_14) < 0 ) ? -(1 - var_1_14) : (1 - var_1_14)));
 } else {
  var_1_12 = var_1_14;
 }
 signed long int stepLocal_1 = var_1_2 / var_1_8;
 if (var_1_10 <= stepLocal_1) {
  var_1_15 = ((((((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) < (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19))))) ? (((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) : (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19))))));
 } else {
  var_1_15 = (var_1_20 - var_1_21);
 }
 var_1_22 = var_1_19;
 var_1_23 = var_1_10;
 var_1_24 = var_1_14;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((var_1_2 - var_1_3)) > (var_1_4)) ? ((var_1_2 - var_1_3)) : (var_1_4))) <= (((((var_1_5 - var_1_6)) < ((var_1_7 % var_1_8))) ? ((var_1_5 - var_1_6)) : ((var_1_7 % var_1_8))))) ? (var_1_1 == ((signed short int) (((((var_1_9 - var_1_10)) < (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11))))) : 1) && ((var_1_13 || (var_1_1 <= var_1_11)) ? (var_1_12 == ((signed char) ((((1 - var_1_14) < 0 ) ? -(1 - var_1_14) : (1 - var_1_14))))) : (var_1_12 == ((signed char) var_1_14)))) && ((var_1_10 <= (var_1_2 / var_1_8)) ? (var_1_15 == ((double) ((((((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) < (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19))))) ? (((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) > (var_1_18)) ? (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) : (var_1_18)))) : (((((3.6) > (var_1_19)) ? (3.6) : (var_1_19)))))))) : (var_1_15 == ((double) (var_1_20 - var_1_21))))) && (var_1_22 == ((double) var_1_19))) && (var_1_23 == ((unsigned short int) var_1_10))) && (var_1_24 == ((signed char) var_1_14))
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
