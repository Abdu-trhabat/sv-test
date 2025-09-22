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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11100_while.c", 13, "reach_error"); }
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
double var_1_1 = 4.75;
signed long int var_1_6 = -10000;
signed long int var_1_7 = 64;
signed long int var_1_8 = 128;
signed long int var_1_9 = -25;
double var_1_10 = 0.55;
double var_1_11 = 255.4;
double var_1_12 = 15.5;
unsigned short int var_1_13 = 128;
unsigned short int var_1_14 = 4;
signed short int var_1_16 = 4;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = -50;
signed char var_1_23 = 2;
signed char var_1_24 = 0;
signed char var_1_25 = 2;
signed char var_1_26 = -1;
signed char var_1_27 = 0;
signed char var_1_28 = -32;
unsigned short int var_1_29 = 64;
unsigned short int var_1_30 = 39391;
unsigned short int var_1_31 = 0;
unsigned short int var_1_32 = 4;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 1;
signed short int var_1_36 = 5;
signed long int var_1_37 = 1178006001;
unsigned char var_1_38 = 1;
signed char var_1_39 = 4;
signed char var_1_40 = 0;
signed char var_1_41 = 8;
unsigned long int var_1_42 = 32;
unsigned long int var_1_43 = 3367964265;
signed short int var_1_44 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_29 = 64;
unsigned char last_1_var_1_38 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch11100_while
	unsigned short int stepLocal_1 = var_1_14;
	if (last_1_var_1_38) {
		if (last_1_var_1_38) {
			var_1_18 = var_1_19;
		} else {
			var_1_18 = (! (var_1_19 || var_1_20));
		}
	} else {
		if ((1 * var_1_8) < stepLocal_1) {
			var_1_18 = var_1_21;
		} else {
			var_1_18 = var_1_20;
		}
	}


	// From: Req5Batch11100_while
	var_1_22 = (min ((var_1_23 + (var_1_24 - var_1_25)) , (var_1_26 + (max (var_1_27 , var_1_28)))));


	// From: Req6Batch11100_while
	if (last_1_var_1_29 > var_1_7) {
		var_1_29 = (min ((var_1_30 - (var_1_24 + var_1_31)) , (abs (var_1_32))));
	} else {
		var_1_29 = var_1_24;
	}


	// From: Req8Batch11100_while
	if (var_1_28 >= -2) {
		var_1_35 = var_1_34;
	}


	// From: Req12Batch11100_while
	var_1_42 = (var_1_43 - (var_1_41 + (abs (var_1_14))));


	// From: Req10Batch11100_while
	unsigned short int stepLocal_6 = var_1_29;
	unsigned short int stepLocal_5 = var_1_30;
	signed long int stepLocal_4 = var_1_6;
	if (var_1_34 > stepLocal_4) {
		var_1_38 = ((var_1_42 >= (var_1_25 << 1)) || var_1_20);
	} else {
		if (var_1_20) {
			if (var_1_29 >= stepLocal_5) {
				if ((var_1_14 - 10) <= stepLocal_6) {
					if (var_1_18) {
						var_1_38 = var_1_19;
					}
				} else {
					var_1_38 = var_1_21;
				}
			} else {
				var_1_38 = var_1_21;
			}
		} else {
			var_1_38 = var_1_19;
		}
	}


	// From: Req7Batch11100_while
	unsigned char stepLocal_2 = var_1_19 || var_1_38;
	if ((var_1_25 >= (max (var_1_14 , var_1_24))) || stepLocal_2) {
		var_1_33 = (max (var_1_24 , (var_1_34 - var_1_25)));
	} else {
		var_1_33 = (var_1_34 - var_1_25);
	}


	// From: Req9Batch11100_while
	signed long int stepLocal_3 = - (var_1_30 - var_1_14);
	if (stepLocal_3 >= ((var_1_37 - var_1_34) - var_1_31)) {
		var_1_36 = var_1_33;
	} else {
		var_1_36 = var_1_42;
	}


	// From: Req13Batch11100_while
	var_1_44 = var_1_33;


	// From: Req1Batch11100_while
	unsigned long int stepLocal_0 = (var_1_36 + var_1_35) | var_1_42;
	if (stepLocal_0 < ((var_1_7 - var_1_8) / (min (128 , var_1_9)))) {
		var_1_1 = ((var_1_10 + var_1_11) + var_1_12);
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch11100_while
	if (var_1_18) {
		if (var_1_1 == var_1_11) {
			var_1_13 = (44770 - var_1_14);
		} else {
			if (var_1_11 <= var_1_1) {
				var_1_13 = var_1_14;
			}
		}
	} else {
		var_1_13 = var_1_14;
	}


	// From: Req3Batch11100_while
	if (var_1_38) {
		if (! (var_1_1 >= 63.9)) {
			if (var_1_38) {
				var_1_16 = var_1_44;
			}
		}
	}


	// From: Req11Batch11100_while
	if (var_1_16 <= var_1_36) {
		var_1_39 = ((var_1_25 - (var_1_40 + var_1_41)) + var_1_28);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -63);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 32767);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 32);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_29 = var_1_29;
	last_1_var_1_38 = var_1_38;
}

int property(void) {
	return (((((((((((((((var_1_36 + var_1_35) | var_1_42) < ((var_1_7 - var_1_8) / (min (128 , var_1_9)))) ? (var_1_1 == ((double) ((var_1_10 + var_1_11) + var_1_12))) : (var_1_1 == ((double) var_1_10))) && (var_1_18 ? ((var_1_1 == var_1_11) ? (var_1_13 == ((unsigned short int) (44770 - var_1_14))) : ((var_1_11 <= var_1_1) ? (var_1_13 == ((unsigned short int) var_1_14)) : 1)) : (var_1_13 == ((unsigned short int) var_1_14)))) && (var_1_38 ? ((! (var_1_1 >= 63.9)) ? (var_1_38 ? (var_1_16 == ((signed short int) var_1_44)) : 1) : 1) : 1)) && (last_1_var_1_38 ? (last_1_var_1_38 ? (var_1_18 == ((unsigned char) var_1_19)) : (var_1_18 == ((unsigned char) (! (var_1_19 || var_1_20))))) : (((1 * var_1_8) < var_1_14) ? (var_1_18 == ((unsigned char) var_1_21)) : (var_1_18 == ((unsigned char) var_1_20))))) && (var_1_22 == ((signed char) (min ((var_1_23 + (var_1_24 - var_1_25)) , (var_1_26 + (max (var_1_27 , var_1_28)))))))) && ((last_1_var_1_29 > var_1_7) ? (var_1_29 == ((unsigned short int) (min ((var_1_30 - (var_1_24 + var_1_31)) , (abs (var_1_32)))))) : (var_1_29 == ((unsigned short int) var_1_24)))) && (((var_1_25 >= (max (var_1_14 , var_1_24))) || (var_1_19 || var_1_38)) ? (var_1_33 == ((unsigned char) (max (var_1_24 , (var_1_34 - var_1_25))))) : (var_1_33 == ((unsigned char) (var_1_34 - var_1_25))))) && ((var_1_28 >= -2) ? (var_1_35 == ((unsigned char) var_1_34)) : 1)) && (((- (var_1_30 - var_1_14)) >= ((var_1_37 - var_1_34) - var_1_31)) ? (var_1_36 == ((signed short int) var_1_33)) : (var_1_36 == ((signed short int) var_1_42)))) && ((var_1_34 > var_1_6) ? (var_1_38 == ((unsigned char) ((var_1_42 >= (var_1_25 << 1)) || var_1_20))) : (var_1_20 ? ((var_1_29 >= var_1_30) ? (((var_1_14 - 10) <= var_1_29) ? (var_1_18 ? (var_1_38 == ((unsigned char) var_1_19)) : 1) : (var_1_38 == ((unsigned char) var_1_21))) : (var_1_38 == ((unsigned char) var_1_21))) : (var_1_38 == ((unsigned char) var_1_19))))) && ((var_1_16 <= var_1_36) ? (var_1_39 == ((signed char) ((var_1_25 - (var_1_40 + var_1_41)) + var_1_28))) : 1)) && (var_1_42 == ((unsigned long int) (var_1_43 - (var_1_41 + (abs (var_1_14))))))) && (var_1_44 == ((signed short int) var_1_33))
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
