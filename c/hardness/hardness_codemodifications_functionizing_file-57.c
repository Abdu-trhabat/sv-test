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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned char, signed long int, signed long int, signed char);
unsigned char functionized1(unsigned char);
signed long int functionized2(unsigned char, signed char);
unsigned char functionized3(void);
void functionized4(signed char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 5;
signed char var_1_2 = -1;
signed char var_1_3 = 10;
signed long int var_1_4 = 32;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 16;
unsigned long int var_1_9 = 2759533897;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -25;
unsigned long int var_1_16 = 2;
signed long int var_1_17 = 256;
signed short int var_1_18 = 2;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned char functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1, signed long int functionized0_localFunctionVar2, signed char functionized0_localFunctionVar3) {
	if ((var_1_2 - functionized0_localFunctionVar3) > (functionized0_localFunctionVar2 / functionized0_localFunctionVar1)) {
		var_1_1 = (128 - functionized0_localFunctionVar3);
	} else {
		if (! functionized0_localFunctionVar0) {
			var_1_1 = functionized0_localFunctionVar3;
		} else {
			var_1_1 = var_1_7;
		}
	}
}
unsigned char functionized1(unsigned char functionized1_localFunctionVar0) {
	return (functionized1_localFunctionVar0 && (! var_1_13));
}
signed long int functionized2(unsigned char functionized2_localFunctionVar0, signed char functionized2_localFunctionVar1) {
	return (abs (functionized2_localFunctionVar1 + (var_1_1 - functionized2_localFunctionVar0)));
}
unsigned char functionized3(void) {
	return (! var_1_12);
}
void functionized4(signed char functionized4_localFunctionVar0) {
	if (var_1_10) {
		var_1_18 = functionized4_localFunctionVar0;
	} else {
		var_1_18 = var_1_1;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch57functionizing
	functionized0(var_1_6, var_1_5, var_1_4, var_1_3);


	// From: Req2Batch57functionizing
	var_1_8 = (max (var_1_1 , (var_1_9 - var_1_3)));


	// From: Req3Batch57functionizing
	if (var_1_6) {
		if (var_1_11) {
			var_1_10 = functionized1(var_1_12);
		} else {
			if (var_1_9 > (~ 100u)) {
				var_1_10 = var_1_14;
			} else {
				var_1_10 = var_1_13;
			}
		}
	} else {
		var_1_10 = var_1_13;
	}


	// From: Req4Batch57functionizing
	if ((var_1_8 & var_1_5) >= (- (max (var_1_3 , var_1_16)))) {
		var_1_15 = (functionized2(var_1_7, var_1_3));
	} else {
		if (var_1_10) {
			var_1_15 = var_1_7;
		} else {
			var_1_15 = var_1_1;
		}
	}


	// From: Req5Batch57functionizing
	if (functionized3()) {
		if (var_1_1 >= var_1_3) {
			var_1_17 = var_1_7;
		}
	}


	// From: Req6Batch57functionizing
	if (var_1_15 < var_1_5) {
		var_1_18 = (var_1_2 - (max ((var_1_1 + var_1_7) , var_1_3)));
	} else {
		functionized4(var_1_3);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 - var_1_3) > (var_1_4 / var_1_5)) ? (var_1_1 == ((unsigned char) (128 - var_1_3))) : ((! var_1_6) ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) var_1_7)))) && (var_1_8 == ((unsigned long int) (max (var_1_1 , (var_1_9 - var_1_3)))))) && (var_1_6 ? (var_1_11 ? (var_1_10 == ((unsigned char) (var_1_12 && (! var_1_13)))) : ((var_1_9 > (~ 100u)) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) var_1_13)))) : (var_1_10 == ((unsigned char) var_1_13)))) && (((var_1_8 & var_1_5) >= (- (max (var_1_3 , var_1_16)))) ? (var_1_15 == ((signed long int) (abs (var_1_3 + (var_1_1 - var_1_7))))) : (var_1_10 ? (var_1_15 == ((signed long int) var_1_7)) : (var_1_15 == ((signed long int) var_1_1))))) && ((! var_1_12) ? ((var_1_1 >= var_1_3) ? (var_1_17 == ((signed long int) var_1_7)) : 1) : 1)) && ((var_1_15 < var_1_5) ? (var_1_18 == ((signed short int) (var_1_2 - (max ((var_1_1 + var_1_7) , var_1_3))))) : (var_1_10 ? (var_1_18 == ((signed short int) var_1_3)) : (var_1_18 == ((signed short int) var_1_1))))
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
