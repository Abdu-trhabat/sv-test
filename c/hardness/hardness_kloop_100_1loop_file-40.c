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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





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
float var_1_1 = 4.5;
unsigned char var_1_3 = 50;
unsigned char var_1_4 = 32;
unsigned char var_1_6 = 0;
float var_1_10 = 31.5;
signed short int var_1_11 = 200;
signed short int var_1_12 = 10;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 4;
unsigned char var_1_16 = 1;
float var_1_17 = 32.2;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 100;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 32;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 4;
signed short int var_1_24 = -8;
signed short int var_1_26 = 10000;
double var_1_27 = 1.45;
double var_1_28 = 4.4;
double var_1_29 = 4.25;
double var_1_30 = 100000000.4;
double var_1_31 = 24.2;
unsigned long int var_1_32 = 1000000;
float var_1_33 = 31.3;
unsigned long int var_1_34 = 256;
float var_1_35 = 100.25;
float var_1_36 = 0.0;
float var_1_37 = 5.3;
float var_1_38 = 0.0;
float var_1_39 = 0.0;
float var_1_40 = 3.5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_24 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch40100_1loop
	if ((var_1_18 * var_1_19) >= var_1_4) {
		if (var_1_16 || (! var_1_6)) {
			var_1_23 = var_1_18;
		} else {
			var_1_23 = var_1_22;
		}
	} else {
		var_1_23 = var_1_4;
	}


	// From: Req7Batch40100_1loop
	var_1_32 = (min (var_1_19 , 25u));


	// From: Req8Batch40100_1loop
	unsigned char stepLocal_5 = var_1_22;
	if (var_1_20 > stepLocal_5) {
		var_1_33 = (var_1_30 - var_1_31);
	}


	// From: Req10Batch40100_1loop
	unsigned char stepLocal_6 = var_1_21;
	if (var_1_16) {
		if ((4 + var_1_22) <= stepLocal_6) {
			var_1_35 = ((max (var_1_30 , (var_1_36 - var_1_37))) - (var_1_38 - (var_1_39 - var_1_40)));
		} else {
			var_1_35 = var_1_30;
		}
	} else {
		var_1_35 = var_1_36;
	}


	// From: Req5Batch40100_1loop
	unsigned long int stepLocal_4 = var_1_32 / var_1_18;
	unsigned char stepLocal_3 = var_1_6;
	if (stepLocal_4 > last_1_var_1_24) {
		if (var_1_16 || stepLocal_3) {
			var_1_24 = ((var_1_15 - (var_1_26 - 1)) + var_1_19);
		} else {
			var_1_24 = var_1_23;
		}
	} else {
		var_1_24 = var_1_26;
	}


	// From: Req9Batch40100_1loop
	if (! var_1_16) {
		if (var_1_35 < (min (var_1_28 , (var_1_31 - var_1_30)))) {
			if (var_1_6) {
				var_1_34 = var_1_3;
			}
		} else {
			var_1_34 = 0u;
		}
	}


	// From: Req6Batch40100_1loop
	if (var_1_34 >= var_1_20) {
		if (var_1_16) {
			if (var_1_6) {
				var_1_27 = (var_1_28 + var_1_29);
			} else {
				var_1_27 = (abs (var_1_30 - var_1_31));
			}
		}
	}


	// From: Req1Batch40100_1loop
	if ((var_1_24 / (var_1_3 + var_1_4)) == (min (8 , var_1_34))) {
		if ((var_1_34 > var_1_24) && var_1_6) {
			if ((var_1_35 + var_1_27) != var_1_35) {
				var_1_1 = 8.6f;
			}
		} else {
			if ((var_1_24 & var_1_34) != var_1_4) {
				if (var_1_6) {
					var_1_1 = var_1_10;
				}
			} else {
				var_1_1 = var_1_10;
			}
		}
	}


	// From: Req2Batch40100_1loop
	unsigned long int stepLocal_0 = var_1_32 * var_1_23;
	if (var_1_4 >= stepLocal_0) {
		if (var_1_35 > var_1_1) {
			var_1_11 = (max (var_1_23 , var_1_3));
		} else {
			var_1_11 = var_1_12;
		}
	} else {
		var_1_11 = var_1_23;
	}


	// From: Req3Batch40100_1loop
	unsigned char stepLocal_2 = var_1_16;
	unsigned char stepLocal_1 = var_1_4;
	if (stepLocal_1 <= (var_1_14 - var_1_15)) {
		if (var_1_6 || stepLocal_2) {
			var_1_13 = (abs (var_1_3));
		}
	} else {
		if ((var_1_17 - 64.25f) < (- (var_1_10 * var_1_27))) {
			var_1_13 = (((var_1_18 + var_1_19) - var_1_20) - (var_1_21 + var_1_22));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 128);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 255);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 95);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 95);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 64);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 8191);
	assume_abort_if_not(var_1_26 <= 16383);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 4611686.018427383000e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 2305843.009213691400e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	return (((((((((((var_1_24 / (var_1_3 + var_1_4)) == (min (8 , var_1_34))) ? (((var_1_34 > var_1_24) && var_1_6) ? (((var_1_35 + var_1_27) != var_1_35) ? (var_1_1 == ((float) 8.6f)) : 1) : (((var_1_24 & var_1_34) != var_1_4) ? (var_1_6 ? (var_1_1 == ((float) var_1_10)) : 1) : (var_1_1 == ((float) var_1_10)))) : 1) && ((var_1_4 >= (var_1_32 * var_1_23)) ? ((var_1_35 > var_1_1) ? (var_1_11 == ((signed short int) (max (var_1_23 , var_1_3)))) : (var_1_11 == ((signed short int) var_1_12))) : (var_1_11 == ((signed short int) var_1_23)))) && ((var_1_4 <= (var_1_14 - var_1_15)) ? ((var_1_6 || var_1_16) ? (var_1_13 == ((unsigned char) (abs (var_1_3)))) : 1) : (((var_1_17 - 64.25f) < (- (var_1_10 * var_1_27))) ? (var_1_13 == ((unsigned char) (((var_1_18 + var_1_19) - var_1_20) - (var_1_21 + var_1_22)))) : 1))) && (((var_1_18 * var_1_19) >= var_1_4) ? ((var_1_16 || (! var_1_6)) ? (var_1_23 == ((unsigned char) var_1_18)) : (var_1_23 == ((unsigned char) var_1_22))) : (var_1_23 == ((unsigned char) var_1_4)))) && (((var_1_32 / var_1_18) > last_1_var_1_24) ? ((var_1_16 || var_1_6) ? (var_1_24 == ((signed short int) ((var_1_15 - (var_1_26 - 1)) + var_1_19))) : (var_1_24 == ((signed short int) var_1_23))) : (var_1_24 == ((signed short int) var_1_26)))) && ((var_1_34 >= var_1_20) ? (var_1_16 ? (var_1_6 ? (var_1_27 == ((double) (var_1_28 + var_1_29))) : (var_1_27 == ((double) (abs (var_1_30 - var_1_31))))) : 1) : 1)) && (var_1_32 == ((unsigned long int) (min (var_1_19 , 25u))))) && ((var_1_20 > var_1_22) ? (var_1_33 == ((float) (var_1_30 - var_1_31))) : 1)) && ((! var_1_16) ? ((var_1_35 < (min (var_1_28 , (var_1_31 - var_1_30)))) ? (var_1_6 ? (var_1_34 == ((unsigned long int) var_1_3)) : 1) : (var_1_34 == ((unsigned long int) 0u))) : 1)) && (var_1_16 ? (((4 + var_1_22) <= var_1_21) ? (var_1_35 == ((float) ((max (var_1_30 , (var_1_36 - var_1_37))) - (var_1_38 - (var_1_39 - var_1_40))))) : (var_1_35 == ((float) var_1_30))) : (var_1_35 == ((float) var_1_36)))
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
