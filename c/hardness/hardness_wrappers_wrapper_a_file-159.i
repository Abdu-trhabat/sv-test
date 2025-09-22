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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[5] = {
 0, 0, 0, 0, 1
};
float float_Array_0[5] = {
 25.25, 256.305, 128.8, 50.825, 128.75
};
signed long int signed_long_int_Array_0[2][2] = {
 {32, 0}, {-64, -16}
};
signed short int signed_short_int_Array_0[2] = {
 10, -100
};
unsigned short int unsigned_short_int_Array_0[2] = {
 64, 5
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = signed_long_int_Array_0[1][1];
 if (BOOL_unsigned_char_Array_0[3]) {
  if (64 < stepLocal_0) {
   BOOL_unsigned_char_Array_0[4] = (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]));
  }
 } else {
  if (BOOL_unsigned_char_Array_0[1]) {
   BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[0];
  } else {
   BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[2];
  }
 }
 if (((float_Array_0[1] - float_Array_0[0]) / float_Array_0[2]) < float_Array_0[3]) {
  if (((((signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[0][0])) ? (signed_long_int_Array_0[1][1]) : (signed_long_int_Array_0[0][0]))) < signed_long_int_Array_0[1][0]) {
   if (BOOL_unsigned_char_Array_0[2]) {
    unsigned_short_int_Array_0[0] = ((((unsigned_short_int_Array_0[1]) < (1)) ? (unsigned_short_int_Array_0[1]) : (1)));
   }
  }
 }
 signed long int stepLocal_1 = (unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0]) * (signed_long_int_Array_0[0][1] >> signed_short_int_Array_0[0]);
 if (-128 == stepLocal_1) {
  if (float_Array_0[0] > (float_Array_0[1] - float_Array_0[4])) {
   if (float_Array_0[4] < 4.8f) {
    signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
   } else {
    signed_short_int_Array_0[1] = -32;
   }
  } else {
   signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
  }
 } else {
  signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 assume_abort_if_not(float_Array_0[2] != 0.0F);
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= -922337.2036854776000e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854776000e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854776000e+12F && float_Array_0[4] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 1);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 30);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((BOOL_unsigned_char_Array_0[3] ? ((64 < signed_long_int_Array_0[1][1]) ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1])))) : 1) : (BOOL_unsigned_char_Array_0[1] ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[0])) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[2])))) && ((((float_Array_0[1] - float_Array_0[0]) / float_Array_0[2]) < float_Array_0[3]) ? ((((((signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[0][0])) ? (signed_long_int_Array_0[1][1]) : (signed_long_int_Array_0[0][0]))) < signed_long_int_Array_0[1][0]) ? (BOOL_unsigned_char_Array_0[2] ? (unsigned_short_int_Array_0[0] == ((unsigned short int) ((((unsigned_short_int_Array_0[1]) < (1)) ? (unsigned_short_int_Array_0[1]) : (1))))) : 1) : 1) : 1)) && ((-128 == ((unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0]) * (signed_long_int_Array_0[0][1] >> signed_short_int_Array_0[0]))) ? ((float_Array_0[0] > (float_Array_0[1] - float_Array_0[4])) ? ((float_Array_0[4] < 4.8f) ? (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0])) : (signed_short_int_Array_0[1] == ((signed short int) -32))) : (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0]))) : (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0])))
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
