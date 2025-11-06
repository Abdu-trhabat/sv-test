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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18Wrapper_A.c", 13, "reach_error"); }
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
float float_Array_0[3] = {
	5.8, 0.5, 99.25
};
signed long int signed_long_int_Array_0[1] = {
	32
};
signed short int signed_short_int_Array_0[2][3] = {
	{5, 32, 2}, {18477, 0, -32}
};
unsigned char unsigned_char_Array_0[3] = {
	50, 1, 16
};
unsigned long int unsigned_long_int_Array_0[1] = {
	256
};

// Calibration values

// Last'ed variables
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch18Wrapper_A
	signed short int stepLocal_3 = signed_short_int_Array_0[0][0];
	unsigned long int stepLocal_2 = last_1_unsigned_long_int_Array_0_0_;
	if (last_1_unsigned_long_int_Array_0_0_ > stepLocal_3) {
		if (((signed_short_int_Array_0[0][1] - signed_short_int_Array_0[0][0]) + signed_short_int_Array_0[1][0]) > stepLocal_2) {
			unsigned_char_Array_0[2] = (min (unsigned_char_Array_0[0] , unsigned_char_Array_0[1]));
		} else {
			unsigned_char_Array_0[2] = unsigned_char_Array_0[0];
		}
	}


	// From: Req3Batch18Wrapper_A
	if ((signed_short_int_Array_0[1][1] & signed_short_int_Array_0[1][0]) > ((unsigned_char_Array_0[0] * signed_long_int_Array_0[0]) * (unsigned_char_Array_0[2] + signed_short_int_Array_0[0][2]))) {
		if (BOOL_unsigned_char_Array_0[0] && (float_Array_0[0] > float_Array_0[1])) {
			unsigned_long_int_Array_0[0] = signed_short_int_Array_0[1][0];
		}
	} else {
		unsigned_long_int_Array_0[0] = signed_short_int_Array_0[1][0];
	}


	// From: Req1Batch18Wrapper_A
	signed short int stepLocal_1 = signed_short_int_Array_0[1][2];
	signed long int stepLocal_0 = signed_long_int_Array_0[0];
	if ((signed_short_int_Array_0[1][2] ^ (max (signed_short_int_Array_0[0][2] , signed_short_int_Array_0[1][1]))) != stepLocal_0) {
		if (stepLocal_1 == (signed_short_int_Array_0[0][1] - (signed_short_int_Array_0[1][0] - signed_short_int_Array_0[0][0]))) {
			float_Array_0[2] = (min (float_Array_0[0] , float_Array_0[1]));
		}
	} else {
		float_Array_0[2] = 10.5f;
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 16383);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= 16383);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32767);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32767);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 32767);
	signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][2] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0][2] <= 32767);
	signed_short_int_Array_0[1][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][2] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1][2] <= 32767);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
}



void updateLastVariables(void) {
	last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}

int property(void) {
	return ((((signed_short_int_Array_0[1][2] ^ (max (signed_short_int_Array_0[0][2] , signed_short_int_Array_0[1][1]))) != signed_long_int_Array_0[0]) ? ((signed_short_int_Array_0[1][2] == (signed_short_int_Array_0[0][1] - (signed_short_int_Array_0[1][0] - signed_short_int_Array_0[0][0]))) ? (float_Array_0[2] == ((float) (min (float_Array_0[0] , float_Array_0[1])))) : 1) : (float_Array_0[2] == ((float) 10.5f))) && ((last_1_unsigned_long_int_Array_0_0_ > signed_short_int_Array_0[0][0]) ? ((((signed_short_int_Array_0[0][1] - signed_short_int_Array_0[0][0]) + signed_short_int_Array_0[1][0]) > last_1_unsigned_long_int_Array_0_0_) ? (unsigned_char_Array_0[2] == ((unsigned char) (min (unsigned_char_Array_0[0] , unsigned_char_Array_0[1])))) : (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[0]))) : 1)) && (((signed_short_int_Array_0[1][1] & signed_short_int_Array_0[1][0]) > ((unsigned_char_Array_0[0] * signed_long_int_Array_0[0]) * (unsigned_char_Array_0[2] + signed_short_int_Array_0[0][2]))) ? ((BOOL_unsigned_char_Array_0[0] && (float_Array_0[0] > float_Array_0[1])) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_short_int_Array_0[1][0])) : 1) : (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_short_int_Array_0[1][0])))
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
