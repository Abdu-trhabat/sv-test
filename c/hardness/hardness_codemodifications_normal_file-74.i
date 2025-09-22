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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch74normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 64;
signed long int var_1_2 = -1;
signed long int var_1_3 = -2;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 3914692693;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 50;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 10;
float var_1_17 = 31.875;
float var_1_18 = -0.8;
unsigned short int var_1_19 = 100;
unsigned short int var_1_20 = 27219;
unsigned short int var_1_21 = 27263;
double var_1_22 = 2.75;
double var_1_23 = 100000000000000.25;
double var_1_24 = 0.19999999999999996;
signed long int var_1_25 = -10;
void initially(void) {
}
void step(void) {
 if (! (var_1_2 >= var_1_3)) {
  if (var_1_4) {
   var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_6 < var_1_3) {
  if (var_1_3 <= var_1_6) {
   var_1_8 = ((var_1_4 && var_1_9) || var_1_10);
  }
 }
 if (! ((var_1_5 > var_1_7) || var_1_4)) {
  if ((5u << (var_1_12 - var_1_13)) > (var_1_5 / 25u)) {
   if ((var_1_6 << var_1_1) != (var_1_7 + var_1_12)) {
    var_1_11 = ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12)));
   } else {
    var_1_11 = var_1_12;
   }
  } else {
   var_1_11 = var_1_15;
  }
 } else {
  var_1_11 = var_1_12;
 }
 if ((- ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) == 32.2f) {
  var_1_16 = 10;
 }
 if (var_1_4 && var_1_9) {
  var_1_19 = ((var_1_20 + var_1_21) - ((((var_1_15) > (var_1_12)) ? (var_1_15) : (var_1_12))));
 } else {
  if (var_1_4) {
   var_1_19 = var_1_16;
  }
 }
 var_1_22 = 8.625;
 var_1_23 = var_1_24;
 var_1_25 = -4;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 3221225470);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 14);
 assume_abort_if_not(var_1_12 <= 29);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 14);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 16383);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16384);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((! (var_1_2 >= var_1_3)) ? (var_1_4 ? (var_1_1 == ((unsigned long int) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned long int) var_1_5))) : (var_1_1 == ((unsigned long int) var_1_7))) && ((var_1_6 < var_1_3) ? ((var_1_3 <= var_1_6) ? (var_1_8 == ((unsigned char) ((var_1_4 && var_1_9) || var_1_10))) : 1) : 1)) && ((! ((var_1_5 > var_1_7) || var_1_4)) ? (((5u << (var_1_12 - var_1_13)) > (var_1_5 / 25u)) ? (((var_1_6 << var_1_1) != (var_1_7 + var_1_12)) ? (var_1_11 == ((unsigned char) ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12))))) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_15))) : (var_1_11 == ((unsigned char) var_1_12)))) && (((- ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) == 32.2f) ? (var_1_16 == ((unsigned char) 10)) : 1)) && ((var_1_4 && var_1_9) ? (var_1_19 == ((unsigned short int) ((var_1_20 + var_1_21) - ((((var_1_15) > (var_1_12)) ? (var_1_15) : (var_1_12)))))) : (var_1_4 ? (var_1_19 == ((unsigned short int) var_1_16)) : 1))) && (var_1_22 == ((double) 8.625))) && (var_1_23 == ((double) var_1_24))) && (var_1_25 == ((signed long int) -4))
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
