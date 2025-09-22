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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[1] = {
 32.125
};
float float_Array_0[11] = {
 0.25, 100.25, 2.6, 64.5, 100.5, 100.8, 100.7, 10.65, 128.25, 9.25, 31.9
};
signed long int signed_long_int_Array_0[2][2] = {
 {8, -1}, {32, 1000}
};
unsigned short int unsigned_short_int_Array_0[2] = {
 0, 1000
};
void initially(void) {
}
void step(void) {
 if (float_Array_0[9] >= float_Array_0[8]) {
  if (float_Array_0[8] == float_Array_0[9]) {
   if (float_Array_0[9] != 4.15f) {
    if (((((float_Array_0[9]) < (float_Array_0[8])) ? (float_Array_0[9]) : (float_Array_0[8]))) >= (((((float_Array_0[7] - float_Array_0[6])) < (3.9f)) ? ((float_Array_0[7] - float_Array_0[6])) : (3.9f)))) {
     float_Array_0[10] = float_Array_0[5];
    } else {
     float_Array_0[10] = 63.42f;
    }
   } else {
    float_Array_0[10] = float_Array_0[5];
   }
  }
 }
 if ((signed_long_int_Array_0[1][0] + signed_long_int_Array_0[0][0]) < signed_long_int_Array_0[0][1]) {
  float_Array_0[2] = ((float_Array_0[3] - ((((float_Array_0[0]) < (float_Array_0[1])) ? (float_Array_0[0]) : (float_Array_0[1])))) + float_Array_0[4]);
 } else {
  if (signed_long_int_Array_0[0][1] < signed_long_int_Array_0[0][0]) {
   float_Array_0[2] = float_Array_0[1];
  } else {
   float_Array_0[2] = float_Array_0[0];
  }
 }
 double_Array_0[0] = ((((float_Array_0[3] + float_Array_0[1]) < 0 ) ? -(float_Array_0[3] + float_Array_0[1]) : (float_Array_0[3] + float_Array_0[1])));
 unsigned_short_int_Array_0[0] = unsigned_short_int_Array_0[1];
 signed_long_int_Array_0[1][1] = unsigned_short_int_Array_0[1];
}
void updateVariables(void) {
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427383000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 4611686.018427383000e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= -461168.6018427383000e+13F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 4611686.018427383000e+12F && float_Array_0[4] >= 1.0e-20F ));
 float_Array_0[5] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[5] >= -922337.2036854766000e+13F && float_Array_0[5] <= -1.0e-20F) || (float_Array_0[5] <= 9223372.036854766000e+12F && float_Array_0[5] >= 1.0e-20F ));
 float_Array_0[6] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[6] >= 0.0F && float_Array_0[6] <= -1.0e-20F) || (float_Array_0[6] <= 9223372.036854776000e+12F && float_Array_0[6] >= 1.0e-20F ));
 float_Array_0[7] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[7] >= 0.0F && float_Array_0[7] <= -1.0e-20F) || (float_Array_0[7] <= 9223372.036854776000e+12F && float_Array_0[7] >= 1.0e-20F ));
 float_Array_0[8] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[8] >= -922337.2036854776000e+13F && float_Array_0[8] <= -1.0e-20F) || (float_Array_0[8] <= 9223372.036854776000e+12F && float_Array_0[8] >= 1.0e-20F ));
 float_Array_0[9] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[9] >= -922337.2036854776000e+13F && float_Array_0[9] <= -1.0e-20F) || (float_Array_0[9] <= 9223372.036854776000e+12F && float_Array_0[9] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((float_Array_0[9] >= float_Array_0[8]) ? ((float_Array_0[8] == float_Array_0[9]) ? ((float_Array_0[9] != 4.15f) ? ((((((float_Array_0[9]) < (float_Array_0[8])) ? (float_Array_0[9]) : (float_Array_0[8]))) >= (((((float_Array_0[7] - float_Array_0[6])) < (3.9f)) ? ((float_Array_0[7] - float_Array_0[6])) : (3.9f)))) ? (float_Array_0[10] == ((float) float_Array_0[5])) : (float_Array_0[10] == ((float) 63.42f))) : (float_Array_0[10] == ((float) float_Array_0[5]))) : 1) : 1) && (((signed_long_int_Array_0[1][0] + signed_long_int_Array_0[0][0]) < signed_long_int_Array_0[0][1]) ? (float_Array_0[2] == ((float) ((float_Array_0[3] - ((((float_Array_0[0]) < (float_Array_0[1])) ? (float_Array_0[0]) : (float_Array_0[1])))) + float_Array_0[4]))) : ((signed_long_int_Array_0[0][1] < signed_long_int_Array_0[0][0]) ? (float_Array_0[2] == ((float) float_Array_0[1])) : (float_Array_0[2] == ((float) float_Array_0[0]))))) && (double_Array_0[0] == ((double) ((((float_Array_0[3] + float_Array_0[1]) < 0 ) ? -(float_Array_0[3] + float_Array_0[1]) : (float_Array_0[3] + float_Array_0[1])))))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_short_int_Array_0[1]))) && (signed_long_int_Array_0[1][1] == ((signed long int) unsigned_short_int_Array_0[1]))
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
