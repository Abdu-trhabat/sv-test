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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(unsigned short int);
signed long int functionized1(signed char, signed char);
signed long int functionized2(signed char);
unsigned char functionized3(signed long int);
signed long int functionized4(void);
unsigned char functionized5(unsigned short int, signed long int);
signed long int functionized6(signed char);
void functionized7(unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
signed long int var_1_2 = 32;
signed long int var_1_3 = 128;
unsigned short int var_1_4 = 32;
unsigned short int var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_13 = -1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned short int var_1_18 = 5;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(unsigned short int functionized0_localFunctionVar0) {
	return (var_1_4 + functionized0_localFunctionVar0);
}
signed long int functionized1(signed char functionized1_localFunctionVar0, signed char functionized1_localFunctionVar1) {
	return (functionized1_localFunctionVar0 - functionized1_localFunctionVar1);
}
signed long int functionized2(signed char functionized2_localFunctionVar0) {
	return (var_1_15 - functionized2_localFunctionVar0);
}
unsigned char functionized3(signed long int functionized3_localFunctionVar0) {
	return (functionized3_localFunctionVar0 >= var_1_12);
}
signed long int functionized4(void) {
	return (var_1_12 + var_1_17);
}
unsigned char functionized5(unsigned short int functionized5_localFunctionVar0, signed long int functionized5_localFunctionVar1) {
	return (functionized5_localFunctionVar0 > functionized5_localFunctionVar1);
}
signed long int functionized6(signed char functionized6_localFunctionVar0) {
	return (min (var_1_17 , functionized6_localFunctionVar0));
}
void functionized7(unsigned char functionized7_localFunctionVar0) {
	var_1_22 = functionized7_localFunctionVar0;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch86functionizing
	if (var_1_2 <= (var_1_3 / -2)) {
		var_1_1 = (57907 - functionized0(var_1_5));
	} else {
		var_1_1 = 1;
	}


	// From: Req2Batch86functionizing
	if (var_1_7) {
		var_1_6 = (var_1_8 || var_1_9);
	}


	// From: Req3Batch86functionizing
	if ((functionized1(var_1_11, var_1_12)) < (abs (min (32 , var_1_1)))) {
		var_1_10 = var_1_11;
	} else {
		if (var_1_6) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = var_1_4;
		}
	}


	// From: Req4Batch86functionizing
	if (! var_1_7) {
		if ((functionized2(var_1_12) * (- var_1_2)) <= var_1_11) {
			var_1_14 = var_1_11;
		}
	}


	// From: Req5Batch86functionizing
	if (functionized3(var_1_10)) {
		var_1_16 = functionized4();
	} else {
		if (functionized5(var_1_18, var_1_13)) {
			var_1_16 = functionized6(var_1_12);
		} else {
			var_1_16 = var_1_12;
		}
	}


	// From: Req6Batch86functionizing
	if (((var_1_5 % var_1_15) + (var_1_18 / var_1_20)) != var_1_14) {
		var_1_19 = var_1_9;
	} else {
		if (! (! var_1_8)) {
			var_1_19 = ((var_1_13 >= var_1_15) || (var_1_9 && var_1_21));
		}
	}


	// From: Req7Batch86functionizing
	functionized7(var_1_15);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16384);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483647);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65535);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 <= (var_1_3 / -2)) ? (var_1_1 == ((unsigned short int) (57907 - (var_1_4 + var_1_5)))) : (var_1_1 == ((unsigned short int) 1))) && (var_1_7 ? (var_1_6 == ((unsigned char) (var_1_8 || var_1_9))) : 1)) && (((var_1_11 - var_1_12) < (abs (min (32 , var_1_1)))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_6 ? (var_1_10 == ((signed long int) var_1_13)) : (var_1_10 == ((signed long int) var_1_4))))) && ((! var_1_7) ? ((((var_1_15 - var_1_12) * (- var_1_2)) <= var_1_11) ? (var_1_14 == ((signed long int) var_1_11)) : 1) : 1)) && ((var_1_10 >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_12 + var_1_17))) : ((var_1_18 > var_1_13) ? (var_1_16 == ((unsigned char) (min (var_1_17 , var_1_12)))) : (var_1_16 == ((unsigned char) var_1_12))))) && ((((var_1_5 % var_1_15) + (var_1_18 / var_1_20)) != var_1_14) ? (var_1_19 == ((unsigned char) var_1_9)) : ((! (! var_1_8)) ? (var_1_19 == ((unsigned char) ((var_1_13 >= var_1_15) || (var_1_9 && var_1_21)))) : 1))) && (var_1_22 == ((unsigned short int) var_1_15))
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
