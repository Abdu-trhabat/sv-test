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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
unsigned long int var_1_2 = 3375952581;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 5;
unsigned long int var_1_5 = 2;
unsigned char var_1_6 = 0;
signed char var_1_7 = -1;
signed char var_1_8 = -32;
signed char var_1_9 = 64;
signed char var_1_10 = 0;
unsigned short int var_1_11 = 2;
unsigned short int var_1_12 = 5;
unsigned short int var_1_13 = 50;
float var_1_16 = 8.75;
float var_1_17 = 9.75;
float var_1_18 = 4.2;
float var_1_19 = 0.0;
float var_1_20 = 100.25;
float var_1_21 = 8.1;
unsigned long int last_1_var_1_1 = 16;
float last_1_var_1_16 = 8.75;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= last_1_var_1_1) {
  var_1_11 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
 } else {
  if ((- last_1_var_1_16) <= last_1_var_1_16) {
   var_1_11 = ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12)));
  } else {
   var_1_11 = 4;
  }
 }
 if ((var_1_2 - var_1_3) != (var_1_4 / var_1_5)) {
  if (var_1_6) {
   var_1_1 = var_1_3;
  } else {
   var_1_1 = 16u;
  }
 } else {
  var_1_1 = var_1_3;
 }
 if (var_1_6) {
  var_1_7 = var_1_8;
 }
 signed long int stepLocal_1 = 8;
 unsigned long int stepLocal_0 = var_1_1;
 if (stepLocal_1 == var_1_3) {
  if (stepLocal_0 >= var_1_3) {
   if (! (var_1_3 > (var_1_5 / var_1_2))) {
    var_1_9 = var_1_8;
   } else {
    var_1_9 = 0;
   }
  } else {
   var_1_9 = var_1_8;
  }
 } else {
  var_1_9 = -50;
 }
 if ((var_1_3 == 32u) || (var_1_5 == var_1_1)) {
  var_1_10 = var_1_8;
 }
 unsigned short int stepLocal_4 = var_1_11;
 unsigned short int stepLocal_3 = var_1_12;
 unsigned short int stepLocal_2 = var_1_11;
 if (var_1_4 > stepLocal_2) {
  if (stepLocal_4 <= var_1_13) {
   if ((var_1_1 / var_1_5) > stepLocal_3) {
    var_1_16 = var_1_17;
   } else {
    var_1_16 = (var_1_18 - (((((var_1_19 - var_1_20)) > (var_1_21)) ? ((var_1_19 - var_1_20)) : (var_1_21))));
   }
  } else {
   var_1_16 = var_1_18;
  }
 } else {
  var_1_16 = var_1_18;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 2147483647);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return (((((((var_1_2 - var_1_3) != (var_1_4 / var_1_5)) ? (var_1_6 ? (var_1_1 == ((unsigned long int) var_1_3)) : (var_1_1 == ((unsigned long int) 16u))) : (var_1_1 == ((unsigned long int) var_1_3))) && (var_1_6 ? (var_1_7 == ((signed char) var_1_8)) : 1)) && ((8 == var_1_3) ? ((var_1_1 >= var_1_3) ? ((! (var_1_3 > (var_1_5 / var_1_2))) ? (var_1_9 == ((signed char) var_1_8)) : (var_1_9 == ((signed char) 0))) : (var_1_9 == ((signed char) var_1_8))) : (var_1_9 == ((signed char) -50)))) && (((var_1_3 == 32u) || (var_1_5 == var_1_1)) ? (var_1_10 == ((signed char) var_1_8)) : 1)) && ((var_1_2 <= last_1_var_1_1) ? (var_1_11 == ((unsigned short int) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : (((- last_1_var_1_16) <= last_1_var_1_16) ? (var_1_11 == ((unsigned short int) ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12))))) : (var_1_11 == ((unsigned short int) 4))))) && ((var_1_4 > var_1_11) ? ((var_1_11 <= var_1_13) ? (((var_1_1 / var_1_5) > var_1_12) ? (var_1_16 == ((float) var_1_17)) : (var_1_16 == ((float) (var_1_18 - (((((var_1_19 - var_1_20)) > (var_1_21)) ? ((var_1_19 - var_1_20)) : (var_1_21))))))) : (var_1_16 == ((float) var_1_18))) : (var_1_16 == ((float) var_1_18)))
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
