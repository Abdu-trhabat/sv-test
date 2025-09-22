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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed long int var_1_2 = 50;
signed long int var_1_3 = 256;
signed long int var_1_4 = 16;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
float var_1_7 = 99.5;
signed long int var_1_8 = 5;
float var_1_9 = 499.6;
float var_1_10 = 1.1;
float var_1_11 = 1.8;
float var_1_12 = 100.6;
float var_1_13 = 200.4;
float var_1_14 = 256.5;
float var_1_15 = 10.5;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 1;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 31711;
unsigned short int var_1_27 = 16942;
signed long int var_1_28 = -64;
signed char var_1_29 = -16;
signed char var_1_30 = 32;
signed char var_1_31 = 8;
signed char var_1_32 = 4;
signed char var_1_33 = 5;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 256;
unsigned short int var_1_36 = 100;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
double var_1_39 = 5.6;
unsigned short int var_1_40 = 128;
float var_1_41 = 1000000000000.75;
float var_1_42 = 0.0;
float var_1_43 = 2.66;
signed short int var_1_44 = 0;
signed long int var_1_45 = 64;
signed long int var_1_46 = 64;
unsigned long int var_1_47 = 32;
unsigned long int var_1_48 = 1713484053;
signed short int var_1_49 = -2;
double var_1_50 = 127.375;
signed char var_1_51 = -100;
signed char var_1_52 = 32;
signed char var_1_53 = -4;
signed char var_1_54 = 100;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 10;
float var_1_57 = 7.825;
signed long int var_1_58 = -64;
unsigned short int var_1_59 = 100;
unsigned short int var_1_60 = 33822;
float var_1_61 = 25.875;
signed long int var_1_62 = -256;
signed long int var_1_63 = 16;
double var_1_64 = 500.6;
signed long int var_1_65 = 32;
unsigned long int var_1_66 = 128;
float var_1_67 = 99.75;
signed long int var_1_68 = -1;
unsigned char var_1_69 = 0;
unsigned short int var_1_70 = 32;
unsigned short int var_1_71 = 4;
double var_1_72 = 63.5;
unsigned char var_1_73 = 16;
unsigned char var_1_74 = 64;
unsigned short int var_1_75 = 16;
unsigned short int var_1_76 = 26863;
unsigned short int var_1_77 = 50;
unsigned short int var_1_78 = 16;
unsigned char var_1_79 = 1;
float var_1_80 = 9.75;
unsigned short int var_1_81 = 16;
unsigned char var_1_82 = 10;
unsigned char var_1_83 = 0;
signed long int var_1_84 = 1;
float var_1_85 = 31.4;
float var_1_86 = 8.625;
signed long int var_1_87 = 4;
signed long int var_1_88 = -500;
signed short int var_1_89 = -16;
unsigned char var_1_90 = 64;
unsigned char var_1_91 = 16;
signed char var_1_92 = -5;
unsigned char var_1_93 = 1;
signed long int var_1_94 = 5;
double var_1_95 = 99999.24;
signed char var_1_96 = -5;
signed char var_1_97 = 1;
unsigned short int var_1_98 = 64;
unsigned char var_1_99 = 64;
signed char var_1_100 = 2;
signed char var_1_101 = 5;
unsigned long int var_1_102 = 8;
double var_1_103 = 25.875;
double var_1_104 = 7.5;
signed char var_1_105 = 5;
unsigned long int var_1_106 = 128;
unsigned long int var_1_107 = 2376660954;
unsigned long int var_1_108 = 2;
unsigned long int var_1_109 = 3411573405;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_22 = 1;
unsigned short int last_1_var_1_25 = 0;
signed long int last_1_var_1_46 = 64;
double last_1_var_1_50 = 127.375;
signed long int last_1_var_1_68 = -1;
unsigned short int last_1_var_1_70 = 32;
unsigned char last_1_var_1_73 = 16;
unsigned short int last_1_var_1_81 = 16;
unsigned char last_1_var_1_83 = 0;
unsigned long int last_1_var_1_106 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch169Amount500
	if (last_1_var_1_50 == 99999.275) {
		var_1_45 = (last_1_var_1_25 + last_1_var_1_73);
	}


	// From: Req32Batch169Amount500
	signed long int stepLocal_15 = last_1_var_1_46;
	signed char stepLocal_14 = var_1_31;
	if (stepLocal_15 > var_1_33) {
		if (stepLocal_14 >= var_1_3) {
			var_1_65 = (last_1_var_1_70 + (min ((var_1_33 - last_1_var_1_81) , var_1_52)));
		} else {
			var_1_65 = (max (var_1_60 , var_1_32));
		}
	} else {
		if (var_1_18) {
			var_1_65 = (last_1_var_1_68 + var_1_30);
		}
	}


	// From: Req13Batch169Amount500
	unsigned char stepLocal_5 = last_1_var_1_83;
	if (stepLocal_5 || var_1_38) {
		var_1_40 = (abs (max (var_1_20 , var_1_33)));
	} else {
		var_1_40 = var_1_33;
	}


	// From: Req20Batch169Amount500
	signed long int stepLocal_7 = - var_1_20;
	if (stepLocal_7 < var_1_40) {
		var_1_50 = (max ((var_1_14 - (abs (0.4))) , var_1_10));
	} else {
		var_1_50 = (min ((min ((var_1_42 - var_1_10) , var_1_14)) , var_1_11));
	}


	// From: Req43Batch169Amount500
	if (var_1_40 == (var_1_36 / var_1_82)) {
		var_1_81 = (abs (min (var_1_20 , var_1_40)));
	}


	// From: Req1Batch169Amount500
	signed long int stepLocal_0 = 1;
	if (stepLocal_0 < (var_1_2 - (var_1_3 + var_1_4))) {
		var_1_1 = (! (var_1_5 || var_1_6));
	}


	// From: Req2Batch169Amount500
	signed long int stepLocal_1 = (var_1_3 - var_1_8) + var_1_2;
	if (var_1_4 > stepLocal_1) {
		if (! var_1_5) {
			var_1_7 = var_1_9;
		}
	} else {
		var_1_7 = (((max (4.625f , var_1_10)) - (var_1_11 + var_1_12)) + (var_1_13 + (var_1_14 - var_1_15)));
	}


	// From: Req3Batch169Amount500
	signed long int stepLocal_2 = var_1_4;
	if (127.725f < var_1_13) {
		if (stepLocal_2 < var_1_2) {
			var_1_16 = (! (var_1_17 && var_1_18));
		} else {
			if (var_1_17) {
				var_1_16 = var_1_6;
			} else {
				var_1_16 = var_1_18;
			}
		}
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req4Batch169Amount500
	var_1_19 = ((var_1_20 + 64) - var_1_21);


	// From: Req8Batch169Amount500
	var_1_29 = ((var_1_30 + (var_1_31 + var_1_32)) - var_1_33);


	// From: Req9Batch169Amount500
	if (((var_1_10 / 10.5f) + var_1_11) > var_1_15) {
		var_1_34 = (42677 - var_1_33);
	}


	// From: Req11Batch169Amount500
	if (var_1_2 <= (abs (var_1_21))) {
		var_1_37 = (var_1_38 && var_1_17);
	}


	// From: Req12Batch169Amount500
	var_1_39 = 1.00000000625E8;


	// From: Req18Batch169Amount500
	if (! var_1_17) {
		var_1_47 = (max (256u , (var_1_30 + var_1_4)));
	} else {
		var_1_47 = (128u + (var_1_48 - (abs (var_1_34))));
	}


	// From: Req24Batch169Amount500
	if (var_1_17) {
		if (var_1_37 && var_1_18) {
			var_1_56 = ((var_1_54 + 100) - var_1_52);
		} else {
			var_1_56 = (abs (var_1_31 + var_1_21));
		}
	}


	// From: Req25Batch169Amount500
	if (! var_1_17) {
		var_1_57 = (max ((var_1_14 + var_1_15) , var_1_10));
	}


	// From: Req26Batch169Amount500
	if (var_1_5) {
		var_1_58 = (min (var_1_33 , var_1_20));
	}


	// From: Req28Batch169Amount500
	if (var_1_50 <= var_1_12) {
		var_1_61 = (max (var_1_10 , (min ((var_1_43 - var_1_11) , (var_1_14 + var_1_12)))));
	}


	// From: Req31Batch169Amount500
	if (var_1_17) {
		var_1_64 = (max (var_1_11 , (var_1_12 + var_1_14)));
	} else {
		var_1_64 = (var_1_15 + var_1_10);
	}


	// From: Req36Batch169Amount500
	if (var_1_16 || var_1_6) {
		var_1_69 = var_1_18;
	} else {
		var_1_69 = var_1_38;
	}


	// From: Req42Batch169Amount500
	unsigned long int stepLocal_25 = var_1_48 + var_1_76;
	if (stepLocal_25 != var_1_4) {
		var_1_80 = 256.75f;
	}


	// From: Req46Batch169Amount500
	if ((var_1_54 + var_1_82) > ((abs (var_1_88)) / (abs (var_1_20)))) {
		var_1_87 = var_1_77;
	} else {
		var_1_87 = var_1_56;
	}


	// From: Req47Batch169Amount500
	if (var_1_17) {
		var_1_89 = -16;
	}


	// From: Req48Batch169Amount500
	var_1_90 = var_1_30;


	// From: Req49Batch169Amount500
	var_1_91 = var_1_74;


	// From: Req51Batch169Amount500
	var_1_93 = var_1_5;


	// From: Req52Batch169Amount500
	var_1_94 = var_1_82;


	// From: Req53Batch169Amount500
	if (var_1_24) {
		var_1_95 = var_1_13;
	}


	// From: Req54Batch169Amount500
	var_1_96 = var_1_30;


	// From: Req55Batch169Amount500
	var_1_97 = var_1_31;


	// From: Req56Batch169Amount500
	var_1_98 = var_1_74;


	// From: Req57Batch169Amount500
	if (var_1_38) {
		var_1_99 = var_1_30;
	} else {
		var_1_99 = var_1_52;
	}


	// From: Req58Batch169Amount500
	if (var_1_37) {
		var_1_100 = 0;
	} else {
		var_1_100 = var_1_32;
	}


	// From: Req59Batch169Amount500
	if (var_1_18) {
		var_1_101 = var_1_54;
	} else {
		var_1_101 = var_1_32;
	}


	// From: Req60Batch169Amount500
	if (var_1_24) {
		var_1_102 = var_1_33;
	}


	// From: Req61Batch169Amount500
	if (var_1_24) {
		var_1_103 = var_1_14;
	}


	// From: Req62Batch169Amount500
	var_1_104 = var_1_14;


	// From: Req63Batch169Amount500
	if (var_1_37) {
		var_1_105 = var_1_32;
	}


	// From: Req40Batch169Amount500
	unsigned char stepLocal_24 = var_1_69 && (var_1_31 <= var_1_45);
	unsigned char stepLocal_23 = var_1_5;
	signed char stepLocal_22 = var_1_52;
	signed long int stepLocal_21 = var_1_54 * var_1_26;
	signed long int stepLocal_20 = var_1_4;
	if (var_1_6 || stepLocal_24) {
		if (stepLocal_21 >= var_1_45) {
			if (var_1_60 >= stepLocal_20) {
				if (var_1_32 > stepLocal_22) {
					var_1_75 = (var_1_98 + ((var_1_76 - var_1_52) - (abs (var_1_71))));
				} else {
					var_1_75 = (min (((var_1_77 + var_1_78) + var_1_26) , 256));
				}
			}
		} else {
			var_1_75 = (10 + var_1_76);
		}
	} else {
		if (var_1_69 || stepLocal_23) {
			var_1_75 = (max (var_1_36 , var_1_30));
		}
	}


	// From: Req6Batch169Amount500
	if ((var_1_75 / var_1_20) <= (var_1_2 - var_1_4)) {
		if (var_1_64 == var_1_14) {
			var_1_25 = (36148 - var_1_75);
		}
	} else {
		var_1_25 = (min (var_1_20 , ((var_1_26 + var_1_27) - (abs (var_1_21)))));
	}


	// From: Req33Batch169Amount500
	unsigned char stepLocal_16 = var_1_65 != (min (var_1_102 , var_1_48));
	if (var_1_37 && stepLocal_16) {
		var_1_66 = var_1_33;
	} else {
		var_1_66 = ((var_1_48 - (abs (var_1_33))) + var_1_31);
	}


	// From: Req44Batch169Amount500
	unsigned short int stepLocal_29 = var_1_60;
	signed long int stepLocal_28 = (var_1_26 - var_1_3) % var_1_52;
	unsigned char stepLocal_27 = (var_1_75 <= var_1_102) && (var_1_11 <= var_1_57);
	signed long int stepLocal_26 = var_1_89 / var_1_74;
	if ((var_1_60 * var_1_40) >= stepLocal_26) {
		if (stepLocal_29 < var_1_26) {
			var_1_83 = (((var_1_54 - 10) != (~ var_1_75)) || (! var_1_6));
		} else {
			if (var_1_37 || stepLocal_27) {
				var_1_83 = var_1_6;
			} else {
				if (stepLocal_28 < (var_1_45 | (var_1_20 * var_1_66))) {
					var_1_83 = (! (! var_1_6));
				} else {
					var_1_83 = (var_1_5 || var_1_38);
				}
			}
		}
	} else {
		if (var_1_39 != (var_1_15 - var_1_43)) {
			var_1_83 = var_1_24;
		} else {
			var_1_83 = (var_1_5 || var_1_6);
		}
	}


	// From: Req7Batch169Amount500
	if (var_1_12 != var_1_14) {
		var_1_28 = (max (256 , (min (var_1_66 , var_1_4))));
	} else {
		if (var_1_69) {
			var_1_28 = var_1_4;
		}
	}


	// From: Req10Batch169Amount500
	unsigned char stepLocal_4 = var_1_24;
	unsigned char stepLocal_3 = var_1_6;
	if (var_1_17 || stepLocal_3) {
		if (stepLocal_4 && var_1_37) {
			var_1_35 = (var_1_36 + var_1_87);
		}
	}


	// From: Req14Batch169Amount500
	if (! var_1_1) {
		if (var_1_37 || var_1_1) {
			var_1_41 = ((var_1_42 - (min (var_1_14 , 1.00000000000075E12f))) - var_1_43);
		} else {
			if ((var_1_30 & var_1_47) >= (max (var_1_3 , (var_1_27 ^ var_1_21)))) {
				var_1_41 = (min (var_1_42 , var_1_10));
			}
		}
	}


	// From: Req15Batch169Amount500
	if (var_1_9 < var_1_13) {
		var_1_44 = (max ((max (var_1_21 , var_1_33)) , var_1_31));
	} else {
		var_1_44 = var_1_102;
	}


	// From: Req19Batch169Amount500
	if (var_1_1) {
		if (var_1_24) {
			var_1_49 = var_1_33;
		} else {
			var_1_49 = ((var_1_30 + var_1_33) - var_1_20);
		}
	} else {
		if (((max (var_1_32 , var_1_4)) / var_1_26) > (var_1_94 & (max (var_1_65 , var_1_33)))) {
			if (var_1_17 && (var_1_33 < var_1_87)) {
				var_1_49 = (var_1_21 + (1 - var_1_20));
			} else {
				var_1_49 = (var_1_20 - var_1_33);
			}
		} else {
			var_1_49 = (var_1_32 + 5);
		}
	}


	// From: Req22Batch169Amount500
	signed long int stepLocal_9 = (var_1_87 / var_1_27) + var_1_28;
	if (stepLocal_9 != var_1_32) {
		var_1_53 = (max (var_1_31 , var_1_52));
	} else {
		var_1_53 = ((1 + var_1_52) - (var_1_54 - (min (var_1_32 , var_1_30))));
	}


	// From: Req23Batch169Amount500
	if (var_1_11 <= (var_1_43 - var_1_42)) {
		if (var_1_14 == var_1_95) {
			var_1_55 = (var_1_6 || (var_1_5 || var_1_24));
		} else {
			var_1_55 = var_1_18;
		}
	} else {
		var_1_55 = var_1_5;
	}


	// From: Req30Batch169Amount500
	if ((var_1_10 - 15.5) > var_1_43) {
		var_1_63 = (max (var_1_102 , (max (128 , var_1_87))));
	}


	// From: Req34Batch169Amount500
	signed long int stepLocal_17 = var_1_2;
	if (! (var_1_35 >= var_1_44)) {
		var_1_67 = var_1_11;
	} else {
		if ((max (5 , var_1_81)) >= stepLocal_17) {
			var_1_67 = (((max (var_1_12 , var_1_14)) + (var_1_15 - var_1_11)) + var_1_10);
		} else {
			var_1_67 = (var_1_15 + var_1_14);
		}
	}


	// From: Req35Batch169Amount500
	if (var_1_5 && (var_1_4 <= var_1_63)) {
		var_1_68 = (min (((1188294399 - var_1_33) - var_1_47) , var_1_30));
	}


	// From: Req37Batch169Amount500
	if (var_1_87 <= (var_1_33 / (abs (var_1_48)))) {
		if (var_1_69) {
			var_1_70 = (var_1_60 - (var_1_27 - var_1_71));
		} else {
			var_1_70 = (max (var_1_71 , var_1_33));
		}
	}


	// From: Req38Batch169Amount500
	signed long int stepLocal_18 = (abs (var_1_54)) - var_1_33;
	if (stepLocal_18 >= (var_1_63 + -1)) {
		var_1_72 = (var_1_10 + (max (var_1_12 , var_1_14)));
	} else {
		var_1_72 = (var_1_12 + var_1_13);
	}


	// From: Req39Batch169Amount500
	signed long int stepLocal_19 = var_1_27 / var_1_26;
	if ((- var_1_87) >= stepLocal_19) {
		var_1_73 = (((100 - var_1_32) + var_1_74) - (max ((var_1_30 + var_1_31) , (abs (var_1_20)))));
	} else {
		var_1_73 = var_1_30;
	}


	// From: Req45Batch169Amount500
	if (! (var_1_42 != (var_1_85 - var_1_86))) {
		var_1_84 = (max ((max (var_1_77 , var_1_58)) , (min (-32 , 4))));
	} else {
		var_1_84 = (min (((var_1_26 + var_1_32) + var_1_30) , (max ((min (-64 , var_1_66)) , var_1_76))));
	}


	// From: Req27Batch169Amount500
	unsigned short int stepLocal_13 = var_1_60;
	unsigned char stepLocal_12 = var_1_55;
	unsigned char stepLocal_11 = var_1_21;
	signed long int stepLocal_10 = var_1_84;
	if (var_1_17) {
		if ((var_1_43 < (var_1_15 - var_1_14)) && stepLocal_12) {
			var_1_59 = (min (var_1_52 , (max (var_1_36 , var_1_45))));
		} else {
			if (stepLocal_10 != (var_1_21 + (~ var_1_52))) {
				if (stepLocal_11 > var_1_20) {
					var_1_59 = (var_1_60 - var_1_52);
				} else {
					var_1_59 = var_1_33;
				}
			} else {
				if (var_1_2 >= stepLocal_13) {
					var_1_59 = (var_1_45 + var_1_27);
				} else {
					var_1_59 = (max (var_1_91 , var_1_20));
				}
			}
		}
	}


	// From: Req5Batch169Amount500
	if (var_1_84 <= (var_1_4 + var_1_2)) {
		var_1_22 = (! var_1_18);
	} else {
		var_1_22 = ((last_1_var_1_22 && (var_1_5 && var_1_6)) || var_1_24);
	}


	// From: Req29Batch169Amount500
	if (var_1_83) {
		var_1_62 = (min (var_1_63 , var_1_52));
	} else {
		var_1_62 = (var_1_34 - var_1_20);
	}


	// From: Req64Batch169Amount500
	unsigned long int stepLocal_30 = (var_1_107 - var_1_108) * (var_1_70 ^ var_1_66);
	if (var_1_1) {
		if (stepLocal_30 <= (var_1_62 ^ (50u * last_1_var_1_106))) {
			var_1_106 = (var_1_109 - var_1_78);
		} else {
			var_1_106 = var_1_52;
		}
	} else {
		var_1_106 = var_1_36;
	}


	// From: Req17Batch169Amount500
	unsigned char stepLocal_6 = var_1_24;
	if (var_1_12 <= ((50.25f / var_1_42) + (var_1_9 * var_1_50))) {
		if (var_1_103 <= 16.25f) {
			var_1_46 = (min (var_1_26 , (var_1_84 - (min (var_1_36 , var_1_31)))));
		} else {
			var_1_46 = (min ((var_1_27 - var_1_65) , var_1_20));
		}
	} else {
		if (stepLocal_6 && ((var_1_32 << 1) > (var_1_20 + var_1_59))) {
			var_1_46 = (min (var_1_3 , (abs (-8))));
		} else {
			var_1_46 = (abs (var_1_26));
		}
	}


	// From: Req21Batch169Amount500
	unsigned char stepLocal_8 = (var_1_46 & var_1_81) > var_1_62;
	if (var_1_38 && stepLocal_8) {
		var_1_51 = ((abs (var_1_33)) - ((var_1_52 + 50) - var_1_30));
	} else {
		var_1_51 = ((max (var_1_52 , var_1_30)) + (abs (var_1_31)));
	}


	// From: Req41Batch169Amount500
	if (var_1_46 < (abs (var_1_62))) {
		var_1_79 = (var_1_69 || (var_1_18 && var_1_38));
	}


	// From: Req50Batch169Amount500
	if (var_1_79) {
		var_1_92 = var_1_54;
	} else {
		var_1_92 = var_1_31;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1073741824);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 16383);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 16384);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 31);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 4611686.018427383000e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 31);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 63);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 32767);
	assume_abort_if_not(var_1_60 <= 65534);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 16383);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 64);
	assume_abort_if_not(var_1_74 <= 127);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 24575);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 16384);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 16383);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 255);
	assume_abort_if_not(var_1_82 != 0);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854776000e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_88 >= -2147483647);
	assume_abort_if_not(var_1_88 <= 2147483647);
	var_1_107 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_107 >= 2147483647);
	assume_abort_if_not(var_1_107 <= 4294967295);
	var_1_108 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 2147483647);
	var_1_109 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_109 >= 2147483647);
	assume_abort_if_not(var_1_109 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((1 < (var_1_2 - (var_1_3 + var_1_4))) ? (var_1_1 == ((unsigned char) (! (var_1_5 || var_1_6)))) : 1) && ((var_1_4 > ((var_1_3 - var_1_8) + var_1_2)) ? ((! var_1_5) ? (var_1_7 == ((float) var_1_9)) : 1) : (var_1_7 == ((float) (((max (4.625f , var_1_10)) - (var_1_11 + var_1_12)) + (var_1_13 + (var_1_14 - var_1_15))))))) && ((127.725f < var_1_13) ? ((var_1_4 < var_1_2) ? (var_1_16 == ((unsigned char) (! (var_1_17 && var_1_18)))) : (var_1_17 ? (var_1_16 == ((unsigned char) var_1_6)) : (var_1_16 == ((unsigned char) var_1_18)))) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_19 == ((unsigned char) ((var_1_20 + 64) - var_1_21)))) && ((var_1_84 <= (var_1_4 + var_1_2)) ? (var_1_22 == ((unsigned char) (! var_1_18))) : (var_1_22 == ((unsigned char) ((last_1_var_1_22 && (var_1_5 && var_1_6)) || var_1_24))))) && (((var_1_75 / var_1_20) <= (var_1_2 - var_1_4)) ? ((var_1_64 == var_1_14) ? (var_1_25 == ((unsigned short int) (36148 - var_1_75))) : 1) : (var_1_25 == ((unsigned short int) (min (var_1_20 , ((var_1_26 + var_1_27) - (abs (var_1_21))))))))) && ((var_1_12 != var_1_14) ? (var_1_28 == ((signed long int) (max (256 , (min (var_1_66 , var_1_4)))))) : (var_1_69 ? (var_1_28 == ((signed long int) var_1_4)) : 1))) && (var_1_29 == ((signed char) ((var_1_30 + (var_1_31 + var_1_32)) - var_1_33)))) && ((((var_1_10 / 10.5f) + var_1_11) > var_1_15) ? (var_1_34 == ((unsigned short int) (42677 - var_1_33))) : 1)) && ((var_1_17 || var_1_6) ? ((var_1_24 && var_1_37) ? (var_1_35 == ((unsigned short int) (var_1_36 + var_1_87))) : 1) : 1)) && ((var_1_2 <= (abs (var_1_21))) ? (var_1_37 == ((unsigned char) (var_1_38 && var_1_17))) : 1)) && (var_1_39 == ((double) 1.00000000625E8))) && ((last_1_var_1_83 || var_1_38) ? (var_1_40 == ((unsigned short int) (abs (max (var_1_20 , var_1_33))))) : (var_1_40 == ((unsigned short int) var_1_33)))) && ((! var_1_1) ? ((var_1_37 || var_1_1) ? (var_1_41 == ((float) ((var_1_42 - (min (var_1_14 , 1.00000000000075E12f))) - var_1_43))) : (((var_1_30 & var_1_47) >= (max (var_1_3 , (var_1_27 ^ var_1_21)))) ? (var_1_41 == ((float) (min (var_1_42 , var_1_10)))) : 1)) : 1)) && ((var_1_9 < var_1_13) ? (var_1_44 == ((signed short int) (max ((max (var_1_21 , var_1_33)) , var_1_31)))) : (var_1_44 == ((signed short int) var_1_102)))) && ((last_1_var_1_50 == 99999.275) ? (var_1_45 == ((signed long int) (last_1_var_1_25 + last_1_var_1_73))) : 1)) && ((var_1_12 <= ((50.25f / var_1_42) + (var_1_9 * var_1_50))) ? ((var_1_103 <= 16.25f) ? (var_1_46 == ((signed long int) (min (var_1_26 , (var_1_84 - (min (var_1_36 , var_1_31))))))) : (var_1_46 == ((signed long int) (min ((var_1_27 - var_1_65) , var_1_20))))) : ((var_1_24 && ((var_1_32 << 1) > (var_1_20 + var_1_59))) ? (var_1_46 == ((signed long int) (min (var_1_3 , (abs (-8)))))) : (var_1_46 == ((signed long int) (abs (var_1_26))))))) && ((! var_1_17) ? (var_1_47 == ((unsigned long int) (max (256u , (var_1_30 + var_1_4))))) : (var_1_47 == ((unsigned long int) (128u + (var_1_48 - (abs (var_1_34)))))))) && (var_1_1 ? (var_1_24 ? (var_1_49 == ((signed short int) var_1_33)) : (var_1_49 == ((signed short int) ((var_1_30 + var_1_33) - var_1_20)))) : ((((max (var_1_32 , var_1_4)) / var_1_26) > (var_1_94 & (max (var_1_65 , var_1_33)))) ? ((var_1_17 && (var_1_33 < var_1_87)) ? (var_1_49 == ((signed short int) (var_1_21 + (1 - var_1_20)))) : (var_1_49 == ((signed short int) (var_1_20 - var_1_33)))) : (var_1_49 == ((signed short int) (var_1_32 + 5)))))) && (((- var_1_20) < var_1_40) ? (var_1_50 == ((double) (max ((var_1_14 - (abs (0.4))) , var_1_10)))) : (var_1_50 == ((double) (min ((min ((var_1_42 - var_1_10) , var_1_14)) , var_1_11)))))) && ((var_1_38 && ((var_1_46 & var_1_81) > var_1_62)) ? (var_1_51 == ((signed char) ((abs (var_1_33)) - ((var_1_52 + 50) - var_1_30)))) : (var_1_51 == ((signed char) ((max (var_1_52 , var_1_30)) + (abs (var_1_31))))))) && ((((var_1_87 / var_1_27) + var_1_28) != var_1_32) ? (var_1_53 == ((signed char) (max (var_1_31 , var_1_52)))) : (var_1_53 == ((signed char) ((1 + var_1_52) - (var_1_54 - (min (var_1_32 , var_1_30)))))))) && ((var_1_11 <= (var_1_43 - var_1_42)) ? ((var_1_14 == var_1_95) ? (var_1_55 == ((unsigned char) (var_1_6 || (var_1_5 || var_1_24)))) : (var_1_55 == ((unsigned char) var_1_18))) : (var_1_55 == ((unsigned char) var_1_5)))) && (var_1_17 ? ((var_1_37 && var_1_18) ? (var_1_56 == ((unsigned char) ((var_1_54 + 100) - var_1_52))) : (var_1_56 == ((unsigned char) (abs (var_1_31 + var_1_21))))) : 1)) && ((! var_1_17) ? (var_1_57 == ((float) (max ((var_1_14 + var_1_15) , var_1_10)))) : 1)) && (var_1_5 ? (var_1_58 == ((signed long int) (min (var_1_33 , var_1_20)))) : 1)) && (var_1_17 ? (((var_1_43 < (var_1_15 - var_1_14)) && var_1_55) ? (var_1_59 == ((unsigned short int) (min (var_1_52 , (max (var_1_36 , var_1_45)))))) : ((var_1_84 != (var_1_21 + (~ var_1_52))) ? ((var_1_21 > var_1_20) ? (var_1_59 == ((unsigned short int) (var_1_60 - var_1_52))) : (var_1_59 == ((unsigned short int) var_1_33))) : ((var_1_2 >= var_1_60) ? (var_1_59 == ((unsigned short int) (var_1_45 + var_1_27))) : (var_1_59 == ((unsigned short int) (max (var_1_91 , var_1_20))))))) : 1)) && ((var_1_50 <= var_1_12) ? (var_1_61 == ((float) (max (var_1_10 , (min ((var_1_43 - var_1_11) , (var_1_14 + var_1_12))))))) : 1)) && (var_1_83 ? (var_1_62 == ((signed long int) (min (var_1_63 , var_1_52)))) : (var_1_62 == ((signed long int) (var_1_34 - var_1_20))))) && (((var_1_10 - 15.5) > var_1_43) ? (var_1_63 == ((signed long int) (max (var_1_102 , (max (128 , var_1_87)))))) : 1)) && (var_1_17 ? (var_1_64 == ((double) (max (var_1_11 , (var_1_12 + var_1_14))))) : (var_1_64 == ((double) (var_1_15 + var_1_10))))) && ((last_1_var_1_46 > var_1_33) ? ((var_1_31 >= var_1_3) ? (var_1_65 == ((signed long int) (last_1_var_1_70 + (min ((var_1_33 - last_1_var_1_81) , var_1_52))))) : (var_1_65 == ((signed long int) (max (var_1_60 , var_1_32))))) : (var_1_18 ? (var_1_65 == ((signed long int) (last_1_var_1_68 + var_1_30))) : 1))) && ((var_1_37 && (var_1_65 != (min (var_1_102 , var_1_48)))) ? (var_1_66 == ((unsigned long int) var_1_33)) : (var_1_66 == ((unsigned long int) ((var_1_48 - (abs (var_1_33))) + var_1_31))))) && ((! (var_1_35 >= var_1_44)) ? (var_1_67 == ((float) var_1_11)) : (((max (5 , var_1_81)) >= var_1_2) ? (var_1_67 == ((float) (((max (var_1_12 , var_1_14)) + (var_1_15 - var_1_11)) + var_1_10))) : (var_1_67 == ((float) (var_1_15 + var_1_14)))))) && ((var_1_5 && (var_1_4 <= var_1_63)) ? (var_1_68 == ((signed long int) (min (((1188294399 - var_1_33) - var_1_47) , var_1_30)))) : 1)) && ((var_1_16 || var_1_6) ? (var_1_69 == ((unsigned char) var_1_18)) : (var_1_69 == ((unsigned char) var_1_38)))) && ((var_1_87 <= (var_1_33 / (abs (var_1_48)))) ? (var_1_69 ? (var_1_70 == ((unsigned short int) (var_1_60 - (var_1_27 - var_1_71)))) : (var_1_70 == ((unsigned short int) (max (var_1_71 , var_1_33))))) : 1)) && ((((abs (var_1_54)) - var_1_33) >= (var_1_63 + -1)) ? (var_1_72 == ((double) (var_1_10 + (max (var_1_12 , var_1_14))))) : (var_1_72 == ((double) (var_1_12 + var_1_13))))) && (((- var_1_87) >= (var_1_27 / var_1_26)) ? (var_1_73 == ((unsigned char) (((100 - var_1_32) + var_1_74) - (max ((var_1_30 + var_1_31) , (abs (var_1_20))))))) : (var_1_73 == ((unsigned char) var_1_30)))) && ((var_1_6 || (var_1_69 && (var_1_31 <= var_1_45))) ? (((var_1_54 * var_1_26) >= var_1_45) ? ((var_1_60 >= var_1_4) ? ((var_1_32 > var_1_52) ? (var_1_75 == ((unsigned short int) (var_1_98 + ((var_1_76 - var_1_52) - (abs (var_1_71)))))) : (var_1_75 == ((unsigned short int) (min (((var_1_77 + var_1_78) + var_1_26) , 256))))) : 1) : (var_1_75 == ((unsigned short int) (10 + var_1_76)))) : ((var_1_69 || var_1_5) ? (var_1_75 == ((unsigned short int) (max (var_1_36 , var_1_30)))) : 1))) && ((var_1_46 < (abs (var_1_62))) ? (var_1_79 == ((unsigned char) (var_1_69 || (var_1_18 && var_1_38)))) : 1)) && (((var_1_48 + var_1_76) != var_1_4) ? (var_1_80 == ((float) 256.75f)) : 1)) && ((var_1_40 == (var_1_36 / var_1_82)) ? (var_1_81 == ((unsigned short int) (abs (min (var_1_20 , var_1_40))))) : 1)) && (((var_1_60 * var_1_40) >= (var_1_89 / var_1_74)) ? ((var_1_60 < var_1_26) ? (var_1_83 == ((unsigned char) (((var_1_54 - 10) != (~ var_1_75)) || (! var_1_6)))) : ((var_1_37 || ((var_1_75 <= var_1_102) && (var_1_11 <= var_1_57))) ? (var_1_83 == ((unsigned char) var_1_6)) : ((((var_1_26 - var_1_3) % var_1_52) < (var_1_45 | (var_1_20 * var_1_66))) ? (var_1_83 == ((unsigned char) (! (! var_1_6)))) : (var_1_83 == ((unsigned char) (var_1_5 || var_1_38)))))) : ((var_1_39 != (var_1_15 - var_1_43)) ? (var_1_83 == ((unsigned char) var_1_24)) : (var_1_83 == ((unsigned char) (var_1_5 || var_1_6)))))) && ((! (var_1_42 != (var_1_85 - var_1_86))) ? (var_1_84 == ((signed long int) (max ((max (var_1_77 , var_1_58)) , (min (-32 , 4)))))) : (var_1_84 == ((signed long int) (min (((var_1_26 + var_1_32) + var_1_30) , (max ((min (-64 , var_1_66)) , var_1_76)))))))) && (((var_1_54 + var_1_82) > ((abs (var_1_88)) / (abs (var_1_20)))) ? (var_1_87 == ((signed long int) var_1_77)) : (var_1_87 == ((signed long int) var_1_56)))) && (var_1_17 ? (var_1_89 == ((signed short int) -16)) : 1)) && (var_1_90 == ((unsigned char) var_1_30))) && (var_1_91 == ((unsigned char) var_1_74))) && (var_1_79 ? (var_1_92 == ((signed char) var_1_54)) : (var_1_92 == ((signed char) var_1_31)))) && (var_1_93 == ((unsigned char) var_1_5))) && (var_1_94 == ((signed long int) var_1_82))) && (var_1_24 ? (var_1_95 == ((double) var_1_13)) : 1)) && (var_1_96 == ((signed char) var_1_30))) && (var_1_97 == ((signed char) var_1_31))) && (var_1_98 == ((unsigned short int) var_1_74))) && (var_1_38 ? (var_1_99 == ((unsigned char) var_1_30)) : (var_1_99 == ((unsigned char) var_1_52)))) && (var_1_37 ? (var_1_100 == ((signed char) 0)) : (var_1_100 == ((signed char) var_1_32)))) && (var_1_18 ? (var_1_101 == ((signed char) var_1_54)) : (var_1_101 == ((signed char) var_1_32)))) && (var_1_24 ? (var_1_102 == ((unsigned long int) var_1_33)) : 1)) && (var_1_24 ? (var_1_103 == ((double) var_1_14)) : 1)) && (var_1_104 == ((double) var_1_14))) && (var_1_37 ? (var_1_105 == ((signed char) var_1_32)) : 1)) && (var_1_1 ? ((((var_1_107 - var_1_108) * (var_1_70 ^ var_1_66)) <= (var_1_62 ^ (50u * last_1_var_1_106))) ? (var_1_106 == ((unsigned long int) (var_1_109 - var_1_78))) : (var_1_106 == ((unsigned long int) var_1_52))) : (var_1_106 == ((unsigned long int) var_1_36)))
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
