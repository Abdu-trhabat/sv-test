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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
signed char* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 64;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 16;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 8;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = -8;
signed char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 5;
signed char* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 2;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 8;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 64;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 8.5;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 999999999999.6;
double* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 10;
signed long int* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -1;
signed char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 16;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 64;
unsigned char* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch41Wrapper_P
	unsigned long int stepLocal_0 = ((*(var_1_2_Pointer)) & 0u) * (*(var_1_3_Pointer));
	if (stepLocal_0 > (*(var_1_4_Pointer))) {
		if ((*(var_1_5_Pointer))) {
			(*(var_1_1_Pointer)) = ((16 + (*(var_1_6_Pointer))) + (*(var_1_7_Pointer)));
		} else {
			(*(var_1_1_Pointer)) = (abs ((*(var_1_6_Pointer))));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req2Batch41Wrapper_P
	if ((*(var_1_5_Pointer))) {
		(*(var_1_8_Pointer)) = ((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)));
	} else {
		if (((*(var_1_10_Pointer)) > (*(var_1_4_Pointer))) || (*(var_1_11_Pointer))) {
			(*(var_1_8_Pointer)) = (*(var_1_9_Pointer));
		} else {
			(*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
		}
	}


	// From: Req3Batch41Wrapper_P
	(*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) - 8.3);


	// From: Req4Batch41Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_13_Pointer)) >= (*(var_1_12_Pointer));
	if ((*(var_1_5_Pointer)) && stepLocal_1) {
		(*(var_1_14_Pointer)) = (*(var_1_10_Pointer));
	} else {
		(*(var_1_14_Pointer)) = (*(var_1_15_Pointer));
	}


	// From: Req5Batch41Wrapper_P
	if ((*(var_1_5_Pointer)) && ((*(var_1_14_Pointer)) <= (*(var_1_1_Pointer)))) {
		(*(var_1_16_Pointer)) = (*(var_1_17_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((*(var_1_2_Pointer)) & 0u) * (*(var_1_3_Pointer))) > (*(var_1_4_Pointer))) ? ((*(var_1_5_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed char) ((16 + (*(var_1_6_Pointer))) + (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed char) (abs ((*(var_1_6_Pointer))))))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_6_Pointer))))) && ((*(var_1_5_Pointer)) ? ((*(var_1_8_Pointer)) == ((unsigned short int) ((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))))) : ((((*(var_1_10_Pointer)) > (*(var_1_4_Pointer))) || (*(var_1_11_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned short int) (*(var_1_9_Pointer)))) : ((*(var_1_8_Pointer)) == ((unsigned short int) (*(var_1_10_Pointer))))))) && ((*(var_1_12_Pointer)) == ((double) ((*(var_1_13_Pointer)) - 8.3)))) && (((*(var_1_5_Pointer)) && ((*(var_1_13_Pointer)) >= (*(var_1_12_Pointer)))) ? ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_10_Pointer)))) : ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_15_Pointer)))))) && (((*(var_1_5_Pointer)) && ((*(var_1_14_Pointer)) <= (*(var_1_1_Pointer)))) ? ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))) : 1)
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
