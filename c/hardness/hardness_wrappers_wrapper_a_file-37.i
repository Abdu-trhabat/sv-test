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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[2][2][2] = {
 {{0.875, 9999999999999.1}, {0.7, 2.6}}, {{0.0, 31.75}, {16.1, 3.625}}
};
unsigned char unsigned_char_Array_0[3] = {
 8, 16, 8
};
unsigned long int unsigned_long_int_Array_0[3] = {
 3853276514, 2189221048, 10000
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {4, 100}, {128, 59049}
};
void initially(void) {
}
void step(void) {
 if (((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1]) ^ (unsigned_short_int_Array_0[1][0] * unsigned_short_int_Array_0[0][0])) <= -64) {
  unsigned_char_Array_0[2] = unsigned_char_Array_0[1];
 } else {
  unsigned_char_Array_0[2] = 16;
 }
 unsigned char stepLocal_1 = unsigned_char_Array_0[1];
 unsigned short int stepLocal_0 = unsigned_short_int_Array_0[0][1];
 if (stepLocal_1 >= 4) {
  if (unsigned_short_int_Array_0[1][1] <= stepLocal_0) {
   double_Array_0[1][0][1] = (((((double_Array_0[1][1][0] - (double_Array_0[1][0][0] - double_Array_0[0][0][1]))) < (double_Array_0[0][1][1])) ? ((double_Array_0[1][1][0] - (double_Array_0[1][0][0] - double_Array_0[0][0][1]))) : (double_Array_0[0][1][1])));
  }
 }
 double_Array_0[0][0][0] = (double_Array_0[0][0][1] + ((((double_Array_0[0][1][0]) > (double_Array_0[1][1][1])) ? (double_Array_0[0][1][0]) : (double_Array_0[1][1][1]))));
 signed long int stepLocal_2 = - unsigned_char_Array_0[1];
 if (63.8 > double_Array_0[1][0][1]) {
  if (stepLocal_2 <= unsigned_short_int_Array_0[1][1]) {
   unsigned_long_int_Array_0[2] = (unsigned_long_int_Array_0[0] - unsigned_char_Array_0[1]);
  } else {
   unsigned_long_int_Array_0[2] = (((((((((unsigned_long_int_Array_0[0]) < (unsigned_long_int_Array_0[1])) ? (unsigned_long_int_Array_0[0]) : (unsigned_long_int_Array_0[1]))) - unsigned_short_int_Array_0[1][0])) < (unsigned_short_int_Array_0[0][0])) ? ((((((unsigned_long_int_Array_0[0]) < (unsigned_long_int_Array_0[1])) ? (unsigned_long_int_Array_0[0]) : (unsigned_long_int_Array_0[1]))) - unsigned_short_int_Array_0[1][0])) : (unsigned_short_int_Array_0[0][0])));
  }
 }
 unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
}
void updateVariables(void) {
 double_Array_0[1][0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][0] >= 4611686.018427383000e+12F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 9223372.036854766000e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
 double_Array_0[0][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][0] >= -461168.6018427383000e+13F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 4611686.018427383000e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
 double_Array_0[1][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][0] >= 0.0F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 9223372.036854766000e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
 double_Array_0[0][0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0][1] >= 0.0F && double_Array_0[0][0][1] <= -1.0e-20F) || (double_Array_0[0][0][1] <= 4611686.018427383000e+12F && double_Array_0[0][0][1] >= 1.0e-20F ));
 double_Array_0[0][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][1] >= -922337.2036854766000e+13F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854766000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
 double_Array_0[1][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][1] >= -461168.6018427383000e+13F && double_Array_0[1][1][1] <= -1.0e-20F) || (double_Array_0[1][1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1][1] >= 1.0e-20F ));
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65535);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1]) ^ (unsigned_short_int_Array_0[1][0] * unsigned_short_int_Array_0[0][0])) <= -64) ? (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1])) : (unsigned_char_Array_0[2] == ((unsigned char) 16))) && ((unsigned_char_Array_0[1] >= 4) ? ((unsigned_short_int_Array_0[1][1] <= unsigned_short_int_Array_0[0][1]) ? (double_Array_0[1][0][1] == ((double) (((((double_Array_0[1][1][0] - (double_Array_0[1][0][0] - double_Array_0[0][0][1]))) < (double_Array_0[0][1][1])) ? ((double_Array_0[1][1][0] - (double_Array_0[1][0][0] - double_Array_0[0][0][1]))) : (double_Array_0[0][1][1]))))) : 1) : 1)) && (double_Array_0[0][0][0] == ((double) (double_Array_0[0][0][1] + ((((double_Array_0[0][1][0]) > (double_Array_0[1][1][1])) ? (double_Array_0[0][1][0]) : (double_Array_0[1][1][1]))))))) && ((63.8 > double_Array_0[1][0][1]) ? (((- unsigned_char_Array_0[1]) <= unsigned_short_int_Array_0[1][1]) ? (unsigned_long_int_Array_0[2] == ((unsigned long int) (unsigned_long_int_Array_0[0] - unsigned_char_Array_0[1]))) : (unsigned_long_int_Array_0[2] == ((unsigned long int) (((((((((unsigned_long_int_Array_0[0]) < (unsigned_long_int_Array_0[1])) ? (unsigned_long_int_Array_0[0]) : (unsigned_long_int_Array_0[1]))) - unsigned_short_int_Array_0[1][0])) < (unsigned_short_int_Array_0[0][0])) ? ((((((unsigned_long_int_Array_0[0]) < (unsigned_long_int_Array_0[1])) ? (unsigned_long_int_Array_0[0]) : (unsigned_long_int_Array_0[1]))) - unsigned_short_int_Array_0[1][0])) : (unsigned_short_int_Array_0[0][0])))))) : 1)) && (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))
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
