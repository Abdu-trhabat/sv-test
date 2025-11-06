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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
signed char var_1_8 = 1;
signed char var_1_9 = 32;
signed char var_1_10 = 5;
signed char var_1_11 = 2;
signed char var_1_12 = -100;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 32;
double var_1_17 = 7.35;
signed char var_1_18 = -32;
unsigned char var_1_19 = 200;
unsigned char var_1_20 = 5;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 128;
signed char var_1_23 = -50;
signed char var_1_24 = -10;
unsigned char var_1_25 = 1;
signed char var_1_26 = 100;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
signed char var_1_32 = 0;
signed char var_1_33 = -16;
unsigned long int var_1_34 = 32;
signed short int var_1_35 = 1;
unsigned long int var_1_36 = 2780765019;
signed long int var_1_37 = 5;
unsigned long int var_1_38 = 8;
unsigned long int var_1_39 = 1000000000;
unsigned short int var_1_40 = 0;
signed char var_1_41 = 64;
unsigned short int var_1_42 = 16923;
signed long int var_1_43 = -128;
double var_1_44 = 16.85;
double var_1_45 = 127.5;
double var_1_46 = 4.356;
double var_1_47 = 0.19999999999999996;
double var_1_48 = 25.6;
double var_1_49 = 1.75;
unsigned char var_1_50 = 0;
signed long int var_1_51 = 0;
double var_1_52 = 15.8;
double var_1_53 = 32.5;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 0;
unsigned short int var_1_56 = 2;
unsigned long int var_1_57 = 8;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
double var_1_60 = 8.75;
signed char var_1_61 = -5;
unsigned short int var_1_62 = 256;
unsigned short int var_1_63 = 61099;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 1;
unsigned long int var_1_66 = 10;
float var_1_68 = 100000000000.375;
unsigned long int var_1_69 = 2095501426;
unsigned long int var_1_70 = 1802250083;
unsigned char var_1_71 = 10;
double var_1_72 = 128.75;
double var_1_73 = 128.25;
double var_1_74 = 127.6;
double var_1_75 = 255.875;
signed char var_1_76 = -8;
unsigned char var_1_77 = 0;
signed short int var_1_79 = -4;
unsigned short int var_1_80 = 100;
unsigned char var_1_81 = 0;
signed char var_1_83 = 5;
unsigned short int var_1_84 = 128;
unsigned char var_1_85 = 0;
unsigned short int var_1_87 = 5;
signed short int var_1_88 = 128;
unsigned char var_1_89 = 0;
unsigned char var_1_91 = 64;
signed short int var_1_92 = -256;
unsigned char var_1_93 = 100;
double var_1_94 = 255.75;
unsigned char var_1_95 = 64;
float var_1_96 = 7.5;
unsigned short int var_1_97 = 2;
signed long int var_1_98 = 4;
unsigned char var_1_99 = 100;
unsigned long int var_1_100 = 0;
signed char var_1_101 = 25;
unsigned short int var_1_102 = 50;
float var_1_103 = 8.6;
unsigned long int var_1_104 = 10;
signed char var_1_105 = 10;
double var_1_106 = 3.95;
unsigned char var_1_107 = 1;
signed long int var_1_108 = -50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_13 = 0;
unsigned long int last_1_var_1_34 = 32;
double last_1_var_1_52 = 15.8;
unsigned long int last_1_var_1_66 = 10;
signed short int last_1_var_1_88 = 128;
unsigned char last_1_var_1_93 = 100;
double last_1_var_1_94 = 255.75;
double last_1_var_1_106 = 3.95;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req27Batch86Amount500
	if (last_1_var_1_106 >= var_1_17) {
		if ((last_1_var_1_93 - var_1_42) <= -5) {
			if (! last_1_var_1_13) {
				var_1_64 = (! (var_1_28 || (var_1_27 || var_1_15)));
			} else {
				var_1_64 = (! (var_1_14 && var_1_15));
			}
		} else {
			var_1_64 = (! var_1_30);
		}
	} else {
		if (last_1_var_1_94 > var_1_47) {
			if (var_1_55 == last_1_var_1_88) {
				if (var_1_31) {
					var_1_64 = ((last_1_var_1_52 >= var_1_17) || var_1_65);
				} else {
					var_1_64 = (var_1_65 || var_1_14);
				}
			} else {
				var_1_64 = (var_1_65 && var_1_29);
			}
		} else {
			var_1_64 = ((var_1_29 && var_1_14) && ((var_1_17 != last_1_var_1_106) || var_1_30));
		}
	}


	// From: Req44Batch86Amount500
	if (var_1_64) {
		var_1_95 = var_1_7;
	} else {
		var_1_95 = var_1_11;
	}


	// From: Req53Batch86Amount500
	var_1_104 = var_1_95;


	// From: Req5Batch86Amount500
	signed char stepLocal_4 = var_1_7;
	if (stepLocal_4 >= (var_1_9 - var_1_11)) {
		var_1_20 = (min (var_1_10 , (200 - var_1_11)));
	} else {
		var_1_20 = (var_1_21 - var_1_11);
	}


	// From: Req7Batch86Amount500
	if (500u <= var_1_95) {
		var_1_23 = var_1_24;
	} else {
		var_1_23 = (max ((var_1_6 - var_1_7) , var_1_19));
	}


	// From: Req9Batch86Amount500
	signed char stepLocal_11 = var_1_8;
	unsigned char stepLocal_10 = var_1_15;
	signed char stepLocal_9 = var_1_11;
	if (var_1_27 || stepLocal_10) {
		if ((var_1_19 / var_1_26) > stepLocal_9) {
			if (stepLocal_11 >= var_1_11) {
				var_1_32 = (var_1_10 + (min (var_1_8 , (var_1_33 + -10))));
			} else {
				var_1_32 = ((max (var_1_8 , var_1_7)) + var_1_33);
			}
		}
	}


	// From: Req14Batch86Amount500
	var_1_43 = (max (var_1_19 , 5));


	// From: Req17Batch86Amount500
	if ((max (var_1_46 , (var_1_47 / -0.16))) <= var_1_49) {
		var_1_51 = (var_1_10 - var_1_6);
	}


	// From: Req18Batch86Amount500
	var_1_52 = (max (var_1_48 , (var_1_49 + var_1_53)));


	// From: Req19Batch86Amount500
	if (var_1_7 > (var_1_12 * 64)) {
		var_1_54 = (! var_1_30);
	} else {
		if (((abs (var_1_39)) << (abs (var_1_55))) <= ((100000u % var_1_26) << 5u)) {
			var_1_54 = var_1_30;
		}
	}


	// From: Req20Batch86Amount500
	if (var_1_15) {
		var_1_56 = (max (var_1_11 , var_1_7));
	} else {
		var_1_56 = var_1_19;
	}


	// From: Req24Batch86Amount500
	if (var_1_30) {
		var_1_60 = (var_1_53 + var_1_48);
	} else {
		var_1_60 = (var_1_45 - var_1_46);
	}


	// From: Req25Batch86Amount500
	if (var_1_54) {
		var_1_61 = var_1_9;
	} else {
		var_1_61 = ((var_1_33 + var_1_35) + (min (var_1_7 , var_1_55)));
	}


	// From: Req29Batch86Amount500
	var_1_71 = ((var_1_35 + 1) + var_1_7);


	// From: Req36Batch86Amount500
	signed long int stepLocal_33 = -4;
	unsigned long int stepLocal_32 = 64u / var_1_63;
	unsigned long int stepLocal_31 = var_1_70 / (var_1_84 + var_1_42);
	if (var_1_63 <= stepLocal_31) {
		if (stepLocal_32 < var_1_6) {
			var_1_83 = (var_1_6 - (var_1_10 + (min (var_1_55 , var_1_7))));
		}
	} else {
		if ((var_1_6 - var_1_7) > stepLocal_33) {
			var_1_83 = (min (var_1_35 , var_1_9));
		}
	}


	// From: Req38Batch86Amount500
	if (var_1_31 || var_1_30) {
		var_1_87 = ((var_1_9 + var_1_19) + (max (5 , 1)));
	}


	// From: Req41Batch86Amount500
	var_1_92 = ((max (var_1_41 , var_1_10)) - var_1_6);


	// From: Req42Batch86Amount500
	signed long int stepLocal_35 = var_1_11 + (max (var_1_20 , var_1_42));
	if (stepLocal_35 > 8) {
		var_1_93 = (abs (var_1_41));
	}


	// From: Req43Batch86Amount500
	if (var_1_65) {
		var_1_94 = var_1_17;
	} else {
		var_1_94 = var_1_73;
	}


	// From: Req45Batch86Amount500
	if (var_1_54) {
		var_1_96 = var_1_75;
	} else {
		var_1_96 = var_1_48;
	}


	// From: Req47Batch86Amount500
	if (var_1_31) {
		var_1_98 = var_1_93;
	}


	// From: Req48Batch86Amount500
	var_1_99 = 25;


	// From: Req49Batch86Amount500
	var_1_100 = var_1_19;


	// From: Req50Batch86Amount500
	var_1_101 = var_1_11;


	// From: Req51Batch86Amount500
	if (var_1_54) {
		var_1_102 = var_1_42;
	} else {
		var_1_102 = 0;
	}


	// From: Req52Batch86Amount500
	if (var_1_65) {
		var_1_103 = var_1_53;
	}


	// From: Req54Batch86Amount500
	if (var_1_31) {
		var_1_105 = var_1_11;
	}


	// From: Req55Batch86Amount500
	var_1_106 = (min ((var_1_17 - (25.375 + var_1_73)) , var_1_53));


	// From: Req56Batch86Amount500
	var_1_107 = var_1_29;


	// From: Req34Batch86Amount500
	if (var_1_15 && var_1_107) {
		if ((var_1_104 + var_1_6) >= var_1_104) {
			var_1_80 = 32;
		} else {
			var_1_80 = (min ((max (4 , var_1_7)) , var_1_9));
		}
	} else {
		var_1_80 = (256 + (var_1_42 - var_1_6));
	}


	// From: Req11Batch86Amount500
	unsigned char stepLocal_14 = var_1_30;
	if (var_1_15 || stepLocal_14) {
		var_1_37 = (min (var_1_6 , var_1_80));
	}


	// From: Req57Batch86Amount500
	var_1_108 = var_1_80;


	// From: Req3Batch86Amount500
	unsigned char stepLocal_0 = var_1_14;
	if (var_1_15 || stepLocal_0) {
		var_1_16 = var_1_11;
	} else {
		if (var_1_94 < ((6.736414387757392E18 - var_1_17) - (4.920824164553118E18 - 24.5))) {
			var_1_16 = (32 + (64 - var_1_9));
		}
	}


	// From: Req6Batch86Amount500
	if ((var_1_10 / (min (var_1_21 , var_1_19))) > var_1_71) {
		var_1_22 = (abs (var_1_6));
	} else {
		var_1_22 = (max (((64 - var_1_7) + var_1_10) , var_1_9));
	}


	// From: Req10Batch86Amount500
	signed char stepLocal_13 = var_1_9;
	signed long int stepLocal_12 = var_1_20 / (abs (var_1_26));
	if (stepLocal_13 >= (var_1_6 >> var_1_35)) {
		var_1_34 = (var_1_36 - (var_1_99 + (max (var_1_10 , var_1_20))));
	} else {
		if (last_1_var_1_34 >= stepLocal_12) {
			var_1_34 = (min (var_1_21 , var_1_9));
		} else {
			var_1_34 = var_1_35;
		}
	}


	// From: Req12Batch86Amount500
	signed long int stepLocal_15 = var_1_43;
	if (var_1_60 != (var_1_17 + var_1_94)) {
		var_1_38 = (var_1_104 + ((var_1_39 - var_1_19) + var_1_11));
	} else {
		if (stepLocal_15 > var_1_37) {
			var_1_38 = (var_1_6 + var_1_39);
		} else {
			var_1_38 = (min (var_1_7 , (abs (abs (var_1_39)))));
		}
	}


	// From: Req22Batch86Amount500
	signed long int stepLocal_23 = (var_1_41 + var_1_43) + (var_1_6 - var_1_55);
	if ((var_1_35 | var_1_93) <= stepLocal_23) {
		var_1_58 = ((var_1_35 > var_1_41) || var_1_14);
	}


	// From: Req26Batch86Amount500
	if (var_1_55 >= var_1_9) {
		var_1_62 = (var_1_63 - var_1_11);
	} else {
		if (var_1_46 == var_1_17) {
			var_1_62 = (max (((var_1_71 + 2) + var_1_55) , var_1_41));
		}
	}


	// From: Req28Batch86Amount500
	if (var_1_28) {
		if (var_1_31) {
			if (var_1_29 || ((var_1_53 / var_1_68) <= var_1_106)) {
				var_1_66 = var_1_26;
			}
		} else {
			var_1_66 = (max (8u , var_1_42));
		}
	} else {
		if (var_1_10 != last_1_var_1_66) {
			var_1_66 = ((var_1_69 + var_1_70) - (max (var_1_71 , (var_1_56 + var_1_7))));
		}
	}


	// From: Req30Batch86Amount500
	unsigned char stepLocal_27 = var_1_31;
	unsigned long int stepLocal_26 = var_1_34;
	unsigned long int stepLocal_25 = var_1_6 + 100u;
	if (var_1_27 || stepLocal_27) {
		if (stepLocal_26 < (var_1_51 + var_1_98)) {
			if ((var_1_34 * 100000000) < stepLocal_25) {
				var_1_72 = (var_1_48 + (min (var_1_53 , var_1_49)));
			} else {
				var_1_72 = (max (var_1_48 , (var_1_49 + var_1_53)));
			}
		} else {
			var_1_72 = (var_1_53 + ((var_1_73 + var_1_74) - var_1_75));
		}
	} else {
		var_1_72 = (max ((max ((var_1_73 + var_1_74) , 3.75)) , var_1_47));
	}


	// From: Req31Batch86Amount500
	if (var_1_93 > ((var_1_98 * var_1_22) + var_1_26)) {
		var_1_76 = (abs (var_1_10 - var_1_35));
	} else {
		if ((var_1_72 * var_1_106) < var_1_45) {
			var_1_76 = var_1_35;
		} else {
			var_1_76 = (var_1_7 - var_1_55);
		}
	}


	// From: Req32Batch86Amount500
	unsigned long int stepLocal_28 = var_1_104;
	if ((var_1_11 / (var_1_69 + var_1_70)) >= stepLocal_28) {
		var_1_77 = ((var_1_101 < var_1_6) || (! (! var_1_14)));
	}


	// From: Req35Batch86Amount500
	unsigned char stepLocal_30 = var_1_31;
	signed char stepLocal_29 = var_1_11;
	if (stepLocal_30 || ((- var_1_53) > var_1_48)) {
		var_1_81 = var_1_27;
	} else {
		if (var_1_66 > stepLocal_29) {
			var_1_81 = (! (var_1_65 && (var_1_58 || var_1_31)));
		} else {
			var_1_81 = (var_1_31 && (! (var_1_15 || var_1_27)));
		}
	}


	// From: Req37Batch86Amount500
	if (var_1_49 != var_1_48) {
		if (! var_1_77) {
			var_1_85 = (! var_1_31);
		} else {
			var_1_85 = 0;
		}
	} else {
		var_1_85 = var_1_31;
	}


	// From: Req40Batch86Amount500
	unsigned long int stepLocal_34 = var_1_69;
	if (stepLocal_34 > var_1_38) {
		var_1_89 = (var_1_21 - var_1_6);
	} else {
		var_1_89 = (min (((var_1_26 + var_1_91) - var_1_9) , var_1_10));
	}


	// From: Req46Batch86Amount500
	if (var_1_85) {
		var_1_97 = var_1_63;
	} else {
		var_1_97 = var_1_56;
	}


	// From: Req16Batch86Amount500
	if (! var_1_29) {
		if ((var_1_37 == (min (var_1_34 , var_1_16))) && var_1_28) {
			var_1_50 = (var_1_14 && var_1_30);
		} else {
			var_1_50 = ((var_1_28 || (var_1_107 && var_1_15)) || var_1_27);
		}
	} else {
		var_1_50 = (var_1_27 || var_1_15);
	}


	// From: Req39Batch86Amount500
	var_1_88 = (4 - (var_1_41 + var_1_108));


	// From: Req1Batch86Amount500
	if (! (var_1_54 || (var_1_60 > var_1_94))) {
		if (var_1_54) {
			if (var_1_58) {
				var_1_1 = (abs ((var_1_6 - var_1_7) + var_1_8));
			} else {
				var_1_1 = (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)));
			}
		} else {
			var_1_1 = var_1_12;
		}
	} else {
		var_1_1 = (var_1_9 - (min (var_1_11 , var_1_7)));
	}


	// From: Req4Batch86Amount500
	signed char stepLocal_3 = var_1_12;
	signed long int stepLocal_2 = var_1_7 * var_1_10;
	unsigned char stepLocal_1 = var_1_20;
	if (var_1_20 < stepLocal_2) {
		if (stepLocal_1 <= ((var_1_19 - var_1_10) - var_1_11)) {
			if (stepLocal_3 < (var_1_6 - (max (var_1_11 , var_1_10)))) {
				if (var_1_58) {
					var_1_18 = var_1_9;
				} else {
					var_1_18 = var_1_11;
				}
			}
		}
	}


	// From: Req8Batch86Amount500
	signed long int stepLocal_8 = var_1_24 / var_1_26;
	unsigned char stepLocal_7 = var_1_89;
	signed long int stepLocal_6 = (var_1_26 - 5) << var_1_62;
	unsigned char stepLocal_5 = var_1_21;
	if (stepLocal_7 == var_1_24) {
		if (var_1_6 >= stepLocal_6) {
			var_1_25 = (var_1_15 || (! (var_1_27 || var_1_28)));
		} else {
			var_1_25 = ((! var_1_15) && var_1_14);
		}
	} else {
		if (var_1_17 <= var_1_94) {
			var_1_25 = ((var_1_14 && (var_1_29 && var_1_30)) && (var_1_31 && (! var_1_15)));
		} else {
			if (stepLocal_5 != var_1_6) {
				if (stepLocal_8 <= var_1_76) {
					var_1_25 = (var_1_30 && var_1_29);
				} else {
					var_1_25 = (((var_1_9 - var_1_7) > var_1_10) && var_1_27);
				}
			}
		}
	}


	// From: Req13Batch86Amount500
	signed long int stepLocal_21 = 128;
	unsigned char stepLocal_20 = var_1_31;
	unsigned long int stepLocal_19 = var_1_104;
	signed long int stepLocal_18 = var_1_37;
	signed long int stepLocal_17 = var_1_26 - var_1_41;
	unsigned char stepLocal_16 = var_1_99;
	if (stepLocal_19 >= var_1_9) {
		var_1_40 = (abs (var_1_6));
	} else {
		if (var_1_81 && stepLocal_20) {
			if (var_1_6 <= stepLocal_18) {
				var_1_40 = (max ((var_1_6 + (min (var_1_99 , var_1_35))) , var_1_11));
			} else {
				if (var_1_37 != stepLocal_21) {
					if (var_1_8 <= stepLocal_17) {
						var_1_40 = (max (var_1_19 , var_1_26));
					} else {
						if (var_1_21 <= stepLocal_16) {
							var_1_40 = (var_1_99 + (var_1_42 - var_1_11));
						} else {
							var_1_40 = var_1_7;
						}
					}
				} else {
					var_1_40 = var_1_9;
				}
			}
		} else {
			var_1_40 = var_1_9;
		}
	}


	// From: Req15Batch86Amount500
	unsigned long int stepLocal_22 = var_1_100;
	if (var_1_12 >= stepLocal_22) {
		if (var_1_72 <= var_1_17) {
			var_1_44 = ((min (var_1_17 , var_1_45)) - var_1_46);
		} else {
			if (! var_1_30) {
				var_1_44 = var_1_47;
			} else {
				var_1_44 = (var_1_48 + var_1_49);
			}
		}
	}


	// From: Req21Batch86Amount500
	if (var_1_85) {
		var_1_57 = (abs (5u));
	} else {
		if (var_1_14) {
			var_1_57 = (var_1_36 - 32u);
		}
	}


	// From: Req23Batch86Amount500
	unsigned long int stepLocal_24 = max (4 , var_1_66);
	if (var_1_19 <= stepLocal_24) {
		var_1_59 = var_1_28;
	} else {
		var_1_59 = var_1_31;
	}


	// From: Req33Batch86Amount500
	if (! (var_1_14 || var_1_25)) {
		var_1_79 = (max (var_1_21 , (abs (var_1_95))));
	} else {
		var_1_79 = (min (var_1_92 , var_1_18));
	}


	// From: Req2Batch86Amount500
	if (! (var_1_12 <= (var_1_6 - var_1_10))) {
		if (! var_1_50) {
			var_1_13 = (! (var_1_64 || (var_1_50 || var_1_14)));
		} else {
			if (var_1_10 > var_1_11) {
				var_1_13 = 0;
			} else {
				if (var_1_64) {
					var_1_13 = var_1_14;
				} else {
					var_1_13 = var_1_15;
				}
			}
		}
	} else {
		if (var_1_14) {
			var_1_13 = var_1_15;
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427388000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 191);
	assume_abort_if_not(var_1_19 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 32);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 6);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 2147483647);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 536870912);
	assume_abort_if_not(var_1_39 <= 1073741824);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 16383);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 32767);
	assume_abort_if_not(var_1_63 <= 65534);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
	assume_abort_if_not(var_1_68 != 0.0F);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741823);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 1073741824);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 32768);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 64);
	assume_abort_if_not(var_1_91 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((! (var_1_54 || (var_1_60 > var_1_94))) ? (var_1_54 ? (var_1_58 ? (var_1_1 == ((signed char) (abs ((var_1_6 - var_1_7) + var_1_8)))) : (var_1_1 == ((signed char) (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)))))) : (var_1_1 == ((signed char) var_1_12))) : (var_1_1 == ((signed char) (var_1_9 - (min (var_1_11 , var_1_7)))))) && ((! (var_1_12 <= (var_1_6 - var_1_10))) ? ((! var_1_50) ? (var_1_13 == ((unsigned char) (! (var_1_64 || (var_1_50 || var_1_14))))) : ((var_1_10 > var_1_11) ? (var_1_13 == ((unsigned char) 0)) : (var_1_64 ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_15))))) : (var_1_14 ? (var_1_13 == ((unsigned char) var_1_15)) : 1))) && ((var_1_15 || var_1_14) ? (var_1_16 == ((unsigned char) var_1_11)) : ((var_1_94 < ((6.736414387757392E18 - var_1_17) - (4.920824164553118E18 - 24.5))) ? (var_1_16 == ((unsigned char) (32 + (64 - var_1_9)))) : 1))) && ((var_1_20 < (var_1_7 * var_1_10)) ? ((var_1_20 <= ((var_1_19 - var_1_10) - var_1_11)) ? ((var_1_12 < (var_1_6 - (max (var_1_11 , var_1_10)))) ? (var_1_58 ? (var_1_18 == ((signed char) var_1_9)) : (var_1_18 == ((signed char) var_1_11))) : 1) : 1) : 1)) && ((var_1_7 >= (var_1_9 - var_1_11)) ? (var_1_20 == ((unsigned char) (min (var_1_10 , (200 - var_1_11))))) : (var_1_20 == ((unsigned char) (var_1_21 - var_1_11))))) && (((var_1_10 / (min (var_1_21 , var_1_19))) > var_1_71) ? (var_1_22 == ((unsigned char) (abs (var_1_6)))) : (var_1_22 == ((unsigned char) (max (((64 - var_1_7) + var_1_10) , var_1_9)))))) && ((500u <= var_1_95) ? (var_1_23 == ((signed char) var_1_24)) : (var_1_23 == ((signed char) (max ((var_1_6 - var_1_7) , var_1_19)))))) && ((var_1_89 == var_1_24) ? ((var_1_6 >= ((var_1_26 - 5) << var_1_62)) ? (var_1_25 == ((unsigned char) (var_1_15 || (! (var_1_27 || var_1_28))))) : (var_1_25 == ((unsigned char) ((! var_1_15) && var_1_14)))) : ((var_1_17 <= var_1_94) ? (var_1_25 == ((unsigned char) ((var_1_14 && (var_1_29 && var_1_30)) && (var_1_31 && (! var_1_15))))) : ((var_1_21 != var_1_6) ? (((var_1_24 / var_1_26) <= var_1_76) ? (var_1_25 == ((unsigned char) (var_1_30 && var_1_29))) : (var_1_25 == ((unsigned char) (((var_1_9 - var_1_7) > var_1_10) && var_1_27)))) : 1)))) && ((var_1_27 || var_1_15) ? (((var_1_19 / var_1_26) > var_1_11) ? ((var_1_8 >= var_1_11) ? (var_1_32 == ((signed char) (var_1_10 + (min (var_1_8 , (var_1_33 + -10)))))) : (var_1_32 == ((signed char) ((max (var_1_8 , var_1_7)) + var_1_33)))) : 1) : 1)) && ((var_1_9 >= (var_1_6 >> var_1_35)) ? (var_1_34 == ((unsigned long int) (var_1_36 - (var_1_99 + (max (var_1_10 , var_1_20)))))) : ((last_1_var_1_34 >= (var_1_20 / (abs (var_1_26)))) ? (var_1_34 == ((unsigned long int) (min (var_1_21 , var_1_9)))) : (var_1_34 == ((unsigned long int) var_1_35))))) && ((var_1_15 || var_1_30) ? (var_1_37 == ((signed long int) (min (var_1_6 , var_1_80)))) : 1)) && ((var_1_60 != (var_1_17 + var_1_94)) ? (var_1_38 == ((unsigned long int) (var_1_104 + ((var_1_39 - var_1_19) + var_1_11)))) : ((var_1_43 > var_1_37) ? (var_1_38 == ((unsigned long int) (var_1_6 + var_1_39))) : (var_1_38 == ((unsigned long int) (min (var_1_7 , (abs (abs (var_1_39)))))))))) && ((var_1_104 >= var_1_9) ? (var_1_40 == ((unsigned short int) (abs (var_1_6)))) : ((var_1_81 && var_1_31) ? ((var_1_6 <= var_1_37) ? (var_1_40 == ((unsigned short int) (max ((var_1_6 + (min (var_1_99 , var_1_35))) , var_1_11)))) : ((var_1_37 != 128) ? ((var_1_8 <= (var_1_26 - var_1_41)) ? (var_1_40 == ((unsigned short int) (max (var_1_19 , var_1_26)))) : ((var_1_21 <= var_1_99) ? (var_1_40 == ((unsigned short int) (var_1_99 + (var_1_42 - var_1_11)))) : (var_1_40 == ((unsigned short int) var_1_7)))) : (var_1_40 == ((unsigned short int) var_1_9)))) : (var_1_40 == ((unsigned short int) var_1_9))))) && (var_1_43 == ((signed long int) (max (var_1_19 , 5))))) && ((var_1_12 >= var_1_100) ? ((var_1_72 <= var_1_17) ? (var_1_44 == ((double) ((min (var_1_17 , var_1_45)) - var_1_46))) : ((! var_1_30) ? (var_1_44 == ((double) var_1_47)) : (var_1_44 == ((double) (var_1_48 + var_1_49))))) : 1)) && ((! var_1_29) ? (((var_1_37 == (min (var_1_34 , var_1_16))) && var_1_28) ? (var_1_50 == ((unsigned char) (var_1_14 && var_1_30))) : (var_1_50 == ((unsigned char) ((var_1_28 || (var_1_107 && var_1_15)) || var_1_27)))) : (var_1_50 == ((unsigned char) (var_1_27 || var_1_15))))) && (((max (var_1_46 , (var_1_47 / -0.16))) <= var_1_49) ? (var_1_51 == ((signed long int) (var_1_10 - var_1_6))) : 1)) && (var_1_52 == ((double) (max (var_1_48 , (var_1_49 + var_1_53)))))) && ((var_1_7 > (var_1_12 * 64)) ? (var_1_54 == ((unsigned char) (! var_1_30))) : ((((abs (var_1_39)) << (abs (var_1_55))) <= ((100000u % var_1_26) << 5u)) ? (var_1_54 == ((unsigned char) var_1_30)) : 1))) && (var_1_15 ? (var_1_56 == ((unsigned short int) (max (var_1_11 , var_1_7)))) : (var_1_56 == ((unsigned short int) var_1_19)))) && (var_1_85 ? (var_1_57 == ((unsigned long int) (abs (5u)))) : (var_1_14 ? (var_1_57 == ((unsigned long int) (var_1_36 - 32u))) : 1))) && (((var_1_35 | var_1_93) <= ((var_1_41 + var_1_43) + (var_1_6 - var_1_55))) ? (var_1_58 == ((unsigned char) ((var_1_35 > var_1_41) || var_1_14))) : 1)) && ((var_1_19 <= (max (4 , var_1_66))) ? (var_1_59 == ((unsigned char) var_1_28)) : (var_1_59 == ((unsigned char) var_1_31)))) && (var_1_30 ? (var_1_60 == ((double) (var_1_53 + var_1_48))) : (var_1_60 == ((double) (var_1_45 - var_1_46))))) && (var_1_54 ? (var_1_61 == ((signed char) var_1_9)) : (var_1_61 == ((signed char) ((var_1_33 + var_1_35) + (min (var_1_7 , var_1_55))))))) && ((var_1_55 >= var_1_9) ? (var_1_62 == ((unsigned short int) (var_1_63 - var_1_11))) : ((var_1_46 == var_1_17) ? (var_1_62 == ((unsigned short int) (max (((var_1_71 + 2) + var_1_55) , var_1_41)))) : 1))) && ((last_1_var_1_106 >= var_1_17) ? (((last_1_var_1_93 - var_1_42) <= -5) ? ((! last_1_var_1_13) ? (var_1_64 == ((unsigned char) (! (var_1_28 || (var_1_27 || var_1_15))))) : (var_1_64 == ((unsigned char) (! (var_1_14 && var_1_15))))) : (var_1_64 == ((unsigned char) (! var_1_30)))) : ((last_1_var_1_94 > var_1_47) ? ((var_1_55 == last_1_var_1_88) ? (var_1_31 ? (var_1_64 == ((unsigned char) ((last_1_var_1_52 >= var_1_17) || var_1_65))) : (var_1_64 == ((unsigned char) (var_1_65 || var_1_14)))) : (var_1_64 == ((unsigned char) (var_1_65 && var_1_29)))) : (var_1_64 == ((unsigned char) ((var_1_29 && var_1_14) && ((var_1_17 != last_1_var_1_106) || var_1_30))))))) && (var_1_28 ? (var_1_31 ? ((var_1_29 || ((var_1_53 / var_1_68) <= var_1_106)) ? (var_1_66 == ((unsigned long int) var_1_26)) : 1) : (var_1_66 == ((unsigned long int) (max (8u , var_1_42))))) : ((var_1_10 != last_1_var_1_66) ? (var_1_66 == ((unsigned long int) ((var_1_69 + var_1_70) - (max (var_1_71 , (var_1_56 + var_1_7)))))) : 1))) && (var_1_71 == ((unsigned char) ((var_1_35 + 1) + var_1_7)))) && ((var_1_27 || var_1_31) ? ((var_1_34 < (var_1_51 + var_1_98)) ? (((var_1_34 * 100000000) < (var_1_6 + 100u)) ? (var_1_72 == ((double) (var_1_48 + (min (var_1_53 , var_1_49))))) : (var_1_72 == ((double) (max (var_1_48 , (var_1_49 + var_1_53)))))) : (var_1_72 == ((double) (var_1_53 + ((var_1_73 + var_1_74) - var_1_75))))) : (var_1_72 == ((double) (max ((max ((var_1_73 + var_1_74) , 3.75)) , var_1_47)))))) && ((var_1_93 > ((var_1_98 * var_1_22) + var_1_26)) ? (var_1_76 == ((signed char) (abs (var_1_10 - var_1_35)))) : (((var_1_72 * var_1_106) < var_1_45) ? (var_1_76 == ((signed char) var_1_35)) : (var_1_76 == ((signed char) (var_1_7 - var_1_55)))))) && (((var_1_11 / (var_1_69 + var_1_70)) >= var_1_104) ? (var_1_77 == ((unsigned char) ((var_1_101 < var_1_6) || (! (! var_1_14))))) : 1)) && ((! (var_1_14 || var_1_25)) ? (var_1_79 == ((signed short int) (max (var_1_21 , (abs (var_1_95)))))) : (var_1_79 == ((signed short int) (min (var_1_92 , var_1_18)))))) && ((var_1_15 && var_1_107) ? (((var_1_104 + var_1_6) >= var_1_104) ? (var_1_80 == ((unsigned short int) 32)) : (var_1_80 == ((unsigned short int) (min ((max (4 , var_1_7)) , var_1_9))))) : (var_1_80 == ((unsigned short int) (256 + (var_1_42 - var_1_6)))))) && ((var_1_31 || ((- var_1_53) > var_1_48)) ? (var_1_81 == ((unsigned char) var_1_27)) : ((var_1_66 > var_1_11) ? (var_1_81 == ((unsigned char) (! (var_1_65 && (var_1_58 || var_1_31))))) : (var_1_81 == ((unsigned char) (var_1_31 && (! (var_1_15 || var_1_27)))))))) && ((var_1_63 <= (var_1_70 / (var_1_84 + var_1_42))) ? (((64u / var_1_63) < var_1_6) ? (var_1_83 == ((signed char) (var_1_6 - (var_1_10 + (min (var_1_55 , var_1_7)))))) : 1) : (((var_1_6 - var_1_7) > -4) ? (var_1_83 == ((signed char) (min (var_1_35 , var_1_9)))) : 1))) && ((var_1_49 != var_1_48) ? ((! var_1_77) ? (var_1_85 == ((unsigned char) (! var_1_31))) : (var_1_85 == ((unsigned char) 0))) : (var_1_85 == ((unsigned char) var_1_31)))) && ((var_1_31 || var_1_30) ? (var_1_87 == ((unsigned short int) ((var_1_9 + var_1_19) + (max (5 , 1))))) : 1)) && (var_1_88 == ((signed short int) (4 - (var_1_41 + var_1_108))))) && ((var_1_69 > var_1_38) ? (var_1_89 == ((unsigned char) (var_1_21 - var_1_6))) : (var_1_89 == ((unsigned char) (min (((var_1_26 + var_1_91) - var_1_9) , var_1_10)))))) && (var_1_92 == ((signed short int) ((max (var_1_41 , var_1_10)) - var_1_6)))) && (((var_1_11 + (max (var_1_20 , var_1_42))) > 8) ? (var_1_93 == ((unsigned char) (abs (var_1_41)))) : 1)) && (var_1_65 ? (var_1_94 == ((double) var_1_17)) : (var_1_94 == ((double) var_1_73)))) && (var_1_64 ? (var_1_95 == ((unsigned char) var_1_7)) : (var_1_95 == ((unsigned char) var_1_11)))) && (var_1_54 ? (var_1_96 == ((float) var_1_75)) : (var_1_96 == ((float) var_1_48)))) && (var_1_85 ? (var_1_97 == ((unsigned short int) var_1_63)) : (var_1_97 == ((unsigned short int) var_1_56)))) && (var_1_31 ? (var_1_98 == ((signed long int) var_1_93)) : 1)) && (var_1_99 == ((unsigned char) 25))) && (var_1_100 == ((unsigned long int) var_1_19))) && (var_1_101 == ((signed char) var_1_11))) && (var_1_54 ? (var_1_102 == ((unsigned short int) var_1_42)) : (var_1_102 == ((unsigned short int) 0)))) && (var_1_65 ? (var_1_103 == ((float) var_1_53)) : 1)) && (var_1_104 == ((unsigned long int) var_1_95))) && (var_1_31 ? (var_1_105 == ((signed char) var_1_11)) : 1)) && (var_1_106 == ((double) (min ((var_1_17 - (25.375 + var_1_73)) , var_1_53))))) && (var_1_107 == ((unsigned char) var_1_29))) && (var_1_108 == ((signed long int) var_1_80))
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
