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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(signed long int, signed long int);
void functionized1(signed long int);
signed long int functionized2(signed long int, signed long int);
signed long int functionized3(signed char);
void functionized4(signed long int);
signed long int functionized5(void);
signed long int functionized6(void);
void functionized7(unsigned long int, unsigned long int, signed long int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -2;
signed long int var_1_2 = -50;
signed long int var_1_3 = 128;
signed long int var_1_4 = -100;
signed long int var_1_5 = -1;
signed long int var_1_6 = 128;
signed long int var_1_7 = 32;
signed long int var_1_8 = -10;
signed long int var_1_9 = 200;
signed char var_1_10 = -32;
unsigned char var_1_11 = 4;
signed long int var_1_12 = 4;
signed long int var_1_13 = 1731242407;
signed long int var_1_14 = 0;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 25;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = 1;
signed char var_1_25 = 10;
unsigned long int var_1_26 = 64;
unsigned long int var_1_27 = 0;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
	return ((min ((functionized0_localFunctionVar1 + var_1_5) , var_1_6)) + (functionized0_localFunctionVar0 + var_1_8));
}
void functionized1(signed long int functionized1_localFunctionVar0) {
	if (128 < var_1_5) {
		var_1_1 = functionized1_localFunctionVar0;
	} else {
		var_1_1 = var_1_9;
	}
}
signed long int functionized2(signed long int functionized2_localFunctionVar0, signed long int functionized2_localFunctionVar1) {
	return (var_1_12 - (functionized2_localFunctionVar0 - functionized2_localFunctionVar1));
}
signed long int functionized3(signed char functionized3_localFunctionVar0) {
	return (min (var_1_15 , functionized3_localFunctionVar0));
}
void functionized4(signed long int functionized4_localFunctionVar0) {
	if (! ((64 * var_1_18) < functionized4_localFunctionVar0)) {
		var_1_22 = var_1_23;
	}
}
signed long int functionized5(void) {
	return (max (var_1_11 , var_1_16));
}
signed long int functionized6(void) {
	return (max ((abs (var_1_15)) , (abs (var_1_16))));
}
void functionized7(unsigned long int functionized7_localFunctionVar0, unsigned long int functionized7_localFunctionVar1, signed long int functionized7_localFunctionVar2) {
	if ((functionized7_localFunctionVar1 * functionized7_localFunctionVar2) < functionized7_localFunctionVar0) {
		if (var_1_24 < var_1_11) {
			var_1_26 = 64u;
		}
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch64functionizing
	if (-8 <= var_1_2) {
		if (var_1_2 == var_1_3) {
			var_1_1 = (functionized0(var_1_7, var_1_4));
		}
	} else {
		functionized1(var_1_8);
	}


	// From: Req2Batch64functionizing
	if ((var_1_4 >> var_1_11) < (functionized2(var_1_13, var_1_14))) {
		var_1_10 = (var_1_11 + functionized3(var_1_16));
	} else {
		var_1_10 = (var_1_17 + var_1_11);
	}


	// From: Req3Batch64functionizing
	if (var_1_10 != var_1_8) {
		var_1_18 = (min (var_1_14 , var_1_13));
	}


	// From: Req4Batch64functionizing
	var_1_19 = ((var_1_20 - var_1_11) - var_1_21);


	// From: Req5Batch64functionizing
	functionized4(var_1_1);


	// From: Req6Batch64functionizing
	if (((var_1_11 - var_1_25) + var_1_17) > var_1_21) {
		var_1_24 = functionized5();
	} else {
		var_1_24 = functionized6();
	}


	// From: Req7Batch64functionizing
	functionized7(var_1_27, var_1_18, var_1_1);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -536870911);
	assume_abort_if_not(var_1_4 <= 536870912);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -536870911);
	assume_abort_if_not(var_1_7 <= 536870912);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -536870911);
	assume_abort_if_not(var_1_8 <= 536870911);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 30);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1073741823);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 16382);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((-8 <= var_1_2) ? ((var_1_2 == var_1_3) ? (var_1_1 == ((signed long int) ((min ((var_1_4 + var_1_5) , var_1_6)) + (var_1_7 + var_1_8)))) : 1) : ((128 < var_1_5) ? (var_1_1 == ((signed long int) var_1_8)) : (var_1_1 == ((signed long int) var_1_9)))) && (((var_1_4 >> var_1_11) < (var_1_12 - (var_1_13 - var_1_14))) ? (var_1_10 == ((signed char) (var_1_11 + (min (var_1_15 , var_1_16))))) : (var_1_10 == ((signed char) (var_1_17 + var_1_11))))) && ((var_1_10 != var_1_8) ? (var_1_18 == ((unsigned long int) (min (var_1_14 , var_1_13)))) : 1)) && (var_1_19 == ((signed short int) ((var_1_20 - var_1_11) - var_1_21)))) && ((! ((64 * var_1_18) < var_1_1)) ? (var_1_22 == ((unsigned char) var_1_23)) : 1)) && ((((var_1_11 - var_1_25) + var_1_17) > var_1_21) ? (var_1_24 == ((signed char) (max (var_1_11 , var_1_16)))) : (var_1_24 == ((signed char) (max ((abs (var_1_15)) , (abs (var_1_16)))))))) && (((var_1_18 * var_1_1) < var_1_27) ? ((var_1_24 < var_1_11) ? (var_1_26 == ((unsigned long int) 64u)) : 1) : 1)
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
