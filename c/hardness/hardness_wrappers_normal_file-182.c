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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182normal.c", 13, "reach_error"); }
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
float var_1_1 = 127.25;
signed long int var_1_2 = 5;
unsigned char var_1_3 = 1;
float var_1_4 = 255.4;
float var_1_5 = 64.2;
float var_1_6 = 128.5;
signed short int var_1_7 = -16;
signed short int var_1_8 = -32;
float var_1_9 = 5.6;
float var_1_10 = 2.125;
float var_1_11 = -0.3;
double var_1_12 = 1.75;
double var_1_13 = 255.5;
float var_1_14 = 49.5;
float var_1_15 = 9999999.3;
float var_1_16 = 7.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch182normal
	if (! var_1_3) {
		var_1_1 = ((min (var_1_4 , var_1_5)) - var_1_6);
	}


	// From: Req2Batch182normal
	signed long int stepLocal_0 = min (var_1_2 , 10);
	if (-16 <= stepLocal_0) {
		var_1_7 = var_1_8;
	} else {
		var_1_7 = (abs (1));
	}


	// From: Req3Batch182normal
	if (var_1_3) {
		var_1_9 = (var_1_10 + var_1_11);
	} else {
		var_1_9 = var_1_4;
	}


	// From: Req4Batch182normal
	var_1_12 = (min ((max (var_1_4 , var_1_11)) , var_1_6));


	// From: Req5Batch182normal
	if (var_1_3) {
		var_1_13 = (max (16.5 , (var_1_4 - 9.99999999975E9)));
	}


	// From: Req6Batch182normal
	if (((min (var_1_4 , var_1_15)) - var_1_5) < ((var_1_6 - var_1_16) * (- var_1_12))) {
		if (var_1_3) {
			var_1_14 = var_1_5;
		} else {
			var_1_14 = 1.8199999999999998f;
		}
	} else {
		var_1_14 = var_1_4;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((! var_1_3) ? (var_1_1 == ((float) ((min (var_1_4 , var_1_5)) - var_1_6))) : 1) && ((-16 <= (min (var_1_2 , 10))) ? (var_1_7 == ((signed short int) var_1_8)) : (var_1_7 == ((signed short int) (abs (1)))))) && (var_1_3 ? (var_1_9 == ((float) (var_1_10 + var_1_11))) : (var_1_9 == ((float) var_1_4)))) && (var_1_12 == ((double) (min ((max (var_1_4 , var_1_11)) , var_1_6))))) && (var_1_3 ? (var_1_13 == ((double) (max (16.5 , (var_1_4 - 9.99999999975E9))))) : 1)) && ((((min (var_1_4 , var_1_15)) - var_1_5) < ((var_1_6 - var_1_16) * (- var_1_12))) ? (var_1_3 ? (var_1_14 == ((float) var_1_5)) : (var_1_14 == ((float) 1.8199999999999998f))) : (var_1_14 == ((float) var_1_4)))
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
