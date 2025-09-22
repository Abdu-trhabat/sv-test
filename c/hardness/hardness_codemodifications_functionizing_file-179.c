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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(signed short int);
float functionized1(float, float);
unsigned char functionized2(void);
void functionized3(signed short int, signed char, unsigned char, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 256;
unsigned short int var_1_2 = 5;
unsigned short int var_1_3 = 64;
signed short int var_1_4 = -128;
signed short int var_1_5 = 10000;
signed short int var_1_6 = 64;
signed short int var_1_7 = 16;
float var_1_8 = 10000000000000.6;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
float var_1_11 = 63.8;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 50;
float var_1_16 = 255.2;
float var_1_17 = 7.7;
unsigned char var_1_18 = 16;
signed char var_1_19 = 4;
signed char var_1_20 = 32;
unsigned char var_1_21 = 8;
signed char var_1_22 = 2;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 8;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(signed short int functionized0_localFunctionVar0) {
	return (functionized0_localFunctionVar0 + var_1_7);
}
float functionized1(float functionized1_localFunctionVar0, float functionized1_localFunctionVar1) {
	return (max (var_1_8 , (functionized1_localFunctionVar1 + functionized1_localFunctionVar0)));
}
unsigned char functionized2(void) {
	return (! var_1_14);
}
void functionized3(signed short int functionized3_localFunctionVar0, signed char functionized3_localFunctionVar1, unsigned char functionized3_localFunctionVar2, unsigned char functionized3_localFunctionVar3) {
	if ((var_1_15 / (abs (functionized3_localFunctionVar1))) != functionized3_localFunctionVar0) {
		var_1_21 = (var_1_23 - (var_1_24 - functionized3_localFunctionVar3));
	} else {
		var_1_21 = functionized3_localFunctionVar2;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch179functionizing
	if (var_1_2 > var_1_3) {
		var_1_1 = (var_1_4 + ((var_1_5 - var_1_6) - var_1_7));
	} else {
		if (var_1_7 == (min (var_1_2 , -16))) {
			var_1_1 = (var_1_6 - var_1_5);
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req2Batch179functionizing
	if (var_1_3 >= functionized0(var_1_6)) {
		if (var_1_9 || var_1_10) {
			var_1_8 = var_1_11;
		}
	}


	// From: Req3Batch179functionizing
	if (var_1_10) {
		var_1_12 = (64 - var_1_7);
	}


	// From: Req4Batch179functionizing
	if (var_1_10 || var_1_9) {
		var_1_13 = (! var_1_14);
	}


	// From: Req5Batch179functionizing
	if (var_1_16 != (functionized1(var_1_17, var_1_11))) {
		if (-2 > (var_1_4 + var_1_2)) {
			var_1_15 = var_1_18;
		} else {
			var_1_15 = 32;
		}
	} else {
		var_1_15 = var_1_18;
	}


	// From: Req6Batch179functionizing
	if (var_1_6 >= (var_1_5 & var_1_15)) {
		var_1_19 = var_1_20;
	} else {
		if (var_1_13 && functionized2()) {
			var_1_19 = 32;
		}
	}


	// From: Req7Batch179functionizing
	functionized3(var_1_5, var_1_22, var_1_18, var_1_25);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 8191);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 127);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 63);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 > var_1_3) ? (var_1_1 == ((signed short int) (var_1_4 + ((var_1_5 - var_1_6) - var_1_7)))) : ((var_1_7 == (min (var_1_2 , -16))) ? (var_1_1 == ((signed short int) (var_1_6 - var_1_5))) : (var_1_1 == ((signed short int) var_1_6)))) && ((var_1_3 >= (var_1_6 + var_1_7)) ? ((var_1_9 || var_1_10) ? (var_1_8 == ((float) var_1_11)) : 1) : 1)) && (var_1_10 ? (var_1_12 == ((signed long int) (64 - var_1_7))) : 1)) && ((var_1_10 || var_1_9) ? (var_1_13 == ((unsigned char) (! var_1_14))) : 1)) && ((var_1_16 != (max (var_1_8 , (var_1_11 + var_1_17)))) ? ((-2 > (var_1_4 + var_1_2)) ? (var_1_15 == ((unsigned char) var_1_18)) : (var_1_15 == ((unsigned char) 32))) : (var_1_15 == ((unsigned char) var_1_18)))) && ((var_1_6 >= (var_1_5 & var_1_15)) ? (var_1_19 == ((signed char) var_1_20)) : ((var_1_13 && (! var_1_14)) ? (var_1_19 == ((signed char) 32)) : 1))) && (((var_1_15 / (abs (var_1_22))) != var_1_5) ? (var_1_21 == ((unsigned char) (var_1_23 - (var_1_24 - var_1_25)))) : (var_1_21 == ((unsigned char) var_1_18)))
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
