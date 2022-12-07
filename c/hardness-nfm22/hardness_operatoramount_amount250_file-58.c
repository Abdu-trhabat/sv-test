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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch58Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_4 = 64;
signed long int var_1_6 = -1;
unsigned short int var_1_7 = 45218;
double var_1_9 = 128.4;
unsigned short int var_1_10 = 40875;
double var_1_14 = 7.125;
double var_1_15 = 10.6;
double var_1_16 = 0.6;
double var_1_17 = -0.8;
double var_1_18 = 15.75;
double var_1_19 = 255.25;
double var_1_20 = 63.942;
double var_1_21 = 64.5;
double var_1_22 = 50.75;
signed char var_1_23 = 16;
signed char var_1_24 = 50;
signed char var_1_25 = -4;
signed short int var_1_26 = 64;
unsigned short int var_1_27 = 1;
unsigned long int var_1_29 = 5;
unsigned short int var_1_30 = 8;
unsigned short int var_1_31 = 53218;
unsigned char var_1_32 = 4;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 50;
unsigned char var_1_36 = 50;
signed short int var_1_38 = 64;
unsigned long int var_1_39 = 4;
unsigned char var_1_40 = 1;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 8;
unsigned char var_1_45 = 64;
unsigned char var_1_46 = 64;
unsigned short int var_1_47 = 0;
signed long int var_1_48 = 1523163596;
unsigned short int var_1_49 = 64;
unsigned char var_1_51 = 1;
double var_1_52 = 2.5;
unsigned char var_1_53 = 0;
unsigned short int var_1_54 = 26042;
signed short int var_1_55 = 0;
signed long int var_1_56 = -1;
signed long int var_1_58 = 1000000000;
double var_1_59 = -0.525;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 1;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
signed char var_1_65 = 4;
unsigned long int var_1_66 = 1;
unsigned long int var_1_67 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
double last_1_var_1_9 = 128.4;
signed short int last_1_var_1_26 = 64;
unsigned short int last_1_var_1_27 = 1;
unsigned long int last_1_var_1_29 = 5;
unsigned short int last_1_var_1_30 = 8;
unsigned char last_1_var_1_32 = 4;
signed short int last_1_var_1_38 = 64;
unsigned long int last_1_var_1_39 = 4;
unsigned char last_1_var_1_40 = 1;
unsigned short int last_1_var_1_47 = 0;
unsigned short int last_1_var_1_49 = 64;
signed short int last_1_var_1_55 = 0;
signed long int last_1_var_1_56 = -1;
double last_1_var_1_59 = -0.525;
unsigned char last_1_var_1_60 = 1;
unsigned long int last_1_var_1_66 = 1;
unsigned long int last_1_var_1_67 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch58Amount250
	unsigned char stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = last_1_var_1_47 / (8 + var_1_4);
	if (stepLocal_0 > (max (-256 , (last_1_var_1_56 / var_1_6)))) {
		if (stepLocal_1 != last_1_var_1_56) {
			var_1_1 = (min (var_1_4 , (var_1_7 - (min (last_1_var_1_47 , last_1_var_1_40)))));
		} else {
			var_1_1 = (min (var_1_7 , (var_1_4 + last_1_var_1_47)));
		}
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req10Batch58Amount250
	signed long int stepLocal_7 = last_1_var_1_30;
	unsigned char stepLocal_6 = last_1_var_1_9 >= last_1_var_1_59;
	signed long int stepLocal_5 = last_1_var_1_40;
	if (last_1_var_1_60 && stepLocal_6) {
		if (stepLocal_7 < 4) {
			if (last_1_var_1_60) {
				var_1_39 = last_1_var_1_27;
			} else {
				if (stepLocal_5 <= last_1_var_1_39) {
					var_1_39 = (last_1_var_1_29 + var_1_33);
				} else {
					var_1_39 = (min (last_1_var_1_40 , (4003062372u - var_1_34)));
				}
			}
		} else {
			var_1_39 = var_1_10;
		}
	} else {
		var_1_39 = last_1_var_1_32;
	}


	// From: Req13Batch58Amount250
	if (! last_1_var_1_60) {
		if (last_1_var_1_60) {
			var_1_49 = (abs (var_1_7 - var_1_45));
		} else {
			var_1_49 = (var_1_43 + (var_1_33 + last_1_var_1_49));
		}
	} else {
		if (last_1_var_1_60) {
			if (last_1_var_1_60) {
				if (last_1_var_1_60) {
					var_1_49 = var_1_44;
				} else {
					if ((var_1_21 + var_1_19) <= ((- last_1_var_1_59) / var_1_52)) {
						var_1_49 = last_1_var_1_40;
					} else {
						var_1_49 = (max (var_1_35 , (abs (128))));
					}
				}
			} else {
				if (last_1_var_1_60) {
					if (last_1_var_1_9 <= var_1_17) {
						var_1_49 = (((var_1_54 - 4) - var_1_44) + last_1_var_1_26);
					}
				}
			}
		}
	}


	// From: Req2Batch58Amount250
	if (var_1_7 < (var_1_10 - last_1_var_1_39)) {
		if (last_1_var_1_32 > last_1_var_1_39) {
			if ((min (last_1_var_1_67 , var_1_10)) < ((max (10000 , last_1_var_1_66)) - last_1_var_1_39)) {
				if ((max (last_1_var_1_59 , last_1_var_1_59)) != last_1_var_1_59) {
					if (last_1_var_1_39 >= (var_1_7 * var_1_4)) {
						var_1_9 = (min ((max (var_1_14 , (abs (var_1_15)))) , ((var_1_16 + var_1_17) + (var_1_18 + var_1_19))));
					}
				} else {
					var_1_9 = ((7.2043630626503014E18 - var_1_20) - (min (var_1_21 , (7.8120422756997018E18 - var_1_22))));
				}
			} else {
				var_1_9 = var_1_18;
			}
		} else {
			var_1_9 = var_1_22;
		}
	}


	// From: Req16Batch58Amount250
	if ((min ((var_1_9 / var_1_52) , var_1_9)) <= last_1_var_1_59) {
		var_1_59 = (max (var_1_18 , (var_1_17 + (8.1 - var_1_22))));
	}


	// From: Req19Batch58Amount250
	unsigned short int stepLocal_13 = var_1_54;
	if ((var_1_49 + var_1_10) > stepLocal_13) {
		var_1_66 = 128u;
	}


	// From: Req11Batch58Amount250
	unsigned long int stepLocal_9 = last_1_var_1_39;
	unsigned char stepLocal_8 = last_1_var_1_60;
	if (stepLocal_8 || last_1_var_1_60) {
		if (last_1_var_1_49 <= stepLocal_9) {
			var_1_40 = (min ((var_1_4 + var_1_36) , (min (var_1_35 , (max (var_1_34 , var_1_33))))));
		} else {
			var_1_40 = (var_1_33 - ((var_1_42 + var_1_43) + (var_1_36 - var_1_44)));
		}
	} else {
		var_1_40 = ((var_1_45 + (max (64 , var_1_46))) - var_1_44);
	}


	// From: Req8Batch58Amount250
	if ((var_1_10 / var_1_6) <= (last_1_var_1_32 - var_1_4)) {
		if (last_1_var_1_60) {
			var_1_32 = (abs (var_1_33 - (min (var_1_4 , var_1_34))));
		} else {
			if (var_1_4 >= last_1_var_1_1) {
				var_1_32 = (var_1_34 + ((var_1_35 + var_1_36) - 4));
			}
		}
	} else {
		if (var_1_31 <= last_1_var_1_47) {
			var_1_32 = var_1_34;
		} else {
			var_1_32 = var_1_34;
		}
	}


	// From: Req17Batch58Amount250
	unsigned char stepLocal_12 = var_1_35;
	signed long int stepLocal_11 = var_1_44 + var_1_42;
	if (-0.2f <= var_1_18) {
		var_1_60 = ((! var_1_61) || ((var_1_2 && var_1_53) && var_1_62));
	} else {
		if (last_1_var_1_55 < stepLocal_11) {
			var_1_60 = (var_1_51 || var_1_61);
		} else {
			if (stepLocal_12 >= last_1_var_1_32) {
				var_1_60 = (((var_1_16 == var_1_21) || (var_1_63 && var_1_61)) && var_1_64);
			}
		}
	}


	// From: Req9Batch58Amount250
	var_1_38 = (min ((var_1_33 - 1000) , last_1_var_1_38));


	// From: Req15Batch58Amount250
	if (var_1_60) {
		var_1_56 = ((var_1_49 + (var_1_58 - var_1_1)) - var_1_38);
	}


	// From: Req4Batch58Amount250
	if (var_1_60) {
		var_1_26 = (var_1_49 + var_1_25);
	} else {
		if (((var_1_22 * var_1_17) * var_1_18) == var_1_19) {
			var_1_26 = ((min (var_1_25 , var_1_49)) + var_1_32);
		}
	}


	// From: Req5Batch58Amount250
	if (var_1_9 > var_1_9) {
		var_1_27 = ((abs (min (var_1_40 , last_1_var_1_27))) + var_1_4);
	} else {
		var_1_27 = ((max ((max (last_1_var_1_27 , var_1_40)) , var_1_4)) + var_1_40);
	}


	// From: Req20Batch58Amount250
	signed long int stepLocal_14 = (var_1_32 + var_1_40) * var_1_36;
	if (stepLocal_14 > (3395460357u - var_1_34)) {
		var_1_67 = var_1_48;
	}


	// From: Req14Batch58Amount250
	if (var_1_60) {
		if (! (var_1_56 <= var_1_54)) {
			var_1_55 = (var_1_44 + (abs (var_1_27)));
		} else {
			var_1_55 = (32 - var_1_38);
		}
	}


	// From: Req3Batch58Amount250
	signed long int stepLocal_2 = ~ var_1_6;
	if (stepLocal_2 > (min ((var_1_10 - 1) , (min (var_1_4 , var_1_67))))) {
		var_1_23 = (var_1_24 + (abs (abs (var_1_25))));
	}


	// From: Req18Batch58Amount250
	if (((min (var_1_44 , var_1_35)) * (var_1_56 >> var_1_4)) >= var_1_6) {
		var_1_65 = -10;
	} else {
		var_1_65 = var_1_35;
	}


	// From: Req6Batch58Amount250
	unsigned short int stepLocal_3 = var_1_10;
	if ((min (var_1_27 , (var_1_32 + var_1_32))) >= stepLocal_3) {
		var_1_29 = (4145023310u - var_1_32);
	} else {
		var_1_29 = (min (last_1_var_1_29 , var_1_32));
	}


	// From: Req12Batch58Amount250
	unsigned long int stepLocal_10 = var_1_29 - (var_1_48 - var_1_32);
	if (! var_1_60) {
		var_1_47 = (var_1_66 + var_1_46);
	} else {
		if (var_1_6 <= stepLocal_10) {
			var_1_47 = (min ((max ((max (var_1_35 , var_1_45)) , var_1_43)) , var_1_44));
		} else {
			var_1_47 = var_1_36;
		}
	}


	// From: Req7Batch58Amount250
	unsigned long int stepLocal_4 = var_1_29 * (var_1_7 - var_1_40);
	if (stepLocal_4 < (var_1_39 + (var_1_24 & var_1_6))) {
		var_1_30 = (var_1_31 - var_1_49);
	} else {
		var_1_30 = (47664 - var_1_49);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 31);
	assume_abort_if_not(var_1_35 <= 64);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 32);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 31);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 63);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 64);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 24575);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 536870911);
	assume_abort_if_not(var_1_58 <= 1073741823);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 1);
	assume_abort_if_not(var_1_64 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
}

int property() {
	return (((((((((((((((((((((last_1_var_1_47 / (8 + var_1_4)) > (max (-256 , (last_1_var_1_56 / var_1_6)))) ? ((var_1_4 != last_1_var_1_56) ? (var_1_1 == ((unsigned short int) (min (var_1_4 , (var_1_7 - (min (last_1_var_1_47 , last_1_var_1_40))))))) : (var_1_1 == ((unsigned short int) (min (var_1_7 , (var_1_4 + last_1_var_1_47)))))) : (var_1_1 == ((unsigned short int) (abs (var_1_4))))) && ((var_1_7 < (var_1_10 - last_1_var_1_39)) ? ((last_1_var_1_32 > last_1_var_1_39) ? (((min (last_1_var_1_67 , var_1_10)) < ((max (10000 , last_1_var_1_66)) - last_1_var_1_39)) ? (((max (last_1_var_1_59 , last_1_var_1_59)) != last_1_var_1_59) ? ((last_1_var_1_39 >= (var_1_7 * var_1_4)) ? (var_1_9 == ((double) (min ((max (var_1_14 , (abs (var_1_15)))) , ((var_1_16 + var_1_17) + (var_1_18 + var_1_19)))))) : 1) : (var_1_9 == ((double) ((7.2043630626503014E18 - var_1_20) - (min (var_1_21 , (7.8120422756997018E18 - var_1_22))))))) : (var_1_9 == ((double) var_1_18))) : (var_1_9 == ((double) var_1_22))) : 1)) && (((~ var_1_6) > (min ((var_1_10 - 1) , (min (var_1_4 , var_1_67))))) ? (var_1_23 == ((signed char) (var_1_24 + (abs (abs (var_1_25)))))) : 1)) && (var_1_60 ? (var_1_26 == ((signed short int) (var_1_49 + var_1_25))) : ((((var_1_22 * var_1_17) * var_1_18) == var_1_19) ? (var_1_26 == ((signed short int) ((min (var_1_25 , var_1_49)) + var_1_32))) : 1))) && ((var_1_9 > var_1_9) ? (var_1_27 == ((unsigned short int) ((abs (min (var_1_40 , last_1_var_1_27))) + var_1_4))) : (var_1_27 == ((unsigned short int) ((max ((max (last_1_var_1_27 , var_1_40)) , var_1_4)) + var_1_40))))) && (((min (var_1_27 , (var_1_32 + var_1_32))) >= var_1_10) ? (var_1_29 == ((unsigned long int) (4145023310u - var_1_32))) : (var_1_29 == ((unsigned long int) (min (last_1_var_1_29 , var_1_32)))))) && (((var_1_29 * (var_1_7 - var_1_40)) < (var_1_39 + (var_1_24 & var_1_6))) ? (var_1_30 == ((unsigned short int) (var_1_31 - var_1_49))) : (var_1_30 == ((unsigned short int) (47664 - var_1_49))))) && (((var_1_10 / var_1_6) <= (last_1_var_1_32 - var_1_4)) ? (last_1_var_1_60 ? (var_1_32 == ((unsigned char) (abs (var_1_33 - (min (var_1_4 , var_1_34)))))) : ((var_1_4 >= last_1_var_1_1) ? (var_1_32 == ((unsigned char) (var_1_34 + ((var_1_35 + var_1_36) - 4)))) : 1)) : ((var_1_31 <= last_1_var_1_47) ? (var_1_32 == ((unsigned char) var_1_34)) : (var_1_32 == ((unsigned char) var_1_34))))) && (var_1_38 == ((signed short int) (min ((var_1_33 - 1000) , last_1_var_1_38))))) && ((last_1_var_1_60 && (last_1_var_1_9 >= last_1_var_1_59)) ? ((last_1_var_1_30 < 4) ? (last_1_var_1_60 ? (var_1_39 == ((unsigned long int) last_1_var_1_27)) : ((last_1_var_1_40 <= last_1_var_1_39) ? (var_1_39 == ((unsigned long int) (last_1_var_1_29 + var_1_33))) : (var_1_39 == ((unsigned long int) (min (last_1_var_1_40 , (4003062372u - var_1_34))))))) : (var_1_39 == ((unsigned long int) var_1_10))) : (var_1_39 == ((unsigned long int) last_1_var_1_32)))) && ((last_1_var_1_60 || last_1_var_1_60) ? ((last_1_var_1_49 <= last_1_var_1_39) ? (var_1_40 == ((unsigned char) (min ((var_1_4 + var_1_36) , (min (var_1_35 , (max (var_1_34 , var_1_33)))))))) : (var_1_40 == ((unsigned char) (var_1_33 - ((var_1_42 + var_1_43) + (var_1_36 - var_1_44)))))) : (var_1_40 == ((unsigned char) ((var_1_45 + (max (64 , var_1_46))) - var_1_44))))) && ((! var_1_60) ? (var_1_47 == ((unsigned short int) (var_1_66 + var_1_46))) : ((var_1_6 <= (var_1_29 - (var_1_48 - var_1_32))) ? (var_1_47 == ((unsigned short int) (min ((max ((max (var_1_35 , var_1_45)) , var_1_43)) , var_1_44)))) : (var_1_47 == ((unsigned short int) var_1_36))))) && ((! last_1_var_1_60) ? (last_1_var_1_60 ? (var_1_49 == ((unsigned short int) (abs (var_1_7 - var_1_45)))) : (var_1_49 == ((unsigned short int) (var_1_43 + (var_1_33 + last_1_var_1_49))))) : (last_1_var_1_60 ? (last_1_var_1_60 ? (last_1_var_1_60 ? (var_1_49 == ((unsigned short int) var_1_44)) : (((var_1_21 + var_1_19) <= ((- last_1_var_1_59) / var_1_52)) ? (var_1_49 == ((unsigned short int) last_1_var_1_40)) : (var_1_49 == ((unsigned short int) (max (var_1_35 , (abs (128)))))))) : (last_1_var_1_60 ? ((last_1_var_1_9 <= var_1_17) ? (var_1_49 == ((unsigned short int) (((var_1_54 - 4) - var_1_44) + last_1_var_1_26))) : 1) : 1)) : 1))) && (var_1_60 ? ((! (var_1_56 <= var_1_54)) ? (var_1_55 == ((signed short int) (var_1_44 + (abs (var_1_27))))) : (var_1_55 == ((signed short int) (32 - var_1_38)))) : 1)) && (var_1_60 ? (var_1_56 == ((signed long int) ((var_1_49 + (var_1_58 - var_1_1)) - var_1_38))) : 1)) && (((min ((var_1_9 / var_1_52) , var_1_9)) <= last_1_var_1_59) ? (var_1_59 == ((double) (max (var_1_18 , (var_1_17 + (8.1 - var_1_22)))))) : 1)) && ((-0.2f <= var_1_18) ? (var_1_60 == ((unsigned char) ((! var_1_61) || ((var_1_2 && var_1_53) && var_1_62)))) : ((last_1_var_1_55 < (var_1_44 + var_1_42)) ? (var_1_60 == ((unsigned char) (var_1_51 || var_1_61))) : ((var_1_35 >= last_1_var_1_32) ? (var_1_60 == ((unsigned char) (((var_1_16 == var_1_21) || (var_1_63 && var_1_61)) && var_1_64))) : 1)))) && ((((min (var_1_44 , var_1_35)) * (var_1_56 >> var_1_4)) >= var_1_6) ? (var_1_65 == ((signed char) -10)) : (var_1_65 == ((signed char) var_1_35)))) && (((var_1_49 + var_1_10) > var_1_54) ? (var_1_66 == ((unsigned long int) 128u)) : 1)) && ((((var_1_32 + var_1_40) * var_1_36) > (3395460357u - var_1_34)) ? (var_1_67 == ((unsigned long int) var_1_48)) : 1)
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
