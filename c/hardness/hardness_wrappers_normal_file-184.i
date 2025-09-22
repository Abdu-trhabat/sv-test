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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 25;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 128;
unsigned short int var_1_6 = 8;
signed long int var_1_7 = 200;
signed long int var_1_8 = 256;
float var_1_9 = 5.25;
unsigned char var_1_10 = 0;
float var_1_11 = 7.75;
float var_1_12 = 10.5;
float var_1_13 = 31.4;
signed long int var_1_14 = -16;
unsigned short int var_1_15 = 25;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_3;
 if (var_1_2 <= stepLocal_0) {
  var_1_1 = (var_1_4 - 32);
 } else {
  var_1_1 = ((((((((var_1_4) > (100)) ? (var_1_4) : (100)))) > (var_1_5)) ? (((((var_1_4) > (100)) ? (var_1_4) : (100)))) : (var_1_5)));
 }
 unsigned char stepLocal_2 = var_1_5;
 if (((var_1_1 + var_1_8) + var_1_2) < stepLocal_2) {
  if (var_1_10) {
   var_1_9 = ((((var_1_11 - 4.25f) < 0 ) ? -(var_1_11 - 4.25f) : (var_1_11 - 4.25f)));
  } else {
   var_1_9 = (var_1_11 - (8.966829933912052E18f - var_1_12));
  }
 } else {
  var_1_9 = var_1_12;
 }
 var_1_13 = var_1_11;
 var_1_15 = var_1_4;
 unsigned long int stepLocal_1 = ((((var_1_15) > (var_1_2)) ? (var_1_15) : (var_1_2))) / ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
 if ((var_1_5 + var_1_4) > stepLocal_1) {
  var_1_6 = ((((var_1_4) > (var_1_15)) ? (var_1_4) : (var_1_15)));
 }
 var_1_14 = var_1_15;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 <= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - 32))) : (var_1_1 == ((unsigned char) ((((((((var_1_4) > (100)) ? (var_1_4) : (100)))) > (var_1_5)) ? (((((var_1_4) > (100)) ? (var_1_4) : (100)))) : (var_1_5)))))) && (((var_1_5 + var_1_4) > (((((var_1_15) > (var_1_2)) ? (var_1_15) : (var_1_2))) / ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (var_1_6 == ((unsigned short int) ((((var_1_4) > (var_1_15)) ? (var_1_4) : (var_1_15))))) : 1)) && ((((var_1_1 + var_1_8) + var_1_2) < var_1_5) ? (var_1_10 ? (var_1_9 == ((float) ((((var_1_11 - 4.25f) < 0 ) ? -(var_1_11 - 4.25f) : (var_1_11 - 4.25f))))) : (var_1_9 == ((float) (var_1_11 - (8.966829933912052E18f - var_1_12))))) : (var_1_9 == ((float) var_1_12)))) && (var_1_13 == ((float) var_1_11))) && (var_1_14 == ((signed long int) var_1_15))) && (var_1_15 == ((unsigned short int) var_1_4))
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
