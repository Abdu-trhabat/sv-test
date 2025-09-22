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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10425_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 256;
unsigned short int var_1_2 = 4;
unsigned short int var_1_3 = 25;
unsigned short int var_1_4 = 0;
float var_1_5 = 32.75;
double var_1_6 = 1000000000.5;
double var_1_7 = 8.8;
double var_1_8 = 500.34;
double var_1_9 = 99.25;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
float var_1_13 = 49.8;
float var_1_14 = 8.8;
unsigned short int var_1_15 = 64;
unsigned short int var_1_16 = 32;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = (((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4));
 if (var_1_2 > stepLocal_1) {
  if (var_1_2 < stepLocal_0) {
   var_1_1 = var_1_4;
  }
 } else {
  var_1_1 = var_1_2;
 }
 unsigned char stepLocal_2 = var_1_12;
 if (var_1_6 > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) + var_1_9)) {
  if ((var_1_10 && var_1_11) && stepLocal_2) {
   var_1_5 = (var_1_13 + var_1_14);
  } else {
   var_1_5 = 7.5f;
  }
 } else {
  var_1_5 = var_1_14;
 }
 if (var_1_12) {
  if (var_1_7 > ((((1.000000000025E10) < 0 ) ? -(1.000000000025E10) : (1.000000000025E10)))) {
   var_1_15 = ((((16) < (var_1_16)) ? (16) : (var_1_16)));
  }
 } else {
  var_1_15 = var_1_16;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 > var_1_3) ? ((var_1_2 < ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) ? (var_1_1 == ((signed long int) var_1_4)) : 1) : (var_1_1 == ((signed long int) var_1_2))) && ((var_1_6 > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) + var_1_9)) ? (((var_1_10 && var_1_11) && var_1_12) ? (var_1_5 == ((float) (var_1_13 + var_1_14))) : (var_1_5 == ((float) 7.5f))) : (var_1_5 == ((float) var_1_14)))) && (var_1_12 ? ((var_1_7 > ((((1.000000000025E10) < 0 ) ? -(1.000000000025E10) : (1.000000000025E10)))) ? (var_1_15 == ((unsigned short int) ((((16) < (var_1_16)) ? (16) : (var_1_16))))) : 1) : (var_1_15 == ((unsigned short int) var_1_16)))
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
