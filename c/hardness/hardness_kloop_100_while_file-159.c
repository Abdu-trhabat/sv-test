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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159100_while.c", 13, "reach_error"); }
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
double var_1_1 = 10.25;
unsigned char var_1_2 = 0;
double var_1_3 = 256.9;
double var_1_4 = 0.75;
double var_1_5 = 9.8;
double var_1_6 = 1.5;
double var_1_7 = 16.1;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 51915;
unsigned short int var_1_10 = 54357;
unsigned short int var_1_11 = 16;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 10;
signed char var_1_14 = 16;
signed char var_1_15 = -1;
signed char var_1_16 = 0;
signed char var_1_17 = 10;
signed char var_1_18 = 10;
signed short int var_1_19 = -4;
unsigned long int var_1_20 = 32;
unsigned long int var_1_21 = 3866574014;
float var_1_22 = -0.375;
unsigned short int var_1_23 = 100;
unsigned short int var_1_24 = 2;
signed char var_1_25 = -128;
double var_1_26 = 10.8;
signed char var_1_28 = 2;
unsigned long int var_1_29 = 0;
float var_1_30 = 5.5;
float var_1_31 = 63.9;
float var_1_32 = 9999.65;
float var_1_33 = 16.5;
float var_1_34 = 10000000000000.2;
unsigned long int var_1_35 = 10;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_23 = 100;
unsigned long int last_1_var_1_35 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch159100_while
	unsigned long int stepLocal_1 = last_1_var_1_35;
	signed long int stepLocal_0 = min (var_1_18 , var_1_11);
	if (stepLocal_1 >= 4) {
		if (stepLocal_0 <= last_1_var_1_23) {
			var_1_20 = ((var_1_21 - var_1_11) - (var_1_9 + (32u + var_1_18)));
		} else {
			var_1_20 = var_1_12;
		}
	} else {
		var_1_20 = 32u;
	}


	// From: Req10Batch159100_while
	if (var_1_7 == var_1_6) {
		var_1_29 = 0u;
	} else {
		var_1_29 = (max ((var_1_9 + var_1_20) , var_1_28));
	}


	// From: Req1Batch159100_while
	if (var_1_2) {
		var_1_1 = (min (var_1_3 , var_1_4));
	} else {
		var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
	}


	// From: Req2Batch159100_while
	var_1_8 = (((max (var_1_9 , var_1_10)) - (var_1_11 + var_1_12)) - var_1_13);


	// From: Req4Batch159100_while
	if (var_1_2) {
		var_1_16 = (var_1_17 - var_1_18);
	}


	// From: Req5Batch159100_while
	if (var_1_15 != (var_1_18 - 64)) {
		var_1_19 = var_1_17;
	}


	// From: Req7Batch159100_while
	if (var_1_6 > var_1_1) {
		var_1_22 = (var_1_6 + var_1_7);
	}


	// From: Req8Batch159100_while
	unsigned short int stepLocal_2 = var_1_12;
	if (var_1_2) {
		if (stepLocal_2 == (1 / var_1_24)) {
			var_1_23 = var_1_12;
		} else {
			var_1_23 = var_1_18;
		}
	}


	// From: Req11Batch159100_while
	if (var_1_2) {
		if ((max (var_1_9 , var_1_23)) > var_1_28) {
			var_1_30 = ((var_1_31 + (var_1_32 - var_1_33)) + var_1_6);
		}
	} else {
		var_1_30 = (min (var_1_7 , var_1_34));
	}


	// From: Req3Batch159100_while
	if (var_1_2) {
		if (var_1_11 > var_1_23) {
			if (var_1_1 >= (min ((1.0000000000075E11 + var_1_6) , (var_1_7 - var_1_5)))) {
				var_1_14 = 2;
			} else {
				var_1_14 = var_1_15;
			}
		} else {
			var_1_14 = var_1_15;
		}
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req12Batch159100_while
	signed long int stepLocal_4 = -8;
	if (var_1_2) {
		var_1_35 = ((var_1_21 - var_1_12) - (var_1_23 + (25u + var_1_28)));
	} else {
		if ((min (var_1_11 , var_1_23)) != stepLocal_4) {
			if (var_1_36) {
				var_1_35 = (max ((var_1_21 - (max (var_1_13 , var_1_29))) , (min ((var_1_12 + var_1_24) , var_1_9))));
			} else {
				if (var_1_37) {
					var_1_35 = var_1_28;
				} else {
					var_1_35 = var_1_10;
				}
			}
		}
	}


	// From: Req9Batch159100_while
	signed long int stepLocal_3 = var_1_11 << var_1_35;
	if ((var_1_6 / var_1_26) <= (- (var_1_22 + var_1_1))) {
		if (stepLocal_3 > var_1_12) {
			var_1_25 = (max (var_1_17 , var_1_18));
		} else {
			var_1_25 = (abs (var_1_18 - var_1_28));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 49150);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 49150);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8192);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 8191);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 3221225470);
	assume_abort_if_not(var_1_21 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	assume_abort_if_not(var_1_24 != 0);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return (((((((((((var_1_2 ? (var_1_1 == ((double) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((double) (var_1_5 - (var_1_6 + var_1_7))))) && (var_1_8 == ((unsigned short int) (((max (var_1_9 , var_1_10)) - (var_1_11 + var_1_12)) - var_1_13)))) && (var_1_2 ? ((var_1_11 > var_1_23) ? ((var_1_1 >= (min ((1.0000000000075E11 + var_1_6) , (var_1_7 - var_1_5)))) ? (var_1_14 == ((signed char) 2)) : (var_1_14 == ((signed char) var_1_15))) : (var_1_14 == ((signed char) var_1_15))) : (var_1_14 == ((signed char) var_1_15)))) && (var_1_2 ? (var_1_16 == ((signed char) (var_1_17 - var_1_18))) : 1)) && ((var_1_15 != (var_1_18 - 64)) ? (var_1_19 == ((signed short int) var_1_17)) : 1)) && ((last_1_var_1_35 >= 4) ? (((min (var_1_18 , var_1_11)) <= last_1_var_1_23) ? (var_1_20 == ((unsigned long int) ((var_1_21 - var_1_11) - (var_1_9 + (32u + var_1_18))))) : (var_1_20 == ((unsigned long int) var_1_12))) : (var_1_20 == ((unsigned long int) 32u)))) && ((var_1_6 > var_1_1) ? (var_1_22 == ((float) (var_1_6 + var_1_7))) : 1)) && (var_1_2 ? ((var_1_12 == (1 / var_1_24)) ? (var_1_23 == ((unsigned short int) var_1_12)) : (var_1_23 == ((unsigned short int) var_1_18))) : 1)) && (((var_1_6 / var_1_26) <= (- (var_1_22 + var_1_1))) ? (((var_1_11 << var_1_35) > var_1_12) ? (var_1_25 == ((signed char) (max (var_1_17 , var_1_18)))) : (var_1_25 == ((signed char) (abs (var_1_18 - var_1_28))))) : 1)) && ((var_1_7 == var_1_6) ? (var_1_29 == ((unsigned long int) 0u)) : (var_1_29 == ((unsigned long int) (max ((var_1_9 + var_1_20) , var_1_28)))))) && (var_1_2 ? (((max (var_1_9 , var_1_23)) > var_1_28) ? (var_1_30 == ((float) ((var_1_31 + (var_1_32 - var_1_33)) + var_1_6))) : 1) : (var_1_30 == ((float) (min (var_1_7 , var_1_34)))))) && (var_1_2 ? (var_1_35 == ((unsigned long int) ((var_1_21 - var_1_12) - (var_1_23 + (25u + var_1_28))))) : (((min (var_1_11 , var_1_23)) != -8) ? (var_1_36 ? (var_1_35 == ((unsigned long int) (max ((var_1_21 - (max (var_1_13 , var_1_29))) , (min ((var_1_12 + var_1_24) , var_1_9)))))) : (var_1_37 ? (var_1_35 == ((unsigned long int) var_1_28)) : (var_1_35 == ((unsigned long int) var_1_10)))) : 1))
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
