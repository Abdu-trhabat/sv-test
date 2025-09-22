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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Amount25.c", 13, "reach_error"); }
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
float var_1_1 = 128.75;
unsigned char var_1_2 = 1;
float var_1_3 = 63.5;
float var_1_4 = 255.5;
unsigned char var_1_5 = 32;
signed short int var_1_6 = -256;
signed long int var_1_7 = 10;
signed long int var_1_8 = 10;
unsigned char var_1_9 = 25;
signed long int var_1_10 = -10;
signed long int var_1_11 = 100000000;
signed long int var_1_12 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch82Amount25
	if (! var_1_2) {
		if (var_1_2) {
			var_1_1 = (max (var_1_3 , var_1_4));
		}
	}


	// From: Req2Batch82Amount25
	signed long int stepLocal_0 = var_1_6 / -2;
	if (stepLocal_0 >= (var_1_7 | var_1_8)) {
		var_1_5 = (abs (var_1_9));
	} else {
		var_1_5 = var_1_9;
	}


	// From: Req3Batch82Amount25
	signed long int stepLocal_1 = var_1_8;
	if (stepLocal_1 != var_1_6) {
		if (var_1_1 >= var_1_4) {
			var_1_10 = (((var_1_9 + var_1_5) + (abs (var_1_11))) - var_1_12);
		} else {
			if (var_1_2) {
				var_1_10 = var_1_6;
			} else {
				var_1_10 = var_1_11;
			}
		}
	} else {
		var_1_10 = var_1_9;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1073741823);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483646);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((! var_1_2) ? (var_1_2 ? (var_1_1 == ((float) (max (var_1_3 , var_1_4)))) : 1) : 1) && (((var_1_6 / -2) >= (var_1_7 | var_1_8)) ? (var_1_5 == ((unsigned char) (abs (var_1_9)))) : (var_1_5 == ((unsigned char) var_1_9)))) && ((var_1_8 != var_1_6) ? ((var_1_1 >= var_1_4) ? (var_1_10 == ((signed long int) (((var_1_9 + var_1_5) + (abs (var_1_11))) - var_1_12))) : (var_1_2 ? (var_1_10 == ((signed long int) var_1_6)) : (var_1_10 == ((signed long int) var_1_11)))) : (var_1_10 == ((signed long int) var_1_9)))
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
