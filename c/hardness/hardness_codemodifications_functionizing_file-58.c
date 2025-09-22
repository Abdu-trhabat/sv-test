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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58functionizing.c", 13, "reach_error"); }
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
unsigned char functionized0(unsigned char);
void functionized1(signed short int, unsigned char, unsigned char, unsigned char, unsigned long int);
void functionized2(unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 25;
unsigned char var_1_3 = 16;
unsigned char var_1_4 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed long int var_1_14 = -8;
unsigned long int var_1_15 = 128;
signed short int var_1_16 = 100;
unsigned long int var_1_17 = 5;
unsigned short int var_1_18 = 32;
unsigned char var_1_19 = 1;

// Calibration values

// Last'ed variables

// Additional functions
unsigned char functionized0(unsigned char functionized0_localFunctionVar0) {
	return (functionized0_localFunctionVar0 <= var_1_5);
}
void functionized1(signed short int functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, unsigned char functionized1_localFunctionVar2, unsigned char functionized1_localFunctionVar3, unsigned long int localFunctionVar4) {
	if (functionized1_localFunctionVar1 || ((max (functionized1_localFunctionVar0 , var_1_3)) < (min (functionized1_localFunctionVar3 , functionized1_localFunctionVar2)))) {
		var_1_15 = (max (1u , functionized1_localFunctionVar3));
	} else {
		var_1_15 = localFunctionVar4;
	}
}
void functionized2(unsigned char functionized2_localFunctionVar0) {
	var_1_18 = functionized2_localFunctionVar0;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch58functionizing
	if ((var_1_2 / var_1_3) <= 2) {
		if (var_1_3 < (min ((~ var_1_2) , var_1_4))) {
			var_1_1 = (min (var_1_5 , 16));
		} else {
			if (((var_1_6 || var_1_7) && var_1_8) || var_1_9) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = 32;
			}
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch58functionizing
	if (functionized0(var_1_2)) {
		var_1_10 = (var_1_9 || ((var_1_3 != var_1_5) || var_1_11));
	} else {
		var_1_10 = (var_1_12 || var_1_13);
	}


	// From: Req3Batch58functionizing
	if (var_1_5 >= var_1_3) {
		var_1_14 = (min (var_1_2 , var_1_1));
	} else {
		var_1_14 = (32 + var_1_1);
	}


	// From: Req4Batch58functionizing
	functionized1(var_1_16, var_1_8, var_1_2, var_1_4, 32u);


	// From: Req5Batch58functionizing
	if (var_1_4 < (32 / var_1_3)) {
		if (var_1_9 || var_1_7) {
			var_1_17 = var_1_2;
		}
	}


	// From: Req6Batch58functionizing
	functionized2(var_1_1);


	// From: Req7Batch58functionizing
	if ((var_1_16 + var_1_14) < 1) {
		if (var_1_12) {
			if (var_1_9) {
				var_1_19 = var_1_11;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -32768);
	assume_abort_if_not(var_1_16 <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 / var_1_3) <= 2) ? ((var_1_3 < (min ((~ var_1_2) , var_1_4))) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 16)))) : ((((var_1_6 || var_1_7) && var_1_8) || var_1_9) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 32)))) : (var_1_1 == ((unsigned char) var_1_5))) && ((var_1_2 <= var_1_5) ? (var_1_10 == ((unsigned char) (var_1_9 || ((var_1_3 != var_1_5) || var_1_11)))) : (var_1_10 == ((unsigned char) (var_1_12 || var_1_13))))) && ((var_1_5 >= var_1_3) ? (var_1_14 == ((signed long int) (min (var_1_2 , var_1_1)))) : (var_1_14 == ((signed long int) (32 + var_1_1))))) && ((var_1_8 || ((max (var_1_16 , var_1_3)) < (min (var_1_4 , var_1_2)))) ? (var_1_15 == ((unsigned long int) (max (1u , var_1_4)))) : (var_1_15 == ((unsigned long int) 32u)))) && ((var_1_4 < (32 / var_1_3)) ? ((var_1_9 || var_1_7) ? (var_1_17 == ((unsigned long int) var_1_2)) : 1) : 1)) && (var_1_18 == ((unsigned short int) var_1_1))) && (((var_1_16 + var_1_14) < 1) ? (var_1_12 ? (var_1_9 ? (var_1_19 == ((unsigned char) var_1_11)) : 1) : 1) : 1)
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
