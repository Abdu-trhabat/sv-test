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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
double var_1_6 = 0.04;
double var_1_7 = 24.625;
double var_1_8 = 199.2;
double var_1_9 = 31.5;
double var_1_10 = 4.8;
double var_1_11 = 99999999999.2;
signed long int var_1_12 = 1000;
float var_1_13 = 4.78;
float var_1_14 = 31.95;
signed long int var_1_15 = 50;
signed long int var_1_16 = 25;
signed long int var_1_17 = 128;
unsigned long int var_1_18 = 10;
unsigned long int var_1_19 = 5;

// Calibration values

// Last'ed variables
double last_1_var_1_6 = 0.04;
signed long int last_1_var_1_12 = 1000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch195normal
	if ((var_1_13 - var_1_14) > last_1_var_1_6) {
		var_1_12 = (min ((var_1_3 - last_1_var_1_12) , (min (var_1_15 , var_1_16))));
	} else {
		var_1_12 = (last_1_var_1_12 - (max (var_1_17 , var_1_3)));
	}


	// From: Req4Batch195normal
	if (var_1_12 <= (var_1_17 * (- var_1_12))) {
		var_1_18 = (max (var_1_12 , var_1_19));
	} else {
		var_1_18 = var_1_12;
	}


	// From: Req2Batch195normal
	signed long int stepLocal_0 = var_1_12;
	if (stepLocal_0 <= var_1_18) {
		var_1_6 = (max ((min ((var_1_7 + var_1_8) , var_1_9)) , (min (var_1_10 , var_1_11))));
	} else {
		var_1_6 = 16.2;
	}


	// From: Req1Batch195normal
	if (var_1_12 < var_1_18) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = (var_1_4 && var_1_5);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483647);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483647);
	assume_abort_if_not(var_1_16 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return ((((var_1_12 < var_1_18) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) (var_1_4 && var_1_5)))) && ((var_1_12 <= var_1_18) ? (var_1_6 == ((double) (max ((min ((var_1_7 + var_1_8) , var_1_9)) , (min (var_1_10 , var_1_11)))))) : (var_1_6 == ((double) 16.2)))) && (((var_1_13 - var_1_14) > last_1_var_1_6) ? (var_1_12 == ((signed long int) (min ((var_1_3 - last_1_var_1_12) , (min (var_1_15 , var_1_16)))))) : (var_1_12 == ((signed long int) (last_1_var_1_12 - (max (var_1_17 , var_1_3))))))) && ((var_1_12 <= (var_1_17 * (- var_1_12))) ? (var_1_18 == ((unsigned long int) (max (var_1_12 , var_1_19)))) : (var_1_18 == ((unsigned long int) var_1_12)))
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
