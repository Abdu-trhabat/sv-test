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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_4 = 1000;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 64;
unsigned short int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 64;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = -64;
signed char* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 1623884356;
signed long int* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 16;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 50;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 0;
signed char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -128;
signed char* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = -25;
signed short int* var_1_15_Pointer = &(var_1_15);
signed long int last_1_var_1_6 = 64;
signed short int last_1_var_1_15 = -25;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_6 < last_1_var_1_15) {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + ((*(var_1_5_Pointer)) + 64));
 }
 (*(var_1_13_Pointer)) = (*(var_1_11_Pointer));
 (*(var_1_14_Pointer)) = (*(var_1_11_Pointer));
 (*(var_1_15_Pointer)) = (*(var_1_5_Pointer));
 if (last_1_var_1_6 > (*(var_1_15_Pointer))) {
  if ((*(var_1_5_Pointer)) > last_1_var_1_6) {
   if ((*(var_1_4_Pointer)) != (16 | (*(var_1_5_Pointer)))) {
    if (! (*(var_1_7_Pointer))) {
     (*(var_1_6_Pointer)) = (*(var_1_5_Pointer));
    } else {
     (*(var_1_6_Pointer)) = (*(var_1_15_Pointer));
    }
   }
  } else {
   (*(var_1_6_Pointer)) = (*(var_1_1_Pointer));
  }
 } else {
  (*(var_1_6_Pointer)) = (*(var_1_4_Pointer));
 }
 signed long int stepLocal_0 = (*(var_1_6_Pointer));
 if (stepLocal_0 == ((*(var_1_1_Pointer)) - ((*(var_1_9_Pointer)) - (*(var_1_5_Pointer))))) {
  (*(var_1_8_Pointer)) = ((((((((-16) > (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) ? (-16) : (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))))) < ((*(var_1_12_Pointer)))) ? (((((-16) > (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) ? (-16) : (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))))) : ((*(var_1_12_Pointer)))));
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1073741823);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 return ((((((last_1_var_1_6 < last_1_var_1_15) ? ((*(var_1_1_Pointer)) == ((unsigned short int) ((*(var_1_4_Pointer)) + ((*(var_1_5_Pointer)) + 64)))) : 1) && ((last_1_var_1_6 > (*(var_1_15_Pointer))) ? (((*(var_1_5_Pointer)) > last_1_var_1_6) ? (((*(var_1_4_Pointer)) != (16 | (*(var_1_5_Pointer)))) ? ((! (*(var_1_7_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_5_Pointer)))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_15_Pointer))))) : 1) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_1_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))))) && (((*(var_1_6_Pointer)) == ((*(var_1_1_Pointer)) - ((*(var_1_9_Pointer)) - (*(var_1_5_Pointer))))) ? ((*(var_1_8_Pointer)) == ((signed char) ((((((((-16) > (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) ? (-16) : (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))))) < ((*(var_1_12_Pointer)))) ? (((((-16) > (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) ? (-16) : (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))))) : ((*(var_1_12_Pointer))))))) : ((*(var_1_8_Pointer)) == ((signed char) (*(var_1_10_Pointer)))))) && ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_11_Pointer))))) && ((*(var_1_14_Pointer)) == ((signed char) (*(var_1_11_Pointer))))) && ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_5_Pointer))))
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
