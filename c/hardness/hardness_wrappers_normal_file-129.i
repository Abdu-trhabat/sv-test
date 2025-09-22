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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129normal.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
signed char var_1_3 = 4;
signed char var_1_4 = 25;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 0;
unsigned short int var_1_8 = 0;
signed long int var_1_9 = -100000000;
unsigned short int var_1_10 = 47589;
unsigned short int var_1_11 = 4;
double var_1_12 = 10.5;
double var_1_13 = 8.05;
double var_1_14 = 4.7;
double var_1_15 = 50.2;
double var_1_16 = 1.8;
unsigned short int last_1_var_1_6 = 0;
signed long int last_1_var_1_9 = -100000000;
void initially(void) {
}
void step(void) {
 signed char stepLocal_0 = var_1_3;
 if (! var_1_2) {
  if (stepLocal_0 > var_1_4) {
   var_1_1 = (var_1_2 || var_1_5);
  } else {
   if (! var_1_5) {
    var_1_1 = var_1_5;
   }
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (last_1_var_1_9 > (var_1_10 - var_1_11)) {
  var_1_9 = var_1_10;
 }
 signed long int stepLocal_1 = var_1_9;
 if (var_1_1) {
  if (((((5) > (last_1_var_1_6)) ? (5) : (last_1_var_1_6))) < stepLocal_1) {
   if (! var_1_5) {
    var_1_6 = var_1_8;
   } else {
    var_1_6 = 1;
   }
  }
 } else {
  var_1_6 = var_1_8;
 }
 unsigned short int stepLocal_2 = var_1_6;
 if (var_1_1) {
  if (var_1_8 <= stepLocal_2) {
   if (((((10.4) < (var_1_13)) ? (10.4) : (var_1_13))) < (var_1_14 * var_1_15)) {
    var_1_12 = var_1_16;
   } else {
    var_1_12 = 64.6;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_9 = var_1_9;
}
int property(void) {
 return ((((! var_1_2) ? ((var_1_3 > var_1_4) ? (var_1_1 == ((unsigned char) (var_1_2 || var_1_5))) : ((! var_1_5) ? (var_1_1 == ((unsigned char) var_1_5)) : 1)) : (var_1_1 == ((unsigned char) var_1_5))) && (var_1_1 ? ((((((5) > (last_1_var_1_6)) ? (5) : (last_1_var_1_6))) < var_1_9) ? ((! var_1_5) ? (var_1_6 == ((unsigned short int) var_1_8)) : (var_1_6 == ((unsigned short int) 1))) : 1) : (var_1_6 == ((unsigned short int) var_1_8)))) && ((last_1_var_1_9 > (var_1_10 - var_1_11)) ? (var_1_9 == ((signed long int) var_1_10)) : 1)) && (var_1_1 ? ((var_1_8 <= var_1_6) ? ((((((10.4) < (var_1_13)) ? (10.4) : (var_1_13))) < (var_1_14 * var_1_15)) ? (var_1_12 == ((double) var_1_16)) : (var_1_12 == ((double) 64.6))) : 1) : 1)
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
