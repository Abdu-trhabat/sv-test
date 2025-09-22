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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
unsigned short int var_1_6 = 2;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
double var_1_11 = 16.5;
double var_1_12 = 8.5;
double var_1_13 = 0.0;
double var_1_14 = 1.625;
signed long int var_1_15 = -2;
unsigned long int var_1_16 = 3182169038;
signed long int var_1_17 = -16;
signed long int var_1_18 = -128;
signed long int var_1_19 = -4;
signed long int var_1_20 = -2;
unsigned char var_1_21 = 0;
double var_1_22 = 1000000000000.75;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 200;
unsigned short int var_1_27 = 128;
unsigned short int var_1_28 = 57456;
unsigned short int var_1_29 = 10000;
unsigned short int var_1_30 = 10000;
signed long int var_1_31 = -4;
float var_1_32 = 15.95;
float var_1_33 = 999.3;
signed char var_1_34 = -100;
signed char var_1_35 = 8;
signed char var_1_36 = -16;
signed char var_1_37 = -10;
signed char var_1_38 = -2;
signed char var_1_39 = 1;
signed char var_1_40 = 10;
signed char var_1_41 = 5;
unsigned short int var_1_42 = 0;
signed char var_1_43 = 50;
signed short int var_1_44 = -8;
signed char var_1_45 = 64;
signed char var_1_46 = 5;
signed long int var_1_47 = -128;
signed long int var_1_48 = 1;
signed long int var_1_49 = 1000000000;
unsigned char var_1_50 = 0;
unsigned long int var_1_51 = 100;
unsigned long int var_1_52 = 2592633819;
signed long int var_1_53 = 100000;
unsigned short int var_1_54 = 0;
unsigned short int var_1_55 = 41408;
signed long int var_1_56 = 64;
unsigned long int var_1_57 = 2;
signed long int var_1_58 = 1137314410;
signed long int var_1_59 = 1450742561;
unsigned long int var_1_60 = 1;
unsigned long int var_1_63 = 4;
unsigned long int var_1_64 = 1568009544;
unsigned char var_1_65 = 0;
unsigned long int var_1_66 = 0;
unsigned long int var_1_67 = 1;
unsigned short int var_1_68 = 0;
unsigned char var_1_69 = 128;
unsigned char var_1_70 = 5;
signed long int var_1_72 = -32;
unsigned short int var_1_73 = 4;
unsigned short int var_1_74 = 0;
unsigned short int var_1_75 = 17295;
unsigned short int var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 0;
unsigned short int var_1_80 = 100;
unsigned short int var_1_81 = 24125;
unsigned char var_1_82 = 0;
signed short int var_1_83 = -8;
signed short int var_1_84 = 256;
signed short int var_1_85 = -2;
signed char var_1_87 = 1;
signed char var_1_88 = 8;
signed short int var_1_89 = -5;
unsigned long int var_1_91 = 8;
signed long int var_1_93 = 10;
signed short int var_1_94 = 200;
signed long int var_1_95 = -1;
signed char var_1_96 = 32;
signed char var_1_97 = 64;
unsigned char var_1_98 = 1;
signed long int var_1_99 = -5;
unsigned char var_1_101 = 0;
float var_1_102 = 1000.8;
float var_1_103 = 200.5;
signed short int var_1_104 = 50;
unsigned char var_1_105 = 50;
signed long int var_1_106 = -256;
signed char var_1_107 = -8;
double var_1_108 = 10.5;
float var_1_109 = 31.5;
unsigned char var_1_110 = 8;
unsigned char var_1_111 = 10;
signed short int var_1_112 = -1;
unsigned short int var_1_113 = 25;
unsigned long int var_1_114 = 10;
unsigned long int var_1_115 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_15 = -2;
signed long int last_1_var_1_20 = -2;
unsigned char last_1_var_1_24 = 64;
unsigned short int last_1_var_1_27 = 128;
signed long int last_1_var_1_31 = -4;
unsigned short int last_1_var_1_42 = 0;
signed long int last_1_var_1_47 = -128;
unsigned long int last_1_var_1_51 = 100;
signed long int last_1_var_1_53 = 100000;
unsigned long int last_1_var_1_67 = 1;
unsigned short int last_1_var_1_68 = 0;
unsigned char last_1_var_1_77 = 0;
signed short int last_1_var_1_89 = -5;
unsigned long int last_1_var_1_91 = 8;
signed short int last_1_var_1_94 = 200;
unsigned char last_1_var_1_101 = 0;
signed short int last_1_var_1_104 = 50;
signed long int last_1_var_1_106 = -256;
double last_1_var_1_108 = 10.5;
unsigned long int last_1_var_1_114 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req41Batch158Amount500
	signed long int stepLocal_37 = last_1_var_1_104;
	unsigned char stepLocal_36 = (max (var_1_12 , var_1_22)) >= last_1_var_1_108;
	unsigned long int stepLocal_35 = last_1_var_1_67;
	unsigned char stepLocal_34 = var_1_23 || last_1_var_1_101;
	unsigned char stepLocal_33 = var_1_26;
	if (stepLocal_33 < (- (max (last_1_var_1_51 , var_1_63)))) {
		var_1_99 = (max (var_1_41 , (var_1_55 + last_1_var_1_67)));
	} else {
		if (last_1_var_1_1) {
			if (var_1_79) {
				if (stepLocal_37 > (var_1_41 * last_1_var_1_15)) {
					if (4 < stepLocal_35) {
						var_1_99 = (max ((max (var_1_74 , var_1_40)) , var_1_17));
					} else {
						if (last_1_var_1_101 && stepLocal_36) {
							if (((- var_1_12) + var_1_22) > var_1_33) {
								var_1_99 = last_1_var_1_20;
							}
						} else {
							var_1_99 = (max (var_1_25 , var_1_57));
						}
					}
				}
			}
		} else {
			if (stepLocal_34 && last_1_var_1_77) {
				if (! ((last_1_var_1_67 / 16) >= last_1_var_1_20)) {
					var_1_99 = var_1_44;
				} else {
					var_1_99 = ((abs (abs (var_1_58))) - (min (32 , var_1_76)));
				}
			}
		}
	}


	// From: Req5Batch158Amount500
	if ((last_1_var_1_108 / (max (var_1_13 , var_1_22))) < var_1_12) {
		if (var_1_8) {
			var_1_21 = var_1_9;
		} else {
			var_1_21 = ((var_1_19 > (min (last_1_var_1_91 , var_1_6))) || (! (var_1_9 || var_1_23)));
		}
	} else {
		var_1_21 = (var_1_9 || (var_1_10 && var_1_4));
	}


	// From: Req49Batch158Amount500
	if (var_1_21) {
		var_1_108 = var_1_33;
	} else {
		var_1_108 = var_1_13;
	}


	// From: Req36Batch158Amount500
	signed long int stepLocal_31 = var_1_28 - (var_1_58 - var_1_93);
	signed long int stepLocal_30 = (min (-5 , var_1_74)) / var_1_29;
	if ((~ 4) <= stepLocal_30) {
		if (((var_1_76 - last_1_var_1_24) | last_1_var_1_27) < stepLocal_31) {
			var_1_91 = (min (last_1_var_1_68 , var_1_29));
		} else {
			var_1_91 = (var_1_52 - 10u);
		}
	}


	// From: Req42Batch158Amount500
	if (var_1_91 <= var_1_52) {
		var_1_101 = var_1_78;
	} else {
		var_1_101 = var_1_23;
	}


	// From: Req2Batch158Amount500
	if (var_1_21) {
		var_1_11 = var_1_12;
	} else {
		var_1_11 = ((8.211064086987161E18 - (var_1_13 - var_1_14)) - 49.5);
	}


	// From: Req9Batch158Amount500
	if (var_1_101) {
		var_1_32 = (abs (var_1_13 - (max (var_1_14 , var_1_33))));
	} else {
		var_1_32 = var_1_14;
	}


	// From: Req20Batch158Amount500
	unsigned char stepLocal_17 = var_1_8 || last_1_var_1_77;
	if (stepLocal_17 || (last_1_var_1_47 >= last_1_var_1_53)) {
		var_1_60 = (min (((max (var_1_52 , 2614365794u)) - var_1_63) , var_1_49));
	} else {
		var_1_60 = ((var_1_58 + var_1_64) - (var_1_45 + last_1_var_1_42));
	}


	// From: Req10Batch158Amount500
	var_1_34 = (max (var_1_35 , var_1_36));


	// From: Req12Batch158Amount500
	var_1_42 = (var_1_25 + var_1_26);


	// From: Req16Batch158Amount500
	var_1_51 = (var_1_52 - var_1_6);


	// From: Req17Batch158Amount500
	if (var_1_44 > ((var_1_40 + var_1_36) * -25)) {
		var_1_53 = -16;
	}


	// From: Req18Batch158Amount500
	signed char stepLocal_16 = var_1_46;
	if (stepLocal_16 < var_1_25) {
		var_1_54 = (var_1_55 - var_1_48);
	}


	// From: Req22Batch158Amount500
	if (var_1_8) {
		var_1_66 = (min (var_1_53 , ((abs (var_1_28)) + var_1_30)));
	} else {
		var_1_66 = (var_1_52 - var_1_53);
	}


	// From: Req23Batch158Amount500
	if (! var_1_4) {
		var_1_67 = last_1_var_1_67;
	}


	// From: Req24Batch158Amount500
	unsigned short int stepLocal_19 = var_1_30;
	if (var_1_16 > stepLocal_19) {
		var_1_68 = (var_1_55 - 256);
	}


	// From: Req27Batch158Amount500
	var_1_72 = ((abs (var_1_41)) + var_1_35);


	// From: Req30Batch158Amount500
	unsigned long int stepLocal_24 = var_1_51;
	if (stepLocal_24 >= var_1_18) {
		var_1_80 = ((min ((var_1_75 + var_1_81) , var_1_55)) - (var_1_29 + (var_1_30 - 4)));
	}


	// From: Req33Batch158Amount500
	if (var_1_101) {
		var_1_85 = (var_1_46 - var_1_25);
	} else {
		var_1_85 = var_1_42;
	}


	// From: Req39Batch158Amount500
	var_1_96 = (var_1_45 - (var_1_97 - (max (var_1_57 , var_1_46))));


	// From: Req40Batch158Amount500
	if ((var_1_13 - var_1_14) < var_1_33) {
		var_1_98 = (! var_1_9);
	} else {
		var_1_98 = (var_1_9 || (var_1_8 || (! var_1_4)));
	}


	// From: Req43Batch158Amount500
	var_1_102 = var_1_12;


	// From: Req45Batch158Amount500
	var_1_104 = var_1_42;


	// From: Req46Batch158Amount500
	if (var_1_21) {
		var_1_105 = var_1_25;
	} else {
		var_1_105 = var_1_57;
	}


	// From: Req47Batch158Amount500
	var_1_106 = last_1_var_1_106;


	// From: Req48Batch158Amount500
	var_1_107 = var_1_36;


	// From: Req50Batch158Amount500
	var_1_109 = var_1_14;


	// From: Req51Batch158Amount500
	var_1_110 = var_1_57;


	// From: Req52Batch158Amount500
	if (var_1_98) {
		var_1_111 = 16;
	}


	// From: Req54Batch158Amount500
	if ((var_1_13 - 2.5) >= var_1_22) {
		var_1_113 = ((abs (var_1_55)) - var_1_84);
	}


	// From: Req29Batch158Amount500
	if (var_1_4) {
		var_1_77 = ((var_1_10 && (last_1_var_1_77 || var_1_78)) && var_1_79);
	} else {
		if (var_1_98 || (var_1_36 <= var_1_80)) {
			if ((var_1_57 - var_1_45) > (var_1_60 * var_1_99)) {
				var_1_77 = (((var_1_60 > var_1_76) || var_1_10) && (var_1_79 && (! var_1_23)));
			}
		} else {
			var_1_77 = var_1_78;
		}
	}


	// From: Req6Batch158Amount500
	signed long int stepLocal_6 = var_1_53;
	unsigned long int stepLocal_5 = var_1_16 - var_1_6;
	if (var_1_9) {
		if (((var_1_11 / var_1_22) + var_1_14) <= var_1_12) {
			var_1_24 = (var_1_25 + 5);
		}
	} else {
		if (! (var_1_17 <= var_1_19)) {
			var_1_24 = (128 - var_1_25);
		} else {
			if (stepLocal_6 >= var_1_18) {
				if (var_1_91 > stepLocal_5) {
					var_1_24 = (abs (var_1_25));
				}
			} else {
				var_1_24 = (abs (var_1_26 - var_1_25));
			}
		}
	}


	// From: Req32Batch158Amount500
	if ((max ((var_1_72 - var_1_26) , var_1_42)) > (var_1_58 - 16)) {
		var_1_83 = (100 - var_1_72);
	} else {
		var_1_83 = ((min ((var_1_84 + var_1_99) , 256)) - var_1_25);
	}


	// From: Req55Batch158Amount500
	unsigned long int stepLocal_38 = var_1_57 + var_1_66;
	if (stepLocal_38 == (last_1_var_1_114 * var_1_106)) {
		var_1_114 = var_1_45;
	} else {
		if (var_1_98) {
			if (var_1_11 >= (var_1_32 / var_1_13)) {
				var_1_114 = var_1_6;
			} else {
				var_1_114 = var_1_115;
			}
		} else {
			var_1_114 = var_1_63;
		}
	}


	// From: Req4Batch158Amount500
	signed long int stepLocal_4 = var_1_6 - (var_1_68 + 256);
	if (var_1_18 <= stepLocal_4) {
		if (var_1_10) {
			var_1_20 = (min (var_1_17 , var_1_6));
		} else {
			var_1_20 = var_1_68;
		}
	}


	// From: Req8Batch158Amount500
	unsigned long int stepLocal_10 = var_1_60;
	unsigned char stepLocal_9 = -64 < var_1_19;
	if (var_1_4 && stepLocal_9) {
		var_1_31 = ((last_1_var_1_31 + var_1_29) + (max (var_1_17 , var_1_26)));
	} else {
		if (stepLocal_10 < var_1_28) {
			var_1_31 = ((min (var_1_17 , (last_1_var_1_31 - var_1_26))) + (var_1_19 + var_1_51));
		}
	}


	// From: Req11Batch158Amount500
	signed long int stepLocal_12 = max (var_1_6 , (var_1_26 + var_1_68));
	signed long int stepLocal_11 = var_1_18 * var_1_30;
	if (var_1_6 <= stepLocal_11) {
		if (var_1_67 <= stepLocal_12) {
			if (! var_1_4) {
				var_1_37 = (abs ((min (var_1_38 , -8)) + var_1_39));
			}
		} else {
			var_1_37 = ((var_1_40 + var_1_41) + var_1_39);
		}
	}


	// From: Req13Batch158Amount500
	if ((- var_1_11) >= (abs (var_1_22))) {
		var_1_43 = (abs (abs (abs (var_1_40))));
	} else {
		if ((var_1_28 - var_1_113) >= var_1_35) {
			var_1_43 = var_1_39;
		} else {
			if ((var_1_35 / (min (var_1_44 , var_1_6))) >= var_1_18) {
				var_1_43 = (100 - (var_1_45 - var_1_46));
			}
		}
	}


	// From: Req15Batch158Amount500
	if ((var_1_72 * (var_1_20 * 1u)) > var_1_28) {
		if (var_1_66 > var_1_72) {
			var_1_50 = var_1_25;
		}
	} else {
		var_1_50 = var_1_48;
	}


	// From: Req19Batch158Amount500
	if ((var_1_104 | var_1_44) == (var_1_25 << var_1_36)) {
		if (var_1_91 == 5u) {
			if (! ((var_1_25 >> var_1_57) > var_1_114)) {
				if (var_1_9) {
					var_1_56 = (var_1_49 - var_1_55);
				} else {
					var_1_56 = var_1_39;
				}
			}
		} else {
			var_1_56 = (var_1_91 - ((max (var_1_58 , var_1_59)) - var_1_57));
		}
	}


	// From: Req21Batch158Amount500
	signed long int stepLocal_18 = 256;
	if (stepLocal_18 == (var_1_114 % var_1_26)) {
		if (var_1_21) {
			var_1_65 = (max (0 , (var_1_46 + var_1_48)));
		}
	} else {
		var_1_65 = var_1_26;
	}


	// From: Req28Batch158Amount500
	signed long int stepLocal_23 = -32;
	if (stepLocal_23 > var_1_67) {
		var_1_73 = (var_1_55 - (min (var_1_29 , (max (var_1_110 , 5)))));
	} else {
		var_1_73 = (min ((var_1_74 + (var_1_75 - 2)) , (var_1_76 + var_1_67)));
	}


	// From: Req31Batch158Amount500
	unsigned long int stepLocal_27 = (min (var_1_64 , var_1_50)) << var_1_30;
	unsigned long int stepLocal_26 = var_1_63;
	unsigned long int stepLocal_25 = (5 * var_1_64) % var_1_29;
	if ((var_1_60 * var_1_91) < stepLocal_27) {
		if (var_1_85 >= stepLocal_26) {
			var_1_82 = var_1_4;
		}
	} else {
		if (stepLocal_25 > (var_1_46 << var_1_91)) {
			var_1_82 = (! (var_1_98 && (! var_1_10)));
		}
	}


	// From: Req34Batch158Amount500
	unsigned char stepLocal_28 = var_1_82;
	if ((var_1_53 >= var_1_73) || stepLocal_28) {
		var_1_87 = (var_1_45 - var_1_88);
	}


	// From: Req35Batch158Amount500
	unsigned char stepLocal_29 = (var_1_66 % var_1_49) < var_1_67;
	if (stepLocal_29 || var_1_98) {
		if (var_1_12 < var_1_109) {
			var_1_89 = (max (var_1_88 , var_1_40));
		} else {
			var_1_89 = (8 - last_1_var_1_89);
		}
	}


	// From: Req38Batch158Amount500
	var_1_95 = (max ((256 - var_1_114) , var_1_36));


	// From: Req44Batch158Amount500
	if (var_1_82) {
		var_1_103 = var_1_12;
	} else {
		var_1_103 = var_1_33;
	}


	// From: Req53Batch158Amount500
	if (var_1_101) {
		var_1_112 = var_1_83;
	} else {
		var_1_112 = var_1_104;
	}


	// From: Req1Batch158Amount500
	unsigned long int stepLocal_3 = var_1_60;
	unsigned long int stepLocal_2 = 128u;
	unsigned long int stepLocal_1 = var_1_60;
	unsigned long int stepLocal_0 = - var_1_114;
	if (var_1_101) {
		if (stepLocal_2 < var_1_114) {
			var_1_1 = (! var_1_4);
		} else {
			if (((- var_1_114) + (var_1_106 % var_1_6)) < stepLocal_3) {
				var_1_1 = (var_1_4 || (! var_1_8));
			} else {
				if (var_1_60 > stepLocal_0) {
					var_1_1 = (var_1_8 || (var_1_4 && var_1_9));
				} else {
					var_1_1 = var_1_4;
				}
			}
		}
	} else {
		if (stepLocal_1 >= var_1_6) {
			var_1_1 = (var_1_4 && var_1_10);
		} else {
			var_1_1 = (! (var_1_9 || var_1_8));
		}
	}


	// From: Req14Batch158Amount500
	signed long int stepLocal_15 = var_1_17 * var_1_46;
	signed long int stepLocal_14 = var_1_72;
	signed long int stepLocal_13 = 1 + var_1_18;
	if (stepLocal_13 >= var_1_46) {
		if ((3.25 - var_1_13) >= var_1_33) {
			var_1_47 = (((max (var_1_26 , var_1_6)) - (32 + var_1_72)) + var_1_53);
		} else {
			if (var_1_23) {
				if (stepLocal_14 >= (var_1_28 >> var_1_48)) {
					var_1_47 = (abs (var_1_19));
				}
			} else {
				var_1_47 = (var_1_28 + (var_1_46 - var_1_25));
			}
		}
	} else {
		if (stepLocal_15 < (var_1_19 / var_1_48)) {
			var_1_47 = (min ((abs (var_1_60)) , (min (var_1_40 , var_1_83))));
		} else {
			var_1_47 = ((max ((min (256 , var_1_25)) , 10)) - (var_1_48 + (var_1_49 - var_1_26)));
		}
	}


	// From: Req3Batch158Amount500
	if ((var_1_16 - var_1_72) == ((var_1_67 + 100u) * var_1_6)) {
		if (var_1_1) {
			var_1_15 = 5;
		} else {
			var_1_15 = ((var_1_72 + (var_1_6 + var_1_17)) + (var_1_18 + (min (-256 , var_1_19))));
		}
	}


	// From: Req7Batch158Amount500
	signed long int stepLocal_8 = var_1_18;
	signed long int stepLocal_7 = var_1_30 * (var_1_18 ^ var_1_17);
	if ((var_1_28 - var_1_25) < stepLocal_8) {
		var_1_27 = (((var_1_29 + var_1_30) - var_1_53) + 16);
	} else {
		if (var_1_47 <= stepLocal_7) {
			var_1_27 = (max (var_1_26 , var_1_53));
		} else {
			var_1_27 = (max (var_1_30 , var_1_25));
		}
	}


	// From: Req25Batch158Amount500
	unsigned char stepLocal_21 = var_1_10;
	signed long int stepLocal_20 = 8;
	if (stepLocal_21 || (var_1_77 || (var_1_26 < 5))) {
		var_1_69 = (abs (10));
	} else {
		if ((var_1_59 - var_1_15) >= stepLocal_20) {
			var_1_69 = (var_1_45 + var_1_57);
		}
	}


	// From: Req26Batch158Amount500
	signed long int stepLocal_22 = - var_1_27;
	if (stepLocal_22 == (~ var_1_68)) {
		var_1_70 = (min (var_1_46 , 16));
	} else {
		var_1_70 = (min (128 , var_1_48));
	}


	// From: Req37Batch158Amount500
	signed long int stepLocal_32 = var_1_47 / var_1_44;
	if (stepLocal_32 < -5) {
		var_1_94 = (min ((var_1_25 - (min (16 , last_1_var_1_94))) , var_1_41));
	} else {
		var_1_94 = (min (var_1_51 , (var_1_72 - var_1_84)));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	assume_abort_if_not(var_1_6 != 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 2305843.009213691400e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 2147483647);
	assume_abort_if_not(var_1_16 <= 4294967295);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -268435455);
	assume_abort_if_not(var_1_17 <= 268435455);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -536870911);
	assume_abort_if_not(var_1_18 <= 536870912);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -536870911);
	assume_abort_if_not(var_1_19 <= 536870911);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65535);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 8191);
	assume_abort_if_not(var_1_29 <= 16384);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 8192);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -127);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -31);
	assume_abort_if_not(var_1_40 <= 32);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -31);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= -32768);
	assume_abort_if_not(var_1_44 <= 32767);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 63);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 15);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 536870911);
	assume_abort_if_not(var_1_49 <= 1073741823);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 7);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483646);
	var_1_59 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_59 >= 1073741823);
	assume_abort_if_not(var_1_59 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741824);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 32767);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 16383);
	assume_abort_if_not(var_1_75 <= 32767);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 16384);
	assume_abort_if_not(var_1_81 <= 32767);
	var_1_84 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 16383);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 126);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 1073741823);
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= 63);
	assume_abort_if_not(var_1_97 <= 126);
	var_1_115 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_115 >= 0);
	assume_abort_if_not(var_1_115 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_114 = var_1_114;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_101 ? ((128u < var_1_114) ? (var_1_1 == ((unsigned char) (! var_1_4))) : ((((- var_1_114) + (var_1_106 % var_1_6)) < var_1_60) ? (var_1_1 == ((unsigned char) (var_1_4 || (! var_1_8)))) : ((var_1_60 > (- var_1_114)) ? (var_1_1 == ((unsigned char) (var_1_8 || (var_1_4 && var_1_9)))) : (var_1_1 == ((unsigned char) var_1_4))))) : ((var_1_60 >= var_1_6) ? (var_1_1 == ((unsigned char) (var_1_4 && var_1_10))) : (var_1_1 == ((unsigned char) (! (var_1_9 || var_1_8)))))) && (var_1_21 ? (var_1_11 == ((double) var_1_12)) : (var_1_11 == ((double) ((8.211064086987161E18 - (var_1_13 - var_1_14)) - 49.5))))) && (((var_1_16 - var_1_72) == ((var_1_67 + 100u) * var_1_6)) ? (var_1_1 ? (var_1_15 == ((signed long int) 5)) : (var_1_15 == ((signed long int) ((var_1_72 + (var_1_6 + var_1_17)) + (var_1_18 + (min (-256 , var_1_19))))))) : 1)) && ((var_1_18 <= (var_1_6 - (var_1_68 + 256))) ? (var_1_10 ? (var_1_20 == ((signed long int) (min (var_1_17 , var_1_6)))) : (var_1_20 == ((signed long int) var_1_68))) : 1)) && (((last_1_var_1_108 / (max (var_1_13 , var_1_22))) < var_1_12) ? (var_1_8 ? (var_1_21 == ((unsigned char) var_1_9)) : (var_1_21 == ((unsigned char) ((var_1_19 > (min (last_1_var_1_91 , var_1_6))) || (! (var_1_9 || var_1_23)))))) : (var_1_21 == ((unsigned char) (var_1_9 || (var_1_10 && var_1_4)))))) && (var_1_9 ? ((((var_1_11 / var_1_22) + var_1_14) <= var_1_12) ? (var_1_24 == ((unsigned char) (var_1_25 + 5))) : 1) : ((! (var_1_17 <= var_1_19)) ? (var_1_24 == ((unsigned char) (128 - var_1_25))) : ((var_1_53 >= var_1_18) ? ((var_1_91 > (var_1_16 - var_1_6)) ? (var_1_24 == ((unsigned char) (abs (var_1_25)))) : 1) : (var_1_24 == ((unsigned char) (abs (var_1_26 - var_1_25)))))))) && (((var_1_28 - var_1_25) < var_1_18) ? (var_1_27 == ((unsigned short int) (((var_1_29 + var_1_30) - var_1_53) + 16))) : ((var_1_47 <= (var_1_30 * (var_1_18 ^ var_1_17))) ? (var_1_27 == ((unsigned short int) (max (var_1_26 , var_1_53)))) : (var_1_27 == ((unsigned short int) (max (var_1_30 , var_1_25))))))) && ((var_1_4 && (-64 < var_1_19)) ? (var_1_31 == ((signed long int) ((last_1_var_1_31 + var_1_29) + (max (var_1_17 , var_1_26))))) : ((var_1_60 < var_1_28) ? (var_1_31 == ((signed long int) ((min (var_1_17 , (last_1_var_1_31 - var_1_26))) + (var_1_19 + var_1_51)))) : 1))) && (var_1_101 ? (var_1_32 == ((float) (abs (var_1_13 - (max (var_1_14 , var_1_33)))))) : (var_1_32 == ((float) var_1_14)))) && (var_1_34 == ((signed char) (max (var_1_35 , var_1_36))))) && ((var_1_6 <= (var_1_18 * var_1_30)) ? ((var_1_67 <= (max (var_1_6 , (var_1_26 + var_1_68)))) ? ((! var_1_4) ? (var_1_37 == ((signed char) (abs ((min (var_1_38 , -8)) + var_1_39)))) : 1) : (var_1_37 == ((signed char) ((var_1_40 + var_1_41) + var_1_39)))) : 1)) && (var_1_42 == ((unsigned short int) (var_1_25 + var_1_26)))) && (((- var_1_11) >= (abs (var_1_22))) ? (var_1_43 == ((signed char) (abs (abs (abs (var_1_40)))))) : (((var_1_28 - var_1_113) >= var_1_35) ? (var_1_43 == ((signed char) var_1_39)) : (((var_1_35 / (min (var_1_44 , var_1_6))) >= var_1_18) ? (var_1_43 == ((signed char) (100 - (var_1_45 - var_1_46)))) : 1)))) && (((1 + var_1_18) >= var_1_46) ? (((3.25 - var_1_13) >= var_1_33) ? (var_1_47 == ((signed long int) (((max (var_1_26 , var_1_6)) - (32 + var_1_72)) + var_1_53))) : (var_1_23 ? ((var_1_72 >= (var_1_28 >> var_1_48)) ? (var_1_47 == ((signed long int) (abs (var_1_19)))) : 1) : (var_1_47 == ((signed long int) (var_1_28 + (var_1_46 - var_1_25)))))) : (((var_1_17 * var_1_46) < (var_1_19 / var_1_48)) ? (var_1_47 == ((signed long int) (min ((abs (var_1_60)) , (min (var_1_40 , var_1_83)))))) : (var_1_47 == ((signed long int) ((max ((min (256 , var_1_25)) , 10)) - (var_1_48 + (var_1_49 - var_1_26)))))))) && (((var_1_72 * (var_1_20 * 1u)) > var_1_28) ? ((var_1_66 > var_1_72) ? (var_1_50 == ((unsigned char) var_1_25)) : 1) : (var_1_50 == ((unsigned char) var_1_48)))) && (var_1_51 == ((unsigned long int) (var_1_52 - var_1_6)))) && ((var_1_44 > ((var_1_40 + var_1_36) * -25)) ? (var_1_53 == ((signed long int) -16)) : 1)) && ((var_1_46 < var_1_25) ? (var_1_54 == ((unsigned short int) (var_1_55 - var_1_48))) : 1)) && (((var_1_104 | var_1_44) == (var_1_25 << var_1_36)) ? ((var_1_91 == 5u) ? ((! ((var_1_25 >> var_1_57) > var_1_114)) ? (var_1_9 ? (var_1_56 == ((signed long int) (var_1_49 - var_1_55))) : (var_1_56 == ((signed long int) var_1_39))) : 1) : (var_1_56 == ((signed long int) (var_1_91 - ((max (var_1_58 , var_1_59)) - var_1_57))))) : 1)) && (((var_1_8 || last_1_var_1_77) || (last_1_var_1_47 >= last_1_var_1_53)) ? (var_1_60 == ((unsigned long int) (min (((max (var_1_52 , 2614365794u)) - var_1_63) , var_1_49)))) : (var_1_60 == ((unsigned long int) ((var_1_58 + var_1_64) - (var_1_45 + last_1_var_1_42)))))) && ((256 == (var_1_114 % var_1_26)) ? (var_1_21 ? (var_1_65 == ((unsigned char) (max (0 , (var_1_46 + var_1_48))))) : 1) : (var_1_65 == ((unsigned char) var_1_26)))) && (var_1_8 ? (var_1_66 == ((unsigned long int) (min (var_1_53 , ((abs (var_1_28)) + var_1_30))))) : (var_1_66 == ((unsigned long int) (var_1_52 - var_1_53))))) && ((! var_1_4) ? (var_1_67 == ((unsigned long int) last_1_var_1_67)) : 1)) && ((var_1_16 > var_1_30) ? (var_1_68 == ((unsigned short int) (var_1_55 - 256))) : 1)) && ((var_1_10 || (var_1_77 || (var_1_26 < 5))) ? (var_1_69 == ((unsigned char) (abs (10)))) : (((var_1_59 - var_1_15) >= 8) ? (var_1_69 == ((unsigned char) (var_1_45 + var_1_57))) : 1))) && (((- var_1_27) == (~ var_1_68)) ? (var_1_70 == ((unsigned char) (min (var_1_46 , 16)))) : (var_1_70 == ((unsigned char) (min (128 , var_1_48)))))) && (var_1_72 == ((signed long int) ((abs (var_1_41)) + var_1_35)))) && ((-32 > var_1_67) ? (var_1_73 == ((unsigned short int) (var_1_55 - (min (var_1_29 , (max (var_1_110 , 5))))))) : (var_1_73 == ((unsigned short int) (min ((var_1_74 + (var_1_75 - 2)) , (var_1_76 + var_1_67))))))) && (var_1_4 ? (var_1_77 == ((unsigned char) ((var_1_10 && (last_1_var_1_77 || var_1_78)) && var_1_79))) : ((var_1_98 || (var_1_36 <= var_1_80)) ? (((var_1_57 - var_1_45) > (var_1_60 * var_1_99)) ? (var_1_77 == ((unsigned char) (((var_1_60 > var_1_76) || var_1_10) && (var_1_79 && (! var_1_23))))) : 1) : (var_1_77 == ((unsigned char) var_1_78))))) && ((var_1_51 >= var_1_18) ? (var_1_80 == ((unsigned short int) ((min ((var_1_75 + var_1_81) , var_1_55)) - (var_1_29 + (var_1_30 - 4))))) : 1)) && (((var_1_60 * var_1_91) < ((min (var_1_64 , var_1_50)) << var_1_30)) ? ((var_1_85 >= var_1_63) ? (var_1_82 == ((unsigned char) var_1_4)) : 1) : ((((5 * var_1_64) % var_1_29) > (var_1_46 << var_1_91)) ? (var_1_82 == ((unsigned char) (! (var_1_98 && (! var_1_10))))) : 1))) && (((max ((var_1_72 - var_1_26) , var_1_42)) > (var_1_58 - 16)) ? (var_1_83 == ((signed short int) (100 - var_1_72))) : (var_1_83 == ((signed short int) ((min ((var_1_84 + var_1_99) , 256)) - var_1_25))))) && (var_1_101 ? (var_1_85 == ((signed short int) (var_1_46 - var_1_25))) : (var_1_85 == ((signed short int) var_1_42)))) && (((var_1_53 >= var_1_73) || var_1_82) ? (var_1_87 == ((signed char) (var_1_45 - var_1_88))) : 1)) && ((((var_1_66 % var_1_49) < var_1_67) || var_1_98) ? ((var_1_12 < var_1_109) ? (var_1_89 == ((signed short int) (max (var_1_88 , var_1_40)))) : (var_1_89 == ((signed short int) (8 - last_1_var_1_89)))) : 1)) && (((~ 4) <= ((min (-5 , var_1_74)) / var_1_29)) ? ((((var_1_76 - last_1_var_1_24) | last_1_var_1_27) < (var_1_28 - (var_1_58 - var_1_93))) ? (var_1_91 == ((unsigned long int) (min (last_1_var_1_68 , var_1_29)))) : (var_1_91 == ((unsigned long int) (var_1_52 - 10u)))) : 1)) && (((var_1_47 / var_1_44) < -5) ? (var_1_94 == ((signed short int) (min ((var_1_25 - (min (16 , last_1_var_1_94))) , var_1_41)))) : (var_1_94 == ((signed short int) (min (var_1_51 , (var_1_72 - var_1_84))))))) && (var_1_95 == ((signed long int) (max ((256 - var_1_114) , var_1_36))))) && (var_1_96 == ((signed char) (var_1_45 - (var_1_97 - (max (var_1_57 , var_1_46))))))) && (((var_1_13 - var_1_14) < var_1_33) ? (var_1_98 == ((unsigned char) (! var_1_9))) : (var_1_98 == ((unsigned char) (var_1_9 || (var_1_8 || (! var_1_4))))))) && ((var_1_26 < (- (max (last_1_var_1_51 , var_1_63)))) ? (var_1_99 == ((signed long int) (max (var_1_41 , (var_1_55 + last_1_var_1_67))))) : (last_1_var_1_1 ? (var_1_79 ? ((last_1_var_1_104 > (var_1_41 * last_1_var_1_15)) ? ((4 < last_1_var_1_67) ? (var_1_99 == ((signed long int) (max ((max (var_1_74 , var_1_40)) , var_1_17)))) : ((last_1_var_1_101 && ((max (var_1_12 , var_1_22)) >= last_1_var_1_108)) ? ((((- var_1_12) + var_1_22) > var_1_33) ? (var_1_99 == ((signed long int) last_1_var_1_20)) : 1) : (var_1_99 == ((signed long int) (max (var_1_25 , var_1_57)))))) : 1) : 1) : (((var_1_23 || last_1_var_1_101) && last_1_var_1_77) ? ((! ((last_1_var_1_67 / 16) >= last_1_var_1_20)) ? (var_1_99 == ((signed long int) var_1_44)) : (var_1_99 == ((signed long int) ((abs (abs (var_1_58))) - (min (32 , var_1_76)))))) : 1)))) && ((var_1_91 <= var_1_52) ? (var_1_101 == ((unsigned char) var_1_78)) : (var_1_101 == ((unsigned char) var_1_23)))) && (var_1_102 == ((float) var_1_12))) && (var_1_82 ? (var_1_103 == ((float) var_1_12)) : (var_1_103 == ((float) var_1_33)))) && (var_1_104 == ((signed short int) var_1_42))) && (var_1_21 ? (var_1_105 == ((unsigned char) var_1_25)) : (var_1_105 == ((unsigned char) var_1_57)))) && (var_1_106 == ((signed long int) last_1_var_1_106))) && (var_1_107 == ((signed char) var_1_36))) && (var_1_21 ? (var_1_108 == ((double) var_1_33)) : (var_1_108 == ((double) var_1_13)))) && (var_1_109 == ((float) var_1_14))) && (var_1_110 == ((unsigned char) var_1_57))) && (var_1_98 ? (var_1_111 == ((unsigned char) 16)) : 1)) && (var_1_101 ? (var_1_112 == ((signed short int) var_1_83)) : (var_1_112 == ((signed short int) var_1_104)))) && (((var_1_13 - 2.5) >= var_1_22) ? (var_1_113 == ((unsigned short int) ((abs (var_1_55)) - var_1_84))) : 1)) && (((var_1_57 + var_1_66) == (last_1_var_1_114 * var_1_106)) ? (var_1_114 == ((unsigned long int) var_1_45)) : (var_1_98 ? ((var_1_11 >= (var_1_32 / var_1_13)) ? (var_1_114 == ((unsigned long int) var_1_6)) : (var_1_114 == ((unsigned long int) var_1_115))) : (var_1_114 == ((unsigned long int) var_1_63))))
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
