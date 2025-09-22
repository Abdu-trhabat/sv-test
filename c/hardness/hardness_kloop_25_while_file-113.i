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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 32;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
float var_1_7 = 64.25;
float var_1_8 = 7.5;
signed char var_1_9 = 2;
signed char var_1_11 = 100;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 2;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_2;
 if (stepLocal_0 >= var_1_3) {
  var_1_1 = ((((128) < (var_1_4)) ? (128) : (var_1_4)));
 } else {
  var_1_1 = (((((var_1_5 + var_1_6)) < (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)));
 }
 if (var_1_2 >= var_1_6) {
  var_1_7 = var_1_8;
 }
 if (-64 >= var_1_1) {
  if ((-1000 < 256) && (((((var_1_3) > (var_1_6)) ? (var_1_3) : (var_1_6))) > var_1_4)) {
   if (var_1_4 < var_1_5) {
    var_1_9 = var_1_11;
   }
  } else {
   var_1_9 = -64;
  }
 }
 if ((var_1_3 >> var_1_13) == 0u) {
  var_1_12 = var_1_13;
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
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 31);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned short int) ((((128) < (var_1_4)) ? (128) : (var_1_4))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 + var_1_6)) < (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)))))) && ((var_1_2 >= var_1_6) ? (var_1_7 == ((float) var_1_8)) : 1)) && ((-64 >= var_1_1) ? (((-1000 < 256) && (((((var_1_3) > (var_1_6)) ? (var_1_3) : (var_1_6))) > var_1_4)) ? ((var_1_4 < var_1_5) ? (var_1_9 == ((signed char) var_1_11)) : 1) : (var_1_9 == ((signed char) -64))) : 1)) && (((var_1_3 >> var_1_13) == 0u) ? (var_1_12 == ((unsigned char) var_1_13)) : 1)
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
