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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
	24.8, 0.8, 127.625, 128.75, 1.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed char signed_char_Array_0[2] = {
	5, 64
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed short int signed_short_int_Array_0[1] = {
	-128
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[1] = {
	4
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2] = {
	25, 128
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables
unsigned short int last_1_unsigned_short_int_Array_0_1_ = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch83Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = 200;


	// From: Req5Batch83Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));


	// From: Req6Batch83Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));


	// From: Req1Batch83Wrapper_AP
	signed long int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (abs (abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))));
	} else {
		if (stepLocal_0 >= (min ((last_1_unsigned_short_int_Array_0_1_ * (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) , (~ last_1_unsigned_short_int_Array_0_1_)))) {
			(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
		} else {
			(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
		}
	}


	// From: Req2Batch83Wrapper_AP
	signed long int stepLocal_2 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	signed long int stepLocal_1 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) ^ (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) <= stepLocal_2) {
		if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == stepLocal_1) {
			(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = ((abs ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)));
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer));
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
	}


	// From: Req3Batch83Wrapper_AP
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (min ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427382800e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427382800e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -461168.6018427382800e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427382800e+12F && double_Array_0[3] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	assume_abort_if_not(unsigned_char_Array_0[0] != 0);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}



void updateLastVariables() {
	last_1_unsigned_short_int_Array_0_1_ = unsigned_short_int_Array_0[1];
}

int property() {
	return ((((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (abs (abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) : ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) >= (min ((last_1_unsigned_short_int_Array_0_1_ * (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) , (~ last_1_unsigned_short_int_Array_0_1_)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) <= ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) ^ (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) ((abs ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (min ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))))) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) 200))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))
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
