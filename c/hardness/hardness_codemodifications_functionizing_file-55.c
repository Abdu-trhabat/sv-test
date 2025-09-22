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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(signed short int, signed short int, signed short int);
signed long int functionized1(signed char, signed char, signed char);
unsigned char functionized2(unsigned char, unsigned char);
unsigned char functionized3(double, double, double);
signed long int functionized4(void);
signed long int functionized5(signed char);
signed long int functionized6(signed short int);
signed long int functionized7(void);
void functionized8(unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.8;
signed short int var_1_2 = -200;
signed short int var_1_3 = 8;
signed short int var_1_4 = 2;
signed short int var_1_5 = 64;
double var_1_6 = 127.5;
double var_1_7 = 2.6;
double var_1_8 = 4.5;
signed short int var_1_9 = -128;
signed short int var_1_10 = 16;
signed short int var_1_11 = 4;
signed short int var_1_12 = 100;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed long int var_1_15 = 5;
unsigned char var_1_16 = 0;
signed char var_1_17 = -2;
signed char var_1_18 = -4;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
unsigned long int var_1_21 = 25;
unsigned long int var_1_22 = 3797799060;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = 24644;
signed char var_1_29 = 1;
signed char var_1_30 = -1;
unsigned char var_1_31 = 0;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(signed short int functionized0_localFunctionVar0, signed short int functionized0_localFunctionVar1, signed short int functionized0_localFunctionVar2) {
	return (functionized0_localFunctionVar2 * (functionized0_localFunctionVar1 * functionized0_localFunctionVar0));
}
signed long int functionized1(signed char functionized1_localFunctionVar0, signed char functionized1_localFunctionVar1, signed char functionized1_localFunctionVar2) {
	return (functionized1_localFunctionVar2 + (functionized1_localFunctionVar1 - functionized1_localFunctionVar0));
}
unsigned char functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
	return (var_1_24 && (functionized2_localFunctionVar1 && functionized2_localFunctionVar0));
}
unsigned char functionized3(double functionized3_localFunctionVar0, double functionized3_localFunctionVar1, double localFunctionVar2) {
	return ((- (min (functionized3_localFunctionVar1 , functionized3_localFunctionVar0))) >= localFunctionVar2);
}
signed long int functionized4(void) {
	return (var_1_19 - var_1_12);
}
signed long int functionized5(signed char functionized5_localFunctionVar0) {
	return (var_1_20 + functionized5_localFunctionVar0);
}
signed long int functionized6(signed short int functionized6_localFunctionVar0) {
	return (min (var_1_17 , functionized6_localFunctionVar0));
}
signed long int functionized7(void) {
	return (abs (var_1_30));
}
void functionized8(unsigned char functionized8_localFunctionVar0) {
	var_1_31 = functionized8_localFunctionVar0;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch55functionizing
	if (var_1_2 <= (functionized0(var_1_5, var_1_4, var_1_3))) {
		if (var_1_5 > var_1_4) {
			var_1_1 = ((min (var_1_6 , var_1_7)) + var_1_8);
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch55functionizing
	var_1_9 = (min ((var_1_10 - var_1_11) , ((var_1_12 + var_1_13) - var_1_14)));


	// From: Req3Batch55functionizing
	if (var_1_16) {
		var_1_15 = (var_1_14 - var_1_13);
	}


	// From: Req4Batch55functionizing
	var_1_17 = (functionized1(var_1_20, var_1_19, var_1_18));


	// From: Req5Batch55functionizing
	if (var_1_16) {
		var_1_21 = ((var_1_22 - (1000000000u - var_1_13)) - var_1_14);
	}


	// From: Req6Batch55functionizing
	if (var_1_16) {
		var_1_23 = (var_1_24 && var_1_25);
	} else {
		var_1_23 = (functionized2(var_1_26, var_1_25));
	}


	// From: Req7Batch55functionizing
	if (functionized3(var_1_8, var_1_1, -0.875)) {
		if (var_1_23) {
			var_1_27 = functionized4();
		} else {
			var_1_27 = (var_1_13 - (var_1_28 - functionized5(var_1_19)));
		}
	} else {
		var_1_27 = functionized6(var_1_28);
	}


	// From: Req8Batch55functionizing
	var_1_29 = (functionized7() - var_1_20);


	// From: Req9Batch55functionizing
	functionized8(var_1_26);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 3221225470);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 <= (var_1_3 * (var_1_4 * var_1_5))) ? ((var_1_5 > var_1_4) ? (var_1_1 == ((double) ((min (var_1_6 , var_1_7)) + var_1_8))) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_7))) && (var_1_9 == ((signed short int) (min ((var_1_10 - var_1_11) , ((var_1_12 + var_1_13) - var_1_14)))))) && (var_1_16 ? (var_1_15 == ((signed long int) (var_1_14 - var_1_13))) : 1)) && (var_1_17 == ((signed char) (var_1_18 + (var_1_19 - var_1_20))))) && (var_1_16 ? (var_1_21 == ((unsigned long int) ((var_1_22 - (1000000000u - var_1_13)) - var_1_14))) : 1)) && (var_1_16 ? (var_1_23 == ((unsigned char) (var_1_24 && var_1_25))) : (var_1_23 == ((unsigned char) (var_1_24 && (var_1_25 && var_1_26)))))) && (((- (min (var_1_1 , var_1_8))) >= -0.875) ? (var_1_23 ? (var_1_27 == ((signed short int) (var_1_19 - var_1_12))) : (var_1_27 == ((signed short int) (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)))))) : (var_1_27 == ((signed short int) (min (var_1_17 , var_1_28)))))) && (var_1_29 == ((signed char) ((abs (var_1_30)) - var_1_20)))) && (var_1_31 == ((unsigned char) var_1_26))
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
