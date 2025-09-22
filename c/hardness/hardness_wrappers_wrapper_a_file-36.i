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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 1, 0
};
double double_Array_0[2][2] = {
 {9.5, 64.2}, {199.5, 3.5}
};
float float_Array_0[3] = {
 4.25, 9999999999.875, 63.25
};
signed long int signed_long_int_Array_0[2] = {
 0, 16
};
unsigned char unsigned_char_Array_0[2] = {
 2, 1
};
unsigned long int unsigned_long_int_Array_0[2] = {
 256, 1
};
void initially(void) {
}
void step(void) {
 if ((signed_long_int_Array_0[1] >> 16u) < ((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0])))) {
  BOOL_unsigned_char_Array_0[1] = (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[0]);
 }
 if (float_Array_0[2] > float_Array_0[0]) {
  double_Array_0[0][1] = 4.6;
 } else {
  double_Array_0[0][1] = ((((double_Array_0[0][0]) > (((((double_Array_0[1][0]) > (double_Array_0[1][1])) ? (double_Array_0[1][0]) : (double_Array_0[1][1]))))) ? (double_Array_0[0][0]) : (((((double_Array_0[1][0]) > (double_Array_0[1][1])) ? (double_Array_0[1][0]) : (double_Array_0[1][1]))))));
 }
 if (double_Array_0[1][0] == (- double_Array_0[0][0])) {
  if (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]) {
   unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
  } else {
   unsigned_char_Array_0[1] = 0;
  }
 } else {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
 }
 unsigned char stepLocal_0 = float_Array_0[2] > float_Array_0[1];
 if (stepLocal_0 && BOOL_unsigned_char_Array_0[1]) {
  if (((((float_Array_0[2]) > ((- float_Array_0[1]))) ? (float_Array_0[2]) : ((- float_Array_0[1])))) != float_Array_0[0]) {
   if (BOOL_unsigned_char_Array_0[1]) {
    unsigned_long_int_Array_0[1] = 10u;
   } else {
    unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[0];
   }
  } else {
   unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[0];
  }
 } else {
  unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[0];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854766000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854766000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= -922337.2036854766000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854766000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((float_Array_0[2] > float_Array_0[1]) && BOOL_unsigned_char_Array_0[1]) ? ((((((float_Array_0[2]) > ((- float_Array_0[1]))) ? (float_Array_0[2]) : ((- float_Array_0[1])))) != float_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1] ? (unsigned_long_int_Array_0[1] == ((unsigned long int) 10u)) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[0]))) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[0]))) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[0]))) && (((signed_long_int_Array_0[1] >> 16u) < ((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0])))) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[0]))) : 1)) && ((float_Array_0[2] > float_Array_0[0]) ? (double_Array_0[0][1] == ((double) 4.6)) : (double_Array_0[0][1] == ((double) ((((double_Array_0[0][0]) > (((((double_Array_0[1][0]) > (double_Array_0[1][1])) ? (double_Array_0[1][0]) : (double_Array_0[1][1]))))) ? (double_Array_0[0][0]) : (((((double_Array_0[1][0]) > (double_Array_0[1][1])) ? (double_Array_0[1][0]) : (double_Array_0[1][1])))))))))) && ((double_Array_0[1][0] == (- double_Array_0[0][0])) ? ((BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : (unsigned_char_Array_0[1] == ((unsigned char) 0))) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])))
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
