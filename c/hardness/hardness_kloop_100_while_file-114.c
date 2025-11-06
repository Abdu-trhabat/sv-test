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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114100_while.c", 13, "reach_error"); }
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
signed char var_1_1 = 5;
unsigned char var_1_2 = 0;
signed char var_1_3 = -4;
signed char var_1_4 = 2;
unsigned long int var_1_5 = 0;
signed long int var_1_6 = 16;
signed long int var_1_7 = 2;
signed char var_1_8 = 4;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 32;
unsigned short int var_1_18 = 50003;
float var_1_19 = 10.55;
signed long int var_1_20 = 1873692269;
float var_1_21 = 49.8;
float var_1_22 = 32.2;
float var_1_23 = 0.0;
float var_1_24 = 499.5;
unsigned long int var_1_25 = 32;
signed short int var_1_26 = -256;
signed short int var_1_28 = 31175;
unsigned char var_1_29 = 25;
signed short int var_1_30 = -10;
unsigned char var_1_31 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_5 = 0;
unsigned char last_1_var_1_14 = 1;
unsigned short int last_1_var_1_17 = 32;
float last_1_var_1_19 = 10.55;
signed short int last_1_var_1_26 = -256;
unsigned char last_1_var_1_29 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch114100_while
	if ((last_1_var_1_26 * var_1_3) <= (max (var_1_4 , var_1_7))) {
		if (last_1_var_1_14) {
			var_1_12 = var_1_6;
		}
	}


	// From: Req5Batch114100_while
	if (var_1_6 != var_1_12) {
		var_1_13 = (max (16 , var_1_6));
	}


	// From: Req9Batch114100_while
	if ((last_1_var_1_19 * var_1_24) > var_1_23) {
		if ((var_1_4 <= last_1_var_1_17) || last_1_var_1_14) {
			var_1_25 = var_1_18;
		} else {
			if (var_1_6 == last_1_var_1_26) {
				var_1_25 = var_1_18;
			} else {
				var_1_25 = last_1_var_1_17;
			}
		}
	} else {
		var_1_25 = var_1_7;
	}


	// From: Req8Batch114100_while
	signed long int stepLocal_1 = (64 - var_1_6) - var_1_7;
	if (stepLocal_1 >= ((var_1_20 - var_1_18) - var_1_25)) {
		var_1_19 = ((var_1_21 + var_1_22) + (128.5f - (var_1_23 - var_1_24)));
	}


	// From: Req3Batch114100_while
	unsigned char stepLocal_0 = var_1_11;
	if (var_1_2) {
		var_1_8 = (max (var_1_7 , (25 - 100)));
	} else {
		if (var_1_9) {
			if (var_1_10 || stepLocal_0) {
				var_1_8 = var_1_3;
			}
		} else {
			var_1_8 = var_1_4;
		}
	}


	// From: Req6Batch114100_while
	if (var_1_2) {
		var_1_14 = (! (var_1_15 && (! var_1_16)));
	} else {
		if (var_1_15) {
			var_1_14 = var_1_16;
		}
	}


	// From: Req1Batch114100_while
	if (! var_1_14) {
		var_1_1 = (max ((var_1_3 + 4) , (var_1_4 + 10)));
	}


	// From: Req2Batch114100_while
	if (last_1_var_1_5 != (64 << (var_1_6 - var_1_7))) {
		if (var_1_14) {
			var_1_5 = var_1_7;
		}
	}


	// From: Req11Batch114100_while
	signed long int stepLocal_6 = var_1_6 << var_1_13;
	unsigned long int stepLocal_5 = var_1_5 / var_1_20;
	unsigned char stepLocal_4 = var_1_13;
	if (stepLocal_6 <= var_1_18) {
		if (((var_1_28 / var_1_6) / var_1_30) < stepLocal_5) {
			if (stepLocal_4 < (min (last_1_var_1_29 , (var_1_7 + var_1_3)))) {
				var_1_29 = var_1_6;
			} else {
				var_1_29 = 8;
			}
		} else {
			var_1_29 = var_1_31;
		}
	}


	// From: Req7Batch114100_while
	if ((var_1_13 + var_1_7) >= var_1_8) {
		var_1_17 = (var_1_18 - var_1_6);
	}


	// From: Req10Batch114100_while
	signed long int stepLocal_3 = var_1_20;
	unsigned short int stepLocal_2 = var_1_17;
	if ((var_1_7 * var_1_5) >= stepLocal_2) {
		var_1_26 = (var_1_3 + var_1_12);
	} else {
		if (var_1_25 <= stepLocal_3) {
			var_1_26 = ((31734 - var_1_7) - (var_1_28 - (min (var_1_6 , var_1_5))));
		} else {
			if (var_1_14) {
				var_1_26 = (max ((max ((min (var_1_5 , var_1_7)) , var_1_12)) , var_1_13));
			} else {
				var_1_26 = (max (var_1_13 , var_1_6));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 12);
	assume_abort_if_not(var_1_6 <= 24);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 12);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 1073741823);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 2305843.009213691400e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return (((((((((((! var_1_14) ? (var_1_1 == ((signed char) (max ((var_1_3 + 4) , (var_1_4 + 10))))) : 1) && ((last_1_var_1_5 != (64 << (var_1_6 - var_1_7))) ? (var_1_14 ? (var_1_5 == ((unsigned long int) var_1_7)) : 1) : 1)) && (var_1_2 ? (var_1_8 == ((signed char) (max (var_1_7 , (25 - 100))))) : (var_1_9 ? ((var_1_10 || var_1_11) ? (var_1_8 == ((signed char) var_1_3)) : 1) : (var_1_8 == ((signed char) var_1_4))))) && (((last_1_var_1_26 * var_1_3) <= (max (var_1_4 , var_1_7))) ? (last_1_var_1_14 ? (var_1_12 == ((signed char) var_1_6)) : 1) : 1)) && ((var_1_6 != var_1_12) ? (var_1_13 == ((unsigned char) (max (16 , var_1_6)))) : 1)) && (var_1_2 ? (var_1_14 == ((unsigned char) (! (var_1_15 && (! var_1_16))))) : (var_1_15 ? (var_1_14 == ((unsigned char) var_1_16)) : 1))) && (((var_1_13 + var_1_7) >= var_1_8) ? (var_1_17 == ((unsigned short int) (var_1_18 - var_1_6))) : 1)) && ((((64 - var_1_6) - var_1_7) >= ((var_1_20 - var_1_18) - var_1_25)) ? (var_1_19 == ((float) ((var_1_21 + var_1_22) + (128.5f - (var_1_23 - var_1_24))))) : 1)) && (((last_1_var_1_19 * var_1_24) > var_1_23) ? (((var_1_4 <= last_1_var_1_17) || last_1_var_1_14) ? (var_1_25 == ((unsigned long int) var_1_18)) : ((var_1_6 == last_1_var_1_26) ? (var_1_25 == ((unsigned long int) var_1_18)) : (var_1_25 == ((unsigned long int) last_1_var_1_17)))) : (var_1_25 == ((unsigned long int) var_1_7)))) && (((var_1_7 * var_1_5) >= var_1_17) ? (var_1_26 == ((signed short int) (var_1_3 + var_1_12))) : ((var_1_25 <= var_1_20) ? (var_1_26 == ((signed short int) ((31734 - var_1_7) - (var_1_28 - (min (var_1_6 , var_1_5)))))) : (var_1_14 ? (var_1_26 == ((signed short int) (max ((max ((min (var_1_5 , var_1_7)) , var_1_12)) , var_1_13)))) : (var_1_26 == ((signed short int) (max (var_1_13 , var_1_6)))))))) && (((var_1_6 << var_1_13) <= var_1_18) ? ((((var_1_28 / var_1_6) / var_1_30) < (var_1_5 / var_1_20)) ? ((var_1_13 < (min (last_1_var_1_29 , (var_1_7 + var_1_3)))) ? (var_1_29 == ((unsigned char) var_1_6)) : (var_1_29 == ((unsigned char) 8))) : (var_1_29 == ((unsigned char) var_1_31))) : 1)
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
