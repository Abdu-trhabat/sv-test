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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Wrapper_A.c", 13, "reach_error"); }
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
	0, 0, 1, 0, 0
};
double double_Array_0[3] = {
	100000000000.25, 255.1, 127.25
};
float float_Array_0[1] = {
	64.5
};
signed short int signed_short_int_Array_0[5] = {
	50, 50, 10000, 10000, 128
};
unsigned char unsigned_char_Array_0[2] = {
	10, 128
};
unsigned short int unsigned_short_int_Array_0[3] = {
	2, 16, 0
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_2_ = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch181Wrapper_A
	if (last_1_BOOL_unsigned_char_Array_0_2_) {
		BOOL_unsigned_char_Array_0[4] = (BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]);
	}


	// From: Req5Batch181Wrapper_A
	BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[3]);


	// From: Req1Batch181Wrapper_A
	if (((unsigned_short_int_Array_0[2] > 25) && BOOL_unsigned_char_Array_0[2]) && BOOL_unsigned_char_Array_0[2]) {
		if (BOOL_unsigned_char_Array_0[2]) {
			double_Array_0[2] = (double_Array_0[1] + 100.5);
		}
	} else {
		double_Array_0[2] = double_Array_0[1];
	}


	// From: Req3Batch181Wrapper_A
	if (BOOL_unsigned_char_Array_0[4]) {
		if (unsigned_short_int_Array_0[2] >= ((64753 - unsigned_short_int_Array_0[0]) + unsigned_short_int_Array_0[1])) {
			signed_short_int_Array_0[1] = (signed_short_int_Array_0[0] - 128);
		}
	} else {
		signed_short_int_Array_0[1] = (((signed_short_int_Array_0[2] + signed_short_int_Array_0[3]) - 1) - signed_short_int_Array_0[4]);
	}


	// From: Req4Batch181Wrapper_A
	if ((BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[2]) || BOOL_unsigned_char_Array_0[1]) {
		unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
	}


	// From: Req6Batch181Wrapper_A
	float_Array_0[0] = double_Array_0[1];


	// From: Req7Batch181Wrapper_A
	double_Array_0[0] = double_Array_0[1];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427383000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= 8191);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 16383);
	signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[3] >= 8191);
	assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
	signed_short_int_Array_0[4] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[4] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[4] <= 32766);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65535);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_2_ = BOOL_unsigned_char_Array_0[2];
}

int property(void) {
	return (((((((((unsigned_short_int_Array_0[2] > 25) && BOOL_unsigned_char_Array_0[2]) && BOOL_unsigned_char_Array_0[2]) ? (BOOL_unsigned_char_Array_0[2] ? (double_Array_0[2] == ((double) (double_Array_0[1] + 100.5))) : 1) : (double_Array_0[2] == ((double) double_Array_0[1]))) && (last_1_BOOL_unsigned_char_Array_0_2_ ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]))) : 1)) && (BOOL_unsigned_char_Array_0[4] ? ((unsigned_short_int_Array_0[2] >= ((64753 - unsigned_short_int_Array_0[0]) + unsigned_short_int_Array_0[1])) ? (signed_short_int_Array_0[1] == ((signed short int) (signed_short_int_Array_0[0] - 128))) : 1) : (signed_short_int_Array_0[1] == ((signed short int) (((signed_short_int_Array_0[2] + signed_short_int_Array_0[3]) - 1) - signed_short_int_Array_0[4]))))) && (((BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[2]) || BOOL_unsigned_char_Array_0[1]) ? (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])) : 1)) && (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[3])))) && (float_Array_0[0] == ((float) double_Array_0[1]))) && (double_Array_0[0] == ((double) double_Array_0[1]))
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
