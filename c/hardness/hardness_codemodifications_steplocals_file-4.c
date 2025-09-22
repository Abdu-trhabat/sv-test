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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4stepLocals.c", 13, "reach_error"); }
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


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned short int var_1_2 = 256;
unsigned short int var_1_3 = 128;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
signed short int var_1_7 = 32;
signed long int var_1_8 = 100000000;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 10;
unsigned short int var_1_11 = 100;
unsigned long int var_1_12 = 3727049225;
signed long int var_1_13 = -10;
signed long int var_1_14 = -5;
float var_1_15 = 16.75;
float var_1_16 = 2.6;
float var_1_17 = 1000000000000.5;
float var_1_18 = 10.6;
float var_1_19 = 1.25;
signed short int var_1_20 = 0;
signed short int var_1_21 = 64;
signed short int var_1_22 = 8;
signed short int var_1_23 = 256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch4stepLocals
	if (var_1_2 <= var_1_3) {
		if ((- var_1_3) > var_1_2) {
			var_1_1 = 0;
		}
	} else {
		var_1_1 = (var_1_4 || var_1_5);
	}


	// From: Req2Batch4stepLocals
	signed long int stepLocal_0 = var_1_2 * (var_1_3 + var_1_7);
	if (var_1_5) {
		if (stepLocal_0 > var_1_8) {
			var_1_6 = 256;
		}
	}


	// From: Req3Batch4stepLocals
	signed short int stepLocal_2 = var_1_7;
	unsigned char stepLocal_1 = var_1_4;
	if (stepLocal_1 || var_1_1) {
		var_1_9 = (min (32 , var_1_10));
	} else {
		if (stepLocal_2 >= var_1_3) {
			var_1_9 = var_1_10;
		} else {
			var_1_9 = 100;
		}
	}


	// From: Req4Batch4stepLocals
	if ((var_1_12 - var_1_2) < var_1_9) {
		var_1_11 = (abs (var_1_10));
	}


	// From: Req5Batch4stepLocals
	signed long int stepLocal_5 = var_1_8;
	unsigned short int stepLocal_4 = var_1_11;
	unsigned char stepLocal_3 = var_1_8 >= var_1_11;
	if (stepLocal_5 < var_1_6) {
		if (var_1_4 && stepLocal_3) {
			if (var_1_6 <= stepLocal_4) {
				if (var_1_1) {
					var_1_13 = var_1_2;
				} else {
					var_1_13 = var_1_6;
				}
			} else {
				var_1_13 = var_1_11;
			}
		}
	} else {
		var_1_13 = var_1_14;
	}


	// From: Req6Batch4stepLocals
	if (var_1_4) {
		var_1_15 = (max ((max (var_1_16 , var_1_17)) , (max ((var_1_18 + var_1_19) , 128.25f))));
	}


	// From: Req7Batch4stepLocals
	signed long int stepLocal_6 = var_1_14;
	if (stepLocal_6 != 16) {
		var_1_20 = (min ((var_1_21 - var_1_22) , var_1_23));
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
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32768);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483647);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32767);
	assume_abort_if_not(var_1_23 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 <= var_1_3) ? (((- var_1_3) > var_1_2) ? (var_1_1 == ((unsigned char) 0)) : 1) : (var_1_1 == ((unsigned char) (var_1_4 || var_1_5)))) && (var_1_5 ? (((var_1_2 * (var_1_3 + var_1_7)) > var_1_8) ? (var_1_6 == ((unsigned short int) 256)) : 1) : 1)) && ((var_1_4 || var_1_1) ? (var_1_9 == ((unsigned short int) (min (32 , var_1_10)))) : ((var_1_7 >= var_1_3) ? (var_1_9 == ((unsigned short int) var_1_10)) : (var_1_9 == ((unsigned short int) 100))))) && (((var_1_12 - var_1_2) < var_1_9) ? (var_1_11 == ((unsigned short int) (abs (var_1_10)))) : 1)) && ((var_1_8 < var_1_6) ? ((var_1_4 && (var_1_8 >= var_1_11)) ? ((var_1_6 <= var_1_11) ? (var_1_1 ? (var_1_13 == ((signed long int) var_1_2)) : (var_1_13 == ((signed long int) var_1_6))) : (var_1_13 == ((signed long int) var_1_11))) : 1) : (var_1_13 == ((signed long int) var_1_14)))) && (var_1_4 ? (var_1_15 == ((float) (max ((max (var_1_16 , var_1_17)) , (max ((var_1_18 + var_1_19) , 128.25f)))))) : 1)) && ((var_1_14 != 16) ? (var_1_20 == ((signed short int) (min ((var_1_21 - var_1_22) , var_1_23)))) : 1)
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
