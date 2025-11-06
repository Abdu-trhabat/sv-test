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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 9999999.4;
double* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 2.125;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 0.29;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = -0.5;
float* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 1000.7;
double* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = -10;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 2;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 10;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = -5;
signed char* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = 1;
signed long int* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch144Wrapper_P
	if ((abs (last_1_var_1_16)) <= ((*(var_1_14_Pointer)) / (max ((*(var_1_17_Pointer)) , -1)))) {
		if ((*(var_1_5_Pointer))) {
			(*(var_1_16_Pointer)) = (*(var_1_15_Pointer));
		} else {
			(*(var_1_16_Pointer)) = (*(var_1_14_Pointer));
		}
	} else {
		(*(var_1_16_Pointer)) = -8;
	}


	// From: Req2Batch144Wrapper_P
	signed long int stepLocal_1 = -256;
	if (((*(var_1_16_Pointer)) / 200) <= stepLocal_1) {
		if ((min (((*(var_1_9_Pointer)) * (*(var_1_10_Pointer))) , (*(var_1_11_Pointer)))) != 16.5f) {
			(*(var_1_8_Pointer)) = 4.4;
		}
	} else {
		(*(var_1_8_Pointer)) = (*(var_1_12_Pointer));
	}


	// From: Req3Batch144Wrapper_P
	if ((*(var_1_9_Pointer)) <= (*(var_1_8_Pointer))) {
		(*(var_1_13_Pointer)) = ((*(var_1_14_Pointer)) + -50);
	} else {
		if ((*(var_1_4_Pointer))) {
			(*(var_1_13_Pointer)) = (25 - (*(var_1_15_Pointer)));
		}
	}


	// From: Req1Batch144Wrapper_P
	signed char stepLocal_0 = (*(var_1_13_Pointer));
	if (stepLocal_0 < (*(var_1_16_Pointer))) {
		(*(var_1_1_Pointer)) = (((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))) || ((*(var_1_6_Pointer)) || (*(var_1_7_Pointer))));
	} else {
		(*(var_1_1_Pointer)) = (! (*(var_1_7_Pointer)));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	assume_abort_if_not(var_1_17 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return (((((*(var_1_13_Pointer)) < (*(var_1_16_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))) || ((*(var_1_6_Pointer)) || (*(var_1_7_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (! (*(var_1_7_Pointer)))))) && ((((*(var_1_16_Pointer)) / 200) <= -256) ? (((min (((*(var_1_9_Pointer)) * (*(var_1_10_Pointer))) , (*(var_1_11_Pointer)))) != 16.5f) ? ((*(var_1_8_Pointer)) == ((double) 4.4)) : 1) : ((*(var_1_8_Pointer)) == ((double) (*(var_1_12_Pointer)))))) && (((*(var_1_9_Pointer)) <= (*(var_1_8_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed char) ((*(var_1_14_Pointer)) + -50))) : ((*(var_1_4_Pointer)) ? ((*(var_1_13_Pointer)) == ((signed char) (25 - (*(var_1_15_Pointer))))) : 1))) && (((abs (last_1_var_1_16)) <= ((*(var_1_14_Pointer)) / (max ((*(var_1_17_Pointer)) , -1)))) ? ((*(var_1_5_Pointer)) ? ((*(var_1_16_Pointer)) == ((signed char) (*(var_1_15_Pointer)))) : ((*(var_1_16_Pointer)) == ((signed char) (*(var_1_14_Pointer))))) : ((*(var_1_16_Pointer)) == ((signed char) -8)))
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
