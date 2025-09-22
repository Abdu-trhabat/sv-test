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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113dependencies.c", 13, "reach_error"); }
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
signed long int var_1_1 = 4;
unsigned char var_1_2 = 1;
signed long int var_1_3 = -4;
signed long int var_1_4 = 2145217738;
signed long int var_1_5 = 100;
signed long int var_1_6 = 64;
double var_1_7 = 128.2;
unsigned char var_1_8 = 0;
double var_1_9 = 10.6;
signed short int var_1_10 = 16;
signed short int var_1_11 = -10;
signed short int var_1_12 = 1;
signed short int var_1_13 = 256;
float var_1_14 = 999999999999999.5;
unsigned long int var_1_15 = 2;
unsigned char var_1_16 = 16;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 64;
signed char var_1_19 = 64;
signed char var_1_20 = 1;
signed char var_1_21 = 50;
double var_1_22 = 10.75;
double var_1_23 = 127.1;
double var_1_24 = 31.375;
signed short int var_1_25 = 50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch113dependencies
	if (var_1_2) {
		var_1_1 = (max (var_1_3 , ((var_1_4 - var_1_5) - var_1_6)));
	} else {
		if (var_1_5 > var_1_3) {
			var_1_1 = (abs (16));
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req2Batch113dependencies
	if (! (var_1_2 && var_1_8)) {
		if (var_1_2) {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch113dependencies
	if (! var_1_8) {
		var_1_10 = (min (var_1_11 , (var_1_12 + var_1_13)));
	} else {
		if (((var_1_14 - 9.5f) >= (- var_1_7)) || (var_1_11 >= var_1_12)) {
			var_1_10 = var_1_12;
		} else {
			var_1_10 = var_1_11;
		}
	}


	// From: Req4Batch113dependencies
	var_1_15 = var_1_6;


	// From: Req5Batch113dependencies
	if (var_1_5 != var_1_4) {
		var_1_16 = (min (10 , (max (var_1_17 , var_1_18))));
	}


	// From: Req6Batch113dependencies
	if (var_1_2 || var_1_8) {
		var_1_19 = var_1_20;
	} else {
		var_1_19 = (min ((16 - var_1_21) , var_1_20));
	}


	// From: Req7Batch113dependencies
	var_1_22 = (var_1_23 - var_1_24);


	// From: Req8Batch113dependencies
	if (var_1_7 > 256.8) {
		var_1_25 = (max (((var_1_21 - var_1_17) + var_1_12) , (var_1_15 - var_1_18)));
	} else {
		if (var_1_2) {
			var_1_25 = 25;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483647);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 1073741822);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -16383);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 ? (var_1_1 == ((signed long int) (max (var_1_3 , ((var_1_4 - var_1_5) - var_1_6))))) : ((var_1_5 > var_1_3) ? (var_1_1 == ((signed long int) (abs (16)))) : (var_1_1 == ((signed long int) var_1_3)))) && ((! (var_1_2 && var_1_8)) ? (var_1_2 ? (var_1_7 == ((double) var_1_9)) : 1) : 1)) && ((! var_1_8) ? (var_1_10 == ((signed short int) (min (var_1_11 , (var_1_12 + var_1_13))))) : ((((var_1_14 - 9.5f) >= (- var_1_7)) || (var_1_11 >= var_1_12)) ? (var_1_10 == ((signed short int) var_1_12)) : (var_1_10 == ((signed short int) var_1_11))))) && (var_1_15 == ((unsigned long int) var_1_6))) && ((var_1_5 != var_1_4) ? (var_1_16 == ((unsigned char) (min (10 , (max (var_1_17 , var_1_18)))))) : 1)) && ((var_1_2 || var_1_8) ? (var_1_19 == ((signed char) var_1_20)) : (var_1_19 == ((signed char) (min ((16 - var_1_21) , var_1_20)))))) && (var_1_22 == ((double) (var_1_23 - var_1_24)))) && ((var_1_7 > 256.8) ? (var_1_25 == ((signed short int) (max (((var_1_21 - var_1_17) + var_1_12) , (var_1_15 - var_1_18))))) : (var_1_2 ? (var_1_25 == ((signed short int) 25)) : 1))
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
