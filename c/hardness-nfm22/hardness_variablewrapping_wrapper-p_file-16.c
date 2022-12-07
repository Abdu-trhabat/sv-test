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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_3 = 4;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 256;
signed short int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 1000000.8;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 3.8;
float* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 25;
signed char* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 2.75;
float* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 0;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 32;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 2;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 2;
signed char* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = -32;
signed short int* var_1_15_Pointer = &(var_1_15);

// Calibration values

// Last'ed variables
signed char last_1_var_1_9 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch16Wrapper_P
	if ((last_1_var_1_9 % (max ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))))) <= -1000000) {
		(*(var_1_1_Pointer)) = ((*(var_1_5_Pointer)) || (*(var_1_6_Pointer)));
	}


	// From: Req2Batch16Wrapper_P
	(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));


	// From: Req4Batch16Wrapper_P
	signed char stepLocal_2 = (*(var_1_11_Pointer));
	unsigned char stepLocal_1 = 99999.375 <= (*(var_1_10_Pointer));
	if ((*(var_1_13_Pointer)) <= stepLocal_2) {
		if (((*(var_1_8_Pointer)) < (*(var_1_7_Pointer))) && stepLocal_1) {
			(*(var_1_15_Pointer)) = ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)));
		}
	} else {
		(*(var_1_15_Pointer)) = -25;
	}


	// From: Req3Batch16Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_6_Pointer));
	if ((*(var_1_8_Pointer)) < ((*(var_1_7_Pointer)) / (*(var_1_10_Pointer)))) {
		if ((*(var_1_1_Pointer)) || stepLocal_0) {
			(*(var_1_9_Pointer)) = (((max ((*(var_1_11_Pointer)) , 5)) + ((*(var_1_12_Pointer)) - (*(var_1_13_Pointer)))) - (*(var_1_14_Pointer)));
		} else {
			if ((*(var_1_10_Pointer)) > (*(var_1_8_Pointer))) {
				(*(var_1_9_Pointer)) = (*(var_1_11_Pointer));
			} else {
				(*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 31);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((((last_1_var_1_9 % (max ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))))) <= -1000000) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_5_Pointer)) || (*(var_1_6_Pointer))))) : 1) && ((*(var_1_7_Pointer)) == ((float) (*(var_1_8_Pointer))))) && (((*(var_1_8_Pointer)) < ((*(var_1_7_Pointer)) / (*(var_1_10_Pointer)))) ? (((*(var_1_1_Pointer)) || (*(var_1_6_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed char) (((max ((*(var_1_11_Pointer)) , 5)) + ((*(var_1_12_Pointer)) - (*(var_1_13_Pointer)))) - (*(var_1_14_Pointer))))) : (((*(var_1_10_Pointer)) > (*(var_1_8_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_11_Pointer)))) : ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_12_Pointer)))))) : 1)) && (((*(var_1_13_Pointer)) <= (*(var_1_11_Pointer))) ? ((((*(var_1_8_Pointer)) < (*(var_1_7_Pointer))) && (99999.375 <= (*(var_1_10_Pointer)))) ? ((*(var_1_15_Pointer)) == ((signed short int) ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))))) : 1) : ((*(var_1_15_Pointer)) == ((signed short int) -25)))
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
