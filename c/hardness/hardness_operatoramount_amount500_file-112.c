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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 999999999.7;
float var_1_4 = 0.0;
float var_1_5 = 0.5;
float var_1_6 = 0.0;
float var_1_7 = 999999999999.5;
signed char var_1_8 = -32;
signed char var_1_10 = 0;
signed char var_1_11 = -64;
signed long int var_1_12 = -8;
signed long int var_1_13 = 1779655105;
signed short int var_1_14 = 8;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 2;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 5;
unsigned char var_1_20 = 128;
signed char var_1_21 = -5;
signed char var_1_22 = 2;
signed short int var_1_23 = -5;
signed char var_1_24 = 0;
float var_1_25 = 63.125;
signed long int var_1_26 = 2;
signed long int var_1_27 = 16;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 10;
unsigned char var_1_33 = 0;
unsigned char var_1_35 = 0;
float var_1_36 = 63.15;
float var_1_37 = 4.625;
double var_1_38 = 31.1;
double var_1_40 = 10000.875;
double var_1_41 = 32.2;
double var_1_42 = 1.4;
signed long int var_1_43 = -100000;
signed long int var_1_44 = 1000000;
unsigned char var_1_45 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
signed char var_1_50 = 4;
signed char var_1_51 = -32;
double var_1_52 = 31.4;
signed long int var_1_53 = 1;
signed long int var_1_54 = 25;
signed short int var_1_55 = -50;
signed short int var_1_56 = 128;
signed short int var_1_57 = 16;
unsigned long int var_1_58 = 2;
signed long int var_1_59 = -8;
signed long int var_1_60 = -128;
unsigned long int var_1_61 = 10;
unsigned long int var_1_62 = 3968976868;
float var_1_63 = 31.5;
float var_1_64 = 15.95;
float var_1_65 = 99.875;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 200;
unsigned char var_1_68 = 5;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 50;
unsigned char var_1_71 = 4;
unsigned char var_1_72 = 10;
unsigned char var_1_73 = 10;
unsigned char var_1_74 = 128;
signed short int var_1_75 = -8;
unsigned char var_1_76 = 0;
unsigned char var_1_78 = 50;
unsigned long int var_1_80 = 64;
unsigned long int var_1_81 = 50;
signed long int var_1_82 = -50;
float var_1_83 = 4.4;
signed char var_1_84 = -1;
signed char var_1_85 = 1;
signed char var_1_86 = 16;
unsigned char var_1_87 = 0;
float var_1_88 = 10.5;
unsigned char var_1_89 = 1;
signed short int var_1_90 = -64;
signed char var_1_91 = 100;
signed char var_1_92 = 16;
signed long int var_1_93 = -5;
unsigned short int var_1_94 = 256;
unsigned short int var_1_95 = 128;
signed char var_1_96 = 1;
float var_1_97 = 32.25;
unsigned char var_1_98 = 1;
unsigned short int var_1_99 = 4;
unsigned char var_1_100 = 0;
unsigned long int var_1_101 = 64;
unsigned long int var_1_102 = 256;
unsigned short int var_1_103 = 128;
unsigned long int var_1_104 = 8;
unsigned short int var_1_105 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = -8;
unsigned char last_1_var_1_15 = 5;
signed long int last_1_var_1_26 = 2;
signed long int last_1_var_1_31 = 10;
unsigned char last_1_var_1_33 = 0;
signed long int last_1_var_1_44 = 1000000;
unsigned char last_1_var_1_45 = 0;
signed long int last_1_var_1_53 = 1;
signed long int last_1_var_1_54 = 25;
signed short int last_1_var_1_57 = 16;
unsigned long int last_1_var_1_61 = 10;
unsigned char last_1_var_1_66 = 1;
unsigned char last_1_var_1_71 = 4;
unsigned long int last_1_var_1_80 = 64;
signed long int last_1_var_1_82 = -50;
unsigned char last_1_var_1_89 = 1;
signed short int last_1_var_1_90 = -64;
signed char last_1_var_1_91 = 100;
signed long int last_1_var_1_93 = -5;
unsigned short int last_1_var_1_94 = 256;
unsigned short int last_1_var_1_95 = 128;
unsigned char last_1_var_1_98 = 1;
unsigned short int last_1_var_1_99 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch112Amount500
	unsigned char stepLocal_26 = var_1_35;
	if (stepLocal_26 && (last_1_var_1_71 > last_1_var_1_54)) {
		var_1_57 = (var_1_20 - (max (var_1_16 , var_1_22)));
	}


	// From: Req17Batch112Amount500
	signed long int stepLocal_19 = last_1_var_1_93;
	if (! last_1_var_1_89) {
		var_1_44 = (max ((last_1_var_1_44 - var_1_20) , (max (last_1_var_1_90 , last_1_var_1_61))));
	} else {
		if (var_1_29) {
			var_1_44 = (var_1_16 + (var_1_19 - (last_1_var_1_57 + last_1_var_1_44)));
		} else {
			if (last_1_var_1_44 >= stepLocal_19) {
				var_1_44 = last_1_var_1_61;
			} else {
				var_1_44 = (min (var_1_10 , (var_1_11 + last_1_var_1_91)));
			}
		}
	}


	// From: Req28Batch112Amount500
	unsigned char stepLocal_28 = last_1_var_1_98;
	if (last_1_var_1_45) {
		if ((last_1_var_1_94 >= (last_1_var_1_15 * last_1_var_1_12)) && stepLocal_28) {
			var_1_61 = var_1_17;
		} else {
			var_1_61 = (2292933171u - (max ((last_1_var_1_71 + var_1_19) , (min (var_1_16 , last_1_var_1_53)))));
		}
	} else {
		var_1_61 = (var_1_62 - var_1_18);
	}


	// From: Req22Batch112Amount500
	signed long int stepLocal_23 = last_1_var_1_99;
	if (last_1_var_1_80 < stepLocal_23) {
		var_1_53 = (var_1_17 - last_1_var_1_57);
	}


	// From: Req50Batch112Amount500
	if (last_1_var_1_33) {
		var_1_98 = var_1_47;
	}


	// From: Req9Batch112Amount500
	if ((var_1_4 / var_1_6) >= (- var_1_7)) {
		if (var_1_98) {
			var_1_25 = (max ((var_1_5 - var_1_7) , var_1_6));
		}
	}


	// From: Req42Batch112Amount500
	if (var_1_98) {
		var_1_90 = var_1_11;
	} else {
		var_1_90 = var_1_10;
	}


	// From: Req56Batch112Amount500
	if (var_1_98) {
		var_1_104 = var_1_16;
	}


	// From: Req4Batch112Amount500
	var_1_14 = (max (var_1_11 , var_1_10));


	// From: Req6Batch112Amount500
	signed short int stepLocal_3 = var_1_14;
	if (var_1_20 <= stepLocal_3) {
		var_1_21 = (min (1 , var_1_11));
	} else {
		var_1_21 = (abs (var_1_22 - var_1_17));
	}


	// From: Req7Batch112Amount500
	if (! ((var_1_16 + var_1_20) > var_1_18)) {
		var_1_23 = (var_1_20 + var_1_21);
	} else {
		var_1_23 = (min ((abs (var_1_17)) , var_1_14));
	}


	// From: Req14Batch112Amount500
	if (var_1_104 <= var_1_20) {
		var_1_36 = ((var_1_5 - var_1_7) + var_1_37);
	}


	// From: Req21Batch112Amount500
	var_1_52 = (max ((max ((49.5 - var_1_41) , var_1_6)) , (var_1_7 + var_1_5)));


	// From: Req37Batch112Amount500
	var_1_83 = (max (var_1_40 , (min (var_1_5 , var_1_41))));


	// From: Req40Batch112Amount500
	var_1_88 = var_1_7;


	// From: Req44Batch112Amount500
	var_1_92 = var_1_72;


	// From: Req45Batch112Amount500
	var_1_93 = var_1_14;


	// From: Req46Batch112Amount500
	var_1_94 = var_1_18;


	// From: Req47Batch112Amount500
	if (var_1_30) {
		var_1_95 = last_1_var_1_95;
	} else {
		var_1_95 = var_1_73;
	}


	// From: Req48Batch112Amount500
	var_1_96 = 1;


	// From: Req49Batch112Amount500
	var_1_97 = var_1_40;


	// From: Req51Batch112Amount500
	if (var_1_47) {
		var_1_99 = var_1_69;
	}


	// From: Req52Batch112Amount500
	var_1_100 = var_1_35;


	// From: Req53Batch112Amount500
	var_1_101 = var_1_18;


	// From: Req54Batch112Amount500
	var_1_102 = 32u;


	// From: Req55Batch112Amount500
	var_1_103 = 4;


	// From: Req12Batch112Amount500
	unsigned long int stepLocal_9 = var_1_101;
	signed long int stepLocal_8 = var_1_44;
	signed long int stepLocal_7 = max (var_1_99 , (var_1_17 * var_1_53));
	if (stepLocal_8 <= (max ((var_1_10 ^ var_1_17) , var_1_16))) {
		var_1_31 = (max (var_1_16 , (var_1_53 - (var_1_94 + 8))));
	} else {
		if (stepLocal_7 < (last_1_var_1_31 % var_1_20)) {
			var_1_31 = (var_1_16 - var_1_22);
		} else {
			if (stepLocal_9 != (min (var_1_22 , last_1_var_1_31))) {
				var_1_31 = var_1_16;
			} else {
				var_1_31 = var_1_20;
			}
		}
	}


	// From: Req2Batch112Amount500
	if (var_1_100) {
		var_1_8 = (max (var_1_10 , var_1_11));
	}


	// From: Req8Batch112Amount500
	if (var_1_100) {
		if (var_1_4 != (var_1_97 * (max (255.375f , var_1_7)))) {
			var_1_24 = (abs (var_1_18));
		}
	} else {
		var_1_24 = (min (var_1_17 , (abs (var_1_18))));
	}


	// From: Req19Batch112Amount500
	var_1_49 = (! (var_1_30 || (var_1_100 || var_1_29)));


	// From: Req29Batch112Amount500
	unsigned char stepLocal_30 = var_1_30;
	signed char stepLocal_29 = var_1_10;
	if (var_1_48 || stepLocal_30) {
		if (stepLocal_29 < (-1 % var_1_27)) {
			if (((max (var_1_88 , 1.00000000000075E12)) * var_1_97) < var_1_5) {
				var_1_63 = (var_1_5 - var_1_7);
			} else {
				var_1_63 = (var_1_42 + ((var_1_64 + var_1_65) + var_1_41));
			}
		}
	}


	// From: Req31Batch112Amount500
	if (var_1_64 != 2.4f) {
		if (var_1_100) {
			var_1_71 = (var_1_67 - var_1_68);
		}
	} else {
		if (! var_1_49) {
			var_1_71 = ((var_1_18 + (var_1_72 + var_1_73)) + (max (var_1_70 , (var_1_17 + 10))));
		} else {
			var_1_71 = var_1_74;
		}
	}


	// From: Req35Batch112Amount500
	signed char stepLocal_35 = var_1_22;
	if (last_1_var_1_80 > stepLocal_35) {
		var_1_80 = var_1_81;
	} else {
		var_1_80 = (max (var_1_17 , var_1_71));
	}


	// From: Req36Batch112Amount500
	var_1_82 = ((min (var_1_74 , var_1_13)) - (max (var_1_99 , last_1_var_1_82)));


	// From: Req38Batch112Amount500
	if (var_1_88 > (- var_1_40)) {
		if (var_1_67 >= (abs (var_1_104))) {
			var_1_84 = (var_1_18 + (8 + var_1_85));
		}
	} else {
		var_1_84 = var_1_86;
	}


	// From: Req41Batch112Amount500
	if (var_1_49) {
		var_1_89 = var_1_29;
	} else {
		var_1_89 = var_1_30;
	}


	// From: Req16Batch112Amount500
	if (var_1_63 < (var_1_37 + var_1_40)) {
		var_1_43 = var_1_8;
	} else {
		var_1_43 = (var_1_57 + 128);
	}


	// From: Req15Batch112Amount500
	signed short int stepLocal_18 = var_1_14;
	signed long int stepLocal_17 = 1;
	unsigned char stepLocal_16 = var_1_88 == (var_1_6 - 1.5f);
	signed long int stepLocal_15 = 10 << var_1_13;
	if (var_1_17 <= stepLocal_18) {
		if (stepLocal_17 >= var_1_31) {
			var_1_38 = var_1_7;
		} else {
			var_1_38 = var_1_4;
		}
	} else {
		if (var_1_22 >= stepLocal_15) {
			if ((var_1_5 - var_1_7) < 127.25f) {
				if (stepLocal_16 && (var_1_93 < var_1_17)) {
					var_1_38 = (var_1_7 + (min (var_1_5 , var_1_37)));
				} else {
					var_1_38 = (((min (var_1_6 , var_1_4)) - 199.75) - (min (49.6 , 127.5)));
				}
			} else {
				var_1_38 = ((var_1_40 + (var_1_41 - var_1_42)) + (min (var_1_7 , var_1_5)));
			}
		}
	}


	// From: Req18Batch112Amount500
	signed long int stepLocal_21 = var_1_82 / var_1_20;
	unsigned char stepLocal_20 = var_1_30;
	if (! (var_1_16 <= (var_1_95 + var_1_71))) {
		if ((var_1_27 * var_1_44) <= stepLocal_21) {
			var_1_45 = (var_1_35 || ((1 < var_1_95) && var_1_47));
		} else {
			if (var_1_98 || stepLocal_20) {
				var_1_45 = var_1_29;
			} else {
				var_1_45 = (! var_1_35);
			}
		}
	} else {
		var_1_45 = (((- var_1_20) == var_1_95) || (! (var_1_48 || var_1_47)));
	}


	// From: Req11Batch112Amount500
	unsigned long int stepLocal_6 = max ((var_1_80 + var_1_93) , var_1_23);
	if (stepLocal_6 != var_1_57) {
		var_1_28 = (! var_1_29);
	} else {
		var_1_28 = ((var_1_98 && var_1_29) || var_1_30);
	}


	// From: Req34Batch112Amount500
	unsigned long int stepLocal_34 = min (var_1_73 , (var_1_74 + var_1_102));
	if (var_1_40 >= (var_1_38 / (min (16.5 , var_1_4)))) {
		var_1_78 = ((max (1 , var_1_17)) + var_1_70);
	} else {
		if (((var_1_53 / var_1_69) / var_1_67) != stepLocal_34) {
			if (var_1_98) {
				var_1_78 = ((min (var_1_20 , var_1_67)) - (min ((min (var_1_16 , var_1_72)) , (var_1_69 - var_1_18))));
			}
		} else {
			var_1_78 = (var_1_67 - var_1_68);
		}
	}


	// From: Req26Batch112Amount500
	signed long int stepLocal_27 = 50;
	if (var_1_30) {
		if ((var_1_42 - (var_1_5 + var_1_41)) <= var_1_4) {
			var_1_58 = ((var_1_17 + (min (var_1_16 , var_1_18))) + 10u);
		}
	} else {
		if (stepLocal_27 == (var_1_18 / var_1_20)) {
			var_1_58 = (max ((max (var_1_22 , (min (var_1_18 , var_1_103)))) , (max (var_1_19 , var_1_20))));
		} else {
			var_1_58 = (var_1_104 + (abs (var_1_80)));
		}
	}


	// From: Req20Batch112Amount500
	unsigned char stepLocal_22 = var_1_89;
	if ((! (var_1_42 >= 16.75)) && stepLocal_22) {
		var_1_50 = (var_1_18 + (abs (var_1_51)));
	} else {
		var_1_50 = (var_1_51 + var_1_18);
	}


	// From: Req27Batch112Amount500
	if (var_1_93 > var_1_19) {
		var_1_59 = var_1_94;
	} else {
		var_1_59 = (var_1_80 + var_1_60);
	}


	// From: Req39Batch112Amount500
	signed long int stepLocal_36 = var_1_53;
	if (stepLocal_36 > ((32 - var_1_19) * var_1_59)) {
		if (var_1_89) {
			var_1_87 = (var_1_89 || var_1_29);
		} else {
			var_1_87 = var_1_29;
		}
	} else {
		var_1_87 = var_1_35;
	}


	// From: Req23Batch112Amount500
	signed long int stepLocal_25 = var_1_11 / var_1_27;
	signed long int stepLocal_24 = var_1_43 | 1;
	if (var_1_47) {
		if (stepLocal_25 < var_1_53) {
			var_1_54 = ((max (var_1_19 , (var_1_13 - 50))) - var_1_18);
		}
	} else {
		if (stepLocal_24 != (max (5 , (var_1_13 & var_1_80)))) {
			var_1_54 = ((var_1_19 - var_1_14) + var_1_61);
		}
	}


	// From: Req57Batch112Amount500
	unsigned long int stepLocal_37 = - var_1_80;
	if (var_1_45) {
		if (! var_1_28) {
			if (var_1_72 <= stepLocal_37) {
				var_1_105 = (var_1_67 + (max (var_1_72 , var_1_54)));
			}
		} else {
			var_1_105 = var_1_61;
		}
	} else {
		var_1_105 = var_1_22;
	}


	// From: Req3Batch112Amount500
	if (var_1_28) {
		var_1_12 = ((min ((var_1_13 - 50) , var_1_101)) - var_1_59);
	}


	// From: Req5Batch112Amount500
	unsigned char stepLocal_2 = var_1_78 <= var_1_19;
	signed long int stepLocal_1 = 1 + var_1_78;
	signed long int stepLocal_0 = var_1_78 * var_1_54;
	if (var_1_13 >= stepLocal_1) {
		if (var_1_58 > stepLocal_0) {
			var_1_15 = ((max (var_1_16 , (var_1_17 + var_1_18))) + var_1_19);
		}
	} else {
		if (stepLocal_2 && var_1_100) {
			var_1_15 = (abs (var_1_20 - var_1_18));
		}
	}


	// From: Req24Batch112Amount500
	if ((var_1_5 * (var_1_7 * var_1_41)) >= var_1_52) {
		var_1_55 = (var_1_17 - var_1_101);
	} else {
		if (var_1_37 >= (- var_1_5)) {
			if ((var_1_41 * var_1_7) >= var_1_52) {
				var_1_55 = (max (((abs (var_1_56)) + var_1_10) , (var_1_19 - var_1_18)));
			} else {
				var_1_55 = var_1_20;
			}
		} else {
			var_1_55 = (max (((max (var_1_12 , var_1_101)) - var_1_17) , var_1_14));
		}
	}


	// From: Req1Batch112Amount500
	if (var_1_103 < var_1_105) {
		var_1_1 = ((var_1_4 - var_1_5) - (max (3.5f , (var_1_6 - var_1_7))));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req30Batch112Amount500
	unsigned char stepLocal_31 = var_1_59 >= 5;
	if ((var_1_42 / var_1_6) >= var_1_83) {
		if (stepLocal_31 || (var_1_20 != (last_1_var_1_66 * var_1_61))) {
			var_1_66 = ((var_1_67 - var_1_68) - (max ((max (var_1_18 , var_1_16)) , var_1_17)));
		} else {
			var_1_66 = ((var_1_67 - (abs (var_1_68))) - (var_1_69 - (var_1_70 - 5)));
		}
	} else {
		if ((var_1_1 + var_1_7) <= var_1_40) {
			var_1_66 = (abs (abs (var_1_16)));
		} else {
			var_1_66 = (min (((var_1_18 + var_1_68) + var_1_19) , var_1_20));
		}
	}


	// From: Req13Batch112Amount500
	unsigned long int stepLocal_14 = var_1_102;
	signed char stepLocal_13 = var_1_10;
	unsigned char stepLocal_12 = var_1_43 > var_1_18;
	unsigned char stepLocal_11 = var_1_98;
	unsigned long int stepLocal_10 = var_1_58;
	if (stepLocal_10 < (-1 | var_1_43)) {
		if (stepLocal_13 >= var_1_55) {
			if (stepLocal_12 && var_1_98) {
				var_1_33 = var_1_35;
			} else {
				var_1_33 = (var_1_30 && var_1_29);
			}
		} else {
			if (var_1_20 >= stepLocal_14) {
				if (var_1_100 || stepLocal_11) {
					var_1_33 = (var_1_30 && (! var_1_29));
				} else {
					var_1_33 = (var_1_30 && ((var_1_18 > var_1_66) || (! var_1_35)));
				}
			}
		}
	}


	// From: Req33Batch112Amount500
	if (var_1_30 && var_1_33) {
		if (var_1_30 || var_1_28) {
			var_1_76 = (! var_1_35);
		}
	} else {
		if (var_1_88 >= (var_1_25 + var_1_38)) {
			var_1_76 = (var_1_28 && var_1_48);
		} else {
			var_1_76 = (var_1_28 && var_1_47);
		}
	}


	// From: Req43Batch112Amount500
	if (var_1_76) {
		var_1_91 = var_1_22;
	}


	// From: Req32Batch112Amount500
	signed long int stepLocal_33 = var_1_91 % var_1_67;
	unsigned char stepLocal_32 = (max (var_1_54 , var_1_104)) > var_1_74;
	if (var_1_80 > stepLocal_33) {
		if ((var_1_98 || var_1_35) && stepLocal_32) {
			var_1_75 = ((var_1_16 + -1) + (min (var_1_91 , (min (var_1_20 , var_1_71)))));
		} else {
			var_1_75 = (var_1_18 + ((var_1_59 - 10) + var_1_91));
		}
	} else {
		var_1_75 = (var_1_67 + (max (var_1_69 , var_1_68)));
	}


	// From: Req10Batch112Amount500
	signed short int stepLocal_5 = var_1_57;
	signed long int stepLocal_4 = (var_1_20 / var_1_13) / var_1_27;
	if (stepLocal_5 >= (min (var_1_16 , var_1_13))) {
		if (-5 <= stepLocal_4) {
			var_1_26 = ((var_1_19 - (abs (var_1_11))) + last_1_var_1_26);
		}
	} else {
		var_1_26 = (min (var_1_16 , (min (var_1_59 , var_1_75))));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 4611686.018427383000e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1073741822);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -63);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= -16383);
	assume_abort_if_not(var_1_56 <= 16383);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -1073741823);
	assume_abort_if_not(var_1_60 <= 1073741823);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 2147483647);
	assume_abort_if_not(var_1_62 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -115292.1504606845700e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 1152921.504606845700e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -115292.1504606845700e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 1152921.504606845700e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 190);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 63);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 31);
	assume_abort_if_not(var_1_70 <= 63);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 32);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 31);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 254);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 4294967294);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= -31);
	assume_abort_if_not(var_1_85 <= 31);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= -127);
	assume_abort_if_not(var_1_86 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_103 < var_1_105) ? (var_1_1 == ((float) ((var_1_4 - var_1_5) - (max (3.5f , (var_1_6 - var_1_7)))))) : (var_1_1 == ((float) var_1_6))) && (var_1_100 ? (var_1_8 == ((signed char) (max (var_1_10 , var_1_11)))) : 1)) && (var_1_28 ? (var_1_12 == ((signed long int) ((min ((var_1_13 - 50) , var_1_101)) - var_1_59))) : 1)) && (var_1_14 == ((signed short int) (max (var_1_11 , var_1_10))))) && ((var_1_13 >= (1 + var_1_78)) ? ((var_1_58 > (var_1_78 * var_1_54)) ? (var_1_15 == ((unsigned char) ((max (var_1_16 , (var_1_17 + var_1_18))) + var_1_19))) : 1) : (((var_1_78 <= var_1_19) && var_1_100) ? (var_1_15 == ((unsigned char) (abs (var_1_20 - var_1_18)))) : 1))) && ((var_1_20 <= var_1_14) ? (var_1_21 == ((signed char) (min (1 , var_1_11)))) : (var_1_21 == ((signed char) (abs (var_1_22 - var_1_17)))))) && ((! ((var_1_16 + var_1_20) > var_1_18)) ? (var_1_23 == ((signed short int) (var_1_20 + var_1_21))) : (var_1_23 == ((signed short int) (min ((abs (var_1_17)) , var_1_14)))))) && (var_1_100 ? ((var_1_4 != (var_1_97 * (max (255.375f , var_1_7)))) ? (var_1_24 == ((signed char) (abs (var_1_18)))) : 1) : (var_1_24 == ((signed char) (min (var_1_17 , (abs (var_1_18)))))))) && (((var_1_4 / var_1_6) >= (- var_1_7)) ? (var_1_98 ? (var_1_25 == ((float) (max ((var_1_5 - var_1_7) , var_1_6)))) : 1) : 1)) && ((var_1_57 >= (min (var_1_16 , var_1_13))) ? ((-5 <= ((var_1_20 / var_1_13) / var_1_27)) ? (var_1_26 == ((signed long int) ((var_1_19 - (abs (var_1_11))) + last_1_var_1_26))) : 1) : (var_1_26 == ((signed long int) (min (var_1_16 , (min (var_1_59 , var_1_75)))))))) && (((max ((var_1_80 + var_1_93) , var_1_23)) != var_1_57) ? (var_1_28 == ((unsigned char) (! var_1_29))) : (var_1_28 == ((unsigned char) ((var_1_98 && var_1_29) || var_1_30))))) && ((var_1_44 <= (max ((var_1_10 ^ var_1_17) , var_1_16))) ? (var_1_31 == ((signed long int) (max (var_1_16 , (var_1_53 - (var_1_94 + 8)))))) : (((max (var_1_99 , (var_1_17 * var_1_53))) < (last_1_var_1_31 % var_1_20)) ? (var_1_31 == ((signed long int) (var_1_16 - var_1_22))) : ((var_1_101 != (min (var_1_22 , last_1_var_1_31))) ? (var_1_31 == ((signed long int) var_1_16)) : (var_1_31 == ((signed long int) var_1_20)))))) && ((var_1_58 < (-1 | var_1_43)) ? ((var_1_10 >= var_1_55) ? (((var_1_43 > var_1_18) && var_1_98) ? (var_1_33 == ((unsigned char) var_1_35)) : (var_1_33 == ((unsigned char) (var_1_30 && var_1_29)))) : ((var_1_20 >= var_1_102) ? ((var_1_100 || var_1_98) ? (var_1_33 == ((unsigned char) (var_1_30 && (! var_1_29)))) : (var_1_33 == ((unsigned char) (var_1_30 && ((var_1_18 > var_1_66) || (! var_1_35)))))) : 1)) : 1)) && ((var_1_104 <= var_1_20) ? (var_1_36 == ((float) ((var_1_5 - var_1_7) + var_1_37))) : 1)) && ((var_1_17 <= var_1_14) ? ((1 >= var_1_31) ? (var_1_38 == ((double) var_1_7)) : (var_1_38 == ((double) var_1_4))) : ((var_1_22 >= (10 << var_1_13)) ? (((var_1_5 - var_1_7) < 127.25f) ? (((var_1_88 == (var_1_6 - 1.5f)) && (var_1_93 < var_1_17)) ? (var_1_38 == ((double) (var_1_7 + (min (var_1_5 , var_1_37))))) : (var_1_38 == ((double) (((min (var_1_6 , var_1_4)) - 199.75) - (min (49.6 , 127.5)))))) : (var_1_38 == ((double) ((var_1_40 + (var_1_41 - var_1_42)) + (min (var_1_7 , var_1_5)))))) : 1))) && ((var_1_63 < (var_1_37 + var_1_40)) ? (var_1_43 == ((signed long int) var_1_8)) : (var_1_43 == ((signed long int) (var_1_57 + 128))))) && ((! last_1_var_1_89) ? (var_1_44 == ((signed long int) (max ((last_1_var_1_44 - var_1_20) , (max (last_1_var_1_90 , last_1_var_1_61)))))) : (var_1_29 ? (var_1_44 == ((signed long int) (var_1_16 + (var_1_19 - (last_1_var_1_57 + last_1_var_1_44))))) : ((last_1_var_1_44 >= last_1_var_1_93) ? (var_1_44 == ((signed long int) last_1_var_1_61)) : (var_1_44 == ((signed long int) (min (var_1_10 , (var_1_11 + last_1_var_1_91))))))))) && ((! (var_1_16 <= (var_1_95 + var_1_71))) ? (((var_1_27 * var_1_44) <= (var_1_82 / var_1_20)) ? (var_1_45 == ((unsigned char) (var_1_35 || ((1 < var_1_95) && var_1_47)))) : ((var_1_98 || var_1_30) ? (var_1_45 == ((unsigned char) var_1_29)) : (var_1_45 == ((unsigned char) (! var_1_35))))) : (var_1_45 == ((unsigned char) (((- var_1_20) == var_1_95) || (! (var_1_48 || var_1_47))))))) && (var_1_49 == ((unsigned char) (! (var_1_30 || (var_1_100 || var_1_29)))))) && (((! (var_1_42 >= 16.75)) && var_1_89) ? (var_1_50 == ((signed char) (var_1_18 + (abs (var_1_51))))) : (var_1_50 == ((signed char) (var_1_51 + var_1_18))))) && (var_1_52 == ((double) (max ((max ((49.5 - var_1_41) , var_1_6)) , (var_1_7 + var_1_5)))))) && ((last_1_var_1_80 < last_1_var_1_99) ? (var_1_53 == ((signed long int) (var_1_17 - last_1_var_1_57))) : 1)) && (var_1_47 ? (((var_1_11 / var_1_27) < var_1_53) ? (var_1_54 == ((signed long int) ((max (var_1_19 , (var_1_13 - 50))) - var_1_18))) : 1) : (((var_1_43 | 1) != (max (5 , (var_1_13 & var_1_80)))) ? (var_1_54 == ((signed long int) ((var_1_19 - var_1_14) + var_1_61))) : 1))) && (((var_1_5 * (var_1_7 * var_1_41)) >= var_1_52) ? (var_1_55 == ((signed short int) (var_1_17 - var_1_101))) : ((var_1_37 >= (- var_1_5)) ? (((var_1_41 * var_1_7) >= var_1_52) ? (var_1_55 == ((signed short int) (max (((abs (var_1_56)) + var_1_10) , (var_1_19 - var_1_18))))) : (var_1_55 == ((signed short int) var_1_20))) : (var_1_55 == ((signed short int) (max (((max (var_1_12 , var_1_101)) - var_1_17) , var_1_14))))))) && ((var_1_35 && (last_1_var_1_71 > last_1_var_1_54)) ? (var_1_57 == ((signed short int) (var_1_20 - (max (var_1_16 , var_1_22))))) : 1)) && (var_1_30 ? (((var_1_42 - (var_1_5 + var_1_41)) <= var_1_4) ? (var_1_58 == ((unsigned long int) ((var_1_17 + (min (var_1_16 , var_1_18))) + 10u))) : 1) : ((50 == (var_1_18 / var_1_20)) ? (var_1_58 == ((unsigned long int) (max ((max (var_1_22 , (min (var_1_18 , var_1_103)))) , (max (var_1_19 , var_1_20)))))) : (var_1_58 == ((unsigned long int) (var_1_104 + (abs (var_1_80)))))))) && ((var_1_93 > var_1_19) ? (var_1_59 == ((signed long int) var_1_94)) : (var_1_59 == ((signed long int) (var_1_80 + var_1_60))))) && (last_1_var_1_45 ? (((last_1_var_1_94 >= (last_1_var_1_15 * last_1_var_1_12)) && last_1_var_1_98) ? (var_1_61 == ((unsigned long int) var_1_17)) : (var_1_61 == ((unsigned long int) (2292933171u - (max ((last_1_var_1_71 + var_1_19) , (min (var_1_16 , last_1_var_1_53)))))))) : (var_1_61 == ((unsigned long int) (var_1_62 - var_1_18))))) && ((var_1_48 || var_1_30) ? ((var_1_10 < (-1 % var_1_27)) ? ((((max (var_1_88 , 1.00000000000075E12)) * var_1_97) < var_1_5) ? (var_1_63 == ((float) (var_1_5 - var_1_7))) : (var_1_63 == ((float) (var_1_42 + ((var_1_64 + var_1_65) + var_1_41))))) : 1) : 1)) && (((var_1_42 / var_1_6) >= var_1_83) ? (((var_1_59 >= 5) || (var_1_20 != (last_1_var_1_66 * var_1_61))) ? (var_1_66 == ((unsigned char) ((var_1_67 - var_1_68) - (max ((max (var_1_18 , var_1_16)) , var_1_17))))) : (var_1_66 == ((unsigned char) ((var_1_67 - (abs (var_1_68))) - (var_1_69 - (var_1_70 - 5)))))) : (((var_1_1 + var_1_7) <= var_1_40) ? (var_1_66 == ((unsigned char) (abs (abs (var_1_16))))) : (var_1_66 == ((unsigned char) (min (((var_1_18 + var_1_68) + var_1_19) , var_1_20))))))) && ((var_1_64 != 2.4f) ? (var_1_100 ? (var_1_71 == ((unsigned char) (var_1_67 - var_1_68))) : 1) : ((! var_1_49) ? (var_1_71 == ((unsigned char) ((var_1_18 + (var_1_72 + var_1_73)) + (max (var_1_70 , (var_1_17 + 10)))))) : (var_1_71 == ((unsigned char) var_1_74))))) && ((var_1_80 > (var_1_91 % var_1_67)) ? (((var_1_98 || var_1_35) && ((max (var_1_54 , var_1_104)) > var_1_74)) ? (var_1_75 == ((signed short int) ((var_1_16 + -1) + (min (var_1_91 , (min (var_1_20 , var_1_71))))))) : (var_1_75 == ((signed short int) (var_1_18 + ((var_1_59 - 10) + var_1_91))))) : (var_1_75 == ((signed short int) (var_1_67 + (max (var_1_69 , var_1_68))))))) && ((var_1_30 && var_1_33) ? ((var_1_30 || var_1_28) ? (var_1_76 == ((unsigned char) (! var_1_35))) : 1) : ((var_1_88 >= (var_1_25 + var_1_38)) ? (var_1_76 == ((unsigned char) (var_1_28 && var_1_48))) : (var_1_76 == ((unsigned char) (var_1_28 && var_1_47)))))) && ((var_1_40 >= (var_1_38 / (min (16.5 , var_1_4)))) ? (var_1_78 == ((unsigned char) ((max (1 , var_1_17)) + var_1_70))) : ((((var_1_53 / var_1_69) / var_1_67) != (min (var_1_73 , (var_1_74 + var_1_102)))) ? (var_1_98 ? (var_1_78 == ((unsigned char) ((min (var_1_20 , var_1_67)) - (min ((min (var_1_16 , var_1_72)) , (var_1_69 - var_1_18)))))) : 1) : (var_1_78 == ((unsigned char) (var_1_67 - var_1_68)))))) && ((last_1_var_1_80 > var_1_22) ? (var_1_80 == ((unsigned long int) var_1_81)) : (var_1_80 == ((unsigned long int) (max (var_1_17 , var_1_71)))))) && (var_1_82 == ((signed long int) ((min (var_1_74 , var_1_13)) - (max (var_1_99 , last_1_var_1_82)))))) && (var_1_83 == ((float) (max (var_1_40 , (min (var_1_5 , var_1_41))))))) && ((var_1_88 > (- var_1_40)) ? ((var_1_67 >= (abs (var_1_104))) ? (var_1_84 == ((signed char) (var_1_18 + (8 + var_1_85)))) : 1) : (var_1_84 == ((signed char) var_1_86)))) && ((var_1_53 > ((32 - var_1_19) * var_1_59)) ? (var_1_89 ? (var_1_87 == ((unsigned char) (var_1_89 || var_1_29))) : (var_1_87 == ((unsigned char) var_1_29))) : (var_1_87 == ((unsigned char) var_1_35)))) && (var_1_88 == ((float) var_1_7))) && (var_1_49 ? (var_1_89 == ((unsigned char) var_1_29)) : (var_1_89 == ((unsigned char) var_1_30)))) && (var_1_98 ? (var_1_90 == ((signed short int) var_1_11)) : (var_1_90 == ((signed short int) var_1_10)))) && (var_1_76 ? (var_1_91 == ((signed char) var_1_22)) : 1)) && (var_1_92 == ((signed char) var_1_72))) && (var_1_93 == ((signed long int) var_1_14))) && (var_1_94 == ((unsigned short int) var_1_18))) && (var_1_30 ? (var_1_95 == ((unsigned short int) last_1_var_1_95)) : (var_1_95 == ((unsigned short int) var_1_73)))) && (var_1_96 == ((signed char) 1))) && (var_1_97 == ((float) var_1_40))) && (last_1_var_1_33 ? (var_1_98 == ((unsigned char) var_1_47)) : 1)) && (var_1_47 ? (var_1_99 == ((unsigned short int) var_1_69)) : 1)) && (var_1_100 == ((unsigned char) var_1_35))) && (var_1_101 == ((unsigned long int) var_1_18))) && (var_1_102 == ((unsigned long int) 32u))) && (var_1_103 == ((unsigned short int) 4))) && (var_1_98 ? (var_1_104 == ((unsigned long int) var_1_16)) : 1)) && (var_1_45 ? ((! var_1_28) ? ((var_1_72 <= (- var_1_80)) ? (var_1_105 == ((unsigned short int) (var_1_67 + (max (var_1_72 , var_1_54))))) : 1) : (var_1_105 == ((unsigned short int) var_1_61))) : (var_1_105 == ((unsigned short int) var_1_22)))
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
