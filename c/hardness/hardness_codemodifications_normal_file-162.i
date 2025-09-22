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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 7.3;
unsigned short int var_1_2 = 256;
unsigned short int var_1_3 = 10;
signed long int var_1_4 = 64;
signed long int var_1_5 = 10;
double var_1_6 = 1.2;
float var_1_7 = 9999.5;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 100000;
unsigned char var_1_11 = 0;
double var_1_12 = 8.1;
float var_1_13 = 3.9;
unsigned char var_1_14 = 50;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 32;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 32;
signed long int var_1_22 = 8;
void initially(void) {
}
void step(void) {
 if ((200 / (var_1_2 + var_1_3)) < var_1_4) {
  if (var_1_2 <= var_1_4) {
   if (var_1_4 != (var_1_2 * (var_1_3 + var_1_5))) {
    var_1_1 = 25.25;
   } else {
    var_1_1 = var_1_6;
   }
  }
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_8) {
  if ((var_1_3 >= var_1_2) || (var_1_4 < var_1_5)) {
   if ((- var_1_2) < var_1_3) {
    if (var_1_9) {
     var_1_7 = var_1_6;
    } else {
     var_1_7 = 64.4f;
    }
   } else {
    var_1_7 = var_1_6;
   }
  }
 } else {
  var_1_7 = var_1_6;
 }
 if (var_1_9 || var_1_11) {
  if (var_1_6 == ((var_1_1 + var_1_7) + var_1_12)) {
   var_1_10 = var_1_3;
  } else {
   var_1_10 = var_1_2;
  }
 } else {
  var_1_10 = var_1_2;
 }
 if (var_1_3 > var_1_10) {
  var_1_13 = var_1_6;
 } else {
  var_1_13 = ((((((((1.75f) < 0 ) ? -(1.75f) : (1.75f)))) < (var_1_6)) ? (((((1.75f) < 0 ) ? -(1.75f) : (1.75f)))) : (var_1_6)));
 }
 if (var_1_15 > var_1_10) {
  var_1_14 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 } else {
  var_1_14 = (var_1_18 - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))));
 }
 var_1_20 = var_1_21;
 var_1_22 = 1;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 1);
 assume_abort_if_not(var_1_2 <= 32768);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 255);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((200 / (var_1_2 + var_1_3)) < var_1_4) ? ((var_1_2 <= var_1_4) ? ((var_1_4 != (var_1_2 * (var_1_3 + var_1_5))) ? (var_1_1 == ((double) 25.25)) : (var_1_1 == ((double) var_1_6))) : 1) : (var_1_1 == ((double) var_1_6))) && (var_1_8 ? (((var_1_3 >= var_1_2) || (var_1_4 < var_1_5)) ? (((- var_1_2) < var_1_3) ? (var_1_9 ? (var_1_7 == ((float) var_1_6)) : (var_1_7 == ((float) 64.4f))) : (var_1_7 == ((float) var_1_6))) : 1) : (var_1_7 == ((float) var_1_6)))) && ((var_1_9 || var_1_11) ? ((var_1_6 == ((var_1_1 + var_1_7) + var_1_12)) ? (var_1_10 == ((unsigned long int) var_1_3)) : (var_1_10 == ((unsigned long int) var_1_2))) : (var_1_10 == ((unsigned long int) var_1_2)))) && ((var_1_3 > var_1_10) ? (var_1_13 == ((float) var_1_6)) : (var_1_13 == ((float) ((((((((1.75f) < 0 ) ? -(1.75f) : (1.75f)))) < (var_1_6)) ? (((((1.75f) < 0 ) ? -(1.75f) : (1.75f)))) : (var_1_6))))))) && ((var_1_15 > var_1_10) ? (var_1_14 == ((unsigned char) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_14 == ((unsigned char) (var_1_18 - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) && (var_1_20 == ((unsigned short int) var_1_21))) && (var_1_22 == ((signed long int) 1))
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
