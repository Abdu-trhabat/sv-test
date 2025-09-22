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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2625_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
double var_1_2 = 255.5;
double var_1_3 = 1.25;
signed short int var_1_4 = 1;
signed short int var_1_5 = -10;
double var_1_6 = 10.4;
double var_1_7 = 100000000000000.2;
double var_1_8 = 99.4;
double var_1_9 = 49.825;
unsigned short int var_1_10 = 50;
unsigned char var_1_11 = 0;
double var_1_12 = 4.3;
double var_1_13 = 2.875;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 50;
void initially(void) {
}
void step(void) {
 if (var_1_2 > var_1_3) {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = ((((-4) < (var_1_5)) ? (-4) : (var_1_5)));
 }
 var_1_6 = (var_1_7 - (var_1_8 + var_1_9));
 signed long int stepLocal_1 = 100;
 unsigned char stepLocal_0 = var_1_11;
 if (stepLocal_0 || (var_1_8 <= (var_1_7 + var_1_9))) {
  if (((var_1_7 + var_1_6) / ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) <= var_1_9) {
   if (var_1_6 > 2.5) {
    if (stepLocal_1 > var_1_1) {
     var_1_10 = var_1_14;
    } else {
     var_1_10 = var_1_15;
    }
   } else {
    var_1_10 = var_1_14;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 > var_1_3) ? (var_1_1 == ((signed short int) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((signed short int) ((((-4) < (var_1_5)) ? (-4) : (var_1_5)))))) && (var_1_6 == ((double) (var_1_7 - (var_1_8 + var_1_9))))) && ((var_1_11 || (var_1_8 <= (var_1_7 + var_1_9))) ? ((((var_1_7 + var_1_6) / ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) <= var_1_9) ? ((var_1_6 > 2.5) ? ((100 > var_1_1) ? (var_1_10 == ((unsigned short int) var_1_14)) : (var_1_10 == ((unsigned short int) var_1_15))) : (var_1_10 == ((unsigned short int) var_1_14))) : 1) : 1)
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
