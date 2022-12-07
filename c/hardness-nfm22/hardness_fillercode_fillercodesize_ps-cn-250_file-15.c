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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch15PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -10;
float var_1_3 = 32.4;
float var_1_4 = 49.2;
signed short int var_1_7 = 10;
signed short int var_1_8 = 64;
signed short int var_1_9 = 256;
signed char var_1_10 = -5;
signed char var_1_11 = 5;
double var_1_12 = 256.4;
float var_1_13 = 2.6;
float var_1_14 = 128.125;
double var_1_15 = 32.5;
double var_1_16 = 10000000000.25;
signed char var_1_17 = -5;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1;
signed short int var_1_22 = 17178;
signed short int var_1_23 = 5;
signed long int var_1_25 = -4;
signed short int var_1_26 = 10;
unsigned char var_1_27 = 0;
signed short int var_1_28 = -16;
signed short int var_1_29 = 32;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
signed short int var_1_32 = 0;
signed short int var_1_33 = 10;
signed long int var_1_34 = -10;
signed long int var_1_35 = 200;
signed long int var_1_36 = 8;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 64;
float var_1_39 = 9.2;
double var_1_40 = 9999999999.7;
signed long int var_1_41 = -4;
signed long int var_1_42 = -32;
float var_1_43 = 100.38;
float var_1_44 = 10.5;
float var_1_45 = 24.125;
float var_1_46 = 16.9;
float var_1_47 = 15.125;
unsigned char var_1_48 = 2;
float var_1_49 = 999999999999999.8;
unsigned char var_1_50 = 5;
unsigned char var_1_51 = 16;
unsigned char var_1_52 = 16;
signed char var_1_53 = 64;
signed char var_1_54 = -1;
signed char var_1_55 = 4;
signed char var_1_56 = 16;
signed char var_1_57 = 4;
signed char var_1_58 = 50;
signed char var_1_59 = 4;
unsigned char var_1_60 = 32;
unsigned long int var_1_61 = 32;
unsigned char var_1_62 = 128;
double var_1_63 = 8.6;
unsigned char var_1_64 = 8;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
float var_1_72 = 127.5;
float var_1_73 = 0.6;
signed short int var_1_74 = 128;
unsigned long int var_1_75 = 0;
signed long int var_1_76 = 10;
double var_1_77 = 16.2;
unsigned char var_1_78 = 64;
unsigned char var_1_79 = 128;
signed long int var_1_80 = 25;
unsigned char var_1_81 = 1;
signed char var_1_82 = -1;
unsigned char var_1_83 = 0;
unsigned long int var_1_84 = 8;
signed char var_1_85 = 5;

// Calibration values

// Last'ed variables
signed char last_1_var_1_10 = -5;
signed long int last_1_var_1_21 = 1;
signed long int last_1_var_1_25 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (! var_1_27) {
		if (var_1_27) {
			var_1_26 = (abs (min (var_1_28 , var_1_29)));
		} else {
			if (var_1_29 >= 25) {
				if ((0 > var_1_29) || var_1_30) {
					var_1_26 = (abs (abs (-50)));
				} else {
					if (var_1_31) {
						var_1_26 = (var_1_32 - var_1_33);
					} else {
						var_1_26 = var_1_32;
					}
				}
			} else {
				var_1_26 = var_1_29;
			}
		}
	}


	// From: CodeObject2
	if (var_1_30) {
		var_1_34 = (min ((max (var_1_35 , (-5 + var_1_29))) , (var_1_33 - var_1_36)));
	}


	// From: CodeObject3
	if (var_1_26 < (max (var_1_28 , (min (var_1_29 , var_1_36))))) {
		var_1_37 = (abs (var_1_38));
	} else {
		var_1_37 = (abs (var_1_38));
	}


	// From: CodeObject4
	if (var_1_27 && (var_1_35 > var_1_36)) {
		if (-4 <= (~ var_1_37)) {
			if (((var_1_33 * var_1_37) & var_1_26) >= (abs (-128))) {
				if ((max (var_1_38 , var_1_36)) > var_1_28) {
					if ((var_1_26 / (abs (var_1_41))) <= (var_1_42 * (min (var_1_38 , var_1_37)))) {
						var_1_39 = (abs (var_1_43));
					}
				} else {
					var_1_39 = (abs (var_1_43));
				}
			} else {
				var_1_39 = (min (var_1_43 , var_1_44));
			}
		} else {
			var_1_39 = (var_1_45 + (min (var_1_46 , var_1_47)));
		}
	} else {
		var_1_39 = var_1_46;
	}


	// From: CodeObject5
	if (var_1_47 <= (min ((- var_1_44) , (var_1_43 / var_1_49)))) {
		if (var_1_30) {
			var_1_48 = (max (var_1_38 , var_1_50));
		} else {
			if ((abs (var_1_29)) > var_1_42) {
				var_1_48 = (var_1_51 + var_1_52);
			} else {
				var_1_48 = var_1_52;
			}
		}
	}


	// From: CodeObject6
	if (var_1_40 >= var_1_49) {
		var_1_53 = (abs (var_1_54));
	} else {
		if (var_1_38 < var_1_33) {
			var_1_53 = (var_1_55 - 64);
		}
	}


	// From: CodeObject7
	if (var_1_30) {
		var_1_56 = ((min ((abs (var_1_57)) , var_1_58)) + var_1_59);
	} else {
		var_1_56 = (max (var_1_54 , (max ((min (var_1_58 , var_1_55)) , var_1_59))));
	}


	// From: CodeObject8
	if (var_1_34 != var_1_54) {
		if ((~ (var_1_52 / var_1_61)) == var_1_42) {
			if ((abs (var_1_28)) < (var_1_59 + 2)) {
				if ((var_1_40 * (var_1_44 / var_1_49)) >= var_1_45) {
					var_1_60 = ((abs (var_1_62)) - var_1_51);
				}
			}
		}
	} else {
		if ((var_1_63 * var_1_47) >= (min (var_1_40 , (abs (var_1_43))))) {
			var_1_60 = var_1_38;
		}
	}


	// From: CodeObject9
	if ((~ var_1_61) <= var_1_37) {
		var_1_64 = (abs (var_1_50));
	} else {
		if (((abs (var_1_53)) + var_1_32) >= var_1_56) {
			var_1_64 = var_1_52;
		}
	}


	// From: CodeObject10
	if (var_1_41 <= var_1_38) {
		if ((var_1_35 * (1 / var_1_62)) <= var_1_57) {
			var_1_65 = (! (var_1_31 || var_1_66));
		}
	}


	// From: CodeObject11
	if (var_1_27) {
		if (var_1_51 >= (~ (abs (var_1_34)))) {
			if (var_1_68) {
				var_1_67 = ((var_1_69 || var_1_70) || (var_1_65 && var_1_71));
			}
		}
	}


	// From: CodeObject12
	if (var_1_66 || var_1_71) {
		var_1_72 = (abs (var_1_46));
	} else {
		if (var_1_39 >= var_1_46) {
			if (var_1_26 < var_1_53) {
				var_1_72 = var_1_47;
			} else {
				var_1_72 = (abs (var_1_44));
			}
		}
	}


	// From: CodeObject13
	if ((abs (var_1_57)) > var_1_56) {
		if ((var_1_62 != var_1_52) || var_1_31) {
			var_1_73 = (abs (var_1_43));
		} else {
			var_1_73 = var_1_44;
		}
	} else {
		var_1_73 = (abs (var_1_43));
	}


	// From: CodeObject14
	if (2u > (1u * var_1_75)) {
		if (var_1_64 >= (var_1_29 | var_1_33)) {
			var_1_74 = (max ((var_1_48 - var_1_38) , (abs (var_1_55))));
		} else {
			var_1_74 = (min (var_1_58 , var_1_62));
		}
	} else {
		if (var_1_67) {
			var_1_74 = (abs (var_1_52));
		}
	}


	// From: CodeObject15
	if (var_1_71) {
		var_1_76 = (max ((min (var_1_50 , var_1_51)) , var_1_54));
	}


	// From: CodeObject16
	if ((var_1_54 & (min (var_1_74 , var_1_34))) < var_1_53) {
		if (((var_1_55 - var_1_51) <= (var_1_56 >> var_1_26)) && var_1_68) {
			var_1_77 = (max (var_1_45 , var_1_44));
		}
	}


	// From: CodeObject17
	if (! (var_1_26 < var_1_52)) {
		var_1_78 = (abs (var_1_62));
	} else {
		if (var_1_49 < var_1_63) {
			var_1_78 = (abs ((min (var_1_62 , var_1_79)) - var_1_52));
		}
	}


	// From: CodeObject18
	if ((16 | var_1_26) <= (var_1_60 >> var_1_54)) {
		if (var_1_27 || var_1_65) {
			var_1_80 = (abs (var_1_62));
		}
	} else {
		var_1_80 = (abs (var_1_57));
	}


	// From: CodeObject19
	if (var_1_68) {
		if (var_1_53 <= (var_1_34 & var_1_48)) {
			var_1_81 = var_1_70;
		} else {
			if ((var_1_36 * var_1_34) < var_1_80) {
				if (var_1_75 >= (var_1_60 ^ var_1_36)) {
					var_1_81 = var_1_71;
				}
			}
		}
	} else {
		if (var_1_77 > (max (var_1_45 , (min (var_1_49 , var_1_73))))) {
			var_1_81 = ((var_1_70 || var_1_69) || var_1_71);
		}
	}


	// From: CodeObject20
	if (var_1_81) {
		var_1_82 = -8;
	} else {
		var_1_82 = var_1_55;
	}


	// From: CodeObject21
	if ((max ((256 * var_1_76) , var_1_36)) >= var_1_50) {
		if (var_1_84 < var_1_38) {
			var_1_83 = (! var_1_66);
		}
	}


	// From: CodeObject22
	var_1_85 = var_1_54;


	// From: Req5Batch15PS_CN_250
	if (last_1_var_1_10 < last_1_var_1_25) {
		if (var_1_11 <= last_1_var_1_25) {
			var_1_19 = var_1_20;
		}
	}


	// From: Req2Batch15PS_CN_250
	var_1_10 = var_1_11;


	// From: Req3Batch15PS_CN_250
	if (var_1_4 >= (var_1_3 * (var_1_13 + var_1_14))) {
		var_1_12 = (min ((var_1_15 - var_1_16) , -0.85));
	} else {
		var_1_12 = var_1_16;
	}


	// From: Req4Batch15PS_CN_250
	unsigned char stepLocal_1 = var_1_19;
	if (var_1_12 <= (min (var_1_12 , var_1_12))) {
		if (var_1_19 || stepLocal_1) {
			var_1_17 = var_1_11;
		} else {
			var_1_17 = var_1_11;
		}
	}


	// From: Req7Batch15PS_CN_250
	if (var_1_19) {
		var_1_25 = (var_1_17 + (min (var_1_17 , (min (var_1_8 , var_1_17)))));
	} else {
		var_1_25 = var_1_10;
	}


	// From: Req1Batch15PS_CN_250
	unsigned char stepLocal_0 = var_1_12 > var_1_12;
	if (var_1_19 || stepLocal_0) {
		var_1_1 = (var_1_17 + var_1_17);
	} else {
		var_1_1 = ((min ((var_1_7 + 1) , var_1_8)) - (24762 - var_1_9));
	}


	// From: Req6Batch15PS_CN_250
	signed long int stepLocal_3 = var_1_22 + var_1_11;
	signed long int stepLocal_2 = (var_1_22 - var_1_23) - var_1_9;
	if (var_1_20) {
		if (var_1_10 < stepLocal_2) {
			if (var_1_19) {
				if (last_1_var_1_21 == stepLocal_3) {
					var_1_21 = var_1_1;
				}
			} else {
				var_1_21 = var_1_10;
			}
		} else {
			var_1_21 = var_1_11;
		}
	} else {
		var_1_21 = var_1_9;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16384);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32766);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32766);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -1);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483647);
	assume_abort_if_not(var_1_35 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= -2147483647);
	assume_abort_if_not(var_1_41 <= 2147483647);
	assume_abort_if_not(var_1_41 != 0);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -461168.6018427382800e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	assume_abort_if_not(var_1_49 != 0.0F);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -126);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -1);
	assume_abort_if_not(var_1_55 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -63);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -63);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 4294967295);
	assume_abort_if_not(var_1_61 != 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 127);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -922337.2036854776000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 1);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 0);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 4294967295);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 127);
	assume_abort_if_not(var_1_79 <= 254);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
}

int property() {
	return (((((((var_1_19 || (var_1_12 > var_1_12)) ? (var_1_1 == ((signed short int) (var_1_17 + var_1_17))) : (var_1_1 == ((signed short int) ((min ((var_1_7 + 1) , var_1_8)) - (24762 - var_1_9))))) && (var_1_10 == ((signed char) var_1_11))) && ((var_1_4 >= (var_1_3 * (var_1_13 + var_1_14))) ? (var_1_12 == ((double) (min ((var_1_15 - var_1_16) , -0.85)))) : (var_1_12 == ((double) var_1_16)))) && ((var_1_12 <= (min (var_1_12 , var_1_12))) ? ((var_1_19 || var_1_19) ? (var_1_17 == ((signed char) var_1_11)) : (var_1_17 == ((signed char) var_1_11))) : 1)) && ((last_1_var_1_10 < last_1_var_1_25) ? ((var_1_11 <= last_1_var_1_25) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_20 ? ((var_1_10 < ((var_1_22 - var_1_23) - var_1_9)) ? (var_1_19 ? ((last_1_var_1_21 == (var_1_22 + var_1_11)) ? (var_1_21 == ((signed long int) var_1_1)) : 1) : (var_1_21 == ((signed long int) var_1_10))) : (var_1_21 == ((signed long int) var_1_11))) : (var_1_21 == ((signed long int) var_1_9)))) && (var_1_19 ? (var_1_25 == ((signed long int) (var_1_17 + (min (var_1_17 , (min (var_1_8 , var_1_17))))))) : (var_1_25 == ((signed long int) var_1_10)))
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
