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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
unsigned short int var_1_18 = 10;
unsigned short int var_1_19 = 2;
float var_1_20 = 100000.5;
float var_1_21 = 31.9;
float var_1_22 = -0.6;
unsigned short int var_1_23 = 32;
float var_1_24 = 24.5;
double var_1_25 = 10000000000.5;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 1;
double var_1_28 = 64.25;
signed char var_1_29 = -10;
signed char var_1_30 = -4;
unsigned long int var_1_31 = 4;
unsigned short int var_1_32 = 1000;
unsigned short int var_1_33 = 8;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 10;
double var_1_36 = 9.95;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
signed char var_1_39 = 5;
signed char var_1_40 = -50;
signed char var_1_41 = 64;
signed char var_1_42 = 64;
signed char var_1_43 = -100;
double var_1_44 = 4.625;
double var_1_45 = 128.875;
double var_1_46 = 8.4;
signed short int var_1_47 = -128;
signed long int var_1_48 = -8;
unsigned short int var_1_49 = 64;
unsigned short int var_1_50 = 2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_20 <= var_1_21) {
		if ((var_1_21 + var_1_20) < (abs (var_1_22))) {
			if (var_1_20 <= (min (var_1_22 , var_1_21))) {
				var_1_19 = var_1_23;
			} else {
				if (var_1_20 != var_1_24) {
					var_1_19 = var_1_23;
				} else {
					var_1_19 = 1;
				}
			}
		}
	}


	// From: CodeObject2
	if (var_1_26 && (! (! var_1_27))) {
		var_1_25 = (abs (var_1_28));
	}


	// From: CodeObject3
	if ((var_1_25 <= var_1_22) && var_1_27) {
		var_1_29 = (max (var_1_30 , -100));
	}


	// From: CodeObject4
	if (var_1_23 >= var_1_32) {
		var_1_31 = (min (var_1_19 , (max ((abs (var_1_23)) , var_1_32))));
	}


	// From: CodeObject5
	if (var_1_27) {
		if (! var_1_34) {
			var_1_33 = (max ((50 + var_1_35) , var_1_23));
		} else {
			var_1_33 = (abs (abs (var_1_35 + 8)));
		}
	}


	// From: CodeObject6
	if ((abs (abs (var_1_30))) <= var_1_33) {
		var_1_36 = (abs (var_1_28));
	}


	// From: CodeObject7
	if (var_1_34) {
		var_1_37 = var_1_38;
	} else {
		var_1_37 = var_1_38;
	}


	// From: CodeObject8
	if (var_1_19 > 32) {
		var_1_39 = (min (var_1_30 , var_1_40));
	} else {
		if ((var_1_31 & var_1_35) > 2u) {
			var_1_39 = (max (var_1_30 , -1));
		} else {
			var_1_39 = (min (((abs (var_1_41)) - var_1_42) , (min (var_1_30 , (abs (var_1_43))))));
		}
	}


	// From: CodeObject9
	if (var_1_38) {
		if (var_1_41 < (var_1_39 * -10)) {
			if (var_1_30 < var_1_40) {
				var_1_44 = var_1_28;
			} else {
				if (var_1_25 >= ((abs (var_1_28)) - var_1_45)) {
					var_1_44 = (abs (var_1_28));
				}
			}
		} else {
			var_1_44 = (min (var_1_28 , var_1_46));
		}
	}


	// From: CodeObject10
	if (! (var_1_42 <= var_1_33)) {
		var_1_47 = (min (((min (-8 , var_1_43)) + var_1_30) , (abs (var_1_42))));
	}


	// From: CodeObject11
	if (((var_1_31 + var_1_19) + var_1_23) != var_1_42) {
		if (var_1_37) {
			if (var_1_26) {
				var_1_48 = var_1_41;
			}
		}
	}


	// From: CodeObject12
	if (var_1_21 <= var_1_22) {
		var_1_49 = (var_1_42 + var_1_35);
	}


	// From: CodeObject13
	var_1_50 = var_1_42;


	// From: Req1Batch10PS_CN_100
	unsigned short int stepLocal_1 = var_1_6;
	unsigned char stepLocal_0 = last_1_var_1_8;
	if (last_1_var_1_8 && stepLocal_0) {
		var_1_1 = (((min (56892 , var_1_4)) - var_1_5) - (max (var_1_6 , var_1_7)));
	} else {
		if ((max (var_1_7 , var_1_5)) < stepLocal_1) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch10PS_CN_100
	var_1_8 = (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9);


	// From: Req4Batch10PS_CN_100
	if (var_1_8) {
		var_1_14 = ((abs (var_1_4)) - (max (var_1_5 , (var_1_16 - var_1_11))));
	}


	// From: Req5Batch10PS_CN_100
	signed long int stepLocal_4 = max (var_1_13 , (var_1_16 << var_1_7));
	if (stepLocal_4 >= var_1_14) {
		var_1_17 = var_1_11;
	} else {
		var_1_17 = (var_1_6 + var_1_5);
	}


	// From: Req6Batch10PS_CN_100
	unsigned short int stepLocal_5 = var_1_5;
	if (stepLocal_5 == var_1_16) {
		if (var_1_8) {
			var_1_18 = (abs ((var_1_16 + 30393) - var_1_5));
		} else {
			var_1_18 = var_1_4;
		}
	} else {
		if (var_1_9) {
			var_1_18 = 200;
		}
	}


	// From: Req3Batch10PS_CN_100
	unsigned char stepLocal_3 = var_1_9;
	unsigned long int stepLocal_2 = var_1_17;
	if (stepLocal_2 < var_1_6) {
		if ((var_1_6 != var_1_5) || stepLocal_3) {
			var_1_10 = (((10000 - var_1_11) - var_1_5) + (abs (var_1_12)));
		} else {
			var_1_10 = var_1_4;
		}
	} else {
		var_1_10 = var_1_13;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 49150);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8191);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65535);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -127);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -126);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -126);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854765600e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854765600e+12F && var_1_46 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
}

int property() {
	return ((((((last_1_var_1_8 && last_1_var_1_8) ? (var_1_1 == ((unsigned short int) (((min (56892 , var_1_4)) - var_1_5) - (max (var_1_6 , var_1_7))))) : (((max (var_1_7 , var_1_5)) < var_1_6) ? (var_1_1 == ((unsigned short int) var_1_5)) : 1)) && (var_1_8 == ((unsigned char) (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9)))) && ((var_1_17 < var_1_6) ? (((var_1_6 != var_1_5) || var_1_9) ? (var_1_10 == ((signed short int) (((10000 - var_1_11) - var_1_5) + (abs (var_1_12))))) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_13)))) && (var_1_8 ? (var_1_14 == ((unsigned short int) ((abs (var_1_4)) - (max (var_1_5 , (var_1_16 - var_1_11)))))) : 1)) && (((max (var_1_13 , (var_1_16 << var_1_7))) >= var_1_14) ? (var_1_17 == ((unsigned long int) var_1_11)) : (var_1_17 == ((unsigned long int) (var_1_6 + var_1_5))))) && ((var_1_5 == var_1_16) ? (var_1_8 ? (var_1_18 == ((unsigned short int) (abs ((var_1_16 + 30393) - var_1_5)))) : (var_1_18 == ((unsigned short int) var_1_4))) : (var_1_9 ? (var_1_18 == ((unsigned short int) 200)) : 1))
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
