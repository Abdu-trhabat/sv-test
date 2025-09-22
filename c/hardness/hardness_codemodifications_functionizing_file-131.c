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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned char, signed char);
double functionized1(void);
void functionized2(unsigned char, signed char);
void functionized3(signed char);
signed long int functionized4(void);
signed long int functionized5(void);
unsigned char functionized6(unsigned short int, signed char);
signed long int functionized7(void);
unsigned char functionized8(unsigned short int, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
unsigned char var_1_2 = 1;
signed char var_1_3 = 25;
signed char var_1_4 = 50;
signed char var_1_5 = -25;
double var_1_6 = 1.5;
double var_1_7 = 24.625;
double var_1_8 = 0.75;
unsigned char var_1_9 = 10;
unsigned char var_1_10 = 50;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 2;
unsigned short int var_1_17 = 28938;
unsigned short int var_1_18 = 23710;
unsigned short int var_1_19 = 64;
unsigned char var_1_20 = 0;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned char functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1) {
	if (functionized0_localFunctionVar0) {
		var_1_1 = (var_1_3 - functionized0_localFunctionVar1);
	} else {
		if (functionized0_localFunctionVar1 <= var_1_3) {
			var_1_1 = functionized0_localFunctionVar1;
		}
	}
}
double functionized1(void) {
	return (- var_1_8);
}
void functionized2(unsigned char functionized2_localFunctionVar0, signed char functionized2_localFunctionVar1) {
	var_1_9 = (functionized2_localFunctionVar1 + functionized2_localFunctionVar0);
}
void functionized3(signed char functionized3_localFunctionVar0) {
	if (functionized3_localFunctionVar0 > var_1_5) {
		var_1_11 = (! (! var_1_12));
	}
}
signed long int functionized4(void) {
	return (var_1_17 - var_1_9);
}
signed long int functionized5(void) {
	return (min (var_1_10 , var_1_16));
}
unsigned char functionized6(unsigned short int functionized6_localFunctionVar0, signed char functionized6_localFunctionVar1) {
	return (var_1_13 && (functionized6_localFunctionVar0 > (functionized6_localFunctionVar1 % var_1_16)));
}
signed long int functionized7(void) {
	return (var_1_15 / -2);
}
unsigned char functionized8(unsigned short int functionized8_localFunctionVar0, unsigned char functionized8_localFunctionVar1) {
	return ((functionized8_localFunctionVar0 >= var_1_10) && functionized8_localFunctionVar1);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch131functionizing
	functionized0(var_1_2, var_1_4);


	// From: Req2Batch131functionizing
	if ((var_1_6 * var_1_7) < functionized1()) {
		var_1_5 = var_1_3;
	}


	// From: Req3Batch131functionizing
	functionized2(var_1_10, var_1_4);


	// From: Req4Batch131functionizing
	functionized3(var_1_1);


	// From: Req5Batch131functionizing
	if ((var_1_7 * (- var_1_6)) <= (4.25 * var_1_8)) {
		var_1_13 = (var_1_12 && var_1_14);
	}


	// From: Req6Batch131functionizing
	if (500 != (var_1_10 >> var_1_16)) {
		var_1_15 = (min ((functionized4() + (var_1_18 - var_1_4)) , (max (functionized5() , (128 + var_1_19)))));
	} else {
		var_1_15 = var_1_4;
	}


	// From: Req7Batch131functionizing
	if (functionized6(var_1_18, var_1_4)) {
		if (((var_1_3 - var_1_16) * var_1_5) > functionized7()) {
			var_1_20 = (functionized8(var_1_17, var_1_14));
		} else {
			var_1_20 = var_1_12;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 7);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16383);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 ? (var_1_1 == ((signed char) (var_1_3 - var_1_4))) : ((var_1_4 <= var_1_3) ? (var_1_1 == ((signed char) var_1_4)) : 1)) && (((var_1_6 * var_1_7) < (- var_1_8)) ? (var_1_5 == ((signed char) var_1_3)) : 1)) && (var_1_9 == ((unsigned char) (var_1_4 + var_1_10)))) && ((var_1_1 > var_1_5) ? (var_1_11 == ((unsigned char) (! (! var_1_12)))) : 1)) && (((var_1_7 * (- var_1_6)) <= (4.25 * var_1_8)) ? (var_1_13 == ((unsigned char) (var_1_12 && var_1_14))) : 1)) && ((500 != (var_1_10 >> var_1_16)) ? (var_1_15 == ((unsigned short int) (min (((var_1_17 - var_1_9) + (var_1_18 - var_1_4)) , (max ((min (var_1_10 , var_1_16)) , (128 + var_1_19))))))) : (var_1_15 == ((unsigned short int) var_1_4)))) && ((var_1_13 && (var_1_18 > (var_1_4 % var_1_16))) ? ((((var_1_3 - var_1_16) * var_1_5) > (var_1_15 / -2)) ? (var_1_20 == ((unsigned char) ((var_1_17 >= var_1_10) && var_1_14))) : (var_1_20 == ((unsigned char) var_1_12))) : 1)
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
