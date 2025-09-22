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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13normal.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 25;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 8;
unsigned short int var_1_4 = 256;
signed char var_1_5 = 16;
signed char var_1_6 = 10;
signed char var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 50;
signed long int var_1_11 = 1;
float var_1_12 = 4.375;
float var_1_13 = 7.65;
float var_1_14 = 100.75;
float var_1_15 = 32.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch13normal
	if (var_1_2) {
		var_1_1 = (max (var_1_3 , var_1_4));
	}


	// From: Req2Batch13normal
	if ((var_1_1 == var_1_4) || var_1_2) {
		var_1_5 = (var_1_6 - var_1_7);
	} else {
		if (var_1_2 || var_1_8) {
			var_1_5 = var_1_6;
		}
	}


	// From: Req3Batch13normal
	signed char stepLocal_0 = var_1_7;
	if (var_1_4 < stepLocal_0) {
		var_1_9 = var_1_3;
	} else {
		var_1_9 = (var_1_7 + var_1_10);
	}


	// From: Req4Batch13normal
	unsigned short int stepLocal_1 = var_1_10;
	if (var_1_3 > stepLocal_1) {
		if ((var_1_12 * (- var_1_13)) < (- var_1_14)) {
			var_1_11 = var_1_4;
		}
	} else {
		if (var_1_12 < (var_1_13 / var_1_15)) {
			if (var_1_15 > var_1_14) {
				var_1_11 = var_1_4;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((unsigned short int) (max (var_1_3 , var_1_4)))) : 1) && (((var_1_1 == var_1_4) || var_1_2) ? (var_1_5 == ((signed char) (var_1_6 - var_1_7))) : ((var_1_2 || var_1_8) ? (var_1_5 == ((signed char) var_1_6)) : 1))) && ((var_1_4 < var_1_7) ? (var_1_9 == ((unsigned short int) var_1_3)) : (var_1_9 == ((unsigned short int) (var_1_7 + var_1_10))))) && ((var_1_3 > var_1_10) ? (((var_1_12 * (- var_1_13)) < (- var_1_14)) ? (var_1_11 == ((signed long int) var_1_4)) : 1) : ((var_1_12 < (var_1_13 / var_1_15)) ? ((var_1_15 > var_1_14) ? (var_1_11 == ((signed long int) var_1_4)) : 1) : 1))
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
