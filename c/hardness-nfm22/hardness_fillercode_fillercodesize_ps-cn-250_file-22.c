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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
unsigned short int var_1_4 = 256;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 128;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 16;
unsigned short int var_1_13 = 256;
unsigned short int var_1_17 = 4;
double var_1_18 = 64.2;
unsigned short int var_1_19 = 53045;
double var_1_20 = 1.75;
double var_1_21 = 50.35;
double var_1_22 = 5.5;
double var_1_23 = 7.125;
unsigned long int var_1_24 = 50;
unsigned long int var_1_25 = 1907531378;
unsigned long int var_1_26 = 8;
unsigned char var_1_27 = 0;
signed long int var_1_28 = 8;
unsigned char var_1_29 = 1;
signed long int var_1_30 = -5;
signed long int var_1_31 = 2;
signed long int var_1_32 = 0;
unsigned long int var_1_33 = 1;
double var_1_34 = 1.4;
double var_1_35 = 5.2;
double var_1_36 = 4.2;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
signed short int var_1_40 = -16;
float var_1_41 = 1000000000000.9;
signed short int var_1_42 = 5;
signed short int var_1_43 = 1;
unsigned char var_1_44 = 0;
signed long int var_1_45 = 256;
signed long int var_1_46 = -1;
double var_1_47 = 0.5;
unsigned long int var_1_48 = 2;
signed long int var_1_49 = -4;
signed long int var_1_50 = -32;
signed short int var_1_51 = 2;
signed short int var_1_52 = 32;
signed short int var_1_53 = 2;
signed short int var_1_54 = 128;
signed char var_1_55 = 50;
signed char var_1_56 = -10;
signed long int var_1_57 = -128;
signed char var_1_58 = 32;
signed char var_1_59 = 0;
signed long int var_1_60 = -1000000000;
signed long int var_1_61 = 100000;
signed short int var_1_62 = -128;
unsigned short int var_1_63 = 50;
unsigned long int var_1_64 = 100000000;
unsigned long int var_1_65 = 1112607674;
signed short int var_1_66 = 0;
unsigned long int var_1_67 = 8;
signed long int var_1_68 = -64;
unsigned short int var_1_69 = 100;
unsigned long int var_1_70 = 2;
signed char var_1_71 = 50;
unsigned long int var_1_72 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_24 = 50;
unsigned char last_1_var_1_27 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (! var_1_29) {
		var_1_28 = (var_1_30 + var_1_31);
	} else {
		if (var_1_30 != (var_1_31 | (var_1_32 >> var_1_33))) {
			var_1_28 = (var_1_31 + var_1_30);
		}
	}


	// From: CodeObject2
	if (var_1_28 > var_1_30) {
		var_1_34 = var_1_35;
	} else {
		var_1_34 = (min (var_1_35 , (abs (max (49.2 , var_1_36)))));
	}


	// From: CodeObject3
	if (var_1_31 <= var_1_33) {
		if (var_1_32 <= var_1_33) {
			var_1_37 = (! var_1_38);
		} else {
			if (var_1_33 <= (var_1_28 >> var_1_32)) {
				var_1_37 = (! var_1_39);
			}
		}
	}


	// From: CodeObject4
	if (((var_1_35 * var_1_36) / var_1_41) != 5.7) {
		if (((var_1_35 < var_1_36) || var_1_39) && var_1_29) {
			var_1_40 = ((min (50 , var_1_33)) - var_1_43);
		} else {
			var_1_40 = (abs (var_1_33));
		}
	}


	// From: CodeObject5
	if (((var_1_32 & var_1_45) % var_1_46) <= var_1_28) {
		if ((var_1_45 | var_1_43) < (var_1_30 << var_1_28)) {
			var_1_44 = (var_1_37 && var_1_39);
		} else {
			var_1_44 = var_1_39;
		}
	}


	// From: CodeObject6
	if (var_1_42 >= (var_1_33 & var_1_40)) {
		if (var_1_43 < (var_1_31 + var_1_30)) {
			var_1_47 = (abs (var_1_35));
		} else {
			var_1_47 = (abs (abs (var_1_35)));
		}
	}


	// From: CodeObject7
	if (2 == (var_1_40 % var_1_46)) {
		var_1_48 = (abs (min (var_1_43 , var_1_33)));
	}


	// From: CodeObject8
	if (var_1_39 || var_1_38) {
		var_1_49 = (abs (var_1_42));
	}


	// From: CodeObject9
	if (var_1_38) {
		var_1_50 = (-50 + var_1_42);
	} else {
		var_1_50 = (max ((var_1_40 + var_1_31) , 16));
	}


	// From: CodeObject10
	if ((256.2 - (abs (var_1_36))) <= (var_1_34 / 0.625)) {
		var_1_51 = (abs (var_1_43));
	} else {
		if (var_1_53 == (abs (var_1_52))) {
			var_1_51 = (var_1_33 - 1);
		}
	}


	// From: CodeObject11
	if ((var_1_45 * var_1_28) < var_1_52) {
		if (63.5 <= (var_1_36 / (abs (var_1_41)))) {
			var_1_55 = (abs (-5));
		}
	}


	// From: CodeObject12
	if (((var_1_49 % -5) % var_1_46) < var_1_57) {
		var_1_56 = (abs (abs (var_1_58)));
	}


	// From: CodeObject13
	if ((var_1_34 > 24.8) || (var_1_42 >= var_1_33)) {
		var_1_59 = (min (var_1_33 , var_1_58));
	} else {
		var_1_59 = (var_1_33 + var_1_58);
	}


	// From: CodeObject14
	if (((var_1_52 - var_1_58) | var_1_28) > ((var_1_53 + var_1_51) << var_1_59)) {
		if (! var_1_44) {
			if ((abs (var_1_35)) <= var_1_34) {
				var_1_60 = (var_1_43 - var_1_52);
			} else {
				if (var_1_44) {
					var_1_60 = ((max ((var_1_52 + var_1_53) , var_1_58)) - var_1_33);
				} else {
					var_1_60 = (var_1_61 + (abs (var_1_58 - var_1_52)));
				}
			}
		} else {
			if (var_1_52 == var_1_40) {
				var_1_60 = (abs (var_1_53 + var_1_54));
			} else {
				var_1_60 = (abs (var_1_42));
			}
		}
	}


	// From: CodeObject15
	if ((var_1_49 ^ var_1_61) < var_1_43) {
		var_1_62 = (max (var_1_53 , var_1_54));
	} else {
		var_1_62 = (var_1_53 - (abs (var_1_56)));
	}


	// From: CodeObject16
	var_1_63 = var_1_52;


	// From: CodeObject17
	if (var_1_38 && var_1_29) {
		if ((max (var_1_31 , var_1_57)) > -10) {
			var_1_64 = (var_1_43 + var_1_53);
		}
	} else {
		if (var_1_52 > var_1_43) {
			if (((var_1_61 & var_1_63) > (var_1_42 | var_1_57)) || (var_1_47 >= var_1_35)) {
				if (var_1_42 > var_1_60) {
					var_1_64 = ((abs (var_1_43)) + ((max (var_1_65 , 1107249265u)) - var_1_52));
				}
			} else {
				var_1_64 = (abs (var_1_33));
			}
		}
	}


	// From: CodeObject18
	if ((min (var_1_55 , var_1_45)) <= ((max (var_1_52 , var_1_32)) + (var_1_40 >> var_1_49))) {
		var_1_66 = var_1_56;
	} else {
		var_1_66 = (var_1_43 - var_1_53);
	}


	// From: CodeObject19
	if ((var_1_36 + var_1_35) >= (max (15.4 , 16.2))) {
		var_1_67 = (min ((abs (8u + var_1_33)) , var_1_52));
	}


	// From: CodeObject20
	if ((! var_1_29) || (var_1_28 >= var_1_67)) {
		if (var_1_42 < -256) {
			if (var_1_44 || var_1_37) {
				if (var_1_59 < (var_1_42 * (-64 ^ var_1_54))) {
					var_1_68 = (var_1_43 - var_1_63);
				}
			} else {
				if (var_1_63 <= (var_1_51 % var_1_46)) {
					var_1_68 = ((abs (var_1_55)) + var_1_53);
				} else {
					if ((16 % (max (var_1_46 , var_1_69))) >= 256) {
						var_1_68 = (abs (var_1_30));
					}
				}
			}
		} else {
			if (! ((abs (var_1_41)) <= (var_1_36 + var_1_34))) {
				var_1_68 = var_1_53;
			} else {
				var_1_68 = var_1_63;
			}
		}
	} else {
		var_1_68 = var_1_66;
	}


	// From: CodeObject21
	if (var_1_37) {
		var_1_70 = var_1_58;
	}


	// From: CodeObject22
	if (var_1_38) {
		var_1_71 = var_1_58;
	} else {
		var_1_71 = var_1_33;
	}


	// From: CodeObject23
	if (var_1_59 > var_1_42) {
		if (var_1_61 >= var_1_65) {
			var_1_72 = (abs (var_1_63));
		} else {
			if ((- var_1_36) <= (- (max (var_1_47 , var_1_34)))) {
				var_1_72 = (max ((max (var_1_63 , var_1_33)) , var_1_69));
			}
		}
	} else {
		if (var_1_29 || var_1_44) {
			var_1_72 = var_1_52;
		}
	}


	// From: Req5Batch22PS_CN_250
	if (last_1_var_1_27) {
		var_1_20 = ((max ((max (var_1_21 , var_1_22)) , 16.6)) - var_1_23);
	} else {
		var_1_20 = var_1_22;
	}


	// From: Req8Batch22PS_CN_250
	if ((- 3.75) < (min (var_1_20 , var_1_22))) {
		var_1_27 = 0;
	}


	// From: Req2Batch22PS_CN_250
	if (var_1_9 < (var_1_8 << var_1_4)) {
		var_1_10 = (var_1_11 + var_1_12);
	} else {
		var_1_10 = var_1_11;
	}


	// From: Req3Batch22PS_CN_250
	unsigned char stepLocal_0 = var_1_27;
	if ((var_1_10 <= var_1_10) || stepLocal_0) {
		var_1_13 = (max ((max (var_1_10 , var_1_10)) , var_1_10));
	} else {
		var_1_13 = var_1_10;
	}


	// From: Req6Batch22PS_CN_250
	unsigned short int stepLocal_1 = var_1_7;
	if (stepLocal_1 == last_1_var_1_24) {
		var_1_24 = (2332545940u - (1490203111u - var_1_11));
	} else {
		var_1_24 = (var_1_10 + (var_1_25 - var_1_11));
	}


	// From: Req7Batch22PS_CN_250
	signed long int stepLocal_2 = var_1_19 - var_1_7;
	if (var_1_10 > stepLocal_2) {
		var_1_26 = var_1_10;
	}


	// From: Req1Batch22PS_CN_250
	if (var_1_20 < var_1_20) {
		var_1_1 = (min (var_1_10 , var_1_10));
	} else {
		var_1_1 = (((var_1_6 + var_1_7) - var_1_10) + var_1_10);
	}


	// From: Req4Batch22PS_CN_250
	if ((var_1_20 / var_1_18) > var_1_20) {
		var_1_17 = ((var_1_19 - (max (var_1_26 , var_1_12))) - var_1_7);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 8191);
	assume_abort_if_not(var_1_6 <= 16384);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8192);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 49150);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -1073741823);
	assume_abort_if_not(var_1_30 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -1073741823);
	assume_abort_if_not(var_1_31 <= 1073741823);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -32767);
	assume_abort_if_not(var_1_42 <= 32766);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32766);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	assume_abort_if_not(var_1_46 != 0);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 16383);
	var_1_54 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_54 >= -16383);
	assume_abort_if_not(var_1_54 <= 16383);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= -2147483648);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= -1073741823);
	assume_abort_if_not(var_1_61 <= 1073741823);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 1073741823);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 65535);
	assume_abort_if_not(var_1_69 != 0);
}



void updateLastVariables() {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_27 = var_1_27;
}

int property() {
	return ((((((((var_1_20 < var_1_20) ? (var_1_1 == ((unsigned short int) (min (var_1_10 , var_1_10)))) : (var_1_1 == ((unsigned short int) (((var_1_6 + var_1_7) - var_1_10) + var_1_10)))) && ((var_1_9 < (var_1_8 << var_1_4)) ? (var_1_10 == ((unsigned char) (var_1_11 + var_1_12))) : (var_1_10 == ((unsigned char) var_1_11)))) && (((var_1_10 <= var_1_10) || var_1_27) ? (var_1_13 == ((unsigned short int) (max ((max (var_1_10 , var_1_10)) , var_1_10)))) : (var_1_13 == ((unsigned short int) var_1_10)))) && (((var_1_20 / var_1_18) > var_1_20) ? (var_1_17 == ((unsigned short int) ((var_1_19 - (max (var_1_26 , var_1_12))) - var_1_7))) : 1)) && (last_1_var_1_27 ? (var_1_20 == ((double) ((max ((max (var_1_21 , var_1_22)) , 16.6)) - var_1_23))) : (var_1_20 == ((double) var_1_22)))) && ((var_1_7 == last_1_var_1_24) ? (var_1_24 == ((unsigned long int) (2332545940u - (1490203111u - var_1_11)))) : (var_1_24 == ((unsigned long int) (var_1_10 + (var_1_25 - var_1_11)))))) && ((var_1_10 > (var_1_19 - var_1_7)) ? (var_1_26 == ((unsigned long int) var_1_10)) : 1)) && (((- 3.75) < (min (var_1_20 , var_1_22))) ? (var_1_27 == ((unsigned char) 0)) : 1)
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
