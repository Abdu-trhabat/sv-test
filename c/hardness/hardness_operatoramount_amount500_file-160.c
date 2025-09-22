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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 5;
unsigned char var_1_7 = 100;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 57740;
unsigned char var_1_10 = 50;
unsigned char var_1_12 = 128;
signed long int var_1_13 = -10;
double var_1_14 = 10000000000.2;
double var_1_16 = 8.4;
unsigned char var_1_17 = 2;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = 100000000000.825;
double var_1_22 = 7.8;
double var_1_23 = 0.25;
double var_1_24 = 50.6;
double var_1_25 = 4.125;
double var_1_26 = 2.2;
unsigned char var_1_27 = 0;
double var_1_29 = 16.1;
unsigned char var_1_30 = 0;
unsigned long int var_1_31 = 32;
unsigned long int var_1_32 = 2595770884;
signed short int var_1_33 = -10;
signed short int var_1_34 = 10;
unsigned char var_1_35 = 10;
unsigned short int var_1_36 = 8;
unsigned short int var_1_39 = 21009;
unsigned short int var_1_40 = 64;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 16;
unsigned short int var_1_43 = 16;
unsigned short int var_1_44 = 1;
signed short int var_1_47 = 50;
signed char var_1_48 = 5;
unsigned char var_1_49 = 5;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 128;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
double var_1_55 = 49.5;
double var_1_56 = 32.4;
signed short int var_1_57 = 16;
signed short int var_1_58 = 27750;
unsigned long int var_1_59 = 10;
unsigned char var_1_60 = 2;
unsigned char var_1_62 = 64;
unsigned char var_1_63 = 64;
unsigned char var_1_64 = 32;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 128;
signed short int var_1_67 = -2;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 2;
double var_1_70 = 1.625;
double var_1_72 = 128.2;
double var_1_73 = 25.2;
double var_1_74 = 0.0;
double var_1_75 = 0.0;
double var_1_76 = 5.05;
double var_1_77 = 1.3;
double var_1_78 = 128.5;
double var_1_79 = 255.75;
signed short int var_1_80 = -16;
unsigned char var_1_81 = 1;
float var_1_82 = 500.5;
signed char var_1_83 = 0;
unsigned char var_1_84 = 0;
double var_1_86 = 16.5;
signed long int var_1_87 = -1;
signed short int var_1_88 = -500;
signed short int var_1_89 = 2;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 0;
signed short int var_1_92 = 128;
unsigned char var_1_93 = 0;
signed char var_1_94 = -32;
signed char var_1_95 = 64;
signed long int var_1_96 = -16;
unsigned long int var_1_97 = 32;
float var_1_98 = 32.5;
unsigned char var_1_99 = 50;
signed char var_1_100 = -100;
unsigned char var_1_101 = 8;
signed char var_1_102 = 64;
unsigned long int var_1_103 = 200;
unsigned char var_1_104 = 64;
unsigned short int var_1_105 = 64;
unsigned short int var_1_106 = 128;
unsigned short int var_1_107 = 0;
unsigned short int var_1_109 = 64;
unsigned short int var_1_110 = 16;
unsigned char var_1_111 = 1;
double var_1_112 = 7.25;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_13 = -10;
unsigned short int last_1_var_1_36 = 8;
unsigned short int last_1_var_1_40 = 64;
unsigned char last_1_var_1_41 = 5;
unsigned short int last_1_var_1_43 = 16;
signed short int last_1_var_1_47 = 50;
signed short int last_1_var_1_57 = 16;
unsigned long int last_1_var_1_59 = 10;
signed short int last_1_var_1_67 = -2;
unsigned char last_1_var_1_68 = 0;
double last_1_var_1_77 = 1.3;
signed short int last_1_var_1_80 = -16;
unsigned char last_1_var_1_81 = 1;
signed long int last_1_var_1_87 = -1;
signed short int last_1_var_1_88 = -500;
signed short int last_1_var_1_92 = 128;
signed long int last_1_var_1_96 = -16;
unsigned long int last_1_var_1_97 = 32;
unsigned long int last_1_var_1_103 = 200;
unsigned short int last_1_var_1_105 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch160Amount500
	if (var_1_30) {
		var_1_40 = (min (var_1_12 , var_1_9));
	} else {
		if ((var_1_24 - var_1_22) < (var_1_23 - (abs (var_1_25)))) {
			var_1_40 = ((var_1_9 - var_1_7) - (var_1_12 + last_1_var_1_40));
		} else {
			var_1_40 = ((min (last_1_var_1_97 , var_1_35)) + last_1_var_1_36);
		}
	}


	// From: Req56Batch160Amount500
	var_1_109 = var_1_40;


	// From: Req38Batch160Amount500
	unsigned char stepLocal_24 = var_1_69;
	unsigned char stepLocal_23 = var_1_51;
	if (stepLocal_24 < last_1_var_1_36) {
		var_1_87 = (last_1_var_1_67 + (10 + 2));
	} else {
		if (stepLocal_23 <= (last_1_var_1_87 * last_1_var_1_59)) {
			var_1_87 = ((last_1_var_1_57 + var_1_35) - ((last_1_var_1_80 + last_1_var_1_105) + last_1_var_1_96));
		}
	}


	// From: Req39Batch160Amount500
	unsigned char stepLocal_25 = last_1_var_1_59 != (var_1_9 - last_1_var_1_13);
	if ((var_1_52 <= var_1_12) && stepLocal_25) {
		var_1_88 = ((var_1_89 + var_1_63) + ((last_1_var_1_41 + last_1_var_1_88) + last_1_var_1_13));
	} else {
		var_1_88 = last_1_var_1_88;
	}


	// From: Req6Batch160Amount500
	if (! (var_1_88 != var_1_9)) {
		var_1_17 = (128 - var_1_7);
	} else {
		var_1_17 = (var_1_7 + (max (var_1_6 , var_1_4)));
	}


	// From: Req10Batch160Amount500
	if ((min ((last_1_var_1_87 & 2) , last_1_var_1_87)) > var_1_9) {
		if (var_1_16 == (max (var_1_22 , (last_1_var_1_77 / var_1_29)))) {
			var_1_27 = (var_1_20 && (last_1_var_1_81 || var_1_19));
		} else {
			var_1_27 = var_1_30;
		}
	} else {
		if (var_1_3 == (var_1_9 * last_1_var_1_87)) {
			var_1_27 = (! (last_1_var_1_68 && var_1_30));
		}
	}


	// From: Req40Batch160Amount500
	if (var_1_27) {
		var_1_90 = var_1_91;
	} else {
		var_1_90 = 0;
	}


	// From: Req54Batch160Amount500
	if (var_1_27) {
		var_1_105 = var_1_106;
	}


	// From: Req28Batch160Amount500
	if ((min (var_1_32 , last_1_var_1_103)) > 10u) {
		var_1_68 = (((var_1_58 >> var_1_69) > last_1_var_1_96) && var_1_30);
	}


	// From: Req2Batch160Amount500
	unsigned char stepLocal_0 = var_1_7;
	if (stepLocal_0 >= (var_1_6 * var_1_4)) {
		var_1_8 = ((var_1_9 - var_1_4) - var_1_3);
	}


	// From: Req8Batch160Amount500
	if (var_1_6 >= (128 + var_1_87)) {
		var_1_21 = ((var_1_22 + var_1_23) - (min ((max (var_1_24 , var_1_25)) , 499.5)));
	}


	// From: Req15Batch160Amount500
	var_1_41 = (16 + (var_1_6 + var_1_42));


	// From: Req18Batch160Amount500
	if (var_1_90) {
		var_1_47 = ((min (var_1_88 , -32)) + (var_1_42 - var_1_7));
	} else {
		var_1_47 = last_1_var_1_47;
	}


	// From: Req26Batch160Amount500
	unsigned char stepLocal_16 = var_1_52;
	signed long int stepLocal_15 = -256;
	if (stepLocal_16 > var_1_34) {
		if (stepLocal_15 >= var_1_41) {
			var_1_66 = var_1_35;
		} else {
			var_1_66 = (var_1_52 - var_1_6);
		}
	} else {
		var_1_66 = (abs (min ((var_1_51 - var_1_42) , var_1_12)));
	}


	// From: Req27Batch160Amount500
	var_1_67 = (min (var_1_3 , var_1_5));


	// From: Req33Batch160Amount500
	unsigned long int stepLocal_21 = var_1_32;
	if (stepLocal_21 <= var_1_50) {
		var_1_81 = (var_1_20 && var_1_19);
	} else {
		var_1_81 = (var_1_30 || (! var_1_20));
	}


	// From: Req34Batch160Amount500
	var_1_82 = var_1_73;


	// From: Req42Batch160Amount500
	if (var_1_30) {
		var_1_93 = var_1_19;
	}


	// From: Req43Batch160Amount500
	if (var_1_81) {
		var_1_94 = -64;
	} else {
		var_1_94 = 4;
	}


	// From: Req45Batch160Amount500
	var_1_96 = 0;


	// From: Req47Batch160Amount500
	var_1_98 = var_1_75;


	// From: Req48Batch160Amount500
	if (var_1_54) {
		var_1_99 = var_1_7;
	}


	// From: Req51Batch160Amount500
	if (var_1_91) {
		var_1_102 = var_1_42;
	} else {
		var_1_102 = var_1_65;
	}


	// From: Req53Batch160Amount500
	var_1_104 = var_1_69;


	// From: Req57Batch160Amount500
	var_1_110 = var_1_42;


	// From: Req58Batch160Amount500
	var_1_111 = var_1_30;


	// From: Req59Batch160Amount500
	var_1_112 = var_1_75;


	// From: Req32Batch160Amount500
	if (((var_1_7 - var_1_6) << var_1_5) < (var_1_34 / var_1_35)) {
		var_1_80 = ((var_1_12 - var_1_109) + var_1_62);
	}


	// From: Req4Batch160Amount500
	unsigned char stepLocal_2 = var_1_6;
	if (stepLocal_2 <= var_1_4) {
		var_1_13 = (((var_1_6 + var_1_12) - var_1_9) + var_1_80);
	}


	// From: Req3Batch160Amount500
	unsigned char stepLocal_1 = var_1_90;
	if (stepLocal_1 && var_1_111) {
		var_1_10 = (var_1_12 - var_1_4);
	}


	// From: Req5Batch160Amount500
	unsigned short int stepLocal_3 = var_1_110;
	if (var_1_6 < stepLocal_3) {
		var_1_14 = (abs (var_1_16 + 1.25));
	}


	// From: Req23Batch160Amount500
	unsigned char stepLocal_14 = var_1_35;
	if (var_1_16 > var_1_25) {
		if (stepLocal_14 >= var_1_66) {
			var_1_57 = ((var_1_58 - (var_1_50 + 25)) - var_1_52);
		} else {
			var_1_57 = var_1_42;
		}
	}


	// From: Req41Batch160Amount500
	if (var_1_93) {
		var_1_92 = last_1_var_1_92;
	}


	// From: Req46Batch160Amount500
	var_1_97 = var_1_57;


	// From: Req49Batch160Amount500
	if (var_1_111) {
		var_1_100 = -1;
	}


	// From: Req50Batch160Amount500
	if (var_1_111) {
		var_1_101 = var_1_35;
	} else {
		var_1_101 = var_1_69;
	}


	// From: Req22Batch160Amount500
	if (! (var_1_19 && var_1_111)) {
		var_1_55 = var_1_23;
	} else {
		if (var_1_68 || var_1_30) {
			if (1u >= (min (var_1_35 , var_1_40))) {
				var_1_55 = var_1_25;
			}
		} else {
			if ((var_1_5 > var_1_52) || (var_1_13 == var_1_32)) {
				var_1_55 = (abs (var_1_23 + (var_1_22 - var_1_56)));
			}
		}
	}


	// From: Req25Batch160Amount500
	if (var_1_99 <= var_1_17) {
		if (var_1_90) {
			if (var_1_32 != var_1_87) {
				var_1_60 = ((var_1_62 + var_1_63) - var_1_42);
			} else {
				var_1_60 = (var_1_51 - var_1_3);
			}
		} else {
			var_1_60 = (var_1_51 - var_1_6);
		}
	} else {
		if (var_1_24 >= (var_1_55 * (var_1_22 * var_1_29))) {
			var_1_60 = ((var_1_63 - (var_1_64 - var_1_65)) + (max (var_1_4 , (max (var_1_35 , var_1_5)))));
		} else {
			var_1_60 = ((min ((var_1_7 - var_1_42) , (var_1_62 - 32))) + (var_1_63 - var_1_50));
		}
	}


	// From: Req7Batch160Amount500
	unsigned char stepLocal_4 = var_1_12;
	if (stepLocal_4 > ((max (var_1_5 , var_1_9)) + (16 & var_1_4))) {
		if (var_1_68) {
			if (var_1_16 < (- var_1_14)) {
				var_1_18 = (var_1_81 || (var_1_19 && var_1_20));
			}
		}
	} else {
		var_1_18 = (! (! var_1_20));
	}


	// From: Req1Batch160Amount500
	if (! var_1_18) {
		var_1_1 = (var_1_3 + var_1_4);
	} else {
		var_1_1 = ((var_1_5 + (abs (var_1_6))) + (max ((min (var_1_3 , var_1_4)) , (var_1_7 - 4))));
	}


	// From: Req29Batch160Amount500
	unsigned char stepLocal_17 = var_1_7;
	if (! (var_1_58 > (256 - var_1_57))) {
		if (var_1_18) {
			if (stepLocal_17 <= (128 - (var_1_63 - var_1_64))) {
				var_1_70 = (min ((var_1_22 - var_1_56) , ((var_1_23 - var_1_72) + (49.25 - var_1_73))));
			} else {
				var_1_70 = ((var_1_74 - (var_1_75 - var_1_76)) - var_1_22);
			}
		}
	}


	// From: Req12Batch160Amount500
	signed long int stepLocal_7 = var_1_87;
	signed long int stepLocal_6 = (200 & var_1_3) + (64 - var_1_57);
	if (stepLocal_6 < var_1_6) {
		var_1_33 = var_1_34;
	} else {
		if (stepLocal_7 >= (var_1_101 / (var_1_7 + var_1_35))) {
			var_1_33 = (var_1_101 - (abs (var_1_35 + var_1_4)));
		}
	}


	// From: Req21Batch160Amount500
	if (var_1_3 == (abs (var_1_105))) {
		if (64 != (var_1_1 - var_1_13)) {
			if (((var_1_51 > var_1_10) || var_1_27) || var_1_27) {
				var_1_53 = (var_1_19 || (var_1_20 && var_1_54));
			} else {
				var_1_53 = (! var_1_30);
			}
		}
	} else {
		var_1_53 = ((! var_1_30) && (var_1_19 && var_1_54));
	}


	// From: Req37Batch160Amount500
	unsigned char stepLocal_22 = var_1_62;
	if ((~ (var_1_12 + var_1_97)) <= stepLocal_22) {
		var_1_86 = (var_1_73 - (var_1_74 - var_1_22));
	} else {
		var_1_86 = ((max ((var_1_23 + var_1_76) , var_1_75)) - (abs (var_1_73)));
	}


	// From: Req44Batch160Amount500
	if (var_1_18) {
		var_1_95 = var_1_5;
	}


	// From: Req55Batch160Amount500
	unsigned char stepLocal_26 = var_1_111;
	if ((var_1_55 > var_1_74) || stepLocal_26) {
		if (var_1_18) {
			var_1_107 = (var_1_39 + var_1_1);
		}
	} else {
		var_1_107 = (abs (var_1_88));
	}


	// From: Req17Batch160Amount500
	if (var_1_105 >= var_1_60) {
		if (var_1_60 == var_1_92) {
			var_1_44 = (max (var_1_6 , var_1_3));
		} else {
			var_1_44 = (max (var_1_99 , (var_1_9 - (var_1_39 - var_1_7))));
		}
	}


	// From: Req52Batch160Amount500
	if (var_1_90) {
		var_1_103 = var_1_44;
	} else {
		var_1_103 = var_1_104;
	}


	// From: Req20Batch160Amount500
	unsigned short int stepLocal_13 = var_1_44;
	if (var_1_97 != stepLocal_13) {
		var_1_49 = ((min ((var_1_7 - 5) , (var_1_6 + var_1_42))) + (var_1_5 + var_1_50));
	} else {
		if (var_1_22 < (abs (var_1_16 * var_1_21))) {
			var_1_49 = (min (((max (var_1_12 , var_1_51)) - (var_1_42 + var_1_50)) , var_1_4));
		} else {
			var_1_49 = ((min (var_1_12 , (max (var_1_51 , var_1_52)))) - (min (var_1_3 , var_1_6)));
		}
	}


	// From: Req31Batch160Amount500
	unsigned char stepLocal_20 = var_1_62 >= (var_1_52 - 25);
	unsigned char stepLocal_19 = var_1_65;
	if (stepLocal_19 > var_1_39) {
		if (var_1_74 >= (abs (- var_1_86))) {
			var_1_79 = (max ((var_1_76 + var_1_73) , var_1_74));
		} else {
			if (stepLocal_20 && ((abs (var_1_63)) > var_1_97)) {
				var_1_79 = (max (var_1_24 , (var_1_22 + (max (var_1_16 , var_1_73)))));
			} else {
				var_1_79 = (min ((var_1_76 - var_1_25) , (max ((var_1_22 + var_1_56) , 4.5))));
			}
		}
	} else {
		var_1_79 = (var_1_72 + var_1_56);
	}


	// From: Req24Batch160Amount500
	if ((~ 128) > var_1_42) {
		var_1_59 = (min (var_1_99 , (var_1_7 + var_1_4)));
	} else {
		if (var_1_19) {
			var_1_59 = var_1_44;
		} else {
			var_1_59 = (max (var_1_101 , var_1_88));
		}
	}


	// From: Req11Batch160Amount500
	if (var_1_25 <= var_1_79) {
		var_1_31 = (((1834338413u - var_1_9) - var_1_87) + var_1_3);
	} else {
		var_1_31 = (var_1_32 - var_1_99);
	}


	// From: Req16Batch160Amount500
	if ((- var_1_4) <= ((var_1_31 - var_1_5) | var_1_9)) {
		var_1_43 = (min (last_1_var_1_43 , (max (last_1_var_1_43 , var_1_42))));
	} else {
		var_1_43 = (var_1_5 + var_1_3);
	}


	// From: Req30Batch160Amount500
	unsigned short int stepLocal_18 = var_1_43;
	if (var_1_64 > stepLocal_18) {
		var_1_77 = var_1_78;
	}


	// From: Req19Batch160Amount500
	unsigned long int stepLocal_12 = (25 / var_1_35) & (- var_1_31);
	if (var_1_49 >= stepLocal_12) {
		var_1_48 = (var_1_42 + var_1_6);
	}


	// From: Req35Batch160Amount500
	if (! var_1_20) {
		if ((var_1_112 <= var_1_77) || var_1_53) {
			var_1_83 = ((var_1_69 + (min (var_1_6 , var_1_65))) - var_1_64);
		} else {
			var_1_83 = var_1_65;
		}
	}


	// From: Req36Batch160Amount500
	if (((max (var_1_56 , var_1_73)) - var_1_72) < var_1_77) {
		if (var_1_77 < (- var_1_75)) {
			var_1_84 = (var_1_52 - var_1_5);
		} else {
			var_1_84 = (var_1_6 + var_1_64);
		}
	} else {
		if (var_1_19 || var_1_20) {
			if ((min ((var_1_110 * var_1_31) , var_1_17)) > var_1_9) {
				var_1_84 = (((64 - var_1_69) + (var_1_65 + 8)) + (var_1_63 - var_1_50));
			} else {
				var_1_84 = var_1_7;
			}
		} else {
			var_1_84 = ((var_1_5 + var_1_65) + 25);
		}
	}


	// From: Req13Batch160Amount500
	unsigned long int stepLocal_11 = max ((max (var_1_17 , var_1_35)) , var_1_31);
	unsigned char stepLocal_10 = var_1_90;
	signed long int stepLocal_9 = var_1_12 + var_1_6;
	unsigned char stepLocal_8 = var_1_27;
	if (var_1_12 >= stepLocal_11) {
		if ((var_1_31 == var_1_32) && stepLocal_8) {
			if ((var_1_70 / var_1_29) == var_1_22) {
				if ((min (var_1_35 , var_1_97)) == stepLocal_9) {
					var_1_36 = (var_1_66 + var_1_3);
				} else {
					var_1_36 = (var_1_9 - (abs (var_1_6)));
				}
			}
		} else {
			var_1_36 = (var_1_35 + (var_1_107 + var_1_4));
		}
	} else {
		if (stepLocal_10 || var_1_68) {
			var_1_36 = (var_1_9 - (var_1_39 - var_1_35));
		} else {
			var_1_36 = (min (var_1_4 , ((var_1_35 + 32) + var_1_17)));
		}
	}


	// From: Req9Batch160Amount500
	signed long int stepLocal_5 = -128;
	if ((var_1_110 + (var_1_84 - var_1_6)) > stepLocal_5) {
		if (var_1_111) {
			var_1_26 = var_1_16;
		} else {
			var_1_26 = (min ((500.1 + var_1_16) , var_1_23));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 64);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 63);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 49150);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	assume_abort_if_not(var_1_29 != 0.0F);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32767);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 16382);
	assume_abort_if_not(var_1_58 <= 32766);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 64);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 31);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 31);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 14);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 4611686.018427383000e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854766000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 2305843.009213691400e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= -922337.2036854766000e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854766000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_89 >= -8191);
	assume_abort_if_not(var_1_89 <= 8192);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 0);
	var_1_106 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_105 = var_1_105;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((! var_1_18) ? (var_1_1 == ((unsigned char) (var_1_3 + var_1_4))) : (var_1_1 == ((unsigned char) ((var_1_5 + (abs (var_1_6))) + (max ((min (var_1_3 , var_1_4)) , (var_1_7 - 4))))))) && ((var_1_7 >= (var_1_6 * var_1_4)) ? (var_1_8 == ((unsigned short int) ((var_1_9 - var_1_4) - var_1_3))) : 1)) && ((var_1_90 && var_1_111) ? (var_1_10 == ((unsigned char) (var_1_12 - var_1_4))) : 1)) && ((var_1_6 <= var_1_4) ? (var_1_13 == ((signed long int) (((var_1_6 + var_1_12) - var_1_9) + var_1_80))) : 1)) && ((var_1_6 < var_1_110) ? (var_1_14 == ((double) (abs (var_1_16 + 1.25)))) : 1)) && ((! (var_1_88 != var_1_9)) ? (var_1_17 == ((unsigned char) (128 - var_1_7))) : (var_1_17 == ((unsigned char) (var_1_7 + (max (var_1_6 , var_1_4))))))) && ((var_1_12 > ((max (var_1_5 , var_1_9)) + (16 & var_1_4))) ? (var_1_68 ? ((var_1_16 < (- var_1_14)) ? (var_1_18 == ((unsigned char) (var_1_81 || (var_1_19 && var_1_20)))) : 1) : 1) : (var_1_18 == ((unsigned char) (! (! var_1_20)))))) && ((var_1_6 >= (128 + var_1_87)) ? (var_1_21 == ((double) ((var_1_22 + var_1_23) - (min ((max (var_1_24 , var_1_25)) , 499.5))))) : 1)) && (((var_1_110 + (var_1_84 - var_1_6)) > -128) ? (var_1_111 ? (var_1_26 == ((double) var_1_16)) : (var_1_26 == ((double) (min ((500.1 + var_1_16) , var_1_23))))) : 1)) && (((min ((last_1_var_1_87 & 2) , last_1_var_1_87)) > var_1_9) ? ((var_1_16 == (max (var_1_22 , (last_1_var_1_77 / var_1_29)))) ? (var_1_27 == ((unsigned char) (var_1_20 && (last_1_var_1_81 || var_1_19)))) : (var_1_27 == ((unsigned char) var_1_30))) : ((var_1_3 == (var_1_9 * last_1_var_1_87)) ? (var_1_27 == ((unsigned char) (! (last_1_var_1_68 && var_1_30)))) : 1))) && ((var_1_25 <= var_1_79) ? (var_1_31 == ((unsigned long int) (((1834338413u - var_1_9) - var_1_87) + var_1_3))) : (var_1_31 == ((unsigned long int) (var_1_32 - var_1_99))))) && ((((200 & var_1_3) + (64 - var_1_57)) < var_1_6) ? (var_1_33 == ((signed short int) var_1_34)) : ((var_1_87 >= (var_1_101 / (var_1_7 + var_1_35))) ? (var_1_33 == ((signed short int) (var_1_101 - (abs (var_1_35 + var_1_4))))) : 1))) && ((var_1_12 >= (max ((max (var_1_17 , var_1_35)) , var_1_31))) ? (((var_1_31 == var_1_32) && var_1_27) ? (((var_1_70 / var_1_29) == var_1_22) ? (((min (var_1_35 , var_1_97)) == (var_1_12 + var_1_6)) ? (var_1_36 == ((unsigned short int) (var_1_66 + var_1_3))) : (var_1_36 == ((unsigned short int) (var_1_9 - (abs (var_1_6)))))) : 1) : (var_1_36 == ((unsigned short int) (var_1_35 + (var_1_107 + var_1_4))))) : ((var_1_90 || var_1_68) ? (var_1_36 == ((unsigned short int) (var_1_9 - (var_1_39 - var_1_35)))) : (var_1_36 == ((unsigned short int) (min (var_1_4 , ((var_1_35 + 32) + var_1_17)))))))) && (var_1_30 ? (var_1_40 == ((unsigned short int) (min (var_1_12 , var_1_9)))) : (((var_1_24 - var_1_22) < (var_1_23 - (abs (var_1_25)))) ? (var_1_40 == ((unsigned short int) ((var_1_9 - var_1_7) - (var_1_12 + last_1_var_1_40)))) : (var_1_40 == ((unsigned short int) ((min (last_1_var_1_97 , var_1_35)) + last_1_var_1_36)))))) && (var_1_41 == ((unsigned char) (16 + (var_1_6 + var_1_42))))) && (((- var_1_4) <= ((var_1_31 - var_1_5) | var_1_9)) ? (var_1_43 == ((unsigned short int) (min (last_1_var_1_43 , (max (last_1_var_1_43 , var_1_42)))))) : (var_1_43 == ((unsigned short int) (var_1_5 + var_1_3))))) && ((var_1_105 >= var_1_60) ? ((var_1_60 == var_1_92) ? (var_1_44 == ((unsigned short int) (max (var_1_6 , var_1_3)))) : (var_1_44 == ((unsigned short int) (max (var_1_99 , (var_1_9 - (var_1_39 - var_1_7))))))) : 1)) && (var_1_90 ? (var_1_47 == ((signed short int) ((min (var_1_88 , -32)) + (var_1_42 - var_1_7)))) : (var_1_47 == ((signed short int) last_1_var_1_47)))) && ((var_1_49 >= ((25 / var_1_35) & (- var_1_31))) ? (var_1_48 == ((signed char) (var_1_42 + var_1_6))) : 1)) && ((var_1_97 != var_1_44) ? (var_1_49 == ((unsigned char) ((min ((var_1_7 - 5) , (var_1_6 + var_1_42))) + (var_1_5 + var_1_50)))) : ((var_1_22 < (abs (var_1_16 * var_1_21))) ? (var_1_49 == ((unsigned char) (min (((max (var_1_12 , var_1_51)) - (var_1_42 + var_1_50)) , var_1_4)))) : (var_1_49 == ((unsigned char) ((min (var_1_12 , (max (var_1_51 , var_1_52)))) - (min (var_1_3 , var_1_6)))))))) && ((var_1_3 == (abs (var_1_105))) ? ((64 != (var_1_1 - var_1_13)) ? ((((var_1_51 > var_1_10) || var_1_27) || var_1_27) ? (var_1_53 == ((unsigned char) (var_1_19 || (var_1_20 && var_1_54)))) : (var_1_53 == ((unsigned char) (! var_1_30)))) : 1) : (var_1_53 == ((unsigned char) ((! var_1_30) && (var_1_19 && var_1_54)))))) && ((! (var_1_19 && var_1_111)) ? (var_1_55 == ((double) var_1_23)) : ((var_1_68 || var_1_30) ? ((1u >= (min (var_1_35 , var_1_40))) ? (var_1_55 == ((double) var_1_25)) : 1) : (((var_1_5 > var_1_52) || (var_1_13 == var_1_32)) ? (var_1_55 == ((double) (abs (var_1_23 + (var_1_22 - var_1_56))))) : 1)))) && ((var_1_16 > var_1_25) ? ((var_1_35 >= var_1_66) ? (var_1_57 == ((signed short int) ((var_1_58 - (var_1_50 + 25)) - var_1_52))) : (var_1_57 == ((signed short int) var_1_42))) : 1)) && (((~ 128) > var_1_42) ? (var_1_59 == ((unsigned long int) (min (var_1_99 , (var_1_7 + var_1_4))))) : (var_1_19 ? (var_1_59 == ((unsigned long int) var_1_44)) : (var_1_59 == ((unsigned long int) (max (var_1_101 , var_1_88))))))) && ((var_1_99 <= var_1_17) ? (var_1_90 ? ((var_1_32 != var_1_87) ? (var_1_60 == ((unsigned char) ((var_1_62 + var_1_63) - var_1_42))) : (var_1_60 == ((unsigned char) (var_1_51 - var_1_3)))) : (var_1_60 == ((unsigned char) (var_1_51 - var_1_6)))) : ((var_1_24 >= (var_1_55 * (var_1_22 * var_1_29))) ? (var_1_60 == ((unsigned char) ((var_1_63 - (var_1_64 - var_1_65)) + (max (var_1_4 , (max (var_1_35 , var_1_5))))))) : (var_1_60 == ((unsigned char) ((min ((var_1_7 - var_1_42) , (var_1_62 - 32))) + (var_1_63 - var_1_50))))))) && ((var_1_52 > var_1_34) ? ((-256 >= var_1_41) ? (var_1_66 == ((unsigned char) var_1_35)) : (var_1_66 == ((unsigned char) (var_1_52 - var_1_6)))) : (var_1_66 == ((unsigned char) (abs (min ((var_1_51 - var_1_42) , var_1_12))))))) && (var_1_67 == ((signed short int) (min (var_1_3 , var_1_5))))) && (((min (var_1_32 , last_1_var_1_103)) > 10u) ? (var_1_68 == ((unsigned char) (((var_1_58 >> var_1_69) > last_1_var_1_96) && var_1_30))) : 1)) && ((! (var_1_58 > (256 - var_1_57))) ? (var_1_18 ? ((var_1_7 <= (128 - (var_1_63 - var_1_64))) ? (var_1_70 == ((double) (min ((var_1_22 - var_1_56) , ((var_1_23 - var_1_72) + (49.25 - var_1_73)))))) : (var_1_70 == ((double) ((var_1_74 - (var_1_75 - var_1_76)) - var_1_22)))) : 1) : 1)) && ((var_1_64 > var_1_43) ? (var_1_77 == ((double) var_1_78)) : 1)) && ((var_1_65 > var_1_39) ? ((var_1_74 >= (abs (- var_1_86))) ? (var_1_79 == ((double) (max ((var_1_76 + var_1_73) , var_1_74)))) : (((var_1_62 >= (var_1_52 - 25)) && ((abs (var_1_63)) > var_1_97)) ? (var_1_79 == ((double) (max (var_1_24 , (var_1_22 + (max (var_1_16 , var_1_73))))))) : (var_1_79 == ((double) (min ((var_1_76 - var_1_25) , (max ((var_1_22 + var_1_56) , 4.5)))))))) : (var_1_79 == ((double) (var_1_72 + var_1_56))))) && ((((var_1_7 - var_1_6) << var_1_5) < (var_1_34 / var_1_35)) ? (var_1_80 == ((signed short int) ((var_1_12 - var_1_109) + var_1_62))) : 1)) && ((var_1_32 <= var_1_50) ? (var_1_81 == ((unsigned char) (var_1_20 && var_1_19))) : (var_1_81 == ((unsigned char) (var_1_30 || (! var_1_20)))))) && (var_1_82 == ((float) var_1_73))) && ((! var_1_20) ? (((var_1_112 <= var_1_77) || var_1_53) ? (var_1_83 == ((signed char) ((var_1_69 + (min (var_1_6 , var_1_65))) - var_1_64))) : (var_1_83 == ((signed char) var_1_65))) : 1)) && ((((max (var_1_56 , var_1_73)) - var_1_72) < var_1_77) ? ((var_1_77 < (- var_1_75)) ? (var_1_84 == ((unsigned char) (var_1_52 - var_1_5))) : (var_1_84 == ((unsigned char) (var_1_6 + var_1_64)))) : ((var_1_19 || var_1_20) ? (((min ((var_1_110 * var_1_31) , var_1_17)) > var_1_9) ? (var_1_84 == ((unsigned char) (((64 - var_1_69) + (var_1_65 + 8)) + (var_1_63 - var_1_50)))) : (var_1_84 == ((unsigned char) var_1_7))) : (var_1_84 == ((unsigned char) ((var_1_5 + var_1_65) + 25)))))) && (((~ (var_1_12 + var_1_97)) <= var_1_62) ? (var_1_86 == ((double) (var_1_73 - (var_1_74 - var_1_22)))) : (var_1_86 == ((double) ((max ((var_1_23 + var_1_76) , var_1_75)) - (abs (var_1_73))))))) && ((var_1_69 < last_1_var_1_36) ? (var_1_87 == ((signed long int) (last_1_var_1_67 + (10 + 2)))) : ((var_1_51 <= (last_1_var_1_87 * last_1_var_1_59)) ? (var_1_87 == ((signed long int) ((last_1_var_1_57 + var_1_35) - ((last_1_var_1_80 + last_1_var_1_105) + last_1_var_1_96)))) : 1))) && (((var_1_52 <= var_1_12) && (last_1_var_1_59 != (var_1_9 - last_1_var_1_13))) ? (var_1_88 == ((signed short int) ((var_1_89 + var_1_63) + ((last_1_var_1_41 + last_1_var_1_88) + last_1_var_1_13)))) : (var_1_88 == ((signed short int) last_1_var_1_88)))) && (var_1_27 ? (var_1_90 == ((unsigned char) var_1_91)) : (var_1_90 == ((unsigned char) 0)))) && (var_1_93 ? (var_1_92 == ((signed short int) last_1_var_1_92)) : 1)) && (var_1_30 ? (var_1_93 == ((unsigned char) var_1_19)) : 1)) && (var_1_81 ? (var_1_94 == ((signed char) -64)) : (var_1_94 == ((signed char) 4)))) && (var_1_18 ? (var_1_95 == ((signed char) var_1_5)) : 1)) && (var_1_96 == ((signed long int) 0))) && (var_1_97 == ((unsigned long int) var_1_57))) && (var_1_98 == ((float) var_1_75))) && (var_1_54 ? (var_1_99 == ((unsigned char) var_1_7)) : 1)) && (var_1_111 ? (var_1_100 == ((signed char) -1)) : 1)) && (var_1_111 ? (var_1_101 == ((unsigned char) var_1_35)) : (var_1_101 == ((unsigned char) var_1_69)))) && (var_1_91 ? (var_1_102 == ((signed char) var_1_42)) : (var_1_102 == ((signed char) var_1_65)))) && (var_1_90 ? (var_1_103 == ((unsigned long int) var_1_44)) : (var_1_103 == ((unsigned long int) var_1_104)))) && (var_1_104 == ((unsigned char) var_1_69))) && (var_1_27 ? (var_1_105 == ((unsigned short int) var_1_106)) : 1)) && (((var_1_55 > var_1_74) || var_1_111) ? (var_1_18 ? (var_1_107 == ((unsigned short int) (var_1_39 + var_1_1))) : 1) : (var_1_107 == ((unsigned short int) (abs (var_1_88)))))) && (var_1_109 == ((unsigned short int) var_1_40))) && (var_1_110 == ((unsigned short int) var_1_42))) && (var_1_111 == ((unsigned char) var_1_30))) && (var_1_112 == ((double) var_1_75))
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
