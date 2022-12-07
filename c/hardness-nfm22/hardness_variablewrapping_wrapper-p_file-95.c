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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
signed long int* var_1_1_Pointer = &(var_1_1);
float var_1_3 = 1.8;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 8.54;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 255.8;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 50.4;
float* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned long int var_1_8 = 8;
unsigned long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_10 = 32;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 5;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 2;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 0;
signed short int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 16;
unsigned long int* var_1_14_Pointer = &(var_1_14);
signed char var_1_16 = -1;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = -16;
signed char* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch95Wrapper_P
	(*(var_1_1_Pointer)) = (abs (last_1_var_1_7));


	// From: Req2Batch95Wrapper_P
	(*(var_1_3_Pointer)) = (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) + (min (256.5f , ((*(var_1_6_Pointer)) - 16.125f))));


	// From: Req5Batch95Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_17_Pointer));


	// From: Req3Batch95Wrapper_P
	signed long int stepLocal_0 = (*(var_1_16_Pointer)) & (*(var_1_1_Pointer));
	if ((- (3351680781u - (*(var_1_8_Pointer)))) > stepLocal_0) {
		(*(var_1_7_Pointer)) = ((min ((*(var_1_10_Pointer)) , (abs ((*(var_1_11_Pointer)))))) + (*(var_1_12_Pointer)));
	}


	// From: Req4Batch95Wrapper_P
	if (((*(var_1_16_Pointer)) / (*(var_1_14_Pointer))) < ((*(var_1_7_Pointer)) >> (*(var_1_7_Pointer)))) {
		(*(var_1_13_Pointer)) = (abs (4 - (*(var_1_11_Pointer))));
	} else {
		if ((*(var_1_16_Pointer)) >= (*(var_1_1_Pointer))) {
			(*(var_1_13_Pointer)) = (-5 + ((*(var_1_12_Pointer)) - (*(var_1_11_Pointer))));
		} else {
			(*(var_1_13_Pointer)) = 256;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	assume_abort_if_not(var_1_14 != 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
}

int property() {
	return (((((*(var_1_1_Pointer)) == ((signed long int) (abs (last_1_var_1_7)))) && ((*(var_1_3_Pointer)) == ((float) (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) + (min (256.5f , ((*(var_1_6_Pointer)) - 16.125f))))))) && (((- (3351680781u - (*(var_1_8_Pointer)))) > ((*(var_1_16_Pointer)) & (*(var_1_1_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned char) ((min ((*(var_1_10_Pointer)) , (abs ((*(var_1_11_Pointer)))))) + (*(var_1_12_Pointer))))) : 1)) && ((((*(var_1_16_Pointer)) / (*(var_1_14_Pointer))) < ((*(var_1_7_Pointer)) >> (*(var_1_7_Pointer)))) ? ((*(var_1_13_Pointer)) == ((signed short int) (abs (4 - (*(var_1_11_Pointer)))))) : (((*(var_1_16_Pointer)) >= (*(var_1_1_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed short int) (-5 + ((*(var_1_12_Pointer)) - (*(var_1_11_Pointer)))))) : ((*(var_1_13_Pointer)) == ((signed short int) 256))))) && ((*(var_1_16_Pointer)) == ((signed char) (*(var_1_17_Pointer))))
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
