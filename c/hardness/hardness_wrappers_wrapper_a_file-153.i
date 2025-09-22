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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {0, 1}
};
double double_Array_0[3] = {
 256.2, 100000000000000.5, 24.75
};
signed char signed_char_Array_0[1] = {
 10
};
signed short int signed_short_int_Array_0[2] = {
 -32, -50
};
unsigned long int unsigned_long_int_Array_0[2] = {
 256, 50
};
unsigned short int unsigned_short_int_Array_0[3] = {
 32, 1, 32
};
signed short int last_1_signed_short_int_Array_0_1_ = -50;
void initially(void) {
}
void step(void) {
 if (last_1_signed_short_int_Array_0_1_ <= (((((-32) < 0 ) ? -(-32) : (-32))) + 16)) {
  unsigned_long_int_Array_0[1] = ((((unsigned_long_int_Array_0[0]) < 0 ) ? -(unsigned_long_int_Array_0[0]) : (unsigned_long_int_Array_0[0])));
 } else {
  unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[0];
 }
 unsigned_short_int_Array_0[2] = (((((unsigned_short_int_Array_0[1]) < 0 ) ? -(unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[1]))) + unsigned_short_int_Array_0[0]);
 double_Array_0[2] = double_Array_0[1];
 signed_short_int_Array_0[0] = unsigned_short_int_Array_0[2];
 signed short int stepLocal_0 = signed_short_int_Array_0[0];
 if (unsigned_short_int_Array_0[2] <= stepLocal_0) {
  BOOL_unsigned_char_Array_0[1][0] = (! BOOL_unsigned_char_Array_0[0][1]);
 } else {
  BOOL_unsigned_char_Array_0[1][0] = (BOOL_unsigned_char_Array_0[1][1] && BOOL_unsigned_char_Array_0[0][0]);
 }
 if (signed_short_int_Array_0[0] <= unsigned_long_int_Array_0[0]) {
  if (signed_short_int_Array_0[0] <= unsigned_long_int_Array_0[1]) {
   if (BOOL_unsigned_char_Array_0[1][0]) {
    signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
   }
  }
 }
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[1];
 if ((signed_short_int_Array_0[1] / signed_char_Array_0[0]) == stepLocal_1) {
  if (BOOL_unsigned_char_Array_0[0][1]) {
   double_Array_0[0] = ((((double_Array_0[1]) < (1000000.5)) ? (double_Array_0[1]) : (1000000.5)));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 assume_abort_if_not(signed_char_Array_0[0] != 0);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}
void updateLastVariables(void) {
 last_1_signed_short_int_Array_0_1_ = signed_short_int_Array_0[1];
}
int property(void) {
 return (((((((last_1_signed_short_int_Array_0_1_ <= (((((-32) < 0 ) ? -(-32) : (-32))) + 16)) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) ((((unsigned_long_int_Array_0[0]) < 0 ) ? -(unsigned_long_int_Array_0[0]) : (unsigned_long_int_Array_0[0]))))) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[0]))) && ((signed_short_int_Array_0[0] <= unsigned_long_int_Array_0[0]) ? ((signed_short_int_Array_0[0] <= unsigned_long_int_Array_0[1]) ? (BOOL_unsigned_char_Array_0[1][0] ? (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0])) : 1) : 1) : 1)) && (unsigned_short_int_Array_0[2] == ((unsigned short int) (((((unsigned_short_int_Array_0[1]) < 0 ) ? -(unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[1]))) + unsigned_short_int_Array_0[0])))) && ((unsigned_short_int_Array_0[2] <= signed_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0][1]))) : (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[1][1] && BOOL_unsigned_char_Array_0[0][0]))))) && (((signed_short_int_Array_0[1] / signed_char_Array_0[0]) == unsigned_long_int_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0][1] ? (double_Array_0[0] == ((double) ((((double_Array_0[1]) < (1000000.5)) ? (double_Array_0[1]) : (1000000.5))))) : 1) : 1)) && (double_Array_0[2] == ((double) double_Array_0[1]))) && (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[2]))
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
