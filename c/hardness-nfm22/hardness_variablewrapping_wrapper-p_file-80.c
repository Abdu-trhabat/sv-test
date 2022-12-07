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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 256;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_8 = 128;
signed long int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = -1;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 1;
signed short int* var_1_10_Pointer = &(var_1_10);
signed char var_1_12 = 0;
signed char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 2;
signed char* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 1.8;
double* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 25.8;
double* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 5.5;
double* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 4.3;
double* var_1_18_Pointer = &(var_1_18);
double var_1_19 = 500.7;
double* var_1_19_Pointer = &(var_1_19);
double var_1_20 = 127.5;
double* var_1_20_Pointer = &(var_1_20);
double var_1_21 = 1.5;
double* var_1_21_Pointer = &(var_1_21);
double var_1_22 = 99.84;
double* var_1_22_Pointer = &(var_1_22);
unsigned short int var_1_23 = 4;
unsigned short int* var_1_23_Pointer = &(var_1_23);
signed char var_1_24 = -64;
signed char* var_1_24_Pointer = &(var_1_24);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch80Wrapper_P
	(*(var_1_22_Pointer)) = (*(var_1_19_Pointer));


	// From: Req5Batch80Wrapper_P
	(*(var_1_23_Pointer)) = (*(var_1_10_Pointer));


	// From: Req6Batch80Wrapper_P
	(*(var_1_24_Pointer)) = (*(var_1_14_Pointer));


	// From: Req2Batch80Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_23_Pointer)) <= (*(var_1_24_Pointer));
	if ((*(var_1_13_Pointer)) || stepLocal_0) {
		(*(var_1_12_Pointer)) = (abs (1 - (*(var_1_14_Pointer))));
	} else {
		(*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
	}


	// From: Req3Batch80Wrapper_P
	signed short int stepLocal_1 = (*(var_1_10_Pointer));
	if (stepLocal_1 <= ((*(var_1_23_Pointer)) / (*(var_1_8_Pointer)))) {
		(*(var_1_15_Pointer)) = (min ((max ((min ((*(var_1_16_Pointer)) , (*(var_1_17_Pointer)))) , (*(var_1_18_Pointer)))) , (max (3.6 , (*(var_1_19_Pointer))))));
	} else {
		(*(var_1_15_Pointer)) = ((*(var_1_20_Pointer)) - (*(var_1_21_Pointer)));
	}


	// From: Req1Batch80Wrapper_P
	if ((max (((*(var_1_23_Pointer)) - (*(var_1_23_Pointer))) , (*(var_1_12_Pointer)))) <= (min (((*(var_1_23_Pointer)) - (*(var_1_23_Pointer))) , ((*(var_1_24_Pointer)) % (*(var_1_8_Pointer)))))) {
		(*(var_1_1_Pointer)) = (min (((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))) , (*(var_1_12_Pointer))));
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((((max (((*(var_1_23_Pointer)) - (*(var_1_23_Pointer))) , (*(var_1_12_Pointer)))) <= (min (((*(var_1_23_Pointer)) - (*(var_1_23_Pointer))) , ((*(var_1_24_Pointer)) % (*(var_1_8_Pointer)))))) ? ((*(var_1_1_Pointer)) == ((signed short int) (min (((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))) , (*(var_1_12_Pointer)))))) : 1) && (((*(var_1_13_Pointer)) || ((*(var_1_23_Pointer)) <= (*(var_1_24_Pointer)))) ? ((*(var_1_12_Pointer)) == ((signed char) (abs (1 - (*(var_1_14_Pointer)))))) : ((*(var_1_12_Pointer)) == ((signed char) (*(var_1_14_Pointer)))))) && (((*(var_1_10_Pointer)) <= ((*(var_1_23_Pointer)) / (*(var_1_8_Pointer)))) ? ((*(var_1_15_Pointer)) == ((double) (min ((max ((min ((*(var_1_16_Pointer)) , (*(var_1_17_Pointer)))) , (*(var_1_18_Pointer)))) , (max (3.6 , (*(var_1_19_Pointer)))))))) : ((*(var_1_15_Pointer)) == ((double) ((*(var_1_20_Pointer)) - (*(var_1_21_Pointer))))))) && ((*(var_1_22_Pointer)) == ((double) (*(var_1_19_Pointer))))) && ((*(var_1_23_Pointer)) == ((unsigned short int) (*(var_1_10_Pointer))))) && ((*(var_1_24_Pointer)) == ((signed char) (*(var_1_14_Pointer))))
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
