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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned char, unsigned char);
double functionized1(float);
void functionized2(double, float, float, float);
unsigned char functionized3(unsigned long int, signed char, unsigned char);
void functionized4(float, unsigned char, unsigned char, float, float);
unsigned char functionized5(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 3.95;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 10;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
unsigned char var_1_7 = 1;
double var_1_8 = 64.5;
unsigned char var_1_9 = 0;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -32;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned char functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1) {
	if (functionized0_localFunctionVar0 <= functionized0_localFunctionVar1) {
		if (functionized0_localFunctionVar1 > functionized0_localFunctionVar0) {
			var_1_1 = (var_1_4 - var_1_5);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_4;
	}
}
double functionized1(float functionized1_localFunctionVar0) {
	return (max (var_1_1 , (max (functionized1_localFunctionVar0 , 199.78))));
}
void functionized2(double functionized2_localFunctionVar0, float functionized2_localFunctionVar1, float functionized2_localFunctionVar2, float localFunctionVar3) {
	if ((var_1_5 / var_1_11) >= (functionized2_localFunctionVar0 - functionized2_localFunctionVar2)) {
		var_1_10 = (min ((var_1_5 - (var_1_12 - functionized2_localFunctionVar1)) , functionized2_localFunctionVar2));
	} else {
		var_1_10 = localFunctionVar3;
	}
}
unsigned char functionized3(unsigned long int functionized3_localFunctionVar0, signed char functionized3_localFunctionVar1, unsigned char functionized3_localFunctionVar2) {
	return (functionized3_localFunctionVar0 <= (functionized3_localFunctionVar1 * functionized3_localFunctionVar2));
}
void functionized4(float functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, unsigned char functionized4_localFunctionVar2, float functionized4_localFunctionVar3, float localFunctionVar4) {
	if ((functionized4_localFunctionVar0 + functionized4_localFunctionVar3) <= localFunctionVar4) {
		var_1_17 = functionized4_localFunctionVar2;
	} else {
		var_1_17 = functionized4_localFunctionVar1;
	}
}
unsigned char functionized5(void) {
	return (var_1_17 && (var_1_19 && var_1_7));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch2functionizing
	functionized0(var_1_2, var_1_3);


	// From: Req2Batch2functionizing
	if (var_1_7) {
		if (functionized1(var_1_5) != (var_1_4 - var_1_8)) {
			if ((var_1_2 != var_1_3) || var_1_9) {
				var_1_6 = var_1_2;
			} else {
				var_1_6 = 5u;
			}
		} else {
			var_1_6 = var_1_2;
		}
	} else {
		var_1_6 = var_1_2;
	}


	// From: Req3Batch2functionizing
	functionized2(var_1_8, var_1_13, var_1_4, 4.2f);


	// From: Req4Batch2functionizing
	if ((var_1_15 - (min (0 , var_1_16))) > var_1_6) {
		var_1_14 = var_1_12;
	}


	// From: Req5Batch2functionizing
	if (functionized3(var_1_6, var_1_16, var_1_2)) {
		functionized4(var_1_5, var_1_19, var_1_18, var_1_1, 127.025f);
	} else {
		var_1_17 = var_1_19;
	}


	// From: Req6Batch2functionizing
	if (-0.25 < (256.4 - var_1_5)) {
		if (functionized5()) {
			var_1_20 = var_1_15;
		}
	} else {
		var_1_20 = 1;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 <= var_1_3) ? ((var_1_3 > var_1_2) ? (var_1_1 == ((float) (var_1_4 - var_1_5))) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) var_1_4))) && (var_1_7 ? (((max (var_1_1 , (max (var_1_5 , 199.78)))) != (var_1_4 - var_1_8)) ? (((var_1_2 != var_1_3) || var_1_9) ? (var_1_6 == ((unsigned long int) var_1_2)) : (var_1_6 == ((unsigned long int) 5u))) : (var_1_6 == ((unsigned long int) var_1_2))) : (var_1_6 == ((unsigned long int) var_1_2)))) && (((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) ? (var_1_10 == ((float) (min ((var_1_5 - (var_1_12 - var_1_13)) , var_1_4)))) : (var_1_10 == ((float) 4.2f)))) && (((var_1_15 - (min (0 , var_1_16))) > var_1_6) ? (var_1_14 == ((double) var_1_12)) : 1)) && ((var_1_6 <= (var_1_16 * var_1_2)) ? (((var_1_5 + var_1_1) <= 127.025f) ? (var_1_17 == ((unsigned char) var_1_18)) : (var_1_17 == ((unsigned char) var_1_19))) : (var_1_17 == ((unsigned char) var_1_19)))) && ((-0.25 < (256.4 - var_1_5)) ? ((var_1_17 && (var_1_19 && var_1_7)) ? (var_1_20 == ((signed short int) var_1_15)) : 1) : (var_1_20 == ((signed short int) 1)))
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
