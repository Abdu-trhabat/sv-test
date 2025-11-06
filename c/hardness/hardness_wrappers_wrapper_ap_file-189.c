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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 1}, {0, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
float float_Array_0[2][2] = {
	{4.5, 5.25}, {24.5, 0.9}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed long int signed_long_int_Array_0[1] = {
	5
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	64, 8
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[1] = {
	4
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2] = {
	60381, 0
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 0;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch189Wrapper_AP
	signed long int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	if (last_1_BOOL_unsigned_char_Array_0_1__1_) {
		if (stepLocal_1 < last_1_unsigned_long_int_Array_0_0_) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
		}
	} else {
		(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
	}


	// From: Req4Batch189Wrapper_AP
	if (64.8f <= (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	}


	// From: Req5Batch189Wrapper_AP
	signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
	if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) <= stepLocal_2) {
		if (! ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (max ((max (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))));
		}
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	}


	// From: Req1Batch189Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
	}


	// From: Req2Batch189Wrapper_AP
	unsigned long int stepLocal_0 = min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
	if (stepLocal_0 >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))));
	} else {
		(*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854766000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854766000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
	last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}

int property(void) {
	return (((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) && (((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))))))) && (last_1_BOOL_unsigned_char_Array_0_1__1_ ? ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) < last_1_unsigned_long_int_Array_0_0_) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) && ((64.8f <= (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : 1)) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((! ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (max ((max (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) : 1) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))
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
