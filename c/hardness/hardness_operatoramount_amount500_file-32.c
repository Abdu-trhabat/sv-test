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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch32Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 32;
signed long int var_1_9 = -10;
signed long int var_1_10 = 64;
signed char var_1_11 = 4;
signed char var_1_12 = 2;
signed char var_1_13 = 4;
signed char var_1_14 = -25;
signed char var_1_15 = 8;
signed char var_1_16 = 50;
signed char var_1_17 = 32;
unsigned long int var_1_18 = 256;
unsigned long int var_1_19 = 1920857756;
unsigned long int var_1_20 = 1731869291;
signed long int var_1_21 = 5;
float var_1_22 = 10.5;
unsigned char var_1_23 = 128;
float var_1_24 = 99999999999.2;
double var_1_25 = 127.2;
double var_1_27 = 4.7;
double var_1_28 = 99999999.5;
double var_1_29 = 10.25;
double var_1_30 = 199.25;
double var_1_31 = 24.5;
unsigned char var_1_32 = 4;
signed long int var_1_33 = 128;
signed short int var_1_34 = 8;
signed short int var_1_35 = -1;
float var_1_36 = -0.75;
signed short int var_1_37 = -8;
float var_1_38 = 0.5;
unsigned char var_1_39 = 2;
float var_1_40 = 0.0;
unsigned char var_1_41 = 1;
signed short int var_1_42 = 200;
signed short int var_1_43 = 8;
unsigned char var_1_44 = 4;
signed char var_1_45 = -128;
double var_1_46 = 1.1;
double var_1_47 = 8.2;
signed long int var_1_48 = -50;
signed long int var_1_49 = 1000000000;
unsigned char var_1_50 = 100;
unsigned char var_1_52 = 100;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 128;
signed long int var_1_55 = 64;
unsigned short int var_1_56 = 256;
unsigned short int var_1_57 = 54210;
unsigned short int var_1_58 = 21280;
unsigned short int var_1_59 = 32592;
signed long int var_1_60 = 256;
unsigned short int var_1_61 = 32;
unsigned char var_1_62 = 1;
signed char var_1_63 = 2;
unsigned char var_1_64 = 1;
signed char var_1_65 = 4;
unsigned long int var_1_66 = 256;
unsigned char var_1_67 = 8;
float var_1_68 = 8.5;
signed char var_1_69 = 0;
signed char var_1_70 = -32;
signed char var_1_71 = 25;
signed char var_1_72 = -10;
signed long int var_1_73 = -1;
unsigned long int var_1_74 = 2347255464;
unsigned long int var_1_75 = 1425185114;
signed long int var_1_76 = 1360114980;
double var_1_77 = 128.125;
signed long int var_1_78 = 4;
float var_1_79 = 0.0;
signed long int var_1_80 = 25;
double var_1_81 = 2.5;
unsigned char var_1_82 = 128;
unsigned short int var_1_83 = 128;
signed char var_1_85 = 32;
unsigned long int var_1_86 = 0;
signed char var_1_87 = 32;
unsigned long int var_1_88 = 2;
signed short int var_1_89 = -2;
float var_1_90 = 100000.3;
double var_1_91 = 99.1;
signed char var_1_92 = 4;
signed long int var_1_93 = 256;
signed char var_1_94 = -2;
signed short int var_1_95 = -1;
signed short int var_1_96 = -256;
unsigned char var_1_97 = 1;
unsigned long int var_1_98 = 0;
float var_1_99 = 255.25;
unsigned char var_1_100 = 1;
unsigned char var_1_101 = 2;
signed long int var_1_102 = -5;
signed long int var_1_103 = -128;
float var_1_104 = 3.375;
unsigned char var_1_105 = 10;
double var_1_106 = 99999999.7;
unsigned char var_1_107 = 200;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_41 = 1;
unsigned char last_1_var_1_53 = 1;
signed long int last_1_var_1_55 = 64;
unsigned short int last_1_var_1_56 = 256;
signed long int last_1_var_1_73 = -1;
signed long int last_1_var_1_78 = 4;
unsigned long int last_1_var_1_88 = 2;
signed short int last_1_var_1_89 = -2;
double last_1_var_1_91 = 99.1;
signed short int last_1_var_1_95 = -1;
unsigned long int last_1_var_1_98 = 0;
unsigned char last_1_var_1_107 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req50Batch32Amount500
	if (var_1_4) {
		var_1_98 = last_1_var_1_73;
	} else {
		var_1_98 = last_1_var_1_88;
	}


	// From: Req30Batch32Amount500
	unsigned long int stepLocal_16 = var_1_74 - (var_1_75 - var_1_15);
	if (var_1_19 < stepLocal_16) {
		if (last_1_var_1_41) {
			var_1_73 = ((max ((var_1_76 - last_1_var_1_55) , var_1_12)) - ((1699153510 - var_1_54) - var_1_16));
		}
	} else {
		var_1_73 = (var_1_65 + var_1_52);
	}


	// From: Req25Batch32Amount500
	unsigned long int stepLocal_13 = var_1_39 & (last_1_var_1_98 + last_1_var_1_53);
	signed long int stepLocal_12 = (var_1_39 - var_1_16) / (max (var_1_52 , var_1_65));
	if (stepLocal_13 <= var_1_49) {
		if (stepLocal_12 <= (max ((last_1_var_1_55 % var_1_20) , (abs (last_1_var_1_73))))) {
			var_1_64 = ((! (var_1_62 && var_1_5)) || (var_1_3 && var_1_4));
		} else {
			var_1_64 = (var_1_3 || var_1_4);
		}
	} else {
		var_1_64 = ((var_1_30 == var_1_28) || var_1_5);
	}


	// From: Req55Batch32Amount500
	if (var_1_64) {
		var_1_103 = var_1_70;
	} else {
		var_1_103 = var_1_14;
	}


	// From: Req4Batch32Amount500
	unsigned char stepLocal_2 = var_1_5;
	unsigned long int stepLocal_1 = 500u;
	if ((2381164849u - var_1_16) <= stepLocal_1) {
		if (stepLocal_2 && var_1_3) {
			var_1_18 = ((var_1_19 + var_1_20) - 200u);
		}
	}


	// From: Req5Batch32Amount500
	var_1_21 = (max ((var_1_16 - 1) , var_1_15));


	// From: Req6Batch32Amount500
	if (! ((var_1_23 - 1) <= 2)) {
		var_1_22 = (abs (var_1_24));
	}


	// From: Req11Batch32Amount500
	signed long int stepLocal_4 = (var_1_15 >> var_1_39) | (var_1_12 - var_1_13);
	if (var_1_27 != (var_1_22 * var_1_29)) {
		if (var_1_4) {
			if (var_1_16 < stepLocal_4) {
				var_1_38 = (var_1_28 - var_1_31);
			} else {
				var_1_38 = (15.7f - (var_1_40 - var_1_31));
			}
		}
	}


	// From: Req17Batch32Amount500
	unsigned char stepLocal_7 = var_1_3;
	if (stepLocal_7 || (var_1_14 <= var_1_39)) {
		var_1_48 = (var_1_18 + var_1_39);
	} else {
		var_1_48 = ((2 + (var_1_49 - var_1_23)) - (4 + var_1_39));
	}


	// From: Req23Batch32Amount500
	if (var_1_58 <= ((var_1_20 & var_1_18) * (59243 - var_1_23))) {
		var_1_61 = var_1_39;
	} else {
		var_1_61 = ((max (62150 , var_1_57)) - var_1_48);
	}


	// From: Req28Batch32Amount500
	var_1_68 = (var_1_47 + (abs (var_1_31)));


	// From: Req33Batch32Amount500
	var_1_80 = (var_1_21 - var_1_13);


	// From: Req35Batch32Amount500
	if ((- var_1_79) <= var_1_24) {
		if (var_1_27 == (var_1_28 / (min (var_1_40 , var_1_79)))) {
			var_1_82 = (max ((var_1_39 + (var_1_12 + var_1_15)) , var_1_13));
		} else {
			var_1_82 = (((abs (var_1_52)) - var_1_16) + var_1_39);
		}
	}


	// From: Req37Batch32Amount500
	if (var_1_58 > var_1_52) {
		var_1_85 = (var_1_15 - (var_1_39 + (abs (var_1_14))));
	} else {
		var_1_85 = (abs (var_1_39));
	}


	// From: Req39Batch32Amount500
	if (! (var_1_68 == var_1_30)) {
		var_1_87 = ((var_1_72 + var_1_39) + var_1_70);
	}


	// From: Req44Batch32Amount500
	var_1_92 = var_1_72;


	// From: Req47Batch32Amount500
	if (var_1_3) {
		var_1_95 = last_1_var_1_95;
	} else {
		var_1_95 = var_1_71;
	}


	// From: Req48Batch32Amount500
	var_1_96 = -256;


	// From: Req49Batch32Amount500
	if (var_1_3) {
		var_1_97 = var_1_62;
	} else {
		var_1_97 = var_1_4;
	}


	// From: Req51Batch32Amount500
	var_1_99 = var_1_27;


	// From: Req52Batch32Amount500
	var_1_100 = 8;


	// From: Req56Batch32Amount500
	var_1_104 = var_1_29;


	// From: Req2Batch32Amount500
	signed long int stepLocal_0 = var_1_103;
	if (var_1_73 == stepLocal_0) {
		var_1_6 = var_1_9;
	} else {
		if (! (! (var_1_73 < var_1_103))) {
			var_1_6 = (min (var_1_9 , var_1_10));
		}
	}


	// From: Req18Batch32Amount500
	unsigned char stepLocal_9 = var_1_97;
	signed long int stepLocal_8 = (min (var_1_12 , var_1_13)) - var_1_16;
	if (var_1_64 || stepLocal_9) {
		if (stepLocal_8 < (~ var_1_49)) {
			var_1_50 = (min ((var_1_39 + (abs (var_1_12))) , (128 - var_1_15)));
		} else {
			var_1_50 = (128 - (var_1_52 - var_1_15));
		}
	} else {
		var_1_50 = (128 - var_1_16);
	}


	// From: Req54Batch32Amount500
	var_1_102 = var_1_50;


	// From: Req1Batch32Amount500
	if (var_1_97) {
		var_1_1 = ((! (var_1_3 || var_1_4)) && var_1_5);
	} else {
		var_1_1 = (var_1_5 && var_1_4);
	}


	// From: Req10Batch32Amount500
	unsigned char stepLocal_3 = var_1_1;
	if (((var_1_30 / var_1_36) + (- var_1_27)) == var_1_28) {
		if ((var_1_17 >= var_1_80) || stepLocal_3) {
			var_1_35 = (max (var_1_13 , var_1_15));
		} else {
			var_1_35 = var_1_37;
		}
	} else {
		var_1_35 = var_1_14;
	}


	// From: Req12Batch32Amount500
	var_1_41 = (var_1_97 && (var_1_4 || var_1_3));


	// From: Req13Batch32Amount500
	if (var_1_36 > var_1_31) {
		var_1_42 = (abs (var_1_16));
	} else {
		if (! var_1_3) {
			var_1_42 = ((var_1_39 - (var_1_12 + var_1_15)) + (min (var_1_43 , var_1_17)));
		} else {
			if (var_1_36 <= var_1_30) {
				var_1_42 = var_1_13;
			} else {
				var_1_42 = (min (var_1_85 , var_1_12));
			}
		}
	}


	// From: Req15Batch32Amount500
	if (8 <= var_1_96) {
		var_1_45 = (var_1_15 - var_1_13);
	} else {
		var_1_45 = (var_1_12 - (min (var_1_16 , var_1_15)));
	}


	// From: Req22Batch32Amount500
	if (var_1_64) {
		var_1_60 = (abs (-10));
	} else {
		var_1_60 = (min (var_1_35 , var_1_103));
	}


	// From: Req24Batch32Amount500
	signed long int stepLocal_11 = var_1_16 / var_1_58;
	if ((var_1_96 & var_1_59) <= stepLocal_11) {
		var_1_63 = (var_1_14 + (abs (var_1_13)));
	}


	// From: Req34Batch32Amount500
	signed long int stepLocal_20 = var_1_9;
	unsigned long int stepLocal_19 = var_1_18;
	if (((var_1_79 - var_1_47) - var_1_31) >= (var_1_29 * var_1_104)) {
		var_1_81 = (var_1_30 + var_1_29);
	} else {
		if (stepLocal_20 < var_1_23) {
			if ((var_1_52 - var_1_23) >= stepLocal_19) {
				var_1_81 = (-0.5 + 24.85);
			} else {
				var_1_81 = var_1_27;
			}
		} else {
			var_1_81 = (abs (var_1_31));
		}
	}


	// From: Req45Batch32Amount500
	var_1_93 = var_1_50;


	// From: Req46Batch32Amount500
	if (var_1_1) {
		var_1_94 = var_1_70;
	} else {
		var_1_94 = var_1_17;
	}


	// From: Req53Batch32Amount500
	if (var_1_1) {
		var_1_101 = var_1_39;
	}


	// From: Req57Batch32Amount500
	if (var_1_41) {
		var_1_105 = var_1_16;
	}


	// From: Req58Batch32Amount500
	if (var_1_41) {
		var_1_106 = var_1_40;
	}


	// From: Req31Batch32Amount500
	if ((- 255.8f) <= var_1_31) {
		if (var_1_102 != var_1_71) {
			if (var_1_1) {
				var_1_77 = var_1_27;
			}
		} else {
			if (! var_1_5) {
				var_1_77 = (((abs (var_1_47)) + var_1_31) - var_1_28);
			} else {
				var_1_77 = (max (var_1_30 , var_1_40));
			}
		}
	} else {
		var_1_77 = var_1_28;
	}


	// From: Req16Batch32Amount500
	signed short int stepLocal_6 = var_1_42;
	signed char stepLocal_5 = var_1_15;
	if (stepLocal_5 != var_1_20) {
		if (! var_1_3) {
			if (! var_1_4) {
				var_1_46 = ((min (var_1_40 , (var_1_31 + var_1_47))) - var_1_27);
			} else {
				var_1_46 = (max (var_1_29 , (var_1_28 - var_1_27)));
			}
		} else {
			var_1_46 = (var_1_47 + var_1_29);
		}
	} else {
		if (stepLocal_6 >= (var_1_39 * (- var_1_10))) {
			var_1_46 = (var_1_47 + var_1_31);
		} else {
			if ((min (var_1_104 , (- var_1_77))) <= var_1_40) {
				var_1_46 = (min (var_1_28 , var_1_24));
			}
		}
	}


	// From: Req36Batch32Amount500
	if (1.000000000000005E14f > var_1_46) {
		var_1_83 = (max ((var_1_57 - (var_1_82 + var_1_13)) , var_1_54));
	}


	// From: Req3Batch32Amount500
	if (var_1_93 > var_1_10) {
		if (var_1_10 > (max (var_1_93 , var_1_21))) {
			var_1_11 = ((var_1_12 - var_1_13) + (max (var_1_14 , (var_1_15 - var_1_16))));
		} else {
			var_1_11 = (max (var_1_17 , (var_1_12 - var_1_16)));
		}
	}


	// From: Req14Batch32Amount500
	if (var_1_24 == (- var_1_77)) {
		var_1_44 = (var_1_12 + var_1_13);
	} else {
		var_1_44 = (max (var_1_13 , 32));
	}


	// From: Req40Batch32Amount500
	if (var_1_62) {
		var_1_88 = (min (var_1_20 , var_1_58));
	} else {
		if (var_1_58 <= (4 * var_1_98)) {
			var_1_88 = (min (var_1_83 , (var_1_12 + var_1_23)));
		} else {
			var_1_88 = var_1_52;
		}
	}


	// From: Req59Batch32Amount500
	signed char stepLocal_23 = var_1_65;
	unsigned char stepLocal_22 = var_1_64;
	if (-0.8f <= var_1_77) {
		if (stepLocal_22 || (-64 != var_1_6)) {
			if (stepLocal_23 <= last_1_var_1_107) {
				var_1_107 = (var_1_54 - var_1_52);
			} else {
				var_1_107 = var_1_12;
			}
		} else {
			var_1_107 = var_1_39;
		}
	} else {
		var_1_107 = 64;
	}


	// From: Req8Batch32Amount500
	if ((var_1_20 - var_1_33) < (64u * var_1_19)) {
		if ((- var_1_107) == ((max (var_1_16 , 0)) << var_1_80)) {
			var_1_32 = var_1_15;
		} else {
			if (var_1_4) {
				var_1_32 = (min (var_1_13 , var_1_15));
			}
		}
	} else {
		var_1_32 = (var_1_13 + 16);
	}


	// From: Req9Batch32Amount500
	var_1_34 = var_1_32;


	// From: Req20Batch32Amount500
	var_1_55 = (min (var_1_34 , (min (var_1_49 , var_1_82))));


	// From: Req27Batch32Amount500
	signed short int stepLocal_14 = var_1_34;
	if (stepLocal_14 < (max ((var_1_54 - var_1_52) , var_1_16))) {
		var_1_67 = 16;
	} else {
		var_1_67 = (min (var_1_13 , 2));
	}


	// From: Req43Batch32Amount500
	if (((- last_1_var_1_91) <= last_1_var_1_91) && ((max (var_1_98 , var_1_54)) <= (max (var_1_67 , var_1_21)))) {
		var_1_91 = var_1_31;
	} else {
		if (var_1_64) {
			var_1_91 = var_1_30;
		} else {
			var_1_91 = var_1_24;
		}
	}


	// From: Req26Batch32Amount500
	var_1_66 = ((1153024526u - (var_1_105 + var_1_59)) + ((1000000000u - var_1_54) + var_1_67));


	// From: Req7Batch32Amount500
	if ((var_1_20 / (50u + var_1_23)) < var_1_88) {
		if ((var_1_13 & -1) <= var_1_66) {
			var_1_25 = (var_1_27 - (max (1.000000005E8 , var_1_28)));
		} else {
			if (var_1_93 <= var_1_55) {
				var_1_25 = ((var_1_29 + var_1_30) + (199.6 - var_1_31));
			}
		}
	}


	// From: Req29Batch32Amount500
	unsigned char stepLocal_15 = var_1_100;
	if (var_1_91 <= var_1_24) {
		var_1_69 = ((min (var_1_70 , var_1_14)) + var_1_71);
	} else {
		if (var_1_41) {
			var_1_69 = (max (var_1_13 , (var_1_16 + (max (var_1_71 , var_1_15)))));
		} else {
			if (var_1_29 <= ((var_1_31 / var_1_36) + (127.6 - var_1_28))) {
				if ((max (var_1_19 , var_1_73)) < stepLocal_15) {
					var_1_69 = (var_1_13 + (max (var_1_16 , (min (var_1_15 , var_1_12)))));
				}
			} else {
				var_1_69 = ((var_1_39 + var_1_72) + var_1_70);
			}
		}
	}


	// From: Req32Batch32Amount500
	signed long int stepLocal_18 = var_1_49;
	signed long int stepLocal_17 = var_1_60;
	if (stepLocal_17 == (var_1_58 * (var_1_88 % -1))) {
		if (var_1_91 <= (var_1_27 - (var_1_79 - var_1_47))) {
			var_1_78 = ((var_1_107 + (500 - last_1_var_1_78)) + (min (var_1_103 , var_1_42)));
		}
	} else {
		if (var_1_41) {
			if (var_1_54 <= stepLocal_18) {
				var_1_78 = (max (var_1_43 , var_1_107));
			}
		}
	}


	// From: Req38Batch32Amount500
	signed char stepLocal_21 = var_1_15;
	if (stepLocal_21 <= (var_1_73 * var_1_66)) {
		var_1_86 = var_1_95;
	}


	// From: Req42Batch32Amount500
	if (var_1_14 > var_1_78) {
		var_1_90 = (max (var_1_40 , 255.75f));
	} else {
		var_1_90 = (abs (var_1_24));
	}


	// From: Req19Batch32Amount500
	signed char stepLocal_10 = var_1_12;
	if (var_1_40 < (var_1_31 - var_1_28)) {
		if (var_1_66 <= stepLocal_10) {
			if ((- var_1_24) == var_1_40) {
				var_1_53 = (min (((var_1_13 + var_1_39) + var_1_15) , var_1_52));
			} else {
				var_1_53 = (min ((var_1_54 - var_1_13) , var_1_15));
			}
		}
	} else {
		var_1_53 = (min (var_1_12 , var_1_54));
	}


	// From: Req21Batch32Amount500
	if (((var_1_40 - var_1_47) >= var_1_30) && var_1_1) {
		if ((- var_1_40) > var_1_106) {
			var_1_56 = ((max (var_1_57 , (var_1_58 + var_1_59))) - (var_1_82 + (var_1_12 + var_1_53)));
		} else {
			var_1_56 = (abs (max (var_1_13 , var_1_12)));
		}
	} else {
		if (var_1_31 <= var_1_30) {
			var_1_56 = (min (last_1_var_1_56 , var_1_15));
		} else {
			var_1_56 = (var_1_57 - (abs (var_1_16)));
		}
	}


	// From: Req41Batch32Amount500
	if (var_1_4) {
		var_1_89 = (min (-10 , var_1_53));
	} else {
		if (var_1_1) {
			if (var_1_1) {
				var_1_89 = (var_1_23 - last_1_var_1_89);
			} else {
				var_1_89 = (max (last_1_var_1_89 , var_1_43));
			}
		} else {
			var_1_89 = (var_1_54 - var_1_56);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741824);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 255);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= -32767);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 6);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 4611686.018427383000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= -16383);
	assume_abort_if_not(var_1_43 <= 16383);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 536870911);
	assume_abort_if_not(var_1_49 <= 1073741823);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 63);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 16383);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 16384);
	assume_abort_if_not(var_1_59 <= 32767);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -128);
	assume_abort_if_not(var_1_65 <= 127);
	assume_abort_if_not(var_1_65 != 0);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -63);
	assume_abort_if_not(var_1_70 <= 63);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -63);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -31);
	assume_abort_if_not(var_1_72 <= 31);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 2147483647);
	assume_abort_if_not(var_1_74 <= 4294967295);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 1073741823);
	assume_abort_if_not(var_1_75 <= 2147483647);
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= 1073741822);
	assume_abort_if_not(var_1_76 <= 2147483646);
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= 4611686.018427388000e+12F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_41 = var_1_41;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_107 = var_1_107;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_97 ? (var_1_1 == ((unsigned char) ((! (var_1_3 || var_1_4)) && var_1_5))) : (var_1_1 == ((unsigned char) (var_1_5 && var_1_4)))) && ((var_1_73 == var_1_103) ? (var_1_6 == ((signed long int) var_1_9)) : ((! (! (var_1_73 < var_1_103))) ? (var_1_6 == ((signed long int) (min (var_1_9 , var_1_10)))) : 1))) && ((var_1_93 > var_1_10) ? ((var_1_10 > (max (var_1_93 , var_1_21))) ? (var_1_11 == ((signed char) ((var_1_12 - var_1_13) + (max (var_1_14 , (var_1_15 - var_1_16)))))) : (var_1_11 == ((signed char) (max (var_1_17 , (var_1_12 - var_1_16)))))) : 1)) && (((2381164849u - var_1_16) <= 500u) ? ((var_1_5 && var_1_3) ? (var_1_18 == ((unsigned long int) ((var_1_19 + var_1_20) - 200u))) : 1) : 1)) && (var_1_21 == ((signed long int) (max ((var_1_16 - 1) , var_1_15))))) && ((! ((var_1_23 - 1) <= 2)) ? (var_1_22 == ((float) (abs (var_1_24)))) : 1)) && (((var_1_20 / (50u + var_1_23)) < var_1_88) ? (((var_1_13 & -1) <= var_1_66) ? (var_1_25 == ((double) (var_1_27 - (max (1.000000005E8 , var_1_28))))) : ((var_1_93 <= var_1_55) ? (var_1_25 == ((double) ((var_1_29 + var_1_30) + (199.6 - var_1_31)))) : 1)) : 1)) && (((var_1_20 - var_1_33) < (64u * var_1_19)) ? (((- var_1_107) == ((max (var_1_16 , 0)) << var_1_80)) ? (var_1_32 == ((unsigned char) var_1_15)) : (var_1_4 ? (var_1_32 == ((unsigned char) (min (var_1_13 , var_1_15)))) : 1)) : (var_1_32 == ((unsigned char) (var_1_13 + 16))))) && (var_1_34 == ((signed short int) var_1_32))) && ((((var_1_30 / var_1_36) + (- var_1_27)) == var_1_28) ? (((var_1_17 >= var_1_80) || var_1_1) ? (var_1_35 == ((signed short int) (max (var_1_13 , var_1_15)))) : (var_1_35 == ((signed short int) var_1_37))) : (var_1_35 == ((signed short int) var_1_14)))) && ((var_1_27 != (var_1_22 * var_1_29)) ? (var_1_4 ? ((var_1_16 < ((var_1_15 >> var_1_39) | (var_1_12 - var_1_13))) ? (var_1_38 == ((float) (var_1_28 - var_1_31))) : (var_1_38 == ((float) (15.7f - (var_1_40 - var_1_31))))) : 1) : 1)) && (var_1_41 == ((unsigned char) (var_1_97 && (var_1_4 || var_1_3))))) && ((var_1_36 > var_1_31) ? (var_1_42 == ((signed short int) (abs (var_1_16)))) : ((! var_1_3) ? (var_1_42 == ((signed short int) ((var_1_39 - (var_1_12 + var_1_15)) + (min (var_1_43 , var_1_17))))) : ((var_1_36 <= var_1_30) ? (var_1_42 == ((signed short int) var_1_13)) : (var_1_42 == ((signed short int) (min (var_1_85 , var_1_12)))))))) && ((var_1_24 == (- var_1_77)) ? (var_1_44 == ((unsigned char) (var_1_12 + var_1_13))) : (var_1_44 == ((unsigned char) (max (var_1_13 , 32)))))) && ((8 <= var_1_96) ? (var_1_45 == ((signed char) (var_1_15 - var_1_13))) : (var_1_45 == ((signed char) (var_1_12 - (min (var_1_16 , var_1_15))))))) && ((var_1_15 != var_1_20) ? ((! var_1_3) ? ((! var_1_4) ? (var_1_46 == ((double) ((min (var_1_40 , (var_1_31 + var_1_47))) - var_1_27))) : (var_1_46 == ((double) (max (var_1_29 , (var_1_28 - var_1_27)))))) : (var_1_46 == ((double) (var_1_47 + var_1_29)))) : ((var_1_42 >= (var_1_39 * (- var_1_10))) ? (var_1_46 == ((double) (var_1_47 + var_1_31))) : (((min (var_1_104 , (- var_1_77))) <= var_1_40) ? (var_1_46 == ((double) (min (var_1_28 , var_1_24)))) : 1)))) && ((var_1_3 || (var_1_14 <= var_1_39)) ? (var_1_48 == ((signed long int) (var_1_18 + var_1_39))) : (var_1_48 == ((signed long int) ((2 + (var_1_49 - var_1_23)) - (4 + var_1_39)))))) && ((var_1_64 || var_1_97) ? ((((min (var_1_12 , var_1_13)) - var_1_16) < (~ var_1_49)) ? (var_1_50 == ((unsigned char) (min ((var_1_39 + (abs (var_1_12))) , (128 - var_1_15))))) : (var_1_50 == ((unsigned char) (128 - (var_1_52 - var_1_15))))) : (var_1_50 == ((unsigned char) (128 - var_1_16))))) && ((var_1_40 < (var_1_31 - var_1_28)) ? ((var_1_66 <= var_1_12) ? (((- var_1_24) == var_1_40) ? (var_1_53 == ((unsigned char) (min (((var_1_13 + var_1_39) + var_1_15) , var_1_52)))) : (var_1_53 == ((unsigned char) (min ((var_1_54 - var_1_13) , var_1_15))))) : 1) : (var_1_53 == ((unsigned char) (min (var_1_12 , var_1_54)))))) && (var_1_55 == ((signed long int) (min (var_1_34 , (min (var_1_49 , var_1_82))))))) && ((((var_1_40 - var_1_47) >= var_1_30) && var_1_1) ? (((- var_1_40) > var_1_106) ? (var_1_56 == ((unsigned short int) ((max (var_1_57 , (var_1_58 + var_1_59))) - (var_1_82 + (var_1_12 + var_1_53))))) : (var_1_56 == ((unsigned short int) (abs (max (var_1_13 , var_1_12)))))) : ((var_1_31 <= var_1_30) ? (var_1_56 == ((unsigned short int) (min (last_1_var_1_56 , var_1_15)))) : (var_1_56 == ((unsigned short int) (var_1_57 - (abs (var_1_16)))))))) && (var_1_64 ? (var_1_60 == ((signed long int) (abs (-10)))) : (var_1_60 == ((signed long int) (min (var_1_35 , var_1_103)))))) && ((var_1_58 <= ((var_1_20 & var_1_18) * (59243 - var_1_23))) ? (var_1_61 == ((unsigned short int) var_1_39)) : (var_1_61 == ((unsigned short int) ((max (62150 , var_1_57)) - var_1_48))))) && (((var_1_96 & var_1_59) <= (var_1_16 / var_1_58)) ? (var_1_63 == ((signed char) (var_1_14 + (abs (var_1_13))))) : 1)) && (((var_1_39 & (last_1_var_1_98 + last_1_var_1_53)) <= var_1_49) ? ((((var_1_39 - var_1_16) / (max (var_1_52 , var_1_65))) <= (max ((last_1_var_1_55 % var_1_20) , (abs (last_1_var_1_73))))) ? (var_1_64 == ((unsigned char) ((! (var_1_62 && var_1_5)) || (var_1_3 && var_1_4)))) : (var_1_64 == ((unsigned char) (var_1_3 || var_1_4)))) : (var_1_64 == ((unsigned char) ((var_1_30 == var_1_28) || var_1_5))))) && (var_1_66 == ((unsigned long int) ((1153024526u - (var_1_105 + var_1_59)) + ((1000000000u - var_1_54) + var_1_67))))) && ((var_1_34 < (max ((var_1_54 - var_1_52) , var_1_16))) ? (var_1_67 == ((unsigned char) 16)) : (var_1_67 == ((unsigned char) (min (var_1_13 , 2)))))) && (var_1_68 == ((float) (var_1_47 + (abs (var_1_31)))))) && ((var_1_91 <= var_1_24) ? (var_1_69 == ((signed char) ((min (var_1_70 , var_1_14)) + var_1_71))) : (var_1_41 ? (var_1_69 == ((signed char) (max (var_1_13 , (var_1_16 + (max (var_1_71 , var_1_15))))))) : ((var_1_29 <= ((var_1_31 / var_1_36) + (127.6 - var_1_28))) ? (((max (var_1_19 , var_1_73)) < var_1_100) ? (var_1_69 == ((signed char) (var_1_13 + (max (var_1_16 , (min (var_1_15 , var_1_12))))))) : 1) : (var_1_69 == ((signed char) ((var_1_39 + var_1_72) + var_1_70))))))) && ((var_1_19 < (var_1_74 - (var_1_75 - var_1_15))) ? (last_1_var_1_41 ? (var_1_73 == ((signed long int) ((max ((var_1_76 - last_1_var_1_55) , var_1_12)) - ((1699153510 - var_1_54) - var_1_16)))) : 1) : (var_1_73 == ((signed long int) (var_1_65 + var_1_52))))) && (((- 255.8f) <= var_1_31) ? ((var_1_102 != var_1_71) ? (var_1_1 ? (var_1_77 == ((double) var_1_27)) : 1) : ((! var_1_5) ? (var_1_77 == ((double) (((abs (var_1_47)) + var_1_31) - var_1_28))) : (var_1_77 == ((double) (max (var_1_30 , var_1_40)))))) : (var_1_77 == ((double) var_1_28)))) && ((var_1_60 == (var_1_58 * (var_1_88 % -1))) ? ((var_1_91 <= (var_1_27 - (var_1_79 - var_1_47))) ? (var_1_78 == ((signed long int) ((var_1_107 + (500 - last_1_var_1_78)) + (min (var_1_103 , var_1_42))))) : 1) : (var_1_41 ? ((var_1_54 <= var_1_49) ? (var_1_78 == ((signed long int) (max (var_1_43 , var_1_107)))) : 1) : 1))) && (var_1_80 == ((signed long int) (var_1_21 - var_1_13)))) && ((((var_1_79 - var_1_47) - var_1_31) >= (var_1_29 * var_1_104)) ? (var_1_81 == ((double) (var_1_30 + var_1_29))) : ((var_1_9 < var_1_23) ? (((var_1_52 - var_1_23) >= var_1_18) ? (var_1_81 == ((double) (-0.5 + 24.85))) : (var_1_81 == ((double) var_1_27))) : (var_1_81 == ((double) (abs (var_1_31))))))) && (((- var_1_79) <= var_1_24) ? ((var_1_27 == (var_1_28 / (min (var_1_40 , var_1_79)))) ? (var_1_82 == ((unsigned char) (max ((var_1_39 + (var_1_12 + var_1_15)) , var_1_13)))) : (var_1_82 == ((unsigned char) (((abs (var_1_52)) - var_1_16) + var_1_39)))) : 1)) && ((1.000000000000005E14f > var_1_46) ? (var_1_83 == ((unsigned short int) (max ((var_1_57 - (var_1_82 + var_1_13)) , var_1_54)))) : 1)) && ((var_1_58 > var_1_52) ? (var_1_85 == ((signed char) (var_1_15 - (var_1_39 + (abs (var_1_14)))))) : (var_1_85 == ((signed char) (abs (var_1_39)))))) && ((var_1_15 <= (var_1_73 * var_1_66)) ? (var_1_86 == ((unsigned long int) var_1_95)) : 1)) && ((! (var_1_68 == var_1_30)) ? (var_1_87 == ((signed char) ((var_1_72 + var_1_39) + var_1_70))) : 1)) && (var_1_62 ? (var_1_88 == ((unsigned long int) (min (var_1_20 , var_1_58)))) : ((var_1_58 <= (4 * var_1_98)) ? (var_1_88 == ((unsigned long int) (min (var_1_83 , (var_1_12 + var_1_23))))) : (var_1_88 == ((unsigned long int) var_1_52))))) && (var_1_4 ? (var_1_89 == ((signed short int) (min (-10 , var_1_53)))) : (var_1_1 ? (var_1_1 ? (var_1_89 == ((signed short int) (var_1_23 - last_1_var_1_89))) : (var_1_89 == ((signed short int) (max (last_1_var_1_89 , var_1_43))))) : (var_1_89 == ((signed short int) (var_1_54 - var_1_56)))))) && ((var_1_14 > var_1_78) ? (var_1_90 == ((float) (max (var_1_40 , 255.75f)))) : (var_1_90 == ((float) (abs (var_1_24)))))) && ((((- last_1_var_1_91) <= last_1_var_1_91) && ((max (var_1_98 , var_1_54)) <= (max (var_1_67 , var_1_21)))) ? (var_1_91 == ((double) var_1_31)) : (var_1_64 ? (var_1_91 == ((double) var_1_30)) : (var_1_91 == ((double) var_1_24))))) && (var_1_92 == ((signed char) var_1_72))) && (var_1_93 == ((signed long int) var_1_50))) && (var_1_1 ? (var_1_94 == ((signed char) var_1_70)) : (var_1_94 == ((signed char) var_1_17)))) && (var_1_3 ? (var_1_95 == ((signed short int) last_1_var_1_95)) : (var_1_95 == ((signed short int) var_1_71)))) && (var_1_96 == ((signed short int) -256))) && (var_1_3 ? (var_1_97 == ((unsigned char) var_1_62)) : (var_1_97 == ((unsigned char) var_1_4)))) && (var_1_4 ? (var_1_98 == ((unsigned long int) last_1_var_1_73)) : (var_1_98 == ((unsigned long int) last_1_var_1_88)))) && (var_1_99 == ((float) var_1_27))) && (var_1_100 == ((unsigned char) 8))) && (var_1_1 ? (var_1_101 == ((unsigned char) var_1_39)) : 1)) && (var_1_102 == ((signed long int) var_1_50))) && (var_1_64 ? (var_1_103 == ((signed long int) var_1_70)) : (var_1_103 == ((signed long int) var_1_14)))) && (var_1_104 == ((float) var_1_29))) && (var_1_41 ? (var_1_105 == ((unsigned char) var_1_16)) : 1)) && (var_1_41 ? (var_1_106 == ((double) var_1_40)) : 1)) && ((-0.8f <= var_1_77) ? ((var_1_64 || (-64 != var_1_6)) ? ((var_1_65 <= last_1_var_1_107) ? (var_1_107 == ((unsigned char) (var_1_54 - var_1_52))) : (var_1_107 == ((unsigned char) var_1_12))) : (var_1_107 == ((unsigned char) var_1_39))) : (var_1_107 == ((unsigned char) 64)))
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
