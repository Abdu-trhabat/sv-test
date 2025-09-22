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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6normal.c", 13, "reach_error"); }
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
double var_1_1 = 100.25;
unsigned char var_1_3 = 8;
unsigned char var_1_4 = 0;
double var_1_5 = 1.9;
double var_1_6 = 7.5;
double var_1_7 = 64.25;
signed long int var_1_8 = 2;
signed long int var_1_9 = 1000000000;
signed long int var_1_10 = 1000000000;
signed long int var_1_11 = 1957998270;
float var_1_12 = 50.25;
float var_1_13 = 9.8;
float var_1_14 = 25.5;
float var_1_15 = 3.5;
signed long int var_1_16 = -500;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = 2;
float last_1_var_1_12 = 50.25;
signed long int last_1_var_1_16 = -500;
unsigned char last_1_var_1_17 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch6normal
	if ((max ((- var_1_15) , (last_1_var_1_12 * var_1_6))) < var_1_5) {
		if (var_1_11 != (min (last_1_var_1_8 , var_1_10))) {
			if (last_1_var_1_17) {
				var_1_16 = last_1_var_1_8;
			}
		}
	}


	// From: Req2Batch6normal
	var_1_8 = (((var_1_9 + var_1_10) - last_1_var_1_16) - (var_1_11 - (abs (last_1_var_1_16))));


	// From: Req3Batch6normal
	signed long int stepLocal_1 = var_1_8 - var_1_11;
	if ((min (var_1_16 , var_1_9)) >= stepLocal_1) {
		var_1_12 = var_1_7;
	}


	// From: Req6Batch6normal
	var_1_17 = (((var_1_3 * var_1_9) >= (max (var_1_16 , var_1_8))) || var_1_18);


	// From: Req4Batch6normal
	signed long int stepLocal_2 = var_1_8;
	if (stepLocal_2 < var_1_11) {
		var_1_13 = ((7.386826171811256E18f - (var_1_14 + var_1_15)) - 5.4f);
	} else {
		var_1_13 = (var_1_15 + (min (var_1_14 , var_1_5)));
	}


	// From: Req7Batch6normal
	if (var_1_17) {
		if (var_1_7 > ((abs (var_1_5)) * (var_1_12 * 63.375))) {
			var_1_19 = var_1_18;
		}
	} else {
		var_1_19 = var_1_18;
	}


	// From: Req1Batch6normal
	unsigned char stepLocal_0 = var_1_4;
	if (var_1_19) {
		if (var_1_3 >= stepLocal_0) {
			var_1_1 = (var_1_5 + var_1_6);
		} else {
			var_1_1 = (4.125 - var_1_7);
		}
	} else {
		var_1_1 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 536870911);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 536870911);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return ((((((var_1_19 ? ((var_1_3 >= var_1_4) ? (var_1_1 == ((double) (var_1_5 + var_1_6))) : (var_1_1 == ((double) (4.125 - var_1_7)))) : (var_1_1 == ((double) var_1_5))) && (var_1_8 == ((signed long int) (((var_1_9 + var_1_10) - last_1_var_1_16) - (var_1_11 - (abs (last_1_var_1_16))))))) && (((min (var_1_16 , var_1_9)) >= (var_1_8 - var_1_11)) ? (var_1_12 == ((float) var_1_7)) : 1)) && ((var_1_8 < var_1_11) ? (var_1_13 == ((float) ((7.386826171811256E18f - (var_1_14 + var_1_15)) - 5.4f))) : (var_1_13 == ((float) (var_1_15 + (min (var_1_14 , var_1_5))))))) && (((max ((- var_1_15) , (last_1_var_1_12 * var_1_6))) < var_1_5) ? ((var_1_11 != (min (last_1_var_1_8 , var_1_10))) ? (last_1_var_1_17 ? (var_1_16 == ((signed long int) last_1_var_1_8)) : 1) : 1) : 1)) && (var_1_17 == ((unsigned char) (((var_1_3 * var_1_9) >= (max (var_1_16 , var_1_8))) || var_1_18)))) && (var_1_17 ? ((var_1_7 > ((abs (var_1_5)) * (var_1_12 * 63.375))) ? (var_1_19 == ((unsigned char) var_1_18)) : 1) : (var_1_19 == ((unsigned char) var_1_18)))
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
