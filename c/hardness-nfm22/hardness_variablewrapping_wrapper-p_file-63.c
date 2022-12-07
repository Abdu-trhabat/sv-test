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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 8.3;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 2.25;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 10.3;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 128;
signed long int* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 9.8;
float* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_13 = 1;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 32;
unsigned long int* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -10;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 16;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 25;
signed char* var_1_17_Pointer = &(var_1_17);
signed char var_1_18 = 1;
signed char* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = 0;
signed char* var_1_19_Pointer = &(var_1_19);
signed char var_1_20 = 32;
signed char* var_1_20_Pointer = &(var_1_20);
signed short int var_1_21 = 256;
signed short int* var_1_21_Pointer = &(var_1_21);
signed char var_1_22 = 16;
signed char* var_1_22_Pointer = &(var_1_22);
unsigned char var_1_23 = 0;
unsigned char* var_1_23_Pointer = &(var_1_23);

// Calibration values

// Last'ed variables
signed short int last_1_var_1_21 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch63Wrapper_P
	(*(var_1_13_Pointer)) = (*(var_1_14_Pointer));


	// From: Req5Batch63Wrapper_P
	(*(var_1_21_Pointer)) = last_1_var_1_21;


	// From: Req6Batch63Wrapper_P
	(*(var_1_22_Pointer)) = (*(var_1_16_Pointer));


	// From: Req7Batch63Wrapper_P
	(*(var_1_23_Pointer)) = (*(var_1_6_Pointer));


	// From: Req1Batch63Wrapper_P
	if ((min (1.1f , (*(var_1_2_Pointer)))) > ((*(var_1_3_Pointer)) * (*(var_1_4_Pointer)))) {
		(*(var_1_1_Pointer)) = ((*(var_1_23_Pointer)) && (*(var_1_6_Pointer)));
	}


	// From: Req4Batch63Wrapper_P
	signed char stepLocal_0 = (*(var_1_22_Pointer));
	if (stepLocal_0 != (min ((*(var_1_22_Pointer)) , (*(var_1_21_Pointer))))) {
		(*(var_1_15_Pointer)) = ((min ((10 + (*(var_1_16_Pointer))) , (*(var_1_17_Pointer)))) - ((32 - (*(var_1_18_Pointer))) + (max ((*(var_1_19_Pointer)) , (*(var_1_20_Pointer))))));
	}


	// From: Req2Batch63Wrapper_P
	if ((*(var_1_4_Pointer)) <= ((min ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))) * (*(var_1_8_Pointer)))) {
		(*(var_1_7_Pointer)) = (max ((max (((*(var_1_22_Pointer)) + (*(var_1_15_Pointer))) , (*(var_1_15_Pointer)))) , (abs ((*(var_1_15_Pointer))))));
	} else {
		(*(var_1_7_Pointer)) = (*(var_1_22_Pointer));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
}

int property() {
	return ((((((((min (1.1f , (*(var_1_2_Pointer)))) > ((*(var_1_3_Pointer)) * (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_23_Pointer)) && (*(var_1_6_Pointer))))) : 1) && (((*(var_1_4_Pointer)) <= ((min ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))) * (*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer)) == ((signed long int) (max ((max (((*(var_1_22_Pointer)) + (*(var_1_15_Pointer))) , (*(var_1_15_Pointer)))) , (abs ((*(var_1_15_Pointer)))))))) : ((*(var_1_7_Pointer)) == ((signed long int) (*(var_1_22_Pointer)))))) && ((*(var_1_13_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer))))) && (((*(var_1_22_Pointer)) != (min ((*(var_1_22_Pointer)) , (*(var_1_21_Pointer))))) ? ((*(var_1_15_Pointer)) == ((signed char) ((min ((10 + (*(var_1_16_Pointer))) , (*(var_1_17_Pointer)))) - ((32 - (*(var_1_18_Pointer))) + (max ((*(var_1_19_Pointer)) , (*(var_1_20_Pointer)))))))) : 1)) && ((*(var_1_21_Pointer)) == ((signed short int) last_1_var_1_21))) && ((*(var_1_22_Pointer)) == ((signed char) (*(var_1_16_Pointer))))) && ((*(var_1_23_Pointer)) == ((unsigned char) (*(var_1_6_Pointer))))
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
