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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141dependencies.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 31.4;
unsigned char var_1_2 = 1;
double var_1_3 = 255.2;
double var_1_4 = 31.8;
double var_1_5 = 3.8;
double var_1_6 = 50.8;
double var_1_7 = 64.75;
signed short int var_1_8 = -1;
signed short int var_1_9 = 100;
signed short int var_1_10 = 2;
signed long int var_1_11 = 10000;
unsigned char var_1_12 = 16;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 50;
double var_1_16 = 3.8;
signed long int var_1_17 = 256;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char last_1_var_1_18 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_6 > var_1_5) {
  if (var_1_3 != 199.5) {
   if (var_1_4 != (((((- 8.5)) > (var_1_6)) ? ((- 8.5)) : (var_1_6)))) {
    if (last_1_var_1_18) {
     var_1_7 = (var_1_3 - var_1_6);
    }
   } else {
    var_1_7 = (var_1_3 - var_1_5);
   }
  }
 } else {
  var_1_7 = var_1_6;
 }
 if (var_1_5 <= var_1_7) {
  var_1_8 = (var_1_9 - var_1_10);
 }
 if ((var_1_8 | var_1_15) < -10) {
  var_1_17 = var_1_9;
 } else {
  var_1_17 = ((((var_1_10) < (var_1_15)) ? (var_1_10) : (var_1_15)));
 }
 if (var_1_2) {
  if (var_1_19 || var_1_20) {
   var_1_18 = (var_1_21 || ((var_1_15 < var_1_17) && var_1_22));
  }
 } else {
  var_1_18 = (var_1_23 && var_1_24);
 }
 if (var_1_18) {
  var_1_1 = (((var_1_3 + 4.275) + (var_1_4 + var_1_5)) - var_1_6);
 }
 var_1_11 = (((((var_1_9 - var_1_10)) < (var_1_8)) ? ((var_1_9 - var_1_10)) : (var_1_8)));
 var_1_12 = ((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))));
 if (var_1_18) {
  if (var_1_11 != (var_1_8 + var_1_17)) {
   var_1_16 = var_1_4;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691400e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 return (((((((var_1_18 ? (var_1_1 == ((double) (((var_1_3 + 4.275) + (var_1_4 + var_1_5)) - var_1_6))) : 1) && ((var_1_6 > var_1_5) ? ((var_1_3 != 199.5) ? ((var_1_4 != (((((- 8.5)) > (var_1_6)) ? ((- 8.5)) : (var_1_6)))) ? (last_1_var_1_18 ? (var_1_7 == ((double) (var_1_3 - var_1_6))) : 1) : (var_1_7 == ((double) (var_1_3 - var_1_5)))) : 1) : (var_1_7 == ((double) var_1_6)))) && ((var_1_5 <= var_1_7) ? (var_1_8 == ((signed short int) (var_1_9 - var_1_10))) : 1)) && (var_1_11 == ((signed long int) (((((var_1_9 - var_1_10)) < (var_1_8)) ? ((var_1_9 - var_1_10)) : (var_1_8)))))) && (var_1_12 == ((unsigned char) ((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))))))) && (var_1_18 ? ((var_1_11 != (var_1_8 + var_1_17)) ? (var_1_16 == ((double) var_1_4)) : 1) : 1)) && (((var_1_8 | var_1_15) < -10) ? (var_1_17 == ((signed long int) var_1_9)) : (var_1_17 == ((signed long int) ((((var_1_10) < (var_1_15)) ? (var_1_10) : (var_1_15))))))) && (var_1_2 ? ((var_1_19 || var_1_20) ? (var_1_18 == ((unsigned char) (var_1_21 || ((var_1_15 < var_1_17) && var_1_22)))) : 1) : (var_1_18 == ((unsigned char) (var_1_23 && var_1_24))))
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
