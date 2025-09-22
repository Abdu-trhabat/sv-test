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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13100_while.c", 13, "reach_error"); }
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
signed long int var_1_2 = -4;
signed long int var_1_3 = 2;
unsigned char var_1_4 = 1;
signed short int var_1_5 = 25;
signed short int var_1_6 = 10;
signed short int var_1_7 = 128;
signed short int var_1_8 = 256;
signed char var_1_9 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -10;
signed char var_1_12 = -25;
double var_1_13 = 64.875;
double var_1_15 = 1.625;
double var_1_16 = 32.2;
double var_1_17 = 8.6;
double var_1_18 = 10.5;
double var_1_19 = 4.25;
float var_1_20 = 64.5;
signed long int var_1_21 = -500;
double var_1_22 = 5.4;
signed short int var_1_23 = 500;
double var_1_24 = 2.225;
unsigned short int var_1_25 = 10;
signed short int var_1_26 = 32;
signed short int var_1_27 = 128;
signed short int var_1_28 = 16;
signed long int var_1_29 = -32;
float var_1_30 = 5.2;
unsigned short int var_1_31 = 32;
unsigned short int var_1_32 = 52532;
unsigned long int var_1_33 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch13100_while
	if ((var_1_2 <= var_1_3) || var_1_4) {
		var_1_1 = 0;
	}


	// From: Req2Batch13100_while
	if (var_1_4 || var_1_1) {
		var_1_5 = (min (50 , var_1_6));
	} else {
		if (var_1_1) {
			var_1_5 = (var_1_7 - var_1_8);
		}
	}


	// From: Req6Batch13100_while
	signed short int stepLocal_2 = var_1_7;
	if (stepLocal_2 < (var_1_8 - var_1_23)) {
		var_1_22 = ((min (var_1_15 , var_1_16)) - var_1_24);
	}


	// From: Req7Batch13100_while
	signed long int stepLocal_3 = -64;
	if (var_1_1) {
		var_1_25 = (min (var_1_8 , var_1_23));
	} else {
		if (var_1_21 >= stepLocal_3) {
			if (var_1_18 < (var_1_15 - var_1_24)) {
				var_1_25 = (var_1_23 + 16);
			}
		}
	}


	// From: Req9Batch13100_while
	if (var_1_21 >= (var_1_27 - var_1_23)) {
		if (-200 <= (max (var_1_6 , var_1_10))) {
			var_1_29 = var_1_8;
		}
	} else {
		var_1_29 = var_1_23;
	}


	// From: Req11Batch13100_while
	if (! (var_1_7 < var_1_6)) {
		var_1_31 = (var_1_28 + var_1_23);
	} else {
		if (var_1_19 != (- var_1_16)) {
			var_1_31 = ((var_1_32 - var_1_27) - var_1_28);
		}
	}


	// From: Req12Batch13100_while
	var_1_33 = var_1_23;


	// From: Req3Batch13100_while
	unsigned long int stepLocal_0 = var_1_33;
	if (stepLocal_0 > var_1_7) {
		var_1_9 = ((var_1_10 + var_1_11) + var_1_12);
	}


	// From: Req4Batch13100_while
	signed long int stepLocal_1 = var_1_29;
	if (var_1_33 > stepLocal_1) {
		var_1_13 = ((var_1_15 - var_1_16) + ((max (var_1_17 , 499.25)) + var_1_18));
	} else {
		if (var_1_1) {
			var_1_13 = var_1_15;
		} else {
			var_1_13 = var_1_19;
		}
	}


	// From: Req5Batch13100_while
	if ((min (var_1_11 , var_1_8)) < var_1_29) {
		var_1_20 = (var_1_15 - var_1_16);
	}


	// From: Req8Batch13100_while
	if (var_1_1) {
		if ((128u <= var_1_25) && (var_1_31 >= -2)) {
			if (((- var_1_25) <= (var_1_25 & var_1_6)) && var_1_1) {
				var_1_26 = (abs (var_1_10));
			} else {
				var_1_26 = (min (var_1_25 , ((var_1_27 - var_1_28) + (var_1_12 + var_1_11))));
			}
		} else {
			var_1_26 = (abs (var_1_25 + var_1_12));
		}
	} else {
		var_1_26 = var_1_27;
	}


	// From: Req10Batch13100_while
	unsigned char stepLocal_5 = var_1_1;
	unsigned char stepLocal_4 = var_1_8 >= (var_1_26 * var_1_11);
	if ((var_1_8 < 4) && stepLocal_5) {
		if (((~ var_1_33) == (var_1_28 >> 1u)) || stepLocal_4) {
			var_1_30 = var_1_16;
		} else {
			var_1_30 = var_1_17;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483647);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16383);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 49150);
	assume_abort_if_not(var_1_32 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((((var_1_2 <= var_1_3) || var_1_4) ? (var_1_1 == ((unsigned char) 0)) : 1) && ((var_1_4 || var_1_1) ? (var_1_5 == ((signed short int) (min (50 , var_1_6)))) : (var_1_1 ? (var_1_5 == ((signed short int) (var_1_7 - var_1_8))) : 1))) && ((var_1_33 > var_1_7) ? (var_1_9 == ((signed char) ((var_1_10 + var_1_11) + var_1_12))) : 1)) && ((var_1_33 > var_1_29) ? (var_1_13 == ((double) ((var_1_15 - var_1_16) + ((max (var_1_17 , 499.25)) + var_1_18)))) : (var_1_1 ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_19))))) && (((min (var_1_11 , var_1_8)) < var_1_29) ? (var_1_20 == ((float) (var_1_15 - var_1_16))) : 1)) && ((var_1_7 < (var_1_8 - var_1_23)) ? (var_1_22 == ((double) ((min (var_1_15 , var_1_16)) - var_1_24))) : 1)) && (var_1_1 ? (var_1_25 == ((unsigned short int) (min (var_1_8 , var_1_23)))) : ((var_1_21 >= -64) ? ((var_1_18 < (var_1_15 - var_1_24)) ? (var_1_25 == ((unsigned short int) (var_1_23 + 16))) : 1) : 1))) && (var_1_1 ? (((128u <= var_1_25) && (var_1_31 >= -2)) ? ((((- var_1_25) <= (var_1_25 & var_1_6)) && var_1_1) ? (var_1_26 == ((signed short int) (abs (var_1_10)))) : (var_1_26 == ((signed short int) (min (var_1_25 , ((var_1_27 - var_1_28) + (var_1_12 + var_1_11))))))) : (var_1_26 == ((signed short int) (abs (var_1_25 + var_1_12))))) : (var_1_26 == ((signed short int) var_1_27)))) && ((var_1_21 >= (var_1_27 - var_1_23)) ? ((-200 <= (max (var_1_6 , var_1_10))) ? (var_1_29 == ((signed long int) var_1_8)) : 1) : (var_1_29 == ((signed long int) var_1_23)))) && (((var_1_8 < 4) && var_1_1) ? ((((~ var_1_33) == (var_1_28 >> 1u)) || (var_1_8 >= (var_1_26 * var_1_11))) ? (var_1_30 == ((float) var_1_16)) : (var_1_30 == ((float) var_1_17))) : 1)) && ((! (var_1_7 < var_1_6)) ? (var_1_31 == ((unsigned short int) (var_1_28 + var_1_23))) : ((var_1_19 != (- var_1_16)) ? (var_1_31 == ((unsigned short int) ((var_1_32 - var_1_27) - var_1_28))) : 1))) && (var_1_33 == ((unsigned long int) var_1_23))
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
