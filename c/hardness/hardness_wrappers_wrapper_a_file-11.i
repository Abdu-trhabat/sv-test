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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[7] = {
 0, 0, 0, 0, 0, 0, 1
};
double double_Array_0[2][2] = {
 {15.875, 7.675}, {-0.5, 50.75}
};
signed char signed_char_Array_0[3] = {
 10, 10, -16
};
unsigned char unsigned_char_Array_0[5] = {
 128, 10, 16, 5, 10
};
unsigned char last_1_BOOL_unsigned_char_Array_0_1_ = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[6];
 if ((double_Array_0[1][1] - 5.25) < (double_Array_0[0][1] * (double_Array_0[1][0] * 199.4))) {
  if (stepLocal_0 && BOOL_unsigned_char_Array_0[5]) {
   if (double_Array_0[1][0] < double_Array_0[0][1]) {
    signed_char_Array_0[2] = signed_char_Array_0[1];
   } else {
    signed_char_Array_0[2] = signed_char_Array_0[0];
   }
  }
 }
 if (double_Array_0[1][1] <= double_Array_0[0][1]) {
  BOOL_unsigned_char_Array_0[1] = ((BOOL_unsigned_char_Array_0[3] || BOOL_unsigned_char_Array_0[4]) || BOOL_unsigned_char_Array_0[0]);
 } else {
  if ((double_Array_0[1][1] < double_Array_0[1][0]) || last_1_BOOL_unsigned_char_Array_0_1_) {
   BOOL_unsigned_char_Array_0[1] = 0;
  } else {
   BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[2];
  }
 }
 if (BOOL_unsigned_char_Array_0[1] && (double_Array_0[0][1] > (double_Array_0[1][1] / double_Array_0[0][0]))) {
  unsigned_char_Array_0[2] = (((((((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) - unsigned_char_Array_0[1])) > ((unsigned_char_Array_0[3] + unsigned_char_Array_0[4]))) ? ((((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) - unsigned_char_Array_0[1])) : ((unsigned_char_Array_0[3] + unsigned_char_Array_0[4]))));
 } else {
  unsigned_char_Array_0[2] = unsigned_char_Array_0[1];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
 BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 0);
 BOOL_unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[5] <= 1);
 BOOL_unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[6] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[6] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854776000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854776000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[0][0] != 0.0F);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854776000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854776000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 127);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_1_ = BOOL_unsigned_char_Array_0[1];
}
int property(void) {
 return ((((double_Array_0[1][1] - 5.25) < (double_Array_0[0][1] * (double_Array_0[1][0] * 199.4))) ? ((BOOL_unsigned_char_Array_0[6] && BOOL_unsigned_char_Array_0[5]) ? ((double_Array_0[1][0] < double_Array_0[0][1]) ? (signed_char_Array_0[2] == ((signed char) signed_char_Array_0[1])) : (signed_char_Array_0[2] == ((signed char) signed_char_Array_0[0]))) : 1) : 1) && ((double_Array_0[1][1] <= double_Array_0[0][1]) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) ((BOOL_unsigned_char_Array_0[3] || BOOL_unsigned_char_Array_0[4]) || BOOL_unsigned_char_Array_0[0]))) : (((double_Array_0[1][1] < double_Array_0[1][0]) || last_1_BOOL_unsigned_char_Array_0_1_) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) 0)) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[2]))))) && ((BOOL_unsigned_char_Array_0[1] && (double_Array_0[0][1] > (double_Array_0[1][1] / double_Array_0[0][0]))) ? (unsigned_char_Array_0[2] == ((unsigned char) (((((((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) - unsigned_char_Array_0[1])) > ((unsigned_char_Array_0[3] + unsigned_char_Array_0[4]))) ? ((((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) - unsigned_char_Array_0[1])) : ((unsigned_char_Array_0[3] + unsigned_char_Array_0[4])))))) : (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1])))
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
