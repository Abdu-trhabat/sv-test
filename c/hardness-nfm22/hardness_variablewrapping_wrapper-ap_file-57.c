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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Wrapper_AP.c", 13, "reach_error"); }
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
	1, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
float float_Array_0[1] = {
	63.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed char signed_char_Array_0[2][2][2] = {
	{{32, -4}, {32, -64}}, {{64, 16}, {4, 50}}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[0][0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[1][0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer = &(signed_char_Array_0[0][1][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var7_Pointer = &(signed_char_Array_0[1][1][1]);
signed long int signed_long_int_Array_0[1] = {
	1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);

// Calibration values

// Last'ed variables
signed char last_1_signed_char_Array_0_1__0__0_ = 64;
signed char last_1_signed_char_Array_0_0__1__1_ = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch57Wrapper_AP
	unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if (! (last_1_signed_char_Array_0_0__1__1_ >= last_1_signed_char_Array_0_1__0__0_)) {
		if (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) && stepLocal_0) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (min (last_1_signed_char_Array_0_1__0__0_ , last_1_signed_char_Array_0_0__1__1_));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = last_1_signed_char_Array_0_0__1__1_;
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = last_1_signed_char_Array_0_0__1__1_;
	}


	// From: Req3Batch57Wrapper_AP
	signed long int stepLocal_3 = ((*(signed_char_Array_0_arraysigned_char_Array_0Var7_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) - (max (64 , (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))));
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < stepLocal_3) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = ((64 - (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)));
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))));
	}


	// From: Req4Batch57Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = 128.91f;


	// From: Req2Batch57Wrapper_AP
	unsigned char stepLocal_2 = (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
	unsigned char stepLocal_1 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	if (stepLocal_1 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || stepLocal_2) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))));
		}
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	signed_char_Array_0[0][0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0][0] >= -1);
	assume_abort_if_not(signed_char_Array_0[0][0][0] <= 126);
	signed_char_Array_0[0][1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][1][0] <= 126);
	signed_char_Array_0[1][1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[1][1][0] <= 126);
	signed_char_Array_0[0][0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0][1] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][0][1] <= 126);
	signed_char_Array_0[1][0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][0][1] <= 63);
	signed_char_Array_0[1][1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][1][1] <= 64);
}



void updateLastVariables() {
	last_1_signed_char_Array_0_1__0__0_ = signed_char_Array_0[1][0][0];
	last_1_signed_char_Array_0_0__1__1_ = signed_char_Array_0[0][1][1];
}

int property() {
	return ((((! (last_1_signed_char_Array_0_0__1__1_ >= last_1_signed_char_Array_0_1__0__0_)) ? ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (min (last_1_signed_char_Array_0_1__0__0_ , last_1_signed_char_Array_0_0__1__1_)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) last_1_signed_char_Array_0_0__1__1_))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) last_1_signed_char_Array_0_0__1__1_))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))) : 1) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < (((*(signed_char_Array_0_arraysigned_char_Array_0Var7_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) - (max (64 , (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) ((64 - (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) 128.91f))
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
