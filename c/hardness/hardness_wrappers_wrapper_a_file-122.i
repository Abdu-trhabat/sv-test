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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Wrapper_A.c", 13, "reach_error"); }
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
 0, 0
};
double double_Array_0[5] = {
 999999999.2, 255.75, 16.6, 5.75, 1.3
};
float float_Array_0[1] = {
 16.5
};
signed long int signed_long_int_Array_0[5] = {
 1999204289, 100, 32, 1433281976, 64
};
unsigned char unsigned_char_Array_0[2] = {
 0, 8
};
unsigned long int unsigned_long_int_Array_0[2] = {
 2427043635, 1
};
void initially(void) {
}
void step(void) {
 unsigned_char_Array_0[1] = (((((((1) < (unsigned_char_Array_0[0])) ? (1) : (unsigned_char_Array_0[0]))) < 0 ) ? -((((1) < (unsigned_char_Array_0[0])) ? (1) : (unsigned_char_Array_0[0]))) : ((((1) < (unsigned_char_Array_0[0])) ? (1) : (unsigned_char_Array_0[0])))));
 if (double_Array_0[4] < double_Array_0[3]) {
  unsigned_long_int_Array_0[1] = (((((unsigned_char_Array_0[1]) < 0 ) ? -(unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))) + unsigned_char_Array_0[0]);
 } else {
  unsigned_long_int_Array_0[1] = unsigned_char_Array_0[0];
 }
 if (double_Array_0[4] >= double_Array_0[3]) {
  double_Array_0[2] = ((((7.8) < ((double_Array_0[1] - double_Array_0[0]))) ? (7.8) : ((double_Array_0[1] - double_Array_0[0]))));
 }
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[1];
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[1];
 if (BOOL_unsigned_char_Array_0[0] || stepLocal_0) {
  signed_long_int_Array_0[1] = 128;
 } else {
  if (unsigned_char_Array_0[0] < stepLocal_1) {
   signed_long_int_Array_0[1] = (((((unsigned_char_Array_0[0] - (signed_long_int_Array_0[0] - unsigned_long_int_Array_0[1]))) < ((signed_long_int_Array_0[2] - (signed_long_int_Array_0[3] - signed_long_int_Array_0[4])))) ? ((unsigned_char_Array_0[0] - (signed_long_int_Array_0[0] - unsigned_long_int_Array_0[1]))) : ((signed_long_int_Array_0[2] - (signed_long_int_Array_0[3] - signed_long_int_Array_0[4])))));
  }
 }
 unsigned long int stepLocal_2 = unsigned_long_int_Array_0[1];
 if (stepLocal_2 > (signed_long_int_Array_0[3] % (unsigned_long_int_Array_0[0] - signed_long_int_Array_0[0]))) {
  float_Array_0[0] = double_Array_0[1];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854776000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854776000e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -922337.2036854776000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854776000e+12F && double_Array_0[4] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483646);
 signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[3] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483646);
 signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[4] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[4] <= 1073741823);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((unsigned_char_Array_0[1] == ((unsigned char) (((((((1) < (unsigned_char_Array_0[0])) ? (1) : (unsigned_char_Array_0[0]))) < 0 ) ? -((((1) < (unsigned_char_Array_0[0])) ? (1) : (unsigned_char_Array_0[0]))) : ((((1) < (unsigned_char_Array_0[0])) ? (1) : (unsigned_char_Array_0[0]))))))) && ((double_Array_0[4] < double_Array_0[3]) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) (((((unsigned_char_Array_0[1]) < 0 ) ? -(unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))) + unsigned_char_Array_0[0]))) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_char_Array_0[0])))) && ((double_Array_0[4] >= double_Array_0[3]) ? (double_Array_0[2] == ((double) ((((7.8) < ((double_Array_0[1] - double_Array_0[0]))) ? (7.8) : ((double_Array_0[1] - double_Array_0[0])))))) : 1)) && ((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) ? (signed_long_int_Array_0[1] == ((signed long int) 128)) : ((unsigned_char_Array_0[0] < unsigned_long_int_Array_0[1]) ? (signed_long_int_Array_0[1] == ((signed long int) (((((unsigned_char_Array_0[0] - (signed_long_int_Array_0[0] - unsigned_long_int_Array_0[1]))) < ((signed_long_int_Array_0[2] - (signed_long_int_Array_0[3] - signed_long_int_Array_0[4])))) ? ((unsigned_char_Array_0[0] - (signed_long_int_Array_0[0] - unsigned_long_int_Array_0[1]))) : ((signed_long_int_Array_0[2] - (signed_long_int_Array_0[3] - signed_long_int_Array_0[4]))))))) : 1))) && ((unsigned_long_int_Array_0[1] > (signed_long_int_Array_0[3] % (unsigned_long_int_Array_0[0] - signed_long_int_Array_0[0]))) ? (float_Array_0[0] == ((float) double_Array_0[1])) : 1)
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
