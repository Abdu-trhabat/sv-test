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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178functionizing.c", 13, "reach_error"); }
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
void functionized0(signed long int, signed long int);
void functionized1(signed long int, signed long int, signed char);
signed long int functionized2(unsigned short int);
signed long int functionized3(signed char);
void functionized4(signed long int, unsigned short int, signed long int, signed short int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 10;
signed char var_1_2 = -1;
signed char var_1_3 = 5;
signed long int var_1_4 = -4;
signed long int var_1_5 = 256;
unsigned char var_1_6 = 0;
signed long int var_1_7 = -64;
signed long int var_1_8 = 8;
signed char var_1_9 = 5;
unsigned short int var_1_10 = 128;
signed char var_1_11 = -8;
signed char var_1_12 = -10;
signed long int var_1_13 = -5;
signed short int var_1_14 = -256;
signed short int var_1_15 = 128;
signed long int var_1_16 = 4;
signed long int var_1_17 = -8;
unsigned char var_1_18 = 1;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
	if ((min (var_1_2 , var_1_3)) != (2 + (functionized0_localFunctionVar1 + functionized0_localFunctionVar0))) {
		if (! var_1_6) {
			if (functionized0_localFunctionVar0 != var_1_3) {
				var_1_1 = var_1_2;
			} else {
				var_1_1 = var_1_3;
			}
		} else {
			var_1_1 = var_1_3;
		}
	} else {
		var_1_1 = var_1_2;
	}
}
void functionized1(signed long int functionized1_localFunctionVar0, signed long int functionized1_localFunctionVar1, signed char functionized1_localFunctionVar2) {
	if (functionized1_localFunctionVar1 < functionized1_localFunctionVar0) {
		if (var_1_6) {
			var_1_7 = functionized1_localFunctionVar2;
		} else {
			var_1_7 = 1;
		}
	}
}
signed long int functionized2(unsigned short int functionized2_localFunctionVar0) {
	return (100 + (var_1_8 / functionized2_localFunctionVar0));
}
signed long int functionized3(signed char functionized3_localFunctionVar0) {
	return ((var_1_10 - var_1_16) + functionized3_localFunctionVar0);
}
void functionized4(signed long int functionized4_localFunctionVar0, unsigned short int functionized4_localFunctionVar1, signed long int functionized4_localFunctionVar2, signed short int functionized4_localFunctionVar3) {
	if (functionized4_localFunctionVar1 <= (max (functionized4_localFunctionVar0 , functionized4_localFunctionVar3))) {
		if ((max (functionized4_localFunctionVar0 , functionized4_localFunctionVar2)) >= var_1_11) {
			var_1_17 = functionized4_localFunctionVar1;
		} else {
			var_1_17 = var_1_16;
		}
	} else {
		var_1_17 = functionized4_localFunctionVar1;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch178functionizing
	functionized0(var_1_5, var_1_4);


	// From: Req2Batch178functionizing
	if (var_1_4 > var_1_2) {
		if (var_1_1 <= var_1_8) {
			functionized1(var_1_1, var_1_4, var_1_3);
		}
	} else {
		var_1_7 = var_1_2;
	}


	// From: Req3Batch178functionizing
	if (functionized2(var_1_10) != var_1_3) {
		var_1_9 = (min (var_1_11 , var_1_12));
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req4Batch178functionizing
	if (var_1_7 <= var_1_5) {
		if ((var_1_10 / (min (var_1_14 , var_1_15))) < var_1_2) {
			var_1_13 = (min (functionized3(var_1_9) , var_1_14));
		}
	}


	// From: Req5Batch178functionizing
	functionized4(var_1_5, var_1_10, var_1_7, var_1_15);


	// From: Req6Batch178functionizing
	var_1_18 = 0;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32768);
	assume_abort_if_not(var_1_14 <= 32767);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((min (var_1_2 , var_1_3)) != (2 + (var_1_4 + var_1_5))) ? ((! var_1_6) ? ((var_1_5 != var_1_3) ? (var_1_1 == ((signed long int) var_1_2)) : (var_1_1 == ((signed long int) var_1_3))) : (var_1_1 == ((signed long int) var_1_3))) : (var_1_1 == ((signed long int) var_1_2))) && ((var_1_4 > var_1_2) ? ((var_1_1 <= var_1_8) ? ((var_1_4 < var_1_1) ? (var_1_6 ? (var_1_7 == ((signed long int) var_1_3)) : (var_1_7 == ((signed long int) 1))) : 1) : 1) : (var_1_7 == ((signed long int) var_1_2)))) && (((100 + (var_1_8 / var_1_10)) != var_1_3) ? (var_1_9 == ((signed char) (min (var_1_11 , var_1_12)))) : (var_1_9 == ((signed char) var_1_11)))) && ((var_1_7 <= var_1_5) ? (((var_1_10 / (min (var_1_14 , var_1_15))) < var_1_2) ? (var_1_13 == ((signed long int) (min (((var_1_10 - var_1_16) + var_1_9) , var_1_14)))) : 1) : 1)) && ((var_1_10 <= (max (var_1_5 , var_1_15))) ? (((max (var_1_5 , var_1_7)) >= var_1_11) ? (var_1_17 == ((signed long int) var_1_10)) : (var_1_17 == ((signed long int) var_1_16))) : (var_1_17 == ((signed long int) var_1_10)))) && (var_1_18 == ((unsigned char) 0))
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
