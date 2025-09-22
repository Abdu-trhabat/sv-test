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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15150_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -64;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned long int var_1_5 = 32;
unsigned long int var_1_6 = 100;
signed long int var_1_7 = 1;
double var_1_8 = 16.75;
double var_1_9 = 2.5;
signed char var_1_10 = -32;
unsigned long int var_1_11 = 256;
signed char var_1_12 = -10;
signed long int var_1_13 = -1;
signed long int var_1_14 = 100;
signed long int var_1_15 = 8;
signed long int var_1_16 = 16;
signed long int var_1_17 = 10;
unsigned short int var_1_18 = 16;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 29880;
unsigned short int var_1_21 = 30724;
unsigned short int var_1_22 = 10;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_7;
 if (stepLocal_0 < var_1_5) {
  var_1_8 = var_1_9;
 }
 if (9.99999999999925E12 <= var_1_8) {
  if ((- var_1_8) == var_1_8) {
   var_1_23 = (var_1_24 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))));
  } else {
   var_1_23 = var_1_25;
  }
 } else {
  var_1_23 = var_1_25;
 }
 if ((32.4 == var_1_8) || ((var_1_5 > var_1_6) && var_1_2)) {
  var_1_1 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 } else {
  var_1_1 = ((((var_1_7) > (200)) ? (var_1_7) : (200)));
 }
 if (var_1_2) {
  var_1_13 = (((((var_1_12 + (var_1_14 - var_1_15))) > ((var_1_23 + (var_1_16 + var_1_17)))) ? ((var_1_12 + (var_1_14 - var_1_15))) : ((var_1_23 + (var_1_16 + var_1_17)))));
 } else {
  if (var_1_3) {
   var_1_13 = var_1_7;
  } else {
   var_1_13 = var_1_12;
  }
 }
 if ((var_1_17 >= var_1_1) && var_1_3) {
  var_1_18 = ((((var_1_19) < (((var_1_20 + var_1_21) - var_1_22))) ? (var_1_19) : (((var_1_20 + var_1_21) - var_1_22))));
 }
 unsigned char stepLocal_2 = var_1_3;
 unsigned long int stepLocal_1 = (((2u) > (var_1_11)) ? (2u) : (var_1_11));
 if (stepLocal_2 || (((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5))) <= var_1_13)) {
  if (((var_1_5 + var_1_6) + var_1_13) <= stepLocal_1) {
   var_1_10 = 10;
  } else {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967295);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483646);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -536870911);
 assume_abort_if_not(var_1_16 <= 536870912);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -536870911);
 assume_abort_if_not(var_1_17 <= 536870911);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 16383);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16384);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((32.4 == var_1_8) || ((var_1_5 > var_1_6) && var_1_2)) ? (var_1_1 == ((signed long int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : (var_1_1 == ((signed long int) ((((var_1_7) > (200)) ? (var_1_7) : (200)))))) && ((var_1_7 < var_1_5) ? (var_1_8 == ((double) var_1_9)) : 1)) && ((var_1_3 || (((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5))) <= var_1_13)) ? ((((var_1_5 + var_1_6) + var_1_13) <= ((((2u) > (var_1_11)) ? (2u) : (var_1_11)))) ? (var_1_10 == ((signed char) 10)) : (var_1_10 == ((signed char) var_1_12))) : (var_1_10 == ((signed char) var_1_12)))) && (var_1_2 ? (var_1_13 == ((signed long int) (((((var_1_12 + (var_1_14 - var_1_15))) > ((var_1_23 + (var_1_16 + var_1_17)))) ? ((var_1_12 + (var_1_14 - var_1_15))) : ((var_1_23 + (var_1_16 + var_1_17))))))) : (var_1_3 ? (var_1_13 == ((signed long int) var_1_7)) : (var_1_13 == ((signed long int) var_1_12))))) && (((var_1_17 >= var_1_1) && var_1_3) ? (var_1_18 == ((unsigned short int) ((((var_1_19) < (((var_1_20 + var_1_21) - var_1_22))) ? (var_1_19) : (((var_1_20 + var_1_21) - var_1_22)))))) : 1)) && ((9.99999999999925E12 <= var_1_8) ? (((- var_1_8) == var_1_8) ? (var_1_23 == ((unsigned char) (var_1_24 - ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26)))))) : (var_1_23 == ((unsigned char) var_1_25))) : (var_1_23 == ((unsigned char) var_1_25)))
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
