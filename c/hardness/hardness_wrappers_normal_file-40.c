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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40normal.c", 13, "reach_error"); }
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
signed long int var_1_1 = -4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 63.7;
float var_1_5 = 9999.3;
signed long int var_1_6 = -256;
unsigned char var_1_7 = 64;
signed long int var_1_8 = -2;
signed long int var_1_9 = -10;
signed long int var_1_10 = 5;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 1;
double var_1_13 = 8.4;
float var_1_14 = 128.5;
double var_1_15 = 49.75;
signed char var_1_16 = -2;
signed char var_1_17 = 25;
signed char var_1_18 = -5;
float var_1_19 = 7.5;
signed short int var_1_20 = 1;
signed short int var_1_21 = -256;

// Calibration values

// Last'ed variables
double last_1_var_1_13 = 8.4;
signed short int last_1_var_1_20 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch40normal
	if (var_1_2) {
		if (var_1_3 && (var_1_4 <= (- 63.9f))) {
			if (var_1_4 >= var_1_5) {
				if (var_1_3) {
					var_1_1 = var_1_6;
				}
			}
		}
	}


	// From: Req2Batch40normal
	if (((var_1_1 / var_1_8) / var_1_9) >= (var_1_10 | var_1_6)) {
		var_1_7 = (var_1_11 - var_1_12);
	} else {
		var_1_7 = var_1_12;
	}


	// From: Req3Batch40normal
	if (last_1_var_1_13 != (min (var_1_4 , var_1_14))) {
		var_1_13 = (var_1_15 + (127.4 - 8.25));
	}


	// From: Req4Batch40normal
	if (var_1_3) {
		var_1_16 = (max (var_1_17 , (-2 + var_1_18)));
	}


	// From: Req5Batch40normal
	var_1_19 = var_1_15;


	// From: Req6Batch40normal
	var_1_20 = last_1_var_1_20;


	// From: Req7Batch40normal
	var_1_21 = var_1_18;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 127);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return ((((((var_1_2 ? ((var_1_3 && (var_1_4 <= (- 63.9f))) ? ((var_1_4 >= var_1_5) ? (var_1_3 ? (var_1_1 == ((signed long int) var_1_6)) : 1) : 1) : 1) : 1) && ((((var_1_1 / var_1_8) / var_1_9) >= (var_1_10 | var_1_6)) ? (var_1_7 == ((unsigned char) (var_1_11 - var_1_12))) : (var_1_7 == ((unsigned char) var_1_12)))) && ((last_1_var_1_13 != (min (var_1_4 , var_1_14))) ? (var_1_13 == ((double) (var_1_15 + (127.4 - 8.25)))) : 1)) && (var_1_3 ? (var_1_16 == ((signed char) (max (var_1_17 , (-2 + var_1_18))))) : 1)) && (var_1_19 == ((float) var_1_15))) && (var_1_20 == ((signed short int) last_1_var_1_20))) && (var_1_21 == ((signed short int) var_1_18))
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
