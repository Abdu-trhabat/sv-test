// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double double_Array_0[1] = {
	32.125
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[11] = {
	0.25, 100.25, 2.6, 64.5, 100.5, 100.8, 100.7, 10.65, 128.25, 9.25, 31.9
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[5]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[6]);
float* float_Array_0_arrayfloat_Array_0arrayVar7_Pointer = &(float_Array_0[7]);
float* float_Array_0_arrayfloat_Array_0arrayVar8_Pointer = &(float_Array_0[8]);
float* float_Array_0_arrayfloat_Array_0arrayVar9_Pointer = &(float_Array_0[9]);
float* float_Array_0_arrayfloat_Array_0arrayVar10_Pointer = &(float_Array_0[10]);
signed long int signed_long_int_Array_0[2][2] = {
	{8, -1}, {32, 1000}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
unsigned short int unsigned_short_int_Array_0[2] = {
	0, 1000
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch199Wrapper_AP
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer)) >= (*(float_Array_0_arrayfloat_Array_0arrayVar8_Pointer))) {
		if ((*(float_Array_0_arrayfloat_Array_0arrayVar8_Pointer)) == (*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer))) {
			if ((*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer)) != 4.15f) {
				if ((min ((*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar8_Pointer)))) >= (min (((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) , 3.9f))) {
					(*(float_Array_0_arrayfloat_Array_0arrayVar10_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer));
				} else {
					(*(float_Array_0_arrayfloat_Array_0arrayVar10_Pointer)) = 63.42f;
				}
			} else {
				(*(float_Array_0_arrayfloat_Array_0arrayVar10_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer));
			}
		}
	}


	// From: Req2Batch199Wrapper_AP
	if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (min ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)));
	} else {
		if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
		} else {
			(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
		}
	}


	// From: Req3Batch199Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))));


	// From: Req4Batch199Wrapper_AP
	(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));


	// From: Req5Batch199Wrapper_AP
	(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
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
	return ((((((*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer)) >= (*(float_Array_0_arrayfloat_Array_0arrayVar8_Pointer))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar8_Pointer)) == (*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer)) != 4.15f) ? (((min ((*(float_Array_0_arrayfloat_Array_0arrayVar9_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar8_Pointer)))) >= (min (((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) , 3.9f))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar10_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar10_Pointer)) == ((float) 63.42f))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar10_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))))) : 1) : 1) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (min ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))) : (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))
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
