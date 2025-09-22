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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194stepLocals.c", 13, "reach_error"); }
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
float var_1_1 = 255.75;
double var_1_2 = 1.12;
double var_1_3 = 4.5;
double var_1_4 = 9.5;
float var_1_5 = 127.6;
float var_1_6 = 63.2;
signed char var_1_7 = -8;
signed short int var_1_8 = 5;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 16;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
float var_1_16 = 15.6;
unsigned long int var_1_17 = 0;
signed long int var_1_18 = -64;
unsigned long int var_1_19 = 1000;
signed long int var_1_20 = 16;
signed long int var_1_21 = 128;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 128;
double var_1_25 = 10000000000000.875;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch194stepLocals
	if (var_1_2 < 32.8) {
		if (var_1_2 == (var_1_3 * (- var_1_4))) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = (var_1_6 + 8.6f);
		}
	}


	// From: Req2Batch194stepLocals
	var_1_7 = (abs (-64));


	// From: Req3Batch194stepLocals
	signed long int stepLocal_0 = min (4 , var_1_9);
	if (var_1_7 <= stepLocal_0) {
		var_1_8 = (var_1_9 + 10);
	} else {
		var_1_8 = var_1_7;
	}


	// From: Req4Batch194stepLocals
	unsigned long int stepLocal_1 = var_1_11 / 64u;
	if (128u > stepLocal_1) {
		if (var_1_3 > var_1_5) {
			var_1_10 = (var_1_12 || (var_1_13 && var_1_14));
		}
	} else {
		var_1_10 = var_1_15;
	}


	// From: Req5Batch194stepLocals
	unsigned long int stepLocal_3 = var_1_11;
	unsigned long int stepLocal_2 = var_1_17;
	if ((~ var_1_11) >= stepLocal_2) {
		if (var_1_8 != stepLocal_3) {
			var_1_16 = (abs (var_1_5));
		}
	}


	// From: Req6Batch194stepLocals
	unsigned long int stepLocal_4 = var_1_19;
	if (var_1_4 < var_1_2) {
		if (-0.5f < var_1_16) {
			if (var_1_1 == var_1_2) {
				if (var_1_11 < stepLocal_4) {
					var_1_18 = (min ((var_1_8 + var_1_7) , var_1_9));
				} else {
					var_1_18 = (var_1_20 - var_1_21);
				}
			}
		} else {
			var_1_18 = var_1_7;
		}
	}


	// From: Req7Batch194stepLocals
	var_1_22 = var_1_23;


	// From: Req8Batch194stepLocals
	var_1_24 = 10;


	// From: Req9Batch194stepLocals
	var_1_25 = var_1_6;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -128);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 4294967295);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 < 32.8) ? ((var_1_2 == (var_1_3 * (- var_1_4))) ? (var_1_1 == ((float) var_1_5)) : (var_1_1 == ((float) (var_1_6 + 8.6f)))) : 1) && (var_1_7 == ((signed char) (abs (-64))))) && ((var_1_7 <= (min (4 , var_1_9))) ? (var_1_8 == ((signed short int) (var_1_9 + 10))) : (var_1_8 == ((signed short int) var_1_7)))) && ((128u > (var_1_11 / 64u)) ? ((var_1_3 > var_1_5) ? (var_1_10 == ((unsigned char) (var_1_12 || (var_1_13 && var_1_14)))) : 1) : (var_1_10 == ((unsigned char) var_1_15)))) && (((~ var_1_11) >= var_1_17) ? ((var_1_8 != var_1_11) ? (var_1_16 == ((float) (abs (var_1_5)))) : 1) : 1)) && ((var_1_4 < var_1_2) ? ((-0.5f < var_1_16) ? ((var_1_1 == var_1_2) ? ((var_1_11 < var_1_19) ? (var_1_18 == ((signed long int) (min ((var_1_8 + var_1_7) , var_1_9)))) : (var_1_18 == ((signed long int) (var_1_20 - var_1_21)))) : 1) : (var_1_18 == ((signed long int) var_1_7))) : 1)) && (var_1_22 == ((unsigned short int) var_1_23))) && (var_1_24 == ((unsigned short int) 10))) && (var_1_25 == ((double) var_1_6))
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
