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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30Wrapper_AP.c", 13, "reach_error"); }
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
	0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
float float_Array_0[5] = {
	127.8, 32.5, 256.6, 999.25, 1000000000.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
signed long int signed_long_int_Array_0[1] = {
	0
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[2] = {
	-32, 8
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned char unsigned_char_Array_0[2][2] = {
	{2, 128}, {10, 64}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch30Wrapper_AP
	signed long int stepLocal_0 = (last_1_signed_long_int_Array_0_0_ / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (last_1_signed_long_int_Array_0_0_ > stepLocal_0) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) = (max ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))));
		}
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
	}


	// From: Req2Batch30Wrapper_AP
	unsigned char stepLocal_2 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
	signed long int stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
	if (stepLocal_1 < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) > stepLocal_2) {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
			}
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
	}


	// From: Req3Batch30Wrapper_AP
	unsigned char stepLocal_4 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
	signed long int stepLocal_3 = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if (stepLocal_4 > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
		if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) <= stepLocal_3) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)));
		}
	} else {
		(*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = ((abs ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) - (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)));
	}


	// From: Req4Batch30Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer));
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -461168.6018427382800e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427382800e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[3] >= -461168.6018427382800e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 4611686.018427382800e+12F && float_Array_0[3] >= 1.0e-20F ));
	float_Array_0[4] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854765600e+12F && float_Array_0[4] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[0] != 0);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[1] != 0);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 254);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
}



void updateLastVariables() {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}

int property() {
	return ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((last_1_signed_long_int_Array_0_0_ > ((last_1_signed_long_int_Array_0_0_ / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (max ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) : 1) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) <= (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) ((abs ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) - (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))
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
