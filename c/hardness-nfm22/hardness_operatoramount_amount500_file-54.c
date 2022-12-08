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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch54Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 32;
unsigned short int var_1_6 = 36750;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -256;
unsigned char var_1_15 = 0;
float var_1_16 = 256.9;
float var_1_17 = 10.4;
float var_1_18 = -0.4;
float var_1_19 = 32.7;
float var_1_20 = 5.5;
float var_1_21 = 255.5;
float var_1_22 = 2.4;
unsigned short int var_1_23 = 64;
unsigned short int var_1_24 = 18447;
unsigned short int var_1_25 = 18627;
signed long int var_1_27 = 50;
unsigned short int var_1_28 = 17336;
signed char var_1_29 = 100;
signed char var_1_30 = 16;
unsigned char var_1_31 = 10;
float var_1_32 = 99.5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_40 = 0;
double var_1_41 = 9.375;
signed long int var_1_42 = 1000000;
unsigned char var_1_43 = 1;
signed long int var_1_44 = -64;
signed long int var_1_45 = 1908312992;
float var_1_46 = 1.8;
float var_1_47 = 63.25;
unsigned short int var_1_48 = 50;
float var_1_50 = 9999999999999.2;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 5;
unsigned char var_1_53 = 0;
double var_1_54 = 16.25;
double var_1_55 = 2.625;
double var_1_56 = 4.5;
double var_1_57 = 2.6;
signed char var_1_58 = 25;
signed char var_1_59 = 5;
signed char var_1_60 = 16;
signed char var_1_61 = 16;
double var_1_62 = 2.25;
unsigned char var_1_63 = 32;
unsigned char var_1_64 = 32;
signed char var_1_65 = -1;
unsigned char var_1_66 = 128;
unsigned short int var_1_67 = 100;
signed short int var_1_68 = -1;
signed short int var_1_69 = 128;
signed short int var_1_70 = 25107;
signed short int var_1_71 = 23928;
float var_1_72 = 64.75;
double var_1_73 = 5.5;
double var_1_74 = 0.0;
unsigned char var_1_75 = 50;
signed long int var_1_76 = 10;
signed long int var_1_77 = 10;
double var_1_78 = 2.697;
unsigned short int var_1_79 = 64;
unsigned short int var_1_80 = 10000;
unsigned short int var_1_81 = 10000;
double var_1_82 = 25.75;
double var_1_84 = 255.727;
unsigned short int var_1_86 = 2;
signed char var_1_87 = -32;
signed short int var_1_88 = -64;
signed long int var_1_89 = -500;
float var_1_90 = 200.4;
unsigned char var_1_91 = 1;
unsigned long int var_1_92 = 25;
unsigned long int var_1_93 = 5;
unsigned long int var_1_94 = 1000000000;
unsigned long int var_1_95 = 2;
signed char var_1_96 = 2;
float var_1_97 = 256.2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 32;
unsigned char last_1_var_1_12 = 0;
float last_1_var_1_16 = 256.9;
unsigned short int last_1_var_1_23 = 64;
signed long int last_1_var_1_27 = 50;
unsigned char last_1_var_1_33 = 1;
unsigned char last_1_var_1_43 = 1;
unsigned char last_1_var_1_53 = 0;
double last_1_var_1_54 = 16.25;
signed char last_1_var_1_58 = 25;
double last_1_var_1_62 = 2.25;
unsigned char last_1_var_1_63 = 32;
unsigned char last_1_var_1_64 = 32;
unsigned short int last_1_var_1_67 = 100;
signed short int last_1_var_1_69 = 128;
double last_1_var_1_73 = 5.5;
unsigned char last_1_var_1_75 = 50;
signed long int last_1_var_1_76 = 10;
signed long int last_1_var_1_77 = 10;
double last_1_var_1_78 = 2.697;
unsigned short int last_1_var_1_79 = 64;
double last_1_var_1_82 = 25.75;
double last_1_var_1_84 = 255.727;
unsigned short int last_1_var_1_86 = 2;
unsigned char last_1_var_1_91 = 1;
float last_1_var_1_97 = 256.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req26Batch54Amount500
	unsigned char stepLocal_31 = (var_1_32 - var_1_47) <= (last_1_var_1_97 + var_1_20);
	signed long int stepLocal_30 = last_1_var_1_23;
	if (stepLocal_30 == var_1_28) {
		if (((var_1_74 - var_1_57) - var_1_22) >= last_1_var_1_62) {
			if (var_1_15) {
				if (stepLocal_31 && ((var_1_66 * var_1_13) <= last_1_var_1_77)) {
					var_1_73 = var_1_19;
				}
			} else {
				var_1_73 = (var_1_21 - var_1_22);
			}
		} else {
			var_1_73 = (var_1_22 + var_1_18);
		}
	} else {
		var_1_73 = (min ((max (var_1_55 , var_1_22)) , var_1_19));
	}


	// From: Req17Batch54Amount500
	if (last_1_var_1_78 <= var_1_20) {
		var_1_54 = (var_1_18 + ((var_1_55 + var_1_56) + (1000000.5 - var_1_57)));
	} else {
		var_1_54 = (max ((var_1_22 - var_1_47) , var_1_19));
	}


	// From: Req6Batch54Amount500
	signed long int stepLocal_12 = last_1_var_1_91;
	signed long int stepLocal_11 = var_1_13;
	signed long int stepLocal_10 = var_1_30 * var_1_28;
	unsigned char stepLocal_9 = (last_1_var_1_53 && last_1_var_1_43) && last_1_var_1_43;
	if (stepLocal_10 <= (max ((last_1_var_1_1 - last_1_var_1_91) , var_1_29))) {
		if (var_1_30 > stepLocal_12) {
			if (last_1_var_1_78 < ((var_1_20 + var_1_18) * last_1_var_1_82)) {
				var_1_31 = var_1_30;
			} else {
				var_1_31 = (var_1_29 + var_1_30);
			}
		}
	} else {
		if (var_1_19 == ((var_1_22 + var_1_21) - var_1_32)) {
			var_1_31 = (var_1_29 + var_1_30);
		} else {
			if (stepLocal_11 < var_1_28) {
				if (stepLocal_9 && (var_1_28 <= var_1_24)) {
					var_1_31 = var_1_30;
				} else {
					var_1_31 = 4;
				}
			} else {
				var_1_31 = var_1_30;
			}
		}
	}


	// From: Req45Batch54Amount500
	if (var_1_25 > last_1_var_1_27) {
		var_1_97 = (max (var_1_56 , var_1_20));
	} else {
		if (last_1_var_1_73 <= var_1_47) {
			var_1_97 = var_1_47;
		} else {
			if (last_1_var_1_33) {
				var_1_97 = var_1_47;
			}
		}
	}


	// From: Req16Batch54Amount500
	signed long int stepLocal_19 = - last_1_var_1_63;
	if (stepLocal_19 < (last_1_var_1_58 & 64)) {
		var_1_53 = (var_1_34 && var_1_37);
	} else {
		var_1_53 = ((var_1_24 > last_1_var_1_79) && (! var_1_15));
	}


	// From: Req2Batch54Amount500
	signed long int stepLocal_2 = last_1_var_1_86;
	if (last_1_var_1_53) {
		if ((abs (last_1_var_1_84)) < last_1_var_1_54) {
			if ((last_1_var_1_64 % (max (var_1_6 , var_1_13))) > stepLocal_2) {
				var_1_12 = (! (last_1_var_1_43 && (! var_1_15)));
			}
		} else {
			var_1_12 = (! (! var_1_15));
		}
	} else {
		var_1_12 = ((last_1_var_1_84 >= last_1_var_1_54) && (! var_1_15));
	}


	// From: Req29Batch54Amount500
	unsigned char stepLocal_35 = var_1_12;
	if ((var_1_17 <= var_1_57) || stepLocal_35) {
		var_1_77 = var_1_65;
	}


	// From: Req10Batch54Amount500
	if (last_1_var_1_16 < (last_1_var_1_97 * var_1_21)) {
		var_1_43 = (var_1_40 || var_1_37);
	} else {
		var_1_43 = (var_1_36 || (! var_1_40));
	}


	// From: Req20Batch54Amount500
	unsigned short int stepLocal_23 = var_1_28;
	signed long int stepLocal_22 = var_1_30 + last_1_var_1_67;
	if (var_1_25 < stepLocal_23) {
		if (stepLocal_22 < (min ((var_1_60 / var_1_29) , (-100 + last_1_var_1_76)))) {
			var_1_63 = (abs (var_1_61));
		} else {
			var_1_63 = (abs (var_1_60));
		}
	} else {
		var_1_63 = (abs (max (var_1_61 , 50)));
	}


	// From: Req15Batch54Amount500
	if ((last_1_var_1_77 >= last_1_var_1_75) && var_1_36) {
		var_1_51 = ((max (var_1_29 , var_1_30)) + var_1_52);
	} else {
		var_1_51 = (max ((max ((min (var_1_52 , var_1_29)) , var_1_30)) , ((200 - 10) - 5)));
	}


	// From: Req7Batch54Amount500
	unsigned char stepLocal_14 = (var_1_18 + var_1_32) != last_1_var_1_16;
	signed long int stepLocal_13 = last_1_var_1_91;
	if (var_1_15) {
		if (var_1_20 >= last_1_var_1_78) {
			var_1_33 = ((var_1_34 && var_1_35) && (last_1_var_1_53 || (last_1_var_1_12 || var_1_36)));
		} else {
			var_1_33 = (last_1_var_1_12 && var_1_37);
		}
	} else {
		if ((var_1_17 <= var_1_19) || stepLocal_14) {
			if (stepLocal_13 < last_1_var_1_91) {
				var_1_33 = var_1_36;
			} else {
				var_1_33 = ((var_1_37 || var_1_40) || (! (var_1_35 || var_1_36)));
			}
		} else {
			var_1_33 = var_1_36;
		}
	}


	// From: Req35Batch54Amount500
	var_1_87 = var_1_60;


	// From: Req36Batch54Amount500
	var_1_88 = 1;


	// From: Req37Batch54Amount500
	var_1_89 = var_1_61;


	// From: Req38Batch54Amount500
	var_1_90 = var_1_20;


	// From: Req39Batch54Amount500
	if (var_1_35) {
		var_1_91 = var_1_52;
	} else {
		var_1_91 = 10;
	}


	// From: Req40Batch54Amount500
	if (var_1_34) {
		var_1_92 = var_1_29;
	}


	// From: Req41Batch54Amount500
	var_1_93 = 64u;


	// From: Req42Batch54Amount500
	if (var_1_35) {
		var_1_94 = var_1_28;
	} else {
		var_1_94 = var_1_24;
	}


	// From: Req44Batch54Amount500
	if (var_1_53) {
		var_1_96 = var_1_61;
	} else {
		var_1_96 = var_1_30;
	}


	// From: Req5Batch54Amount500
	signed long int stepLocal_8 = (var_1_25 + var_1_28) - var_1_24;
	signed long int stepLocal_7 = 10 - (var_1_29 - var_1_30);
	unsigned char stepLocal_6 = var_1_15;
	unsigned char stepLocal_5 = var_1_15;
	if (! var_1_12) {
		if (stepLocal_6 && var_1_53) {
			var_1_27 = (last_1_var_1_27 - var_1_24);
		} else {
			if (last_1_var_1_27 < stepLocal_8) {
				var_1_27 = var_1_24;
			} else {
				if (stepLocal_7 > var_1_51) {
					var_1_27 = 2;
				}
			}
		}
	} else {
		if ((var_1_25 > var_1_31) && stepLocal_5) {
			var_1_27 = (min ((min (last_1_var_1_27 , (abs (var_1_6)))) , var_1_51));
		}
	}


	// From: Req19Batch54Amount500
	unsigned char stepLocal_21 = var_1_34;
	signed long int stepLocal_20 = var_1_27;
	if (var_1_15 && stepLocal_21) {
		var_1_62 = (max (var_1_57 , (var_1_21 - var_1_47)));
	} else {
		if (var_1_28 >= stepLocal_20) {
			var_1_62 = (min ((abs (var_1_21)) , (min (var_1_55 , var_1_47))));
		}
	}


	// From: Req34Batch54Amount500
	if (var_1_43) {
		if (var_1_33) {
			if (var_1_53) {
				var_1_86 = var_1_28;
			} else {
				var_1_86 = var_1_61;
			}
		} else {
			var_1_86 = var_1_25;
		}
	} else {
		var_1_86 = var_1_60;
	}


	// From: Req43Batch54Amount500
	if (var_1_12) {
		var_1_95 = var_1_63;
	}


	// From: Req25Batch54Amount500
	if (var_1_43 || var_1_40) {
		if (var_1_33) {
			var_1_72 = ((var_1_21 + var_1_57) - var_1_47);
		}
	}


	// From: Req22Batch54Amount500
	if (var_1_97 < var_1_73) {
		if (var_1_33) {
			var_1_67 = (var_1_6 - (var_1_30 + (min (var_1_29 , var_1_61))));
		} else {
			var_1_67 = (abs (var_1_63));
		}
	}


	// From: Req32Batch54Amount500
	unsigned long int stepLocal_37 = var_1_95;
	if (stepLocal_37 != var_1_94) {
		var_1_82 = (max (var_1_47 , (abs (var_1_21))));
	} else {
		var_1_82 = (min (var_1_55 , var_1_57));
	}


	// From: Req18Batch54Amount500
	if (((var_1_21 + var_1_57) - var_1_32) > var_1_82) {
		var_1_58 = (max (var_1_30 , (var_1_59 - (var_1_60 + var_1_61))));
	} else {
		var_1_58 = (var_1_30 + var_1_60);
	}


	// From: Req27Batch54Amount500
	signed long int stepLocal_32 = -500;
	if ((max ((var_1_6 - 25) , (var_1_70 * var_1_58))) <= stepLocal_32) {
		var_1_75 = (var_1_66 - (abs (var_1_61)));
	}


	// From: Req8Batch54Amount500
	unsigned char stepLocal_15 = var_1_34;
	if (((var_1_51 >= var_1_29) && (var_1_13 <= var_1_75)) && stepLocal_15) {
		var_1_41 = (min ((var_1_21 + (abs (var_1_20))) , var_1_22));
	}


	// From: Req1Batch54Amount500
	unsigned char stepLocal_1 = var_1_90 <= var_1_82;
	unsigned char stepLocal_0 = ! (var_1_82 >= var_1_90);
	if (! ((- 9.9999999999925E11) >= var_1_82)) {
		if (var_1_82 >= var_1_90) {
			if (var_1_82 < 7.5) {
				if (var_1_33 && stepLocal_0) {
					var_1_1 = (var_1_6 - var_1_31);
				} else {
					var_1_1 = (max ((min (var_1_31 , var_1_6)) , (max (var_1_63 , var_1_75))));
				}
			} else {
				var_1_1 = var_1_6;
			}
		} else {
			var_1_1 = (57411 - var_1_31);
		}
	} else {
		if (var_1_33 && stepLocal_1) {
			var_1_1 = ((min (var_1_31 , var_1_51)) + var_1_91);
		}
	}


	// From: Req21Batch54Amount500
	unsigned long int stepLocal_25 = var_1_93;
	unsigned long int stepLocal_24 = (var_1_93 / var_1_65) / var_1_13;
	if (var_1_61 >= stepLocal_24) {
		if (((var_1_75 << var_1_59) + var_1_61) <= stepLocal_25) {
			var_1_64 = (max (var_1_30 , (var_1_66 - var_1_29)));
		}
	} else {
		var_1_64 = var_1_61;
	}


	// From: Req11Batch54Amount500
	if ((var_1_28 > (100 << var_1_13)) && var_1_33) {
		if (! var_1_36) {
			var_1_44 = (var_1_95 - (var_1_45 - var_1_6));
		} else {
			var_1_44 = ((var_1_95 + var_1_64) - var_1_6);
		}
	} else {
		var_1_44 = var_1_51;
	}


	// From: Req4Batch54Amount500
	if (var_1_73 < var_1_73) {
		var_1_23 = (max (((var_1_24 + var_1_25) - (1 + var_1_91)) , (min ((55265 - var_1_64) , var_1_31))));
	}


	// From: Req9Batch54Amount500
	signed long int stepLocal_16 = ~ var_1_51;
	if (stepLocal_16 >= var_1_30) {
		if (var_1_97 <= (- (- var_1_41))) {
			var_1_42 = (var_1_89 - var_1_63);
		}
	} else {
		var_1_42 = ((abs (var_1_51)) + (var_1_44 + var_1_63));
	}


	// From: Req28Batch54Amount500
	signed long int stepLocal_34 = var_1_42;
	unsigned char stepLocal_33 = var_1_40;
	if (stepLocal_34 >= last_1_var_1_76) {
		var_1_76 = (last_1_var_1_76 - var_1_70);
	} else {
		if (var_1_33 && stepLocal_33) {
			var_1_76 = (max ((var_1_59 - (var_1_45 - var_1_92)) , var_1_91));
		} else {
			var_1_76 = (max ((8 - (min (1000 , var_1_45))) , (abs (var_1_64))));
		}
	}


	// From: Req23Batch54Amount500
	signed long int stepLocal_26 = var_1_42;
	if ((- var_1_51) <= stepLocal_26) {
		var_1_68 = (-16 + ((max (var_1_65 , var_1_61)) + (var_1_30 + var_1_94)));
	}


	// From: Req31Batch54Amount500
	signed long int stepLocal_36 = (var_1_70 + var_1_65) + var_1_44;
	if ((max ((abs (var_1_51)) , var_1_28)) < stepLocal_36) {
		if (! ((var_1_71 + var_1_23) < 100)) {
			var_1_79 = (min (var_1_52 , var_1_91));
		} else {
			var_1_79 = ((var_1_70 - var_1_52) + ((var_1_80 - 256) + (var_1_81 - var_1_29)));
		}
	}


	// From: Req12Batch54Amount500
	signed char stepLocal_18 = var_1_29;
	unsigned long int stepLocal_17 = 256u;
	if (var_1_40) {
		if (stepLocal_17 <= ((min (var_1_23 , var_1_92)) / var_1_24)) {
			var_1_46 = (min (var_1_18 , var_1_19));
		} else {
			if (var_1_34) {
				var_1_46 = (max ((abs (var_1_17)) , (var_1_47 - var_1_22)));
			} else {
				if (stepLocal_18 < var_1_31) {
					if (! var_1_33) {
						var_1_46 = ((min (var_1_22 , (6.1027537846462136E18f - var_1_21))) - var_1_47);
					}
				}
			}
		}
	}


	// From: Req33Batch54Amount500
	signed short int stepLocal_39 = var_1_68;
	signed long int stepLocal_38 = var_1_76;
	if (var_1_82 <= 4.625) {
		if (var_1_86 < stepLocal_38) {
			var_1_84 = (63.4 - var_1_22);
		} else {
			if (! (var_1_27 >= var_1_63)) {
				var_1_84 = 16.75;
			}
		}
	} else {
		if (var_1_34) {
			if (var_1_88 != stepLocal_39) {
				var_1_84 = (var_1_21 + (var_1_22 - var_1_57));
			} else {
				var_1_84 = var_1_56;
			}
		} else {
			var_1_84 = (max ((var_1_22 - var_1_57) , var_1_18));
		}
	}


	// From: Req14Batch54Amount500
	if (var_1_54 < var_1_84) {
		var_1_50 = var_1_18;
	} else {
		var_1_50 = var_1_17;
	}


	// From: Req13Batch54Amount500
	if (-5 != var_1_29) {
		if (4.725 < (min ((var_1_84 + var_1_19) , var_1_50))) {
			if ((var_1_18 > (abs (var_1_21))) || var_1_15) {
				var_1_48 = (min ((var_1_6 - var_1_29) , var_1_24));
			} else {
				var_1_48 = (var_1_6 - var_1_63);
			}
		}
	}


	// From: Req24Batch54Amount500
	unsigned short int stepLocal_29 = var_1_6;
	unsigned short int stepLocal_28 = var_1_48;
	unsigned long int stepLocal_27 = var_1_95;
	if (var_1_35) {
		if (var_1_33) {
			var_1_69 = (min (((var_1_66 + 16) + var_1_60) , (abs (var_1_52))));
		} else {
			var_1_69 = (var_1_61 - ((max (var_1_70 , var_1_71)) - var_1_1));
		}
	} else {
		if (var_1_86 > stepLocal_27) {
			if ((var_1_75 ^ (var_1_6 - var_1_1)) > stepLocal_28) {
				var_1_69 = (var_1_68 + var_1_1);
			}
		} else {
			if (last_1_var_1_69 >= stepLocal_29) {
				var_1_69 = (max (((var_1_70 - var_1_29) - 256) , ((min (var_1_87 , var_1_59)) - var_1_30)));
			}
		}
	}


	// From: Req3Batch54Amount500
	unsigned char stepLocal_4 = var_1_43;
	unsigned char stepLocal_3 = var_1_43;
	if (stepLocal_3 && var_1_12) {
		if (var_1_72 >= var_1_50) {
			var_1_16 = (((max (var_1_17 , var_1_18)) + var_1_19) + (min (var_1_20 , (var_1_21 - var_1_22))));
		}
	} else {
		if (stepLocal_4 && ((max (var_1_50 , var_1_20)) > var_1_22)) {
			var_1_16 = (max (var_1_21 , (var_1_17 + (var_1_19 + var_1_18))));
		}
	}


	// From: Req30Batch54Amount500
	if (! var_1_34) {
		if (var_1_97 > ((min (var_1_16 , var_1_54)) + var_1_47)) {
			var_1_78 = (abs (var_1_21));
		} else {
			var_1_78 = (max (var_1_17 , var_1_20));
		}
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 16383);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 16384);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 16384);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 63);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483646);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -115292.1504606845700e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 1152921.504606845700e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -115292.1504606845700e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 1152921.504606845700e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -1);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -128);
	assume_abort_if_not(var_1_65 <= 127);
	assume_abort_if_not(var_1_65 != 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 127);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_70 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_70 >= 16383);
	assume_abort_if_not(var_1_70 <= 32766);
	var_1_71 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_71 >= 16383);
	assume_abort_if_not(var_1_71 <= 32766);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 4611686.018427387900e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 8192);
	assume_abort_if_not(var_1_80 <= 16384);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 8191);
	assume_abort_if_not(var_1_81 <= 16383);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_97 = var_1_97;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((! ((- 9.9999999999925E11) >= var_1_82)) ? ((var_1_82 >= var_1_90) ? ((var_1_82 < 7.5) ? ((var_1_33 && (! (var_1_82 >= var_1_90))) ? (var_1_1 == ((unsigned short int) (var_1_6 - var_1_31))) : (var_1_1 == ((unsigned short int) (max ((min (var_1_31 , var_1_6)) , (max (var_1_63 , var_1_75))))))) : (var_1_1 == ((unsigned short int) var_1_6))) : (var_1_1 == ((unsigned short int) (57411 - var_1_31)))) : ((var_1_33 && (var_1_90 <= var_1_82)) ? (var_1_1 == ((unsigned short int) ((min (var_1_31 , var_1_51)) + var_1_91))) : 1)) && (last_1_var_1_53 ? (((abs (last_1_var_1_84)) < last_1_var_1_54) ? (((last_1_var_1_64 % (max (var_1_6 , var_1_13))) > last_1_var_1_86) ? (var_1_12 == ((unsigned char) (! (last_1_var_1_43 && (! var_1_15))))) : 1) : (var_1_12 == ((unsigned char) (! (! var_1_15))))) : (var_1_12 == ((unsigned char) ((last_1_var_1_84 >= last_1_var_1_54) && (! var_1_15)))))) && ((var_1_43 && var_1_12) ? ((var_1_72 >= var_1_50) ? (var_1_16 == ((float) (((max (var_1_17 , var_1_18)) + var_1_19) + (min (var_1_20 , (var_1_21 - var_1_22)))))) : 1) : ((var_1_43 && ((max (var_1_50 , var_1_20)) > var_1_22)) ? (var_1_16 == ((float) (max (var_1_21 , (var_1_17 + (var_1_19 + var_1_18)))))) : 1))) && ((var_1_73 < var_1_73) ? (var_1_23 == ((unsigned short int) (max (((var_1_24 + var_1_25) - (1 + var_1_91)) , (min ((55265 - var_1_64) , var_1_31)))))) : 1)) && ((! var_1_12) ? ((var_1_15 && var_1_53) ? (var_1_27 == ((signed long int) (last_1_var_1_27 - var_1_24))) : ((last_1_var_1_27 < ((var_1_25 + var_1_28) - var_1_24)) ? (var_1_27 == ((signed long int) var_1_24)) : (((10 - (var_1_29 - var_1_30)) > var_1_51) ? (var_1_27 == ((signed long int) 2)) : 1))) : (((var_1_25 > var_1_31) && var_1_15) ? (var_1_27 == ((signed long int) (min ((min (last_1_var_1_27 , (abs (var_1_6)))) , var_1_51)))) : 1))) && (((var_1_30 * var_1_28) <= (max ((last_1_var_1_1 - last_1_var_1_91) , var_1_29))) ? ((var_1_30 > last_1_var_1_91) ? ((last_1_var_1_78 < ((var_1_20 + var_1_18) * last_1_var_1_82)) ? (var_1_31 == ((unsigned char) var_1_30)) : (var_1_31 == ((unsigned char) (var_1_29 + var_1_30)))) : 1) : ((var_1_19 == ((var_1_22 + var_1_21) - var_1_32)) ? (var_1_31 == ((unsigned char) (var_1_29 + var_1_30))) : ((var_1_13 < var_1_28) ? ((((last_1_var_1_53 && last_1_var_1_43) && last_1_var_1_43) && (var_1_28 <= var_1_24)) ? (var_1_31 == ((unsigned char) var_1_30)) : (var_1_31 == ((unsigned char) 4))) : (var_1_31 == ((unsigned char) var_1_30)))))) && (var_1_15 ? ((var_1_20 >= last_1_var_1_78) ? (var_1_33 == ((unsigned char) ((var_1_34 && var_1_35) && (last_1_var_1_53 || (last_1_var_1_12 || var_1_36))))) : (var_1_33 == ((unsigned char) (last_1_var_1_12 && var_1_37)))) : (((var_1_17 <= var_1_19) || ((var_1_18 + var_1_32) != last_1_var_1_16)) ? ((last_1_var_1_91 < last_1_var_1_91) ? (var_1_33 == ((unsigned char) var_1_36)) : (var_1_33 == ((unsigned char) ((var_1_37 || var_1_40) || (! (var_1_35 || var_1_36)))))) : (var_1_33 == ((unsigned char) var_1_36))))) && ((((var_1_51 >= var_1_29) && (var_1_13 <= var_1_75)) && var_1_34) ? (var_1_41 == ((double) (min ((var_1_21 + (abs (var_1_20))) , var_1_22)))) : 1)) && (((~ var_1_51) >= var_1_30) ? ((var_1_97 <= (- (- var_1_41))) ? (var_1_42 == ((signed long int) (var_1_89 - var_1_63))) : 1) : (var_1_42 == ((signed long int) ((abs (var_1_51)) + (var_1_44 + var_1_63)))))) && ((last_1_var_1_16 < (last_1_var_1_97 * var_1_21)) ? (var_1_43 == ((unsigned char) (var_1_40 || var_1_37))) : (var_1_43 == ((unsigned char) (var_1_36 || (! var_1_40)))))) && (((var_1_28 > (100 << var_1_13)) && var_1_33) ? ((! var_1_36) ? (var_1_44 == ((signed long int) (var_1_95 - (var_1_45 - var_1_6)))) : (var_1_44 == ((signed long int) ((var_1_95 + var_1_64) - var_1_6)))) : (var_1_44 == ((signed long int) var_1_51)))) && (var_1_40 ? ((256u <= ((min (var_1_23 , var_1_92)) / var_1_24)) ? (var_1_46 == ((float) (min (var_1_18 , var_1_19)))) : (var_1_34 ? (var_1_46 == ((float) (max ((abs (var_1_17)) , (var_1_47 - var_1_22))))) : ((var_1_29 < var_1_31) ? ((! var_1_33) ? (var_1_46 == ((float) ((min (var_1_22 , (6.1027537846462136E18f - var_1_21))) - var_1_47))) : 1) : 1))) : 1)) && ((-5 != var_1_29) ? ((4.725 < (min ((var_1_84 + var_1_19) , var_1_50))) ? (((var_1_18 > (abs (var_1_21))) || var_1_15) ? (var_1_48 == ((unsigned short int) (min ((var_1_6 - var_1_29) , var_1_24)))) : (var_1_48 == ((unsigned short int) (var_1_6 - var_1_63)))) : 1) : 1)) && ((var_1_54 < var_1_84) ? (var_1_50 == ((float) var_1_18)) : (var_1_50 == ((float) var_1_17)))) && (((last_1_var_1_77 >= last_1_var_1_75) && var_1_36) ? (var_1_51 == ((unsigned char) ((max (var_1_29 , var_1_30)) + var_1_52))) : (var_1_51 == ((unsigned char) (max ((max ((min (var_1_52 , var_1_29)) , var_1_30)) , ((200 - 10) - 5))))))) && (((- last_1_var_1_63) < (last_1_var_1_58 & 64)) ? (var_1_53 == ((unsigned char) (var_1_34 && var_1_37))) : (var_1_53 == ((unsigned char) ((var_1_24 > last_1_var_1_79) && (! var_1_15)))))) && ((last_1_var_1_78 <= var_1_20) ? (var_1_54 == ((double) (var_1_18 + ((var_1_55 + var_1_56) + (1000000.5 - var_1_57))))) : (var_1_54 == ((double) (max ((var_1_22 - var_1_47) , var_1_19)))))) && ((((var_1_21 + var_1_57) - var_1_32) > var_1_82) ? (var_1_58 == ((signed char) (max (var_1_30 , (var_1_59 - (var_1_60 + var_1_61)))))) : (var_1_58 == ((signed char) (var_1_30 + var_1_60))))) && ((var_1_15 && var_1_34) ? (var_1_62 == ((double) (max (var_1_57 , (var_1_21 - var_1_47))))) : ((var_1_28 >= var_1_27) ? (var_1_62 == ((double) (min ((abs (var_1_21)) , (min (var_1_55 , var_1_47)))))) : 1))) && ((var_1_25 < var_1_28) ? (((var_1_30 + last_1_var_1_67) < (min ((var_1_60 / var_1_29) , (-100 + last_1_var_1_76)))) ? (var_1_63 == ((unsigned char) (abs (var_1_61)))) : (var_1_63 == ((unsigned char) (abs (var_1_60))))) : (var_1_63 == ((unsigned char) (abs (max (var_1_61 , 50))))))) && ((var_1_61 >= ((var_1_93 / var_1_65) / var_1_13)) ? ((((var_1_75 << var_1_59) + var_1_61) <= var_1_93) ? (var_1_64 == ((unsigned char) (max (var_1_30 , (var_1_66 - var_1_29))))) : 1) : (var_1_64 == ((unsigned char) var_1_61)))) && ((var_1_97 < var_1_73) ? (var_1_33 ? (var_1_67 == ((unsigned short int) (var_1_6 - (var_1_30 + (min (var_1_29 , var_1_61)))))) : (var_1_67 == ((unsigned short int) (abs (var_1_63))))) : 1)) && (((- var_1_51) <= var_1_42) ? (var_1_68 == ((signed short int) (-16 + ((max (var_1_65 , var_1_61)) + (var_1_30 + var_1_94))))) : 1)) && (var_1_35 ? (var_1_33 ? (var_1_69 == ((signed short int) (min (((var_1_66 + 16) + var_1_60) , (abs (var_1_52)))))) : (var_1_69 == ((signed short int) (var_1_61 - ((max (var_1_70 , var_1_71)) - var_1_1))))) : ((var_1_86 > var_1_95) ? (((var_1_75 ^ (var_1_6 - var_1_1)) > var_1_48) ? (var_1_69 == ((signed short int) (var_1_68 + var_1_1))) : 1) : ((last_1_var_1_69 >= var_1_6) ? (var_1_69 == ((signed short int) (max (((var_1_70 - var_1_29) - 256) , ((min (var_1_87 , var_1_59)) - var_1_30))))) : 1)))) && ((var_1_43 || var_1_40) ? (var_1_33 ? (var_1_72 == ((float) ((var_1_21 + var_1_57) - var_1_47))) : 1) : 1)) && ((last_1_var_1_23 == var_1_28) ? ((((var_1_74 - var_1_57) - var_1_22) >= last_1_var_1_62) ? (var_1_15 ? ((((var_1_32 - var_1_47) <= (last_1_var_1_97 + var_1_20)) && ((var_1_66 * var_1_13) <= last_1_var_1_77)) ? (var_1_73 == ((double) var_1_19)) : 1) : (var_1_73 == ((double) (var_1_21 - var_1_22)))) : (var_1_73 == ((double) (var_1_22 + var_1_18)))) : (var_1_73 == ((double) (min ((max (var_1_55 , var_1_22)) , var_1_19)))))) && (((max ((var_1_6 - 25) , (var_1_70 * var_1_58))) <= -500) ? (var_1_75 == ((unsigned char) (var_1_66 - (abs (var_1_61))))) : 1)) && ((var_1_42 >= last_1_var_1_76) ? (var_1_76 == ((signed long int) (last_1_var_1_76 - var_1_70))) : ((var_1_33 && var_1_40) ? (var_1_76 == ((signed long int) (max ((var_1_59 - (var_1_45 - var_1_92)) , var_1_91)))) : (var_1_76 == ((signed long int) (max ((8 - (min (1000 , var_1_45))) , (abs (var_1_64))))))))) && (((var_1_17 <= var_1_57) || var_1_12) ? (var_1_77 == ((signed long int) var_1_65)) : 1)) && ((! var_1_34) ? ((var_1_97 > ((min (var_1_16 , var_1_54)) + var_1_47)) ? (var_1_78 == ((double) (abs (var_1_21)))) : (var_1_78 == ((double) (max (var_1_17 , var_1_20))))) : 1)) && (((max ((abs (var_1_51)) , var_1_28)) < ((var_1_70 + var_1_65) + var_1_44)) ? ((! ((var_1_71 + var_1_23) < 100)) ? (var_1_79 == ((unsigned short int) (min (var_1_52 , var_1_91)))) : (var_1_79 == ((unsigned short int) ((var_1_70 - var_1_52) + ((var_1_80 - 256) + (var_1_81 - var_1_29)))))) : 1)) && ((var_1_95 != var_1_94) ? (var_1_82 == ((double) (max (var_1_47 , (abs (var_1_21)))))) : (var_1_82 == ((double) (min (var_1_55 , var_1_57)))))) && ((var_1_82 <= 4.625) ? ((var_1_86 < var_1_76) ? (var_1_84 == ((double) (63.4 - var_1_22))) : ((! (var_1_27 >= var_1_63)) ? (var_1_84 == ((double) 16.75)) : 1)) : (var_1_34 ? ((var_1_88 != var_1_68) ? (var_1_84 == ((double) (var_1_21 + (var_1_22 - var_1_57)))) : (var_1_84 == ((double) var_1_56))) : (var_1_84 == ((double) (max ((var_1_22 - var_1_57) , var_1_18))))))) && (var_1_43 ? (var_1_33 ? (var_1_53 ? (var_1_86 == ((unsigned short int) var_1_28)) : (var_1_86 == ((unsigned short int) var_1_61))) : (var_1_86 == ((unsigned short int) var_1_25))) : (var_1_86 == ((unsigned short int) var_1_60)))) && (var_1_87 == ((signed char) var_1_60))) && (var_1_88 == ((signed short int) 1))) && (var_1_89 == ((signed long int) var_1_61))) && (var_1_90 == ((float) var_1_20))) && (var_1_35 ? (var_1_91 == ((unsigned char) var_1_52)) : (var_1_91 == ((unsigned char) 10)))) && (var_1_34 ? (var_1_92 == ((unsigned long int) var_1_29)) : 1)) && (var_1_93 == ((unsigned long int) 64u))) && (var_1_35 ? (var_1_94 == ((unsigned long int) var_1_28)) : (var_1_94 == ((unsigned long int) var_1_24)))) && (var_1_12 ? (var_1_95 == ((unsigned long int) var_1_63)) : 1)) && (var_1_53 ? (var_1_96 == ((signed char) var_1_61)) : (var_1_96 == ((signed char) var_1_30)))) && ((var_1_25 > last_1_var_1_27) ? (var_1_97 == ((float) (max (var_1_56 , var_1_20)))) : ((last_1_var_1_73 <= var_1_47) ? (var_1_97 == ((float) var_1_47)) : (last_1_var_1_33 ? (var_1_97 == ((float) var_1_47)) : 1)))
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
