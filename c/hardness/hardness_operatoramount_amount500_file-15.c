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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 32;
unsigned char var_1_3 = 32;
unsigned char var_1_4 = 4;
double var_1_5 = 128.5;
signed long int var_1_6 = 64;
signed long int var_1_7 = 4;
double var_1_8 = 1.875;
double var_1_9 = 15.8;
double var_1_10 = 25.4;
double var_1_11 = 127.5;
double var_1_12 = 5.8;
double var_1_14 = 7.6;
double var_1_15 = 0.6;
double var_1_16 = 255.6;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 1;
unsigned long int var_1_20 = 256;
unsigned long int var_1_21 = 1155984773;
unsigned long int var_1_22 = 1000000000;
unsigned long int var_1_23 = 2124532467;
unsigned char var_1_24 = 1;
float var_1_25 = 32.75;
signed short int var_1_27 = 10000;
signed long int var_1_28 = -500;
signed long int var_1_29 = 1706491467;
signed long int var_1_30 = 1735345111;
unsigned short int var_1_31 = 128;
signed long int var_1_32 = 100;
signed long int var_1_33 = -2;
double var_1_34 = 256.75;
unsigned long int var_1_35 = 128;
unsigned long int var_1_36 = 3277415832;
signed char var_1_37 = 32;
signed char var_1_38 = 8;
signed char var_1_39 = 5;
signed char var_1_40 = 2;
unsigned char var_1_41 = 32;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 8;
unsigned long int var_1_45 = 100;
float var_1_46 = 99999999999999.12;
unsigned long int var_1_47 = 0;
unsigned long int var_1_48 = 3356564425;
signed char var_1_49 = -32;
unsigned long int var_1_50 = 3495439460;
signed char var_1_51 = 5;
signed char var_1_52 = 2;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_56 = 0;
double var_1_57 = 16.3;
unsigned long int var_1_58 = 16;
unsigned long int var_1_59 = 3461138697;
signed long int var_1_60 = -16;
signed long int var_1_61 = 25;
signed char var_1_63 = -32;
signed char var_1_64 = 32;
signed char var_1_65 = 32;
signed char var_1_66 = -1;
signed long int var_1_67 = -1;
signed char var_1_68 = -2;
unsigned char var_1_69 = 10;
unsigned char var_1_70 = 128;
unsigned char var_1_71 = 5;
float var_1_72 = 31.2;
unsigned long int var_1_73 = 4;
double var_1_74 = 2.75;
double var_1_75 = 128.5;
unsigned char var_1_77 = 2;
unsigned char var_1_78 = 128;
signed long int var_1_79 = 8;
unsigned char var_1_80 = 0;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
signed long int var_1_86 = 25;
unsigned short int var_1_87 = 128;
unsigned char var_1_88 = 0;
unsigned short int var_1_89 = 5;
signed char var_1_90 = 32;
signed char var_1_91 = -1;
signed char var_1_92 = 64;
double var_1_93 = 2.5;
double var_1_94 = 7.25;
unsigned long int var_1_95 = 100;
unsigned char var_1_96 = 1;
unsigned long int var_1_97 = 25;
unsigned char var_1_98 = 2;
signed long int var_1_99 = 128;
double var_1_100 = 128.2;
signed long int var_1_101 = 32;
unsigned char var_1_102 = 0;
unsigned short int var_1_103 = 16;
unsigned long int var_1_104 = 100;
double var_1_105 = 9.9;
signed long int var_1_106 = -10;
float var_1_107 = 127.5;
double var_1_108 = 255.5;
double var_1_109 = 4.1;
signed long int var_1_110 = -256;
unsigned char var_1_111 = 1;
signed short int var_1_112 = 10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_20 = 256;
unsigned char last_1_var_1_24 = 1;
signed long int last_1_var_1_33 = -2;
unsigned char last_1_var_1_53 = 0;
signed char last_1_var_1_66 = -1;
unsigned char last_1_var_1_80 = 0;
double last_1_var_1_108 = 255.5;
unsigned char last_1_var_1_111 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req56Batch15Amount500
	if (last_1_var_1_53) {
		var_1_111 = var_1_54;
	} else {
		var_1_111 = var_1_56;
	}


	// From: Req4Batch15Amount500
	if (var_1_12 >= (min ((var_1_14 - var_1_9) , last_1_var_1_108))) {
		if (var_1_4 < var_1_7) {
			var_1_17 = (last_1_var_1_80 || (last_1_var_1_24 || (last_1_var_1_111 || var_1_19)));
		}
	}


	// From: Req3Batch15Amount500
	var_1_16 = (var_1_9 - 1.000000000000075E13);


	// From: Req25Batch15Amount500
	if (var_1_111) {
		var_1_63 = (((var_1_64 + var_1_65) - var_1_52) - (abs (abs (2))));
	} else {
		var_1_63 = (max ((var_1_40 - var_1_39) , (abs (var_1_51))));
	}


	// From: Req27Batch15Amount500
	var_1_69 = (min ((var_1_64 + 4) , (var_1_70 - (max (var_1_71 , 5)))));


	// From: Req28Batch15Amount500
	if (var_1_7 >= var_1_39) {
		var_1_72 = (min (var_1_9 , (abs (5.875f + var_1_10))));
	}


	// From: Req36Batch15Amount500
	var_1_89 = (min (var_1_52 , (var_1_78 + var_1_65)));


	// From: Req38Batch15Amount500
	signed long int stepLocal_21 = 1 + var_1_51;
	if ((var_1_61 % (var_1_70 - var_1_65)) != stepLocal_21) {
		var_1_93 = (max (var_1_12 , var_1_10));
	}


	// From: Req40Batch15Amount500
	var_1_95 = var_1_71;


	// From: Req41Batch15Amount500
	var_1_96 = var_1_83;


	// From: Req42Batch15Amount500
	if (var_1_17) {
		var_1_97 = var_1_42;
	}


	// From: Req44Batch15Amount500
	var_1_99 = 0;


	// From: Req45Batch15Amount500
	if (var_1_96) {
		var_1_100 = var_1_15;
	}


	// From: Req47Batch15Amount500
	var_1_102 = var_1_54;


	// From: Req50Batch15Amount500
	var_1_105 = 4.6;


	// From: Req51Batch15Amount500
	var_1_106 = 50;


	// From: Req52Batch15Amount500
	var_1_107 = var_1_14;


	// From: Req53Batch15Amount500
	if (var_1_56) {
		var_1_108 = var_1_12;
	}


	// From: Req54Batch15Amount500
	if (var_1_102) {
		var_1_109 = var_1_14;
	} else {
		var_1_109 = var_1_11;
	}


	// From: Req55Batch15Amount500
	if (var_1_85) {
		var_1_110 = var_1_29;
	} else {
		var_1_110 = var_1_39;
	}


	// From: Req13Batch15Amount500
	unsigned char stepLocal_6 = var_1_96;
	if (stepLocal_6 || var_1_17) {
		var_1_34 = var_1_10;
	}


	// From: Req5Batch15Amount500
	if (var_1_96) {
		var_1_20 = ((var_1_21 - (var_1_22 - var_1_3)) + ((var_1_23 - last_1_var_1_20) - var_1_4));
	}


	// From: Req6Batch15Amount500
	if (var_1_15 < var_1_93) {
		var_1_24 = var_1_19;
	}


	// From: Req7Batch15Amount500
	if (var_1_10 < var_1_34) {
		var_1_25 = var_1_10;
	} else {
		var_1_25 = (max (var_1_12 , var_1_10));
	}


	// From: Req9Batch15Amount500
	if (var_1_108 == var_1_10) {
		var_1_28 = var_1_4;
	} else {
		var_1_28 = (abs (var_1_29 - var_1_30));
	}


	// From: Req11Batch15Amount500
	signed long int stepLocal_4 = var_1_110;
	signed long int stepLocal_3 = var_1_7;
	if (var_1_15 > (var_1_8 - var_1_9)) {
		if (stepLocal_4 > var_1_22) {
			if (var_1_6 < stepLocal_3) {
				var_1_32 = var_1_3;
			}
		}
	} else {
		if (var_1_102) {
			var_1_32 = (var_1_110 + ((max (-1 , var_1_4)) + var_1_95));
		} else {
			var_1_32 = ((-1 + var_1_110) + (var_1_3 - 16));
		}
	}


	// From: Req14Batch15Amount500
	if (var_1_12 != (var_1_100 + var_1_15)) {
		var_1_35 = (min (((var_1_36 - var_1_3) - var_1_21) , var_1_29));
	}


	// From: Req16Batch15Amount500
	if (var_1_24 || var_1_19) {
		var_1_41 = var_1_39;
	} else {
		var_1_41 = (((min (64 , var_1_42)) + var_1_43) - (max ((min (var_1_40 , var_1_4)) , (min (var_1_39 , var_1_44)))));
	}


	// From: Req17Batch15Amount500
	if (var_1_19) {
		if (var_1_14 < (max (var_1_11 , 9.4))) {
			var_1_45 = ((abs (var_1_36)) - var_1_95);
		}
	} else {
		var_1_45 = 128u;
	}


	// From: Req18Batch15Amount500
	if ((var_1_14 - var_1_15) <= var_1_105) {
		var_1_46 = (var_1_10 + var_1_14);
	}


	// From: Req19Batch15Amount500
	if ((- (- var_1_109)) != var_1_12) {
		var_1_47 = ((min (var_1_36 , var_1_48)) - var_1_40);
	} else {
		var_1_47 = (((var_1_23 - 4u) + 1170076666u) - var_1_29);
	}


	// From: Req22Batch15Amount500
	unsigned long int stepLocal_10 = var_1_45;
	if (var_1_42 >= stepLocal_10) {
		if ((var_1_14 * 63.8) < var_1_12) {
			var_1_57 = (var_1_10 + (var_1_11 + 63.5));
		} else {
			var_1_57 = (abs (var_1_8));
		}
	}


	// From: Req23Batch15Amount500
	if ((- var_1_97) == var_1_52) {
		if ((var_1_35 / var_1_43) >= var_1_97) {
			var_1_58 = (var_1_59 - (var_1_22 + var_1_4));
		}
	}


	// From: Req31Batch15Amount500
	signed char stepLocal_16 = var_1_38;
	if (var_1_102) {
		var_1_79 = (min ((var_1_51 - var_1_41) , var_1_68));
	} else {
		if (stepLocal_16 < var_1_61) {
			if ((min (var_1_15 , var_1_93)) != ((max (var_1_34 , 5.7)) + var_1_74)) {
				var_1_79 = var_1_41;
			} else {
				var_1_79 = 128;
			}
		} else {
			var_1_79 = (min (var_1_89 , var_1_61));
		}
	}


	// From: Req34Batch15Amount500
	if (var_1_11 <= var_1_100) {
		var_1_87 = (var_1_71 + var_1_40);
	} else {
		var_1_87 = (min (var_1_78 , (var_1_42 + var_1_3)));
	}


	// From: Req37Batch15Amount500
	if ((var_1_14 / (max (var_1_74 , var_1_75))) >= (abs (var_1_108))) {
		if (var_1_96) {
			if ((var_1_64 << var_1_65) > (5 - (abs (var_1_20)))) {
				if ((var_1_9 - var_1_14) < var_1_11) {
					var_1_90 = ((max (var_1_68 , var_1_39)) + var_1_4);
				} else {
					var_1_90 = var_1_3;
				}
			}
		} else {
			var_1_90 = ((min ((max (var_1_39 , var_1_4)) , var_1_64)) + var_1_68);
		}
	} else {
		if ((var_1_14 - var_1_9) >= ((- var_1_74) / 63.5)) {
			var_1_90 = ((var_1_4 - var_1_64) + (var_1_68 + var_1_91));
		} else {
			if ((max (127.5 , var_1_105)) > ((max (var_1_15 , var_1_8)) - 0.75)) {
				var_1_90 = (max ((var_1_40 - (var_1_92 - var_1_4)) , var_1_91));
			} else {
				var_1_90 = var_1_3;
			}
		}
	}


	// From: Req46Batch15Amount500
	if (var_1_54) {
		var_1_101 = var_1_106;
	} else {
		var_1_101 = var_1_91;
	}


	// From: Req49Batch15Amount500
	if (var_1_24) {
		var_1_104 = var_1_36;
	}


	// From: Req10Batch15Amount500
	unsigned char stepLocal_2 = var_1_19;
	if (var_1_17) {
		var_1_31 = (max (var_1_58 , var_1_4));
	} else {
		if ((var_1_47 <= var_1_7) || stepLocal_2) {
			var_1_31 = 5;
		} else {
			var_1_31 = var_1_58;
		}
	}


	// From: Req12Batch15Amount500
	unsigned char stepLocal_5 = var_1_17;
	if (stepLocal_5 && ((var_1_6 / var_1_7) < last_1_var_1_33)) {
		var_1_33 = (max ((last_1_var_1_33 + var_1_101) , -100000));
	} else {
		var_1_33 = (min ((max (var_1_22 , var_1_29)) , last_1_var_1_33));
	}


	// From: Req20Batch15Amount500
	if (((var_1_50 - var_1_43) - var_1_4) < 64u) {
		if (var_1_87 < var_1_95) {
			var_1_49 = (max ((max (-64 , var_1_38)) , (min ((var_1_39 + var_1_4) , var_1_3))));
		} else {
			var_1_49 = (min (((min (var_1_40 , var_1_51)) - (abs (var_1_39))) , var_1_38));
		}
	} else {
		var_1_49 = (var_1_4 - (var_1_39 + var_1_52));
	}


	// From: Req32Batch15Amount500
	unsigned long int stepLocal_18 = var_1_36;
	signed long int stepLocal_17 = var_1_110;
	if (stepLocal_17 < (var_1_52 & (min (10 , var_1_20)))) {
		if ((var_1_8 + var_1_34) < var_1_16) {
			if (var_1_96) {
				var_1_80 = (! var_1_19);
			}
		} else {
			if (var_1_49 == stepLocal_18) {
				var_1_80 = (var_1_19 && (var_1_83 && (var_1_84 && var_1_85)));
			} else {
				var_1_80 = (var_1_54 || (! var_1_19));
			}
		}
	}


	// From: Req1Batch15Amount500
	if (var_1_80) {
		var_1_1 = ((var_1_3 + var_1_4) + 8);
	}


	// From: Req2Batch15Amount500
	unsigned char stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = (var_1_31 * var_1_4) % var_1_7;
	if (var_1_111) {
		if (((var_1_3 / 1) / var_1_6) == stepLocal_0) {
			var_1_5 = (max ((var_1_8 - (var_1_9 + 8.2)) , (var_1_10 + (var_1_11 + var_1_12))));
		} else {
			if (var_1_17) {
				if ((var_1_31 / (min (var_1_6 , var_1_7))) != stepLocal_1) {
					var_1_5 = (var_1_8 - (abs (var_1_10)));
				} else {
					var_1_5 = ((max ((var_1_9 + var_1_14) , var_1_8)) - var_1_15);
				}
			} else {
				var_1_5 = ((5.563046395433933E18 - var_1_9) - (min ((abs (var_1_11)) , var_1_15)));
			}
		}
	} else {
		var_1_5 = ((var_1_12 + var_1_11) + 64.8);
	}


	// From: Req15Batch15Amount500
	if (var_1_80) {
		var_1_37 = (var_1_4 - ((abs (var_1_38)) + var_1_39));
	} else {
		if (var_1_19) {
			var_1_37 = (max (var_1_38 , var_1_3));
		} else {
			var_1_37 = ((min (var_1_4 , var_1_39)) - (min (var_1_3 , var_1_40)));
		}
	}


	// From: Req30Batch15Amount500
	if (var_1_102) {
		if (var_1_80) {
			var_1_77 = (max (var_1_43 , 0));
		} else {
			var_1_77 = ((min (200 , var_1_78)) - (min ((var_1_4 + var_1_65) , (8 + var_1_39))));
		}
	}


	// From: Req21Batch15Amount500
	unsigned char stepLocal_9 = var_1_44;
	unsigned long int stepLocal_8 = var_1_47 * var_1_42;
	unsigned long int stepLocal_7 = var_1_47;
	if (stepLocal_9 < var_1_20) {
		if (var_1_111) {
			var_1_53 = ((! (var_1_80 || var_1_19)) || (var_1_17 && var_1_54));
		} else {
			var_1_53 = 0;
		}
	} else {
		if ((var_1_106 % var_1_6) <= stepLocal_8) {
			if (stepLocal_7 > var_1_22) {
				var_1_53 = (! var_1_54);
			} else {
				var_1_53 = ((var_1_111 && var_1_54) || var_1_56);
			}
		}
	}


	// From: Req8Batch15Amount500
	if (var_1_53 || var_1_19) {
		var_1_27 = (max (var_1_4 , var_1_45));
	} else {
		var_1_27 = (var_1_3 + var_1_4);
	}


	// From: Req29Batch15Amount500
	unsigned char stepLocal_15 = var_1_96;
	if (((min (var_1_9 , var_1_100)) / (min (var_1_74 , var_1_75))) >= var_1_11) {
		var_1_73 = ((var_1_23 - var_1_97) + (var_1_65 + var_1_64));
	} else {
		if (stepLocal_15 && var_1_53) {
			var_1_73 = (var_1_48 - var_1_4);
		}
	}


	// From: Req43Batch15Amount500
	if (var_1_53) {
		var_1_98 = var_1_65;
	} else {
		var_1_98 = var_1_44;
	}


	// From: Req57Batch15Amount500
	signed long int stepLocal_24 = var_1_61;
	if (! var_1_53) {
		var_1_112 = (min ((-64 + var_1_44) , var_1_38));
	} else {
		if (! var_1_17) {
			if (stepLocal_24 > var_1_28) {
				var_1_112 = (abs (var_1_40));
			} else {
				var_1_112 = var_1_40;
			}
		}
	}


	// From: Req24Batch15Amount500
	unsigned char stepLocal_14 = var_1_3;
	unsigned long int stepLocal_13 = var_1_97;
	unsigned long int stepLocal_12 = var_1_73;
	signed long int stepLocal_11 = abs (32);
	if (4u <= stepLocal_14) {
		if ((var_1_30 ^ var_1_40) > stepLocal_11) {
			var_1_60 = (abs (var_1_31 + (min (var_1_4 , var_1_61))));
		} else {
			if (stepLocal_12 == var_1_97) {
				var_1_60 = (abs (var_1_61));
			}
		}
	} else {
		if (var_1_8 > var_1_5) {
			if ((var_1_59 % var_1_6) < stepLocal_13) {
				var_1_60 = ((var_1_29 - var_1_39) - var_1_101);
			} else {
				var_1_60 = (abs (var_1_31));
			}
		} else {
			var_1_60 = ((var_1_44 - var_1_97) + var_1_40);
		}
	}


	// From: Req26Batch15Amount500
	if (((- 2) + (max (var_1_112 , last_1_var_1_66))) < ((-10 * var_1_20) % (max (var_1_67 , var_1_6)))) {
		if (var_1_23 < var_1_95) {
			var_1_66 = (var_1_65 + var_1_52);
		} else {
			if (var_1_20 > var_1_51) {
				var_1_66 = ((min (var_1_4 , (var_1_65 - 4))) + (var_1_68 + (abs (-1))));
			} else {
				var_1_66 = (max ((var_1_52 - var_1_4) , var_1_64));
			}
		}
	} else {
		var_1_66 = (var_1_39 + var_1_4);
	}


	// From: Req33Batch15Amount500
	if (! (var_1_112 > var_1_21)) {
		var_1_86 = (abs ((max (var_1_42 , var_1_71)) - (min (var_1_52 , var_1_29))));
	}


	// From: Req48Batch15Amount500
	if (var_1_111) {
		var_1_103 = var_1_60;
	}


	// From: Req35Batch15Amount500
	unsigned char stepLocal_20 = var_1_96;
	unsigned long int stepLocal_19 = var_1_104;
	if (stepLocal_20 && var_1_84) {
		if (! ((var_1_9 + var_1_72) >= (abs (var_1_14)))) {
			var_1_88 = var_1_3;
		}
	} else {
		if (stepLocal_19 >= var_1_103) {
			var_1_88 = (min (var_1_78 , (var_1_70 - var_1_40)));
		} else {
			var_1_88 = var_1_43;
		}
	}


	// From: Req39Batch15Amount500
	unsigned char stepLocal_23 = var_1_83;
	signed long int stepLocal_22 = - (var_1_92 + var_1_29);
	if (stepLocal_23 && ((var_1_71 << var_1_88) >= 1000)) {
		if (stepLocal_22 <= var_1_88) {
			var_1_94 = (var_1_14 + var_1_10);
		} else {
			var_1_94 = (var_1_14 - var_1_9);
		}
	} else {
		if (((- var_1_9) / var_1_74) <= (7.25 + var_1_109)) {
			var_1_94 = (min (var_1_9 , var_1_15));
		} else {
			var_1_94 = var_1_9;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 64);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691400e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 536870911);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 1610612735);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= 1073741822);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= 1073741822);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 3221225470);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 63);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 64);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 2147483647);
	assume_abort_if_not(var_1_48 <= 4294967294);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 3221225471);
	assume_abort_if_not(var_1_50 <= 4294967295);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -1);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= -1073741823);
	assume_abort_if_not(var_1_61 <= 1073741823);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 31);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 31);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483648);
	assume_abort_if_not(var_1_67 <= 2147483647);
	assume_abort_if_not(var_1_67 != 0);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -31);
	assume_abort_if_not(var_1_68 <= 32);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 127);
	assume_abort_if_not(var_1_70 <= 254);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 127);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= -922337.2036854776000e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
	assume_abort_if_not(var_1_74 != 0.0F);
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= -922337.2036854776000e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854776000e+12F && var_1_75 >= 1.0e-20F ));
	assume_abort_if_not(var_1_75 != 0.0F);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 127);
	assume_abort_if_not(var_1_78 <= 254);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 1);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 1);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= -31);
	assume_abort_if_not(var_1_91 <= 31);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 63);
	assume_abort_if_not(var_1_92 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_111 = var_1_111;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_80 ? (var_1_1 == ((unsigned char) ((var_1_3 + var_1_4) + 8))) : 1) && (var_1_111 ? ((((var_1_3 / 1) / var_1_6) == ((var_1_31 * var_1_4) % var_1_7)) ? (var_1_5 == ((double) (max ((var_1_8 - (var_1_9 + 8.2)) , (var_1_10 + (var_1_11 + var_1_12)))))) : (var_1_17 ? (((var_1_31 / (min (var_1_6 , var_1_7))) != var_1_4) ? (var_1_5 == ((double) (var_1_8 - (abs (var_1_10))))) : (var_1_5 == ((double) ((max ((var_1_9 + var_1_14) , var_1_8)) - var_1_15)))) : (var_1_5 == ((double) ((5.563046395433933E18 - var_1_9) - (min ((abs (var_1_11)) , var_1_15))))))) : (var_1_5 == ((double) ((var_1_12 + var_1_11) + 64.8))))) && (var_1_16 == ((double) (var_1_9 - 1.000000000000075E13)))) && ((var_1_12 >= (min ((var_1_14 - var_1_9) , last_1_var_1_108))) ? ((var_1_4 < var_1_7) ? (var_1_17 == ((unsigned char) (last_1_var_1_80 || (last_1_var_1_24 || (last_1_var_1_111 || var_1_19))))) : 1) : 1)) && (var_1_96 ? (var_1_20 == ((unsigned long int) ((var_1_21 - (var_1_22 - var_1_3)) + ((var_1_23 - last_1_var_1_20) - var_1_4)))) : 1)) && ((var_1_15 < var_1_93) ? (var_1_24 == ((unsigned char) var_1_19)) : 1)) && ((var_1_10 < var_1_34) ? (var_1_25 == ((float) var_1_10)) : (var_1_25 == ((float) (max (var_1_12 , var_1_10)))))) && ((var_1_53 || var_1_19) ? (var_1_27 == ((signed short int) (max (var_1_4 , var_1_45)))) : (var_1_27 == ((signed short int) (var_1_3 + var_1_4))))) && ((var_1_108 == var_1_10) ? (var_1_28 == ((signed long int) var_1_4)) : (var_1_28 == ((signed long int) (abs (var_1_29 - var_1_30)))))) && (var_1_17 ? (var_1_31 == ((unsigned short int) (max (var_1_58 , var_1_4)))) : (((var_1_47 <= var_1_7) || var_1_19) ? (var_1_31 == ((unsigned short int) 5)) : (var_1_31 == ((unsigned short int) var_1_58))))) && ((var_1_15 > (var_1_8 - var_1_9)) ? ((var_1_110 > var_1_22) ? ((var_1_6 < var_1_7) ? (var_1_32 == ((signed long int) var_1_3)) : 1) : 1) : (var_1_102 ? (var_1_32 == ((signed long int) (var_1_110 + ((max (-1 , var_1_4)) + var_1_95)))) : (var_1_32 == ((signed long int) ((-1 + var_1_110) + (var_1_3 - 16))))))) && ((var_1_17 && ((var_1_6 / var_1_7) < last_1_var_1_33)) ? (var_1_33 == ((signed long int) (max ((last_1_var_1_33 + var_1_101) , -100000)))) : (var_1_33 == ((signed long int) (min ((max (var_1_22 , var_1_29)) , last_1_var_1_33)))))) && ((var_1_96 || var_1_17) ? (var_1_34 == ((double) var_1_10)) : 1)) && ((var_1_12 != (var_1_100 + var_1_15)) ? (var_1_35 == ((unsigned long int) (min (((var_1_36 - var_1_3) - var_1_21) , var_1_29)))) : 1)) && (var_1_80 ? (var_1_37 == ((signed char) (var_1_4 - ((abs (var_1_38)) + var_1_39)))) : (var_1_19 ? (var_1_37 == ((signed char) (max (var_1_38 , var_1_3)))) : (var_1_37 == ((signed char) ((min (var_1_4 , var_1_39)) - (min (var_1_3 , var_1_40)))))))) && ((var_1_24 || var_1_19) ? (var_1_41 == ((unsigned char) var_1_39)) : (var_1_41 == ((unsigned char) (((min (64 , var_1_42)) + var_1_43) - (max ((min (var_1_40 , var_1_4)) , (min (var_1_39 , var_1_44))))))))) && (var_1_19 ? ((var_1_14 < (max (var_1_11 , 9.4))) ? (var_1_45 == ((unsigned long int) ((abs (var_1_36)) - var_1_95))) : 1) : (var_1_45 == ((unsigned long int) 128u)))) && (((var_1_14 - var_1_15) <= var_1_105) ? (var_1_46 == ((float) (var_1_10 + var_1_14))) : 1)) && (((- (- var_1_109)) != var_1_12) ? (var_1_47 == ((unsigned long int) ((min (var_1_36 , var_1_48)) - var_1_40))) : (var_1_47 == ((unsigned long int) (((var_1_23 - 4u) + 1170076666u) - var_1_29))))) && ((((var_1_50 - var_1_43) - var_1_4) < 64u) ? ((var_1_87 < var_1_95) ? (var_1_49 == ((signed char) (max ((max (-64 , var_1_38)) , (min ((var_1_39 + var_1_4) , var_1_3)))))) : (var_1_49 == ((signed char) (min (((min (var_1_40 , var_1_51)) - (abs (var_1_39))) , var_1_38))))) : (var_1_49 == ((signed char) (var_1_4 - (var_1_39 + var_1_52)))))) && ((var_1_44 < var_1_20) ? (var_1_111 ? (var_1_53 == ((unsigned char) ((! (var_1_80 || var_1_19)) || (var_1_17 && var_1_54)))) : (var_1_53 == ((unsigned char) 0))) : (((var_1_106 % var_1_6) <= (var_1_47 * var_1_42)) ? ((var_1_47 > var_1_22) ? (var_1_53 == ((unsigned char) (! var_1_54))) : (var_1_53 == ((unsigned char) ((var_1_111 && var_1_54) || var_1_56)))) : 1))) && ((var_1_42 >= var_1_45) ? (((var_1_14 * 63.8) < var_1_12) ? (var_1_57 == ((double) (var_1_10 + (var_1_11 + 63.5)))) : (var_1_57 == ((double) (abs (var_1_8))))) : 1)) && (((- var_1_97) == var_1_52) ? (((var_1_35 / var_1_43) >= var_1_97) ? (var_1_58 == ((unsigned long int) (var_1_59 - (var_1_22 + var_1_4)))) : 1) : 1)) && ((4u <= var_1_3) ? (((var_1_30 ^ var_1_40) > (abs (32))) ? (var_1_60 == ((signed long int) (abs (var_1_31 + (min (var_1_4 , var_1_61)))))) : ((var_1_73 == var_1_97) ? (var_1_60 == ((signed long int) (abs (var_1_61)))) : 1)) : ((var_1_8 > var_1_5) ? (((var_1_59 % var_1_6) < var_1_97) ? (var_1_60 == ((signed long int) ((var_1_29 - var_1_39) - var_1_101))) : (var_1_60 == ((signed long int) (abs (var_1_31))))) : (var_1_60 == ((signed long int) ((var_1_44 - var_1_97) + var_1_40)))))) && (var_1_111 ? (var_1_63 == ((signed char) (((var_1_64 + var_1_65) - var_1_52) - (abs (abs (2)))))) : (var_1_63 == ((signed char) (max ((var_1_40 - var_1_39) , (abs (var_1_51)))))))) && ((((- 2) + (max (var_1_112 , last_1_var_1_66))) < ((-10 * var_1_20) % (max (var_1_67 , var_1_6)))) ? ((var_1_23 < var_1_95) ? (var_1_66 == ((signed char) (var_1_65 + var_1_52))) : ((var_1_20 > var_1_51) ? (var_1_66 == ((signed char) ((min (var_1_4 , (var_1_65 - 4))) + (var_1_68 + (abs (-1)))))) : (var_1_66 == ((signed char) (max ((var_1_52 - var_1_4) , var_1_64)))))) : (var_1_66 == ((signed char) (var_1_39 + var_1_4))))) && (var_1_69 == ((unsigned char) (min ((var_1_64 + 4) , (var_1_70 - (max (var_1_71 , 5)))))))) && ((var_1_7 >= var_1_39) ? (var_1_72 == ((float) (min (var_1_9 , (abs (5.875f + var_1_10)))))) : 1)) && ((((min (var_1_9 , var_1_100)) / (min (var_1_74 , var_1_75))) >= var_1_11) ? (var_1_73 == ((unsigned long int) ((var_1_23 - var_1_97) + (var_1_65 + var_1_64)))) : ((var_1_96 && var_1_53) ? (var_1_73 == ((unsigned long int) (var_1_48 - var_1_4))) : 1))) && (var_1_102 ? (var_1_80 ? (var_1_77 == ((unsigned char) (max (var_1_43 , 0)))) : (var_1_77 == ((unsigned char) ((min (200 , var_1_78)) - (min ((var_1_4 + var_1_65) , (8 + var_1_39))))))) : 1)) && (var_1_102 ? (var_1_79 == ((signed long int) (min ((var_1_51 - var_1_41) , var_1_68)))) : ((var_1_38 < var_1_61) ? (((min (var_1_15 , var_1_93)) != ((max (var_1_34 , 5.7)) + var_1_74)) ? (var_1_79 == ((signed long int) var_1_41)) : (var_1_79 == ((signed long int) 128))) : (var_1_79 == ((signed long int) (min (var_1_89 , var_1_61))))))) && ((var_1_110 < (var_1_52 & (min (10 , var_1_20)))) ? (((var_1_8 + var_1_34) < var_1_16) ? (var_1_96 ? (var_1_80 == ((unsigned char) (! var_1_19))) : 1) : ((var_1_49 == var_1_36) ? (var_1_80 == ((unsigned char) (var_1_19 && (var_1_83 && (var_1_84 && var_1_85))))) : (var_1_80 == ((unsigned char) (var_1_54 || (! var_1_19)))))) : 1)) && ((! (var_1_112 > var_1_21)) ? (var_1_86 == ((signed long int) (abs ((max (var_1_42 , var_1_71)) - (min (var_1_52 , var_1_29)))))) : 1)) && ((var_1_11 <= var_1_100) ? (var_1_87 == ((unsigned short int) (var_1_71 + var_1_40))) : (var_1_87 == ((unsigned short int) (min (var_1_78 , (var_1_42 + var_1_3))))))) && ((var_1_96 && var_1_84) ? ((! ((var_1_9 + var_1_72) >= (abs (var_1_14)))) ? (var_1_88 == ((unsigned char) var_1_3)) : 1) : ((var_1_104 >= var_1_103) ? (var_1_88 == ((unsigned char) (min (var_1_78 , (var_1_70 - var_1_40))))) : (var_1_88 == ((unsigned char) var_1_43))))) && (var_1_89 == ((unsigned short int) (min (var_1_52 , (var_1_78 + var_1_65)))))) && (((var_1_14 / (max (var_1_74 , var_1_75))) >= (abs (var_1_108))) ? (var_1_96 ? (((var_1_64 << var_1_65) > (5 - (abs (var_1_20)))) ? (((var_1_9 - var_1_14) < var_1_11) ? (var_1_90 == ((signed char) ((max (var_1_68 , var_1_39)) + var_1_4))) : (var_1_90 == ((signed char) var_1_3))) : 1) : (var_1_90 == ((signed char) ((min ((max (var_1_39 , var_1_4)) , var_1_64)) + var_1_68)))) : (((var_1_14 - var_1_9) >= ((- var_1_74) / 63.5)) ? (var_1_90 == ((signed char) ((var_1_4 - var_1_64) + (var_1_68 + var_1_91)))) : (((max (127.5 , var_1_105)) > ((max (var_1_15 , var_1_8)) - 0.75)) ? (var_1_90 == ((signed char) (max ((var_1_40 - (var_1_92 - var_1_4)) , var_1_91)))) : (var_1_90 == ((signed char) var_1_3)))))) && (((var_1_61 % (var_1_70 - var_1_65)) != (1 + var_1_51)) ? (var_1_93 == ((double) (max (var_1_12 , var_1_10)))) : 1)) && ((var_1_83 && ((var_1_71 << var_1_88) >= 1000)) ? (((- (var_1_92 + var_1_29)) <= var_1_88) ? (var_1_94 == ((double) (var_1_14 + var_1_10))) : (var_1_94 == ((double) (var_1_14 - var_1_9)))) : ((((- var_1_9) / var_1_74) <= (7.25 + var_1_109)) ? (var_1_94 == ((double) (min (var_1_9 , var_1_15)))) : (var_1_94 == ((double) var_1_9))))) && (var_1_95 == ((unsigned long int) var_1_71))) && (var_1_96 == ((unsigned char) var_1_83))) && (var_1_17 ? (var_1_97 == ((unsigned long int) var_1_42)) : 1)) && (var_1_53 ? (var_1_98 == ((unsigned char) var_1_65)) : (var_1_98 == ((unsigned char) var_1_44)))) && (var_1_99 == ((signed long int) 0))) && (var_1_96 ? (var_1_100 == ((double) var_1_15)) : 1)) && (var_1_54 ? (var_1_101 == ((signed long int) var_1_106)) : (var_1_101 == ((signed long int) var_1_91)))) && (var_1_102 == ((unsigned char) var_1_54))) && (var_1_111 ? (var_1_103 == ((unsigned short int) var_1_60)) : 1)) && (var_1_24 ? (var_1_104 == ((unsigned long int) var_1_36)) : 1)) && (var_1_105 == ((double) 4.6))) && (var_1_106 == ((signed long int) 50))) && (var_1_107 == ((float) var_1_14))) && (var_1_56 ? (var_1_108 == ((double) var_1_12)) : 1)) && (var_1_102 ? (var_1_109 == ((double) var_1_14)) : (var_1_109 == ((double) var_1_11)))) && (var_1_85 ? (var_1_110 == ((signed long int) var_1_29)) : (var_1_110 == ((signed long int) var_1_39)))) && (last_1_var_1_53 ? (var_1_111 == ((unsigned char) var_1_54)) : (var_1_111 == ((unsigned char) var_1_56)))) && ((! var_1_53) ? (var_1_112 == ((signed short int) (min ((-64 + var_1_44) , var_1_38)))) : ((! var_1_17) ? ((var_1_61 > var_1_28) ? (var_1_112 == ((signed short int) (abs (var_1_40)))) : (var_1_112 == ((signed short int) var_1_40))) : 1))
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
