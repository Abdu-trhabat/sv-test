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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 5.5;
float* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 10.375;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 127.5;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 256.2;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 1;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 5;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_10 = 32;
signed long int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 2;
signed long int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 16;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 50;
unsigned char* var_1_13_Pointer = &(var_1_13);
signed long int var_1_15 = 100000000;
signed long int* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = 2;
signed short int* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch1Wrapper_P
	if ((*(var_1_2_Pointer)) <= (- (*(var_1_3_Pointer)))) {
		(*(var_1_1_Pointer)) = (abs ((*(var_1_4_Pointer))));
	} else {
		if ((*(var_1_5_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
		}
	}


	// From: Req5Batch1Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_13_Pointer));


	// From: Req2Batch1Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_7_Pointer));
	if ((*(var_1_5_Pointer)) || stepLocal_0) {
		(*(var_1_6_Pointer)) = (max ((*(var_1_16_Pointer)) , (*(var_1_16_Pointer))));
	} else {
		(*(var_1_6_Pointer)) = (((*(var_1_10_Pointer)) + (*(var_1_11_Pointer))) - 4);
	}


	// From: Req3Batch1Wrapper_P
	signed long int stepLocal_3 = (*(var_1_11_Pointer));
	signed long int stepLocal_2 = (*(var_1_16_Pointer)) + (*(var_1_11_Pointer));
	signed long int stepLocal_1 = (*(var_1_11_Pointer)) << (*(var_1_16_Pointer));
	if (stepLocal_1 != (abs ((*(var_1_10_Pointer))))) {
		if (((*(var_1_16_Pointer)) % (*(var_1_13_Pointer))) >= stepLocal_3) {
			if (stepLocal_2 > (last_1_var_1_12 * (*(var_1_16_Pointer)))) {
				(*(var_1_12_Pointer)) = (*(var_1_13_Pointer));
			} else {
				(*(var_1_12_Pointer)) = (*(var_1_10_Pointer));
			}
		}
	}


	// From: Req4Batch1Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 255);
	assume_abort_if_not(var_1_13 != 0);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
}

int property() {
	return ((((((*(var_1_2_Pointer)) <= (- (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((float) (abs ((*(var_1_4_Pointer)))))) : ((*(var_1_5_Pointer)) ? ((*(var_1_1_Pointer)) == ((float) (*(var_1_4_Pointer)))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_4_Pointer)))))) && (((*(var_1_5_Pointer)) || (*(var_1_7_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (max ((*(var_1_16_Pointer)) , (*(var_1_16_Pointer)))))) : ((*(var_1_6_Pointer)) == ((signed long int) (((*(var_1_10_Pointer)) + (*(var_1_11_Pointer))) - 4))))) && ((((*(var_1_11_Pointer)) << (*(var_1_16_Pointer))) != (abs ((*(var_1_10_Pointer))))) ? ((((*(var_1_16_Pointer)) % (*(var_1_13_Pointer))) >= (*(var_1_11_Pointer))) ? ((((*(var_1_16_Pointer)) + (*(var_1_11_Pointer))) > (last_1_var_1_12 * (*(var_1_16_Pointer)))) ? ((*(var_1_12_Pointer)) == ((unsigned long int) (*(var_1_13_Pointer)))) : ((*(var_1_12_Pointer)) == ((unsigned long int) (*(var_1_10_Pointer))))) : 1) : 1)) && ((*(var_1_15_Pointer)) == ((signed long int) (*(var_1_16_Pointer))))) && ((*(var_1_16_Pointer)) == ((signed short int) (*(var_1_13_Pointer))))
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
