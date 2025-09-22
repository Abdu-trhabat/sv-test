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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 15.175;
double var_1_8 = 99.5;
double var_1_9 = 256.25;
double var_1_10 = 255.875;
double var_1_11 = 127.3;
signed char var_1_12 = 1;
signed char var_1_13 = -5;
signed char var_1_14 = -8;
signed char var_1_15 = 8;
signed char var_1_16 = 0;
signed char var_1_17 = 32;
signed char var_1_18 = 2;
signed long int var_1_19 = 16;
signed long int var_1_20 = 1372610676;
signed long int var_1_21 = 32;
signed long int var_1_22 = 1653671342;
signed long int var_1_23 = 25;
signed long int var_1_24 = 128;
unsigned short int var_1_25 = 128;
float var_1_26 = 32.6;
float var_1_27 = 16.75;
unsigned short int var_1_28 = 2;
signed long int var_1_29 = 0;
unsigned long int var_1_30 = 10;
unsigned long int var_1_31 = 1522051026;
signed char var_1_32 = -128;
signed long int var_1_33 = 500;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 40617;
signed char var_1_36 = 2;
signed char var_1_37 = 25;
signed char var_1_38 = 64;
signed char var_1_39 = 100;
signed char var_1_40 = 0;
signed short int var_1_41 = -5;
signed char var_1_42 = -1;
unsigned long int var_1_43 = 256;
unsigned long int var_1_44 = 5;
unsigned long int var_1_45 = 1478408228;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
double var_1_49 = 128.5;
double var_1_50 = 99.25;
unsigned short int var_1_51 = 64;
double var_1_53 = 9.25;
float var_1_54 = 15.9;
double var_1_55 = 24.625;
double var_1_56 = 4.75;
signed short int var_1_57 = 100;
signed char var_1_58 = -100;
float var_1_59 = 10.6;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
signed long int var_1_64 = -8;
signed char var_1_65 = -8;
signed long int var_1_66 = 64;
unsigned short int var_1_67 = 2;
unsigned char var_1_68 = 0;
unsigned long int var_1_69 = 0;
unsigned char var_1_70 = 128;
signed short int var_1_71 = 128;
signed short int var_1_72 = -16;
signed char var_1_73 = 100;
unsigned long int var_1_74 = 8;
unsigned long int var_1_75 = 4248569470;
unsigned long int var_1_76 = 1000000000;
unsigned short int var_1_77 = 2;
unsigned short int var_1_78 = 5;
signed short int var_1_79 = -4;
unsigned long int var_1_81 = 4;
signed long int var_1_82 = -4;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 5;
unsigned short int var_1_86 = 64;
unsigned short int var_1_87 = 128;
signed long int var_1_88 = 4;
signed long int var_1_89 = 1000000000;
signed long int var_1_90 = -5;
signed long int var_1_91 = -64;
signed short int var_1_92 = -500;
unsigned char var_1_93 = 0;
signed short int var_1_94 = 0;
signed long int var_1_97 = 10;
unsigned char var_1_98 = 25;
unsigned short int var_1_99 = 2;
double var_1_100 = 100.4;
unsigned char var_1_101 = 50;
signed long int var_1_102 = 16;
signed long int var_1_103 = -4;
unsigned char var_1_104 = 0;
signed char var_1_105 = -64;
signed short int var_1_106 = -128;
signed long int var_1_107 = 0;
unsigned long int var_1_108 = 0;
double var_1_109 = 1.8;
unsigned char var_1_110 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 15.175;
signed long int last_1_var_1_19 = 16;
signed long int last_1_var_1_29 = 0;
unsigned long int last_1_var_1_30 = 10;
signed short int last_1_var_1_57 = 100;
unsigned char last_1_var_1_60 = 0;
signed long int last_1_var_1_64 = -8;
signed short int last_1_var_1_71 = 128;
unsigned short int last_1_var_1_77 = 2;
unsigned char last_1_var_1_83 = 1;
unsigned short int last_1_var_1_86 = 64;
signed long int last_1_var_1_90 = -5;
unsigned char last_1_var_1_110 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch118Amount500
	if ((last_1_var_1_30 & var_1_28) <= var_1_17) {
		var_1_30 = ((min ((var_1_22 - last_1_var_1_86) , var_1_21)) + (var_1_31 - var_1_15));
	}


	// From: Req18Batch118Amount500
	if ((last_1_var_1_29 * -5) >= (10000000 - 128)) {
		if (last_1_var_1_64 < last_1_var_1_19) {
			var_1_51 = (abs (var_1_28));
		} else {
			var_1_51 = (var_1_35 - var_1_16);
		}
	} else {
		var_1_51 = (max ((var_1_40 + var_1_16) , var_1_18));
	}


	// From: Req43Batch118Amount500
	if (last_1_var_1_110) {
		if (var_1_9 <= (- var_1_8)) {
			var_1_91 = last_1_var_1_77;
		}
	} else {
		var_1_91 = (min ((var_1_15 - last_1_var_1_90) , last_1_var_1_71));
	}


	// From: Req22Batch118Amount500
	if (last_1_var_1_57 >= (-2 / var_1_39)) {
		var_1_57 = (var_1_51 + (abs (var_1_91)));
	}


	// From: Req15Batch118Amount500
	if (last_1_var_1_83) {
		if (last_1_var_1_60) {
			var_1_44 = (min (var_1_18 , (abs (var_1_28))));
		} else {
			var_1_44 = (max (((var_1_22 + var_1_45) - (var_1_23 + var_1_16)) , (min ((min (var_1_37 , 50u)) , var_1_17))));
		}
	} else {
		var_1_44 = (abs ((var_1_39 + 32u) + 4u));
	}


	// From: Req19Batch118Amount500
	if (var_1_28 >= (var_1_44 % var_1_39)) {
		var_1_53 = (min (var_1_8 , var_1_11));
	}


	// From: Req2Batch118Amount500
	if (! (0.25 > var_1_8)) {
		var_1_12 = (max ((max (var_1_13 , var_1_14)) , ((var_1_15 + var_1_16) - (max (var_1_17 , var_1_18)))));
	} else {
		var_1_12 = (var_1_16 + var_1_15);
	}


	// From: Req8Batch118Amount500
	if ((~ (var_1_13 * var_1_18)) < var_1_15) {
		var_1_32 = (min (var_1_17 , ((min (var_1_18 , 25)) - var_1_15)));
	}


	// From: Req10Batch118Amount500
	var_1_34 = (abs (max ((var_1_35 - var_1_18) , var_1_16)));


	// From: Req11Batch118Amount500
	if (var_1_20 > (var_1_13 * (var_1_14 / var_1_22))) {
		var_1_36 = (((10 + var_1_37) + var_1_15) - (max (var_1_17 , var_1_18)));
	} else {
		var_1_36 = ((min ((var_1_38 - var_1_15) , var_1_37)) - ((var_1_39 - var_1_40) - var_1_16));
	}


	// From: Req16Batch118Amount500
	var_1_46 = (var_1_47 && var_1_48);


	// From: Req20Batch118Amount500
	var_1_54 = (min (var_1_9 , var_1_50));


	// From: Req27Batch118Amount500
	var_1_67 = (min ((max (var_1_17 , var_1_38)) , (4 + var_1_39)));


	// From: Req28Batch118Amount500
	if (var_1_27 <= (var_1_9 * var_1_53)) {
		var_1_68 = ((var_1_37 + var_1_40) + var_1_39);
	}


	// From: Req47Batch118Amount500
	if (var_1_62) {
		var_1_98 = var_1_38;
	} else {
		var_1_98 = var_1_16;
	}


	// From: Req49Batch118Amount500
	var_1_100 = var_1_50;


	// From: Req51Batch118Amount500
	if (var_1_61) {
		var_1_102 = var_1_103;
	} else {
		var_1_102 = var_1_15;
	}


	// From: Req52Batch118Amount500
	var_1_104 = var_1_62;


	// From: Req53Batch118Amount500
	var_1_105 = -32;


	// From: Req54Batch118Amount500
	if (var_1_47) {
		var_1_106 = -50;
	} else {
		var_1_106 = var_1_16;
	}


	// From: Req56Batch118Amount500
	var_1_108 = var_1_97;


	// From: Req57Batch118Amount500
	var_1_109 = var_1_9;


	// From: Req58Batch118Amount500
	var_1_110 = var_1_48;


	// From: Req45Batch118Amount500
	if (var_1_89 != var_1_23) {
		if (var_1_44 != var_1_91) {
			if (var_1_46) {
				var_1_93 = (var_1_47 && ((var_1_91 != var_1_108) || (var_1_62 || var_1_48)));
			} else {
				if (128 < var_1_108) {
					var_1_93 = (var_1_62 || var_1_61);
				}
			}
		} else {
			var_1_93 = (var_1_62 || (! var_1_48));
		}
	}


	// From: Req5Batch118Amount500
	if ((var_1_109 / (max (var_1_26 , var_1_27))) < (var_1_9 - var_1_8)) {
		var_1_25 = (var_1_18 + (var_1_28 + (max (var_1_15 , var_1_16))));
	} else {
		if (var_1_46) {
			var_1_25 = var_1_16;
		}
	}


	// From: Req12Batch118Amount500
	if (var_1_46) {
		var_1_41 = (var_1_37 - var_1_39);
	} else {
		var_1_41 = (min (var_1_18 , (abs (var_1_16))));
	}


	// From: Req14Batch118Amount500
	unsigned char stepLocal_2 = ! var_1_46;
	if ((var_1_14 < var_1_22) && stepLocal_2) {
		var_1_43 = (min (var_1_16 , (var_1_39 + (var_1_23 + var_1_28))));
	}


	// From: Req24Batch118Amount500
	if (var_1_109 < var_1_9) {
		var_1_59 = var_1_8;
	}


	// From: Req25Batch118Amount500
	if (var_1_16 == var_1_21) {
		if (last_1_var_1_60 || var_1_110) {
			var_1_60 = (var_1_47 && (var_1_110 || (! var_1_61)));
		} else {
			var_1_60 = ((var_1_47 && var_1_61) || (var_1_62 || var_1_63));
		}
	} else {
		var_1_60 = var_1_63;
	}


	// From: Req33Batch118Amount500
	if ((var_1_43 * (var_1_37 - var_1_16)) <= var_1_28) {
		if (var_1_93) {
			var_1_74 = (max (var_1_15 , var_1_31));
		}
	} else {
		var_1_74 = (var_1_75 - ((var_1_76 - var_1_35) + (var_1_17 + 256u)));
	}


	// From: Req38Batch118Amount500
	if (! var_1_110) {
		var_1_82 = (var_1_16 + var_1_72);
	}


	// From: Req48Batch118Amount500
	if (var_1_110) {
		var_1_99 = var_1_40;
	} else {
		var_1_99 = 16;
	}


	// From: Req55Batch118Amount500
	unsigned char stepLocal_22 = (var_1_23 <= var_1_91) && var_1_48;
	if (stepLocal_22 || var_1_104) {
		var_1_107 = (var_1_102 - (abs (var_1_108)));
	} else {
		var_1_107 = var_1_28;
	}


	// From: Req17Batch118Amount500
	unsigned char stepLocal_6 = var_1_47;
	unsigned char stepLocal_5 = var_1_46;
	signed char stepLocal_4 = var_1_15;
	signed long int stepLocal_3 = 2;
	if (stepLocal_3 <= var_1_21) {
		if (var_1_110) {
			if (stepLocal_6 || var_1_48) {
				var_1_49 = ((5.4 + var_1_50) - var_1_9);
			}
		} else {
			if (stepLocal_4 >= ((8 % var_1_39) / var_1_38)) {
				var_1_49 = (max (var_1_11 , var_1_8));
			} else {
				if (var_1_93 || stepLocal_5) {
					var_1_49 = var_1_50;
				}
			}
		}
	}


	// From: Req3Batch118Amount500
	if (var_1_11 < var_1_59) {
		var_1_19 = ((var_1_20 - var_1_18) - var_1_21);
	} else {
		var_1_19 = (((var_1_17 + var_1_18) + var_1_16) - ((max (1340289486 , var_1_22)) - (var_1_15 + var_1_23)));
	}


	// From: Req13Batch118Amount500
	if (var_1_93) {
		if (var_1_93) {
			if (var_1_82 > var_1_35) {
				var_1_42 = (max (var_1_14 , -25));
			} else {
				var_1_42 = (var_1_15 - 1);
			}
		}
	} else {
		var_1_42 = ((var_1_37 + var_1_40) + -32);
	}


	// From: Req26Batch118Amount500
	signed long int stepLocal_9 = (max (var_1_16 , var_1_39)) << (abs (var_1_65));
	signed long int stepLocal_8 = var_1_105 / (min (var_1_39 , var_1_35));
	if ((max (var_1_40 , 16)) == stepLocal_8) {
		if (var_1_15 < stepLocal_9) {
			var_1_64 = (max (var_1_19 , ((var_1_18 + var_1_37) - var_1_66)));
		}
	} else {
		var_1_64 = ((max (var_1_38 , (1000000 - var_1_40))) + var_1_13);
	}


	// From: Req37Batch118Amount500
	if (var_1_110) {
		var_1_81 = (((max (var_1_82 , var_1_67)) + var_1_28) + ((1838759171u - var_1_17) - 8u));
	} else {
		var_1_81 = (max (var_1_28 , var_1_40));
	}


	// From: Req42Batch118Amount500
	unsigned char stepLocal_18 = var_1_110;
	if (var_1_48 || stepLocal_18) {
		var_1_90 = (var_1_99 + var_1_35);
	}


	// From: Req40Batch118Amount500
	if (var_1_61 || var_1_46) {
		if (var_1_30 > var_1_75) {
			var_1_86 = var_1_38;
		}
	} else {
		if (((var_1_40 + -32) | var_1_16) != var_1_81) {
			var_1_86 = (max ((min ((var_1_17 + var_1_38) , var_1_16)) , (max ((var_1_18 + var_1_40) , var_1_87))));
		}
	}


	// From: Req41Batch118Amount500
	if ((- var_1_25) != var_1_86) {
		var_1_88 = (var_1_40 + (64 - (var_1_89 - var_1_86)));
	} else {
		if (var_1_46) {
			var_1_88 = (min ((max (var_1_64 , var_1_35)) , var_1_12));
		} else {
			var_1_88 = (var_1_43 - var_1_51);
		}
	}


	// From: Req4Batch118Amount500
	signed char stepLocal_1 = var_1_14;
	signed long int stepLocal_0 = var_1_23;
	if ((max (var_1_15 , var_1_18)) <= stepLocal_0) {
		if (var_1_100 >= (min (var_1_11 , var_1_49))) {
			var_1_24 = (max (var_1_15 , var_1_22));
		}
	} else {
		if (stepLocal_1 > (min (var_1_102 , var_1_20))) {
			var_1_24 = (min (var_1_16 , var_1_14));
		} else {
			var_1_24 = var_1_17;
		}
	}


	// From: Req29Batch118Amount500
	unsigned char stepLocal_11 = var_1_62;
	unsigned char stepLocal_10 = var_1_47 || var_1_61;
	if (var_1_110 || stepLocal_10) {
		if ((var_1_90 > var_1_28) && stepLocal_11) {
			var_1_69 = (min (var_1_39 , (var_1_18 + var_1_40)));
		}
	} else {
		if (var_1_63) {
			var_1_69 = (max ((var_1_24 + var_1_15) , var_1_28));
		} else {
			var_1_69 = var_1_91;
		}
	}


	// From: Req31Batch118Amount500
	if (var_1_53 > var_1_59) {
		if (((8 / var_1_35) | var_1_24) <= var_1_69) {
			var_1_71 = (var_1_17 + (var_1_69 + var_1_57));
		} else {
			var_1_71 = (min (var_1_37 , var_1_72));
		}
	} else {
		var_1_71 = (200 + var_1_15);
	}


	// From: Req9Batch118Amount500
	var_1_33 = (var_1_105 + var_1_71);


	// From: Req21Batch118Amount500
	if (var_1_35 < (- var_1_33)) {
		var_1_55 = (var_1_56 - (max ((8.142340185925241E18 - var_1_50) , var_1_8)));
	}


	// From: Req23Batch118Amount500
	unsigned long int stepLocal_7 = var_1_69;
	if (stepLocal_7 > var_1_31) {
		var_1_58 = (max (var_1_39 , var_1_38));
	}


	// From: Req30Batch118Amount500
	if ((var_1_66 / var_1_38) == ((var_1_65 + var_1_24) ^ var_1_13)) {
		var_1_70 = (min (32 , var_1_18));
	}


	// From: Req32Batch118Amount500
	unsigned short int stepLocal_13 = var_1_34;
	unsigned short int stepLocal_12 = var_1_51;
	if (var_1_60) {
		var_1_73 = ((min (var_1_17 , 100)) - (min (var_1_18 , 25)));
	} else {
		if ((var_1_81 - var_1_39) < stepLocal_12) {
			if (stepLocal_13 < ((- var_1_90) | var_1_39)) {
				var_1_73 = (abs (var_1_16));
			} else {
				var_1_73 = (var_1_40 + 50);
			}
		} else {
			if (! var_1_104) {
				var_1_73 = ((var_1_37 + var_1_65) + (min (var_1_40 , var_1_16)));
			} else {
				var_1_73 = ((var_1_65 + (var_1_40 - var_1_37)) + var_1_16);
			}
		}
	}


	// From: Req34Batch118Amount500
	signed long int stepLocal_14 = var_1_102;
	if (var_1_108 >= stepLocal_14) {
		var_1_77 = (max (var_1_17 , var_1_90));
	}


	// From: Req35Batch118Amount500
	signed char stepLocal_16 = var_1_38;
	unsigned char stepLocal_15 = var_1_48;
	if (stepLocal_15 || (var_1_77 > var_1_30)) {
		if (! (! var_1_110)) {
			if (stepLocal_16 < var_1_45) {
				var_1_78 = (var_1_35 - var_1_17);
			}
		}
	}


	// From: Req44Batch118Amount500
	unsigned long int stepLocal_20 = var_1_74 * var_1_25;
	unsigned long int stepLocal_19 = var_1_69;
	if (2 >= stepLocal_20) {
		var_1_92 = (((min (var_1_15 , var_1_18)) + (max (var_1_84 , var_1_13))) + var_1_81);
	} else {
		if (stepLocal_19 >= var_1_13) {
			var_1_92 = (min (var_1_15 , (var_1_18 + var_1_16)));
		} else {
			var_1_92 = (2 - (abs (var_1_18)));
		}
	}


	// From: Req46Batch118Amount500
	unsigned long int stepLocal_21 = var_1_38 + var_1_69;
	if (stepLocal_21 >= (var_1_30 >> var_1_97)) {
		if (! (var_1_17 > var_1_65)) {
			if (var_1_110) {
				var_1_94 = var_1_107;
			} else {
				var_1_94 = var_1_30;
			}
		} else {
			var_1_94 = var_1_30;
		}
	} else {
		var_1_94 = var_1_84;
	}


	// From: Req39Batch118Amount500
	if (((var_1_88 / var_1_39) / (max (var_1_38 , var_1_84))) > (var_1_69 / (max (32 , var_1_31)))) {
		var_1_83 = (var_1_48 && var_1_47);
	} else {
		if (-5 <= var_1_34) {
			var_1_83 = (var_1_62 && var_1_61);
		} else {
			if (var_1_100 != (var_1_8 - var_1_56)) {
				var_1_83 = ((var_1_9 == (var_1_8 - var_1_56)) && var_1_62);
			} else {
				if ((var_1_44 + var_1_35) < var_1_31) {
					var_1_83 = ((! 0) && var_1_48);
				} else {
					var_1_83 = (var_1_47 && (! var_1_63));
				}
			}
		}
	}


	// From: Req6Batch118Amount500
	if (var_1_83) {
		var_1_29 = var_1_20;
	} else {
		if (var_1_83) {
			var_1_29 = (var_1_21 - var_1_17);
		} else {
			var_1_29 = var_1_23;
		}
	}


	// From: Req1Batch118Amount500
	if ((min (var_1_54 , (last_1_var_1_1 * var_1_54))) >= var_1_55) {
		if (var_1_60) {
			if (! var_1_110) {
				var_1_1 = (min (8.125 , (var_1_8 - var_1_9)));
			}
		}
	} else {
		var_1_1 = (abs (abs (var_1_10 + var_1_11)));
	}


	// From: Req36Batch118Amount500
	signed long int stepLocal_17 = var_1_25 + (var_1_58 + var_1_92);
	if (stepLocal_17 < ((var_1_20 / var_1_45) * (abs (var_1_18)))) {
		var_1_79 = (var_1_39 - var_1_40);
	} else {
		var_1_79 = (min (var_1_38 , (var_1_15 + var_1_17)));
	}


	// From: Req50Batch118Amount500
	if (var_1_83) {
		var_1_101 = var_1_40;
	} else {
		var_1_101 = var_1_17;
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 1073741822);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 1073741823);
	assume_abort_if_not(var_1_22 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 536870911);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16384);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 62);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 94);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741824);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -24);
	assume_abort_if_not(var_1_65 <= 24);
	var_1_66 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 2147483646);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= -32767);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 2147483647);
	assume_abort_if_not(var_1_75 <= 4294967294);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 536870912);
	assume_abort_if_not(var_1_76 <= 1073741824);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 255);
	assume_abort_if_not(var_1_84 != 0);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 65534);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= 536870911);
	assume_abort_if_not(var_1_89 <= 1073741823);
	var_1_97 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_97 >= 1);
	assume_abort_if_not(var_1_97 <= 31);
	var_1_103 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_103 >= -2147483647);
	assume_abort_if_not(var_1_103 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_110 = var_1_110;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((min (var_1_54 , (last_1_var_1_1 * var_1_54))) >= var_1_55) ? (var_1_60 ? ((! var_1_110) ? (var_1_1 == ((double) (min (8.125 , (var_1_8 - var_1_9))))) : 1) : 1) : (var_1_1 == ((double) (abs (abs (var_1_10 + var_1_11)))))) && ((! (0.25 > var_1_8)) ? (var_1_12 == ((signed char) (max ((max (var_1_13 , var_1_14)) , ((var_1_15 + var_1_16) - (max (var_1_17 , var_1_18))))))) : (var_1_12 == ((signed char) (var_1_16 + var_1_15))))) && ((var_1_11 < var_1_59) ? (var_1_19 == ((signed long int) ((var_1_20 - var_1_18) - var_1_21))) : (var_1_19 == ((signed long int) (((var_1_17 + var_1_18) + var_1_16) - ((max (1340289486 , var_1_22)) - (var_1_15 + var_1_23))))))) && (((max (var_1_15 , var_1_18)) <= var_1_23) ? ((var_1_100 >= (min (var_1_11 , var_1_49))) ? (var_1_24 == ((signed long int) (max (var_1_15 , var_1_22)))) : 1) : ((var_1_14 > (min (var_1_102 , var_1_20))) ? (var_1_24 == ((signed long int) (min (var_1_16 , var_1_14)))) : (var_1_24 == ((signed long int) var_1_17))))) && (((var_1_109 / (max (var_1_26 , var_1_27))) < (var_1_9 - var_1_8)) ? (var_1_25 == ((unsigned short int) (var_1_18 + (var_1_28 + (max (var_1_15 , var_1_16)))))) : (var_1_46 ? (var_1_25 == ((unsigned short int) var_1_16)) : 1))) && (var_1_83 ? (var_1_29 == ((signed long int) var_1_20)) : (var_1_83 ? (var_1_29 == ((signed long int) (var_1_21 - var_1_17))) : (var_1_29 == ((signed long int) var_1_23))))) && (((last_1_var_1_30 & var_1_28) <= var_1_17) ? (var_1_30 == ((unsigned long int) ((min ((var_1_22 - last_1_var_1_86) , var_1_21)) + (var_1_31 - var_1_15)))) : 1)) && (((~ (var_1_13 * var_1_18)) < var_1_15) ? (var_1_32 == ((signed char) (min (var_1_17 , ((min (var_1_18 , 25)) - var_1_15))))) : 1)) && (var_1_33 == ((signed long int) (var_1_105 + var_1_71)))) && (var_1_34 == ((unsigned short int) (abs (max ((var_1_35 - var_1_18) , var_1_16)))))) && ((var_1_20 > (var_1_13 * (var_1_14 / var_1_22))) ? (var_1_36 == ((signed char) (((10 + var_1_37) + var_1_15) - (max (var_1_17 , var_1_18))))) : (var_1_36 == ((signed char) ((min ((var_1_38 - var_1_15) , var_1_37)) - ((var_1_39 - var_1_40) - var_1_16)))))) && (var_1_46 ? (var_1_41 == ((signed short int) (var_1_37 - var_1_39))) : (var_1_41 == ((signed short int) (min (var_1_18 , (abs (var_1_16)))))))) && (var_1_93 ? (var_1_93 ? ((var_1_82 > var_1_35) ? (var_1_42 == ((signed char) (max (var_1_14 , -25)))) : (var_1_42 == ((signed char) (var_1_15 - 1)))) : 1) : (var_1_42 == ((signed char) ((var_1_37 + var_1_40) + -32))))) && (((var_1_14 < var_1_22) && (! var_1_46)) ? (var_1_43 == ((unsigned long int) (min (var_1_16 , (var_1_39 + (var_1_23 + var_1_28)))))) : 1)) && (last_1_var_1_83 ? (last_1_var_1_60 ? (var_1_44 == ((unsigned long int) (min (var_1_18 , (abs (var_1_28)))))) : (var_1_44 == ((unsigned long int) (max (((var_1_22 + var_1_45) - (var_1_23 + var_1_16)) , (min ((min (var_1_37 , 50u)) , var_1_17))))))) : (var_1_44 == ((unsigned long int) (abs ((var_1_39 + 32u) + 4u)))))) && (var_1_46 == ((unsigned char) (var_1_47 && var_1_48)))) && ((2 <= var_1_21) ? (var_1_110 ? ((var_1_47 || var_1_48) ? (var_1_49 == ((double) ((5.4 + var_1_50) - var_1_9))) : 1) : ((var_1_15 >= ((8 % var_1_39) / var_1_38)) ? (var_1_49 == ((double) (max (var_1_11 , var_1_8)))) : ((var_1_93 || var_1_46) ? (var_1_49 == ((double) var_1_50)) : 1))) : 1)) && (((last_1_var_1_29 * -5) >= (10000000 - 128)) ? ((last_1_var_1_64 < last_1_var_1_19) ? (var_1_51 == ((unsigned short int) (abs (var_1_28)))) : (var_1_51 == ((unsigned short int) (var_1_35 - var_1_16)))) : (var_1_51 == ((unsigned short int) (max ((var_1_40 + var_1_16) , var_1_18)))))) && ((var_1_28 >= (var_1_44 % var_1_39)) ? (var_1_53 == ((double) (min (var_1_8 , var_1_11)))) : 1)) && (var_1_54 == ((float) (min (var_1_9 , var_1_50))))) && ((var_1_35 < (- var_1_33)) ? (var_1_55 == ((double) (var_1_56 - (max ((8.142340185925241E18 - var_1_50) , var_1_8))))) : 1)) && ((last_1_var_1_57 >= (-2 / var_1_39)) ? (var_1_57 == ((signed short int) (var_1_51 + (abs (var_1_91))))) : 1)) && ((var_1_69 > var_1_31) ? (var_1_58 == ((signed char) (max (var_1_39 , var_1_38)))) : 1)) && ((var_1_109 < var_1_9) ? (var_1_59 == ((float) var_1_8)) : 1)) && ((var_1_16 == var_1_21) ? ((last_1_var_1_60 || var_1_110) ? (var_1_60 == ((unsigned char) (var_1_47 && (var_1_110 || (! var_1_61))))) : (var_1_60 == ((unsigned char) ((var_1_47 && var_1_61) || (var_1_62 || var_1_63))))) : (var_1_60 == ((unsigned char) var_1_63)))) && (((max (var_1_40 , 16)) == (var_1_105 / (min (var_1_39 , var_1_35)))) ? ((var_1_15 < ((max (var_1_16 , var_1_39)) << (abs (var_1_65)))) ? (var_1_64 == ((signed long int) (max (var_1_19 , ((var_1_18 + var_1_37) - var_1_66))))) : 1) : (var_1_64 == ((signed long int) ((max (var_1_38 , (1000000 - var_1_40))) + var_1_13))))) && (var_1_67 == ((unsigned short int) (min ((max (var_1_17 , var_1_38)) , (4 + var_1_39)))))) && ((var_1_27 <= (var_1_9 * var_1_53)) ? (var_1_68 == ((unsigned char) ((var_1_37 + var_1_40) + var_1_39))) : 1)) && ((var_1_110 || (var_1_47 || var_1_61)) ? (((var_1_90 > var_1_28) && var_1_62) ? (var_1_69 == ((unsigned long int) (min (var_1_39 , (var_1_18 + var_1_40))))) : 1) : (var_1_63 ? (var_1_69 == ((unsigned long int) (max ((var_1_24 + var_1_15) , var_1_28)))) : (var_1_69 == ((unsigned long int) var_1_91))))) && (((var_1_66 / var_1_38) == ((var_1_65 + var_1_24) ^ var_1_13)) ? (var_1_70 == ((unsigned char) (min (32 , var_1_18)))) : 1)) && ((var_1_53 > var_1_59) ? ((((8 / var_1_35) | var_1_24) <= var_1_69) ? (var_1_71 == ((signed short int) (var_1_17 + (var_1_69 + var_1_57)))) : (var_1_71 == ((signed short int) (min (var_1_37 , var_1_72))))) : (var_1_71 == ((signed short int) (200 + var_1_15))))) && (var_1_60 ? (var_1_73 == ((signed char) ((min (var_1_17 , 100)) - (min (var_1_18 , 25))))) : (((var_1_81 - var_1_39) < var_1_51) ? ((var_1_34 < ((- var_1_90) | var_1_39)) ? (var_1_73 == ((signed char) (abs (var_1_16)))) : (var_1_73 == ((signed char) (var_1_40 + 50)))) : ((! var_1_104) ? (var_1_73 == ((signed char) ((var_1_37 + var_1_65) + (min (var_1_40 , var_1_16))))) : (var_1_73 == ((signed char) ((var_1_65 + (var_1_40 - var_1_37)) + var_1_16))))))) && (((var_1_43 * (var_1_37 - var_1_16)) <= var_1_28) ? (var_1_93 ? (var_1_74 == ((unsigned long int) (max (var_1_15 , var_1_31)))) : 1) : (var_1_74 == ((unsigned long int) (var_1_75 - ((var_1_76 - var_1_35) + (var_1_17 + 256u))))))) && ((var_1_108 >= var_1_102) ? (var_1_77 == ((unsigned short int) (max (var_1_17 , var_1_90)))) : 1)) && ((var_1_48 || (var_1_77 > var_1_30)) ? ((! (! var_1_110)) ? ((var_1_38 < var_1_45) ? (var_1_78 == ((unsigned short int) (var_1_35 - var_1_17))) : 1) : 1) : 1)) && (((var_1_25 + (var_1_58 + var_1_92)) < ((var_1_20 / var_1_45) * (abs (var_1_18)))) ? (var_1_79 == ((signed short int) (var_1_39 - var_1_40))) : (var_1_79 == ((signed short int) (min (var_1_38 , (var_1_15 + var_1_17))))))) && (var_1_110 ? (var_1_81 == ((unsigned long int) (((max (var_1_82 , var_1_67)) + var_1_28) + ((1838759171u - var_1_17) - 8u)))) : (var_1_81 == ((unsigned long int) (max (var_1_28 , var_1_40)))))) && ((! var_1_110) ? (var_1_82 == ((signed long int) (var_1_16 + var_1_72))) : 1)) && ((((var_1_88 / var_1_39) / (max (var_1_38 , var_1_84))) > (var_1_69 / (max (32 , var_1_31)))) ? (var_1_83 == ((unsigned char) (var_1_48 && var_1_47))) : ((-5 <= var_1_34) ? (var_1_83 == ((unsigned char) (var_1_62 && var_1_61))) : ((var_1_100 != (var_1_8 - var_1_56)) ? (var_1_83 == ((unsigned char) ((var_1_9 == (var_1_8 - var_1_56)) && var_1_62))) : (((var_1_44 + var_1_35) < var_1_31) ? (var_1_83 == ((unsigned char) ((! 0) && var_1_48))) : (var_1_83 == ((unsigned char) (var_1_47 && (! var_1_63))))))))) && ((var_1_61 || var_1_46) ? ((var_1_30 > var_1_75) ? (var_1_86 == ((unsigned short int) var_1_38)) : 1) : ((((var_1_40 + -32) | var_1_16) != var_1_81) ? (var_1_86 == ((unsigned short int) (max ((min ((var_1_17 + var_1_38) , var_1_16)) , (max ((var_1_18 + var_1_40) , var_1_87)))))) : 1))) && (((- var_1_25) != var_1_86) ? (var_1_88 == ((signed long int) (var_1_40 + (64 - (var_1_89 - var_1_86))))) : (var_1_46 ? (var_1_88 == ((signed long int) (min ((max (var_1_64 , var_1_35)) , var_1_12)))) : (var_1_88 == ((signed long int) (var_1_43 - var_1_51)))))) && ((var_1_48 || var_1_110) ? (var_1_90 == ((signed long int) (var_1_99 + var_1_35))) : 1)) && (last_1_var_1_110 ? ((var_1_9 <= (- var_1_8)) ? (var_1_91 == ((signed long int) last_1_var_1_77)) : 1) : (var_1_91 == ((signed long int) (min ((var_1_15 - last_1_var_1_90) , last_1_var_1_71)))))) && ((2 >= (var_1_74 * var_1_25)) ? (var_1_92 == ((signed short int) (((min (var_1_15 , var_1_18)) + (max (var_1_84 , var_1_13))) + var_1_81))) : ((var_1_69 >= var_1_13) ? (var_1_92 == ((signed short int) (min (var_1_15 , (var_1_18 + var_1_16))))) : (var_1_92 == ((signed short int) (2 - (abs (var_1_18)))))))) && ((var_1_89 != var_1_23) ? ((var_1_44 != var_1_91) ? (var_1_46 ? (var_1_93 == ((unsigned char) (var_1_47 && ((var_1_91 != var_1_108) || (var_1_62 || var_1_48))))) : ((128 < var_1_108) ? (var_1_93 == ((unsigned char) (var_1_62 || var_1_61))) : 1)) : (var_1_93 == ((unsigned char) (var_1_62 || (! var_1_48))))) : 1)) && (((var_1_38 + var_1_69) >= (var_1_30 >> var_1_97)) ? ((! (var_1_17 > var_1_65)) ? (var_1_110 ? (var_1_94 == ((signed short int) var_1_107)) : (var_1_94 == ((signed short int) var_1_30))) : (var_1_94 == ((signed short int) var_1_30))) : (var_1_94 == ((signed short int) var_1_84)))) && (var_1_62 ? (var_1_98 == ((unsigned char) var_1_38)) : (var_1_98 == ((unsigned char) var_1_16)))) && (var_1_110 ? (var_1_99 == ((unsigned short int) var_1_40)) : (var_1_99 == ((unsigned short int) 16)))) && (var_1_100 == ((double) var_1_50))) && (var_1_83 ? (var_1_101 == ((unsigned char) var_1_40)) : (var_1_101 == ((unsigned char) var_1_17)))) && (var_1_61 ? (var_1_102 == ((signed long int) var_1_103)) : (var_1_102 == ((signed long int) var_1_15)))) && (var_1_104 == ((unsigned char) var_1_62))) && (var_1_105 == ((signed char) -32))) && (var_1_47 ? (var_1_106 == ((signed short int) -50)) : (var_1_106 == ((signed short int) var_1_16)))) && ((((var_1_23 <= var_1_91) && var_1_48) || var_1_104) ? (var_1_107 == ((signed long int) (var_1_102 - (abs (var_1_108))))) : (var_1_107 == ((signed long int) var_1_28)))) && (var_1_108 == ((unsigned long int) var_1_97))) && (var_1_109 == ((double) var_1_9))) && (var_1_110 == ((unsigned char) var_1_48))
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
