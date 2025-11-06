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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
float var_1_7 = 999.5;
float var_1_8 = 0.75;
float var_1_9 = 1000000000000.5;
float var_1_10 = 1.4;
unsigned char var_1_11 = 0;
float var_1_12 = 15.8;
float var_1_13 = 63.3;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 2886849928;
unsigned long int var_1_20 = 0;
unsigned long int var_1_22 = 10;
unsigned short int var_1_23 = 10;
unsigned short int var_1_24 = 5;
unsigned short int var_1_25 = 100;
unsigned short int var_1_26 = 64;
signed short int var_1_27 = 8;
signed short int var_1_28 = 32;
signed short int var_1_29 = 64;
signed short int var_1_30 = -200;
signed short int var_1_31 = 10;
signed short int var_1_32 = 64;
signed short int var_1_33 = 32;
signed short int var_1_34 = 23914;
signed short int var_1_35 = 25;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 16;
signed long int var_1_38 = -32;
signed long int var_1_39 = 5;
unsigned short int var_1_40 = 2;
float var_1_41 = 2.2;
float var_1_42 = 2.4;
unsigned short int var_1_44 = 2;
unsigned short int var_1_45 = 200;
float var_1_46 = 10.5;
float var_1_47 = 16.25;
float var_1_48 = 100000000000.125;
float var_1_49 = 10.125;
unsigned char var_1_50 = 10;
unsigned char var_1_51 = 50;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 256;
signed long int var_1_54 = -5;
signed short int var_1_55 = -2;
signed short int var_1_56 = 64;
unsigned long int var_1_57 = 8;
unsigned char var_1_58 = 0;
signed long int var_1_59 = -256;
signed long int var_1_60 = 1447178660;
unsigned long int var_1_61 = 10000000;
unsigned long int var_1_62 = 2757283136;
unsigned long int var_1_63 = 2574543839;
unsigned char var_1_64 = 16;
unsigned char var_1_65 = 64;
unsigned char var_1_66 = 4;
unsigned char var_1_67 = 128;
float var_1_68 = 0.875;
float var_1_69 = 100000000.55;
float var_1_70 = 49.5;
unsigned char var_1_71 = 0;
signed char var_1_72 = 0;
signed char var_1_73 = 8;
signed char var_1_74 = 0;
signed char var_1_75 = 8;
signed char var_1_76 = 10;
signed long int var_1_77 = -5;
signed short int var_1_78 = -5;
unsigned long int var_1_79 = 8;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_40 = 2;
signed short int last_1_var_1_78 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch103Amount250
	var_1_53 = (min (var_1_24 , var_1_35));


	// From: Req12Batch103Amount250
	var_1_54 = (-5 + (max (var_1_34 , (var_1_35 - var_1_52))));


	// From: Req14Batch103Amount250
	var_1_57 = ((var_1_39 + var_1_31) + 16u);


	// From: Req17Batch103Amount250
	if (var_1_16) {
		if ((var_1_7 * var_1_8) > var_1_41) {
			var_1_61 = (abs (max (var_1_35 , (var_1_62 - var_1_33))));
		} else {
			var_1_61 = (max (var_1_52 , (var_1_63 - var_1_24)));
		}
	} else {
		var_1_61 = (var_1_63 - (var_1_60 - var_1_44));
	}


	// From: Req6Batch103Amount250
	signed short int stepLocal_2 = var_1_35;
	if (var_1_34 <= stepLocal_2) {
		var_1_37 = (max (64u , (max ((min (var_1_57 , var_1_31)) , var_1_20))));
	}


	// From: Req10Batch103Amount250
	if (var_1_57 >= (var_1_19 - 32u)) {
		if ((var_1_33 - 2) >= var_1_61) {
			var_1_50 = ((200 - var_1_51) - var_1_52);
		} else {
			var_1_50 = var_1_51;
		}
	}


	// From: Req22Batch103Amount250
	unsigned long int stepLocal_6 = var_1_57;
	if (stepLocal_6 >= var_1_53) {
		var_1_77 = (max ((var_1_37 + var_1_52) , var_1_39));
	} else {
		var_1_77 = var_1_66;
	}


	// From: Req23Batch103Amount250
	if (var_1_15) {
		var_1_78 = (max ((min ((abs (var_1_66)) , var_1_50)) , last_1_var_1_78));
	} else {
		var_1_78 = last_1_var_1_78;
	}


	// From: Req24Batch103Amount250
	signed short int stepLocal_7 = var_1_33;
	if ((var_1_62 * (max (var_1_50 , var_1_53))) >= stepLocal_7) {
		var_1_79 = var_1_75;
	}


	// From: Req3Batch103Amount250
	unsigned long int stepLocal_0 = abs (var_1_22);
	if (var_1_79 < stepLocal_0) {
		var_1_23 = (min ((max (var_1_24 , var_1_25)) , var_1_26));
	} else {
		if (var_1_15) {
			var_1_23 = var_1_26;
		} else {
			var_1_23 = var_1_25;
		}
	}


	// From: Req9Batch103Amount250
	signed long int stepLocal_5 = var_1_78 ^ -2;
	if (stepLocal_5 != var_1_24) {
		var_1_46 = var_1_10;
	} else {
		var_1_46 = ((max ((15.2f + var_1_47) , var_1_48)) - var_1_49);
	}


	// From: Req19Batch103Amount250
	if ((var_1_67 - var_1_51) <= ((max (var_1_50 , 64)) - var_1_37)) {
		if (var_1_16) {
			if (var_1_29 <= var_1_77) {
				var_1_68 = (abs (var_1_10));
			} else {
				var_1_68 = (((min (49.226f , var_1_47)) - var_1_69) + (4.8f + (max (var_1_9 , var_1_8))));
			}
		}
	} else {
		if ((var_1_9 / var_1_12) <= var_1_10) {
			var_1_68 = (var_1_49 - var_1_70);
		} else {
			var_1_68 = var_1_49;
		}
	}


	// From: Req20Batch103Amount250
	var_1_71 = ((var_1_68 != var_1_47) && var_1_18);


	// From: Req2Batch103Amount250
	if ((var_1_46 / (max (var_1_12 , var_1_13))) >= (- var_1_7)) {
		var_1_11 = (var_1_14 && (var_1_15 && var_1_16));
	} else {
		if ((var_1_12 / (abs (var_1_13))) >= var_1_7) {
			var_1_11 = ((var_1_37 > (~ var_1_79)) && var_1_18);
		} else {
			if (var_1_16) {
				var_1_11 = (! var_1_18);
			} else {
				var_1_11 = (((var_1_19 - var_1_20) <= (var_1_61 / var_1_22)) || var_1_15);
			}
		}
	}


	// From: Req5Batch103Amount250
	signed long int stepLocal_1 = var_1_54;
	if ((- var_1_31) < stepLocal_1) {
		if (9.999999999999991E14f == ((- var_1_68) * 64.375f)) {
			var_1_36 = (! var_1_18);
		}
	} else {
		var_1_36 = var_1_18;
	}


	// From: Req7Batch103Amount250
	unsigned char stepLocal_3 = var_1_11 && var_1_18;
	if (var_1_16) {
		if (stepLocal_3 && var_1_15) {
			var_1_38 = var_1_33;
		}
	} else {
		var_1_38 = (((min (var_1_35 , 8)) + var_1_39) - var_1_31);
	}


	// From: Req13Batch103Amount250
	if (var_1_11) {
		if (((var_1_9 * var_1_8) + var_1_41) != var_1_7) {
			var_1_55 = (((var_1_51 - var_1_52) + var_1_54) + (var_1_53 + var_1_56));
		}
	} else {
		var_1_55 = (min (var_1_33 , var_1_53));
	}


	// From: Req15Batch103Amount250
	if ((var_1_9 + 24.5) <= var_1_49) {
		var_1_58 = (var_1_11 && ((! var_1_15) || var_1_18));
	} else {
		var_1_58 = var_1_14;
	}


	// From: Req16Batch103Amount250
	if (var_1_15) {
		var_1_59 = (min ((var_1_35 - var_1_25) , var_1_38));
	} else {
		var_1_59 = (var_1_24 - (var_1_60 - (var_1_52 + var_1_25)));
	}


	// From: Req18Batch103Amount250
	if (var_1_37 != (var_1_51 / 16u)) {
		if (var_1_33 < (var_1_35 * var_1_32)) {
			var_1_64 = (abs (var_1_51));
		} else {
			if (((var_1_53 + var_1_55) / (abs (var_1_34))) < var_1_38) {
				var_1_64 = (max (var_1_51 , (var_1_52 + (var_1_65 - 10))));
			} else {
				var_1_64 = (var_1_52 + 1);
			}
		}
	} else {
		if ((128 - var_1_66) >= var_1_38) {
			var_1_64 = (var_1_65 + var_1_51);
		} else {
			var_1_64 = (var_1_67 - var_1_66);
		}
	}


	// From: Req21Batch103Amount250
	if ((var_1_8 + var_1_41) >= (var_1_49 - (max (var_1_47 , var_1_42)))) {
		if (var_1_58 && var_1_18) {
			if (var_1_18) {
				var_1_72 = var_1_51;
			} else {
				var_1_72 = (max (var_1_51 , (max (var_1_73 , -16))));
			}
		} else {
			if (10000000u < var_1_20) {
				var_1_72 = var_1_73;
			}
		}
	} else {
		var_1_72 = (var_1_51 - (min (var_1_74 , (max (var_1_75 , var_1_76)))));
	}


	// From: Req1Batch103Amount250
	if (var_1_57 <= ((var_1_55 + var_1_59) * var_1_37)) {
		if (var_1_58) {
			var_1_1 = (abs (var_1_7));
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = (max (var_1_7 , ((var_1_8 + var_1_9) + var_1_10)));
	}


	// From: Req4Batch103Amount250
	if (var_1_58) {
		var_1_27 = (max ((min (var_1_28 , var_1_29)) , var_1_30));
	} else {
		var_1_27 = (((min (var_1_31 , var_1_32)) + var_1_33) - (var_1_34 - var_1_35));
	}


	// From: Req8Batch103Amount250
	signed short int stepLocal_4 = var_1_55;
	if ((max (var_1_12 , (var_1_41 - var_1_42))) <= (var_1_9 / var_1_13)) {
		if (! var_1_16) {
			if (stepLocal_4 != last_1_var_1_40) {
				if (var_1_58) {
					var_1_40 = (max (var_1_32 , var_1_25));
				}
			} else {
				var_1_40 = var_1_44;
			}
		} else {
			var_1_40 = var_1_31;
		}
	} else {
		var_1_40 = var_1_45;
	}
}



void updateVariables(void) {
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967295);
	assume_abort_if_not(var_1_22 != 0);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32767);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 16383);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 16383);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1073741823);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 65534);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= -8191);
	assume_abort_if_not(var_1_56 <= 8191);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 1073741823);
	assume_abort_if_not(var_1_60 <= 2147483646);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 2147483647);
	assume_abort_if_not(var_1_62 <= 4294967294);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 63);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 127);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427383000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854766000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -127);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_40 = var_1_40;
	last_1_var_1_78 = var_1_78;
}

int property(void) {
	return ((((((((((((((((((((((((var_1_57 <= ((var_1_55 + var_1_59) * var_1_37)) ? (var_1_58 ? (var_1_1 == ((float) (abs (var_1_7)))) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) (max (var_1_7 , ((var_1_8 + var_1_9) + var_1_10)))))) && (((var_1_46 / (max (var_1_12 , var_1_13))) >= (- var_1_7)) ? (var_1_11 == ((unsigned char) (var_1_14 && (var_1_15 && var_1_16)))) : (((var_1_12 / (abs (var_1_13))) >= var_1_7) ? (var_1_11 == ((unsigned char) ((var_1_37 > (~ var_1_79)) && var_1_18))) : (var_1_16 ? (var_1_11 == ((unsigned char) (! var_1_18))) : (var_1_11 == ((unsigned char) (((var_1_19 - var_1_20) <= (var_1_61 / var_1_22)) || var_1_15))))))) && ((var_1_79 < (abs (var_1_22))) ? (var_1_23 == ((unsigned short int) (min ((max (var_1_24 , var_1_25)) , var_1_26)))) : (var_1_15 ? (var_1_23 == ((unsigned short int) var_1_26)) : (var_1_23 == ((unsigned short int) var_1_25))))) && (var_1_58 ? (var_1_27 == ((signed short int) (max ((min (var_1_28 , var_1_29)) , var_1_30)))) : (var_1_27 == ((signed short int) (((min (var_1_31 , var_1_32)) + var_1_33) - (var_1_34 - var_1_35)))))) && (((- var_1_31) < var_1_54) ? ((9.999999999999991E14f == ((- var_1_68) * 64.375f)) ? (var_1_36 == ((unsigned char) (! var_1_18))) : 1) : (var_1_36 == ((unsigned char) var_1_18)))) && ((var_1_34 <= var_1_35) ? (var_1_37 == ((unsigned long int) (max (64u , (max ((min (var_1_57 , var_1_31)) , var_1_20)))))) : 1)) && (var_1_16 ? (((var_1_11 && var_1_18) && var_1_15) ? (var_1_38 == ((signed long int) var_1_33)) : 1) : (var_1_38 == ((signed long int) (((min (var_1_35 , 8)) + var_1_39) - var_1_31))))) && (((max (var_1_12 , (var_1_41 - var_1_42))) <= (var_1_9 / var_1_13)) ? ((! var_1_16) ? ((var_1_55 != last_1_var_1_40) ? (var_1_58 ? (var_1_40 == ((unsigned short int) (max (var_1_32 , var_1_25)))) : 1) : (var_1_40 == ((unsigned short int) var_1_44))) : (var_1_40 == ((unsigned short int) var_1_31))) : (var_1_40 == ((unsigned short int) var_1_45)))) && (((var_1_78 ^ -2) != var_1_24) ? (var_1_46 == ((float) var_1_10)) : (var_1_46 == ((float) ((max ((15.2f + var_1_47) , var_1_48)) - var_1_49))))) && ((var_1_57 >= (var_1_19 - 32u)) ? (((var_1_33 - 2) >= var_1_61) ? (var_1_50 == ((unsigned char) ((200 - var_1_51) - var_1_52))) : (var_1_50 == ((unsigned char) var_1_51))) : 1)) && (var_1_53 == ((unsigned long int) (min (var_1_24 , var_1_35))))) && (var_1_54 == ((signed long int) (-5 + (max (var_1_34 , (var_1_35 - var_1_52))))))) && (var_1_11 ? ((((var_1_9 * var_1_8) + var_1_41) != var_1_7) ? (var_1_55 == ((signed short int) (((var_1_51 - var_1_52) + var_1_54) + (var_1_53 + var_1_56)))) : 1) : (var_1_55 == ((signed short int) (min (var_1_33 , var_1_53)))))) && (var_1_57 == ((unsigned long int) ((var_1_39 + var_1_31) + 16u)))) && (((var_1_9 + 24.5) <= var_1_49) ? (var_1_58 == ((unsigned char) (var_1_11 && ((! var_1_15) || var_1_18)))) : (var_1_58 == ((unsigned char) var_1_14)))) && (var_1_15 ? (var_1_59 == ((signed long int) (min ((var_1_35 - var_1_25) , var_1_38)))) : (var_1_59 == ((signed long int) (var_1_24 - (var_1_60 - (var_1_52 + var_1_25))))))) && (var_1_16 ? (((var_1_7 * var_1_8) > var_1_41) ? (var_1_61 == ((unsigned long int) (abs (max (var_1_35 , (var_1_62 - var_1_33)))))) : (var_1_61 == ((unsigned long int) (max (var_1_52 , (var_1_63 - var_1_24)))))) : (var_1_61 == ((unsigned long int) (var_1_63 - (var_1_60 - var_1_44)))))) && ((var_1_37 != (var_1_51 / 16u)) ? ((var_1_33 < (var_1_35 * var_1_32)) ? (var_1_64 == ((unsigned char) (abs (var_1_51)))) : ((((var_1_53 + var_1_55) / (abs (var_1_34))) < var_1_38) ? (var_1_64 == ((unsigned char) (max (var_1_51 , (var_1_52 + (var_1_65 - 10)))))) : (var_1_64 == ((unsigned char) (var_1_52 + 1))))) : (((128 - var_1_66) >= var_1_38) ? (var_1_64 == ((unsigned char) (var_1_65 + var_1_51))) : (var_1_64 == ((unsigned char) (var_1_67 - var_1_66)))))) && (((var_1_67 - var_1_51) <= ((max (var_1_50 , 64)) - var_1_37)) ? (var_1_16 ? ((var_1_29 <= var_1_77) ? (var_1_68 == ((float) (abs (var_1_10)))) : (var_1_68 == ((float) (((min (49.226f , var_1_47)) - var_1_69) + (4.8f + (max (var_1_9 , var_1_8))))))) : 1) : (((var_1_9 / var_1_12) <= var_1_10) ? (var_1_68 == ((float) (var_1_49 - var_1_70))) : (var_1_68 == ((float) var_1_49))))) && (var_1_71 == ((unsigned char) ((var_1_68 != var_1_47) && var_1_18)))) && (((var_1_8 + var_1_41) >= (var_1_49 - (max (var_1_47 , var_1_42)))) ? ((var_1_58 && var_1_18) ? (var_1_18 ? (var_1_72 == ((signed char) var_1_51)) : (var_1_72 == ((signed char) (max (var_1_51 , (max (var_1_73 , -16))))))) : ((10000000u < var_1_20) ? (var_1_72 == ((signed char) var_1_73)) : 1)) : (var_1_72 == ((signed char) (var_1_51 - (min (var_1_74 , (max (var_1_75 , var_1_76))))))))) && ((var_1_57 >= var_1_53) ? (var_1_77 == ((signed long int) (max ((var_1_37 + var_1_52) , var_1_39)))) : (var_1_77 == ((signed long int) var_1_66)))) && (var_1_15 ? (var_1_78 == ((signed short int) (max ((min ((abs (var_1_66)) , var_1_50)) , last_1_var_1_78)))) : (var_1_78 == ((signed short int) last_1_var_1_78)))) && (((var_1_62 * (max (var_1_50 , var_1_53))) >= var_1_33) ? (var_1_79 == ((unsigned long int) var_1_75)) : 1)
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
