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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
float float_Array_0[7] = {
	4.8, 127.25, 0.4, 99999999999.5, 500.5, 1000000000000000.6, 255.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[5]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[6]);
signed long int signed_long_int_Array_0[5] = {
	256, 25, 0, -50, -5
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
signed short int signed_short_int_Array_0[1] = {
	2
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[1] = {
	16
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch99Wrapper_AP
	signed long int stepLocal_0 = abs (8);
	if (((min (200 , 128)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > stepLocal_0) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) = ((min ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)));
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) = ((min ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)));
		}
	}


	// From: Req2Batch99Wrapper_AP
	if (((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) == (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)));
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	}


	// From: Req3Batch99Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	} else {
		if (stepLocal_1 != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = (max ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer));
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -461168.6018427382800e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427382800e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -461168.6018427382800e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427382800e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= -461168.6018427382800e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427382800e+12F && float_Array_0[2] >= 1.0e-20F ));
	float_Array_0[3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854765600e+12F && float_Array_0[3] >= 1.0e-20F ));
	float_Array_0[4] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854765600e+12F && float_Array_0[4] >= 1.0e-20F ));
	float_Array_0[5] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[5] >= 0.0F && float_Array_0[5] <= -1.0e-20F) || (float_Array_0[5] <= 9223372.036854765600e+12F && float_Array_0[5] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 1073741823);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[0] != 0);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
}



void updateLastVariables() {
}

int property() {
	return (((((min (200 , 128)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > (abs (8))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) == ((float) ((min ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) == ((float) ((min ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) : 1)) && ((((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) == (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) && (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) : ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) (max ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))))))
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
