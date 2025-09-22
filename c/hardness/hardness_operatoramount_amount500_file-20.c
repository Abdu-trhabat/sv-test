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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch20Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 4;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 0;
unsigned short int var_1_8 = 21062;
signed long int var_1_9 = -4;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 2706779013;
unsigned long int var_1_12 = 256;
float var_1_13 = 25.1;
float var_1_15 = 9.25;
float var_1_16 = 0.8;
float var_1_17 = 9.75;
signed long int var_1_18 = 10;
signed long int var_1_19 = 2050467977;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 63087;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 10000;
unsigned short int var_1_24 = 50;
unsigned long int var_1_25 = 25;
unsigned char var_1_26 = 2;
unsigned long int var_1_27 = 3474534728;
signed long int var_1_28 = -10000000;
signed char var_1_30 = -32;
double var_1_31 = 256.25;
unsigned short int var_1_32 = 61813;
double var_1_33 = 128.5;
double var_1_34 = 32.8;
double var_1_35 = 127.5;
double var_1_36 = 64.7;
double var_1_37 = 32.75;
double var_1_38 = 64.5;
signed long int var_1_39 = 1;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 50;
float var_1_43 = 4.375;
unsigned char var_1_44 = 1;
float var_1_45 = 1000000.2;
float var_1_46 = 0.0;
float var_1_47 = 0.0;
signed short int var_1_48 = -2;
signed short int var_1_49 = 23705;
signed short int var_1_50 = 22688;
unsigned long int var_1_51 = 25;
signed long int var_1_52 = -4;
double var_1_53 = 1.4;
double var_1_54 = 32.75;
float var_1_55 = 4.25;
float var_1_56 = 0.0;
float var_1_57 = 256.25;
float var_1_59 = 255.8;
unsigned short int var_1_60 = 2;
unsigned short int var_1_61 = 8;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned long int var_1_67 = 8;
signed long int var_1_68 = 256;
unsigned short int var_1_69 = 8;
signed short int var_1_70 = 25;
unsigned char var_1_71 = 4;
unsigned char var_1_73 = 128;
unsigned char var_1_74 = 16;
unsigned short int var_1_75 = 8;
unsigned short int var_1_77 = 4;
unsigned short int var_1_78 = 8;
unsigned short int var_1_79 = 256;
double var_1_80 = 5.5;
float var_1_82 = -0.95;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 16;
signed long int var_1_85 = -4;
signed long int var_1_86 = 256;
unsigned char var_1_87 = 1;
unsigned char var_1_88 = 0;
signed long int var_1_89 = 0;
signed short int var_1_90 = -128;
signed short int var_1_91 = -1;
signed long int var_1_92 = 8;
signed char var_1_93 = 0;
signed char var_1_94 = -1;
unsigned long int var_1_95 = 4;
unsigned long int var_1_96 = 32;
unsigned short int var_1_97 = 5;
unsigned long int var_1_98 = 8;
unsigned char var_1_99 = 16;
unsigned long int var_1_100 = 4;
unsigned short int var_1_101 = 256;
double var_1_102 = 100000000000.625;
double var_1_103 = 1000000000.2;
float var_1_104 = 8.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 0;
signed long int last_1_var_1_9 = -4;
unsigned short int last_1_var_1_20 = 1;
unsigned short int last_1_var_1_22 = 64;
unsigned long int last_1_var_1_25 = 25;
double last_1_var_1_31 = 256.25;
signed long int last_1_var_1_39 = 1;
unsigned long int last_1_var_1_51 = 25;
signed long int last_1_var_1_52 = -4;
double last_1_var_1_53 = 1.4;
float last_1_var_1_55 = 4.25;
unsigned short int last_1_var_1_60 = 2;
unsigned char last_1_var_1_62 = 0;
unsigned char last_1_var_1_64 = 0;
signed long int last_1_var_1_68 = 256;
unsigned short int last_1_var_1_69 = 8;
signed short int last_1_var_1_70 = 25;
unsigned char last_1_var_1_71 = 4;
unsigned short int last_1_var_1_75 = 8;
signed long int last_1_var_1_85 = -4;
unsigned char last_1_var_1_87 = 1;
signed long int last_1_var_1_89 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch20Amount500
	if (! last_1_var_1_87) {
		var_1_39 = (min ((min (var_1_6 , var_1_23)) , (last_1_var_1_89 - (last_1_var_1_7 + last_1_var_1_68))));
	}


	// From: Req10Batch20Amount500
	unsigned long int stepLocal_8 = var_1_12 % (min (var_1_5 , var_1_8));
	if (stepLocal_8 <= (max (var_1_23 , 16u))) {
		var_1_28 = (last_1_var_1_68 + (var_1_5 - last_1_var_1_71));
	} else {
		if (9.9999999995E9f <= (- last_1_var_1_53)) {
			var_1_28 = (last_1_var_1_39 + var_1_21);
		}
	}


	// From: Req27Batch20Amount500
	if ((max (var_1_50 , var_1_23)) >= var_1_5) {
		var_1_69 = (var_1_21 - var_1_28);
	} else {
		var_1_69 = (var_1_21 - (18783 - var_1_6));
	}


	// From: Req9Batch20Amount500
	if (last_1_var_1_64 || (last_1_var_1_9 == (last_1_var_1_68 >> var_1_26))) {
		if (last_1_var_1_62) {
			if (last_1_var_1_25 <= var_1_12) {
				var_1_25 = ((var_1_27 - last_1_var_1_68) - last_1_var_1_69);
			} else {
				var_1_25 = (var_1_27 - last_1_var_1_85);
			}
		} else {
			if (last_1_var_1_64) {
				var_1_25 = var_1_19;
			}
		}
	} else {
		var_1_25 = var_1_19;
	}


	// From: Req26Batch20Amount500
	if (last_1_var_1_31 <= (last_1_var_1_55 * (var_1_59 - var_1_47))) {
		var_1_68 = (min (((var_1_19 - last_1_var_1_60) - last_1_var_1_52) , ((var_1_6 + var_1_42) + var_1_21)));
	} else {
		var_1_68 = (abs (last_1_var_1_51));
	}


	// From: Req23Batch20Amount500
	if ((max (var_1_50 , (last_1_var_1_68 + var_1_19))) < var_1_41) {
		var_1_62 = ((var_1_54 <= var_1_45) || var_1_44);
	} else {
		if ((max ((var_1_26 - var_1_6) , var_1_32)) > last_1_var_1_75) {
			var_1_62 = (! var_1_63);
		}
	}


	// From: Req48Batch20Amount500
	if (var_1_62) {
		var_1_99 = var_1_73;
	}


	// From: Req4Batch20Amount500
	var_1_10 = (var_1_11 - var_1_12);


	// From: Req12Batch20Amount500
	if (var_1_21 < (var_1_32 - (min (var_1_23 , var_1_5)))) {
		var_1_31 = (var_1_33 - var_1_16);
	} else {
		var_1_31 = (var_1_34 + var_1_35);
	}


	// From: Req13Batch20Amount500
	var_1_36 = ((max (var_1_33 , (var_1_37 + var_1_38))) - var_1_17);


	// From: Req25Batch20Amount500
	if (var_1_44) {
		var_1_67 = (var_1_11 - var_1_6);
	} else {
		var_1_67 = ((var_1_19 + 1653333096u) - var_1_24);
	}


	// From: Req32Batch20Amount500
	if (var_1_63) {
		var_1_77 = (var_1_21 - var_1_49);
	} else {
		var_1_77 = (((abs (var_1_68)) + var_1_26) + 32);
	}


	// From: Req34Batch20Amount500
	if (! var_1_62) {
		var_1_80 = ((var_1_47 - (min (var_1_57 , var_1_56))) - (min ((24.2 + 1.000000000000025E13) , var_1_16)));
	} else {
		if (! (! var_1_62)) {
			var_1_80 = (min (var_1_37 , var_1_45));
		} else {
			var_1_80 = (var_1_56 - 63.5);
		}
	}


	// From: Req36Batch20Amount500
	if (var_1_25 < var_1_12) {
		var_1_83 = (abs (var_1_84 + (var_1_5 - 10)));
	} else {
		var_1_83 = (var_1_42 + (max (var_1_5 , (min (var_1_84 , 2)))));
	}


	// From: Req41Batch20Amount500
	if (var_1_66) {
		var_1_91 = var_1_50;
	} else {
		var_1_91 = 2;
	}


	// From: Req43Batch20Amount500
	if (var_1_44) {
		var_1_93 = var_1_41;
	}


	// From: Req46Batch20Amount500
	var_1_97 = var_1_73;


	// From: Req50Batch20Amount500
	if (var_1_66) {
		var_1_101 = var_1_42;
	}


	// From: Req51Batch20Amount500
	if (var_1_63) {
		var_1_102 = var_1_46;
	} else {
		var_1_102 = var_1_47;
	}


	// From: Req53Batch20Amount500
	unsigned char stepLocal_18 = -200 == (var_1_5 * var_1_50);
	if (stepLocal_18 && var_1_88) {
		var_1_104 = var_1_59;
	}


	// From: Req20Batch20Amount500
	unsigned char stepLocal_11 = var_1_62;
	if (stepLocal_11 && (8u > var_1_25)) {
		var_1_53 = (abs ((min (var_1_54 , var_1_38)) + 63.9));
	}


	// From: Req19Batch20Amount500
	unsigned char stepLocal_10 = var_1_6;
	if (var_1_102 == (var_1_34 + var_1_45)) {
		var_1_52 = -1000;
	} else {
		if (var_1_23 != stepLocal_10) {
			var_1_52 = (max (((-4 + var_1_99) + var_1_49) , (min (var_1_21 , var_1_32))));
		}
	}


	// From: Req45Batch20Amount500
	if (var_1_62) {
		var_1_95 = var_1_10;
	} else {
		var_1_95 = var_1_96;
	}


	// From: Req38Batch20Amount500
	if (var_1_50 != var_1_91) {
		var_1_87 = (! (! var_1_63));
	} else {
		var_1_87 = ((var_1_66 || var_1_65) || (var_1_63 || var_1_88));
	}


	// From: Req42Batch20Amount500
	if (var_1_87) {
		var_1_92 = var_1_32;
	}


	// From: Req44Batch20Amount500
	if (var_1_87) {
		var_1_94 = var_1_42;
	} else {
		var_1_94 = var_1_26;
	}


	// From: Req47Batch20Amount500
	if (var_1_87) {
		var_1_98 = var_1_6;
	} else {
		var_1_98 = var_1_77;
	}


	// From: Req18Batch20Amount500
	if (((min (var_1_92 , var_1_6)) / var_1_26) <= var_1_23) {
		var_1_51 = ((max (var_1_11 , var_1_27)) - (var_1_19 - var_1_68));
	} else {
		var_1_51 = (max (var_1_8 , ((max (var_1_27 , 2971477556u)) - (var_1_19 - var_1_68))));
	}


	// From: Req24Batch20Amount500
	unsigned long int stepLocal_13 = var_1_10;
	if (stepLocal_13 == (- (var_1_41 / var_1_5))) {
		var_1_64 = ((var_1_62 && var_1_63) || ((var_1_87 && var_1_65) || var_1_66));
	}


	// From: Req31Batch20Amount500
	unsigned char stepLocal_15 = var_1_99;
	if (var_1_5 > stepLocal_15) {
		var_1_75 = (max ((var_1_21 - var_1_95) , var_1_95));
	}


	// From: Req49Batch20Amount500
	if (var_1_64) {
		var_1_100 = var_1_73;
	} else {
		var_1_100 = var_1_8;
	}


	// From: Req22Batch20Amount500
	unsigned char stepLocal_12 = var_1_44;
	if (var_1_64 || stepLocal_12) {
		var_1_60 = (var_1_61 + var_1_8);
	} else {
		var_1_60 = (min (var_1_41 , (var_1_21 - var_1_6)));
	}


	// From: Req5Batch20Amount500
	unsigned long int stepLocal_4 = var_1_92 ^ var_1_95;
	if (var_1_6 >= stepLocal_4) {
		var_1_13 = (max (var_1_15 , (var_1_16 - var_1_17)));
	}


	// From: Req8Batch20Amount500
	if (var_1_87) {
		var_1_22 = ((var_1_8 - (var_1_23 - var_1_6)) + (max (128 , var_1_24)));
	} else {
		var_1_22 = (min ((max (var_1_6 , var_1_97)) , ((57988 - last_1_var_1_22) - var_1_5)));
	}


	// From: Req11Batch20Amount500
	if (var_1_64) {
		if (var_1_87) {
			var_1_30 = ((min ((2 + var_1_26) , 10)) - var_1_6);
		}
	}


	// From: Req15Batch20Amount500
	unsigned long int stepLocal_9 = var_1_25 * var_1_52;
	if (var_1_62) {
		if (! var_1_87) {
			var_1_40 = ((var_1_41 - (var_1_42 - 5)) - var_1_26);
		} else {
			if (var_1_87) {
				var_1_40 = var_1_26;
			} else {
				var_1_40 = (var_1_41 - var_1_5);
			}
		}
	} else {
		if (var_1_23 >= stepLocal_9) {
			var_1_40 = (min ((min ((var_1_6 + var_1_26) , var_1_5)) , var_1_42));
		} else {
			var_1_40 = var_1_26;
		}
	}


	// From: Req16Batch20Amount500
	if ((var_1_38 - var_1_37) <= (- var_1_102)) {
		if ((var_1_27 / var_1_26) <= (var_1_51 / var_1_5)) {
			var_1_43 = (min (10.875f , var_1_45));
		} else {
			var_1_43 = ((var_1_46 - (max (var_1_38 , var_1_37))) - (min (var_1_16 , (var_1_47 - 1.6f))));
		}
	} else {
		var_1_43 = ((var_1_38 - var_1_37) + var_1_34);
	}


	// From: Req33Batch20Amount500
	if (var_1_65) {
		var_1_78 = var_1_79;
	} else {
		var_1_78 = (max ((max (var_1_40 , 128)) , var_1_68));
	}


	// From: Req6Batch20Amount500
	unsigned long int stepLocal_5 = (3451179663u - var_1_6) * var_1_8;
	if (var_1_64) {
		if (var_1_51 != stepLocal_5) {
			var_1_18 = (var_1_28 - ((var_1_19 - var_1_68) - var_1_6));
		}
	} else {
		var_1_18 = (max (var_1_8 , (abs (var_1_28))));
	}


	// From: Req37Batch20Amount500
	if (var_1_49 < var_1_51) {
		var_1_85 = (var_1_18 + (var_1_23 - var_1_86));
	} else {
		var_1_85 = (min (var_1_49 , (var_1_73 + var_1_21)));
	}


	// From: Req52Batch20Amount500
	if ((abs (var_1_100)) >= (var_1_67 + var_1_85)) {
		var_1_103 = (var_1_37 + var_1_59);
	}


	// From: Req3Batch20Amount500
	unsigned long int stepLocal_3 = var_1_100;
	if (var_1_25 <= stepLocal_3) {
		var_1_9 = var_1_25;
	}


	// From: Req1Batch20Amount500
	unsigned char stepLocal_1 = var_1_62;
	signed long int stepLocal_0 = (64 + var_1_5) - (var_1_6 + 10);
	if (var_1_64 || stepLocal_1) {
		if (var_1_25 == stepLocal_0) {
			var_1_1 = var_1_25;
		}
	}


	// From: Req21Batch20Amount500
	if (var_1_44) {
		if ((var_1_75 < var_1_25) || var_1_64) {
			var_1_55 = (((var_1_56 - var_1_57) - var_1_37) + (max (var_1_54 , (abs (var_1_34)))));
		}
	} else {
		if (127.5 < (max ((- var_1_34) , var_1_53))) {
			var_1_55 = (abs (var_1_37));
		} else {
			if (var_1_47 >= var_1_102) {
				if ((var_1_87 || var_1_64) || ((- 32) >= (var_1_26 + var_1_50))) {
					if (var_1_87) {
						var_1_55 = (max (4.125f , (var_1_38 - (var_1_47 - var_1_56))));
					}
				}
			} else {
				if (var_1_64) {
					var_1_55 = ((var_1_37 - var_1_38) + ((var_1_56 - var_1_57) - var_1_59));
				} else {
					var_1_55 = (max ((abs (var_1_37 + var_1_56)) , (var_1_59 - var_1_46)));
				}
			}
		}
	}


	// From: Req17Batch20Amount500
	if (var_1_44 && var_1_87) {
		var_1_48 = ((var_1_49 - var_1_41) - (var_1_50 - var_1_1));
	} else {
		if (var_1_44) {
			var_1_48 = (max (var_1_50 , var_1_67));
		}
	}


	// From: Req28Batch20Amount500
	unsigned long int stepLocal_14 = var_1_10 * var_1_8;
	if (stepLocal_14 < var_1_19) {
		var_1_70 = (var_1_49 - var_1_23);
	} else {
		var_1_70 = (((last_1_var_1_70 - var_1_85) + var_1_26) + (max (var_1_41 , var_1_42)));
	}


	// From: Req30Batch20Amount500
	if (var_1_48 < (var_1_24 / var_1_41)) {
		var_1_74 = ((var_1_6 + var_1_42) + var_1_5);
	} else {
		if (var_1_64) {
			var_1_74 = (var_1_73 - var_1_26);
		} else {
			if (var_1_31 <= var_1_80) {
				var_1_74 = (var_1_26 + var_1_42);
			} else {
				var_1_74 = (max (((var_1_41 - var_1_26) - var_1_6) , var_1_73));
			}
		}
	}


	// From: Req35Batch20Amount500
	signed long int stepLocal_17 = - (var_1_32 - var_1_85);
	unsigned long int stepLocal_16 = var_1_12;
	if (var_1_28 < stepLocal_17) {
		var_1_82 = (var_1_59 - (var_1_57 + var_1_56));
	} else {
		if (var_1_67 > stepLocal_16) {
			var_1_82 = (abs (min ((max (4.8f , var_1_57)) , (var_1_59 + var_1_38))));
		} else {
			var_1_82 = (max (var_1_37 , var_1_38));
		}
	}


	// From: Req29Batch20Amount500
	if (((var_1_18 + var_1_32) | var_1_28) < 25) {
		if (var_1_87 || (var_1_38 >= var_1_103)) {
			if (var_1_87) {
				var_1_71 = ((max (var_1_41 , var_1_73)) - (max ((min (var_1_5 , var_1_6)) , var_1_42)));
			}
		}
	} else {
		if ((var_1_26 & 16) > (var_1_23 - var_1_41)) {
			var_1_71 = ((200 - var_1_26) - var_1_5);
		}
	}


	// From: Req7Batch20Amount500
	unsigned short int stepLocal_7 = var_1_60;
	signed long int stepLocal_6 = 4;
	if (stepLocal_7 < var_1_92) {
		var_1_20 = ((var_1_5 + (max (var_1_48 , var_1_6))) + 16);
	} else {
		if (var_1_87) {
			if (stepLocal_6 >= last_1_var_1_20) {
				var_1_20 = (abs (var_1_21 - (var_1_8 - 16)));
			} else {
				var_1_20 = (abs (var_1_6));
			}
		} else {
			var_1_20 = var_1_8;
		}
	}


	// From: Req40Batch20Amount500
	if ((min (var_1_57 , var_1_16)) != (abs (var_1_59))) {
		var_1_90 = (((min (var_1_5 , 4)) - (abs (var_1_75))) + -500);
	} else {
		var_1_90 = var_1_71;
	}


	// From: Req2Batch20Amount500
	unsigned char stepLocal_2 = var_1_71;
	if ((var_1_6 / var_1_5) > stepLocal_2) {
		var_1_7 = ((var_1_8 - var_1_5) + var_1_6);
	}


	// From: Req39Batch20Amount500
	if (var_1_87 && (var_1_73 < var_1_9)) {
		if (((min (var_1_75 , var_1_97)) % var_1_41) > var_1_1) {
			var_1_89 = (max (var_1_27 , (min (var_1_97 , (var_1_49 + var_1_95)))));
		} else {
			if ((var_1_100 < var_1_19) || ((var_1_52 * var_1_42) <= last_1_var_1_89)) {
				var_1_89 = ((abs (abs (var_1_42))) + var_1_79);
			}
		}
	} else {
		if (500 < (min ((32 - 2) , var_1_84))) {
			var_1_89 = (min (var_1_49 , var_1_95));
		} else {
			if (var_1_31 != (255.25 * var_1_104)) {
				if (var_1_7 >= var_1_84) {
					var_1_89 = var_1_39;
				} else {
					var_1_89 = (var_1_69 + (min (var_1_79 , var_1_95)));
				}
			} else {
				if (64 < var_1_86) {
					var_1_89 = var_1_84;
				} else {
					var_1_89 = (64 + var_1_50);
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 64);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1610612734);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 8191);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 7);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 3221225470);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65535);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 190);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 31);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 4611686.018427383000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 4611686.018427383000e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 16382);
	assume_abort_if_not(var_1_49 <= 32766);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 16383);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 2305843.009213691400e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 32767);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 127);
	assume_abort_if_not(var_1_73 <= 254);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 127);
	var_1_86 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 1073741823);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 0);
	var_1_96 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_89 = var_1_89;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_64 || var_1_62) ? ((var_1_25 == ((64 + var_1_5) - (var_1_6 + 10))) ? (var_1_1 == ((signed short int) var_1_25)) : 1) : 1) && (((var_1_6 / var_1_5) > var_1_71) ? (var_1_7 == ((unsigned short int) ((var_1_8 - var_1_5) + var_1_6))) : 1)) && ((var_1_25 <= var_1_100) ? (var_1_9 == ((signed long int) var_1_25)) : 1)) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_12)))) && ((var_1_6 >= (var_1_92 ^ var_1_95)) ? (var_1_13 == ((float) (max (var_1_15 , (var_1_16 - var_1_17))))) : 1)) && (var_1_64 ? ((var_1_51 != ((3451179663u - var_1_6) * var_1_8)) ? (var_1_18 == ((signed long int) (var_1_28 - ((var_1_19 - var_1_68) - var_1_6)))) : 1) : (var_1_18 == ((signed long int) (max (var_1_8 , (abs (var_1_28)))))))) && ((var_1_60 < var_1_92) ? (var_1_20 == ((unsigned short int) ((var_1_5 + (max (var_1_48 , var_1_6))) + 16))) : (var_1_87 ? ((4 >= last_1_var_1_20) ? (var_1_20 == ((unsigned short int) (abs (var_1_21 - (var_1_8 - 16))))) : (var_1_20 == ((unsigned short int) (abs (var_1_6))))) : (var_1_20 == ((unsigned short int) var_1_8))))) && (var_1_87 ? (var_1_22 == ((unsigned short int) ((var_1_8 - (var_1_23 - var_1_6)) + (max (128 , var_1_24))))) : (var_1_22 == ((unsigned short int) (min ((max (var_1_6 , var_1_97)) , ((57988 - last_1_var_1_22) - var_1_5))))))) && ((last_1_var_1_64 || (last_1_var_1_9 == (last_1_var_1_68 >> var_1_26))) ? (last_1_var_1_62 ? ((last_1_var_1_25 <= var_1_12) ? (var_1_25 == ((unsigned long int) ((var_1_27 - last_1_var_1_68) - last_1_var_1_69))) : (var_1_25 == ((unsigned long int) (var_1_27 - last_1_var_1_85)))) : (last_1_var_1_64 ? (var_1_25 == ((unsigned long int) var_1_19)) : 1)) : (var_1_25 == ((unsigned long int) var_1_19)))) && (((var_1_12 % (min (var_1_5 , var_1_8))) <= (max (var_1_23 , 16u))) ? (var_1_28 == ((signed long int) (last_1_var_1_68 + (var_1_5 - last_1_var_1_71)))) : ((9.9999999995E9f <= (- last_1_var_1_53)) ? (var_1_28 == ((signed long int) (last_1_var_1_39 + var_1_21))) : 1))) && (var_1_64 ? (var_1_87 ? (var_1_30 == ((signed char) ((min ((2 + var_1_26) , 10)) - var_1_6))) : 1) : 1)) && ((var_1_21 < (var_1_32 - (min (var_1_23 , var_1_5)))) ? (var_1_31 == ((double) (var_1_33 - var_1_16))) : (var_1_31 == ((double) (var_1_34 + var_1_35))))) && (var_1_36 == ((double) ((max (var_1_33 , (var_1_37 + var_1_38))) - var_1_17)))) && ((! last_1_var_1_87) ? (var_1_39 == ((signed long int) (min ((min (var_1_6 , var_1_23)) , (last_1_var_1_89 - (last_1_var_1_7 + last_1_var_1_68)))))) : 1)) && (var_1_62 ? ((! var_1_87) ? (var_1_40 == ((unsigned char) ((var_1_41 - (var_1_42 - 5)) - var_1_26))) : (var_1_87 ? (var_1_40 == ((unsigned char) var_1_26)) : (var_1_40 == ((unsigned char) (var_1_41 - var_1_5))))) : ((var_1_23 >= (var_1_25 * var_1_52)) ? (var_1_40 == ((unsigned char) (min ((min ((var_1_6 + var_1_26) , var_1_5)) , var_1_42)))) : (var_1_40 == ((unsigned char) var_1_26))))) && (((var_1_38 - var_1_37) <= (- var_1_102)) ? (((var_1_27 / var_1_26) <= (var_1_51 / var_1_5)) ? (var_1_43 == ((float) (min (10.875f , var_1_45)))) : (var_1_43 == ((float) ((var_1_46 - (max (var_1_38 , var_1_37))) - (min (var_1_16 , (var_1_47 - 1.6f))))))) : (var_1_43 == ((float) ((var_1_38 - var_1_37) + var_1_34))))) && ((var_1_44 && var_1_87) ? (var_1_48 == ((signed short int) ((var_1_49 - var_1_41) - (var_1_50 - var_1_1)))) : (var_1_44 ? (var_1_48 == ((signed short int) (max (var_1_50 , var_1_67)))) : 1))) && ((((min (var_1_92 , var_1_6)) / var_1_26) <= var_1_23) ? (var_1_51 == ((unsigned long int) ((max (var_1_11 , var_1_27)) - (var_1_19 - var_1_68)))) : (var_1_51 == ((unsigned long int) (max (var_1_8 , ((max (var_1_27 , 2971477556u)) - (var_1_19 - var_1_68)))))))) && ((var_1_102 == (var_1_34 + var_1_45)) ? (var_1_52 == ((signed long int) -1000)) : ((var_1_23 != var_1_6) ? (var_1_52 == ((signed long int) (max (((-4 + var_1_99) + var_1_49) , (min (var_1_21 , var_1_32)))))) : 1))) && ((var_1_62 && (8u > var_1_25)) ? (var_1_53 == ((double) (abs ((min (var_1_54 , var_1_38)) + 63.9)))) : 1)) && (var_1_44 ? (((var_1_75 < var_1_25) || var_1_64) ? (var_1_55 == ((float) (((var_1_56 - var_1_57) - var_1_37) + (max (var_1_54 , (abs (var_1_34))))))) : 1) : ((127.5 < (max ((- var_1_34) , var_1_53))) ? (var_1_55 == ((float) (abs (var_1_37)))) : ((var_1_47 >= var_1_102) ? (((var_1_87 || var_1_64) || ((- 32) >= (var_1_26 + var_1_50))) ? (var_1_87 ? (var_1_55 == ((float) (max (4.125f , (var_1_38 - (var_1_47 - var_1_56)))))) : 1) : 1) : (var_1_64 ? (var_1_55 == ((float) ((var_1_37 - var_1_38) + ((var_1_56 - var_1_57) - var_1_59)))) : (var_1_55 == ((float) (max ((abs (var_1_37 + var_1_56)) , (var_1_59 - var_1_46)))))))))) && ((var_1_64 || var_1_44) ? (var_1_60 == ((unsigned short int) (var_1_61 + var_1_8))) : (var_1_60 == ((unsigned short int) (min (var_1_41 , (var_1_21 - var_1_6))))))) && (((max (var_1_50 , (last_1_var_1_68 + var_1_19))) < var_1_41) ? (var_1_62 == ((unsigned char) ((var_1_54 <= var_1_45) || var_1_44))) : (((max ((var_1_26 - var_1_6) , var_1_32)) > last_1_var_1_75) ? (var_1_62 == ((unsigned char) (! var_1_63))) : 1))) && ((var_1_10 == (- (var_1_41 / var_1_5))) ? (var_1_64 == ((unsigned char) ((var_1_62 && var_1_63) || ((var_1_87 && var_1_65) || var_1_66)))) : 1)) && (var_1_44 ? (var_1_67 == ((unsigned long int) (var_1_11 - var_1_6))) : (var_1_67 == ((unsigned long int) ((var_1_19 + 1653333096u) - var_1_24))))) && ((last_1_var_1_31 <= (last_1_var_1_55 * (var_1_59 - var_1_47))) ? (var_1_68 == ((signed long int) (min (((var_1_19 - last_1_var_1_60) - last_1_var_1_52) , ((var_1_6 + var_1_42) + var_1_21))))) : (var_1_68 == ((signed long int) (abs (last_1_var_1_51)))))) && (((max (var_1_50 , var_1_23)) >= var_1_5) ? (var_1_69 == ((unsigned short int) (var_1_21 - var_1_28))) : (var_1_69 == ((unsigned short int) (var_1_21 - (18783 - var_1_6)))))) && (((var_1_10 * var_1_8) < var_1_19) ? (var_1_70 == ((signed short int) (var_1_49 - var_1_23))) : (var_1_70 == ((signed short int) (((last_1_var_1_70 - var_1_85) + var_1_26) + (max (var_1_41 , var_1_42))))))) && ((((var_1_18 + var_1_32) | var_1_28) < 25) ? ((var_1_87 || (var_1_38 >= var_1_103)) ? (var_1_87 ? (var_1_71 == ((unsigned char) ((max (var_1_41 , var_1_73)) - (max ((min (var_1_5 , var_1_6)) , var_1_42))))) : 1) : 1) : (((var_1_26 & 16) > (var_1_23 - var_1_41)) ? (var_1_71 == ((unsigned char) ((200 - var_1_26) - var_1_5))) : 1))) && ((var_1_48 < (var_1_24 / var_1_41)) ? (var_1_74 == ((unsigned char) ((var_1_6 + var_1_42) + var_1_5))) : (var_1_64 ? (var_1_74 == ((unsigned char) (var_1_73 - var_1_26))) : ((var_1_31 <= var_1_80) ? (var_1_74 == ((unsigned char) (var_1_26 + var_1_42))) : (var_1_74 == ((unsigned char) (max (((var_1_41 - var_1_26) - var_1_6) , var_1_73)))))))) && ((var_1_5 > var_1_99) ? (var_1_75 == ((unsigned short int) (max ((var_1_21 - var_1_95) , var_1_95)))) : 1)) && (var_1_63 ? (var_1_77 == ((unsigned short int) (var_1_21 - var_1_49))) : (var_1_77 == ((unsigned short int) (((abs (var_1_68)) + var_1_26) + 32))))) && (var_1_65 ? (var_1_78 == ((unsigned short int) var_1_79)) : (var_1_78 == ((unsigned short int) (max ((max (var_1_40 , 128)) , var_1_68)))))) && ((! var_1_62) ? (var_1_80 == ((double) ((var_1_47 - (min (var_1_57 , var_1_56))) - (min ((24.2 + 1.000000000000025E13) , var_1_16))))) : ((! (! var_1_62)) ? (var_1_80 == ((double) (min (var_1_37 , var_1_45)))) : (var_1_80 == ((double) (var_1_56 - 63.5)))))) && ((var_1_28 < (- (var_1_32 - var_1_85))) ? (var_1_82 == ((float) (var_1_59 - (var_1_57 + var_1_56)))) : ((var_1_67 > var_1_12) ? (var_1_82 == ((float) (abs (min ((max (4.8f , var_1_57)) , (var_1_59 + var_1_38)))))) : (var_1_82 == ((float) (max (var_1_37 , var_1_38))))))) && ((var_1_25 < var_1_12) ? (var_1_83 == ((unsigned char) (abs (var_1_84 + (var_1_5 - 10))))) : (var_1_83 == ((unsigned char) (var_1_42 + (max (var_1_5 , (min (var_1_84 , 2))))))))) && ((var_1_49 < var_1_51) ? (var_1_85 == ((signed long int) (var_1_18 + (var_1_23 - var_1_86)))) : (var_1_85 == ((signed long int) (min (var_1_49 , (var_1_73 + var_1_21))))))) && ((var_1_50 != var_1_91) ? (var_1_87 == ((unsigned char) (! (! var_1_63)))) : (var_1_87 == ((unsigned char) ((var_1_66 || var_1_65) || (var_1_63 || var_1_88)))))) && ((var_1_87 && (var_1_73 < var_1_9)) ? ((((min (var_1_75 , var_1_97)) % var_1_41) > var_1_1) ? (var_1_89 == ((signed long int) (max (var_1_27 , (min (var_1_97 , (var_1_49 + var_1_95))))))) : (((var_1_100 < var_1_19) || ((var_1_52 * var_1_42) <= last_1_var_1_89)) ? (var_1_89 == ((signed long int) ((abs (abs (var_1_42))) + var_1_79))) : 1)) : ((500 < (min ((32 - 2) , var_1_84))) ? (var_1_89 == ((signed long int) (min (var_1_49 , var_1_95)))) : ((var_1_31 != (255.25 * var_1_104)) ? ((var_1_7 >= var_1_84) ? (var_1_89 == ((signed long int) var_1_39)) : (var_1_89 == ((signed long int) (var_1_69 + (min (var_1_79 , var_1_95)))))) : ((64 < var_1_86) ? (var_1_89 == ((signed long int) var_1_84)) : (var_1_89 == ((signed long int) (64 + var_1_50)))))))) && (((min (var_1_57 , var_1_16)) != (abs (var_1_59))) ? (var_1_90 == ((signed short int) (((min (var_1_5 , 4)) - (abs (var_1_75))) + -500))) : (var_1_90 == ((signed short int) var_1_71)))) && (var_1_66 ? (var_1_91 == ((signed short int) var_1_50)) : (var_1_91 == ((signed short int) 2)))) && (var_1_87 ? (var_1_92 == ((signed long int) var_1_32)) : 1)) && (var_1_44 ? (var_1_93 == ((signed char) var_1_41)) : 1)) && (var_1_87 ? (var_1_94 == ((signed char) var_1_42)) : (var_1_94 == ((signed char) var_1_26)))) && (var_1_62 ? (var_1_95 == ((unsigned long int) var_1_10)) : (var_1_95 == ((unsigned long int) var_1_96)))) && (var_1_97 == ((unsigned short int) var_1_73))) && (var_1_87 ? (var_1_98 == ((unsigned long int) var_1_6)) : (var_1_98 == ((unsigned long int) var_1_77)))) && (var_1_62 ? (var_1_99 == ((unsigned char) var_1_73)) : 1)) && (var_1_64 ? (var_1_100 == ((unsigned long int) var_1_73)) : (var_1_100 == ((unsigned long int) var_1_8)))) && (var_1_66 ? (var_1_101 == ((unsigned short int) var_1_42)) : 1)) && (var_1_63 ? (var_1_102 == ((double) var_1_46)) : (var_1_102 == ((double) var_1_47)))) && (((abs (var_1_100)) >= (var_1_67 + var_1_85)) ? (var_1_103 == ((double) (var_1_37 + var_1_59))) : 1)) && (((-200 == (var_1_5 * var_1_50)) && var_1_88) ? (var_1_104 == ((float) var_1_59)) : 1)
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
