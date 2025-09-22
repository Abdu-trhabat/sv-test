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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21functionizing.c", 13, "reach_error"); }
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
void functionized0(signed char, signed long int);
void functionized1(unsigned short int, unsigned short int, unsigned char, signed long int);
signed long int functionized2(void);
void functionized3(signed char, unsigned short int, unsigned short int, unsigned char, signed char);
double functionized4(double, double);
void functionized5(unsigned char, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 10;
signed long int var_1_2 = -500;
signed char var_1_3 = 1;
signed char var_1_4 = 100;
signed char var_1_5 = 5;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 21451;
unsigned short int var_1_11 = 16;
unsigned char var_1_12 = 8;
unsigned short int var_1_13 = 16;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 0;
unsigned short int var_1_16 = 53444;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 1.2;
signed char var_1_20 = 1;
double var_1_21 = 10.5;
double var_1_22 = 0.0;
double var_1_23 = 10.4;
double var_1_24 = 50.5;
unsigned short int var_1_25 = 2;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed char functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
	if (var_1_8 == functionized0_localFunctionVar1) {
		var_1_12 = (abs (functionized0_localFunctionVar0));
	}
}
void functionized1(unsigned short int functionized1_localFunctionVar0, unsigned short int functionized1_localFunctionVar1, unsigned char functionized1_localFunctionVar2, signed long int functionized1_localFunctionVar3) {
	if (((var_1_10 + functionized1_localFunctionVar1) << var_1_5) < functionized1_localFunctionVar3) {
		var_1_13 = (min (var_1_7 , (max (functionized1_localFunctionVar2 , (min (functionized1_localFunctionVar1 , var_1_6))))));
	} else {
		var_1_13 = (var_1_16 - (functionized1_localFunctionVar1 + functionized1_localFunctionVar0));
	}
}
signed long int functionized2(void) {
	return (var_1_16 - var_1_10);
}
void functionized3(signed char functionized3_localFunctionVar0, unsigned short int functionized3_localFunctionVar1, unsigned short int functionized3_localFunctionVar2, unsigned char functionized3_localFunctionVar3, signed char functionized3_localFunctionVar4) {
	if ((min ((max (functionized3_localFunctionVar1 , functionized3_localFunctionVar0)) , functionized3_localFunctionVar2)) > (functionized3_localFunctionVar4 * var_1_12)) {
		var_1_17 = functionized3_localFunctionVar3;
	}
}
double functionized4(double functionized4_localFunctionVar0, double functionized4_localFunctionVar1) {
	return ((min (functionized4_localFunctionVar0 , (var_1_22 - var_1_23))) - functionized4_localFunctionVar1);
}
void functionized5(unsigned char functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1) {
	if ((var_1_13 < functionized5_localFunctionVar0) || functionized5_localFunctionVar1) {
		var_1_25 = ((max (var_1_11 , var_1_9)) + var_1_7);
	} else {
		var_1_25 = var_1_7;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch21functionizing
	if (var_1_2 >= -1000000) {
		var_1_1 = (min (var_1_3 , var_1_4));
	} else {
		var_1_1 = (var_1_5 - ((var_1_6 - 8) + var_1_7));
	}


	// From: Req2Batch21functionizing
	var_1_8 = (((var_1_7 + var_1_6) + var_1_9) + (var_1_10 - var_1_11));


	// From: Req3Batch21functionizing
	functionized0(var_1_7, var_1_2);


	// From: Req4Batch21functionizing
	if (var_1_14) {
		functionized1(var_1_11, var_1_9, var_1_12, var_1_15);
	} else {
		var_1_13 = functionized2();
	}


	// From: Req5Batch21functionizing
	functionized3(var_1_6, var_1_11, var_1_8, var_1_18, var_1_3);


	// From: Req6Batch21functionizing
	if (var_1_1 >= (var_1_5 - var_1_20)) {
		var_1_19 = (functionized4(var_1_21, var_1_24));
	}


	// From: Req7Batch21functionizing
	functionized5(var_1_12, var_1_14);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 31);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16383);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 >= -1000000) ? (var_1_1 == ((signed char) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((signed char) (var_1_5 - ((var_1_6 - 8) + var_1_7))))) && (var_1_8 == ((unsigned short int) (((var_1_7 + var_1_6) + var_1_9) + (var_1_10 - var_1_11))))) && ((var_1_8 == var_1_2) ? (var_1_12 == ((unsigned char) (abs (var_1_7)))) : 1)) && (var_1_14 ? ((((var_1_10 + var_1_9) << var_1_5) < var_1_15) ? (var_1_13 == ((unsigned short int) (min (var_1_7 , (max (var_1_12 , (min (var_1_9 , var_1_6)))))))) : (var_1_13 == ((unsigned short int) (var_1_16 - (var_1_9 + var_1_11))))) : (var_1_13 == ((unsigned short int) (var_1_16 - var_1_10))))) && (((min ((max (var_1_11 , var_1_6)) , var_1_8)) > (var_1_3 * var_1_12)) ? (var_1_17 == ((unsigned char) var_1_18)) : 1)) && ((var_1_1 >= (var_1_5 - var_1_20)) ? (var_1_19 == ((double) ((min (var_1_21 , (var_1_22 - var_1_23))) - var_1_24))) : 1)) && (((var_1_13 < var_1_12) || var_1_14) ? (var_1_25 == ((unsigned short int) ((max (var_1_11 , var_1_9)) + var_1_7))) : (var_1_25 == ((unsigned short int) var_1_7)))
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
