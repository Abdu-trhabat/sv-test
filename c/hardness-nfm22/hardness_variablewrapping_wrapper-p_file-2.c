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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 10;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_5 = 200;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 56955;
unsigned short int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 32;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 1;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 8;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 1;
unsigned char* var_1_10_Pointer = &(var_1_10);
float var_1_11 = -0.6;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 9.125;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 50.5;
float* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 10;
unsigned short int last_1_var_1_9 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch2Wrapper_P
	if (last_1_var_1_9 <= (last_1_var_1_9 * last_1_var_1_1)) {
		(*(var_1_1_Pointer)) = (max ((*(var_1_5_Pointer)) , (max (((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))) , (*(var_1_8_Pointer))))));
	}


	// From: Req2Batch2Wrapper_P
	if ((*(var_1_10_Pointer)) || ((*(var_1_6_Pointer)) == (*(var_1_8_Pointer)))) {
		if ((*(var_1_6_Pointer)) <= ((min (0 , (*(var_1_1_Pointer)))) << (*(var_1_1_Pointer)))) {
			if ((*(var_1_10_Pointer)) && ((*(var_1_1_Pointer)) == ((*(var_1_6_Pointer)) * (*(var_1_5_Pointer))))) {
				(*(var_1_9_Pointer)) = (*(var_1_5_Pointer));
			} else {
				(*(var_1_9_Pointer)) = (*(var_1_5_Pointer));
			}
		} else {
			(*(var_1_9_Pointer)) = 2;
		}
	} else {
		(*(var_1_9_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req3Batch2Wrapper_P
	if ((*(var_1_7_Pointer)) != (*(var_1_6_Pointer))) {
		if ((*(var_1_7_Pointer)) <= (*(var_1_9_Pointer))) {
			(*(var_1_11_Pointer)) = (max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer))));
		} else {
			(*(var_1_11_Pointer)) = (*(var_1_12_Pointer));
		}
	} else {
		(*(var_1_11_Pointer)) = (*(var_1_12_Pointer));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((last_1_var_1_9 <= (last_1_var_1_9 * last_1_var_1_1)) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (max ((*(var_1_5_Pointer)) , (max (((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))) , (*(var_1_8_Pointer)))))))) : 1) && (((*(var_1_10_Pointer)) || ((*(var_1_6_Pointer)) == (*(var_1_8_Pointer)))) ? (((*(var_1_6_Pointer)) <= ((min (0 , (*(var_1_1_Pointer)))) << (*(var_1_1_Pointer)))) ? (((*(var_1_10_Pointer)) && ((*(var_1_1_Pointer)) == ((*(var_1_6_Pointer)) * (*(var_1_5_Pointer))))) ? ((*(var_1_9_Pointer)) == ((unsigned short int) (*(var_1_5_Pointer)))) : ((*(var_1_9_Pointer)) == ((unsigned short int) (*(var_1_5_Pointer))))) : ((*(var_1_9_Pointer)) == ((unsigned short int) 2))) : ((*(var_1_9_Pointer)) == ((unsigned short int) (*(var_1_6_Pointer)))))) && (((*(var_1_7_Pointer)) != (*(var_1_6_Pointer))) ? (((*(var_1_7_Pointer)) <= (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((float) (max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer)))))) : ((*(var_1_11_Pointer)) == ((float) (*(var_1_12_Pointer))))) : ((*(var_1_11_Pointer)) == ((float) (*(var_1_12_Pointer)))))
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
