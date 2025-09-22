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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156has_floats.c", 13, "reach_error"); }
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
signed char var_1_3 = -5;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 5;
unsigned short int var_1_6 = 256;
signed long int var_1_7 = 1;
unsigned short int var_1_8 = 5;
unsigned short int var_1_9 = 50049;
unsigned short int var_1_10 = 35813;
unsigned long int var_1_11 = 32;
signed long int var_1_12 = 1985015368;
unsigned char last_1_var_1_1 = 1;
unsigned short int last_1_var_1_6 = 256;
unsigned short int last_1_var_1_8 = 5;
unsigned long int last_1_var_1_11 = 32;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_1 % var_1_9) <= ((var_1_12 - last_1_var_1_8) - last_1_var_1_6)) {
  var_1_11 = 32u;
 }
 if (last_1_var_1_11 <= last_1_var_1_6) {
  var_1_1 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
 }
 signed long int stepLocal_1 = var_1_4 % var_1_7;
 unsigned char stepLocal_0 = var_1_1;
 if (stepLocal_0 < var_1_3) {
  if ((var_1_5 + var_1_1) >= stepLocal_1) {
   var_1_6 = (100 + var_1_5);
  } else {
   var_1_6 = var_1_5;
  }
 }
 if (! (var_1_1 <= var_1_6)) {
  if ((var_1_9 - ((((var_1_4) > (var_1_11)) ? (var_1_4) : (var_1_11)))) >= var_1_5) {
   var_1_8 = (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - var_1_5);
  } else {
   var_1_8 = ((((32) > (var_1_11)) ? (32) : (var_1_11)));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return ((((last_1_var_1_11 <= last_1_var_1_6) ? (var_1_1 == ((unsigned char) ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) : 1) && ((var_1_1 < var_1_3) ? (((var_1_5 + var_1_1) >= (var_1_4 % var_1_7)) ? (var_1_6 == ((unsigned short int) (100 + var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5))) : 1)) && ((! (var_1_1 <= var_1_6)) ? (((var_1_9 - ((((var_1_4) > (var_1_11)) ? (var_1_4) : (var_1_11)))) >= var_1_5) ? (var_1_8 == ((unsigned short int) (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - var_1_5))) : (var_1_8 == ((unsigned short int) ((((32) > (var_1_11)) ? (32) : (var_1_11)))))) : 1)) && (((last_1_var_1_1 % var_1_9) <= ((var_1_12 - last_1_var_1_8) - last_1_var_1_6)) ? (var_1_11 == ((unsigned long int) 32u)) : 1)
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
