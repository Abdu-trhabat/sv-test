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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Wrapper_P.c", 13, "reach_error"); }
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
signed long int var_1_1 = 4;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 5;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 100000;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 0;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 100;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 1;
unsigned short int* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 255.75;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 4.35;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 2.75;
double* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 5;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 8;
signed short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 64;
unsigned char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch123Wrapper_P
	signed long int stepLocal_1 = (*(var_1_4_Pointer));
	unsigned char stepLocal_0 = (*(var_1_3_Pointer));
	if ((*(var_1_2_Pointer)) || stepLocal_0) {
		(*(var_1_1_Pointer)) = ((256 + (*(var_1_4_Pointer))) - (min ((*(var_1_5_Pointer)) , (*(var_1_6_Pointer)))));
	} else {
		if (stepLocal_1 <= (*(var_1_6_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
		}
	}


	// From: Req2Batch123Wrapper_P
	unsigned char stepLocal_3 = (*(var_1_2_Pointer));
	signed long int stepLocal_2 = (*(var_1_4_Pointer));
	if ((*(var_1_3_Pointer))) {
		if ((*(var_1_1_Pointer)) >= stepLocal_2) {
			if ((((*(var_1_5_Pointer)) + (*(var_1_1_Pointer))) < ((*(var_1_6_Pointer)) * (*(var_1_4_Pointer)))) && stepLocal_3) {
				(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
			} else {
				(*(var_1_7_Pointer)) = 5;
			}
		} else {
			(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
		}
	}


	// From: Req3Batch123Wrapper_P
	(*(var_1_9_Pointer)) = (max ((*(var_1_10_Pointer)) , (*(var_1_11_Pointer))));


	// From: Req4Batch123Wrapper_P
	unsigned char stepLocal_5 = (*(var_1_3_Pointer));
	signed long int stepLocal_4 = (*(var_1_5_Pointer));
	if (((*(var_1_4_Pointer)) * ((*(var_1_7_Pointer)) / (*(var_1_13_Pointer)))) >= stepLocal_4) {
		if (stepLocal_5 && ((*(var_1_9_Pointer)) < (*(var_1_10_Pointer)))) {
			(*(var_1_12_Pointer)) = 5;
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
		}
	} else {
		(*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32768);
	assume_abort_if_not(var_1_13 <= 32767);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_2_Pointer)) || (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) ((256 + (*(var_1_4_Pointer))) - (min ((*(var_1_5_Pointer)) , (*(var_1_6_Pointer))))))) : (((*(var_1_4_Pointer)) <= (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_6_Pointer)))) : 1)) && ((*(var_1_3_Pointer)) ? (((*(var_1_1_Pointer)) >= (*(var_1_4_Pointer))) ? (((((*(var_1_5_Pointer)) + (*(var_1_1_Pointer))) < ((*(var_1_6_Pointer)) * (*(var_1_4_Pointer)))) && (*(var_1_2_Pointer))) ? ((*(var_1_7_Pointer)) == ((unsigned short int) (*(var_1_8_Pointer)))) : ((*(var_1_7_Pointer)) == ((unsigned short int) 5))) : ((*(var_1_7_Pointer)) == ((unsigned short int) (*(var_1_8_Pointer))))) : 1)) && ((*(var_1_9_Pointer)) == ((double) (max ((*(var_1_10_Pointer)) , (*(var_1_11_Pointer))))))) && ((((*(var_1_4_Pointer)) * ((*(var_1_7_Pointer)) / (*(var_1_13_Pointer)))) >= (*(var_1_5_Pointer))) ? (((*(var_1_3_Pointer)) && ((*(var_1_9_Pointer)) < (*(var_1_10_Pointer)))) ? ((*(var_1_12_Pointer)) == ((unsigned char) 5)) : ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_14_Pointer))))) : ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_14_Pointer)))))
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
