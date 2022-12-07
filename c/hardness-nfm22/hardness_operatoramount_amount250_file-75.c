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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 5;
float var_1_8 = 99.5;
float var_1_10 = 256.85;
float var_1_11 = 256.75;
float var_1_12 = 1.75;
float var_1_13 = 63.25;
float var_1_14 = 16.891;
signed long int var_1_15 = -50;
unsigned short int var_1_17 = 32;
unsigned short int var_1_18 = 63051;
signed short int var_1_19 = 2;
unsigned short int var_1_21 = 25;
float var_1_22 = 100000000000000.4;
float var_1_23 = 0.0;
float var_1_24 = 10000000000000.6;
signed short int var_1_25 = 16;
signed short int var_1_26 = 2;
float var_1_27 = 5.4;
float var_1_28 = 7.9;
signed char var_1_29 = -1;
signed char var_1_30 = 10;
unsigned char var_1_31 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
float var_1_37 = 999999999.25;
float var_1_38 = 15.5;
float var_1_39 = 4.2;
signed short int var_1_40 = 1;
signed char var_1_41 = -50;
signed char var_1_42 = 8;
signed char var_1_43 = -1;
unsigned char var_1_45 = 1;
signed short int var_1_46 = -4;
unsigned long int var_1_48 = 4;
unsigned long int var_1_50 = 1000000000;
unsigned long int var_1_51 = 1704085632;
unsigned long int var_1_52 = 1956060976;
signed char var_1_54 = 2;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
signed long int var_1_57 = -100;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
unsigned char last_1_var_1_6 = 5;
signed long int last_1_var_1_15 = -50;
unsigned short int last_1_var_1_17 = 32;
signed short int last_1_var_1_19 = 2;
unsigned short int last_1_var_1_21 = 25;
float last_1_var_1_22 = 100000000000000.4;
signed char last_1_var_1_29 = -1;
unsigned char last_1_var_1_31 = 1;
unsigned char last_1_var_1_45 = 1;
signed short int last_1_var_1_46 = -4;
unsigned long int last_1_var_1_48 = 4;
signed char last_1_var_1_54 = 2;
unsigned char last_1_var_1_55 = 1;
signed long int last_1_var_1_57 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch75Amount250
	if ((4 - (abs (var_1_40))) < last_1_var_1_17) {
		if (last_1_var_1_21 >= last_1_var_1_6) {
			if ((var_1_4 * 16) > last_1_var_1_6) {
				var_1_46 = (var_1_42 - (min (var_1_40 , (last_1_var_1_29 + var_1_4))));
			} else {
				var_1_46 = (max ((last_1_var_1_57 - 32) , ((last_1_var_1_21 + var_1_25) - 10)));
			}
		} else {
			var_1_46 = (min (last_1_var_1_46 , last_1_var_1_6));
		}
	} else {
		var_1_46 = (var_1_25 + var_1_30);
	}


	// From: Req13Batch75Amount250
	signed long int stepLocal_6 = last_1_var_1_29;
	unsigned char stepLocal_5 = last_1_var_1_55;
	signed long int stepLocal_4 = last_1_var_1_19;
	if ((-50 / var_1_25) == stepLocal_4) {
		var_1_41 = (abs (var_1_26 + var_1_25));
	} else {
		if (last_1_var_1_31) {
			var_1_41 = (10 - var_1_42);
		} else {
			if (stepLocal_5 || var_1_34) {
				if (((last_1_var_1_17 + last_1_var_1_15) ^ last_1_var_1_54) == stepLocal_6) {
					if (var_1_11 >= last_1_var_1_22) {
						var_1_41 = (var_1_26 + var_1_40);
					}
				}
			} else {
				var_1_41 = (var_1_30 + var_1_40);
			}
		}
	}


	// From: Req10Batch75Amount250
	if (last_1_var_1_17 >= ((var_1_25 + var_1_26) + var_1_5)) {
		if ((last_1_var_1_6 / var_1_18) <= (last_1_var_1_1 - last_1_var_1_29)) {
			var_1_31 = (! (! var_1_34));
		} else {
			var_1_31 = (var_1_35 && (! 0));
		}
	} else {
		var_1_31 = (var_1_35 && var_1_36);
	}


	// From: Req15Batch75Amount250
	unsigned char stepLocal_8 = var_1_25 == 2;
	if (stepLocal_8 && var_1_31) {
		var_1_45 = (var_1_31 || (var_1_34 || var_1_36));
	} else {
		var_1_45 = var_1_34;
	}


	// From: Req3Batch75Amount250
	unsigned char stepLocal_0 = var_1_45;
	if (var_1_31 && stepLocal_0) {
		if (var_1_45) {
			var_1_8 = (var_1_10 - var_1_11);
		} else {
			var_1_8 = (min (((8.2107291886655017E18f - var_1_12) - 8.25f) , ((abs (var_1_13)) + var_1_14)));
		}
	} else {
		var_1_8 = (var_1_11 - (abs (var_1_14)));
	}


	// From: Req11Batch75Amount250
	if (var_1_31) {
		var_1_37 = (min ((var_1_24 - var_1_23) , 1.000000000000008E14f));
	} else {
		var_1_37 = (max (var_1_28 , var_1_24));
	}


	// From: Req6Batch75Amount250
	if (last_1_var_1_45) {
		var_1_19 = (last_1_var_1_48 + last_1_var_1_29);
	} else {
		var_1_19 = (last_1_var_1_48 + (max (last_1_var_1_1 , var_1_5)));
	}


	// From: Req8Batch75Amount250
	signed short int stepLocal_3 = var_1_19;
	signed short int stepLocal_2 = var_1_19;
	if (stepLocal_3 <= -256) {
		var_1_22 = (var_1_12 - (var_1_23 - var_1_24));
	} else {
		if (stepLocal_2 == (4 << (var_1_25 - var_1_26))) {
			var_1_22 = (var_1_13 + (var_1_27 + var_1_28));
		} else {
			var_1_22 = (max (var_1_11 , (var_1_24 - var_1_23)));
		}
	}


	// From: Req5Batch75Amount250
	signed long int stepLocal_1 = last_1_var_1_46;
	if (stepLocal_1 >= ((50 - last_1_var_1_17) ^ last_1_var_1_29)) {
		var_1_17 = (256 + var_1_4);
	} else {
		var_1_17 = ((var_1_18 - last_1_var_1_17) - (var_1_5 + last_1_var_1_17));
	}


	// From: Req9Batch75Amount250
	if ((last_1_var_1_6 + (last_1_var_1_21 % var_1_18)) != ((var_1_26 + -500) / var_1_25)) {
		var_1_29 = (max (var_1_25 , ((min (var_1_26 , -2)) + var_1_30)));
	} else {
		var_1_29 = (min ((var_1_25 - var_1_26) , var_1_30));
	}


	// From: Req1Batch75Amount250
	if (var_1_41 <= var_1_29) {
		var_1_1 = (var_1_4 - var_1_5);
	}


	// From: Req2Batch75Amount250
	if (var_1_45) {
		if (var_1_5 > var_1_4) {
			if ((16 > var_1_5) || (var_1_29 == (min (var_1_1 , var_1_41)))) {
				var_1_6 = var_1_5;
			} else {
				var_1_6 = (var_1_4 - var_1_5);
			}
		} else {
			var_1_6 = (min (var_1_5 , var_1_4));
		}
	} else {
		var_1_6 = var_1_5;
	}


	// From: Req18Batch75Amount250
	if ((var_1_14 + var_1_10) > var_1_8) {
		var_1_54 = (min (var_1_30 , ((abs (var_1_40)) + var_1_26)));
	}


	// From: Req7Batch75Amount250
	if (((max (var_1_54 , var_1_1)) + (~ var_1_19)) == var_1_6) {
		if ((var_1_5 * var_1_29) > var_1_17) {
			var_1_21 = (min (var_1_18 , 2));
		}
	}


	// From: Req4Batch75Amount250
	if (var_1_14 >= var_1_13) {
		var_1_15 = (var_1_41 + (max (var_1_21 , var_1_5)));
	}


	// From: Req19Batch75Amount250
	signed short int stepLocal_9 = var_1_19;
	if ((var_1_10 / var_1_23) > var_1_37) {
		if (var_1_21 >= stepLocal_9) {
			var_1_55 = 0;
		} else {
			var_1_55 = (((! var_1_36) && var_1_34) || var_1_56);
		}
	} else {
		var_1_55 = var_1_34;
	}


	// From: Req12Batch75Amount250
	if (! var_1_45) {
		var_1_38 = (var_1_14 + (max ((abs (var_1_24)) , (var_1_12 - var_1_39))));
	} else {
		if ((max (var_1_17 , -256)) > var_1_1) {
			if ((max ((var_1_26 - var_1_19) , (var_1_21 >> var_1_40))) < (var_1_4 + var_1_25)) {
				var_1_38 = (min ((abs (var_1_12 - var_1_39)) , (var_1_23 - var_1_11)));
			} else {
				var_1_38 = (max (var_1_10 , var_1_39));
			}
		} else {
			if ((var_1_15 * var_1_1) > var_1_40) {
				var_1_38 = var_1_11;
			} else {
				var_1_38 = var_1_10;
			}
		}
	}


	// From: Req14Batch75Amount250
	signed char stepLocal_7 = var_1_54;
	if (var_1_38 >= var_1_11) {
		if (var_1_40 < stepLocal_7) {
			var_1_43 = ((var_1_40 - var_1_26) + var_1_25);
		} else {
			var_1_43 = (var_1_30 + var_1_40);
		}
	}


	// From: Req17Batch75Amount250
	if (var_1_36) {
		if ((var_1_30 | (var_1_5 + var_1_4)) != var_1_18) {
			if (var_1_23 <= var_1_24) {
				if (((var_1_21 + var_1_6) == -500) && var_1_35) {
					var_1_48 = (((var_1_50 + 1000000000u) + (min (var_1_51 , var_1_52))) - var_1_6);
				}
			} else {
				var_1_48 = (var_1_51 + var_1_18);
			}
		} else {
			var_1_48 = ((abs (3636594529u)) - (max (var_1_42 , (min (var_1_52 , var_1_46)))));
		}
	}


	// From: Req20Batch75Amount250
	signed long int stepLocal_11 = var_1_17 * var_1_5;
	signed short int stepLocal_10 = var_1_19;
	if ((-1 + var_1_52) > stepLocal_10) {
		if ((min ((min (var_1_46 , var_1_25)) , (var_1_54 * 2))) < stepLocal_11) {
			var_1_57 = var_1_54;
		} else {
			var_1_57 = var_1_18;
		}
	} else {
		var_1_57 = var_1_48;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 49150);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 4611686.018427382800e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 14);
	assume_abort_if_not(var_1_25 <= 29);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 14);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -230584.3009213691390e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691390e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 9);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 536870911);
	assume_abort_if_not(var_1_50 <= 1073741824);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 1073741824);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 1073741824);
	assume_abort_if_not(var_1_52 <= 2147483647);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
}

int property() {
	return ((((((((((((((((((((var_1_41 <= var_1_29) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : 1) && (var_1_45 ? ((var_1_5 > var_1_4) ? (((16 > var_1_5) || (var_1_29 == (min (var_1_1 , var_1_41)))) ? (var_1_6 == ((unsigned char) var_1_5)) : (var_1_6 == ((unsigned char) (var_1_4 - var_1_5)))) : (var_1_6 == ((unsigned char) (min (var_1_5 , var_1_4))))) : (var_1_6 == ((unsigned char) var_1_5)))) && ((var_1_31 && var_1_45) ? (var_1_45 ? (var_1_8 == ((float) (var_1_10 - var_1_11))) : (var_1_8 == ((float) (min (((8.2107291886655017E18f - var_1_12) - 8.25f) , ((abs (var_1_13)) + var_1_14)))))) : (var_1_8 == ((float) (var_1_11 - (abs (var_1_14))))))) && ((var_1_14 >= var_1_13) ? (var_1_15 == ((signed long int) (var_1_41 + (max (var_1_21 , var_1_5))))) : 1)) && ((last_1_var_1_46 >= ((50 - last_1_var_1_17) ^ last_1_var_1_29)) ? (var_1_17 == ((unsigned short int) (256 + var_1_4))) : (var_1_17 == ((unsigned short int) ((var_1_18 - last_1_var_1_17) - (var_1_5 + last_1_var_1_17)))))) && (last_1_var_1_45 ? (var_1_19 == ((signed short int) (last_1_var_1_48 + last_1_var_1_29))) : (var_1_19 == ((signed short int) (last_1_var_1_48 + (max (last_1_var_1_1 , var_1_5))))))) && ((((max (var_1_54 , var_1_1)) + (~ var_1_19)) == var_1_6) ? (((var_1_5 * var_1_29) > var_1_17) ? (var_1_21 == ((unsigned short int) (min (var_1_18 , 2)))) : 1) : 1)) && ((var_1_19 <= -256) ? (var_1_22 == ((float) (var_1_12 - (var_1_23 - var_1_24)))) : ((var_1_19 == (4 << (var_1_25 - var_1_26))) ? (var_1_22 == ((float) (var_1_13 + (var_1_27 + var_1_28)))) : (var_1_22 == ((float) (max (var_1_11 , (var_1_24 - var_1_23)))))))) && (((last_1_var_1_6 + (last_1_var_1_21 % var_1_18)) != ((var_1_26 + -500) / var_1_25)) ? (var_1_29 == ((signed char) (max (var_1_25 , ((min (var_1_26 , -2)) + var_1_30))))) : (var_1_29 == ((signed char) (min ((var_1_25 - var_1_26) , var_1_30)))))) && ((last_1_var_1_17 >= ((var_1_25 + var_1_26) + var_1_5)) ? (((last_1_var_1_6 / var_1_18) <= (last_1_var_1_1 - last_1_var_1_29)) ? (var_1_31 == ((unsigned char) (! (! var_1_34)))) : (var_1_31 == ((unsigned char) (var_1_35 && (! 0))))) : (var_1_31 == ((unsigned char) (var_1_35 && var_1_36))))) && (var_1_31 ? (var_1_37 == ((float) (min ((var_1_24 - var_1_23) , 1.000000000000008E14f)))) : (var_1_37 == ((float) (max (var_1_28 , var_1_24)))))) && ((! var_1_45) ? (var_1_38 == ((float) (var_1_14 + (max ((abs (var_1_24)) , (var_1_12 - var_1_39)))))) : (((max (var_1_17 , -256)) > var_1_1) ? (((max ((var_1_26 - var_1_19) , (var_1_21 >> var_1_40))) < (var_1_4 + var_1_25)) ? (var_1_38 == ((float) (min ((abs (var_1_12 - var_1_39)) , (var_1_23 - var_1_11))))) : (var_1_38 == ((float) (max (var_1_10 , var_1_39))))) : (((var_1_15 * var_1_1) > var_1_40) ? (var_1_38 == ((float) var_1_11)) : (var_1_38 == ((float) var_1_10)))))) && (((-50 / var_1_25) == last_1_var_1_19) ? (var_1_41 == ((signed char) (abs (var_1_26 + var_1_25)))) : (last_1_var_1_31 ? (var_1_41 == ((signed char) (10 - var_1_42))) : ((last_1_var_1_55 || var_1_34) ? ((((last_1_var_1_17 + last_1_var_1_15) ^ last_1_var_1_54) == last_1_var_1_29) ? ((var_1_11 >= last_1_var_1_22) ? (var_1_41 == ((signed char) (var_1_26 + var_1_40))) : 1) : 1) : (var_1_41 == ((signed char) (var_1_30 + var_1_40))))))) && ((var_1_38 >= var_1_11) ? ((var_1_40 < var_1_54) ? (var_1_43 == ((signed char) ((var_1_40 - var_1_26) + var_1_25))) : (var_1_43 == ((signed char) (var_1_30 + var_1_40)))) : 1)) && (((var_1_25 == 2) && var_1_31) ? (var_1_45 == ((unsigned char) (var_1_31 || (var_1_34 || var_1_36)))) : (var_1_45 == ((unsigned char) var_1_34)))) && (((4 - (abs (var_1_40))) < last_1_var_1_17) ? ((last_1_var_1_21 >= last_1_var_1_6) ? (((var_1_4 * 16) > last_1_var_1_6) ? (var_1_46 == ((signed short int) (var_1_42 - (min (var_1_40 , (last_1_var_1_29 + var_1_4)))))) : (var_1_46 == ((signed short int) (max ((last_1_var_1_57 - 32) , ((last_1_var_1_21 + var_1_25) - 10)))))) : (var_1_46 == ((signed short int) (min (last_1_var_1_46 , last_1_var_1_6))))) : (var_1_46 == ((signed short int) (var_1_25 + var_1_30))))) && (var_1_36 ? (((var_1_30 | (var_1_5 + var_1_4)) != var_1_18) ? ((var_1_23 <= var_1_24) ? ((((var_1_21 + var_1_6) == -500) && var_1_35) ? (var_1_48 == ((unsigned long int) (((var_1_50 + 1000000000u) + (min (var_1_51 , var_1_52))) - var_1_6))) : 1) : (var_1_48 == ((unsigned long int) (var_1_51 + var_1_18)))) : (var_1_48 == ((unsigned long int) ((abs (3636594529u)) - (max (var_1_42 , (min (var_1_52 , var_1_46)))))))) : 1)) && (((var_1_14 + var_1_10) > var_1_8) ? (var_1_54 == ((signed char) (min (var_1_30 , ((abs (var_1_40)) + var_1_26))))) : 1)) && (((var_1_10 / var_1_23) > var_1_37) ? ((var_1_21 >= var_1_19) ? (var_1_55 == ((unsigned char) 0)) : (var_1_55 == ((unsigned char) (((! var_1_36) && var_1_34) || var_1_56)))) : (var_1_55 == ((unsigned char) var_1_34)))) && (((-1 + var_1_52) > var_1_19) ? (((min ((min (var_1_46 , var_1_25)) , (var_1_54 * 2))) < (var_1_17 * var_1_5)) ? (var_1_57 == ((signed long int) var_1_54)) : (var_1_57 == ((signed long int) var_1_18))) : (var_1_57 == ((signed long int) var_1_48)))
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
