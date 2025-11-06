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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188Amount500.c", 13, "reach_error"); }
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
signed char var_1_4 = -2;
signed char var_1_5 = 10;
signed char var_1_6 = 16;
unsigned long int var_1_7 = 100;
signed char var_1_9 = -1;
signed char var_1_10 = 4;
unsigned long int var_1_11 = 1754875810;
unsigned long int var_1_12 = 128;
double var_1_13 = 100000000000000.75;
signed char var_1_14 = -64;
double var_1_15 = 100.5;
double var_1_16 = 24.2;
double var_1_17 = 24.5;
double var_1_18 = 4.8;
double var_1_19 = 0.0;
double var_1_20 = 127.2;
double var_1_21 = 5.25;
double var_1_22 = 500.4;
signed short int var_1_23 = -5;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 50126;
unsigned long int var_1_27 = 4;
unsigned long int var_1_29 = 1499020160;
unsigned char var_1_30 = 2;
unsigned char var_1_31 = 128;
unsigned long int var_1_32 = 8;
unsigned short int var_1_33 = 100;
unsigned long int var_1_34 = 5;
unsigned long int var_1_35 = 3252632357;
unsigned long int var_1_36 = 1000000000;
unsigned long int var_1_37 = 1000000000;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 64;
unsigned char var_1_41 = 10;
signed long int var_1_42 = 1;
signed long int var_1_43 = 256;
unsigned long int var_1_44 = 500;
unsigned long int var_1_46 = 5;
unsigned long int var_1_47 = 2;
signed char var_1_48 = 0;
float var_1_51 = 24.75;
signed long int var_1_52 = 25;
signed long int var_1_53 = -4;
signed long int var_1_54 = -10;
signed char var_1_55 = 4;
signed short int var_1_56 = -1;
unsigned char var_1_57 = 32;
signed long int var_1_58 = 0;
signed long int var_1_59 = -64;
unsigned long int var_1_61 = 1432737625;
signed long int var_1_62 = -256;
signed long int var_1_63 = 64;
unsigned char var_1_64 = 50;
unsigned char var_1_65 = 2;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 0;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
double var_1_73 = 200.8;
double var_1_74 = 3.5;
signed short int var_1_75 = 10;
signed long int var_1_76 = 100;
unsigned char var_1_78 = 1;
signed char var_1_79 = 25;
signed char var_1_80 = 4;
unsigned short int var_1_81 = 10;
signed short int var_1_82 = -32;
signed short int var_1_83 = -4;
signed short int var_1_84 = 32;
signed short int var_1_85 = -10;
double var_1_86 = 0.54;
unsigned short int var_1_87 = 64;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
unsigned long int var_1_90 = 32;
signed short int var_1_91 = 4;
signed short int var_1_92 = 10;
float var_1_93 = 64.8;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 1;
unsigned long int var_1_96 = 50;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_25 = 0;
unsigned char last_1_var_1_38 = 100;
signed long int last_1_var_1_53 = -4;
signed long int last_1_var_1_58 = 0;
unsigned char last_1_var_1_66 = 0;
signed short int last_1_var_1_82 = -32;
unsigned char last_1_var_1_88 = 1;
unsigned char last_1_var_1_94 = 1;
unsigned char last_1_var_1_95 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch188Amount500
	signed long int stepLocal_33 = -8;
	signed long int stepLocal_32 = last_1_var_1_58;
	signed long int stepLocal_31 = last_1_var_1_25;
	unsigned char stepLocal_30 = var_1_67;
	unsigned char stepLocal_29 = (- last_1_var_1_58) > var_1_26;
	if (stepLocal_32 > (var_1_11 / var_1_40)) {
		if (last_1_var_1_88) {
			var_1_66 = (last_1_var_1_94 && var_1_67);
		} else {
			if (last_1_var_1_94) {
				if (500.8f <= var_1_21) {
					var_1_66 = (var_1_67 || var_1_68);
				} else {
					if (var_1_26 < stepLocal_31) {
						var_1_66 = (! (var_1_67 || var_1_68));
					} else {
						if ((last_1_var_1_53 <= last_1_var_1_25) && stepLocal_29) {
							var_1_66 = ((var_1_70 && var_1_71) && (var_1_67 || var_1_72));
						}
					}
				}
			} else {
				if ((-100 % var_1_14) <= stepLocal_33) {
					var_1_66 = ((last_1_var_1_38 <= var_1_39) || var_1_70);
				}
			}
		}
	} else {
		if (last_1_var_1_66 && stepLocal_30) {
			var_1_66 = (! var_1_70);
		} else {
			var_1_66 = (var_1_67 || var_1_68);
		}
	}


	// From: Req7Batch188Amount500
	signed long int stepLocal_11 = ~ 4;
	if (var_1_66) {
		if (var_1_17 >= var_1_19) {
			if (stepLocal_11 > var_1_4) {
				var_1_30 = (min ((var_1_31 - var_1_5) , (var_1_6 + 5)));
			}
		} else {
			var_1_30 = var_1_6;
		}
	} else {
		var_1_30 = var_1_5;
	}


	// From: Req8Batch188Amount500
	if (var_1_26 < (var_1_11 / (max (var_1_31 , var_1_33)))) {
		var_1_32 = (min (var_1_34 , var_1_33));
	} else {
		if (last_1_var_1_88 && last_1_var_1_95) {
			var_1_32 = (max ((var_1_26 + var_1_29) , last_1_var_1_82));
		} else {
			var_1_32 = ((var_1_35 - (1000000000u - var_1_33)) - ((var_1_36 + var_1_37) - var_1_5));
		}
	}


	// From: Req13Batch188Amount500
	if ((var_1_17 + var_1_15) < (- var_1_22)) {
		var_1_51 = (abs (var_1_18));
	} else {
		var_1_51 = var_1_15;
	}


	// From: Req18Batch188Amount500
	signed char stepLocal_20 = var_1_4;
	if (stepLocal_20 > ((min (var_1_39 , var_1_41)) - var_1_40)) {
		var_1_56 = (abs (var_1_5));
	}


	// From: Req22Batch188Amount500
	var_1_64 = (var_1_5 + (var_1_6 + var_1_41));


	// From: Req25Batch188Amount500
	if (var_1_70) {
		var_1_73 = ((abs (var_1_22)) + ((var_1_74 - var_1_20) + var_1_21));
	} else {
		var_1_73 = (var_1_21 + (var_1_16 - var_1_20));
	}


	// From: Req30Batch188Amount500
	if (var_1_68) {
		var_1_81 = var_1_5;
	} else {
		var_1_81 = var_1_31;
	}


	// From: Req33Batch188Amount500
	var_1_84 = var_1_85;


	// From: Req34Batch188Amount500
	if (var_1_68) {
		var_1_86 = 0.375;
	} else {
		var_1_86 = var_1_21;
	}


	// From: Req36Batch188Amount500
	var_1_88 = var_1_68;


	// From: Req38Batch188Amount500
	var_1_90 = var_1_11;


	// From: Req41Batch188Amount500
	var_1_93 = var_1_16;


	// From: Req42Batch188Amount500
	var_1_94 = var_1_67;


	// From: Req44Batch188Amount500
	var_1_96 = var_1_5;


	// From: Req27Batch188Amount500
	if (var_1_67) {
		var_1_76 = ((1322163942 - 50) - var_1_32);
	} else {
		var_1_76 = (var_1_96 + (var_1_10 + var_1_64));
	}


	// From: Req17Batch188Amount500
	unsigned long int stepLocal_19 = - (var_1_32 & 10u);
	if (var_1_66) {
		if (stepLocal_19 <= var_1_47) {
			if (! (var_1_16 < (var_1_86 / var_1_19))) {
				var_1_55 = (abs (var_1_4));
			}
		}
	} else {
		var_1_55 = ((max ((abs (var_1_4)) , -8)) + 2);
	}


	// From: Req28Batch188Amount500
	unsigned long int stepLocal_35 = var_1_90 + (var_1_96 * var_1_41);
	if (var_1_33 <= stepLocal_35) {
		var_1_78 = (max ((abs (var_1_5)) , 4));
	} else {
		var_1_78 = (min (var_1_41 , (abs (var_1_40))));
	}


	// From: Req32Batch188Amount500
	if (var_1_88) {
		var_1_83 = var_1_4;
	}


	// From: Req35Batch188Amount500
	var_1_87 = var_1_78;


	// From: Req39Batch188Amount500
	var_1_91 = var_1_83;


	// From: Req14Batch188Amount500
	if (256.625 <= (var_1_16 + var_1_15)) {
		if (var_1_66) {
			var_1_52 = ((var_1_4 + var_1_39) + (var_1_87 + (var_1_6 - var_1_32)));
		} else {
			var_1_52 = (max (var_1_37 , var_1_41));
		}
	} else {
		var_1_52 = (var_1_26 + var_1_87);
	}


	// From: Req2Batch188Amount500
	signed char stepLocal_2 = var_1_5;
	signed long int stepLocal_1 = (var_1_5 / var_1_9) / var_1_10;
	signed char stepLocal_0 = var_1_6;
	if (stepLocal_0 >= -4) {
		if (var_1_76 < stepLocal_2) {
			if (var_1_76 <= stepLocal_1) {
				var_1_7 = (3137329664u - var_1_5);
			} else {
				var_1_7 = var_1_5;
			}
		} else {
			var_1_7 = (min (((var_1_5 + var_1_6) + (var_1_11 - var_1_12)) , 25u));
		}
	} else {
		var_1_7 = (var_1_12 + var_1_5);
	}


	// From: Req11Batch188Amount500
	unsigned long int stepLocal_14 = var_1_37;
	unsigned long int stepLocal_13 = var_1_35;
	if (var_1_88) {
		if (stepLocal_14 > (var_1_32 * var_1_31)) {
			var_1_44 = ((max (var_1_46 , var_1_43)) + (max ((var_1_12 + var_1_31) , (min (var_1_41 , var_1_87)))));
		} else {
			if (var_1_19 > var_1_22) {
				var_1_44 = (4u + var_1_47);
			}
		}
	} else {
		if (stepLocal_13 >= ((min (var_1_46 , var_1_90)) / (var_1_26 + var_1_31))) {
			if ((- var_1_18) == var_1_17) {
				var_1_44 = (var_1_35 - var_1_39);
			}
		}
	}


	// From: Req6Batch188Amount500
	signed long int stepLocal_10 = -100;
	signed char stepLocal_9 = var_1_5;
	if (((var_1_10 % var_1_14) & var_1_30) > stepLocal_10) {
		var_1_27 = (min (var_1_6 , var_1_11));
	} else {
		if (stepLocal_9 < (abs (var_1_6 + -10))) {
			var_1_27 = (min ((4264689893u - (max (var_1_26 , var_1_11))) , var_1_52));
		} else {
			var_1_27 = ((var_1_11 + var_1_29) - (var_1_5 + var_1_6));
		}
	}


	// From: Req26Batch188Amount500
	unsigned char stepLocal_34 = var_1_72;
	if (var_1_66 || stepLocal_34) {
		var_1_75 = (var_1_64 + var_1_27);
	}


	// From: Req20Batch188Amount500
	unsigned char stepLocal_23 = var_1_90 >= var_1_32;
	unsigned long int stepLocal_22 = var_1_96 * 16u;
	unsigned long int stepLocal_21 = var_1_27;
	if (! (var_1_56 > (var_1_36 + var_1_44))) {
		if (((min (var_1_5 , var_1_87)) == (var_1_39 - var_1_44)) || stepLocal_23) {
			if (var_1_7 == stepLocal_22) {
				var_1_58 = ((var_1_41 - var_1_31) + (var_1_33 + var_1_39));
			} else {
				var_1_58 = (var_1_40 - var_1_5);
			}
		}
	} else {
		if (stepLocal_21 < ((var_1_29 + var_1_61) - (1403312496u - var_1_37))) {
			var_1_58 = ((var_1_26 + (var_1_37 - var_1_87)) - var_1_12);
		}
	}


	// From: Req43Batch188Amount500
	if (last_1_var_1_95) {
		var_1_95 = (! var_1_70);
	} else {
		if (var_1_88 || var_1_66) {
			var_1_95 = (var_1_71 && var_1_72);
		} else {
			if (((var_1_33 + var_1_80) / var_1_29) >= var_1_58) {
				var_1_95 = (! var_1_70);
			} else {
				if ((- 10) != var_1_32) {
					if (var_1_44 >= var_1_59) {
						var_1_95 = var_1_67;
					}
				} else {
					var_1_95 = var_1_70;
				}
			}
		}
	}


	// From: Req31Batch188Amount500
	var_1_82 = var_1_75;


	// From: Req3Batch188Amount500
	unsigned long int stepLocal_5 = var_1_32 ^ var_1_6;
	signed char stepLocal_4 = var_1_14;
	unsigned long int stepLocal_3 = var_1_32 / (abs (var_1_14));
	if (stepLocal_5 < var_1_90) {
		if (var_1_87 > stepLocal_3) {
			var_1_13 = ((abs (var_1_15)) - (var_1_16 + var_1_17));
		} else {
			if (var_1_95) {
				var_1_13 = ((max (var_1_17 , var_1_16)) - var_1_18);
			} else {
				if (stepLocal_4 >= var_1_4) {
					var_1_13 = ((var_1_19 - (var_1_20 + var_1_21)) - var_1_16);
				} else {
					var_1_13 = (var_1_21 + (max ((var_1_20 + var_1_22) , var_1_17)));
				}
			}
		}
	} else {
		var_1_13 = (min (var_1_18 , var_1_15));
	}


	// From: Req9Batch188Amount500
	if (var_1_17 <= (min ((max (var_1_22 , var_1_13)) , var_1_19))) {
		var_1_38 = ((var_1_39 - var_1_6) + (min (var_1_5 , (var_1_40 - var_1_41))));
	} else {
		var_1_38 = (64 + var_1_5);
	}


	// From: Req10Batch188Amount500
	signed long int stepLocal_12 = (var_1_58 + var_1_64) / var_1_40;
	if (var_1_29 > stepLocal_12) {
		var_1_42 = var_1_7;
	} else {
		if (var_1_15 > var_1_22) {
			var_1_42 = var_1_64;
		} else {
			var_1_42 = var_1_31;
		}
	}


	// From: Req16Batch188Amount500
	signed char stepLocal_18 = var_1_14;
	unsigned long int stepLocal_17 = (var_1_32 / var_1_11) % var_1_36;
	if (stepLocal_17 > var_1_33) {
		var_1_54 = ((abs (var_1_58)) + (var_1_42 + var_1_41));
	} else {
		if (stepLocal_18 <= (var_1_5 << var_1_42)) {
			var_1_54 = (var_1_43 - var_1_42);
		}
	}


	// From: Req37Batch188Amount500
	if (var_1_95) {
		var_1_89 = 0;
	} else {
		var_1_89 = var_1_70;
	}


	// From: Req40Batch188Amount500
	if (var_1_66) {
		var_1_92 = var_1_31;
	} else {
		var_1_92 = var_1_82;
	}


	// From: Req1Batch188Amount500
	if (var_1_7 != (- 16u)) {
		if (var_1_95) {
			var_1_1 = (var_1_4 + (var_1_5 - var_1_6));
		} else {
			if (var_1_5 >= var_1_6) {
				var_1_1 = (var_1_5 - var_1_6);
			} else {
				if (var_1_5 <= (var_1_6 + -8)) {
					var_1_1 = (abs (min (-8 , var_1_5)));
				}
			}
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch188Amount500
	if (var_1_18 < (var_1_20 - var_1_19)) {
		if (var_1_95) {
			var_1_23 = (min (var_1_76 , (max ((min (var_1_6 , var_1_9)) , var_1_10))));
		} else {
			var_1_23 = (var_1_5 + var_1_14);
		}
	}


	// From: Req12Batch188Amount500
	if (var_1_76 >= (var_1_31 + var_1_7)) {
		if ((abs (var_1_22 + var_1_21)) >= (var_1_17 / (max (var_1_19 , 15.5)))) {
			if ((var_1_89 || var_1_95) && var_1_89) {
				var_1_48 = var_1_6;
			} else {
				if ((var_1_40 & var_1_64) != ((var_1_81 + var_1_41) - var_1_39)) {
					if (var_1_89) {
						var_1_48 = (abs (var_1_4));
					} else {
						var_1_48 = var_1_41;
					}
				} else {
					var_1_48 = (max (var_1_4 , -16));
				}
			}
		} else {
			var_1_48 = ((abs (var_1_5 - var_1_6)) - var_1_41);
		}
	} else {
		if (var_1_95) {
			if (var_1_89 || var_1_95) {
				var_1_48 = (4 - var_1_5);
			}
		} else {
			if (var_1_89) {
				var_1_48 = (min (var_1_6 , var_1_4));
			}
		}
	}


	// From: Req19Batch188Amount500
	if (var_1_89) {
		if (var_1_89) {
			var_1_57 = (var_1_41 + var_1_6);
		} else {
			var_1_57 = (min ((max ((max (var_1_41 , var_1_39)) , 0)) , var_1_6));
		}
	}


	// From: Req29Batch188Amount500
	signed char stepLocal_38 = var_1_5;
	signed long int stepLocal_37 = 64 * var_1_23;
	signed long int stepLocal_36 = var_1_54;
	if (var_1_82 > stepLocal_37) {
		if (var_1_89) {
			if (var_1_95) {
				if (var_1_10 > stepLocal_36) {
					var_1_79 = var_1_4;
				} else {
					var_1_79 = (var_1_4 + (var_1_6 - var_1_5));
				}
			}
		}
	} else {
		if (! var_1_67) {
			if ((var_1_61 >> var_1_80) < stepLocal_38) {
				if (var_1_88) {
					var_1_79 = (abs (var_1_5));
				} else {
					var_1_79 = var_1_80;
				}
			} else {
				var_1_79 = (var_1_6 + var_1_80);
			}
		} else {
			var_1_79 = var_1_6;
		}
	}


	// From: Req5Batch188Amount500
	unsigned char stepLocal_8 = var_1_89;
	unsigned long int stepLocal_7 = var_1_12;
	unsigned char stepLocal_6 = var_1_89;
	if (stepLocal_8 && var_1_95) {
		if ((-5 >= var_1_9) && stepLocal_6) {
			var_1_25 = (var_1_26 - var_1_5);
		} else {
			if (stepLocal_7 < (abs (var_1_26))) {
				var_1_25 = (var_1_6 + var_1_5);
			} else {
				var_1_25 = (max ((abs (max (var_1_26 , 32))) , var_1_6));
			}
		}
	} else {
		var_1_25 = (max (var_1_26 , (abs (var_1_5))));
	}


	// From: Req15Batch188Amount500
	unsigned char stepLocal_16 = var_1_40;
	unsigned long int stepLocal_15 = var_1_37;
	if (var_1_86 >= 10.25) {
		var_1_53 = (max ((abs (var_1_31)) , var_1_54));
	} else {
		if (var_1_90 >= stepLocal_16) {
			if (stepLocal_15 <= (var_1_92 + var_1_5)) {
				var_1_53 = (min ((min ((min (var_1_92 , var_1_6)) , var_1_31)) , var_1_10));
			} else {
				var_1_53 = (((var_1_5 + 2) + (var_1_39 + var_1_56)) - var_1_36);
			}
		}
	}


	// From: Req21Batch188Amount500
	unsigned char stepLocal_26 = var_1_95;
	unsigned long int stepLocal_25 = min ((var_1_37 * var_1_96) , (var_1_5 * var_1_44));
	signed long int stepLocal_24 = 2;
	if ((var_1_14 == (var_1_39 - var_1_6)) && stepLocal_26) {
		var_1_62 = var_1_25;
	} else {
		if (stepLocal_24 >= var_1_33) {
			if ((var_1_61 % (var_1_26 - var_1_40)) < stepLocal_25) {
				var_1_62 = ((max (var_1_25 , var_1_63)) + var_1_39);
			} else {
				var_1_62 = var_1_9;
			}
		} else {
			var_1_62 = (var_1_43 - var_1_31);
		}
	}


	// From: Req23Batch188Amount500
	unsigned long int stepLocal_28 = var_1_47;
	unsigned long int stepLocal_27 = var_1_25 / var_1_11;
	if (var_1_21 <= var_1_13) {
		if (! ((var_1_47 + var_1_35) > var_1_40)) {
			if (stepLocal_28 >= 256u) {
				var_1_65 = (max (var_1_5 , var_1_41));
			}
		}
	} else {
		if (var_1_61 > stepLocal_27) {
			var_1_65 = (max (var_1_31 , (max (var_1_6 , 100))));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -128);
	assume_abort_if_not(var_1_9 <= 127);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -128);
	assume_abort_if_not(var_1_10 <= 127);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 127);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 1073741824);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65535);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 3221225470);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 536870911);
	assume_abort_if_not(var_1_36 <= 1073741824);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 536870912);
	assume_abort_if_not(var_1_37 <= 1073741823);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 63);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1073741823);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_59 >= -2147483647);
	assume_abort_if_not(var_1_59 <= 2147483646);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 1073741824);
	assume_abort_if_not(var_1_61 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= -1073741823);
	assume_abort_if_not(var_1_63 <= 1073741823);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 0);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 1);
	assume_abort_if_not(var_1_80 <= 31);
	var_1_85 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_85 >= -32767);
	assume_abort_if_not(var_1_85 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((var_1_7 != (- 16u)) ? (var_1_95 ? (var_1_1 == ((signed char) (var_1_4 + (var_1_5 - var_1_6)))) : ((var_1_5 >= var_1_6) ? (var_1_1 == ((signed char) (var_1_5 - var_1_6))) : ((var_1_5 <= (var_1_6 + -8)) ? (var_1_1 == ((signed char) (abs (min (-8 , var_1_5))))) : 1))) : (var_1_1 == ((signed char) var_1_4))) && ((var_1_6 >= -4) ? ((var_1_76 < var_1_5) ? ((var_1_76 <= ((var_1_5 / var_1_9) / var_1_10)) ? (var_1_7 == ((unsigned long int) (3137329664u - var_1_5))) : (var_1_7 == ((unsigned long int) var_1_5))) : (var_1_7 == ((unsigned long int) (min (((var_1_5 + var_1_6) + (var_1_11 - var_1_12)) , 25u))))) : (var_1_7 == ((unsigned long int) (var_1_12 + var_1_5))))) && (((var_1_32 ^ var_1_6) < var_1_90) ? ((var_1_87 > (var_1_32 / (abs (var_1_14)))) ? (var_1_13 == ((double) ((abs (var_1_15)) - (var_1_16 + var_1_17)))) : (var_1_95 ? (var_1_13 == ((double) ((max (var_1_17 , var_1_16)) - var_1_18))) : ((var_1_14 >= var_1_4) ? (var_1_13 == ((double) ((var_1_19 - (var_1_20 + var_1_21)) - var_1_16))) : (var_1_13 == ((double) (var_1_21 + (max ((var_1_20 + var_1_22) , var_1_17)))))))) : (var_1_13 == ((double) (min (var_1_18 , var_1_15)))))) && ((var_1_18 < (var_1_20 - var_1_19)) ? (var_1_95 ? (var_1_23 == ((signed short int) (min (var_1_76 , (max ((min (var_1_6 , var_1_9)) , var_1_10)))))) : (var_1_23 == ((signed short int) (var_1_5 + var_1_14)))) : 1)) && ((var_1_89 && var_1_95) ? (((-5 >= var_1_9) && var_1_89) ? (var_1_25 == ((unsigned short int) (var_1_26 - var_1_5))) : ((var_1_12 < (abs (var_1_26))) ? (var_1_25 == ((unsigned short int) (var_1_6 + var_1_5))) : (var_1_25 == ((unsigned short int) (max ((abs (max (var_1_26 , 32))) , var_1_6)))))) : (var_1_25 == ((unsigned short int) (max (var_1_26 , (abs (var_1_5)))))))) && ((((var_1_10 % var_1_14) & var_1_30) > -100) ? (var_1_27 == ((unsigned long int) (min (var_1_6 , var_1_11)))) : ((var_1_5 < (abs (var_1_6 + -10))) ? (var_1_27 == ((unsigned long int) (min ((4264689893u - (max (var_1_26 , var_1_11))) , var_1_52)))) : (var_1_27 == ((unsigned long int) ((var_1_11 + var_1_29) - (var_1_5 + var_1_6))))))) && (var_1_66 ? ((var_1_17 >= var_1_19) ? (((~ 4) > var_1_4) ? (var_1_30 == ((unsigned char) (min ((var_1_31 - var_1_5) , (var_1_6 + 5))))) : 1) : (var_1_30 == ((unsigned char) var_1_6))) : (var_1_30 == ((unsigned char) var_1_5)))) && ((var_1_26 < (var_1_11 / (max (var_1_31 , var_1_33)))) ? (var_1_32 == ((unsigned long int) (min (var_1_34 , var_1_33)))) : ((last_1_var_1_88 && last_1_var_1_95) ? (var_1_32 == ((unsigned long int) (max ((var_1_26 + var_1_29) , last_1_var_1_82)))) : (var_1_32 == ((unsigned long int) ((var_1_35 - (1000000000u - var_1_33)) - ((var_1_36 + var_1_37) - var_1_5))))))) && ((var_1_17 <= (min ((max (var_1_22 , var_1_13)) , var_1_19))) ? (var_1_38 == ((unsigned char) ((var_1_39 - var_1_6) + (min (var_1_5 , (var_1_40 - var_1_41)))))) : (var_1_38 == ((unsigned char) (64 + var_1_5))))) && ((var_1_29 > ((var_1_58 + var_1_64) / var_1_40)) ? (var_1_42 == ((signed long int) var_1_7)) : ((var_1_15 > var_1_22) ? (var_1_42 == ((signed long int) var_1_64)) : (var_1_42 == ((signed long int) var_1_31))))) && (var_1_88 ? ((var_1_37 > (var_1_32 * var_1_31)) ? (var_1_44 == ((unsigned long int) ((max (var_1_46 , var_1_43)) + (max ((var_1_12 + var_1_31) , (min (var_1_41 , var_1_87))))))) : ((var_1_19 > var_1_22) ? (var_1_44 == ((unsigned long int) (4u + var_1_47))) : 1)) : ((var_1_35 >= ((min (var_1_46 , var_1_90)) / (var_1_26 + var_1_31))) ? (((- var_1_18) == var_1_17) ? (var_1_44 == ((unsigned long int) (var_1_35 - var_1_39))) : 1) : 1))) && ((var_1_76 >= (var_1_31 + var_1_7)) ? (((abs (var_1_22 + var_1_21)) >= (var_1_17 / (max (var_1_19 , 15.5)))) ? (((var_1_89 || var_1_95) && var_1_89) ? (var_1_48 == ((signed char) var_1_6)) : (((var_1_40 & var_1_64) != ((var_1_81 + var_1_41) - var_1_39)) ? (var_1_89 ? (var_1_48 == ((signed char) (abs (var_1_4)))) : (var_1_48 == ((signed char) var_1_41))) : (var_1_48 == ((signed char) (max (var_1_4 , -16)))))) : (var_1_48 == ((signed char) ((abs (var_1_5 - var_1_6)) - var_1_41)))) : (var_1_95 ? ((var_1_89 || var_1_95) ? (var_1_48 == ((signed char) (4 - var_1_5))) : 1) : (var_1_89 ? (var_1_48 == ((signed char) (min (var_1_6 , var_1_4)))) : 1)))) && (((var_1_17 + var_1_15) < (- var_1_22)) ? (var_1_51 == ((float) (abs (var_1_18)))) : (var_1_51 == ((float) var_1_15)))) && ((256.625 <= (var_1_16 + var_1_15)) ? (var_1_66 ? (var_1_52 == ((signed long int) ((var_1_4 + var_1_39) + (var_1_87 + (var_1_6 - var_1_32))))) : (var_1_52 == ((signed long int) (max (var_1_37 , var_1_41))))) : (var_1_52 == ((signed long int) (var_1_26 + var_1_87))))) && ((var_1_86 >= 10.25) ? (var_1_53 == ((signed long int) (max ((abs (var_1_31)) , var_1_54)))) : ((var_1_90 >= var_1_40) ? ((var_1_37 <= (var_1_92 + var_1_5)) ? (var_1_53 == ((signed long int) (min ((min ((min (var_1_92 , var_1_6)) , var_1_31)) , var_1_10)))) : (var_1_53 == ((signed long int) (((var_1_5 + 2) + (var_1_39 + var_1_56)) - var_1_36)))) : 1))) && ((((var_1_32 / var_1_11) % var_1_36) > var_1_33) ? (var_1_54 == ((signed long int) ((abs (var_1_58)) + (var_1_42 + var_1_41)))) : ((var_1_14 <= (var_1_5 << var_1_42)) ? (var_1_54 == ((signed long int) (var_1_43 - var_1_42))) : 1))) && (var_1_66 ? (((- (var_1_32 & 10u)) <= var_1_47) ? ((! (var_1_16 < (var_1_86 / var_1_19))) ? (var_1_55 == ((signed char) (abs (var_1_4)))) : 1) : 1) : (var_1_55 == ((signed char) ((max ((abs (var_1_4)) , -8)) + 2))))) && ((var_1_4 > ((min (var_1_39 , var_1_41)) - var_1_40)) ? (var_1_56 == ((signed short int) (abs (var_1_5)))) : 1)) && (var_1_89 ? (var_1_89 ? (var_1_57 == ((unsigned char) (var_1_41 + var_1_6))) : (var_1_57 == ((unsigned char) (min ((max ((max (var_1_41 , var_1_39)) , 0)) , var_1_6))))) : 1)) && ((! (var_1_56 > (var_1_36 + var_1_44))) ? ((((min (var_1_5 , var_1_87)) == (var_1_39 - var_1_44)) || (var_1_90 >= var_1_32)) ? ((var_1_7 == (var_1_96 * 16u)) ? (var_1_58 == ((signed long int) ((var_1_41 - var_1_31) + (var_1_33 + var_1_39)))) : (var_1_58 == ((signed long int) (var_1_40 - var_1_5)))) : 1) : ((var_1_27 < ((var_1_29 + var_1_61) - (1403312496u - var_1_37))) ? (var_1_58 == ((signed long int) ((var_1_26 + (var_1_37 - var_1_87)) - var_1_12))) : 1))) && (((var_1_14 == (var_1_39 - var_1_6)) && var_1_95) ? (var_1_62 == ((signed long int) var_1_25)) : ((2 >= var_1_33) ? (((var_1_61 % (var_1_26 - var_1_40)) < (min ((var_1_37 * var_1_96) , (var_1_5 * var_1_44)))) ? (var_1_62 == ((signed long int) ((max (var_1_25 , var_1_63)) + var_1_39))) : (var_1_62 == ((signed long int) var_1_9))) : (var_1_62 == ((signed long int) (var_1_43 - var_1_31)))))) && (var_1_64 == ((unsigned char) (var_1_5 + (var_1_6 + var_1_41))))) && ((var_1_21 <= var_1_13) ? ((! ((var_1_47 + var_1_35) > var_1_40)) ? ((var_1_47 >= 256u) ? (var_1_65 == ((unsigned char) (max (var_1_5 , var_1_41)))) : 1) : 1) : ((var_1_61 > (var_1_25 / var_1_11)) ? (var_1_65 == ((unsigned char) (max (var_1_31 , (max (var_1_6 , 100)))))) : 1))) && ((last_1_var_1_58 > (var_1_11 / var_1_40)) ? (last_1_var_1_88 ? (var_1_66 == ((unsigned char) (last_1_var_1_94 && var_1_67))) : (last_1_var_1_94 ? ((500.8f <= var_1_21) ? (var_1_66 == ((unsigned char) (var_1_67 || var_1_68))) : ((var_1_26 < last_1_var_1_25) ? (var_1_66 == ((unsigned char) (! (var_1_67 || var_1_68)))) : (((last_1_var_1_53 <= last_1_var_1_25) && ((- last_1_var_1_58) > var_1_26)) ? (var_1_66 == ((unsigned char) ((var_1_70 && var_1_71) && (var_1_67 || var_1_72)))) : 1))) : (((-100 % var_1_14) <= -8) ? (var_1_66 == ((unsigned char) ((last_1_var_1_38 <= var_1_39) || var_1_70))) : 1))) : ((last_1_var_1_66 && var_1_67) ? (var_1_66 == ((unsigned char) (! var_1_70))) : (var_1_66 == ((unsigned char) (var_1_67 || var_1_68)))))) && (var_1_70 ? (var_1_73 == ((double) ((abs (var_1_22)) + ((var_1_74 - var_1_20) + var_1_21)))) : (var_1_73 == ((double) (var_1_21 + (var_1_16 - var_1_20)))))) && ((var_1_66 || var_1_72) ? (var_1_75 == ((signed short int) (var_1_64 + var_1_27))) : 1)) && (var_1_67 ? (var_1_76 == ((signed long int) ((1322163942 - 50) - var_1_32))) : (var_1_76 == ((signed long int) (var_1_96 + (var_1_10 + var_1_64)))))) && ((var_1_33 <= (var_1_90 + (var_1_96 * var_1_41))) ? (var_1_78 == ((unsigned char) (max ((abs (var_1_5)) , 4)))) : (var_1_78 == ((unsigned char) (min (var_1_41 , (abs (var_1_40)))))))) && ((var_1_82 > (64 * var_1_23)) ? (var_1_89 ? (var_1_95 ? ((var_1_10 > var_1_54) ? (var_1_79 == ((signed char) var_1_4)) : (var_1_79 == ((signed char) (var_1_4 + (var_1_6 - var_1_5))))) : 1) : 1) : ((! var_1_67) ? (((var_1_61 >> var_1_80) < var_1_5) ? (var_1_88 ? (var_1_79 == ((signed char) (abs (var_1_5)))) : (var_1_79 == ((signed char) var_1_80))) : (var_1_79 == ((signed char) (var_1_6 + var_1_80)))) : (var_1_79 == ((signed char) var_1_6))))) && (var_1_68 ? (var_1_81 == ((unsigned short int) var_1_5)) : (var_1_81 == ((unsigned short int) var_1_31)))) && (var_1_82 == ((signed short int) var_1_75))) && (var_1_88 ? (var_1_83 == ((signed short int) var_1_4)) : 1)) && (var_1_84 == ((signed short int) var_1_85))) && (var_1_68 ? (var_1_86 == ((double) 0.375)) : (var_1_86 == ((double) var_1_21)))) && (var_1_87 == ((unsigned short int) var_1_78))) && (var_1_88 == ((unsigned char) var_1_68))) && (var_1_95 ? (var_1_89 == ((unsigned char) 0)) : (var_1_89 == ((unsigned char) var_1_70)))) && (var_1_90 == ((unsigned long int) var_1_11))) && (var_1_91 == ((signed short int) var_1_83))) && (var_1_66 ? (var_1_92 == ((signed short int) var_1_31)) : (var_1_92 == ((signed short int) var_1_82)))) && (var_1_93 == ((float) var_1_16))) && (var_1_94 == ((unsigned char) var_1_67))) && (last_1_var_1_95 ? (var_1_95 == ((unsigned char) (! var_1_70))) : ((var_1_88 || var_1_66) ? (var_1_95 == ((unsigned char) (var_1_71 && var_1_72))) : ((((var_1_33 + var_1_80) / var_1_29) >= var_1_58) ? (var_1_95 == ((unsigned char) (! var_1_70))) : (((- 10) != var_1_32) ? ((var_1_44 >= var_1_59) ? (var_1_95 == ((unsigned char) var_1_67)) : 1) : (var_1_95 == ((unsigned char) var_1_70))))))) && (var_1_96 == ((unsigned long int) var_1_5))
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
