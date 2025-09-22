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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130dependencies.c", 13, "reach_error"); }
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
float var_1_1 = 1.664;
signed short int var_1_2 = 25;
signed short int var_1_3 = 27904;
signed short int var_1_4 = 64;
float var_1_6 = 4.6;
float var_1_7 = 1.75;
float var_1_8 = 1.875;
float var_1_9 = 127.5;
signed short int var_1_10 = -2;
unsigned char var_1_11 = 4;
unsigned char var_1_12 = 200;
float var_1_13 = 10000000000000.875;
unsigned char var_1_14 = 1;
float var_1_15 = 31.875;
signed char var_1_16 = -64;
signed char var_1_17 = 16;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 16;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 16;
double var_1_23 = 10000000000.5;
signed char var_1_24 = 64;
signed char var_1_25 = 8;
unsigned long int var_1_26 = 10000000;
unsigned short int var_1_27 = 5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_27 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch130dependencies
	if (last_1_var_1_27 >= var_1_2) {
		if (var_1_14) {
			var_1_13 = (var_1_15 + var_1_8);
		}
	}


	// From: Req2Batch130dependencies
	var_1_10 = (var_1_4 - 256);


	// From: Req5Batch130dependencies
	if (((var_1_3 - var_1_12) > var_1_10) && (256 >= var_1_2)) {
		if (var_1_14) {
			var_1_16 = var_1_17;
		} else {
			var_1_16 = 1;
		}
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req6Batch130dependencies
	var_1_18 = ((max ((abs (var_1_19)) , var_1_20)) + (min ((min (4 , var_1_21)) , var_1_22)));


	// From: Req7Batch130dependencies
	if ((var_1_4 / (min (var_1_24 , var_1_25))) > var_1_17) {
		var_1_23 = var_1_6;
	}


	// From: Req8Batch130dependencies
	var_1_26 = (min ((var_1_21 + 4u) , (var_1_10 + var_1_18)));


	// From: Req9Batch130dependencies
	if ((var_1_15 < var_1_13) && (var_1_18 > (var_1_4 | var_1_10))) {
		var_1_27 = var_1_20;
	}


	// From: Req1Batch130dependencies
	if ((var_1_2 - (var_1_3 - var_1_4)) >= var_1_26) {
		var_1_1 = (max (var_1_6 , var_1_7));
	} else {
		var_1_1 = (var_1_8 + var_1_9);
	}


	// From: Req3Batch130dependencies
	if (var_1_26 < 16) {
		if (var_1_1 <= var_1_6) {
			var_1_11 = var_1_12;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 16383);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	assume_abort_if_not(var_1_25 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((((((var_1_2 - (var_1_3 - var_1_4)) >= var_1_26) ? (var_1_1 == ((float) (max (var_1_6 , var_1_7)))) : (var_1_1 == ((float) (var_1_8 + var_1_9)))) && (var_1_10 == ((signed short int) (var_1_4 - 256)))) && ((var_1_26 < 16) ? ((var_1_1 <= var_1_6) ? (var_1_11 == ((unsigned char) var_1_12)) : 1) : 1)) && ((last_1_var_1_27 >= var_1_2) ? (var_1_14 ? (var_1_13 == ((float) (var_1_15 + var_1_8))) : 1) : 1)) && ((((var_1_3 - var_1_12) > var_1_10) && (256 >= var_1_2)) ? (var_1_14 ? (var_1_16 == ((signed char) var_1_17)) : (var_1_16 == ((signed char) 1))) : (var_1_16 == ((signed char) var_1_17)))) && (var_1_18 == ((unsigned char) ((max ((abs (var_1_19)) , var_1_20)) + (min ((min (4 , var_1_21)) , var_1_22)))))) && (((var_1_4 / (min (var_1_24 , var_1_25))) > var_1_17) ? (var_1_23 == ((double) var_1_6)) : 1)) && (var_1_26 == ((unsigned long int) (min ((var_1_21 + 4u) , (var_1_10 + var_1_18)))))) && (((var_1_15 < var_1_13) && (var_1_18 > (var_1_4 | var_1_10))) ? (var_1_27 == ((unsigned short int) var_1_20)) : 1)
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
