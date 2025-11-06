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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Wrapper_A.c", 13, "reach_error"); }
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
	0
};
float float_Array_0[2] = {
	15.75, 1000000.1
};
signed long int signed_long_int_Array_0[5] = {
	-64, 0, 4, -10, -128
};
unsigned char unsigned_char_Array_0[5] = {
	128, 128, 4, 100, 4
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
	{0, 1}, {50, 2}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch146Wrapper_A
	signed_long_int_Array_0[4] = (signed_long_int_Array_0[3] + (min ((16 + signed_long_int_Array_0[2]) , (max (signed_long_int_Array_0[1] , -32)))));


	// From: Req2Batch146Wrapper_A
	if (signed_long_int_Array_0[4] >= ((max (signed_long_int_Array_0[3] , signed_long_int_Array_0[1])) % signed_long_int_Array_0[0])) {
		unsigned_long_int_Array_0[1][1] = ((2066465504u - (unsigned_long_int_Array_0[0][1] + unsigned_long_int_Array_0[1][0])) + unsigned_long_int_Array_0[0][0]);
	} else {
		if (unsigned_long_int_Array_0[0][0] >= unsigned_long_int_Array_0[0][1]) {
			unsigned_long_int_Array_0[1][1] = unsigned_long_int_Array_0[0][1];
		}
	}


	// From: Req3Batch146Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		if (signed_long_int_Array_0[2] > unsigned_long_int_Array_0[1][1]) {
			unsigned_char_Array_0[2] = (max (unsigned_char_Array_0[0] , unsigned_char_Array_0[1]));
		}
	} else {
		if (((signed_long_int_Array_0[0] + unsigned_long_int_Array_0[1][0]) * unsigned_char_Array_0[1]) < (unsigned_char_Array_0[0] + unsigned_long_int_Array_0[1][1])) {
			unsigned_char_Array_0[2] = (128 - unsigned_char_Array_0[3]);
		}
	}


	// From: Req4Batch146Wrapper_A
	float_Array_0[0] = float_Array_0[1];


	// From: Req5Batch146Wrapper_A
	unsigned_char_Array_0[4] = unsigned_char_Array_0[1];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -536870911);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 1073741823);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
	unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 2147483647);
	unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 536870911);
	unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 536870912);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((signed_long_int_Array_0[4] == ((signed long int) (signed_long_int_Array_0[3] + (min ((16 + signed_long_int_Array_0[2]) , (max (signed_long_int_Array_0[1] , -32))))))) && ((signed_long_int_Array_0[4] >= ((max (signed_long_int_Array_0[3] , signed_long_int_Array_0[1])) % signed_long_int_Array_0[0])) ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) ((2066465504u - (unsigned_long_int_Array_0[0][1] + unsigned_long_int_Array_0[1][0])) + unsigned_long_int_Array_0[0][0]))) : ((unsigned_long_int_Array_0[0][0] >= unsigned_long_int_Array_0[0][1]) ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) unsigned_long_int_Array_0[0][1])) : 1))) && (BOOL_unsigned_char_Array_0[0] ? ((signed_long_int_Array_0[2] > unsigned_long_int_Array_0[1][1]) ? (unsigned_char_Array_0[2] == ((unsigned char) (max (unsigned_char_Array_0[0] , unsigned_char_Array_0[1])))) : 1) : ((((signed_long_int_Array_0[0] + unsigned_long_int_Array_0[1][0]) * unsigned_char_Array_0[1]) < (unsigned_char_Array_0[0] + unsigned_long_int_Array_0[1][1])) ? (unsigned_char_Array_0[2] == ((unsigned char) (128 - unsigned_char_Array_0[3]))) : 1))) && (float_Array_0[0] == ((float) float_Array_0[1]))) && (unsigned_char_Array_0[4] == ((unsigned char) unsigned_char_Array_0[1]))
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
