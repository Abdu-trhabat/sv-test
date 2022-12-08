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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 32;
unsigned short int var_1_8 = 100;
float var_1_9 = 255.75;
signed char var_1_10 = 64;
signed char var_1_11 = 32;
signed char var_1_12 = 4;
float var_1_13 = 0.0;
float var_1_14 = 7.25;
float var_1_15 = 8.125;
float var_1_16 = 24.5;
signed short int var_1_17 = -256;
double var_1_18 = 31.5;
float var_1_19 = 255.2;
float var_1_20 = 5.5;
signed long int var_1_21 = -8;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -500;
signed long int var_1_25 = -64;
signed long int var_1_26 = 16;
signed long int var_1_27 = 16;
signed long int var_1_28 = -100;
unsigned long int var_1_29 = 4;
unsigned short int var_1_30 = 25;
unsigned short int var_1_31 = 16;
float var_1_32 = 9.2;
signed long int var_1_33 = 8;
unsigned long int var_1_34 = 200;
unsigned long int var_1_35 = 1826977177;
float var_1_36 = 4.6;
float var_1_37 = 256.66;
unsigned short int var_1_38 = 32931;
unsigned short int var_1_39 = 20167;
unsigned short int var_1_40 = 25;
float var_1_41 = 2.75;
float var_1_42 = 0.625;
signed short int var_1_43 = 8;
signed short int var_1_44 = 5;
signed short int var_1_45 = 0;
signed short int var_1_46 = -64;
signed long int var_1_47 = 256;
signed long int var_1_48 = 1588997142;
signed long int var_1_49 = 100000;
unsigned short int var_1_50 = 10;
float var_1_51 = 16.8;
signed char var_1_52 = -32;
float var_1_53 = 8.6;
float var_1_54 = 4.2;
signed short int var_1_55 = -64;
signed long int var_1_56 = 25;
float var_1_57 = 16.25;
unsigned long int var_1_58 = 128;
unsigned long int var_1_59 = 4103141799;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
signed short int var_1_66 = 25;
signed short int var_1_67 = 10;
signed short int var_1_68 = 256;
signed short int var_1_69 = 100;
float var_1_70 = 1.696;
signed char var_1_71 = 5;
float var_1_72 = 10.7;
unsigned char var_1_73 = 10;
unsigned char var_1_74 = 32;
unsigned short int var_1_75 = 50;
unsigned long int var_1_76 = 5;
signed short int var_1_77 = 5;
signed short int var_1_78 = -2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_6 = 32;
unsigned short int last_1_var_1_8 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_19 = var_1_20;


	// From: CodeObject2
	if ((max (var_1_24 , var_1_25)) >= var_1_26) {
		var_1_21 = ((32 - var_1_27) + var_1_28);
	}


	// From: CodeObject3
	if ((var_1_25 % (min (var_1_30 , var_1_31))) < -4) {
		var_1_29 = var_1_31;
	} else {
		if ((5.6f - var_1_32) > var_1_19) {
			if (var_1_22 || (var_1_30 >= var_1_25)) {
				if ((var_1_28 % var_1_30) >= ((max (var_1_31 , var_1_27)) - var_1_33)) {
					var_1_29 = (min (var_1_33 , var_1_27));
				} else {
					var_1_29 = (abs (var_1_30));
				}
			}
		} else {
			var_1_29 = (max (var_1_31 , 10000000u));
		}
	}


	// From: CodeObject4
	if (var_1_24 > var_1_29) {
		var_1_34 = ((abs (1506512192u + var_1_35)) - var_1_30);
	} else {
		if (((var_1_28 & var_1_33) >= 8) || (var_1_27 < var_1_21)) {
			var_1_34 = var_1_35;
		}
	}


	// From: CodeObject5
	if ((var_1_20 * var_1_32) < (var_1_37 - (abs (var_1_19)))) {
		if ((var_1_38 - (var_1_39 - var_1_40)) <= var_1_30) {
			var_1_36 = (abs (1.4f - var_1_41));
		} else {
			var_1_36 = (abs (abs (var_1_41 - var_1_42)));
		}
	}


	// From: CodeObject6
	if (var_1_37 >= var_1_20) {
		if (var_1_25 >= var_1_34) {
			if (var_1_26 > 128) {
				var_1_43 = var_1_40;
			}
		} else {
			var_1_43 = (min ((abs (var_1_40)) , (var_1_44 + var_1_45)));
		}
	}


	// From: CodeObject7
	if (var_1_34 < var_1_39) {
		var_1_46 = (min (var_1_45 , var_1_44));
	}


	// From: CodeObject8
	if (var_1_28 <= 1) {
		var_1_47 = ((max ((var_1_48 - var_1_40) , 64)) - var_1_49);
	}


	// From: CodeObject9
	if (var_1_34 <= var_1_30) {
		if (var_1_34 <= var_1_25) {
			if (var_1_36 <= var_1_42) {
				var_1_50 = var_1_40;
			} else {
				if ((var_1_34 > var_1_38) || (var_1_35 < (abs (10u)))) {
					var_1_50 = var_1_39;
				}
			}
		} else {
			var_1_50 = var_1_39;
		}
	}


	// From: CodeObject10
	if (((-8 ^ var_1_43) % var_1_31) < (var_1_24 * var_1_49)) {
		if ((var_1_21 * var_1_25) < var_1_34) {
			var_1_51 = (var_1_53 + var_1_54);
		}
	} else {
		if (var_1_21 < (abs (min (var_1_31 , var_1_50)))) {
			if ((max (var_1_40 , 4)) != ((~ var_1_26) | (abs (var_1_49)))) {
				if (var_1_23 && (var_1_22 && (var_1_30 > var_1_25))) {
					var_1_51 = (99999.25f + (abs (var_1_53)));
				} else {
					var_1_51 = (abs (var_1_42));
				}
			} else {
				var_1_51 = (abs (abs (var_1_41)));
			}
		}
	}


	// From: CodeObject11
	if (! (var_1_36 <= (var_1_20 + var_1_54))) {
		var_1_55 = var_1_45;
	} else {
		var_1_55 = (max (var_1_52 , (min (var_1_40 , var_1_44))));
	}


	// From: CodeObject12
	if (var_1_53 <= 3.5f) {
		var_1_56 = ((abs (var_1_39)) - var_1_50);
	} else {
		if (var_1_30 >= (max ((~ var_1_39) , var_1_21))) {
			if (var_1_54 > (0.5f / var_1_57)) {
				var_1_56 = (var_1_50 - var_1_27);
			} else {
				var_1_56 = (abs (min (-16 , var_1_28)));
			}
		}
	}


	// From: CodeObject13
	if ((var_1_51 * var_1_54) <= (var_1_57 / 5.2f)) {
		if (var_1_50 <= ((var_1_27 ^ var_1_48) | var_1_43)) {
			var_1_58 = (abs (var_1_49));
		} else {
			var_1_58 = (var_1_59 - var_1_39);
		}
	}


	// From: CodeObject14
	if ((24.7 / var_1_57) < (- 128.4)) {
		var_1_60 = (var_1_23 && var_1_61);
	} else {
		var_1_60 = (var_1_61 && var_1_62);
	}


	// From: CodeObject15
	if (var_1_49 > var_1_24) {
		if (var_1_64 && var_1_60) {
			var_1_63 = (((! var_1_65) || var_1_62) || var_1_61);
		}
	}


	// From: CodeObject16
	if (var_1_38 < var_1_39) {
		if (var_1_23) {
			if (var_1_64) {
				var_1_66 = (max (var_1_40 , var_1_44));
			} else {
				if (var_1_22) {
					if (var_1_36 > (abs (max (var_1_54 , var_1_57)))) {
						var_1_66 = (max ((abs (max (var_1_40 , var_1_45))) , (8 - (abs (var_1_52)))));
					}
				}
			}
		} else {
			var_1_66 = ((max (var_1_40 , var_1_67)) - var_1_68);
		}
	}


	// From: CodeObject17
	if ((abs (var_1_39 + var_1_55)) >= var_1_38) {
		var_1_69 = (min (var_1_45 , var_1_44));
	} else {
		var_1_69 = var_1_68;
	}


	// From: CodeObject18
	if (var_1_23) {
		if ((var_1_59 - var_1_35) > ((~ 10u) & var_1_30)) {
			if (((var_1_68 | -16) >= var_1_50) && (var_1_58 >= (var_1_35 | var_1_40))) {
				if (((var_1_48 / var_1_31) / var_1_30) <= var_1_24) {
					var_1_70 = (max (var_1_41 , (abs (var_1_53))));
				} else {
					if (((abs (var_1_71)) + (var_1_50 ^ var_1_56)) > var_1_30) {
						var_1_70 = (abs ((min (var_1_42 , var_1_41)) - var_1_72));
					} else {
						var_1_70 = (abs (var_1_20));
					}
				}
			}
		}
	} else {
		if (var_1_22) {
			var_1_70 = var_1_42;
		} else {
			var_1_70 = 3.3f;
		}
	}


	// From: CodeObject19
	if (var_1_65) {
		var_1_73 = var_1_74;
	} else {
		var_1_73 = var_1_74;
	}


	// From: CodeObject20
	if (var_1_63) {
		var_1_75 = (abs (min (var_1_39 , (abs (var_1_74)))));
	} else {
		var_1_75 = (abs (var_1_39));
	}


	// From: CodeObject21
	var_1_76 = var_1_73;


	// From: CodeObject22
	var_1_77 = var_1_73;


	// From: CodeObject23
	var_1_78 = var_1_68;


	// From: Req2Batch20PS_CN_250
	signed long int stepLocal_0 = 64 + (var_1_5 / var_1_3);
	if (stepLocal_0 != (last_1_var_1_8 - (var_1_4 + last_1_var_1_6))) {
		var_1_6 = var_1_4;
	} else {
		var_1_6 = 128;
	}


	// From: Req1Batch20PS_CN_250
	if (var_1_2) {
		var_1_1 = (var_1_3 - var_1_4);
	} else {
		var_1_1 = (var_1_4 + var_1_5);
	}


	// From: Req4Batch20PS_CN_250
	if (((var_1_10 - var_1_11) - (16 + var_1_12)) != var_1_5) {
		var_1_9 = (64.8f - (var_1_13 - var_1_14));
	} else {
		var_1_9 = var_1_13;
	}


	// From: Req5Batch20PS_CN_250
	var_1_15 = (var_1_14 + var_1_16);


	// From: Req6Batch20PS_CN_250
	if (var_1_2) {
		var_1_17 = (var_1_3 + var_1_12);
	} else {
		if (var_1_14 == ((min (99.8f , var_1_16)) / (max (255.6f , var_1_13)))) {
			var_1_17 = var_1_4;
		} else {
			var_1_17 = (var_1_5 - var_1_3);
		}
	}


	// From: Req7Batch20PS_CN_250
	if ((var_1_2 || (var_1_16 > var_1_13)) && (var_1_3 < var_1_1)) {
		if ((var_1_11 << var_1_12) > var_1_5) {
			var_1_18 = var_1_13;
		}
	} else {
		var_1_18 = var_1_16;
	}


	// From: Req3Batch20PS_CN_250
	signed long int stepLocal_1 = var_1_3 - var_1_5;
	if ((var_1_17 + var_1_6) >= stepLocal_1) {
		var_1_8 = (max (var_1_6 , var_1_3));
	} else {
		var_1_8 = var_1_6;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 127);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 64);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -1073741823);
	assume_abort_if_not(var_1_28 <= 1073741823);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65535);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 1073741824);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65535);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 16383);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= -16383);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -16383);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 1073741822);
	assume_abort_if_not(var_1_48 <= 2147483646);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 2147483646);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -128);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -922337.2036854776000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	assume_abort_if_not(var_1_57 != 0.0F);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_67 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_67 >= -1);
	assume_abort_if_not(var_1_67 <= 32766);
	var_1_68 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 32766);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -127);
	assume_abort_if_not(var_1_71 <= 127);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 254);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_8 = var_1_8;
}

int property() {
	return ((((((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 - var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 + var_1_5)))) && (((64 + (var_1_5 / var_1_3)) != (last_1_var_1_8 - (var_1_4 + last_1_var_1_6))) ? (var_1_6 == ((unsigned char) var_1_4)) : (var_1_6 == ((unsigned char) 128)))) && (((var_1_17 + var_1_6) >= (var_1_3 - var_1_5)) ? (var_1_8 == ((unsigned short int) (max (var_1_6 , var_1_3)))) : (var_1_8 == ((unsigned short int) var_1_6)))) && ((((var_1_10 - var_1_11) - (16 + var_1_12)) != var_1_5) ? (var_1_9 == ((float) (64.8f - (var_1_13 - var_1_14)))) : (var_1_9 == ((float) var_1_13)))) && (var_1_15 == ((float) (var_1_14 + var_1_16)))) && (var_1_2 ? (var_1_17 == ((signed short int) (var_1_3 + var_1_12))) : ((var_1_14 == ((min (99.8f , var_1_16)) / (max (255.6f , var_1_13)))) ? (var_1_17 == ((signed short int) var_1_4)) : (var_1_17 == ((signed short int) (var_1_5 - var_1_3)))))) && (((var_1_2 || (var_1_16 > var_1_13)) && (var_1_3 < var_1_1)) ? (((var_1_11 << var_1_12) > var_1_5) ? (var_1_18 == ((double) var_1_13)) : 1) : (var_1_18 == ((double) var_1_16)))
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
