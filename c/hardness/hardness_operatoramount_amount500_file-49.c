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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 16;
signed char var_1_3 = -5;
signed long int var_1_5 = 10;
unsigned short int var_1_6 = 16;
unsigned short int var_1_7 = 128;
unsigned short int var_1_8 = 1;
unsigned short int var_1_9 = 100;
unsigned char var_1_10 = 1;
unsigned long int var_1_12 = 2;
unsigned char var_1_13 = 1;
double var_1_14 = 64.45;
double var_1_17 = 100.625;
double var_1_18 = 8.5;
double var_1_19 = 128.8;
double var_1_20 = 4.04;
double var_1_21 = 200.75;
double var_1_22 = 16.25;
double var_1_23 = 32.95;
signed short int var_1_24 = -8;
signed short int var_1_25 = 256;
unsigned long int var_1_26 = 3164253422;
signed short int var_1_27 = 4;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
double var_1_32 = 63.4;
double var_1_33 = 7.5;
double var_1_34 = 64.5;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 4;
signed char var_1_38 = -5;
signed char var_1_39 = 100;
signed char var_1_40 = 32;
signed char var_1_41 = 64;
signed char var_1_42 = 5;
signed short int var_1_43 = 4;
signed short int var_1_44 = 17131;
signed short int var_1_45 = 28068;
double var_1_46 = 255.5;
unsigned short int var_1_47 = 16;
unsigned short int var_1_48 = 40002;
float var_1_49 = 1.625;
float var_1_50 = 15.75;
double var_1_51 = 256.6;
unsigned char var_1_52 = 4;
unsigned char var_1_55 = 200;
unsigned long int var_1_56 = 10;
unsigned long int var_1_57 = 32;
unsigned long int var_1_58 = 1442074181;
unsigned long int var_1_59 = 128;
unsigned long int var_1_60 = 1732825864;
unsigned char var_1_61 = 4;
unsigned char var_1_62 = 64;
unsigned char var_1_63 = 64;
unsigned short int var_1_64 = 5;
unsigned char var_1_65 = 4;
signed short int var_1_66 = 1;
signed char var_1_67 = -50;
signed long int var_1_68 = -128;
double var_1_70 = -0.25;
double var_1_71 = 7.5;
unsigned short int var_1_72 = 8;
unsigned short int var_1_73 = 32;
unsigned short int var_1_74 = 8;
unsigned short int var_1_75 = 50697;
double var_1_76 = 1.5;
double var_1_78 = 0.0;
double var_1_79 = 8.75;
signed long int var_1_80 = -32;
signed long int var_1_81 = 1593866793;
unsigned short int var_1_83 = 0;
unsigned short int var_1_84 = 22074;
signed short int var_1_85 = 25;
signed short int var_1_86 = 2;
unsigned short int var_1_87 = 256;
unsigned char var_1_88 = 0;
float var_1_89 = 100000000000.5;
float var_1_90 = 9999999999999.6;
signed short int var_1_91 = -500;
signed short int var_1_92 = 8;
unsigned char var_1_93 = 10;
unsigned char var_1_94 = 0;
signed char var_1_95 = 5;
signed long int var_1_96 = -5;
double var_1_97 = 7.6;
unsigned long int var_1_98 = 1000;
double var_1_99 = 128.5;
unsigned char var_1_100 = 1;
signed char var_1_101 = 25;
float var_1_102 = 2.5;
float var_1_103 = 9.397;
signed char var_1_104 = -5;
float var_1_105 = 5.25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_28 = 1;
unsigned char last_1_var_1_30 = 0;
unsigned char last_1_var_1_35 = 1;
unsigned char last_1_var_1_52 = 4;
unsigned long int last_1_var_1_57 = 32;
unsigned short int last_1_var_1_74 = 8;
unsigned short int last_1_var_1_83 = 0;
unsigned char last_1_var_1_88 = 0;
unsigned long int last_1_var_1_98 = 1000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req21Batch49Amount500
	unsigned short int stepLocal_12 = var_1_7;
	unsigned char stepLocal_11 = var_1_58 >= var_1_26;
	unsigned short int stepLocal_10 = var_1_48;
	if (stepLocal_11 && var_1_13) {
		if (var_1_7 >= stepLocal_10) {
			var_1_59 = (var_1_42 + var_1_44);
		} else {
			var_1_59 = (min (last_1_var_1_74 , var_1_25));
		}
	} else {
		if (stepLocal_12 > var_1_42) {
			var_1_59 = ((max ((var_1_58 - var_1_7) , var_1_40)) + (var_1_60 - (max (32u , var_1_9))));
		}
	}


	// From: Req31Batch49Amount500
	unsigned char stepLocal_24 = last_1_var_1_30;
	unsigned char stepLocal_23 = last_1_var_1_28;
	if ((var_1_62 > (max (last_1_var_1_52 , var_1_45))) && stepLocal_24) {
		var_1_80 = (var_1_73 - (var_1_81 - var_1_9));
	} else {
		if (last_1_var_1_30 && stepLocal_23) {
			var_1_80 = (var_1_55 + -1000);
		}
	}


	// From: Req20Batch49Amount500
	unsigned short int stepLocal_9 = var_1_7;
	signed short int stepLocal_8 = var_1_27;
	if (var_1_20 < 127.5) {
		if (stepLocal_8 <= var_1_39) {
			var_1_57 = (min (var_1_80 , (max (var_1_7 , var_1_48))));
		} else {
			if (stepLocal_9 < last_1_var_1_57) {
				var_1_57 = var_1_25;
			} else {
				var_1_57 = (max ((var_1_44 + (var_1_58 - var_1_25)) , var_1_27));
			}
		}
	}


	// From: Req3Batch49Amount500
	if (! last_1_var_1_88) {
		if ((last_1_var_1_98 * (min (var_1_9 , last_1_var_1_57))) >= var_1_5) {
			var_1_10 = var_1_13;
		}
	} else {
		var_1_10 = 0;
	}


	// From: Req45Batch49Amount500
	if (var_1_10) {
		var_1_100 = var_1_31;
	} else {
		var_1_100 = var_1_36;
	}


	// From: Req10Batch49Amount500
	if (last_1_var_1_35) {
		if (var_1_10) {
			var_1_35 = (! var_1_31);
		} else {
			var_1_35 = (var_1_31 && var_1_36);
		}
	}


	// From: Req13Batch49Amount500
	if (var_1_100) {
		var_1_43 = (((min (var_1_44 , var_1_45)) - var_1_40) - var_1_25);
	} else {
		var_1_43 = (abs (var_1_25));
	}


	// From: Req42Batch49Amount500
	if (var_1_100) {
		var_1_97 = var_1_50;
	} else {
		var_1_97 = var_1_23;
	}


	// From: Req2Batch49Amount500
	var_1_6 = (max (25 , ((min (var_1_7 , var_1_8)) + (100 + var_1_9))));


	// From: Req5Batch49Amount500
	if (var_1_10) {
		var_1_19 = (min ((min (var_1_18 , var_1_17)) , (max (var_1_20 , var_1_21))));
	} else {
		var_1_19 = ((max (var_1_22 , 8.5)) - var_1_23);
	}


	// From: Req7Batch49Amount500
	signed short int stepLocal_2 = var_1_25;
	if (stepLocal_2 <= var_1_9) {
		var_1_28 = (! (var_1_13 && var_1_29));
	} else {
		if (var_1_18 < var_1_22) {
			var_1_28 = (var_1_29 && var_1_13);
		}
	}


	// From: Req11Batch49Amount500
	if ((var_1_5 / var_1_3) > var_1_7) {
		if (var_1_10) {
			var_1_37 = (min ((min (var_1_12 , 128)) , var_1_27));
		}
	}


	// From: Req12Batch49Amount500
	if ((var_1_20 / 8.75f) > 8.25) {
		var_1_38 = var_1_27;
	} else {
		var_1_38 = ((var_1_39 - (var_1_40 - var_1_12)) - (var_1_41 - (max (var_1_27 , var_1_42))));
	}


	// From: Req17Batch49Amount500
	var_1_51 = (var_1_23 - var_1_33);


	// From: Req23Batch49Amount500
	signed short int stepLocal_13 = var_1_27;
	if (var_1_63 <= stepLocal_13) {
		var_1_64 = (max ((var_1_48 - (var_1_62 + var_1_80)) , var_1_12));
	} else {
		var_1_64 = (max ((abs (var_1_39)) , (var_1_44 + var_1_8)));
	}


	// From: Req25Batch49Amount500
	var_1_67 = var_1_27;


	// From: Req30Batch49Amount500
	if (var_1_13) {
		if (var_1_31 && var_1_35) {
			var_1_76 = ((max ((var_1_71 - 1.5) , var_1_50)) + var_1_34);
		} else {
			var_1_76 = (var_1_71 + ((max (var_1_33 , var_1_50)) - (var_1_78 - var_1_79)));
		}
	}


	// From: Req36Batch49Amount500
	unsigned short int stepLocal_30 = var_1_84;
	if (var_1_42 > stepLocal_30) {
		var_1_89 = var_1_90;
	}


	// From: Req37Batch49Amount500
	if (var_1_100) {
		var_1_91 = var_1_92;
	}


	// From: Req38Batch49Amount500
	var_1_93 = var_1_39;


	// From: Req39Batch49Amount500
	if (var_1_13) {
		var_1_94 = 2;
	} else {
		var_1_94 = var_1_12;
	}


	// From: Req40Batch49Amount500
	if (var_1_35) {
		var_1_95 = var_1_27;
	} else {
		var_1_95 = var_1_42;
	}


	// From: Req41Batch49Amount500
	if (var_1_35) {
		var_1_96 = var_1_12;
	}


	// From: Req43Batch49Amount500
	if (var_1_29) {
		var_1_98 = var_1_63;
	} else {
		var_1_98 = 5u;
	}


	// From: Req44Batch49Amount500
	var_1_99 = var_1_21;


	// From: Req46Batch49Amount500
	if (var_1_36) {
		var_1_101 = var_1_12;
	} else {
		var_1_101 = var_1_41;
	}


	// From: Req47Batch49Amount500
	var_1_102 = var_1_20;


	// From: Req48Batch49Amount500
	unsigned char stepLocal_31 = var_1_35;
	if (var_1_31 && stepLocal_31) {
		var_1_103 = var_1_22;
	} else {
		var_1_103 = (max (var_1_50 , var_1_17));
	}


	// From: Req49Batch49Amount500
	if (! (var_1_67 < var_1_3)) {
		var_1_104 = var_1_42;
	}


	// From: Req50Batch49Amount500
	if ((var_1_6 < (var_1_43 % var_1_44)) && var_1_10) {
		var_1_105 = var_1_71;
	}


	// From: Req29Batch49Amount500
	if (var_1_29) {
		var_1_74 = (var_1_62 + var_1_42);
	} else {
		if (var_1_44 > var_1_59) {
			if (var_1_71 >= var_1_33) {
				var_1_74 = var_1_7;
			}
		} else {
			if (var_1_36 && ((var_1_44 / var_1_12) >= var_1_60)) {
				var_1_74 = ((max ((var_1_75 - var_1_63) , var_1_48)) - var_1_80);
			}
		}
	}


	// From: Req6Batch49Amount500
	unsigned long int stepLocal_1 = (var_1_26 - var_1_98) * (var_1_8 >> var_1_27);
	if (var_1_10) {
		var_1_24 = ((var_1_3 + var_1_57) + var_1_9);
	} else {
		if (((max (var_1_12 , var_1_9)) - (1 + var_1_25)) != stepLocal_1) {
			if ((var_1_18 + var_1_99) < (- (var_1_23 - var_1_22))) {
				var_1_24 = (var_1_9 - var_1_27);
			} else {
				var_1_24 = (abs (max (var_1_57 , (min (var_1_9 , var_1_3)))));
			}
		} else {
			var_1_24 = (var_1_25 - var_1_9);
		}
	}


	// From: Req16Batch49Amount500
	signed short int stepLocal_6 = var_1_24;
	unsigned long int stepLocal_5 = var_1_12;
	if (-5 < stepLocal_5) {
		if (stepLocal_6 < var_1_42) {
			var_1_49 = (max ((max (10.9f , (var_1_34 + var_1_18))) , (9.45f - var_1_23)));
		}
	} else {
		if (var_1_51 != var_1_23) {
			var_1_49 = (abs (var_1_23));
		} else {
			var_1_49 = ((min ((4.4f - var_1_34) , var_1_18)) + (var_1_33 - var_1_50));
		}
	}


	// From: Req35Batch49Amount500
	if (var_1_27 == (min ((var_1_6 ^ var_1_73) , var_1_58))) {
		if (var_1_10) {
			var_1_88 = (var_1_29 && var_1_13);
		} else {
			var_1_88 = ((var_1_35 && (last_1_var_1_88 && var_1_31)) || var_1_36);
		}
	}


	// From: Req8Batch49Amount500
	if ((~ 5) > (max (var_1_5 , var_1_98))) {
		var_1_30 = ((! var_1_29) || ((var_1_12 < var_1_26) && var_1_31));
	}


	// From: Req24Batch49Amount500
	signed long int stepLocal_15 = (var_1_5 * var_1_45) * var_1_80;
	signed long int stepLocal_14 = abs (var_1_66);
	if (stepLocal_14 < var_1_25) {
		if (var_1_91 > stepLocal_15) {
			var_1_65 = (var_1_55 - (max (var_1_40 , var_1_27)));
		}
	} else {
		var_1_65 = 100;
	}


	// From: Req33Batch49Amount500
	signed long int stepLocal_26 = ~ 8;
	unsigned long int stepLocal_25 = var_1_26;
	if (var_1_22 != (- 127.12)) {
		if (stepLocal_26 <= var_1_75) {
			if (var_1_6 == stepLocal_25) {
				var_1_85 = (abs (1 - var_1_86));
			} else {
				var_1_85 = (var_1_62 + 128);
			}
		} else {
			var_1_85 = ((var_1_45 - (max (100 , var_1_25))) - var_1_41);
		}
	} else {
		var_1_85 = (var_1_65 + var_1_3);
	}


	// From: Req28Batch49Amount500
	unsigned char stepLocal_22 = var_1_30;
	if (stepLocal_22 && var_1_88) {
		var_1_72 = (var_1_48 - var_1_45);
	} else {
		var_1_72 = (var_1_73 + var_1_43);
	}


	// From: Req26Batch49Amount500
	unsigned char stepLocal_18 = var_1_29 && var_1_35;
	signed long int stepLocal_17 = 2;
	unsigned char stepLocal_16 = var_1_30;
	if (var_1_30 || stepLocal_18) {
		var_1_68 = (max (var_1_72 , (var_1_27 + (min (var_1_9 , var_1_5)))));
	} else {
		if (var_1_36 || stepLocal_16) {
			var_1_68 = (var_1_39 + var_1_25);
		} else {
			if (var_1_40 < stepLocal_17) {
				var_1_68 = (min (var_1_6 , var_1_41));
			}
		}
	}


	// From: Req15Batch49Amount500
	if (var_1_36) {
		if (var_1_3 < var_1_44) {
			var_1_47 = (32 + var_1_9);
		}
	} else {
		var_1_47 = (var_1_48 - (max (var_1_12 , var_1_68)));
	}


	// From: Req27Batch49Amount500
	signed long int stepLocal_21 = var_1_68;
	signed char stepLocal_20 = var_1_38;
	unsigned char stepLocal_19 = var_1_36;
	if ((var_1_41 / -32) < stepLocal_21) {
		if (var_1_13) {
			if (stepLocal_20 > var_1_91) {
				var_1_70 = ((var_1_50 + var_1_33) - (max ((var_1_34 + var_1_71) , var_1_22)));
			} else {
				if (stepLocal_19 || var_1_30) {
					var_1_70 = var_1_18;
				} else {
					var_1_70 = var_1_71;
				}
			}
		} else {
			var_1_70 = (min (var_1_34 , var_1_23));
		}
	} else {
		var_1_70 = ((min (16.7 , (max (var_1_23 , var_1_33)))) - (max (var_1_71 , 9.5)));
	}


	// From: Req19Batch49Amount500
	signed short int stepLocal_7 = var_1_45;
	if (stepLocal_7 < var_1_68) {
		var_1_56 = (var_1_12 + var_1_41);
	}


	// From: Req34Batch49Amount500
	unsigned char stepLocal_29 = var_1_13;
	unsigned short int stepLocal_28 = var_1_47;
	unsigned long int stepLocal_27 = - (- var_1_56);
	if (stepLocal_29 || var_1_100) {
		var_1_87 = ((abs (57894)) - (var_1_63 + (max (var_1_62 , var_1_27))));
	} else {
		if ((- var_1_42) > stepLocal_28) {
			if (var_1_12 >= stepLocal_27) {
				if (var_1_34 < var_1_20) {
					var_1_87 = (abs (var_1_47));
				}
			} else {
				var_1_87 = ((max (var_1_48 , var_1_75)) - (min ((var_1_84 - var_1_47) , var_1_8)));
			}
		}
	}


	// From: Req14Batch49Amount500
	if (var_1_70 >= ((- var_1_23) * var_1_20)) {
		var_1_46 = (min (var_1_20 , var_1_17));
	} else {
		if (var_1_35) {
			if ((var_1_34 - 8.25f) >= var_1_76) {
				var_1_46 = (var_1_18 + var_1_33);
			} else {
				var_1_46 = (max ((var_1_18 + var_1_34) , var_1_21));
			}
		} else {
			var_1_46 = var_1_21;
		}
	}


	// From: Req1Batch49Amount500
	signed long int stepLocal_0 = -32 * (var_1_80 / var_1_3);
	if (stepLocal_0 >= var_1_56) {
		var_1_1 = (abs ((-1 + var_1_3) + var_1_5));
	}


	// From: Req32Batch49Amount500
	if ((var_1_98 + var_1_59) < -50) {
		if ((var_1_79 + (var_1_50 / var_1_78)) < var_1_97) {
			var_1_83 = 2;
		}
	} else {
		if ((min (var_1_98 , (max (last_1_var_1_83 , var_1_6)))) >= var_1_66) {
			if (var_1_28) {
				if (var_1_60 < var_1_1) {
					var_1_83 = (abs (var_1_43));
				} else {
					if (var_1_23 >= (max (var_1_51 , (- var_1_71)))) {
						var_1_83 = ((var_1_84 - var_1_41) + var_1_25);
					} else {
						var_1_83 = (min (var_1_25 , var_1_84));
					}
				}
			} else {
				if (var_1_22 >= ((7.642366530783217E18 - var_1_71) - 9.99999998E7)) {
					var_1_83 = ((abs (var_1_75 - var_1_41)) - var_1_8);
				}
			}
		} else {
			var_1_83 = 32;
		}
	}


	// From: Req4Batch49Amount500
	if ((max ((- 9.5f) , (- var_1_51))) < var_1_46) {
		var_1_14 = (min (var_1_17 , (var_1_18 + -0.5)));
	}


	// From: Req9Batch49Amount500
	signed long int stepLocal_4 = var_1_25 + var_1_27;
	unsigned long int stepLocal_3 = (var_1_59 + var_1_9) + var_1_3;
	if (var_1_18 <= var_1_23) {
		var_1_32 = (min (var_1_17 , (var_1_18 + (var_1_33 - var_1_34))));
	} else {
		if (var_1_9 < stepLocal_4) {
			if (stepLocal_3 > var_1_1) {
				if (var_1_100) {
					var_1_32 = var_1_23;
				} else {
					var_1_32 = var_1_20;
				}
			}
		} else {
			var_1_32 = var_1_18;
		}
	}


	// From: Req22Batch49Amount500
	if (! var_1_28) {
		if (var_1_22 < var_1_21) {
			if ((max (var_1_99 , var_1_20)) <= var_1_17) {
				if (var_1_30) {
					var_1_61 = ((var_1_41 + var_1_62) - (min (var_1_39 , var_1_27)));
				} else {
					var_1_61 = (var_1_40 + var_1_39);
				}
			} else {
				if (((max (var_1_1 , var_1_62)) - (var_1_58 - var_1_27)) <= var_1_87) {
					var_1_61 = (max (var_1_40 , var_1_41));
				} else {
					var_1_61 = var_1_27;
				}
			}
		} else {
			if (var_1_36) {
				var_1_61 = (var_1_40 + var_1_12);
			}
		}
	} else {
		var_1_61 = ((var_1_62 + (min (var_1_63 , 64))) - var_1_42);
	}


	// From: Req18Batch49Amount500
	if (var_1_29) {
		if (var_1_83 < var_1_87) {
			var_1_52 = (var_1_40 + var_1_39);
		} else {
			var_1_52 = (min (((max (var_1_27 , var_1_42)) + (100 - var_1_12)) , (var_1_40 + var_1_41)));
		}
	} else {
		if (var_1_30) {
			if (var_1_88) {
				if (64 >= var_1_74) {
					var_1_52 = (var_1_12 + var_1_41);
				}
			}
		} else {
			if ((var_1_48 - (var_1_27 + var_1_42)) != var_1_3) {
				if (((- var_1_49) / (abs (9.307))) != var_1_21) {
					var_1_52 = ((50 + (var_1_40 - 2)) + var_1_27);
				} else {
					var_1_52 = (var_1_55 - var_1_39);
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1073741823);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 15);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 15);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 62);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 31);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 16382);
	assume_abort_if_not(var_1_44 <= 32766);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= 16382);
	assume_abort_if_not(var_1_45 <= 32766);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1073741823);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 64);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 64);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_66 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_66 >= -32767);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 32767);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 49150);
	assume_abort_if_not(var_1_75 <= 65534);
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= 2305843.009213691400e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691400e+12F && var_1_79 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= 1073741823);
	assume_abort_if_not(var_1_81 <= 2147483646);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 16383);
	assume_abort_if_not(var_1_84 <= 32767);
	var_1_86 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 32766);
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= -922337.2036854766000e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854766000e+12F && var_1_90 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_92 >= -32767);
	assume_abort_if_not(var_1_92 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_98 = var_1_98;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((-32 * (var_1_80 / var_1_3)) >= var_1_56) ? (var_1_1 == ((signed long int) (abs ((-1 + var_1_3) + var_1_5)))) : 1) && (var_1_6 == ((unsigned short int) (max (25 , ((min (var_1_7 , var_1_8)) + (100 + var_1_9))))))) && ((! last_1_var_1_88) ? (((last_1_var_1_98 * (min (var_1_9 , last_1_var_1_57))) >= var_1_5) ? (var_1_10 == ((unsigned char) var_1_13)) : 1) : (var_1_10 == ((unsigned char) 0)))) && (((max ((- 9.5f) , (- var_1_51))) < var_1_46) ? (var_1_14 == ((double) (min (var_1_17 , (var_1_18 + -0.5))))) : 1)) && (var_1_10 ? (var_1_19 == ((double) (min ((min (var_1_18 , var_1_17)) , (max (var_1_20 , var_1_21)))))) : (var_1_19 == ((double) ((max (var_1_22 , 8.5)) - var_1_23))))) && (var_1_10 ? (var_1_24 == ((signed short int) ((var_1_3 + var_1_57) + var_1_9))) : ((((max (var_1_12 , var_1_9)) - (1 + var_1_25)) != ((var_1_26 - var_1_98) * (var_1_8 >> var_1_27))) ? (((var_1_18 + var_1_99) < (- (var_1_23 - var_1_22))) ? (var_1_24 == ((signed short int) (var_1_9 - var_1_27))) : (var_1_24 == ((signed short int) (abs (max (var_1_57 , (min (var_1_9 , var_1_3)))))))) : (var_1_24 == ((signed short int) (var_1_25 - var_1_9)))))) && ((var_1_25 <= var_1_9) ? (var_1_28 == ((unsigned char) (! (var_1_13 && var_1_29)))) : ((var_1_18 < var_1_22) ? (var_1_28 == ((unsigned char) (var_1_29 && var_1_13))) : 1))) && (((~ 5) > (max (var_1_5 , var_1_98))) ? (var_1_30 == ((unsigned char) ((! var_1_29) || ((var_1_12 < var_1_26) && var_1_31)))) : 1)) && ((var_1_18 <= var_1_23) ? (var_1_32 == ((double) (min (var_1_17 , (var_1_18 + (var_1_33 - var_1_34)))))) : ((var_1_9 < (var_1_25 + var_1_27)) ? ((((var_1_59 + var_1_9) + var_1_3) > var_1_1) ? (var_1_100 ? (var_1_32 == ((double) var_1_23)) : (var_1_32 == ((double) var_1_20))) : 1) : (var_1_32 == ((double) var_1_18))))) && (last_1_var_1_35 ? (var_1_10 ? (var_1_35 == ((unsigned char) (! var_1_31))) : (var_1_35 == ((unsigned char) (var_1_31 && var_1_36)))) : 1)) && (((var_1_5 / var_1_3) > var_1_7) ? (var_1_10 ? (var_1_37 == ((unsigned char) (min ((min (var_1_12 , 128)) , var_1_27)))) : 1) : 1)) && (((var_1_20 / 8.75f) > 8.25) ? (var_1_38 == ((signed char) var_1_27)) : (var_1_38 == ((signed char) ((var_1_39 - (var_1_40 - var_1_12)) - (var_1_41 - (max (var_1_27 , var_1_42)))))))) && (var_1_100 ? (var_1_43 == ((signed short int) (((min (var_1_44 , var_1_45)) - var_1_40) - var_1_25))) : (var_1_43 == ((signed short int) (abs (var_1_25)))))) && ((var_1_70 >= ((- var_1_23) * var_1_20)) ? (var_1_46 == ((double) (min (var_1_20 , var_1_17)))) : (var_1_35 ? (((var_1_34 - 8.25f) >= var_1_76) ? (var_1_46 == ((double) (var_1_18 + var_1_33))) : (var_1_46 == ((double) (max ((var_1_18 + var_1_34) , var_1_21))))) : (var_1_46 == ((double) var_1_21))))) && (var_1_36 ? ((var_1_3 < var_1_44) ? (var_1_47 == ((unsigned short int) (32 + var_1_9))) : 1) : (var_1_47 == ((unsigned short int) (var_1_48 - (max (var_1_12 , var_1_68))))))) && ((-5 < var_1_12) ? ((var_1_24 < var_1_42) ? (var_1_49 == ((float) (max ((max (10.9f , (var_1_34 + var_1_18))) , (9.45f - var_1_23))))) : 1) : ((var_1_51 != var_1_23) ? (var_1_49 == ((float) (abs (var_1_23)))) : (var_1_49 == ((float) ((min ((4.4f - var_1_34) , var_1_18)) + (var_1_33 - var_1_50))))))) && (var_1_51 == ((double) (var_1_23 - var_1_33)))) && (var_1_29 ? ((var_1_83 < var_1_87) ? (var_1_52 == ((unsigned char) (var_1_40 + var_1_39))) : (var_1_52 == ((unsigned char) (min (((max (var_1_27 , var_1_42)) + (100 - var_1_12)) , (var_1_40 + var_1_41)))))) : (var_1_30 ? (var_1_88 ? ((64 >= var_1_74) ? (var_1_52 == ((unsigned char) (var_1_12 + var_1_41))) : 1) : 1) : (((var_1_48 - (var_1_27 + var_1_42)) != var_1_3) ? ((((- var_1_49) / (abs (9.307))) != var_1_21) ? (var_1_52 == ((unsigned char) ((50 + (var_1_40 - 2)) + var_1_27))) : (var_1_52 == ((unsigned char) (var_1_55 - var_1_39)))) : 1)))) && ((var_1_45 < var_1_68) ? (var_1_56 == ((unsigned long int) (var_1_12 + var_1_41))) : 1)) && ((var_1_20 < 127.5) ? ((var_1_27 <= var_1_39) ? (var_1_57 == ((unsigned long int) (min (var_1_80 , (max (var_1_7 , var_1_48)))))) : ((var_1_7 < last_1_var_1_57) ? (var_1_57 == ((unsigned long int) var_1_25)) : (var_1_57 == ((unsigned long int) (max ((var_1_44 + (var_1_58 - var_1_25)) , var_1_27)))))) : 1)) && (((var_1_58 >= var_1_26) && var_1_13) ? ((var_1_7 >= var_1_48) ? (var_1_59 == ((unsigned long int) (var_1_42 + var_1_44))) : (var_1_59 == ((unsigned long int) (min (last_1_var_1_74 , var_1_25))))) : ((var_1_7 > var_1_42) ? (var_1_59 == ((unsigned long int) ((max ((var_1_58 - var_1_7) , var_1_40)) + (var_1_60 - (max (32u , var_1_9)))))) : 1))) && ((! var_1_28) ? ((var_1_22 < var_1_21) ? (((max (var_1_99 , var_1_20)) <= var_1_17) ? (var_1_30 ? (var_1_61 == ((unsigned char) ((var_1_41 + var_1_62) - (min (var_1_39 , var_1_27))))) : (var_1_61 == ((unsigned char) (var_1_40 + var_1_39)))) : ((((max (var_1_1 , var_1_62)) - (var_1_58 - var_1_27)) <= var_1_87) ? (var_1_61 == ((unsigned char) (max (var_1_40 , var_1_41)))) : (var_1_61 == ((unsigned char) var_1_27)))) : (var_1_36 ? (var_1_61 == ((unsigned char) (var_1_40 + var_1_12))) : 1)) : (var_1_61 == ((unsigned char) ((var_1_62 + (min (var_1_63 , 64))) - var_1_42))))) && ((var_1_63 <= var_1_27) ? (var_1_64 == ((unsigned short int) (max ((var_1_48 - (var_1_62 + var_1_80)) , var_1_12)))) : (var_1_64 == ((unsigned short int) (max ((abs (var_1_39)) , (var_1_44 + var_1_8))))))) && (((abs (var_1_66)) < var_1_25) ? ((var_1_91 > ((var_1_5 * var_1_45) * var_1_80)) ? (var_1_65 == ((unsigned char) (var_1_55 - (max (var_1_40 , var_1_27))))) : 1) : (var_1_65 == ((unsigned char) 100)))) && (var_1_67 == ((signed char) var_1_27))) && ((var_1_30 || (var_1_29 && var_1_35)) ? (var_1_68 == ((signed long int) (max (var_1_72 , (var_1_27 + (min (var_1_9 , var_1_5))))))) : ((var_1_36 || var_1_30) ? (var_1_68 == ((signed long int) (var_1_39 + var_1_25))) : ((var_1_40 < 2) ? (var_1_68 == ((signed long int) (min (var_1_6 , var_1_41)))) : 1)))) && (((var_1_41 / -32) < var_1_68) ? (var_1_13 ? ((var_1_38 > var_1_91) ? (var_1_70 == ((double) ((var_1_50 + var_1_33) - (max ((var_1_34 + var_1_71) , var_1_22))))) : ((var_1_36 || var_1_30) ? (var_1_70 == ((double) var_1_18)) : (var_1_70 == ((double) var_1_71)))) : (var_1_70 == ((double) (min (var_1_34 , var_1_23))))) : (var_1_70 == ((double) ((min (16.7 , (max (var_1_23 , var_1_33)))) - (max (var_1_71 , 9.5))))))) && ((var_1_30 && var_1_88) ? (var_1_72 == ((unsigned short int) (var_1_48 - var_1_45))) : (var_1_72 == ((unsigned short int) (var_1_73 + var_1_43))))) && (var_1_29 ? (var_1_74 == ((unsigned short int) (var_1_62 + var_1_42))) : ((var_1_44 > var_1_59) ? ((var_1_71 >= var_1_33) ? (var_1_74 == ((unsigned short int) var_1_7)) : 1) : ((var_1_36 && ((var_1_44 / var_1_12) >= var_1_60)) ? (var_1_74 == ((unsigned short int) ((max ((var_1_75 - var_1_63) , var_1_48)) - var_1_80))) : 1)))) && (var_1_13 ? ((var_1_31 && var_1_35) ? (var_1_76 == ((double) ((max ((var_1_71 - 1.5) , var_1_50)) + var_1_34))) : (var_1_76 == ((double) (var_1_71 + ((max (var_1_33 , var_1_50)) - (var_1_78 - var_1_79)))))) : 1)) && (((var_1_62 > (max (last_1_var_1_52 , var_1_45))) && last_1_var_1_30) ? (var_1_80 == ((signed long int) (var_1_73 - (var_1_81 - var_1_9)))) : ((last_1_var_1_30 && last_1_var_1_28) ? (var_1_80 == ((signed long int) (var_1_55 + -1000))) : 1))) && (((var_1_98 + var_1_59) < -50) ? (((var_1_79 + (var_1_50 / var_1_78)) < var_1_97) ? (var_1_83 == ((unsigned short int) 2)) : 1) : (((min (var_1_98 , (max (last_1_var_1_83 , var_1_6)))) >= var_1_66) ? (var_1_28 ? ((var_1_60 < var_1_1) ? (var_1_83 == ((unsigned short int) (abs (var_1_43)))) : ((var_1_23 >= (max (var_1_51 , (- var_1_71)))) ? (var_1_83 == ((unsigned short int) ((var_1_84 - var_1_41) + var_1_25))) : (var_1_83 == ((unsigned short int) (min (var_1_25 , var_1_84)))))) : ((var_1_22 >= ((7.642366530783217E18 - var_1_71) - 9.99999998E7)) ? (var_1_83 == ((unsigned short int) ((abs (var_1_75 - var_1_41)) - var_1_8))) : 1)) : (var_1_83 == ((unsigned short int) 32))))) && ((var_1_22 != (- 127.12)) ? (((~ 8) <= var_1_75) ? ((var_1_6 == var_1_26) ? (var_1_85 == ((signed short int) (abs (1 - var_1_86)))) : (var_1_85 == ((signed short int) (var_1_62 + 128)))) : (var_1_85 == ((signed short int) ((var_1_45 - (max (100 , var_1_25))) - var_1_41)))) : (var_1_85 == ((signed short int) (var_1_65 + var_1_3))))) && ((var_1_13 || var_1_100) ? (var_1_87 == ((unsigned short int) ((abs (57894)) - (var_1_63 + (max (var_1_62 , var_1_27)))))) : (((- var_1_42) > var_1_47) ? ((var_1_12 >= (- (- var_1_56))) ? ((var_1_34 < var_1_20) ? (var_1_87 == ((unsigned short int) (abs (var_1_47)))) : 1) : (var_1_87 == ((unsigned short int) ((max (var_1_48 , var_1_75)) - (min ((var_1_84 - var_1_47) , var_1_8)))))) : 1))) && ((var_1_27 == (min ((var_1_6 ^ var_1_73) , var_1_58))) ? (var_1_10 ? (var_1_88 == ((unsigned char) (var_1_29 && var_1_13))) : (var_1_88 == ((unsigned char) ((var_1_35 && (last_1_var_1_88 && var_1_31)) || var_1_36)))) : 1)) && ((var_1_42 > var_1_84) ? (var_1_89 == ((float) var_1_90)) : 1)) && (var_1_100 ? (var_1_91 == ((signed short int) var_1_92)) : 1)) && (var_1_93 == ((unsigned char) var_1_39))) && (var_1_13 ? (var_1_94 == ((unsigned char) 2)) : (var_1_94 == ((unsigned char) var_1_12)))) && (var_1_35 ? (var_1_95 == ((signed char) var_1_27)) : (var_1_95 == ((signed char) var_1_42)))) && (var_1_35 ? (var_1_96 == ((signed long int) var_1_12)) : 1)) && (var_1_100 ? (var_1_97 == ((double) var_1_50)) : (var_1_97 == ((double) var_1_23)))) && (var_1_29 ? (var_1_98 == ((unsigned long int) var_1_63)) : (var_1_98 == ((unsigned long int) 5u)))) && (var_1_99 == ((double) var_1_21))) && (var_1_10 ? (var_1_100 == ((unsigned char) var_1_31)) : (var_1_100 == ((unsigned char) var_1_36)))) && (var_1_36 ? (var_1_101 == ((signed char) var_1_12)) : (var_1_101 == ((signed char) var_1_41)))) && (var_1_102 == ((float) var_1_20))) && ((var_1_31 && var_1_35) ? (var_1_103 == ((float) var_1_22)) : (var_1_103 == ((float) (max (var_1_50 , var_1_17)))))) && ((! (var_1_67 < var_1_3)) ? (var_1_104 == ((signed char) var_1_42)) : 1)) && (((var_1_6 < (var_1_43 % var_1_44)) && var_1_10) ? (var_1_105 == ((float) var_1_71)) : 1)
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
