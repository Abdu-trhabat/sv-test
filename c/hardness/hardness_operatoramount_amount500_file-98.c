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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
unsigned long int var_1_4 = 128;
signed char var_1_5 = 100;
signed char var_1_6 = 5;
signed char var_1_7 = 64;
signed char var_1_8 = 2;
unsigned char var_1_9 = 8;
signed char var_1_10 = 64;
signed char var_1_12 = 8;
signed char var_1_13 = 10;
signed char var_1_14 = 10;
signed long int var_1_15 = 2;
signed long int var_1_16 = 1;
signed char var_1_17 = 2;
signed char var_1_18 = 64;
signed long int var_1_19 = 64;
signed char var_1_23 = 2;
signed char var_1_24 = 4;
unsigned short int var_1_25 = 2;
unsigned char var_1_26 = 64;
signed long int var_1_27 = -100000000;
unsigned long int var_1_28 = 256;
unsigned long int var_1_30 = 2220977997;
signed short int var_1_31 = -10;
signed short int var_1_32 = 16393;
signed short int var_1_33 = 5;
unsigned short int var_1_34 = 4;
unsigned short int var_1_36 = 37714;
unsigned short int var_1_37 = 19357;
double var_1_38 = 200.32;
double var_1_39 = 1.5;
double var_1_40 = 50.5;
double var_1_41 = 32.5;
unsigned short int var_1_42 = 128;
unsigned char var_1_43 = 1;
signed char var_1_44 = 5;
unsigned char var_1_45 = 8;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 128;
unsigned char var_1_48 = 25;
unsigned short int var_1_49 = 4;
unsigned short int var_1_50 = 25254;
unsigned short int var_1_51 = 8;
unsigned char var_1_52 = 4;
signed long int var_1_53 = 100;
signed long int var_1_54 = 1;
float var_1_55 = 64.6;
float var_1_56 = 50.5;
float var_1_57 = 0.19999999999999996;
unsigned long int var_1_58 = 128;
signed long int var_1_59 = 1820824717;
unsigned long int var_1_60 = 2051742201;
double var_1_61 = 24.5;
double var_1_62 = 4.6;
double var_1_63 = 100000000.75;
double var_1_64 = 8.875;
unsigned char var_1_65 = 32;
unsigned char var_1_66 = 100;
signed short int var_1_67 = -8;
double var_1_68 = 9.5;
signed long int var_1_69 = -2;
double var_1_70 = 10.4;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
float var_1_74 = -0.75;
float var_1_75 = 1.125;
float var_1_76 = 3.4;
double var_1_77 = -0.5;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 1;
float var_1_80 = 15.25;
float var_1_81 = 63.6;
unsigned char var_1_82 = 8;
float var_1_83 = -0.25;
float var_1_84 = 0.0;
float var_1_85 = 1.2;
signed long int var_1_86 = 50;
signed long int var_1_87 = 1792579629;
double var_1_88 = 2.4;
double var_1_89 = 2.4;
double var_1_90 = 31.75;
float var_1_91 = 128.4;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 1;
double var_1_94 = -0.954;
signed long int var_1_95 = 32;
signed char var_1_96 = -2;
unsigned short int var_1_97 = 4;
double var_1_98 = 3.4;
unsigned char var_1_99 = 4;
unsigned short int var_1_100 = 10;
unsigned char var_1_101 = 1;
signed short int var_1_102 = -8;
double var_1_103 = 2.8;
double var_1_104 = 256.4;
unsigned short int var_1_105 = 100;
float var_1_106 = 50.25;
float var_1_107 = 24.5;
unsigned char var_1_108 = 64;
unsigned short int var_1_109 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 8;
signed long int last_1_var_1_19 = 64;
signed long int last_1_var_1_27 = -100000000;
unsigned short int last_1_var_1_34 = 4;
unsigned short int last_1_var_1_42 = 128;
unsigned short int last_1_var_1_49 = 4;
unsigned char last_1_var_1_52 = 4;
signed long int last_1_var_1_53 = 100;
unsigned long int last_1_var_1_58 = 128;
double last_1_var_1_70 = 10.4;
unsigned char last_1_var_1_71 = 1;
unsigned char last_1_var_1_78 = 0;
signed long int last_1_var_1_86 = 50;
unsigned char last_1_var_1_92 = 1;
unsigned char last_1_var_1_101 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req29Batch98Amount500
	signed long int stepLocal_29 = last_1_var_1_27;
	if (last_1_var_1_9 > stepLocal_29) {
		var_1_71 = ((last_1_var_1_78 && var_1_72) || (last_1_var_1_78 && (last_1_var_1_92 && var_1_73)));
	} else {
		var_1_71 = var_1_72;
	}


	// From: Req16Batch98Amount500
	signed long int stepLocal_21 = last_1_var_1_49;
	if (stepLocal_21 > last_1_var_1_19) {
		var_1_45 = (max ((var_1_46 - var_1_15) , (var_1_47 - 1)));
	}


	// From: Req11Batch98Amount500
	signed long int stepLocal_15 = var_1_5 + var_1_18;
	signed long int stepLocal_14 = last_1_var_1_86;
	unsigned long int stepLocal_13 = last_1_var_1_58;
	signed long int stepLocal_12 = (max (128 , var_1_16)) - var_1_17;
	if (stepLocal_12 == last_1_var_1_52) {
		if ((min (last_1_var_1_86 , var_1_12)) < stepLocal_14) {
			var_1_34 = (var_1_36 - 128);
		}
	} else {
		if (stepLocal_13 != (var_1_7 * var_1_14)) {
			if (var_1_36 > stepLocal_15) {
				var_1_34 = (var_1_36 - (var_1_37 - (var_1_13 + var_1_6)));
			}
		} else {
			var_1_34 = ((abs (var_1_36)) - var_1_16);
		}
	}


	// From: Req44Batch98Amount500
	if (var_1_71) {
		var_1_98 = var_1_56;
	}


	// From: Req9Batch98Amount500
	unsigned char stepLocal_10 = last_1_var_1_71;
	if (stepLocal_10 && last_1_var_1_92) {
		var_1_28 = (var_1_30 - (var_1_17 + last_1_var_1_34));
	}


	// From: Req39Batch98Amount500
	if (var_1_56 >= var_1_57) {
		var_1_92 = (last_1_var_1_78 || (! var_1_72));
	} else {
		var_1_92 = (var_1_79 && (! var_1_93));
	}


	// From: Req41Batch98Amount500
	signed long int stepLocal_40 = var_1_8 << (1 + 0);
	unsigned char stepLocal_39 = var_1_92;
	if (stepLocal_40 >= var_1_33) {
		if (var_1_72 && stepLocal_39) {
			var_1_95 = var_1_7;
		}
	}


	// From: Req43Batch98Amount500
	if (var_1_92) {
		var_1_97 = var_1_37;
	} else {
		var_1_97 = var_1_5;
	}


	// From: Req2Batch98Amount500
	var_1_9 = 8;


	// From: Req3Batch98Amount500
	signed char stepLocal_2 = var_1_8;
	unsigned long int stepLocal_1 = - 128u;
	signed long int stepLocal_0 = var_1_5 >> (max (var_1_15 , var_1_16));
	if (! var_1_71) {
		var_1_10 = ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6);
	} else {
		if ((min (var_1_13 , (var_1_7 / var_1_5))) <= stepLocal_2) {
			var_1_10 = (min ((min (var_1_14 , var_1_12)) , var_1_8));
		} else {
			if ((var_1_28 * var_1_8) == stepLocal_1) {
				if (var_1_4 >= stepLocal_0) {
					var_1_10 = ((var_1_13 - var_1_17) + (var_1_12 + var_1_16));
				} else {
					var_1_10 = (var_1_6 + var_1_13);
				}
			} else {
				var_1_10 = (var_1_8 - ((min (var_1_7 , var_1_18)) - var_1_6));
			}
		}
	}


	// From: Req5Batch98Amount500
	signed char stepLocal_6 = var_1_12;
	unsigned long int stepLocal_5 = var_1_4;
	if ((var_1_18 / var_1_15) >= stepLocal_5) {
		if (stepLocal_6 <= (var_1_18 + (5 / -1))) {
			var_1_23 = (max ((min ((min (-10 , var_1_24)) , (min (var_1_12 , var_1_18)))) , var_1_8));
		} else {
			var_1_23 = (abs (var_1_5));
		}
	}


	// From: Req6Batch98Amount500
	signed char stepLocal_7 = var_1_18;
	if (stepLocal_7 < (25 - var_1_16)) {
		var_1_25 = (var_1_17 + var_1_13);
	} else {
		var_1_25 = (200 + 2);
	}


	// From: Req7Batch98Amount500
	signed char stepLocal_8 = var_1_6;
	if (stepLocal_8 == var_1_5) {
		var_1_26 = (abs (var_1_14));
	} else {
		var_1_26 = ((min (var_1_15 , (var_1_14 + var_1_13))) + (min (var_1_17 , (64 - var_1_6))));
	}


	// From: Req14Batch98Amount500
	var_1_43 = 50;


	// From: Req23Batch98Amount500
	var_1_61 = (var_1_41 - var_1_40);


	// From: Req30Batch98Amount500
	if (var_1_72) {
		if ((- var_1_57) >= (- var_1_64)) {
			var_1_74 = ((var_1_56 + var_1_75) + var_1_57);
		}
	} else {
		if (var_1_73) {
			var_1_74 = (var_1_40 - var_1_64);
		}
	}


	// From: Req33Batch98Amount500
	if (var_1_71) {
		var_1_81 = (max ((abs (min (var_1_56 , var_1_57))) , var_1_64));
	}


	// From: Req36Batch98Amount500
	var_1_86 = (var_1_14 - (var_1_87 - var_1_32));


	// From: Req37Batch98Amount500
	var_1_88 = (var_1_63 + ((var_1_89 + var_1_90) + 1.6));


	// From: Req38Batch98Amount500
	var_1_91 = (min (var_1_89 , var_1_75));


	// From: Req42Batch98Amount500
	var_1_96 = var_1_12;


	// From: Req46Batch98Amount500
	var_1_100 = 64;


	// From: Req47Batch98Amount500
	if (last_1_var_1_101) {
		var_1_101 = var_1_93;
	} else {
		var_1_101 = var_1_72;
	}


	// From: Req49Batch98Amount500
	if (var_1_93) {
		var_1_103 = var_1_64;
	} else {
		var_1_103 = var_1_104;
	}


	// From: Req50Batch98Amount500
	var_1_105 = var_1_17;


	// From: Req51Batch98Amount500
	if (var_1_72) {
		var_1_106 = var_1_57;
	} else {
		var_1_106 = var_1_89;
	}


	// From: Req52Batch98Amount500
	var_1_107 = (var_1_63 + (min (var_1_64 , var_1_56)));


	// From: Req53Batch98Amount500
	unsigned char stepLocal_41 = var_1_47;
	if (var_1_71) {
		if (stepLocal_41 != var_1_5) {
			var_1_108 = var_1_66;
		} else {
			var_1_108 = var_1_7;
		}
	}


	// From: Req13Batch98Amount500
	signed long int stepLocal_18 = var_1_8 + var_1_16;
	unsigned short int stepLocal_17 = var_1_34;
	if (var_1_71) {
		if (stepLocal_17 != var_1_23) {
			var_1_42 = (min (var_1_17 , var_1_13));
		} else {
			var_1_42 = var_1_43;
		}
	} else {
		if (var_1_28 < stepLocal_18) {
			var_1_42 = var_1_43;
		} else {
			var_1_42 = last_1_var_1_42;
		}
	}


	// From: Req20Batch98Amount500
	if (var_1_101 || ((var_1_45 % var_1_4) == (min (var_1_14 , var_1_34)))) {
		var_1_53 = (var_1_46 + (var_1_86 + (abs (last_1_var_1_53))));
	} else {
		var_1_53 = (var_1_54 + var_1_86);
	}


	// From: Req26Batch98Amount500
	if (var_1_50 <= var_1_7) {
		if (var_1_53 > var_1_42) {
			if (var_1_60 <= var_1_7) {
				var_1_67 = var_1_17;
			} else {
				var_1_67 = (max (var_1_5 , (var_1_47 - var_1_18)));
			}
		} else {
			var_1_67 = ((var_1_17 - (var_1_5 + var_1_16)) + var_1_97);
		}
	} else {
		if (! (var_1_98 < (var_1_41 / var_1_68))) {
			var_1_67 = ((max (var_1_7 , var_1_12)) + (-16 + var_1_8));
		}
	}


	// From: Req12Batch98Amount500
	unsigned long int stepLocal_16 = var_1_28;
	if (stepLocal_16 != (var_1_43 + var_1_28)) {
		var_1_38 = var_1_39;
	} else {
		var_1_38 = (max (var_1_39 , (var_1_40 - var_1_41)));
	}


	// From: Req19Batch98Amount500
	unsigned short int stepLocal_26 = var_1_100;
	signed long int stepLocal_25 = abs (var_1_6);
	unsigned short int stepLocal_24 = var_1_36;
	if (stepLocal_26 < (var_1_28 / 64)) {
		if (stepLocal_24 < (- var_1_18)) {
			if ((min (last_1_var_1_52 , var_1_7)) >= stepLocal_25) {
				var_1_52 = (var_1_6 + var_1_16);
			}
		} else {
			var_1_52 = (var_1_47 - (min (var_1_5 , var_1_7)));
		}
	} else {
		var_1_52 = (var_1_47 - (var_1_14 + var_1_13));
	}


	// From: Req28Batch98Amount500
	if (last_1_var_1_70 >= (max ((var_1_106 * 31.4) , var_1_57))) {
		var_1_70 = (var_1_56 + (max (var_1_64 , 64.55)));
	} else {
		if (var_1_17 < (-128 * (var_1_14 + var_1_25))) {
			var_1_70 = var_1_41;
		} else {
			var_1_70 = ((var_1_63 - var_1_64) + var_1_57);
		}
	}


	// From: Req48Batch98Amount500
	var_1_102 = var_1_108;


	// From: Req32Batch98Amount500
	unsigned char stepLocal_31 = (var_1_70 / var_1_80) <= var_1_57;
	unsigned long int stepLocal_30 = var_1_4;
	if (var_1_70 > (max (var_1_38 , (var_1_39 / var_1_77)))) {
		if (! var_1_72) {
			if (var_1_39 != ((var_1_63 - var_1_41) + var_1_70)) {
				var_1_78 = ((! var_1_72) && var_1_79);
			}
		} else {
			if (((- var_1_39) + var_1_63) < (var_1_64 - var_1_40)) {
				if (var_1_5 >= stepLocal_30) {
					var_1_78 = (! var_1_79);
				} else {
					var_1_78 = var_1_73;
				}
			}
		}
	} else {
		if (var_1_101 && stepLocal_31) {
			var_1_78 = ((var_1_66 == var_1_15) && (! var_1_79));
		} else {
			var_1_78 = ((var_1_13 != var_1_9) && (last_1_var_1_78 && (var_1_79 && var_1_73)));
		}
	}


	// From: Req24Batch98Amount500
	if (var_1_46 >= 64) {
		if (var_1_17 > var_1_28) {
			if ((var_1_57 + var_1_88) >= var_1_40) {
				var_1_62 = (max (var_1_56 , ((var_1_63 + var_1_64) - var_1_41)));
			} else {
				var_1_62 = (min (var_1_40 , var_1_63));
			}
		} else {
			if ((! var_1_78) || var_1_78) {
				if ((- var_1_56) > (var_1_64 - (max (var_1_63 , var_1_40)))) {
					var_1_62 = (min (var_1_57 , 1.8));
				}
			}
		}
	}


	// From: Req27Batch98Amount500
	if (var_1_62 > ((var_1_64 / var_1_68) + var_1_62)) {
		var_1_69 = (var_1_37 - var_1_7);
	} else {
		var_1_69 = var_1_33;
	}


	// From: Req10Batch98Amount500
	unsigned char stepLocal_11 = var_1_69 == var_1_13;
	if (var_1_71 || stepLocal_11) {
		var_1_31 = (max (var_1_6 , ((var_1_32 - var_1_17) - (var_1_33 + var_1_15))));
	} else {
		var_1_31 = (var_1_14 + (var_1_5 + var_1_13));
	}


	// From: Req45Batch98Amount500
	if (var_1_78) {
		var_1_99 = var_1_17;
	} else {
		var_1_99 = 8;
	}


	// From: Req8Batch98Amount500
	unsigned char stepLocal_9 = var_1_42 != (var_1_15 << var_1_24);
	if (((var_1_12 > var_1_23) || var_1_78) || stepLocal_9) {
		var_1_27 = var_1_15;
	} else {
		var_1_27 = var_1_17;
	}


	// From: Req54Batch98Amount500
	if (((var_1_98 + var_1_77) > var_1_104) || (var_1_26 <= var_1_27)) {
		var_1_109 = var_1_14;
	}


	// From: Req34Batch98Amount500
	signed long int stepLocal_32 = var_1_27;
	if (var_1_54 >= stepLocal_32) {
		var_1_82 = var_1_5;
	} else {
		var_1_82 = (var_1_47 - var_1_7);
	}


	// From: Req35Batch98Amount500
	unsigned short int stepLocal_36 = var_1_34;
	unsigned short int stepLocal_35 = var_1_100;
	unsigned short int stepLocal_34 = var_1_50;
	signed long int stepLocal_33 = abs (-1);
	if (stepLocal_34 == var_1_17) {
		var_1_83 = (16.5f - 128.75f);
	} else {
		if (stepLocal_36 < var_1_27) {
			if (var_1_71) {
				if (var_1_17 != stepLocal_35) {
					var_1_83 = ((min (var_1_57 , (var_1_63 - var_1_64))) + var_1_56);
				} else {
					var_1_83 = var_1_41;
				}
			} else {
				if (stepLocal_33 <= var_1_37) {
					var_1_83 = ((var_1_84 - 2.7f) - var_1_63);
				} else {
					var_1_83 = var_1_85;
				}
			}
		} else {
			var_1_83 = (max ((abs (var_1_75)) , (var_1_64 + var_1_63)));
		}
	}


	// From: Req25Batch98Amount500
	signed long int stepLocal_28 = var_1_5 + var_1_67;
	if (stepLocal_28 > ((var_1_60 - var_1_36) - var_1_109)) {
		var_1_65 = (var_1_46 - ((var_1_66 - var_1_14) - var_1_13));
	} else {
		var_1_65 = (max (10 , var_1_15));
	}


	// From: Req22Batch98Amount500
	if (((var_1_65 / 4) & var_1_45) > (var_1_6 - (var_1_59 - var_1_47))) {
		var_1_58 = (max ((var_1_86 + var_1_5) , var_1_6));
	} else {
		if ((min (var_1_62 , (var_1_40 * 4.6f))) <= var_1_57) {
			var_1_58 = ((var_1_59 + (var_1_60 - 10u)) - (var_1_45 + (min (var_1_50 , var_1_69))));
		} else {
			if (var_1_52 > var_1_45) {
				var_1_58 = var_1_18;
			}
		}
	}


	// From: Req15Batch98Amount500
	unsigned char stepLocal_20 = var_1_65;
	signed char stepLocal_19 = var_1_12;
	if (stepLocal_20 > var_1_8) {
		if (stepLocal_19 > var_1_4) {
			var_1_44 = (max ((var_1_14 + var_1_16) , (min (var_1_6 , var_1_17))));
		}
	} else {
		var_1_44 = (max (var_1_12 , (min (1 , var_1_16))));
	}


	// From: Req1Batch98Amount500
	if (10u <= (abs (var_1_58))) {
		if ((min (16u , var_1_58)) >= (var_1_28 % var_1_4)) {
			var_1_1 = ((var_1_5 - var_1_6) - (var_1_7 - var_1_8));
		}
	}


	// From: Req17Batch98Amount500
	unsigned char stepLocal_22 = (abs (var_1_8)) > (var_1_82 * var_1_97);
	if ((var_1_28 > var_1_32) && stepLocal_22) {
		var_1_48 = var_1_47;
	}


	// From: Req18Batch98Amount500
	signed long int stepLocal_23 = var_1_23 / var_1_18;
	if (var_1_44 > stepLocal_23) {
		var_1_49 = (max (var_1_17 , 32));
	} else {
		var_1_49 = (((var_1_50 + 32748) - var_1_51) - (min (var_1_15 , var_1_53)));
	}


	// From: Req40Batch98Amount500
	signed long int stepLocal_38 = (var_1_95 / var_1_18) + var_1_49;
	unsigned char stepLocal_37 = var_1_92;
	if (stepLocal_37 && var_1_79) {
		if (64 != stepLocal_38) {
			var_1_94 = (var_1_64 - var_1_85);
		} else {
			if (3.6f <= var_1_57) {
				var_1_94 = (var_1_85 - var_1_84);
			}
		}
	}


	// From: Req31Batch98Amount500
	if ((var_1_94 / (max (var_1_68 , var_1_77))) > (var_1_64 * var_1_88)) {
		var_1_76 = (var_1_57 + var_1_56);
	}


	// From: Req4Batch98Amount500
	signed char stepLocal_4 = var_1_13;
	unsigned long int stepLocal_3 = - 4u;
	if (var_1_92) {
		if (stepLocal_4 == var_1_4) {
			if (var_1_4 > stepLocal_3) {
				var_1_19 = var_1_15;
			} else {
				var_1_19 = (var_1_16 - var_1_58);
			}
		} else {
			if (var_1_92) {
				var_1_19 = (var_1_14 - var_1_15);
			} else {
				if ((- var_1_38) <= var_1_94) {
					var_1_19 = ((max (var_1_18 , 5)) + var_1_12);
				}
			}
		}
	} else {
		var_1_19 = var_1_17;
	}


	// From: Req21Batch98Amount500
	unsigned char stepLocal_27 = var_1_19 >= var_1_8;
	if (var_1_92 || stepLocal_27) {
		var_1_55 = (((max (15.6f , var_1_56)) + 256.125f) + var_1_57);
	} else {
		var_1_55 = (min ((max (var_1_57 , var_1_56)) , var_1_41));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 62);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 63);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 31);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 6);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 6);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 16382);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 16383);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 127);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 127);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 24575);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 16383);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= -1073741823);
	assume_abort_if_not(var_1_54 <= 1073741823);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -461168.6018427383000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_59 >= 1073741823);
	assume_abort_if_not(var_1_59 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1610612735);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 95);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
	assume_abort_if_not(var_1_68 != 0.0F);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 0);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 0);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= -230584.3009213691400e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	assume_abort_if_not(var_1_77 != 0.0F);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= -922337.2036854776000e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	assume_abort_if_not(var_1_80 != 0.0F);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 6917529.027641074000e+12F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854766000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_87 >= 1073741823);
	assume_abort_if_not(var_1_87 <= 2147483646);
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= -115292.1504606845700e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 1152921.504606845700e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= -115292.1504606845700e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 1152921.504606845700e+12F && var_1_90 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_104 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_104 >= -922337.2036854766000e+13F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 9223372.036854766000e+12F && var_1_104 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_101 = var_1_101;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((10u <= (abs (var_1_58))) ? (((min (16u , var_1_58)) >= (var_1_28 % var_1_4)) ? (var_1_1 == ((signed char) ((var_1_5 - var_1_6) - (var_1_7 - var_1_8)))) : 1) : 1) && (var_1_9 == ((unsigned char) 8))) && ((! var_1_71) ? (var_1_10 == ((signed char) ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6))) : (((min (var_1_13 , (var_1_7 / var_1_5))) <= var_1_8) ? (var_1_10 == ((signed char) (min ((min (var_1_14 , var_1_12)) , var_1_8)))) : (((var_1_28 * var_1_8) == (- 128u)) ? ((var_1_4 >= (var_1_5 >> (max (var_1_15 , var_1_16)))) ? (var_1_10 == ((signed char) ((var_1_13 - var_1_17) + (var_1_12 + var_1_16)))) : (var_1_10 == ((signed char) (var_1_6 + var_1_13)))) : (var_1_10 == ((signed char) (var_1_8 - ((min (var_1_7 , var_1_18)) - var_1_6)))))))) && (var_1_92 ? ((var_1_13 == var_1_4) ? ((var_1_4 > (- 4u)) ? (var_1_19 == ((signed long int) var_1_15)) : (var_1_19 == ((signed long int) (var_1_16 - var_1_58)))) : (var_1_92 ? (var_1_19 == ((signed long int) (var_1_14 - var_1_15))) : (((- var_1_38) <= var_1_94) ? (var_1_19 == ((signed long int) ((max (var_1_18 , 5)) + var_1_12))) : 1))) : (var_1_19 == ((signed long int) var_1_17)))) && (((var_1_18 / var_1_15) >= var_1_4) ? ((var_1_12 <= (var_1_18 + (5 / -1))) ? (var_1_23 == ((signed char) (max ((min ((min (-10 , var_1_24)) , (min (var_1_12 , var_1_18)))) , var_1_8)))) : (var_1_23 == ((signed char) (abs (var_1_5))))) : 1)) && ((var_1_18 < (25 - var_1_16)) ? (var_1_25 == ((unsigned short int) (var_1_17 + var_1_13))) : (var_1_25 == ((unsigned short int) (200 + 2))))) && ((var_1_6 == var_1_5) ? (var_1_26 == ((unsigned char) (abs (var_1_14)))) : (var_1_26 == ((unsigned char) ((min (var_1_15 , (var_1_14 + var_1_13))) + (min (var_1_17 , (64 - var_1_6)))))))) && ((((var_1_12 > var_1_23) || var_1_78) || (var_1_42 != (var_1_15 << var_1_24))) ? (var_1_27 == ((signed long int) var_1_15)) : (var_1_27 == ((signed long int) var_1_17)))) && ((last_1_var_1_71 && last_1_var_1_92) ? (var_1_28 == ((unsigned long int) (var_1_30 - (var_1_17 + last_1_var_1_34)))) : 1)) && ((var_1_71 || (var_1_69 == var_1_13)) ? (var_1_31 == ((signed short int) (max (var_1_6 , ((var_1_32 - var_1_17) - (var_1_33 + var_1_15)))))) : (var_1_31 == ((signed short int) (var_1_14 + (var_1_5 + var_1_13)))))) && ((((max (128 , var_1_16)) - var_1_17) == last_1_var_1_52) ? (((min (last_1_var_1_86 , var_1_12)) < last_1_var_1_86) ? (var_1_34 == ((unsigned short int) (var_1_36 - 128))) : 1) : ((last_1_var_1_58 != (var_1_7 * var_1_14)) ? ((var_1_36 > (var_1_5 + var_1_18)) ? (var_1_34 == ((unsigned short int) (var_1_36 - (var_1_37 - (var_1_13 + var_1_6))))) : 1) : (var_1_34 == ((unsigned short int) ((abs (var_1_36)) - var_1_16)))))) && ((var_1_28 != (var_1_43 + var_1_28)) ? (var_1_38 == ((double) var_1_39)) : (var_1_38 == ((double) (max (var_1_39 , (var_1_40 - var_1_41))))))) && (var_1_71 ? ((var_1_34 != var_1_23) ? (var_1_42 == ((unsigned short int) (min (var_1_17 , var_1_13)))) : (var_1_42 == ((unsigned short int) var_1_43))) : ((var_1_28 < (var_1_8 + var_1_16)) ? (var_1_42 == ((unsigned short int) var_1_43)) : (var_1_42 == ((unsigned short int) last_1_var_1_42))))) && (var_1_43 == ((unsigned char) 50))) && ((var_1_65 > var_1_8) ? ((var_1_12 > var_1_4) ? (var_1_44 == ((signed char) (max ((var_1_14 + var_1_16) , (min (var_1_6 , var_1_17)))))) : 1) : (var_1_44 == ((signed char) (max (var_1_12 , (min (1 , var_1_16)))))))) && ((last_1_var_1_49 > last_1_var_1_19) ? (var_1_45 == ((unsigned char) (max ((var_1_46 - var_1_15) , (var_1_47 - 1))))) : 1)) && (((var_1_28 > var_1_32) && ((abs (var_1_8)) > (var_1_82 * var_1_97))) ? (var_1_48 == ((unsigned char) var_1_47)) : 1)) && ((var_1_44 > (var_1_23 / var_1_18)) ? (var_1_49 == ((unsigned short int) (max (var_1_17 , 32)))) : (var_1_49 == ((unsigned short int) (((var_1_50 + 32748) - var_1_51) - (min (var_1_15 , var_1_53))))))) && ((var_1_100 < (var_1_28 / 64)) ? ((var_1_36 < (- var_1_18)) ? (((min (last_1_var_1_52 , var_1_7)) >= (abs (var_1_6))) ? (var_1_52 == ((unsigned char) (var_1_6 + var_1_16))) : 1) : (var_1_52 == ((unsigned char) (var_1_47 - (min (var_1_5 , var_1_7)))))) : (var_1_52 == ((unsigned char) (var_1_47 - (var_1_14 + var_1_13)))))) && ((var_1_101 || ((var_1_45 % var_1_4) == (min (var_1_14 , var_1_34)))) ? (var_1_53 == ((signed long int) (var_1_46 + (var_1_86 + (abs (last_1_var_1_53)))))) : (var_1_53 == ((signed long int) (var_1_54 + var_1_86))))) && ((var_1_92 || (var_1_19 >= var_1_8)) ? (var_1_55 == ((float) (((max (15.6f , var_1_56)) + 256.125f) + var_1_57))) : (var_1_55 == ((float) (min ((max (var_1_57 , var_1_56)) , var_1_41)))))) && ((((var_1_65 / 4) & var_1_45) > (var_1_6 - (var_1_59 - var_1_47))) ? (var_1_58 == ((unsigned long int) (max ((var_1_86 + var_1_5) , var_1_6)))) : (((min (var_1_62 , (var_1_40 * 4.6f))) <= var_1_57) ? (var_1_58 == ((unsigned long int) ((var_1_59 + (var_1_60 - 10u)) - (var_1_45 + (min (var_1_50 , var_1_69)))))) : ((var_1_52 > var_1_45) ? (var_1_58 == ((unsigned long int) var_1_18)) : 1)))) && (var_1_61 == ((double) (var_1_41 - var_1_40)))) && ((var_1_46 >= 64) ? ((var_1_17 > var_1_28) ? (((var_1_57 + var_1_88) >= var_1_40) ? (var_1_62 == ((double) (max (var_1_56 , ((var_1_63 + var_1_64) - var_1_41))))) : (var_1_62 == ((double) (min (var_1_40 , var_1_63))))) : (((! var_1_78) || var_1_78) ? (((- var_1_56) > (var_1_64 - (max (var_1_63 , var_1_40)))) ? (var_1_62 == ((double) (min (var_1_57 , 1.8)))) : 1) : 1)) : 1)) && (((var_1_5 + var_1_67) > ((var_1_60 - var_1_36) - var_1_109)) ? (var_1_65 == ((unsigned char) (var_1_46 - ((var_1_66 - var_1_14) - var_1_13)))) : (var_1_65 == ((unsigned char) (max (10 , var_1_15)))))) && ((var_1_50 <= var_1_7) ? ((var_1_53 > var_1_42) ? ((var_1_60 <= var_1_7) ? (var_1_67 == ((signed short int) var_1_17)) : (var_1_67 == ((signed short int) (max (var_1_5 , (var_1_47 - var_1_18)))))) : (var_1_67 == ((signed short int) ((var_1_17 - (var_1_5 + var_1_16)) + var_1_97)))) : ((! (var_1_98 < (var_1_41 / var_1_68))) ? (var_1_67 == ((signed short int) ((max (var_1_7 , var_1_12)) + (-16 + var_1_8)))) : 1))) && ((var_1_62 > ((var_1_64 / var_1_68) + var_1_62)) ? (var_1_69 == ((signed long int) (var_1_37 - var_1_7))) : (var_1_69 == ((signed long int) var_1_33)))) && ((last_1_var_1_70 >= (max ((var_1_106 * 31.4) , var_1_57))) ? (var_1_70 == ((double) (var_1_56 + (max (var_1_64 , 64.55))))) : ((var_1_17 < (-128 * (var_1_14 + var_1_25))) ? (var_1_70 == ((double) var_1_41)) : (var_1_70 == ((double) ((var_1_63 - var_1_64) + var_1_57)))))) && ((last_1_var_1_9 > last_1_var_1_27) ? (var_1_71 == ((unsigned char) ((last_1_var_1_78 && var_1_72) || (last_1_var_1_78 && (last_1_var_1_92 && var_1_73))))) : (var_1_71 == ((unsigned char) var_1_72)))) && (var_1_72 ? (((- var_1_57) >= (- var_1_64)) ? (var_1_74 == ((float) ((var_1_56 + var_1_75) + var_1_57))) : 1) : (var_1_73 ? (var_1_74 == ((float) (var_1_40 - var_1_64))) : 1))) && (((var_1_94 / (max (var_1_68 , var_1_77))) > (var_1_64 * var_1_88)) ? (var_1_76 == ((float) (var_1_57 + var_1_56))) : 1)) && ((var_1_70 > (max (var_1_38 , (var_1_39 / var_1_77)))) ? ((! var_1_72) ? ((var_1_39 != ((var_1_63 - var_1_41) + var_1_70)) ? (var_1_78 == ((unsigned char) ((! var_1_72) && var_1_79))) : 1) : ((((- var_1_39) + var_1_63) < (var_1_64 - var_1_40)) ? ((var_1_5 >= var_1_4) ? (var_1_78 == ((unsigned char) (! var_1_79))) : (var_1_78 == ((unsigned char) var_1_73))) : 1)) : ((var_1_101 && ((var_1_70 / var_1_80) <= var_1_57)) ? (var_1_78 == ((unsigned char) ((var_1_66 == var_1_15) && (! var_1_79)))) : (var_1_78 == ((unsigned char) ((var_1_13 != var_1_9) && (last_1_var_1_78 && (var_1_79 && var_1_73)))))))) && (var_1_71 ? (var_1_81 == ((float) (max ((abs (min (var_1_56 , var_1_57))) , var_1_64)))) : 1)) && ((var_1_54 >= var_1_27) ? (var_1_82 == ((unsigned char) var_1_5)) : (var_1_82 == ((unsigned char) (var_1_47 - var_1_7))))) && ((var_1_50 == var_1_17) ? (var_1_83 == ((float) (16.5f - 128.75f))) : ((var_1_34 < var_1_27) ? (var_1_71 ? ((var_1_17 != var_1_100) ? (var_1_83 == ((float) ((min (var_1_57 , (var_1_63 - var_1_64))) + var_1_56))) : (var_1_83 == ((float) var_1_41))) : (((abs (-1)) <= var_1_37) ? (var_1_83 == ((float) ((var_1_84 - 2.7f) - var_1_63))) : (var_1_83 == ((float) var_1_85)))) : (var_1_83 == ((float) (max ((abs (var_1_75)) , (var_1_64 + var_1_63)))))))) && (var_1_86 == ((signed long int) (var_1_14 - (var_1_87 - var_1_32))))) && (var_1_88 == ((double) (var_1_63 + ((var_1_89 + var_1_90) + 1.6))))) && (var_1_91 == ((float) (min (var_1_89 , var_1_75))))) && ((var_1_56 >= var_1_57) ? (var_1_92 == ((unsigned char) (last_1_var_1_78 || (! var_1_72)))) : (var_1_92 == ((unsigned char) (var_1_79 && (! var_1_93)))))) && ((var_1_92 && var_1_79) ? ((64 != ((var_1_95 / var_1_18) + var_1_49)) ? (var_1_94 == ((double) (var_1_64 - var_1_85))) : ((3.6f <= var_1_57) ? (var_1_94 == ((double) (var_1_85 - var_1_84))) : 1)) : 1)) && (((var_1_8 << (1 + 0)) >= var_1_33) ? ((var_1_72 && var_1_92) ? (var_1_95 == ((signed long int) var_1_7)) : 1) : 1)) && (var_1_96 == ((signed char) var_1_12))) && (var_1_92 ? (var_1_97 == ((unsigned short int) var_1_37)) : (var_1_97 == ((unsigned short int) var_1_5)))) && (var_1_71 ? (var_1_98 == ((double) var_1_56)) : 1)) && (var_1_78 ? (var_1_99 == ((unsigned char) var_1_17)) : (var_1_99 == ((unsigned char) 8)))) && (var_1_100 == ((unsigned short int) 64))) && (last_1_var_1_101 ? (var_1_101 == ((unsigned char) var_1_93)) : (var_1_101 == ((unsigned char) var_1_72)))) && (var_1_102 == ((signed short int) var_1_108))) && (var_1_93 ? (var_1_103 == ((double) var_1_64)) : (var_1_103 == ((double) var_1_104)))) && (var_1_105 == ((unsigned short int) var_1_17))) && (var_1_72 ? (var_1_106 == ((float) var_1_57)) : (var_1_106 == ((float) var_1_89)))) && (var_1_107 == ((float) (var_1_63 + (min (var_1_64 , var_1_56)))))) && (var_1_71 ? ((var_1_47 != var_1_5) ? (var_1_108 == ((unsigned char) var_1_66)) : (var_1_108 == ((unsigned char) var_1_7))) : 1)) && ((((var_1_98 + var_1_77) > var_1_104) || (var_1_26 <= var_1_27)) ? (var_1_109 == ((unsigned short int) var_1_14)) : 1)
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
