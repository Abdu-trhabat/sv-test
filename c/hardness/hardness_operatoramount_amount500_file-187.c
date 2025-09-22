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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 255.75;
double var_1_6 = 5.25;
double var_1_7 = 99.25;
double var_1_8 = 3.7;
unsigned short int var_1_9 = 128;
signed char var_1_10 = 100;
signed char var_1_11 = 1;
signed long int var_1_12 = 32;
unsigned short int var_1_13 = 10000;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 31.4;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 23626;
double var_1_22 = 2.7;
double var_1_23 = 63.7;
double var_1_24 = 200.5;
double var_1_25 = 0.25;
unsigned short int var_1_26 = 32;
unsigned long int var_1_27 = 2281443333;
signed char var_1_28 = 100;
signed char var_1_29 = 1;
signed char var_1_30 = 32;
double var_1_31 = -0.125;
double var_1_32 = 3.5;
double var_1_33 = 100.2;
double var_1_34 = 3.2;
unsigned long int var_1_35 = 200;
unsigned long int var_1_36 = 100000000;
float var_1_37 = 999.5;
float var_1_38 = 128.25;
unsigned long int var_1_39 = 2;
unsigned long int var_1_41 = 3083255123;
unsigned long int var_1_42 = 1000000;
double var_1_43 = 128.5;
unsigned long int var_1_44 = 256;
double var_1_45 = 63.6;
signed char var_1_46 = 64;
unsigned long int var_1_47 = 1213485052;
unsigned long int var_1_48 = 4033420935;
unsigned long int var_1_49 = 16;
unsigned long int var_1_51 = 2148426476;
unsigned long int var_1_52 = 2171438407;
unsigned long int var_1_53 = 2;
signed short int var_1_54 = -5;
signed char var_1_55 = -1;
signed char var_1_56 = 16;
signed char var_1_57 = 64;
signed char var_1_58 = 4;
signed long int var_1_59 = 64;
unsigned char var_1_60 = 0;
signed short int var_1_61 = 1;
unsigned long int var_1_62 = 1000000;
unsigned long int var_1_63 = 10;
unsigned long int var_1_65 = 1000000000;
unsigned char var_1_66 = 32;
unsigned char var_1_67 = 32;
unsigned char var_1_68 = 32;
unsigned char var_1_69 = 1;
unsigned short int var_1_70 = 59852;
signed short int var_1_71 = 10;
signed short int var_1_72 = 29012;
signed char var_1_73 = 32;
signed char var_1_74 = -16;
signed char var_1_75 = -4;
signed char var_1_76 = -5;
signed char var_1_77 = 5;
double var_1_78 = 3.7;
double var_1_79 = 49.25;
float var_1_80 = 127.6;
signed char var_1_81 = -8;
signed char var_1_82 = -8;
signed short int var_1_83 = 0;
unsigned short int var_1_84 = 0;
unsigned short int var_1_85 = 35902;
unsigned char var_1_86 = 16;
unsigned char var_1_88 = 200;
unsigned char var_1_89 = 16;
unsigned char var_1_91 = 64;
signed long int var_1_92 = -32;
signed long int var_1_93 = 10;
unsigned char var_1_94 = 16;
unsigned char var_1_95 = 32;
double var_1_96 = 31.65;
double var_1_97 = 0.0;
double var_1_98 = 0.0;
double var_1_99 = 25.8;
double var_1_100 = 3.7;
double var_1_101 = 15.2;
signed short int var_1_102 = -25;
unsigned char var_1_103 = 0;
float var_1_104 = -0.3;
signed long int var_1_105 = -25;
unsigned char var_1_106 = 0;
signed long int var_1_107 = 128;
signed long int var_1_108 = 128;
unsigned char var_1_109 = 1;
signed long int var_1_110 = 1;
float var_1_111 = 8.2;
unsigned long int var_1_112 = 1;
float var_1_113 = 4.25;
double var_1_114 = 7.25;
float var_1_115 = 10.2;
unsigned long int var_1_116 = 32;
signed char var_1_117 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_14 = 0;
double last_1_var_1_22 = 2.7;
unsigned short int last_1_var_1_26 = 32;
float last_1_var_1_37 = 999.5;
unsigned long int last_1_var_1_42 = 1000000;
signed long int last_1_var_1_59 = 64;
unsigned long int last_1_var_1_62 = 1000000;
unsigned long int last_1_var_1_63 = 10;
signed char last_1_var_1_73 = 32;
signed char last_1_var_1_81 = -8;
signed long int last_1_var_1_92 = -32;
unsigned char last_1_var_1_106 = 0;
signed long int last_1_var_1_108 = 128;
unsigned long int last_1_var_1_112 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch187Amount500
	signed long int stepLocal_12 = last_1_var_1_108;
	unsigned char stepLocal_11 = last_1_var_1_14;
	if (var_1_36 < stepLocal_12) {
		if (stepLocal_11 || (var_1_56 <= last_1_var_1_42)) {
			var_1_60 = var_1_19;
		} else {
			var_1_60 = (((var_1_52 - last_1_var_1_112) < var_1_47) && var_1_16);
		}
	}


	// From: Req12Batch187Amount500
	unsigned char stepLocal_7 = var_1_18 <= last_1_var_1_22;
	unsigned long int stepLocal_6 = min ((last_1_var_1_63 * var_1_15) , var_1_21);
	if ((max (64 , last_1_var_1_73)) >= stepLocal_6) {
		if (last_1_var_1_37 >= last_1_var_1_22) {
			if (! var_1_17) {
				var_1_39 = (var_1_41 - (max (var_1_15 , last_1_var_1_92)));
			} else {
				if (last_1_var_1_106 || stepLocal_7) {
					var_1_39 = (min (last_1_var_1_92 , var_1_15));
				} else {
					var_1_39 = (min (var_1_21 , ((last_1_var_1_59 + var_1_13) + 32u)));
				}
			}
		} else {
			var_1_39 = 100u;
		}
	} else {
		var_1_39 = var_1_21;
	}


	// From: Req52Batch187Amount500
	if (var_1_60) {
		var_1_116 = var_1_53;
	} else {
		var_1_116 = var_1_68;
	}


	// From: Req13Batch187Amount500
	var_1_42 = (min (last_1_var_1_62 , (max (var_1_30 , var_1_21))));


	// From: Req5Batch187Amount500
	var_1_22 = (var_1_23 - (max (var_1_24 , var_1_25)));


	// From: Req7Batch187Amount500
	var_1_28 = (min (var_1_15 , (var_1_29 - var_1_30)));


	// From: Req9Batch187Amount500
	if (! var_1_16) {
		var_1_32 = (max (var_1_8 , (var_1_24 - 128.25)));
	} else {
		var_1_32 = (min ((var_1_33 + (100.2 - var_1_34)) , var_1_25));
	}


	// From: Req11Batch187Amount500
	signed long int stepLocal_5 = 1 * var_1_21;
	if (stepLocal_5 < (var_1_11 + var_1_10)) {
		var_1_37 = (var_1_23 - var_1_24);
	} else {
		var_1_37 = ((var_1_34 - var_1_38) + 4.625f);
	}


	// From: Req14Batch187Amount500
	if ((var_1_25 - var_1_24) < var_1_6) {
		if (var_1_33 >= (var_1_24 - (min (var_1_18 , var_1_25)))) {
			var_1_43 = (min (var_1_23 , var_1_24));
		}
	} else {
		var_1_43 = var_1_7;
	}


	// From: Req21Batch187Amount500
	if (! var_1_16) {
		var_1_61 = ((var_1_46 + var_1_57) - 256);
	} else {
		var_1_61 = var_1_13;
	}


	// From: Req24Batch187Amount500
	if (var_1_45 == var_1_34) {
		var_1_66 = ((var_1_46 + (var_1_67 + var_1_68)) - var_1_57);
	} else {
		var_1_66 = (min ((min (8 , var_1_57)) , (var_1_30 + var_1_11)));
	}


	// From: Req28Batch187Amount500
	unsigned char stepLocal_17 = var_1_16;
	if (9.99999999999993E13 > (var_1_34 - var_1_18)) {
		var_1_78 = (min (var_1_7 , (var_1_34 + var_1_38)));
	} else {
		if ((var_1_24 == (var_1_38 + var_1_6)) && stepLocal_17) {
			var_1_78 = (var_1_34 + ((abs (var_1_38)) - var_1_79));
		} else {
			var_1_78 = (min (var_1_24 , var_1_25));
		}
	}


	// From: Req29Batch187Amount500
	var_1_80 = (min (63.4f , var_1_8));


	// From: Req32Batch187Amount500
	signed long int stepLocal_21 = var_1_46 - (var_1_68 + var_1_15);
	if (var_1_10 == stepLocal_21) {
		var_1_84 = (var_1_85 - (min (var_1_46 , (min (var_1_68 , var_1_30)))));
	}


	// From: Req39Batch187Amount500
	if (var_1_16) {
		var_1_103 = var_1_19;
	}


	// From: Req40Batch187Amount500
	if (var_1_103) {
		var_1_104 = var_1_24;
	} else {
		var_1_104 = var_1_98;
	}


	// From: Req42Batch187Amount500
	var_1_106 = var_1_19;


	// From: Req43Batch187Amount500
	var_1_107 = var_1_76;


	// From: Req45Batch187Amount500
	var_1_109 = var_1_19;


	// From: Req46Batch187Amount500
	if (var_1_19) {
		var_1_110 = var_1_29;
	} else {
		var_1_110 = var_1_66;
	}


	// From: Req48Batch187Amount500
	if (var_1_106) {
		var_1_112 = var_1_85;
	} else {
		var_1_112 = var_1_68;
	}


	// From: Req49Batch187Amount500
	var_1_113 = var_1_38;


	// From: Req50Batch187Amount500
	if (var_1_109) {
		var_1_114 = var_1_6;
	}


	// From: Req53Batch187Amount500
	signed char stepLocal_37 = var_1_75;
	unsigned long int stepLocal_36 = var_1_39;
	unsigned short int stepLocal_35 = var_1_13;
	if (var_1_77 > stepLocal_35) {
		if (stepLocal_36 != (- var_1_13)) {
			if ((max (var_1_39 , 1)) < stepLocal_37) {
				var_1_117 = var_1_75;
			} else {
				var_1_117 = var_1_56;
			}
		} else {
			var_1_117 = var_1_29;
		}
	}


	// From: Req23Batch187Amount500
	unsigned long int stepLocal_15 = var_1_27;
	if (var_1_42 < stepLocal_15) {
		var_1_63 = (var_1_116 + ((var_1_65 - var_1_15) + var_1_110));
	}


	// From: Req25Batch187Amount500
	unsigned long int stepLocal_16 = (var_1_70 - var_1_67) * var_1_112;
	if (stepLocal_16 > (min ((max (var_1_42 , var_1_39)) , var_1_52))) {
		var_1_69 = (! 0);
	}


	// From: Req22Batch187Amount500
	unsigned char stepLocal_14 = var_1_16;
	unsigned long int stepLocal_13 = var_1_39;
	if (stepLocal_13 > var_1_53) {
		var_1_62 = ((min (var_1_48 , var_1_51)) - (1846140523u - (max (var_1_21 , var_1_58))));
	} else {
		if (stepLocal_14 || var_1_103) {
			var_1_62 = (min ((var_1_52 - (var_1_47 - var_1_58)) , var_1_48));
		} else {
			var_1_62 = (var_1_57 + (max (var_1_11 , (1533362358u - var_1_58))));
		}
	}


	// From: Req27Batch187Amount500
	if (var_1_69) {
		var_1_73 = (var_1_15 + (max ((var_1_74 + var_1_75) , (min (var_1_58 , var_1_76)))));
	} else {
		var_1_73 = ((32 + (var_1_15 + var_1_77)) - var_1_30);
	}


	// From: Req1Batch187Amount500
	unsigned char stepLocal_1 = var_1_69;
	unsigned long int stepLocal_0 = var_1_42;
	if (stepLocal_1 && var_1_60) {
		if (stepLocal_0 >= (var_1_116 + 16u)) {
			var_1_1 = (max (var_1_6 , (max (var_1_7 , var_1_8))));
		} else {
			if (var_1_6 == var_1_8) {
				var_1_1 = var_1_6;
			}
		}
	}


	// From: Req10Batch187Amount500
	if ((var_1_19 && (var_1_17 && var_1_106)) || var_1_109) {
		var_1_35 = var_1_15;
	} else {
		var_1_35 = (max (var_1_21 , var_1_36));
	}


	// From: Req16Batch187Amount500
	if (var_1_27 < var_1_15) {
		if (((max (var_1_43 , var_1_1)) == var_1_113) || var_1_109) {
			if ((- var_1_13) < var_1_112) {
				if (var_1_106) {
					var_1_49 = var_1_46;
				} else {
					var_1_49 = (var_1_41 - (abs (abs (var_1_15))));
				}
			} else {
				var_1_49 = ((max (var_1_51 , var_1_52)) - (min ((var_1_47 - var_1_30) , var_1_84)));
			}
		} else {
			if (var_1_12 <= (min (100 , var_1_62))) {
				if (var_1_23 < var_1_25) {
					var_1_49 = (max (var_1_11 , (max (var_1_51 , var_1_21))));
				} else {
					var_1_49 = (var_1_41 - var_1_53);
				}
			} else {
				var_1_49 = (abs (var_1_15));
			}
		}
	}


	// From: Req18Batch187Amount500
	if (((- var_1_42) / 32) <= var_1_62) {
		var_1_55 = (var_1_56 - (max ((var_1_57 - var_1_58) , 16)));
	} else {
		if (var_1_15 > 50) {
			var_1_55 = var_1_57;
		} else {
			var_1_55 = (var_1_58 + var_1_15);
		}
	}


	// From: Req30Batch187Amount500
	signed long int stepLocal_18 = min (var_1_72 , var_1_107);
	if (stepLocal_18 < last_1_var_1_81) {
		if (var_1_106) {
			var_1_81 = (max ((abs (min (var_1_58 , var_1_57))) , (min (var_1_77 , (min (var_1_30 , var_1_75))))));
		} else {
			var_1_81 = var_1_82;
		}
	}


	// From: Req31Batch187Amount500
	unsigned char stepLocal_20 = var_1_68;
	unsigned long int stepLocal_19 = (abs (var_1_21)) + var_1_65;
	if ((var_1_48 / var_1_46) == stepLocal_20) {
		if ((128 * var_1_49) >= stepLocal_19) {
			if (! var_1_16) {
				var_1_83 = (var_1_68 - var_1_57);
			}
		}
	}


	// From: Req38Batch187Amount500
	if (var_1_1 < var_1_97) {
		var_1_102 = var_1_75;
	}


	// From: Req41Batch187Amount500
	if (var_1_106) {
		var_1_105 = var_1_88;
	}


	// From: Req44Batch187Amount500
	if (var_1_109) {
		var_1_108 = var_1_82;
	}


	// From: Req47Batch187Amount500
	if (var_1_69) {
		var_1_111 = var_1_6;
	}


	// From: Req51Batch187Amount500
	if (var_1_69) {
		var_1_115 = var_1_99;
	}


	// From: Req3Batch187Amount500
	if ((var_1_11 >> var_1_15) <= (var_1_10 / -64)) {
		if (var_1_60) {
			if ((var_1_7 + var_1_6) <= 100.75) {
				if (! var_1_69) {
					var_1_14 = (var_1_16 || var_1_17);
				}
			} else {
				var_1_14 = (((var_1_18 - 1.0000000005E9) <= 63.5) || var_1_19);
			}
		}
	}


	// From: Req2Batch187Amount500
	unsigned long int stepLocal_2 = var_1_35 * (var_1_63 / var_1_12);
	if ((var_1_10 - var_1_11) >= stepLocal_2) {
		var_1_9 = (34006 - ((var_1_13 + 10000) - (var_1_11 + 100)));
	}


	// From: Req15Batch187Amount500
	unsigned long int stepLocal_10 = var_1_27;
	unsigned long int stepLocal_9 = var_1_116;
	unsigned long int stepLocal_8 = var_1_116;
	if ((var_1_18 / var_1_45) > ((min (var_1_78 , var_1_33)) * var_1_6)) {
		if (stepLocal_10 >= (- var_1_62)) {
			var_1_44 = ((abs (var_1_41)) - var_1_15);
		}
	} else {
		if (stepLocal_9 >= var_1_35) {
			if (((var_1_46 - var_1_15) - var_1_30) >= stepLocal_8) {
				var_1_44 = (min (((var_1_47 - var_1_42) + var_1_30) , var_1_21));
			} else {
				var_1_44 = ((var_1_47 - (max (var_1_42 , var_1_15))) + var_1_11);
			}
		} else {
			var_1_44 = ((abs (var_1_48 - var_1_15)) - 256u);
		}
	}


	// From: Req6Batch187Amount500
	unsigned long int stepLocal_4 = var_1_62;
	if (stepLocal_4 == ((max (var_1_49 , last_1_var_1_26)) | (var_1_27 - var_1_15))) {
		var_1_26 = var_1_11;
	}


	// From: Req8Batch187Amount500
	if ((var_1_15 > (var_1_13 % var_1_12)) && (var_1_6 == (var_1_18 * var_1_7))) {
		if (var_1_11 > 64) {
			if (var_1_28 < (var_1_30 * (max (var_1_26 , 1)))) {
				var_1_31 = var_1_8;
			} else {
				var_1_31 = (abs (var_1_7));
			}
		} else {
			var_1_31 = 16.25;
		}
	}


	// From: Req26Batch187Amount500
	if (var_1_29 != var_1_105) {
		var_1_71 = (128 - (var_1_72 - var_1_46));
	} else {
		var_1_71 = var_1_72;
	}


	// From: Req33Batch187Amount500
	signed long int stepLocal_25 = var_1_85 - 5;
	unsigned long int stepLocal_24 = var_1_112;
	unsigned long int stepLocal_23 = var_1_44;
	unsigned char stepLocal_22 = var_1_68;
	if (stepLocal_22 > (max (var_1_116 , var_1_85))) {
		if (var_1_107 >= stepLocal_24) {
			if (var_1_21 >= stepLocal_25) {
				if (var_1_16) {
					var_1_86 = (var_1_67 + var_1_46);
				} else {
					var_1_86 = var_1_15;
				}
			} else {
				if (! (var_1_106 && var_1_103)) {
					var_1_86 = ((var_1_88 - 1) - var_1_58);
				}
			}
		} else {
			var_1_86 = ((min ((var_1_58 + var_1_68) , (max (var_1_77 , var_1_57)))) + (var_1_15 + var_1_89));
		}
	} else {
		if ((- var_1_47) < stepLocal_23) {
			var_1_86 = ((64 + var_1_91) - var_1_11);
		} else {
			var_1_86 = ((max ((var_1_88 - var_1_58) , 128)) - var_1_15);
		}
	}


	// From: Req35Batch187Amount500
	unsigned long int stepLocal_29 = max (var_1_49 , var_1_12);
	if ((var_1_44 + var_1_51) == stepLocal_29) {
		var_1_94 = (max (var_1_15 , var_1_68));
	} else {
		var_1_94 = (min ((min (var_1_11 , (max (var_1_68 , 128)))) , (var_1_88 - (var_1_91 - 16))));
	}


	// From: Req37Batch187Amount500
	signed char stepLocal_34 = var_1_29;
	unsigned long int stepLocal_33 = (var_1_42 + var_1_44) * (var_1_116 / var_1_15);
	unsigned char stepLocal_32 = var_1_15 > var_1_73;
	unsigned long int stepLocal_31 = -1 * var_1_44;
	if (stepLocal_32 && ((var_1_116 * var_1_68) >= var_1_52)) {
		if (stepLocal_31 > var_1_68) {
			if (var_1_56 < stepLocal_33) {
				if ((min (var_1_74 , var_1_49)) >= stepLocal_34) {
					if ((- (- var_1_18)) >= (- var_1_80)) {
						var_1_96 = var_1_33;
					}
				}
			} else {
				var_1_96 = ((var_1_97 - var_1_79) - (var_1_98 - (var_1_99 + 24.5)));
			}
		} else {
			var_1_96 = ((abs (var_1_34 + var_1_100)) - (min (var_1_79 , (min (var_1_101 , var_1_99)))));
		}
	}


	// From: Req19Batch187Amount500
	if (var_1_16) {
		var_1_59 = (var_1_84 + var_1_9);
	} else {
		var_1_59 = (var_1_46 - ((var_1_15 + var_1_58) + var_1_9));
	}


	// From: Req34Batch187Amount500
	unsigned long int stepLocal_28 = var_1_65;
	unsigned char stepLocal_27 = var_1_19;
	signed long int stepLocal_26 = (var_1_21 >> var_1_15) / var_1_72;
	if ((var_1_15 - var_1_77) >= stepLocal_28) {
		var_1_92 = ((var_1_59 + var_1_29) + (min ((min (var_1_44 , var_1_75)) , (64 - var_1_77))));
	} else {
		if (stepLocal_26 < var_1_39) {
			if (stepLocal_27 && var_1_109) {
				var_1_92 = (var_1_93 - var_1_116);
			} else {
				var_1_92 = (max (var_1_56 , var_1_59));
			}
		} else {
			var_1_92 = (abs (var_1_13));
		}
	}


	// From: Req4Batch187Amount500
	signed long int stepLocal_3 = ~ var_1_13;
	if (var_1_8 >= ((- var_1_7) + (max (var_1_31 , var_1_6)))) {
		var_1_20 = (var_1_15 + var_1_11);
	} else {
		if (stepLocal_3 < var_1_12) {
			var_1_20 = (var_1_11 + (var_1_21 - var_1_15));
		} else {
			var_1_20 = var_1_13;
		}
	}


	// From: Req17Batch187Amount500
	if (var_1_25 == (- (min (var_1_96 , var_1_80)))) {
		var_1_54 = (var_1_46 + var_1_29);
	}


	// From: Req36Batch187Amount500
	unsigned char stepLocal_30 = var_1_14;
	if ((var_1_19 && (var_1_20 < var_1_51)) && stepLocal_30) {
		var_1_95 = (var_1_15 + (var_1_68 + (max (var_1_89 , 1))));
	} else {
		var_1_95 = ((var_1_68 + var_1_15) + (abs (var_1_58)));
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 8191);
	assume_abort_if_not(var_1_13 <= 16384);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 6);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -1);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741823);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 3221225470);
	assume_abort_if_not(var_1_48 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -1);
	assume_abort_if_not(var_1_56 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 536870912);
	assume_abort_if_not(var_1_65 <= 1073741824);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 32);
	assume_abort_if_not(var_1_67 <= 64);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 32);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 32767);
	assume_abort_if_not(var_1_70 <= 65535);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= 16383);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -31);
	assume_abort_if_not(var_1_74 <= 32);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -31);
	assume_abort_if_not(var_1_75 <= 31);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -63);
	assume_abort_if_not(var_1_76 <= 63);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 31);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427383000e+12F && var_1_79 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -127);
	assume_abort_if_not(var_1_82 <= 126);
	var_1_85 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_85 >= 32767);
	assume_abort_if_not(var_1_85 <= 65534);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 190);
	assume_abort_if_not(var_1_88 <= 254);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 63);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 64);
	assume_abort_if_not(var_1_91 <= 127);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= -1);
	assume_abort_if_not(var_1_93 <= 2147483646);
	var_1_97 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_97 >= 4611686.018427383000e+12F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854766000e+12F && var_1_97 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= 4611686.018427383000e+12F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 9223372.036854766000e+12F && var_1_98 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= 0.0F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 2305843.009213691400e+12F && var_1_99 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_100 >= -461168.6018427383000e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 4611686.018427383000e+12F && var_1_100 >= 1.0e-20F ));
	var_1_101 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_101 >= 0.0F && var_1_101 <= -1.0e-20F) || (var_1_101 <= 9223372.036854766000e+12F && var_1_101 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_112 = var_1_112;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_69 && var_1_60) ? ((var_1_42 >= (var_1_116 + 16u)) ? (var_1_1 == ((double) (max (var_1_6 , (max (var_1_7 , var_1_8)))))) : ((var_1_6 == var_1_8) ? (var_1_1 == ((double) var_1_6)) : 1)) : 1) && (((var_1_10 - var_1_11) >= (var_1_35 * (var_1_63 / var_1_12))) ? (var_1_9 == ((unsigned short int) (34006 - ((var_1_13 + 10000) - (var_1_11 + 100))))) : 1)) && (((var_1_11 >> var_1_15) <= (var_1_10 / -64)) ? (var_1_60 ? (((var_1_7 + var_1_6) <= 100.75) ? ((! var_1_69) ? (var_1_14 == ((unsigned char) (var_1_16 || var_1_17))) : 1) : (var_1_14 == ((unsigned char) (((var_1_18 - 1.0000000005E9) <= 63.5) || var_1_19)))) : 1) : 1)) && ((var_1_8 >= ((- var_1_7) + (max (var_1_31 , var_1_6)))) ? (var_1_20 == ((unsigned short int) (var_1_15 + var_1_11))) : (((~ var_1_13) < var_1_12) ? (var_1_20 == ((unsigned short int) (var_1_11 + (var_1_21 - var_1_15)))) : (var_1_20 == ((unsigned short int) var_1_13))))) && (var_1_22 == ((double) (var_1_23 - (max (var_1_24 , var_1_25)))))) && ((var_1_62 == ((max (var_1_49 , last_1_var_1_26)) | (var_1_27 - var_1_15))) ? (var_1_26 == ((unsigned short int) var_1_11)) : 1)) && (var_1_28 == ((signed char) (min (var_1_15 , (var_1_29 - var_1_30)))))) && (((var_1_15 > (var_1_13 % var_1_12)) && (var_1_6 == (var_1_18 * var_1_7))) ? ((var_1_11 > 64) ? ((var_1_28 < (var_1_30 * (max (var_1_26 , 1)))) ? (var_1_31 == ((double) var_1_8)) : (var_1_31 == ((double) (abs (var_1_7))))) : (var_1_31 == ((double) 16.25))) : 1)) && ((! var_1_16) ? (var_1_32 == ((double) (max (var_1_8 , (var_1_24 - 128.25))))) : (var_1_32 == ((double) (min ((var_1_33 + (100.2 - var_1_34)) , var_1_25)))))) && (((var_1_19 && (var_1_17 && var_1_106)) || var_1_109) ? (var_1_35 == ((unsigned long int) var_1_15)) : (var_1_35 == ((unsigned long int) (max (var_1_21 , var_1_36)))))) && (((1 * var_1_21) < (var_1_11 + var_1_10)) ? (var_1_37 == ((float) (var_1_23 - var_1_24))) : (var_1_37 == ((float) ((var_1_34 - var_1_38) + 4.625f))))) && (((max (64 , last_1_var_1_73)) >= (min ((last_1_var_1_63 * var_1_15) , var_1_21))) ? ((last_1_var_1_37 >= last_1_var_1_22) ? ((! var_1_17) ? (var_1_39 == ((unsigned long int) (var_1_41 - (max (var_1_15 , last_1_var_1_92))))) : ((last_1_var_1_106 || (var_1_18 <= last_1_var_1_22)) ? (var_1_39 == ((unsigned long int) (min (last_1_var_1_92 , var_1_15)))) : (var_1_39 == ((unsigned long int) (min (var_1_21 , ((last_1_var_1_59 + var_1_13) + 32u))))))) : (var_1_39 == ((unsigned long int) 100u))) : (var_1_39 == ((unsigned long int) var_1_21)))) && (var_1_42 == ((unsigned long int) (min (last_1_var_1_62 , (max (var_1_30 , var_1_21))))))) && (((var_1_25 - var_1_24) < var_1_6) ? ((var_1_33 >= (var_1_24 - (min (var_1_18 , var_1_25)))) ? (var_1_43 == ((double) (min (var_1_23 , var_1_24)))) : 1) : (var_1_43 == ((double) var_1_7)))) && (((var_1_18 / var_1_45) > ((min (var_1_78 , var_1_33)) * var_1_6)) ? ((var_1_27 >= (- var_1_62)) ? (var_1_44 == ((unsigned long int) ((abs (var_1_41)) - var_1_15))) : 1) : ((var_1_116 >= var_1_35) ? ((((var_1_46 - var_1_15) - var_1_30) >= var_1_116) ? (var_1_44 == ((unsigned long int) (min (((var_1_47 - var_1_42) + var_1_30) , var_1_21)))) : (var_1_44 == ((unsigned long int) ((var_1_47 - (max (var_1_42 , var_1_15))) + var_1_11)))) : (var_1_44 == ((unsigned long int) ((abs (var_1_48 - var_1_15)) - 256u)))))) && ((var_1_27 < var_1_15) ? ((((max (var_1_43 , var_1_1)) == var_1_113) || var_1_109) ? (((- var_1_13) < var_1_112) ? (var_1_106 ? (var_1_49 == ((unsigned long int) var_1_46)) : (var_1_49 == ((unsigned long int) (var_1_41 - (abs (abs (var_1_15))))))) : (var_1_49 == ((unsigned long int) ((max (var_1_51 , var_1_52)) - (min ((var_1_47 - var_1_30) , var_1_84)))))) : ((var_1_12 <= (min (100 , var_1_62))) ? ((var_1_23 < var_1_25) ? (var_1_49 == ((unsigned long int) (max (var_1_11 , (max (var_1_51 , var_1_21)))))) : (var_1_49 == ((unsigned long int) (var_1_41 - var_1_53)))) : (var_1_49 == ((unsigned long int) (abs (var_1_15)))))) : 1)) && ((var_1_25 == (- (min (var_1_96 , var_1_80)))) ? (var_1_54 == ((signed short int) (var_1_46 + var_1_29))) : 1)) && ((((- var_1_42) / 32) <= var_1_62) ? (var_1_55 == ((signed char) (var_1_56 - (max ((var_1_57 - var_1_58) , 16))))) : ((var_1_15 > 50) ? (var_1_55 == ((signed char) var_1_57)) : (var_1_55 == ((signed char) (var_1_58 + var_1_15)))))) && (var_1_16 ? (var_1_59 == ((signed long int) (var_1_84 + var_1_9))) : (var_1_59 == ((signed long int) (var_1_46 - ((var_1_15 + var_1_58) + var_1_9)))))) && ((var_1_36 < last_1_var_1_108) ? ((last_1_var_1_14 || (var_1_56 <= last_1_var_1_42)) ? (var_1_60 == ((unsigned char) var_1_19)) : (var_1_60 == ((unsigned char) (((var_1_52 - last_1_var_1_112) < var_1_47) && var_1_16)))) : 1)) && ((! var_1_16) ? (var_1_61 == ((signed short int) ((var_1_46 + var_1_57) - 256))) : (var_1_61 == ((signed short int) var_1_13)))) && ((var_1_39 > var_1_53) ? (var_1_62 == ((unsigned long int) ((min (var_1_48 , var_1_51)) - (1846140523u - (max (var_1_21 , var_1_58)))))) : ((var_1_16 || var_1_103) ? (var_1_62 == ((unsigned long int) (min ((var_1_52 - (var_1_47 - var_1_58)) , var_1_48)))) : (var_1_62 == ((unsigned long int) (var_1_57 + (max (var_1_11 , (1533362358u - var_1_58))))))))) && ((var_1_42 < var_1_27) ? (var_1_63 == ((unsigned long int) (var_1_116 + ((var_1_65 - var_1_15) + var_1_110)))) : 1)) && ((var_1_45 == var_1_34) ? (var_1_66 == ((unsigned char) ((var_1_46 + (var_1_67 + var_1_68)) - var_1_57))) : (var_1_66 == ((unsigned char) (min ((min (8 , var_1_57)) , (var_1_30 + var_1_11))))))) && ((((var_1_70 - var_1_67) * var_1_112) > (min ((max (var_1_42 , var_1_39)) , var_1_52))) ? (var_1_69 == ((unsigned char) (! 0))) : 1)) && ((var_1_29 != var_1_105) ? (var_1_71 == ((signed short int) (128 - (var_1_72 - var_1_46)))) : (var_1_71 == ((signed short int) var_1_72)))) && (var_1_69 ? (var_1_73 == ((signed char) (var_1_15 + (max ((var_1_74 + var_1_75) , (min (var_1_58 , var_1_76))))))) : (var_1_73 == ((signed char) ((32 + (var_1_15 + var_1_77)) - var_1_30))))) && ((9.99999999999993E13 > (var_1_34 - var_1_18)) ? (var_1_78 == ((double) (min (var_1_7 , (var_1_34 + var_1_38))))) : (((var_1_24 == (var_1_38 + var_1_6)) && var_1_16) ? (var_1_78 == ((double) (var_1_34 + ((abs (var_1_38)) - var_1_79)))) : (var_1_78 == ((double) (min (var_1_24 , var_1_25))))))) && (var_1_80 == ((float) (min (63.4f , var_1_8))))) && (((min (var_1_72 , var_1_107)) < last_1_var_1_81) ? (var_1_106 ? (var_1_81 == ((signed char) (max ((abs (min (var_1_58 , var_1_57))) , (min (var_1_77 , (min (var_1_30 , var_1_75)))))))) : (var_1_81 == ((signed char) var_1_82))) : 1)) && (((var_1_48 / var_1_46) == var_1_68) ? (((128 * var_1_49) >= ((abs (var_1_21)) + var_1_65)) ? ((! var_1_16) ? (var_1_83 == ((signed short int) (var_1_68 - var_1_57))) : 1) : 1) : 1)) && ((var_1_10 == (var_1_46 - (var_1_68 + var_1_15))) ? (var_1_84 == ((unsigned short int) (var_1_85 - (min (var_1_46 , (min (var_1_68 , var_1_30))))))) : 1)) && ((var_1_68 > (max (var_1_116 , var_1_85))) ? ((var_1_107 >= var_1_112) ? ((var_1_21 >= (var_1_85 - 5)) ? (var_1_16 ? (var_1_86 == ((unsigned char) (var_1_67 + var_1_46))) : (var_1_86 == ((unsigned char) var_1_15))) : ((! (var_1_106 && var_1_103)) ? (var_1_86 == ((unsigned char) ((var_1_88 - 1) - var_1_58))) : 1)) : (var_1_86 == ((unsigned char) ((min ((var_1_58 + var_1_68) , (max (var_1_77 , var_1_57)))) + (var_1_15 + var_1_89))))) : (((- var_1_47) < var_1_44) ? (var_1_86 == ((unsigned char) ((64 + var_1_91) - var_1_11))) : (var_1_86 == ((unsigned char) ((max ((var_1_88 - var_1_58) , 128)) - var_1_15)))))) && (((var_1_15 - var_1_77) >= var_1_65) ? (var_1_92 == ((signed long int) ((var_1_59 + var_1_29) + (min ((min (var_1_44 , var_1_75)) , (64 - var_1_77)))))) : ((((var_1_21 >> var_1_15) / var_1_72) < var_1_39) ? ((var_1_19 && var_1_109) ? (var_1_92 == ((signed long int) (var_1_93 - var_1_116))) : (var_1_92 == ((signed long int) (max (var_1_56 , var_1_59))))) : (var_1_92 == ((signed long int) (abs (var_1_13))))))) && (((var_1_44 + var_1_51) == (max (var_1_49 , var_1_12))) ? (var_1_94 == ((unsigned char) (max (var_1_15 , var_1_68)))) : (var_1_94 == ((unsigned char) (min ((min (var_1_11 , (max (var_1_68 , 128)))) , (var_1_88 - (var_1_91 - 16)))))))) && (((var_1_19 && (var_1_20 < var_1_51)) && var_1_14) ? (var_1_95 == ((unsigned char) (var_1_15 + (var_1_68 + (max (var_1_89 , 1)))))) : (var_1_95 == ((unsigned char) ((var_1_68 + var_1_15) + (abs (var_1_58))))))) && (((var_1_15 > var_1_73) && ((var_1_116 * var_1_68) >= var_1_52)) ? (((-1 * var_1_44) > var_1_68) ? ((var_1_56 < ((var_1_42 + var_1_44) * (var_1_116 / var_1_15))) ? (((min (var_1_74 , var_1_49)) >= var_1_29) ? (((- (- var_1_18)) >= (- var_1_80)) ? (var_1_96 == ((double) var_1_33)) : 1) : 1) : (var_1_96 == ((double) ((var_1_97 - var_1_79) - (var_1_98 - (var_1_99 + 24.5)))))) : (var_1_96 == ((double) ((abs (var_1_34 + var_1_100)) - (min (var_1_79 , (min (var_1_101 , var_1_99)))))))) : 1)) && ((var_1_1 < var_1_97) ? (var_1_102 == ((signed short int) var_1_75)) : 1)) && (var_1_16 ? (var_1_103 == ((unsigned char) var_1_19)) : 1)) && (var_1_103 ? (var_1_104 == ((float) var_1_24)) : (var_1_104 == ((float) var_1_98)))) && (var_1_106 ? (var_1_105 == ((signed long int) var_1_88)) : 1)) && (var_1_106 == ((unsigned char) var_1_19))) && (var_1_107 == ((signed long int) var_1_76))) && (var_1_109 ? (var_1_108 == ((signed long int) var_1_82)) : 1)) && (var_1_109 == ((unsigned char) var_1_19))) && (var_1_19 ? (var_1_110 == ((signed long int) var_1_29)) : (var_1_110 == ((signed long int) var_1_66)))) && (var_1_69 ? (var_1_111 == ((float) var_1_6)) : 1)) && (var_1_106 ? (var_1_112 == ((unsigned long int) var_1_85)) : (var_1_112 == ((unsigned long int) var_1_68)))) && (var_1_113 == ((float) var_1_38))) && (var_1_109 ? (var_1_114 == ((double) var_1_6)) : 1)) && (var_1_69 ? (var_1_115 == ((float) var_1_99)) : 1)) && (var_1_60 ? (var_1_116 == ((unsigned long int) var_1_53)) : (var_1_116 == ((unsigned long int) var_1_68)))) && ((var_1_77 > var_1_13) ? ((var_1_39 != (- var_1_13)) ? (((max (var_1_39 , 1)) < var_1_75) ? (var_1_117 == ((signed char) var_1_75)) : (var_1_117 == ((signed char) var_1_56))) : (var_1_117 == ((signed char) var_1_29))) : 1)
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
