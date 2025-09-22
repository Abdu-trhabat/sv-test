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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85functionizing.c", 13, "reach_error"); }
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
unsigned long int functionized1(unsigned short int);
void functionized2(unsigned long int, float, float, unsigned long int, unsigned long int);
signed long int functionized3(unsigned char);
double functionized4(double);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 1000;
unsigned short int var_1_2 = 2;
unsigned short int var_1_3 = 8;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
float var_1_7 = 0.6;
unsigned long int var_1_8 = 32;
unsigned long int var_1_9 = 32;
float var_1_10 = 49.359;
float var_1_11 = 5.5;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 1.8;
double var_1_19 = 4.5;
double var_1_20 = 15.5;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(unsigned short int functionized0_localFunctionVar0) {
	return (abs (functionized0_localFunctionVar0));
}
unsigned long int functionized1(unsigned short int functionized1_localFunctionVar0) {
	return (functionized1_localFunctionVar0 + var_1_1);
}
void functionized2(unsigned long int functionized2_localFunctionVar0, float functionized2_localFunctionVar1, float functionized2_localFunctionVar2, unsigned long int functionized2_localFunctionVar3, unsigned long int functionized2_localFunctionVar4) {
	if ((var_1_2 + (var_1_3 * functionized2_localFunctionVar3)) <= ((32u / functionized2_localFunctionVar0) / functionized2_localFunctionVar4)) {
		if (1.25f < functionized2_localFunctionVar2) {
			var_1_7 = 1000000.1f;
		}
	} else {
		var_1_7 = functionized2_localFunctionVar1;
	}
}
signed long int functionized3(unsigned char functionized3_localFunctionVar0) {
	return (abs (functionized3_localFunctionVar0));
}
double functionized4(double functionized4_localFunctionVar0) {
	return (((abs (var_1_19)) + functionized4_localFunctionVar0) - 63.6);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch85functionizing
	if (var_1_2 < ((- var_1_3) * 64)) {
		if (var_1_4) {
			var_1_1 = functionized0(var_1_3);
		} else {
			if (-10000000 < var_1_2) {
				var_1_1 = (abs (max (var_1_3 , 5u)));
			} else {
				var_1_1 = 50u;
			}
		}
	}


	// From: Req2Batch85functionizing
	if (var_1_2 <= functionized1(var_1_3)) {
		var_1_5 = ((var_1_3 == var_1_2) && var_1_6);
	} else {
		var_1_5 = var_1_6;
	}


	// From: Req3Batch85functionizing
	functionized2(var_1_8, var_1_11, var_1_10, var_1_1, var_1_9);


	// From: Req4Batch85functionizing
	if (var_1_7 <= (- (32.8f + var_1_10))) {
		var_1_12 = var_1_3;
	}


	// From: Req5Batch85functionizing
	var_1_13 = (abs (var_1_14));


	// From: Req6Batch85functionizing
	if (var_1_4) {
		var_1_15 = (max (var_1_3 , (var_1_13 + functionized3(var_1_14))));
	}


	// From: Req7Batch85functionizing
	var_1_16 = (var_1_6 && var_1_17);


	// From: Req8Batch85functionizing
	if (var_1_5 || var_1_17) {
		var_1_18 = functionized4(var_1_20);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 < ((- var_1_3) * 64)) ? (var_1_4 ? (var_1_1 == ((unsigned long int) (abs (var_1_3)))) : ((-10000000 < var_1_2) ? (var_1_1 == ((unsigned long int) (abs (max (var_1_3 , 5u))))) : (var_1_1 == ((unsigned long int) 50u)))) : 1) && ((var_1_2 <= (var_1_3 + var_1_1)) ? (var_1_5 == ((unsigned char) ((var_1_3 == var_1_2) && var_1_6))) : (var_1_5 == ((unsigned char) var_1_6)))) && (((var_1_2 + (var_1_3 * var_1_1)) <= ((32u / var_1_8) / var_1_9)) ? ((1.25f < var_1_10) ? (var_1_7 == ((float) 1000000.1f)) : 1) : (var_1_7 == ((float) var_1_11)))) && ((var_1_7 <= (- (32.8f + var_1_10))) ? (var_1_12 == ((unsigned long int) var_1_3)) : 1)) && (var_1_13 == ((unsigned char) (abs (var_1_14))))) && (var_1_4 ? (var_1_15 == ((unsigned long int) (max (var_1_3 , (var_1_13 + (abs (var_1_14))))))) : 1)) && (var_1_16 == ((unsigned char) (var_1_6 && var_1_17)))) && ((var_1_5 || var_1_17) ? (var_1_18 == ((double) (((abs (var_1_19)) + var_1_20) - 63.6))) : 1)
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
