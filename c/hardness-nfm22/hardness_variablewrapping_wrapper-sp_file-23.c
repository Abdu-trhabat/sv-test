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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned long int var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	float var_1_8;
	float var_1_9;
	unsigned long int var_1_10;
	unsigned long int var_1_11;
	unsigned long int var_1_12;
	unsigned long int var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	0,
	16,
	64,
	25,
	1.2,
	999.7,
	1.4,
	9.75,
	1.75,
	16,
	1277342739,
	1394088949,
	0,
	0,
	0,
	0,
	0
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch23Wrapper_SP
	(*(WrapperStruct00_var_1_1_Pointer)) = (min ((*(WrapperStruct00_var_1_2_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer))));


	// From: Req2Batch23Wrapper_SP
	if (((*(WrapperStruct00_var_1_5_Pointer)) / (*(WrapperStruct00_var_1_6_Pointer))) <= ((*(WrapperStruct00_var_1_7_Pointer)) + ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))))) {
		(*(WrapperStruct00_var_1_4_Pointer)) = (min ((*(WrapperStruct00_var_1_2_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer))));
	}


	// From: Req3Batch23Wrapper_SP
	(*(WrapperStruct00_var_1_10_Pointer)) = (max ((*(WrapperStruct00_var_1_2_Pointer)) , (((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_12_Pointer))) - (*(WrapperStruct00_var_1_13_Pointer)))));


	// From: Req5Batch23Wrapper_SP
	unsigned char stepLocal_0 = (- (*(WrapperStruct00_var_1_5_Pointer))) != 1.9f;
	if (stepLocal_0 || (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_13_Pointer))) < (*(WrapperStruct00_var_1_3_Pointer)))) {
		(*(WrapperStruct00_var_1_18_Pointer)) = (! (*(WrapperStruct00_var_1_19_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
	}


	// From: Req4Batch23Wrapper_SP
	if ((*(WrapperStruct00_var_1_18_Pointer))) {
		if (! (((*(WrapperStruct00_var_1_5_Pointer)) / (*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))))) {
			if ((*(WrapperStruct00_var_1_18_Pointer))) {
				(*(WrapperStruct00_var_1_14_Pointer)) = (! (*(WrapperStruct00_var_1_17_Pointer)));
			}
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967294);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967294);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_6 != 0.0F);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483647);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741824);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 1);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 0);
}



void updateLastVariables() {
}

int property() {
	return (((((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (min ((*(WrapperStruct00_var_1_2_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))))) && ((((*(WrapperStruct00_var_1_5_Pointer)) / (*(WrapperStruct00_var_1_6_Pointer))) <= ((*(WrapperStruct00_var_1_7_Pointer)) + ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))))) ? ((*(WrapperStruct00_var_1_4_Pointer)) == ((unsigned long int) (min ((*(WrapperStruct00_var_1_2_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) (max ((*(WrapperStruct00_var_1_2_Pointer)) , (((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_12_Pointer))) - (*(WrapperStruct00_var_1_13_Pointer)))))))) && ((*(WrapperStruct00_var_1_18_Pointer)) ? ((! (((*(WrapperStruct00_var_1_5_Pointer)) / (*(WrapperStruct00_var_1_6_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))))) ? ((*(WrapperStruct00_var_1_18_Pointer)) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_17_Pointer))))) : 1) : 1) : 1)) && ((((- (*(WrapperStruct00_var_1_5_Pointer))) != 1.9f) || (((*(WrapperStruct00_var_1_4_Pointer)) * (*(WrapperStruct00_var_1_13_Pointer))) < (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_19_Pointer))))) : ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_19_Pointer)))))
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
