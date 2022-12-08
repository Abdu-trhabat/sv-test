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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
signed short int var_1_24 = -32;
unsigned char var_1_25 = 1;
float var_1_26 = 500.65;
signed long int var_1_27 = -8;
float var_1_28 = 255.5;
float var_1_29 = 7.5;
float var_1_30 = 9.8;
unsigned char var_1_31 = 4;
signed long int var_1_32 = 1;
unsigned char var_1_33 = 2;
unsigned short int var_1_34 = 1;
unsigned long int var_1_35 = 10;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 10;
unsigned short int var_1_41 = 128;
unsigned short int var_1_42 = 40597;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_6 = 10;
unsigned char last_1_var_1_8 = 1;
signed short int last_1_var_1_13 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch42Filler_PR_CN
	signed long int stepLocal_6 = last_1_var_1_1;
	unsigned char stepLocal_5 = (min (last_1_var_1_1 , 8)) <= var_1_5;
	if (stepLocal_5 || last_1_var_1_8) {
		if (stepLocal_6 <= last_1_var_1_6) {
			var_1_14 = (var_1_15 + var_1_16);
		} else {
			var_1_14 = var_1_16;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: CodeObject3
	if ((- var_1_28) < (max (var_1_26 , var_1_29))) {
		var_1_30 = var_1_29;
	}


	// From: CodeObject6
	if (var_1_25) {
		var_1_35 = var_1_33;
	}


	// From: CodeObject7
	if (var_1_25) {
		var_1_36 = (var_1_37 - var_1_38);
	} else {
		var_1_36 = (var_1_37 - (abs (var_1_39)));
	}


	// From: CodeObject9
	if (var_1_33 <= (~ var_1_34)) {
		if ((abs (var_1_39)) >= var_1_38) {
			var_1_41 = (abs (var_1_42 - var_1_38));
		}
	} else {
		var_1_41 = var_1_36;
	}


	// From: Req7Batch42Filler_PR_CN
	if (var_1_14 <= var_1_15) {
		var_1_19 = (var_1_12 || var_1_20);
	}


	// From: Req2Batch42Filler_PR_CN
	if (var_1_5 >= -2) {
		var_1_6 = (var_1_7 - 100);
	}


	// From: CodeObject4
	if ((min ((abs (var_1_27)) , var_1_24)) <= var_1_32) {
		var_1_31 = var_1_33;
	}


	// From: CodeObject8
	if ((- var_1_36) != var_1_34) {
		var_1_40 = var_1_39;
	}


	// From: Req4Batch42Filler_PR_CN
	unsigned char stepLocal_4 = var_1_6;
	signed long int stepLocal_3 = var_1_6 / var_1_7;
	if (last_1_var_1_13 >= stepLocal_3) {
		if (stepLocal_4 != (max ((max (var_1_6 , last_1_var_1_13)) , var_1_5))) {
			var_1_13 = var_1_7;
		} else {
			var_1_13 = last_1_var_1_13;
		}
	} else {
		var_1_13 = var_1_6;
	}


	// From: CodeObject2
	if (((var_1_24 + 25) % var_1_27) < 2) {
		var_1_26 = ((abs (var_1_28)) + var_1_29);
	}


	// From: Req6Batch42Filler_PR_CN
	unsigned char stepLocal_7 = var_1_6;
	if (stepLocal_7 > var_1_6) {
		var_1_17 = (max (25 , (var_1_13 + var_1_6)));
	}


	// From: CodeObject5
	if (var_1_31 < (abs (var_1_24))) {
		var_1_34 = (max ((abs (var_1_31)) , var_1_33));
	}


	// From: Req1Batch42Filler_PR_CN
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_19) {
		var_1_1 = (max (var_1_6 , var_1_6));
	} else {
		if ((abs (var_1_5)) >= stepLocal_0) {
			var_1_1 = var_1_5;
		}
	}


	// From: CodeObject1
	if (var_1_22 || var_1_23) {
		var_1_21 = ((var_1_24 > -4) || var_1_25);
	}


	// From: Req3Batch42Filler_PR_CN
	unsigned char stepLocal_2 = var_1_19 && var_1_19;
	unsigned char stepLocal_1 = var_1_7;
	if ((49.5f <= var_1_14) && stepLocal_2) {
		if (var_1_13 < stepLocal_1) {
			var_1_8 = (var_1_19 || var_1_11);
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_12;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 32767);
	assume_abort_if_not(var_1_42 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return ((((((var_1_19 ? (var_1_1 == ((signed short int) (max (var_1_6 , var_1_6)))) : (((abs (var_1_5)) >= var_1_6) ? (var_1_1 == ((signed short int) var_1_5)) : 1)) && ((var_1_5 >= -2) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_14) && (var_1_19 && var_1_19)) ? ((var_1_13 < var_1_7) ? (var_1_8 == ((unsigned char) (var_1_19 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((last_1_var_1_13 >= (var_1_6 / var_1_7)) ? ((var_1_6 != (max ((max (var_1_6 , last_1_var_1_13)) , var_1_5))) ? (var_1_13 == ((signed short int) var_1_7)) : (var_1_13 == ((signed short int) last_1_var_1_13))) : (var_1_13 == ((signed short int) var_1_6)))) && ((((min (last_1_var_1_1 , 8)) <= var_1_5) || last_1_var_1_8) ? ((last_1_var_1_1 <= last_1_var_1_6) ? (var_1_14 == ((float) (var_1_15 + var_1_16))) : (var_1_14 == ((float) var_1_16))) : (var_1_14 == ((float) var_1_16)))) && ((var_1_6 > var_1_6) ? (var_1_17 == ((unsigned short int) (max (25 , (var_1_13 + var_1_6))))) : 1)) && ((var_1_14 <= var_1_15) ? (var_1_19 == ((unsigned char) (var_1_12 || var_1_20))) : 1)
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
