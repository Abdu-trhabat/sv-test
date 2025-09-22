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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 16;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 10000;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_5 = 50;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 1438530836;
unsigned long int* var_1_6_Pointer = &(var_1_6);
unsigned long int var_1_7 = 1401937267;
unsigned long int* var_1_7_Pointer = &(var_1_7);
unsigned long int var_1_8 = 1707018182;
unsigned long int* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_9 = 25;
unsigned long int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -128;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 1;
signed short int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = 10000;
signed short int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 200;
signed short int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = 50;
signed short int* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 100;
signed short int* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 128;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_18 = 128;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 64;
unsigned char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 0;
unsigned char* var_1_20_Pointer = &(var_1_20);
unsigned char var_1_21 = 1;
unsigned char* var_1_21_Pointer = &(var_1_21);
unsigned char var_1_22 = 1;
unsigned char* var_1_22_Pointer = &(var_1_22);
unsigned char var_1_23 = 0;
unsigned char* var_1_23_Pointer = &(var_1_23);
unsigned char var_1_24 = 0;
unsigned char* var_1_24_Pointer = &(var_1_24);
unsigned char last_1_var_1_20 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_var_1_20;
 if (((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) || stepLocal_0) {
  (*(var_1_1_Pointer)) = (((((((((*(var_1_5_Pointer))) < (32u)) ? ((*(var_1_5_Pointer))) : (32u)))) < ((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) - ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer)))))) ? ((((((*(var_1_5_Pointer))) < (32u)) ? ((*(var_1_5_Pointer))) : (32u)))) : ((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) - ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer)))))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
 }
 signed long int stepLocal_2 = 1000;
 if ((*(var_1_13_Pointer)) < stepLocal_2) {
  (*(var_1_20_Pointer)) = ((*(var_1_21_Pointer)) && (((*(var_1_1_Pointer)) > 64u) || (*(var_1_22_Pointer))));
 } else {
  (*(var_1_20_Pointer)) = (! ((*(var_1_23_Pointer)) || (*(var_1_24_Pointer))));
 }
 (*(var_1_10_Pointer)) = ((*(var_1_11_Pointer)) - (((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))) + (((((*(var_1_14_Pointer))) < ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))));
 signed long int stepLocal_1 = (*(var_1_14_Pointer)) % (*(var_1_12_Pointer));
 if (stepLocal_1 <= (*(var_1_1_Pointer))) {
  (*(var_1_16_Pointer)) = (((((((((*(var_1_18_Pointer))) > (128)) ? ((*(var_1_18_Pointer))) : (128)))) < ((*(var_1_19_Pointer)))) ? ((((((*(var_1_18_Pointer))) > (128)) ? ((*(var_1_18_Pointer))) : (128)))) : ((*(var_1_19_Pointer)))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741824);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 1073741823);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 8191);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 8191);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) || last_1_var_1_20) ? ((*(var_1_1_Pointer)) == ((unsigned long int) (((((((((*(var_1_5_Pointer))) < (32u)) ? ((*(var_1_5_Pointer))) : (32u)))) < ((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) - ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer)))))) ? ((((((*(var_1_5_Pointer))) < (32u)) ? ((*(var_1_5_Pointer))) : (32u)))) : ((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) - ((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))))))))) : ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_9_Pointer))))) && ((*(var_1_10_Pointer)) == ((signed short int) ((*(var_1_11_Pointer)) - (((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))) + (((((*(var_1_14_Pointer))) < ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))))))) && ((((*(var_1_14_Pointer)) % (*(var_1_12_Pointer))) <= (*(var_1_1_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned char) (((((((((*(var_1_18_Pointer))) > (128)) ? ((*(var_1_18_Pointer))) : (128)))) < ((*(var_1_19_Pointer)))) ? ((((((*(var_1_18_Pointer))) > (128)) ? ((*(var_1_18_Pointer))) : (128)))) : ((*(var_1_19_Pointer))))))) : 1)) && (((*(var_1_13_Pointer)) < 1000) ? ((*(var_1_20_Pointer)) == ((unsigned char) ((*(var_1_21_Pointer)) && (((*(var_1_1_Pointer)) > 64u) || (*(var_1_22_Pointer)))))) : ((*(var_1_20_Pointer)) == ((unsigned char) (! ((*(var_1_23_Pointer)) || (*(var_1_24_Pointer)))))))
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
