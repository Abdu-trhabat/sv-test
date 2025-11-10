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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[5] = {
	1, 0, 0, 1, 0
};
double double_Array_0[1] = {
	100.5
};
float float_Array_0[2][3] = {
	{9.25, 99999999999.35, 1.8199999999999998}, {49.6, 0.0, 7.25}
};
signed char signed_char_Array_0[2][2] = {
	{100, 8}, {32, 32}
};
signed long int signed_long_int_Array_0[1] = {
	-50
};
unsigned short int unsigned_short_int_Array_0[5] = {
	56793, 58395, 8, 32, 64
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch125Wrapper_A
	float_Array_0[1][2] = (float_Array_0[0][2] - (float_Array_0[0][1] + 32.4f));


	// From: Req2Batch125Wrapper_A
	BOOL_unsigned_char_Array_0[4] = (BOOL_unsigned_char_Array_0[3] && (! BOOL_unsigned_char_Array_0[2]));


	// From: Req3Batch125Wrapper_A
	double_Array_0[0] = float_Array_0[1][1];


	// From: Req4Batch125Wrapper_A
	signed long int stepLocal_0 = signed_long_int_Array_0[0];
	if ((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[2]) < stepLocal_0) {
		BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];
	}


	// From: Req5Batch125Wrapper_A
	float_Array_0[0][0] = (float_Array_0[0][1] + float_Array_0[1][0]);


	// From: Req6Batch125Wrapper_A
	if ((float_Array_0[0][0] * float_Array_0[0][2]) >= float_Array_0[1][1]) {
		signed_char_Array_0[1][0] = ((signed_char_Array_0[0][1] + signed_char_Array_0[1][1]) - 32);
	}


	// From: Req7Batch125Wrapper_A
	if (float_Array_0[0][2] > double_Array_0[0]) {
		if (! (signed_char_Array_0[1][0] < signed_char_Array_0[0][0])) {
			unsigned_short_int_Array_0[4] = (max ((min (8 , (unsigned_short_int_Array_0[1] - 8))) , signed_char_Array_0[0][1]));
		}
	} else {
		unsigned_short_int_Array_0[4] = 50;
	}


	// From: Req8Batch125Wrapper_A
	unsigned_short_int_Array_0[3] = unsigned_short_int_Array_0[2];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -461168.6018427383000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427383000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 2305843.009213691400e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= 6917529.027641074000e+12F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854766000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	float_Array_0[0][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][2] >= 0.0F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 9223372.036854766000e+12F && float_Array_0[0][2] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -128);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 127);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 63);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((float_Array_0[1][2] == ((float) (float_Array_0[0][2] - (float_Array_0[0][1] + 32.4f)))) && (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (BOOL_unsigned_char_Array_0[3] && (! BOOL_unsigned_char_Array_0[2]))))) && (double_Array_0[0] == ((double) float_Array_0[1][1]))) && (((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[2]) < signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1])) : 1)) && (float_Array_0[0][0] == ((float) (float_Array_0[0][1] + float_Array_0[1][0])))) && (((float_Array_0[0][0] * float_Array_0[0][2]) >= float_Array_0[1][1]) ? (signed_char_Array_0[1][0] == ((signed char) ((signed_char_Array_0[0][1] + signed_char_Array_0[1][1]) - 32))) : 1)) && ((float_Array_0[0][2] > double_Array_0[0]) ? ((! (signed_char_Array_0[1][0] < signed_char_Array_0[0][0])) ? (unsigned_short_int_Array_0[4] == ((unsigned short int) (max ((min (8 , (unsigned_short_int_Array_0[1] - 8))) , signed_char_Array_0[0][1])))) : 1) : (unsigned_short_int_Array_0[4] == ((unsigned short int) 50)))) && (unsigned_short_int_Array_0[3] == ((unsigned short int) unsigned_short_int_Array_0[2]))
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
