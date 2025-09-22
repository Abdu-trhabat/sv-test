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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172has_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 5;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
signed long int var_1_7 = -64;
signed long int var_1_8 = -25;
signed long int var_1_9 = 50;
signed long int var_1_10 = 0;
signed short int var_1_11 = 8;
signed short int var_1_12 = -128;
signed short int var_1_13 = -2;
float var_1_14 = 128.0;
float var_1_15 = 4.0;
float var_1_16 = 10.0;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= var_1_3) {
  var_1_1 = (var_1_4 || var_1_5);
 } else {
  if (var_1_2 >= var_1_3) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_5;
  }
 }
 if (var_1_3 < var_1_2) {
  var_1_7 = (var_1_2 + ((var_1_3 + var_1_8) + (var_1_9 - var_1_10)));
 } else {
  var_1_7 = ((((-4) > ((((((128) > (var_1_2)) ? (128) : (var_1_2))) - var_1_9))) ? (-4) : ((((((128) > (var_1_2)) ? (128) : (var_1_2))) - var_1_9))));
 }
 var_1_11 = ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)));
 if (-8 > var_1_12) {
  var_1_14 = (var_1_15 - ((((1000000.0f) < (var_1_16)) ? (1000000.0f) : (var_1_16))));
 } else {
  if (var_1_6) {
   var_1_14 = var_1_16;
  } else {
   if (var_1_1) {
    if (var_1_1) {
     var_1_14 = var_1_16;
    }
   } else {
    var_1_14 = var_1_15;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -268435455);
 assume_abort_if_not(var_1_8 <= 268435456);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 536870911);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 536870911);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : ((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_5)))) && ((var_1_3 < var_1_2) ? (var_1_7 == ((signed long int) (var_1_2 + ((var_1_3 + var_1_8) + (var_1_9 - var_1_10))))) : (var_1_7 == ((signed long int) ((((-4) > ((((((128) > (var_1_2)) ? (128) : (var_1_2))) - var_1_9))) ? (-4) : ((((((128) > (var_1_2)) ? (128) : (var_1_2))) - var_1_9)))))))) && (var_1_11 == ((signed short int) ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))))) && ((-8 > var_1_12) ? (var_1_14 == ((float) (var_1_15 - ((((1000000.0f) < (var_1_16)) ? (1000000.0f) : (var_1_16)))))) : (var_1_6 ? (var_1_14 == ((float) var_1_16)) : (var_1_1 ? (var_1_1 ? (var_1_14 == ((float) var_1_16)) : 1) : (var_1_14 == ((float) var_1_15)))))
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
