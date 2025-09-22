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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -50;
signed char var_1_2 = -5;
signed char var_1_3 = -4;
signed char var_1_4 = -2;
unsigned short int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 4;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 256;
signed long int var_1_10 = 2;
signed long int var_1_11 = 1000000000;
unsigned long int var_1_12 = 1;
unsigned long int var_1_13 = 3902113393;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 10;
unsigned short int var_1_17 = 1;
signed char var_1_18 = 64;
unsigned short int var_1_19 = 64352;
signed long int var_1_20 = 10000000;
void initially(void) {
}
void step(void) {
 var_1_1 = ((((8) < ((var_1_2 + (var_1_3 + var_1_4)))) ? (8) : ((var_1_2 + (var_1_3 + var_1_4)))));
 if (var_1_6 && (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) != var_1_4)) {
  var_1_5 = ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)));
 } else {
  var_1_5 = var_1_9;
 }
 if (var_1_8 > var_1_5) {
  if (var_1_6) {
   if (var_1_9 <= ((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5)))) {
    var_1_10 = var_1_5;
   } else {
    var_1_10 = ((var_1_5 - (var_1_11 - var_1_8)) + 16);
   }
  } else {
   var_1_10 = var_1_8;
  }
 } else {
  var_1_10 = var_1_5;
 }
 if (var_1_5 > var_1_9) {
  if (var_1_6) {
   var_1_12 = (var_1_13 - ((((var_1_11) > (var_1_9)) ? (var_1_11) : (var_1_9))));
  }
 } else {
  var_1_12 = var_1_8;
 }
 if (var_1_6 && var_1_15) {
  var_1_14 = ((64 - 4) + var_1_16);
 }
 if (var_1_2 > ((64 - var_1_18) - var_1_16)) {
  if (((var_1_19 - var_1_16) - ((((var_1_18) < (32)) ? (var_1_18) : (32)))) >= ((((var_1_5) < ((var_1_8 / var_1_11))) ? (var_1_5) : ((var_1_8 / var_1_11))))) {
   var_1_17 = var_1_9;
  }
 } else {
  var_1_17 = var_1_9;
 }
 var_1_20 = var_1_17;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -63);
 assume_abort_if_not(var_1_2 <= 63);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -31);
 assume_abort_if_not(var_1_3 <= 32);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -31);
 assume_abort_if_not(var_1_4 <= 31);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65535);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 536870911);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 49151);
 assume_abort_if_not(var_1_19 <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_1 == ((signed char) ((((8) < ((var_1_2 + (var_1_3 + var_1_4)))) ? (8) : ((var_1_2 + (var_1_3 + var_1_4))))))) && ((var_1_6 && (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) != var_1_4)) ? (var_1_5 == ((unsigned short int) ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_5 == ((unsigned short int) var_1_9)))) && ((var_1_8 > var_1_5) ? (var_1_6 ? ((var_1_9 <= ((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5)))) ? (var_1_10 == ((signed long int) var_1_5)) : (var_1_10 == ((signed long int) ((var_1_5 - (var_1_11 - var_1_8)) + 16)))) : (var_1_10 == ((signed long int) var_1_8))) : (var_1_10 == ((signed long int) var_1_5)))) && ((var_1_5 > var_1_9) ? (var_1_6 ? (var_1_12 == ((unsigned long int) (var_1_13 - ((((var_1_11) > (var_1_9)) ? (var_1_11) : (var_1_9)))))) : 1) : (var_1_12 == ((unsigned long int) var_1_8)))) && ((var_1_6 && var_1_15) ? (var_1_14 == ((unsigned char) ((64 - 4) + var_1_16))) : 1)) && ((var_1_2 > ((64 - var_1_18) - var_1_16)) ? ((((var_1_19 - var_1_16) - ((((var_1_18) < (32)) ? (var_1_18) : (32)))) >= ((((var_1_5) < ((var_1_8 / var_1_11))) ? (var_1_5) : ((var_1_8 / var_1_11))))) ? (var_1_17 == ((unsigned short int) var_1_9)) : 1) : (var_1_17 == ((unsigned short int) var_1_9)))) && (var_1_20 == ((signed long int) var_1_17))
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
