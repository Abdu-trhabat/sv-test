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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14925_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 52712;
unsigned short int var_1_4 = 25;
unsigned char var_1_5 = 0;
float var_1_6 = 25.1;
float var_1_7 = 4.88;
float var_1_8 = 63.1;
float var_1_9 = 16.05;
unsigned long int var_1_10 = 4;
unsigned char var_1_11 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = 4;
 unsigned short int stepLocal_0 = var_1_4;
 if (var_1_2) {
  var_1_1 = (var_1_3 - var_1_4);
 } else {
  if (var_1_3 == stepLocal_0) {
   if (var_1_3 < stepLocal_1) {
    var_1_1 = var_1_4;
   } else {
    if (var_1_5) {
     var_1_1 = var_1_3;
    } else {
     var_1_1 = var_1_4;
    }
   }
  } else {
   var_1_1 = var_1_3;
  }
 }
 if (var_1_3 > var_1_4) {
  var_1_6 = ((((var_1_7) < ((var_1_8 + var_1_9))) ? (var_1_7) : ((var_1_8 + var_1_9))));
 }
 unsigned char stepLocal_2 = var_1_2;
 if (var_1_6 == (- var_1_9)) {
  if (var_1_5) {
   var_1_10 = (2363632078u - var_1_3);
  } else {
   if (stepLocal_2 || var_1_11) {
    var_1_10 = 128u;
   } else {
    var_1_10 = var_1_4;
   }
  }
 } else {
  var_1_10 = var_1_3;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_2 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_4))) : ((var_1_3 == var_1_4) ? ((var_1_3 < 4) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_5 ? (var_1_1 == ((unsigned short int) var_1_3)) : (var_1_1 == ((unsigned short int) var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_3)))) && ((var_1_3 > var_1_4) ? (var_1_6 == ((float) ((((var_1_7) < ((var_1_8 + var_1_9))) ? (var_1_7) : ((var_1_8 + var_1_9)))))) : 1)) && ((var_1_6 == (- var_1_9)) ? (var_1_5 ? (var_1_10 == ((unsigned long int) (2363632078u - var_1_3))) : ((var_1_2 || var_1_11) ? (var_1_10 == ((unsigned long int) 128u)) : (var_1_10 == ((unsigned long int) var_1_4)))) : (var_1_10 == ((unsigned long int) var_1_3)))
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
