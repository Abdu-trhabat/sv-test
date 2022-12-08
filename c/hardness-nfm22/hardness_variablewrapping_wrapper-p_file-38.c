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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 0;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_2 = 56507;
unsigned short int* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 52902;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 8;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 16;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 1771558822;
unsigned long int* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 7.25;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 31.2;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 32.71;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 0.4;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 7.75;
double* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 32;
unsigned short int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 20114;
unsigned short int* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 32;
unsigned short int* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 16773;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 25;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 0;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 1;
unsigned char* var_1_19_Pointer = &(var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch38Wrapper_P
	(*(var_1_1_Pointer)) = ((max ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))) - (*(var_1_4_Pointer)));


	// From: Req2Batch38Wrapper_P
	unsigned short int stepLocal_0 = (*(var_1_2_Pointer));
	if ((*(var_1_4_Pointer)) > stepLocal_0) {
		(*(var_1_5_Pointer)) = ((((*(var_1_6_Pointer)) - (*(var_1_3_Pointer))) + 2144048120u) - (*(var_1_2_Pointer)));
	}


	// From: Req3Batch38Wrapper_P
	(*(var_1_7_Pointer)) = ((*(var_1_8_Pointer)) + ((*(var_1_9_Pointer)) + ((*(var_1_10_Pointer)) + (*(var_1_11_Pointer)))));


	// From: Req4Batch38Wrapper_P
	if (! (*(var_1_13_Pointer))) {
		(*(var_1_12_Pointer)) = ((*(var_1_3_Pointer)) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))));
	} else {
		if ((*(var_1_13_Pointer))) {
			(*(var_1_12_Pointer)) = ((27636 + (*(var_1_16_Pointer))) - (max ((16853 - 10) , (*(var_1_14_Pointer)))));
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_3_Pointer));
		}
	}


	// From: Req5Batch38Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_19_Pointer));
	if (((*(var_1_13_Pointer)) && (*(var_1_18_Pointer))) && stepLocal_1) {
		(*(var_1_17_Pointer)) = ((*(var_1_15_Pointer)) + (*(var_1_14_Pointer)));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65534);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 1610612735);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -230584.3009213691390e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -115292.1504606845700e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 1152921.504606845700e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -115292.1504606845700e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 1152921.504606845700e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16384);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
}



void updateLastVariables() {
}

int property() {
	return (((((*(var_1_1_Pointer)) == ((unsigned short int) ((max ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))) - (*(var_1_4_Pointer))))) && (((*(var_1_4_Pointer)) > (*(var_1_2_Pointer))) ? ((*(var_1_5_Pointer)) == ((unsigned long int) ((((*(var_1_6_Pointer)) - (*(var_1_3_Pointer))) + 2144048120u) - (*(var_1_2_Pointer))))) : 1)) && ((*(var_1_7_Pointer)) == ((double) ((*(var_1_8_Pointer)) + ((*(var_1_9_Pointer)) + ((*(var_1_10_Pointer)) + (*(var_1_11_Pointer)))))))) && ((! (*(var_1_13_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned short int) ((*(var_1_3_Pointer)) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer)))))) : ((*(var_1_13_Pointer)) ? ((*(var_1_12_Pointer)) == ((unsigned short int) ((27636 + (*(var_1_16_Pointer))) - (max ((16853 - 10) , (*(var_1_14_Pointer))))))) : ((*(var_1_12_Pointer)) == ((unsigned short int) (*(var_1_3_Pointer))))))) && ((((*(var_1_13_Pointer)) && (*(var_1_18_Pointer))) && (*(var_1_19_Pointer))) ? ((*(var_1_17_Pointer)) == ((unsigned short int) ((*(var_1_15_Pointer)) + (*(var_1_14_Pointer))))) : 1)
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
