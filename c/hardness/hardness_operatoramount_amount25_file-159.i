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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Amount25.c", 13, "reach_error"); }
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
signed long int var_1_3 = -16;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 64;
unsigned short int var_1_8 = 35430;
unsigned short int var_1_9 = 10;
double var_1_10 = 7.2;
double var_1_11 = 15.5;
double var_1_12 = 49.2;
double var_1_13 = 63.26;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_14 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_14) {
  var_1_10 = var_1_11;
 } else {
  var_1_10 = ((((((((var_1_11) > ((var_1_12 + 64.7))) ? (var_1_11) : ((var_1_12 + 64.7))))) < (var_1_13)) ? (((((var_1_11) > ((var_1_12 + 64.7))) ? (var_1_11) : ((var_1_12 + 64.7))))) : (var_1_13)));
 }
 signed long int stepLocal_0 = var_1_3;
 if (last_1_var_1_1) {
  if (64 < stepLocal_0) {
   var_1_1 = (! (var_1_4 && var_1_5));
  }
 } else {
  if (var_1_5) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_4;
  }
 }
 if (! var_1_5) {
  var_1_7 = (var_1_8 - var_1_9);
 }
 unsigned short int stepLocal_1 = var_1_9;
 if (var_1_7 == stepLocal_1) {
  if (var_1_6) {
   var_1_14 = var_1_5;
  } else {
   if (var_1_11 < var_1_10) {
    var_1_14 = var_1_5;
   } else {
    var_1_14 = 1;
   }
  }
 } else {
  var_1_14 = var_1_15;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
}
int property(void) {
 return (((last_1_var_1_1 ? ((64 < var_1_3) ? (var_1_1 == ((unsigned char) (! (var_1_4 && var_1_5)))) : 1) : (var_1_5 ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_4)))) && ((! var_1_5) ? (var_1_7 == ((unsigned short int) (var_1_8 - var_1_9))) : 1)) && (last_1_var_1_14 ? (var_1_10 == ((double) var_1_11)) : (var_1_10 == ((double) ((((((((var_1_11) > ((var_1_12 + 64.7))) ? (var_1_11) : ((var_1_12 + 64.7))))) < (var_1_13)) ? (((((var_1_11) > ((var_1_12 + 64.7))) ? (var_1_11) : ((var_1_12 + 64.7))))) : (var_1_13))))))) && ((var_1_7 == var_1_9) ? (var_1_6 ? (var_1_14 == ((unsigned char) var_1_5)) : ((var_1_11 < var_1_10) ? (var_1_14 == ((unsigned char) var_1_5)) : (var_1_14 == ((unsigned char) 1)))) : (var_1_14 == ((unsigned char) var_1_15)))
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
