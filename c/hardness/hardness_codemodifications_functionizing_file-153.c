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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153functionizing.c", 13, "reach_error"); }
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
void functionized1(double, double);
unsigned char functionized2(void);
signed long int functionized3(signed short int);
unsigned char functionized4(signed long int, signed short int);
unsigned char functionized5(void);
unsigned char functionized6(signed short int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = -0.875;
unsigned char var_1_2 = 1;
signed short int var_1_3 = 500;
signed short int var_1_4 = 256;
signed long int var_1_5 = 4;
signed long int var_1_6 = 128;
double var_1_7 = 1000.2;
double var_1_8 = 127.875;
double var_1_9 = 99999.25;
signed short int var_1_10 = 16;
signed char var_1_11 = -8;
double var_1_12 = 16.6;
double var_1_13 = 500.28;
signed char var_1_14 = -64;
signed long int var_1_15 = -25;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(signed short int functionized0_localFunctionVar0) {
	return (var_1_3 + functionized0_localFunctionVar0);
}
void functionized1(double functionized1_localFunctionVar0, double functionized1_localFunctionVar1) {
	if (((functionized1_localFunctionVar1 + 255.72) / 128.5) < ((- functionized1_localFunctionVar0) * var_1_7)) {
		var_1_1 = functionized1_localFunctionVar1;
	} else {
		var_1_1 = var_1_7;
	}
}
unsigned char functionized2(void) {
	return (var_1_1 < (var_1_8 * (max (var_1_9 , var_1_7))));
}
signed long int functionized3(signed short int functionized3_localFunctionVar0) {
	return (32476 - functionized3_localFunctionVar0);
}
unsigned char functionized4(signed long int functionized4_localFunctionVar0, signed short int functionized4_localFunctionVar1) {
	return ((functionized4_localFunctionVar0 + functionized4_localFunctionVar1) < var_1_11);
}
unsigned char functionized5(void) {
	return (! (var_1_6 <= var_1_5));
}
unsigned char functionized6(signed short int functionized6_localFunctionVar0) {
	return ((functionized6_localFunctionVar0 & var_1_5) >= var_1_6);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch153functionizing
	if (var_1_2) {
		if ((functionized0(var_1_4) << var_1_5) > var_1_6) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = (1.06 + (max (var_1_8 , var_1_9)));
		}
	} else {
		functionized1(var_1_8, var_1_9);
	}


	// From: Req2Batch153functionizing
	if (functionized2()) {
		var_1_10 = (var_1_5 - (min (functionized3(var_1_4) , 8)));
	}


	// From: Req3Batch153functionizing
	if (var_1_10 >= (var_1_6 + var_1_3)) {
		var_1_11 = (abs (var_1_5));
	} else {
		var_1_11 = var_1_5;
	}


	// From: Req4Batch153functionizing
	if (functionized4(var_1_5, var_1_4)) {
		var_1_12 = (var_1_13 + var_1_9);
	} else {
		var_1_12 = var_1_7;
	}


	// From: Req5Batch153functionizing
	if (var_1_11 <= var_1_4) {
		if (functionized5()) {
			if (functionized6(var_1_4)) {
				var_1_14 = var_1_5;
			}
		}
	}


	// From: Req6Batch153functionizing
	if ((var_1_16 - (var_1_17 - var_1_5)) <= var_1_11) {
		var_1_15 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16384);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 63);
	assume_abort_if_not(var_1_17 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 ? ((((var_1_3 + var_1_4) << var_1_5) > var_1_6) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) (1.06 + (max (var_1_8 , var_1_9)))))) : ((((var_1_9 + 255.72) / 128.5) < ((- var_1_8) * var_1_7)) ? (var_1_1 == ((double) var_1_9)) : (var_1_1 == ((double) var_1_7)))) && ((var_1_1 < (var_1_8 * (max (var_1_9 , var_1_7)))) ? (var_1_10 == ((signed short int) (var_1_5 - (min ((32476 - var_1_4) , 8))))) : 1)) && ((var_1_10 >= (var_1_6 + var_1_3)) ? (var_1_11 == ((signed char) (abs (var_1_5)))) : (var_1_11 == ((signed char) var_1_5)))) && (((var_1_5 + var_1_4) < var_1_11) ? (var_1_12 == ((double) (var_1_13 + var_1_9))) : (var_1_12 == ((double) var_1_7)))) && ((var_1_11 <= var_1_4) ? ((! (var_1_6 <= var_1_5)) ? (((var_1_4 & var_1_5) >= var_1_6) ? (var_1_14 == ((signed char) var_1_5)) : 1) : 1) : 1)) && (((var_1_16 - (var_1_17 - var_1_5)) <= var_1_11) ? (var_1_15 == ((signed long int) var_1_14)) : 1)
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
