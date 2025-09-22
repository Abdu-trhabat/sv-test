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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch23Amount100.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned long int var_1_2 = 2645914509;
unsigned char var_1_4 = 1;
signed char var_1_5 = -50;
signed char var_1_6 = 2;
signed char var_1_7 = 5;
float var_1_8 = 64.1;
float var_1_10 = 8.4;
float var_1_11 = 2.75;
float var_1_12 = 0.9;
unsigned char var_1_13 = 0;
unsigned long int var_1_14 = 10;
unsigned long int var_1_15 = 2626053835;
unsigned long int var_1_16 = 100000;
float var_1_17 = 64.625;
float var_1_18 = 15.25;
float var_1_19 = 15.4;
float var_1_20 = 0.0;
float var_1_21 = 25.5;
float var_1_22 = 4.5;
float var_1_23 = 255.125;
float var_1_24 = 4.6899999999999995;
float var_1_25 = 10.5;
double var_1_26 = 5.55;
double var_1_27 = 0.75;
signed char var_1_28 = -64;
unsigned long int var_1_29 = 0;
signed char var_1_30 = 4;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 4;
signed char var_1_33 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_14 = 10;
unsigned long int last_1_var_1_29 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch23Amount100
	unsigned long int stepLocal_5 = var_1_7 + (max (last_1_var_1_14 , var_1_16));
	if (var_1_12 < (var_1_11 / var_1_18)) {
		if (stepLocal_5 <= (last_1_var_1_29 + var_1_15)) {
			var_1_17 = var_1_10;
		} else {
			var_1_17 = var_1_11;
		}
	} else {
		var_1_17 = var_1_11;
	}


	// From: Req6Batch23Amount100
	if (var_1_15 != var_1_16) {
		var_1_26 = ((min (var_1_22 , (var_1_21 + var_1_23))) - var_1_20);
	} else {
		if (var_1_4) {
			if ((8 < 0) && (var_1_22 > var_1_17)) {
				var_1_26 = var_1_27;
			} else {
				var_1_26 = 255.6;
			}
		} else {
			var_1_26 = var_1_24;
		}
	}


	// From: Req5Batch23Amount100
	if (var_1_4) {
		var_1_19 = (((var_1_20 - var_1_21) - (var_1_22 + var_1_23)) + (var_1_24 + var_1_25));
	}


	// From: Req7Batch23Amount100
	unsigned long int stepLocal_6 = var_1_15 % var_1_2;
	if (stepLocal_6 != var_1_7) {
		var_1_28 = (var_1_7 + var_1_5);
	}


	// From: Req9Batch23Amount100
	unsigned char stepLocal_7 = var_1_13;
	if (var_1_4) {
		if (var_1_12 <= (var_1_26 + (var_1_11 * var_1_25))) {
			if (stepLocal_7 || var_1_31) {
				var_1_30 = var_1_5;
			} else {
				var_1_30 = var_1_7;
			}
		}
	} else {
		var_1_30 = var_1_6;
	}


	// From: Req8Batch23Amount100
	if (var_1_17 >= (var_1_20 - (min (200.25f , var_1_21)))) {
		if (var_1_26 <= 256.2f) {
			var_1_29 = var_1_6;
		}
	} else {
		var_1_29 = 16u;
	}


	// From: Req3Batch23Amount100
	unsigned char stepLocal_4 = var_1_4;
	unsigned char stepLocal_3 = (- var_1_12) != 1.9f;
	if (stepLocal_3 || ((var_1_29 * var_1_7) < var_1_29)) {
		var_1_14 = (min (var_1_7 , ((abs (var_1_15)) - var_1_16)));
	} else {
		if (var_1_13 && stepLocal_4) {
			var_1_14 = var_1_16;
		} else {
			var_1_14 = var_1_15;
		}
	}


	// From: Req1Batch23Amount100
	unsigned char stepLocal_0 = (var_1_2 - 16u) != var_1_29;
	if (stepLocal_0 || var_1_4) {
		var_1_1 = (var_1_5 + (var_1_6 - var_1_7));
	} else {
		var_1_1 = (abs (abs (var_1_7)));
	}


	// From: Req2Batch23Amount100
	unsigned long int stepLocal_2 = 8u * (var_1_2 * var_1_7);
	unsigned char stepLocal_1 = (var_1_11 / var_1_12) == var_1_10;
	if (var_1_4) {
		if (stepLocal_2 >= var_1_29) {
			var_1_8 = (min (var_1_10 , var_1_11));
		}
	} else {
		if (stepLocal_1 && var_1_13) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = 7.6f;
		}
	}


	// From: Req10Batch23Amount100
	unsigned long int stepLocal_9 = var_1_2 + var_1_29;
	unsigned long int stepLocal_8 = var_1_14 + var_1_7;
	if ((var_1_29 + var_1_15) <= stepLocal_9) {
		if (var_1_1 < stepLocal_8) {
			var_1_32 = var_1_6;
		} else {
			var_1_32 = var_1_7;
		}
	} else {
		var_1_32 = var_1_33;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 2147483647);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 2305843.009213691400e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -230584.3009213691400e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -230584.3009213691400e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return ((((((((((((var_1_2 - 16u) != var_1_29) || var_1_4) ? (var_1_1 == ((signed char) (var_1_5 + (var_1_6 - var_1_7)))) : (var_1_1 == ((signed char) (abs (abs (var_1_7)))))) && (var_1_4 ? (((8u * (var_1_2 * var_1_7)) >= var_1_29) ? (var_1_8 == ((float) (min (var_1_10 , var_1_11)))) : 1) : ((((var_1_11 / var_1_12) == var_1_10) && var_1_13) ? (var_1_8 == ((float) var_1_10)) : (var_1_8 == ((float) 7.6f))))) && ((((- var_1_12) != 1.9f) || ((var_1_29 * var_1_7) < var_1_29)) ? (var_1_14 == ((unsigned long int) (min (var_1_7 , ((abs (var_1_15)) - var_1_16))))) : ((var_1_13 && var_1_4) ? (var_1_14 == ((unsigned long int) var_1_16)) : (var_1_14 == ((unsigned long int) var_1_15))))) && ((var_1_12 < (var_1_11 / var_1_18)) ? (((var_1_7 + (max (last_1_var_1_14 , var_1_16))) <= (last_1_var_1_29 + var_1_15)) ? (var_1_17 == ((float) var_1_10)) : (var_1_17 == ((float) var_1_11))) : (var_1_17 == ((float) var_1_11)))) && (var_1_4 ? (var_1_19 == ((float) (((var_1_20 - var_1_21) - (var_1_22 + var_1_23)) + (var_1_24 + var_1_25)))) : 1)) && ((var_1_15 != var_1_16) ? (var_1_26 == ((double) ((min (var_1_22 , (var_1_21 + var_1_23))) - var_1_20))) : (var_1_4 ? (((8 < 0) && (var_1_22 > var_1_17)) ? (var_1_26 == ((double) var_1_27)) : (var_1_26 == ((double) 255.6))) : (var_1_26 == ((double) var_1_24))))) && (((var_1_15 % var_1_2) != var_1_7) ? (var_1_28 == ((signed char) (var_1_7 + var_1_5))) : 1)) && ((var_1_17 >= (var_1_20 - (min (200.25f , var_1_21)))) ? ((var_1_26 <= 256.2f) ? (var_1_29 == ((unsigned long int) var_1_6)) : 1) : (var_1_29 == ((unsigned long int) 16u)))) && (var_1_4 ? ((var_1_12 <= (var_1_26 + (var_1_11 * var_1_25))) ? ((var_1_13 || var_1_31) ? (var_1_30 == ((signed char) var_1_5)) : (var_1_30 == ((signed char) var_1_7))) : 1) : (var_1_30 == ((signed char) var_1_6)))) && (((var_1_29 + var_1_15) <= (var_1_2 + var_1_29)) ? ((var_1_1 < (var_1_14 + var_1_7)) ? (var_1_32 == ((unsigned char) var_1_6)) : (var_1_32 == ((unsigned char) var_1_7))) : (var_1_32 == ((unsigned char) var_1_33)))
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
