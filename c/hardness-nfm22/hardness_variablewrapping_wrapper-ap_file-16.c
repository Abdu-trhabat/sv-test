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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[3] = {
	1, 0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
float float_Array_0[3] = {
	3.8, 2.75, 1000000.8
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[5] = {
	32, 25, 2, 0, 2
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed short int signed_short_int_Array_0[3] = {
	-32, 256, 4
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);

// Calibration values

// Last'ed variables
signed char last_1_signed_char_Array_0_1_ = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch16Wrapper_AP
	if ((last_1_signed_char_Array_0_1_ % (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) <= -1000000) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
	}


	// From: Req2Batch16Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));


	// From: Req4Batch16Wrapper_AP
	signed char stepLocal_2 = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
	unsigned char stepLocal_1 = 99999.375 <= (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) <= stepLocal_2) {
		if (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) && stepLocal_1) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)));
		}
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = -25;
	}


	// From: Req3Batch16Wrapper_AP
	unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) / (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || stepLocal_0) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , 5)) + ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) - (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)));
		} else {
			if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
				(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
			} else {
				(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
			}
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854765600e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	assume_abort_if_not(float_Array_0[1] != 0.0F);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 31);
	assume_abort_if_not(signed_char_Array_0[0] <= 63);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 31);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= 0);
	assume_abort_if_not(signed_char_Array_0[3] <= 63);
	signed_char_Array_0[4] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[4] >= 0);
	assume_abort_if_not(signed_char_Array_0[4] <= 126);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[1] != 0);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[2] != 0);
}



void updateLastVariables() {
	last_1_signed_char_Array_0_1_ = signed_char_Array_0[1];
}

int property() {
	return (((((last_1_signed_char_Array_0_1_ % (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) <= -1000000) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) : 1) && ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) && (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) / (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , 5)) + ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) - (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))) : 1)) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) <= (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) ? ((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) && (99999.375 <= (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))) : 1) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) -25)))
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
