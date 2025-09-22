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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Amount100.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 100;
unsigned short int var_1_4 = 100;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 4;
unsigned short int var_1_8 = 256;
double var_1_9 = 24.2;
double var_1_10 = 100000000000000.2;
double var_1_11 = 0.5;
double var_1_12 = -0.71;
double var_1_14 = 99.625;
unsigned long int var_1_15 = 128;
unsigned char var_1_16 = 1;
unsigned long int var_1_18 = 8;
signed char var_1_19 = -2;
signed char var_1_20 = 8;
signed char var_1_21 = 10;
signed char var_1_22 = 32;
signed char var_1_23 = 2;
signed char var_1_24 = 10;
float var_1_25 = 63.7;
signed short int var_1_26 = -16;
unsigned short int var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 4165229373;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 100;
unsigned short int last_1_var_1_27 = 1;
unsigned char last_1_var_1_28 = 1;
unsigned char last_1_var_1_32 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch179Amount100
	unsigned short int stepLocal_7 = var_1_5;
	if (stepLocal_7 <= last_1_var_1_1) {
		var_1_27 = ((min (var_1_21 , var_1_22)) + var_1_8);
	} else {
		var_1_27 = var_1_7;
	}


	// From: Req3Batch179Amount100
	signed long int stepLocal_5 = last_1_var_1_27;
	unsigned char stepLocal_4 = var_1_16;
	unsigned short int stepLocal_3 = var_1_6;
	if (var_1_8 <= stepLocal_5) {
		if ((max ((last_1_var_1_27 % var_1_16) , var_1_4)) >= stepLocal_3) {
			if (last_1_var_1_32) {
				if (stepLocal_4 > var_1_7) {
					var_1_15 = var_1_6;
				} else {
					var_1_15 = var_1_16;
				}
			} else {
				var_1_15 = var_1_7;
			}
		} else {
			var_1_15 = var_1_18;
		}
	}


	// From: Req6Batch179Amount100
	unsigned long int stepLocal_6 = var_1_21 + var_1_15;
	if (var_1_11 >= var_1_10) {
		var_1_26 = (max (var_1_24 , (var_1_7 - (var_1_20 + var_1_21))));
	} else {
		if (10 <= stepLocal_6) {
			var_1_26 = var_1_7;
		} else {
			var_1_26 = var_1_24;
		}
	}


	// From: Req8Batch179Amount100
	if ((! last_1_var_1_28) && (var_1_23 <= var_1_15)) {
		if (last_1_var_1_28 || var_1_30) {
			var_1_28 = 0;
		} else {
			var_1_28 = (var_1_30 && var_1_31);
		}
	} else {
		var_1_28 = var_1_31;
	}


	// From: Req10Batch179Amount100
	unsigned long int stepLocal_12 = max (var_1_15 , var_1_16);
	signed long int stepLocal_11 = 4 * (var_1_21 * var_1_27);
	if (var_1_29 <= stepLocal_12) {
		if (stepLocal_11 > (var_1_26 / var_1_16)) {
			var_1_34 = var_1_33;
		} else {
			var_1_34 = var_1_31;
		}
	} else {
		var_1_34 = 1;
	}


	// From: Req2Batch179Amount100
	unsigned long int stepLocal_2 = 10000u;
	unsigned short int stepLocal_1 = var_1_27;
	unsigned short int stepLocal_0 = var_1_7;
	if (stepLocal_1 > var_1_4) {
		if (stepLocal_0 >= var_1_15) {
			var_1_9 = var_1_10;
		} else {
			var_1_9 = (var_1_11 + var_1_12);
		}
	} else {
		if ((min (var_1_15 , (var_1_4 + 5u))) > stepLocal_2) {
			var_1_9 = (var_1_14 - 7.15);
		}
	}


	// From: Req4Batch179Amount100
	if (var_1_28) {
		var_1_19 = ((var_1_20 + var_1_21) - ((var_1_22 + var_1_23) + var_1_24));
	}


	// From: Req5Batch179Amount100
	if (var_1_14 < (min ((var_1_11 + var_1_12) , 7.8))) {
		var_1_25 = (var_1_11 + var_1_12);
	} else {
		var_1_25 = var_1_14;
	}


	// From: Req11Batch179Amount100
	var_1_35 = var_1_24;


	// From: Req1Batch179Amount100
	if (var_1_27 >= var_1_26) {
		var_1_1 = (((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7)) + (max (var_1_8 , 16)));
	} else {
		var_1_1 = (max ((var_1_7 + var_1_6) , var_1_8));
	}


	// From: Req9Batch179Amount100
	unsigned char stepLocal_10 = var_1_34;
	unsigned short int stepLocal_9 = var_1_4;
	unsigned char stepLocal_8 = var_1_18 <= var_1_24;
	if (last_1_var_1_32 || stepLocal_8) {
		if (stepLocal_10 || var_1_28) {
			if (var_1_26 > stepLocal_9) {
				if (var_1_28) {
					var_1_32 = 1;
				} else {
					var_1_32 = var_1_33;
				}
			}
		}
	} else {
		var_1_32 = var_1_31;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16384);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16384);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 8191);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 8191);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 255);
	assume_abort_if_not(var_1_16 != 0);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 31);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_32 = var_1_32;
}

int property(void) {
	return (((((((((((var_1_27 >= var_1_26) ? (var_1_1 == ((unsigned short int) (((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7)) + (max (var_1_8 , 16))))) : (var_1_1 == ((unsigned short int) (max ((var_1_7 + var_1_6) , var_1_8))))) && ((var_1_27 > var_1_4) ? ((var_1_7 >= var_1_15) ? (var_1_9 == ((double) var_1_10)) : (var_1_9 == ((double) (var_1_11 + var_1_12)))) : (((min (var_1_15 , (var_1_4 + 5u))) > 10000u) ? (var_1_9 == ((double) (var_1_14 - 7.15))) : 1))) && ((var_1_8 <= last_1_var_1_27) ? (((max ((last_1_var_1_27 % var_1_16) , var_1_4)) >= var_1_6) ? (last_1_var_1_32 ? ((var_1_16 > var_1_7) ? (var_1_15 == ((unsigned long int) var_1_6)) : (var_1_15 == ((unsigned long int) var_1_16))) : (var_1_15 == ((unsigned long int) var_1_7))) : (var_1_15 == ((unsigned long int) var_1_18))) : 1)) && (var_1_28 ? (var_1_19 == ((signed char) ((var_1_20 + var_1_21) - ((var_1_22 + var_1_23) + var_1_24)))) : 1)) && ((var_1_14 < (min ((var_1_11 + var_1_12) , 7.8))) ? (var_1_25 == ((float) (var_1_11 + var_1_12))) : (var_1_25 == ((float) var_1_14)))) && ((var_1_11 >= var_1_10) ? (var_1_26 == ((signed short int) (max (var_1_24 , (var_1_7 - (var_1_20 + var_1_21)))))) : ((10 <= (var_1_21 + var_1_15)) ? (var_1_26 == ((signed short int) var_1_7)) : (var_1_26 == ((signed short int) var_1_24))))) && ((var_1_5 <= last_1_var_1_1) ? (var_1_27 == ((unsigned short int) ((min (var_1_21 , var_1_22)) + var_1_8))) : (var_1_27 == ((unsigned short int) var_1_7)))) && (((! last_1_var_1_28) && (var_1_23 <= var_1_15)) ? ((last_1_var_1_28 || var_1_30) ? (var_1_28 == ((unsigned char) 0)) : (var_1_28 == ((unsigned char) (var_1_30 && var_1_31)))) : (var_1_28 == ((unsigned char) var_1_31)))) && ((last_1_var_1_32 || (var_1_18 <= var_1_24)) ? ((var_1_34 || var_1_28) ? ((var_1_26 > var_1_4) ? (var_1_28 ? (var_1_32 == ((unsigned char) 1)) : (var_1_32 == ((unsigned char) var_1_33))) : 1) : 1) : (var_1_32 == ((unsigned char) var_1_31)))) && ((var_1_29 <= (max (var_1_15 , var_1_16))) ? (((4 * (var_1_21 * var_1_27)) > (var_1_26 / var_1_16)) ? (var_1_34 == ((unsigned char) var_1_33)) : (var_1_34 == ((unsigned char) var_1_31))) : (var_1_34 == ((unsigned char) 1)))) && (var_1_35 == ((unsigned char) var_1_24))
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
