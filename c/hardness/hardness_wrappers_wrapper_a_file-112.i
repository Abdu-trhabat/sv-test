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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Wrapper_A.c", 13, "reach_error"); }
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
 1, 0
};
float float_Array_0[3][3] = {
 {25.75, 256.75, 16.2}, {8.6, 256.4, 9999999999.14}, {8.8, 15.125, 8.4}
};
signed char signed_char_Array_0[1] = {
 5
};
unsigned char unsigned_char_Array_0[2][2] = {
 {128, 1}, {128, 32}
};
unsigned short int unsigned_short_int_Array_0[3] = {
 0, 10, 128
};
float last_1_float_Array_0_2__0_ = 8.8;
void initially(void) {
}
void step(void) {
 if (float_Array_0[1][2] <= float_Array_0[0][2]) {
  float_Array_0[2][2] = ((((float_Array_0[2][1]) < (((((float_Array_0[1][1]) > (float_Array_0[0][1])) ? (float_Array_0[1][1]) : (float_Array_0[0][1]))))) ? (float_Array_0[2][1]) : (((((float_Array_0[1][1]) > (float_Array_0[0][1])) ? (float_Array_0[1][1]) : (float_Array_0[0][1]))))));
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  if (last_1_float_Array_0_2__0_ < float_Array_0[2][2]) {
   float_Array_0[2][0] = (((((float_Array_0[0][0]) > (32.75f)) ? (float_Array_0[0][0]) : (32.75f))) + float_Array_0[1][0]);
  }
 } else {
  float_Array_0[2][0] = float_Array_0[0][0];
 }
 unsigned_short_int_Array_0[2] = ((((unsigned_short_int_Array_0[0]) > (unsigned_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[1])));
 signed long int stepLocal_0 = 0;
 if (stepLocal_0 <= (unsigned_short_int_Array_0[0] >> signed_char_Array_0[0])) {
  if (! (float_Array_0[2][2] != float_Array_0[1][2])) {
   if (BOOL_unsigned_char_Array_0[0]) {
    unsigned_char_Array_0[0][1] = (((((128) > (unsigned_char_Array_0[1][0])) ? (128) : (unsigned_char_Array_0[1][0]))) - signed_char_Array_0[0]);
   } else {
    if (float_Array_0[2][0] >= float_Array_0[1][0]) {
     unsigned_char_Array_0[0][1] = (signed_char_Array_0[0] + unsigned_char_Array_0[1][1]);
    } else {
     if (BOOL_unsigned_char_Array_0[1]) {
      unsigned_char_Array_0[0][1] = unsigned_char_Array_0[1][1];
     } else {
      unsigned_char_Array_0[0][1] = unsigned_char_Array_0[0][0];
     }
    }
   }
  }
 } else {
  unsigned_char_Array_0[0][1] = unsigned_char_Array_0[1][1];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -461168.6018427383000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -461168.6018427383000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427383000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854766000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854766000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854766000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854766000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 float_Array_0[2][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2][1] >= -922337.2036854766000e+13F && float_Array_0[2][1] <= -1.0e-20F) || (float_Array_0[2][1] <= 9223372.036854766000e+12F && float_Array_0[2][1] >= 1.0e-20F ));
 float_Array_0[0][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][2] >= -922337.2036854776000e+13F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 9223372.036854776000e+12F && float_Array_0[0][2] >= 1.0e-20F ));
 float_Array_0[1][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][2] >= -922337.2036854776000e+13F && float_Array_0[1][2] <= -1.0e-20F) || (float_Array_0[1][2] <= 9223372.036854776000e+12F && float_Array_0[1][2] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 1);
 assume_abort_if_not(signed_char_Array_0[0] <= 15);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 254);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
 last_1_float_Array_0_2__0_ = float_Array_0[2][0];
}
int property(void) {
 return ((((float_Array_0[1][2] <= float_Array_0[0][2]) ? (float_Array_0[2][2] == ((float) ((((float_Array_0[2][1]) < (((((float_Array_0[1][1]) > (float_Array_0[0][1])) ? (float_Array_0[1][1]) : (float_Array_0[0][1]))))) ? (float_Array_0[2][1]) : (((((float_Array_0[1][1]) > (float_Array_0[0][1])) ? (float_Array_0[1][1]) : (float_Array_0[0][1])))))))) : 1) && (BOOL_unsigned_char_Array_0[0] ? ((last_1_float_Array_0_2__0_ < float_Array_0[2][2]) ? (float_Array_0[2][0] == ((float) (((((float_Array_0[0][0]) > (32.75f)) ? (float_Array_0[0][0]) : (32.75f))) + float_Array_0[1][0]))) : 1) : (float_Array_0[2][0] == ((float) float_Array_0[0][0])))) && (unsigned_short_int_Array_0[2] == ((unsigned short int) ((((unsigned_short_int_Array_0[0]) > (unsigned_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[1])))))) && ((0 <= (unsigned_short_int_Array_0[0] >> signed_char_Array_0[0])) ? ((! (float_Array_0[2][2] != float_Array_0[1][2])) ? (BOOL_unsigned_char_Array_0[0] ? (unsigned_char_Array_0[0][1] == ((unsigned char) (((((128) > (unsigned_char_Array_0[1][0])) ? (128) : (unsigned_char_Array_0[1][0]))) - signed_char_Array_0[0]))) : ((float_Array_0[2][0] >= float_Array_0[1][0]) ? (unsigned_char_Array_0[0][1] == ((unsigned char) (signed_char_Array_0[0] + unsigned_char_Array_0[1][1]))) : (BOOL_unsigned_char_Array_0[1] ? (unsigned_char_Array_0[0][1] == ((unsigned char) unsigned_char_Array_0[1][1])) : (unsigned_char_Array_0[0][1] == ((unsigned char) unsigned_char_Array_0[0][0]))))) : 1) : (unsigned_char_Array_0[0][1] == ((unsigned char) unsigned_char_Array_0[1][1])))
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
