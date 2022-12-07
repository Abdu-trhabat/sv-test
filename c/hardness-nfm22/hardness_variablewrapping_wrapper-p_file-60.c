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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch60Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9999.6;
double* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 64.25;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 31.2;
double* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 1;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 2;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 10;
signed long int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 5.8;
float* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 64.8;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 32.902;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 10.5;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 4.4;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 999.375;
float* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 2.5;
double* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 8.6;
float* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
float last_1_var_1_16 = 8.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch60Wrapper_P
	(*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)));


	// From: Req2Batch60Wrapper_P
	if ((- (*(var_1_5_Pointer))) >= (*(var_1_6_Pointer))) {
		if ((*(var_1_6_Pointer)) > (*(var_1_5_Pointer))) {
			if ((*(var_1_3_Pointer)) == (*(var_1_1_Pointer))) {
				(*(var_1_4_Pointer)) = (256 - ((*(var_1_5_Pointer)) + 5));
			} else {
				(*(var_1_4_Pointer)) = (*(var_1_5_Pointer));
			}
		}
	}


	// From: Req3Batch60Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_9_Pointer));
	if ((*(var_1_8_Pointer)) && stepLocal_0) {
		(*(var_1_7_Pointer)) = (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) + ((*(var_1_12_Pointer)) + ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)))));
	}


	// From: Req4Batch60Wrapper_P
	(*(var_1_15_Pointer)) = 500.25;


	// From: Req5Batch60Wrapper_P
	if ((*(var_1_2_Pointer)) > last_1_var_1_16) {
		if ((*(var_1_9_Pointer))) {
			if ((*(var_1_3_Pointer)) <= (min (last_1_var_1_16 , (*(var_1_11_Pointer))))) {
				(*(var_1_16_Pointer)) = ((*(var_1_14_Pointer)) + (*(var_1_11_Pointer)));
			}
		}
	} else {
		(*(var_1_16_Pointer)) = (*(var_1_12_Pointer));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854765600e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -115292.1504606845700e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 1152921.504606845700e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -115292.1504606845700e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 1152921.504606845700e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((*(var_1_1_Pointer)) == ((double) ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))))) && (((- (*(var_1_5_Pointer))) >= (*(var_1_6_Pointer))) ? (((*(var_1_6_Pointer)) > (*(var_1_5_Pointer))) ? (((*(var_1_3_Pointer)) == (*(var_1_1_Pointer))) ? ((*(var_1_4_Pointer)) == ((signed long int) (256 - ((*(var_1_5_Pointer)) + 5)))) : ((*(var_1_4_Pointer)) == ((signed long int) (*(var_1_5_Pointer))))) : 1) : 1)) && (((*(var_1_8_Pointer)) && (*(var_1_9_Pointer))) ? ((*(var_1_7_Pointer)) == ((float) (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) + ((*(var_1_12_Pointer)) + ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))))))) : 1)) && ((*(var_1_15_Pointer)) == ((double) 500.25))) && (((*(var_1_2_Pointer)) > last_1_var_1_16) ? ((*(var_1_9_Pointer)) ? (((*(var_1_3_Pointer)) <= (min (last_1_var_1_16 , (*(var_1_11_Pointer))))) ? ((*(var_1_16_Pointer)) == ((float) ((*(var_1_14_Pointer)) + (*(var_1_11_Pointer))))) : 1) : 1) : ((*(var_1_16_Pointer)) == ((float) (*(var_1_12_Pointer)))))
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
