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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch23Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned long int var_1_2 = 2645914509;
signed char var_1_5 = -50;
signed char var_1_6 = 2;
signed char var_1_7 = 5;
float var_1_8 = 64.1;
float var_1_10 = 8.4;
float var_1_11 = 2.75;
float var_1_12 = 0.9;
float var_1_14 = 256.2;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 8;
signed short int var_1_17 = -128;
signed short int var_1_18 = 10000;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 2838904920;
unsigned long int var_1_21 = 1320930853;
unsigned char var_1_22 = 1;
signed char var_1_23 = 25;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
double var_1_28 = 32.488;
double var_1_30 = 8.9;
double var_1_31 = 255.2;
double var_1_32 = 7.2;
float var_1_33 = 16.4;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
signed long int var_1_37 = 100000000;
float var_1_38 = 3.425;
signed char var_1_39 = 5;
unsigned short int var_1_40 = 256;
unsigned short int var_1_41 = 10000;
signed char var_1_42 = -64;
unsigned long int var_1_43 = 0;
unsigned short int var_1_44 = 60934;
unsigned long int var_1_45 = 2591019269;
double var_1_46 = 10000000.5;
unsigned char var_1_48 = 200;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 8;
signed long int var_1_51 = 4;
signed char var_1_52 = -128;
signed short int var_1_53 = 256;
signed char var_1_55 = 16;
signed char var_1_56 = 64;
signed char var_1_57 = 4;
signed char var_1_58 = 4;
signed char var_1_59 = 8;
unsigned char var_1_60 = 10;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 64;
unsigned short int var_1_63 = 25;
unsigned short int var_1_64 = 54729;
signed long int var_1_65 = 256;
signed long int var_1_67 = 10;
signed char var_1_68 = 4;
double var_1_69 = 10.1;
double var_1_70 = 127.85;
double var_1_71 = 0.0;
double var_1_72 = 5.5;
double var_1_73 = 128.25;
unsigned short int var_1_74 = 16;
unsigned short int var_1_75 = 65117;
unsigned short int var_1_76 = 53602;
float var_1_77 = 8.8;
signed char var_1_78 = 64;
unsigned short int var_1_79 = 4;
signed char var_1_80 = -1;
signed char var_1_81 = 10;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 8;
unsigned long int var_1_85 = 16;
double var_1_86 = 31.8;
signed short int var_1_87 = -32;
unsigned long int var_1_88 = 10;
signed char var_1_89 = 2;
signed char var_1_90 = 0;
signed char var_1_91 = 2;
unsigned short int var_1_92 = 4;
unsigned short int var_1_93 = 31200;
unsigned short int var_1_94 = 31238;
float var_1_95 = 2.3;
double var_1_96 = 256.5;
signed long int var_1_97 = -64;
unsigned short int var_1_98 = 25;
double var_1_99 = 99.4;
unsigned long int var_1_100 = 5;
double var_1_101 = 49.5;
signed long int var_1_102 = -32;
double var_1_103 = 16.7;
signed char var_1_104 = -1;
signed long int var_1_105 = -10000000;
unsigned char var_1_106 = 10;
signed char var_1_107 = 32;
unsigned char var_1_108 = 1;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = -16;
float last_1_var_1_8 = 64.1;
unsigned char last_1_var_1_15 = 32;
unsigned long int last_1_var_1_19 = 64;
unsigned char last_1_var_1_34 = 1;
signed long int last_1_var_1_37 = 100000000;
unsigned long int last_1_var_1_43 = 0;
unsigned short int last_1_var_1_63 = 25;
signed long int last_1_var_1_65 = 256;
double last_1_var_1_69 = 10.1;
unsigned short int last_1_var_1_84 = 8;
unsigned long int last_1_var_1_85 = 16;
unsigned long int last_1_var_1_88 = 10;
signed long int last_1_var_1_97 = -64;
unsigned long int last_1_var_1_100 = 5;
signed long int last_1_var_1_102 = -32;
signed long int last_1_var_1_105 = -10000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req45Batch23Amount500
	var_1_100 = last_1_var_1_63;


	// From: Req32Batch23Amount500
	unsigned long int stepLocal_27 = last_1_var_1_43;
	signed long int stepLocal_26 = last_1_var_1_84;
	signed long int stepLocal_25 = last_1_var_1_105;
	if ((- var_1_45) != stepLocal_25) {
		if (stepLocal_27 >= ((max (var_1_62 , var_1_59)) ^ last_1_var_1_65)) {
			if (stepLocal_26 == var_1_6) {
				var_1_82 = (var_1_36 || var_1_26);
			}
		} else {
			var_1_82 = ((var_1_26 && (var_1_36 || var_1_27)) || var_1_83);
		}
	} else {
		if (last_1_var_1_69 < last_1_var_1_8) {
			var_1_82 = var_1_24;
		}
	}


	// From: Req9Batch23Amount500
	if ((-64 / var_1_23) <= last_1_var_1_85) {
		if (((var_1_6 * last_1_var_1_102) > var_1_18) && var_1_24) {
			var_1_34 = (! (! var_1_27));
		}
	} else {
		if ((1 + var_1_18) != var_1_6) {
			if ((var_1_31 * var_1_11) > var_1_30) {
				var_1_34 = (var_1_26 || var_1_27);
			} else {
				var_1_34 = ((var_1_24 && (var_1_25 && var_1_35)) && (! (var_1_27 && var_1_26)));
			}
		} else {
			var_1_34 = ((var_1_26 || var_1_27) || var_1_36);
		}
	}


	// From: Req24Batch23Amount500
	unsigned long int stepLocal_20 = last_1_var_1_100;
	if (var_1_11 != var_1_30) {
		if (stepLocal_20 > last_1_var_1_19) {
			var_1_65 = ((var_1_67 + (var_1_61 - last_1_var_1_15)) + var_1_6);
		} else {
			var_1_65 = (var_1_50 - var_1_58);
		}
	} else {
		if (((max (var_1_32 , 1.8f)) + var_1_11) <= (- (min (var_1_31 , var_1_14)))) {
			var_1_65 = last_1_var_1_1;
		}
	}


	// From: Req53Batch23Amount500
	if ((last_1_var_1_37 * last_1_var_1_65) <= last_1_var_1_97) {
		var_1_108 = (! (! (var_1_36 && var_1_83)));
	} else {
		if (var_1_26) {
			var_1_108 = var_1_25;
		} else {
			var_1_108 = var_1_83;
		}
	}


	// From: Req15Batch23Amount500
	signed long int stepLocal_11 = last_1_var_1_84 / (max (var_1_23 , var_1_41));
	unsigned short int stepLocal_10 = var_1_41;
	signed long int stepLocal_9 = var_1_6 / var_1_41;
	if (var_1_18 >= stepLocal_9) {
		if (last_1_var_1_34) {
			if ((var_1_44 - var_1_16) <= stepLocal_10) {
				if (var_1_18 < stepLocal_11) {
					var_1_43 = (var_1_44 + var_1_21);
				} else {
					var_1_43 = (min (((min (var_1_20 , var_1_45)) - (abs (last_1_var_1_37))) , var_1_44));
				}
			}
		} else {
			var_1_43 = var_1_16;
		}
	} else {
		var_1_43 = (var_1_44 + (abs (var_1_16 + last_1_var_1_84)));
	}


	// From: Req6Batch23Amount500
	unsigned char stepLocal_6 = var_1_12 <= 0.6f;
	signed char stepLocal_5 = var_1_6;
	if (stepLocal_5 >= (var_1_5 / (min (-16 , var_1_23)))) {
		var_1_22 = (var_1_24 && var_1_25);
	} else {
		if (stepLocal_6 || ((var_1_21 / var_1_18) > (256u * var_1_2))) {
			var_1_22 = ((! var_1_25) || (var_1_26 || var_1_27));
		} else {
			var_1_22 = var_1_24;
		}
	}


	// From: Req8Batch23Amount500
	var_1_33 = (var_1_32 - var_1_31);


	// From: Req13Batch23Amount500
	if ((- 3.3) < ((max (var_1_30 , var_1_14)) / var_1_12)) {
		var_1_40 = var_1_16;
	} else {
		var_1_40 = (((var_1_18 + var_1_41) - 25) + var_1_6);
	}


	// From: Req14Batch23Amount500
	unsigned long int stepLocal_8 = var_1_65 % var_1_2;
	if (stepLocal_8 != var_1_6) {
		var_1_42 = (var_1_7 + var_1_5);
	}


	// From: Req17Batch23Amount500
	if (var_1_82) {
		var_1_48 = (min (var_1_6 , (max ((min (var_1_16 , var_1_7)) , (var_1_49 - var_1_50)))));
	}


	// From: Req18Batch23Amount500
	var_1_51 = ((32 + var_1_41) - var_1_49);


	// From: Req19Batch23Amount500
	var_1_52 = ((var_1_7 - var_1_6) + var_1_5);


	// From: Req22Batch23Amount500
	unsigned char stepLocal_18 = var_1_22;
	unsigned char stepLocal_17 = var_1_108;
	if (stepLocal_17 || var_1_27) {
		var_1_60 = (var_1_61 + ((abs (var_1_62)) - 8));
	} else {
		if ((var_1_108 && var_1_26) && stepLocal_18) {
			var_1_60 = (var_1_6 + var_1_61);
		} else {
			var_1_60 = ((max (var_1_57 , var_1_6)) + var_1_62);
		}
	}


	// From: Req25Batch23Amount500
	if (var_1_108) {
		var_1_68 = (max ((var_1_59 - var_1_58) , var_1_5));
	}


	// From: Req28Batch23Amount500
	if (var_1_25) {
		var_1_77 = (var_1_71 + (var_1_72 + 10.75f));
	} else {
		var_1_77 = (var_1_73 + (64.08f - var_1_72));
	}


	// From: Req30Batch23Amount500
	var_1_80 = (max (var_1_59 , var_1_57));


	// From: Req35Batch23Amount500
	if (var_1_22 || ((var_1_58 / var_1_18) != var_1_49)) {
		var_1_86 = (max (var_1_71 , (min ((max (31.4 , var_1_10)) , var_1_72))));
	} else {
		if ((var_1_57 + -4) < (var_1_75 % (min (10 , var_1_23)))) {
			var_1_86 = var_1_72;
		} else {
			var_1_86 = (abs (1.5));
		}
	}


	// From: Req37Batch23Amount500
	unsigned char stepLocal_28 = var_1_62;
	if (stepLocal_28 > (- last_1_var_1_88)) {
		var_1_88 = last_1_var_1_88;
	}


	// From: Req40Batch23Amount500
	if (var_1_35) {
		var_1_95 = var_1_70;
	} else {
		var_1_95 = var_1_30;
	}


	// From: Req41Batch23Amount500
	if (var_1_108) {
		var_1_96 = var_1_71;
	} else {
		var_1_96 = var_1_14;
	}


	// From: Req43Batch23Amount500
	var_1_98 = var_1_79;


	// From: Req44Batch23Amount500
	var_1_99 = var_1_11;


	// From: Req46Batch23Amount500
	if (var_1_34) {
		var_1_101 = var_1_70;
	} else {
		var_1_101 = var_1_73;
	}


	// From: Req48Batch23Amount500
	if (var_1_36) {
		var_1_103 = var_1_14;
	}


	// From: Req49Batch23Amount500
	if (var_1_36) {
		var_1_104 = var_1_56;
	} else {
		var_1_104 = var_1_91;
	}


	// From: Req51Batch23Amount500
	var_1_106 = var_1_90;


	// From: Req52Batch23Amount500
	if (var_1_34) {
		var_1_107 = var_1_7;
	} else {
		var_1_107 = var_1_59;
	}


	// From: Req23Batch23Amount500
	signed char stepLocal_19 = var_1_59;
	if (var_1_26) {
		if ((- var_1_100) == stepLocal_19) {
			var_1_63 = ((var_1_18 + var_1_43) + var_1_16);
		} else {
			var_1_63 = (var_1_64 - 64);
		}
	} else {
		var_1_63 = (54756 - ((10000 - var_1_7) + var_1_43));
	}


	// From: Req2Batch23Amount500
	unsigned long int stepLocal_2 = 8u * (var_1_2 * var_1_7);
	unsigned char stepLocal_1 = var_1_82;
	if (var_1_82) {
		if (stepLocal_2 >= var_1_88) {
			var_1_8 = (min (var_1_10 , var_1_11));
		}
	} else {
		if (((var_1_11 / var_1_12) == var_1_10) && stepLocal_1) {
			var_1_8 = (8.35f + var_1_14);
		} else {
			var_1_8 = (min (var_1_14 , var_1_11));
		}
	}


	// From: Req47Batch23Amount500
	if (var_1_34) {
		var_1_102 = var_1_65;
	}


	// From: Req50Batch23Amount500
	if (var_1_34) {
		var_1_105 = var_1_65;
	}


	// From: Req1Batch23Amount500
	unsigned char stepLocal_0 = var_1_108;
	if (((var_1_2 - 16u) != var_1_43) || stepLocal_0) {
		var_1_1 = (var_1_5 + (var_1_6 - var_1_7));
	} else {
		var_1_1 = (abs (abs (var_1_7)));
	}


	// From: Req5Batch23Amount500
	signed char stepLocal_4 = var_1_6;
	if (stepLocal_4 >= -128) {
		if (var_1_14 <= var_1_10) {
			var_1_19 = (var_1_20 - 1u);
		}
	} else {
		if (var_1_108) {
			var_1_19 = (var_1_43 + (var_1_21 - 8u));
		}
	}


	// From: Req38Batch23Amount500
	signed long int stepLocal_29 = var_1_51;
	if (var_1_24) {
		var_1_89 = var_1_79;
	} else {
		if (stepLocal_29 > var_1_102) {
			var_1_89 = ((var_1_79 - (var_1_90 + var_1_91)) + var_1_7);
		} else {
			var_1_89 = var_1_5;
		}
	}


	// From: Req4Batch23Amount500
	signed char stepLocal_3 = var_1_5;
	if ((var_1_6 << var_1_7) > stepLocal_3) {
		var_1_17 = ((var_1_6 + (var_1_18 - var_1_16)) - (var_1_48 + var_1_7));
	}


	// From: Req7Batch23Amount500
	if (var_1_34 || var_1_108) {
		if ((5 ^ var_1_100) != var_1_16) {
			if (var_1_108) {
				if (var_1_18 > (var_1_63 / var_1_23)) {
					if (var_1_25) {
						var_1_28 = (abs (var_1_14 + var_1_30));
					} else {
						var_1_28 = (var_1_31 - var_1_32);
					}
				} else {
					var_1_28 = var_1_30;
				}
			}
		}
	}


	// From: Req12Batch23Amount500
	if ((- (var_1_32 - var_1_31)) <= var_1_77) {
		var_1_39 = var_1_7;
	}


	// From: Req21Batch23Amount500
	if (var_1_44 <= ((var_1_65 + var_1_88) * var_1_19)) {
		if (var_1_23 > var_1_21) {
			var_1_55 = ((max ((max (var_1_7 , var_1_6)) , var_1_56)) - (max ((min (var_1_57 , var_1_58)) , var_1_59)));
		} else {
			var_1_55 = var_1_7;
		}
	} else {
		var_1_55 = ((var_1_6 - var_1_7) + (abs (50)));
	}


	// From: Req31Batch23Amount500
	signed long int stepLocal_24 = max (var_1_62 , var_1_102);
	if (var_1_5 >= stepLocal_24) {
		var_1_81 = (min (var_1_79 , var_1_59));
	}


	// From: Req33Batch23Amount500
	if ((max (var_1_61 , var_1_88)) < var_1_51) {
		var_1_84 = ((var_1_76 - var_1_41) - (min (var_1_49 , var_1_18)));
	} else {
		var_1_84 = var_1_76;
	}


	// From: Req36Batch23Amount500
	if (var_1_24) {
		if (var_1_77 < -0.8f) {
			if (var_1_82) {
				var_1_87 = (abs (1));
			} else {
				var_1_87 = var_1_68;
			}
		} else {
			var_1_87 = (var_1_58 + var_1_17);
		}
	} else {
		if ((max ((var_1_101 / var_1_71) , (- var_1_31))) < var_1_96) {
			var_1_87 = (var_1_49 + var_1_61);
		}
	}


	// From: Req39Batch23Amount500
	if (! var_1_24) {
		if (var_1_103 > (- var_1_101)) {
			if (var_1_26) {
				var_1_92 = (((var_1_93 - var_1_57) + (max (18934 , var_1_94))) - var_1_49);
			} else {
				var_1_92 = (abs (8));
			}
		} else {
			var_1_92 = var_1_49;
		}
	} else {
		var_1_92 = 5;
	}


	// From: Req34Batch23Amount500
	if (64 < var_1_49) {
		var_1_85 = ((var_1_21 - var_1_58) + var_1_61);
	} else {
		if (var_1_2 < (var_1_20 - var_1_79)) {
			var_1_85 = (var_1_62 + var_1_41);
		} else {
			if (var_1_108) {
				var_1_85 = (min (var_1_43 , (var_1_20 - 256u)));
			} else {
				if (((var_1_61 - var_1_59) * (var_1_56 / var_1_23)) != var_1_16) {
					var_1_85 = (abs (var_1_62));
				} else {
					if ((var_1_45 - var_1_7) == last_1_var_1_85) {
						var_1_85 = (min (var_1_50 , var_1_105));
					} else {
						var_1_85 = (last_1_var_1_85 + var_1_50);
					}
				}
			}
		}
	}


	// From: Req3Batch23Amount500
	if (var_1_2 <= (var_1_85 + var_1_7)) {
		var_1_15 = var_1_6;
	} else {
		var_1_15 = (var_1_7 + var_1_16);
	}


	// From: Req20Batch23Amount500
	if (var_1_45 != (var_1_43 * var_1_85)) {
		var_1_53 = (var_1_6 + var_1_52);
	} else {
		var_1_53 = (min (var_1_23 , (var_1_6 - (min (8 , var_1_49)))));
	}


	// From: Req10Batch23Amount500
	if (! var_1_25) {
		if (! var_1_108) {
			var_1_37 = (var_1_6 - var_1_7);
		} else {
			var_1_37 = (max (var_1_53 , ((var_1_6 + var_1_7) + var_1_89)));
		}
	} else {
		var_1_37 = (max (var_1_6 , var_1_16));
	}


	// From: Req42Batch23Amount500
	var_1_97 = var_1_53;


	// From: Req11Batch23Amount500
	unsigned char stepLocal_7 = var_1_24 && var_1_82;
	if ((var_1_11 * var_1_12) >= (min (var_1_30 , (128.2f / 255.35f)))) {
		if (((var_1_108 && var_1_26) && (var_1_15 <= var_1_2)) && stepLocal_7) {
			var_1_38 = (var_1_31 - 7.9f);
		}
	}


	// From: Req16Batch23Amount500
	unsigned long int stepLocal_16 = var_1_45 * (abs (var_1_41));
	signed char stepLocal_15 = var_1_39;
	signed long int stepLocal_14 = var_1_6 - var_1_53;
	unsigned long int stepLocal_13 = var_1_51 & var_1_21;
	unsigned long int stepLocal_12 = var_1_20;
	if (var_1_6 >= stepLocal_15) {
		if (var_1_88 <= stepLocal_16) {
			var_1_46 = (abs (abs (var_1_30 + var_1_14)));
		} else {
			if (stepLocal_12 >= (var_1_45 * var_1_18)) {
				if ((var_1_44 ^ var_1_81) > stepLocal_13) {
					var_1_46 = (max (0.25 , (max (var_1_30 , var_1_14))));
				} else {
					var_1_46 = (max (var_1_10 , var_1_30));
				}
			}
		}
	} else {
		if (var_1_18 > stepLocal_14) {
			var_1_46 = (abs (var_1_31));
		} else {
			var_1_46 = var_1_11;
		}
	}


	// From: Req27Batch23Amount500
	unsigned char stepLocal_22 = var_1_61;
	unsigned char stepLocal_21 = var_1_108;
	if ((var_1_50 / var_1_44) > stepLocal_22) {
		if (var_1_26 && stepLocal_21) {
			var_1_74 = ((max ((min (var_1_64 , var_1_75)) , (var_1_76 - var_1_15))) - var_1_49);
		}
	} else {
		if (! var_1_108) {
			var_1_74 = (var_1_65 + 16);
		}
	}


	// From: Req29Batch23Amount500
	signed long int stepLocal_23 = (1000000000 >> var_1_79) + (var_1_37 * var_1_63);
	if (((var_1_62 << var_1_100) / (var_1_75 - var_1_49)) > stepLocal_23) {
		var_1_78 = var_1_79;
	} else {
		var_1_78 = (min (var_1_7 , var_1_57));
	}


	// From: Req26Batch23Amount500
	if (var_1_95 > var_1_77) {
		if (var_1_77 >= (min (var_1_11 , (min (var_1_99 , var_1_12))))) {
			var_1_69 = (var_1_30 + (min (var_1_14 , var_1_70)));
		} else {
			if (var_1_82 || ((var_1_15 < var_1_44) && var_1_26)) {
				var_1_69 = var_1_11;
			} else {
				var_1_69 = (var_1_70 + var_1_14);
			}
		}
	} else {
		var_1_69 = (((var_1_71 - var_1_72) + var_1_73) - var_1_31);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 8191);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -128);
	assume_abort_if_not(var_1_23 <= 127);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 8192);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 32767);
	assume_abort_if_not(var_1_44 <= 65535);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 2147483647);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -1);
	assume_abort_if_not(var_1_56 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 32767);
	assume_abort_if_not(var_1_64 <= 65534);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -536870911);
	assume_abort_if_not(var_1_67 <= 536870912);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -461168.6018427383000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 2305843.009213691400e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65534);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 49150);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 30);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 0);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 32);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 31);
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 24575);
	assume_abort_if_not(var_1_93 <= 32767);
	var_1_94 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_94 >= 16384);
	assume_abort_if_not(var_1_94 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_105 = var_1_105;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - 16u) != var_1_43) || var_1_108) ? (var_1_1 == ((signed char) (var_1_5 + (var_1_6 - var_1_7)))) : (var_1_1 == ((signed char) (abs (abs (var_1_7)))))) && (var_1_82 ? (((8u * (var_1_2 * var_1_7)) >= var_1_88) ? (var_1_8 == ((float) (min (var_1_10 , var_1_11)))) : 1) : ((((var_1_11 / var_1_12) == var_1_10) && var_1_82) ? (var_1_8 == ((float) (8.35f + var_1_14))) : (var_1_8 == ((float) (min (var_1_14 , var_1_11))))))) && ((var_1_2 <= (var_1_85 + var_1_7)) ? (var_1_15 == ((unsigned char) var_1_6)) : (var_1_15 == ((unsigned char) (var_1_7 + var_1_16))))) && (((var_1_6 << var_1_7) > var_1_5) ? (var_1_17 == ((signed short int) ((var_1_6 + (var_1_18 - var_1_16)) - (var_1_48 + var_1_7)))) : 1)) && ((var_1_6 >= -128) ? ((var_1_14 <= var_1_10) ? (var_1_19 == ((unsigned long int) (var_1_20 - 1u))) : 1) : (var_1_108 ? (var_1_19 == ((unsigned long int) (var_1_43 + (var_1_21 - 8u)))) : 1))) && ((var_1_6 >= (var_1_5 / (min (-16 , var_1_23)))) ? (var_1_22 == ((unsigned char) (var_1_24 && var_1_25))) : (((var_1_12 <= 0.6f) || ((var_1_21 / var_1_18) > (256u * var_1_2))) ? (var_1_22 == ((unsigned char) ((! var_1_25) || (var_1_26 || var_1_27)))) : (var_1_22 == ((unsigned char) var_1_24))))) && ((var_1_34 || var_1_108) ? (((5 ^ var_1_100) != var_1_16) ? (var_1_108 ? ((var_1_18 > (var_1_63 / var_1_23)) ? (var_1_25 ? (var_1_28 == ((double) (abs (var_1_14 + var_1_30)))) : (var_1_28 == ((double) (var_1_31 - var_1_32)))) : (var_1_28 == ((double) var_1_30))) : 1) : 1) : 1)) && (var_1_33 == ((float) (var_1_32 - var_1_31)))) && (((-64 / var_1_23) <= last_1_var_1_85) ? ((((var_1_6 * last_1_var_1_102) > var_1_18) && var_1_24) ? (var_1_34 == ((unsigned char) (! (! var_1_27)))) : 1) : (((1 + var_1_18) != var_1_6) ? (((var_1_31 * var_1_11) > var_1_30) ? (var_1_34 == ((unsigned char) (var_1_26 || var_1_27))) : (var_1_34 == ((unsigned char) ((var_1_24 && (var_1_25 && var_1_35)) && (! (var_1_27 && var_1_26)))))) : (var_1_34 == ((unsigned char) ((var_1_26 || var_1_27) || var_1_36)))))) && ((! var_1_25) ? ((! var_1_108) ? (var_1_37 == ((signed long int) (var_1_6 - var_1_7))) : (var_1_37 == ((signed long int) (max (var_1_53 , ((var_1_6 + var_1_7) + var_1_89)))))) : (var_1_37 == ((signed long int) (max (var_1_6 , var_1_16)))))) && (((var_1_11 * var_1_12) >= (min (var_1_30 , (128.2f / 255.35f)))) ? ((((var_1_108 && var_1_26) && (var_1_15 <= var_1_2)) && (var_1_24 && var_1_82)) ? (var_1_38 == ((float) (var_1_31 - 7.9f))) : 1) : 1)) && (((- (var_1_32 - var_1_31)) <= var_1_77) ? (var_1_39 == ((signed char) var_1_7)) : 1)) && (((- 3.3) < ((max (var_1_30 , var_1_14)) / var_1_12)) ? (var_1_40 == ((unsigned short int) var_1_16)) : (var_1_40 == ((unsigned short int) (((var_1_18 + var_1_41) - 25) + var_1_6))))) && (((var_1_65 % var_1_2) != var_1_6) ? (var_1_42 == ((signed char) (var_1_7 + var_1_5))) : 1)) && ((var_1_18 >= (var_1_6 / var_1_41)) ? (last_1_var_1_34 ? (((var_1_44 - var_1_16) <= var_1_41) ? ((var_1_18 < (last_1_var_1_84 / (max (var_1_23 , var_1_41)))) ? (var_1_43 == ((unsigned long int) (var_1_44 + var_1_21))) : (var_1_43 == ((unsigned long int) (min (((min (var_1_20 , var_1_45)) - (abs (last_1_var_1_37))) , var_1_44))))) : 1) : (var_1_43 == ((unsigned long int) var_1_16))) : (var_1_43 == ((unsigned long int) (var_1_44 + (abs (var_1_16 + last_1_var_1_84))))))) && ((var_1_6 >= var_1_39) ? ((var_1_88 <= (var_1_45 * (abs (var_1_41)))) ? (var_1_46 == ((double) (abs (abs (var_1_30 + var_1_14))))) : ((var_1_20 >= (var_1_45 * var_1_18)) ? (((var_1_44 ^ var_1_81) > (var_1_51 & var_1_21)) ? (var_1_46 == ((double) (max (0.25 , (max (var_1_30 , var_1_14)))))) : (var_1_46 == ((double) (max (var_1_10 , var_1_30))))) : 1)) : ((var_1_18 > (var_1_6 - var_1_53)) ? (var_1_46 == ((double) (abs (var_1_31)))) : (var_1_46 == ((double) var_1_11))))) && (var_1_82 ? (var_1_48 == ((unsigned char) (min (var_1_6 , (max ((min (var_1_16 , var_1_7)) , (var_1_49 - var_1_50))))))) : 1)) && (var_1_51 == ((signed long int) ((32 + var_1_41) - var_1_49)))) && (var_1_52 == ((signed char) ((var_1_7 - var_1_6) + var_1_5)))) && ((var_1_45 != (var_1_43 * var_1_85)) ? (var_1_53 == ((signed short int) (var_1_6 + var_1_52))) : (var_1_53 == ((signed short int) (min (var_1_23 , (var_1_6 - (min (8 , var_1_49))))))))) && ((var_1_44 <= ((var_1_65 + var_1_88) * var_1_19)) ? ((var_1_23 > var_1_21) ? (var_1_55 == ((signed char) ((max ((max (var_1_7 , var_1_6)) , var_1_56)) - (max ((min (var_1_57 , var_1_58)) , var_1_59))))) : (var_1_55 == ((signed char) var_1_7))) : (var_1_55 == ((signed char) ((var_1_6 - var_1_7) + (abs (50))))))) && ((var_1_108 || var_1_27) ? (var_1_60 == ((unsigned char) (var_1_61 + ((abs (var_1_62)) - 8)))) : (((var_1_108 && var_1_26) && var_1_22) ? (var_1_60 == ((unsigned char) (var_1_6 + var_1_61))) : (var_1_60 == ((unsigned char) ((max (var_1_57 , var_1_6)) + var_1_62)))))) && (var_1_26 ? (((- var_1_100) == var_1_59) ? (var_1_63 == ((unsigned short int) ((var_1_18 + var_1_43) + var_1_16))) : (var_1_63 == ((unsigned short int) (var_1_64 - 64)))) : (var_1_63 == ((unsigned short int) (54756 - ((10000 - var_1_7) + var_1_43)))))) && ((var_1_11 != var_1_30) ? ((last_1_var_1_100 > last_1_var_1_19) ? (var_1_65 == ((signed long int) ((var_1_67 + (var_1_61 - last_1_var_1_15)) + var_1_6))) : (var_1_65 == ((signed long int) (var_1_50 - var_1_58)))) : ((((max (var_1_32 , 1.8f)) + var_1_11) <= (- (min (var_1_31 , var_1_14)))) ? (var_1_65 == ((signed long int) last_1_var_1_1)) : 1))) && (var_1_108 ? (var_1_68 == ((signed char) (max ((var_1_59 - var_1_58) , var_1_5)))) : 1)) && ((var_1_95 > var_1_77) ? ((var_1_77 >= (min (var_1_11 , (min (var_1_99 , var_1_12))))) ? (var_1_69 == ((double) (var_1_30 + (min (var_1_14 , var_1_70))))) : ((var_1_82 || ((var_1_15 < var_1_44) && var_1_26)) ? (var_1_69 == ((double) var_1_11)) : (var_1_69 == ((double) (var_1_70 + var_1_14))))) : (var_1_69 == ((double) (((var_1_71 - var_1_72) + var_1_73) - var_1_31))))) && (((var_1_50 / var_1_44) > var_1_61) ? ((var_1_26 && var_1_108) ? (var_1_74 == ((unsigned short int) ((max ((min (var_1_64 , var_1_75)) , (var_1_76 - var_1_15))) - var_1_49))) : 1) : ((! var_1_108) ? (var_1_74 == ((unsigned short int) (var_1_65 + 16))) : 1))) && (var_1_25 ? (var_1_77 == ((float) (var_1_71 + (var_1_72 + 10.75f)))) : (var_1_77 == ((float) (var_1_73 + (64.08f - var_1_72)))))) && ((((var_1_62 << var_1_100) / (var_1_75 - var_1_49)) > ((1000000000 >> var_1_79) + (var_1_37 * var_1_63))) ? (var_1_78 == ((signed char) var_1_79)) : (var_1_78 == ((signed char) (min (var_1_7 , var_1_57)))))) && (var_1_80 == ((signed char) (max (var_1_59 , var_1_57))))) && ((var_1_5 >= (max (var_1_62 , var_1_102))) ? (var_1_81 == ((signed char) (min (var_1_79 , var_1_59)))) : 1)) && (((- var_1_45) != last_1_var_1_105) ? ((last_1_var_1_43 >= ((max (var_1_62 , var_1_59)) ^ last_1_var_1_65)) ? ((last_1_var_1_84 == var_1_6) ? (var_1_82 == ((unsigned char) (var_1_36 || var_1_26))) : 1) : (var_1_82 == ((unsigned char) ((var_1_26 && (var_1_36 || var_1_27)) || var_1_83)))) : ((last_1_var_1_69 < last_1_var_1_8) ? (var_1_82 == ((unsigned char) var_1_24)) : 1))) && (((max (var_1_61 , var_1_88)) < var_1_51) ? (var_1_84 == ((unsigned short int) ((var_1_76 - var_1_41) - (min (var_1_49 , var_1_18))))) : (var_1_84 == ((unsigned short int) var_1_76)))) && ((64 < var_1_49) ? (var_1_85 == ((unsigned long int) ((var_1_21 - var_1_58) + var_1_61))) : ((var_1_2 < (var_1_20 - var_1_79)) ? (var_1_85 == ((unsigned long int) (var_1_62 + var_1_41))) : (var_1_108 ? (var_1_85 == ((unsigned long int) (min (var_1_43 , (var_1_20 - 256u))))) : ((((var_1_61 - var_1_59) * (var_1_56 / var_1_23)) != var_1_16) ? (var_1_85 == ((unsigned long int) (abs (var_1_62)))) : (((var_1_45 - var_1_7) == last_1_var_1_85) ? (var_1_85 == ((unsigned long int) (min (var_1_50 , var_1_105)))) : (var_1_85 == ((unsigned long int) (last_1_var_1_85 + var_1_50))))))))) && ((var_1_22 || ((var_1_58 / var_1_18) != var_1_49)) ? (var_1_86 == ((double) (max (var_1_71 , (min ((max (31.4 , var_1_10)) , var_1_72)))))) : (((var_1_57 + -4) < (var_1_75 % (min (10 , var_1_23)))) ? (var_1_86 == ((double) var_1_72)) : (var_1_86 == ((double) (abs (1.5))))))) && (var_1_24 ? ((var_1_77 < -0.8f) ? (var_1_82 ? (var_1_87 == ((signed short int) (abs (1)))) : (var_1_87 == ((signed short int) var_1_68))) : (var_1_87 == ((signed short int) (var_1_58 + var_1_17)))) : (((max ((var_1_101 / var_1_71) , (- var_1_31))) < var_1_96) ? (var_1_87 == ((signed short int) (var_1_49 + var_1_61))) : 1))) && ((var_1_62 > (- last_1_var_1_88)) ? (var_1_88 == ((unsigned long int) last_1_var_1_88)) : 1)) && (var_1_24 ? (var_1_89 == ((signed char) var_1_79)) : ((var_1_51 > var_1_102) ? (var_1_89 == ((signed char) ((var_1_79 - (var_1_90 + var_1_91)) + var_1_7))) : (var_1_89 == ((signed char) var_1_5))))) && ((! var_1_24) ? ((var_1_103 > (- var_1_101)) ? (var_1_26 ? (var_1_92 == ((unsigned short int) (((var_1_93 - var_1_57) + (max (18934 , var_1_94))) - var_1_49))) : (var_1_92 == ((unsigned short int) (abs (8))))) : (var_1_92 == ((unsigned short int) var_1_49))) : (var_1_92 == ((unsigned short int) 5)))) && (var_1_35 ? (var_1_95 == ((float) var_1_70)) : (var_1_95 == ((float) var_1_30)))) && (var_1_108 ? (var_1_96 == ((double) var_1_71)) : (var_1_96 == ((double) var_1_14)))) && (var_1_97 == ((signed long int) var_1_53))) && (var_1_98 == ((unsigned short int) var_1_79))) && (var_1_99 == ((double) var_1_11))) && (var_1_100 == ((unsigned long int) last_1_var_1_63))) && (var_1_34 ? (var_1_101 == ((double) var_1_70)) : (var_1_101 == ((double) var_1_73)))) && (var_1_34 ? (var_1_102 == ((signed long int) var_1_65)) : 1)) && (var_1_36 ? (var_1_103 == ((double) var_1_14)) : 1)) && (var_1_36 ? (var_1_104 == ((signed char) var_1_56)) : (var_1_104 == ((signed char) var_1_91)))) && (var_1_34 ? (var_1_105 == ((signed long int) var_1_65)) : 1)) && (var_1_106 == ((unsigned char) var_1_90))) && (var_1_34 ? (var_1_107 == ((signed char) var_1_7)) : (var_1_107 == ((signed char) var_1_59)))) && (((last_1_var_1_37 * last_1_var_1_65) <= last_1_var_1_97) ? (var_1_108 == ((unsigned char) (! (! (var_1_36 && var_1_83))))) : (var_1_26 ? (var_1_108 == ((unsigned char) var_1_25)) : (var_1_108 == ((unsigned char) var_1_83))))
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
