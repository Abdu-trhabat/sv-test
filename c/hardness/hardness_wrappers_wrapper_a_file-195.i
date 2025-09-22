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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Wrapper_A.c", 13, "reach_error"); }
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
 0, 1, 1
};
double double_Array_0[2][3] = {
 {31.5, 4.8, 99999999999.2}, {199.2, 24.625, 0.04}
};
float float_Array_0[2] = {
 4.78, 31.95
};
signed long int signed_long_int_Array_0[2][2] = {
 {1000, 128}, {25, 50}
};
unsigned char unsigned_char_Array_0[1] = {
 64
};
unsigned long int unsigned_long_int_Array_0[2] = {
 10, 5
};
double last_1_double_Array_0_1__2_ = 0.04;
signed long int last_1_signed_long_int_Array_0_0__0_ = 1000;
void initially(void) {
}
void step(void) {
 if ((float_Array_0[0] - float_Array_0[1]) > last_1_double_Array_0_1__2_) {
  signed_long_int_Array_0[0][0] = (((((unsigned_char_Array_0[0] - last_1_signed_long_int_Array_0_0__0_)) < (((((signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[1][0])) ? (signed_long_int_Array_0[1][1]) : (signed_long_int_Array_0[1][0]))))) ? ((unsigned_char_Array_0[0] - last_1_signed_long_int_Array_0_0__0_)) : (((((signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[1][0])) ? (signed_long_int_Array_0[1][1]) : (signed_long_int_Array_0[1][0]))))));
 } else {
  signed_long_int_Array_0[0][0] = (last_1_signed_long_int_Array_0_0__0_ - ((((signed_long_int_Array_0[0][1]) > (unsigned_char_Array_0[0])) ? (signed_long_int_Array_0[0][1]) : (unsigned_char_Array_0[0]))));
 }
 if (signed_long_int_Array_0[0][0] <= (signed_long_int_Array_0[0][1] * (- signed_long_int_Array_0[0][0]))) {
  unsigned_long_int_Array_0[0] = ((((signed_long_int_Array_0[0][0]) > (unsigned_long_int_Array_0[1])) ? (signed_long_int_Array_0[0][0]) : (unsigned_long_int_Array_0[1])));
 } else {
  unsigned_long_int_Array_0[0] = signed_long_int_Array_0[0][0];
 }
 signed long int stepLocal_0 = signed_long_int_Array_0[0][0];
 if (stepLocal_0 <= unsigned_long_int_Array_0[0]) {
  double_Array_0[1][2] = (((((((((double_Array_0[1][1] + double_Array_0[1][0])) < (double_Array_0[0][0])) ? ((double_Array_0[1][1] + double_Array_0[1][0])) : (double_Array_0[0][0])))) > (((((double_Array_0[0][1]) < (double_Array_0[0][2])) ? (double_Array_0[0][1]) : (double_Array_0[0][2]))))) ? ((((((double_Array_0[1][1] + double_Array_0[1][0])) < (double_Array_0[0][0])) ? ((double_Array_0[1][1] + double_Array_0[1][0])) : (double_Array_0[0][0])))) : (((((double_Array_0[0][1]) < (double_Array_0[0][2])) ? (double_Array_0[0][1]) : (double_Array_0[0][2]))))));
 } else {
  double_Array_0[1][2] = 16.2;
 }
 if (signed_long_int_Array_0[0][0] < unsigned_long_int_Array_0[0]) {
  BOOL_unsigned_char_Array_0[2] = BOOL_unsigned_char_Array_0[1];
 } else {
  BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]);
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854766000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -461168.6018427383000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 4611686.018427383000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854766000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854766000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= -461168.6018427383000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 double_Array_0[0][2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][2] >= -922337.2036854766000e+13F && double_Array_0[0][2] <= -1.0e-20F) || (double_Array_0[0][2] <= 9223372.036854766000e+12F && double_Array_0[0][2] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483646);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483646);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}
void updateLastVariables(void) {
 last_1_double_Array_0_1__2_ = double_Array_0[1][2];
 last_1_signed_long_int_Array_0_0__0_ = signed_long_int_Array_0[0][0];
}
int property(void) {
 return ((((signed_long_int_Array_0[0][0] < unsigned_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) BOOL_unsigned_char_Array_0[1])) : (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0])))) && ((signed_long_int_Array_0[0][0] <= unsigned_long_int_Array_0[0]) ? (double_Array_0[1][2] == ((double) (((((((((double_Array_0[1][1] + double_Array_0[1][0])) < (double_Array_0[0][0])) ? ((double_Array_0[1][1] + double_Array_0[1][0])) : (double_Array_0[0][0])))) > (((((double_Array_0[0][1]) < (double_Array_0[0][2])) ? (double_Array_0[0][1]) : (double_Array_0[0][2]))))) ? ((((((double_Array_0[1][1] + double_Array_0[1][0])) < (double_Array_0[0][0])) ? ((double_Array_0[1][1] + double_Array_0[1][0])) : (double_Array_0[0][0])))) : (((((double_Array_0[0][1]) < (double_Array_0[0][2])) ? (double_Array_0[0][1]) : (double_Array_0[0][2])))))))) : (double_Array_0[1][2] == ((double) 16.2)))) && (((float_Array_0[0] - float_Array_0[1]) > last_1_double_Array_0_1__2_) ? (signed_long_int_Array_0[0][0] == ((signed long int) (((((unsigned_char_Array_0[0] - last_1_signed_long_int_Array_0_0__0_)) < (((((signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[1][0])) ? (signed_long_int_Array_0[1][1]) : (signed_long_int_Array_0[1][0]))))) ? ((unsigned_char_Array_0[0] - last_1_signed_long_int_Array_0_0__0_)) : (((((signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[1][0])) ? (signed_long_int_Array_0[1][1]) : (signed_long_int_Array_0[1][0])))))))) : (signed_long_int_Array_0[0][0] == ((signed long int) (last_1_signed_long_int_Array_0_0__0_ - ((((signed_long_int_Array_0[0][1]) > (unsigned_char_Array_0[0])) ? (signed_long_int_Array_0[0][1]) : (unsigned_char_Array_0[0])))))))) && ((signed_long_int_Array_0[0][0] <= (signed_long_int_Array_0[0][1] * (- signed_long_int_Array_0[0][0]))) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) ((((signed_long_int_Array_0[0][0]) > (unsigned_long_int_Array_0[1])) ? (signed_long_int_Array_0[0][0]) : (unsigned_long_int_Array_0[1]))))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_long_int_Array_0[0][0])))
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
