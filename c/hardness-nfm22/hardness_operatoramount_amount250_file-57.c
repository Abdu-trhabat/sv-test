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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 0;
double var_1_8 = 3.5;
double var_1_11 = 999999999999999.6;
double var_1_12 = 10.37;
double var_1_13 = 0.19999999999999996;
double var_1_14 = 24.7;
double var_1_15 = 255.5;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 2;
signed char var_1_23 = -2;
signed char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 10;
signed char var_1_27 = 25;
signed char var_1_28 = 16;
unsigned short int var_1_29 = 128;
signed char var_1_30 = -8;
signed long int var_1_31 = 128;
float var_1_32 = 32.5;
float var_1_34 = 100000000000.2;
float var_1_35 = 4.25;
float var_1_36 = 7.5;
float var_1_37 = 8.3;
double var_1_38 = 1000000000.5;
float var_1_39 = 32.661;
float var_1_40 = 99.8;
float var_1_41 = 64.8;
float var_1_42 = 1.6;
float var_1_43 = 3.325;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 25;
unsigned long int var_1_46 = 4;
unsigned long int var_1_47 = 1000000000;
unsigned long int var_1_48 = 1000000000;
unsigned long int var_1_49 = 2147102242;
signed long int var_1_50 = 5;
signed long int var_1_51 = 2;
signed long int var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
signed short int var_1_55 = -4;
unsigned long int var_1_56 = 200;
unsigned long int var_1_57 = 16;
unsigned char var_1_58 = 128;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 1;
double var_1_61 = 8.8;
double var_1_62 = 127.125;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_16 = 0;
signed char last_1_var_1_23 = -2;
unsigned short int last_1_var_1_29 = 128;
float last_1_var_1_32 = 32.5;
unsigned short int last_1_var_1_45 = 25;
unsigned long int last_1_var_1_46 = 4;
signed short int last_1_var_1_55 = -4;
unsigned long int last_1_var_1_56 = 200;
unsigned long int last_1_var_1_57 = 16;
unsigned char last_1_var_1_59 = 0;
unsigned char last_1_var_1_60 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch57Amount250
	signed long int stepLocal_6 = last_1_var_1_29;
	if (var_1_11 < var_1_15) {
		if (stepLocal_6 == last_1_var_1_29) {
			var_1_23 = ((5 - var_1_24) + ((max (var_1_25 , var_1_26)) + (var_1_27 - var_1_28)));
		}
	} else {
		var_1_23 = (5 - var_1_27);
	}


	// From: Req14Batch57Amount250
	if (var_1_43 != (max ((last_1_var_1_32 + var_1_40) , var_1_38))) {
		if (var_1_48 < last_1_var_1_56) {
			if (last_1_var_1_46 < var_1_47) {
				if (var_1_20) {
					var_1_53 = (! ((! var_1_7) || var_1_5));
				} else {
					var_1_53 = (var_1_7 && var_1_54);
				}
			} else {
				var_1_53 = (! ((var_1_51 > -256) || (! var_1_18)));
			}
		}
	} else {
		if (last_1_var_1_1) {
			var_1_53 = (last_1_var_1_60 && ((var_1_18 || var_1_5) || var_1_21));
		}
	}


	// From: Req15Batch57Amount250
	unsigned char stepLocal_15 = last_1_var_1_16 || last_1_var_1_59;
	if ((var_1_38 * (max (var_1_34 , var_1_43))) < 9.9) {
		var_1_55 = 10;
	} else {
		if (((- var_1_48) != var_1_47) || stepLocal_15) {
			var_1_55 = var_1_30;
		} else {
			var_1_55 = (var_1_24 - last_1_var_1_55);
		}
	}


	// From: Req7Batch57Amount250
	signed long int stepLocal_10 = (var_1_25 << last_1_var_1_29) + last_1_var_1_23;
	unsigned long int stepLocal_9 = last_1_var_1_56 + var_1_27;
	signed long int stepLocal_8 = min (last_1_var_1_23 , var_1_27);
	if (last_1_var_1_57 <= stepLocal_9) {
		if (var_1_30 <= stepLocal_10) {
			if (stepLocal_8 < (var_1_28 - var_1_24)) {
				var_1_31 = (abs (last_1_var_1_57));
			} else {
				var_1_31 = var_1_30;
			}
		}
	}


	// From: Req1Batch57Amount250
	unsigned char stepLocal_0 = last_1_var_1_16;
	if (last_1_var_1_16) {
		var_1_1 = ((last_1_var_1_60 || last_1_var_1_16) && var_1_5);
	} else {
		if (stepLocal_0 && (last_1_var_1_29 <= 10)) {
			var_1_1 = (last_1_var_1_60 || var_1_7);
		}
	}


	// From: Req19Batch57Amount250
	if (last_1_var_1_16) {
		var_1_60 = (var_1_54 && var_1_7);
	} else {
		var_1_60 = (! var_1_7);
	}


	// From: Req4Batch57Amount250
	unsigned char stepLocal_5 = last_1_var_1_55 < (min (last_1_var_1_57 , last_1_var_1_46));
	signed long int stepLocal_4 = last_1_var_1_45;
	if (var_1_7) {
		if (stepLocal_4 >= last_1_var_1_55) {
			if (stepLocal_5 && last_1_var_1_60) {
				var_1_22 = last_1_var_1_46;
			}
		}
	} else {
		var_1_22 = 5;
	}


	// From: Req11Batch57Amount250
	var_1_45 = (min ((min (var_1_28 , (abs (var_1_27)))) , (abs (var_1_24))));


	// From: Req18Batch57Amount250
	var_1_59 = var_1_7;


	// From: Req20Batch57Amount250
	if (var_1_18) {
		var_1_61 = ((max ((min (var_1_41 , var_1_43)) , var_1_62)) - var_1_40);
	}


	// From: Req6Batch57Amount250
	signed short int stepLocal_7 = var_1_22;
	if (stepLocal_7 > (last_1_var_1_29 / var_1_30)) {
		var_1_29 = (var_1_23 + var_1_24);
	}


	// From: Req10Batch57Amount250
	if (var_1_23 == (max (var_1_55 , (var_1_24 - var_1_29)))) {
		if ((! var_1_1) || (var_1_29 < var_1_27)) {
			var_1_44 = (min (var_1_27 , var_1_24));
		}
	} else {
		var_1_44 = (min (16 , (var_1_28 + var_1_24)));
	}


	// From: Req17Batch57Amount250
	signed long int stepLocal_18 = var_1_52;
	unsigned char stepLocal_17 = var_1_28 < var_1_51;
	signed long int stepLocal_16 = var_1_58 - 5;
	if (stepLocal_18 <= var_1_31) {
		if (var_1_18 && stepLocal_17) {
			if (! (var_1_29 <= var_1_48)) {
				var_1_57 = (min ((var_1_31 + var_1_47) , var_1_28));
			}
		} else {
			var_1_57 = var_1_31;
		}
	} else {
		if (var_1_31 >= stepLocal_16) {
			if (var_1_59) {
				var_1_57 = (32u + var_1_52);
			} else {
				var_1_57 = (var_1_31 + 100u);
			}
		} else {
			var_1_57 = var_1_49;
		}
	}


	// From: Req13Batch57Amount250
	if ((var_1_27 << (var_1_51 - var_1_52)) < (min (var_1_23 , var_1_22))) {
		var_1_50 = (max ((var_1_57 - var_1_45) , var_1_28));
	}


	// From: Req8Batch57Amount250
	unsigned char stepLocal_14 = var_1_21;
	signed long int stepLocal_13 = min (var_1_28 , var_1_30);
	unsigned char stepLocal_12 = var_1_60;
	signed long int stepLocal_11 = var_1_50;
	if (stepLocal_11 < var_1_25) {
		if ((var_1_22 > var_1_50) || stepLocal_12) {
			if ((var_1_18 && (var_1_31 >= var_1_23)) || stepLocal_14) {
				var_1_32 = (var_1_34 + var_1_35);
			} else {
				var_1_32 = ((max (var_1_35 , var_1_34)) + var_1_36);
			}
		}
	} else {
		if (var_1_26 < stepLocal_13) {
			if (var_1_7) {
				var_1_32 = var_1_35;
			}
		} else {
			var_1_32 = var_1_35;
		}
	}


	// From: Req12Batch57Amount250
	if (var_1_55 < ((max (last_1_var_1_46 , var_1_30)) & var_1_28)) {
		if (var_1_25 < (min (var_1_30 , (max (var_1_55 , var_1_27))))) {
			if (last_1_var_1_46 >= var_1_50) {
				var_1_46 = (((var_1_47 + var_1_48) + (var_1_49 - last_1_var_1_46)) - ((var_1_28 + last_1_var_1_46) + var_1_55));
			} else {
				if (var_1_53) {
					if (var_1_1 || var_1_60) {
						var_1_46 = (max (last_1_var_1_46 , var_1_48));
					}
				}
			}
		} else {
			var_1_46 = (max ((min (var_1_31 , last_1_var_1_46)) , var_1_49));
		}
	}


	// From: Req16Batch57Amount250
	if (var_1_22 > var_1_30) {
		var_1_56 = (var_1_47 + (var_1_57 + (last_1_var_1_56 + var_1_44)));
	}


	// From: Req3Batch57Amount250
	if (var_1_11 <= var_1_14) {
		var_1_16 = (! var_1_7);
	} else {
		if ((max (var_1_22 , var_1_44)) > (var_1_31 + (max (-16 , var_1_50)))) {
			var_1_16 = var_1_5;
		} else {
			if (var_1_5 || var_1_1) {
				if (var_1_44 >= var_1_50) {
					if (var_1_50 >= ((var_1_31 & var_1_44) * var_1_22)) {
						if (var_1_53) {
							var_1_16 = (! var_1_5);
						} else {
							var_1_16 = 0;
						}
					} else {
						var_1_16 = ((var_1_5 || (var_1_18 || var_1_19)) || (var_1_20 || var_1_21));
					}
				}
			}
		}
	}


	// From: Req2Batch57Amount250
	signed long int stepLocal_3 = var_1_22 & var_1_55;
	unsigned long int stepLocal_2 = var_1_56;
	signed short int stepLocal_1 = var_1_22;
	if (stepLocal_3 <= var_1_56) {
		if (var_1_55 > stepLocal_1) {
			if (var_1_22 >= stepLocal_2) {
				var_1_8 = (max (var_1_11 , var_1_12));
			} else {
				var_1_8 = (min ((max (var_1_11 , var_1_12)) , (max ((var_1_13 - var_1_14) , var_1_15))));
			}
		}
	}


	// From: Req9Batch57Amount250
	if ((- var_1_8) <= (var_1_34 * var_1_61)) {
		if ((var_1_61 / var_1_38) < var_1_8) {
			var_1_37 = ((min (var_1_34 , (var_1_39 - var_1_40))) + ((var_1_41 + var_1_42) - var_1_43));
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -31);
	assume_abort_if_not(var_1_25 <= 32);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -31);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -128);
	assume_abort_if_not(var_1_30 <= 127);
	assume_abort_if_not(var_1_30 != 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	assume_abort_if_not(var_1_38 != 0.0F);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691390e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 536870911);
	assume_abort_if_not(var_1_47 <= 1073741824);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 536870912);
	assume_abort_if_not(var_1_48 <= 1073741823);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1610612735);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 2);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 127);
	assume_abort_if_not(var_1_58 <= 255);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
}

int property() {
	return (((((((((((((((((((last_1_var_1_16 ? (var_1_1 == ((unsigned char) ((last_1_var_1_60 || last_1_var_1_16) && var_1_5))) : ((last_1_var_1_16 && (last_1_var_1_29 <= 10)) ? (var_1_1 == ((unsigned char) (last_1_var_1_60 || var_1_7))) : 1)) && (((var_1_22 & var_1_55) <= var_1_56) ? ((var_1_55 > var_1_22) ? ((var_1_22 >= var_1_56) ? (var_1_8 == ((double) (max (var_1_11 , var_1_12)))) : (var_1_8 == ((double) (min ((max (var_1_11 , var_1_12)) , (max ((var_1_13 - var_1_14) , var_1_15))))))) : 1) : 1)) && ((var_1_11 <= var_1_14) ? (var_1_16 == ((unsigned char) (! var_1_7))) : (((max (var_1_22 , var_1_44)) > (var_1_31 + (max (-16 , var_1_50)))) ? (var_1_16 == ((unsigned char) var_1_5)) : ((var_1_5 || var_1_1) ? ((var_1_44 >= var_1_50) ? ((var_1_50 >= ((var_1_31 & var_1_44) * var_1_22)) ? (var_1_53 ? (var_1_16 == ((unsigned char) (! var_1_5))) : (var_1_16 == ((unsigned char) 0))) : (var_1_16 == ((unsigned char) ((var_1_5 || (var_1_18 || var_1_19)) || (var_1_20 || var_1_21))))) : 1) : 1)))) && (var_1_7 ? ((last_1_var_1_45 >= last_1_var_1_55) ? (((last_1_var_1_55 < (min (last_1_var_1_57 , last_1_var_1_46))) && last_1_var_1_60) ? (var_1_22 == ((signed short int) last_1_var_1_46)) : 1) : 1) : (var_1_22 == ((signed short int) 5)))) && ((var_1_11 < var_1_15) ? ((last_1_var_1_29 == last_1_var_1_29) ? (var_1_23 == ((signed char) ((5 - var_1_24) + ((max (var_1_25 , var_1_26)) + (var_1_27 - var_1_28))))) : 1) : (var_1_23 == ((signed char) (5 - var_1_27))))) && ((var_1_22 > (last_1_var_1_29 / var_1_30)) ? (var_1_29 == ((unsigned short int) (var_1_23 + var_1_24))) : 1)) && ((last_1_var_1_57 <= (last_1_var_1_56 + var_1_27)) ? ((var_1_30 <= ((var_1_25 << last_1_var_1_29) + last_1_var_1_23)) ? (((min (last_1_var_1_23 , var_1_27)) < (var_1_28 - var_1_24)) ? (var_1_31 == ((signed long int) (abs (last_1_var_1_57)))) : (var_1_31 == ((signed long int) var_1_30))) : 1) : 1)) && ((var_1_50 < var_1_25) ? (((var_1_22 > var_1_50) || var_1_60) ? (((var_1_18 && (var_1_31 >= var_1_23)) || var_1_21) ? (var_1_32 == ((float) (var_1_34 + var_1_35))) : (var_1_32 == ((float) ((max (var_1_35 , var_1_34)) + var_1_36)))) : 1) : ((var_1_26 < (min (var_1_28 , var_1_30))) ? (var_1_7 ? (var_1_32 == ((float) var_1_35)) : 1) : (var_1_32 == ((float) var_1_35))))) && (((- var_1_8) <= (var_1_34 * var_1_61)) ? (((var_1_61 / var_1_38) < var_1_8) ? (var_1_37 == ((float) ((min (var_1_34 , (var_1_39 - var_1_40))) + ((var_1_41 + var_1_42) - var_1_43)))) : 1) : 1)) && ((var_1_23 == (max (var_1_55 , (var_1_24 - var_1_29)))) ? (((! var_1_1) || (var_1_29 < var_1_27)) ? (var_1_44 == ((unsigned char) (min (var_1_27 , var_1_24)))) : 1) : (var_1_44 == ((unsigned char) (min (16 , (var_1_28 + var_1_24))))))) && (var_1_45 == ((unsigned short int) (min ((min (var_1_28 , (abs (var_1_27)))) , (abs (var_1_24))))))) && ((var_1_55 < ((max (last_1_var_1_46 , var_1_30)) & var_1_28)) ? ((var_1_25 < (min (var_1_30 , (max (var_1_55 , var_1_27))))) ? ((last_1_var_1_46 >= var_1_50) ? (var_1_46 == ((unsigned long int) (((var_1_47 + var_1_48) + (var_1_49 - last_1_var_1_46)) - ((var_1_28 + last_1_var_1_46) + var_1_55)))) : (var_1_53 ? ((var_1_1 || var_1_60) ? (var_1_46 == ((unsigned long int) (max (last_1_var_1_46 , var_1_48)))) : 1) : 1)) : (var_1_46 == ((unsigned long int) (max ((min (var_1_31 , last_1_var_1_46)) , var_1_49))))) : 1)) && (((var_1_27 << (var_1_51 - var_1_52)) < (min (var_1_23 , var_1_22))) ? (var_1_50 == ((signed long int) (max ((var_1_57 - var_1_45) , var_1_28)))) : 1)) && ((var_1_43 != (max ((last_1_var_1_32 + var_1_40) , var_1_38))) ? ((var_1_48 < last_1_var_1_56) ? ((last_1_var_1_46 < var_1_47) ? (var_1_20 ? (var_1_53 == ((unsigned char) (! ((! var_1_7) || var_1_5)))) : (var_1_53 == ((unsigned char) (var_1_7 && var_1_54)))) : (var_1_53 == ((unsigned char) (! ((var_1_51 > -256) || (! var_1_18)))))) : 1) : (last_1_var_1_1 ? (var_1_53 == ((unsigned char) (last_1_var_1_60 && ((var_1_18 || var_1_5) || var_1_21)))) : 1))) && (((var_1_38 * (max (var_1_34 , var_1_43))) < 9.9) ? (var_1_55 == ((signed short int) 10)) : ((((- var_1_48) != var_1_47) || (last_1_var_1_16 || last_1_var_1_59)) ? (var_1_55 == ((signed short int) var_1_30)) : (var_1_55 == ((signed short int) (var_1_24 - last_1_var_1_55)))))) && ((var_1_22 > var_1_30) ? (var_1_56 == ((unsigned long int) (var_1_47 + (var_1_57 + (last_1_var_1_56 + var_1_44))))) : 1)) && ((var_1_52 <= var_1_31) ? ((var_1_18 && (var_1_28 < var_1_51)) ? ((! (var_1_29 <= var_1_48)) ? (var_1_57 == ((unsigned long int) (min ((var_1_31 + var_1_47) , var_1_28)))) : 1) : (var_1_57 == ((unsigned long int) var_1_31))) : ((var_1_31 >= (var_1_58 - 5)) ? (var_1_59 ? (var_1_57 == ((unsigned long int) (32u + var_1_52))) : (var_1_57 == ((unsigned long int) (var_1_31 + 100u)))) : (var_1_57 == ((unsigned long int) var_1_49))))) && (var_1_59 == ((unsigned char) var_1_7))) && (last_1_var_1_16 ? (var_1_60 == ((unsigned char) (var_1_54 && var_1_7))) : (var_1_60 == ((unsigned char) (! var_1_7))))) && (var_1_18 ? (var_1_61 == ((double) ((max ((min (var_1_41 , var_1_43)) , var_1_62)) - var_1_40))) : 1)
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
