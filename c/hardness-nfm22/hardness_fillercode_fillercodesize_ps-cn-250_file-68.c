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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68PS_CN_250.c", 13, "reach_error"); }
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
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 32;
double var_1_9 = 4.6;
double var_1_10 = 9.25;
double var_1_11 = 1.25;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 0;
float var_1_15 = 7.5;
signed long int var_1_16 = 0;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
double var_1_21 = 4.65;
unsigned char var_1_22 = 0;
double var_1_23 = 9999999999.1;
double var_1_24 = 5.5;
unsigned short int var_1_25 = 16;
unsigned short int var_1_26 = 128;
unsigned short int var_1_27 = 4;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -5;
double var_1_30 = 7.625;
signed short int var_1_31 = 0;
signed short int var_1_32 = 200;
unsigned long int var_1_33 = 64;
double var_1_34 = -0.2;
unsigned long int var_1_35 = 2424838001;
unsigned long int var_1_36 = 128;
signed long int var_1_37 = -10;
signed long int var_1_38 = -2;
signed char var_1_39 = -8;
signed short int var_1_40 = -32;
unsigned long int var_1_41 = 5;
float var_1_42 = 99999999999999.2;
double var_1_43 = 200.25;
unsigned long int var_1_44 = 100000;
unsigned short int var_1_45 = 256;
unsigned short int var_1_46 = 32;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 25;
unsigned char var_1_51 = 10;
unsigned char var_1_52 = 32;
unsigned long int var_1_53 = 4;
signed short int var_1_54 = -32;
signed short int var_1_55 = 256;
unsigned short int var_1_56 = 256;
signed long int var_1_57 = 256;
unsigned char var_1_58 = 50;
unsigned char var_1_59 = 50;
signed char var_1_60 = 25;
double var_1_61 = 0.4;
unsigned short int var_1_62 = 16;
unsigned char var_1_63 = 1;
float var_1_64 = 16.2;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
unsigned long int var_1_67 = 8;
signed short int var_1_68 = 32;
unsigned char var_1_69 = 16;
unsigned char var_1_70 = 8;
signed long int var_1_71 = 5;
signed short int var_1_72 = 128;
signed char var_1_73 = -100;
signed char var_1_74 = 1;
double var_1_75 = 16.2;
unsigned short int var_1_76 = 16;
signed char var_1_77 = -32;
float var_1_78 = 1.6;
unsigned char var_1_79 = 1;
signed long int var_1_80 = 256;
float var_1_81 = 50.5;

// Calibration values

// Last'ed variables
double last_1_var_1_9 = 4.6;
unsigned char last_1_var_1_12 = 100;
unsigned char last_1_var_1_14 = 0;
signed long int last_1_var_1_16 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_17 = (var_1_18 || (var_1_19 && var_1_20));


	// From: CodeObject2
	if (! var_1_22) {
		var_1_21 = (var_1_23 - (max (7.7 , var_1_24)));
	}


	// From: CodeObject3
	if (var_1_24 >= (max (var_1_21 , var_1_23))) {
		var_1_25 = (abs (var_1_26 + (abs (var_1_27))));
	}


	// From: CodeObject4
	if ((var_1_24 + var_1_23) > var_1_21) {
		var_1_28 = (! 0);
	}


	// From: CodeObject5
	if (var_1_23 <= (max ((var_1_24 * var_1_21) , (31.95 - var_1_30)))) {
		var_1_29 = ((abs (var_1_31)) - var_1_32);
	}


	// From: CodeObject6
	if ((var_1_34 <= var_1_21) && var_1_17) {
		if (var_1_22 && var_1_19) {
			var_1_33 = (var_1_35 - (abs (var_1_27)));
		}
	} else {
		var_1_33 = (abs (var_1_36));
	}


	// From: CodeObject7
	if (64 > var_1_25) {
		var_1_37 = (abs (var_1_27));
	}


	// From: CodeObject8
	if ((var_1_35 + (abs (var_1_39))) <= var_1_36) {
		var_1_38 = (var_1_26 + var_1_31);
	} else {
		var_1_38 = 100000000;
	}


	// From: CodeObject9
	if (var_1_33 >= var_1_41) {
		if ((var_1_37 >= var_1_39) && var_1_19) {
			if (var_1_19) {
				var_1_40 = (abs (var_1_32));
			}
		}
	}


	// From: CodeObject10
	if ((var_1_34 * var_1_23) > (max (var_1_30 , 200.5))) {
		var_1_42 = var_1_23;
	}


	// From: CodeObject11
	var_1_43 = (abs (abs (var_1_24)));


	// From: CodeObject12
	if (var_1_21 > (min (var_1_23 , var_1_24))) {
		var_1_44 = (var_1_35 - 2u);
	}


	// From: CodeObject13
	if (var_1_38 <= var_1_41) {
		var_1_45 = (max ((42930 - (1 + var_1_46)) , var_1_26));
	}


	// From: CodeObject14
	if ((min (var_1_37 , var_1_46)) > var_1_39) {
		if (var_1_33 <= var_1_36) {
			if (var_1_28 || var_1_18) {
				var_1_47 = (var_1_48 && var_1_49);
			} else {
				var_1_47 = ((! var_1_48) || var_1_20);
			}
		}
	}


	// From: CodeObject15
	var_1_50 = (abs (var_1_51 + var_1_52));


	// From: CodeObject16
	if (! var_1_28) {
		if ((var_1_32 >> var_1_51) >= (abs (var_1_50))) {
			var_1_53 = var_1_35;
		}
	}


	// From: CodeObject17
	if (4.5f < var_1_24) {
		if (var_1_23 < 32.75) {
			var_1_54 = var_1_39;
		} else {
			if (var_1_34 <= var_1_24) {
				var_1_54 = (min ((max (var_1_39 , (abs (var_1_52)))) , var_1_31));
			} else {
				var_1_54 = (max ((abs (var_1_51)) , var_1_46));
			}
		}
	} else {
		if ((var_1_36 > var_1_27) || var_1_28) {
			var_1_54 = (var_1_50 + (max (var_1_52 , var_1_39)));
		} else {
			var_1_54 = (max (var_1_55 , (min (var_1_52 , (max (var_1_46 , var_1_39))))));
		}
	}


	// From: CodeObject18
	if (var_1_49) {
		var_1_56 = (abs (var_1_27 + var_1_51));
	} else {
		var_1_56 = ((abs (var_1_50)) + (abs (var_1_52)));
	}


	// From: CodeObject19
	if (! var_1_18) {
		if (((abs (var_1_53)) / var_1_58) < var_1_38) {
			var_1_57 = var_1_58;
		}
	}


	// From: CodeObject20
	if ((var_1_60 / var_1_58) > var_1_55) {
		if (((var_1_25 * -256) & var_1_31) == var_1_58) {
			var_1_59 = var_1_51;
		} else {
			if (var_1_19) {
				var_1_59 = var_1_51;
			}
		}
	}


	// From: CodeObject21
	if (var_1_62 >= var_1_25) {
		var_1_61 = var_1_23;
	}


	// From: CodeObject22
	if (((abs (var_1_24)) / var_1_64) <= var_1_21) {
		var_1_63 = ((var_1_49 && var_1_48) && var_1_65);
	} else {
		var_1_63 = (! ((var_1_18 && var_1_20) || var_1_66));
	}


	// From: CodeObject23
	if (var_1_37 <= (var_1_52 - 50)) {
		if (0u <= (var_1_51 & (var_1_35 - var_1_25))) {
			var_1_67 = ((min (var_1_50 , var_1_62)) + var_1_26);
		}
	} else {
		var_1_67 = var_1_36;
	}


	// From: CodeObject24
	if (var_1_61 != (var_1_43 * var_1_21)) {
		if (var_1_17 && (var_1_41 < var_1_52)) {
			var_1_68 = var_1_60;
		} else {
			if ((abs (var_1_31)) < (var_1_33 >> var_1_44)) {
				var_1_68 = (abs (abs (var_1_32)));
			} else {
				var_1_68 = var_1_55;
			}
		}
	} else {
		if (var_1_29 < var_1_37) {
			var_1_68 = var_1_50;
		} else {
			var_1_68 = ((abs (var_1_32)) - var_1_52);
		}
	}


	// From: CodeObject25
	if (var_1_19) {
		var_1_69 = var_1_52;
	} else {
		if ((var_1_26 & (var_1_68 & var_1_29)) == 10) {
			var_1_69 = (max (var_1_52 , (200 - var_1_70)));
		} else {
			var_1_69 = (abs (max ((128 - var_1_70) , var_1_51)));
		}
	}


	// From: CodeObject26
	if (var_1_55 == (var_1_32 | var_1_52)) {
		if ((var_1_55 / var_1_58) != var_1_56) {
			var_1_71 = (abs (var_1_70));
		}
	} else {
		var_1_71 = (abs (max (var_1_58 , var_1_68)));
	}


	// From: CodeObject27
	if (var_1_63) {
		if (var_1_36 <= var_1_62) {
			if ((var_1_46 - var_1_59) >= (abs (var_1_62))) {
				var_1_72 = var_1_39;
			} else {
				var_1_72 = (abs (var_1_50 - var_1_58));
			}
		}
	} else {
		var_1_72 = (abs (min (128 , var_1_46)));
	}


	// From: CodeObject28
	if (var_1_18) {
		var_1_73 = var_1_74;
	} else {
		var_1_73 = var_1_74;
	}


	// From: CodeObject29
	var_1_75 = var_1_24;


	// From: CodeObject30
	if (var_1_20) {
		var_1_76 = var_1_59;
	} else {
		var_1_76 = var_1_26;
	}


	// From: CodeObject31
	var_1_77 = var_1_74;


	// From: CodeObject32
	if (var_1_47) {
		var_1_78 = var_1_23;
	}


	// From: CodeObject33
	if (var_1_75 > var_1_43) {
		var_1_79 = (var_1_20 && (! var_1_48));
	}


	// From: CodeObject34
	var_1_80 = ((abs (var_1_54)) + var_1_72);


	// From: CodeObject35
	var_1_81 = var_1_24;


	// From: Req5Batch68PS_CN_250
	signed long int stepLocal_4 = last_1_var_1_16;
	if (last_1_var_1_14) {
		if (var_1_10 >= (- last_1_var_1_9)) {
			if (var_1_8 != stepLocal_4) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = 50;
			}
		} else {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req8Batch68PS_CN_250
	var_1_16 = last_1_var_1_12;


	// From: Req6Batch68PS_CN_250
	unsigned long int stepLocal_6 = var_1_13 % (5u + 256u);
	signed long int stepLocal_5 = var_1_13 + 16;
	if (stepLocal_6 <= var_1_16) {
		if (stepLocal_5 >= var_1_16) {
			var_1_14 = var_1_7;
		} else {
			var_1_14 = var_1_7;
		}
	}


	// From: Req1Batch68PS_CN_250
	unsigned char stepLocal_0 = var_1_12;
	if (stepLocal_0 <= (var_1_12 ^ var_1_12)) {
		var_1_1 = (! var_1_5);
	} else {
		var_1_1 = (! var_1_5);
	}


	// From: Req2Batch68PS_CN_250
	unsigned char stepLocal_2 = var_1_12 < (var_1_16 / var_1_8);
	signed long int stepLocal_1 = var_1_16;
	if (-256 >= stepLocal_1) {
		var_1_6 = (var_1_1 || var_1_7);
	} else {
		if (stepLocal_2 || ((var_1_5 && var_1_7) && var_1_1)) {
			var_1_6 = var_1_7;
		}
	}


	// From: Req4Batch68PS_CN_250
	unsigned char stepLocal_3 = ! var_1_5;
	if ((var_1_7 && var_1_14) || stepLocal_3) {
		var_1_11 = var_1_10;
	}


	// From: Req7Batch68PS_CN_250
	var_1_15 = var_1_10;


	// From: Req3Batch68PS_CN_250
	if ((max ((min (var_1_16 , var_1_12)) , var_1_12)) <= (50 * var_1_8)) {
		var_1_9 = var_1_10;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32766);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967295);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= -32767);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 255);
	assume_abort_if_not(var_1_58 != 0);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -128);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 65535);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -922337.2036854776000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	assume_abort_if_not(var_1_64 != 0.0F);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -127);
	assume_abort_if_not(var_1_74 <= 126);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return ((((((((var_1_12 <= (var_1_12 ^ var_1_12)) ? (var_1_1 == ((unsigned char) (! var_1_5))) : (var_1_1 == ((unsigned char) (! var_1_5)))) && ((-256 >= var_1_16) ? (var_1_6 == ((unsigned char) (var_1_1 || var_1_7))) : (((var_1_12 < (var_1_16 / var_1_8)) || ((var_1_5 && var_1_7) && var_1_1)) ? (var_1_6 == ((unsigned char) var_1_7)) : 1))) && (((max ((min (var_1_16 , var_1_12)) , var_1_12)) <= (50 * var_1_8)) ? (var_1_9 == ((double) var_1_10)) : 1)) && (((var_1_7 && var_1_14) || (! var_1_5)) ? (var_1_11 == ((double) var_1_10)) : 1)) && (last_1_var_1_14 ? ((var_1_10 >= (- last_1_var_1_9)) ? ((var_1_8 != last_1_var_1_16) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) 50))) : (var_1_12 == ((unsigned char) var_1_13))) : (var_1_12 == ((unsigned char) var_1_13)))) && (((var_1_13 % (5u + 256u)) <= var_1_16) ? (((var_1_13 + 16) >= var_1_16) ? (var_1_14 == ((unsigned char) var_1_7)) : (var_1_14 == ((unsigned char) var_1_7))) : 1)) && (var_1_15 == ((float) var_1_10))) && (var_1_16 == ((signed long int) last_1_var_1_12))
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
