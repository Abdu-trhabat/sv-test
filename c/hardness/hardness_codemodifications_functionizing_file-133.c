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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133functionizing.c", 13, "reach_error"); }
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
void functionized0(signed long int, signed short int, signed long int);
void functionized1(signed short int, signed short int, signed short int);
unsigned long int functionized2(void);
void functionized3(unsigned long int, unsigned char);
void functionized4(unsigned long int, unsigned long int, unsigned char);
double functionized5(double);
void functionized6(signed long int, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -2;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 64;
signed long int var_1_6 = 16;
signed short int var_1_7 = 64;
signed long int var_1_8 = -32;
signed short int var_1_9 = 256;
signed short int var_1_10 = 128;
unsigned long int var_1_11 = 0;
unsigned long int var_1_12 = 100;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
signed short int var_1_17 = -25;
double var_1_18 = 1.45;
double var_1_19 = 31.2;
double var_1_20 = 1.25;
signed short int var_1_21 = -8;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 256;
signed char var_1_24 = 32;
signed char var_1_25 = -8;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed long int functionized0_localFunctionVar0, signed short int functionized0_localFunctionVar1, signed long int localFunctionVar2) {
	if (functionized0_localFunctionVar0 == var_1_6) {
		var_1_1 = functionized0_localFunctionVar1;
	} else {
		var_1_1 = localFunctionVar2;
	}
}
void functionized1(signed short int functionized1_localFunctionVar0, signed short int functionized1_localFunctionVar1, signed short int functionized1_localFunctionVar2) {
	if (functionized1_localFunctionVar0 > (functionized1_localFunctionVar2 - functionized1_localFunctionVar1)) {
		var_1_8 = (abs (functionized1_localFunctionVar0));
	}
}
unsigned long int functionized2(void) {
	return (min (var_1_10 , var_1_12));
}
void functionized3(unsigned long int functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1) {
	if (functionized3_localFunctionVar0 > 10u) {
		var_1_13 = (functionized3_localFunctionVar1 && var_1_14);
	} else {
		var_1_13 = var_1_15;
	}
}
void functionized4(unsigned long int functionized4_localFunctionVar0, unsigned long int functionized4_localFunctionVar1, unsigned char localFunctionVar2) {
	if (functionized4_localFunctionVar1 != (functionized4_localFunctionVar0 + (var_1_8 * 10u))) {
		var_1_16 = ((var_1_9 < var_1_5) && (! var_1_15));
	} else {
		if (! var_1_2) {
			var_1_16 = localFunctionVar2;
		} else {
			var_1_16 = var_1_15;
		}
	}
}
double functionized5(double functionized5_localFunctionVar0) {
	return (functionized5_localFunctionVar0 * 9999.5);
}
void functionized6(signed long int functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1) {
	if ((var_1_7 / (abs (functionized6_localFunctionVar0))) > (25 - var_1_10)) {
		var_1_22 = functionized6_localFunctionVar1;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch133functionizing
	if ((! var_1_2) || (var_1_3 && var_1_4)) {
		functionized0(var_1_5, var_1_7, -128);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch133functionizing
	functionized1(var_1_7, var_1_10, var_1_9);


	// From: Req3Batch133functionizing
	var_1_11 = functionized2();


	// From: Req4Batch133functionizing
	if (var_1_8 == -50) {
		functionized3(var_1_11, var_1_3);
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req5Batch133functionizing
	functionized4(var_1_11, var_1_12, 0);


	// From: Req6Batch133functionizing
	if ((max (var_1_18 , var_1_19)) != functionized5(var_1_20)) {
		var_1_17 = ((var_1_21 + 2) + -64);
	}


	// From: Req7Batch133functionizing
	functionized6(var_1_23, var_1_15);


	// From: Req8Batch133functionizing
	var_1_24 = var_1_25;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -8191);
	assume_abort_if_not(var_1_21 <= 8192);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483647);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((! var_1_2) || (var_1_3 && var_1_4)) ? ((var_1_5 == var_1_6) ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_1 == ((signed short int) -128))) : (var_1_1 == ((signed short int) var_1_7))) && ((var_1_7 > (var_1_9 - var_1_10)) ? (var_1_8 == ((signed long int) (abs (var_1_7)))) : 1)) && (var_1_11 == ((unsigned long int) (min (var_1_10 , var_1_12))))) && ((var_1_8 == -50) ? ((var_1_11 > 10u) ? (var_1_13 == ((unsigned char) (var_1_3 && var_1_14))) : (var_1_13 == ((unsigned char) var_1_15))) : (var_1_13 == ((unsigned char) var_1_15)))) && ((var_1_12 != (var_1_11 + (var_1_8 * 10u))) ? (var_1_16 == ((unsigned char) ((var_1_9 < var_1_5) && (! var_1_15)))) : ((! var_1_2) ? (var_1_16 == ((unsigned char) 0)) : (var_1_16 == ((unsigned char) var_1_15))))) && (((max (var_1_18 , var_1_19)) != (var_1_20 * 9999.5)) ? (var_1_17 == ((signed short int) ((var_1_21 + 2) + -64))) : 1)) && (((var_1_7 / (abs (var_1_23))) > (25 - var_1_10)) ? (var_1_22 == ((unsigned char) var_1_15)) : 1)) && (var_1_24 == ((signed char) var_1_25))
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
