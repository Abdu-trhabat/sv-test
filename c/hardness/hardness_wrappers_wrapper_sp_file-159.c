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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_2;
	signed long int var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned short int var_1_7;
	float var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	signed long int var_1_12;
	signed long int var_1_13;
	unsigned short int var_1_14;
	signed short int var_1_15;
	signed long int var_1_16;
	signed short int var_1_17;
	float var_1_18;
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
	1,
	0,
	-16,
	0,
	0,
	0,
	64,
	256.305,
	25.25,
	128.8,
	50.825,
	32,
	-64,
	5,
	-100,
	0,
	10,
	128.75
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed short int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
float* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch159Wrapper_SP
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		if (64 < stepLocal_0) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (! ((*(WrapperStruct00_var_1_4_Pointer)) && (*(WrapperStruct00_var_1_5_Pointer))));
		}
	} else {
		if ((*(WrapperStruct00_var_1_5_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
		}
	}


	// From: Req2Batch159Wrapper_SP
	if ((((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))) / (*(WrapperStruct00_var_1_10_Pointer))) < (*(WrapperStruct00_var_1_11_Pointer))) {
		if ((min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_12_Pointer)))) < (*(WrapperStruct00_var_1_13_Pointer))) {
			if ((*(WrapperStruct00_var_1_4_Pointer))) {
				(*(WrapperStruct00_var_1_7_Pointer)) = (min ((*(WrapperStruct00_var_1_14_Pointer)) , 1));
			}
		}
	}


	// From: Req3Batch159Wrapper_SP
	signed long int stepLocal_1 = ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))) * ((*(WrapperStruct00_var_1_16_Pointer)) >> (*(WrapperStruct00_var_1_17_Pointer)));
	if (-128 == stepLocal_1) {
		if ((*(WrapperStruct00_var_1_9_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer)))) {
			if ((*(WrapperStruct00_var_1_18_Pointer)) < 4.8f) {
				(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
			} else {
				(*(WrapperStruct00_var_1_15_Pointer)) = -32;
			}
		} else {
			(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_10 != 0.0F);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 65534);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483647);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 30);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((*(WrapperStruct00_var_1_2_Pointer)) ? ((64 < (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! ((*(WrapperStruct00_var_1_4_Pointer)) && (*(WrapperStruct00_var_1_5_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_5_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_4_Pointer)))))) && (((((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))) / (*(WrapperStruct00_var_1_10_Pointer))) < (*(WrapperStruct00_var_1_11_Pointer))) ? (((min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_12_Pointer)))) < (*(WrapperStruct00_var_1_13_Pointer))) ? ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) (min ((*(WrapperStruct00_var_1_14_Pointer)) , 1)))) : 1) : 1) : 1)) && ((-128 == (((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))) * ((*(WrapperStruct00_var_1_16_Pointer)) >> (*(WrapperStruct00_var_1_17_Pointer))))) ? (((*(WrapperStruct00_var_1_9_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_18_Pointer)))) ? (((*(WrapperStruct00_var_1_18_Pointer)) < 4.8f) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_17_Pointer)))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) -32))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_17_Pointer))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_17_Pointer)))))
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
