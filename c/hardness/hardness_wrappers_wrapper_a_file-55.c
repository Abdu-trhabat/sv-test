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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2] = {
	0, 0
};
double double_Array_0[5] = {
	1.8, 63.5, 0.25, 256.75, 16.5
};
float float_Array_0[1] = {
	4.6
};
signed long int signed_long_int_Array_0[1] = {
	-5
};
signed short int signed_short_int_Array_0[2] = {
	1, 128
};
unsigned char unsigned_char_Array_0[2] = {
	128, 2
};
unsigned long int unsigned_long_int_Array_0[1] = {
	500
};
unsigned short int unsigned_short_int_Array_0[3] = {
	8, 25, 10
};

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = -5;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 500;
unsigned short int last_1_unsigned_short_int_Array_0_2_ = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch55Wrapper_A
	signed long int stepLocal_3 = ~ unsigned_short_int_Array_0[1];
	signed long int stepLocal_2 = unsigned_char_Array_0[0] - unsigned_short_int_Array_0[0];
	if (stepLocal_3 <= (min ((16 >> unsigned_short_int_Array_0[0]) , last_1_signed_long_int_Array_0_0_))) {
		if (stepLocal_2 < (last_1_unsigned_short_int_Array_0_2_ / -8)) {
			signed_long_int_Array_0[0] = last_1_unsigned_short_int_Array_0_2_;
		}
	} else {
		signed_long_int_Array_0[0] = (last_1_unsigned_long_int_Array_0_0_ - unsigned_short_int_Array_0[0]);
	}


	// From: Req5Batch55Wrapper_A
	unsigned_long_int_Array_0[0] = signed_long_int_Array_0[0];


	// From: Req1Batch55Wrapper_A
	unsigned char stepLocal_1 = signed_short_int_Array_0[1] >= signed_short_int_Array_0[0];
	signed short int stepLocal_0 = signed_short_int_Array_0[1];
	if (BOOL_unsigned_char_Array_0[1]) {
		if (stepLocal_1 && BOOL_unsigned_char_Array_0[0]) {
			if (stepLocal_0 >= signed_short_int_Array_0[0]) {
				unsigned_short_int_Array_0[2] = 5;
			} else {
				unsigned_short_int_Array_0[2] = (min (25 , unsigned_short_int_Array_0[1]));
			}
		}
	} else {
		unsigned_short_int_Array_0[2] = unsigned_short_int_Array_0[1];
	}


	// From: Req2Batch55Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		double_Array_0[3] = (((double_Array_0[1] + double_Array_0[0]) + double_Array_0[2]) - double_Array_0[4]);
	}


	// From: Req4Batch55Wrapper_A
	float_Array_0[0] = double_Array_0[1];


	// From: Req6Batch55Wrapper_A
	unsigned_char_Array_0[1] = unsigned_short_int_Array_0[0];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 2305843.009213691400e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 2305843.009213691400e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854766000e+12F && double_Array_0[4] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 1);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 30);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
	last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
	last_1_unsigned_short_int_Array_0_2_ = unsigned_short_int_Array_0[2];
}

int property(void) {
	return (((((BOOL_unsigned_char_Array_0[1] ? (((signed_short_int_Array_0[1] >= signed_short_int_Array_0[0]) && BOOL_unsigned_char_Array_0[0]) ? ((signed_short_int_Array_0[1] >= signed_short_int_Array_0[0]) ? (unsigned_short_int_Array_0[2] == ((unsigned short int) 5)) : (unsigned_short_int_Array_0[2] == ((unsigned short int) (min (25 , unsigned_short_int_Array_0[1]))))) : 1) : (unsigned_short_int_Array_0[2] == ((unsigned short int) unsigned_short_int_Array_0[1]))) && (BOOL_unsigned_char_Array_0[1] ? (double_Array_0[3] == ((double) (((double_Array_0[1] + double_Array_0[0]) + double_Array_0[2]) - double_Array_0[4]))) : 1)) && (((~ unsigned_short_int_Array_0[1]) <= (min ((16 >> unsigned_short_int_Array_0[0]) , last_1_signed_long_int_Array_0_0_))) ? (((unsigned_char_Array_0[0] - unsigned_short_int_Array_0[0]) < (last_1_unsigned_short_int_Array_0_2_ / -8)) ? (signed_long_int_Array_0[0] == ((signed long int) last_1_unsigned_short_int_Array_0_2_)) : 1) : (signed_long_int_Array_0[0] == ((signed long int) (last_1_unsigned_long_int_Array_0_0_ - unsigned_short_int_Array_0[0]))))) && (float_Array_0[0] == ((float) double_Array_0[1]))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_long_int_Array_0[0]))) && (unsigned_char_Array_0[1] == ((unsigned char) unsigned_short_int_Array_0[0]))
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
