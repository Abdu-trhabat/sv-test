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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 4;
signed char var_1_2 = 32;
signed char var_1_3 = 50;
signed long int var_1_4 = 4;
signed long int var_1_5 = 0;
unsigned short int var_1_6 = 128;
float var_1_7 = 1.5;
float var_1_8 = 127.2;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 128;
unsigned short int var_1_11 = 26003;
unsigned char var_1_12 = 4;
float var_1_13 = 1.2;
unsigned char var_1_14 = 1;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - var_1_3);
 if (((var_1_3 >> 2) * var_1_1) <= (var_1_2 / 1000000)) {
  var_1_4 = (5 - (var_1_3 + var_1_5));
 } else {
  var_1_4 = var_1_3;
 }
 unsigned char stepLocal_0 = var_1_4 > var_1_2;
 if ((7.7f - var_1_7) > var_1_8) {
  if (stepLocal_0 && var_1_9) {
   if (! ((var_1_10 - var_1_3) < -4)) {
    var_1_6 = ((var_1_11 - var_1_3) + var_1_10);
   } else {
    var_1_6 = var_1_11;
   }
  } else {
   var_1_6 = var_1_10;
  }
 }
 if (var_1_7 <= var_1_13) {
  var_1_12 = (var_1_14 + var_1_3);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 126);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 255);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 16383);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_1 == ((signed char) (var_1_2 - var_1_3))) && ((((var_1_3 >> 2) * var_1_1) <= (var_1_2 / 1000000)) ? (var_1_4 == ((signed long int) (5 - (var_1_3 + var_1_5)))) : (var_1_4 == ((signed long int) var_1_3)))) && (((7.7f - var_1_7) > var_1_8) ? (((var_1_4 > var_1_2) && var_1_9) ? ((! ((var_1_10 - var_1_3) < -4)) ? (var_1_6 == ((unsigned short int) ((var_1_11 - var_1_3) + var_1_10))) : (var_1_6 == ((unsigned short int) var_1_11))) : (var_1_6 == ((unsigned short int) var_1_10))) : 1)) && ((var_1_7 <= var_1_13) ? (var_1_12 == ((unsigned char) (var_1_14 + var_1_3))) : 1)
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
