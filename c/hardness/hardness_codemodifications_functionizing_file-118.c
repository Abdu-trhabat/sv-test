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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118functionizing.c", 13, "reach_error"); }
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
void functionized0(float, unsigned char, unsigned char, float);
unsigned char functionized1(void);
void functionized2(unsigned char, unsigned char, unsigned char);
void functionized3(float, signed short int, signed short int, double);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 10;
unsigned char var_1_2 = 10;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 64;
float var_1_5 = 64.75;
float var_1_6 = -0.75;
double var_1_7 = 10.75;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
double var_1_10 = 0.4;
float var_1_11 = 0.44999999999999996;
float var_1_12 = 9.5;
float var_1_13 = 15.375;
double var_1_14 = -0.375;
unsigned char var_1_15 = 0;
double var_1_16 = 1.1;
double var_1_17 = 7.5;
signed short int var_1_18 = -128;
double var_1_19 = 2.5;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(float functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1, unsigned char functionized0_localFunctionVar2, float localFunctionVar3) {
	if (-2 < (functionized0_localFunctionVar2 + var_1_1)) {
		if ((functionized0_localFunctionVar2 * var_1_1) >= functionized0_localFunctionVar1) {
			var_1_5 = functionized0_localFunctionVar0;
		} else {
			var_1_5 = localFunctionVar3;
		}
	} else {
		var_1_5 = functionized0_localFunctionVar0;
	}
}
unsigned char functionized1(void) {
	return (var_1_8 && var_1_9);
}
void functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, unsigned char functionized2_localFunctionVar2) {
	if (functionized2_localFunctionVar1) {
		var_1_18 = (((abs (var_1_4)) + functionized2_localFunctionVar0) + functionized2_localFunctionVar2);
	} else {
		var_1_18 = functionized2_localFunctionVar0;
	}
}
void functionized3(float functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1, signed short int functionized3_localFunctionVar2, double localFunctionVar3) {
	if (((functionized3_localFunctionVar1 + functionized3_localFunctionVar2) & var_1_3) >= var_1_4) {
		var_1_19 = localFunctionVar3;
	} else {
		var_1_19 = functionized3_localFunctionVar0;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch118functionizing
	var_1_1 = -5;


	// From: Req2Batch118functionizing
	var_1_2 = (max (var_1_3 , var_1_4));


	// From: Req3Batch118functionizing
	functionized0(var_1_6, var_1_2, var_1_3, 49.25f);


	// From: Req4Batch118functionizing
	if (functionized1()) {
		var_1_7 = var_1_6;
	}


	// From: Req5Batch118functionizing
	if (((var_1_2 - var_1_3) > (var_1_4 + var_1_1)) && (var_1_5 > var_1_6)) {
		var_1_10 = var_1_6;
	} else {
		var_1_10 = 9.25;
	}


	// From: Req6Batch118functionizing
	if (var_1_10 == var_1_6) {
		var_1_11 = (32.7f + (var_1_12 - var_1_13));
	}


	// From: Req7Batch118functionizing
	if (var_1_9 && (var_1_8 || var_1_15)) {
		var_1_14 = (((var_1_16 + 24.9) + var_1_17) + var_1_12);
	} else {
		var_1_14 = (var_1_13 + var_1_17);
	}


	// From: Req8Batch118functionizing
	if (var_1_8) {
		functionized2(var_1_2, var_1_15, var_1_3);
	}


	// From: Req9Batch118functionizing
	functionized3(var_1_6, var_1_18, var_1_1, 10000.5);
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -115292.1504606845700e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 1152921.504606845700e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_1 == ((signed short int) -5)) && (var_1_2 == ((unsigned char) (max (var_1_3 , var_1_4))))) && ((-2 < (var_1_3 + var_1_1)) ? (((var_1_3 * var_1_1) >= var_1_2) ? (var_1_5 == ((float) var_1_6)) : (var_1_5 == ((float) 49.25f))) : (var_1_5 == ((float) var_1_6)))) && ((var_1_8 && var_1_9) ? (var_1_7 == ((double) var_1_6)) : 1)) && ((((var_1_2 - var_1_3) > (var_1_4 + var_1_1)) && (var_1_5 > var_1_6)) ? (var_1_10 == ((double) var_1_6)) : (var_1_10 == ((double) 9.25)))) && ((var_1_10 == var_1_6) ? (var_1_11 == ((float) (32.7f + (var_1_12 - var_1_13)))) : 1)) && ((var_1_9 && (var_1_8 || var_1_15)) ? (var_1_14 == ((double) (((var_1_16 + 24.9) + var_1_17) + var_1_12))) : (var_1_14 == ((double) (var_1_13 + var_1_17))))) && (var_1_8 ? (var_1_15 ? (var_1_18 == ((signed short int) (((abs (var_1_4)) + var_1_2) + var_1_3))) : (var_1_18 == ((signed short int) var_1_2))) : 1)) && ((((var_1_18 + var_1_1) & var_1_3) >= var_1_4) ? (var_1_19 == ((double) 10000.5)) : (var_1_19 == ((double) var_1_6)))
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
