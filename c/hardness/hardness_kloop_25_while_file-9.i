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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch925_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
unsigned char var_1_3 = 4;
float var_1_4 = 3.25;
float var_1_5 = 2.625;
float var_1_6 = 32.4;
unsigned short int var_1_8 = 200;
signed long int var_1_9 = 10;
signed long int var_1_10 = 1653905226;
float var_1_11 = 15.6;
float var_1_12 = 999.2;
unsigned short int var_1_13 = 256;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned short int last_1_var_1_8 = 200;
unsigned char last_1_var_1_14 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_8 <= 16) {
  var_1_1 = var_1_3;
 } else {
  if (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) < var_1_6) {
   if (last_1_var_1_14) {
    var_1_1 = var_1_3;
   } else {
    var_1_1 = 64;
   }
  } else {
   var_1_1 = var_1_3;
  }
 }
 var_1_13 = var_1_1;
 var_1_8 = ((((var_1_13) > (var_1_3)) ? (var_1_13) : (var_1_3)));
 var_1_11 = var_1_12;
 var_1_14 = var_1_15;
 if (var_1_11 > 9999999.5f) {
  var_1_9 = ((var_1_10 - var_1_1) - var_1_3);
 } else {
  var_1_9 = ((((((var_1_8 - var_1_3) + (var_1_13 - var_1_1))) > (var_1_10)) ? (((var_1_8 - var_1_3) + (var_1_13 - var_1_1))) : (var_1_10)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1073741822);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_14 = var_1_14;
}
int property(void) {
 return ((((((last_1_var_1_8 <= 16) ? (var_1_1 == ((unsigned char) var_1_3)) : ((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) < var_1_6) ? (last_1_var_1_14 ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) 64))) : (var_1_1 == ((unsigned char) var_1_3)))) && (var_1_8 == ((unsigned short int) ((((var_1_13) > (var_1_3)) ? (var_1_13) : (var_1_3)))))) && ((var_1_11 > 9999999.5f) ? (var_1_9 == ((signed long int) ((var_1_10 - var_1_1) - var_1_3))) : (var_1_9 == ((signed long int) ((((((var_1_8 - var_1_3) + (var_1_13 - var_1_1))) > (var_1_10)) ? (((var_1_8 - var_1_3) + (var_1_13 - var_1_1))) : (var_1_10))))))) && (var_1_11 == ((float) var_1_12))) && (var_1_13 == ((unsigned short int) var_1_1))) && (var_1_14 == ((unsigned char) var_1_15))
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
