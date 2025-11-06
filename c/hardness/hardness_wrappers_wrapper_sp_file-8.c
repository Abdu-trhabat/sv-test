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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	signed long int var_1_8;
	signed long int var_1_9;
	signed long int var_1_10;
	signed long int var_1_11;
	double var_1_12;
	double var_1_13;
	double var_1_14;
	double var_1_15;
	double var_1_16;
	double var_1_17;
	double var_1_18;
	signed short int var_1_19;
	signed short int var_1_20;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	0,
	16,
	4,
	0,
	0,
	0,
	0,
	64,
	-1,
	32,
	128,
	2.8,
	64.5,
	199.15,
	25.2,
	0.0,
	3.5,
	0.5,
	500,
	1
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
signed short int* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch8Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) >= (8u * (*(WrapperStruct00_var_1_3_Pointer)))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (! ((*(WrapperStruct00_var_1_4_Pointer)) || ((*(WrapperStruct00_var_1_5_Pointer)) || (*(WrapperStruct00_var_1_6_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	}


	// From: Req2Batch8Wrapper_SP
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_10_Pointer));
	unsigned long int stepLocal_0 = 1u;
	if ((((*(WrapperStruct00_var_1_3_Pointer)) * (*(WrapperStruct00_var_1_2_Pointer))) * ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)))) >= stepLocal_0) {
		if ((*(WrapperStruct00_var_1_3_Pointer)) <= stepLocal_1) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = 8;
		}
	} else {
		(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
	}


	// From: Req3Batch8Wrapper_SP
	if ((~ (min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer))))) <= ((*(WrapperStruct00_var_1_10_Pointer)) % 1u)) {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) + ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_17_Pointer))) - (*(WrapperStruct00_var_1_18_Pointer)));
	}


	// From: Req4Batch8Wrapper_SP
	(*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_20_Pointer));
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483646);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_17 >= 0.0F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) >= (8u * (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! ((*(WrapperStruct00_var_1_4_Pointer)) || ((*(WrapperStruct00_var_1_5_Pointer)) || (*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer))))) && (((((*(WrapperStruct00_var_1_3_Pointer)) * (*(WrapperStruct00_var_1_2_Pointer))) * ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)))) >= 1u) ? (((*(WrapperStruct00_var_1_3_Pointer)) <= (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) 8))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_11_Pointer)))))) && (((~ (min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer))))) <= ((*(WrapperStruct00_var_1_10_Pointer)) % 1u)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) ((*(WrapperStruct00_var_1_13_Pointer)) + ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) (((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_17_Pointer))) - (*(WrapperStruct00_var_1_18_Pointer))))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_20_Pointer))))
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
