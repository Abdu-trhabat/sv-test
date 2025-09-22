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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6650_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 50;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 43463;
unsigned short int var_1_10 = 52427;
float var_1_11 = 256.8;
float var_1_12 = 199.8;
signed short int var_1_13 = 32;
signed short int var_1_14 = -50;
float var_1_15 = 4.5;
double var_1_16 = 0.7;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = (var_1_3 + var_1_4);
 }
 if (var_1_4 >= (var_1_6 - var_1_7)) {
  if (var_1_2) {
   var_1_5 = 8.25;
  }
 }
 signed long int stepLocal_0 = -25;
 if (stepLocal_0 == (var_1_3 * (-5 * var_1_6))) {
  var_1_8 = ((((var_1_9 - var_1_7) < 0 ) ? -(var_1_9 - var_1_7) : (var_1_9 - var_1_7)));
 } else {
  var_1_8 = ((((var_1_9) > ((var_1_10 - var_1_7))) ? (var_1_9) : ((var_1_10 - var_1_7))));
 }
 if (! var_1_2) {
  if ((var_1_8 * 16) >= var_1_3) {
   var_1_11 = var_1_12;
  }
 }
 if (var_1_9 < (- var_1_10)) {
  var_1_13 = (var_1_3 + (var_1_6 + var_1_7));
 } else {
  var_1_13 = (var_1_6 - var_1_7);
 }
 signed long int stepLocal_1 = (((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4));
 if (stepLocal_1 > (var_1_13 / var_1_10)) {
  if ((((((var_1_11 + var_1_12)) > (1.0000000000002E12f)) ? ((var_1_11 + var_1_12)) : (1.0000000000002E12f))) <= (var_1_5 / ((((127.5f) < (var_1_15)) ? (127.5f) : (var_1_15))))) {
   var_1_14 = var_1_3;
  } else {
   var_1_14 = var_1_7;
  }
 } else {
  var_1_14 = var_1_3;
 }
 if (var_1_15 != ((((var_1_12) < ((var_1_5 * var_1_11))) ? (var_1_12) : ((var_1_5 * var_1_11))))) {
  var_1_16 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((signed char) (var_1_3 + var_1_4))) : 1) && ((var_1_4 >= (var_1_6 - var_1_7)) ? (var_1_2 ? (var_1_5 == ((double) 8.25)) : 1) : 1)) && ((-25 == (var_1_3 * (-5 * var_1_6))) ? (var_1_8 == ((unsigned short int) ((((var_1_9 - var_1_7) < 0 ) ? -(var_1_9 - var_1_7) : (var_1_9 - var_1_7))))) : (var_1_8 == ((unsigned short int) ((((var_1_9) > ((var_1_10 - var_1_7))) ? (var_1_9) : ((var_1_10 - var_1_7)))))))) && ((! var_1_2) ? (((var_1_8 * 16) >= var_1_3) ? (var_1_11 == ((float) var_1_12)) : 1) : 1)) && ((var_1_9 < (- var_1_10)) ? (var_1_13 == ((signed short int) (var_1_3 + (var_1_6 + var_1_7)))) : (var_1_13 == ((signed short int) (var_1_6 - var_1_7))))) && ((((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) > (var_1_13 / var_1_10)) ? (((((((var_1_11 + var_1_12)) > (1.0000000000002E12f)) ? ((var_1_11 + var_1_12)) : (1.0000000000002E12f))) <= (var_1_5 / ((((127.5f) < (var_1_15)) ? (127.5f) : (var_1_15))))) ? (var_1_14 == ((signed short int) var_1_3)) : (var_1_14 == ((signed short int) var_1_7))) : (var_1_14 == ((signed short int) var_1_3)))) && ((var_1_15 != ((((var_1_12) < ((var_1_5 * var_1_11))) ? (var_1_12) : ((var_1_5 * var_1_11))))) ? (var_1_16 == ((double) var_1_12)) : 1)
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
