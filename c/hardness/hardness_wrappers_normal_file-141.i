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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
float var_1_2 = 0.8;
float var_1_3 = 99.25;
signed char var_1_4 = 50;
signed char var_1_5 = 4;
signed char var_1_6 = 4;
signed char var_1_7 = 10;
signed short int var_1_8 = 64;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
unsigned char var_1_11 = 2;
unsigned char var_1_12 = 128;
double var_1_13 = 5.2;
signed long int var_1_14 = 10;
double var_1_15 = 9.7;
void initially(void) {
}
void step(void) {
 if (var_1_2 < var_1_3) {
  var_1_1 = (((((-32 + var_1_4)) > (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((-32 + var_1_4)) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))));
 } else {
  var_1_1 = ((1 - var_1_7) + var_1_4);
 }
 if (var_1_9 || ((var_1_7 / var_1_10) <= (var_1_6 * var_1_4))) {
  var_1_8 = var_1_7;
 }
 var_1_11 = (var_1_12 - var_1_7);
 signed long int stepLocal_1 = -100;
 signed long int stepLocal_0 = 4;
 if (stepLocal_1 >= var_1_4) {
  if (var_1_2 > 63.5f) {
   if (! ((64 >> var_1_14) >= var_1_5)) {
    if (stepLocal_0 >= var_1_8) {
     var_1_13 = ((((var_1_15) > (10.2)) ? (var_1_15) : (10.2)));
    }
   } else {
    var_1_13 = var_1_15;
   }
  } else {
   var_1_13 = var_1_15;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 255);
 assume_abort_if_not(var_1_10 != 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 30);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 < var_1_3) ? (var_1_1 == ((signed char) (((((-32 + var_1_4)) > (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((-32 + var_1_4)) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))))) : (var_1_1 == ((signed char) ((1 - var_1_7) + var_1_4)))) && ((var_1_9 || ((var_1_7 / var_1_10) <= (var_1_6 * var_1_4))) ? (var_1_8 == ((signed short int) var_1_7)) : 1)) && (var_1_11 == ((unsigned char) (var_1_12 - var_1_7)))) && ((-100 >= var_1_4) ? ((var_1_2 > 63.5f) ? ((! ((64 >> var_1_14) >= var_1_5)) ? ((4 >= var_1_8) ? (var_1_13 == ((double) ((((var_1_15) > (10.2)) ? (var_1_15) : (10.2))))) : 1) : (var_1_13 == ((double) var_1_15))) : (var_1_13 == ((double) var_1_15))) : 1)
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
