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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = -8;
signed short int var_1_5 = 25;
signed short int var_1_6 = 25;
signed long int var_1_7 = -5;
double var_1_8 = 8.3;
double var_1_9 = 49.5;
signed short int var_1_11 = -32;
signed long int var_1_12 = 2;
signed long int var_1_13 = 2;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 29439;
unsigned short int var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
float var_1_21 = 5.8;
float var_1_22 = 31.25;
float var_1_23 = 1.25;
float var_1_24 = 7.2;
signed char var_1_25 = -1;
unsigned char var_1_26 = 25;
unsigned char var_1_27 = 5;
unsigned long int var_1_28 = 1;
unsigned long int var_1_29 = 4159071585;
unsigned long int var_1_30 = 10;
unsigned char var_1_31 = 0;
unsigned short int var_1_32 = 4;
unsigned short int var_1_33 = 45034;
signed char var_1_34 = 32;
signed char var_1_35 = 64;
signed char var_1_36 = 16;
signed char var_1_37 = 16;
signed short int var_1_38 = 5;
double var_1_39 = 2.469;
double var_1_40 = 31.65;
double var_1_41 = -0.8;
double var_1_42 = 64.5;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 10;
unsigned char var_1_46 = 0;
unsigned long int var_1_49 = 1;
unsigned long int var_1_50 = 1455667979;
signed char var_1_51 = -1;
double var_1_52 = 100.8;
double var_1_53 = 0.0;
double var_1_54 = 3.25;
unsigned char var_1_55 = 1;
unsigned short int var_1_56 = 64;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
double var_1_59 = 25.5;
signed long int var_1_60 = 10;
double var_1_61 = 9.8;
double var_1_62 = 3.1;
double var_1_63 = 0.0;
unsigned char var_1_64 = 4;
unsigned char var_1_65 = 200;
unsigned char var_1_66 = 100;
signed short int var_1_67 = -10000;
signed short int var_1_68 = 32;
signed short int var_1_69 = 32;
unsigned char var_1_70 = 128;
unsigned char var_1_71 = 0;
signed char var_1_72 = -50;
signed long int var_1_73 = 10;
unsigned char var_1_74 = 10;
signed long int var_1_75 = 128;
signed long int var_1_76 = 10000;
double var_1_78 = 1.5;
unsigned long int var_1_79 = 5;
unsigned short int var_1_80 = 8;
signed long int var_1_81 = 2;
signed long int var_1_82 = -25;
unsigned long int var_1_83 = 2;
unsigned long int var_1_84 = 2910944287;
double var_1_85 = 5.45;
signed short int var_1_86 = -100;
signed short int var_1_87 = 64;
unsigned char var_1_88 = 1;
double var_1_89 = 63.6;
unsigned char var_1_90 = 0;
signed long int var_1_91 = 50;
unsigned char var_1_92 = 0;
signed long int var_1_93 = 32;
double var_1_94 = 63.2;
signed short int var_1_95 = 5;
unsigned char var_1_96 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_31 = 0;
unsigned char last_1_var_1_43 = 0;
unsigned char last_1_var_1_46 = 0;
double last_1_var_1_52 = 100.8;
unsigned char last_1_var_1_55 = 1;
signed short int last_1_var_1_67 = -10000;
signed short int last_1_var_1_68 = 32;
unsigned char last_1_var_1_70 = 128;
signed long int last_1_var_1_73 = 10;
unsigned char last_1_var_1_74 = 10;
signed long int last_1_var_1_75 = 128;
signed long int last_1_var_1_76 = 10000;
double last_1_var_1_78 = 1.5;
unsigned long int last_1_var_1_79 = 5;
unsigned short int last_1_var_1_80 = 8;
signed long int last_1_var_1_91 = 50;
signed long int last_1_var_1_93 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req27Batch172Amount500
	if (var_1_50 >= last_1_var_1_79) {
		if (var_1_65 > var_1_11) {
			var_1_68 = (max (var_1_5 , (abs (last_1_var_1_75))));
		} else {
			if (((50 + -2) * last_1_var_1_75) < var_1_6) {
				var_1_68 = (min (last_1_var_1_67 , (last_1_var_1_74 + (var_1_65 - var_1_26))));
			} else {
				if (last_1_var_1_78 < var_1_42) {
					var_1_68 = (min (-128 , last_1_var_1_67));
				} else {
					var_1_68 = ((max (var_1_35 , var_1_16)) + ((var_1_26 - var_1_65) + var_1_27));
				}
			}
		}
	}


	// From: Req15Batch172Amount500
	if (var_1_40 <= last_1_var_1_52) {
		if (last_1_var_1_91 < (abs (var_1_6 - 25))) {
			var_1_43 = (! (! var_1_20));
		} else {
			var_1_43 = (((var_1_6 * last_1_var_1_67) >= var_1_26) || (last_1_var_1_43 || var_1_20));
		}
	} else {
		var_1_43 = ((var_1_19 || var_1_18) || var_1_44);
	}


	// From: Req48Batch172Amount500
	if (last_1_var_1_55) {
		var_1_94 = var_1_63;
	} else {
		var_1_94 = var_1_54;
	}


	// From: Req45Batch172Amount500
	var_1_91 = last_1_var_1_68;


	// From: Req39Batch172Amount500
	unsigned long int stepLocal_26 = (max (var_1_36 , var_1_29)) + last_1_var_1_70;
	if (stepLocal_26 <= (var_1_84 - var_1_15)) {
		if (! last_1_var_1_31) {
			var_1_83 = var_1_33;
		} else {
			var_1_83 = var_1_16;
		}
	} else {
		var_1_83 = last_1_var_1_80;
	}


	// From: Req5Batch172Amount500
	if (! (var_1_11 > var_1_6)) {
		var_1_21 = 5.1f;
	} else {
		var_1_21 = (max ((var_1_22 + 31.6f) , (var_1_23 - var_1_24)));
	}


	// From: Req6Batch172Amount500
	signed long int stepLocal_1 = var_1_12 >> (min (var_1_26 , var_1_27));
	if (var_1_91 < stepLocal_1) {
		var_1_25 = (var_1_27 - var_1_26);
	} else {
		if (! var_1_18) {
			var_1_25 = (max (var_1_27 , 5));
		}
	}


	// From: Req14Batch172Amount500
	if (var_1_23 <= var_1_9) {
		var_1_39 = ((max (var_1_22 , (16.5 + var_1_40))) + (var_1_41 + var_1_42));
	} else {
		var_1_39 = (10.4 - (max (var_1_24 , 999.5)));
	}


	// From: Req16Batch172Amount500
	unsigned long int stepLocal_7 = var_1_29;
	if (stepLocal_7 >= var_1_36) {
		var_1_45 = var_1_16;
	} else {
		var_1_45 = ((min (var_1_6 , var_1_27)) + var_1_35);
	}


	// From: Req19Batch172Amount500
	unsigned long int stepLocal_10 = var_1_83 * var_1_29;
	if (stepLocal_10 != var_1_13) {
		var_1_51 = (var_1_26 + var_1_27);
	}


	// From: Req20Batch172Amount500
	unsigned short int stepLocal_11 = var_1_45;
	if (5u >= stepLocal_11) {
		var_1_52 = (max (((var_1_53 - var_1_54) - var_1_23) , 3.8));
	}


	// From: Req30Batch172Amount500
	if (var_1_58) {
		var_1_72 = var_1_35;
	}


	// From: Req37Batch172Amount500
	if (var_1_36 >= var_1_71) {
		var_1_80 = (abs (var_1_15));
	}


	// From: Req40Batch172Amount500
	if (var_1_20) {
		var_1_85 = var_1_53;
	} else {
		var_1_85 = var_1_42;
	}


	// From: Req41Batch172Amount500
	if (var_1_18) {
		var_1_86 = var_1_5;
	} else {
		var_1_86 = var_1_87;
	}


	// From: Req42Batch172Amount500
	var_1_88 = var_1_44;


	// From: Req44Batch172Amount500
	if (var_1_18) {
		var_1_90 = 0;
	} else {
		var_1_90 = var_1_20;
	}


	// From: Req46Batch172Amount500
	var_1_92 = var_1_19;


	// From: Req49Batch172Amount500
	var_1_95 = var_1_16;


	// From: Req7Batch172Amount500
	unsigned short int stepLocal_2 = var_1_45;
	if (! (var_1_68 > var_1_45)) {
		var_1_28 = var_1_16;
	} else {
		if (var_1_13 >= stepLocal_2) {
			var_1_28 = (var_1_6 + var_1_16);
		} else {
			var_1_28 = (max ((var_1_29 - var_1_16) , var_1_12));
		}
	}


	// From: Req26Batch172Amount500
	if (var_1_52 < var_1_24) {
		if (! var_1_43) {
			var_1_67 = (var_1_36 + (var_1_65 - var_1_16));
		} else {
			var_1_67 = (var_1_36 + var_1_26);
		}
	} else {
		if (! var_1_58) {
			var_1_67 = var_1_95;
		} else {
			var_1_67 = (max (var_1_16 , var_1_6));
		}
	}


	// From: Req4Batch172Amount500
	if (var_1_12 <= (8 * (max (64 , var_1_13)))) {
		if ((var_1_94 > (- var_1_52)) && (-2 == (var_1_16 / var_1_11))) {
			var_1_17 = (var_1_18 || var_1_19);
		} else {
			var_1_17 = var_1_20;
		}
	} else {
		var_1_17 = var_1_20;
	}


	// From: Req34Batch172Amount500
	if (var_1_19) {
		if (var_1_90) {
			var_1_76 = (max ((var_1_11 + var_1_66) , (var_1_35 - var_1_65)));
		} else {
			var_1_76 = (last_1_var_1_76 + (var_1_16 - var_1_91));
		}
	}


	// From: Req3Batch172Amount500
	if ((min (var_1_80 , var_1_6)) >= (var_1_12 + (var_1_13 / var_1_11))) {
		if (! var_1_90) {
			var_1_14 = (var_1_6 + 5);
		} else {
			if ((var_1_8 + var_1_9) <= (abs (var_1_94))) {
				if (var_1_5 <= var_1_11) {
					var_1_14 = var_1_6;
				}
			}
		}
	} else {
		var_1_14 = ((var_1_15 - var_1_16) + (5 + 1));
	}


	// From: Req8Batch172Amount500
	unsigned char stepLocal_3 = var_1_21 > (- var_1_22);
	if (stepLocal_3 && var_1_18) {
		var_1_30 = (var_1_76 + var_1_13);
	} else {
		var_1_30 = var_1_27;
	}


	// From: Req25Batch172Amount500
	if (var_1_91 > var_1_30) {
		var_1_64 = (min ((var_1_65 - (var_1_66 - var_1_27)) , (max (var_1_26 , var_1_35))));
	} else {
		var_1_64 = (var_1_65 - var_1_27);
	}


	// From: Req32Batch172Amount500
	if (4 >= (var_1_36 + (var_1_16 << var_1_15))) {
		if (var_1_83 <= (var_1_50 >> var_1_27)) {
			var_1_74 = 4;
		} else {
			if (! var_1_20) {
				var_1_74 = (var_1_65 - (min ((max (var_1_26 , 2)) , (var_1_66 - var_1_27))));
			} else {
				if (! var_1_88) {
					var_1_74 = (var_1_65 - var_1_71);
				} else {
					var_1_74 = ((var_1_27 + var_1_26) + (abs (var_1_66)));
				}
			}
		}
	}


	// From: Req9Batch172Amount500
	signed long int stepLocal_4 = var_1_80 + var_1_11;
	if (var_1_13 < stepLocal_4) {
		var_1_31 = ((! var_1_20) || var_1_19);
	} else {
		var_1_31 = (! (! var_1_20));
	}


	// From: Req22Batch172Amount500
	unsigned char stepLocal_13 = var_1_44 && var_1_88;
	if (var_1_17 || stepLocal_13) {
		var_1_56 = (var_1_6 + var_1_15);
	} else {
		var_1_56 = ((max ((abs (64)) , 4)) + 128);
	}


	// From: Req33Batch172Amount500
	if ((var_1_56 <= var_1_91) && var_1_18) {
		var_1_75 = var_1_83;
	} else {
		var_1_75 = (var_1_35 + var_1_27);
	}


	// From: Req2Batch172Amount500
	signed long int stepLocal_0 = (var_1_5 * var_1_75) % var_1_11;
	if (var_1_94 <= (- (var_1_8 - var_1_9))) {
		var_1_7 = (max (var_1_5 , (abs (var_1_6))));
	} else {
		if (var_1_88) {
			if (stepLocal_0 < var_1_6) {
				var_1_7 = (((min (var_1_6 , 32)) - (var_1_12 + var_1_13)) + 2);
			} else {
				var_1_7 = (abs (var_1_11));
			}
		} else {
			var_1_7 = (100000000 + var_1_12);
		}
	}


	// From: Req35Batch172Amount500
	signed long int stepLocal_21 = 10;
	if (stepLocal_21 == (abs (var_1_56))) {
		var_1_78 = (64.875 - var_1_54);
	} else {
		var_1_78 = (abs (var_1_24));
	}


	// From: Req47Batch172Amount500
	if (var_1_19) {
		var_1_93 = last_1_var_1_93;
	} else {
		var_1_93 = var_1_64;
	}


	// From: Req17Batch172Amount500
	if (var_1_43) {
		if (var_1_40 < var_1_9) {
			var_1_46 = ((last_1_var_1_46 && var_1_19) && var_1_44);
		} else {
			var_1_46 = ((var_1_36 == var_1_13) && ((var_1_23 < var_1_78) && var_1_18));
		}
	}


	// From: Req12Batch172Amount500
	if (var_1_94 != (var_1_78 + var_1_9)) {
		var_1_37 = (var_1_35 - (var_1_26 + var_1_27));
	} else {
		var_1_37 = var_1_26;
	}


	// From: Req24Batch172Amount500
	signed long int stepLocal_15 = var_1_15 ^ var_1_75;
	if (stepLocal_15 > (8 - (max (var_1_35 , var_1_60)))) {
		var_1_59 = (var_1_54 + ((var_1_61 - var_1_62) + var_1_42));
	} else {
		var_1_59 = (var_1_53 - (var_1_63 - var_1_62));
	}


	// From: Req18Batch172Amount500
	signed char stepLocal_9 = var_1_36;
	signed long int stepLocal_8 = var_1_12;
	if (stepLocal_9 <= var_1_28) {
		if (stepLocal_8 <= (var_1_28 & var_1_36)) {
			if (! var_1_44) {
				var_1_49 = ((var_1_50 - var_1_36) + var_1_12);
			} else {
				var_1_49 = (max (var_1_13 , var_1_16));
			}
		} else {
			var_1_49 = (min (var_1_29 , (max (var_1_16 , var_1_14))));
		}
	} else {
		if (var_1_46) {
			var_1_49 = (max (var_1_35 , var_1_36));
		}
	}


	// From: Req10Batch172Amount500
	if (var_1_29 >= var_1_83) {
		if (var_1_52 >= var_1_23) {
			var_1_32 = var_1_15;
		} else {
			var_1_32 = ((abs (var_1_33)) - var_1_6);
		}
	} else {
		if (var_1_93 > (min (var_1_12 , (var_1_33 - var_1_26)))) {
			if (var_1_31) {
				if ((- (var_1_8 * 4.4f)) < var_1_22) {
					var_1_32 = (max (var_1_27 , (var_1_33 - var_1_15)));
				} else {
					var_1_32 = ((var_1_26 + var_1_16) + var_1_27);
				}
			} else {
				var_1_32 = (min ((abs (var_1_33)) , var_1_26));
			}
		}
	}


	// From: Req31Batch172Amount500
	signed long int stepLocal_20 = var_1_26 * var_1_5;
	unsigned long int stepLocal_19 = min (var_1_32 , var_1_83);
	if (var_1_60 >= stepLocal_20) {
		if ((var_1_9 - var_1_8) > (var_1_85 / 9.375)) {
			var_1_73 = (var_1_13 + (var_1_35 - var_1_15));
		} else {
			var_1_73 = (max ((last_1_var_1_73 + (min (var_1_66 , var_1_33))) , ((var_1_35 - last_1_var_1_73) + var_1_15)));
		}
	} else {
		if (stepLocal_19 < var_1_13) {
			var_1_73 = (var_1_26 - var_1_71);
		} else {
			var_1_73 = var_1_33;
		}
	}


	// From: Req36Batch172Amount500
	unsigned long int stepLocal_23 = var_1_49;
	unsigned long int stepLocal_22 = var_1_49;
	if (var_1_76 > stepLocal_22) {
		if ((var_1_56 * var_1_6) <= stepLocal_23) {
			var_1_79 = (max ((var_1_29 - (var_1_50 - var_1_15)) , var_1_56));
		}
	}


	// From: Req13Batch172Amount500
	signed long int stepLocal_6 = -5;
	if (stepLocal_6 < (var_1_33 - var_1_26)) {
		var_1_38 = var_1_16;
	} else {
		var_1_38 = ((var_1_16 - (var_1_36 + 4)) + (min ((min (var_1_7 , var_1_26)) , var_1_73)));
	}


	// From: Req11Batch172Amount500
	unsigned long int stepLocal_5 = var_1_79;
	if (var_1_29 > stepLocal_5) {
		var_1_34 = ((var_1_35 - (min (var_1_27 , var_1_26))) - var_1_36);
	}


	// From: Req38Batch172Amount500
	signed long int stepLocal_25 = var_1_33 - var_1_35;
	unsigned char stepLocal_24 = var_1_32 <= (var_1_60 / var_1_27);
	if (stepLocal_24 || (var_1_8 >= var_1_63)) {
		if (var_1_78 <= var_1_21) {
			var_1_81 = ((min ((var_1_66 - var_1_26) , var_1_35)) + (min (var_1_5 , (min (var_1_34 , var_1_82)))));
		}
	} else {
		if (var_1_16 == stepLocal_25) {
			var_1_81 = ((max (var_1_66 , (min (var_1_93 , var_1_76)))) - (max (var_1_26 , (min (var_1_56 , var_1_45)))));
		} else {
			var_1_81 = (var_1_28 + (var_1_33 - (8 + 16)));
		}
	}


	// From: Req21Batch172Amount500
	signed char stepLocal_12 = var_1_35;
	if ((var_1_38 * var_1_11) > stepLocal_12) {
		var_1_55 = ((var_1_12 == 50) && var_1_44);
	}


	// From: Req23Batch172Amount500
	signed long int stepLocal_14 = var_1_12;
	if (stepLocal_14 < var_1_80) {
		var_1_57 = (var_1_18 || (var_1_44 || (var_1_55 && var_1_58)));
	} else {
		var_1_57 = (var_1_44 || var_1_18);
	}


	// From: Req43Batch172Amount500
	if (var_1_57) {
		var_1_89 = var_1_62;
	} else {
		var_1_89 = var_1_22;
	}


	// From: Req1Batch172Amount500
	if ((var_1_59 * var_1_89) > var_1_89) {
		var_1_1 = ((abs (var_1_5)) - var_1_6);
	} else {
		if (var_1_89 <= var_1_59) {
			var_1_1 = var_1_6;
		}
	}


	// From: Req28Batch172Amount500
	if (var_1_43) {
		var_1_69 = (max (var_1_27 , var_1_1));
	} else {
		var_1_69 = ((var_1_65 + (var_1_26 - var_1_66)) + (min (var_1_36 , var_1_7)));
	}


	// From: Req50Batch172Amount500
	if ((var_1_83 * (- var_1_35)) >= var_1_56) {
		if (! var_1_57) {
			if (var_1_12 <= (var_1_68 * var_1_56)) {
				var_1_96 = var_1_19;
			} else {
				var_1_96 = var_1_44;
			}
		} else {
			var_1_96 = var_1_58;
		}
	} else {
		var_1_96 = var_1_44;
	}


	// From: Req29Batch172Amount500
	unsigned long int stepLocal_18 = var_1_50 | var_1_83;
	unsigned long int stepLocal_17 = var_1_83;
	signed long int stepLocal_16 = var_1_93 + var_1_32;
	if (var_1_63 > var_1_89) {
		if (var_1_94 < (var_1_42 * var_1_61)) {
			var_1_70 = (abs (var_1_66));
		} else {
			if (var_1_12 != stepLocal_18) {
				var_1_70 = (min ((max ((min (var_1_27 , 1)) , 1)) , (var_1_65 - var_1_36)));
			}
		}
	} else {
		if (stepLocal_17 >= (max (var_1_32 , (var_1_79 + var_1_6)))) {
			if (stepLocal_16 >= (var_1_33 * var_1_66)) {
				var_1_70 = (var_1_66 + (max (var_1_27 , (var_1_26 + var_1_71))));
			}
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32766);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32768);
	assume_abort_if_not(var_1_11 <= 32767);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 536870912);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 536870911);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 30);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 30);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 62);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 4611686.018427383000e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691400e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 4611686.018427383000e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 127);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 63);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= -1073741823);
	assume_abort_if_not(var_1_82 <= 1073741823);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 2147483647);
	assume_abort_if_not(var_1_84 <= 4294967295);
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= -32767);
	assume_abort_if_not(var_1_87 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_31 = var_1_31;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_93 = var_1_93;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_59 * var_1_89) > var_1_89) ? (var_1_1 == ((signed short int) ((abs (var_1_5)) - var_1_6))) : ((var_1_89 <= var_1_59) ? (var_1_1 == ((signed short int) var_1_6)) : 1)) && ((var_1_94 <= (- (var_1_8 - var_1_9))) ? (var_1_7 == ((signed long int) (max (var_1_5 , (abs (var_1_6)))))) : (var_1_88 ? ((((var_1_5 * var_1_75) % var_1_11) < var_1_6) ? (var_1_7 == ((signed long int) (((min (var_1_6 , 32)) - (var_1_12 + var_1_13)) + 2))) : (var_1_7 == ((signed long int) (abs (var_1_11))))) : (var_1_7 == ((signed long int) (100000000 + var_1_12)))))) && (((min (var_1_80 , var_1_6)) >= (var_1_12 + (var_1_13 / var_1_11))) ? ((! var_1_90) ? (var_1_14 == ((unsigned short int) (var_1_6 + 5))) : (((var_1_8 + var_1_9) <= (abs (var_1_94))) ? ((var_1_5 <= var_1_11) ? (var_1_14 == ((unsigned short int) var_1_6)) : 1) : 1)) : (var_1_14 == ((unsigned short int) ((var_1_15 - var_1_16) + (5 + 1)))))) && ((var_1_12 <= (8 * (max (64 , var_1_13)))) ? (((var_1_94 > (- var_1_52)) && (-2 == (var_1_16 / var_1_11))) ? (var_1_17 == ((unsigned char) (var_1_18 || var_1_19))) : (var_1_17 == ((unsigned char) var_1_20))) : (var_1_17 == ((unsigned char) var_1_20)))) && ((! (var_1_11 > var_1_6)) ? (var_1_21 == ((float) 5.1f)) : (var_1_21 == ((float) (max ((var_1_22 + 31.6f) , (var_1_23 - var_1_24))))))) && ((var_1_91 < (var_1_12 >> (min (var_1_26 , var_1_27)))) ? (var_1_25 == ((signed char) (var_1_27 - var_1_26))) : ((! var_1_18) ? (var_1_25 == ((signed char) (max (var_1_27 , 5)))) : 1))) && ((! (var_1_68 > var_1_45)) ? (var_1_28 == ((unsigned long int) var_1_16)) : ((var_1_13 >= var_1_45) ? (var_1_28 == ((unsigned long int) (var_1_6 + var_1_16))) : (var_1_28 == ((unsigned long int) (max ((var_1_29 - var_1_16) , var_1_12))))))) && (((var_1_21 > (- var_1_22)) && var_1_18) ? (var_1_30 == ((unsigned long int) (var_1_76 + var_1_13))) : (var_1_30 == ((unsigned long int) var_1_27)))) && ((var_1_13 < (var_1_80 + var_1_11)) ? (var_1_31 == ((unsigned char) ((! var_1_20) || var_1_19))) : (var_1_31 == ((unsigned char) (! (! var_1_20)))))) && ((var_1_29 >= var_1_83) ? ((var_1_52 >= var_1_23) ? (var_1_32 == ((unsigned short int) var_1_15)) : (var_1_32 == ((unsigned short int) ((abs (var_1_33)) - var_1_6)))) : ((var_1_93 > (min (var_1_12 , (var_1_33 - var_1_26)))) ? (var_1_31 ? (((- (var_1_8 * 4.4f)) < var_1_22) ? (var_1_32 == ((unsigned short int) (max (var_1_27 , (var_1_33 - var_1_15))))) : (var_1_32 == ((unsigned short int) ((var_1_26 + var_1_16) + var_1_27)))) : (var_1_32 == ((unsigned short int) (min ((abs (var_1_33)) , var_1_26))))) : 1))) && ((var_1_29 > var_1_79) ? (var_1_34 == ((signed char) ((var_1_35 - (min (var_1_27 , var_1_26))) - var_1_36))) : 1)) && ((var_1_94 != (var_1_78 + var_1_9)) ? (var_1_37 == ((signed char) (var_1_35 - (var_1_26 + var_1_27)))) : (var_1_37 == ((signed char) var_1_26)))) && ((-5 < (var_1_33 - var_1_26)) ? (var_1_38 == ((signed short int) var_1_16)) : (var_1_38 == ((signed short int) ((var_1_16 - (var_1_36 + 4)) + (min ((min (var_1_7 , var_1_26)) , var_1_73))))))) && ((var_1_23 <= var_1_9) ? (var_1_39 == ((double) ((max (var_1_22 , (16.5 + var_1_40))) + (var_1_41 + var_1_42)))) : (var_1_39 == ((double) (10.4 - (max (var_1_24 , 999.5))))))) && ((var_1_40 <= last_1_var_1_52) ? ((last_1_var_1_91 < (abs (var_1_6 - 25))) ? (var_1_43 == ((unsigned char) (! (! var_1_20)))) : (var_1_43 == ((unsigned char) (((var_1_6 * last_1_var_1_67) >= var_1_26) || (last_1_var_1_43 || var_1_20))))) : (var_1_43 == ((unsigned char) ((var_1_19 || var_1_18) || var_1_44))))) && ((var_1_29 >= var_1_36) ? (var_1_45 == ((unsigned short int) var_1_16)) : (var_1_45 == ((unsigned short int) ((min (var_1_6 , var_1_27)) + var_1_35))))) && (var_1_43 ? ((var_1_40 < var_1_9) ? (var_1_46 == ((unsigned char) ((last_1_var_1_46 && var_1_19) && var_1_44))) : (var_1_46 == ((unsigned char) ((var_1_36 == var_1_13) && ((var_1_23 < var_1_78) && var_1_18))))) : 1)) && ((var_1_36 <= var_1_28) ? ((var_1_12 <= (var_1_28 & var_1_36)) ? ((! var_1_44) ? (var_1_49 == ((unsigned long int) ((var_1_50 - var_1_36) + var_1_12))) : (var_1_49 == ((unsigned long int) (max (var_1_13 , var_1_16))))) : (var_1_49 == ((unsigned long int) (min (var_1_29 , (max (var_1_16 , var_1_14))))))) : (var_1_46 ? (var_1_49 == ((unsigned long int) (max (var_1_35 , var_1_36)))) : 1))) && (((var_1_83 * var_1_29) != var_1_13) ? (var_1_51 == ((signed char) (var_1_26 + var_1_27))) : 1)) && ((5u >= var_1_45) ? (var_1_52 == ((double) (max (((var_1_53 - var_1_54) - var_1_23) , 3.8)))) : 1)) && (((var_1_38 * var_1_11) > var_1_35) ? (var_1_55 == ((unsigned char) ((var_1_12 == 50) && var_1_44))) : 1)) && ((var_1_17 || (var_1_44 && var_1_88)) ? (var_1_56 == ((unsigned short int) (var_1_6 + var_1_15))) : (var_1_56 == ((unsigned short int) ((max ((abs (64)) , 4)) + 128))))) && ((var_1_12 < var_1_80) ? (var_1_57 == ((unsigned char) (var_1_18 || (var_1_44 || (var_1_55 && var_1_58))))) : (var_1_57 == ((unsigned char) (var_1_44 || var_1_18))))) && (((var_1_15 ^ var_1_75) > (8 - (max (var_1_35 , var_1_60)))) ? (var_1_59 == ((double) (var_1_54 + ((var_1_61 - var_1_62) + var_1_42)))) : (var_1_59 == ((double) (var_1_53 - (var_1_63 - var_1_62)))))) && ((var_1_91 > var_1_30) ? (var_1_64 == ((unsigned char) (min ((var_1_65 - (var_1_66 - var_1_27)) , (max (var_1_26 , var_1_35)))))) : (var_1_64 == ((unsigned char) (var_1_65 - var_1_27))))) && ((var_1_52 < var_1_24) ? ((! var_1_43) ? (var_1_67 == ((signed short int) (var_1_36 + (var_1_65 - var_1_16)))) : (var_1_67 == ((signed short int) (var_1_36 + var_1_26)))) : ((! var_1_58) ? (var_1_67 == ((signed short int) var_1_95)) : (var_1_67 == ((signed short int) (max (var_1_16 , var_1_6))))))) && ((var_1_50 >= last_1_var_1_79) ? ((var_1_65 > var_1_11) ? (var_1_68 == ((signed short int) (max (var_1_5 , (abs (last_1_var_1_75)))))) : ((((50 + -2) * last_1_var_1_75) < var_1_6) ? (var_1_68 == ((signed short int) (min (last_1_var_1_67 , (last_1_var_1_74 + (var_1_65 - var_1_26)))))) : ((last_1_var_1_78 < var_1_42) ? (var_1_68 == ((signed short int) (min (-128 , last_1_var_1_67)))) : (var_1_68 == ((signed short int) ((max (var_1_35 , var_1_16)) + ((var_1_26 - var_1_65) + var_1_27))))))) : 1)) && (var_1_43 ? (var_1_69 == ((signed short int) (max (var_1_27 , var_1_1)))) : (var_1_69 == ((signed short int) ((var_1_65 + (var_1_26 - var_1_66)) + (min (var_1_36 , var_1_7))))))) && ((var_1_63 > var_1_89) ? ((var_1_94 < (var_1_42 * var_1_61)) ? (var_1_70 == ((unsigned char) (abs (var_1_66)))) : ((var_1_12 != (var_1_50 | var_1_83)) ? (var_1_70 == ((unsigned char) (min ((max ((min (var_1_27 , 1)) , 1)) , (var_1_65 - var_1_36))))) : 1)) : ((var_1_83 >= (max (var_1_32 , (var_1_79 + var_1_6)))) ? (((var_1_93 + var_1_32) >= (var_1_33 * var_1_66)) ? (var_1_70 == ((unsigned char) (var_1_66 + (max (var_1_27 , (var_1_26 + var_1_71)))))) : 1) : 1))) && (var_1_58 ? (var_1_72 == ((signed char) var_1_35)) : 1)) && ((var_1_60 >= (var_1_26 * var_1_5)) ? (((var_1_9 - var_1_8) > (var_1_85 / 9.375)) ? (var_1_73 == ((signed long int) (var_1_13 + (var_1_35 - var_1_15)))) : (var_1_73 == ((signed long int) (max ((last_1_var_1_73 + (min (var_1_66 , var_1_33))) , ((var_1_35 - last_1_var_1_73) + var_1_15)))))) : (((min (var_1_32 , var_1_83)) < var_1_13) ? (var_1_73 == ((signed long int) (var_1_26 - var_1_71))) : (var_1_73 == ((signed long int) var_1_33))))) && ((4 >= (var_1_36 + (var_1_16 << var_1_15))) ? ((var_1_83 <= (var_1_50 >> var_1_27)) ? (var_1_74 == ((unsigned char) 4)) : ((! var_1_20) ? (var_1_74 == ((unsigned char) (var_1_65 - (min ((max (var_1_26 , 2)) , (var_1_66 - var_1_27)))))) : ((! var_1_88) ? (var_1_74 == ((unsigned char) (var_1_65 - var_1_71))) : (var_1_74 == ((unsigned char) ((var_1_27 + var_1_26) + (abs (var_1_66)))))))) : 1)) && (((var_1_56 <= var_1_91) && var_1_18) ? (var_1_75 == ((signed long int) var_1_83)) : (var_1_75 == ((signed long int) (var_1_35 + var_1_27))))) && (var_1_19 ? (var_1_90 ? (var_1_76 == ((signed long int) (max ((var_1_11 + var_1_66) , (var_1_35 - var_1_65))))) : (var_1_76 == ((signed long int) (last_1_var_1_76 + (var_1_16 - var_1_91))))) : 1)) && ((10 == (abs (var_1_56))) ? (var_1_78 == ((double) (64.875 - var_1_54))) : (var_1_78 == ((double) (abs (var_1_24)))))) && ((var_1_76 > var_1_49) ? (((var_1_56 * var_1_6) <= var_1_49) ? (var_1_79 == ((unsigned long int) (max ((var_1_29 - (var_1_50 - var_1_15)) , var_1_56)))) : 1) : 1)) && ((var_1_36 >= var_1_71) ? (var_1_80 == ((unsigned short int) (abs (var_1_15)))) : 1)) && (((var_1_32 <= (var_1_60 / var_1_27)) || (var_1_8 >= var_1_63)) ? ((var_1_78 <= var_1_21) ? (var_1_81 == ((signed long int) ((min ((var_1_66 - var_1_26) , var_1_35)) + (min (var_1_5 , (min (var_1_34 , var_1_82))))))) : 1) : ((var_1_16 == (var_1_33 - var_1_35)) ? (var_1_81 == ((signed long int) ((max (var_1_66 , (min (var_1_93 , var_1_76)))) - (max (var_1_26 , (min (var_1_56 , var_1_45))))))) : (var_1_81 == ((signed long int) (var_1_28 + (var_1_33 - (8 + 16)))))))) && ((((max (var_1_36 , var_1_29)) + last_1_var_1_70) <= (var_1_84 - var_1_15)) ? ((! last_1_var_1_31) ? (var_1_83 == ((unsigned long int) var_1_33)) : (var_1_83 == ((unsigned long int) var_1_16))) : (var_1_83 == ((unsigned long int) last_1_var_1_80)))) && (var_1_20 ? (var_1_85 == ((double) var_1_53)) : (var_1_85 == ((double) var_1_42)))) && (var_1_18 ? (var_1_86 == ((signed short int) var_1_5)) : (var_1_86 == ((signed short int) var_1_87)))) && (var_1_88 == ((unsigned char) var_1_44))) && (var_1_57 ? (var_1_89 == ((double) var_1_62)) : (var_1_89 == ((double) var_1_22)))) && (var_1_18 ? (var_1_90 == ((unsigned char) 0)) : (var_1_90 == ((unsigned char) var_1_20)))) && (var_1_91 == ((signed long int) last_1_var_1_68))) && (var_1_92 == ((unsigned char) var_1_19))) && (var_1_19 ? (var_1_93 == ((signed long int) last_1_var_1_93)) : (var_1_93 == ((signed long int) var_1_64)))) && (last_1_var_1_55 ? (var_1_94 == ((double) var_1_63)) : (var_1_94 == ((double) var_1_54)))) && (var_1_95 == ((signed short int) var_1_16))) && (((var_1_83 * (- var_1_35)) >= var_1_56) ? ((! var_1_57) ? ((var_1_12 <= (var_1_68 * var_1_56)) ? (var_1_96 == ((unsigned char) var_1_19)) : (var_1_96 == ((unsigned char) var_1_44))) : (var_1_96 == ((unsigned char) var_1_58))) : (var_1_96 == ((unsigned char) var_1_44)))
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
