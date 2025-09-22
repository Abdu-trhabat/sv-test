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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Amount500.c", 13, "reach_error"); }
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
float var_1_3 = 9.75;
float var_1_4 = 0.8;
float var_1_7 = 1.25;
float var_1_8 = 0.0;
float var_1_9 = 4.25;
signed char var_1_12 = 4;
signed char var_1_13 = 100;
signed char var_1_14 = 8;
signed char var_1_15 = 10;
signed char var_1_16 = 5;
signed char var_1_17 = -25;
signed char var_1_18 = -2;
signed char var_1_19 = -100;
unsigned short int var_1_20 = 32;
unsigned short int var_1_22 = 54189;
unsigned short int var_1_23 = 25;
signed short int var_1_24 = 5;
unsigned long int var_1_25 = 8;
unsigned long int var_1_26 = 3283602614;
float var_1_27 = 16.2;
float var_1_28 = 63.765;
float var_1_29 = 0.0;
float var_1_30 = 4.05;
float var_1_31 = 0.0;
float var_1_32 = 1.5;
float var_1_33 = 255.4;
unsigned char var_1_34 = 0;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 200;
double var_1_38 = 32.6;
double var_1_39 = 63.05;
double var_1_40 = 255.2;
signed short int var_1_41 = -5;
unsigned long int var_1_42 = 0;
signed short int var_1_43 = 0;
signed long int var_1_44 = -8;
signed short int var_1_45 = -128;
signed short int var_1_46 = 25;
signed short int var_1_47 = 10000;
unsigned long int var_1_48 = 25;
unsigned long int var_1_49 = 1681720890;
unsigned long int var_1_50 = 256;
unsigned short int var_1_51 = 2;
signed char var_1_52 = 1;
double var_1_54 = 3.5;
signed long int var_1_55 = -10;
signed long int var_1_56 = 32;
signed long int var_1_57 = 1809380711;
signed long int var_1_58 = 1136500703;
signed char var_1_59 = -1;
float var_1_60 = 100.25;
unsigned long int var_1_61 = 1;
signed long int var_1_62 = -32;
signed long int var_1_63 = -256;
signed long int var_1_64 = 1;
unsigned short int var_1_65 = 64;
unsigned short int var_1_66 = 17552;
unsigned short int var_1_67 = 16;
unsigned short int var_1_68 = 0;
float var_1_69 = 999999.25;
float var_1_72 = 4.6;
float var_1_73 = 500.25;
signed short int var_1_74 = 8;
unsigned short int var_1_75 = 50;
unsigned short int var_1_76 = 25;
signed char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 1;
unsigned long int var_1_80 = 100;
float var_1_81 = 0.8;
unsigned char var_1_82 = 128;
unsigned char var_1_83 = 5;
signed short int var_1_84 = 64;
float var_1_85 = 4.25;
signed short int var_1_86 = 8;
signed short int var_1_87 = -50;
unsigned short int var_1_88 = 10;
float var_1_89 = 0.0;
float var_1_90 = 10.6;
unsigned short int var_1_91 = 0;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 0;
signed short int var_1_94 = -16;
signed short int var_1_95 = -32;
signed char var_1_96 = 1;
unsigned char var_1_97 = 0;
unsigned short int var_1_98 = 64;
signed short int var_1_99 = -50;
unsigned char var_1_100 = 0;
unsigned long int var_1_101 = 256;
signed long int var_1_102 = -16;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_20 = 32;
signed short int last_1_var_1_43 = 0;
unsigned long int last_1_var_1_48 = 25;
unsigned short int last_1_var_1_51 = 2;
double last_1_var_1_54 = 3.5;
signed long int last_1_var_1_55 = -10;
signed long int last_1_var_1_62 = -32;
float last_1_var_1_69 = 999999.25;
unsigned short int last_1_var_1_75 = 50;
unsigned short int last_1_var_1_91 = 0;
unsigned char last_1_var_1_92 = 1;
unsigned char last_1_var_1_100 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch156Amount500
	signed long int stepLocal_4 = 16;
	unsigned char stepLocal_3 = last_1_var_1_100;
	if (stepLocal_4 != (var_1_13 + (min (last_1_var_1_43 , -8)))) {
		if ((last_1_var_1_69 + var_1_9) >= var_1_4) {
			var_1_25 = (var_1_26 - (max (var_1_15 , var_1_13)));
		} else {
			if (((last_1_var_1_43 + var_1_23) >= (last_1_var_1_51 + var_1_22)) || stepLocal_3) {
				if (last_1_var_1_100) {
					var_1_25 = var_1_23;
				} else {
					var_1_25 = var_1_15;
				}
			} else {
				var_1_25 = var_1_15;
			}
		}
	}


	// From: Req27Batch156Amount500
	signed long int stepLocal_25 = last_1_var_1_20;
	unsigned long int stepLocal_24 = last_1_var_1_48;
	if (last_1_var_1_92) {
		if (var_1_13 <= stepLocal_25) {
			var_1_75 = (var_1_14 + var_1_52);
		} else {
			if (stepLocal_24 > var_1_23) {
				var_1_75 = (var_1_22 - var_1_76);
			} else {
				if (var_1_31 != (var_1_72 + last_1_var_1_54)) {
					var_1_75 = var_1_66;
				} else {
					var_1_75 = (last_1_var_1_75 + var_1_52);
				}
			}
		}
	}


	// From: Req45Batch156Amount500
	var_1_99 = var_1_75;


	// From: Req29Batch156Amount500
	signed long int stepLocal_29 = var_1_56;
	signed long int stepLocal_28 = last_1_var_1_91;
	if (last_1_var_1_62 > stepLocal_28) {
		var_1_78 = var_1_79;
	} else {
		if ((last_1_var_1_55 & (min (last_1_var_1_55 , var_1_22))) >= stepLocal_29) {
			var_1_78 = ((var_1_16 >= var_1_26) || var_1_79);
		}
	}


	// From: Req43Batch156Amount500
	if (var_1_78) {
		var_1_97 = var_1_79;
	}


	// From: Req8Batch156Amount500
	var_1_38 = ((max (var_1_39 , var_1_29)) + var_1_40);


	// From: Req13Batch156Amount500
	unsigned char stepLocal_10 = var_1_78;
	signed long int stepLocal_9 = 500;
	if (stepLocal_9 == ((var_1_23 - var_1_15) + var_1_18)) {
		if ((var_1_25 != var_1_23) && stepLocal_10) {
			var_1_45 = (var_1_18 + var_1_14);
		} else {
			if (((var_1_9 - var_1_33) / var_1_3) < var_1_30) {
				var_1_45 = var_1_15;
			}
		}
	}


	// From: Req17Batch156Amount500
	if (100u > var_1_47) {
		var_1_54 = (max (var_1_40 , 256.6));
	}


	// From: Req26Batch156Amount500
	var_1_74 = (var_1_14 + var_1_18);


	// From: Req33Batch156Amount500
	if (var_1_3 > (var_1_31 * var_1_4)) {
		var_1_84 = (var_1_15 + var_1_67);
	}


	// From: Req36Batch156Amount500
	if (var_1_7 < (var_1_8 - (var_1_89 - var_1_9))) {
		var_1_88 = (abs (var_1_67));
	} else {
		var_1_88 = (max ((abs (var_1_74)) , var_1_67));
	}


	// From: Req37Batch156Amount500
	if (var_1_38 != var_1_72) {
		var_1_90 = (var_1_30 - var_1_33);
	} else {
		if ((var_1_31 - var_1_28) >= var_1_89) {
			var_1_90 = var_1_40;
		} else {
			var_1_90 = var_1_30;
		}
	}


	// From: Req38Batch156Amount500
	if (var_1_79) {
		var_1_91 = var_1_66;
	} else {
		var_1_91 = 2;
	}


	// From: Req42Batch156Amount500
	var_1_96 = var_1_83;


	// From: Req44Batch156Amount500
	if (var_1_79) {
		var_1_98 = var_1_74;
	}


	// From: Req48Batch156Amount500
	var_1_102 = var_1_58;


	// From: Req22Batch156Amount500
	if (var_1_78) {
		var_1_62 = (min (((var_1_47 + var_1_12) + var_1_75) , (min (var_1_18 , (min (var_1_57 , var_1_63))))));
	} else {
		var_1_62 = (((min (var_1_64 , 16)) + var_1_47) - (16 + var_1_98));
	}


	// From: Req32Batch156Amount500
	signed long int stepLocal_32 = (~ var_1_62) | (var_1_14 << 1u);
	if (var_1_47 < stepLocal_32) {
		var_1_82 = ((2 + var_1_15) + (32 + var_1_16));
	} else {
		var_1_82 = ((var_1_13 - (var_1_15 + var_1_83)) + var_1_16);
	}


	// From: Req46Batch156Amount500
	if (var_1_97) {
		var_1_100 = var_1_93;
	}


	// From: Req2Batch156Amount500
	unsigned char stepLocal_2 = var_1_100;
	if (! var_1_100) {
		if (stepLocal_2 && (var_1_78 && (var_1_3 < var_1_9))) {
			var_1_20 = (min (var_1_16 , (var_1_22 - var_1_23)));
		}
	} else {
		var_1_20 = (var_1_22 - (var_1_15 + (min (var_1_14 , var_1_16))));
	}


	// From: Req6Batch156Amount500
	unsigned char stepLocal_5 = var_1_100 || var_1_78;
	if (! (! var_1_100)) {
		if (var_1_97 || stepLocal_5) {
			var_1_34 = (min (var_1_14 , var_1_15));
		}
	} else {
		var_1_34 = (max ((min (var_1_15 , var_1_14)) , var_1_13));
	}


	// From: Req23Batch156Amount500
	if (var_1_100) {
		var_1_65 = (55141 - (var_1_66 - var_1_67));
	}


	// From: Req28Batch156Amount500
	unsigned long int stepLocal_27 = (var_1_26 + -5) / (max (var_1_19 , var_1_13));
	unsigned char stepLocal_26 = var_1_78;
	if (stepLocal_27 <= var_1_57) {
		if (stepLocal_26 || var_1_100) {
			var_1_77 = -8;
		}
	}


	// From: Req30Batch156Amount500
	unsigned long int stepLocal_30 = var_1_25;
	if (stepLocal_30 < var_1_37) {
		var_1_80 = var_1_62;
	} else {
		var_1_80 = ((var_1_57 - (var_1_47 + var_1_62)) + (1518325794u - 256u));
	}


	// From: Req31Batch156Amount500
	unsigned short int stepLocal_31 = var_1_98;
	if (var_1_52 >= stepLocal_31) {
		var_1_81 = (var_1_29 - var_1_31);
	} else {
		if (! (! (var_1_39 <= var_1_73))) {
			var_1_81 = (var_1_32 + (max (var_1_73 , (var_1_30 - var_1_28))));
		} else {
			var_1_81 = (((max (24.625f , var_1_30)) + var_1_33) + 0.6f);
		}
	}


	// From: Req41Batch156Amount500
	if (var_1_79) {
		var_1_95 = var_1_18;
	} else {
		var_1_95 = var_1_96;
	}


	// From: Req47Batch156Amount500
	unsigned char stepLocal_34 = var_1_93;
	if (var_1_100 || stepLocal_34) {
		if (var_1_79) {
			var_1_101 = (min ((max (var_1_83 , var_1_15)) , (abs (var_1_102))));
		} else {
			var_1_101 = (var_1_66 + var_1_52);
		}
	}


	// From: Req10Batch156Amount500
	var_1_42 = (max (var_1_82 , ((max (var_1_16 , var_1_23)) + (min (var_1_99 , var_1_13)))));


	// From: Req34Batch156Amount500
	signed long int stepLocal_33 = ~ (var_1_91 / var_1_19);
	if (stepLocal_33 > var_1_42) {
		var_1_85 = (abs (max (var_1_33 , var_1_39)));
	} else {
		var_1_85 = (min (var_1_28 , (max (var_1_33 , (var_1_30 - var_1_9)))));
	}


	// From: Req39Batch156Amount500
	if (var_1_100) {
		var_1_92 = var_1_93;
	}


	// From: Req18Batch156Amount500
	if (64 < var_1_17) {
		if (var_1_92) {
			if ((5.2f / (abs (var_1_4))) > var_1_30) {
				if (var_1_47 >= var_1_52) {
					var_1_55 = (max ((max ((var_1_56 + -10000000) , (var_1_12 - var_1_16))) , (max (var_1_74 , var_1_37))));
				} else {
					var_1_55 = (min (var_1_19 , last_1_var_1_55));
				}
			}
		} else {
			var_1_55 = (((var_1_57 - var_1_52) - (var_1_15 + var_1_13)) - (var_1_58 - 32));
		}
	}


	// From: Req5Batch156Amount500
	if (var_1_3 <= var_1_81) {
		var_1_27 = ((var_1_28 + (var_1_29 - var_1_30)) - (var_1_31 - (var_1_32 + var_1_33)));
	}


	// From: Req7Batch156Amount500
	unsigned long int stepLocal_8 = var_1_80 / (max (var_1_19 , var_1_22));
	signed long int stepLocal_7 = var_1_14 - var_1_16;
	signed long int stepLocal_6 = -128;
	if (var_1_16 >= stepLocal_6) {
		if (var_1_80 <= stepLocal_7) {
			var_1_36 = (var_1_37 - var_1_13);
		} else {
			var_1_36 = var_1_13;
		}
	} else {
		if (stepLocal_8 < (var_1_88 / var_1_13)) {
			var_1_36 = (var_1_14 + var_1_15);
		}
	}


	// From: Req11Batch156Amount500
	if ((var_1_37 - var_1_16) > (min (var_1_42 , var_1_12))) {
		var_1_43 = var_1_12;
	} else {
		var_1_43 = (var_1_14 + var_1_18);
	}


	// From: Req12Batch156Amount500
	if (((min (32.3 , var_1_54)) + (var_1_30 * var_1_38)) < var_1_39) {
		if (! var_1_100) {
			var_1_44 = (var_1_75 - (max (var_1_13 , var_1_22)));
		}
	} else {
		var_1_44 = (var_1_37 - var_1_43);
	}


	// From: Req14Batch156Amount500
	signed long int stepLocal_12 = (var_1_14 << var_1_26) + -2;
	unsigned long int stepLocal_11 = var_1_101;
	if (stepLocal_11 <= (var_1_26 / var_1_22)) {
		if (var_1_39 > var_1_3) {
			var_1_46 = var_1_18;
		} else {
			if (stepLocal_12 > var_1_37) {
				var_1_46 = (var_1_14 + (var_1_15 - (var_1_47 - var_1_16)));
			} else {
				var_1_46 = var_1_19;
			}
		}
	} else {
		var_1_46 = var_1_47;
	}


	// From: Req19Batch156Amount500
	unsigned long int stepLocal_15 = var_1_25 * 64;
	if (var_1_95 <= stepLocal_15) {
		var_1_59 = (min (var_1_17 , (max (10 , var_1_12))));
	} else {
		var_1_59 = (var_1_12 - var_1_14);
	}


	// From: Req20Batch156Amount500
	unsigned long int stepLocal_16 = var_1_80;
	if (((1u / 200u) + var_1_25) <= stepLocal_16) {
		var_1_60 = ((var_1_30 + var_1_33) + (max ((5.2f + var_1_32) , var_1_40)));
	}


	// From: Req35Batch156Amount500
	if ((100000u & var_1_83) <= (var_1_67 >> 1)) {
		var_1_86 = var_1_87;
	} else {
		if (var_1_92 || var_1_79) {
			var_1_86 = (var_1_83 - var_1_98);
		} else {
			var_1_86 = (min ((var_1_99 + var_1_14) , var_1_15));
		}
	}


	// From: Req40Batch156Amount500
	if (var_1_92) {
		var_1_94 = var_1_65;
	} else {
		var_1_94 = var_1_101;
	}


	// From: Req15Batch156Amount500
	if ((abs (var_1_85)) <= var_1_9) {
		var_1_48 = ((var_1_49 - var_1_22) + var_1_37);
	} else {
		var_1_48 = (var_1_50 + var_1_47);
	}


	// From: Req3Batch156Amount500
	if (var_1_27 >= var_1_90) {
		if (var_1_15 <= ((var_1_13 - var_1_16) - var_1_14)) {
			var_1_24 = 10;
		} else {
			var_1_24 = (var_1_15 - var_1_16);
		}
	} else {
		if (var_1_92) {
			var_1_24 = (var_1_12 - var_1_16);
		} else {
			var_1_24 = (min ((abs (var_1_15)) , var_1_17));
		}
	}


	// From: Req9Batch156Amount500
	if (var_1_78) {
		if (var_1_3 > ((var_1_33 + 256.6f) * var_1_40)) {
			if (var_1_92) {
				if (var_1_92) {
					var_1_41 = (max (var_1_16 , (max (var_1_19 , var_1_86))));
				} else {
					var_1_41 = var_1_25;
				}
			} else {
				var_1_41 = 256;
			}
		} else {
			var_1_41 = (var_1_19 + var_1_14);
		}
	}


	// From: Req16Batch156Amount500
	unsigned long int stepLocal_14 = var_1_48;
	unsigned long int stepLocal_13 = var_1_101 * var_1_95;
	if ((max (var_1_20 , (var_1_14 * var_1_19))) <= stepLocal_13) {
		if (((var_1_88 % var_1_37) + (var_1_50 / var_1_47)) <= stepLocal_14) {
			var_1_51 = ((58309 - (64 + var_1_95)) - var_1_15);
		}
	}


	// From: Req21Batch156Amount500
	if (var_1_78) {
		if (((max (var_1_52 , var_1_102)) ^ (- var_1_57)) >= (abs (var_1_23 - var_1_22))) {
			var_1_61 = var_1_37;
		} else {
			if (var_1_97 || (var_1_54 < (50.5f - var_1_9))) {
				var_1_61 = ((var_1_49 - var_1_43) + (max ((min (var_1_22 , var_1_37)) , (max (var_1_48 , 1000000u)))));
			}
		}
	}


	// From: Req24Batch156Amount500
	unsigned long int stepLocal_19 = var_1_62 | var_1_101;
	unsigned long int stepLocal_18 = var_1_61 | var_1_55;
	signed char stepLocal_17 = var_1_17;
	if ((min (var_1_66 , (abs (var_1_25)))) > stepLocal_19) {
		if (var_1_23 > stepLocal_18) {
			var_1_68 = (var_1_22 - var_1_67);
		} else {
			if ((var_1_32 - var_1_8) != var_1_3) {
				var_1_68 = (max ((min (var_1_23 , var_1_52)) , (min (256 , var_1_66))));
			} else {
				var_1_68 = var_1_62;
			}
		}
	} else {
		if (var_1_97) {
			if (stepLocal_17 != var_1_55) {
				var_1_68 = (55254 - var_1_52);
			} else {
				var_1_68 = (min (var_1_13 , var_1_14));
			}
		}
	}


	// From: Req25Batch156Amount500
	unsigned char stepLocal_23 = var_1_100;
	signed long int stepLocal_22 = - (- var_1_75);
	unsigned long int stepLocal_21 = var_1_25;
	signed char stepLocal_20 = var_1_19;
	if ((var_1_61 > var_1_101) && stepLocal_23) {
		if (var_1_100) {
			if (stepLocal_22 > var_1_55) {
				var_1_69 = var_1_32;
			} else {
				if ((var_1_37 - (max (var_1_13 , var_1_15))) >= stepLocal_21) {
					var_1_69 = (min ((var_1_29 + (var_1_32 - var_1_28)) , (var_1_33 + var_1_30)));
				} else {
					var_1_69 = (min (var_1_29 , ((var_1_31 - 4.8f) - var_1_28)));
				}
			}
		} else {
			if (stepLocal_20 > ((var_1_16 - var_1_14) & (var_1_86 / var_1_13))) {
				if (var_1_100) {
					var_1_69 = (var_1_29 - var_1_72);
				} else {
					var_1_69 = (max (((var_1_28 - var_1_33) + var_1_29) , 49.5f));
				}
			} else {
				if (! var_1_78) {
					var_1_69 = (max ((var_1_40 + (var_1_33 + var_1_73)) , (var_1_31 - var_1_30)));
				}
			}
		}
	} else {
		var_1_69 = (max ((var_1_30 - var_1_9) , var_1_29));
	}


	// From: Req1Batch156Amount500
	unsigned char stepLocal_1 = ! (var_1_9 == var_1_81);
	signed long int stepLocal_0 = var_1_13 / var_1_19;
	if ((var_1_85 / (min (var_1_3 , var_1_4))) >= (var_1_90 * var_1_69)) {
		if (var_1_4 > (var_1_7 - (var_1_8 - var_1_9))) {
			if (stepLocal_1 || var_1_78) {
				var_1_1 = (var_1_12 - (var_1_13 - (var_1_14 + var_1_15)));
			} else {
				var_1_1 = (var_1_15 + var_1_14);
			}
		} else {
			var_1_1 = (min ((var_1_15 + -50) , ((var_1_14 - var_1_16) + (max (var_1_17 , var_1_18)))));
		}
	} else {
		if (var_1_17 > stepLocal_0) {
			var_1_1 = (min (var_1_18 , (var_1_14 - var_1_13)));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 4611686.018427388000e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427388000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 2305843.009213691400e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 8191);
	assume_abort_if_not(var_1_47 <= 16383);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= -1073741823);
	assume_abort_if_not(var_1_56 <= 1073741823);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= 1610612734);
	assume_abort_if_not(var_1_57 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= -2147483647);
	assume_abort_if_not(var_1_63 <= 2147483646);
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1073741823);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 16383);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 16383);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -230584.3009213691400e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 31);
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= -32767);
	assume_abort_if_not(var_1_87 <= 32766);
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 4611686.018427388000e+12F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854776000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_100 = var_1_100;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_85 / (min (var_1_3 , var_1_4))) >= (var_1_90 * var_1_69)) ? ((var_1_4 > (var_1_7 - (var_1_8 - var_1_9))) ? (((! (var_1_9 == var_1_81)) || var_1_78) ? (var_1_1 == ((signed char) (var_1_12 - (var_1_13 - (var_1_14 + var_1_15))))) : (var_1_1 == ((signed char) (var_1_15 + var_1_14)))) : (var_1_1 == ((signed char) (min ((var_1_15 + -50) , ((var_1_14 - var_1_16) + (max (var_1_17 , var_1_18)))))))) : ((var_1_17 > (var_1_13 / var_1_19)) ? (var_1_1 == ((signed char) (min (var_1_18 , (var_1_14 - var_1_13))))) : 1)) && ((! var_1_100) ? ((var_1_100 && (var_1_78 && (var_1_3 < var_1_9))) ? (var_1_20 == ((unsigned short int) (min (var_1_16 , (var_1_22 - var_1_23))))) : 1) : (var_1_20 == ((unsigned short int) (var_1_22 - (var_1_15 + (min (var_1_14 , var_1_16)))))))) && ((var_1_27 >= var_1_90) ? ((var_1_15 <= ((var_1_13 - var_1_16) - var_1_14)) ? (var_1_24 == ((signed short int) 10)) : (var_1_24 == ((signed short int) (var_1_15 - var_1_16)))) : (var_1_92 ? (var_1_24 == ((signed short int) (var_1_12 - var_1_16))) : (var_1_24 == ((signed short int) (min ((abs (var_1_15)) , var_1_17))))))) && ((16 != (var_1_13 + (min (last_1_var_1_43 , -8)))) ? (((last_1_var_1_69 + var_1_9) >= var_1_4) ? (var_1_25 == ((unsigned long int) (var_1_26 - (max (var_1_15 , var_1_13))))) : ((((last_1_var_1_43 + var_1_23) >= (last_1_var_1_51 + var_1_22)) || last_1_var_1_100) ? (last_1_var_1_100 ? (var_1_25 == ((unsigned long int) var_1_23)) : (var_1_25 == ((unsigned long int) var_1_15))) : (var_1_25 == ((unsigned long int) var_1_15)))) : 1)) && ((var_1_3 <= var_1_81) ? (var_1_27 == ((float) ((var_1_28 + (var_1_29 - var_1_30)) - (var_1_31 - (var_1_32 + var_1_33))))) : 1)) && ((! (! var_1_100)) ? ((var_1_97 || (var_1_100 || var_1_78)) ? (var_1_34 == ((unsigned char) (min (var_1_14 , var_1_15)))) : 1) : (var_1_34 == ((unsigned char) (max ((min (var_1_15 , var_1_14)) , var_1_13)))))) && ((var_1_16 >= -128) ? ((var_1_80 <= (var_1_14 - var_1_16)) ? (var_1_36 == ((unsigned char) (var_1_37 - var_1_13))) : (var_1_36 == ((unsigned char) var_1_13))) : (((var_1_80 / (max (var_1_19 , var_1_22))) < (var_1_88 / var_1_13)) ? (var_1_36 == ((unsigned char) (var_1_14 + var_1_15))) : 1))) && (var_1_38 == ((double) ((max (var_1_39 , var_1_29)) + var_1_40)))) && (var_1_78 ? ((var_1_3 > ((var_1_33 + 256.6f) * var_1_40)) ? (var_1_92 ? (var_1_92 ? (var_1_41 == ((signed short int) (max (var_1_16 , (max (var_1_19 , var_1_86)))))) : (var_1_41 == ((signed short int) var_1_25))) : (var_1_41 == ((signed short int) 256))) : (var_1_41 == ((signed short int) (var_1_19 + var_1_14)))) : 1)) && (var_1_42 == ((unsigned long int) (max (var_1_82 , ((max (var_1_16 , var_1_23)) + (min (var_1_99 , var_1_13)))))))) && (((var_1_37 - var_1_16) > (min (var_1_42 , var_1_12))) ? (var_1_43 == ((signed short int) var_1_12)) : (var_1_43 == ((signed short int) (var_1_14 + var_1_18))))) && ((((min (32.3 , var_1_54)) + (var_1_30 * var_1_38)) < var_1_39) ? ((! var_1_100) ? (var_1_44 == ((signed long int) (var_1_75 - (max (var_1_13 , var_1_22))))) : 1) : (var_1_44 == ((signed long int) (var_1_37 - var_1_43))))) && ((500 == ((var_1_23 - var_1_15) + var_1_18)) ? (((var_1_25 != var_1_23) && var_1_78) ? (var_1_45 == ((signed short int) (var_1_18 + var_1_14))) : ((((var_1_9 - var_1_33) / var_1_3) < var_1_30) ? (var_1_45 == ((signed short int) var_1_15)) : 1)) : 1)) && ((var_1_101 <= (var_1_26 / var_1_22)) ? ((var_1_39 > var_1_3) ? (var_1_46 == ((signed short int) var_1_18)) : ((((var_1_14 << var_1_26) + -2) > var_1_37) ? (var_1_46 == ((signed short int) (var_1_14 + (var_1_15 - (var_1_47 - var_1_16))))) : (var_1_46 == ((signed short int) var_1_19)))) : (var_1_46 == ((signed short int) var_1_47)))) && (((abs (var_1_85)) <= var_1_9) ? (var_1_48 == ((unsigned long int) ((var_1_49 - var_1_22) + var_1_37))) : (var_1_48 == ((unsigned long int) (var_1_50 + var_1_47))))) && (((max (var_1_20 , (var_1_14 * var_1_19))) <= (var_1_101 * var_1_95)) ? ((((var_1_88 % var_1_37) + (var_1_50 / var_1_47)) <= var_1_48) ? (var_1_51 == ((unsigned short int) ((58309 - (64 + var_1_95)) - var_1_15))) : 1) : 1)) && ((100u > var_1_47) ? (var_1_54 == ((double) (max (var_1_40 , 256.6)))) : 1)) && ((64 < var_1_17) ? (var_1_92 ? (((5.2f / (abs (var_1_4))) > var_1_30) ? ((var_1_47 >= var_1_52) ? (var_1_55 == ((signed long int) (max ((max ((var_1_56 + -10000000) , (var_1_12 - var_1_16))) , (max (var_1_74 , var_1_37)))))) : (var_1_55 == ((signed long int) (min (var_1_19 , last_1_var_1_55))))) : 1) : (var_1_55 == ((signed long int) (((var_1_57 - var_1_52) - (var_1_15 + var_1_13)) - (var_1_58 - 32))))) : 1)) && ((var_1_95 <= (var_1_25 * 64)) ? (var_1_59 == ((signed char) (min (var_1_17 , (max (10 , var_1_12)))))) : (var_1_59 == ((signed char) (var_1_12 - var_1_14))))) && ((((1u / 200u) + var_1_25) <= var_1_80) ? (var_1_60 == ((float) ((var_1_30 + var_1_33) + (max ((5.2f + var_1_32) , var_1_40))))) : 1)) && (var_1_78 ? ((((max (var_1_52 , var_1_102)) ^ (- var_1_57)) >= (abs (var_1_23 - var_1_22))) ? (var_1_61 == ((unsigned long int) var_1_37)) : ((var_1_97 || (var_1_54 < (50.5f - var_1_9))) ? (var_1_61 == ((unsigned long int) ((var_1_49 - var_1_43) + (max ((min (var_1_22 , var_1_37)) , (max (var_1_48 , 1000000u))))))) : 1)) : 1)) && (var_1_78 ? (var_1_62 == ((signed long int) (min (((var_1_47 + var_1_12) + var_1_75) , (min (var_1_18 , (min (var_1_57 , var_1_63)))))))) : (var_1_62 == ((signed long int) (((min (var_1_64 , 16)) + var_1_47) - (16 + var_1_98)))))) && (var_1_100 ? (var_1_65 == ((unsigned short int) (55141 - (var_1_66 - var_1_67)))) : 1)) && (((min (var_1_66 , (abs (var_1_25)))) > (var_1_62 | var_1_101)) ? ((var_1_23 > (var_1_61 | var_1_55)) ? (var_1_68 == ((unsigned short int) (var_1_22 - var_1_67))) : (((var_1_32 - var_1_8) != var_1_3) ? (var_1_68 == ((unsigned short int) (max ((min (var_1_23 , var_1_52)) , (min (256 , var_1_66)))))) : (var_1_68 == ((unsigned short int) var_1_62)))) : (var_1_97 ? ((var_1_17 != var_1_55) ? (var_1_68 == ((unsigned short int) (55254 - var_1_52))) : (var_1_68 == ((unsigned short int) (min (var_1_13 , var_1_14))))) : 1))) && (((var_1_61 > var_1_101) && var_1_100) ? (var_1_100 ? (((- (- var_1_75)) > var_1_55) ? (var_1_69 == ((float) var_1_32)) : (((var_1_37 - (max (var_1_13 , var_1_15))) >= var_1_25) ? (var_1_69 == ((float) (min ((var_1_29 + (var_1_32 - var_1_28)) , (var_1_33 + var_1_30))))) : (var_1_69 == ((float) (min (var_1_29 , ((var_1_31 - 4.8f) - var_1_28))))))) : ((var_1_19 > ((var_1_16 - var_1_14) & (var_1_86 / var_1_13))) ? (var_1_100 ? (var_1_69 == ((float) (var_1_29 - var_1_72))) : (var_1_69 == ((float) (max (((var_1_28 - var_1_33) + var_1_29) , 49.5f))))) : ((! var_1_78) ? (var_1_69 == ((float) (max ((var_1_40 + (var_1_33 + var_1_73)) , (var_1_31 - var_1_30))))) : 1))) : (var_1_69 == ((float) (max ((var_1_30 - var_1_9) , var_1_29)))))) && (var_1_74 == ((signed short int) (var_1_14 + var_1_18)))) && (last_1_var_1_92 ? ((var_1_13 <= last_1_var_1_20) ? (var_1_75 == ((unsigned short int) (var_1_14 + var_1_52))) : ((last_1_var_1_48 > var_1_23) ? (var_1_75 == ((unsigned short int) (var_1_22 - var_1_76))) : ((var_1_31 != (var_1_72 + last_1_var_1_54)) ? (var_1_75 == ((unsigned short int) var_1_66)) : (var_1_75 == ((unsigned short int) (last_1_var_1_75 + var_1_52)))))) : 1)) && ((((var_1_26 + -5) / (max (var_1_19 , var_1_13))) <= var_1_57) ? ((var_1_78 || var_1_100) ? (var_1_77 == ((signed char) -8)) : 1) : 1)) && ((last_1_var_1_62 > last_1_var_1_91) ? (var_1_78 == ((unsigned char) var_1_79)) : (((last_1_var_1_55 & (min (last_1_var_1_55 , var_1_22))) >= var_1_56) ? (var_1_78 == ((unsigned char) ((var_1_16 >= var_1_26) || var_1_79))) : 1))) && ((var_1_25 < var_1_37) ? (var_1_80 == ((unsigned long int) var_1_62)) : (var_1_80 == ((unsigned long int) ((var_1_57 - (var_1_47 + var_1_62)) + (1518325794u - 256u)))))) && ((var_1_52 >= var_1_98) ? (var_1_81 == ((float) (var_1_29 - var_1_31))) : ((! (! (var_1_39 <= var_1_73))) ? (var_1_81 == ((float) (var_1_32 + (max (var_1_73 , (var_1_30 - var_1_28)))))) : (var_1_81 == ((float) (((max (24.625f , var_1_30)) + var_1_33) + 0.6f)))))) && ((var_1_47 < ((~ var_1_62) | (var_1_14 << 1u))) ? (var_1_82 == ((unsigned char) ((2 + var_1_15) + (32 + var_1_16)))) : (var_1_82 == ((unsigned char) ((var_1_13 - (var_1_15 + var_1_83)) + var_1_16))))) && ((var_1_3 > (var_1_31 * var_1_4)) ? (var_1_84 == ((signed short int) (var_1_15 + var_1_67))) : 1)) && (((~ (var_1_91 / var_1_19)) > var_1_42) ? (var_1_85 == ((float) (abs (max (var_1_33 , var_1_39))))) : (var_1_85 == ((float) (min (var_1_28 , (max (var_1_33 , (var_1_30 - var_1_9))))))))) && (((100000u & var_1_83) <= (var_1_67 >> 1)) ? (var_1_86 == ((signed short int) var_1_87)) : ((var_1_92 || var_1_79) ? (var_1_86 == ((signed short int) (var_1_83 - var_1_98))) : (var_1_86 == ((signed short int) (min ((var_1_99 + var_1_14) , var_1_15))))))) && ((var_1_7 < (var_1_8 - (var_1_89 - var_1_9))) ? (var_1_88 == ((unsigned short int) (abs (var_1_67)))) : (var_1_88 == ((unsigned short int) (max ((abs (var_1_74)) , var_1_67)))))) && ((var_1_38 != var_1_72) ? (var_1_90 == ((float) (var_1_30 - var_1_33))) : (((var_1_31 - var_1_28) >= var_1_89) ? (var_1_90 == ((float) var_1_40)) : (var_1_90 == ((float) var_1_30))))) && (var_1_79 ? (var_1_91 == ((unsigned short int) var_1_66)) : (var_1_91 == ((unsigned short int) 2)))) && (var_1_100 ? (var_1_92 == ((unsigned char) var_1_93)) : 1)) && (var_1_92 ? (var_1_94 == ((signed short int) var_1_65)) : (var_1_94 == ((signed short int) var_1_101)))) && (var_1_79 ? (var_1_95 == ((signed short int) var_1_18)) : (var_1_95 == ((signed short int) var_1_96)))) && (var_1_96 == ((signed char) var_1_83))) && (var_1_78 ? (var_1_97 == ((unsigned char) var_1_79)) : 1)) && (var_1_79 ? (var_1_98 == ((unsigned short int) var_1_74)) : 1)) && (var_1_99 == ((signed short int) var_1_75))) && (var_1_97 ? (var_1_100 == ((unsigned char) var_1_93)) : 1)) && ((var_1_100 || var_1_93) ? (var_1_79 ? (var_1_101 == ((unsigned long int) (min ((max (var_1_83 , var_1_15)) , (abs (var_1_102)))))) : (var_1_101 == ((unsigned long int) (var_1_66 + var_1_52)))) : 1)) && (var_1_102 == ((signed long int) var_1_58))
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
