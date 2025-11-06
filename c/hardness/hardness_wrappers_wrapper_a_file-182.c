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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182Wrapper_A.c", 13, "reach_error"); }
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
	1
};
double double_Array_0[2] = {
	1.75, 255.5
};
float float_Array_0[2][5] = {
	{5.6, -0.3, 49.5, 128.5, 255.4}, {2.125, 7.4, 9999999.3, 64.2, 127.25}
};
signed long int signed_long_int_Array_0[1] = {
	5
};
signed short int signed_short_int_Array_0[2] = {
	-32, -16
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch182Wrapper_A
	if (! BOOL_unsigned_char_Array_0[0]) {
		float_Array_0[1][4] = ((min (float_Array_0[0][4] , float_Array_0[1][3])) - float_Array_0[0][3]);
	}


	// From: Req2Batch182Wrapper_A
	signed long int stepLocal_0 = min (signed_long_int_Array_0[0] , 10);
	if (-16 <= stepLocal_0) {
		signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
	} else {
		signed_short_int_Array_0[1] = (abs (1));
	}


	// From: Req3Batch182Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		float_Array_0[0][0] = (float_Array_0[1][0] + float_Array_0[0][1]);
	} else {
		float_Array_0[0][0] = float_Array_0[0][4];
	}


	// From: Req4Batch182Wrapper_A
	double_Array_0[0] = (min ((max (float_Array_0[0][4] , float_Array_0[0][1])) , float_Array_0[0][3]));


	// From: Req5Batch182Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		double_Array_0[1] = (max (16.5 , (float_Array_0[0][4] - 9.99999999975E9)));
	}


	// From: Req6Batch182Wrapper_A
	if (((min (float_Array_0[0][4] , float_Array_0[1][2])) - float_Array_0[1][3]) < ((float_Array_0[0][3] - float_Array_0[1][1]) * (- double_Array_0[0]))) {
		if (BOOL_unsigned_char_Array_0[0]) {
			float_Array_0[0][2] = float_Array_0[1][3];
		} else {
			float_Array_0[0][2] = 1.8199999999999998f;
		}
	} else {
		float_Array_0[0][2] = float_Array_0[0][4];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -461168.6018427383000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427383000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -461168.6018427383000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427383000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= 0.0F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	float_Array_0[1][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][2] >= 0.0F && float_Array_0[1][2] <= -1.0e-20F) || (float_Array_0[1][2] <= 9223372.036854776000e+12F && float_Array_0[1][2] >= 1.0e-20F ));
	float_Array_0[0][3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][3] >= 0.0F && float_Array_0[0][3] <= -1.0e-20F) || (float_Array_0[0][3] <= 9223372.036854766000e+12F && float_Array_0[0][3] >= 1.0e-20F ));
	float_Array_0[1][3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][3] >= 0.0F && float_Array_0[1][3] <= -1.0e-20F) || (float_Array_0[1][3] <= 9223372.036854766000e+12F && float_Array_0[1][3] >= 1.0e-20F ));
	float_Array_0[0][4] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][4] >= 0.0F && float_Array_0[0][4] <= -1.0e-20F) || (float_Array_0[0][4] <= 9223372.036854766000e+12F && float_Array_0[0][4] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((! BOOL_unsigned_char_Array_0[0]) ? (float_Array_0[1][4] == ((float) ((min (float_Array_0[0][4] , float_Array_0[1][3])) - float_Array_0[0][3]))) : 1) && ((-16 <= (min (signed_long_int_Array_0[0] , 10))) ? (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0])) : (signed_short_int_Array_0[1] == ((signed short int) (abs (1)))))) && (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[0][0] == ((float) (float_Array_0[1][0] + float_Array_0[0][1]))) : (float_Array_0[0][0] == ((float) float_Array_0[0][4])))) && (double_Array_0[0] == ((double) (min ((max (float_Array_0[0][4] , float_Array_0[0][1])) , float_Array_0[0][3]))))) && (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[1] == ((double) (max (16.5 , (float_Array_0[0][4] - 9.99999999975E9))))) : 1)) && ((((min (float_Array_0[0][4] , float_Array_0[1][2])) - float_Array_0[1][3]) < ((float_Array_0[0][3] - float_Array_0[1][1]) * (- double_Array_0[0]))) ? (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[0][2] == ((float) float_Array_0[1][3])) : (float_Array_0[0][2] == ((float) 1.8199999999999998f))) : (float_Array_0[0][2] == ((float) float_Array_0[0][4])))
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
