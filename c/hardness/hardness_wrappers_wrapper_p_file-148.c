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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148Wrapper_P.c", 13, "reach_error"); }
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
float var_1_1 = 256.625;
float* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 100000000.25;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 8.5;
float* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 1;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 4;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 2;
signed char* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 0;
signed long int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 1;
signed long int* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 0.25;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 5.2;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 100.5;
double* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 25.1;
double* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 7.4;
float* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch148Wrapper_P
	(*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)));


	// From: Req4Batch148Wrapper_P
	(*(var_1_13_Pointer)) = (((*(var_1_14_Pointer)) + (max ((*(var_1_15_Pointer)) , (*(var_1_16_Pointer))))) - (*(var_1_2_Pointer)));


	// From: Req5Batch148Wrapper_P
	(*(var_1_17_Pointer)) = 1.00000007E7f;


	// From: Req2Batch148Wrapper_P
	if ((*(var_1_5_Pointer)) && (*(var_1_6_Pointer))) {
		(*(var_1_4_Pointer)) = (! (*(var_1_7_Pointer)));
	} else {
		(*(var_1_4_Pointer)) = (! (((*(var_1_13_Pointer)) > (*(var_1_3_Pointer))) || (*(var_1_7_Pointer))));
	}


	// From: Req3Batch148Wrapper_P
	signed long int stepLocal_0 = (*(var_1_9_Pointer)) - (*(var_1_10_Pointer));
	if ((*(var_1_17_Pointer)) < (*(var_1_3_Pointer))) {
		if (stepLocal_0 >= ((*(var_1_11_Pointer)) / (*(var_1_12_Pointer)))) {
			if ((*(var_1_4_Pointer))) {
				(*(var_1_8_Pointer)) = (*(var_1_7_Pointer));
			} else {
				(*(var_1_8_Pointer)) = (((*(var_1_9_Pointer)) < (~ (*(var_1_11_Pointer)))) || (*(var_1_7_Pointer)));
			}
		}
	} else {
		if ((*(var_1_4_Pointer))) {
			(*(var_1_8_Pointer)) = (*(var_1_7_Pointer));
		} else {
			(*(var_1_8_Pointer)) = 0;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_1_Pointer)) == ((float) ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))))) && (((*(var_1_5_Pointer)) && (*(var_1_6_Pointer))) ? ((*(var_1_4_Pointer)) == ((unsigned char) (! (*(var_1_7_Pointer))))) : ((*(var_1_4_Pointer)) == ((unsigned char) (! (((*(var_1_13_Pointer)) > (*(var_1_3_Pointer))) || (*(var_1_7_Pointer)))))))) && (((*(var_1_17_Pointer)) < (*(var_1_3_Pointer))) ? ((((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))) >= ((*(var_1_11_Pointer)) / (*(var_1_12_Pointer)))) ? ((*(var_1_4_Pointer)) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_7_Pointer)))) : ((*(var_1_8_Pointer)) == ((unsigned char) (((*(var_1_9_Pointer)) < (~ (*(var_1_11_Pointer)))) || (*(var_1_7_Pointer)))))) : 1) : ((*(var_1_4_Pointer)) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_7_Pointer)))) : ((*(var_1_8_Pointer)) == ((unsigned char) 0))))) && ((*(var_1_13_Pointer)) == ((double) (((*(var_1_14_Pointer)) + (max ((*(var_1_15_Pointer)) , (*(var_1_16_Pointer))))) - (*(var_1_2_Pointer)))))) && ((*(var_1_17_Pointer)) == ((float) 1.00000007E7f))
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
