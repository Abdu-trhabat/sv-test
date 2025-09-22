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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 1
};
double double_Array_0[2] = {
 0.4, 100000000.2
};
float float_Array_0[2] = {
 15.2, 10.8
};
signed long int signed_long_int_Array_0[1] = {
 8
};
signed short int signed_short_int_Array_0[5] = {
 4, 2, -4, -32, 10
};
unsigned char unsigned_char_Array_0[2][2] = {
 {4, 2}, {10, 100}
};
void initially(void) {
}
void step(void) {
 if (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) {
  signed_long_int_Array_0[0] = unsigned_char_Array_0[1][0];
 }
 double_Array_0[0] = double_Array_0[1];
 signed long int stepLocal_0 = 4;
 if (signed_long_int_Array_0[0] < stepLocal_0) {
  signed_short_int_Array_0[4] = (signed_short_int_Array_0[3] + signed_short_int_Array_0[2]);
 } else {
  signed_short_int_Array_0[4] = (signed_short_int_Array_0[1] - 5);
 }
 signed long int stepLocal_1 = signed_long_int_Array_0[0];
 if (signed_short_int_Array_0[2] == stepLocal_1) {
  unsigned_char_Array_0[1][1] = (((((unsigned_char_Array_0[0][1]) < (unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][0]))) + (((((64 + 8)) > (unsigned_char_Array_0[0][0])) ? ((64 + 8)) : (unsigned_char_Array_0[0][0]))));
 } else {
  unsigned_char_Array_0[1][1] = (unsigned_char_Array_0[0][1] + 4);
 }
 if ((float_Array_0[1] - float_Array_0[0]) < double_Array_0[0]) {
  if (BOOL_unsigned_char_Array_0[1] || (signed_long_int_Array_0[0] >= ((((signed_short_int_Array_0[2]) > (signed_short_int_Array_0[3])) ? (signed_short_int_Array_0[2]) : (signed_short_int_Array_0[3]))))) {
   if (float_Array_0[0] >= 127.25f) {
    signed_short_int_Array_0[0] = signed_short_int_Array_0[3];
   }
  }
 } else {
  signed_short_int_Array_0[0] = 16;
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 16383);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 127);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((signed_long_int_Array_0[0] < 4) ? (signed_short_int_Array_0[4] == ((signed short int) (signed_short_int_Array_0[3] + signed_short_int_Array_0[2]))) : (signed_short_int_Array_0[4] == ((signed short int) (signed_short_int_Array_0[1] - 5)))) && ((signed_short_int_Array_0[2] == signed_long_int_Array_0[0]) ? (unsigned_char_Array_0[1][1] == ((unsigned char) (((((unsigned_char_Array_0[0][1]) < (unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][0]))) + (((((64 + 8)) > (unsigned_char_Array_0[0][0])) ? ((64 + 8)) : (unsigned_char_Array_0[0][0])))))) : (unsigned_char_Array_0[1][1] == ((unsigned char) (unsigned_char_Array_0[0][1] + 4))))) && (((float_Array_0[1] - float_Array_0[0]) < double_Array_0[0]) ? ((BOOL_unsigned_char_Array_0[1] || (signed_long_int_Array_0[0] >= ((((signed_short_int_Array_0[2]) > (signed_short_int_Array_0[3])) ? (signed_short_int_Array_0[2]) : (signed_short_int_Array_0[3]))))) ? ((float_Array_0[0] >= 127.25f) ? (signed_short_int_Array_0[0] == ((signed short int) signed_short_int_Array_0[3])) : 1) : 1) : (signed_short_int_Array_0[0] == ((signed short int) 16)))) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1][0])) : 1)) && (double_Array_0[0] == ((double) double_Array_0[1]))
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
