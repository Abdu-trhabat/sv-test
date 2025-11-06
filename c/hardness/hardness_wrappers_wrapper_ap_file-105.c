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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
float float_Array_0[3] = {
	1.2, 127.2, 1.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[3] = {
	50, 32, 4
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed long int signed_long_int_Array_0[2] = {
	0, 4
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned char unsigned_char_Array_0[3] = {
	4, 128, 1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[2] = {
	26003, 128
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch105Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));


	// From: Req2Batch105Wrapper_AP
	if ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) >> 2) * (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) / 1000000)) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (5 - ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))));
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	}


	// From: Req3Batch105Wrapper_AP
	unsigned char stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
	if ((7.7f - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) > (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) {
		if (stepLocal_0 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			if (! (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < -4)) {
				(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
			} else {
				(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
			}
		} else {
			(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
		}
	}


	// From: Req4Batch105Wrapper_AP
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -1);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 127);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 16383);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) && (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) >> 2) * (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) / 1000000)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (5 - ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))) && (((7.7f - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) > (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) ? ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((! (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < -4)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : 1)) && (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : 1)
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
