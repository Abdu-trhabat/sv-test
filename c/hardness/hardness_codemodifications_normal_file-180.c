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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180normal.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 50;
unsigned short int var_1_2 = 64;
unsigned short int var_1_3 = 0;
unsigned short int var_1_4 = 128;
unsigned short int var_1_5 = 8;
double var_1_6 = -0.75;
unsigned char var_1_7 = 1;
double var_1_8 = 32.8;
double var_1_9 = 128.8;
unsigned short int var_1_10 = 64;
unsigned char var_1_11 = 1;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 128;
signed long int var_1_15 = -1;
signed char var_1_16 = 16;
signed char var_1_17 = 1;
signed long int var_1_18 = 100;
float var_1_19 = 3.6;
signed long int var_1_20 = 32;
unsigned char var_1_21 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch180normal
	if (var_1_2 != (var_1_3 & (var_1_4 / var_1_5))) {
		var_1_1 = (var_1_5 + var_1_2);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch180normal
	if (var_1_3 >= var_1_1) {
		if (var_1_7) {
			var_1_6 = (max (var_1_8 , (4.75 + var_1_9)));
		}
	} else {
		if ((min (var_1_1 , var_1_2)) >= var_1_5) {
			var_1_6 = var_1_9;
		}
	}


	// From: Req3Batch180normal
	if (var_1_7) {
		if (! var_1_11) {
			var_1_10 = (var_1_12 + var_1_13);
		} else {
			if (var_1_5 > var_1_2) {
				var_1_10 = var_1_13;
			}
		}
	}


	// From: Req4Batch180normal
	var_1_14 = (min ((var_1_4 - var_1_12) , var_1_15));


	// From: Req5Batch180normal
	if (var_1_14 > (var_1_12 + (var_1_1 / var_1_5))) {
		if (var_1_7) {
			var_1_16 = var_1_17;
		}
	}


	// From: Req6Batch180normal
	if (5 >= var_1_2) {
		var_1_18 = (var_1_12 - (var_1_4 + var_1_5));
	}


	// From: Req7Batch180normal
	var_1_19 = (min (var_1_8 , var_1_9));


	// From: Req8Batch180normal
	if (var_1_17 > (var_1_1 * var_1_4)) {
		var_1_20 = (abs (var_1_4));
	} else {
		if ((var_1_15 * (var_1_21 | var_1_14)) != var_1_10) {
			var_1_20 = -32;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483647);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 255);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 != (var_1_3 & (var_1_4 / var_1_5))) ? (var_1_1 == ((unsigned long int) (var_1_5 + var_1_2))) : (var_1_1 == ((unsigned long int) var_1_5))) && ((var_1_3 >= var_1_1) ? (var_1_7 ? (var_1_6 == ((double) (max (var_1_8 , (4.75 + var_1_9))))) : 1) : (((min (var_1_1 , var_1_2)) >= var_1_5) ? (var_1_6 == ((double) var_1_9)) : 1))) && (var_1_7 ? ((! var_1_11) ? (var_1_10 == ((unsigned short int) (var_1_12 + var_1_13))) : ((var_1_5 > var_1_2) ? (var_1_10 == ((unsigned short int) var_1_13)) : 1)) : 1)) && (var_1_14 == ((signed long int) (min ((var_1_4 - var_1_12) , var_1_15))))) && ((var_1_14 > (var_1_12 + (var_1_1 / var_1_5))) ? (var_1_7 ? (var_1_16 == ((signed char) var_1_17)) : 1) : 1)) && ((5 >= var_1_2) ? (var_1_18 == ((signed long int) (var_1_12 - (var_1_4 + var_1_5)))) : 1)) && (var_1_19 == ((float) (min (var_1_8 , var_1_9))))) && ((var_1_17 > (var_1_1 * var_1_4)) ? (var_1_20 == ((signed long int) (abs (var_1_4)))) : (((var_1_15 * (var_1_21 | var_1_14)) != var_1_10) ? (var_1_20 == ((signed long int) -32)) : 1))
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
