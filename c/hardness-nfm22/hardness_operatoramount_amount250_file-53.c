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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -100;
unsigned char var_1_2 = 200;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 8;
double var_1_8 = 256.75;
double var_1_10 = -0.6;
unsigned char var_1_11 = 64;
unsigned char var_1_13 = 25;
unsigned long int var_1_14 = 64;
unsigned long int var_1_15 = 3306323827;
unsigned long int var_1_16 = 1334080422;
double var_1_17 = 4.375;
unsigned char var_1_18 = 4;
signed char var_1_19 = -128;
double var_1_20 = 1.3;
double var_1_21 = 199.5;
double var_1_22 = 63.8;
signed char var_1_23 = 10;
unsigned char var_1_24 = 50;
unsigned char var_1_26 = 50;
unsigned char var_1_27 = 4;
signed long int var_1_28 = 2;
float var_1_29 = 31.625;
float var_1_30 = 5.4;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed long int var_1_37 = -4;
float var_1_38 = 99.25;
float var_1_39 = 10.6;
float var_1_40 = 128.3;
float var_1_41 = 500.1;
signed short int var_1_42 = 256;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 1;
signed char var_1_46 = 4;
signed char var_1_47 = 100;
unsigned char var_1_48 = 64;
float var_1_49 = 128.5;
double var_1_51 = 15.5;
double var_1_52 = 128.8;
float var_1_53 = 8.875;
float var_1_54 = 15.7;
float var_1_55 = 1.5;
float var_1_56 = 2.6;
unsigned long int var_1_57 = 25;
unsigned long int var_1_58 = 3647085250;
float var_1_59 = 10.75;
unsigned char var_1_60 = 32;
signed short int var_1_61 = -200;
unsigned char var_1_62 = 0;
signed long int var_1_63 = 2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_14 = 64;
signed char last_1_var_1_19 = -128;
unsigned char last_1_var_1_24 = 50;
signed long int last_1_var_1_28 = 2;
float last_1_var_1_29 = 31.625;
unsigned char last_1_var_1_31 = 0;
signed long int last_1_var_1_37 = -4;
signed short int last_1_var_1_42 = 256;
unsigned char last_1_var_1_43 = 1;
unsigned char last_1_var_1_62 = 0;
signed long int last_1_var_1_63 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch53Amount250
	signed long int stepLocal_12 = last_1_var_1_63 + var_1_13;
	if (var_1_34) {
		if ((~ var_1_2) >= stepLocal_12) {
			var_1_43 = (! (! var_1_33));
		} else {
			var_1_43 = (last_1_var_1_62 && var_1_33);
		}
	} else {
		var_1_43 = (! var_1_33);
	}


	// From: Req18Batch53Amount250
	signed long int stepLocal_16 = last_1_var_1_37;
	signed long int stepLocal_15 = last_1_var_1_42;
	unsigned long int stepLocal_14 = var_1_16 * (last_1_var_1_19 * var_1_4);
	if (stepLocal_14 > (last_1_var_1_14 + var_1_3)) {
		if (stepLocal_15 > var_1_27) {
			var_1_46 = ((max (2 , (max (var_1_4 , 1)))) - var_1_26);
		}
	} else {
		if (stepLocal_16 != (1u << var_1_3)) {
			var_1_46 = (abs (var_1_23));
		} else {
			var_1_46 = ((var_1_47 - var_1_4) - var_1_27);
		}
	}


	// From: Req4Batch53Amount250
	if (last_1_var_1_43) {
		var_1_14 = ((var_1_15 - var_1_4) - (var_1_16 - var_1_2));
	}


	// From: Req25Batch53Amount250
	if (last_1_var_1_31) {
		var_1_62 = var_1_33;
	} else {
		var_1_62 = var_1_32;
	}


	// From: Req7Batch53Amount250
	unsigned char stepLocal_1 = (last_1_var_1_29 / var_1_22) < (var_1_21 * var_1_10);
	if (last_1_var_1_29 < (var_1_20 - var_1_21)) {
		if (last_1_var_1_62 || stepLocal_1) {
			var_1_19 = (var_1_4 + var_1_23);
		}
	} else {
		var_1_19 = var_1_23;
	}


	// From: Req5Batch53Amount250
	var_1_17 = var_1_10;


	// From: Req6Batch53Amount250
	var_1_18 = var_1_4;


	// From: Req8Batch53Amount250
	if (var_1_16 <= last_1_var_1_24) {
		var_1_24 = ((200 - (var_1_26 - var_1_27)) - var_1_3);
	}


	// From: Req9Batch53Amount250
	if (last_1_var_1_28 > var_1_16) {
		var_1_28 = (max (var_1_2 , 8));
	} else {
		var_1_28 = (64 - var_1_13);
	}


	// From: Req19Batch53Amount250
	var_1_48 = var_1_27;


	// From: Req21Batch53Amount250
	if (var_1_22 != var_1_52) {
		if (! var_1_62) {
			var_1_57 = ((max (var_1_15 , (min (var_1_58 , 3257582811u)))) - (abs (var_1_27 + var_1_18)));
		} else {
			var_1_57 = (max (var_1_19 , 2u));
		}
	} else {
		var_1_57 = var_1_19;
	}


	// From: Req22Batch53Amount250
	var_1_59 = var_1_41;


	// From: Req23Batch53Amount250
	var_1_60 = var_1_26;


	// From: Req12Batch53Amount250
	unsigned long int stepLocal_5 = (var_1_26 + var_1_4) - var_1_14;
	if (stepLocal_5 < (var_1_3 << 1)) {
		var_1_35 = var_1_32;
	} else {
		var_1_35 = (var_1_43 || ((var_1_34 && var_1_36) && (! var_1_32)));
	}


	// From: Req24Batch53Amount250
	if (var_1_62) {
		var_1_61 = var_1_19;
	}


	// From: Req15Batch53Amount250
	if (var_1_3 > var_1_24) {
		if (var_1_26 != (var_1_2 - var_1_4)) {
			var_1_42 = (var_1_4 + var_1_23);
		} else {
			var_1_42 = (min (var_1_19 , (min ((abs (var_1_28)) , var_1_3))));
		}
	} else {
		var_1_42 = var_1_23;
	}


	// From: Req2Batch53Amount250
	if ((max (-10000 , var_1_2)) < var_1_42) {
		var_1_8 = var_1_10;
	}


	// From: Req3Batch53Amount250
	unsigned char stepLocal_0 = var_1_18;
	if (var_1_2 < stepLocal_0) {
		var_1_11 = (max (var_1_13 , (var_1_3 + var_1_4)));
	}


	// From: Req17Batch53Amount250
	unsigned char stepLocal_13 = ! var_1_33;
	if (var_1_35 || stepLocal_13) {
		var_1_44 = ((var_1_35 && (! var_1_36)) || (var_1_32 && var_1_33));
	} else {
		if ((- (var_1_17 * var_1_21)) == (min (var_1_39 , var_1_22))) {
			var_1_44 = var_1_36;
		} else {
			var_1_44 = (var_1_36 && ((var_1_21 != var_1_17) && var_1_32));
		}
	}


	// From: Req26Batch53Amount250
	unsigned long int stepLocal_19 = var_1_16;
	unsigned long int stepLocal_18 = var_1_28 * var_1_16;
	if (! var_1_44) {
		if (var_1_61 > stepLocal_18) {
			var_1_63 = (var_1_14 + var_1_13);
		}
	} else {
		if (last_1_var_1_63 < stepLocal_19) {
			var_1_63 = var_1_60;
		}
	}


	// From: Req10Batch53Amount250
	signed long int stepLocal_2 = var_1_46 >> var_1_11;
	if (var_1_62) {
		var_1_29 = (16.4f + var_1_30);
	} else {
		if (stepLocal_2 == var_1_15) {
			var_1_29 = (min (var_1_10 , var_1_30));
		}
	}


	// From: Req13Batch53Amount250
	unsigned char stepLocal_10 = var_1_26;
	unsigned char stepLocal_9 = var_1_4;
	unsigned char stepLocal_8 = var_1_3;
	unsigned char stepLocal_7 = var_1_4;
	unsigned char stepLocal_6 = var_1_32 || (var_1_30 <= var_1_29);
	if (var_1_44) {
		if (stepLocal_10 >= (~ 25)) {
			var_1_37 = (abs (16));
		} else {
			if ((100000u == var_1_15) && stepLocal_6) {
				var_1_37 = ((min (var_1_61 , (var_1_19 + var_1_19))) + var_1_27);
			} else {
				if (stepLocal_8 <= last_1_var_1_37) {
					var_1_37 = ((min (var_1_27 , var_1_13)) - (min (var_1_2 , last_1_var_1_37)));
				}
			}
		}
	} else {
		if (var_1_23 < stepLocal_7) {
			if (var_1_46 == stepLocal_9) {
				var_1_37 = (25 - var_1_13);
			}
		} else {
			if (var_1_33) {
				var_1_37 = var_1_19;
			}
		}
	}


	// From: Req11Batch53Amount250
	signed long int stepLocal_4 = (var_1_18 / var_1_3) / var_1_26;
	unsigned long int stepLocal_3 = max (var_1_18 , var_1_15);
	if (var_1_44) {
		var_1_31 = (var_1_32 || var_1_33);
	} else {
		if (((var_1_18 + var_1_27) - var_1_2) > stepLocal_3) {
			var_1_31 = var_1_34;
		} else {
			if (stepLocal_4 > ((var_1_4 - var_1_2) / 256)) {
				var_1_31 = (! (var_1_32 && var_1_33));
			}
		}
	}


	// From: Req1Batch53Amount250
	if ((var_1_2 - (var_1_3 - var_1_4)) == var_1_19) {
		if ((var_1_3 + var_1_19) >= (var_1_4 / var_1_2)) {
			if (var_1_19 > var_1_4) {
				var_1_1 = ((var_1_3 + var_1_2) + var_1_11);
			} else {
				if (var_1_62 || (var_1_2 < (min (var_1_11 , var_1_19)))) {
					var_1_1 = (min (var_1_11 , ((var_1_3 - var_1_2) + (min (var_1_4 , 64)))));
				} else {
					if (var_1_62) {
						var_1_1 = var_1_4;
					} else {
						var_1_1 = var_1_2;
					}
				}
			}
		}
	} else {
		var_1_1 = -1000;
	}


	// From: Req14Batch53Amount250
	signed long int stepLocal_11 = var_1_63 + 1;
	if (1000 == stepLocal_11) {
		var_1_38 = (max (var_1_30 , (var_1_39 - (max (var_1_40 , 10.8f)))));
	} else {
		var_1_38 = (var_1_30 + var_1_41);
	}


	// From: Req20Batch53Amount250
	signed long int stepLocal_17 = var_1_63;
	if (var_1_18 <= stepLocal_17) {
		if (var_1_44) {
			if (((var_1_51 + var_1_52) - (min (var_1_21 , var_1_20))) > var_1_40) {
				var_1_49 = (abs (max (var_1_41 , var_1_52)));
			} else {
				var_1_49 = ((var_1_53 - (var_1_54 + var_1_55)) + (64.75f - var_1_56));
			}
		} else {
			var_1_49 = (10.75f - var_1_52);
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 63);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 3221225470);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 1073741823);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 31);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 62);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427387900e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427387900e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
}

int property() {
	return (((((((((((((((((((((((((((var_1_2 - (var_1_3 - var_1_4)) == var_1_19) ? (((var_1_3 + var_1_19) >= (var_1_4 / var_1_2)) ? ((var_1_19 > var_1_4) ? (var_1_1 == ((signed long int) ((var_1_3 + var_1_2) + var_1_11))) : ((var_1_62 || (var_1_2 < (min (var_1_11 , var_1_19)))) ? (var_1_1 == ((signed long int) (min (var_1_11 , ((var_1_3 - var_1_2) + (min (var_1_4 , 64))))))) : (var_1_62 ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_2))))) : 1) : (var_1_1 == ((signed long int) -1000))) && (((max (-10000 , var_1_2)) < var_1_42) ? (var_1_8 == ((double) var_1_10)) : 1)) && ((var_1_2 < var_1_18) ? (var_1_11 == ((unsigned char) (max (var_1_13 , (var_1_3 + var_1_4))))) : 1)) && (last_1_var_1_43 ? (var_1_14 == ((unsigned long int) ((var_1_15 - var_1_4) - (var_1_16 - var_1_2)))) : 1)) && (var_1_17 == ((double) var_1_10))) && (var_1_18 == ((unsigned char) var_1_4))) && ((last_1_var_1_29 < (var_1_20 - var_1_21)) ? ((last_1_var_1_62 || ((last_1_var_1_29 / var_1_22) < (var_1_21 * var_1_10))) ? (var_1_19 == ((signed char) (var_1_4 + var_1_23))) : 1) : (var_1_19 == ((signed char) var_1_23)))) && ((var_1_16 <= last_1_var_1_24) ? (var_1_24 == ((unsigned char) ((200 - (var_1_26 - var_1_27)) - var_1_3))) : 1)) && ((last_1_var_1_28 > var_1_16) ? (var_1_28 == ((signed long int) (max (var_1_2 , 8)))) : (var_1_28 == ((signed long int) (64 - var_1_13))))) && (var_1_62 ? (var_1_29 == ((float) (16.4f + var_1_30))) : (((var_1_46 >> var_1_11) == var_1_15) ? (var_1_29 == ((float) (min (var_1_10 , var_1_30)))) : 1))) && (var_1_44 ? (var_1_31 == ((unsigned char) (var_1_32 || var_1_33))) : ((((var_1_18 + var_1_27) - var_1_2) > (max (var_1_18 , var_1_15))) ? (var_1_31 == ((unsigned char) var_1_34)) : ((((var_1_18 / var_1_3) / var_1_26) > ((var_1_4 - var_1_2) / 256)) ? (var_1_31 == ((unsigned char) (! (var_1_32 && var_1_33)))) : 1)))) && ((((var_1_26 + var_1_4) - var_1_14) < (var_1_3 << 1)) ? (var_1_35 == ((unsigned char) var_1_32)) : (var_1_35 == ((unsigned char) (var_1_43 || ((var_1_34 && var_1_36) && (! var_1_32))))))) && (var_1_44 ? ((var_1_26 >= (~ 25)) ? (var_1_37 == ((signed long int) (abs (16)))) : (((100000u == var_1_15) && (var_1_32 || (var_1_30 <= var_1_29))) ? (var_1_37 == ((signed long int) ((min (var_1_61 , (var_1_19 + var_1_19))) + var_1_27))) : ((var_1_3 <= last_1_var_1_37) ? (var_1_37 == ((signed long int) ((min (var_1_27 , var_1_13)) - (min (var_1_2 , last_1_var_1_37))))) : 1))) : ((var_1_23 < var_1_4) ? ((var_1_46 == var_1_4) ? (var_1_37 == ((signed long int) (25 - var_1_13))) : 1) : (var_1_33 ? (var_1_37 == ((signed long int) var_1_19)) : 1)))) && ((1000 == (var_1_63 + 1)) ? (var_1_38 == ((float) (max (var_1_30 , (var_1_39 - (max (var_1_40 , 10.8f))))))) : (var_1_38 == ((float) (var_1_30 + var_1_41))))) && ((var_1_3 > var_1_24) ? ((var_1_26 != (var_1_2 - var_1_4)) ? (var_1_42 == ((signed short int) (var_1_4 + var_1_23))) : (var_1_42 == ((signed short int) (min (var_1_19 , (min ((abs (var_1_28)) , var_1_3))))))) : (var_1_42 == ((signed short int) var_1_23)))) && (var_1_34 ? (((~ var_1_2) >= (last_1_var_1_63 + var_1_13)) ? (var_1_43 == ((unsigned char) (! (! var_1_33)))) : (var_1_43 == ((unsigned char) (last_1_var_1_62 && var_1_33)))) : (var_1_43 == ((unsigned char) (! var_1_33))))) && ((var_1_35 || (! var_1_33)) ? (var_1_44 == ((unsigned char) ((var_1_35 && (! var_1_36)) || (var_1_32 && var_1_33)))) : (((- (var_1_17 * var_1_21)) == (min (var_1_39 , var_1_22))) ? (var_1_44 == ((unsigned char) var_1_36)) : (var_1_44 == ((unsigned char) (var_1_36 && ((var_1_21 != var_1_17) && var_1_32))))))) && (((var_1_16 * (last_1_var_1_19 * var_1_4)) > (last_1_var_1_14 + var_1_3)) ? ((last_1_var_1_42 > var_1_27) ? (var_1_46 == ((signed char) ((max (2 , (max (var_1_4 , 1)))) - var_1_26))) : 1) : ((last_1_var_1_37 != (1u << var_1_3)) ? (var_1_46 == ((signed char) (abs (var_1_23)))) : (var_1_46 == ((signed char) ((var_1_47 - var_1_4) - var_1_27)))))) && (var_1_48 == ((unsigned char) var_1_27))) && ((var_1_18 <= var_1_63) ? (var_1_44 ? ((((var_1_51 + var_1_52) - (min (var_1_21 , var_1_20))) > var_1_40) ? (var_1_49 == ((float) (abs (max (var_1_41 , var_1_52))))) : (var_1_49 == ((float) ((var_1_53 - (var_1_54 + var_1_55)) + (64.75f - var_1_56))))) : (var_1_49 == ((float) (10.75f - var_1_52)))) : 1)) && ((var_1_22 != var_1_52) ? ((! var_1_62) ? (var_1_57 == ((unsigned long int) ((max (var_1_15 , (min (var_1_58 , 3257582811u)))) - (abs (var_1_27 + var_1_18))))) : (var_1_57 == ((unsigned long int) (max (var_1_19 , 2u))))) : (var_1_57 == ((unsigned long int) var_1_19)))) && (var_1_59 == ((float) var_1_41))) && (var_1_60 == ((unsigned char) var_1_26))) && (var_1_62 ? (var_1_61 == ((signed short int) var_1_19)) : 1)) && (last_1_var_1_31 ? (var_1_62 == ((unsigned char) var_1_33)) : (var_1_62 == ((unsigned char) var_1_32)))) && ((! var_1_44) ? ((var_1_61 > (var_1_28 * var_1_16)) ? (var_1_63 == ((signed long int) (var_1_14 + var_1_13))) : 1) : ((last_1_var_1_63 < var_1_16) ? (var_1_63 == ((signed long int) var_1_60)) : 1))
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
