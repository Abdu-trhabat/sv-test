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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_2 = -32;
signed char var_1_3 = -4;
signed long int var_1_4 = 2;
signed char var_1_5 = 2;
unsigned short int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 37230;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 2;
signed char var_1_14 = 1;
unsigned short int var_1_15 = 32;
signed short int var_1_16 = -16;
signed short int var_1_17 = 0;
signed short int var_1_18 = 0;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 5;
signed char var_1_22 = 10;
signed char var_1_23 = 32;
signed char var_1_24 = 5;
signed char var_1_25 = 4;
signed char var_1_26 = 2;
unsigned short int var_1_27 = 64;
void initially(void) {
}
void step(void) {
 if ((var_1_2 / ((((8) < (var_1_3)) ? (8) : (var_1_3)))) >= var_1_4) {
  if (! (var_1_3 >= var_1_2)) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = -25;
  }
 }
 if (var_1_7) {
  var_1_6 = ((((var_1_8) < ((var_1_9 - var_1_10))) ? (var_1_8) : ((var_1_9 - var_1_10))));
 }
 if (var_1_3 <= var_1_14) {
  var_1_11 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)));
 } else {
  if (var_1_1 <= var_1_4) {
   var_1_11 = var_1_15;
  }
 }
 if (var_1_15 > var_1_4) {
  if ((var_1_15 - 1000000) == var_1_11) {
   var_1_16 = ((24405 - var_1_17) - ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))));
  }
 } else {
  var_1_16 = (var_1_17 - ((((100) > (var_1_18)) ? (100) : (var_1_18))));
 }
 if ((- var_1_9) > var_1_1) {
  var_1_19 = (var_1_20 - var_1_21);
 }
 if (256 > (var_1_19 - var_1_17)) {
  var_1_22 = (((var_1_23 - var_1_24) + var_1_25) - ((10 + 2) + var_1_26));
 }
 if (var_1_25 < (((((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23))) < 0 ) ? -((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23))) : ((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23)))))) {
  var_1_27 = 64;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -128);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 127);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 31);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 31);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 / ((((8) < (var_1_3)) ? (8) : (var_1_3)))) >= var_1_4) ? ((! (var_1_3 >= var_1_2)) ? (var_1_1 == ((signed char) var_1_5)) : (var_1_1 == ((signed char) -25))) : 1) && (var_1_7 ? (var_1_6 == ((unsigned short int) ((((var_1_8) < ((var_1_9 - var_1_10))) ? (var_1_8) : ((var_1_9 - var_1_10)))))) : 1)) && ((var_1_3 <= var_1_14) ? (var_1_11 == ((unsigned short int) ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) : ((var_1_1 <= var_1_4) ? (var_1_11 == ((unsigned short int) var_1_15)) : 1))) && ((var_1_15 > var_1_4) ? (((var_1_15 - 1000000) == var_1_11) ? (var_1_16 == ((signed short int) ((24405 - var_1_17) - ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) : 1) : (var_1_16 == ((signed short int) (var_1_17 - ((((100) > (var_1_18)) ? (100) : (var_1_18)))))))) && (((- var_1_9) > var_1_1) ? (var_1_19 == ((unsigned char) (var_1_20 - var_1_21))) : 1)) && ((256 > (var_1_19 - var_1_17)) ? (var_1_22 == ((signed char) (((var_1_23 - var_1_24) + var_1_25) - ((10 + 2) + var_1_26)))) : 1)) && ((var_1_25 < (((((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23))) < 0 ) ? -((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23))) : ((((var_1_26) > (var_1_23)) ? (var_1_26) : (var_1_23)))))) ? (var_1_27 == ((unsigned short int) 64)) : 1)
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
