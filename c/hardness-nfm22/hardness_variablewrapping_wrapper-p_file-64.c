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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 0.9;
double* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 128;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 2941876006;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_5 = 256;
unsigned long int* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 63.5;
float* var_1_6_Pointer = &(var_1_6);
float var_1_7 = -0.151;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 0.8;
float* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 9.5;
double* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = -2;
signed short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_16 = 10;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 8;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 16;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch64Wrapper_P
	signed long int stepLocal_1 = last_1_var_1_16;
	unsigned long int stepLocal_0 = (*(var_1_3_Pointer));
	if (stepLocal_1 <= ((*(var_1_3_Pointer)) - last_1_var_1_16)) {
		if (stepLocal_0 < (max ((last_1_var_1_16 / (*(var_1_5_Pointer))) , last_1_var_1_16))) {
			if (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) > (*(var_1_8_Pointer))) {
				(*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
			}
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
		}
	}


	// From: Req2Batch64Wrapper_P
	if ((*(var_1_1_Pointer)) < (*(var_1_1_Pointer))) {
		(*(var_1_10_Pointer)) = (! ((*(var_1_11_Pointer)) && (*(var_1_12_Pointer))));
	}


	// From: Req4Batch64Wrapper_P
	unsigned long int stepLocal_2 = (*(var_1_2_Pointer)) & ((*(var_1_5_Pointer)) / (*(var_1_17_Pointer)));
	if (stepLocal_2 > (*(var_1_3_Pointer))) {
		if (! (*(var_1_10_Pointer))) {
			(*(var_1_16_Pointer)) = (*(var_1_18_Pointer));
		} else {
			(*(var_1_16_Pointer)) = (*(var_1_18_Pointer));
		}
	} else {
		(*(var_1_16_Pointer)) = (*(var_1_18_Pointer));
	}


	// From: Req3Batch64Wrapper_P
	if ((*(var_1_10_Pointer))) {
		if ((*(var_1_12_Pointer)) || ((*(var_1_1_Pointer)) < ((*(var_1_1_Pointer)) * (*(var_1_1_Pointer))))) {
			(*(var_1_13_Pointer)) = ((*(var_1_16_Pointer)) + (*(var_1_16_Pointer)));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65535);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
}

int property() {
	return ((((last_1_var_1_16 <= ((*(var_1_3_Pointer)) - last_1_var_1_16)) ? (((*(var_1_3_Pointer)) < (max ((last_1_var_1_16 / (*(var_1_5_Pointer))) , last_1_var_1_16))) ? ((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) > (*(var_1_8_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) (*(var_1_9_Pointer)))) : 1) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_9_Pointer))))) : 1) && (((*(var_1_1_Pointer)) < (*(var_1_1_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (! ((*(var_1_11_Pointer)) && (*(var_1_12_Pointer)))))) : 1)) && ((*(var_1_10_Pointer)) ? (((*(var_1_12_Pointer)) || ((*(var_1_1_Pointer)) < ((*(var_1_1_Pointer)) * (*(var_1_1_Pointer))))) ? ((*(var_1_13_Pointer)) == ((signed short int) ((*(var_1_16_Pointer)) + (*(var_1_16_Pointer))))) : 1) : 1)) && ((((*(var_1_2_Pointer)) & ((*(var_1_5_Pointer)) / (*(var_1_17_Pointer)))) > (*(var_1_3_Pointer))) ? ((! (*(var_1_10_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_18_Pointer)))) : ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_18_Pointer))))) : ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_18_Pointer)))))
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
