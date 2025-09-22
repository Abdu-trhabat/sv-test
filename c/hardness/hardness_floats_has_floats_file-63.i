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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
float var_1_2 = 0.0;
float var_1_3 = -4.0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned short int var_1_9 = 200;
unsigned short int var_1_10 = 0;
signed char var_1_11 = 25;
unsigned short int var_1_12 = 17476;
unsigned short int var_1_13 = 32559;
unsigned short int var_1_14 = 25;
signed char var_1_15 = -32;
unsigned char var_1_16 = 64;
signed char var_1_17 = -5;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 1;
unsigned char last_1_var_1_1 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_3 >= var_1_2) {
  var_1_9 = (((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) < 0 ) ? -((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) : ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))));
 }
 unsigned short int stepLocal_0 = var_1_9;
 if (stepLocal_0 < ((var_1_12 + var_1_13) - var_1_14)) {
  var_1_11 = var_1_15;
 }
 var_1_20 = var_1_19;
 var_1_21 = var_1_7;
 if (((((-128.0f) < (var_1_2)) ? (-128.0f) : (var_1_2))) > var_1_3) {
  if (last_1_var_1_1) {
   if (var_1_21) {
    var_1_1 = (! (var_1_21 && var_1_7));
   }
  } else {
   var_1_1 = (! var_1_8);
  }
 }
 signed long int stepLocal_1 = var_1_20 + (var_1_14 / var_1_17);
 if (stepLocal_1 >= var_1_12) {
  var_1_16 = (var_1_18 - var_1_19);
 } else {
  if (var_1_21) {
   var_1_16 = var_1_18;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32768);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16384);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -128);
 assume_abort_if_not(var_1_17 <= 127);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return ((((((((((-128.0f) < (var_1_2)) ? (-128.0f) : (var_1_2))) > var_1_3) ? (last_1_var_1_1 ? (var_1_21 ? (var_1_1 == ((unsigned char) (! (var_1_21 && var_1_7)))) : 1) : (var_1_1 == ((unsigned char) (! var_1_8)))) : 1) && ((var_1_3 >= var_1_2) ? (var_1_9 == ((unsigned short int) (((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) < 0 ) ? -((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) : ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))) : 1)) && ((var_1_9 < ((var_1_12 + var_1_13) - var_1_14)) ? (var_1_11 == ((signed char) var_1_15)) : 1)) && (((var_1_20 + (var_1_14 / var_1_17)) >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_18 - var_1_19))) : (var_1_21 ? (var_1_16 == ((unsigned char) var_1_18)) : 1))) && (var_1_20 == ((unsigned char) var_1_19))) && (var_1_21 == ((unsigned char) var_1_7))
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
