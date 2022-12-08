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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 25.8;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 128.2;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 15.4;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 5.25;
double* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 100;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 5;
unsigned short int* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables
double last_1_var_1_5 = 5.25;
unsigned char last_1_var_1_10 = 100;
unsigned short int last_1_var_1_13 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch0Wrapper_P
	if ((*(var_1_9_Pointer))) {
		if (((*(var_1_4_Pointer)) * ((*(var_1_3_Pointer)) - 5.3)) <= last_1_var_1_5) {
			(*(var_1_13_Pointer)) = last_1_var_1_10;
		}
	}


	// From: Req3Batch0Wrapper_P
	if ((last_1_var_1_13 + last_1_var_1_13) < last_1_var_1_13) {
		if (last_1_var_1_13 > last_1_var_1_13) {
			(*(var_1_10_Pointer)) = (*(var_1_12_Pointer));
		}
	}


	// From: Req1Batch0Wrapper_P
	if (! (*(var_1_2_Pointer))) {
		(*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer)));
	} else {
		(*(var_1_1_Pointer)) = (min (16.2 , (*(var_1_3_Pointer))));
	}


	// From: Req2Batch0Wrapper_P
	if (((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_1_Pointer)))) != (*(var_1_1_Pointer))) {
		if ((*(var_1_2_Pointer))) {
			if ((- (*(var_1_13_Pointer))) <= (*(var_1_10_Pointer))) {
				if ((*(var_1_9_Pointer))) {
					(*(var_1_5_Pointer)) = (*(var_1_4_Pointer));
				}
			} else {
				(*(var_1_5_Pointer)) = (*(var_1_3_Pointer));
			}
		} else {
			(*(var_1_5_Pointer)) = (*(var_1_3_Pointer));
		}
	} else {
		(*(var_1_5_Pointer)) = (*(var_1_3_Pointer));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return ((((! (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))))) : ((*(var_1_1_Pointer)) == ((double) (min (16.2 , (*(var_1_3_Pointer))))))) && ((((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_1_Pointer)))) != (*(var_1_1_Pointer))) ? ((*(var_1_2_Pointer)) ? (((- (*(var_1_13_Pointer))) <= (*(var_1_10_Pointer))) ? ((*(var_1_9_Pointer)) ? ((*(var_1_5_Pointer)) == ((double) (*(var_1_4_Pointer)))) : 1) : ((*(var_1_5_Pointer)) == ((double) (*(var_1_3_Pointer))))) : ((*(var_1_5_Pointer)) == ((double) (*(var_1_3_Pointer))))) : ((*(var_1_5_Pointer)) == ((double) (*(var_1_3_Pointer)))))) && (((last_1_var_1_13 + last_1_var_1_13) < last_1_var_1_13) ? ((last_1_var_1_13 > last_1_var_1_13) ? ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))) : 1) : 1)) && ((*(var_1_9_Pointer)) ? ((((*(var_1_4_Pointer)) * ((*(var_1_3_Pointer)) - 5.3)) <= last_1_var_1_5) ? ((*(var_1_13_Pointer)) == ((unsigned short int) last_1_var_1_10)) : 1) : 1)
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
