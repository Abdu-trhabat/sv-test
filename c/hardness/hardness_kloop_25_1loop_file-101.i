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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10125_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 64;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 10;
signed char var_1_10 = 5;
double var_1_11 = 1.425;
double var_1_12 = 8.25;
unsigned short int var_1_13 = 1;
unsigned short int var_1_14 = 36726;
unsigned short int var_1_15 = 8;
unsigned short int last_1_var_1_15 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = (var_1_3 - (var_1_4 + (var_1_5 + var_1_6)));
 } else {
  if (var_1_7) {
   if (var_1_8) {
    var_1_1 = 8;
   } else {
    var_1_1 = 64;
   }
  } else {
   var_1_1 = var_1_9;
  }
 }
 if (((- var_1_11) * var_1_12) == 25.75) {
  if (var_1_8) {
   var_1_10 = var_1_4;
  }
 }
 var_1_13 = (var_1_14 - ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5))));
 unsigned char stepLocal_0 = var_1_2;
 if (stepLocal_0 && (var_1_13 < last_1_var_1_15)) {
  var_1_15 = 16;
 } else {
  var_1_15 = (var_1_5 + var_1_4);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 127);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 64);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 31);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 return (((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 - (var_1_4 + (var_1_5 + var_1_6))))) : (var_1_7 ? (var_1_8 ? (var_1_1 == ((unsigned char) 8)) : (var_1_1 == ((unsigned char) 64))) : (var_1_1 == ((unsigned char) var_1_9)))) && ((((- var_1_11) * var_1_12) == 25.75) ? (var_1_8 ? (var_1_10 == ((signed char) var_1_4)) : 1) : 1)) && (var_1_13 == ((unsigned short int) (var_1_14 - ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5))))))) && ((var_1_2 && (var_1_13 < last_1_var_1_15)) ? (var_1_15 == ((unsigned short int) 16)) : (var_1_15 == ((unsigned short int) (var_1_5 + var_1_4))))
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
