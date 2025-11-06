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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed char var_1_2 = 1;
signed char var_1_3 = 2;
signed char var_1_4 = 0;
double var_1_5 = 50.5;
double var_1_7 = 5.25;
double var_1_8 = 999999999999.6;
double var_1_9 = 0.56;
double var_1_10 = 127.05;
double var_1_11 = 0.0;
double var_1_12 = 128.239;
signed long int var_1_13 = 10;
signed long int var_1_16 = 1248964381;
signed long int var_1_17 = 1555466418;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_24 = 128;
unsigned long int var_1_25 = 8;
double var_1_26 = 127.6;
signed char var_1_27 = 16;
unsigned long int var_1_28 = 0;
signed short int var_1_29 = -128;
unsigned short int var_1_30 = 128;
unsigned long int var_1_31 = 2257933145;
signed short int var_1_32 = 100;
signed short int var_1_33 = -32;
signed char var_1_34 = -2;
signed char var_1_36 = 32;
signed char var_1_37 = 5;
signed char var_1_38 = -4;
signed char var_1_39 = -25;
unsigned long int var_1_40 = 2;
unsigned long int var_1_41 = 3288171653;
float var_1_42 = 256.2;
float var_1_43 = 25.25;
float var_1_44 = 499.75;
signed long int var_1_45 = 2;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
signed long int var_1_48 = -1;
unsigned short int var_1_49 = 1000;
double var_1_50 = 7.74;
float var_1_51 = 5.875;
float var_1_52 = 0.0;
float var_1_53 = 1.5;
float var_1_54 = 0.0;
signed short int var_1_55 = -128;
signed char var_1_56 = 32;
signed char var_1_57 = 64;
signed char var_1_58 = 0;
float var_1_59 = -0.5;
unsigned short int var_1_60 = 32;
unsigned short int var_1_61 = 17050;
unsigned char var_1_62 = 200;
unsigned char var_1_63 = 200;
unsigned char var_1_64 = 128;
unsigned char var_1_65 = 2;
unsigned char var_1_66 = 200;
unsigned char var_1_67 = 128;
unsigned short int var_1_68 = 40443;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 16;
double var_1_71 = 10.5;
double var_1_72 = 4.5;
unsigned char var_1_73 = 1;
unsigned char var_1_74 = 100;
float var_1_75 = 100.4;
unsigned long int var_1_76 = 50;
double var_1_78 = 63.75;
double var_1_80 = 0.0;
unsigned char var_1_81 = 100;
float var_1_82 = 5.4;
float var_1_83 = 25.3;
unsigned char var_1_84 = 1;
unsigned char var_1_86 = 128;
unsigned char var_1_87 = 4;
signed char var_1_88 = -4;
signed char var_1_91 = 64;
signed char var_1_92 = 8;
unsigned short int var_1_93 = 256;
float var_1_94 = 64.25;
unsigned char var_1_95 = 64;
unsigned char var_1_96 = 1;
float var_1_97 = 10.225;
unsigned char var_1_98 = 8;
signed long int var_1_99 = -5;
double var_1_100 = 7.375;
float var_1_101 = 5.5;
unsigned long int var_1_102 = 64;
unsigned short int var_1_103 = 1;
unsigned short int var_1_104 = 64;
unsigned char var_1_105 = 50;
signed long int var_1_106 = -200;
unsigned char var_1_107 = 1;
unsigned char var_1_108 = 100;
unsigned long int var_1_109 = 0;
unsigned char var_1_110 = 16;
unsigned long int var_1_111 = 200;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_46 = 0;
double last_1_var_1_78 = 63.75;
unsigned char last_1_var_1_81 = 100;
signed long int last_1_var_1_99 = -5;
double last_1_var_1_100 = 7.375;
unsigned char last_1_var_1_107 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch144Amount500
	unsigned char stepLocal_8 = last_1_var_1_46;
	if (last_1_var_1_107 || stepLocal_8) {
		var_1_40 = (var_1_41 - var_1_17);
	}


	// From: Req5Batch144Amount500
	if (1.25 <= last_1_var_1_100) {
		var_1_22 = (var_1_20 || ((-8 > var_1_2) && var_1_21));
	}


	// From: Req47Batch144Amount500
	if (var_1_22) {
		var_1_100 = 8.5;
	} else {
		var_1_100 = var_1_11;
	}


	// From: Req1Batch144Amount500
	var_1_1 = ((100 - var_1_2) - (max (var_1_3 , var_1_4)));


	// From: Req6Batch144Amount500
	if (var_1_8 > (var_1_11 + -0.5)) {
		var_1_24 = (abs (var_1_25));
	} else {
		var_1_24 = (max (var_1_25 , var_1_16));
	}


	// From: Req8Batch144Amount500
	if (var_1_9 > var_1_8) {
		var_1_27 = ((min (var_1_4 , 8)) - var_1_3);
	}


	// From: Req12Batch144Amount500
	signed char stepLocal_7 = var_1_4;
	if (stepLocal_7 > (var_1_30 + var_1_24)) {
		var_1_34 = ((var_1_2 - (var_1_36 - var_1_37)) + (var_1_38 + var_1_39));
	}


	// From: Req15Batch144Amount500
	if (var_1_20) {
		var_1_45 = (var_1_17 - (var_1_4 + var_1_2));
	}


	// From: Req17Batch144Amount500
	signed char stepLocal_14 = var_1_38;
	if (stepLocal_14 == (abs (var_1_4))) {
		var_1_48 = ((max (5 , (var_1_2 - var_1_30))) + (var_1_3 - var_1_4));
	}


	// From: Req18Batch144Amount500
	signed long int stepLocal_15 = min (var_1_3 , (var_1_36 / -1));
	if ((5 * var_1_40) > stepLocal_15) {
		var_1_49 = (var_1_4 + var_1_37);
	} else {
		var_1_49 = (var_1_2 + var_1_37);
	}


	// From: Req20Batch144Amount500
	var_1_51 = ((var_1_52 - (min (var_1_12 , var_1_53))) - ((min (var_1_11 , var_1_54)) - 255.5f));


	// From: Req22Batch144Amount500
	if (63.8f > var_1_100) {
		if (var_1_9 == var_1_44) {
			if (var_1_19) {
				var_1_56 = (4 - (min (var_1_36 , var_1_4)));
			}
		} else {
			var_1_56 = (var_1_37 - (var_1_57 - (var_1_36 - var_1_58)));
		}
	} else {
		var_1_56 = (abs (var_1_36 - var_1_2));
	}


	// From: Req24Batch144Amount500
	if (32.3f == (min ((var_1_54 - 4.875f) , var_1_7))) {
		var_1_60 = ((var_1_61 - var_1_2) + (abs (var_1_3)));
	} else {
		if (var_1_22) {
			if ((- var_1_10) >= (var_1_11 - (abs (var_1_9)))) {
				var_1_60 = ((var_1_61 - 100) + var_1_36);
			}
		} else {
			var_1_60 = var_1_4;
		}
	}


	// From: Req30Batch144Amount500
	var_1_71 = ((min ((abs (49.8)) , (min (var_1_72 , var_1_12)))) + var_1_53);


	// From: Req31Batch144Amount500
	signed long int stepLocal_19 = max (32 , (min (var_1_36 , var_1_39)));
	if ((min (var_1_52 , var_1_100)) != (var_1_44 - (var_1_12 + 4.25f))) {
		if (var_1_38 < stepLocal_19) {
			var_1_73 = (var_1_37 + (max (var_1_57 , (var_1_74 - var_1_58))));
		} else {
			var_1_73 = (var_1_64 - var_1_57);
		}
	} else {
		var_1_73 = var_1_66;
	}


	// From: Req33Batch144Amount500
	signed long int stepLocal_21 = 1;
	if ((-8 + var_1_48) <= stepLocal_21) {
		var_1_76 = (var_1_17 + (abs (var_1_24)));
	}


	// From: Req36Batch144Amount500
	signed char stepLocal_24 = var_1_56;
	if (var_1_57 <= stepLocal_24) {
		var_1_82 = var_1_43;
	} else {
		var_1_82 = (var_1_10 - (min ((var_1_54 - var_1_53) , (var_1_11 - var_1_12))));
	}


	// From: Req43Batch144Amount500
	var_1_96 = var_1_19;


	// From: Req44Batch144Amount500
	var_1_97 = var_1_44;


	// From: Req48Batch144Amount500
	var_1_101 = var_1_72;


	// From: Req51Batch144Amount500
	var_1_105 = var_1_3;


	// From: Req53Batch144Amount500
	var_1_107 = var_1_47;


	// From: Req55Batch144Amount500
	var_1_109 = var_1_87;


	// From: Req4Batch144Amount500
	if (var_1_4 < var_1_2) {
		var_1_18 = (var_1_19 || (var_1_20 || (var_1_96 && var_1_21)));
	} else {
		if (var_1_12 < var_1_8) {
			var_1_18 = (var_1_19 && var_1_20);
		} else {
			if (var_1_9 <= 7.1) {
				var_1_18 = (var_1_19 && var_1_20);
			}
		}
	}


	// From: Req9Batch144Amount500
	unsigned char stepLocal_4 = var_1_20;
	if (var_1_18 && stepLocal_4) {
		var_1_28 = (abs (var_1_4 + (var_1_17 - 128u)));
	}


	// From: Req11Batch144Amount500
	if (var_1_96) {
		if (var_1_21) {
			var_1_33 = var_1_2;
		}
	} else {
		var_1_33 = var_1_32;
	}


	// From: Req21Batch144Amount500
	if (var_1_20) {
		if (var_1_7 == var_1_12) {
			var_1_55 = var_1_38;
		} else {
			if (! (var_1_43 >= (- var_1_71))) {
				var_1_55 = (min ((abs (var_1_4 - var_1_3)) , var_1_39));
			}
		}
	}


	// From: Req25Batch144Amount500
	if ((var_1_58 / (128 + var_1_36)) >= var_1_28) {
		var_1_62 = (max ((var_1_4 + var_1_36) , var_1_58));
	} else {
		if (var_1_61 >= var_1_17) {
			var_1_62 = (min (var_1_37 , (var_1_63 - var_1_58)));
		} else {
			if (var_1_22) {
				var_1_62 = (min (var_1_37 , 1));
			} else {
				var_1_62 = (abs (var_1_64 - var_1_36));
			}
		}
	}


	// From: Req27Batch144Amount500
	if (! var_1_18) {
		if (((var_1_68 - var_1_64) & (var_1_45 / var_1_61)) > var_1_39) {
			var_1_67 = (var_1_36 + (max (10 , var_1_3)));
		}
	} else {
		var_1_67 = (max (var_1_36 , var_1_57));
	}


	// From: Req35Batch144Amount500
	signed char stepLocal_23 = var_1_4;
	if ((max (last_1_var_1_81 , var_1_28)) >= stepLocal_23) {
		var_1_81 = (max (var_1_36 , ((var_1_74 - var_1_37) + (var_1_58 + var_1_2))));
	} else {
		var_1_81 = ((var_1_36 + var_1_37) + var_1_3);
	}


	// From: Req41Batch144Amount500
	if (var_1_96) {
		var_1_94 = var_1_44;
	}


	// From: Req45Batch144Amount500
	if (var_1_18) {
		var_1_98 = var_1_63;
	} else {
		var_1_98 = var_1_58;
	}


	// From: Req46Batch144Amount500
	if (var_1_107) {
		var_1_99 = last_1_var_1_99;
	}


	// From: Req49Batch144Amount500
	if (var_1_18) {
		var_1_102 = 256u;
	}


	// From: Req52Batch144Amount500
	if (var_1_18) {
		var_1_106 = var_1_61;
	}


	// From: Req56Batch144Amount500
	if (var_1_18) {
		var_1_110 = var_1_4;
	}


	// From: Req57Batch144Amount500
	if (var_1_51 <= var_1_53) {
		if ((var_1_91 * 128u) < ((5u << var_1_17) / (var_1_41 - var_1_16))) {
			var_1_111 = var_1_4;
		} else {
			var_1_111 = 0u;
		}
	} else {
		var_1_111 = var_1_67;
	}


	// From: Req16Batch144Amount500
	unsigned long int stepLocal_13 = var_1_40;
	signed long int stepLocal_12 = - 128;
	signed short int stepLocal_11 = var_1_32;
	unsigned long int stepLocal_10 = var_1_31;
	unsigned short int stepLocal_9 = var_1_30;
	if (last_1_var_1_46) {
		if (stepLocal_13 <= var_1_36) {
			if (stepLocal_10 <= var_1_36) {
				var_1_46 = (! var_1_47);
			} else {
				var_1_46 = (! (! var_1_21));
			}
		}
	} else {
		if (stepLocal_12 < (var_1_24 + var_1_111)) {
			if (var_1_40 <= stepLocal_9) {
				if (stepLocal_11 >= ((var_1_4 - var_1_2) + var_1_16)) {
					var_1_46 = (! var_1_21);
				} else {
					var_1_46 = (var_1_21 || var_1_20);
				}
			}
		}
	}


	// From: Req2Batch144Amount500
	signed long int stepLocal_1 = - (var_1_3 / 2);
	signed char stepLocal_0 = var_1_4;
	if ((var_1_106 & var_1_1) >= stepLocal_0) {
		if (stepLocal_1 <= (var_1_106 | var_1_2)) {
			var_1_5 = (min ((max (var_1_7 , (64.75 + var_1_8))) , var_1_9));
		} else {
			var_1_5 = (max (var_1_9 , (var_1_10 - (var_1_11 - var_1_12))));
		}
	}


	// From: Req3Batch144Amount500
	unsigned char stepLocal_2 = -10 > (var_1_3 - var_1_2);
	if (! (var_1_12 < 256.2)) {
		if (var_1_46) {
			var_1_13 = var_1_3;
		} else {
			var_1_13 = (max (var_1_3 , var_1_2));
		}
	} else {
		if (var_1_107) {
			var_1_13 = (min (((var_1_16 - var_1_2) - (var_1_17 - var_1_4)) , var_1_3));
		} else {
			if (stepLocal_2 || ((var_1_12 * var_1_10) < var_1_9)) {
				var_1_13 = (var_1_3 + var_1_4);
			}
		}
	}


	// From: Req10Batch144Amount500
	unsigned long int stepLocal_6 = var_1_111 % var_1_30;
	signed long int stepLocal_5 = var_1_17 * (var_1_16 - 10);
	if (stepLocal_6 >= (var_1_31 - (var_1_17 - var_1_3))) {
		if ((var_1_2 / var_1_30) == stepLocal_5) {
			var_1_29 = (max ((max (var_1_4 , var_1_2)) , (var_1_32 + var_1_3)));
		} else {
			var_1_29 = (abs (var_1_32));
		}
	} else {
		var_1_29 = (var_1_4 - 256);
	}


	// From: Req19Batch144Amount500
	unsigned char stepLocal_16 = (min (var_1_13 , var_1_30)) > var_1_36;
	if (var_1_9 < var_1_8) {
		if (stepLocal_16 || var_1_107) {
			var_1_50 = var_1_44;
		} else {
			var_1_50 = (var_1_12 + (min (var_1_8 , 63.4)));
		}
	} else {
		var_1_50 = (var_1_11 - var_1_12);
	}


	// From: Req23Batch144Amount500
	if (var_1_46) {
		var_1_59 = ((7.176269503031607E18f - 256.5f) - var_1_52);
	} else {
		var_1_59 = (var_1_12 + var_1_53);
	}


	// From: Req29Batch144Amount500
	signed long int stepLocal_18 = var_1_106;
	if (var_1_16 >= stepLocal_18) {
		var_1_70 = var_1_63;
	}


	// From: Req32Batch144Amount500
	unsigned char stepLocal_20 = var_1_22;
	if (stepLocal_20 && (var_1_37 < (var_1_81 + var_1_73))) {
		var_1_75 = (max ((var_1_12 + (min (var_1_53 , var_1_8))) , var_1_9));
	} else {
		var_1_75 = (max ((var_1_72 + (min (var_1_12 , var_1_8))) , var_1_11));
	}


	// From: Req34Batch144Amount500
	unsigned long int stepLocal_22 = var_1_41;
	if ((var_1_5 / var_1_52) > last_1_var_1_78) {
		if (var_1_25 >= stepLocal_22) {
			var_1_78 = (var_1_12 - 255.1);
		}
	} else {
		if (var_1_7 > (var_1_44 - (var_1_80 - var_1_53))) {
			var_1_78 = ((var_1_54 - var_1_53) - var_1_43);
		}
	}


	// From: Req37Batch144Amount500
	unsigned long int stepLocal_25 = min (var_1_40 , (var_1_99 - var_1_13));
	if ((var_1_13 * (- var_1_40)) != stepLocal_25) {
		var_1_83 = ((abs (var_1_72)) + var_1_53);
	}


	// From: Req39Batch144Amount500
	unsigned char stepLocal_30 = var_1_22;
	unsigned long int stepLocal_29 = var_1_111;
	unsigned char stepLocal_28 = var_1_73;
	if (var_1_22) {
		if (stepLocal_28 < var_1_38) {
			if (stepLocal_30 || var_1_107) {
				if ((var_1_58 * var_1_40) == stepLocal_29) {
					var_1_88 = (-5 + (var_1_37 + (max (1 , var_1_39))));
				} else {
					var_1_88 = (min (var_1_38 , (min (var_1_57 , var_1_87))));
				}
			} else {
				var_1_88 = ((var_1_91 - (var_1_58 + 2)) - (var_1_92 + (var_1_87 + var_1_37)));
			}
		} else {
			var_1_88 = (var_1_36 - var_1_91);
		}
	} else {
		var_1_88 = ((var_1_87 - var_1_36) + (var_1_37 + var_1_58));
	}


	// From: Req40Batch144Amount500
	if (var_1_75 == (max (1.8f , var_1_50))) {
		var_1_93 = (min (var_1_98 , (var_1_61 + var_1_66)));
	} else {
		var_1_93 = (var_1_109 + (abs (var_1_91)));
	}


	// From: Req42Batch144Amount500
	if (var_1_46) {
		var_1_95 = var_1_3;
	} else {
		var_1_95 = var_1_86;
	}


	// From: Req50Batch144Amount500
	if (var_1_46) {
		var_1_103 = var_1_104;
	} else {
		var_1_103 = var_1_57;
	}


	// From: Req54Batch144Amount500
	if (var_1_46) {
		var_1_108 = var_1_36;
	} else {
		var_1_108 = var_1_91;
	}


	// From: Req7Batch144Amount500
	unsigned char stepLocal_3 = var_1_8 > var_1_12;
	if (stepLocal_3 || (var_1_93 >= var_1_109)) {
		var_1_26 = var_1_9;
	}


	// From: Req14Batch144Amount500
	if (var_1_3 <= (var_1_37 - (max (var_1_2 , var_1_36)))) {
		if (var_1_37 <= ((var_1_95 & var_1_111) / var_1_36)) {
			var_1_42 = (abs (var_1_43 - var_1_44));
		}
	} else {
		if (var_1_46) {
			var_1_42 = (var_1_11 - var_1_10);
		} else {
			var_1_42 = (var_1_12 + (abs (var_1_8)));
		}
	}


	// From: Req26Batch144Amount500
	unsigned char stepLocal_17 = var_1_47;
	if (var_1_21) {
		var_1_65 = 16;
	} else {
		if ((var_1_54 + var_1_10) >= (var_1_78 * 8.75)) {
			if (stepLocal_17 || var_1_107) {
				var_1_65 = var_1_36;
			} else {
				var_1_65 = (min (4 , var_1_64));
			}
		} else {
			var_1_65 = ((abs (var_1_66 - var_1_2)) - var_1_57);
		}
	}


	// From: Req28Batch144Amount500
	if (var_1_111 >= var_1_63) {
		if (((var_1_31 * var_1_109) != (- var_1_16)) || var_1_18) {
			var_1_69 = (abs (var_1_64 - 32));
		} else {
			var_1_69 = (min (var_1_63 , 4));
		}
	} else {
		if (var_1_10 == var_1_78) {
			var_1_69 = var_1_36;
		}
	}


	// From: Req38Batch144Amount500
	unsigned long int stepLocal_27 = var_1_24;
	unsigned char stepLocal_26 = var_1_20 || (var_1_96 || var_1_22);
	if (var_1_21 && stepLocal_26) {
		if (var_1_26 <= ((var_1_12 + var_1_53) - (max (var_1_54 , var_1_44)))) {
			var_1_84 = (var_1_36 + (abs (var_1_37)));
		} else {
			var_1_84 = (var_1_86 - var_1_3);
		}
	} else {
		if (var_1_5 > (15.9 / (max (var_1_80 , var_1_52)))) {
			if ((var_1_109 ^ var_1_66) > stepLocal_27) {
				var_1_84 = (min ((var_1_63 - var_1_4) , ((var_1_66 - var_1_36) - var_1_37)));
			} else {
				var_1_84 = var_1_37;
			}
		} else {
			var_1_84 = (var_1_58 + ((var_1_37 + var_1_87) + var_1_2));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 63);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 4611686.018427383000e+12F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1073741822);
	assume_abort_if_not(var_1_16 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65535);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -16383);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 31);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -31);
	assume_abort_if_not(var_1_38 <= 32);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -31);
	assume_abort_if_not(var_1_39 <= 31);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 4611686.018427383000e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 31);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 16383);
	assume_abort_if_not(var_1_61 <= 32767);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 127);
	assume_abort_if_not(var_1_63 <= 254);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 127);
	assume_abort_if_not(var_1_64 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 190);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65535);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -461168.6018427383000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 63);
	assume_abort_if_not(var_1_74 <= 127);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 4611686.018427388000e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 127);
	assume_abort_if_not(var_1_86 <= 254);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 32);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 62);
	assume_abort_if_not(var_1_91 <= 126);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 63);
	var_1_104 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_46 = var_1_46;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_107 = var_1_107;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed char) ((100 - var_1_2) - (max (var_1_3 , var_1_4))))) && (((var_1_106 & var_1_1) >= var_1_4) ? (((- (var_1_3 / 2)) <= (var_1_106 | var_1_2)) ? (var_1_5 == ((double) (min ((max (var_1_7 , (64.75 + var_1_8))) , var_1_9)))) : (var_1_5 == ((double) (max (var_1_9 , (var_1_10 - (var_1_11 - var_1_12))))))) : 1)) && ((! (var_1_12 < 256.2)) ? (var_1_46 ? (var_1_13 == ((signed long int) var_1_3)) : (var_1_13 == ((signed long int) (max (var_1_3 , var_1_2))))) : (var_1_107 ? (var_1_13 == ((signed long int) (min (((var_1_16 - var_1_2) - (var_1_17 - var_1_4)) , var_1_3)))) : (((-10 > (var_1_3 - var_1_2)) || ((var_1_12 * var_1_10) < var_1_9)) ? (var_1_13 == ((signed long int) (var_1_3 + var_1_4))) : 1)))) && ((var_1_4 < var_1_2) ? (var_1_18 == ((unsigned char) (var_1_19 || (var_1_20 || (var_1_96 && var_1_21))))) : ((var_1_12 < var_1_8) ? (var_1_18 == ((unsigned char) (var_1_19 && var_1_20))) : ((var_1_9 <= 7.1) ? (var_1_18 == ((unsigned char) (var_1_19 && var_1_20))) : 1)))) && ((1.25 <= last_1_var_1_100) ? (var_1_22 == ((unsigned char) (var_1_20 || ((-8 > var_1_2) && var_1_21)))) : 1)) && ((var_1_8 > (var_1_11 + -0.5)) ? (var_1_24 == ((unsigned long int) (abs (var_1_25)))) : (var_1_24 == ((unsigned long int) (max (var_1_25 , var_1_16)))))) && (((var_1_8 > var_1_12) || (var_1_93 >= var_1_109)) ? (var_1_26 == ((double) var_1_9)) : 1)) && ((var_1_9 > var_1_8) ? (var_1_27 == ((signed char) ((min (var_1_4 , 8)) - var_1_3))) : 1)) && ((var_1_18 && var_1_20) ? (var_1_28 == ((unsigned long int) (abs (var_1_4 + (var_1_17 - 128u))))) : 1)) && (((var_1_111 % var_1_30) >= (var_1_31 - (var_1_17 - var_1_3))) ? (((var_1_2 / var_1_30) == (var_1_17 * (var_1_16 - 10))) ? (var_1_29 == ((signed short int) (max ((max (var_1_4 , var_1_2)) , (var_1_32 + var_1_3))))) : (var_1_29 == ((signed short int) (abs (var_1_32))))) : (var_1_29 == ((signed short int) (var_1_4 - 256))))) && (var_1_96 ? (var_1_21 ? (var_1_33 == ((signed short int) var_1_2)) : 1) : (var_1_33 == ((signed short int) var_1_32)))) && ((var_1_4 > (var_1_30 + var_1_24)) ? (var_1_34 == ((signed char) ((var_1_2 - (var_1_36 - var_1_37)) + (var_1_38 + var_1_39)))) : 1)) && ((last_1_var_1_107 || last_1_var_1_46) ? (var_1_40 == ((unsigned long int) (var_1_41 - var_1_17))) : 1)) && ((var_1_3 <= (var_1_37 - (max (var_1_2 , var_1_36)))) ? ((var_1_37 <= ((var_1_95 & var_1_111) / var_1_36)) ? (var_1_42 == ((float) (abs (var_1_43 - var_1_44)))) : 1) : (var_1_46 ? (var_1_42 == ((float) (var_1_11 - var_1_10))) : (var_1_42 == ((float) (var_1_12 + (abs (var_1_8)))))))) && (var_1_20 ? (var_1_45 == ((signed long int) (var_1_17 - (var_1_4 + var_1_2)))) : 1)) && (last_1_var_1_46 ? ((var_1_40 <= var_1_36) ? ((var_1_31 <= var_1_36) ? (var_1_46 == ((unsigned char) (! var_1_47))) : (var_1_46 == ((unsigned char) (! (! var_1_21))))) : 1) : (((- 128) < (var_1_24 + var_1_111)) ? ((var_1_40 <= var_1_30) ? ((var_1_32 >= ((var_1_4 - var_1_2) + var_1_16)) ? (var_1_46 == ((unsigned char) (! var_1_21))) : (var_1_46 == ((unsigned char) (var_1_21 || var_1_20)))) : 1) : 1))) && ((var_1_38 == (abs (var_1_4))) ? (var_1_48 == ((signed long int) ((max (5 , (var_1_2 - var_1_30))) + (var_1_3 - var_1_4)))) : 1)) && (((5 * var_1_40) > (min (var_1_3 , (var_1_36 / -1)))) ? (var_1_49 == ((unsigned short int) (var_1_4 + var_1_37))) : (var_1_49 == ((unsigned short int) (var_1_2 + var_1_37))))) && ((var_1_9 < var_1_8) ? ((((min (var_1_13 , var_1_30)) > var_1_36) || var_1_107) ? (var_1_50 == ((double) var_1_44)) : (var_1_50 == ((double) (var_1_12 + (min (var_1_8 , 63.4)))))) : (var_1_50 == ((double) (var_1_11 - var_1_12))))) && (var_1_51 == ((float) ((var_1_52 - (min (var_1_12 , var_1_53))) - ((min (var_1_11 , var_1_54)) - 255.5f))))) && (var_1_20 ? ((var_1_7 == var_1_12) ? (var_1_55 == ((signed short int) var_1_38)) : ((! (var_1_43 >= (- var_1_71))) ? (var_1_55 == ((signed short int) (min ((abs (var_1_4 - var_1_3)) , var_1_39)))) : 1)) : 1)) && ((63.8f > var_1_100) ? ((var_1_9 == var_1_44) ? (var_1_19 ? (var_1_56 == ((signed char) (4 - (min (var_1_36 , var_1_4))))) : 1) : (var_1_56 == ((signed char) (var_1_37 - (var_1_57 - (var_1_36 - var_1_58)))))) : (var_1_56 == ((signed char) (abs (var_1_36 - var_1_2)))))) && (var_1_46 ? (var_1_59 == ((float) ((7.176269503031607E18f - 256.5f) - var_1_52))) : (var_1_59 == ((float) (var_1_12 + var_1_53))))) && ((32.3f == (min ((var_1_54 - 4.875f) , var_1_7))) ? (var_1_60 == ((unsigned short int) ((var_1_61 - var_1_2) + (abs (var_1_3))))) : (var_1_22 ? (((- var_1_10) >= (var_1_11 - (abs (var_1_9)))) ? (var_1_60 == ((unsigned short int) ((var_1_61 - 100) + var_1_36))) : 1) : (var_1_60 == ((unsigned short int) var_1_4))))) && (((var_1_58 / (128 + var_1_36)) >= var_1_28) ? (var_1_62 == ((unsigned char) (max ((var_1_4 + var_1_36) , var_1_58)))) : ((var_1_61 >= var_1_17) ? (var_1_62 == ((unsigned char) (min (var_1_37 , (var_1_63 - var_1_58))))) : (var_1_22 ? (var_1_62 == ((unsigned char) (min (var_1_37 , 1)))) : (var_1_62 == ((unsigned char) (abs (var_1_64 - var_1_36)))))))) && (var_1_21 ? (var_1_65 == ((unsigned char) 16)) : (((var_1_54 + var_1_10) >= (var_1_78 * 8.75)) ? ((var_1_47 || var_1_107) ? (var_1_65 == ((unsigned char) var_1_36)) : (var_1_65 == ((unsigned char) (min (4 , var_1_64))))) : (var_1_65 == ((unsigned char) ((abs (var_1_66 - var_1_2)) - var_1_57)))))) && ((! var_1_18) ? ((((var_1_68 - var_1_64) & (var_1_45 / var_1_61)) > var_1_39) ? (var_1_67 == ((unsigned char) (var_1_36 + (max (10 , var_1_3))))) : 1) : (var_1_67 == ((unsigned char) (max (var_1_36 , var_1_57)))))) && ((var_1_111 >= var_1_63) ? ((((var_1_31 * var_1_109) != (- var_1_16)) || var_1_18) ? (var_1_69 == ((unsigned char) (abs (var_1_64 - 32)))) : (var_1_69 == ((unsigned char) (min (var_1_63 , 4))))) : ((var_1_10 == var_1_78) ? (var_1_69 == ((unsigned char) var_1_36)) : 1))) && ((var_1_16 >= var_1_106) ? (var_1_70 == ((unsigned char) var_1_63)) : 1)) && (var_1_71 == ((double) ((min ((abs (49.8)) , (min (var_1_72 , var_1_12)))) + var_1_53)))) && (((min (var_1_52 , var_1_100)) != (var_1_44 - (var_1_12 + 4.25f))) ? ((var_1_38 < (max (32 , (min (var_1_36 , var_1_39))))) ? (var_1_73 == ((unsigned char) (var_1_37 + (max (var_1_57 , (var_1_74 - var_1_58)))))) : (var_1_73 == ((unsigned char) (var_1_64 - var_1_57)))) : (var_1_73 == ((unsigned char) var_1_66)))) && ((var_1_22 && (var_1_37 < (var_1_81 + var_1_73))) ? (var_1_75 == ((float) (max ((var_1_12 + (min (var_1_53 , var_1_8))) , var_1_9)))) : (var_1_75 == ((float) (max ((var_1_72 + (min (var_1_12 , var_1_8))) , var_1_11)))))) && (((-8 + var_1_48) <= 1) ? (var_1_76 == ((unsigned long int) (var_1_17 + (abs (var_1_24))))) : 1)) && (((var_1_5 / var_1_52) > last_1_var_1_78) ? ((var_1_25 >= var_1_41) ? (var_1_78 == ((double) (var_1_12 - 255.1))) : 1) : ((var_1_7 > (var_1_44 - (var_1_80 - var_1_53))) ? (var_1_78 == ((double) ((var_1_54 - var_1_53) - var_1_43))) : 1))) && (((max (last_1_var_1_81 , var_1_28)) >= var_1_4) ? (var_1_81 == ((unsigned char) (max (var_1_36 , ((var_1_74 - var_1_37) + (var_1_58 + var_1_2)))))) : (var_1_81 == ((unsigned char) ((var_1_36 + var_1_37) + var_1_3))))) && ((var_1_57 <= var_1_56) ? (var_1_82 == ((float) var_1_43)) : (var_1_82 == ((float) (var_1_10 - (min ((var_1_54 - var_1_53) , (var_1_11 - var_1_12)))))))) && (((var_1_13 * (- var_1_40)) != (min (var_1_40 , (var_1_99 - var_1_13)))) ? (var_1_83 == ((float) ((abs (var_1_72)) + var_1_53))) : 1)) && ((var_1_21 && (var_1_20 || (var_1_96 || var_1_22))) ? ((var_1_26 <= ((var_1_12 + var_1_53) - (max (var_1_54 , var_1_44)))) ? (var_1_84 == ((unsigned char) (var_1_36 + (abs (var_1_37))))) : (var_1_84 == ((unsigned char) (var_1_86 - var_1_3)))) : ((var_1_5 > (15.9 / (max (var_1_80 , var_1_52)))) ? (((var_1_109 ^ var_1_66) > var_1_24) ? (var_1_84 == ((unsigned char) (min ((var_1_63 - var_1_4) , ((var_1_66 - var_1_36) - var_1_37))))) : (var_1_84 == ((unsigned char) var_1_37))) : (var_1_84 == ((unsigned char) (var_1_58 + ((var_1_37 + var_1_87) + var_1_2))))))) && (var_1_22 ? ((var_1_73 < var_1_38) ? ((var_1_22 || var_1_107) ? (((var_1_58 * var_1_40) == var_1_111) ? (var_1_88 == ((signed char) (-5 + (var_1_37 + (max (1 , var_1_39)))))) : (var_1_88 == ((signed char) (min (var_1_38 , (min (var_1_57 , var_1_87))))))) : (var_1_88 == ((signed char) ((var_1_91 - (var_1_58 + 2)) - (var_1_92 + (var_1_87 + var_1_37)))))) : (var_1_88 == ((signed char) (var_1_36 - var_1_91)))) : (var_1_88 == ((signed char) ((var_1_87 - var_1_36) + (var_1_37 + var_1_58)))))) && ((var_1_75 == (max (1.8f , var_1_50))) ? (var_1_93 == ((unsigned short int) (min (var_1_98 , (var_1_61 + var_1_66))))) : (var_1_93 == ((unsigned short int) (var_1_109 + (abs (var_1_91))))))) && (var_1_96 ? (var_1_94 == ((float) var_1_44)) : 1)) && (var_1_46 ? (var_1_95 == ((unsigned char) var_1_3)) : (var_1_95 == ((unsigned char) var_1_86)))) && (var_1_96 == ((unsigned char) var_1_19))) && (var_1_97 == ((float) var_1_44))) && (var_1_18 ? (var_1_98 == ((unsigned char) var_1_63)) : (var_1_98 == ((unsigned char) var_1_58)))) && (var_1_107 ? (var_1_99 == ((signed long int) last_1_var_1_99)) : 1)) && (var_1_22 ? (var_1_100 == ((double) 8.5)) : (var_1_100 == ((double) var_1_11)))) && (var_1_101 == ((float) var_1_72))) && (var_1_18 ? (var_1_102 == ((unsigned long int) 256u)) : 1)) && (var_1_46 ? (var_1_103 == ((unsigned short int) var_1_104)) : (var_1_103 == ((unsigned short int) var_1_57)))) && (var_1_105 == ((unsigned char) var_1_3))) && (var_1_18 ? (var_1_106 == ((signed long int) var_1_61)) : 1)) && (var_1_107 == ((unsigned char) var_1_47))) && (var_1_46 ? (var_1_108 == ((unsigned char) var_1_36)) : (var_1_108 == ((unsigned char) var_1_91)))) && (var_1_109 == ((unsigned long int) var_1_87))) && (var_1_18 ? (var_1_110 == ((unsigned char) var_1_4)) : 1)) && ((var_1_51 <= var_1_53) ? (((var_1_91 * 128u) < ((5u << var_1_17) / (var_1_41 - var_1_16))) ? (var_1_111 == ((unsigned long int) var_1_4)) : (var_1_111 == ((unsigned long int) 0u))) : (var_1_111 == ((unsigned long int) var_1_67)))
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
