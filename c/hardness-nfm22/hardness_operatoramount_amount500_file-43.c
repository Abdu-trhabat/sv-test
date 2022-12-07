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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 1;
float var_1_7 = 127.25;
float var_1_8 = 128.5;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -1;
unsigned char var_1_15 = 0;
double var_1_16 = 7.125;
signed short int var_1_17 = 32;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 4;
unsigned long int var_1_22 = 256;
unsigned short int var_1_23 = 51550;
unsigned char var_1_24 = 2;
unsigned long int var_1_25 = 1615427942;
unsigned long int var_1_26 = 3391648498;
unsigned short int var_1_27 = 2;
float var_1_28 = 128.5;
unsigned short int var_1_29 = 23254;
unsigned short int var_1_30 = 21795;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 32;
float var_1_33 = 127.45;
float var_1_34 = 50.5;
signed short int var_1_35 = -64;
float var_1_36 = 1.62;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 64;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
double var_1_46 = 9.8;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
signed long int var_1_50 = -2;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 10;
double var_1_54 = 64.5;
double var_1_55 = 0.0;
double var_1_56 = 127.8;
double var_1_57 = 25.5;
double var_1_58 = 64.25;
double var_1_59 = 4.2;
double var_1_60 = 0.75;
double var_1_61 = -0.25;
unsigned char var_1_62 = 128;
signed short int var_1_63 = 32;
double var_1_64 = 127.5;
signed long int var_1_65 = 50;
unsigned char var_1_66 = 0;
signed long int var_1_67 = -10;
unsigned char var_1_68 = 64;
double var_1_69 = 64.125;
unsigned char var_1_70 = 1;
signed short int var_1_71 = -4;
float var_1_72 = 10000000000.5;
double var_1_73 = 1.6;
unsigned char var_1_74 = 1;
unsigned char var_1_76 = 10;
unsigned char var_1_77 = 200;
unsigned short int var_1_78 = 5;
unsigned short int var_1_79 = 56537;
unsigned long int var_1_80 = 256;
unsigned long int var_1_81 = 1876480992;
unsigned long int var_1_82 = 1000000000;
double var_1_83 = 3.5;
double var_1_84 = 127.2;
double var_1_85 = 1000000000000.6;
signed char var_1_86 = 4;
unsigned long int var_1_87 = 2;
double var_1_88 = 24.2;
signed char var_1_89 = -4;
unsigned char var_1_90 = 0;
signed short int var_1_91 = 256;
unsigned long int var_1_92 = 500;
unsigned char var_1_93 = 0;
unsigned long int var_1_94 = 16;
unsigned char var_1_95 = 25;
double var_1_96 = 2.3;
signed short int var_1_97 = 256;

// Calibration values

// Last'ed variables
double last_1_var_1_16 = 7.125;
unsigned long int last_1_var_1_22 = 256;
signed short int last_1_var_1_35 = -64;
unsigned char last_1_var_1_38 = 16;
double last_1_var_1_46 = 9.8;
double last_1_var_1_64 = 127.5;
unsigned char last_1_var_1_66 = 0;
double last_1_var_1_69 = 64.125;
float last_1_var_1_72 = 10000000000.5;
unsigned short int last_1_var_1_78 = 5;
unsigned long int last_1_var_1_80 = 256;
double last_1_var_1_83 = 3.5;
double last_1_var_1_88 = 24.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch43Amount500
	if (var_1_28 > var_1_60) {
		if (last_1_var_1_72 >= (var_1_36 - (10.25f + var_1_57))) {
			var_1_71 = ((min (-1 , var_1_24)) + var_1_4);
		}
	}


	// From: Req10Batch43Amount500
	signed short int stepLocal_15 = var_1_17;
	signed long int stepLocal_14 = 5 - var_1_29;
	if (stepLocal_15 >= (var_1_19 - (min (last_1_var_1_80 , var_1_30)))) {
		if ((- last_1_var_1_46) > (var_1_36 - var_1_7)) {
			var_1_35 = (max ((max (last_1_var_1_35 , var_1_19)) , ((var_1_5 + -10) + (max (last_1_var_1_22 , last_1_var_1_78)))));
		} else {
			if ((- last_1_var_1_22) < stepLocal_14) {
				var_1_35 = -2;
			} else {
				var_1_35 = (last_1_var_1_22 - (29211 - (last_1_var_1_38 + 5)));
			}
		}
	} else {
		var_1_35 = last_1_var_1_35;
	}


	// From: Req3Batch43Amount500
	unsigned char stepLocal_2 = var_1_4;
	if ((var_1_35 | (var_1_13 % var_1_17)) == stepLocal_2) {
		var_1_16 = (abs (var_1_7));
	}


	// From: Req5Batch43Amount500
	signed long int stepLocal_6 = 256;
	signed long int stepLocal_5 = max (var_1_19 , var_1_5);
	signed long int stepLocal_4 = var_1_20 * (var_1_23 - var_1_19);
	signed long int stepLocal_3 = var_1_13 / (128 - var_1_24);
	if (stepLocal_5 < ((var_1_71 >> var_1_4) / var_1_17)) {
		if (var_1_11) {
			if (stepLocal_4 < var_1_5) {
				var_1_22 = var_1_71;
			}
		} else {
			if (var_1_20 >= stepLocal_3) {
				var_1_22 = (min ((var_1_23 + (var_1_25 - var_1_21)) , (var_1_26 - var_1_24)));
			} else {
				if (stepLocal_6 >= var_1_5) {
					var_1_22 = (min (var_1_24 , var_1_4));
				} else {
					var_1_22 = (min (var_1_71 , (var_1_26 - var_1_5)));
				}
			}
		}
	} else {
		var_1_22 = var_1_4;
	}


	// From: Req31Batch43Amount500
	if (last_1_var_1_83 != (last_1_var_1_69 * var_1_8)) {
		var_1_74 = ((last_1_var_1_88 < var_1_8) || var_1_15);
	} else {
		var_1_74 = (last_1_var_1_66 && var_1_11);
	}


	// From: Req38Batch43Amount500
	if (var_1_74) {
		var_1_88 = var_1_84;
	} else {
		var_1_88 = var_1_85;
	}


	// From: Req25Batch43Amount500
	unsigned char stepLocal_29 = var_1_49 || var_1_74;
	if (stepLocal_29 && var_1_12) {
		var_1_68 = var_1_5;
	}


	// From: Req16Batch43Amount500
	if (var_1_12 || var_1_49) {
		if (var_1_45) {
			var_1_51 = ((var_1_12 || var_1_15) && var_1_52);
		} else {
			var_1_51 = (! var_1_15);
		}
	} else {
		if (var_1_25 > 64u) {
			if ((min (last_1_var_1_16 , 2.25)) != 4.4) {
				var_1_51 = (! (! var_1_15));
			} else {
				var_1_51 = (! 1);
			}
		}
	}


	// From: Req36Batch43Amount500
	if (var_1_51) {
		var_1_86 = var_1_24;
	} else {
		var_1_86 = var_1_24;
	}


	// From: Req41Batch43Amount500
	if (var_1_51) {
		var_1_91 = -2;
	} else {
		var_1_91 = 10;
	}


	// From: Req4Batch43Amount500
	var_1_18 = (var_1_4 + (min (var_1_19 , (var_1_20 - var_1_21))));


	// From: Req8Batch43Amount500
	signed long int stepLocal_13 = var_1_29 / (var_1_24 + 5);
	if (stepLocal_13 == var_1_20) {
		var_1_32 = (max (var_1_4 , var_1_20));
	}


	// From: Req13Batch43Amount500
	unsigned char stepLocal_20 = var_1_4;
	unsigned short int stepLocal_19 = var_1_23;
	if (((var_1_25 % var_1_24) * var_1_26) < stepLocal_20) {
		if (var_1_42 > stepLocal_19) {
			if (var_1_28 < (min (last_1_var_1_46 , var_1_34))) {
				var_1_46 = var_1_7;
			} else {
				var_1_46 = var_1_7;
			}
		}
	} else {
		var_1_46 = (min (var_1_7 , var_1_34));
	}


	// From: Req20Batch43Amount500
	var_1_63 = -10;


	// From: Req26Batch43Amount500
	unsigned long int stepLocal_30 = (var_1_63 ^ var_1_26) ^ (var_1_19 >> var_1_21);
	if (stepLocal_30 != (max ((- var_1_39) , 10000u))) {
		var_1_69 = (var_1_58 + (max (var_1_61 , var_1_60)));
	} else {
		var_1_69 = (var_1_57 - var_1_7);
	}


	// From: Req30Batch43Amount500
	signed long int stepLocal_35 = - (var_1_68 * var_1_32);
	if (stepLocal_35 >= var_1_4) {
		var_1_73 = (abs (var_1_61));
	}


	// From: Req33Batch43Amount500
	if ((- var_1_57) >= 255.6) {
		var_1_78 = (var_1_79 - var_1_29);
	}


	// From: Req34Batch43Amount500
	var_1_80 = (((var_1_81 - 10u) - (var_1_82 - var_1_42)) + var_1_25);


	// From: Req37Batch43Amount500
	var_1_87 = var_1_79;


	// From: Req39Batch43Amount500
	var_1_89 = var_1_77;


	// From: Req42Batch43Amount500
	var_1_92 = var_1_25;


	// From: Req43Batch43Amount500
	var_1_93 = var_1_4;


	// From: Req46Batch43Amount500
	var_1_96 = 16.25;


	// From: Req47Batch43Amount500
	var_1_97 = var_1_19;


	// From: Req24Batch43Amount500
	if ((var_1_59 + var_1_8) >= (63.72 - 9999999.5)) {
		var_1_67 = ((min (var_1_71 , (var_1_63 - var_1_42))) + var_1_35);
	}


	// From: Req32Batch43Amount500
	if (! var_1_12) {
		if (var_1_60 < var_1_16) {
			if ((var_1_25 / var_1_20) < var_1_29) {
				var_1_76 = (var_1_39 - var_1_42);
			} else {
				var_1_76 = ((var_1_77 - (min (var_1_43 , var_1_21))) - (max (var_1_19 , var_1_42)));
			}
		} else {
			var_1_76 = (min (var_1_40 , var_1_4));
		}
	} else {
		var_1_76 = (abs (var_1_24));
	}


	// From: Req45Batch43Amount500
	if (var_1_13 == var_1_76) {
		var_1_95 = var_1_40;
	} else {
		var_1_95 = ((min (var_1_77 , var_1_39)) - (var_1_40 - var_1_21));
	}


	// From: Req6Batch43Amount500
	signed long int stepLocal_12 = var_1_4 / -256;
	unsigned char stepLocal_11 = var_1_15;
	signed long int stepLocal_10 = abs (var_1_18);
	unsigned long int stepLocal_9 = var_1_92;
	signed long int stepLocal_8 = var_1_13;
	unsigned char stepLocal_7 = var_1_21;
	if (stepLocal_12 <= (-1 - var_1_19)) {
		if (stepLocal_10 != ((64 * var_1_21) % var_1_24)) {
			if (stepLocal_9 > var_1_18) {
				if (stepLocal_7 >= (- var_1_18)) {
					var_1_27 = (var_1_21 + var_1_24);
				} else {
					var_1_27 = var_1_4;
				}
			} else {
				var_1_27 = (var_1_19 + (var_1_92 + var_1_92));
			}
		} else {
			if (stepLocal_8 != var_1_17) {
				if (((var_1_8 / var_1_28) > var_1_7) || stepLocal_11) {
					var_1_27 = var_1_4;
				} else {
					var_1_27 = (((abs (var_1_29)) + var_1_30) - (var_1_5 + var_1_21));
				}
			}
		}
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req7Batch43Amount500
	if (! (50 < var_1_92)) {
		var_1_31 = (min (var_1_5 , var_1_24));
	} else {
		var_1_31 = var_1_4;
	}


	// From: Req17Batch43Amount500
	unsigned short int stepLocal_26 = var_1_23;
	signed long int stepLocal_25 = var_1_29 << var_1_5;
	if (stepLocal_26 < ((- var_1_31) + var_1_43)) {
		if (stepLocal_25 == ((min (var_1_30 , var_1_80)) / (abs (-500)))) {
			var_1_53 = var_1_39;
		} else {
			var_1_53 = (128 - var_1_43);
		}
	} else {
		var_1_53 = (var_1_39 - var_1_40);
	}


	// From: Req18Batch43Amount500
	if ((var_1_29 + var_1_39) >= var_1_13) {
		if (var_1_36 <= var_1_34) {
			if (var_1_45) {
				if ((var_1_8 - (var_1_55 - 1.00000000004E10)) == var_1_96) {
					var_1_54 = (var_1_7 - var_1_56);
				} else {
					var_1_54 = (var_1_7 - var_1_56);
				}
			} else {
				var_1_54 = ((max ((var_1_57 - var_1_58) , (min (var_1_59 , var_1_60)))) + var_1_61);
			}
		} else {
			var_1_54 = 4.287;
		}
	} else {
		if (((var_1_21 & var_1_30) >= (abs (var_1_23))) && (var_1_29 != var_1_24)) {
			var_1_54 = (var_1_7 - var_1_56);
		}
	}


	// From: Req23Batch43Amount500
	if (var_1_48) {
		var_1_66 = ((var_1_21 < var_1_27) || (var_1_52 && var_1_15));
	}


	// From: Req40Batch43Amount500
	if (var_1_66) {
		var_1_90 = var_1_77;
	} else {
		var_1_90 = var_1_4;
	}


	// From: Req14Batch43Amount500
	unsigned char stepLocal_24 = var_1_76;
	signed long int stepLocal_23 = 10 / var_1_39;
	signed long int stepLocal_22 = var_1_13;
	unsigned char stepLocal_21 = var_1_68;
	if (stepLocal_23 <= (var_1_20 + var_1_29)) {
		if (var_1_30 > stepLocal_22) {
			if ((- var_1_46) == var_1_96) {
				var_1_47 = var_1_45;
			} else {
				if (var_1_8 >= var_1_36) {
					var_1_47 = ((var_1_11 || (var_1_12 || var_1_48)) || var_1_49);
				} else {
					if (var_1_46 != var_1_8) {
						if (var_1_49) {
							if (var_1_40 >= stepLocal_21) {
								var_1_47 = (var_1_66 && var_1_48);
							} else {
								var_1_47 = ((! var_1_12) && var_1_15);
							}
						}
					}
				}
			}
		} else {
			if (stepLocal_24 < var_1_27) {
				var_1_47 = (! var_1_45);
			} else {
				var_1_47 = var_1_45;
			}
		}
	}


	// From: Req11Batch43Amount500
	unsigned char stepLocal_18 = var_1_8 < (var_1_69 + var_1_34);
	unsigned char stepLocal_17 = var_1_12;
	unsigned long int stepLocal_16 = var_1_26 / var_1_20;
	if ((15.75f < (- var_1_88)) && stepLocal_18) {
		var_1_38 = (var_1_39 - var_1_20);
	} else {
		if (stepLocal_16 > var_1_95) {
			var_1_38 = (min (var_1_5 , ((var_1_20 + var_1_40) - var_1_4)));
		} else {
			if ((var_1_31 != var_1_19) || stepLocal_17) {
				var_1_38 = ((min (var_1_40 , var_1_42)) + (max (var_1_19 , (var_1_21 + var_1_43))));
			} else {
				var_1_38 = ((var_1_21 + var_1_43) + (min (var_1_24 , var_1_40)));
			}
		}
	}


	// From: Req12Batch43Amount500
	if (var_1_7 > var_1_36) {
		if (var_1_66) {
			var_1_44 = (var_1_15 && var_1_45);
		}
	}


	// From: Req19Batch43Amount500
	unsigned short int stepLocal_27 = var_1_23;
	if (stepLocal_27 <= var_1_95) {
		var_1_62 = (min (var_1_43 , var_1_20));
	} else {
		if (var_1_47) {
			var_1_62 = (var_1_19 + var_1_42);
		} else {
			var_1_62 = (var_1_39 - (max (var_1_40 , var_1_24)));
		}
	}


	// From: Req21Batch43Amount500
	if ((var_1_23 - (var_1_39 + 5)) < var_1_90) {
		if (var_1_66) {
			var_1_64 = var_1_7;
		} else {
			if (! (var_1_42 != var_1_23)) {
				var_1_64 = (var_1_60 + var_1_61);
			} else {
				if (var_1_61 != last_1_var_1_64) {
					if ((var_1_17 * var_1_27) <= ((var_1_5 * 128) ^ var_1_24)) {
						var_1_64 = var_1_59;
					} else {
						var_1_64 = var_1_34;
					}
				} else {
					var_1_64 = (min (var_1_59 , (min (24.6 , (255.2 + var_1_61)))));
				}
			}
		}
	}


	// From: Req44Batch43Amount500
	if (var_1_47) {
		var_1_94 = var_1_5;
	} else {
		var_1_94 = var_1_87;
	}


	// From: Req1Batch43Amount500
	unsigned char stepLocal_0 = var_1_47;
	if (stepLocal_0 && var_1_44) {
		var_1_1 = (var_1_4 + 5);
	} else {
		var_1_1 = (abs (var_1_5));
	}


	// From: Req22Batch43Amount500
	signed long int stepLocal_28 = (var_1_1 - var_1_39) * var_1_27;
	if ((min (var_1_23 , (min (var_1_40 , -100)))) < stepLocal_28) {
		var_1_65 = (max (-16 , (var_1_24 - var_1_40)));
	}


	// From: Req9Batch43Amount500
	if (var_1_91 <= var_1_20) {
		if (var_1_12) {
			var_1_33 = (max (var_1_7 , var_1_34));
		} else {
			if (var_1_44 || (var_1_92 < var_1_13)) {
				var_1_33 = (min (var_1_34 , var_1_7));
			} else {
				if (var_1_92 == var_1_29) {
					if ((var_1_34 >= var_1_64) || var_1_74) {
						var_1_33 = var_1_7;
					} else {
						var_1_33 = var_1_7;
					}
				}
			}
		}
	} else {
		var_1_33 = var_1_34;
	}


	// From: Req15Batch43Amount500
	var_1_50 = (var_1_65 + (min (var_1_29 , var_1_17)));


	// From: Req27Batch43Amount500
	unsigned char stepLocal_31 = var_1_11;
	if (var_1_51 || stepLocal_31) {
		if ((var_1_8 - var_1_58) <= var_1_60) {
			var_1_70 = (! var_1_49);
		}
	} else {
		if (var_1_12) {
			var_1_70 = (((min (var_1_50 , var_1_39)) <= var_1_32) && var_1_49);
		} else {
			var_1_70 = (((abs (15.4f)) > var_1_55) || (var_1_11 || (! var_1_49)));
		}
	}


	// From: Req35Batch43Amount500
	unsigned char stepLocal_36 = var_1_48;
	if (var_1_70 && stepLocal_36) {
		if (var_1_47) {
			var_1_83 = ((var_1_84 + var_1_85) + (var_1_58 - var_1_57));
		} else {
			var_1_83 = var_1_85;
		}
	} else {
		var_1_83 = var_1_56;
	}


	// From: Req2Batch43Amount500
	signed long int stepLocal_1 = var_1_5 * (var_1_4 + var_1_68);
	if (((var_1_7 + 100000.5f) - var_1_8) > (var_1_88 + var_1_83)) {
		if (var_1_8 > var_1_88) {
			var_1_6 = (var_1_11 || (var_1_47 && var_1_12));
		} else {
			if ((var_1_27 / var_1_13) != stepLocal_1) {
				var_1_6 = (! ((var_1_88 >= var_1_83) || var_1_15));
			} else {
				var_1_6 = ((var_1_13 > (max (var_1_68 , var_1_27))) && var_1_12);
			}
		}
	} else {
		var_1_6 = var_1_15;
	}


	// From: Req29Batch43Amount500
	unsigned char stepLocal_34 = var_1_32;
	signed long int stepLocal_33 = min (0 , var_1_21);
	signed long int stepLocal_32 = var_1_24 - var_1_31;
	if (var_1_34 < var_1_55) {
		if (var_1_86 > stepLocal_33) {
			if (stepLocal_34 < var_1_67) {
				if (stepLocal_32 > -10000000) {
					var_1_72 = (abs (max (var_1_59 , var_1_60)));
				}
			} else {
				var_1_72 = (var_1_7 - var_1_58);
			}
		} else {
			if (var_1_83 <= var_1_33) {
				var_1_72 = (abs (var_1_7 - (max (var_1_57 , 8.375f))));
			} else {
				var_1_72 = (max (var_1_57 , var_1_7));
			}
		}
	} else {
		var_1_72 = (min ((min (var_1_61 , var_1_56)) , var_1_7));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427387900e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32768);
	assume_abort_if_not(var_1_17 <= 32767);
	assume_abort_if_not(var_1_17 != 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 126);
	assume_abort_if_not(var_1_24 != 127);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	assume_abort_if_not(var_1_28 != 0.0F);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 16384);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 64);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 4611686.018427387900e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -461168.6018427382800e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 190);
	assume_abort_if_not(var_1_77 <= 254);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 32767);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 1610612735);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_82 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_82 >= 536870911);
	assume_abort_if_not(var_1_82 <= 1073741823);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= -230584.3009213691390e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691390e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_85 >= -230584.3009213691390e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691390e+12F && var_1_85 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((var_1_47 && var_1_44) ? (var_1_1 == ((unsigned char) (var_1_4 + 5))) : (var_1_1 == ((unsigned char) (abs (var_1_5))))) && ((((var_1_7 + 100000.5f) - var_1_8) > (var_1_88 + var_1_83)) ? ((var_1_8 > var_1_88) ? (var_1_6 == ((unsigned char) (var_1_11 || (var_1_47 && var_1_12)))) : (((var_1_27 / var_1_13) != (var_1_5 * (var_1_4 + var_1_68))) ? (var_1_6 == ((unsigned char) (! ((var_1_88 >= var_1_83) || var_1_15)))) : (var_1_6 == ((unsigned char) ((var_1_13 > (max (var_1_68 , var_1_27))) && var_1_12))))) : (var_1_6 == ((unsigned char) var_1_15)))) && (((var_1_35 | (var_1_13 % var_1_17)) == var_1_4) ? (var_1_16 == ((double) (abs (var_1_7)))) : 1)) && (var_1_18 == ((unsigned char) (var_1_4 + (min (var_1_19 , (var_1_20 - var_1_21))))))) && (((max (var_1_19 , var_1_5)) < ((var_1_71 >> var_1_4) / var_1_17)) ? (var_1_11 ? (((var_1_20 * (var_1_23 - var_1_19)) < var_1_5) ? (var_1_22 == ((unsigned long int) var_1_71)) : 1) : ((var_1_20 >= (var_1_13 / (128 - var_1_24))) ? (var_1_22 == ((unsigned long int) (min ((var_1_23 + (var_1_25 - var_1_21)) , (var_1_26 - var_1_24))))) : ((256 >= var_1_5) ? (var_1_22 == ((unsigned long int) (min (var_1_24 , var_1_4)))) : (var_1_22 == ((unsigned long int) (min (var_1_71 , (var_1_26 - var_1_5)))))))) : (var_1_22 == ((unsigned long int) var_1_4)))) && (((var_1_4 / -256) <= (-1 - var_1_19)) ? (((abs (var_1_18)) != ((64 * var_1_21) % var_1_24)) ? ((var_1_92 > var_1_18) ? ((var_1_21 >= (- var_1_18)) ? (var_1_27 == ((unsigned short int) (var_1_21 + var_1_24))) : (var_1_27 == ((unsigned short int) var_1_4))) : (var_1_27 == ((unsigned short int) (var_1_19 + (var_1_92 + var_1_92))))) : ((var_1_13 != var_1_17) ? ((((var_1_8 / var_1_28) > var_1_7) || var_1_15) ? (var_1_27 == ((unsigned short int) var_1_4)) : (var_1_27 == ((unsigned short int) (((abs (var_1_29)) + var_1_30) - (var_1_5 + var_1_21))))) : 1)) : (var_1_27 == ((unsigned short int) var_1_29)))) && ((! (50 < var_1_92)) ? (var_1_31 == ((unsigned char) (min (var_1_5 , var_1_24)))) : (var_1_31 == ((unsigned char) var_1_4)))) && (((var_1_29 / (var_1_24 + 5)) == var_1_20) ? (var_1_32 == ((unsigned char) (max (var_1_4 , var_1_20)))) : 1)) && ((var_1_91 <= var_1_20) ? (var_1_12 ? (var_1_33 == ((float) (max (var_1_7 , var_1_34)))) : ((var_1_44 || (var_1_92 < var_1_13)) ? (var_1_33 == ((float) (min (var_1_34 , var_1_7)))) : ((var_1_92 == var_1_29) ? (((var_1_34 >= var_1_64) || var_1_74) ? (var_1_33 == ((float) var_1_7)) : (var_1_33 == ((float) var_1_7))) : 1))) : (var_1_33 == ((float) var_1_34)))) && ((var_1_17 >= (var_1_19 - (min (last_1_var_1_80 , var_1_30)))) ? (((- last_1_var_1_46) > (var_1_36 - var_1_7)) ? (var_1_35 == ((signed short int) (max ((max (last_1_var_1_35 , var_1_19)) , ((var_1_5 + -10) + (max (last_1_var_1_22 , last_1_var_1_78))))))) : (((- last_1_var_1_22) < (5 - var_1_29)) ? (var_1_35 == ((signed short int) -2)) : (var_1_35 == ((signed short int) (last_1_var_1_22 - (29211 - (last_1_var_1_38 + 5))))))) : (var_1_35 == ((signed short int) last_1_var_1_35)))) && (((15.75f < (- var_1_88)) && (var_1_8 < (var_1_69 + var_1_34))) ? (var_1_38 == ((unsigned char) (var_1_39 - var_1_20))) : (((var_1_26 / var_1_20) > var_1_95) ? (var_1_38 == ((unsigned char) (min (var_1_5 , ((var_1_20 + var_1_40) - var_1_4))))) : (((var_1_31 != var_1_19) || var_1_12) ? (var_1_38 == ((unsigned char) ((min (var_1_40 , var_1_42)) + (max (var_1_19 , (var_1_21 + var_1_43)))))) : (var_1_38 == ((unsigned char) ((var_1_21 + var_1_43) + (min (var_1_24 , var_1_40))))))))) && ((var_1_7 > var_1_36) ? (var_1_66 ? (var_1_44 == ((unsigned char) (var_1_15 && var_1_45))) : 1) : 1)) && ((((var_1_25 % var_1_24) * var_1_26) < var_1_4) ? ((var_1_42 > var_1_23) ? ((var_1_28 < (min (last_1_var_1_46 , var_1_34))) ? (var_1_46 == ((double) var_1_7)) : (var_1_46 == ((double) var_1_7))) : 1) : (var_1_46 == ((double) (min (var_1_7 , var_1_34)))))) && (((10 / var_1_39) <= (var_1_20 + var_1_29)) ? ((var_1_30 > var_1_13) ? (((- var_1_46) == var_1_96) ? (var_1_47 == ((unsigned char) var_1_45)) : ((var_1_8 >= var_1_36) ? (var_1_47 == ((unsigned char) ((var_1_11 || (var_1_12 || var_1_48)) || var_1_49))) : ((var_1_46 != var_1_8) ? (var_1_49 ? ((var_1_40 >= var_1_68) ? (var_1_47 == ((unsigned char) (var_1_66 && var_1_48))) : (var_1_47 == ((unsigned char) ((! var_1_12) && var_1_15)))) : 1) : 1))) : ((var_1_76 < var_1_27) ? (var_1_47 == ((unsigned char) (! var_1_45))) : (var_1_47 == ((unsigned char) var_1_45)))) : 1)) && (var_1_50 == ((signed long int) (var_1_65 + (min (var_1_29 , var_1_17)))))) && ((var_1_12 || var_1_49) ? (var_1_45 ? (var_1_51 == ((unsigned char) ((var_1_12 || var_1_15) && var_1_52))) : (var_1_51 == ((unsigned char) (! var_1_15)))) : ((var_1_25 > 64u) ? (((min (last_1_var_1_16 , 2.25)) != 4.4) ? (var_1_51 == ((unsigned char) (! (! var_1_15)))) : (var_1_51 == ((unsigned char) (! 1)))) : 1))) && ((var_1_23 < ((- var_1_31) + var_1_43)) ? (((var_1_29 << var_1_5) == ((min (var_1_30 , var_1_80)) / (abs (-500)))) ? (var_1_53 == ((unsigned char) var_1_39)) : (var_1_53 == ((unsigned char) (128 - var_1_43)))) : (var_1_53 == ((unsigned char) (var_1_39 - var_1_40))))) && (((var_1_29 + var_1_39) >= var_1_13) ? ((var_1_36 <= var_1_34) ? (var_1_45 ? (((var_1_8 - (var_1_55 - 1.00000000004E10)) == var_1_96) ? (var_1_54 == ((double) (var_1_7 - var_1_56))) : (var_1_54 == ((double) (var_1_7 - var_1_56)))) : (var_1_54 == ((double) ((max ((var_1_57 - var_1_58) , (min (var_1_59 , var_1_60)))) + var_1_61)))) : (var_1_54 == ((double) 4.287))) : ((((var_1_21 & var_1_30) >= (abs (var_1_23))) && (var_1_29 != var_1_24)) ? (var_1_54 == ((double) (var_1_7 - var_1_56))) : 1))) && ((var_1_23 <= var_1_95) ? (var_1_62 == ((unsigned char) (min (var_1_43 , var_1_20)))) : (var_1_47 ? (var_1_62 == ((unsigned char) (var_1_19 + var_1_42))) : (var_1_62 == ((unsigned char) (var_1_39 - (max (var_1_40 , var_1_24)))))))) && (var_1_63 == ((signed short int) -10))) && (((var_1_23 - (var_1_39 + 5)) < var_1_90) ? (var_1_66 ? (var_1_64 == ((double) var_1_7)) : ((! (var_1_42 != var_1_23)) ? (var_1_64 == ((double) (var_1_60 + var_1_61))) : ((var_1_61 != last_1_var_1_64) ? (((var_1_17 * var_1_27) <= ((var_1_5 * 128) ^ var_1_24)) ? (var_1_64 == ((double) var_1_59)) : (var_1_64 == ((double) var_1_34))) : (var_1_64 == ((double) (min (var_1_59 , (min (24.6 , (255.2 + var_1_61)))))))))) : 1)) && (((min (var_1_23 , (min (var_1_40 , -100)))) < ((var_1_1 - var_1_39) * var_1_27)) ? (var_1_65 == ((signed long int) (max (-16 , (var_1_24 - var_1_40))))) : 1)) && (var_1_48 ? (var_1_66 == ((unsigned char) ((var_1_21 < var_1_27) || (var_1_52 && var_1_15)))) : 1)) && (((var_1_59 + var_1_8) >= (63.72 - 9999999.5)) ? (var_1_67 == ((signed long int) ((min (var_1_71 , (var_1_63 - var_1_42))) + var_1_35))) : 1)) && (((var_1_49 || var_1_74) && var_1_12) ? (var_1_68 == ((unsigned char) var_1_5)) : 1)) && ((((var_1_63 ^ var_1_26) ^ (var_1_19 >> var_1_21)) != (max ((- var_1_39) , 10000u))) ? (var_1_69 == ((double) (var_1_58 + (max (var_1_61 , var_1_60))))) : (var_1_69 == ((double) (var_1_57 - var_1_7))))) && ((var_1_51 || var_1_11) ? (((var_1_8 - var_1_58) <= var_1_60) ? (var_1_70 == ((unsigned char) (! var_1_49))) : 1) : (var_1_12 ? (var_1_70 == ((unsigned char) (((min (var_1_50 , var_1_39)) <= var_1_32) && var_1_49))) : (var_1_70 == ((unsigned char) (((abs (15.4f)) > var_1_55) || (var_1_11 || (! var_1_49)))))))) && ((var_1_28 > var_1_60) ? ((last_1_var_1_72 >= (var_1_36 - (10.25f + var_1_57))) ? (var_1_71 == ((signed short int) ((min (-1 , var_1_24)) + var_1_4))) : 1) : 1)) && ((var_1_34 < var_1_55) ? ((var_1_86 > (min (0 , var_1_21))) ? ((var_1_32 < var_1_67) ? (((var_1_24 - var_1_31) > -10000000) ? (var_1_72 == ((float) (abs (max (var_1_59 , var_1_60))))) : 1) : (var_1_72 == ((float) (var_1_7 - var_1_58)))) : ((var_1_83 <= var_1_33) ? (var_1_72 == ((float) (abs (var_1_7 - (max (var_1_57 , 8.375f)))))) : (var_1_72 == ((float) (max (var_1_57 , var_1_7)))))) : (var_1_72 == ((float) (min ((min (var_1_61 , var_1_56)) , var_1_7)))))) && (((- (var_1_68 * var_1_32)) >= var_1_4) ? (var_1_73 == ((double) (abs (var_1_61)))) : 1)) && ((last_1_var_1_83 != (last_1_var_1_69 * var_1_8)) ? (var_1_74 == ((unsigned char) ((last_1_var_1_88 < var_1_8) || var_1_15))) : (var_1_74 == ((unsigned char) (last_1_var_1_66 && var_1_11))))) && ((! var_1_12) ? ((var_1_60 < var_1_16) ? (((var_1_25 / var_1_20) < var_1_29) ? (var_1_76 == ((unsigned char) (var_1_39 - var_1_42))) : (var_1_76 == ((unsigned char) ((var_1_77 - (min (var_1_43 , var_1_21))) - (max (var_1_19 , var_1_42)))))) : (var_1_76 == ((unsigned char) (min (var_1_40 , var_1_4))))) : (var_1_76 == ((unsigned char) (abs (var_1_24)))))) && (((- var_1_57) >= 255.6) ? (var_1_78 == ((unsigned short int) (var_1_79 - var_1_29))) : 1)) && (var_1_80 == ((unsigned long int) (((var_1_81 - 10u) - (var_1_82 - var_1_42)) + var_1_25)))) && ((var_1_70 && var_1_48) ? (var_1_47 ? (var_1_83 == ((double) ((var_1_84 + var_1_85) + (var_1_58 - var_1_57)))) : (var_1_83 == ((double) var_1_85))) : (var_1_83 == ((double) var_1_56)))) && (var_1_51 ? (var_1_86 == ((signed char) var_1_24)) : (var_1_86 == ((signed char) var_1_24)))) && (var_1_87 == ((unsigned long int) var_1_79))) && (var_1_74 ? (var_1_88 == ((double) var_1_84)) : (var_1_88 == ((double) var_1_85)))) && (var_1_89 == ((signed char) var_1_77))) && (var_1_66 ? (var_1_90 == ((unsigned char) var_1_77)) : (var_1_90 == ((unsigned char) var_1_4)))) && (var_1_51 ? (var_1_91 == ((signed short int) -2)) : (var_1_91 == ((signed short int) 10)))) && (var_1_92 == ((unsigned long int) var_1_25))) && (var_1_93 == ((unsigned char) var_1_4))) && (var_1_47 ? (var_1_94 == ((unsigned long int) var_1_5)) : (var_1_94 == ((unsigned long int) var_1_87)))) && ((var_1_13 == var_1_76) ? (var_1_95 == ((unsigned char) var_1_40)) : (var_1_95 == ((unsigned char) ((min (var_1_77 , var_1_39)) - (var_1_40 - var_1_21)))))) && (var_1_96 == ((double) 16.25))) && (var_1_97 == ((signed short int) var_1_19))
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
