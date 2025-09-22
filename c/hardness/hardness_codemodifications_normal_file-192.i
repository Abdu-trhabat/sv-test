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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
double var_1_2 = 25.5;
double var_1_3 = 49.875;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 3979009279;
unsigned long int var_1_7 = 4;
unsigned long int var_1_8 = 2502490197;
unsigned long int var_1_9 = 2330036811;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned long int var_1_13 = 4;
float var_1_14 = 5.7;
float var_1_15 = 24.04;
float var_1_16 = 0.5;
float var_1_17 = 7.875;
unsigned char var_1_18 = 1;
signed long int var_1_19 = -128;
signed char var_1_20 = 50;
signed char var_1_21 = 100;
signed char var_1_22 = 2;
signed long int var_1_23 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_2 != var_1_3) {
  if (var_1_4 || var_1_5) {
   var_1_1 = (var_1_6 - var_1_7);
  } else {
   var_1_1 = ((((((((5u) > (var_1_6)) ? (5u) : (var_1_6)))) > ((((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_7))) ? (((((5u) > (var_1_6)) ? (5u) : (var_1_6)))) : ((((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_7))));
  }
 }
 if (-25 < var_1_1) {
  if (! var_1_4) {
   if (var_1_6 >= var_1_7) {
    var_1_10 = var_1_11;
   } else {
    var_1_10 = var_1_12;
   }
  } else {
   var_1_10 = var_1_11;
  }
 }
 if (var_1_8 == 1u) {
  if (var_1_9 >= (2354073364u - var_1_7)) {
   var_1_13 = var_1_6;
  }
 }
 if (var_1_8 > var_1_1) {
  var_1_14 = (((((8.4f) < ((1.25f + var_1_15))) ? (8.4f) : ((1.25f + var_1_15)))) + (var_1_16 - var_1_17));
 } else {
  var_1_14 = var_1_17;
 }
 if (var_1_9 > var_1_1) {
  if ((var_1_17 * var_1_16) == var_1_14) {
   var_1_18 = var_1_11;
  } else {
   var_1_18 = var_1_12;
  }
 } else {
  var_1_18 = var_1_12;
 }
 if ((var_1_20 - (var_1_21 - var_1_22)) < var_1_13) {
  var_1_19 = ((200 - var_1_22) + var_1_21);
 } else {
  var_1_19 = var_1_23;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 2147483647);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 63);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483647);
 assume_abort_if_not(var_1_23 <= 2147483646);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 != var_1_3) ? ((var_1_4 || var_1_5) ? (var_1_1 == ((unsigned long int) (var_1_6 - var_1_7))) : (var_1_1 == ((unsigned long int) ((((((((5u) > (var_1_6)) ? (5u) : (var_1_6)))) > ((((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_7))) ? (((((5u) > (var_1_6)) ? (5u) : (var_1_6)))) : ((((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_7))))))) : 1) && ((-25 < var_1_1) ? ((! var_1_4) ? ((var_1_6 >= var_1_7) ? (var_1_10 == ((unsigned char) var_1_11)) : (var_1_10 == ((unsigned char) var_1_12))) : (var_1_10 == ((unsigned char) var_1_11))) : 1)) && ((var_1_8 == 1u) ? ((var_1_9 >= (2354073364u - var_1_7)) ? (var_1_13 == ((unsigned long int) var_1_6)) : 1) : 1)) && ((var_1_8 > var_1_1) ? (var_1_14 == ((float) (((((8.4f) < ((1.25f + var_1_15))) ? (8.4f) : ((1.25f + var_1_15)))) + (var_1_16 - var_1_17)))) : (var_1_14 == ((float) var_1_17)))) && ((var_1_9 > var_1_1) ? (((var_1_17 * var_1_16) == var_1_14) ? (var_1_18 == ((unsigned char) var_1_11)) : (var_1_18 == ((unsigned char) var_1_12))) : (var_1_18 == ((unsigned char) var_1_12)))) && (((var_1_20 - (var_1_21 - var_1_22)) < var_1_13) ? (var_1_19 == ((signed long int) ((200 - var_1_22) + var_1_21))) : (var_1_19 == ((signed long int) var_1_23)))
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
