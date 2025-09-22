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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 5;
signed char var_1_6 = 50;
signed char var_1_7 = 2;
signed char var_1_8 = 16;
signed char var_1_9 = 8;
signed char var_1_10 = -16;
signed char var_1_11 = -128;
unsigned long int var_1_13 = 8;
unsigned long int var_1_14 = 3326900199;
unsigned long int var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 56414;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 8;
unsigned short int var_1_20 = 57403;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 10;
double var_1_24 = 0.5;
double var_1_25 = 32.75;
signed long int var_1_27 = 1414611462;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 25;
double var_1_30 = 0.5;
double var_1_31 = 32.5;
float var_1_32 = 5.321;
float var_1_33 = 0.0;
float var_1_34 = 0.0;
float var_1_35 = 7.75;
float var_1_36 = 128.8;
float var_1_37 = 255.5;
signed short int var_1_38 = -1;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 10;
unsigned char var_1_44 = 64;
float var_1_45 = -0.375;
unsigned short int var_1_46 = 2;
unsigned short int var_1_47 = 64903;
double var_1_48 = 7.85;
double var_1_49 = 32.8;
double var_1_50 = 255.4;
unsigned long int var_1_51 = 1000000000;
signed char var_1_52 = -8;
signed char var_1_54 = 2;
signed long int var_1_55 = -1;
unsigned char var_1_56 = 32;
unsigned char var_1_57 = 1;
signed long int var_1_58 = 2;
signed short int var_1_59 = -1;
signed short int var_1_61 = -32;
signed short int var_1_62 = 10000;
signed char var_1_63 = -25;
unsigned short int var_1_64 = 128;
signed long int var_1_65 = 4;
float var_1_66 = 100000000000000.6;
signed short int var_1_67 = 256;
signed short int var_1_68 = 1;
signed char var_1_69 = 16;
signed char var_1_71 = 100;
signed char var_1_72 = 64;
signed char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
double var_1_78 = 7.9;
unsigned char var_1_79 = 0;
double var_1_80 = 256.5;
unsigned long int var_1_81 = 0;
unsigned long int var_1_82 = 0;
signed char var_1_83 = 5;
unsigned long int var_1_84 = 2;
unsigned long int var_1_85 = 16;
double var_1_86 = 15.85;
unsigned char var_1_87 = 1;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
float var_1_90 = 15.625;
unsigned char var_1_91 = 25;
signed short int var_1_92 = 1;
unsigned char var_1_93 = 0;
double var_1_94 = 0.5;
unsigned long int var_1_95 = 25;
float var_1_96 = 16.7;
float var_1_97 = 5.75;
float var_1_98 = 31.5;
unsigned long int var_1_99 = 256;
signed short int var_1_100 = -2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_15 = 4;
unsigned char last_1_var_1_21 = 0;
signed short int last_1_var_1_38 = -1;
unsigned char last_1_var_1_41 = 5;
unsigned long int last_1_var_1_51 = 1000000000;
signed long int last_1_var_1_55 = -1;
unsigned char last_1_var_1_57 = 1;
float last_1_var_1_66 = 100000000000000.6;
signed short int last_1_var_1_67 = 256;
signed char last_1_var_1_69 = 16;
unsigned char last_1_var_1_79 = 0;
double last_1_var_1_86 = 15.85;
unsigned char last_1_var_1_91 = 25;
float last_1_var_1_96 = 16.7;
signed short int last_1_var_1_100 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch7Amount500
	if ((var_1_18 || last_1_var_1_21) || ((var_1_31 * var_1_24) >= last_1_var_1_86)) {
		if (((- last_1_var_1_38) * last_1_var_1_55) == last_1_var_1_51) {
			if (var_1_29 < (last_1_var_1_67 * (min (var_1_47 , var_1_43)))) {
				var_1_64 = (abs (var_1_7));
			}
		} else {
			var_1_64 = (53968 - last_1_var_1_57);
		}
	}


	// From: Req5Batch7Amount500
	signed long int stepLocal_5 = var_1_17 - var_1_7;
	if (stepLocal_5 <= last_1_var_1_69) {
		var_1_16 = (! var_1_18);
	}


	// From: Req28Batch7Amount500
	if (var_1_16) {
		var_1_67 = (var_1_7 + ((max (1 , 32)) - 64));
	} else {
		var_1_67 = ((abs (32)) - (min (var_1_28 , (var_1_42 + var_1_68))));
	}


	// From: Req40Batch7Amount500
	if (var_1_16) {
		var_1_89 = var_1_22;
	} else {
		var_1_89 = var_1_77;
	}


	// From: Req3Batch7Amount500
	if (last_1_var_1_15 > (var_1_7 + 2u)) {
		var_1_13 = (max (var_1_9 , var_1_7));
	} else {
		var_1_13 = ((var_1_14 - var_1_7) - (var_1_6 + var_1_9));
	}


	// From: Req11Batch7Amount500
	unsigned long int stepLocal_12 = (-64 / var_1_27) ^ last_1_var_1_15;
	if ((max (var_1_9 , (var_1_20 % 10))) < stepLocal_12) {
		if (var_1_22) {
			if (! ((var_1_10 >= last_1_var_1_15) || last_1_var_1_79)) {
				var_1_38 = var_1_6;
			} else {
				var_1_38 = ((var_1_28 - var_1_9) + 4);
			}
		} else {
			var_1_38 = (min (2 , last_1_var_1_41));
		}
	} else {
		if ((var_1_37 + (- last_1_var_1_86)) >= last_1_var_1_66) {
			if (var_1_34 <= (last_1_var_1_96 / var_1_33)) {
				var_1_38 = ((max (last_1_var_1_91 , last_1_var_1_41)) + var_1_28);
			} else {
				var_1_38 = var_1_8;
			}
		} else {
			var_1_38 = var_1_10;
		}
	}


	// From: Req36Batch7Amount500
	if (var_1_50 > var_1_35) {
		var_1_84 = ((abs (var_1_14)) - var_1_38);
	} else {
		var_1_84 = (min (var_1_85 , (var_1_14 - var_1_29)));
	}


	// From: Req12Batch7Amount500
	if (var_1_18) {
		var_1_41 = (max ((abs (var_1_29)) , (min ((var_1_9 + var_1_7) , var_1_28))));
	} else {
		if (var_1_8 > var_1_38) {
			var_1_41 = (((var_1_42 - var_1_43) + var_1_7) + (var_1_44 - (max (var_1_6 , var_1_29))));
		} else {
			var_1_41 = (abs (var_1_29));
		}
	}


	// From: Req24Batch7Amount500
	if (var_1_18) {
		var_1_63 = (max (var_1_29 , var_1_54));
	}


	// From: Req26Batch7Amount500
	unsigned char stepLocal_16 = var_1_28;
	if (var_1_14 <= stepLocal_16) {
		var_1_65 = var_1_20;
	}


	// From: Req33Batch7Amount500
	if (! var_1_75) {
		var_1_79 = (! var_1_18);
	}


	// From: Req34Batch7Amount500
	signed long int stepLocal_21 = var_1_44 - (abs (var_1_65));
	if ((var_1_68 << (var_1_81 - var_1_82)) >= stepLocal_21) {
		var_1_80 = (abs (var_1_50));
	} else {
		var_1_80 = ((min ((var_1_33 - var_1_36) , var_1_34)) - var_1_37);
	}


	// From: Req39Batch7Amount500
	var_1_88 = var_1_76;


	// From: Req41Batch7Amount500
	if (var_1_88) {
		var_1_90 = var_1_34;
	}


	// From: Req42Batch7Amount500
	if (var_1_77) {
		var_1_91 = var_1_43;
	}


	// From: Req43Batch7Amount500
	if (var_1_75) {
		var_1_92 = var_1_82;
	} else {
		var_1_92 = 2;
	}


	// From: Req44Batch7Amount500
	var_1_93 = var_1_76;


	// From: Req46Batch7Amount500
	var_1_95 = var_1_27;


	// From: Req47Batch7Amount500
	if (var_1_88) {
		var_1_96 = var_1_37;
	}


	// From: Req48Batch7Amount500
	var_1_97 = var_1_31;


	// From: Req49Batch7Amount500
	var_1_98 = var_1_50;


	// From: Req50Batch7Amount500
	if (var_1_88) {
		var_1_99 = var_1_9;
	} else {
		var_1_99 = var_1_62;
	}


	// From: Req13Batch7Amount500
	if (var_1_88 && ((var_1_64 / var_1_44) < var_1_84)) {
		var_1_45 = (max (var_1_33 , var_1_31));
	} else {
		var_1_45 = (var_1_37 + (abs (var_1_34)));
	}


	// From: Req16Batch7Amount500
	if (var_1_45 >= var_1_98) {
		var_1_49 = ((min ((var_1_35 + var_1_50) , var_1_34)) + -0.4);
	} else {
		var_1_49 = (var_1_33 - var_1_36);
	}


	// From: Req19Batch7Amount500
	if (var_1_49 >= var_1_50) {
		var_1_55 = (min ((abs (var_1_28)) , (var_1_29 - var_1_95)));
	} else {
		var_1_55 = (var_1_54 + var_1_28);
	}


	// From: Req38Batch7Amount500
	if (var_1_89) {
		var_1_87 = var_1_77;
	}


	// From: Req6Batch7Amount500
	signed long int stepLocal_7 = var_1_20 - var_1_7;
	unsigned long int stepLocal_6 = var_1_95;
	if (stepLocal_6 <= var_1_6) {
		var_1_19 = var_1_17;
	} else {
		if (var_1_18) {
			var_1_19 = (abs (var_1_17));
		} else {
			if (var_1_17 >= stepLocal_7) {
				var_1_19 = var_1_6;
			} else {
				var_1_19 = var_1_17;
			}
		}
	}


	// From: Req7Batch7Amount500
	unsigned char stepLocal_8 = var_1_17 > 0;
	if (stepLocal_8 || var_1_18) {
		var_1_21 = (var_1_93 && (! (! var_1_22)));
	}


	// From: Req9Batch7Amount500
	unsigned char stepLocal_10 = var_1_99 > var_1_6;
	if (((16 << var_1_17) >= 1000) && stepLocal_10) {
		var_1_30 = (abs (var_1_31));
	}


	// From: Req22Batch7Amount500
	if (! var_1_93) {
		var_1_58 = (var_1_17 - var_1_29);
	} else {
		var_1_58 = (-8 + var_1_47);
	}


	// From: Req27Batch7Amount500
	unsigned short int stepLocal_17 = var_1_20;
	if (var_1_21) {
		var_1_66 = var_1_31;
	} else {
		if (stepLocal_17 > var_1_19) {
			var_1_66 = (var_1_50 + var_1_37);
		}
	}


	// From: Req32Batch7Amount500
	if (var_1_45 != var_1_24) {
		var_1_78 = (min (var_1_34 , var_1_37));
	}


	// From: Req35Batch7Amount500
	if (var_1_87) {
		var_1_83 = (max (var_1_9 , ((64 - var_1_6) - var_1_71)));
	} else {
		var_1_83 = (max (var_1_42 , (max (var_1_6 , var_1_9))));
	}


	// From: Req45Batch7Amount500
	if (var_1_21) {
		var_1_94 = var_1_31;
	}


	// From: Req20Batch7Amount500
	signed long int stepLocal_14 = -10;
	if (var_1_97 < (var_1_25 * var_1_94)) {
		var_1_56 = (var_1_7 + var_1_44);
	} else {
		if (var_1_34 != var_1_80) {
			if (stepLocal_14 < (var_1_13 / var_1_14)) {
				var_1_56 = ((max ((var_1_44 - var_1_43) , 8)) + var_1_7);
			} else {
				var_1_56 = var_1_6;
			}
		} else {
			var_1_56 = (var_1_42 + var_1_44);
		}
	}


	// From: Req2Batch7Amount500
	unsigned char stepLocal_2 = var_1_87;
	if (stepLocal_2 && (var_1_9 != var_1_56)) {
		var_1_11 = (var_1_6 - (var_1_7 + 4));
	}


	// From: Req14Batch7Amount500
	if ((! (var_1_66 >= var_1_37)) || var_1_22) {
		var_1_46 = (var_1_47 - (23027 - var_1_29));
	} else {
		var_1_46 = (var_1_47 - (max ((var_1_28 + var_1_7) , 2)));
	}


	// From: Req18Batch7Amount500
	if (var_1_43 <= var_1_13) {
		if (((9.999999998E8 / var_1_33) < (var_1_78 + var_1_66)) || var_1_22) {
			var_1_52 = (min ((min ((var_1_6 + var_1_7) , var_1_9)) , (min ((var_1_10 + var_1_8) , (var_1_29 - var_1_42)))));
		} else {
			var_1_52 = (min (var_1_7 , ((var_1_43 + var_1_54) + -1)));
		}
	} else {
		var_1_52 = (max ((var_1_6 + var_1_54) , 4));
	}


	// From: Req21Batch7Amount500
	unsigned long int stepLocal_15 = var_1_13;
	if (((var_1_92 % var_1_44) * var_1_46) >= stepLocal_15) {
		var_1_57 = (var_1_28 - (10 + 5));
	} else {
		var_1_57 = (max (16 , (var_1_28 - (abs (var_1_7)))));
	}


	// From: Req15Batch7Amount500
	signed long int stepLocal_13 = (var_1_57 / var_1_44) / var_1_28;
	if (stepLocal_13 != var_1_10) {
		var_1_48 = (min ((abs (var_1_34)) , 9.9999999999996E12));
	}


	// From: Req17Batch7Amount500
	if (! (var_1_27 < (var_1_44 - var_1_29))) {
		var_1_51 = ((var_1_14 - var_1_99) - (min (var_1_17 , var_1_56)));
	} else {
		var_1_51 = ((max (10u , var_1_9)) + (abs (var_1_28)));
	}


	// From: Req10Batch7Amount500
	unsigned char stepLocal_11 = 256 <= (var_1_51 + -64);
	if (var_1_93 || stepLocal_11) {
		var_1_32 = ((var_1_33 - (var_1_34 - var_1_35)) - (var_1_36 + var_1_37));
	}


	// From: Req31Batch7Amount500
	signed long int stepLocal_20 = var_1_38 + var_1_72;
	unsigned long int stepLocal_19 = var_1_13;
	signed char stepLocal_18 = var_1_7;
	if ((max ((max (32 , var_1_13)) , (var_1_57 | var_1_67))) >= stepLocal_20) {
		if ((var_1_8 / var_1_62) != stepLocal_19) {
			var_1_74 = (! (var_1_87 || var_1_18));
		} else {
			if (var_1_22) {
				var_1_74 = (var_1_18 && (var_1_75 && (! var_1_76)));
			}
		}
	} else {
		if (stepLocal_18 < var_1_95) {
			var_1_74 = ((var_1_18 && var_1_76) || var_1_75);
		} else {
			var_1_74 = ((var_1_18 && var_1_75) && var_1_77);
		}
	}


	// From: Req30Batch7Amount500
	if (var_1_74 || ((var_1_64 / var_1_71) < var_1_58)) {
		if (var_1_84 >= ((max (var_1_58 , var_1_41)) + (var_1_99 | var_1_19))) {
			var_1_73 = (var_1_9 - (min (var_1_43 , (var_1_7 + 2))));
		} else {
			var_1_73 = (var_1_7 + -5);
		}
	} else {
		if ((min (var_1_99 , (var_1_43 << 2))) <= (var_1_58 + var_1_95)) {
			var_1_73 = (abs (var_1_29 + var_1_8));
		} else {
			if ((var_1_14 & var_1_44) <= var_1_28) {
				var_1_73 = ((25 + var_1_54) + var_1_7);
			} else {
				var_1_73 = (min (((min (var_1_29 , var_1_6)) - var_1_42) , var_1_9));
			}
		}
	}


	// From: Req37Batch7Amount500
	if (var_1_74) {
		if (var_1_75) {
			if (var_1_48 < var_1_24) {
				var_1_86 = var_1_33;
			} else {
				var_1_86 = var_1_36;
			}
		} else {
			var_1_86 = var_1_33;
		}
	} else {
		var_1_86 = var_1_36;
	}


	// From: Req29Batch7Amount500
	if (var_1_99 >= var_1_58) {
		if (! (var_1_84 >= var_1_61)) {
			if (var_1_87) {
				if (var_1_79 && ((var_1_99 <= var_1_42) && var_1_22)) {
					var_1_69 = (max ((var_1_42 - (max (var_1_29 , var_1_43))) , ((max (var_1_7 , -8)) + var_1_8)));
				} else {
					var_1_69 = ((min (var_1_8 , (abs (8)))) + -5);
				}
			}
		} else {
			if (var_1_25 > (- var_1_86)) {
				var_1_69 = (max ((var_1_6 - var_1_43) , (1 - (var_1_71 - var_1_29))));
			} else {
				var_1_69 = (min (var_1_6 , var_1_29));
			}
		}
	} else {
		if (var_1_6 < ((var_1_7 + var_1_43) - var_1_71)) {
			var_1_69 = (min (var_1_72 , (abs (-5))));
		}
	}


	// From: Req4Batch7Amount500
	signed long int stepLocal_4 = var_1_8 | var_1_73;
	unsigned long int stepLocal_3 = var_1_14;
	if (var_1_95 > stepLocal_3) {
		if (var_1_10 < stepLocal_4) {
			var_1_15 = (var_1_14 - var_1_7);
		}
	} else {
		var_1_15 = (abs (1u));
	}


	// From: Req1Batch7Amount500
	unsigned long int stepLocal_1 = var_1_84;
	signed char stepLocal_0 = var_1_7;
	if (stepLocal_1 > var_1_15) {
		if ((abs (var_1_48)) < var_1_49) {
			var_1_1 = (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9);
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		if (stepLocal_0 != (var_1_8 & var_1_6)) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = ((var_1_10 + -5) + (var_1_6 - var_1_7));
		}
	}


	// From: Req8Batch7Amount500
	signed long int stepLocal_9 = 2 - (var_1_27 - var_1_7);
	if ((var_1_24 - var_1_25) == var_1_86) {
		if (stepLocal_9 < (var_1_6 + (1000000000 << 1))) {
			var_1_23 = (var_1_28 - (var_1_7 + (max (var_1_6 , var_1_29))));
		} else {
			var_1_23 = (min (var_1_9 , var_1_28));
		}
	} else {
		if (var_1_86 >= 199.2f) {
			var_1_23 = (8 + var_1_29);
		}
	}


	// From: Req23Batch7Amount500
	if ((var_1_9 + var_1_95) > (var_1_84 * var_1_42)) {
		var_1_59 = (var_1_10 + (max (var_1_38 , (var_1_29 - var_1_46))));
	} else {
		if (var_1_31 >= ((var_1_33 * var_1_35) * var_1_86)) {
			if ((max (var_1_94 , 128.125f)) < var_1_78) {
				var_1_59 = ((abs (var_1_57)) + (abs (var_1_43)));
			} else {
				if (var_1_16 && var_1_87) {
					var_1_59 = (var_1_7 + (max (var_1_61 , var_1_42)));
				} else {
					var_1_59 = ((25368 - (var_1_62 - var_1_42)) - var_1_99);
				}
			}
		} else {
			var_1_59 = ((max (var_1_38 , var_1_95)) + ((var_1_62 - var_1_46) - var_1_99));
		}
	}


	// From: Req51Batch7Amount500
	unsigned long int stepLocal_23 = var_1_15;
	unsigned char stepLocal_22 = var_1_18;
	if (var_1_89 || stepLocal_22) {
		if (stepLocal_23 != (last_1_var_1_100 * var_1_68)) {
			var_1_100 = ((var_1_28 - var_1_15) + (min (var_1_55 , var_1_91)));
		} else {
			var_1_100 = var_1_7;
		}
	} else {
		var_1_100 = var_1_8;
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
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 3221225470);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65535);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 2305843.009213691400e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 32);
	assume_abort_if_not(var_1_42 <= 64);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 63);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -31);
	assume_abort_if_not(var_1_54 <= 31);
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= -16383);
	assume_abort_if_not(var_1_61 <= 16383);
	var_1_62 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_62 >= 8191);
	assume_abort_if_not(var_1_62 <= 16383);
	var_1_68 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 16383);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= 63);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -127);
	assume_abort_if_not(var_1_72 <= 126);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 1);
	assume_abort_if_not(var_1_75 <= 1);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 0);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 1);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 1);
	var_1_82 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_100 = var_1_100;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_84 > var_1_15) ? (((abs (var_1_48)) < var_1_49) ? (var_1_1 == ((signed char) (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9))) : (var_1_1 == ((signed char) var_1_7))) : ((var_1_7 != (var_1_8 & var_1_6)) ? (var_1_1 == ((signed char) var_1_8)) : (var_1_1 == ((signed char) ((var_1_10 + -5) + (var_1_6 - var_1_7)))))) && ((var_1_87 && (var_1_9 != var_1_56)) ? (var_1_11 == ((signed char) (var_1_6 - (var_1_7 + 4)))) : 1)) && ((last_1_var_1_15 > (var_1_7 + 2u)) ? (var_1_13 == ((unsigned long int) (max (var_1_9 , var_1_7)))) : (var_1_13 == ((unsigned long int) ((var_1_14 - var_1_7) - (var_1_6 + var_1_9)))))) && ((var_1_95 > var_1_14) ? ((var_1_10 < (var_1_8 | var_1_73)) ? (var_1_15 == ((unsigned long int) (var_1_14 - var_1_7))) : 1) : (var_1_15 == ((unsigned long int) (abs (1u)))))) && (((var_1_17 - var_1_7) <= last_1_var_1_69) ? (var_1_16 == ((unsigned char) (! var_1_18))) : 1)) && ((var_1_95 <= var_1_6) ? (var_1_19 == ((unsigned long int) var_1_17)) : (var_1_18 ? (var_1_19 == ((unsigned long int) (abs (var_1_17)))) : ((var_1_17 >= (var_1_20 - var_1_7)) ? (var_1_19 == ((unsigned long int) var_1_6)) : (var_1_19 == ((unsigned long int) var_1_17)))))) && (((var_1_17 > 0) || var_1_18) ? (var_1_21 == ((unsigned char) (var_1_93 && (! (! var_1_22))))) : 1)) && (((var_1_24 - var_1_25) == var_1_86) ? (((2 - (var_1_27 - var_1_7)) < (var_1_6 + (1000000000 << 1))) ? (var_1_23 == ((unsigned char) (var_1_28 - (var_1_7 + (max (var_1_6 , var_1_29)))))) : (var_1_23 == ((unsigned char) (min (var_1_9 , var_1_28))))) : ((var_1_86 >= 199.2f) ? (var_1_23 == ((unsigned char) (8 + var_1_29))) : 1))) && ((((16 << var_1_17) >= 1000) && (var_1_99 > var_1_6)) ? (var_1_30 == ((double) (abs (var_1_31)))) : 1)) && ((var_1_93 || (256 <= (var_1_51 + -64))) ? (var_1_32 == ((float) ((var_1_33 - (var_1_34 - var_1_35)) - (var_1_36 + var_1_37)))) : 1)) && (((max (var_1_9 , (var_1_20 % 10))) < ((-64 / var_1_27) ^ last_1_var_1_15)) ? (var_1_22 ? ((! ((var_1_10 >= last_1_var_1_15) || last_1_var_1_79)) ? (var_1_38 == ((signed short int) var_1_6)) : (var_1_38 == ((signed short int) ((var_1_28 - var_1_9) + 4)))) : (var_1_38 == ((signed short int) (min (2 , last_1_var_1_41))))) : (((var_1_37 + (- last_1_var_1_86)) >= last_1_var_1_66) ? ((var_1_34 <= (last_1_var_1_96 / var_1_33)) ? (var_1_38 == ((signed short int) ((max (last_1_var_1_91 , last_1_var_1_41)) + var_1_28))) : (var_1_38 == ((signed short int) var_1_8))) : (var_1_38 == ((signed short int) var_1_10))))) && (var_1_18 ? (var_1_41 == ((unsigned char) (max ((abs (var_1_29)) , (min ((var_1_9 + var_1_7) , var_1_28)))))) : ((var_1_8 > var_1_38) ? (var_1_41 == ((unsigned char) (((var_1_42 - var_1_43) + var_1_7) + (var_1_44 - (max (var_1_6 , var_1_29)))))) : (var_1_41 == ((unsigned char) (abs (var_1_29))))))) && ((var_1_88 && ((var_1_64 / var_1_44) < var_1_84)) ? (var_1_45 == ((float) (max (var_1_33 , var_1_31)))) : (var_1_45 == ((float) (var_1_37 + (abs (var_1_34))))))) && (((! (var_1_66 >= var_1_37)) || var_1_22) ? (var_1_46 == ((unsigned short int) (var_1_47 - (23027 - var_1_29)))) : (var_1_46 == ((unsigned short int) (var_1_47 - (max ((var_1_28 + var_1_7) , 2))))))) && ((((var_1_57 / var_1_44) / var_1_28) != var_1_10) ? (var_1_48 == ((double) (min ((abs (var_1_34)) , 9.9999999999996E12)))) : 1)) && ((var_1_45 >= var_1_98) ? (var_1_49 == ((double) ((min ((var_1_35 + var_1_50) , var_1_34)) + -0.4))) : (var_1_49 == ((double) (var_1_33 - var_1_36))))) && ((! (var_1_27 < (var_1_44 - var_1_29))) ? (var_1_51 == ((unsigned long int) ((var_1_14 - var_1_99) - (min (var_1_17 , var_1_56))))) : (var_1_51 == ((unsigned long int) ((max (10u , var_1_9)) + (abs (var_1_28))))))) && ((var_1_43 <= var_1_13) ? ((((9.999999998E8 / var_1_33) < (var_1_78 + var_1_66)) || var_1_22) ? (var_1_52 == ((signed char) (min ((min ((var_1_6 + var_1_7) , var_1_9)) , (min ((var_1_10 + var_1_8) , (var_1_29 - var_1_42))))))) : (var_1_52 == ((signed char) (min (var_1_7 , ((var_1_43 + var_1_54) + -1)))))) : (var_1_52 == ((signed char) (max ((var_1_6 + var_1_54) , 4)))))) && ((var_1_49 >= var_1_50) ? (var_1_55 == ((signed long int) (min ((abs (var_1_28)) , (var_1_29 - var_1_95))))) : (var_1_55 == ((signed long int) (var_1_54 + var_1_28))))) && ((var_1_97 < (var_1_25 * var_1_94)) ? (var_1_56 == ((unsigned char) (var_1_7 + var_1_44))) : ((var_1_34 != var_1_80) ? ((-10 < (var_1_13 / var_1_14)) ? (var_1_56 == ((unsigned char) ((max ((var_1_44 - var_1_43) , 8)) + var_1_7))) : (var_1_56 == ((unsigned char) var_1_6))) : (var_1_56 == ((unsigned char) (var_1_42 + var_1_44)))))) && ((((var_1_92 % var_1_44) * var_1_46) >= var_1_13) ? (var_1_57 == ((unsigned char) (var_1_28 - (10 + 5)))) : (var_1_57 == ((unsigned char) (max (16 , (var_1_28 - (abs (var_1_7))))))))) && ((! var_1_93) ? (var_1_58 == ((signed long int) (var_1_17 - var_1_29))) : (var_1_58 == ((signed long int) (-8 + var_1_47))))) && (((var_1_9 + var_1_95) > (var_1_84 * var_1_42)) ? (var_1_59 == ((signed short int) (var_1_10 + (max (var_1_38 , (var_1_29 - var_1_46)))))) : ((var_1_31 >= ((var_1_33 * var_1_35) * var_1_86)) ? (((max (var_1_94 , 128.125f)) < var_1_78) ? (var_1_59 == ((signed short int) ((abs (var_1_57)) + (abs (var_1_43))))) : ((var_1_16 && var_1_87) ? (var_1_59 == ((signed short int) (var_1_7 + (max (var_1_61 , var_1_42))))) : (var_1_59 == ((signed short int) ((25368 - (var_1_62 - var_1_42)) - var_1_99))))) : (var_1_59 == ((signed short int) ((max (var_1_38 , var_1_95)) + ((var_1_62 - var_1_46) - var_1_99))))))) && (var_1_18 ? (var_1_63 == ((signed char) (max (var_1_29 , var_1_54)))) : 1)) && (((var_1_18 || last_1_var_1_21) || ((var_1_31 * var_1_24) >= last_1_var_1_86)) ? ((((- last_1_var_1_38) * last_1_var_1_55) == last_1_var_1_51) ? ((var_1_29 < (last_1_var_1_67 * (min (var_1_47 , var_1_43)))) ? (var_1_64 == ((unsigned short int) (abs (var_1_7)))) : 1) : (var_1_64 == ((unsigned short int) (53968 - last_1_var_1_57)))) : 1)) && ((var_1_14 <= var_1_28) ? (var_1_65 == ((signed long int) var_1_20)) : 1)) && (var_1_21 ? (var_1_66 == ((float) var_1_31)) : ((var_1_20 > var_1_19) ? (var_1_66 == ((float) (var_1_50 + var_1_37))) : 1))) && (var_1_16 ? (var_1_67 == ((signed short int) (var_1_7 + ((max (1 , 32)) - 64)))) : (var_1_67 == ((signed short int) ((abs (32)) - (min (var_1_28 , (var_1_42 + var_1_68)))))))) && ((var_1_99 >= var_1_58) ? ((! (var_1_84 >= var_1_61)) ? (var_1_87 ? ((var_1_79 && ((var_1_99 <= var_1_42) && var_1_22)) ? (var_1_69 == ((signed char) (max ((var_1_42 - (max (var_1_29 , var_1_43))) , ((max (var_1_7 , -8)) + var_1_8))))) : (var_1_69 == ((signed char) ((min (var_1_8 , (abs (8)))) + -5)))) : 1) : ((var_1_25 > (- var_1_86)) ? (var_1_69 == ((signed char) (max ((var_1_6 - var_1_43) , (1 - (var_1_71 - var_1_29)))))) : (var_1_69 == ((signed char) (min (var_1_6 , var_1_29)))))) : ((var_1_6 < ((var_1_7 + var_1_43) - var_1_71)) ? (var_1_69 == ((signed char) (min (var_1_72 , (abs (-5)))))) : 1))) && ((var_1_74 || ((var_1_64 / var_1_71) < var_1_58)) ? ((var_1_84 >= ((max (var_1_58 , var_1_41)) + (var_1_99 | var_1_19))) ? (var_1_73 == ((signed char) (var_1_9 - (min (var_1_43 , (var_1_7 + 2)))))) : (var_1_73 == ((signed char) (var_1_7 + -5)))) : (((min (var_1_99 , (var_1_43 << 2))) <= (var_1_58 + var_1_95)) ? (var_1_73 == ((signed char) (abs (var_1_29 + var_1_8)))) : (((var_1_14 & var_1_44) <= var_1_28) ? (var_1_73 == ((signed char) ((25 + var_1_54) + var_1_7))) : (var_1_73 == ((signed char) (min (((min (var_1_29 , var_1_6)) - var_1_42) , var_1_9)))))))) && (((max ((max (32 , var_1_13)) , (var_1_57 | var_1_67))) >= (var_1_38 + var_1_72)) ? (((var_1_8 / var_1_62) != var_1_13) ? (var_1_74 == ((unsigned char) (! (var_1_87 || var_1_18)))) : (var_1_22 ? (var_1_74 == ((unsigned char) (var_1_18 && (var_1_75 && (! var_1_76))))) : 1)) : ((var_1_7 < var_1_95) ? (var_1_74 == ((unsigned char) ((var_1_18 && var_1_76) || var_1_75))) : (var_1_74 == ((unsigned char) ((var_1_18 && var_1_75) && var_1_77)))))) && ((var_1_45 != var_1_24) ? (var_1_78 == ((double) (min (var_1_34 , var_1_37)))) : 1)) && ((! var_1_75) ? (var_1_79 == ((unsigned char) (! var_1_18))) : 1)) && (((var_1_68 << (var_1_81 - var_1_82)) >= (var_1_44 - (abs (var_1_65)))) ? (var_1_80 == ((double) (abs (var_1_50)))) : (var_1_80 == ((double) ((min ((var_1_33 - var_1_36) , var_1_34)) - var_1_37))))) && (var_1_87 ? (var_1_83 == ((signed char) (max (var_1_9 , ((64 - var_1_6) - var_1_71))))) : (var_1_83 == ((signed char) (max (var_1_42 , (max (var_1_6 , var_1_9)))))))) && ((var_1_50 > var_1_35) ? (var_1_84 == ((unsigned long int) ((abs (var_1_14)) - var_1_38))) : (var_1_84 == ((unsigned long int) (min (var_1_85 , (var_1_14 - var_1_29))))))) && (var_1_74 ? (var_1_75 ? ((var_1_48 < var_1_24) ? (var_1_86 == ((double) var_1_33)) : (var_1_86 == ((double) var_1_36))) : (var_1_86 == ((double) var_1_33))) : (var_1_86 == ((double) var_1_36)))) && (var_1_89 ? (var_1_87 == ((unsigned char) var_1_77)) : 1)) && (var_1_88 == ((unsigned char) var_1_76))) && (var_1_16 ? (var_1_89 == ((unsigned char) var_1_22)) : (var_1_89 == ((unsigned char) var_1_77)))) && (var_1_88 ? (var_1_90 == ((float) var_1_34)) : 1)) && (var_1_77 ? (var_1_91 == ((unsigned char) var_1_43)) : 1)) && (var_1_75 ? (var_1_92 == ((signed short int) var_1_82)) : (var_1_92 == ((signed short int) 2)))) && (var_1_93 == ((unsigned char) var_1_76))) && (var_1_21 ? (var_1_94 == ((double) var_1_31)) : 1)) && (var_1_95 == ((unsigned long int) var_1_27))) && (var_1_88 ? (var_1_96 == ((float) var_1_37)) : 1)) && (var_1_97 == ((float) var_1_31))) && (var_1_98 == ((float) var_1_50))) && (var_1_88 ? (var_1_99 == ((unsigned long int) var_1_9)) : (var_1_99 == ((unsigned long int) var_1_62)))) && ((var_1_89 || var_1_18) ? ((var_1_15 != (last_1_var_1_100 * var_1_68)) ? (var_1_100 == ((signed short int) ((var_1_28 - var_1_15) + (min (var_1_55 , var_1_91))))) : (var_1_100 == ((signed short int) var_1_7))) : (var_1_100 == ((signed short int) var_1_8)))
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
