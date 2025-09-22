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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 128;
signed long int var_1_4 = 10;
signed short int var_1_5 = -5;
signed short int var_1_6 = 50;
signed short int var_1_7 = 50;
signed short int var_1_8 = 50;
signed short int var_1_9 = -64;
signed short int var_1_10 = 2;
signed short int var_1_11 = 25;
signed short int var_1_12 = 24904;
float var_1_13 = 8.6;
unsigned long int var_1_14 = 3786581991;
float var_1_15 = 31.6;
float var_1_16 = -0.5;
float var_1_17 = 3.75;
float var_1_18 = 3.5;
double var_1_19 = 256.85;
double var_1_21 = 64.6;
signed long int var_1_22 = 8;
signed short int var_1_23 = 32;
signed char var_1_24 = 32;
signed char var_1_25 = 50;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
signed short int var_1_30 = 1;
signed long int var_1_31 = 8;
unsigned char var_1_32 = 10;
signed char var_1_33 = 64;
unsigned char var_1_34 = 25;
unsigned char var_1_35 = 25;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 128;
float var_1_39 = 32.8;
float var_1_40 = 8.75;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 16;
unsigned char var_1_44 = 1;
signed long int var_1_46 = -50;
double var_1_47 = 256.25;
double var_1_48 = 3.25;
signed short int var_1_49 = -2;
unsigned short int var_1_50 = 59321;
unsigned char var_1_51 = 2;
signed short int var_1_52 = 64;
unsigned short int var_1_53 = 100;
float var_1_54 = 1.8;
float var_1_55 = 10000000000.65;
float var_1_56 = 100.5;
float var_1_57 = 0.5;
unsigned long int var_1_58 = 256;
unsigned long int var_1_59 = 1812150883;
signed char var_1_60 = -10;
unsigned long int var_1_61 = 3983326732;
signed char var_1_62 = 50;
double var_1_63 = 8.5;
unsigned long int var_1_64 = 1;
unsigned long int var_1_65 = 3799710315;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 128;
signed char var_1_69 = 1;
float var_1_70 = 128.5;
signed char var_1_71 = 10;
unsigned char var_1_72 = 1;
unsigned long int var_1_74 = 50;
unsigned short int var_1_75 = 53792;
unsigned long int var_1_76 = 2422252334;
unsigned char var_1_77 = 0;
unsigned short int var_1_78 = 8;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 0;
signed long int var_1_81 = 10;
unsigned long int var_1_82 = 0;
double var_1_83 = 100000000000000.6;
signed short int var_1_84 = -128;
signed short int var_1_85 = 10;
unsigned long int var_1_86 = 16;
signed short int var_1_87 = 28200;
unsigned short int var_1_88 = 5;
signed long int var_1_89 = 16;
unsigned short int var_1_90 = 500;
unsigned long int var_1_91 = 0;
unsigned short int var_1_92 = 32;
float var_1_93 = 24.5;
signed long int var_1_94 = 128;
signed long int var_1_95 = 32;
unsigned long int var_1_96 = 10;
signed short int var_1_97 = -1;
signed char var_1_98 = 32;
unsigned char var_1_99 = 64;
signed short int var_1_100 = -256;
unsigned short int var_1_101 = 50;
float var_1_102 = 10.5;
signed long int var_1_103 = 0;
double var_1_104 = 0.2;
unsigned char var_1_105 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_26 = 0;
signed short int last_1_var_1_30 = 1;
signed long int last_1_var_1_46 = -50;
signed short int last_1_var_1_49 = -2;
unsigned long int last_1_var_1_58 = 256;
signed long int last_1_var_1_81 = 10;
float last_1_var_1_93 = 24.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch88Amount500
	unsigned char stepLocal_36 = var_1_61 > last_1_var_1_58;
	if (stepLocal_36 && (var_1_38 != var_1_50)) {
		if ((last_1_var_1_93 / (max (var_1_70 , var_1_83))) == var_1_15) {
			var_1_82 = (min (var_1_65 , var_1_75));
		} else {
			var_1_82 = (min ((last_1_var_1_30 + var_1_37) , (var_1_76 - (var_1_59 - var_1_50))));
		}
	}


	// From: Req53Batch88Amount500
	if (last_1_var_1_26) {
		var_1_104 = var_1_56;
	} else {
		var_1_104 = var_1_57;
	}


	// From: Req8Batch88Amount500
	signed long int stepLocal_7 = var_1_24 + var_1_25;
	if (var_1_12 == stepLocal_7) {
		if (var_1_104 > var_1_16) {
			if (var_1_104 >= var_1_21) {
				var_1_30 = (abs (var_1_11 - var_1_10));
			}
		}
	} else {
		var_1_30 = (var_1_5 + var_1_7);
	}


	// From: Req1Batch88Amount500
	signed long int stepLocal_0 = abs (var_1_4);
	if (var_1_82 >= stepLocal_0) {
		var_1_1 = (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8));
	} else {
		var_1_1 = (var_1_7 + var_1_6);
	}


	// From: Req10Batch88Amount500
	if (((10 - var_1_24) / var_1_33) > var_1_25) {
		if (var_1_29) {
			var_1_32 = (max (var_1_25 , ((min (var_1_24 , var_1_34)) + var_1_35)));
		} else {
			var_1_32 = ((min ((min (var_1_36 , var_1_37)) , var_1_38)) - (abs (max (var_1_34 , var_1_25))));
		}
	} else {
		var_1_32 = (min (var_1_38 , (max (var_1_35 , var_1_25))));
	}


	// From: Req12Batch88Amount500
	if ((var_1_38 - (abs (var_1_35))) == 64) {
		var_1_41 = (var_1_29 && var_1_42);
	} else {
		var_1_41 = ((var_1_29 && var_1_27) && var_1_28);
	}


	// From: Req15Batch88Amount500
	if (((- 256u) + (var_1_38 * var_1_34)) <= last_1_var_1_46) {
		var_1_46 = (var_1_36 + var_1_24);
	}


	// From: Req16Batch88Amount500
	if (! var_1_27) {
		var_1_47 = (max (var_1_15 , (var_1_18 - var_1_17)));
	}


	// From: Req17Batch88Amount500
	if (var_1_29) {
		var_1_48 = var_1_17;
	} else {
		var_1_48 = (var_1_17 - var_1_18);
	}


	// From: Req19Batch88Amount500
	signed short int stepLocal_19 = var_1_8;
	if ((var_1_38 / var_1_12) <= stepLocal_19) {
		var_1_53 = (abs (var_1_34));
	} else {
		var_1_53 = var_1_37;
	}


	// From: Req26Batch88Amount500
	var_1_66 = (! var_1_42);


	// From: Req30Batch88Amount500
	if (! var_1_41) {
		if (var_1_35 != var_1_5) {
			if ((var_1_75 - (19185 - var_1_11)) == var_1_35) {
				var_1_74 = ((min (var_1_65 , var_1_76)) - (var_1_59 - var_1_24));
			}
		} else {
			var_1_74 = (max (((var_1_34 + var_1_50) + (var_1_37 + var_1_11)) , var_1_75));
		}
	} else {
		if (var_1_70 > (var_1_47 * var_1_17)) {
			var_1_74 = var_1_34;
		}
	}


	// From: Req32Batch88Amount500
	unsigned long int stepLocal_34 = var_1_61;
	if (stepLocal_34 > ((var_1_59 ^ var_1_36) / var_1_76)) {
		var_1_78 = 1;
	}


	// From: Req39Batch88Amount500
	var_1_89 = var_1_10;


	// From: Req40Batch88Amount500
	var_1_90 = var_1_37;


	// From: Req41Batch88Amount500
	var_1_91 = var_1_65;


	// From: Req42Batch88Amount500
	var_1_92 = var_1_62;


	// From: Req43Batch88Amount500
	var_1_93 = var_1_57;


	// From: Req44Batch88Amount500
	var_1_94 = var_1_95;


	// From: Req46Batch88Amount500
	var_1_97 = -1;


	// From: Req47Batch88Amount500
	if (var_1_66) {
		var_1_98 = var_1_24;
	} else {
		var_1_98 = var_1_51;
	}


	// From: Req51Batch88Amount500
	var_1_102 = var_1_18;


	// From: Req52Batch88Amount500
	if (var_1_41) {
		var_1_103 = var_1_10;
	} else {
		var_1_103 = -10;
	}


	// From: Req3Batch88Amount500
	unsigned long int stepLocal_3 = (var_1_14 - var_1_10) ^ var_1_91;
	if (stepLocal_3 <= var_1_11) {
		var_1_13 = (max (var_1_15 , (min (999.6f , var_1_16))));
	} else {
		var_1_13 = ((var_1_17 + var_1_18) - (abs (var_1_15)));
	}


	// From: Req6Batch88Amount500
	signed long int stepLocal_6 = (64 - var_1_24) - var_1_25;
	if ((var_1_16 * var_1_17) < -0.25f) {
		if (stepLocal_6 > ((var_1_6 | var_1_8) & var_1_94)) {
			var_1_23 = (var_1_12 - var_1_24);
		}
	} else {
		var_1_23 = (max (var_1_6 , -16));
	}


	// From: Req9Batch88Amount500
	unsigned char stepLocal_9 = -16 < var_1_5;
	signed long int stepLocal_8 = var_1_25 + var_1_12;
	if (! (var_1_27 || (var_1_16 < var_1_15))) {
		if (var_1_74 == stepLocal_8) {
			if ((var_1_14 != var_1_12) && stepLocal_9) {
				var_1_31 = ((var_1_12 - var_1_11) + var_1_10);
			}
		}
	} else {
		var_1_31 = (max ((2 + var_1_53) , var_1_24));
	}


	// From: Req11Batch88Amount500
	unsigned short int stepLocal_11 = var_1_90;
	unsigned char stepLocal_10 = var_1_27;
	if ((- var_1_33) >= stepLocal_11) {
		if (((var_1_17 - var_1_18) < var_1_21) && stepLocal_10) {
			if ((abs (max (256.25 , 255.55))) > (- var_1_18)) {
				var_1_39 = ((max ((min (var_1_18 , var_1_17)) , var_1_21)) + (7.5f + var_1_40));
			}
		}
	}


	// From: Req13Batch88Amount500
	if (var_1_15 != var_1_48) {
		var_1_43 = (abs (var_1_38));
	}


	// From: Req24Batch88Amount500
	signed long int stepLocal_26 = var_1_51 * var_1_97;
	if ((var_1_14 * (var_1_11 << var_1_24)) >= stepLocal_26) {
		var_1_63 = var_1_18;
	} else {
		var_1_63 = 16.8;
	}


	// From: Req25Batch88Amount500
	if ((var_1_25 * var_1_94) <= (-100 + var_1_24)) {
		var_1_64 = ((var_1_65 - var_1_35) - (min (var_1_78 , var_1_59)));
	}


	// From: Req38Batch88Amount500
	unsigned long int stepLocal_39 = var_1_61;
	if (stepLocal_39 < var_1_64) {
		var_1_88 = var_1_87;
	} else {
		var_1_88 = 10000;
	}


	// From: Req21Batch88Amount500
	signed char stepLocal_22 = var_1_25;
	unsigned char stepLocal_21 = var_1_104 <= (min (var_1_13 , var_1_40));
	if ((var_1_31 + var_1_52) != stepLocal_22) {
		var_1_55 = (min (var_1_16 , (var_1_21 + var_1_17)));
	} else {
		if (var_1_27) {
			if (stepLocal_21 && var_1_42) {
				var_1_55 = (max (var_1_56 , var_1_15));
			} else {
				var_1_55 = (max ((min ((var_1_18 + var_1_17) , 0.8f)) , var_1_16));
			}
		} else {
			var_1_55 = (max (var_1_21 , (min (var_1_15 , (var_1_18 + var_1_57)))));
		}
	}


	// From: Req34Batch88Amount500
	if (last_1_var_1_81 > ((var_1_51 + 32) / var_1_12)) {
		if (((last_1_var_1_81 + var_1_51) + -4) < var_1_52) {
			var_1_81 = (min (var_1_88 , (last_1_var_1_81 + (max (var_1_52 , var_1_38)))));
		}
	} else {
		var_1_81 = -256;
	}


	// From: Req37Batch88Amount500
	if (var_1_41) {
		if ((var_1_81 + var_1_91) > ((max (var_1_12 , var_1_35)) >> (var_1_86 - 8u))) {
			var_1_85 = (((min (var_1_12 , var_1_87)) - 5) - var_1_34);
		} else {
			var_1_85 = var_1_38;
		}
	}


	// From: Req22Batch88Amount500
	unsigned char stepLocal_23 = var_1_35;
	if (! var_1_28) {
		if (stepLocal_23 <= ((- var_1_82) + var_1_34)) {
			var_1_58 = (max (((last_1_var_1_58 + var_1_11) + last_1_var_1_58) , 256u));
		} else {
			var_1_58 = ((1u + var_1_12) + (var_1_59 - var_1_51));
		}
	} else {
		var_1_58 = (var_1_81 + var_1_11);
	}


	// From: Req5Batch88Amount500
	if (var_1_16 == (max (var_1_18 , var_1_55))) {
		if (! var_1_66) {
			var_1_22 = var_1_7;
		}
	} else {
		var_1_22 = var_1_7;
	}


	// From: Req31Batch88Amount500
	signed long int stepLocal_33 = 4 - (min (var_1_22 , var_1_11));
	unsigned char stepLocal_32 = var_1_42;
	if (var_1_28) {
		if (stepLocal_32 && var_1_29) {
			if (stepLocal_33 == var_1_34) {
				var_1_77 = ((! var_1_42) && (var_1_29 || var_1_27));
			} else {
				var_1_77 = (var_1_42 || (! var_1_27));
			}
		} else {
			var_1_77 = (! var_1_29);
		}
	} else {
		if (var_1_57 > var_1_104) {
			var_1_77 = (! (! (var_1_29 && var_1_27)));
		}
	}


	// From: Req45Batch88Amount500
	if (var_1_77) {
		var_1_96 = var_1_76;
	}


	// From: Req48Batch88Amount500
	if (var_1_77) {
		var_1_99 = var_1_37;
	}


	// From: Req29Batch88Amount500
	signed long int stepLocal_31 = var_1_94;
	signed long int stepLocal_30 = abs (var_1_51 + var_1_62);
	unsigned long int stepLocal_29 = var_1_24 % (min (4u , 256u));
	unsigned long int stepLocal_28 = var_1_14 * (var_1_62 * 5);
	if ((~ (- var_1_59)) >= stepLocal_29) {
		if (stepLocal_28 == var_1_65) {
			if (stepLocal_30 == var_1_4) {
				var_1_72 = (var_1_66 || var_1_27);
			}
		} else {
			if ((var_1_4 / var_1_51) >= stepLocal_31) {
				var_1_72 = (var_1_29 && var_1_27);
			} else {
				var_1_72 = (((var_1_82 < 1u) && var_1_77) && var_1_42);
			}
		}
	} else {
		var_1_72 = (var_1_27 && var_1_28);
	}


	// From: Req20Batch88Amount500
	unsigned char stepLocal_20 = (- var_1_17) > var_1_18;
	if (stepLocal_20 && var_1_72) {
		var_1_54 = (min ((abs (var_1_18)) , var_1_21));
	}


	// From: Req28Batch88Amount500
	if (var_1_54 >= (var_1_15 / var_1_70)) {
		if (var_1_31 <= var_1_1) {
			if (var_1_57 > var_1_16) {
				var_1_69 = (max (var_1_24 , var_1_51));
			} else {
				var_1_69 = (max ((-10 + (var_1_51 - var_1_62)) , (var_1_24 - var_1_71)));
			}
		} else {
			var_1_69 = (min ((var_1_62 + var_1_51) , -10));
		}
	}


	// From: Req33Batch88Amount500
	signed char stepLocal_35 = var_1_25;
	if (var_1_38 == stepLocal_35) {
		var_1_79 = (! (var_1_27 && (var_1_41 || var_1_28)));
	} else {
		var_1_79 = (var_1_42 || (var_1_72 && var_1_80));
	}


	// From: Req49Batch88Amount500
	if (var_1_79) {
		var_1_100 = var_1_86;
	} else {
		var_1_100 = var_1_31;
	}


	// From: Req50Batch88Amount500
	if (var_1_72) {
		var_1_101 = var_1_92;
	} else {
		var_1_101 = var_1_32;
	}


	// From: Req54Batch88Amount500
	if (var_1_79) {
		var_1_105 = (abs (var_1_86));
	} else {
		if ((var_1_31 % var_1_86) != (var_1_51 ^ var_1_24)) {
			var_1_105 = var_1_51;
		} else {
			var_1_105 = var_1_35;
		}
	}


	// From: Req7Batch88Amount500
	var_1_26 = (var_1_72 || (var_1_27 || (var_1_28 && var_1_29)));


	// From: Req4Batch88Amount500
	signed long int stepLocal_5 = 5 / var_1_12;
	signed short int stepLocal_4 = var_1_5;
	if (var_1_101 > stepLocal_4) {
		var_1_19 = ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25)))));
	} else {
		if (stepLocal_5 <= var_1_10) {
			var_1_19 = ((var_1_18 - 99.75) + 5.2);
		}
	}


	// From: Req14Batch88Amount500
	signed short int stepLocal_13 = var_1_100;
	unsigned char stepLocal_12 = -2 < var_1_36;
	if (((1 & var_1_53) * var_1_31) > stepLocal_13) {
		if ((var_1_34 <= var_1_46) && stepLocal_12) {
			var_1_44 = var_1_35;
		}
	} else {
		var_1_44 = (max (var_1_37 , var_1_36));
	}


	// From: Req18Batch88Amount500
	signed short int stepLocal_18 = var_1_100;
	signed char stepLocal_17 = var_1_25;
	signed long int stepLocal_16 = var_1_50 - var_1_10;
	unsigned char stepLocal_15 = var_1_7 < (var_1_11 - var_1_10);
	unsigned char stepLocal_14 = var_1_79;
	if (last_1_var_1_49 > stepLocal_18) {
		if (var_1_38 > stepLocal_17) {
			if (var_1_27) {
				var_1_49 = var_1_78;
			} else {
				if (var_1_29) {
					if (stepLocal_16 < var_1_82) {
						var_1_49 = (min (var_1_34 , var_1_38));
					}
				} else {
					if (stepLocal_15 && ((var_1_35 >> var_1_51) > var_1_36)) {
						var_1_49 = ((abs (var_1_88)) + var_1_24);
					} else {
						if (var_1_28 || stepLocal_14) {
							var_1_49 = (max (var_1_52 , ((min (var_1_10 , var_1_85)) + (min (var_1_36 , var_1_38)))));
						} else {
							var_1_49 = (max (var_1_52 , var_1_11));
						}
					}
				}
			}
		}
	}


	// From: Req23Batch88Amount500
	signed short int stepLocal_25 = var_1_10;
	unsigned long int stepLocal_24 = (var_1_61 - var_1_50) - var_1_10;
	if (! var_1_26) {
		if ((- var_1_14) != stepLocal_25) {
			if (stepLocal_24 <= var_1_14) {
				var_1_60 = (var_1_24 - (var_1_51 + var_1_62));
			} else {
				var_1_60 = (max ((min (var_1_51 , var_1_24)) , var_1_62));
			}
		} else {
			var_1_60 = (var_1_51 + 8);
		}
	}


	// From: Req27Batch88Amount500
	signed long int stepLocal_27 = var_1_34 | var_1_38;
	if (var_1_14 <= stepLocal_27) {
		if (var_1_18 <= (- var_1_19)) {
			var_1_67 = (min ((max (var_1_38 , var_1_62)) , (var_1_36 - var_1_25)));
		}
	}


	// From: Req36Batch88Amount500
	signed long int stepLocal_38 = var_1_31;
	unsigned long int stepLocal_37 = (8u << var_1_64) + (- var_1_75);
	if (var_1_17 > 256.75f) {
		if (stepLocal_37 <= var_1_61) {
			var_1_84 = ((25 - 64) + var_1_36);
		}
	} else {
		if (var_1_58 < stepLocal_38) {
			var_1_84 = (var_1_49 + var_1_25);
		}
	}


	// From: Req2Batch88Amount500
	signed long int stepLocal_2 = (min (var_1_46 , var_1_4)) * var_1_84;
	signed long int stepLocal_1 = min (var_1_6 , var_1_4);
	if (stepLocal_2 <= var_1_5) {
		if (stepLocal_1 == var_1_7) {
			var_1_9 = (-2 + (var_1_10 - var_1_11));
		}
	} else {
		if (! var_1_77) {
			if (var_1_77) {
				var_1_9 = ((var_1_12 - (abs (var_1_6))) - 2);
			}
		} else {
			var_1_9 = (max ((max (var_1_5 , var_1_11)) , var_1_10));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483647);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -8191);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 16382);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 64);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 32767);
	assume_abort_if_not(var_1_50 <= 65535);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 7);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= -32767);
	assume_abort_if_not(var_1_52 <= 32766);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -922337.2036854766000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -461168.6018427383000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 1073741823);
	assume_abort_if_not(var_1_59 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 3221225471);
	assume_abort_if_not(var_1_61 <= 4294967295);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 3221225470);
	assume_abort_if_not(var_1_65 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65535);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 2147483647);
	assume_abort_if_not(var_1_76 <= 4294967294);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 0);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= -922337.2036854776000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	assume_abort_if_not(var_1_83 != 0.0F);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 15);
	assume_abort_if_not(var_1_86 <= 30);
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= 16382);
	assume_abort_if_not(var_1_87 <= 32766);
	var_1_95 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_95 >= -2147483647);
	assume_abort_if_not(var_1_95 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_26 = var_1_26;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_93 = var_1_93;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_82 >= (abs (var_1_4))) ? (var_1_1 == ((signed short int) (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8)))) : (var_1_1 == ((signed short int) (var_1_7 + var_1_6)))) && ((((min (var_1_46 , var_1_4)) * var_1_84) <= var_1_5) ? (((min (var_1_6 , var_1_4)) == var_1_7) ? (var_1_9 == ((signed short int) (-2 + (var_1_10 - var_1_11)))) : 1) : ((! var_1_77) ? (var_1_77 ? (var_1_9 == ((signed short int) ((var_1_12 - (abs (var_1_6))) - 2))) : 1) : (var_1_9 == ((signed short int) (max ((max (var_1_5 , var_1_11)) , var_1_10))))))) && ((((var_1_14 - var_1_10) ^ var_1_91) <= var_1_11) ? (var_1_13 == ((float) (max (var_1_15 , (min (999.6f , var_1_16)))))) : (var_1_13 == ((float) ((var_1_17 + var_1_18) - (abs (var_1_15))))))) && ((var_1_101 > var_1_5) ? (var_1_19 == ((double) ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25))))))) : (((5 / var_1_12) <= var_1_10) ? (var_1_19 == ((double) ((var_1_18 - 99.75) + 5.2))) : 1))) && ((var_1_16 == (max (var_1_18 , var_1_55))) ? ((! var_1_66) ? (var_1_22 == ((signed long int) var_1_7)) : 1) : (var_1_22 == ((signed long int) var_1_7)))) && (((var_1_16 * var_1_17) < -0.25f) ? ((((64 - var_1_24) - var_1_25) > ((var_1_6 | var_1_8) & var_1_94)) ? (var_1_23 == ((signed short int) (var_1_12 - var_1_24))) : 1) : (var_1_23 == ((signed short int) (max (var_1_6 , -16)))))) && (var_1_26 == ((unsigned char) (var_1_72 || (var_1_27 || (var_1_28 && var_1_29)))))) && ((var_1_12 == (var_1_24 + var_1_25)) ? ((var_1_104 > var_1_16) ? ((var_1_104 >= var_1_21) ? (var_1_30 == ((signed short int) (abs (var_1_11 - var_1_10)))) : 1) : 1) : (var_1_30 == ((signed short int) (var_1_5 + var_1_7))))) && ((! (var_1_27 || (var_1_16 < var_1_15))) ? ((var_1_74 == (var_1_25 + var_1_12)) ? (((var_1_14 != var_1_12) && (-16 < var_1_5)) ? (var_1_31 == ((signed long int) ((var_1_12 - var_1_11) + var_1_10))) : 1) : 1) : (var_1_31 == ((signed long int) (max ((2 + var_1_53) , var_1_24)))))) && ((((10 - var_1_24) / var_1_33) > var_1_25) ? (var_1_29 ? (var_1_32 == ((unsigned char) (max (var_1_25 , ((min (var_1_24 , var_1_34)) + var_1_35))))) : (var_1_32 == ((unsigned char) ((min ((min (var_1_36 , var_1_37)) , var_1_38)) - (abs (max (var_1_34 , var_1_25))))))) : (var_1_32 == ((unsigned char) (min (var_1_38 , (max (var_1_35 , var_1_25)))))))) && (((- var_1_33) >= var_1_90) ? ((((var_1_17 - var_1_18) < var_1_21) && var_1_27) ? (((abs (max (256.25 , 255.55))) > (- var_1_18)) ? (var_1_39 == ((float) ((max ((min (var_1_18 , var_1_17)) , var_1_21)) + (7.5f + var_1_40)))) : 1) : 1) : 1)) && (((var_1_38 - (abs (var_1_35))) == 64) ? (var_1_41 == ((unsigned char) (var_1_29 && var_1_42))) : (var_1_41 == ((unsigned char) ((var_1_29 && var_1_27) && var_1_28))))) && ((var_1_15 != var_1_48) ? (var_1_43 == ((unsigned short int) (abs (var_1_38)))) : 1)) && ((((1 & var_1_53) * var_1_31) > var_1_100) ? (((var_1_34 <= var_1_46) && (-2 < var_1_36)) ? (var_1_44 == ((unsigned char) var_1_35)) : 1) : (var_1_44 == ((unsigned char) (max (var_1_37 , var_1_36)))))) && ((((- 256u) + (var_1_38 * var_1_34)) <= last_1_var_1_46) ? (var_1_46 == ((signed long int) (var_1_36 + var_1_24))) : 1)) && ((! var_1_27) ? (var_1_47 == ((double) (max (var_1_15 , (var_1_18 - var_1_17))))) : 1)) && (var_1_29 ? (var_1_48 == ((double) var_1_17)) : (var_1_48 == ((double) (var_1_17 - var_1_18))))) && ((last_1_var_1_49 > var_1_100) ? ((var_1_38 > var_1_25) ? (var_1_27 ? (var_1_49 == ((signed short int) var_1_78)) : (var_1_29 ? (((var_1_50 - var_1_10) < var_1_82) ? (var_1_49 == ((signed short int) (min (var_1_34 , var_1_38)))) : 1) : (((var_1_7 < (var_1_11 - var_1_10)) && ((var_1_35 >> var_1_51) > var_1_36)) ? (var_1_49 == ((signed short int) ((abs (var_1_88)) + var_1_24))) : ((var_1_28 || var_1_79) ? (var_1_49 == ((signed short int) (max (var_1_52 , ((min (var_1_10 , var_1_85)) + (min (var_1_36 , var_1_38))))))) : (var_1_49 == ((signed short int) (max (var_1_52 , var_1_11)))))))) : 1) : 1)) && (((var_1_38 / var_1_12) <= var_1_8) ? (var_1_53 == ((unsigned short int) (abs (var_1_34)))) : (var_1_53 == ((unsigned short int) var_1_37)))) && ((((- var_1_17) > var_1_18) && var_1_72) ? (var_1_54 == ((float) (min ((abs (var_1_18)) , var_1_21)))) : 1)) && (((var_1_31 + var_1_52) != var_1_25) ? (var_1_55 == ((float) (min (var_1_16 , (var_1_21 + var_1_17))))) : (var_1_27 ? (((var_1_104 <= (min (var_1_13 , var_1_40))) && var_1_42) ? (var_1_55 == ((float) (max (var_1_56 , var_1_15)))) : (var_1_55 == ((float) (max ((min ((var_1_18 + var_1_17) , 0.8f)) , var_1_16))))) : (var_1_55 == ((float) (max (var_1_21 , (min (var_1_15 , (var_1_18 + var_1_57)))))))))) && ((! var_1_28) ? ((var_1_35 <= ((- var_1_82) + var_1_34)) ? (var_1_58 == ((unsigned long int) (max (((last_1_var_1_58 + var_1_11) + last_1_var_1_58) , 256u)))) : (var_1_58 == ((unsigned long int) ((1u + var_1_12) + (var_1_59 - var_1_51))))) : (var_1_58 == ((unsigned long int) (var_1_81 + var_1_11))))) && ((! var_1_26) ? (((- var_1_14) != var_1_10) ? ((((var_1_61 - var_1_50) - var_1_10) <= var_1_14) ? (var_1_60 == ((signed char) (var_1_24 - (var_1_51 + var_1_62)))) : (var_1_60 == ((signed char) (max ((min (var_1_51 , var_1_24)) , var_1_62))))) : (var_1_60 == ((signed char) (var_1_51 + 8)))) : 1)) && (((var_1_14 * (var_1_11 << var_1_24)) >= (var_1_51 * var_1_97)) ? (var_1_63 == ((double) var_1_18)) : (var_1_63 == ((double) 16.8)))) && (((var_1_25 * var_1_94) <= (-100 + var_1_24)) ? (var_1_64 == ((unsigned long int) ((var_1_65 - var_1_35) - (min (var_1_78 , var_1_59))))) : 1)) && (var_1_66 == ((unsigned char) (! var_1_42)))) && ((var_1_14 <= (var_1_34 | var_1_38)) ? ((var_1_18 <= (- var_1_19)) ? (var_1_67 == ((unsigned char) (min ((max (var_1_38 , var_1_62)) , (var_1_36 - var_1_25))))) : 1) : 1)) && ((var_1_54 >= (var_1_15 / var_1_70)) ? ((var_1_31 <= var_1_1) ? ((var_1_57 > var_1_16) ? (var_1_69 == ((signed char) (max (var_1_24 , var_1_51)))) : (var_1_69 == ((signed char) (max ((-10 + (var_1_51 - var_1_62)) , (var_1_24 - var_1_71)))))) : (var_1_69 == ((signed char) (min ((var_1_62 + var_1_51) , -10))))) : 1)) && (((~ (- var_1_59)) >= (var_1_24 % (min (4u , 256u)))) ? (((var_1_14 * (var_1_62 * 5)) == var_1_65) ? (((abs (var_1_51 + var_1_62)) == var_1_4) ? (var_1_72 == ((unsigned char) (var_1_66 || var_1_27))) : 1) : (((var_1_4 / var_1_51) >= var_1_94) ? (var_1_72 == ((unsigned char) (var_1_29 && var_1_27))) : (var_1_72 == ((unsigned char) (((var_1_82 < 1u) && var_1_77) && var_1_42))))) : (var_1_72 == ((unsigned char) (var_1_27 && var_1_28))))) && ((! var_1_41) ? ((var_1_35 != var_1_5) ? (((var_1_75 - (19185 - var_1_11)) == var_1_35) ? (var_1_74 == ((unsigned long int) ((min (var_1_65 , var_1_76)) - (var_1_59 - var_1_24)))) : 1) : (var_1_74 == ((unsigned long int) (max (((var_1_34 + var_1_50) + (var_1_37 + var_1_11)) , var_1_75))))) : ((var_1_70 > (var_1_47 * var_1_17)) ? (var_1_74 == ((unsigned long int) var_1_34)) : 1))) && (var_1_28 ? ((var_1_42 && var_1_29) ? (((4 - (min (var_1_22 , var_1_11))) == var_1_34) ? (var_1_77 == ((unsigned char) ((! var_1_42) && (var_1_29 || var_1_27)))) : (var_1_77 == ((unsigned char) (var_1_42 || (! var_1_27))))) : (var_1_77 == ((unsigned char) (! var_1_29)))) : ((var_1_57 > var_1_104) ? (var_1_77 == ((unsigned char) (! (! (var_1_29 && var_1_27))))) : 1))) && ((var_1_61 > ((var_1_59 ^ var_1_36) / var_1_76)) ? (var_1_78 == ((unsigned short int) 1)) : 1)) && ((var_1_38 == var_1_25) ? (var_1_79 == ((unsigned char) (! (var_1_27 && (var_1_41 || var_1_28))))) : (var_1_79 == ((unsigned char) (var_1_42 || (var_1_72 && var_1_80)))))) && ((last_1_var_1_81 > ((var_1_51 + 32) / var_1_12)) ? ((((last_1_var_1_81 + var_1_51) + -4) < var_1_52) ? (var_1_81 == ((signed long int) (min (var_1_88 , (last_1_var_1_81 + (max (var_1_52 , var_1_38))))))) : 1) : (var_1_81 == ((signed long int) -256)))) && (((var_1_61 > last_1_var_1_58) && (var_1_38 != var_1_50)) ? (((last_1_var_1_93 / (max (var_1_70 , var_1_83))) == var_1_15) ? (var_1_82 == ((unsigned long int) (min (var_1_65 , var_1_75)))) : (var_1_82 == ((unsigned long int) (min ((last_1_var_1_30 + var_1_37) , (var_1_76 - (var_1_59 - var_1_50))))))) : 1)) && ((var_1_17 > 256.75f) ? ((((8u << var_1_64) + (- var_1_75)) <= var_1_61) ? (var_1_84 == ((signed short int) ((25 - 64) + var_1_36))) : 1) : ((var_1_58 < var_1_31) ? (var_1_84 == ((signed short int) (var_1_49 + var_1_25))) : 1))) && (var_1_41 ? (((var_1_81 + var_1_91) > ((max (var_1_12 , var_1_35)) >> (var_1_86 - 8u))) ? (var_1_85 == ((signed short int) (((min (var_1_12 , var_1_87)) - 5) - var_1_34))) : (var_1_85 == ((signed short int) var_1_38))) : 1)) && ((var_1_61 < var_1_64) ? (var_1_88 == ((unsigned short int) var_1_87)) : (var_1_88 == ((unsigned short int) 10000)))) && (var_1_89 == ((signed long int) var_1_10))) && (var_1_90 == ((unsigned short int) var_1_37))) && (var_1_91 == ((unsigned long int) var_1_65))) && (var_1_92 == ((unsigned short int) var_1_62))) && (var_1_93 == ((float) var_1_57))) && (var_1_94 == ((signed long int) var_1_95))) && (var_1_77 ? (var_1_96 == ((unsigned long int) var_1_76)) : 1)) && (var_1_97 == ((signed short int) -1))) && (var_1_66 ? (var_1_98 == ((signed char) var_1_24)) : (var_1_98 == ((signed char) var_1_51)))) && (var_1_77 ? (var_1_99 == ((unsigned char) var_1_37)) : 1)) && (var_1_79 ? (var_1_100 == ((signed short int) var_1_86)) : (var_1_100 == ((signed short int) var_1_31)))) && (var_1_72 ? (var_1_101 == ((unsigned short int) var_1_92)) : (var_1_101 == ((unsigned short int) var_1_32)))) && (var_1_102 == ((float) var_1_18))) && (var_1_41 ? (var_1_103 == ((signed long int) var_1_10)) : (var_1_103 == ((signed long int) -10)))) && (last_1_var_1_26 ? (var_1_104 == ((double) var_1_56)) : (var_1_104 == ((double) var_1_57)))) && (var_1_79 ? (var_1_105 == ((unsigned char) (abs (var_1_86)))) : (((var_1_31 % var_1_86) != (var_1_51 ^ var_1_24)) ? (var_1_105 == ((unsigned char) var_1_51)) : (var_1_105 == ((unsigned char) var_1_35))))
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
