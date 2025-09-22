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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -4;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -1;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 256;
signed long int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = -100;
signed short int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 5;
unsigned long int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 200;
signed short int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 3644703036;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 16;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 256;
unsigned long int* var_1_14_Pointer = &(var_1_14);
void initially(void) {
}
void step(void) {
 (*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)));
 (*(var_1_4_Pointer)) = 200;
 if ((*(var_1_1_Pointer)) <= (*(var_1_4_Pointer))) {
  (*(var_1_5_Pointer)) = ((*(var_1_6_Pointer)) && (*(var_1_7_Pointer)));
 }
 (*(var_1_8_Pointer)) = (! (*(var_1_9_Pointer)));
 signed long int stepLocal_3 = ~ (*(var_1_3_Pointer));
 signed long int stepLocal_2 = (*(var_1_4_Pointer)) + (*(var_1_2_Pointer));
 signed short int stepLocal_1 = (*(var_1_11_Pointer));
 signed long int stepLocal_0 = (*(var_1_1_Pointer));
 if ((*(var_1_3_Pointer)) <= stepLocal_2) {
  if ((*(var_1_4_Pointer)) == stepLocal_1) {
   if (stepLocal_0 != (*(var_1_3_Pointer))) {
    (*(var_1_10_Pointer)) = 128u;
   } else {
    (*(var_1_10_Pointer)) = (((((*(var_1_12_Pointer)) - (*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_12_Pointer)) - (*(var_1_3_Pointer))) : ((*(var_1_12_Pointer)) - (*(var_1_3_Pointer)))));
   }
  } else {
   (*(var_1_10_Pointer)) = ((*(var_1_12_Pointer)) - ((*(var_1_13_Pointer)) + ((*(var_1_14_Pointer)) + 8u)));
  }
 } else {
  if (stepLocal_3 <= (*(var_1_2_Pointer))) {
   if ((*(var_1_7_Pointer))) {
    (*(var_1_10_Pointer)) = (*(var_1_14_Pointer));
   } else {
    (*(var_1_10_Pointer)) = (*(var_1_13_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32768);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741824);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 536870912);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))))) && ((*(var_1_4_Pointer)) == ((signed short int) 200))) && (((*(var_1_1_Pointer)) <= (*(var_1_4_Pointer))) ? ((*(var_1_5_Pointer)) == ((unsigned char) ((*(var_1_6_Pointer)) && (*(var_1_7_Pointer))))) : 1)) && ((*(var_1_8_Pointer)) == ((unsigned char) (! (*(var_1_9_Pointer)))))) && (((*(var_1_3_Pointer)) <= ((*(var_1_4_Pointer)) + (*(var_1_2_Pointer)))) ? (((*(var_1_4_Pointer)) == (*(var_1_11_Pointer))) ? (((*(var_1_1_Pointer)) != (*(var_1_3_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned long int) 128u)) : ((*(var_1_10_Pointer)) == ((unsigned long int) (((((*(var_1_12_Pointer)) - (*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_12_Pointer)) - (*(var_1_3_Pointer))) : ((*(var_1_12_Pointer)) - (*(var_1_3_Pointer)))))))) : ((*(var_1_10_Pointer)) == ((unsigned long int) ((*(var_1_12_Pointer)) - ((*(var_1_13_Pointer)) + ((*(var_1_14_Pointer)) + 8u)))))) : (((~ (*(var_1_3_Pointer))) <= (*(var_1_2_Pointer))) ? ((*(var_1_7_Pointer)) ? ((*(var_1_10_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer)))) : ((*(var_1_10_Pointer)) == ((unsigned long int) (*(var_1_13_Pointer))))) : 1))
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
