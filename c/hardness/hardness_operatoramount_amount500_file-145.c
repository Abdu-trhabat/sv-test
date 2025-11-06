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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 100;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 200;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
signed long int var_1_11 = 5;
unsigned short int var_1_12 = 32;
unsigned short int var_1_15 = 57502;
signed short int var_1_16 = -25;
unsigned long int var_1_17 = 256;
double var_1_18 = 16.5;
double var_1_19 = 255.24;
double var_1_20 = 31.1;
double var_1_21 = 0.0;
double var_1_22 = 128.5;
double var_1_23 = 255.25;
double var_1_24 = 128.4;
double var_1_25 = -0.75;
unsigned long int var_1_26 = 1627493793;
unsigned long int var_1_27 = 1285072441;
unsigned long int var_1_28 = 1525430952;
double var_1_29 = 0.0;
signed long int var_1_30 = -25;
signed long int var_1_31 = 2104126089;
signed char var_1_32 = -2;
signed char var_1_34 = 5;
signed char var_1_35 = 4;
signed char var_1_36 = 16;
signed char var_1_37 = 8;
signed long int var_1_38 = -5;
double var_1_39 = 99.5;
double var_1_40 = 0.0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 10;
unsigned char var_1_45 = 100;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned long int var_1_50 = 10;
unsigned long int var_1_51 = 0;
unsigned long int var_1_52 = 3636381105;
double var_1_53 = 5.2;
double var_1_54 = 0.0;
double var_1_55 = 9.75;
signed char var_1_56 = -32;
double var_1_57 = 0.5;
signed char var_1_58 = 50;
signed char var_1_59 = 100;
signed char var_1_60 = -5;
signed char var_1_61 = 50;
signed char var_1_62 = 10;
signed char var_1_63 = -8;
signed char var_1_64 = 1;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
signed char var_1_67 = -2;
unsigned short int var_1_68 = 64;
unsigned short int var_1_69 = 25158;
unsigned short int var_1_70 = 22154;
unsigned long int var_1_71 = 10;
unsigned char var_1_72 = 1;
float var_1_73 = 15.1;
signed long int var_1_74 = 2;
signed long int var_1_75 = 50;
unsigned char var_1_76 = 4;
unsigned char var_1_77 = 1;
double var_1_78 = 9.6;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
unsigned short int var_1_83 = 128;
float var_1_84 = 10000000000.3;
unsigned char var_1_86 = 1;
signed char var_1_87 = -5;
unsigned short int var_1_89 = 10;
signed long int var_1_90 = 10;
unsigned char var_1_91 = 0;
float var_1_92 = 5.4;
unsigned long int var_1_93 = 500;
unsigned char var_1_94 = 5;
double var_1_95 = 100.56;
signed char var_1_96 = -4;
unsigned char var_1_97 = 64;
unsigned char var_1_98 = 64;
double var_1_99 = 100000000000.625;
unsigned char var_1_100 = 64;
unsigned short int var_1_101 = 10;
unsigned short int var_1_102 = 4;
float var_1_103 = 7.225;
float var_1_104 = -0.6;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 100;
double last_1_var_1_25 = -0.75;
signed long int last_1_var_1_30 = -25;
signed char last_1_var_1_32 = -2;
signed long int last_1_var_1_38 = -5;
double last_1_var_1_39 = 99.5;
unsigned char last_1_var_1_41 = 0;
unsigned char last_1_var_1_46 = 1;
unsigned long int last_1_var_1_50 = 10;
double last_1_var_1_53 = 5.2;
signed char last_1_var_1_56 = -32;
signed char last_1_var_1_60 = -5;
unsigned char last_1_var_1_65 = 1;
unsigned long int last_1_var_1_71 = 10;
unsigned char last_1_var_1_72 = 1;
signed long int last_1_var_1_74 = 2;
signed long int last_1_var_1_75 = 50;
unsigned char last_1_var_1_80 = 1;
unsigned short int last_1_var_1_83 = 128;
float last_1_var_1_84 = 10000000000.3;
unsigned short int last_1_var_1_89 = 10;
unsigned char last_1_var_1_91 = 0;
float last_1_var_1_92 = 5.4;
unsigned long int last_1_var_1_93 = 500;
unsigned char last_1_var_1_94 = 5;
double last_1_var_1_95 = 100.56;
unsigned char last_1_var_1_97 = 64;
float last_1_var_1_103 = 7.225;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch145Amount500
	if (last_1_var_1_46) {
		if (last_1_var_1_53 != var_1_19) {
			var_1_41 = (! (last_1_var_1_80 || var_1_42));
		}
	} else {
		var_1_41 = ((! var_1_42) && var_1_43);
	}


	// From: Req8Batch145Amount500
	if ((var_1_11 / (max (var_1_28 , var_1_15))) <= 1u) {
		var_1_30 = (var_1_15 - var_1_11);
	} else {
		if (var_1_29 < last_1_var_1_25) {
			if ((- var_1_23) < var_1_22) {
				var_1_30 = (last_1_var_1_30 + (max (last_1_var_1_75 , var_1_15)));
			} else {
				var_1_30 = (var_1_5 - ((var_1_31 - last_1_var_1_1) - last_1_var_1_71));
			}
		} else {
			var_1_30 = ((16 - var_1_8) + var_1_15);
		}
	}


	// From: Req27Batch145Amount500
	unsigned long int stepLocal_17 = var_1_26;
	if (last_1_var_1_97 >= stepLocal_17) {
		var_1_74 = (last_1_var_1_94 + ((max (last_1_var_1_83 , var_1_6)) + (max (last_1_var_1_32 , -10))));
	} else {
		var_1_74 = (min (last_1_var_1_71 , (last_1_var_1_83 + (var_1_69 - var_1_62))));
	}


	// From: Req24Batch145Amount500
	if ((var_1_7 - var_1_8) < last_1_var_1_50) {
		var_1_71 = (var_1_52 - var_1_69);
	} else {
		if ((var_1_61 * (last_1_var_1_32 ^ 1000)) <= var_1_70) {
			var_1_71 = ((max (var_1_7 , var_1_5)) + (max (var_1_62 , (last_1_var_1_74 + last_1_var_1_50))));
		}
	}


	// From: Req10Batch145Amount500
	unsigned char stepLocal_9 = last_1_var_1_72;
	if (last_1_var_1_103 <= last_1_var_1_95) {
		var_1_38 = (((var_1_15 - last_1_var_1_38) + (var_1_8 - 25)) + (min (var_1_37 , (max (var_1_6 , var_1_34)))));
	} else {
		if ((last_1_var_1_60 > var_1_36) || stepLocal_9) {
			var_1_38 = ((min (var_1_15 , var_1_7)) - (var_1_31 - var_1_11));
		} else {
			var_1_38 = var_1_37;
		}
	}


	// From: Req38Batch145Amount500
	if (var_1_81) {
		var_1_90 = var_1_30;
	} else {
		var_1_90 = -1;
	}


	// From: Req2Batch145Amount500
	unsigned char stepLocal_1 = last_1_var_1_41;
	if (stepLocal_1 || last_1_var_1_80) {
		var_1_9 = (max ((last_1_var_1_56 + last_1_var_1_89) , (var_1_7 + (var_1_5 - var_1_11))));
	} else {
		var_1_9 = (last_1_var_1_56 + var_1_7);
	}


	// From: Req15Batch145Amount500
	unsigned long int stepLocal_13 = max (last_1_var_1_93 , (max (last_1_var_1_89 , var_1_45)));
	if ((4 / var_1_7) >= stepLocal_13) {
		var_1_48 = (last_1_var_1_65 && (var_1_43 || var_1_49));
	}


	// From: Req45Batch145Amount500
	if (var_1_48) {
		var_1_97 = var_1_61;
	} else {
		var_1_97 = var_1_98;
	}


	// From: Req35Batch145Amount500
	if (var_1_28 > var_1_26) {
		if (last_1_var_1_72) {
			var_1_86 = (var_1_42 && (last_1_var_1_65 || var_1_47));
		}
	} else {
		if (((var_1_78 - var_1_19) * (32.75f * last_1_var_1_84)) < (last_1_var_1_53 + last_1_var_1_84)) {
			var_1_86 = (! (! (! var_1_43)));
		}
	}


	// From: Req47Batch145Amount500
	if (var_1_86) {
		var_1_100 = 50;
	} else {
		var_1_100 = var_1_64;
	}


	// From: Req32Batch145Amount500
	signed long int stepLocal_21 = var_1_31;
	if (var_1_8 <= stepLocal_21) {
		if (var_1_66) {
			var_1_80 = (var_1_43 || ((var_1_42 && var_1_49) || var_1_81));
		} else {
			var_1_80 = ((last_1_var_1_91 && last_1_var_1_72) && var_1_81);
		}
	} else {
		var_1_80 = ((last_1_var_1_39 >= var_1_22) || (var_1_47 && var_1_42));
	}


	// From: Req39Batch145Amount500
	if (var_1_80) {
		var_1_91 = var_1_49;
	}


	// From: Req16Batch145Amount500
	if (last_1_var_1_46) {
		if (var_1_40 != last_1_var_1_92) {
			var_1_50 = (abs (var_1_51));
		} else {
			var_1_50 = (min ((var_1_52 - var_1_6) , var_1_51));
		}
	}


	// From: Req40Batch145Amount500
	if (var_1_48) {
		var_1_92 = var_1_55;
	} else {
		var_1_92 = var_1_19;
	}


	// From: Req13Batch145Amount500
	if (var_1_91) {
		if (var_1_23 == var_1_19) {
			var_1_44 = ((min ((var_1_45 - 16) , var_1_35)) + var_1_8);
		}
	} else {
		var_1_44 = var_1_6;
	}


	// From: Req17Batch145Amount500
	signed long int stepLocal_14 = 0;
	if ((var_1_8 - (max (25 , var_1_35))) > stepLocal_14) {
		var_1_53 = (min (var_1_20 , (var_1_22 - var_1_40)));
	} else {
		var_1_53 = ((max (var_1_55 , (var_1_29 - var_1_21))) - var_1_20);
	}


	// From: Req20Batch145Amount500
	if (var_1_20 > (- var_1_24)) {
		if ((-64 / var_1_61) <= var_1_15) {
			var_1_63 = var_1_61;
		} else {
			var_1_63 = ((min (var_1_61 , var_1_62)) - (var_1_37 + (max (var_1_36 , var_1_64))));
		}
	} else {
		var_1_63 = (var_1_58 - var_1_37);
	}


	// From: Req25Batch145Amount500
	signed long int stepLocal_16 = var_1_35 / var_1_59;
	if (var_1_58 <= stepLocal_16) {
		var_1_72 = (! (! (var_1_42 && var_1_47)));
	}


	// From: Req26Batch145Amount500
	if ((var_1_21 - var_1_55) >= (var_1_53 / var_1_40)) {
		var_1_73 = ((max (var_1_21 , (var_1_23 + var_1_22))) + (var_1_20 - var_1_19));
	}


	// From: Req29Batch145Amount500
	var_1_76 = (var_1_36 + (var_1_62 + var_1_37));


	// From: Req42Batch145Amount500
	var_1_94 = var_1_62;


	// From: Req43Batch145Amount500
	var_1_95 = var_1_40;


	// From: Req46Batch145Amount500
	var_1_99 = var_1_23;


	// From: Req48Batch145Amount500
	if (var_1_42) {
		var_1_101 = var_1_102;
	} else {
		var_1_101 = var_1_8;
	}


	// From: Req14Batch145Amount500
	if ((var_1_71 * var_1_50) >= var_1_28) {
		if ((min (var_1_30 , (min (var_1_7 , 32)))) != var_1_50) {
			var_1_46 = ((var_1_41 || var_1_42) && var_1_47);
		} else {
			var_1_46 = (var_1_47 && (! var_1_42));
		}
	}


	// From: Req28Batch145Amount500
	signed long int stepLocal_18 = var_1_9;
	if (stepLocal_18 < ((var_1_38 + var_1_30) / var_1_70)) {
		var_1_75 = ((abs (var_1_59)) + (max ((var_1_61 - var_1_6) , var_1_58)));
	}


	// From: Req41Batch145Amount500
	if (var_1_86) {
		var_1_93 = var_1_74;
	}


	// From: Req7Batch145Amount500
	if (var_1_99 >= var_1_20) {
		if (((var_1_26 + var_1_27) - (var_1_28 - var_1_6)) > (var_1_50 | var_1_38)) {
			var_1_25 = ((var_1_29 - var_1_23) - var_1_22);
		}
	} else {
		var_1_25 = (var_1_21 + var_1_23);
	}


	// From: Req1Batch145Amount500
	signed long int stepLocal_0 = var_1_74;
	if (var_1_48) {
		if (last_1_var_1_1 == stepLocal_0) {
			var_1_1 = (max (10 , (min (var_1_5 , var_1_6))));
		} else {
			var_1_1 = ((min ((var_1_7 - 25) , 128)) - var_1_8);
		}
	}


	// From: Req18Batch145Amount500
	unsigned long int stepLocal_15 = 5u;
	if ((~ var_1_50) >= stepLocal_15) {
		if (var_1_86) {
			var_1_56 = var_1_34;
		} else {
			var_1_56 = (abs (max (var_1_35 , var_1_36)));
		}
	} else {
		if (var_1_41) {
			if (var_1_19 < ((4.698799487859676E18 - var_1_21) - var_1_57)) {
				var_1_56 = (var_1_58 - (min (var_1_35 , (var_1_37 + var_1_36))));
			} else {
				if (var_1_42) {
					var_1_56 = (min (((var_1_59 - var_1_36) - var_1_37) , var_1_7));
				}
			}
		} else {
			if (var_1_86) {
				var_1_56 = (min (var_1_37 , var_1_36));
			} else {
				var_1_56 = (var_1_37 - var_1_36);
			}
		}
	}


	// From: Req9Batch145Amount500
	unsigned char stepLocal_8 = var_1_86;
	if (var_1_48) {
		if (stepLocal_8 && var_1_80) {
			var_1_32 = ((min (var_1_34 , 16)) - var_1_35);
		} else {
			var_1_32 = (max (var_1_35 , (var_1_34 - (var_1_36 + var_1_37))));
		}
	} else {
		var_1_32 = (var_1_37 + var_1_36);
	}


	// From: Req19Batch145Amount500
	if (var_1_73 > var_1_57) {
		if (var_1_91) {
			if (var_1_29 < (var_1_55 / (max (var_1_21 , var_1_54)))) {
				var_1_60 = (min (var_1_7 , -8));
			}
		} else {
			var_1_60 = ((var_1_36 - (var_1_61 - var_1_62)) + var_1_37);
		}
	} else {
		var_1_60 = (max (((max (var_1_37 , var_1_62)) + var_1_36) , var_1_59));
	}


	// From: Req23Batch145Amount500
	if (var_1_72) {
		var_1_68 = (((var_1_69 - var_1_5) + 25331) - (var_1_70 - var_1_8));
	}


	// From: Req3Batch145Amount500
	unsigned long int stepLocal_2 = var_1_93;
	if ((var_1_25 + var_1_53) > 10.5f) {
		if (var_1_5 >= stepLocal_2) {
			var_1_12 = (37936 - var_1_71);
		}
	} else {
		var_1_12 = (((var_1_15 - var_1_8) - var_1_5) - var_1_6);
	}


	// From: Req30Batch145Amount500
	if ((var_1_78 - (var_1_54 - var_1_21)) <= var_1_53) {
		if (((var_1_12 | var_1_36) * var_1_59) == (var_1_7 % (min (var_1_45 , var_1_69)))) {
			var_1_77 = (var_1_49 || (var_1_66 && var_1_43));
		} else {
			var_1_77 = (! var_1_66);
		}
	} else {
		var_1_77 = var_1_47;
	}


	// From: Req44Batch145Amount500
	if (var_1_77) {
		var_1_96 = var_1_64;
	}


	// From: Req5Batch145Amount500
	signed long int stepLocal_7 = var_1_11;
	signed long int stepLocal_6 = var_1_9;
	signed long int stepLocal_5 = 64;
	if (var_1_7 >= stepLocal_7) {
		if (! (var_1_8 <= var_1_68)) {
			if (stepLocal_5 != (var_1_38 - var_1_7)) {
				if (stepLocal_6 == (var_1_68 / (abs (var_1_15)))) {
					var_1_17 = var_1_11;
				} else {
					var_1_17 = (var_1_8 + var_1_38);
				}
			} else {
				var_1_17 = 10u;
			}
		}
	} else {
		var_1_17 = (abs (var_1_5));
	}


	// From: Req11Batch145Amount500
	unsigned char stepLocal_12 = (var_1_60 & var_1_15) <= var_1_50;
	signed char stepLocal_11 = var_1_60;
	unsigned char stepLocal_10 = var_1_41;
	if (var_1_46 && stepLocal_12) {
		if (var_1_12 <= stepLocal_11) {
			var_1_39 = var_1_24;
		}
	} else {
		if (var_1_46 || stepLocal_10) {
			var_1_39 = (256.8 - var_1_21);
		} else {
			if ((max (var_1_24 , (max (var_1_20 , 24.8)))) != (var_1_21 - var_1_23)) {
				var_1_39 = (abs (var_1_22 + var_1_19));
			} else {
				var_1_39 = ((var_1_29 - var_1_22) - (var_1_40 - var_1_19));
			}
		}
	}


	// From: Req34Batch145Amount500
	if ((max (var_1_19 , var_1_39)) <= (32.75 + var_1_25)) {
		var_1_84 = (var_1_29 - (max ((var_1_54 - var_1_22) , var_1_40)));
	}


	// From: Req4Batch145Amount500
	unsigned char stepLocal_4 = var_1_100;
	signed long int stepLocal_3 = var_1_11;
	if (stepLocal_4 > var_1_17) {
		if (var_1_9 <= stepLocal_3) {
			var_1_16 = (min (var_1_96 , ((var_1_6 + var_1_5) - var_1_8)));
		} else {
			var_1_16 = (max ((min (var_1_9 , (var_1_100 + var_1_6))) , var_1_7));
		}
	}


	// From: Req37Batch145Amount500
	unsigned char stepLocal_24 = var_1_48;
	if (var_1_66) {
		var_1_89 = (var_1_15 - (min (var_1_16 , var_1_64)));
	} else {
		if (stepLocal_24 || var_1_86) {
			var_1_89 = var_1_16;
		} else {
			var_1_89 = var_1_70;
		}
	}


	// From: Req31Batch145Amount500
	unsigned long int stepLocal_20 = var_1_28;
	signed char stepLocal_19 = var_1_35;
	if (var_1_89 < stepLocal_19) {
		var_1_79 = var_1_6;
	} else {
		if (! (var_1_57 > var_1_54)) {
			if (stepLocal_20 <= var_1_36) {
				var_1_79 = ((max (var_1_59 , var_1_61)) + ((10 + var_1_62) + var_1_37));
			} else {
				var_1_79 = (var_1_64 + var_1_45);
			}
		}
	}


	// From: Req6Batch145Amount500
	if ((var_1_15 & (var_1_11 / var_1_7)) <= (var_1_5 - (var_1_79 + var_1_6))) {
		var_1_18 = ((var_1_19 - var_1_20) + ((var_1_21 - var_1_22) - (0.2 + var_1_23)));
	} else {
		if (var_1_6 < ((var_1_8 << var_1_79) + var_1_5)) {
			var_1_18 = (min ((var_1_24 + var_1_22) , var_1_19));
		}
	}


	// From: Req22Batch145Amount500
	if (var_1_18 < (min ((abs (var_1_40)) , var_1_22))) {
		var_1_67 = (max ((min (var_1_62 , var_1_58)) , var_1_59));
	} else {
		var_1_67 = (var_1_36 - 10);
	}


	// From: Req36Batch145Amount500
	if (((var_1_95 * var_1_20) * var_1_18) <= (abs (var_1_95))) {
		var_1_87 = (max ((max (var_1_58 , 0)) , (var_1_64 + var_1_61)));
	} else {
		var_1_87 = (min (var_1_58 , var_1_34));
	}


	// From: Req21Batch145Amount500
	if (var_1_79 < var_1_50) {
		var_1_65 = ((! var_1_47) || var_1_43);
	} else {
		if (var_1_49) {
			if (var_1_38 <= (var_1_7 * var_1_68)) {
				var_1_65 = (var_1_43 || var_1_66);
			}
		} else {
			var_1_65 = (! var_1_66);
		}
	}


	// From: Req33Batch145Amount500
	signed long int stepLocal_23 = abs (var_1_35);
	signed long int stepLocal_22 = var_1_9;
	if (stepLocal_22 > var_1_17) {
		if (! var_1_65) {
			if (var_1_9 > stepLocal_23) {
				var_1_83 = ((max (var_1_15 , (var_1_70 + var_1_69))) - var_1_5);
			} else {
				var_1_83 = ((max ((var_1_15 - var_1_7) , 33653)) - var_1_6);
			}
		}
	} else {
		var_1_83 = (max (var_1_97 , (var_1_59 + var_1_6)));
	}


	// From: Req49Batch145Amount500
	signed long int stepLocal_26 = 16;
	signed long int stepLocal_25 = var_1_7 + (var_1_83 ^ -1);
	if (stepLocal_25 < var_1_90) {
		if (var_1_34 < stepLocal_26) {
			if (! var_1_43) {
				if (var_1_80) {
					var_1_103 = var_1_29;
				} else {
					var_1_103 = var_1_55;
				}
			} else {
				var_1_103 = var_1_29;
			}
		} else {
			var_1_103 = var_1_104;
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 190);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 57342);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 2305843.009213691400e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1073741823);
	assume_abort_if_not(var_1_26 <= 2147483648);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741824);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1073741823);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 1610612734);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -1);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 4611686.018427383000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 63);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 6917529.027641074000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -1);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 62);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 31);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 31);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 24575);
	assume_abort_if_not(var_1_69 <= 32767);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 16383);
	assume_abort_if_not(var_1_70 <= 32767);
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854776000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 0);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 254);
	var_1_102 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 65534);
	var_1_104 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_104 >= -922337.2036854766000e+13F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 9223372.036854766000e+12F && var_1_104 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_103 = var_1_103;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_48 ? ((last_1_var_1_1 == var_1_74) ? (var_1_1 == ((unsigned char) (max (10 , (min (var_1_5 , var_1_6)))))) : (var_1_1 == ((unsigned char) ((min ((var_1_7 - 25) , 128)) - var_1_8)))) : 1) && ((last_1_var_1_41 || last_1_var_1_80) ? (var_1_9 == ((signed long int) (max ((last_1_var_1_56 + last_1_var_1_89) , (var_1_7 + (var_1_5 - var_1_11)))))) : (var_1_9 == ((signed long int) (last_1_var_1_56 + var_1_7))))) && (((var_1_25 + var_1_53) > 10.5f) ? ((var_1_5 >= var_1_93) ? (var_1_12 == ((unsigned short int) (37936 - var_1_71))) : 1) : (var_1_12 == ((unsigned short int) (((var_1_15 - var_1_8) - var_1_5) - var_1_6))))) && ((var_1_100 > var_1_17) ? ((var_1_9 <= var_1_11) ? (var_1_16 == ((signed short int) (min (var_1_96 , ((var_1_6 + var_1_5) - var_1_8))))) : (var_1_16 == ((signed short int) (max ((min (var_1_9 , (var_1_100 + var_1_6))) , var_1_7))))) : 1)) && ((var_1_7 >= var_1_11) ? ((! (var_1_8 <= var_1_68)) ? ((64 != (var_1_38 - var_1_7)) ? ((var_1_9 == (var_1_68 / (abs (var_1_15)))) ? (var_1_17 == ((unsigned long int) var_1_11)) : (var_1_17 == ((unsigned long int) (var_1_8 + var_1_38)))) : (var_1_17 == ((unsigned long int) 10u))) : 1) : (var_1_17 == ((unsigned long int) (abs (var_1_5)))))) && (((var_1_15 & (var_1_11 / var_1_7)) <= (var_1_5 - (var_1_79 + var_1_6))) ? (var_1_18 == ((double) ((var_1_19 - var_1_20) + ((var_1_21 - var_1_22) - (0.2 + var_1_23))))) : ((var_1_6 < ((var_1_8 << var_1_79) + var_1_5)) ? (var_1_18 == ((double) (min ((var_1_24 + var_1_22) , var_1_19)))) : 1))) && ((var_1_99 >= var_1_20) ? ((((var_1_26 + var_1_27) - (var_1_28 - var_1_6)) > (var_1_50 | var_1_38)) ? (var_1_25 == ((double) ((var_1_29 - var_1_23) - var_1_22))) : 1) : (var_1_25 == ((double) (var_1_21 + var_1_23))))) && (((var_1_11 / (max (var_1_28 , var_1_15))) <= 1u) ? (var_1_30 == ((signed long int) (var_1_15 - var_1_11))) : ((var_1_29 < last_1_var_1_25) ? (((- var_1_23) < var_1_22) ? (var_1_30 == ((signed long int) (last_1_var_1_30 + (max (last_1_var_1_75 , var_1_15))))) : (var_1_30 == ((signed long int) (var_1_5 - ((var_1_31 - last_1_var_1_1) - last_1_var_1_71))))) : (var_1_30 == ((signed long int) ((16 - var_1_8) + var_1_15)))))) && (var_1_48 ? ((var_1_86 && var_1_80) ? (var_1_32 == ((signed char) ((min (var_1_34 , 16)) - var_1_35))) : (var_1_32 == ((signed char) (max (var_1_35 , (var_1_34 - (var_1_36 + var_1_37))))))) : (var_1_32 == ((signed char) (var_1_37 + var_1_36))))) && ((last_1_var_1_103 <= last_1_var_1_95) ? (var_1_38 == ((signed long int) (((var_1_15 - last_1_var_1_38) + (var_1_8 - 25)) + (min (var_1_37 , (max (var_1_6 , var_1_34))))))) : (((last_1_var_1_60 > var_1_36) || last_1_var_1_72) ? (var_1_38 == ((signed long int) ((min (var_1_15 , var_1_7)) - (var_1_31 - var_1_11)))) : (var_1_38 == ((signed long int) var_1_37))))) && ((var_1_46 && ((var_1_60 & var_1_15) <= var_1_50)) ? ((var_1_12 <= var_1_60) ? (var_1_39 == ((double) var_1_24)) : 1) : ((var_1_46 || var_1_41) ? (var_1_39 == ((double) (256.8 - var_1_21))) : (((max (var_1_24 , (max (var_1_20 , 24.8)))) != (var_1_21 - var_1_23)) ? (var_1_39 == ((double) (abs (var_1_22 + var_1_19)))) : (var_1_39 == ((double) ((var_1_29 - var_1_22) - (var_1_40 - var_1_19)))))))) && (last_1_var_1_46 ? ((last_1_var_1_53 != var_1_19) ? (var_1_41 == ((unsigned char) (! (last_1_var_1_80 || var_1_42)))) : 1) : (var_1_41 == ((unsigned char) ((! var_1_42) && var_1_43))))) && (var_1_91 ? ((var_1_23 == var_1_19) ? (var_1_44 == ((unsigned char) ((min ((var_1_45 - 16) , var_1_35)) + var_1_8))) : 1) : (var_1_44 == ((unsigned char) var_1_6)))) && (((var_1_71 * var_1_50) >= var_1_28) ? (((min (var_1_30 , (min (var_1_7 , 32)))) != var_1_50) ? (var_1_46 == ((unsigned char) ((var_1_41 || var_1_42) && var_1_47))) : (var_1_46 == ((unsigned char) (var_1_47 && (! var_1_42))))) : 1)) && (((4 / var_1_7) >= (max (last_1_var_1_93 , (max (last_1_var_1_89 , var_1_45))))) ? (var_1_48 == ((unsigned char) (last_1_var_1_65 && (var_1_43 || var_1_49)))) : 1)) && (last_1_var_1_46 ? ((var_1_40 != last_1_var_1_92) ? (var_1_50 == ((unsigned long int) (abs (var_1_51)))) : (var_1_50 == ((unsigned long int) (min ((var_1_52 - var_1_6) , var_1_51))))) : 1)) && (((var_1_8 - (max (25 , var_1_35))) > 0) ? (var_1_53 == ((double) (min (var_1_20 , (var_1_22 - var_1_40))))) : (var_1_53 == ((double) ((max (var_1_55 , (var_1_29 - var_1_21))) - var_1_20))))) && (((~ var_1_50) >= 5u) ? (var_1_86 ? (var_1_56 == ((signed char) var_1_34)) : (var_1_56 == ((signed char) (abs (max (var_1_35 , var_1_36)))))) : (var_1_41 ? ((var_1_19 < ((4.698799487859676E18 - var_1_21) - var_1_57)) ? (var_1_56 == ((signed char) (var_1_58 - (min (var_1_35 , (var_1_37 + var_1_36)))))) : (var_1_42 ? (var_1_56 == ((signed char) (min (((var_1_59 - var_1_36) - var_1_37) , var_1_7)))) : 1)) : (var_1_86 ? (var_1_56 == ((signed char) (min (var_1_37 , var_1_36)))) : (var_1_56 == ((signed char) (var_1_37 - var_1_36))))))) && ((var_1_73 > var_1_57) ? (var_1_91 ? ((var_1_29 < (var_1_55 / (max (var_1_21 , var_1_54)))) ? (var_1_60 == ((signed char) (min (var_1_7 , -8)))) : 1) : (var_1_60 == ((signed char) ((var_1_36 - (var_1_61 - var_1_62)) + var_1_37)))) : (var_1_60 == ((signed char) (max (((max (var_1_37 , var_1_62)) + var_1_36) , var_1_59)))))) && ((var_1_20 > (- var_1_24)) ? (((-64 / var_1_61) <= var_1_15) ? (var_1_63 == ((signed char) var_1_61)) : (var_1_63 == ((signed char) ((min (var_1_61 , var_1_62)) - (var_1_37 + (max (var_1_36 , var_1_64))))))) : (var_1_63 == ((signed char) (var_1_58 - var_1_37))))) && ((var_1_79 < var_1_50) ? (var_1_65 == ((unsigned char) ((! var_1_47) || var_1_43))) : (var_1_49 ? ((var_1_38 <= (var_1_7 * var_1_68)) ? (var_1_65 == ((unsigned char) (var_1_43 || var_1_66))) : 1) : (var_1_65 == ((unsigned char) (! var_1_66)))))) && ((var_1_18 < (min ((abs (var_1_40)) , var_1_22))) ? (var_1_67 == ((signed char) (max ((min (var_1_62 , var_1_58)) , var_1_59)))) : (var_1_67 == ((signed char) (var_1_36 - 10))))) && (var_1_72 ? (var_1_68 == ((unsigned short int) (((var_1_69 - var_1_5) + 25331) - (var_1_70 - var_1_8)))) : 1)) && (((var_1_7 - var_1_8) < last_1_var_1_50) ? (var_1_71 == ((unsigned long int) (var_1_52 - var_1_69))) : (((var_1_61 * (last_1_var_1_32 ^ 1000)) <= var_1_70) ? (var_1_71 == ((unsigned long int) ((max (var_1_7 , var_1_5)) + (max (var_1_62 , (last_1_var_1_74 + last_1_var_1_50)))))) : 1))) && ((var_1_58 <= (var_1_35 / var_1_59)) ? (var_1_72 == ((unsigned char) (! (! (var_1_42 && var_1_47))))) : 1)) && (((var_1_21 - var_1_55) >= (var_1_53 / var_1_40)) ? (var_1_73 == ((float) ((max (var_1_21 , (var_1_23 + var_1_22))) + (var_1_20 - var_1_19)))) : 1)) && ((last_1_var_1_97 >= var_1_26) ? (var_1_74 == ((signed long int) (last_1_var_1_94 + ((max (last_1_var_1_83 , var_1_6)) + (max (last_1_var_1_32 , -10)))))) : (var_1_74 == ((signed long int) (min (last_1_var_1_71 , (last_1_var_1_83 + (var_1_69 - var_1_62)))))))) && ((var_1_9 < ((var_1_38 + var_1_30) / var_1_70)) ? (var_1_75 == ((signed long int) ((abs (var_1_59)) + (max ((var_1_61 - var_1_6) , var_1_58))))) : 1)) && (var_1_76 == ((unsigned char) (var_1_36 + (var_1_62 + var_1_37))))) && (((var_1_78 - (var_1_54 - var_1_21)) <= var_1_53) ? ((((var_1_12 | var_1_36) * var_1_59) == (var_1_7 % (min (var_1_45 , var_1_69)))) ? (var_1_77 == ((unsigned char) (var_1_49 || (var_1_66 && var_1_43)))) : (var_1_77 == ((unsigned char) (! var_1_66)))) : (var_1_77 == ((unsigned char) var_1_47)))) && ((var_1_89 < var_1_35) ? (var_1_79 == ((unsigned char) var_1_6)) : ((! (var_1_57 > var_1_54)) ? ((var_1_28 <= var_1_36) ? (var_1_79 == ((unsigned char) ((max (var_1_59 , var_1_61)) + ((10 + var_1_62) + var_1_37)))) : (var_1_79 == ((unsigned char) (var_1_64 + var_1_45)))) : 1))) && ((var_1_8 <= var_1_31) ? (var_1_66 ? (var_1_80 == ((unsigned char) (var_1_43 || ((var_1_42 && var_1_49) || var_1_81)))) : (var_1_80 == ((unsigned char) ((last_1_var_1_91 && last_1_var_1_72) && var_1_81)))) : (var_1_80 == ((unsigned char) ((last_1_var_1_39 >= var_1_22) || (var_1_47 && var_1_42)))))) && ((var_1_9 > var_1_17) ? ((! var_1_65) ? ((var_1_9 > (abs (var_1_35))) ? (var_1_83 == ((unsigned short int) ((max (var_1_15 , (var_1_70 + var_1_69))) - var_1_5))) : (var_1_83 == ((unsigned short int) ((max ((var_1_15 - var_1_7) , 33653)) - var_1_6)))) : 1) : (var_1_83 == ((unsigned short int) (max (var_1_97 , (var_1_59 + var_1_6))))))) && (((max (var_1_19 , var_1_39)) <= (32.75 + var_1_25)) ? (var_1_84 == ((float) (var_1_29 - (max ((var_1_54 - var_1_22) , var_1_40))))) : 1)) && ((var_1_28 > var_1_26) ? (last_1_var_1_72 ? (var_1_86 == ((unsigned char) (var_1_42 && (last_1_var_1_65 || var_1_47)))) : 1) : ((((var_1_78 - var_1_19) * (32.75f * last_1_var_1_84)) < (last_1_var_1_53 + last_1_var_1_84)) ? (var_1_86 == ((unsigned char) (! (! (! var_1_43))))) : 1))) && ((((var_1_95 * var_1_20) * var_1_18) <= (abs (var_1_95))) ? (var_1_87 == ((signed char) (max ((max (var_1_58 , 0)) , (var_1_64 + var_1_61))))) : (var_1_87 == ((signed char) (min (var_1_58 , var_1_34)))))) && (var_1_66 ? (var_1_89 == ((unsigned short int) (var_1_15 - (min (var_1_16 , var_1_64))))) : ((var_1_48 || var_1_86) ? (var_1_89 == ((unsigned short int) var_1_16)) : (var_1_89 == ((unsigned short int) var_1_70))))) && (var_1_81 ? (var_1_90 == ((signed long int) var_1_30)) : (var_1_90 == ((signed long int) -1)))) && (var_1_80 ? (var_1_91 == ((unsigned char) var_1_49)) : 1)) && (var_1_48 ? (var_1_92 == ((float) var_1_55)) : (var_1_92 == ((float) var_1_19)))) && (var_1_86 ? (var_1_93 == ((unsigned long int) var_1_74)) : 1)) && (var_1_94 == ((unsigned char) var_1_62))) && (var_1_95 == ((double) var_1_40))) && (var_1_77 ? (var_1_96 == ((signed char) var_1_64)) : 1)) && (var_1_48 ? (var_1_97 == ((unsigned char) var_1_61)) : (var_1_97 == ((unsigned char) var_1_98)))) && (var_1_99 == ((double) var_1_23))) && (var_1_86 ? (var_1_100 == ((unsigned char) 50)) : (var_1_100 == ((unsigned char) var_1_64)))) && (var_1_42 ? (var_1_101 == ((unsigned short int) var_1_102)) : (var_1_101 == ((unsigned short int) var_1_8)))) && (((var_1_7 + (var_1_83 ^ -1)) < var_1_90) ? ((var_1_34 < 16) ? ((! var_1_43) ? (var_1_80 ? (var_1_103 == ((float) var_1_29)) : (var_1_103 == ((float) var_1_55))) : (var_1_103 == ((float) var_1_29))) : (var_1_103 == ((float) var_1_104))) : 1)
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
