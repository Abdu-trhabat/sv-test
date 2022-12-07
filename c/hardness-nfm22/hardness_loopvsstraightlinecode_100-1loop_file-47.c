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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 5;
signed char var_1_3 = -32;
unsigned long int var_1_6 = 10;
unsigned short int var_1_11 = 32;
unsigned short int var_1_13 = 10;
unsigned short int var_1_14 = 0;
signed short int var_1_15 = -128;
signed short int var_1_16 = 4;
signed short int var_1_17 = 128;
double var_1_18 = 0.6;
double var_1_19 = 4.3;
double var_1_20 = 64.2;
double var_1_21 = 200.6;
unsigned long int var_1_22 = 100000;
unsigned long int var_1_23 = 32;
unsigned long int var_1_24 = 1251238951;
unsigned long int var_1_25 = 3528560962;
unsigned char var_1_26 = 0;
unsigned long int var_1_27 = 3248462006;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed char var_1_30 = -4;
signed char var_1_31 = 2;
signed char var_1_32 = 100;
signed char var_1_33 = -32;
signed char var_1_34 = -8;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
signed char var_1_37 = -25;
signed char var_1_38 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 10;
unsigned short int last_1_var_1_11 = 32;
unsigned short int last_1_var_1_14 = 0;
unsigned long int last_1_var_1_22 = 100000;
unsigned char last_1_var_1_26 = 0;
unsigned char last_1_var_1_35 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch47100_1loop
	signed long int stepLocal_5 = last_1_var_1_14;
	if (last_1_var_1_6 > stepLocal_5) {
		var_1_23 = (var_1_16 + (var_1_24 - var_1_13));
	} else {
		if (last_1_var_1_35) {
			var_1_23 = (var_1_25 - (1448097314u - var_1_13));
		}
	}


	// From: Req3Batch47100_1loop
	unsigned long int stepLocal_2 = last_1_var_1_22 + last_1_var_1_22;
	unsigned char stepLocal_1 = last_1_var_1_26;
	unsigned long int stepLocal_0 = last_1_var_1_22;
	if (last_1_var_1_14 > stepLocal_2) {
		if (last_1_var_1_11 != stepLocal_0) {
			if (last_1_var_1_26 && stepLocal_1) {
				var_1_11 = var_1_13;
			} else {
				var_1_11 = var_1_13;
			}
		}
	} else {
		var_1_11 = var_1_13;
	}


	// From: Req4Batch47100_1loop
	var_1_14 = var_1_13;


	// From: Req6Batch47100_1loop
	var_1_18 = (max (var_1_19 , (abs (max (var_1_20 , var_1_21)))));


	// From: Req7Batch47100_1loop
	signed long int stepLocal_4 = 0;
	unsigned short int stepLocal_3 = var_1_13;
	if (var_1_14 <= stepLocal_3) {
		if (stepLocal_4 >= var_1_23) {
			var_1_22 = var_1_11;
		} else {
			var_1_22 = var_1_13;
		}
	}


	// From: Req9Batch47100_1loop
	unsigned short int stepLocal_7 = var_1_13;
	unsigned long int stepLocal_6 = var_1_25;
	if (stepLocal_6 < ((abs (var_1_27)) - var_1_22)) {
		var_1_26 = (var_1_28 && var_1_29);
	} else {
		if (var_1_28) {
			if (var_1_11 <= stepLocal_7) {
				var_1_26 = var_1_29;
			} else {
				var_1_26 = var_1_29;
			}
		}
	}


	// From: Req11Batch47100_1loop
	if (var_1_26) {
		var_1_35 = (! var_1_36);
	} else {
		var_1_35 = ((var_1_3 > var_1_23) || var_1_28);
	}


	// From: Req2Batch47100_1loop
	if (var_1_35) {
		var_1_6 = (max (8u , var_1_11));
	} else {
		if (var_1_11 > var_1_14) {
			var_1_6 = (max (var_1_14 , (3173943110u - var_1_11)));
		}
	}


	// From: Req1Batch47100_1loop
	if (var_1_26) {
		var_1_1 = (abs (min (10 , var_1_3)));
	} else {
		if (var_1_35) {
			if (var_1_26) {
				var_1_1 = var_1_3;
			} else {
				var_1_1 = var_1_3;
			}
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req5Batch47100_1loop
	if (var_1_35) {
		var_1_15 = (var_1_3 + (var_1_16 - (min (var_1_17 , 2))));
	} else {
		var_1_15 = (abs (var_1_17));
	}


	// From: Req10Batch47100_1loop
	unsigned short int stepLocal_10 = var_1_11;
	unsigned char stepLocal_9 = var_1_26;
	signed long int stepLocal_8 = (max (var_1_16 , var_1_17)) - var_1_32;
	if (var_1_6 < stepLocal_10) {
		if ((min (var_1_18 , 3.75f)) >= var_1_20) {
			var_1_30 = (max (var_1_3 , (min (-16 , (var_1_31 - var_1_32)))));
		} else {
			var_1_30 = (abs (var_1_33 + var_1_34));
		}
	} else {
		if (stepLocal_8 <= var_1_34) {
			if (stepLocal_9 && ((var_1_11 * var_1_22) <= var_1_6)) {
				var_1_30 = (max (var_1_34 , var_1_31));
			} else {
				var_1_30 = var_1_33;
			}
		}
	}


	// From: Req12Batch47100_1loop
	unsigned short int stepLocal_12 = var_1_13;
	unsigned char stepLocal_11 = var_1_35;
	if (stepLocal_11 && var_1_28) {
		if (stepLocal_12 != var_1_27) {
			var_1_37 = (min (var_1_3 , var_1_32));
		} else {
			var_1_37 = var_1_31;
		}
	} else {
		var_1_37 = var_1_38;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -126);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -1);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -63);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_35 = var_1_35;
}

int property() {
	return (((((((((((var_1_26 ? (var_1_1 == ((signed char) (abs (min (10 , var_1_3))))) : (var_1_35 ? (var_1_26 ? (var_1_1 == ((signed char) var_1_3)) : (var_1_1 == ((signed char) var_1_3))) : (var_1_1 == ((signed char) var_1_3)))) && (var_1_35 ? (var_1_6 == ((unsigned long int) (max (8u , var_1_11)))) : ((var_1_11 > var_1_14) ? (var_1_6 == ((unsigned long int) (max (var_1_14 , (3173943110u - var_1_11))))) : 1))) && ((last_1_var_1_14 > (last_1_var_1_22 + last_1_var_1_22)) ? ((last_1_var_1_11 != last_1_var_1_22) ? ((last_1_var_1_26 && last_1_var_1_26) ? (var_1_11 == ((unsigned short int) var_1_13)) : (var_1_11 == ((unsigned short int) var_1_13))) : 1) : (var_1_11 == ((unsigned short int) var_1_13)))) && (var_1_14 == ((unsigned short int) var_1_13))) && (var_1_35 ? (var_1_15 == ((signed short int) (var_1_3 + (var_1_16 - (min (var_1_17 , 2)))))) : (var_1_15 == ((signed short int) (abs (var_1_17)))))) && (var_1_18 == ((double) (max (var_1_19 , (abs (max (var_1_20 , var_1_21)))))))) && ((var_1_14 <= var_1_13) ? ((0 >= var_1_23) ? (var_1_22 == ((unsigned long int) var_1_11)) : (var_1_22 == ((unsigned long int) var_1_13))) : 1)) && ((last_1_var_1_6 > last_1_var_1_14) ? (var_1_23 == ((unsigned long int) (var_1_16 + (var_1_24 - var_1_13)))) : (last_1_var_1_35 ? (var_1_23 == ((unsigned long int) (var_1_25 - (1448097314u - var_1_13)))) : 1))) && ((var_1_25 < ((abs (var_1_27)) - var_1_22)) ? (var_1_26 == ((unsigned char) (var_1_28 && var_1_29))) : (var_1_28 ? ((var_1_11 <= var_1_13) ? (var_1_26 == ((unsigned char) var_1_29)) : (var_1_26 == ((unsigned char) var_1_29))) : 1))) && ((var_1_6 < var_1_11) ? (((min (var_1_18 , 3.75f)) >= var_1_20) ? (var_1_30 == ((signed char) (max (var_1_3 , (min (-16 , (var_1_31 - var_1_32))))))) : (var_1_30 == ((signed char) (abs (var_1_33 + var_1_34))))) : ((((max (var_1_16 , var_1_17)) - var_1_32) <= var_1_34) ? ((var_1_26 && ((var_1_11 * var_1_22) <= var_1_6)) ? (var_1_30 == ((signed char) (max (var_1_34 , var_1_31)))) : (var_1_30 == ((signed char) var_1_33))) : 1))) && (var_1_26 ? (var_1_35 == ((unsigned char) (! var_1_36))) : (var_1_35 == ((unsigned char) ((var_1_3 > var_1_23) || var_1_28))))) && ((var_1_35 && var_1_28) ? ((var_1_13 != var_1_27) ? (var_1_37 == ((signed char) (min (var_1_3 , var_1_32)))) : (var_1_37 == ((signed char) var_1_31))) : (var_1_37 == ((signed char) var_1_38)))
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
