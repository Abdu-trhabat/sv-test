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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned char, double);
void functionized1(unsigned char, unsigned char, unsigned char);
signed long int functionized2(void);
unsigned char functionized3(double, double);
signed long int functionized4(unsigned short int, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned char functionized0_localFunctionVar0, double functionized0_localFunctionVar1) {
	if ((10.8 + var_1_2) <= (- functionized0_localFunctionVar1)) {
		var_1_1 = ((min (1 , var_1_4)) + (var_1_5 - functionized0_localFunctionVar0));
	}
}
void functionized1(unsigned char functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, unsigned char functionized1_localFunctionVar2) {
	if (var_1_3 == var_1_2) {
		var_1_10 = (functionized1_localFunctionVar2 + functionized1_localFunctionVar0);
	} else {
		var_1_10 = functionized1_localFunctionVar1;
	}
}
signed long int functionized2(void) {
	return (max (-8 , var_1_5));
}
unsigned char functionized3(double functionized3_localFunctionVar0, double functionized3_localFunctionVar1) {
	return (var_1_2 != (functionized3_localFunctionVar1 / (abs (functionized3_localFunctionVar0))));
}
signed long int functionized4(unsigned short int functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1) {
	return (functionized4_localFunctionVar1 + functionized4_localFunctionVar0);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch95functionizing
	functionized0(var_1_6, var_1_3);


	// From: Req2Batch95functionizing
	if ((var_1_5 <= var_1_4) && var_1_8) {
		if (var_1_8) {
			var_1_7 = (var_1_6 + (min (5 , var_1_9)));
		} else {
			var_1_7 = (min (var_1_6 , var_1_9));
		}
	} else {
		if ((-8 * var_1_1) < var_1_4) {
			var_1_7 = 1;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch95functionizing
	if (-4 >= var_1_4) {
		functionized1(var_1_6, var_1_5, var_1_1);
	} else {
		var_1_10 = var_1_4;
	}


	// From: Req4Batch95functionizing
	if ((var_1_6 - var_1_1) < ((var_1_10 ^ var_1_7) / functionized2())) {
		if (var_1_3 == var_1_2) {
			var_1_11 = var_1_1;
		}
	}


	// From: Req5Batch95functionizing
	if (functionized3(var_1_13, var_1_3)) {
		var_1_12 = var_1_14;
	}


	// From: Req6Batch95functionizing
	if (128 >= var_1_10) {
		var_1_15 = (var_1_6 + (functionized4(var_1_11, var_1_4)));
	} else {
		var_1_15 = var_1_1;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((10.8 + var_1_2) <= (- var_1_3)) ? (var_1_1 == ((unsigned char) ((min (1 , var_1_4)) + (var_1_5 - var_1_6)))) : 1) && (((var_1_5 <= var_1_4) && var_1_8) ? (var_1_8 ? (var_1_7 == ((signed char) (var_1_6 + (min (5 , var_1_9))))) : (var_1_7 == ((signed char) (min (var_1_6 , var_1_9))))) : (((-8 * var_1_1) < var_1_4) ? (var_1_7 == ((signed char) 1)) : (var_1_7 == ((signed char) var_1_9))))) && ((-4 >= var_1_4) ? ((var_1_3 == var_1_2) ? (var_1_10 == ((signed short int) (var_1_1 + var_1_6))) : (var_1_10 == ((signed short int) var_1_5))) : (var_1_10 == ((signed short int) var_1_4)))) && (((var_1_6 - var_1_1) < ((var_1_10 ^ var_1_7) / (max (-8 , var_1_5)))) ? ((var_1_3 == var_1_2) ? (var_1_11 == ((unsigned short int) var_1_1)) : 1) : 1)) && ((var_1_2 != (var_1_3 / (abs (var_1_13)))) ? (var_1_12 == ((float) var_1_14)) : 1)) && ((128 >= var_1_10) ? (var_1_15 == ((unsigned long int) (var_1_6 + (var_1_4 + var_1_11)))) : (var_1_15 == ((unsigned long int) var_1_1)))
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
