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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
	3.75, 255.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[3] = {
	255.5, 63.5, 128.75
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
unsigned char unsigned_char_Array_0[2][2][2] = {
	{{2, 0}, {128, 10}}, {{25, 5}, {16, 32}}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[0][1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer = &(unsigned_char_Array_0[1][1][1]);

// Calibration values

// Last'ed variables
unsigned char last_1_unsigned_char_Array_0_0__0__0_ = 2;
unsigned char last_1_unsigned_char_Array_0_0__0__1_ = 0;
unsigned char last_1_unsigned_char_Array_0_1__1__1_ = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch82Wrapper_AP
	signed long int stepLocal_0 = last_1_unsigned_char_Array_0_0__0__1_ | last_1_unsigned_char_Array_0_0__0__0_;
	if ((last_1_unsigned_char_Array_0_1__1__1_ / -2) >= stepLocal_0) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) = (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))));
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))));
	}


	// From: Req1Batch82Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (max ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))));
		}
	}


	// From: Req4Batch82Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));


	// From: Req5Batch82Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));


	// From: Req6Batch82Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));


	// From: Req3Batch82Wrapper_AP
	unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) >= stepLocal_1) {
		if ((max ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) , ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) <= (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))));
		} else {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)));
			}
		}
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854765600e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	unsigned_char_Array_0[1][0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0][0] <= 254);
	unsigned_char_Array_0[0][1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1][0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0][1][0] <= 254);
	unsigned_char_Array_0[1][1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][1][0] <= 127);
	unsigned_char_Array_0[1][0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0][1] <= 254);
	unsigned_char_Array_0[0][1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1][1] <= 127);
}



void updateLastVariables() {
	last_1_unsigned_char_Array_0_0__0__0_ = unsigned_char_Array_0[0][0][0];
	last_1_unsigned_char_Array_0_0__0__1_ = unsigned_char_Array_0[0][0][1];
	last_1_unsigned_char_Array_0_1__1__1_ = unsigned_char_Array_0[1][1][1];
}

int property() {
	return ((((((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (max ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) : 1) : 1) && (((last_1_unsigned_char_Array_0_1__1__1_ / -2) >= (last_1_unsigned_char_Array_0_0__0__1_ | last_1_unsigned_char_Array_0_0__0__0_)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) == ((unsigned char) (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? (((max ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) , ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) <= (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))))) : 1)) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))
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
