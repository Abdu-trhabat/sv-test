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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19Wrapper_A.c", 13, "reach_error"); }
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
signed char signed_char_Array_0[3] = {
	100, 4, 8
};
signed long int signed_long_int_Array_0[2][2] = {
	{-25, -8}, {-16, 10}
};
unsigned char unsigned_char_Array_0[2] = {
	64, 128
};
unsigned long int unsigned_long_int_Array_0[2] = {
	5, 1
};

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_1__1_ = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch19Wrapper_A
	if (signed_char_Array_0[1] < unsigned_char_Array_0[0]) {
		if (last_1_signed_long_int_Array_0_1__1_ > signed_char_Array_0[1]) {
			signed_long_int_Array_0[0][1] = (unsigned_char_Array_0[0] - signed_char_Array_0[0]);
		}
	} else {
		if ((signed_char_Array_0[0] + (abs (unsigned_char_Array_0[1]))) > signed_char_Array_0[1]) {
			signed_long_int_Array_0[0][1] = signed_char_Array_0[0];
		}
	}


	// From: Req4Batch19Wrapper_A
	signed_long_int_Array_0[1][0] = signed_char_Array_0[1];


	// From: Req3Batch19Wrapper_A
	signed long int stepLocal_1 = unsigned_char_Array_0[1] / signed_long_int_Array_0[0][0];
	if (((signed_long_int_Array_0[0][1] * signed_long_int_Array_0[1][0]) + signed_char_Array_0[0]) > stepLocal_1) {
		if (BOOL_unsigned_char_Array_0[0]) {
			signed_long_int_Array_0[1][1] = unsigned_char_Array_0[1];
		}
	} else {
		signed_long_int_Array_0[1][1] = signed_char_Array_0[1];
	}


	// From: Req1Batch19Wrapper_A
	signed long int stepLocal_0 = signed_long_int_Array_0[1][1];
	if (((unsigned_char_Array_0[1] - unsigned_char_Array_0[0]) << (unsigned_long_int_Array_0[1] + unsigned_long_int_Array_0[0])) <= stepLocal_0) {
		signed_char_Array_0[2] = (max (unsigned_long_int_Array_0[1] , (abs (signed_char_Array_0[0]))));
	} else {
		if (BOOL_unsigned_char_Array_0[0]) {
			signed_char_Array_0[2] = unsigned_long_int_Array_0[0];
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1] <= 63);
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0][0] != 0);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 11);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 12);
}



void updateLastVariables() {
	last_1_signed_long_int_Array_0_1__1_ = signed_long_int_Array_0[1][1];
}

int property() {
	return ((((((unsigned_char_Array_0[1] - unsigned_char_Array_0[0]) << (unsigned_long_int_Array_0[1] + unsigned_long_int_Array_0[0])) <= signed_long_int_Array_0[1][1]) ? (signed_char_Array_0[2] == ((signed char) (max (unsigned_long_int_Array_0[1] , (abs (signed_char_Array_0[0])))))) : (BOOL_unsigned_char_Array_0[0] ? (signed_char_Array_0[2] == ((signed char) unsigned_long_int_Array_0[0])) : 1)) && ((signed_char_Array_0[1] < unsigned_char_Array_0[0]) ? ((last_1_signed_long_int_Array_0_1__1_ > signed_char_Array_0[1]) ? (signed_long_int_Array_0[0][1] == ((signed long int) (unsigned_char_Array_0[0] - signed_char_Array_0[0]))) : 1) : (((signed_char_Array_0[0] + (abs (unsigned_char_Array_0[1]))) > signed_char_Array_0[1]) ? (signed_long_int_Array_0[0][1] == ((signed long int) signed_char_Array_0[0])) : 1))) && ((((signed_long_int_Array_0[0][1] * signed_long_int_Array_0[1][0]) + signed_char_Array_0[0]) > (unsigned_char_Array_0[1] / signed_long_int_Array_0[0][0])) ? (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[1][1] == ((signed long int) unsigned_char_Array_0[1])) : 1) : (signed_long_int_Array_0[1][1] == ((signed long int) signed_char_Array_0[1])))) && (signed_long_int_Array_0[1][0] == ((signed long int) signed_char_Array_0[1]))
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
