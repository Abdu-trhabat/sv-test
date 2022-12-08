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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 0.6;
double var_1_5 = 7.375;
unsigned long int var_1_6 = 8;
signed char var_1_7 = -64;
signed long int var_1_9 = -1;
float var_1_10 = 2.2;
float var_1_11 = 255.25;
float var_1_12 = 0.0;
float var_1_13 = 10.25;
unsigned char var_1_15 = 100;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 5;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 2;
double var_1_29 = 31.875;
unsigned short int var_1_30 = 5;
unsigned short int var_1_31 = 4;
unsigned char var_1_32 = 8;
unsigned short int var_1_34 = 62310;
unsigned long int var_1_35 = 5;
unsigned long int var_1_36 = 1000000000;
unsigned short int var_1_37 = 2;
unsigned short int var_1_38 = 38350;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 100;
double last_1_var_1_29 = 31.875;
unsigned short int last_1_var_1_30 = 5;
unsigned short int last_1_var_1_31 = 4;
unsigned char last_1_var_1_32 = 8;
unsigned short int last_1_var_1_37 = 2;
unsigned char last_1_var_1_39 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch90100_1loop
	signed long int stepLocal_1 = last_1_var_1_32 + -256;
	signed long int stepLocal_0 = min ((min (var_1_7 , var_1_9)) , var_1_19);
	if (last_1_var_1_39) {
		if (stepLocal_1 != last_1_var_1_37) {
			var_1_15 = (max ((var_1_18 - (max (var_1_19 , var_1_20))) , var_1_21));
		}
	} else {
		if (stepLocal_0 <= (var_1_21 * last_1_var_1_31)) {
			var_1_15 = (((var_1_23 + 50) - (var_1_24 + var_1_25)) + (var_1_26 + (var_1_27 - var_1_28)));
		} else {
			var_1_15 = (var_1_26 + var_1_24);
		}
	}


	// From: Req10Batch90100_1loop
	signed long int stepLocal_6 = last_1_var_1_15;
	unsigned char stepLocal_5 = var_1_40 && var_1_41;
	if ((- var_1_10) <= last_1_var_1_29) {
		if (var_1_16) {
			if (stepLocal_5 || (last_1_var_1_29 < last_1_var_1_29)) {
				var_1_39 = (var_1_42 || ((var_1_21 >= var_1_19) && (var_1_43 || var_1_44)));
			}
		}
	} else {
		if (stepLocal_6 < var_1_19) {
			var_1_39 = var_1_42;
		} else {
			var_1_39 = var_1_45;
		}
	}


	// From: Req4Batch90100_1loop
	if (var_1_39) {
		if ((var_1_7 * -16) == var_1_27) {
			var_1_29 = var_1_11;
		}
	}


	// From: Req1Batch90100_1loop
	if ((- var_1_29) >= var_1_29) {
		if (var_1_29 < ((var_1_29 * var_1_29) * 0.5f)) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req5Batch90100_1loop
	if ((var_1_24 - var_1_25) > (min (var_1_26 , var_1_18))) {
		if (var_1_20 > last_1_var_1_30) {
			var_1_30 = var_1_23;
		}
	} else {
		var_1_30 = var_1_21;
	}


	// From: Req6Batch90100_1loop
	if ((- var_1_11) <= var_1_10) {
		var_1_31 = (max ((min (10 , var_1_28)) , 10));
	}


	// From: Req9Batch90100_1loop
	var_1_37 = ((abs (var_1_38)) - var_1_27);


	// From: Req8Batch90100_1loop
	signed long int stepLocal_4 = var_1_31 ^ var_1_25;
	if (stepLocal_4 < (var_1_37 * var_1_30)) {
		var_1_35 = (((var_1_36 - var_1_37) + 128u) + var_1_20);
	} else {
		var_1_35 = var_1_23;
	}


	// From: Req2Batch90100_1loop
	if ((abs (var_1_7)) == (var_1_35 / var_1_9)) {
		if (var_1_1 > ((var_1_10 + var_1_11) - (var_1_12 - var_1_13))) {
			var_1_6 = (abs (var_1_37));
		} else {
			var_1_6 = var_1_37;
		}
	} else {
		var_1_6 = var_1_37;
	}


	// From: Req7Batch90100_1loop
	unsigned char stepLocal_3 = var_1_15 >= var_1_37;
	unsigned char stepLocal_2 = var_1_15;
	if ((var_1_31 <= (var_1_34 - var_1_18)) && stepLocal_3) {
		if (var_1_15 == stepLocal_2) {
			var_1_32 = var_1_20;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427387900e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427387900e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427387900e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427387900e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 31);
	assume_abort_if_not(var_1_23 <= 64);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 31);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 31);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65535);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 536870912);
	assume_abort_if_not(var_1_36 <= 1073741824);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_39 = var_1_39;
}

int property() {
	return (((((((((((- var_1_29) >= var_1_29) ? ((var_1_29 < ((var_1_29 * var_1_29) * 0.5f)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) var_1_5))) : 1) && (((abs (var_1_7)) == (var_1_35 / var_1_9)) ? ((var_1_1 > ((var_1_10 + var_1_11) - (var_1_12 - var_1_13))) ? (var_1_6 == ((unsigned long int) (abs (var_1_37)))) : (var_1_6 == ((unsigned long int) var_1_37))) : (var_1_6 == ((unsigned long int) var_1_37)))) && (last_1_var_1_39 ? (((last_1_var_1_32 + -256) != last_1_var_1_37) ? (var_1_15 == ((unsigned char) (max ((var_1_18 - (max (var_1_19 , var_1_20))) , var_1_21)))) : 1) : (((min ((min (var_1_7 , var_1_9)) , var_1_19)) <= (var_1_21 * last_1_var_1_31)) ? (var_1_15 == ((unsigned char) (((var_1_23 + 50) - (var_1_24 + var_1_25)) + (var_1_26 + (var_1_27 - var_1_28))))) : (var_1_15 == ((unsigned char) (var_1_26 + var_1_24)))))) && (var_1_39 ? (((var_1_7 * -16) == var_1_27) ? (var_1_29 == ((double) var_1_11)) : 1) : 1)) && (((var_1_24 - var_1_25) > (min (var_1_26 , var_1_18))) ? ((var_1_20 > last_1_var_1_30) ? (var_1_30 == ((unsigned short int) var_1_23)) : 1) : (var_1_30 == ((unsigned short int) var_1_21)))) && (((- var_1_11) <= var_1_10) ? (var_1_31 == ((unsigned short int) (max ((min (10 , var_1_28)) , 10)))) : 1)) && (((var_1_31 <= (var_1_34 - var_1_18)) && (var_1_15 >= var_1_37)) ? ((var_1_15 == var_1_15) ? (var_1_32 == ((unsigned char) var_1_20)) : 1) : 1)) && (((var_1_31 ^ var_1_25) < (var_1_37 * var_1_30)) ? (var_1_35 == ((unsigned long int) (((var_1_36 - var_1_37) + 128u) + var_1_20))) : (var_1_35 == ((unsigned long int) var_1_23)))) && (var_1_37 == ((unsigned short int) ((abs (var_1_38)) - var_1_27)))) && (((- var_1_10) <= last_1_var_1_29) ? (var_1_16 ? (((var_1_40 && var_1_41) || (last_1_var_1_29 < last_1_var_1_29)) ? (var_1_39 == ((unsigned char) (var_1_42 || ((var_1_21 >= var_1_19) && (var_1_43 || var_1_44))))) : 1) : 1) : ((last_1_var_1_15 < var_1_19) ? (var_1_39 == ((unsigned char) var_1_42)) : (var_1_39 == ((unsigned char) var_1_45))))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
