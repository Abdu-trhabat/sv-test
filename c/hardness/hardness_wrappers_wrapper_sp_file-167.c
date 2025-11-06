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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	signed char var_1_6;
	signed char var_1_7;
	signed char var_1_8;
	signed char var_1_9;
	float var_1_10;
	float var_1_11;
	unsigned short int var_1_12;
	unsigned short int var_1_13;
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
	-16,
	100,
	128,
	10,
	10,
	-64,
	50,
	4,
	10,
	-0.875,
	32.46,
	10,
	10
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch167Wrapper_SP
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_3_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer));
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_4_Pointer)) % (*(WrapperStruct00_var_1_5_Pointer));
	if ((*(WrapperStruct00_var_1_2_Pointer)) <= stepLocal_1) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min ((abs ((*(WrapperStruct00_var_1_2_Pointer)))) , ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer)))));
	} else {
		if (stepLocal_0 <= (*(WrapperStruct00_var_1_3_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));
		}
	}


	// From: Req2Batch167Wrapper_SP
	signed short int stepLocal_2 = (*(WrapperStruct00_var_1_1_Pointer));
	if (stepLocal_2 == (*(WrapperStruct00_var_1_5_Pointer))) {
		(*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + (max ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_9_Pointer)))));
	}


	// From: Req3Batch167Wrapper_SP
	if ((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_4_Pointer))) {
		if ((~ 16u) > (max ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_4_Pointer))))) {
			if ((~ ((*(WrapperStruct00_var_1_3_Pointer)) & (*(WrapperStruct00_var_1_2_Pointer)))) <= (*(WrapperStruct00_var_1_5_Pointer))) {
				(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
			} else {
				(*(WrapperStruct00_var_1_10_Pointer)) = 24.575f;
			}
		}
	} else {
		(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
	}


	// From: Req4Batch167Wrapper_SP
	(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 255);
	assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 63);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) <= ((*(WrapperStruct00_var_1_3_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (min ((abs ((*(WrapperStruct00_var_1_2_Pointer)))) , ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))))))) : ((((*(WrapperStruct00_var_1_4_Pointer)) % (*(WrapperStruct00_var_1_5_Pointer))) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_2_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_1_Pointer)) == (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_7_Pointer)) + (max ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_9_Pointer))))))) : 1)) && (((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_4_Pointer))) ? (((~ 16u) > (max ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_4_Pointer))))) ? (((~ ((*(WrapperStruct00_var_1_3_Pointer)) & (*(WrapperStruct00_var_1_2_Pointer)))) <= (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((float) 24.575f))) : 1) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer)))))) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_13_Pointer))))
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
