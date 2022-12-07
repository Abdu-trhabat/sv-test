// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float float_Array_0[3] = {
	1.75, 7.8, 1.1
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed long int signed_long_int_Array_0[3] = {
	1230482582, 32, 5
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[5] = {
	32, 10, 1000, 0, -5
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[3]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[4]);
unsigned char unsigned_char_Array_0[1] = {
	64
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch39Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = (((max (16 , 4)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))));


	// From: Req2Batch39Wrapper_AP
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) {
		if ((abs ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
	}


	// From: Req3Batch39Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)));
	signed long int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)));
	if (stepLocal_1 != (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) {
		if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < stepLocal_0) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (min (-256 , (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))))))));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
	}
}



void updateVariables() {
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 1073741823);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 16383);
	signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[3] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	assume_abort_if_not(unsigned_char_Array_0[0] != 0);
}



void updateLastVariables() {
}

int property() {
	return (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) (((max (16 , 4)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) ? (((abs ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))))) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))) != (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (min (-256 , (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))
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
