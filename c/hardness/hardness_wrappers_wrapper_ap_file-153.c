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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Wrapper_AP.c", 13, "reach_error"); }
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
	{1, 0}, {0, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[3] = {
	256.2, 100000000000000.5, 24.75
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
signed char signed_char_Array_0[1] = {
	10
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed short int signed_short_int_Array_0[2] = {
	-32, -50
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2] = {
	256, 50
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[3] = {
	32, 1, 32
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);

// Calibration values

// Last'ed variables
signed short int last_1_signed_short_int_Array_0_1_ = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch153Wrapper_AP
	if (last_1_signed_short_int_Array_0_1_ <= ((abs (-32)) + 16)) {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (abs ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))));
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
	}


	// From: Req3Batch153Wrapper_AP
	(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));


	// From: Req6Batch153Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));


	// From: Req7Batch153Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));


	// From: Req4Batch153Wrapper_AP
	signed short int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) <= stepLocal_0) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
	}


	// From: Req2Batch153Wrapper_AP
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
		if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
				(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
			}
		}
	}


	// From: Req5Batch153Wrapper_AP
	unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) == stepLocal_1) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
			(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (min ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , 1000000.5));
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -128);
	assume_abort_if_not(signed_char_Array_0[0] <= 127);
	assume_abort_if_not(signed_char_Array_0[0] != 0);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}



void updateLastVariables(void) {
	last_1_signed_short_int_Array_0_1_ = signed_short_int_Array_0[1];
}

int property(void) {
	return (((((((last_1_signed_short_int_Array_0_1_ <= ((abs (-32)) + 16)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (abs ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : 1) : 1) : 1)) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) <= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))))) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) == (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (min ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , 1000000.5)))) : 1) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))
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
