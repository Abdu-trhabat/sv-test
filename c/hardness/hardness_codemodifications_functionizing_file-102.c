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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102functionizing.c", 13, "reach_error"); }
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
float functionized0(float, float);
void functionized1(float, signed long int, float);
void functionized2(double, float);
signed long int functionized3(signed char, signed char);
void functionized4(float, float);
signed long int functionized5(void);
signed long int functionized6(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 8.375;
float var_1_2 = 5.5;
float var_1_3 = 99.3;
float var_1_4 = 63.125;
float var_1_5 = 5.5;
signed char var_1_6 = 25;
signed long int var_1_7 = -1;
float var_1_8 = 10.6;
double var_1_9 = 4.8;
double var_1_10 = 10000.75;
double var_1_11 = 5.25;
signed char var_1_12 = 2;
double var_1_13 = 3.8;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 0;
signed char var_1_16 = -2;
signed char var_1_17 = -100;
double var_1_18 = 25.8;
signed char var_1_19 = -128;
signed char var_1_20 = 5;
signed char var_1_21 = 2;
signed char var_1_22 = 10;
unsigned char var_1_23 = 4;
signed long int var_1_25 = -8;
signed long int var_1_26 = -128;
unsigned char var_1_27 = 128;

// Calibration values

// Last'ed variables

// Additional functions
float functionized0(float functionized0_localFunctionVar0, float functionized0_localFunctionVar1) {
	return ((var_1_2 - functionized0_localFunctionVar1) + functionized0_localFunctionVar0);
}
void functionized1(float functionized1_localFunctionVar0, signed long int functionized1_localFunctionVar1, float functionized1_localFunctionVar2) {
	if ((var_1_6 * -64) == functionized1_localFunctionVar1) {
		var_1_5 = ((var_1_3 - (max (functionized1_localFunctionVar2 , functionized1_localFunctionVar0))) + var_1_4);
	} else {
		var_1_5 = (max (functionized1_localFunctionVar0 , functionized1_localFunctionVar2));
	}
}
void functionized2(double functionized2_localFunctionVar0, float functionized2_localFunctionVar1) {
	var_1_9 = (min (functionized2_localFunctionVar0 , functionized2_localFunctionVar1));
}
signed long int functionized3(signed char functionized3_localFunctionVar0, signed char functionized3_localFunctionVar1) {
	return (functionized3_localFunctionVar0 - functionized3_localFunctionVar1);
}
void functionized4(float functionized4_localFunctionVar0, float functionized4_localFunctionVar1) {
	if (functionized4_localFunctionVar0 > ((min (var_1_9 , var_1_11)) + functionized4_localFunctionVar1)) {
		if (var_1_15) {
			var_1_14 = var_1_12;
		}
	}
}
signed long int functionized5(void) {
	return (var_1_21 + (var_1_22 + 4));
}
signed long int functionized6(void) {
	return (-5 * var_1_21);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch102functionizing
	var_1_1 = (functionized0(var_1_4, var_1_3));


	// From: Req2Batch102functionizing
	functionized1(var_1_8, var_1_7, var_1_2);


	// From: Req3Batch102functionizing
	functionized2(var_1_10, var_1_4);


	// From: Req4Batch102functionizing
	if (var_1_10 >= var_1_2) {
		if ((functionized3(var_1_6, var_1_12)) <= var_1_7) {
			var_1_11 = var_1_13;
		}
	}


	// From: Req5Batch102functionizing
	functionized4(var_1_8, var_1_1);


	// From: Req6Batch102functionizing
	if (var_1_15) {
		if (9.76f > var_1_4) {
			if (var_1_5 <= var_1_10) {
				var_1_16 = var_1_17;
			} else {
				if ((var_1_2 + var_1_10) == ((var_1_8 + var_1_3) - var_1_18)) {
					var_1_16 = var_1_17;
				}
			}
		}
	} else {
		var_1_16 = -1;
	}


	// From: Req7Batch102functionizing
	var_1_19 = (var_1_20 + functionized5());


	// From: Req8Batch102functionizing
	if ((var_1_7 % (min (var_1_25 , var_1_26))) < functionized6()) {
		var_1_23 = (var_1_27 - var_1_12);
	} else {
		var_1_23 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 32);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -15);
	assume_abort_if_not(var_1_22 <= 16);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_1 == ((float) ((var_1_2 - var_1_3) + var_1_4))) && (((var_1_6 * -64) == var_1_7) ? (var_1_5 == ((float) ((var_1_3 - (max (var_1_2 , var_1_8))) + var_1_4))) : (var_1_5 == ((float) (max (var_1_8 , var_1_2)))))) && (var_1_9 == ((double) (min (var_1_10 , var_1_4))))) && ((var_1_10 >= var_1_2) ? (((var_1_6 - var_1_12) <= var_1_7) ? (var_1_11 == ((double) var_1_13)) : 1) : 1)) && ((var_1_8 > ((min (var_1_9 , var_1_11)) + var_1_1)) ? (var_1_15 ? (var_1_14 == ((signed short int) var_1_12)) : 1) : 1)) && (var_1_15 ? ((9.76f > var_1_4) ? ((var_1_5 <= var_1_10) ? (var_1_16 == ((signed char) var_1_17)) : (((var_1_2 + var_1_10) == ((var_1_8 + var_1_3) - var_1_18)) ? (var_1_16 == ((signed char) var_1_17)) : 1)) : 1) : (var_1_16 == ((signed char) -1)))) && (var_1_19 == ((signed char) (var_1_20 + (var_1_21 + (var_1_22 + 4)))))) && (((var_1_7 % (min (var_1_25 , var_1_26))) < (-5 * var_1_21)) ? (var_1_23 == ((unsigned char) (var_1_27 - var_1_12))) : (var_1_23 == ((unsigned char) var_1_12)))
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
