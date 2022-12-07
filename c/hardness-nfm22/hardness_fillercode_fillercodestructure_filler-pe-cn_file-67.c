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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9.75;
unsigned char var_1_3 = 1;
signed long int var_1_4 = 25;
unsigned char var_1_6 = 1;
float var_1_7 = 7.5;
signed long int var_1_8 = -1000;
float var_1_9 = 9.25;
float var_1_10 = 64.5;
float var_1_11 = 16.25;
signed char var_1_12 = 2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
float var_1_15 = 0.6;
signed char var_1_16 = 32;
unsigned short int var_1_17 = 2;
unsigned short int var_1_19 = 63241;
unsigned short int var_1_20 = 58697;
unsigned short int var_1_21 = 25516;
unsigned long int var_1_22 = 3301682525;
double var_1_23 = 128.9;
signed short int var_1_24 = -32;
signed short int var_1_25 = 2;
signed short int var_1_26 = -256;
double var_1_27 = 7.75;
double var_1_28 = 200.6;
unsigned long int var_1_29 = 100000;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 4154314939;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
float var_1_35 = 49.875;
signed short int var_1_36 = -32;
signed short int var_1_37 = 64;
unsigned long int var_1_38 = 128;
double var_1_39 = 50.925;
double var_1_40 = 128.6;
unsigned long int var_1_41 = 50;
unsigned long int var_1_42 = 4282912011;
unsigned long int var_1_43 = 32;
signed long int var_1_44 = 5;
signed short int var_1_45 = 500;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 9.75;
unsigned char last_1_var_1_3 = 1;
float last_1_var_1_7 = 7.5;
signed char last_1_var_1_12 = 2;
float last_1_var_1_15 = 0.6;
unsigned short int last_1_var_1_17 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch67Filler_PE_CN
	signed long int stepLocal_2 = (max (var_1_13 , last_1_var_1_17)) | last_1_var_1_12;
	if (last_1_var_1_7 > (var_1_11 + last_1_var_1_15)) {
		if (var_1_14 < stepLocal_2) {
			if (last_1_var_1_3) {
				var_1_16 = -2;
			}
		} else {
			var_1_16 = var_1_13;
		}
	}


	// From: Req7Batch67Filler_PE_CN
	unsigned long int stepLocal_3 = var_1_22 - var_1_20;
	if (last_1_var_1_3) {
		if (var_1_6) {
			if (last_1_var_1_3) {
				var_1_17 = var_1_14;
			} else {
				var_1_17 = ((min (var_1_19 , var_1_20)) - ((var_1_21 - 256) - 256));
			}
		} else {
			if (stepLocal_3 > (var_1_4 / var_1_8)) {
				if (last_1_var_1_1 >= var_1_10) {
					var_1_17 = var_1_14;
				}
			}
		}
	} else {
		var_1_17 = var_1_21;
	}


	// From: Req2Batch67Filler_PE_CN
	var_1_3 = (((5 - last_1_var_1_17) <= (last_1_var_1_17 + last_1_var_1_17)) || var_1_6);


	// From: Req1Batch67Filler_PE_CN
	if (50 != var_1_16) {
		var_1_1 = (1.00000000000025E12 - 24.25);
	}


	// From: Req4Batch67Filler_PE_CN
	var_1_12 = (var_1_13 - var_1_14);


	// From: Req5Batch67Filler_PE_CN
	var_1_15 = (abs (var_1_9));


	// From: Req3Batch67Filler_PE_CN
	unsigned char stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = (var_1_16 + 100) / var_1_8;
	if (stepLocal_0 >= var_1_17) {
		if (stepLocal_1 || (var_1_17 > (var_1_17 * var_1_8))) {
			var_1_7 = var_1_9;
		} else {
			var_1_7 = (var_1_10 + var_1_11);
		}
	}


	// From: CodeObject1
	if (var_1_24 < (var_1_25 + var_1_26)) {
		if (5 <= var_1_25) {
			var_1_23 = 4.7;
		}
	} else {
		var_1_23 = (max (var_1_27 , var_1_28));
	}


	// From: CodeObject2
	if (var_1_30) {
		if ((abs (var_1_25)) > ((-10 + var_1_26) & var_1_24)) {
			var_1_29 = ((abs (var_1_31 - 64u)) - var_1_32);
		} else {
			var_1_29 = var_1_32;
		}
	}


	// From: CodeObject3
	var_1_33 = var_1_34;


	// From: CodeObject4
	var_1_35 = var_1_28;


	// From: CodeObject5
	var_1_36 = (abs (var_1_37));


	// From: CodeObject6
	if (var_1_23 > (var_1_39 - var_1_40)) {
		if (var_1_29 <= var_1_32) {
			var_1_38 = (var_1_32 + (abs (var_1_41)));
		} else {
			if ((max ((abs (var_1_27)) , var_1_35)) != var_1_28) {
				var_1_38 = (abs (var_1_31));
			}
		}
	} else {
		var_1_38 = ((max (var_1_31 , var_1_42)) - (abs (1795211791u - var_1_43)));
	}


	// From: CodeObject7
	if (var_1_33 || var_1_30) {
		if (var_1_36 <= (var_1_45 - 64)) {
			if (var_1_31 < (abs (var_1_32))) {
				var_1_44 = var_1_36;
			} else {
				var_1_44 = 16;
			}
		}
	} else {
		var_1_44 = var_1_36;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 24575);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 3221225470);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= -32766);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1073741823);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_3 = var_1_3;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return (((((((50 != var_1_16) ? (var_1_1 == ((double) (1.00000000000025E12 - 24.25))) : 1) && (var_1_3 == ((unsigned char) (((5 - last_1_var_1_17) <= (last_1_var_1_17 + last_1_var_1_17)) || var_1_6)))) && ((((var_1_16 + 100) / var_1_8) >= var_1_17) ? ((var_1_3 || (var_1_17 > (var_1_17 * var_1_8))) ? (var_1_7 == ((float) var_1_9)) : (var_1_7 == ((float) (var_1_10 + var_1_11)))) : 1)) && (var_1_12 == ((signed char) (var_1_13 - var_1_14)))) && (var_1_15 == ((float) (abs (var_1_9))))) && ((last_1_var_1_7 > (var_1_11 + last_1_var_1_15)) ? ((var_1_14 < ((max (var_1_13 , last_1_var_1_17)) | last_1_var_1_12)) ? (last_1_var_1_3 ? (var_1_16 == ((signed char) -2)) : 1) : (var_1_16 == ((signed char) var_1_13))) : 1)) && (last_1_var_1_3 ? (var_1_6 ? (last_1_var_1_3 ? (var_1_17 == ((unsigned short int) var_1_14)) : (var_1_17 == ((unsigned short int) ((min (var_1_19 , var_1_20)) - ((var_1_21 - 256) - 256))))) : (((var_1_22 - var_1_20) > (var_1_4 / var_1_8)) ? ((last_1_var_1_1 >= var_1_10) ? (var_1_17 == ((unsigned short int) var_1_14)) : 1) : 1)) : (var_1_17 == ((unsigned short int) var_1_21)))
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
