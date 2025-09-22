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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136stepLocals.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
signed short int var_1_2 = 10;
signed short int var_1_3 = -4;
signed long int var_1_4 = 1000;
signed long int var_1_5 = 5;
signed long int var_1_6 = 32;
float var_1_7 = 0.3;
double var_1_8 = 255.75;
unsigned char var_1_9 = 0;
double var_1_10 = 9999999.32;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 0;
signed char var_1_17 = -1;
signed char var_1_18 = 50;
signed char var_1_19 = 2;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 1516883038;
unsigned long int var_1_22 = 1086059298;
double var_1_23 = 16.85;
double var_1_24 = 127.2;
double var_1_25 = 9.65;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch136stepLocals
	if (((~ var_1_2) & var_1_3) <= ((var_1_4 - var_1_5) ^ var_1_6)) {
		var_1_1 = var_1_7;
	} else {
		var_1_1 = 32.8f;
	}


	// From: Req2Batch136stepLocals
	unsigned char stepLocal_0 = ! (! 0);
	if ((var_1_7 > var_1_1) || stepLocal_0) {
		if (var_1_9) {
			var_1_8 = var_1_7;
		} else {
			var_1_8 = 1.0000000000008E12;
		}
	} else {
		var_1_8 = var_1_7;
	}


	// From: Req3Batch136stepLocals
	if (var_1_9 && var_1_11) {
		if (! var_1_9) {
			var_1_10 = var_1_7;
		}
	}


	// From: Req4Batch136stepLocals
	var_1_12 = ((65103 - 2) - (min (var_1_13 , var_1_14)));


	// From: Req5Batch136stepLocals
	if (var_1_7 >= (max (var_1_10 , 5.25f))) {
		var_1_15 = (max ((min (-5 , var_1_16)) , ((min (var_1_17 , var_1_18)) + var_1_19)));
	} else {
		var_1_15 = (min (var_1_17 , var_1_16));
	}


	// From: Req6Batch136stepLocals
	unsigned short int stepLocal_1 = var_1_13;
	if ((min (var_1_6 , var_1_14)) == stepLocal_1) {
		var_1_20 = ((var_1_21 + var_1_22) - var_1_12);
	}


	// From: Req7Batch136stepLocals
	if (128 < ((min (var_1_13 , var_1_14)) << var_1_15)) {
		var_1_23 = (4.75 + var_1_24);
	} else {
		var_1_23 = (var_1_24 + var_1_25);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 1073741824);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((~ var_1_2) & var_1_3) <= ((var_1_4 - var_1_5) ^ var_1_6)) ? (var_1_1 == ((float) var_1_7)) : (var_1_1 == ((float) 32.8f))) && (((var_1_7 > var_1_1) || (! (! 0))) ? (var_1_9 ? (var_1_8 == ((double) var_1_7)) : (var_1_8 == ((double) 1.0000000000008E12))) : (var_1_8 == ((double) var_1_7)))) && ((var_1_9 && var_1_11) ? ((! var_1_9) ? (var_1_10 == ((double) var_1_7)) : 1) : 1)) && (var_1_12 == ((unsigned short int) ((65103 - 2) - (min (var_1_13 , var_1_14)))))) && ((var_1_7 >= (max (var_1_10 , 5.25f))) ? (var_1_15 == ((signed char) (max ((min (-5 , var_1_16)) , ((min (var_1_17 , var_1_18)) + var_1_19))))) : (var_1_15 == ((signed char) (min (var_1_17 , var_1_16)))))) && (((min (var_1_6 , var_1_14)) == var_1_13) ? (var_1_20 == ((unsigned long int) ((var_1_21 + var_1_22) - var_1_12))) : 1)) && ((128 < ((min (var_1_13 , var_1_14)) << var_1_15)) ? (var_1_23 == ((double) (4.75 + var_1_24))) : (var_1_23 == ((double) (var_1_24 + var_1_25))))
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
