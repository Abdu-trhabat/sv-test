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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1;
float var_1_2 = 63.25;
float var_1_3 = 9999999999.875;
float var_1_5 = 4.25;
float var_1_6 = 2.375;
float var_1_7 = 10.8;
unsigned long int var_1_8 = 4;
unsigned char var_1_9 = 8;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 5;
signed char var_1_13 = -32;
signed char var_1_14 = -25;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned long int var_1_17 = 1;
unsigned long int var_1_18 = 500;
void initially(void) {
}
void step(void) {
 var_1_15 = var_1_16;
 var_1_17 = var_1_12;
 var_1_18 = var_1_10;
 unsigned char stepLocal_0 = var_1_2 > var_1_3;
 if (stepLocal_0 && var_1_15) {
  if (((((var_1_2) > ((- var_1_3))) ? (var_1_2) : ((- var_1_3)))) != var_1_5) {
   if (! (var_1_2 >= (var_1_6 - var_1_7))) {
    var_1_1 = var_1_8;
   } else {
    var_1_1 = 16u;
   }
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = 10000000u;
 }
 if (var_1_15) {
  var_1_9 = (var_1_10 - (var_1_11 + var_1_12));
 }
 if (var_1_15) {
  var_1_13 = (var_1_12 + var_1_14);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 64);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 > var_1_3) && var_1_15) ? ((((((var_1_2) > ((- var_1_3))) ? (var_1_2) : ((- var_1_3)))) != var_1_5) ? ((! (var_1_2 >= (var_1_6 - var_1_7))) ? (var_1_1 == ((unsigned long int) var_1_8)) : (var_1_1 == ((unsigned long int) 16u))) : (var_1_1 == ((unsigned long int) var_1_8))) : (var_1_1 == ((unsigned long int) 10000000u))) && (var_1_15 ? (var_1_9 == ((unsigned char) (var_1_10 - (var_1_11 + var_1_12)))) : 1)) && (var_1_15 ? (var_1_13 == ((signed char) (var_1_12 + var_1_14))) : 1)) && (var_1_15 == ((unsigned char) var_1_16))) && (var_1_17 == ((unsigned long int) var_1_12))) && (var_1_18 == ((unsigned long int) var_1_10))
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
