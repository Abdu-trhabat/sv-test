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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 1}, {1, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
float float_Array_0[2] = {
	2.25, 199.4
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[5] = {
	-128, 0, 4, 16, 32
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
unsigned char unsigned_char_Array_0[1] = {
	100
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2] = {
	55182, 0
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch24Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) || (! (! 0)));
	}


	// From: Req4Batch24Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));


	// From: Req5Batch24Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));


	// From: Req6Batch24Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));


	// From: Req1Batch24Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (64.75f < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)));
		} else {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = (min ((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) , (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))));
		}
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
	}


	// From: Req2Batch24Wrapper_AP
	if ((max (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * 127.75) , ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / 3.4))) >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (min (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (22925 - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= -1);
	assume_abort_if_not(signed_char_Array_0[3] <= 126);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}



void updateLastVariables() {
}

int property() {
	return (((((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (64.75f < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) (min ((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) , (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) && (((max (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * 127.75) , ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / 3.4))) >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (min (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (22925 - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) : 1)) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) || (! (! 0))))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))
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
