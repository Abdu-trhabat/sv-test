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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 50;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 64;
signed short int var_1_7 = -2;
unsigned long int var_1_8 = 4064846883;
unsigned char var_1_9 = 1;
unsigned char var_1_11 = 50;
unsigned char var_1_12 = 128;
float var_1_13 = 15.5;
float var_1_14 = 5.25;
float var_1_15 = 2.1390000000000002;
float var_1_16 = 128.2;
float var_1_17 = 99999999999.5;
float var_1_18 = 200.1;
float var_1_19 = 25.8;
float var_1_20 = 499.5;
unsigned short int var_1_21 = 2;
signed char var_1_22 = -25;
signed char var_1_25 = 100;
signed char var_1_26 = 2;
signed char var_1_27 = 32;
signed char var_1_28 = 8;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 32.75;
float var_1_35 = 0.0;
signed short int var_1_36 = -25;
signed char var_1_37 = -128;
signed short int var_1_38 = 100;
signed short int var_1_39 = 20953;
signed short int var_1_40 = 10000;
unsigned short int var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned short int var_1_44 = 1;
unsigned long int var_1_45 = 5;
unsigned short int var_1_46 = 8;
unsigned long int var_1_48 = 64;
unsigned short int var_1_49 = 50586;
double var_1_50 = 5.75;
unsigned long int var_1_51 = 3283927809;
unsigned long int var_1_52 = 1313367881;
unsigned long int var_1_53 = 1880061127;
unsigned short int var_1_54 = 32;
signed long int var_1_55 = 25;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 50;
signed short int last_1_var_1_7 = -2;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_42 = 1;
unsigned short int last_1_var_1_44 = 1;
unsigned char last_1_var_1_56 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch59Amount250
	signed long int stepLocal_19 = - (var_1_26 * last_1_var_1_1);
	if (stepLocal_19 < var_1_25) {
		var_1_54 = last_1_var_1_7;
	} else {
		var_1_54 = var_1_6;
	}


	// From: Req4Batch59Amount250
	if (var_1_12 < last_1_var_1_42) {
		var_1_13 = (((7.5f + var_1_14) + var_1_15) + var_1_16);
	} else {
		var_1_13 = (var_1_16 + ((var_1_17 + var_1_18) - var_1_19));
	}


	// From: Req1Batch59Amount250
	if ((last_1_var_1_44 + (last_1_var_1_56 + 4u)) != last_1_var_1_9) {
		var_1_1 = ((var_1_5 - 2) - var_1_6);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req8Batch59Amount250
	if (var_1_15 <= var_1_19) {
		var_1_29 = (var_1_30 && var_1_31);
	} else {
		var_1_29 = (! (var_1_32 || var_1_33));
	}


	// From: Req9Batch59Amount250
	if (var_1_18 > var_1_17) {
		if (var_1_29) {
			var_1_34 = (7.75f - (var_1_35 - var_1_18));
		} else {
			var_1_34 = (max ((var_1_18 - (min (var_1_19 , var_1_35))) , var_1_17));
		}
	}


	// From: Req10Batch59Amount250
	if (var_1_34 != var_1_16) {
		var_1_36 = var_1_27;
	} else {
		var_1_36 = var_1_12;
	}


	// From: Req16Batch59Amount250
	var_1_45 = (min ((abs (max (var_1_26 , var_1_6))) , 256u));


	// From: Req21Batch59Amount250
	if (var_1_29) {
		var_1_56 = var_1_25;
	}


	// From: Req17Batch59Amount250
	unsigned char stepLocal_17 = var_1_28 <= -100;
	if (var_1_29) {
		var_1_46 = (abs (var_1_40));
	} else {
		if ((var_1_54 >= var_1_11) || stepLocal_17) {
			var_1_46 = var_1_25;
		} else {
			var_1_46 = ((max ((abs (var_1_39)) , var_1_12)) + var_1_6);
		}
	}


	// From: Req22Batch59Amount250
	if (var_1_13 == (var_1_16 + var_1_34)) {
		if (var_1_29 || (! (var_1_32 || var_1_29))) {
			var_1_57 = (var_1_26 + 64);
		} else {
			var_1_57 = 16;
		}
	} else {
		var_1_57 = 10;
	}


	// From: Req3Batch59Amount250
	if (! var_1_29) {
		if ((var_1_56 >= var_1_56) && var_1_29) {
			var_1_9 = (min (var_1_6 , var_1_5));
		} else {
			var_1_9 = (min ((max (var_1_5 , (max (var_1_6 , var_1_11)))) , var_1_12));
		}
	}


	// From: Req6Batch59Amount250
	if (var_1_29) {
		var_1_21 = ((min (var_1_11 , var_1_6)) + 50);
	} else {
		var_1_21 = ((min (var_1_12 , var_1_5)) + var_1_11);
	}


	// From: Req7Batch59Amount250
	if (var_1_29) {
		var_1_22 = var_1_5;
	} else {
		if (var_1_29) {
			if (var_1_29) {
				var_1_22 = var_1_5;
			} else {
				var_1_22 = (((var_1_25 - var_1_26) - (var_1_27 - var_1_28)) - 8);
			}
		}
	}


	// From: Req13Batch59Amount250
	signed long int stepLocal_14 = 16;
	if ((- (var_1_40 * var_1_26)) > stepLocal_14) {
		var_1_41 = ((min (var_1_46 , var_1_36)) + ((var_1_28 + var_1_5) + 4));
	} else {
		var_1_41 = ((min (var_1_6 , var_1_39)) + var_1_12);
	}


	// From: Req2Batch59Amount250
	signed long int stepLocal_4 = var_1_46 >> var_1_54;
	signed long int stepLocal_3 = ~ (min (var_1_22 , var_1_54));
	unsigned short int stepLocal_2 = var_1_54;
	unsigned short int stepLocal_1 = var_1_54;
	unsigned long int stepLocal_0 = max ((var_1_6 / var_1_8) , 4u);
	if (var_1_5 >= stepLocal_3) {
		if (var_1_22 <= stepLocal_4) {
			if (stepLocal_1 > (var_1_22 ^ (var_1_5 + var_1_9))) {
				var_1_7 = (min ((var_1_5 + 128) , var_1_22));
			} else {
				if (stepLocal_2 > (var_1_8 - var_1_5)) {
					if (var_1_9 >= stepLocal_0) {
						var_1_7 = var_1_5;
					}
				} else {
					var_1_7 = var_1_5;
				}
			}
		}
	} else {
		var_1_7 = var_1_6;
	}


	// From: Req11Batch59Amount250
	unsigned char stepLocal_7 = var_1_57 < (var_1_27 / var_1_5);
	if (var_1_29 || stepLocal_7) {
		var_1_37 = (var_1_27 + (var_1_26 + var_1_28));
	} else {
		var_1_37 = (var_1_26 - var_1_25);
	}


	// From: Req12Batch59Amount250
	unsigned char stepLocal_13 = var_1_30;
	signed long int stepLocal_12 = abs (var_1_25);
	unsigned char stepLocal_11 = var_1_12;
	unsigned char stepLocal_10 = var_1_5;
	signed long int stepLocal_9 = 256 + var_1_37;
	unsigned char stepLocal_8 = var_1_29;
	if (((max (var_1_37 , var_1_5)) * var_1_28) >= stepLocal_12) {
		if (stepLocal_10 >= var_1_37) {
			if (var_1_29) {
				var_1_38 = (var_1_27 - var_1_12);
			}
		} else {
			if (var_1_32 || stepLocal_8) {
				var_1_38 = (max (var_1_37 , ((25 - var_1_6) + var_1_28)));
			} else {
				if (stepLocal_11 != (var_1_46 + (var_1_37 / var_1_5))) {
					if (stepLocal_13 && (var_1_13 < (var_1_17 * 1.375f))) {
						var_1_38 = (var_1_25 - (var_1_39 - var_1_37));
					}
				} else {
					if (stepLocal_9 >= (var_1_11 + var_1_28)) {
						var_1_38 = var_1_1;
					} else {
						var_1_38 = (var_1_12 - 64);
					}
				}
			}
		}
	} else {
		if (var_1_29) {
			var_1_38 = (var_1_39 - (abs (var_1_5)));
		} else {
			var_1_38 = ((min (var_1_6 , var_1_12)) - (var_1_39 - (var_1_40 - var_1_27)));
		}
	}


	// From: Req20Batch59Amount250
	var_1_55 = var_1_7;


	// From: Req18Batch59Amount250
	unsigned char stepLocal_18 = var_1_1;
	if (stepLocal_18 > (var_1_21 ^ (var_1_49 - var_1_28))) {
		if (((var_1_18 + var_1_35) / var_1_50) <= 256.4) {
			var_1_48 = (var_1_51 - var_1_38);
		} else {
			var_1_48 = ((max (var_1_51 , (var_1_52 + var_1_53))) - 8u);
		}
	} else {
		if (var_1_16 <= var_1_18) {
			var_1_48 = (max (var_1_28 , var_1_40));
		} else {
			var_1_48 = (3623813222u - var_1_49);
		}
	}


	// From: Req5Batch59Amount250
	unsigned char stepLocal_6 = var_1_11;
	unsigned long int stepLocal_5 = var_1_48;
	if ((- 32) == stepLocal_6) {
		var_1_20 = ((var_1_19 - (max (var_1_18 , var_1_17))) + (min (var_1_16 , (min (var_1_14 , var_1_15)))));
	} else {
		if (stepLocal_5 <= (- (var_1_8 - var_1_6))) {
			if (var_1_29) {
				var_1_20 = var_1_19;
			}
		} else {
			var_1_20 = var_1_14;
		}
	}


	// From: Req14Batch59Amount250
	signed char stepLocal_15 = var_1_25;
	if (200.2 <= (var_1_20 + var_1_20)) {
		if (stepLocal_15 == ((min (16 , var_1_28)) - (var_1_26 + var_1_27))) {
			var_1_42 = (var_1_5 - var_1_28);
		} else {
			if (var_1_29) {
				var_1_42 = (var_1_5 - var_1_25);
			}
		}
	} else {
		var_1_42 = (var_1_26 + (min ((min (var_1_25 , var_1_6)) , var_1_27)));
	}


	// From: Req15Batch59Amount250
	unsigned long int stepLocal_16 = var_1_48;
	if (last_1_var_1_44 <= stepLocal_16) {
		if (var_1_13 < var_1_19) {
			var_1_44 = (abs (var_1_6));
		}
	} else {
		var_1_44 = (min (var_1_40 , var_1_28));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -115292.1504606845700e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 1152921.504606845700e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -230584.3009213691390e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 94);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 31);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 8191);
	assume_abort_if_not(var_1_40 <= 16383);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 32767);
	assume_abort_if_not(var_1_49 <= 65535);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	assume_abort_if_not(var_1_50 != 0.0F);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 1073741823);
	assume_abort_if_not(var_1_52 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 1073741824);
	assume_abort_if_not(var_1_53 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_56 = var_1_56;
}

int property() {
	return (((((((((((((((((((((((last_1_var_1_44 + (last_1_var_1_56 + 4u)) != last_1_var_1_9) ? (var_1_1 == ((unsigned char) ((var_1_5 - 2) - var_1_6))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_5 >= (~ (min (var_1_22 , var_1_54)))) ? ((var_1_22 <= (var_1_46 >> var_1_54)) ? ((var_1_54 > (var_1_22 ^ (var_1_5 + var_1_9))) ? (var_1_7 == ((signed short int) (min ((var_1_5 + 128) , var_1_22)))) : ((var_1_54 > (var_1_8 - var_1_5)) ? ((var_1_9 >= (max ((var_1_6 / var_1_8) , 4u))) ? (var_1_7 == ((signed short int) var_1_5)) : 1) : (var_1_7 == ((signed short int) var_1_5)))) : 1) : (var_1_7 == ((signed short int) var_1_6)))) && ((! var_1_29) ? (((var_1_56 >= var_1_56) && var_1_29) ? (var_1_9 == ((unsigned char) (min (var_1_6 , var_1_5)))) : (var_1_9 == ((unsigned char) (min ((max (var_1_5 , (max (var_1_6 , var_1_11)))) , var_1_12))))) : 1)) && ((var_1_12 < last_1_var_1_42) ? (var_1_13 == ((float) (((7.5f + var_1_14) + var_1_15) + var_1_16))) : (var_1_13 == ((float) (var_1_16 + ((var_1_17 + var_1_18) - var_1_19)))))) && (((- 32) == var_1_11) ? (var_1_20 == ((float) ((var_1_19 - (max (var_1_18 , var_1_17))) + (min (var_1_16 , (min (var_1_14 , var_1_15))))))) : ((var_1_48 <= (- (var_1_8 - var_1_6))) ? (var_1_29 ? (var_1_20 == ((float) var_1_19)) : 1) : (var_1_20 == ((float) var_1_14))))) && (var_1_29 ? (var_1_21 == ((unsigned short int) ((min (var_1_11 , var_1_6)) + 50))) : (var_1_21 == ((unsigned short int) ((min (var_1_12 , var_1_5)) + var_1_11))))) && (var_1_29 ? (var_1_22 == ((signed char) var_1_5)) : (var_1_29 ? (var_1_29 ? (var_1_22 == ((signed char) var_1_5)) : (var_1_22 == ((signed char) (((var_1_25 - var_1_26) - (var_1_27 - var_1_28)) - 8)))) : 1))) && ((var_1_15 <= var_1_19) ? (var_1_29 == ((unsigned char) (var_1_30 && var_1_31))) : (var_1_29 == ((unsigned char) (! (var_1_32 || var_1_33)))))) && ((var_1_18 > var_1_17) ? (var_1_29 ? (var_1_34 == ((float) (7.75f - (var_1_35 - var_1_18)))) : (var_1_34 == ((float) (max ((var_1_18 - (min (var_1_19 , var_1_35))) , var_1_17))))) : 1)) && ((var_1_34 != var_1_16) ? (var_1_36 == ((signed short int) var_1_27)) : (var_1_36 == ((signed short int) var_1_12)))) && ((var_1_29 || (var_1_57 < (var_1_27 / var_1_5))) ? (var_1_37 == ((signed char) (var_1_27 + (var_1_26 + var_1_28)))) : (var_1_37 == ((signed char) (var_1_26 - var_1_25))))) && ((((max (var_1_37 , var_1_5)) * var_1_28) >= (abs (var_1_25))) ? ((var_1_5 >= var_1_37) ? (var_1_29 ? (var_1_38 == ((signed short int) (var_1_27 - var_1_12))) : 1) : ((var_1_32 || var_1_29) ? (var_1_38 == ((signed short int) (max (var_1_37 , ((25 - var_1_6) + var_1_28))))) : ((var_1_12 != (var_1_46 + (var_1_37 / var_1_5))) ? ((var_1_30 && (var_1_13 < (var_1_17 * 1.375f))) ? (var_1_38 == ((signed short int) (var_1_25 - (var_1_39 - var_1_37)))) : 1) : (((256 + var_1_37) >= (var_1_11 + var_1_28)) ? (var_1_38 == ((signed short int) var_1_1)) : (var_1_38 == ((signed short int) (var_1_12 - 64))))))) : (var_1_29 ? (var_1_38 == ((signed short int) (var_1_39 - (abs (var_1_5))))) : (var_1_38 == ((signed short int) ((min (var_1_6 , var_1_12)) - (var_1_39 - (var_1_40 - var_1_27)))))))) && (((- (var_1_40 * var_1_26)) > 16) ? (var_1_41 == ((unsigned short int) ((min (var_1_46 , var_1_36)) + ((var_1_28 + var_1_5) + 4)))) : (var_1_41 == ((unsigned short int) ((min (var_1_6 , var_1_39)) + var_1_12))))) && ((200.2 <= (var_1_20 + var_1_20)) ? ((var_1_25 == ((min (16 , var_1_28)) - (var_1_26 + var_1_27))) ? (var_1_42 == ((unsigned char) (var_1_5 - var_1_28))) : (var_1_29 ? (var_1_42 == ((unsigned char) (var_1_5 - var_1_25))) : 1)) : (var_1_42 == ((unsigned char) (var_1_26 + (min ((min (var_1_25 , var_1_6)) , var_1_27))))))) && ((last_1_var_1_44 <= var_1_48) ? ((var_1_13 < var_1_19) ? (var_1_44 == ((unsigned short int) (abs (var_1_6)))) : 1) : (var_1_44 == ((unsigned short int) (min (var_1_40 , var_1_28)))))) && (var_1_45 == ((unsigned long int) (min ((abs (max (var_1_26 , var_1_6))) , 256u))))) && (var_1_29 ? (var_1_46 == ((unsigned short int) (abs (var_1_40)))) : (((var_1_54 >= var_1_11) || (var_1_28 <= -100)) ? (var_1_46 == ((unsigned short int) var_1_25)) : (var_1_46 == ((unsigned short int) ((max ((abs (var_1_39)) , var_1_12)) + var_1_6)))))) && ((var_1_1 > (var_1_21 ^ (var_1_49 - var_1_28))) ? ((((var_1_18 + var_1_35) / var_1_50) <= 256.4) ? (var_1_48 == ((unsigned long int) (var_1_51 - var_1_38))) : (var_1_48 == ((unsigned long int) ((max (var_1_51 , (var_1_52 + var_1_53))) - 8u)))) : ((var_1_16 <= var_1_18) ? (var_1_48 == ((unsigned long int) (max (var_1_28 , var_1_40)))) : (var_1_48 == ((unsigned long int) (3623813222u - var_1_49)))))) && (((- (var_1_26 * last_1_var_1_1)) < var_1_25) ? (var_1_54 == ((unsigned short int) last_1_var_1_7)) : (var_1_54 == ((unsigned short int) var_1_6)))) && (var_1_55 == ((signed long int) var_1_7))) && (var_1_29 ? (var_1_56 == ((unsigned char) var_1_25)) : 1)) && ((var_1_13 == (var_1_16 + var_1_34)) ? ((var_1_29 || (! (var_1_32 || var_1_29))) ? (var_1_57 == ((unsigned char) (var_1_26 + 64))) : (var_1_57 == ((unsigned char) 16))) : (var_1_57 == ((unsigned char) 10)))
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
