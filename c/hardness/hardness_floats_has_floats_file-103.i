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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
signed short int var_1_2 = 16;
float var_1_3 = 5.0;
unsigned char var_1_4 = 1;
signed char var_1_5 = 16;
unsigned char var_1_6 = 0;
signed char var_1_7 = -5;
float var_1_8 = 128.0;
unsigned long int var_1_9 = 2;
unsigned long int var_1_10 = 1947975983;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 16;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 25;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 5;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 54441;
unsigned short int var_1_19 = 64667;
unsigned char var_1_20 = 50;
unsigned char last_1_var_1_20 = 50;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_6;
 if ((var_1_10 >= (var_1_15 + var_1_5)) || stepLocal_1) {
  var_1_17 = ((((last_1_var_1_20) < ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_15))) ? (last_1_var_1_20) : ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_15))));
 }
 var_1_1 = var_1_2;
 signed char stepLocal_0 = var_1_5;
 if (var_1_4) {
  if ((((((var_1_17 ^ var_1_2)) > ((64 / var_1_7))) ? ((var_1_17 ^ var_1_2)) : ((64 / var_1_7)))) >= stepLocal_0) {
   var_1_3 = var_1_8;
  } else {
   var_1_3 = -25.0f;
  }
 } else {
  var_1_3 = var_1_8;
 }
 var_1_9 = (((1846010599u + var_1_10) - var_1_5) - var_1_11);
 var_1_12 = ((var_1_13 + var_1_14) + (var_1_15 + var_1_16));
 if (var_1_6 && var_1_4) {
  if (var_1_17 > var_1_9) {
   var_1_20 = var_1_13;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32767);
 assume_abort_if_not(var_1_2 <= 32766);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1610612735);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 64);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 64);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 32767);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 return (((((var_1_1 == ((signed short int) var_1_2)) && (var_1_4 ? (((((((var_1_17 ^ var_1_2)) > ((64 / var_1_7))) ? ((var_1_17 ^ var_1_2)) : ((64 / var_1_7)))) >= var_1_5) ? (var_1_3 == ((float) var_1_8)) : (var_1_3 == ((float) -25.0f))) : (var_1_3 == ((float) var_1_8)))) && (var_1_9 == ((unsigned long int) (((1846010599u + var_1_10) - var_1_5) - var_1_11)))) && (var_1_12 == ((unsigned char) ((var_1_13 + var_1_14) + (var_1_15 + var_1_16))))) && (((var_1_10 >= (var_1_15 + var_1_5)) || var_1_6) ? (var_1_17 == ((unsigned short int) ((((last_1_var_1_20) < ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_15))) ? (last_1_var_1_20) : ((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - var_1_15)))))) : 1)) && ((var_1_6 && var_1_4) ? ((var_1_17 > var_1_9) ? (var_1_20 == ((unsigned char) var_1_13)) : 1) : 1)
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
