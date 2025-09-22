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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 50;
signed long int var_1_4 = 16;
signed long int var_1_5 = 100000;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 10;
unsigned short int var_1_14 = 36108;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 25;
unsigned short int var_1_17 = 64;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;
signed long int last_1_var_1_1 = 50;
unsigned char last_1_var_1_11 = 0;
unsigned char last_1_var_1_12 = 1;
unsigned short int last_1_var_1_13 = 10;
unsigned short int last_1_var_1_17 = 64;
unsigned char last_1_var_1_18 = 128;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = last_1_var_1_11;
 signed long int stepLocal_1 = (((last_1_var_1_17) > ((var_1_4 * last_1_var_1_1))) ? (last_1_var_1_17) : ((var_1_4 * last_1_var_1_1)));
 if (stepLocal_1 != last_1_var_1_17) {
  var_1_18 = var_1_19;
 } else {
  if (stepLocal_2 || last_1_var_1_12) {
   var_1_18 = var_1_19;
  } else {
   var_1_18 = var_1_16;
  }
 }
 var_1_13 = (var_1_14 - last_1_var_1_18);
 if ((last_1_var_1_1 * -8) > last_1_var_1_1) {
  var_1_6 = (var_1_8 || (last_1_var_1_12 && var_1_9));
 } else {
  var_1_6 = var_1_10;
 }
 if (var_1_10) {
  var_1_11 = (var_1_6 && (var_1_8 && var_1_9));
 }
 if (! last_1_var_1_12) {
  if ((4 + last_1_var_1_13) >= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) {
   var_1_1 = last_1_var_1_13;
  } else {
   var_1_1 = -128;
  }
 } else {
  var_1_1 = last_1_var_1_13;
 }
 signed long int stepLocal_0 = (((var_1_13) > (var_1_1)) ? (var_1_13) : (var_1_1));
 if (var_1_6) {
  if (((((var_1_13) > ((var_1_1 * var_1_14))) ? (var_1_13) : ((var_1_1 * var_1_14)))) <= stepLocal_0) {
   var_1_17 = (var_1_13 + var_1_18);
  } else {
   var_1_17 = ((((var_1_18) < (var_1_13)) ? (var_1_18) : (var_1_13)));
  }
 }
 if (var_1_6) {
  var_1_12 = (! var_1_8);
 } else {
  var_1_12 = (var_1_11 && ((var_1_13 <= var_1_1) && var_1_9));
 }
 if (var_1_12) {
  var_1_15 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 return ((((((((! last_1_var_1_12) ? (((4 + last_1_var_1_13) >= ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) ? (var_1_1 == ((signed long int) last_1_var_1_13)) : (var_1_1 == ((signed long int) -128))) : (var_1_1 == ((signed long int) last_1_var_1_13))) && (((last_1_var_1_1 * -8) > last_1_var_1_1) ? (var_1_6 == ((unsigned char) (var_1_8 || (last_1_var_1_12 && var_1_9)))) : (var_1_6 == ((unsigned char) var_1_10)))) && (var_1_10 ? (var_1_11 == ((unsigned char) (var_1_6 && (var_1_8 && var_1_9)))) : 1)) && (var_1_6 ? (var_1_12 == ((unsigned char) (! var_1_8))) : (var_1_12 == ((unsigned char) (var_1_11 && ((var_1_13 <= var_1_1) && var_1_9)))))) && (var_1_13 == ((unsigned short int) (var_1_14 - last_1_var_1_18)))) && (var_1_12 ? (var_1_15 == ((unsigned char) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : 1)) && (var_1_6 ? ((((((var_1_13) > ((var_1_1 * var_1_14))) ? (var_1_13) : ((var_1_1 * var_1_14)))) <= ((((var_1_13) > (var_1_1)) ? (var_1_13) : (var_1_1)))) ? (var_1_17 == ((unsigned short int) (var_1_13 + var_1_18))) : (var_1_17 == ((unsigned short int) ((((var_1_18) < (var_1_13)) ? (var_1_18) : (var_1_13)))))) : 1)) && ((((((last_1_var_1_17) > ((var_1_4 * last_1_var_1_1))) ? (last_1_var_1_17) : ((var_1_4 * last_1_var_1_1)))) != last_1_var_1_17) ? (var_1_18 == ((unsigned char) var_1_19)) : ((last_1_var_1_11 || last_1_var_1_12) ? (var_1_18 == ((unsigned char) var_1_19)) : (var_1_18 == ((unsigned char) var_1_16))))
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
