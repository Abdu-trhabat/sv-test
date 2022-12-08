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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 2;
unsigned char var_1_4 = 100;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 32;
unsigned char var_1_8 = 32;
float var_1_9 = 100.5;
float var_1_11 = 0.8;
float var_1_12 = 2.5;
signed short int var_1_13 = -32;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
float var_1_18 = 0.25;
float var_1_19 = 100000000.25;
signed char var_1_20 = 0;
signed char var_1_21 = 10;
double var_1_22 = 1000000.5;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 64;
signed long int var_1_26 = 0;
signed long int var_1_27 = -128;
signed long int var_1_28 = -100;
unsigned long int var_1_29 = 32;
signed long int var_1_30 = -32;
signed long int var_1_31 = 0;
unsigned long int var_1_32 = 2219578776;
unsigned long int var_1_33 = 128;
signed long int var_1_34 = -32;
signed long int var_1_35 = -25;
float var_1_36 = 8.4;
float var_1_37 = 127.25;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 500;
unsigned long int var_1_41 = 1702677079;
unsigned long int var_1_42 = 1793438671;
unsigned long int var_1_43 = 1872722184;
unsigned long int var_1_44 = 128;
unsigned long int var_1_45 = 2;
signed char var_1_46 = -64;
signed long int var_1_47 = 8;
unsigned long int var_1_48 = 16;
double var_1_49 = 1000000000.9;
double var_1_50 = 0.25;
double var_1_51 = 99.5;
unsigned long int var_1_52 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 2;
unsigned char last_1_var_1_15 = 1;
signed char last_1_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_26 < (min (var_1_27 , (var_1_28 >> var_1_29)))) {
		if (var_1_26 > var_1_27) {
			var_1_25 = var_1_30;
		} else {
			if (((var_1_29 ^ var_1_28) >> var_1_26) > (abs (var_1_27))) {
				var_1_25 = (abs (var_1_31));
			}
		}
	} else {
		if ((var_1_29 - var_1_31) <= (~ (var_1_32 - var_1_33))) {
			var_1_25 = (max ((var_1_30 + var_1_34) , (abs (var_1_31))));
		} else {
			var_1_25 = var_1_30;
		}
	}


	// From: CodeObject2
	if ((1 << var_1_27) < var_1_30) {
		var_1_35 = (abs (var_1_31));
	} else {
		if ((var_1_25 % -128) <= var_1_29) {
			var_1_35 = var_1_29;
		} else {
			var_1_35 = -5;
		}
	}


	// From: CodeObject3
	var_1_36 = var_1_37;


	// From: CodeObject4
	var_1_38 = var_1_39;


	// From: CodeObject5
	var_1_40 = ((var_1_41 + var_1_42) - (var_1_43 - var_1_29));


	// From: CodeObject6
	if ((var_1_35 < var_1_34) || var_1_39) {
		var_1_44 = (abs (var_1_45));
	}


	// From: CodeObject7
	if ((var_1_41 << var_1_43) > (min (var_1_44 , (32u >> var_1_32)))) {
		if ((abs (var_1_29)) <= var_1_42) {
			if ((abs (var_1_29)) >= var_1_43) {
				var_1_46 = (abs (var_1_29));
			}
		} else {
			var_1_46 = (min (0 , var_1_29));
		}
	}


	// From: CodeObject8
	if ((abs (var_1_42)) == var_1_26) {
		if (var_1_38) {
			var_1_47 = (min ((abs (var_1_31)) , 25));
		} else {
			if (var_1_39) {
				var_1_47 = var_1_46;
			} else {
				var_1_47 = var_1_31;
			}
		}
	} else {
		var_1_47 = var_1_34;
	}


	// From: CodeObject9
	if ((var_1_49 - (min (var_1_50 , var_1_51))) >= var_1_36) {
		if (var_1_39) {
			if (((128 | var_1_33) / 5) <= var_1_27) {
				var_1_48 = (abs (var_1_33));
			} else {
				var_1_48 = (abs (min (var_1_52 , var_1_42)));
			}
		} else {
			if ((max ((abs (var_1_51)) , var_1_37)) <= var_1_36) {
				if (var_1_26 < var_1_42) {
					var_1_48 = (min ((abs (var_1_52)) , (min (var_1_33 , var_1_43))));
				}
			} else {
				if (var_1_49 > (var_1_50 * var_1_37)) {
					var_1_48 = 10u;
				}
			}
		}
	} else {
		var_1_48 = var_1_33;
	}


	// From: Req4Batch32PS_CN_100
	if (var_1_5 >= var_1_6) {
		if (last_1_var_1_1 <= last_1_var_1_20) {
			var_1_15 = var_1_16;
		} else {
			if (last_1_var_1_15 || var_1_16) {
				var_1_15 = var_1_17;
			}
		}
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req5Batch32PS_CN_100
	unsigned char stepLocal_1 = var_1_15;
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_17 || stepLocal_0) {
		if (var_1_15 && stepLocal_1) {
			var_1_18 = (var_1_11 + var_1_19);
		} else {
			var_1_18 = var_1_19;
		}
	}


	// From: Req3Batch32PS_CN_100
	if ((var_1_12 * (min (var_1_18 , var_1_11))) > (- var_1_18)) {
		if (var_1_6 <= var_1_8) {
			if (var_1_15) {
				var_1_13 = var_1_8;
			} else {
				var_1_13 = var_1_5;
			}
		}
	}


	// From: Req6Batch32PS_CN_100
	if (var_1_11 == var_1_18) {
		var_1_20 = ((var_1_5 + var_1_21) + var_1_8);
	}


	// From: Req1Batch32PS_CN_100
	if (-32 < var_1_13) {
		var_1_1 = (((var_1_4 - var_1_5) + var_1_6) - (var_1_7 + (abs (var_1_8))));
	}


	// From: Req2Batch32PS_CN_100
	if ((var_1_13 + (max (var_1_13 , var_1_6))) == var_1_5) {
		var_1_9 = ((4.5f + var_1_11) - var_1_12);
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req7Batch32PS_CN_100
	var_1_22 = var_1_12;


	// From: Req8Batch32PS_CN_100
	var_1_23 = var_1_8;


	// From: Req9Batch32PS_CN_100
	var_1_24 = var_1_6;
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 95);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 64);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -1073741823);
	assume_abort_if_not(var_1_30 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -1073741823);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 1073741823);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 1073741824);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 1073741823);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((((-32 < var_1_13) ? (var_1_1 == ((unsigned char) (((var_1_4 - var_1_5) + var_1_6) - (var_1_7 + (abs (var_1_8)))))) : 1) && (((var_1_13 + (max (var_1_13 , var_1_6))) == var_1_5) ? (var_1_9 == ((float) ((4.5f + var_1_11) - var_1_12))) : (var_1_9 == ((float) var_1_12)))) && (((var_1_12 * (min (var_1_18 , var_1_11))) > (- var_1_18)) ? ((var_1_6 <= var_1_8) ? (var_1_15 ? (var_1_13 == ((signed short int) var_1_8)) : (var_1_13 == ((signed short int) var_1_5))) : 1) : 1)) && ((var_1_5 >= var_1_6) ? ((last_1_var_1_1 <= last_1_var_1_20) ? (var_1_15 == ((unsigned char) var_1_16)) : ((last_1_var_1_15 || var_1_16) ? (var_1_15 == ((unsigned char) var_1_17)) : 1)) : (var_1_15 == ((unsigned char) var_1_17)))) && ((var_1_17 || var_1_15) ? ((var_1_15 && var_1_15) ? (var_1_18 == ((float) (var_1_11 + var_1_19))) : (var_1_18 == ((float) var_1_19))) : 1)) && ((var_1_11 == var_1_18) ? (var_1_20 == ((signed char) ((var_1_5 + var_1_21) + var_1_8))) : 1)) && (var_1_22 == ((double) var_1_12))) && (var_1_23 == ((unsigned long int) var_1_8))) && (var_1_24 == ((unsigned long int) var_1_6))
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
