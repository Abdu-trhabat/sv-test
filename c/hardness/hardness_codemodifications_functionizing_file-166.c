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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(unsigned short int, unsigned short int);
unsigned char functionized1(unsigned short int);
signed long int functionized2(unsigned short int);
void functionized3(float, signed long int, unsigned short int, float);
unsigned char functionized4(unsigned short int);
void functionized5(float, unsigned short int, unsigned short int);
void functionized6(unsigned short int, unsigned short int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 128;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 25;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 64;
signed long int var_1_9 = 32;
unsigned short int var_1_10 = 41078;
unsigned short int var_1_11 = 0;
unsigned short int var_1_12 = 0;
float var_1_13 = 64.6;
float var_1_14 = 7.5;
float var_1_15 = 63.4;
float var_1_16 = 10.375;
float var_1_17 = 10.5;
float var_1_18 = 31.25;
float var_1_19 = 15.75;
float var_1_20 = 49.625;
signed short int var_1_21 = 10;
signed short int var_1_22 = 16;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(unsigned short int functionized0_localFunctionVar0, unsigned short int functionized0_localFunctionVar1) {
	return (functionized0_localFunctionVar1 * functionized0_localFunctionVar0);
}
unsigned char functionized1(unsigned short int functionized1_localFunctionVar0) {
	return (var_1_3 <= functionized1_localFunctionVar0);
}
signed long int functionized2(unsigned short int functionized2_localFunctionVar0) {
	return (var_1_10 - (functionized2_localFunctionVar0 + var_1_12));
}
void functionized3(float functionized3_localFunctionVar0, signed long int functionized3_localFunctionVar1, unsigned short int functionized3_localFunctionVar2, float functionized3_localFunctionVar3) {
	if (var_1_5 || var_1_7) {
		var_1_13 = (var_1_14 + functionized3_localFunctionVar3);
	} else {
		if (((max (var_1_14 , functionized3_localFunctionVar3)) * var_1_16) <= var_1_17) {
			if (functionized3_localFunctionVar1 == functionized3_localFunctionVar2) {
				var_1_13 = (var_1_18 - (min (functionized3_localFunctionVar0 , 2.225f)));
			}
		} else {
			var_1_13 = functionized3_localFunctionVar3;
		}
	}
}
unsigned char functionized4(unsigned short int functionized4_localFunctionVar0) {
	return (functionized4_localFunctionVar0 > var_1_11);
}
void functionized5(float functionized5_localFunctionVar0, unsigned short int functionized5_localFunctionVar1, unsigned short int functionized5_localFunctionVar2) {
	if (var_1_15 < (- functionized5_localFunctionVar0)) {
		var_1_21 = (min (functionized5_localFunctionVar2 , functionized5_localFunctionVar1));
	} else {
		if (var_1_5) {
			if (var_1_1) {
				var_1_21 = functionized5_localFunctionVar2;
			}
		} else {
			var_1_21 = functionized5_localFunctionVar1;
		}
	}
}
void functionized6(unsigned short int functionized6_localFunctionVar0, unsigned short int functionized6_localFunctionVar1) {
	if (var_1_1) {
		if (10 == (functionized6_localFunctionVar0 + var_1_3)) {
			var_1_22 = (functionized6_localFunctionVar1 - functionized6_localFunctionVar0);
		} else {
			var_1_22 = functionized6_localFunctionVar0;
		}
	} else {
		var_1_22 = functionized6_localFunctionVar1;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch166functionizing
	if (var_1_2 <= var_1_3) {
		if (var_1_2 > (functionized0(var_1_6, var_1_3))) {
			var_1_1 = (! (functionized1(var_1_2) || var_1_7));
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req2Batch166functionizing
	if (var_1_2 != var_1_6) {
		var_1_8 = functionized2(var_1_11);
	}


	// From: Req3Batch166functionizing
	functionized3(var_1_19, var_1_9, var_1_12, var_1_15);


	// From: Req4Batch166functionizing
	if (functionized4(var_1_3)) {
		var_1_20 = (min ((abs (63.5f)) , var_1_15));
	}


	// From: Req5Batch166functionizing
	functionized5(var_1_17, var_1_11, var_1_12);


	// From: Req6Batch166functionizing
	functionized6(var_1_11, var_1_12);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 <= var_1_3) ? ((var_1_2 > (var_1_3 * var_1_6)) ? (var_1_1 == ((unsigned char) (! ((var_1_3 <= var_1_2) || var_1_7)))) : (var_1_1 == ((unsigned char) var_1_7))) : 1) && ((var_1_2 != var_1_6) ? (var_1_8 == ((unsigned short int) (var_1_10 - (var_1_11 + var_1_12)))) : 1)) && ((var_1_5 || var_1_7) ? (var_1_13 == ((float) (var_1_14 + var_1_15))) : ((((max (var_1_14 , var_1_15)) * var_1_16) <= var_1_17) ? ((var_1_9 == var_1_12) ? (var_1_13 == ((float) (var_1_18 - (min (var_1_19 , 2.225f))))) : 1) : (var_1_13 == ((float) var_1_15))))) && ((var_1_3 > var_1_11) ? (var_1_20 == ((float) (min ((abs (63.5f)) , var_1_15)))) : 1)) && ((var_1_15 < (- var_1_17)) ? (var_1_21 == ((signed short int) (min (var_1_12 , var_1_11)))) : (var_1_5 ? (var_1_1 ? (var_1_21 == ((signed short int) var_1_12)) : 1) : (var_1_21 == ((signed short int) var_1_11))))) && (var_1_1 ? ((10 == (var_1_11 + var_1_3)) ? (var_1_22 == ((signed short int) (var_1_12 - var_1_11))) : (var_1_22 == ((signed short int) var_1_11))) : (var_1_22 == ((signed short int) var_1_12)))
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
