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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2] = {
	1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[5] = {
	-0.75, 256.8, 4.875, 63.25, 31.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
signed char signed_char_Array_0[2][2] = {
	{-8, -4}, {0, 8}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{4, 5}, {55712, 0}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch138Wrapper_AP
	signed char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
	if (stepLocal_0 >= (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (max ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) , ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (max (100 , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))));
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
	}


	// From: Req3Batch138Wrapper_AP
	unsigned char stepLocal_2 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	signed long int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) << (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	if (-128 >= stepLocal_1) {
		if (stepLocal_2 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (15.125f - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)));
		} else {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))));
		}
	} else {
		if (! ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer));
		} else {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
		}
	}


	// From: Req2Batch138Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (4.5f >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
		if (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) & (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
		}
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427383000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= -922337.2036854766000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854766000e+12F && float_Array_0[2] >= 1.0e-20F ));
	float_Array_0[3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854766000e+12F && float_Array_0[3] >= 1.0e-20F ));
	float_Array_0[4] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 4611686.018427383000e+12F && float_Array_0[4] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -128);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 127);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -128);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 127);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 32767);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (max ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) , ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (max (100 , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (4.5f >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) & (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) : 1) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))) && ((-128 >= ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) << (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (15.125f - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))))))) : ((! ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))))
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
