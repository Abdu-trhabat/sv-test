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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 256;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 256.75;
float var_1_15 = 256.25;
float var_1_16 = 8.95;
float var_1_17 = 256.375;
float var_1_18 = 0.0;
float var_1_19 = 3.75;
unsigned short int var_1_20 = 64;
float var_1_22 = 100.5;
unsigned short int var_1_23 = 50;
double var_1_25 = 32.6;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
double var_1_29 = 100.4;
signed short int var_1_32 = 8;
signed short int var_1_33 = 2;
double var_1_34 = 0.0;
double var_1_35 = 63.8;
double var_1_36 = 127.75;
double var_1_37 = 0.4;
unsigned long int var_1_38 = 50;
unsigned long int var_1_39 = 3554953517;
unsigned long int var_1_41 = 1668301826;
float var_1_42 = 63.75;
unsigned char var_1_43 = 0;
signed short int var_1_46 = -2;
signed short int var_1_47 = 20527;
double var_1_48 = 7.5;
unsigned char var_1_49 = 0;
signed char var_1_50 = 32;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 256;
unsigned long int var_1_54 = 4278958049;
unsigned long int var_1_55 = 3317535625;
unsigned long int var_1_56 = 256;
signed short int var_1_57 = -32;
double var_1_58 = 7.2;
signed long int var_1_59 = 1;
unsigned short int var_1_60 = 10;
unsigned short int var_1_61 = 62790;
unsigned char var_1_62 = 100;
signed long int var_1_63 = 256;
double var_1_64 = 63.625;
signed long int var_1_65 = 10;
unsigned char var_1_66 = 0;
signed short int var_1_67 = 256;
signed short int var_1_68 = 25435;
signed char var_1_69 = 16;
float var_1_70 = 256.5;
double var_1_71 = 24.95;
signed short int var_1_74 = 4;
signed short int var_1_75 = 10000;
signed short int var_1_76 = 0;
double var_1_77 = 7.5;
unsigned char var_1_78 = 2;
unsigned char var_1_80 = 128;
unsigned long int var_1_81 = 32;
double var_1_83 = 100000000000000.5;
double var_1_84 = 127.25;
unsigned long int var_1_85 = 16;
signed long int var_1_86 = -32;
signed short int var_1_87 = 0;
signed char var_1_88 = -10;
signed long int var_1_89 = -16;
unsigned char var_1_90 = 5;
signed short int var_1_91 = 32;
unsigned char var_1_92 = 4;
unsigned short int var_1_93 = 2;
signed long int var_1_94 = -1000;
unsigned short int var_1_95 = 4;
float var_1_96 = 9.6;
float var_1_97 = 255.8;
double var_1_98 = 31.375;
double var_1_99 = 10.25;
float var_1_101 = 0.2;
signed short int var_1_102 = -64;
unsigned char var_1_104 = 0;
signed char var_1_105 = 0;
unsigned short int var_1_106 = 200;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 1;
float last_1_var_1_13 = 256.75;
unsigned short int last_1_var_1_20 = 64;
unsigned short int last_1_var_1_23 = 50;
unsigned char last_1_var_1_26 = 1;
unsigned long int last_1_var_1_38 = 50;
unsigned char last_1_var_1_43 = 0;
signed short int last_1_var_1_46 = -2;
unsigned char last_1_var_1_49 = 0;
unsigned long int last_1_var_1_53 = 256;
signed long int last_1_var_1_59 = 1;
unsigned short int last_1_var_1_60 = 10;
unsigned char last_1_var_1_62 = 100;
double last_1_var_1_64 = 63.625;
signed long int last_1_var_1_65 = 10;
unsigned char last_1_var_1_66 = 0;
signed short int last_1_var_1_67 = 256;
signed short int last_1_var_1_74 = 4;
unsigned char last_1_var_1_78 = 2;
unsigned long int last_1_var_1_81 = 32;
unsigned long int last_1_var_1_85 = 16;
signed short int last_1_var_1_87 = 0;
signed char last_1_var_1_88 = -10;
signed long int last_1_var_1_89 = -16;
unsigned char last_1_var_1_90 = 5;
signed short int last_1_var_1_91 = 32;
unsigned char last_1_var_1_92 = 4;
unsigned short int last_1_var_1_93 = 2;
signed short int last_1_var_1_102 = -64;
unsigned short int last_1_var_1_106 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch44Amount500
	if (last_1_var_1_65 <= (abs (last_1_var_1_23))) {
		if ((2 - var_1_33) != (~ (last_1_var_1_66 / var_1_47))) {
			var_1_53 = (min (var_1_47 , (min ((last_1_var_1_87 + var_1_41) , last_1_var_1_90))));
		} else {
			if (var_1_8 || last_1_var_1_26) {
				var_1_53 = (((var_1_54 - var_1_32) - (min (last_1_var_1_53 , last_1_var_1_66))) - last_1_var_1_74);
			} else {
				var_1_53 = ((var_1_55 - var_1_47) - (min (last_1_var_1_90 , last_1_var_1_87)));
			}
		}
	} else {
		var_1_53 = (var_1_39 - 8u);
	}


	// From: Req53Batch44Amount500
	if (var_1_28) {
		var_1_102 = (min (var_1_33 , last_1_var_1_66));
	} else {
		var_1_102 = ((max (last_1_var_1_102 , (last_1_var_1_67 + 5))) + var_1_32);
	}


	// From: Req34Batch44Amount500
	if (! (last_1_var_1_85 <= (- last_1_var_1_78))) {
		var_1_78 = (min (var_1_69 , var_1_33));
	} else {
		if (((last_1_var_1_46 - last_1_var_1_78) * (last_1_var_1_20 * last_1_var_1_89)) < ((last_1_var_1_91 * var_1_33) / (abs (var_1_55)))) {
			var_1_78 = (var_1_80 - (min (var_1_69 , var_1_32)));
		}
	}


	// From: Req6Batch44Amount500
	var_1_20 = (45013 - var_1_78);


	// From: Req14Batch44Amount500
	signed long int stepLocal_12 = last_1_var_1_106;
	signed long int stepLocal_11 = last_1_var_1_88;
	if (stepLocal_12 <= ((16 + last_1_var_1_38) - last_1_var_1_92)) {
		var_1_43 = (! 1);
	} else {
		if (stepLocal_11 < last_1_var_1_66) {
			var_1_43 = (var_1_28 && var_1_12);
		} else {
			if ((last_1_var_1_64 * var_1_36) < (max ((var_1_37 + var_1_35) , 31.5))) {
				var_1_43 = (var_1_4 && (! var_1_28));
			}
		}
	}


	// From: Req27Batch44Amount500
	if (var_1_28) {
		if (! ((var_1_61 - last_1_var_1_60) == last_1_var_1_106)) {
			if (last_1_var_1_49 && var_1_8) {
				var_1_65 = (abs (5));
			} else {
				var_1_65 = -1;
			}
		}
	} else {
		if (32u > (var_1_55 * (~ var_1_41))) {
			var_1_65 = (abs (var_1_32));
		} else {
			var_1_65 = (last_1_var_1_62 + last_1_var_1_59);
		}
	}


	// From: Req15Batch44Amount500
	signed long int stepLocal_13 = last_1_var_1_93;
	if ((min (var_1_17 , var_1_34)) < var_1_19) {
		if (stepLocal_13 < -5) {
			if (last_1_var_1_43) {
				if (var_1_12) {
					var_1_46 = ((var_1_47 - var_1_32) - last_1_var_1_62);
				} else {
					var_1_46 = last_1_var_1_90;
				}
			} else {
				var_1_46 = ((var_1_47 - last_1_var_1_90) - last_1_var_1_62);
			}
		} else {
			if (var_1_35 == (last_1_var_1_13 + (min (var_1_15 , var_1_17)))) {
				var_1_46 = (min ((abs (last_1_var_1_62)) , var_1_47));
			}
		}
	}


	// From: Req24Batch44Amount500
	unsigned char stepLocal_22 = var_1_54 < last_1_var_1_81;
	unsigned char stepLocal_21 = last_1_var_1_11;
	if (var_1_12 && stepLocal_22) {
		if (stepLocal_21 || var_1_51) {
			var_1_62 = (max (var_1_32 , (min (8 , var_1_33))));
		} else {
			var_1_62 = var_1_32;
		}
	}


	// From: Req28Batch44Amount500
	signed long int stepLocal_24 = (last_1_var_1_92 + last_1_var_1_91) + last_1_var_1_20;
	if (stepLocal_24 <= (abs (last_1_var_1_66))) {
		var_1_66 = var_1_33;
	} else {
		var_1_66 = 2;
	}


	// From: Req23Batch44Amount500
	unsigned long int stepLocal_20 = var_1_41;
	signed long int stepLocal_19 = -8;
	if (stepLocal_20 <= var_1_66) {
		if (((var_1_33 + var_1_47) - last_1_var_1_60) > stepLocal_19) {
			var_1_60 = (max (((var_1_33 + var_1_66) + var_1_47) , var_1_32));
		}
	} else {
		var_1_60 = (var_1_61 - var_1_66);
	}


	// From: Req4Batch44Amount500
	var_1_11 = ((var_1_8 || var_1_4) && var_1_12);


	// From: Req7Batch44Amount500
	var_1_22 = (max ((max ((max (var_1_15 , var_1_16)) , var_1_19)) , var_1_17));


	// From: Req9Batch44Amount500
	var_1_25 = (max (((max (var_1_19 , 999.5)) - var_1_17) , var_1_16));


	// From: Req26Batch44Amount500
	var_1_64 = (min (var_1_17 , (var_1_19 - (max (var_1_37 , var_1_36)))));


	// From: Req36Batch44Amount500
	var_1_84 = var_1_34;


	// From: Req39Batch44Amount500
	if (var_1_11) {
		var_1_87 = var_1_69;
	}


	// From: Req42Batch44Amount500
	if (var_1_28) {
		var_1_90 = var_1_32;
	} else {
		var_1_90 = var_1_80;
	}


	// From: Req44Batch44Amount500
	var_1_92 = var_1_32;


	// From: Req46Batch44Amount500
	var_1_94 = var_1_39;


	// From: Req47Batch44Amount500
	var_1_95 = var_1_33;


	// From: Req48Batch44Amount500
	var_1_96 = var_1_17;


	// From: Req49Batch44Amount500
	if (var_1_11) {
		var_1_97 = var_1_19;
	} else {
		var_1_97 = var_1_18;
	}


	// From: Req50Batch44Amount500
	var_1_98 = var_1_15;


	// From: Req52Batch44Amount500
	var_1_101 = var_1_15;


	// From: Req54Batch44Amount500
	var_1_104 = var_1_8;


	// From: Req55Batch44Amount500
	var_1_105 = var_1_69;


	// From: Req56Batch44Amount500
	var_1_106 = 32;


	// From: Req11Batch44Amount500
	signed long int stepLocal_5 = (var_1_90 + var_1_90) - var_1_62;
	signed long int stepLocal_4 = var_1_92 - var_1_106;
	signed long int stepLocal_3 = var_1_102 >> var_1_94;
	if (var_1_12) {
		if (var_1_106 <= stepLocal_3) {
			if (stepLocal_5 >= 128) {
				if (stepLocal_4 <= (var_1_62 >> (var_1_32 + var_1_33))) {
					var_1_29 = (-0.4 + var_1_19);
				} else {
					var_1_29 = (((min (var_1_18 , var_1_34)) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37));
				}
			}
		}
	}


	// From: Req18Batch44Amount500
	if (var_1_98 >= ((- var_1_19) / var_1_18)) {
		var_1_52 = var_1_12;
	} else {
		var_1_52 = (var_1_43 || var_1_12);
	}


	// From: Req32Batch44Amount500
	unsigned char stepLocal_28 = var_1_66;
	if (stepLocal_28 != var_1_62) {
		var_1_74 = (var_1_47 - ((10000 + var_1_75) - var_1_90));
	} else {
		var_1_74 = ((var_1_66 + var_1_60) + (max (var_1_69 , var_1_46)));
	}


	// From: Req2Batch44Amount500
	signed short int stepLocal_0 = var_1_46;
	if (stepLocal_0 <= (var_1_90 - var_1_90)) {
		var_1_5 = (var_1_104 || var_1_4);
	} else {
		var_1_5 = (! (! var_1_8));
	}


	// From: Req41Batch44Amount500
	if (var_1_11) {
		var_1_89 = var_1_95;
	} else {
		var_1_89 = var_1_62;
	}


	// From: Req8Batch44Amount500
	if ((9999999.6 / var_1_18) > var_1_16) {
		var_1_23 = (abs (var_1_90 + var_1_66));
	}


	// From: Req1Batch44Amount500
	if (var_1_90 >= var_1_95) {
		var_1_1 = (! var_1_4);
	}


	// From: Req3Batch44Amount500
	var_1_9 = (min (-10 , var_1_90));


	// From: Req13Batch44Amount500
	if (! var_1_8) {
		if (4 < var_1_105) {
			var_1_42 = var_1_19;
		} else {
			var_1_42 = (((16.24f - var_1_35) + var_1_36) + var_1_37);
		}
	} else {
		if (var_1_78 != 64) {
			var_1_42 = (min (var_1_18 , var_1_19));
		} else {
			var_1_42 = (255.84f - var_1_35);
		}
	}


	// From: Req21Batch44Amount500
	unsigned short int stepLocal_18 = var_1_20;
	if (stepLocal_18 <= (var_1_62 / var_1_55)) {
		if ((var_1_96 * (- var_1_35)) != (min ((var_1_18 - var_1_58) , 7.75))) {
			var_1_57 = ((abs (var_1_33)) + var_1_50);
		} else {
			var_1_57 = var_1_50;
		}
	}


	// From: Req51Batch44Amount500
	if (var_1_52) {
		var_1_99 = var_1_35;
	} else {
		var_1_99 = var_1_17;
	}


	// From: Req37Batch44Amount500
	if (var_1_5) {
		var_1_85 = var_1_53;
	} else {
		var_1_85 = var_1_46;
	}


	// From: Req10Batch44Amount500
	unsigned long int stepLocal_2 = var_1_92 * var_1_85;
	if (stepLocal_2 > (var_1_60 - var_1_65)) {
		var_1_26 = (! ((var_1_4 && var_1_12) && var_1_28));
	}


	// From: Req40Batch44Amount500
	if (var_1_52) {
		var_1_88 = var_1_69;
	} else {
		var_1_88 = var_1_33;
	}


	// From: Req25Batch44Amount500
	unsigned long int stepLocal_23 = min (var_1_54 , var_1_88);
	if (-8 > stepLocal_23) {
		var_1_63 = (var_1_92 - var_1_47);
	} else {
		var_1_63 = var_1_60;
	}


	// From: Req17Batch44Amount500
	signed long int stepLocal_15 = max (var_1_60 , var_1_66);
	signed long int stepLocal_14 = (min (var_1_89 , var_1_62)) / var_1_50;
	if (stepLocal_14 > (var_1_33 << var_1_23)) {
		var_1_49 = ((var_1_12 && var_1_28) && (var_1_4 && (var_1_104 || var_1_51)));
	} else {
		if (var_1_62 > stepLocal_15) {
			var_1_49 = var_1_28;
		} else {
			var_1_49 = (! var_1_4);
		}
	}


	// From: Req38Batch44Amount500
	if (var_1_49) {
		var_1_86 = var_1_50;
	} else {
		var_1_86 = var_1_66;
	}


	// From: Req30Batch44Amount500
	unsigned short int stepLocal_27 = var_1_95;
	unsigned char stepLocal_26 = var_1_90;
	unsigned short int stepLocal_25 = var_1_23;
	if (stepLocal_25 > (abs (var_1_102))) {
		if (var_1_47 >= stepLocal_26) {
			var_1_70 = (min (var_1_17 , (var_1_35 + var_1_19)));
		}
	} else {
		if (var_1_42 >= (5.6f / (max (var_1_18 , var_1_34)))) {
			if (! (var_1_33 <= var_1_86)) {
				var_1_70 = (var_1_37 - var_1_35);
			} else {
				if ((min ((var_1_33 - var_1_69) , var_1_68)) >= stepLocal_27) {
					var_1_70 = (min (1.000000000325E9f , 2.25f));
				} else {
					var_1_70 = (var_1_18 - var_1_37);
				}
			}
		} else {
			var_1_70 = var_1_35;
		}
	}


	// From: Req12Batch44Amount500
	signed long int stepLocal_10 = var_1_63 ^ var_1_32;
	unsigned char stepLocal_9 = var_1_90;
	signed long int stepLocal_8 = ~ var_1_90;
	unsigned char stepLocal_7 = var_1_92;
	signed long int stepLocal_6 = var_1_78 - var_1_90;
	if (var_1_17 >= (- var_1_34)) {
		if (stepLocal_9 <= -1) {
			if (stepLocal_8 > (var_1_78 & (var_1_90 * var_1_66))) {
				var_1_38 = var_1_62;
			}
		} else {
			var_1_38 = ((var_1_39 - (var_1_46 + 500u)) - 4u);
		}
	} else {
		if (var_1_63 <= stepLocal_10) {
			if (var_1_15 <= var_1_96) {
				if ((var_1_62 * var_1_63) <= stepLocal_6) {
					var_1_38 = var_1_78;
				} else {
					var_1_38 = 200u;
				}
			} else {
				if (((var_1_39 - var_1_33) >> var_1_105) > stepLocal_7) {
					if (var_1_4) {
						var_1_38 = (((max (var_1_41 , 1726043421u)) - var_1_62) + (var_1_90 + 8u));
					}
				} else {
					var_1_38 = var_1_62;
				}
			}
		}
	}


	// From: Req5Batch44Amount500
	signed long int stepLocal_1 = var_1_63;
	if (var_1_49) {
		if (var_1_90 > stepLocal_1) {
			var_1_13 = (max (var_1_15 , var_1_16));
		}
	} else {
		var_1_13 = (abs (var_1_17 - (var_1_18 - var_1_19)));
	}


	// From: Req29Batch44Amount500
	if (((32 / var_1_61) + var_1_74) <= (abs (var_1_9))) {
		var_1_67 = (max ((var_1_102 - 10) , (max (var_1_65 , (min (var_1_50 , var_1_33))))));
	} else {
		if (var_1_74 >= var_1_62) {
			var_1_67 = (var_1_62 - (var_1_68 - (max (var_1_32 , 4))));
		} else {
			if ((var_1_38 >> (var_1_69 - var_1_32)) <= var_1_33) {
				if (var_1_29 >= var_1_97) {
					var_1_67 = (var_1_90 - var_1_47);
				} else {
					var_1_67 = (min (var_1_32 , (max ((var_1_33 - 256) , var_1_65))));
				}
			}
		}
	}


	// From: Req16Batch44Amount500
	if (var_1_23 == var_1_95) {
		if (var_1_74 == var_1_65) {
			var_1_48 = (min (var_1_36 , var_1_19));
		} else {
			if (var_1_67 <= (var_1_53 ^ (var_1_65 * var_1_41))) {
				var_1_48 = (var_1_36 + var_1_19);
			}
		}
	}


	// From: Req31Batch44Amount500
	if (! (var_1_15 > (var_1_64 + var_1_48))) {
		if (! (var_1_68 == var_1_55)) {
			var_1_71 = var_1_17;
		} else {
			var_1_71 = ((max ((var_1_34 - var_1_36) , var_1_19)) - var_1_17);
		}
	}


	// From: Req20Batch44Amount500
	signed long int stepLocal_17 = var_1_33 * (var_1_32 + var_1_66);
	unsigned char stepLocal_16 = var_1_49;
	if (var_1_49) {
		var_1_56 = (max (50u , var_1_41));
	} else {
		if (var_1_4 || stepLocal_16) {
			if ((var_1_71 / var_1_18) <= (- var_1_37)) {
				var_1_56 = (var_1_55 - 100u);
			} else {
				if ((~ (~ var_1_63)) > stepLocal_17) {
					if (var_1_8) {
						var_1_56 = (max (var_1_63 , 256u));
					}
				} else {
					var_1_56 = (var_1_55 - (var_1_41 - var_1_92));
				}
			}
		}
	}


	// From: Req33Batch44Amount500
	if (var_1_71 < ((var_1_37 - var_1_34) / (max (var_1_18 , var_1_77)))) {
		if (var_1_28) {
			var_1_76 = (((min (var_1_86 , var_1_32)) + var_1_69) + var_1_87);
		} else {
			var_1_76 = ((max (var_1_86 , var_1_87)) + (var_1_32 + var_1_33));
		}
	}


	// From: Req35Batch44Amount500
	unsigned char stepLocal_30 = var_1_26;
	signed long int stepLocal_29 = (var_1_33 * var_1_23) / (abs (var_1_68));
	if (stepLocal_30 && var_1_104) {
		if (var_1_4) {
			var_1_81 = (var_1_54 - var_1_62);
		} else {
			var_1_81 = (((1986856993u - var_1_75) - var_1_33) + var_1_76);
		}
	} else {
		if (stepLocal_29 >= var_1_75) {
			if (var_1_37 <= ((var_1_101 / var_1_83) + var_1_64)) {
				var_1_81 = var_1_62;
			}
		} else {
			if (var_1_18 > (abs (var_1_25))) {
				var_1_81 = (min (var_1_32 , (var_1_66 + var_1_33)));
			} else {
				var_1_81 = (var_1_78 + (var_1_41 - var_1_75));
			}
		}
	}


	// From: Req43Batch44Amount500
	if (var_1_43) {
		var_1_91 = var_1_76;
	} else {
		var_1_91 = var_1_69;
	}


	// From: Req45Batch44Amount500
	if (var_1_49) {
		var_1_93 = var_1_69;
	} else {
		var_1_93 = var_1_91;
	}


	// From: Req22Batch44Amount500
	if (var_1_41 <= 10u) {
		var_1_59 = ((abs (var_1_93)) + var_1_47);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 9);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 8);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 4611686.018427382800e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 3221225470);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 1073741823);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 16382);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -128);
	assume_abort_if_not(var_1_50 <= 127);
	assume_abort_if_not(var_1_50 != 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 3758096382);
	assume_abort_if_not(var_1_54 <= 4294967294);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 3221225470);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 32767);
	assume_abort_if_not(var_1_61 <= 65534);
	var_1_68 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_68 >= 16383);
	assume_abort_if_not(var_1_68 <= 32766);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 16);
	assume_abort_if_not(var_1_69 <= 32);
	var_1_75 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_75 >= 8192);
	assume_abort_if_not(var_1_75 <= 16383);
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	assume_abort_if_not(var_1_77 != 0.0F);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 127);
	assume_abort_if_not(var_1_80 <= 254);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= -922337.2036854776000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	assume_abort_if_not(var_1_83 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_106 = var_1_106;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_90 >= var_1_95) ? (var_1_1 == ((unsigned char) (! var_1_4))) : 1) && ((var_1_46 <= (var_1_90 - var_1_90)) ? (var_1_5 == ((unsigned char) (var_1_104 || var_1_4))) : (var_1_5 == ((unsigned char) (! (! var_1_8)))))) && (var_1_9 == ((signed short int) (min (-10 , var_1_90))))) && (var_1_11 == ((unsigned char) ((var_1_8 || var_1_4) && var_1_12)))) && (var_1_49 ? ((var_1_90 > var_1_63) ? (var_1_13 == ((float) (max (var_1_15 , var_1_16)))) : 1) : (var_1_13 == ((float) (abs (var_1_17 - (var_1_18 - var_1_19))))))) && (var_1_20 == ((unsigned short int) (45013 - var_1_78)))) && (var_1_22 == ((float) (max ((max ((max (var_1_15 , var_1_16)) , var_1_19)) , var_1_17))))) && (((9999999.6 / var_1_18) > var_1_16) ? (var_1_23 == ((unsigned short int) (abs (var_1_90 + var_1_66)))) : 1)) && (var_1_25 == ((double) (max (((max (var_1_19 , 999.5)) - var_1_17) , var_1_16))))) && (((var_1_92 * var_1_85) > (var_1_60 - var_1_65)) ? (var_1_26 == ((unsigned char) (! ((var_1_4 && var_1_12) && var_1_28)))) : 1)) && (var_1_12 ? ((var_1_106 <= (var_1_102 >> var_1_94)) ? ((((var_1_90 + var_1_90) - var_1_62) >= 128) ? (((var_1_92 - var_1_106) <= (var_1_62 >> (var_1_32 + var_1_33))) ? (var_1_29 == ((double) (-0.4 + var_1_19))) : (var_1_29 == ((double) (((min (var_1_18 , var_1_34)) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37))))) : 1) : 1) : 1)) && ((var_1_17 >= (- var_1_34)) ? ((var_1_90 <= -1) ? (((~ var_1_90) > (var_1_78 & (var_1_90 * var_1_66))) ? (var_1_38 == ((unsigned long int) var_1_62)) : 1) : (var_1_38 == ((unsigned long int) ((var_1_39 - (var_1_46 + 500u)) - 4u)))) : ((var_1_63 <= (var_1_63 ^ var_1_32)) ? ((var_1_15 <= var_1_96) ? (((var_1_62 * var_1_63) <= (var_1_78 - var_1_90)) ? (var_1_38 == ((unsigned long int) var_1_78)) : (var_1_38 == ((unsigned long int) 200u))) : ((((var_1_39 - var_1_33) >> var_1_105) > var_1_92) ? (var_1_4 ? (var_1_38 == ((unsigned long int) (((max (var_1_41 , 1726043421u)) - var_1_62) + (var_1_90 + 8u)))) : 1) : (var_1_38 == ((unsigned long int) var_1_62)))) : 1))) && ((! var_1_8) ? ((4 < var_1_105) ? (var_1_42 == ((float) var_1_19)) : (var_1_42 == ((float) (((16.24f - var_1_35) + var_1_36) + var_1_37)))) : ((var_1_78 != 64) ? (var_1_42 == ((float) (min (var_1_18 , var_1_19)))) : (var_1_42 == ((float) (255.84f - var_1_35)))))) && ((last_1_var_1_106 <= ((16 + last_1_var_1_38) - last_1_var_1_92)) ? (var_1_43 == ((unsigned char) (! 1))) : ((last_1_var_1_88 < last_1_var_1_66) ? (var_1_43 == ((unsigned char) (var_1_28 && var_1_12))) : (((last_1_var_1_64 * var_1_36) < (max ((var_1_37 + var_1_35) , 31.5))) ? (var_1_43 == ((unsigned char) (var_1_4 && (! var_1_28)))) : 1)))) && (((min (var_1_17 , var_1_34)) < var_1_19) ? ((last_1_var_1_93 < -5) ? (last_1_var_1_43 ? (var_1_12 ? (var_1_46 == ((signed short int) ((var_1_47 - var_1_32) - last_1_var_1_62))) : (var_1_46 == ((signed short int) last_1_var_1_90))) : (var_1_46 == ((signed short int) ((var_1_47 - last_1_var_1_90) - last_1_var_1_62)))) : ((var_1_35 == (last_1_var_1_13 + (min (var_1_15 , var_1_17)))) ? (var_1_46 == ((signed short int) (min ((abs (last_1_var_1_62)) , var_1_47)))) : 1)) : 1)) && ((var_1_23 == var_1_95) ? ((var_1_74 == var_1_65) ? (var_1_48 == ((double) (min (var_1_36 , var_1_19)))) : ((var_1_67 <= (var_1_53 ^ (var_1_65 * var_1_41))) ? (var_1_48 == ((double) (var_1_36 + var_1_19))) : 1)) : 1)) && ((((min (var_1_89 , var_1_62)) / var_1_50) > (var_1_33 << var_1_23)) ? (var_1_49 == ((unsigned char) ((var_1_12 && var_1_28) && (var_1_4 && (var_1_104 || var_1_51))))) : ((var_1_62 > (max (var_1_60 , var_1_66))) ? (var_1_49 == ((unsigned char) var_1_28)) : (var_1_49 == ((unsigned char) (! var_1_4)))))) && ((var_1_98 >= ((- var_1_19) / var_1_18)) ? (var_1_52 == ((unsigned char) var_1_12)) : (var_1_52 == ((unsigned char) (var_1_43 || var_1_12))))) && ((last_1_var_1_65 <= (abs (last_1_var_1_23))) ? (((2 - var_1_33) != (~ (last_1_var_1_66 / var_1_47))) ? (var_1_53 == ((unsigned long int) (min (var_1_47 , (min ((last_1_var_1_87 + var_1_41) , last_1_var_1_90)))))) : ((var_1_8 || last_1_var_1_26) ? (var_1_53 == ((unsigned long int) (((var_1_54 - var_1_32) - (min (last_1_var_1_53 , last_1_var_1_66))) - last_1_var_1_74))) : (var_1_53 == ((unsigned long int) ((var_1_55 - var_1_47) - (min (last_1_var_1_90 , last_1_var_1_87))))))) : (var_1_53 == ((unsigned long int) (var_1_39 - 8u))))) && (var_1_49 ? (var_1_56 == ((unsigned long int) (max (50u , var_1_41)))) : ((var_1_4 || var_1_49) ? (((var_1_71 / var_1_18) <= (- var_1_37)) ? (var_1_56 == ((unsigned long int) (var_1_55 - 100u))) : (((~ (~ var_1_63)) > (var_1_33 * (var_1_32 + var_1_66))) ? (var_1_8 ? (var_1_56 == ((unsigned long int) (max (var_1_63 , 256u)))) : 1) : (var_1_56 == ((unsigned long int) (var_1_55 - (var_1_41 - var_1_92)))))) : 1))) && ((var_1_20 <= (var_1_62 / var_1_55)) ? (((var_1_96 * (- var_1_35)) != (min ((var_1_18 - var_1_58) , 7.75))) ? (var_1_57 == ((signed short int) ((abs (var_1_33)) + var_1_50))) : (var_1_57 == ((signed short int) var_1_50))) : 1)) && ((var_1_41 <= 10u) ? (var_1_59 == ((signed long int) ((abs (var_1_93)) + var_1_47))) : 1)) && ((var_1_41 <= var_1_66) ? ((((var_1_33 + var_1_47) - last_1_var_1_60) > -8) ? (var_1_60 == ((unsigned short int) (max (((var_1_33 + var_1_66) + var_1_47) , var_1_32)))) : 1) : (var_1_60 == ((unsigned short int) (var_1_61 - var_1_66))))) && ((var_1_12 && (var_1_54 < last_1_var_1_81)) ? ((last_1_var_1_11 || var_1_51) ? (var_1_62 == ((unsigned char) (max (var_1_32 , (min (8 , var_1_33)))))) : (var_1_62 == ((unsigned char) var_1_32))) : 1)) && ((-8 > (min (var_1_54 , var_1_88))) ? (var_1_63 == ((signed long int) (var_1_92 - var_1_47))) : (var_1_63 == ((signed long int) var_1_60)))) && (var_1_64 == ((double) (min (var_1_17 , (var_1_19 - (max (var_1_37 , var_1_36)))))))) && (var_1_28 ? ((! ((var_1_61 - last_1_var_1_60) == last_1_var_1_106)) ? ((last_1_var_1_49 && var_1_8) ? (var_1_65 == ((signed long int) (abs (5)))) : (var_1_65 == ((signed long int) -1))) : 1) : ((32u > (var_1_55 * (~ var_1_41))) ? (var_1_65 == ((signed long int) (abs (var_1_32)))) : (var_1_65 == ((signed long int) (last_1_var_1_62 + last_1_var_1_59)))))) && ((((last_1_var_1_92 + last_1_var_1_91) + last_1_var_1_20) <= (abs (last_1_var_1_66))) ? (var_1_66 == ((unsigned char) var_1_33)) : (var_1_66 == ((unsigned char) 2)))) && ((((32 / var_1_61) + var_1_74) <= (abs (var_1_9))) ? (var_1_67 == ((signed short int) (max ((var_1_102 - 10) , (max (var_1_65 , (min (var_1_50 , var_1_33)))))))) : ((var_1_74 >= var_1_62) ? (var_1_67 == ((signed short int) (var_1_62 - (var_1_68 - (max (var_1_32 , 4)))))) : (((var_1_38 >> (var_1_69 - var_1_32)) <= var_1_33) ? ((var_1_29 >= var_1_97) ? (var_1_67 == ((signed short int) (var_1_90 - var_1_47))) : (var_1_67 == ((signed short int) (min (var_1_32 , (max ((var_1_33 - 256) , var_1_65))))))) : 1)))) && ((var_1_23 > (abs (var_1_102))) ? ((var_1_47 >= var_1_90) ? (var_1_70 == ((float) (min (var_1_17 , (var_1_35 + var_1_19))))) : 1) : ((var_1_42 >= (5.6f / (max (var_1_18 , var_1_34)))) ? ((! (var_1_33 <= var_1_86)) ? (var_1_70 == ((float) (var_1_37 - var_1_35))) : (((min ((var_1_33 - var_1_69) , var_1_68)) >= var_1_95) ? (var_1_70 == ((float) (min (1.000000000325E9f , 2.25f)))) : (var_1_70 == ((float) (var_1_18 - var_1_37))))) : (var_1_70 == ((float) var_1_35))))) && ((! (var_1_15 > (var_1_64 + var_1_48))) ? ((! (var_1_68 == var_1_55)) ? (var_1_71 == ((double) var_1_17)) : (var_1_71 == ((double) ((max ((var_1_34 - var_1_36) , var_1_19)) - var_1_17)))) : 1)) && ((var_1_66 != var_1_62) ? (var_1_74 == ((signed short int) (var_1_47 - ((10000 + var_1_75) - var_1_90)))) : (var_1_74 == ((signed short int) ((var_1_66 + var_1_60) + (max (var_1_69 , var_1_46))))))) && ((var_1_71 < ((var_1_37 - var_1_34) / (max (var_1_18 , var_1_77)))) ? (var_1_28 ? (var_1_76 == ((signed short int) (((min (var_1_86 , var_1_32)) + var_1_69) + var_1_87))) : (var_1_76 == ((signed short int) ((max (var_1_86 , var_1_87)) + (var_1_32 + var_1_33))))) : 1)) && ((! (last_1_var_1_85 <= (- last_1_var_1_78))) ? (var_1_78 == ((unsigned char) (min (var_1_69 , var_1_33)))) : ((((last_1_var_1_46 - last_1_var_1_78) * (last_1_var_1_20 * last_1_var_1_89)) < ((last_1_var_1_91 * var_1_33) / (abs (var_1_55)))) ? (var_1_78 == ((unsigned char) (var_1_80 - (min (var_1_69 , var_1_32))))) : 1))) && ((var_1_26 && var_1_104) ? (var_1_4 ? (var_1_81 == ((unsigned long int) (var_1_54 - var_1_62))) : (var_1_81 == ((unsigned long int) (((1986856993u - var_1_75) - var_1_33) + var_1_76)))) : ((((var_1_33 * var_1_23) / (abs (var_1_68))) >= var_1_75) ? ((var_1_37 <= ((var_1_101 / var_1_83) + var_1_64)) ? (var_1_81 == ((unsigned long int) var_1_62)) : 1) : ((var_1_18 > (abs (var_1_25))) ? (var_1_81 == ((unsigned long int) (min (var_1_32 , (var_1_66 + var_1_33))))) : (var_1_81 == ((unsigned long int) (var_1_78 + (var_1_41 - var_1_75)))))))) && (var_1_84 == ((double) var_1_34))) && (var_1_5 ? (var_1_85 == ((unsigned long int) var_1_53)) : (var_1_85 == ((unsigned long int) var_1_46)))) && (var_1_49 ? (var_1_86 == ((signed long int) var_1_50)) : (var_1_86 == ((signed long int) var_1_66)))) && (var_1_11 ? (var_1_87 == ((signed short int) var_1_69)) : 1)) && (var_1_52 ? (var_1_88 == ((signed char) var_1_69)) : (var_1_88 == ((signed char) var_1_33)))) && (var_1_11 ? (var_1_89 == ((signed long int) var_1_95)) : (var_1_89 == ((signed long int) var_1_62)))) && (var_1_28 ? (var_1_90 == ((unsigned char) var_1_32)) : (var_1_90 == ((unsigned char) var_1_80)))) && (var_1_43 ? (var_1_91 == ((signed short int) var_1_76)) : (var_1_91 == ((signed short int) var_1_69)))) && (var_1_92 == ((unsigned char) var_1_32))) && (var_1_49 ? (var_1_93 == ((unsigned short int) var_1_69)) : (var_1_93 == ((unsigned short int) var_1_91)))) && (var_1_94 == ((signed long int) var_1_39))) && (var_1_95 == ((unsigned short int) var_1_33))) && (var_1_96 == ((float) var_1_17))) && (var_1_11 ? (var_1_97 == ((float) var_1_19)) : (var_1_97 == ((float) var_1_18)))) && (var_1_98 == ((double) var_1_15))) && (var_1_52 ? (var_1_99 == ((double) var_1_35)) : (var_1_99 == ((double) var_1_17)))) && (var_1_101 == ((float) var_1_15))) && (var_1_28 ? (var_1_102 == ((signed short int) (min (var_1_33 , last_1_var_1_66)))) : (var_1_102 == ((signed short int) ((max (last_1_var_1_102 , (last_1_var_1_67 + 5))) + var_1_32))))) && (var_1_104 == ((unsigned char) var_1_8))) && (var_1_105 == ((signed char) var_1_69))) && (var_1_106 == ((unsigned short int) 32))
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
