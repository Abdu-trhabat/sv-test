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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed short int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 signed short int var_1_11;
 unsigned long int var_1_12;
 unsigned long int var_1_13;
 unsigned long int var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -4,
 -1,
 256,
 -100,
 0,
 1,
 0,
 0,
 0,
 5,
 200,
 3644703036,
 16,
 256
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
void initially(void) {
}
void step(void) {
 (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)));
 (*(WrapperStruct00_var_1_4_Pointer)) = 200;
 if ((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_5_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) && (*(WrapperStruct00_var_1_7_Pointer)));
 }
 (*(WrapperStruct00_var_1_8_Pointer)) = (! (*(WrapperStruct00_var_1_9_Pointer)));
 signed long int stepLocal_3 = ~ (*(WrapperStruct00_var_1_3_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_2_Pointer));
 signed short int stepLocal_1 = (*(WrapperStruct00_var_1_11_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_1_Pointer));
 if ((*(WrapperStruct00_var_1_3_Pointer)) <= stepLocal_2) {
  if ((*(WrapperStruct00_var_1_4_Pointer)) == stepLocal_1) {
   if (stepLocal_0 != (*(WrapperStruct00_var_1_3_Pointer))) {
    (*(WrapperStruct00_var_1_10_Pointer)) = 128u;
   } else {
    (*(WrapperStruct00_var_1_10_Pointer)) = (((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)))));
   }
  } else {
   (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_12_Pointer)) - ((*(WrapperStruct00_var_1_13_Pointer)) + ((*(WrapperStruct00_var_1_14_Pointer)) + 8u)));
  }
 } else {
  if (stepLocal_3 <= (*(WrapperStruct00_var_1_2_Pointer))) {
   if ((*(WrapperStruct00_var_1_7_Pointer))) {
    (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
   } else {
    (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483646);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483646);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 4294967294);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1073741824);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 536870912);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))))) && ((*(WrapperStruct00_var_1_4_Pointer)) == ((signed short int) 200))) && (((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_6_Pointer)) && (*(WrapperStruct00_var_1_7_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_9_Pointer)))))) && (((*(WrapperStruct00_var_1_3_Pointer)) <= ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_2_Pointer)))) ? (((*(WrapperStruct00_var_1_4_Pointer)) == (*(WrapperStruct00_var_1_11_Pointer))) ? (((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) 128u)) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) (((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)))))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_12_Pointer)) - ((*(WrapperStruct00_var_1_13_Pointer)) + ((*(WrapperStruct00_var_1_14_Pointer)) + 8u)))))) : (((~ (*(WrapperStruct00_var_1_3_Pointer))) <= (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_13_Pointer))))) : 1))
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
