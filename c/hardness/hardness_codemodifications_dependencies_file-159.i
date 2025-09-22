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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159dependencies.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -4;
double var_1_2 = 4.8;
double var_1_3 = 0.375;
double var_1_4 = 1000000000.4;
signed short int var_1_5 = 128;
signed long int var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed long int var_1_9 = 1721455604;
signed long int var_1_10 = 4;
signed long int var_1_11 = 5;
signed long int var_1_12 = 16;
unsigned char var_1_13 = 1;
unsigned short int var_1_14 = 1;
signed long int var_1_15 = 256;
unsigned long int var_1_16 = 10;
signed long int var_1_17 = 0;
signed long int var_1_18 = -32;
unsigned short int var_1_19 = 58253;
double var_1_20 = 1000.25;
double var_1_21 = 4.5;
double var_1_22 = 0.25;
double var_1_23 = 63.875;
void initially(void) {
}
void step(void) {
 if (var_1_2 != ((((64.8) > ((var_1_3 * var_1_4))) ? (64.8) : ((var_1_3 * var_1_4))))) {
  if (9.9999999999995E12 < var_1_3) {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_7 && var_1_8) {
  var_1_6 = ((var_1_9 - var_1_10) - var_1_11);
 } else {
  if (var_1_8) {
   var_1_6 = var_1_10;
  } else {
   var_1_6 = 8;
  }
 }
 if ((var_1_10 << ((((1) < (var_1_17)) ? (1) : (var_1_17)))) < -1000000000) {
  var_1_16 = ((((var_1_17) > (var_1_10)) ? (var_1_17) : (var_1_10)));
 }
 if ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - var_1_17) > var_1_16) {
  var_1_18 = (var_1_19 - (var_1_14 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))));
 } else {
  var_1_18 = (((((var_1_10 + var_1_5)) > (var_1_15)) ? ((var_1_10 + var_1_5)) : (var_1_15)));
 }
 var_1_20 = ((((((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) > ((((((15.5) < 0 ) ? -(15.5) : (15.5))) - var_1_23))) ? (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) : ((((((15.5) < 0 ) ? -(15.5) : (15.5))) - var_1_23))));
 if ((var_1_8 && var_1_7) || var_1_13) {
  if (((var_1_10 / var_1_14) <= var_1_18) && (var_1_2 < var_1_4)) {
   if (var_1_8) {
    var_1_12 = var_1_15;
   } else {
    var_1_12 = var_1_11;
   }
  }
 } else {
  var_1_12 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1073741822);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65535);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483647);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65535);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 != ((((64.8) > ((var_1_3 * var_1_4))) ? (64.8) : ((var_1_3 * var_1_4))))) ? ((9.9999999999995E12 < var_1_3) ? (var_1_1 == ((signed short int) var_1_5)) : 1) : (var_1_1 == ((signed short int) var_1_5))) && ((var_1_7 && var_1_8) ? (var_1_6 == ((signed long int) ((var_1_9 - var_1_10) - var_1_11))) : (var_1_8 ? (var_1_6 == ((signed long int) var_1_10)) : (var_1_6 == ((signed long int) 8))))) && (((var_1_8 && var_1_7) || var_1_13) ? ((((var_1_10 / var_1_14) <= var_1_18) && (var_1_2 < var_1_4)) ? (var_1_8 ? (var_1_12 == ((signed long int) var_1_15)) : (var_1_12 == ((signed long int) var_1_11))) : 1) : (var_1_12 == ((signed long int) var_1_9)))) && (((var_1_10 << ((((1) < (var_1_17)) ? (1) : (var_1_17)))) < -1000000000) ? (var_1_16 == ((unsigned long int) ((((var_1_17) > (var_1_10)) ? (var_1_17) : (var_1_10))))) : 1)) && (((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - var_1_17) > var_1_16) ? (var_1_18 == ((signed long int) (var_1_19 - (var_1_14 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))) : (var_1_18 == ((signed long int) (((((var_1_10 + var_1_5)) > (var_1_15)) ? ((var_1_10 + var_1_5)) : (var_1_15))))))) && (var_1_20 == ((double) ((((((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) > ((((((15.5) < 0 ) ? -(15.5) : (15.5))) - var_1_23))) ? (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))) : ((((((15.5) < 0 ) ? -(15.5) : (15.5))) - var_1_23))))))
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
