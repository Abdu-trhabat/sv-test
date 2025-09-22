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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152functionizing.c", 13, "reach_error"); }
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
void functionized0(signed char, signed char, signed char);
void functionized1(signed long int, signed char, signed char, signed char, signed char, unsigned char);
void functionized2(signed char, signed char, signed char, unsigned char, signed char);
float functionized3(float, float);
float functionized4(float);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 16;
signed char var_1_2 = 1;
signed char var_1_3 = 25;
signed char var_1_4 = -4;
signed char var_1_5 = 1;
signed char var_1_6 = 32;
signed char var_1_7 = 4;
signed long int var_1_8 = 4;
signed char var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 31.25;
float var_1_14 = 99.5;
signed long int var_1_15 = -64;
float var_1_16 = 10.4;
float var_1_17 = 49.1;
unsigned short int var_1_18 = 0;
float var_1_19 = 0.1;
float var_1_20 = 0.0;
float var_1_21 = 0.0;
float var_1_22 = 0.4;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed char functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1, signed char functionized0_localFunctionVar2) {
	if (functionized0_localFunctionVar0 >= ((min (functionized0_localFunctionVar2 , functionized0_localFunctionVar1)) * 1)) {
		var_1_5 = functionized0_localFunctionVar2;
	}
}
void functionized1(signed long int functionized1_localFunctionVar0, signed char functionized1_localFunctionVar1, signed char functionized1_localFunctionVar2, signed char functionized1_localFunctionVar3, signed char functionized1_localFunctionVar4, unsigned char functionized1_localFunctionVar5) {
	if ((var_1_2 / var_1_7) < ((var_1_4 | var_1_3) + (functionized1_localFunctionVar3 / functionized1_localFunctionVar0))) {
		var_1_6 = ((max (var_1_2 , functionized1_localFunctionVar4)) - (functionized1_localFunctionVar2 - functionized1_localFunctionVar1));
	} else {
		if (functionized1_localFunctionVar5) {
			var_1_6 = var_1_3;
		} else {
			var_1_6 = functionized1_localFunctionVar4;
		}
	}
}
void functionized2(signed char functionized2_localFunctionVar0, signed char functionized2_localFunctionVar1, signed char functionized2_localFunctionVar2, unsigned char functionized2_localFunctionVar3, signed char functionized2_localFunctionVar4) {
	if (functionized2_localFunctionVar3) {
		if ((max (functionized2_localFunctionVar0 , (functionized2_localFunctionVar2 - functionized2_localFunctionVar1))) >= functionized2_localFunctionVar4) {
			var_1_13 = var_1_14;
		}
	}
}
float functionized3(float functionized3_localFunctionVar0, float functionized3_localFunctionVar1) {
	return (functionized3_localFunctionVar1 / functionized3_localFunctionVar0);
}
float functionized4(float functionized4_localFunctionVar0) {
	return (functionized4_localFunctionVar0 - 64.4f);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch152functionizing
	var_1_1 = (max ((var_1_2 - 25) , (var_1_3 + (1 + var_1_4))));


	// From: Req2Batch152functionizing
	functionized0(var_1_1, var_1_4, var_1_3);


	// From: Req3Batch152functionizing
	functionized1(var_1_8, var_1_11, var_1_10, var_1_1, var_1_9, var_1_12);


	// From: Req4Batch152functionizing
	functionized2(var_1_5, var_1_11, var_1_2, var_1_12, var_1_1);


	// From: Req5Batch152functionizing
	if (var_1_12) {
		var_1_15 = (var_1_2 - (abs (var_1_6)));
	}


	// From: Req6Batch152functionizing
	if ((functionized3(var_1_17, var_1_13)) >= var_1_14) {
		if ((var_1_11 << (abs (var_1_18))) <= var_1_9) {
			var_1_16 = functionized4(var_1_19);
		} else {
			if (var_1_15 >= var_1_1) {
				var_1_16 = (max (var_1_14 , (var_1_19 - (var_1_20 - var_1_21))));
			} else {
				var_1_16 = var_1_22;
			}
		}
	} else {
		var_1_16 = var_1_20;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 126);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -31);
	assume_abort_if_not(var_1_4 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_1 == ((signed char) (max ((var_1_2 - 25) , (var_1_3 + (1 + var_1_4)))))) && ((var_1_1 >= ((min (var_1_3 , var_1_4)) * 1)) ? (var_1_5 == ((signed char) var_1_3)) : 1)) && (((var_1_2 / var_1_7) < ((var_1_4 | var_1_3) + (var_1_1 / var_1_8))) ? (var_1_6 == ((signed char) ((max (var_1_2 , var_1_9)) - (var_1_10 - var_1_11)))) : (var_1_12 ? (var_1_6 == ((signed char) var_1_3)) : (var_1_6 == ((signed char) var_1_9))))) && (var_1_12 ? (((max (var_1_5 , (var_1_2 - var_1_11))) >= var_1_1) ? (var_1_13 == ((float) var_1_14)) : 1) : 1)) && (var_1_12 ? (var_1_15 == ((signed long int) (var_1_2 - (abs (var_1_6))))) : 1)) && (((var_1_13 / var_1_17) >= var_1_14) ? (((var_1_11 << (abs (var_1_18))) <= var_1_9) ? (var_1_16 == ((float) (var_1_19 - 64.4f))) : ((var_1_15 >= var_1_1) ? (var_1_16 == ((float) (max (var_1_14 , (var_1_19 - (var_1_20 - var_1_21)))))) : (var_1_16 == ((float) var_1_22)))) : (var_1_16 == ((float) var_1_20)))
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
