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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11525_1loop.c", 13, "reach_error"); }
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
double var_1_1 = 5.2;
float var_1_2 = 128.4;
float var_1_3 = 9.4;
float var_1_4 = 63.8;
float var_1_5 = 255.625;
double var_1_6 = 10.2;
double var_1_7 = 5.75;
signed long int var_1_8 = -128;
unsigned char var_1_9 = 0;
signed long int var_1_10 = 0;
signed long int var_1_11 = 10;
signed short int var_1_12 = -32;
signed short int var_1_13 = -4;
signed short int var_1_14 = -16;
unsigned short int var_1_15 = 200;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 4;
unsigned short int var_1_18 = 63231;
unsigned short int var_1_19 = 25;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
signed long int var_1_22 = -5;
unsigned short int var_1_23 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch11525_1loop
	if ((var_1_2 * var_1_3) >= (max (var_1_4 , var_1_5))) {
		var_1_1 = (var_1_6 + var_1_7);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch11525_1loop
	unsigned char stepLocal_1 = var_1_9;
	if (stepLocal_1 && var_1_16) {
		var_1_15 = var_1_17;
	} else {
		var_1_15 = (var_1_18 - var_1_19);
	}


	// From: Req5Batch11525_1loop
	var_1_20 = var_1_21;


	// From: Req6Batch11525_1loop
	var_1_22 = 2;


	// From: Req7Batch11525_1loop
	var_1_23 = var_1_18;


	// From: Req2Batch11525_1loop
	if (var_1_20) {
		var_1_8 = ((5 + (max (50 , var_1_10))) - var_1_11);
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch11525_1loop
	signed long int stepLocal_0 = var_1_11;
	if (var_1_22 < stepLocal_0) {
		var_1_12 = (var_1_13 + var_1_14);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -16383);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -16383);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 * var_1_3) >= (max (var_1_4 , var_1_5))) ? (var_1_1 == ((double) (var_1_6 + var_1_7))) : (var_1_1 == ((double) var_1_7))) && (var_1_20 ? (var_1_8 == ((signed long int) ((5 + (max (50 , var_1_10))) - var_1_11))) : (var_1_8 == ((signed long int) var_1_11)))) && ((var_1_22 < var_1_11) ? (var_1_12 == ((signed short int) (var_1_13 + var_1_14))) : 1)) && ((var_1_9 && var_1_16) ? (var_1_15 == ((unsigned short int) var_1_17)) : (var_1_15 == ((unsigned short int) (var_1_18 - var_1_19))))) && (var_1_20 == ((unsigned char) var_1_21))) && (var_1_22 == ((signed long int) 2))) && (var_1_23 == ((unsigned short int) var_1_18))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
