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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	signed long int var_1_2;
	float var_1_3;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	unsigned char var_1_7;
	unsigned long int var_1_8;
	unsigned long int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	signed short int var_1_13;
	unsigned long int var_1_14;
	unsigned long int var_1_15;
	unsigned long int var_1_16;
	double var_1_17;
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
	-64,
	10,
	1.8,
	8.54,
	255.8,
	50.4,
	0,
	8,
	256,
	32,
	5,
	2,
	0,
	16,
	256,
	16,
	63.5
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch95Wrapper_SP
	(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_2_Pointer))));


	// From: Req2Batch95Wrapper_SP
	(*(WrapperStruct00_var_1_3_Pointer)) = (((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))) + (min (256.5f , ((*(WrapperStruct00_var_1_6_Pointer)) - 16.125f))));


	// From: Req3Batch95Wrapper_SP
	unsigned long int stepLocal_0 = - (3351680781u - (*(WrapperStruct00_var_1_8_Pointer)));
	if (stepLocal_0 > ((*(WrapperStruct00_var_1_1_Pointer)) & (*(WrapperStruct00_var_1_9_Pointer)))) {
		(*(WrapperStruct00_var_1_7_Pointer)) = ((min ((*(WrapperStruct00_var_1_10_Pointer)) , (abs ((*(WrapperStruct00_var_1_11_Pointer)))))) + (*(WrapperStruct00_var_1_12_Pointer)));
	}


	// From: Req4Batch95Wrapper_SP
	if (((*(WrapperStruct00_var_1_7_Pointer)) / (*(WrapperStruct00_var_1_14_Pointer))) < ((*(WrapperStruct00_var_1_15_Pointer)) >> (*(WrapperStruct00_var_1_16_Pointer)))) {
		(*(WrapperStruct00_var_1_13_Pointer)) = (abs (4 - (*(WrapperStruct00_var_1_12_Pointer))));
	} else {
		if ((*(WrapperStruct00_var_1_9_Pointer)) >= (*(WrapperStruct00_var_1_1_Pointer))) {
			(*(WrapperStruct00_var_1_13_Pointer)) = (max ((256 - (*(WrapperStruct00_var_1_16_Pointer))) , (*(WrapperStruct00_var_1_7_Pointer))));
		} else {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
		}
	}


	// From: Req5Batch95Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483646);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483646);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 4294967295);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 127);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 4294967295);
	assume_abort_if_not(WrapperStruct00.var_1_14 != 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 4294967295);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (abs ((*(WrapperStruct00_var_1_2_Pointer)))))) && ((*(WrapperStruct00_var_1_3_Pointer)) == ((float) (((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))) + (min (256.5f , ((*(WrapperStruct00_var_1_6_Pointer)) - 16.125f))))))) && (((- (3351680781u - (*(WrapperStruct00_var_1_8_Pointer)))) > ((*(WrapperStruct00_var_1_1_Pointer)) & (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) ((min ((*(WrapperStruct00_var_1_10_Pointer)) , (abs ((*(WrapperStruct00_var_1_11_Pointer)))))) + (*(WrapperStruct00_var_1_12_Pointer))))) : 1)) && ((((*(WrapperStruct00_var_1_7_Pointer)) / (*(WrapperStruct00_var_1_14_Pointer))) < ((*(WrapperStruct00_var_1_15_Pointer)) >> (*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) (abs (4 - (*(WrapperStruct00_var_1_12_Pointer)))))) : (((*(WrapperStruct00_var_1_9_Pointer)) >= (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) (max ((256 - (*(WrapperStruct00_var_1_16_Pointer))) , (*(WrapperStruct00_var_1_7_Pointer)))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_12_Pointer))))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((double) (*(WrapperStruct00_var_1_6_Pointer))))
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
