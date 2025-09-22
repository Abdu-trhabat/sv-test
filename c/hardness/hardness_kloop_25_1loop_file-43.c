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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4325_1loop.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
float var_1_4 = 64.4;
float var_1_5 = 0.2;
signed short int var_1_7 = -16;
double var_1_8 = 31.75;
double var_1_9 = 50.375;
double var_1_10 = 99.25;
double var_1_11 = 16.4;
double var_1_12 = 64.5;
float var_1_13 = 8.75;
float var_1_14 = 127.1;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 2;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch4325_1loop
	var_1_13 = (128.75f + var_1_14);


	// From: Req5Batch4325_1loop
	var_1_18 = var_1_19;


	// From: Req6Batch4325_1loop
	var_1_20 = var_1_21;


	// From: Req2Batch4325_1loop
	if ((- (var_1_5 / var_1_9)) != var_1_13) {
		if (var_1_4 != (- var_1_9)) {
			var_1_8 = ((var_1_10 + var_1_11) - var_1_12);
		}
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req4Batch4325_1loop
	if (var_1_18) {
		var_1_15 = (var_1_16 + var_1_17);
	}


	// From: Req1Batch4325_1loop
	if (var_1_8 != (max (var_1_13 , (var_1_4 - var_1_5)))) {
		if (var_1_18) {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_8 != (max (var_1_13 , (var_1_4 - var_1_5)))) ? (var_1_18 ? (var_1_1 == ((signed short int) var_1_7)) : 1) : (var_1_1 == ((signed short int) var_1_7))) && (((- (var_1_5 / var_1_9)) != var_1_13) ? ((var_1_4 != (- var_1_9)) ? (var_1_8 == ((double) ((var_1_10 + var_1_11) - var_1_12))) : 1) : (var_1_8 == ((double) var_1_12)))) && (var_1_13 == ((float) (128.75f + var_1_14)))) && (var_1_18 ? (var_1_15 == ((unsigned short int) (var_1_16 + var_1_17))) : 1)) && (var_1_18 == ((unsigned char) var_1_19))) && (var_1_20 == ((unsigned char) var_1_21))
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
