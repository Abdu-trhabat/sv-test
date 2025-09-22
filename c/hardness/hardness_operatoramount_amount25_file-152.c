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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Amount25.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
signed long int var_1_2 = -5;
float var_1_3 = 3.2;
float var_1_4 = 64.125;
float var_1_5 = 199.5;
float var_1_6 = 3.75;
signed short int var_1_7 = 8;
unsigned char var_1_8 = 1;
unsigned long int var_1_9 = 2;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
signed short int var_1_13 = -4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch152Amount25
	signed long int stepLocal_0 = 10;
	if (stepLocal_0 > (var_1_2 + 5)) {
		if (127.625f != (- var_1_3)) {
			if (var_1_3 <= ((var_1_4 + var_1_5) - var_1_6)) {
				var_1_1 = -2;
			}
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch152Amount25
	unsigned long int stepLocal_1 = var_1_2 % var_1_9;
	if (stepLocal_1 > 1000000000u) {
		if (var_1_6 < var_1_5) {
			var_1_8 = (var_1_10 && (! var_1_11));
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = 0;
	}


	// From: Req3Batch152Amount25
	var_1_12 = var_1_10;


	// From: Req4Batch152Amount25
	var_1_13 = var_1_7;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427388000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427388000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((10 > (var_1_2 + 5)) ? ((127.625f != (- var_1_3)) ? ((var_1_3 <= ((var_1_4 + var_1_5) - var_1_6)) ? (var_1_1 == ((signed short int) -2)) : 1) : (var_1_1 == ((signed short int) var_1_7))) : (var_1_1 == ((signed short int) var_1_7))) && (((var_1_2 % var_1_9) > 1000000000u) ? ((var_1_6 < var_1_5) ? (var_1_8 == ((unsigned char) (var_1_10 && (! var_1_11)))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) 0)))) && (var_1_12 == ((unsigned char) var_1_10))) && (var_1_13 == ((signed short int) var_1_7))
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
