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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 3567543019;
float var_1_12 = 31.875;
signed long int var_1_13 = 128;
unsigned char var_1_16 = 4;
unsigned char var_1_18 = 16;
signed long int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1897833385;
unsigned char var_1_22 = 2;
signed char var_1_23 = -5;
signed char var_1_24 = -4;
signed char var_1_25 = 2;
signed long int var_1_26 = -1000000;
double var_1_27 = 31.6;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 16;
signed short int var_1_30 = 10;
double var_1_31 = 99.25;
unsigned char var_1_32 = 10;
signed char var_1_33 = -64;
double var_1_34 = 1.6440000000000001;
double var_1_35 = 7.625;
signed char var_1_36 = 8;
signed char var_1_37 = 100;
signed char var_1_38 = 8;
signed char var_1_39 = 10;
signed long int var_1_40 = -16;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 5;
signed short int var_1_43 = -4;
signed short int var_1_44 = -32;
unsigned char var_1_45 = 1;
signed short int var_1_46 = 4;
signed short int var_1_47 = 128;
unsigned long int var_1_48 = 32;
unsigned long int var_1_49 = 2517178087;
double var_1_50 = 15.49;
unsigned short int var_1_52 = 8;
double var_1_53 = 25.4;
double var_1_54 = 4.8;
double var_1_55 = 8.3;

// Calibration values

// Last'ed variables
float last_1_var_1_12 = 31.875;
signed long int last_1_var_1_13 = 128;
unsigned char last_1_var_1_16 = 4;
signed long int last_1_var_1_19 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_28 && (var_1_29 > var_1_30)) {
		var_1_27 = var_1_31;
	} else {
		if (var_1_29 == var_1_30) {
			if (var_1_30 >= var_1_29) {
				var_1_27 = var_1_31;
			}
		}
	}


	// From: CodeObject2
	var_1_32 = 2;


	// From: CodeObject3
	if ((min ((var_1_34 - var_1_35) , var_1_27)) >= 9.9999999999975E11) {
		var_1_33 = (var_1_36 - (var_1_37 - (max (var_1_38 , var_1_39))));
	} else {
		var_1_33 = (abs (var_1_36));
	}


	// From: CodeObject4
	var_1_40 = var_1_38;


	// From: CodeObject5
	if ((var_1_30 % (abs (var_1_37))) >= var_1_32) {
		if (var_1_37 != var_1_33) {
			var_1_41 = (abs (4));
		} else {
			var_1_41 = (min ((max (var_1_42 , var_1_39)) , (abs (var_1_38))));
		}
	} else {
		var_1_41 = var_1_37;
	}


	// From: CodeObject6
	if (var_1_28 || ((abs (var_1_35)) >= var_1_27)) {
		var_1_43 = var_1_33;
	} else {
		if ((abs (abs (var_1_34))) >= (abs (var_1_35))) {
			var_1_43 = (var_1_38 - var_1_39);
		}
	}


	// From: CodeObject7
	if (var_1_36 < (~ var_1_30)) {
		if (var_1_28 && var_1_45) {
			if (((abs (var_1_37)) % (max (var_1_46 , -64))) < (var_1_36 * var_1_32)) {
				var_1_44 = var_1_38;
			} else {
				if (var_1_46 > (var_1_38 ^ var_1_30)) {
					var_1_44 = (max (var_1_47 , var_1_41));
				} else {
					var_1_44 = (var_1_36 - var_1_32);
				}
			}
		} else {
			var_1_44 = (min (-128 , (max (var_1_41 , var_1_47))));
		}
	}


	// From: CodeObject8
	if (var_1_34 <= (abs (abs (var_1_27)))) {
		if ((~ (64u << var_1_30)) < var_1_39) {
			var_1_48 = (min ((abs (min (var_1_39 , var_1_38))) , (var_1_49 - var_1_37)));
		} else {
			if (var_1_47 < var_1_41) {
				var_1_48 = (max ((min ((abs (var_1_41)) , var_1_37)) , (max (var_1_39 , var_1_42))));
			} else {
				var_1_48 = var_1_38;
			}
		}
	}


	// From: CodeObject9
	if ((var_1_46 * (~ var_1_52)) > var_1_37) {
		var_1_50 = (var_1_53 + var_1_54);
	} else {
		var_1_50 = (min ((max ((max (9.99999994E7 , var_1_31)) , var_1_53)) , var_1_54));
	}


	// From: CodeObject10
	var_1_55 = var_1_53;


	// From: Req3Batch73PS_CN_100
	if ((max ((last_1_var_1_19 / 2) , (~ last_1_var_1_16))) <= var_1_10) {
		var_1_12 = var_1_8;
	}


	// From: Req1Batch73PS_CN_100
	if (var_1_12 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) {
		if (var_1_7) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req5Batch73PS_CN_100
	if (var_1_3 >= (last_1_var_1_12 * var_1_4)) {
		var_1_16 = var_1_18;
	}


	// From: Req7Batch73PS_CN_100
	var_1_22 = (abs (var_1_18));


	// From: Req8Batch73PS_CN_100
	if (var_1_1 > var_1_5) {
		var_1_23 = (abs (min (var_1_24 , var_1_25)));
	} else {
		var_1_23 = var_1_24;
	}


	// From: Req9Batch73PS_CN_100
	var_1_26 = var_1_25;


	// From: Req4Batch73PS_CN_100
	signed long int stepLocal_0 = var_1_26 >> var_1_10;
	if (stepLocal_0 < last_1_var_1_13) {
		var_1_13 = (min (var_1_26 , var_1_22));
	}


	// From: Req2Batch73PS_CN_100
	if (var_1_1 < (var_1_4 - var_1_3)) {
		var_1_9 = (var_1_10 - var_1_16);
	}


	// From: Req6Batch73PS_CN_100
	if (var_1_7 && var_1_20) {
		var_1_19 = ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16)));
	} else {
		if (2u >= (max (var_1_21 , var_1_9))) {
			var_1_19 = var_1_22;
		} else {
			var_1_19 = var_1_22;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -126);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -126);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -32768);
	assume_abort_if_not(var_1_46 <= 32767);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= -32767);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 65535);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((((var_1_12 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_8))) && ((var_1_1 < (var_1_4 - var_1_3)) ? (var_1_9 == ((unsigned long int) (var_1_10 - var_1_16))) : 1)) && (((max ((last_1_var_1_19 / 2) , (~ last_1_var_1_16))) <= var_1_10) ? (var_1_12 == ((float) var_1_8)) : 1)) && (((var_1_26 >> var_1_10) < last_1_var_1_13) ? (var_1_13 == ((signed long int) (min (var_1_26 , var_1_22)))) : 1)) && ((var_1_3 >= (last_1_var_1_12 * var_1_4)) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)) && ((var_1_7 && var_1_20) ? (var_1_19 == ((signed long int) ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16))))) : ((2u >= (max (var_1_21 , var_1_9))) ? (var_1_19 == ((signed long int) var_1_22)) : (var_1_19 == ((signed long int) var_1_22))))) && (var_1_22 == ((unsigned char) (abs (var_1_18))))) && ((var_1_1 > var_1_5) ? (var_1_23 == ((signed char) (abs (min (var_1_24 , var_1_25))))) : (var_1_23 == ((signed char) var_1_24)))) && (var_1_26 == ((signed long int) var_1_25))
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
