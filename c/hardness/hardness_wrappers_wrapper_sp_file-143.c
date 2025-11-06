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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned short int var_1_2;
	unsigned char var_1_4;
	signed short int var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned long int var_1_12;
	unsigned char var_1_13;
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
	-8,
	0,
	1,
	100,
	10,
	0,
	4,
	64,
	1,
	0,
	8,
	0
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch143Wrapper_SP
	unsigned long int stepLocal_0 = - last_1_WrapperStruct00_var_1_12;
	if (stepLocal_0 <= last_1_WrapperStruct00_var_1_12) {
		if (! (*(WrapperStruct00_var_1_4_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (abs (1 - (*(WrapperStruct00_var_1_5_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
	}


	// From: Req2Batch143Wrapper_SP
	signed short int stepLocal_2 = (*(WrapperStruct00_var_1_1_Pointer));
	unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
	if (stepLocal_1 && (! (*(WrapperStruct00_var_1_7_Pointer)))) {
		(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	} else {
		if (stepLocal_2 != (*(WrapperStruct00_var_1_2_Pointer))) {
			(*(WrapperStruct00_var_1_6_Pointer)) = (min ((*(WrapperStruct00_var_1_8_Pointer)) , (((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_11_Pointer)))));
		} else {
			(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		}
	}


	// From: Req3Batch143Wrapper_SP
	unsigned char stepLocal_4 = (*(WrapperStruct00_var_1_13_Pointer));
	signed short int stepLocal_3 = (*(WrapperStruct00_var_1_5_Pointer));
	if ((*(WrapperStruct00_var_1_4_Pointer))) {
		if ((*(WrapperStruct00_var_1_7_Pointer)) && stepLocal_4) {
			(*(WrapperStruct00_var_1_12_Pointer)) = (abs (abs ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_2_Pointer)))));
		}
	} else {
		if (stepLocal_3 > (*(WrapperStruct00_var_1_9_Pointer))) {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
		} else {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 63);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
}

int property(void) {
	return ((((- last_1_WrapperStruct00_var_1_12) <= last_1_WrapperStruct00_var_1_12) ? ((! (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (abs (1 - (*(WrapperStruct00_var_1_5_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_5_Pointer))))) && (((*(WrapperStruct00_var_1_4_Pointer)) && (! (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_8_Pointer)))) : (((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) (min ((*(WrapperStruct00_var_1_8_Pointer)) , (((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_11_Pointer))))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer))))))) && ((*(WrapperStruct00_var_1_4_Pointer)) ? (((*(WrapperStruct00_var_1_7_Pointer)) && (*(WrapperStruct00_var_1_13_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (abs (abs ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_2_Pointer))))))) : 1) : (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_10_Pointer))))))
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
