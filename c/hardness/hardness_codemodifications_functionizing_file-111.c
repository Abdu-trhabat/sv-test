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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned long int, signed long int);
void functionized1(unsigned char);
void functionized2(unsigned long int, unsigned char, signed long int);
void functionized3(void);
void functionized4(unsigned char, unsigned char, unsigned char, unsigned long int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 8;
signed long int var_1_2 = -1;
signed long int var_1_3 = 25;
unsigned long int var_1_4 = 1181973178;
unsigned long int var_1_5 = 1000000000;
unsigned long int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = -32;
signed char var_1_12 = 2;
signed char var_1_13 = 2;
unsigned char var_1_14 = 10;
double var_1_15 = 7.5;
double var_1_16 = 32.8;
signed char var_1_17 = -128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 32;
float var_1_22 = 10.5;
unsigned char var_1_23 = 8;
signed long int var_1_24 = -256;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
	if (-16 < var_1_2) {
		if (var_1_2 == (100 - functionized0_localFunctionVar1)) {
			var_1_1 = (((min (functionized0_localFunctionVar0 , 1415909508u)) - (var_1_5 - var_1_6)) + functionized0_localFunctionVar1);
		}
	} else {
		var_1_1 = (2872698422u - 2u);
	}
}
void functionized1(unsigned char localFunctionVar0) {
	if ((max (var_1_2 , var_1_6)) == var_1_5) {
		var_1_7 = (! (! localFunctionVar0));
	}
}
void functionized2(unsigned long int functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, signed long int functionized2_localFunctionVar2) {
	if (((functionized2_localFunctionVar2 * functionized2_localFunctionVar1) + var_1_4) < (var_1_6 + (min (functionized2_localFunctionVar0 , var_1_10)))) {
		var_1_11 = var_1_12;
	} else {
		var_1_11 = 32;
	}
}
void functionized3(void) {
	var_1_15 = var_1_16;
}
void functionized4(unsigned char functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, unsigned char functionized4_localFunctionVar2, unsigned long int functionized4_localFunctionVar3) {
	if (var_1_8 != (functionized4_localFunctionVar2 - (max (functionized4_localFunctionVar1 , functionized4_localFunctionVar0)))) {
		if (functionized4_localFunctionVar0 == functionized4_localFunctionVar3) {
			var_1_17 = var_1_12;
		}
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch111functionizing
	functionized0(var_1_4, var_1_3);


	// From: Req2Batch111functionizing
	functionized1(1);


	// From: Req3Batch111functionizing
	if (var_1_7 && var_1_9) {
		var_1_8 = var_1_10;
	}


	// From: Req4Batch111functionizing
	functionized2(var_1_5, var_1_8, var_1_2);


	// From: Req5Batch111functionizing
	if ((-128 >= (min (var_1_10 , var_1_11))) && var_1_9) {
		var_1_13 = var_1_12;
	}


	// From: Req6Batch111functionizing
	var_1_14 = var_1_10;


	// From: Req7Batch111functionizing
	functionized3();


	// From: Req8Batch111functionizing
	functionized4(var_1_20, var_1_19, var_1_18, var_1_4);


	// From: Req9Batch111functionizing
	if (var_1_15 == var_1_16) {
		var_1_21 = (var_1_19 + var_1_20);
	}


	// From: Req10Batch111functionizing
	var_1_22 = var_1_16;


	// From: Req11Batch111functionizing
	var_1_23 = var_1_19;


	// From: Req12Batch111functionizing
	var_1_24 = -8;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 536870911);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 536870911);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 255);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((((-16 < var_1_2) ? ((var_1_2 == (100 - var_1_3)) ? (var_1_1 == ((unsigned long int) (((min (var_1_4 , 1415909508u)) - (var_1_5 - var_1_6)) + var_1_3))) : 1) : (var_1_1 == ((unsigned long int) (2872698422u - 2u)))) && (((max (var_1_2 , var_1_6)) == var_1_5) ? (var_1_7 == ((unsigned char) (! (! 1)))) : 1)) && ((var_1_7 && var_1_9) ? (var_1_8 == ((unsigned char) var_1_10)) : 1)) && ((((var_1_2 * var_1_8) + var_1_4) < (var_1_6 + (min (var_1_5 , var_1_10)))) ? (var_1_11 == ((signed char) var_1_12)) : (var_1_11 == ((signed char) 32)))) && (((-128 >= (min (var_1_10 , var_1_11))) && var_1_9) ? (var_1_13 == ((signed char) var_1_12)) : 1)) && (var_1_14 == ((unsigned char) var_1_10))) && (var_1_15 == ((double) var_1_16))) && ((var_1_8 != (var_1_18 - (max (var_1_19 , var_1_20)))) ? ((var_1_20 == var_1_4) ? (var_1_17 == ((signed char) var_1_12)) : 1) : 1)) && ((var_1_15 == var_1_16) ? (var_1_21 == ((unsigned char) (var_1_19 + var_1_20))) : 1)) && (var_1_22 == ((float) var_1_16))) && (var_1_23 == ((unsigned char) var_1_19))) && (var_1_24 == ((signed long int) -8))
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
