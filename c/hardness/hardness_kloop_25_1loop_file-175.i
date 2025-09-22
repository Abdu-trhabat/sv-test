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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
unsigned char var_1_2 = 64;
unsigned char var_1_3 = 32;
unsigned char var_1_4 = 64;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 32;
float var_1_8 = 31.625;
signed long int var_1_9 = 4;
float var_1_10 = 10.5;
signed char var_1_11 = -5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_2;
 if (stepLocal_0 > var_1_3) {
  var_1_1 = var_1_4;
 } else {
  var_1_1 = (var_1_5 - ((((var_1_6 + var_1_7) < 0 ) ? -(var_1_6 + var_1_7) : (var_1_6 + var_1_7))));
 }
 if ((var_1_6 >= var_1_1) || ((var_1_5 / var_1_9) < var_1_1)) {
  var_1_8 = var_1_10;
 }
 unsigned char stepLocal_2 = var_1_6;
 signed long int stepLocal_1 = (((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5));
 if (stepLocal_2 >= var_1_4) {
  if (9.65 < ((2.8 * var_1_8) + var_1_10)) {
   if (32 > stepLocal_1) {
    var_1_11 = (var_1_6 - var_1_7);
   } else {
    var_1_11 = var_1_6;
   }
  } else {
   var_1_11 = var_1_7;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 64);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 > var_1_3) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) (var_1_5 - ((((var_1_6 + var_1_7) < 0 ) ? -(var_1_6 + var_1_7) : (var_1_6 + var_1_7))))))) && (((var_1_6 >= var_1_1) || ((var_1_5 / var_1_9) < var_1_1)) ? (var_1_8 == ((float) var_1_10)) : 1)) && ((var_1_6 >= var_1_4) ? ((9.65 < ((2.8 * var_1_8) + var_1_10)) ? ((32 > ((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5)))) ? (var_1_11 == ((signed char) (var_1_6 - var_1_7))) : (var_1_11 == ((signed char) var_1_6))) : (var_1_11 == ((signed char) var_1_7))) : 1)
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
