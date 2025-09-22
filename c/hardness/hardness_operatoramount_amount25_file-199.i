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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 31.9;
float var_1_2 = 9.25;
float var_1_3 = 128.25;
float var_1_4 = 31.35;
float var_1_5 = 50.2;
float var_1_6 = 128.6;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
double var_1_9 = 5.75;
double var_1_10 = 31.9;
double var_1_11 = 999999999.125;
double var_1_12 = 49.233;
signed long int var_1_13 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= var_1_3) {
  if (var_1_3 == var_1_2) {
   if (var_1_2 != 4.15f) {
    if (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) >= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) {
     var_1_1 = var_1_6;
    } else {
     var_1_1 = 100.75f;
    }
   } else {
    var_1_1 = var_1_6;
   }
  }
 }
 var_1_7 = (! var_1_8);
 if (var_1_10 >= var_1_1) {
  var_1_9 = (((((((((0.4) > (var_1_11)) ? (0.4) : (var_1_11))) + var_1_12)) > (var_1_6)) ? ((((((0.4) > (var_1_11)) ? (0.4) : (var_1_11))) + var_1_12)) : (var_1_6)));
 }
 if (var_1_6 < var_1_9) {
  if (var_1_8) {
   var_1_13 = 4;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= var_1_3) ? ((var_1_3 == var_1_2) ? ((var_1_2 != 4.15f) ? ((((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) >= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) ? (var_1_1 == ((float) var_1_6)) : (var_1_1 == ((float) 100.75f))) : (var_1_1 == ((float) var_1_6))) : 1) : 1) && (var_1_7 == ((unsigned char) (! var_1_8)))) && ((var_1_10 >= var_1_1) ? (var_1_9 == ((double) (((((((((0.4) > (var_1_11)) ? (0.4) : (var_1_11))) + var_1_12)) > (var_1_6)) ? ((((((0.4) > (var_1_11)) ? (0.4) : (var_1_11))) + var_1_12)) : (var_1_6))))) : 1)) && ((var_1_6 < var_1_9) ? (var_1_8 ? (var_1_13 == ((signed long int) 4)) : 1) : 1)
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
