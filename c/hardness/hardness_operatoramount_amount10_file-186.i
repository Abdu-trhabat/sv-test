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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned long int var_1_3 = 1000000000;
unsigned long int var_1_4 = 256;
double var_1_5 = 2.5;
double var_1_6 = 4.625;
unsigned short int var_1_7 = 58928;
unsigned short int var_1_8 = 2;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_3;
 if (stepLocal_0 >= var_1_4) {
  if (((((var_1_5) > ((- 4.75))) ? (var_1_5) : ((- 4.75)))) != var_1_6) {
   var_1_1 = (var_1_7 - (var_1_8 + 5));
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_7;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16384);
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_3 >= var_1_4) ? ((((((var_1_5) > ((- 4.75))) ? (var_1_5) : ((- 4.75)))) != var_1_6) ? (var_1_1 == ((unsigned short int) (var_1_7 - (var_1_8 + 5)))) : (var_1_1 == ((unsigned short int) var_1_8))) : (var_1_1 == ((unsigned short int) var_1_7))
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
