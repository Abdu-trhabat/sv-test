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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12425_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 64.5;
double var_1_2 = 8.5;
double var_1_3 = 3.2;
double var_1_5 = 127.4;
unsigned char var_1_6 = 0;
double var_1_7 = 7.713;
double var_1_8 = 1.5;
double var_1_9 = 10.4;
signed char var_1_11 = -50;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 500;
unsigned long int var_1_16 = 4;
void initially(void) {
}
void step(void) {
 var_1_15 = var_1_16;
 if ((var_1_7 - (var_1_8 + var_1_9)) < var_1_5) {
  if ((var_1_15 / ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) <= ((64 + var_1_15) + var_1_15)) {
   var_1_6 = var_1_14;
  } else {
   var_1_6 = 1;
  }
 } else {
  var_1_6 = var_1_14;
 }
 unsigned char stepLocal_0 = var_1_2 == var_1_3;
 if (! (var_1_2 == (15.2 + var_1_3))) {
  if (var_1_6 && stepLocal_0) {
   if (var_1_6) {
    var_1_1 = var_1_5;
   } else {
    var_1_1 = 1.5;
   }
  }
 } else {
  var_1_1 = var_1_5;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427388000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427388000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 127);
 assume_abort_if_not(var_1_11 != 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((! (var_1_2 == (15.2 + var_1_3))) ? ((var_1_6 && (var_1_2 == var_1_3)) ? (var_1_6 ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 1.5))) : 1) : (var_1_1 == ((double) var_1_5))) && (((var_1_7 - (var_1_8 + var_1_9)) < var_1_5) ? (((var_1_15 / ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) <= ((64 + var_1_15) + var_1_15)) ? (var_1_6 == ((unsigned char) var_1_14)) : (var_1_6 == ((unsigned char) 1))) : (var_1_6 == ((unsigned char) var_1_14)))) && (var_1_15 == ((unsigned long int) var_1_16))
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
