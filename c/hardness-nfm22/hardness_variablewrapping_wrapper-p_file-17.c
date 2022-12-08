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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 10000000.8;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 16.2;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 7.5;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 49.6;
double* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -10;
signed short int* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 4.5;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 9.4;
double* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 128;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 128;
signed short int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 100;
unsigned long int* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 128.4;
float* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 3.5;
double* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 16;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 2;
unsigned char* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch17Wrapper_P
	(*(var_1_12_Pointer)) = last_1_var_1_15;


	// From: Req5Batch17Wrapper_P
	unsigned long int stepLocal_1 = (*(var_1_12_Pointer));
	signed short int stepLocal_0 = (*(var_1_9_Pointer));
	if (stepLocal_0 >= (*(var_1_10_Pointer))) {
		if (((*(var_1_9_Pointer)) + last_1_var_1_15) >= stepLocal_1) {
			(*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
		} else {
			(*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
		}
	}


	// From: Req1Batch17Wrapper_P
	if ((*(var_1_2_Pointer))) {
		(*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) + (min ((*(var_1_4_Pointer)) , (49.5 + (*(var_1_5_Pointer))))));
	}


	// From: Req2Batch17Wrapper_P
	if ((- ((*(var_1_7_Pointer)) - (*(var_1_8_Pointer)))) <= (*(var_1_3_Pointer))) {
		(*(var_1_6_Pointer)) = ((8 + (*(var_1_15_Pointer))) - (*(var_1_15_Pointer)));
	} else {
		if ((*(var_1_2_Pointer))) {
			if ((*(var_1_11_Pointer))) {
				(*(var_1_6_Pointer)) = (*(var_1_15_Pointer));
			}
		} else {
			(*(var_1_6_Pointer)) = (*(var_1_15_Pointer));
		}
	}


	// From: Req4Batch17Wrapper_P
	if ((*(var_1_7_Pointer)) < ((*(var_1_8_Pointer)) - (*(var_1_14_Pointer)))) {
		(*(var_1_13_Pointer)) = (max ((*(var_1_4_Pointer)) , (max ((max (127.4f , (*(var_1_5_Pointer)))) , (*(var_1_3_Pointer))))));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -461168.6018427382800e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427382800e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((double) ((*(var_1_3_Pointer)) + (min ((*(var_1_4_Pointer)) , (49.5 + (*(var_1_5_Pointer)))))))) : 1) && (((- ((*(var_1_7_Pointer)) - (*(var_1_8_Pointer)))) <= (*(var_1_3_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed short int) ((8 + (*(var_1_15_Pointer))) - (*(var_1_15_Pointer))))) : ((*(var_1_2_Pointer)) ? ((*(var_1_11_Pointer)) ? ((*(var_1_6_Pointer)) == ((signed short int) (*(var_1_15_Pointer)))) : 1) : ((*(var_1_6_Pointer)) == ((signed short int) (*(var_1_15_Pointer))))))) && ((*(var_1_12_Pointer)) == ((unsigned long int) last_1_var_1_15))) && (((*(var_1_7_Pointer)) < ((*(var_1_8_Pointer)) - (*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer)) == ((float) (max ((*(var_1_4_Pointer)) , (max ((max (127.4f , (*(var_1_5_Pointer)))) , (*(var_1_3_Pointer)))))))) : 1)) && (((*(var_1_9_Pointer)) >= (*(var_1_10_Pointer))) ? ((((*(var_1_9_Pointer)) + last_1_var_1_15) >= (*(var_1_12_Pointer))) ? ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_16_Pointer)))) : ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_16_Pointer))))) : 1)
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
