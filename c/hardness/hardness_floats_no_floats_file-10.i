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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned long int var_1_2 = 8;
signed long int var_1_3 = -16;
signed long int var_1_5 = 256;
signed long int var_1_6 = 0;
signed long int var_1_7 = 25;
signed long int var_1_8 = 0;
signed short int var_1_9 = 128;
signed short int var_1_11 = 4;
signed short int var_1_12 = 8;
unsigned char var_1_13 = 0;
signed char var_1_14 = 32;
unsigned short int var_1_15 = 5;
unsigned char var_1_16 = 0;
void initially(void) {
}
void step(void) {
 var_1_1 = var_1_2;
 unsigned long int stepLocal_0 = var_1_1;
 if ((var_1_14 >> ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) != stepLocal_0) {
  var_1_13 = ((var_1_14 > var_1_1) && var_1_16);
 } else {
  var_1_13 = var_1_16;
 }
 if (var_1_13) {
  var_1_3 = (var_1_5 - ((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))));
 }
 if ((var_1_6 + var_1_5) >= var_1_3) {
  if (var_1_6 <= 128) {
   if (var_1_5 >= (var_1_3 * 32)) {
    var_1_9 = (((((var_1_11) > (256)) ? (var_1_11) : (256))) - var_1_12);
   } else {
    if (((((var_1_1) < (var_1_12)) ? (var_1_1) : (var_1_12))) >= var_1_2) {
     var_1_9 = var_1_12;
    } else {
     var_1_9 = var_1_11;
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967294);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 6);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_1 == ((unsigned long int) var_1_2)) && (var_1_13 ? (var_1_3 == ((signed long int) (var_1_5 - ((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))))) : 1)) && (((var_1_6 + var_1_5) >= var_1_3) ? ((var_1_6 <= 128) ? ((var_1_5 >= (var_1_3 * 32)) ? (var_1_9 == ((signed short int) (((((var_1_11) > (256)) ? (var_1_11) : (256))) - var_1_12))) : ((((((var_1_1) < (var_1_12)) ? (var_1_1) : (var_1_12))) >= var_1_2) ? (var_1_9 == ((signed short int) var_1_12)) : (var_1_9 == ((signed short int) var_1_11)))) : 1) : 1)) && (((var_1_14 >> ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) != var_1_1) ? (var_1_13 == ((unsigned char) ((var_1_14 > var_1_1) && var_1_16))) : (var_1_13 == ((unsigned char) var_1_16)))
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
