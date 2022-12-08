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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 8;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 8;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 1000;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 1;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 4.575;
double* var_1_11_Pointer = &(var_1_11);
double var_1_13 = 2.75;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 128.5;
double* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = -1000000000;
signed long int* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 99999.25;
float* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 1;
signed char* var_1_17_Pointer = &(var_1_17);
signed char var_1_18 = 50;
signed char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_5 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch96Wrapper_P
	if (! last_1_var_1_5) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))));
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
	}


	// From: Req2Batch96Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_6_Pointer));
	if ((*(var_1_2_Pointer))) {
		if (stepLocal_0 && (((*(var_1_3_Pointer)) >= 16) || last_1_var_1_5)) {
			if ((*(var_1_6_Pointer))) {
				(*(var_1_5_Pointer)) = (((*(var_1_1_Pointer)) < (*(var_1_1_Pointer))) && (*(var_1_9_Pointer)));
			} else {
				(*(var_1_5_Pointer)) = (*(var_1_10_Pointer));
			}
		}
	}


	// From: Req4Batch96Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_1_Pointer));


	// From: Req5Batch96Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_13_Pointer));


	// From: Req6Batch96Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_18_Pointer));


	// From: Req3Batch96Wrapper_P
	if ((abs ((*(var_1_15_Pointer)))) > (*(var_1_15_Pointer))) {
		if (((*(var_1_15_Pointer)) / -5) >= (((*(var_1_4_Pointer)) + (*(var_1_15_Pointer))) - (min ((*(var_1_1_Pointer)) , (*(var_1_3_Pointer)))))) {
			(*(var_1_11_Pointer)) = ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)));
		} else {
			(*(var_1_11_Pointer)) = (*(var_1_14_Pointer));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
}

int property() {
	return ((((((! last_1_var_1_5) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (min ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer))))) && ((*(var_1_2_Pointer)) ? (((*(var_1_6_Pointer)) && (((*(var_1_3_Pointer)) >= 16) || last_1_var_1_5)) ? ((*(var_1_6_Pointer)) ? ((*(var_1_5_Pointer)) == ((unsigned char) (((*(var_1_1_Pointer)) < (*(var_1_1_Pointer))) && (*(var_1_9_Pointer))))) : ((*(var_1_5_Pointer)) == ((unsigned char) (*(var_1_10_Pointer))))) : 1) : 1)) && (((abs ((*(var_1_15_Pointer)))) > (*(var_1_15_Pointer))) ? ((((*(var_1_15_Pointer)) / -5) >= (((*(var_1_4_Pointer)) + (*(var_1_15_Pointer))) - (min ((*(var_1_1_Pointer)) , (*(var_1_3_Pointer)))))) ? ((*(var_1_11_Pointer)) == ((double) ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))))) : ((*(var_1_11_Pointer)) == ((double) (*(var_1_14_Pointer))))) : 1)) && ((*(var_1_15_Pointer)) == ((signed long int) (*(var_1_1_Pointer))))) && ((*(var_1_16_Pointer)) == ((float) (*(var_1_13_Pointer))))) && ((*(var_1_17_Pointer)) == ((signed char) (*(var_1_18_Pointer))))
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
