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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 31.75;
double* var_1_2_Pointer = &(var_1_2);
signed char var_1_4 = -8;
signed char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -4;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_12 = 32;
signed short int* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = -25;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_16 = 4;
signed char* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed short int last_1_var_1_10 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch46Wrapper_P
	if (last_1_var_1_10 <= ((*(var_1_12_Pointer)) / (*(var_1_4_Pointer)))) {
		if (last_1_var_1_1) {
			(*(var_1_13_Pointer)) = (*(var_1_16_Pointer));
		}
	}


	// From: Req1Batch46Wrapper_P
	signed long int stepLocal_1 = min ((*(var_1_4_Pointer)) , (*(var_1_13_Pointer)));
	signed long int stepLocal_0 = (*(var_1_13_Pointer)) / (*(var_1_4_Pointer));
	if ((- (*(var_1_2_Pointer))) >= 16.75) {
		if (stepLocal_0 >= (*(var_1_13_Pointer))) {
			if (stepLocal_1 > -32) {
				(*(var_1_1_Pointer)) = 0;
			} else {
				(*(var_1_1_Pointer)) = ((*(var_1_6_Pointer)) || (*(var_1_7_Pointer)));
			}
		} else {
			if ((*(var_1_6_Pointer))) {
				(*(var_1_1_Pointer)) = 1;
			} else {
				(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = 1;
	}


	// From: Req3Batch46Wrapper_P
	signed char stepLocal_2 = (*(var_1_13_Pointer));
	if ((((*(var_1_13_Pointer)) | (*(var_1_13_Pointer))) + (*(var_1_4_Pointer))) < stepLocal_2) {
		(*(var_1_10_Pointer)) = ((*(var_1_12_Pointer)) - 256);
	} else {
		(*(var_1_10_Pointer)) = 128;
	}


	// From: Req2Batch46Wrapper_P
	if (1 == (*(var_1_4_Pointer))) {
		(*(var_1_8_Pointer)) = (*(var_1_9_Pointer));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
}

int property() {
	return (((((- (*(var_1_2_Pointer))) >= 16.75) ? ((((*(var_1_13_Pointer)) / (*(var_1_4_Pointer))) >= (*(var_1_13_Pointer))) ? (((min ((*(var_1_4_Pointer)) , (*(var_1_13_Pointer)))) > -32) ? ((*(var_1_1_Pointer)) == ((unsigned char) 0)) : ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_6_Pointer)) || (*(var_1_7_Pointer)))))) : ((*(var_1_6_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned char) 1)) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_7_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned char) 1))) && ((1 == (*(var_1_4_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_9_Pointer)))) : 1)) && (((((*(var_1_13_Pointer)) | (*(var_1_13_Pointer))) + (*(var_1_4_Pointer))) < (*(var_1_13_Pointer))) ? ((*(var_1_10_Pointer)) == ((signed short int) ((*(var_1_12_Pointer)) - 256))) : ((*(var_1_10_Pointer)) == ((signed short int) 128)))) && ((last_1_var_1_10 <= ((*(var_1_12_Pointer)) / (*(var_1_4_Pointer)))) ? (last_1_var_1_1 ? ((*(var_1_13_Pointer)) == ((signed char) (*(var_1_16_Pointer)))) : 1) : 1)
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
