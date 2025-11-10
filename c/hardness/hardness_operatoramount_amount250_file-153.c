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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = -8;
signed short int var_1_3 = -5;
signed short int var_1_4 = 25;
signed short int var_1_5 = -64;
signed short int var_1_6 = -32;
float var_1_7 = 25.4;
signed long int var_1_8 = 32;
signed long int var_1_9 = 8;
float var_1_14 = 0.0;
float var_1_15 = 0.0;
float var_1_16 = 1.75;
float var_1_17 = 0.0;
signed long int var_1_18 = 5;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 2536624227;
unsigned long int var_1_21 = 2112201930;
unsigned long int var_1_22 = 16;
signed short int var_1_23 = -128;
signed short int var_1_24 = 2;
signed short int var_1_25 = 256;
signed short int var_1_26 = 8;
signed long int var_1_27 = 25;
signed short int var_1_28 = 16;
signed short int var_1_29 = 22894;
signed short int var_1_30 = 128;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed short int var_1_34 = 64;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 25;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 1;
float var_1_39 = 32.6;
float var_1_40 = 32.55;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
double var_1_48 = 24.75;
unsigned long int var_1_49 = 2;
unsigned long int var_1_50 = 256;
signed short int var_1_51 = 16;
signed short int var_1_52 = 10000;
unsigned long int var_1_53 = 8;
unsigned short int var_1_54 = 16;
signed short int var_1_55 = 64;
unsigned short int var_1_56 = 34469;
double var_1_57 = 16.6;
double var_1_58 = 32.6;
double var_1_59 = 0.0;
float var_1_60 = 49.25;
float var_1_61 = 500.75;
signed long int var_1_62 = 256;
signed long int var_1_63 = -128;
signed long int var_1_64 = 8;
signed long int var_1_65 = 64;
signed short int var_1_66 = 4;
signed short int var_1_67 = -256;

// Calibration values

// Last'ed variables
float last_1_var_1_7 = 25.4;
signed long int last_1_var_1_18 = 5;
signed short int last_1_var_1_23 = -128;
signed long int last_1_var_1_27 = 25;
float last_1_var_1_39 = 32.6;
unsigned char last_1_var_1_41 = 0;
unsigned char last_1_var_1_46 = 0;
double last_1_var_1_48 = 24.75;
unsigned long int last_1_var_1_49 = 2;
signed short int last_1_var_1_51 = 16;
float last_1_var_1_60 = 49.25;
signed long int last_1_var_1_62 = 256;
signed long int last_1_var_1_63 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch153Amount250
	signed long int stepLocal_5 = var_1_28 - last_1_var_1_51;
	signed long int stepLocal_4 = max (last_1_var_1_62 , (48130 - 16));
	if ((min (last_1_var_1_39 , var_1_17)) > last_1_var_1_7) {
		if (stepLocal_4 < last_1_var_1_63) {
			var_1_41 = (! var_1_42);
		} else {
			if (last_1_var_1_7 < last_1_var_1_60) {
				var_1_41 = var_1_42;
			} else {
				var_1_41 = (var_1_42 || (last_1_var_1_46 && var_1_43));
			}
		}
	} else {
		if (last_1_var_1_27 == stepLocal_5) {
			var_1_41 = ((var_1_42 || var_1_43) || var_1_44);
		} else {
			if (var_1_42) {
				var_1_41 = ((! var_1_45) || var_1_44);
			} else {
				var_1_41 = var_1_44;
			}
		}
	}


	// From: Req19Batch153Amount250
	if (var_1_22 < 1u) {
		var_1_62 = (var_1_36 - last_1_var_1_63);
	} else {
		if (var_1_8 != last_1_var_1_18) {
			var_1_62 = (min (var_1_22 , last_1_var_1_23));
		}
	}


	// From: Req2Batch153Amount250
	signed long int stepLocal_1 = var_1_8;
	unsigned char stepLocal_0 = (var_1_5 * last_1_var_1_49) < (var_1_8 - var_1_9);
	if (stepLocal_0 || last_1_var_1_41) {
		if ((max (last_1_var_1_48 , last_1_var_1_39)) <= last_1_var_1_39) {
			if (last_1_var_1_39 < (max ((last_1_var_1_48 + last_1_var_1_39) , last_1_var_1_48))) {
				var_1_7 = (((var_1_14 + var_1_15) - 15.5f) - (max (32.25f , var_1_16)));
			}
		} else {
			if ((- last_1_var_1_49) < stepLocal_1) {
				if ((- last_1_var_1_39) > (- (var_1_15 / 0.75f))) {
					var_1_7 = ((var_1_17 - var_1_15) - var_1_16);
				} else {
					var_1_7 = (var_1_14 + var_1_15);
				}
			}
		}
	} else {
		var_1_7 = (var_1_15 + var_1_14);
	}


	// From: Req3Batch153Amount250
	if (var_1_15 > var_1_7) {
		var_1_18 = (abs (var_1_5));
	}


	// From: Req18Batch153Amount250
	unsigned short int stepLocal_11 = var_1_56;
	if (stepLocal_11 < (- (var_1_20 ^ var_1_62))) {
		var_1_60 = (var_1_14 - var_1_61);
	} else {
		var_1_60 = ((5.75f - var_1_15) + (max (var_1_58 , var_1_14)));
	}


	// From: Req11Batch153Amount250
	if (var_1_42) {
		var_1_46 = (((last_1_var_1_41 || var_1_45) && (! var_1_43)) && ((var_1_25 > 5) || var_1_47));
	}


	// From: Req1Batch153Amount250
	if (var_1_46) {
		var_1_1 = (min ((64 + var_1_3) , (var_1_4 + (max (var_1_5 , var_1_6)))));
	}


	// From: Req4Batch153Amount250
	var_1_19 = (var_1_20 - (var_1_21 - var_1_22));


	// From: Req7Batch153Amount250
	var_1_34 = var_1_30;


	// From: Req9Batch153Amount250
	var_1_39 = ((max (var_1_14 , (15.5f + var_1_40))) + var_1_15);


	// From: Req12Batch153Amount250
	unsigned long int stepLocal_6 = max ((var_1_19 + var_1_5) , var_1_26);
	if (((var_1_29 + var_1_19) * var_1_4) == stepLocal_6) {
		var_1_48 = (min (var_1_17 , var_1_16));
	}


	// From: Req16Batch153Amount250
	signed short int stepLocal_9 = var_1_25;
	if (stepLocal_9 <= ((18701 - var_1_55) >> (2u + 1u))) {
		var_1_54 = var_1_19;
	} else {
		var_1_54 = (var_1_56 - var_1_55);
	}


	// From: Req17Batch153Amount250
	unsigned long int stepLocal_10 = var_1_26 / (var_1_20 - var_1_52);
	if (var_1_22 > stepLocal_10) {
		var_1_57 = ((var_1_17 - (var_1_14 - var_1_58)) - (var_1_59 - var_1_15));
	}


	// From: Req21Batch153Amount250
	var_1_66 = var_1_38;


	// From: Req22Batch153Amount250
	signed long int stepLocal_20 = var_1_52 << var_1_9;
	unsigned long int stepLocal_19 = var_1_62 / var_1_21;
	unsigned char stepLocal_18 = var_1_9 < var_1_26;
	if ((var_1_46 && (var_1_7 > var_1_58)) && stepLocal_18) {
		if (stepLocal_20 > (var_1_65 - var_1_55)) {
			if (var_1_42) {
				if (var_1_18 <= stepLocal_19) {
					var_1_67 = var_1_26;
				} else {
					var_1_67 = var_1_55;
				}
			}
		} else {
			var_1_67 = var_1_37;
		}
	} else {
		var_1_67 = var_1_6;
	}


	// From: Req13Batch153Amount250
	if (var_1_42) {
		var_1_49 = (min ((var_1_37 + 4u) , (max (var_1_50 , 64u))));
	} else {
		if (var_1_18 >= var_1_36) {
			if (var_1_48 >= var_1_14) {
				var_1_49 = (var_1_20 - var_1_26);
			} else {
				var_1_49 = (min ((var_1_20 - var_1_36) , var_1_38));
			}
		}
	}


	// From: Req15Batch153Amount250
	unsigned char stepLocal_8 = var_1_36;
	if (var_1_43) {
		if (var_1_49 <= stepLocal_8) {
			var_1_53 = (max (var_1_9 , (min (var_1_26 , var_1_36))));
		} else {
			var_1_53 = (max (var_1_20 , var_1_37));
		}
	}


	// From: Req5Batch153Amount250
	if (var_1_57 >= var_1_14) {
		if (var_1_4 > (256 / var_1_24)) {
			if (((abs (var_1_57)) - 3.15) >= var_1_16) {
				var_1_23 = (min ((var_1_6 + var_1_4) , (var_1_25 - var_1_26)));
			}
		} else {
			if (var_1_46) {
				var_1_23 = var_1_26;
			} else {
				var_1_23 = var_1_3;
			}
		}
	}


	// From: Req8Batch153Amount250
	if (var_1_32 && var_1_33) {
		if (((min (var_1_7 , var_1_39)) * var_1_17) <= var_1_60) {
			if ((var_1_29 - var_1_30) != var_1_49) {
				var_1_35 = ((min (var_1_36 , var_1_37)) + var_1_38);
			} else {
				var_1_35 = var_1_36;
			}
		}
	} else {
		var_1_35 = var_1_36;
	}


	// From: Req14Batch153Amount250
	signed short int stepLocal_7 = var_1_66;
	if (var_1_6 < stepLocal_7) {
		var_1_51 = ((var_1_66 + (var_1_36 - 25)) + (var_1_38 - (var_1_52 - var_1_37)));
	} else {
		var_1_51 = var_1_4;
	}


	// From: Req6Batch153Amount250
	signed long int stepLocal_3 = var_1_28 - (var_1_29 - var_1_30);
	unsigned char stepLocal_2 = var_1_41;
	if (var_1_46) {
		if (var_1_25 >= stepLocal_3) {
			var_1_27 = (min ((var_1_26 + var_1_51) , (25 + var_1_28)));
		} else {
			if (var_1_57 < 31.4f) {
				if (stepLocal_2 || var_1_46) {
					var_1_27 = var_1_25;
				} else {
					var_1_27 = var_1_4;
				}
			} else {
				var_1_27 = var_1_4;
			}
		}
	}


	// From: Req20Batch153Amount250
	signed short int stepLocal_17 = var_1_66;
	unsigned long int stepLocal_16 = (var_1_21 | var_1_49) * var_1_52;
	unsigned char stepLocal_15 = var_1_46;
	signed short int stepLocal_14 = var_1_24;
	unsigned long int stepLocal_13 = var_1_53;
	signed short int stepLocal_12 = var_1_67;
	if (stepLocal_16 > var_1_9) {
		if (stepLocal_17 <= (abs (var_1_56))) {
			var_1_63 = (var_1_67 + (var_1_52 - (1000000000 - var_1_64)));
		} else {
			var_1_63 = (abs (var_1_25));
		}
	} else {
		if ((-5 / -32) <= stepLocal_13) {
			if (stepLocal_14 > var_1_4) {
				if (stepLocal_12 == ((var_1_51 + var_1_3) / var_1_29)) {
					if (var_1_47 && stepLocal_15) {
						var_1_63 = (var_1_49 - var_1_65);
					} else {
						var_1_63 = (max (var_1_49 , var_1_22));
					}
				} else {
					var_1_63 = (var_1_66 - var_1_52);
				}
			} else {
				var_1_63 = -5;
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 2305843.009213691400e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 2305843.009213691400e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 4611686.018427383000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 8191);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 16383);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 32767);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691400e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 4611686.018427383000e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 536870911);
	var_1_65 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
}

int property(void) {
	return (((((((((((((((((((((var_1_46 ? (var_1_1 == ((signed short int) (min ((64 + var_1_3) , (var_1_4 + (max (var_1_5 , var_1_6))))))) : 1) && ((((var_1_5 * last_1_var_1_49) < (var_1_8 - var_1_9)) || last_1_var_1_41) ? (((max (last_1_var_1_48 , last_1_var_1_39)) <= last_1_var_1_39) ? ((last_1_var_1_39 < (max ((last_1_var_1_48 + last_1_var_1_39) , last_1_var_1_48))) ? (var_1_7 == ((float) (((var_1_14 + var_1_15) - 15.5f) - (max (32.25f , var_1_16))))) : 1) : (((- last_1_var_1_49) < var_1_8) ? (((- last_1_var_1_39) > (- (var_1_15 / 0.75f))) ? (var_1_7 == ((float) ((var_1_17 - var_1_15) - var_1_16))) : (var_1_7 == ((float) (var_1_14 + var_1_15)))) : 1)) : (var_1_7 == ((float) (var_1_15 + var_1_14))))) && ((var_1_15 > var_1_7) ? (var_1_18 == ((signed long int) (abs (var_1_5)))) : 1)) && (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - var_1_22))))) && ((var_1_57 >= var_1_14) ? ((var_1_4 > (256 / var_1_24)) ? ((((abs (var_1_57)) - 3.15) >= var_1_16) ? (var_1_23 == ((signed short int) (min ((var_1_6 + var_1_4) , (var_1_25 - var_1_26))))) : 1) : (var_1_46 ? (var_1_23 == ((signed short int) var_1_26)) : (var_1_23 == ((signed short int) var_1_3)))) : 1)) && (var_1_46 ? ((var_1_25 >= (var_1_28 - (var_1_29 - var_1_30))) ? (var_1_27 == ((signed long int) (min ((var_1_26 + var_1_51) , (25 + var_1_28))))) : ((var_1_57 < 31.4f) ? ((var_1_41 || var_1_46) ? (var_1_27 == ((signed long int) var_1_25)) : (var_1_27 == ((signed long int) var_1_4))) : (var_1_27 == ((signed long int) var_1_4)))) : 1)) && (var_1_34 == ((signed short int) var_1_30))) && ((var_1_32 && var_1_33) ? ((((min (var_1_7 , var_1_39)) * var_1_17) <= var_1_60) ? (((var_1_29 - var_1_30) != var_1_49) ? (var_1_35 == ((unsigned char) ((min (var_1_36 , var_1_37)) + var_1_38))) : (var_1_35 == ((unsigned char) var_1_36))) : 1) : (var_1_35 == ((unsigned char) var_1_36)))) && (var_1_39 == ((float) ((max (var_1_14 , (15.5f + var_1_40))) + var_1_15)))) && (((min (last_1_var_1_39 , var_1_17)) > last_1_var_1_7) ? (((max (last_1_var_1_62 , (48130 - 16))) < last_1_var_1_63) ? (var_1_41 == ((unsigned char) (! var_1_42))) : ((last_1_var_1_7 < last_1_var_1_60) ? (var_1_41 == ((unsigned char) var_1_42)) : (var_1_41 == ((unsigned char) (var_1_42 || (last_1_var_1_46 && var_1_43)))))) : ((last_1_var_1_27 == (var_1_28 - last_1_var_1_51)) ? (var_1_41 == ((unsigned char) ((var_1_42 || var_1_43) || var_1_44))) : (var_1_42 ? (var_1_41 == ((unsigned char) ((! var_1_45) || var_1_44))) : (var_1_41 == ((unsigned char) var_1_44)))))) && (var_1_42 ? (var_1_46 == ((unsigned char) (((last_1_var_1_41 || var_1_45) && (! var_1_43)) && ((var_1_25 > 5) || var_1_47)))) : 1)) && ((((var_1_29 + var_1_19) * var_1_4) == (max ((var_1_19 + var_1_5) , var_1_26))) ? (var_1_48 == ((double) (min (var_1_17 , var_1_16)))) : 1)) && (var_1_42 ? (var_1_49 == ((unsigned long int) (min ((var_1_37 + 4u) , (max (var_1_50 , 64u)))))) : ((var_1_18 >= var_1_36) ? ((var_1_48 >= var_1_14) ? (var_1_49 == ((unsigned long int) (var_1_20 - var_1_26))) : (var_1_49 == ((unsigned long int) (min ((var_1_20 - var_1_36) , var_1_38))))) : 1))) && ((var_1_6 < var_1_66) ? (var_1_51 == ((signed short int) ((var_1_66 + (var_1_36 - 25)) + (var_1_38 - (var_1_52 - var_1_37))))) : (var_1_51 == ((signed short int) var_1_4)))) && (var_1_43 ? ((var_1_49 <= var_1_36) ? (var_1_53 == ((unsigned long int) (max (var_1_9 , (min (var_1_26 , var_1_36)))))) : (var_1_53 == ((unsigned long int) (max (var_1_20 , var_1_37))))) : 1)) && ((var_1_25 <= ((18701 - var_1_55) >> (2u + 1u))) ? (var_1_54 == ((unsigned short int) var_1_19)) : (var_1_54 == ((unsigned short int) (var_1_56 - var_1_55))))) && ((var_1_22 > (var_1_26 / (var_1_20 - var_1_52))) ? (var_1_57 == ((double) ((var_1_17 - (var_1_14 - var_1_58)) - (var_1_59 - var_1_15)))) : 1)) && ((var_1_56 < (- (var_1_20 ^ var_1_62))) ? (var_1_60 == ((float) (var_1_14 - var_1_61))) : (var_1_60 == ((float) ((5.75f - var_1_15) + (max (var_1_58 , var_1_14))))))) && ((var_1_22 < 1u) ? (var_1_62 == ((signed long int) (var_1_36 - last_1_var_1_63))) : ((var_1_8 != last_1_var_1_18) ? (var_1_62 == ((signed long int) (min (var_1_22 , last_1_var_1_23)))) : 1))) && ((((var_1_21 | var_1_49) * var_1_52) > var_1_9) ? ((var_1_66 <= (abs (var_1_56))) ? (var_1_63 == ((signed long int) (var_1_67 + (var_1_52 - (1000000000 - var_1_64))))) : (var_1_63 == ((signed long int) (abs (var_1_25))))) : (((-5 / -32) <= var_1_53) ? ((var_1_24 > var_1_4) ? ((var_1_67 == ((var_1_51 + var_1_3) / var_1_29)) ? ((var_1_47 && var_1_46) ? (var_1_63 == ((signed long int) (var_1_49 - var_1_65))) : (var_1_63 == ((signed long int) (max (var_1_49 , var_1_22))))) : (var_1_63 == ((signed long int) (var_1_66 - var_1_52)))) : (var_1_63 == ((signed long int) -5))) : 1))) && (var_1_66 == ((signed short int) var_1_38))) && (((var_1_46 && (var_1_7 > var_1_58)) && (var_1_9 < var_1_26)) ? (((var_1_52 << var_1_9) > (var_1_65 - var_1_55)) ? (var_1_42 ? ((var_1_18 <= (var_1_62 / var_1_21)) ? (var_1_67 == ((signed short int) var_1_26)) : (var_1_67 == ((signed short int) var_1_55))) : 1) : (var_1_67 == ((signed short int) var_1_37))) : (var_1_67 == ((signed short int) var_1_6)))
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
