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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135has_floats.c", 13, "reach_error"); }
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
float var_1_1 = 10000.0;
unsigned char var_1_2 = 0;
float var_1_4 = 256.0;
float var_1_5 = 256.0;
float var_1_6 = 1000000.0;
float var_1_7 = 10.0;
unsigned char var_1_8 = 64;
signed char var_1_10 = 16;
signed char var_1_11 = 64;
unsigned long int var_1_12 = 5;
signed long int var_1_13 = -8;
unsigned long int var_1_14 = 0;
double var_1_15 = 256.0;
unsigned long int var_1_16 = 16;
unsigned char var_1_17 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch135has_floats
	var_1_10 = (4 - var_1_11);


	// From: Req4Batch135has_floats
	var_1_15 = var_1_7;


	// From: Req5Batch135has_floats
	var_1_16 = var_1_8;


	// From: Req6Batch135has_floats
	var_1_17 = 100;


	// From: Req3Batch135has_floats
	if (var_1_2) {
		if (((4 << var_1_11) + (max (var_1_16 , var_1_8))) > ((min (var_1_10 , var_1_16)) / var_1_13)) {
			var_1_12 = (max (2u , (min ((max (var_1_11 , var_1_8)) , var_1_14))));
		}
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req1Batch135has_floats
	unsigned long int stepLocal_1 = var_1_12;
	signed long int stepLocal_0 = -128;
	if (stepLocal_0 >= var_1_16) {
		var_1_1 = ((var_1_4 + 10.0f) - (var_1_5 + (max (var_1_6 , var_1_7))));
	} else {
		if ((var_1_16 / var_1_8) < stepLocal_1) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_6;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((-128 >= var_1_16) ? (var_1_1 == ((float) ((var_1_4 + 10.0f) - (var_1_5 + (max (var_1_6 , var_1_7)))))) : (((var_1_16 / var_1_8) < var_1_12) ? (var_1_1 == ((float) var_1_4)) : (var_1_1 == ((float) var_1_6)))) && (var_1_10 == ((signed char) (4 - var_1_11)))) && (var_1_2 ? ((((4 << var_1_11) + (max (var_1_16 , var_1_8))) > ((min (var_1_10 , var_1_16)) / var_1_13)) ? (var_1_12 == ((unsigned long int) (max (2u , (min ((max (var_1_11 , var_1_8)) , var_1_14)))))) : 1) : (var_1_12 == ((unsigned long int) var_1_11)))) && (var_1_15 == ((double) var_1_7))) && (var_1_16 == ((unsigned long int) var_1_8))) && (var_1_17 == ((unsigned char) 100))
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
