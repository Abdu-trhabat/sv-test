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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
double var_1_2 = 99999999999.3;
double var_1_3 = 1.7;
signed short int var_1_5 = 1;
signed short int var_1_6 = 2;
signed short int var_1_7 = 128;
signed short int var_1_8 = 16;
signed short int var_1_9 = -5;
double var_1_10 = 128.6;
double var_1_13 = 0.5;
double var_1_14 = 24.875;
double var_1_15 = 500.5;
double var_1_16 = 3.8;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
signed short int var_1_19 = 64;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 25;
signed long int var_1_25 = -2;
signed long int var_1_26 = 500;
float var_1_27 = 25.5;
signed char var_1_28 = -1;
signed char var_1_29 = 16;
signed char var_1_30 = 32;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 5;
unsigned char var_1_36 = 2;
double var_1_37 = 100000000000.4;
unsigned long int var_1_38 = 2;
float var_1_39 = 8.25;
float var_1_40 = 64.6;
signed short int var_1_41 = -2;
signed short int var_1_42 = 17861;
signed char var_1_43 = 5;
signed char var_1_44 = 32;
signed char var_1_45 = 50;
signed char var_1_46 = 64;
signed char var_1_47 = 100;
signed short int var_1_48 = -2;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_55 = 200;
unsigned char var_1_56 = 200;
unsigned char var_1_57 = 4;
unsigned long int var_1_58 = 5;
unsigned long int var_1_59 = 2531420198;
float var_1_60 = 16.25;
float var_1_62 = 0.5;
float var_1_63 = 7.8;
signed short int var_1_64 = 200;
signed long int var_1_65 = 10;
signed long int var_1_67 = -1968252663;
float var_1_68 = 3.5;
float var_1_69 = 0.0;
float var_1_70 = 0.0;
double var_1_71 = 31.875;
double var_1_72 = 0.0;
double var_1_73 = 3.4;
double var_1_74 = 256.5;
float var_1_75 = 31.75;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 0;
double var_1_78 = 10.7;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 0;
signed char var_1_81 = 0;
signed char var_1_82 = 10;
float var_1_83 = 7.6;
float var_1_84 = 7.5;
float var_1_85 = 7.6;
unsigned long int var_1_86 = 10;
unsigned char var_1_87 = 1;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 0;
signed char var_1_90 = 4;
double var_1_91 = -0.75;
float var_1_92 = 0.44999999999999996;
float var_1_93 = 64.5;
unsigned short int var_1_94 = 2;
double var_1_95 = 128.5;
signed short int var_1_96 = -8;
unsigned long int var_1_97 = 1;
signed short int var_1_98 = 64;
signed short int var_1_99 = 25;

// Calibration values

// Last'ed variables
double last_1_var_1_10 = 128.6;
unsigned char last_1_var_1_17 = 0;
unsigned char last_1_var_1_31 = 1;
signed short int last_1_var_1_41 = -2;
signed short int last_1_var_1_48 = -2;
unsigned char last_1_var_1_49 = 0;
unsigned char last_1_var_1_53 = 0;
signed long int last_1_var_1_65 = 10;
unsigned char last_1_var_1_79 = 1;
signed char last_1_var_1_82 = 10;
signed char last_1_var_1_90 = 4;
unsigned short int last_1_var_1_94 = 2;
signed short int last_1_var_1_96 = -8;
signed short int last_1_var_1_98 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch0Amount500
	signed long int stepLocal_9 = last_1_var_1_98;
	signed long int stepLocal_8 = last_1_var_1_82;
	if (stepLocal_9 <= last_1_var_1_48) {
		if (! var_1_20) {
			var_1_49 = (abs (var_1_29 + var_1_30));
		} else {
			if (stepLocal_8 <= var_1_34) {
				var_1_49 = (max ((min (8 , var_1_29)) , 1));
			} else {
				var_1_49 = (max ((var_1_50 - var_1_47) , var_1_44));
			}
		}
	} else {
		var_1_49 = (var_1_50 - var_1_36);
	}


	// From: Req46Batch0Amount500
	signed long int stepLocal_24 = last_1_var_1_96 + (var_1_33 - var_1_47);
	if (last_1_var_1_79) {
		if (var_1_44 <= stepLocal_24) {
			var_1_98 = (max (last_1_var_1_90 , ((var_1_42 - last_1_var_1_65) - var_1_99)));
		}
	}


	// From: Req44Batch0Amount500
	var_1_96 = var_1_98;


	// From: Req24Batch0Amount500
	unsigned long int stepLocal_16 = (var_1_38 % var_1_55) + (last_1_var_1_53 | var_1_25);
	if ((last_1_var_1_49 + var_1_34) <= stepLocal_16) {
		var_1_65 = (var_1_38 + -128);
	} else {
		var_1_65 = (((abs (var_1_67)) - (min (var_1_7 , var_1_35))) - var_1_56);
	}


	// From: Req30Batch0Amount500
	if ((var_1_29 - var_1_44) < var_1_65) {
		var_1_79 = ((var_1_23 || var_1_77) || var_1_80);
	}


	// From: Req21Batch0Amount500
	if (last_1_var_1_31 >= (var_1_45 ^ (var_1_55 + last_1_var_1_48))) {
		var_1_58 = (var_1_59 - (var_1_8 + last_1_var_1_94));
	} else {
		if ((max (var_1_3 , last_1_var_1_10)) > var_1_14) {
			var_1_58 = ((abs (min (var_1_29 , var_1_45))) + var_1_6);
		} else {
			var_1_58 = (max (var_1_30 , (min (last_1_var_1_94 , (var_1_29 + var_1_45)))));
		}
	}


	// From: Req2Batch0Amount500
	var_1_9 = ((max (var_1_7 , var_1_5)) - (max ((27761 - var_1_6) , var_1_8)));


	// From: Req10Batch0Amount500
	if (var_1_98 > var_1_19) {
		var_1_39 = (abs ((abs (var_1_16)) - var_1_14));
	}


	// From: Req11Batch0Amount500
	var_1_40 = (min (var_1_16 , ((min (var_1_14 , var_1_15)) - 128.3f)));


	// From: Req12Batch0Amount500
	if (var_1_26 < (var_1_58 / var_1_34)) {
		var_1_41 = (last_1_var_1_41 + var_1_38);
	} else {
		var_1_41 = ((var_1_42 - var_1_38) - (max (var_1_30 , var_1_6)));
	}


	// From: Req13Batch0Amount500
	signed short int stepLocal_7 = var_1_6;
	if (var_1_33 > stepLocal_7) {
		var_1_43 = (var_1_29 - ((var_1_44 + var_1_45) - (var_1_36 + var_1_38)));
	} else {
		var_1_43 = var_1_29;
	}


	// From: Req14Batch0Amount500
	if (var_1_23) {
		if ((var_1_15 - var_1_14) > 16.5) {
			var_1_46 = (var_1_29 - 4);
		} else {
			var_1_46 = (var_1_44 - (min ((var_1_47 - var_1_38) , var_1_36)));
		}
	} else {
		var_1_46 = ((max ((var_1_44 + var_1_35) , var_1_47)) - var_1_45);
	}


	// From: Req25Batch0Amount500
	if (var_1_18 || (var_1_20 && var_1_21)) {
		var_1_68 = ((var_1_69 - var_1_14) - (var_1_70 - var_1_62));
	}


	// From: Req29Batch0Amount500
	var_1_78 = (min ((var_1_72 - (abs (var_1_16))) , var_1_74));


	// From: Req32Batch0Amount500
	if (var_1_21) {
		if ((var_1_69 - var_1_70) >= var_1_16) {
			var_1_82 = (var_1_44 - var_1_34);
		} else {
			var_1_82 = (var_1_34 - var_1_45);
		}
	} else {
		var_1_82 = (abs (var_1_44));
	}


	// From: Req33Batch0Amount500
	if (var_1_77) {
		if (var_1_18) {
			var_1_83 = (min (var_1_74 , (abs (var_1_70 - var_1_15))));
		} else {
			var_1_83 = (var_1_63 + var_1_73);
		}
	} else {
		if (var_1_79) {
			var_1_83 = (min (var_1_84 , var_1_63));
		} else {
			var_1_83 = (256.75f + 128.5f);
		}
	}


	// From: Req34Batch0Amount500
	if ((var_1_67 - (min (var_1_86 , var_1_7))) > (var_1_58 / var_1_45)) {
		var_1_85 = var_1_73;
	} else {
		var_1_85 = var_1_16;
	}


	// From: Req35Batch0Amount500
	var_1_87 = var_1_80;


	// From: Req36Batch0Amount500
	var_1_88 = var_1_23;


	// From: Req37Batch0Amount500
	if (var_1_80) {
		var_1_89 = var_1_36;
	} else {
		var_1_89 = var_1_45;
	}


	// From: Req38Batch0Amount500
	if (var_1_20) {
		var_1_90 = var_1_30;
	} else {
		var_1_90 = var_1_36;
	}


	// From: Req39Batch0Amount500
	var_1_91 = var_1_62;


	// From: Req41Batch0Amount500
	var_1_93 = var_1_70;


	// From: Req43Batch0Amount500
	var_1_95 = var_1_13;


	// From: Req45Batch0Amount500
	if (var_1_88) {
		var_1_97 = var_1_32;
	} else {
		var_1_97 = var_1_33;
	}


	// From: Req23Batch0Amount500
	if (((abs (var_1_65)) * var_1_47) != var_1_42) {
		var_1_64 = (min (((min (var_1_47 , var_1_32)) - var_1_56) , var_1_49));
	}


	// From: Req9Batch0Amount500
	if (var_1_30 <= (-5 / var_1_25)) {
		if ((min ((~ 128) , (~ var_1_64))) > var_1_26) {
			if ((~ (var_1_25 >> var_1_38)) == (~ var_1_5)) {
				var_1_37 = (var_1_14 + var_1_15);
			}
		}
	}


	// From: Req5Batch0Amount500
	signed long int stepLocal_0 = var_1_8 & var_1_7;
	if (99.75f <= var_1_91) {
		if (stepLocal_0 != (var_1_58 / (min (var_1_25 , var_1_26)))) {
			var_1_24 = var_1_8;
		} else {
			var_1_24 = 100;
		}
	}


	// From: Req8Batch0Amount500
	unsigned char stepLocal_6 = var_1_22;
	unsigned char stepLocal_5 = var_1_22;
	signed short int stepLocal_4 = var_1_5;
	unsigned char stepLocal_3 = var_1_5 < var_1_58;
	if (stepLocal_5 && (var_1_15 <= var_1_13)) {
		if (stepLocal_3 || var_1_87) {
			if ((var_1_18 && var_1_23) && stepLocal_6) {
				var_1_31 = (var_1_29 + 1);
			} else {
				if ((var_1_64 * var_1_58) == stepLocal_4) {
					var_1_31 = (max (var_1_30 , ((var_1_32 + var_1_33) - var_1_29)));
				}
			}
		} else {
			var_1_31 = (((var_1_34 - var_1_35) + (var_1_36 + 16)) + var_1_29);
		}
	} else {
		if (var_1_87) {
			var_1_31 = 64;
		}
	}


	// From: Req6Batch0Amount500
	signed long int stepLocal_2 = var_1_26;
	signed long int stepLocal_1 = 16;
	if (stepLocal_1 < (max (var_1_7 , (var_1_8 / var_1_25)))) {
		if ((var_1_24 * (var_1_7 % var_1_25)) < stepLocal_2) {
			var_1_27 = (max ((var_1_15 - var_1_14) , var_1_16));
		} else {
			var_1_27 = (min (var_1_16 , (var_1_15 + var_1_14)));
		}
	} else {
		var_1_27 = ((var_1_15 + var_1_14) - var_1_16);
	}


	// From: Req7Batch0Amount500
	if (var_1_18) {
		if (var_1_6 != (min (var_1_7 , var_1_41))) {
			if ((var_1_7 % var_1_25) == var_1_8) {
				var_1_28 = (abs (var_1_29 - var_1_30));
			}
		} else {
			var_1_28 = 100;
		}
	} else {
		var_1_28 = var_1_29;
	}


	// From: Req18Batch0Amount500
	unsigned long int stepLocal_10 = var_1_97;
	if (stepLocal_10 >= (max (var_1_30 , (-5 % var_1_34)))) {
		var_1_52 = (abs (var_1_47));
	} else {
		var_1_52 = var_1_29;
	}


	// From: Req20Batch0Amount500
	unsigned long int stepLocal_12 = var_1_38 - var_1_56;
	if (var_1_88) {
		if ((max (var_1_8 , (var_1_55 | var_1_65))) >= stepLocal_12) {
			if (var_1_88) {
				var_1_57 = ((abs (25)) + var_1_30);
			} else {
				var_1_57 = (abs (var_1_36));
			}
		} else {
			var_1_57 = (var_1_50 - (max ((min (var_1_30 , var_1_35)) , var_1_29)));
		}
	} else {
		var_1_57 = (max (var_1_32 , var_1_50));
	}


	// From: Req26Batch0Amount500
	unsigned char stepLocal_18 = var_1_28 > var_1_65;
	signed long int stepLocal_17 = var_1_33 - var_1_30;
	if (var_1_21 || stepLocal_18) {
		if (stepLocal_17 >= ((var_1_24 % var_1_67) ^ (var_1_50 / var_1_26))) {
			var_1_71 = (((var_1_72 - var_1_73) - var_1_15) + var_1_63);
		} else {
			if ((max (-0.25 , var_1_73)) <= var_1_3) {
				var_1_71 = (var_1_62 - (min (4.5 , var_1_72)));
			} else {
				var_1_71 = ((min ((var_1_15 + var_1_62) , var_1_70)) - var_1_72);
			}
		}
	} else {
		var_1_71 = ((2.5 - 31.5) + ((var_1_73 + var_1_74) - var_1_72));
	}


	// From: Req31Batch0Amount500
	if (var_1_88) {
		var_1_81 = (max ((min ((var_1_45 + var_1_38) , 5)) , 32));
	} else {
		var_1_81 = (max ((max (var_1_29 , var_1_47)) , var_1_30));
	}


	// From: Req28Batch0Amount500
	if ((var_1_52 + var_1_24) >= (var_1_32 - (min (var_1_34 , var_1_30)))) {
		var_1_76 = (var_1_23 || (var_1_20 && var_1_77));
	} else {
		var_1_76 = var_1_23;
	}


	// From: Req42Batch0Amount500
	if (var_1_76) {
		var_1_94 = var_1_44;
	} else {
		var_1_94 = var_1_56;
	}


	// From: Req17Batch0Amount500
	if (var_1_5 != var_1_52) {
		if (var_1_36 <= var_1_33) {
			var_1_51 = (! var_1_23);
		}
	} else {
		if (var_1_2 >= (- (var_1_95 + 24.7))) {
			var_1_51 = ((var_1_21 && var_1_22) && var_1_18);
		}
	}


	// From: Req40Batch0Amount500
	if (var_1_76) {
		var_1_92 = var_1_13;
	} else {
		var_1_92 = 9.9999999999975E11f;
	}


	// From: Req3Batch0Amount500
	if (var_1_76) {
		if ((var_1_95 * (var_1_2 - var_1_3)) <= var_1_95) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = ((var_1_14 + var_1_15) - var_1_16);
		}
	}


	// From: Req1Batch0Amount500
	if ((var_1_2 - var_1_3) == (- var_1_10)) {
		if (var_1_3 <= ((var_1_10 * 1.5) + 127.4)) {
			var_1_1 = (var_1_5 - ((var_1_6 + var_1_7) + var_1_8));
		} else {
			var_1_1 = (min ((var_1_8 - (var_1_7 + var_1_6)) , var_1_5));
		}
	} else {
		var_1_1 = (var_1_8 - (var_1_6 + var_1_7));
	}


	// From: Req4Batch0Amount500
	if (var_1_14 >= (var_1_16 + var_1_3)) {
		if ((var_1_1 + 10) >= ((-500 + var_1_5) * var_1_7)) {
			if ((min (var_1_8 , var_1_1)) >= var_1_5) {
				var_1_17 = (! (! var_1_18));
			}
		}
	} else {
		if (var_1_7 == ((var_1_8 + var_1_6) - var_1_19)) {
			var_1_17 = ((last_1_var_1_17 && var_1_18) || var_1_20);
		} else {
			if ((- var_1_8) == var_1_19) {
				var_1_17 = (! (var_1_20 && var_1_18));
			} else {
				if (var_1_20) {
					if (var_1_18) {
						var_1_17 = ((var_1_16 != (- 9.125)) || (var_1_21 && var_1_22));
					} else {
						var_1_17 = ((var_1_6 <= var_1_7) && var_1_23);
					}
				}
			}
		}
	}


	// From: Req19Batch0Amount500
	unsigned long int stepLocal_11 = var_1_58;
	if ((var_1_32 << var_1_30) <= stepLocal_11) {
		var_1_53 = (min ((max (var_1_29 , (var_1_50 - var_1_45))) , var_1_30));
	} else {
		if (! (var_1_17 || var_1_21)) {
			var_1_53 = (var_1_50 - var_1_44);
		} else {
			var_1_53 = (((max (var_1_55 , var_1_56)) - (min (var_1_35 , var_1_36))) - 2);
		}
	}


	// From: Req22Batch0Amount500
	unsigned long int stepLocal_15 = var_1_97;
	unsigned char stepLocal_14 = var_1_20;
	unsigned char stepLocal_13 = var_1_17;
	if (var_1_23 || stepLocal_13) {
		if (var_1_34 < stepLocal_15) {
			if (var_1_23) {
				var_1_60 = (((abs (var_1_14)) + (max (var_1_15 , var_1_62))) - (abs (var_1_13)));
			} else {
				if (stepLocal_14 || var_1_17) {
					var_1_60 = var_1_13;
				} else {
					var_1_60 = (min (var_1_16 , var_1_15));
				}
			}
		} else {
			var_1_60 = (var_1_15 + (max (var_1_62 , var_1_14)));
		}
	} else {
		if (var_1_3 >= (var_1_78 + (var_1_2 - var_1_62))) {
			var_1_60 = (max (var_1_14 , ((max (var_1_62 , var_1_15)) + var_1_63)));
		}
	}


	// From: Req27Batch0Amount500
	signed short int stepLocal_23 = var_1_1;
	signed long int stepLocal_22 = var_1_57 / var_1_67;
	signed long int stepLocal_21 = var_1_67 - var_1_50;
	signed long int stepLocal_20 = (var_1_33 - var_1_35) - var_1_34;
	unsigned char stepLocal_19 = var_1_59 > (- var_1_67);
	if (stepLocal_23 >= var_1_57) {
		if (stepLocal_19 && (var_1_97 <= (var_1_57 / var_1_34))) {
			if (stepLocal_22 >= var_1_53) {
				var_1_75 = (((var_1_72 + 4.231489809430356E18f) - var_1_73) - var_1_14);
			}
		} else {
			if (stepLocal_20 == var_1_96) {
				var_1_75 = var_1_13;
			} else {
				var_1_75 = ((var_1_70 - 10.1f) - var_1_74);
			}
		}
	} else {
		if (stepLocal_21 >= (max ((abs (var_1_44)) , (var_1_33 % var_1_56)))) {
			var_1_75 = (var_1_72 - (var_1_70 - var_1_73));
		} else {
			var_1_75 = ((max (var_1_72 , (var_1_74 + var_1_73))) - (max (var_1_70 , var_1_69)));
		}
	}


	// From: Req15Batch0Amount500
	if ((var_1_37 >= var_1_2) && ((var_1_22 || var_1_17) && var_1_21)) {
		var_1_48 = (abs (var_1_29));
	} else {
		if (((var_1_34 - var_1_42) / -2) > (var_1_98 / -10)) {
			var_1_48 = (var_1_44 + var_1_34);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 8191);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	assume_abort_if_not(var_1_26 != 0);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 64);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 32);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 30);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 16382);
	assume_abort_if_not(var_1_42 <= 32766);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 31);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 32);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 190);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 190);
	assume_abort_if_not(var_1_56 <= 254);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -461168.6018427383000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483646);
	assume_abort_if_not(var_1_67 <= -1073741822);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 4611686.018427383000e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854766000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= 4611686.018427383000e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854766000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 2305843.009213691400e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 0);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 0);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -922337.2036854766000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854766000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 2147483647);
	var_1_99 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_98 = var_1_98;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - var_1_3) == (- var_1_10)) ? ((var_1_3 <= ((var_1_10 * 1.5) + 127.4)) ? (var_1_1 == ((signed short int) (var_1_5 - ((var_1_6 + var_1_7) + var_1_8)))) : (var_1_1 == ((signed short int) (min ((var_1_8 - (var_1_7 + var_1_6)) , var_1_5))))) : (var_1_1 == ((signed short int) (var_1_8 - (var_1_6 + var_1_7))))) && (var_1_9 == ((signed short int) ((max (var_1_7 , var_1_5)) - (max ((27761 - var_1_6) , var_1_8)))))) && (var_1_76 ? (((var_1_95 * (var_1_2 - var_1_3)) <= var_1_95) ? (var_1_10 == ((double) var_1_13)) : (var_1_10 == ((double) ((var_1_14 + var_1_15) - var_1_16)))) : 1)) && ((var_1_14 >= (var_1_16 + var_1_3)) ? (((var_1_1 + 10) >= ((-500 + var_1_5) * var_1_7)) ? (((min (var_1_8 , var_1_1)) >= var_1_5) ? (var_1_17 == ((unsigned char) (! (! var_1_18)))) : 1) : 1) : ((var_1_7 == ((var_1_8 + var_1_6) - var_1_19)) ? (var_1_17 == ((unsigned char) ((last_1_var_1_17 && var_1_18) || var_1_20))) : (((- var_1_8) == var_1_19) ? (var_1_17 == ((unsigned char) (! (var_1_20 && var_1_18)))) : (var_1_20 ? (var_1_18 ? (var_1_17 == ((unsigned char) ((var_1_16 != (- 9.125)) || (var_1_21 && var_1_22)))) : (var_1_17 == ((unsigned char) ((var_1_6 <= var_1_7) && var_1_23)))) : 1))))) && ((99.75f <= var_1_91) ? (((var_1_8 & var_1_7) != (var_1_58 / (min (var_1_25 , var_1_26)))) ? (var_1_24 == ((signed long int) var_1_8)) : (var_1_24 == ((signed long int) 100))) : 1)) && ((16 < (max (var_1_7 , (var_1_8 / var_1_25)))) ? (((var_1_24 * (var_1_7 % var_1_25)) < var_1_26) ? (var_1_27 == ((float) (max ((var_1_15 - var_1_14) , var_1_16)))) : (var_1_27 == ((float) (min (var_1_16 , (var_1_15 + var_1_14)))))) : (var_1_27 == ((float) ((var_1_15 + var_1_14) - var_1_16))))) && (var_1_18 ? ((var_1_6 != (min (var_1_7 , var_1_41))) ? (((var_1_7 % var_1_25) == var_1_8) ? (var_1_28 == ((signed char) (abs (var_1_29 - var_1_30)))) : 1) : (var_1_28 == ((signed char) 100))) : (var_1_28 == ((signed char) var_1_29)))) && ((var_1_22 && (var_1_15 <= var_1_13)) ? (((var_1_5 < var_1_58) || var_1_87) ? (((var_1_18 && var_1_23) && var_1_22) ? (var_1_31 == ((unsigned char) (var_1_29 + 1))) : (((var_1_64 * var_1_58) == var_1_5) ? (var_1_31 == ((unsigned char) (max (var_1_30 , ((var_1_32 + var_1_33) - var_1_29))))) : 1)) : (var_1_31 == ((unsigned char) (((var_1_34 - var_1_35) + (var_1_36 + 16)) + var_1_29)))) : (var_1_87 ? (var_1_31 == ((unsigned char) 64)) : 1))) && ((var_1_30 <= (-5 / var_1_25)) ? (((min ((~ 128) , (~ var_1_64))) > var_1_26) ? (((~ (var_1_25 >> var_1_38)) == (~ var_1_5)) ? (var_1_37 == ((double) (var_1_14 + var_1_15))) : 1) : 1) : 1)) && ((var_1_98 > var_1_19) ? (var_1_39 == ((float) (abs ((abs (var_1_16)) - var_1_14)))) : 1)) && (var_1_40 == ((float) (min (var_1_16 , ((min (var_1_14 , var_1_15)) - 128.3f)))))) && ((var_1_26 < (var_1_58 / var_1_34)) ? (var_1_41 == ((signed short int) (last_1_var_1_41 + var_1_38))) : (var_1_41 == ((signed short int) ((var_1_42 - var_1_38) - (max (var_1_30 , var_1_6))))))) && ((var_1_33 > var_1_6) ? (var_1_43 == ((signed char) (var_1_29 - ((var_1_44 + var_1_45) - (var_1_36 + var_1_38))))) : (var_1_43 == ((signed char) var_1_29)))) && (var_1_23 ? (((var_1_15 - var_1_14) > 16.5) ? (var_1_46 == ((signed char) (var_1_29 - 4))) : (var_1_46 == ((signed char) (var_1_44 - (min ((var_1_47 - var_1_38) , var_1_36)))))) : (var_1_46 == ((signed char) ((max ((var_1_44 + var_1_35) , var_1_47)) - var_1_45))))) && (((var_1_37 >= var_1_2) && ((var_1_22 || var_1_17) && var_1_21)) ? (var_1_48 == ((signed short int) (abs (var_1_29)))) : ((((var_1_34 - var_1_42) / -2) > (var_1_98 / -10)) ? (var_1_48 == ((signed short int) (var_1_44 + var_1_34))) : 1))) && ((last_1_var_1_98 <= last_1_var_1_48) ? ((! var_1_20) ? (var_1_49 == ((unsigned char) (abs (var_1_29 + var_1_30)))) : ((last_1_var_1_82 <= var_1_34) ? (var_1_49 == ((unsigned char) (max ((min (8 , var_1_29)) , 1)))) : (var_1_49 == ((unsigned char) (max ((var_1_50 - var_1_47) , var_1_44)))))) : (var_1_49 == ((unsigned char) (var_1_50 - var_1_36))))) && ((var_1_5 != var_1_52) ? ((var_1_36 <= var_1_33) ? (var_1_51 == ((unsigned char) (! var_1_23))) : 1) : ((var_1_2 >= (- (var_1_95 + 24.7))) ? (var_1_51 == ((unsigned char) ((var_1_21 && var_1_22) && var_1_18))) : 1))) && ((var_1_97 >= (max (var_1_30 , (-5 % var_1_34)))) ? (var_1_52 == ((unsigned char) (abs (var_1_47)))) : (var_1_52 == ((unsigned char) var_1_29)))) && (((var_1_32 << var_1_30) <= var_1_58) ? (var_1_53 == ((unsigned char) (min ((max (var_1_29 , (var_1_50 - var_1_45))) , var_1_30)))) : ((! (var_1_17 || var_1_21)) ? (var_1_53 == ((unsigned char) (var_1_50 - var_1_44))) : (var_1_53 == ((unsigned char) (((max (var_1_55 , var_1_56)) - (min (var_1_35 , var_1_36))) - 2)))))) && (var_1_88 ? (((max (var_1_8 , (var_1_55 | var_1_65))) >= (var_1_38 - var_1_56)) ? (var_1_88 ? (var_1_57 == ((unsigned char) ((abs (25)) + var_1_30))) : (var_1_57 == ((unsigned char) (abs (var_1_36))))) : (var_1_57 == ((unsigned char) (var_1_50 - (max ((min (var_1_30 , var_1_35)) , var_1_29)))))) : (var_1_57 == ((unsigned char) (max (var_1_32 , var_1_50)))))) && ((last_1_var_1_31 >= (var_1_45 ^ (var_1_55 + last_1_var_1_48))) ? (var_1_58 == ((unsigned long int) (var_1_59 - (var_1_8 + last_1_var_1_94)))) : (((max (var_1_3 , last_1_var_1_10)) > var_1_14) ? (var_1_58 == ((unsigned long int) ((abs (min (var_1_29 , var_1_45))) + var_1_6))) : (var_1_58 == ((unsigned long int) (max (var_1_30 , (min (last_1_var_1_94 , (var_1_29 + var_1_45)))))))))) && ((var_1_23 || var_1_17) ? ((var_1_34 < var_1_97) ? (var_1_23 ? (var_1_60 == ((float) (((abs (var_1_14)) + (max (var_1_15 , var_1_62))) - (abs (var_1_13))))) : ((var_1_20 || var_1_17) ? (var_1_60 == ((float) var_1_13)) : (var_1_60 == ((float) (min (var_1_16 , var_1_15)))))) : (var_1_60 == ((float) (var_1_15 + (max (var_1_62 , var_1_14)))))) : ((var_1_3 >= (var_1_78 + (var_1_2 - var_1_62))) ? (var_1_60 == ((float) (max (var_1_14 , ((max (var_1_62 , var_1_15)) + var_1_63))))) : 1))) && ((((abs (var_1_65)) * var_1_47) != var_1_42) ? (var_1_64 == ((signed short int) (min (((min (var_1_47 , var_1_32)) - var_1_56) , var_1_49)))) : 1)) && (((last_1_var_1_49 + var_1_34) <= ((var_1_38 % var_1_55) + (last_1_var_1_53 | var_1_25))) ? (var_1_65 == ((signed long int) (var_1_38 + -128))) : (var_1_65 == ((signed long int) (((abs (var_1_67)) - (min (var_1_7 , var_1_35))) - var_1_56))))) && ((var_1_18 || (var_1_20 && var_1_21)) ? (var_1_68 == ((float) ((var_1_69 - var_1_14) - (var_1_70 - var_1_62)))) : 1)) && ((var_1_21 || (var_1_28 > var_1_65)) ? (((var_1_33 - var_1_30) >= ((var_1_24 % var_1_67) ^ (var_1_50 / var_1_26))) ? (var_1_71 == ((double) (((var_1_72 - var_1_73) - var_1_15) + var_1_63))) : (((max (-0.25 , var_1_73)) <= var_1_3) ? (var_1_71 == ((double) (var_1_62 - (min (4.5 , var_1_72))))) : (var_1_71 == ((double) ((min ((var_1_15 + var_1_62) , var_1_70)) - var_1_72))))) : (var_1_71 == ((double) ((2.5 - 31.5) + ((var_1_73 + var_1_74) - var_1_72)))))) && ((var_1_1 >= var_1_57) ? (((var_1_59 > (- var_1_67)) && (var_1_97 <= (var_1_57 / var_1_34))) ? (((var_1_57 / var_1_67) >= var_1_53) ? (var_1_75 == ((float) (((var_1_72 + 4.231489809430356E18f) - var_1_73) - var_1_14))) : 1) : ((((var_1_33 - var_1_35) - var_1_34) == var_1_96) ? (var_1_75 == ((float) var_1_13)) : (var_1_75 == ((float) ((var_1_70 - 10.1f) - var_1_74))))) : (((var_1_67 - var_1_50) >= (max ((abs (var_1_44)) , (var_1_33 % var_1_56)))) ? (var_1_75 == ((float) (var_1_72 - (var_1_70 - var_1_73)))) : (var_1_75 == ((float) ((max (var_1_72 , (var_1_74 + var_1_73))) - (max (var_1_70 , var_1_69)))))))) && (((var_1_52 + var_1_24) >= (var_1_32 - (min (var_1_34 , var_1_30)))) ? (var_1_76 == ((unsigned char) (var_1_23 || (var_1_20 && var_1_77)))) : (var_1_76 == ((unsigned char) var_1_23)))) && (var_1_78 == ((double) (min ((var_1_72 - (abs (var_1_16))) , var_1_74))))) && (((var_1_29 - var_1_44) < var_1_65) ? (var_1_79 == ((unsigned char) ((var_1_23 || var_1_77) || var_1_80))) : 1)) && (var_1_88 ? (var_1_81 == ((signed char) (max ((min ((var_1_45 + var_1_38) , 5)) , 32)))) : (var_1_81 == ((signed char) (max ((max (var_1_29 , var_1_47)) , var_1_30)))))) && (var_1_21 ? (((var_1_69 - var_1_70) >= var_1_16) ? (var_1_82 == ((signed char) (var_1_44 - var_1_34))) : (var_1_82 == ((signed char) (var_1_34 - var_1_45)))) : (var_1_82 == ((signed char) (abs (var_1_44)))))) && (var_1_77 ? (var_1_18 ? (var_1_83 == ((float) (min (var_1_74 , (abs (var_1_70 - var_1_15)))))) : (var_1_83 == ((float) (var_1_63 + var_1_73)))) : (var_1_79 ? (var_1_83 == ((float) (min (var_1_84 , var_1_63)))) : (var_1_83 == ((float) (256.75f + 128.5f)))))) && (((var_1_67 - (min (var_1_86 , var_1_7))) > (var_1_58 / var_1_45)) ? (var_1_85 == ((float) var_1_73)) : (var_1_85 == ((float) var_1_16)))) && (var_1_87 == ((unsigned char) var_1_80))) && (var_1_88 == ((unsigned char) var_1_23))) && (var_1_80 ? (var_1_89 == ((unsigned char) var_1_36)) : (var_1_89 == ((unsigned char) var_1_45)))) && (var_1_20 ? (var_1_90 == ((signed char) var_1_30)) : (var_1_90 == ((signed char) var_1_36)))) && (var_1_91 == ((double) var_1_62))) && (var_1_76 ? (var_1_92 == ((float) var_1_13)) : (var_1_92 == ((float) 9.9999999999975E11f)))) && (var_1_93 == ((float) var_1_70))) && (var_1_76 ? (var_1_94 == ((unsigned short int) var_1_44)) : (var_1_94 == ((unsigned short int) var_1_56)))) && (var_1_95 == ((double) var_1_13))) && (var_1_96 == ((signed short int) var_1_98))) && (var_1_88 ? (var_1_97 == ((unsigned long int) var_1_32)) : (var_1_97 == ((unsigned long int) var_1_33)))) && (last_1_var_1_79 ? ((var_1_44 <= (last_1_var_1_96 + (var_1_33 - var_1_47))) ? (var_1_98 == ((signed short int) (max (last_1_var_1_90 , ((var_1_42 - last_1_var_1_65) - var_1_99))))) : 1) : 1)
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
