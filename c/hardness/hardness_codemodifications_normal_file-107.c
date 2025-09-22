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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107normal.c", 13, "reach_error"); }
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
double var_1_1 = 10.5;
float var_1_2 = 7.1;
float var_1_3 = 3.7;
float var_1_4 = 50.8;
float var_1_5 = 256.25;
double var_1_6 = 9999999.2;
double var_1_7 = 0.0;
double var_1_8 = 50.5;
double var_1_9 = 4.75;
unsigned long int var_1_10 = 8;
signed char var_1_11 = 100;
signed char var_1_12 = 10;
signed long int var_1_13 = -16;
unsigned long int var_1_14 = 128;
unsigned long int var_1_15 = 5;
unsigned char var_1_16 = 50;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 5;
unsigned char var_1_22 = 0;
double var_1_23 = -0.625;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -50;
double var_1_27 = 49.625;
signed long int var_1_28 = 128;
signed short int var_1_29 = -2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch107normal
	if ((max (var_1_2 , var_1_3)) > (var_1_4 + (- var_1_5))) {
		var_1_1 = (var_1_6 - ((var_1_7 - var_1_8) + var_1_9));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req2Batch107normal
	if ((min (var_1_11 , var_1_12)) < var_1_13) {
		if ((var_1_13 + var_1_14) == 5u) {
			var_1_10 = var_1_15;
		}
	} else {
		var_1_10 = var_1_15;
	}


	// From: Req3Batch107normal
	if (var_1_17) {
		var_1_16 = ((var_1_18 + (var_1_19 + var_1_20)) - var_1_21);
	} else {
		if (var_1_22 && (var_1_5 > 16.75f)) {
			var_1_16 = var_1_19;
		}
	}


	// From: Req4Batch107normal
	var_1_23 = (var_1_8 - var_1_6);


	// From: Req5Batch107normal
	if (((var_1_15 ^ 16u) * 64u) > var_1_18) {
		var_1_24 = var_1_25;
	}


	// From: Req6Batch107normal
	if (var_1_6 < (var_1_1 * (var_1_8 - 9.99999998E7))) {
		var_1_26 = (abs (min (var_1_20 , var_1_19)));
	} else {
		var_1_26 = var_1_20;
	}


	// From: Req7Batch107normal
	if ((max (var_1_5 , var_1_8)) < (var_1_7 + var_1_1)) {
		var_1_27 = (var_1_8 - var_1_6);
	}


	// From: Req8Batch107normal
	var_1_28 = var_1_12;


	// From: Req9Batch107normal
	var_1_29 = var_1_11;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 2305843.009213691400e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -128);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -128);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((max (var_1_2 , var_1_3)) > (var_1_4 + (- var_1_5))) ? (var_1_1 == ((double) (var_1_6 - ((var_1_7 - var_1_8) + var_1_9)))) : (var_1_1 == ((double) var_1_6))) && (((min (var_1_11 , var_1_12)) < var_1_13) ? (((var_1_13 + var_1_14) == 5u) ? (var_1_10 == ((unsigned long int) var_1_15)) : 1) : (var_1_10 == ((unsigned long int) var_1_15)))) && (var_1_17 ? (var_1_16 == ((unsigned char) ((var_1_18 + (var_1_19 + var_1_20)) - var_1_21))) : ((var_1_22 && (var_1_5 > 16.75f)) ? (var_1_16 == ((unsigned char) var_1_19)) : 1))) && (var_1_23 == ((double) (var_1_8 - var_1_6)))) && ((((var_1_15 ^ 16u) * 64u) > var_1_18) ? (var_1_24 == ((unsigned char) var_1_25)) : 1)) && ((var_1_6 < (var_1_1 * (var_1_8 - 9.99999998E7))) ? (var_1_26 == ((signed char) (abs (min (var_1_20 , var_1_19))))) : (var_1_26 == ((signed char) var_1_20)))) && (((max (var_1_5 , var_1_8)) < (var_1_7 + var_1_1)) ? (var_1_27 == ((double) (var_1_8 - var_1_6))) : 1)) && (var_1_28 == ((signed long int) var_1_12))) && (var_1_29 == ((signed short int) var_1_11))
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
