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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128100_while.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned short int var_1_3 = 16;
signed long int var_1_5 = -100;
double var_1_6 = 256.5;
double var_1_7 = 10000.4;
signed char var_1_9 = 10;
unsigned char var_1_10 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -64;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -2;
unsigned short int var_1_21 = 50;
signed long int var_1_23 = -32;
signed long int var_1_24 = 8;
signed char var_1_25 = 8;
signed char var_1_26 = 25;
signed char var_1_27 = -1;
signed char var_1_28 = -16;
signed char var_1_29 = 8;
signed char var_1_30 = 1;
signed char var_1_31 = -16;
signed char var_1_32 = 64;
signed char var_1_33 = 8;
double var_1_34 = 10000000000000.5;
double var_1_35 = 16.25;
double var_1_36 = 49.3;
double var_1_37 = 31.2;
double var_1_38 = 4.5;
unsigned short int var_1_39 = 16;
double var_1_40 = 9.75;
unsigned short int var_1_41 = 58812;
double var_1_42 = 255.5;
signed short int var_1_43 = -4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 1;
unsigned char last_1_var_1_16 = 8;
signed short int last_1_var_1_18 = -64;
signed short int last_1_var_1_20 = -2;
unsigned short int last_1_var_1_21 = 50;
signed long int last_1_var_1_23 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch128100_while
	signed long int stepLocal_4 = var_1_5;
	if ((abs (max (last_1_var_1_21 , 2))) < stepLocal_4) {
		var_1_23 = (max (var_1_24 , (min (-128 , last_1_var_1_21))));
	} else {
		var_1_23 = last_1_var_1_16;
	}


	// From: Req3Batch128100_while
	if (var_1_23 == var_1_15) {
		var_1_16 = (max (var_1_15 , (128 - var_1_17)));
	} else {
		var_1_16 = var_1_15;
	}


	// From: Req6Batch128100_while
	if (last_1_var_1_23 >= (~ (last_1_var_1_18 * last_1_var_1_20))) {
		var_1_21 = var_1_17;
	} else {
		var_1_21 = ((8 + last_1_var_1_10) + 2);
	}


	// From: Req9Batch128100_while
	signed long int stepLocal_7 = ~ var_1_21;
	if (stepLocal_7 <= (var_1_27 + var_1_3)) {
		var_1_31 = (25 - (var_1_32 - var_1_33));
	} else {
		var_1_31 = var_1_27;
	}


	// From: Req12Batch128100_while
	var_1_42 = var_1_35;


	// From: Req13Batch128100_while
	var_1_43 = var_1_28;


	// From: Req8Batch128100_while
	signed long int stepLocal_6 = (abs (var_1_24)) + var_1_15;
	unsigned char stepLocal_5 = var_1_21 > 0;
	if ((var_1_42 == var_1_7) && stepLocal_5) {
		var_1_25 = (((min (var_1_26 , var_1_27)) + (max (var_1_28 , var_1_29))) + var_1_30);
	} else {
		if (var_1_19) {
			var_1_25 = var_1_9;
		} else {
			if (var_1_23 >= stepLocal_6) {
				var_1_25 = var_1_26;
			}
		}
	}


	// From: Req10Batch128100_while
	if (var_1_6 <= var_1_42) {
		var_1_34 = ((var_1_35 + var_1_36) - var_1_7);
	} else {
		var_1_34 = (min (var_1_36 , (var_1_35 + (var_1_37 - var_1_38))));
	}


	// From: Req11Batch128100_while
	if (var_1_36 < (var_1_34 / var_1_40)) {
		var_1_39 = (var_1_41 - (var_1_15 + var_1_33));
	}


	// From: Req1Batch128100_while
	signed long int stepLocal_0 = var_1_23;
	if (((var_1_23 / var_1_3) * var_1_21) >= stepLocal_0) {
		if ((var_1_6 - (var_1_7 + 49.5)) > var_1_34) {
			var_1_1 = var_1_9;
		} else {
			var_1_1 = -64;
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req2Batch128100_while
	if ((max ((- var_1_6) , (var_1_7 * var_1_34))) != (var_1_34 * var_1_42)) {
		if (! var_1_13) {
			var_1_10 = 5;
		}
	} else {
		if (var_1_14) {
			var_1_10 = var_1_15;
		} else {
			var_1_10 = 5;
		}
	}


	// From: Req5Batch128100_while
	signed long int stepLocal_3 = (var_1_9 * 16) * var_1_43;
	if (stepLocal_3 < (-64 + (var_1_21 / var_1_3))) {
		var_1_20 = var_1_9;
	}


	// From: Req4Batch128100_while
	unsigned char stepLocal_2 = var_1_10 <= var_1_15;
	signed long int stepLocal_1 = 100 ^ var_1_10;
	if (stepLocal_2 || var_1_19) {
		if (stepLocal_1 >= var_1_21) {
			var_1_18 = var_1_10;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483647);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -31);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -31);
	assume_abort_if_not(var_1_27 <= 32);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -31);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -31);
	assume_abort_if_not(var_1_29 <= 31);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 32767);
	assume_abort_if_not(var_1_41 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	return (((((((((((((((var_1_23 / var_1_3) * var_1_21) >= var_1_23) ? (((var_1_6 - (var_1_7 + 49.5)) > var_1_34) ? (var_1_1 == ((signed char) var_1_9)) : (var_1_1 == ((signed char) -64))) : (var_1_1 == ((signed char) var_1_9))) && (((max ((- var_1_6) , (var_1_7 * var_1_34))) != (var_1_34 * var_1_42)) ? ((! var_1_13) ? (var_1_10 == ((unsigned char) 5)) : 1) : (var_1_14 ? (var_1_10 == ((unsigned char) var_1_15)) : (var_1_10 == ((unsigned char) 5))))) && ((var_1_23 == var_1_15) ? (var_1_16 == ((unsigned char) (max (var_1_15 , (128 - var_1_17))))) : (var_1_16 == ((unsigned char) var_1_15)))) && (((var_1_10 <= var_1_15) || var_1_19) ? (((100 ^ var_1_10) >= var_1_21) ? (var_1_18 == ((signed short int) var_1_10)) : 1) : 1)) && ((((var_1_9 * 16) * var_1_43) < (-64 + (var_1_21 / var_1_3))) ? (var_1_20 == ((signed short int) var_1_9)) : 1)) && ((last_1_var_1_23 >= (~ (last_1_var_1_18 * last_1_var_1_20))) ? (var_1_21 == ((unsigned short int) var_1_17)) : (var_1_21 == ((unsigned short int) ((8 + last_1_var_1_10) + 2))))) && (((abs (max (last_1_var_1_21 , 2))) < var_1_5) ? (var_1_23 == ((signed long int) (max (var_1_24 , (min (-128 , last_1_var_1_21)))))) : (var_1_23 == ((signed long int) last_1_var_1_16)))) && (((var_1_42 == var_1_7) && (var_1_21 > 0)) ? (var_1_25 == ((signed char) (((min (var_1_26 , var_1_27)) + (max (var_1_28 , var_1_29))) + var_1_30))) : (var_1_19 ? (var_1_25 == ((signed char) var_1_9)) : ((var_1_23 >= ((abs (var_1_24)) + var_1_15)) ? (var_1_25 == ((signed char) var_1_26)) : 1)))) && (((~ var_1_21) <= (var_1_27 + var_1_3)) ? (var_1_31 == ((signed char) (25 - (var_1_32 - var_1_33)))) : (var_1_31 == ((signed char) var_1_27)))) && ((var_1_6 <= var_1_42) ? (var_1_34 == ((double) ((var_1_35 + var_1_36) - var_1_7))) : (var_1_34 == ((double) (min (var_1_36 , (var_1_35 + (var_1_37 - var_1_38)))))))) && ((var_1_36 < (var_1_34 / var_1_40)) ? (var_1_39 == ((unsigned short int) (var_1_41 - (var_1_15 + var_1_33)))) : 1)) && (var_1_42 == ((double) var_1_35))) && (var_1_43 == ((signed short int) var_1_28))
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
