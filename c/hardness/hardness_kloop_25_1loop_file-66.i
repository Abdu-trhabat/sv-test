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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6625_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
unsigned long int var_1_2 = 1;
unsigned long int var_1_3 = 32;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 16;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 38382;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 100;
double var_1_13 = 5.9;
float var_1_14 = 9999999.5;
float var_1_15 = 9.375;
double var_1_16 = 64.75;
double var_1_17 = 99.5;
float var_1_18 = 0.75;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= var_1_3) {
  var_1_1 = (var_1_4 + ((var_1_5 + var_1_6) + (var_1_7 - var_1_8)));
 } else {
  var_1_1 = (var_1_9 - var_1_7);
 }
 if (var_1_11) {
  if (((var_1_4 % var_1_9) * var_1_3) >= var_1_7) {
   var_1_10 = var_1_12;
  }
 }
 if ((var_1_14 + var_1_15) < 16.75f) {
  var_1_13 = ((((((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) < (var_1_17)) ? (((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) : (var_1_17)));
 } else {
  if ((var_1_17 / var_1_18) <= 49.6) {
   var_1_13 = var_1_17;
  } else {
   var_1_13 = var_1_16;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 8192);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 8192);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 8191);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 <= var_1_3) ? (var_1_1 == ((unsigned short int) (var_1_4 + ((var_1_5 + var_1_6) + (var_1_7 - var_1_8))))) : (var_1_1 == ((unsigned short int) (var_1_9 - var_1_7)))) && (var_1_11 ? ((((var_1_4 % var_1_9) * var_1_3) >= var_1_7) ? (var_1_10 == ((unsigned char) var_1_12)) : 1) : 1)) && (((var_1_14 + var_1_15) < 16.75f) ? (var_1_13 == ((double) ((((((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) < (var_1_17)) ? (((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) : (var_1_17))))) : (((var_1_17 / var_1_18) <= 49.6) ? (var_1_13 == ((double) var_1_17)) : (var_1_13 == ((double) var_1_16))))
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
