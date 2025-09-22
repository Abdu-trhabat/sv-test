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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18325_1loop.c", 13, "reach_error"); }
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
double var_1_2 = 7.5;
double var_1_3 = 255.75;
double var_1_4 = 99.25;
unsigned short int var_1_5 = 55604;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 16;
signed short int var_1_8 = -4;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 10;
unsigned long int var_1_11 = 64;
void initially(void) {
}
void step(void) {
 if ((var_1_2 / var_1_3) >= var_1_4) {
  var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
 }
 unsigned long int stepLocal_2 = var_1_7 | (32u + var_1_1);
 signed long int stepLocal_1 = var_1_7 * var_1_5;
 if (var_1_2 != var_1_3) {
  if (var_1_6 >= stepLocal_1) {
   if (stepLocal_2 <= ((((var_1_6) < ((var_1_5 * var_1_11))) ? (var_1_6) : ((var_1_5 * var_1_11))))) {
    var_1_10 = var_1_6;
   } else {
    var_1_10 = var_1_5;
   }
  }
 } else {
  var_1_10 = var_1_5;
 }
 signed long int stepLocal_0 = (((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6));
 if (var_1_5 >= stepLocal_0) {
  if (! var_1_9) {
   var_1_8 = var_1_6;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 49150);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 / var_1_3) >= var_1_4) ? (var_1_1 == ((unsigned short int) ((var_1_5 - var_1_6) - var_1_7))) : 1) && ((var_1_5 >= ((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6)))) ? ((! var_1_9) ? (var_1_8 == ((signed short int) var_1_6)) : 1) : 1)) && ((var_1_2 != var_1_3) ? ((var_1_6 >= (var_1_7 * var_1_5)) ? (((var_1_7 | (32u + var_1_1)) <= ((((var_1_6) < ((var_1_5 * var_1_11))) ? (var_1_6) : ((var_1_5 * var_1_11))))) ? (var_1_10 == ((unsigned short int) var_1_6)) : (var_1_10 == ((unsigned short int) var_1_5))) : 1) : (var_1_10 == ((unsigned short int) var_1_5)))
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
