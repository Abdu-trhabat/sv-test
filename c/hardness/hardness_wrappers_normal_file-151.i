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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 31.6;
double var_1_2 = 0.0;
double var_1_3 = 255.875;
double var_1_4 = 24.5;
float var_1_5 = 49.5;
float var_1_6 = 32.6;
float var_1_7 = 8.2;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 50;
signed long int var_1_10 = 256;
unsigned short int var_1_11 = 50174;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 50;
unsigned char var_1_15 = 25;
unsigned char var_1_16 = 50;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 64;
unsigned char var_1_19 = 1;
void initially(void) {
}
void step(void) {
 var_1_1 = ((var_1_2 - var_1_3) - var_1_4);
 var_1_5 = ((var_1_3 - var_1_6) + var_1_7);
 if (25 <= ((100000000 + var_1_9) - var_1_10)) {
  if (1 >= var_1_9) {
   if (((((var_1_11 - 8) < 0 ) ? -(var_1_11 - 8) : (var_1_11 - 8))) == var_1_10) {
    var_1_8 = (var_1_12 && (! 0));
   } else {
    var_1_8 = (var_1_12 && var_1_13);
   }
  }
 }
 if (! var_1_13) {
  var_1_14 = ((((((var_1_15 + var_1_16)) > (var_1_17)) ? ((var_1_15 + var_1_16)) : (var_1_17))) + ((((var_1_18 + var_1_19) < 0 ) ? -(var_1_18 + var_1_19) : (var_1_18 + var_1_19))));
 } else {
  if (var_1_13) {
   var_1_14 = var_1_19;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 4611686.018427383000e+12F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65535);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 64);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_1 == ((double) ((var_1_2 - var_1_3) - var_1_4))) && (var_1_5 == ((float) ((var_1_3 - var_1_6) + var_1_7)))) && ((25 <= ((100000000 + var_1_9) - var_1_10)) ? ((1 >= var_1_9) ? ((((((var_1_11 - 8) < 0 ) ? -(var_1_11 - 8) : (var_1_11 - 8))) == var_1_10) ? (var_1_8 == ((unsigned char) (var_1_12 && (! 0)))) : (var_1_8 == ((unsigned char) (var_1_12 && var_1_13)))) : 1) : 1)) && ((! var_1_13) ? (var_1_14 == ((unsigned char) ((((((var_1_15 + var_1_16)) > (var_1_17)) ? ((var_1_15 + var_1_16)) : (var_1_17))) + ((((var_1_18 + var_1_19) < 0 ) ? -(var_1_18 + var_1_19) : (var_1_18 + var_1_19)))))) : (var_1_13 ? (var_1_14 == ((unsigned char) var_1_19)) : 1))
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
