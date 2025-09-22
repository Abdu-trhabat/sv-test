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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 16;
signed char var_1_4 = 64;
signed char var_1_5 = 64;
signed long int var_1_6 = 8;
signed long int var_1_7 = 2;
signed short int var_1_8 = 1;
unsigned char var_1_9 = 2;
unsigned short int var_1_10 = 50;
float var_1_11 = 128.8;
float var_1_12 = 8.4;
signed char last_1_var_1_1 = 16;
unsigned short int last_1_var_1_10 = 50;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_5;
 if (var_1_4 <= stepLocal_1) {
  var_1_6 = (last_1_var_1_10 + (var_1_4 + last_1_var_1_1));
 } else {
  var_1_6 = ((((last_1_var_1_1) > (((var_1_5 + 16) - var_1_7))) ? (last_1_var_1_1) : (((var_1_5 + 16) - var_1_7))));
 }
 var_1_10 = var_1_5;
 var_1_11 = var_1_12;
 signed long int stepLocal_3 = var_1_7 >> var_1_9;
 signed long int stepLocal_2 = var_1_6 + (var_1_5 - 100);
 if (var_1_4 >= stepLocal_2) {
  if (128 <= stepLocal_3) {
   var_1_8 = var_1_10;
  }
 }
 signed short int stepLocal_0 = var_1_8;
 if (stepLocal_0 < var_1_6) {
  var_1_1 = (var_1_4 - (var_1_5 - 5));
 } else {
  var_1_1 = var_1_4;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 30);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((((var_1_8 < var_1_6) ? (var_1_1 == ((signed char) (var_1_4 - (var_1_5 - 5)))) : (var_1_1 == ((signed char) var_1_4))) && ((var_1_4 <= var_1_5) ? (var_1_6 == ((signed long int) (last_1_var_1_10 + (var_1_4 + last_1_var_1_1)))) : (var_1_6 == ((signed long int) ((((last_1_var_1_1) > (((var_1_5 + 16) - var_1_7))) ? (last_1_var_1_1) : (((var_1_5 + 16) - var_1_7)))))))) && ((var_1_4 >= (var_1_6 + (var_1_5 - 100))) ? ((128 <= (var_1_7 >> var_1_9)) ? (var_1_8 == ((signed short int) var_1_10)) : 1) : 1)) && (var_1_10 == ((unsigned short int) var_1_5))) && (var_1_11 == ((float) var_1_12))
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
