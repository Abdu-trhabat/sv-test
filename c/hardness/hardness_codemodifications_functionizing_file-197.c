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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197functionizing.c", 13, "reach_error"); }
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
void functionized0(float);
void functionized1(signed short int, unsigned char, float, float);
void functionized2(unsigned char, float);
signed long int functionized3(unsigned char);
void functionized4(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
float var_1_2 = 2.75;
float var_1_3 = 0.6799999999999999;
unsigned char var_1_4 = 200;
unsigned char var_1_5 = 32;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 1;
float var_1_8 = 5.5;
float var_1_9 = 8.6;
unsigned char var_1_10 = 0;
float var_1_11 = 63.5;
float var_1_12 = 1.6;
float var_1_13 = 15.75;
double var_1_14 = 7.375;
double var_1_15 = 5.2;
double var_1_16 = 10.5;
float var_1_17 = 256.75;
signed char var_1_18 = 5;
unsigned char var_1_19 = 4;
signed char var_1_20 = 4;
signed char var_1_21 = -16;
double var_1_22 = 25.8;
unsigned long int var_1_23 = 0;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(float functionized0_localFunctionVar0) {
	if (var_1_2 > (functionized0_localFunctionVar0 / var_1_8)) {
		if (! (var_1_2 >= functionized0_localFunctionVar0)) {
			var_1_6 = var_1_4;
		} else {
			var_1_6 = -2;
		}
	}
}
void functionized1(signed short int functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, float functionized1_localFunctionVar2, float functionized1_localFunctionVar3) {
	if (var_1_7 || functionized1_localFunctionVar1) {
		if (functionized1_localFunctionVar0 < (min (var_1_5 , var_1_1))) {
			if (functionized1_localFunctionVar3 < (var_1_11 - var_1_12)) {
				var_1_9 = functionized1_localFunctionVar2;
			} else {
				var_1_9 = 32.89f;
			}
		} else {
			var_1_9 = functionized1_localFunctionVar2;
		}
	}
}
void functionized2(unsigned char functionized2_localFunctionVar0, float functionized2_localFunctionVar1) {
	if (functionized2_localFunctionVar0 && var_1_10) {
		if (((max (var_1_4 , var_1_1)) + var_1_5) != var_1_6) {
			var_1_17 = 100.85f;
		} else {
			var_1_17 = functionized2_localFunctionVar1;
		}
	} else {
		var_1_17 = functionized2_localFunctionVar1;
	}
}
signed long int functionized3(unsigned char functionized3_localFunctionVar0) {
	return (functionized3_localFunctionVar0 - var_1_20);
}
void functionized4(void) {
	var_1_22 = var_1_13;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch197functionizing
	if (var_1_2 != var_1_3) {
		var_1_1 = ((var_1_4 - var_1_5) - 10);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch197functionizing
	functionized0(var_1_3);


	// From: Req3Batch197functionizing
	functionized1(var_1_6, var_1_10, var_1_13, var_1_3);


	// From: Req4Batch197functionizing
	if (var_1_3 < (var_1_9 + var_1_11)) {
		var_1_14 = (var_1_15 - var_1_16);
	}


	// From: Req5Batch197functionizing
	functionized2(var_1_7, var_1_13);


	// From: Req6Batch197functionizing
	if ((var_1_1 / var_1_19) <= 4) {
		var_1_18 = (var_1_5 + (max (functionized3(var_1_19) , var_1_21)));
	} else {
		var_1_18 = (abs (var_1_21));
	}


	// From: Req7Batch197functionizing
	functionized4();


	// From: Req8Batch197functionizing
	var_1_23 = var_1_20;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 190);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 7);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 != var_1_3) ? (var_1_1 == ((unsigned char) ((var_1_4 - var_1_5) - 10))) : (var_1_1 == ((unsigned char) var_1_5))) && ((var_1_2 > (var_1_3 / var_1_8)) ? ((! (var_1_2 >= var_1_3)) ? (var_1_6 == ((signed short int) var_1_4)) : (var_1_6 == ((signed short int) -2))) : 1)) && ((var_1_7 || var_1_10) ? ((var_1_6 < (min (var_1_5 , var_1_1))) ? ((var_1_3 < (var_1_11 - var_1_12)) ? (var_1_9 == ((float) var_1_13)) : (var_1_9 == ((float) 32.89f))) : (var_1_9 == ((float) var_1_13))) : 1)) && ((var_1_3 < (var_1_9 + var_1_11)) ? (var_1_14 == ((double) (var_1_15 - var_1_16))) : 1)) && ((var_1_7 && var_1_10) ? ((((max (var_1_4 , var_1_1)) + var_1_5) != var_1_6) ? (var_1_17 == ((float) 100.85f)) : (var_1_17 == ((float) var_1_13))) : (var_1_17 == ((float) var_1_13)))) && (((var_1_1 / var_1_19) <= 4) ? (var_1_18 == ((signed char) (var_1_5 + (max ((var_1_19 - var_1_20) , var_1_21))))) : (var_1_18 == ((signed char) (abs (var_1_21)))))) && (var_1_22 == ((double) var_1_13))) && (var_1_23 == ((unsigned long int) var_1_20))
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
