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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13325_1loop.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed long int var_1_2 = 16;
signed long int var_1_3 = 1;
signed short int var_1_4 = -16;
signed short int var_1_5 = -128;
signed short int var_1_6 = 4;
signed short int var_1_7 = 16;
signed short int var_1_8 = -256;
float var_1_9 = 15.8;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
float var_1_12 = 10.3;
float var_1_13 = 15.6;
unsigned long int var_1_14 = 50;
unsigned long int var_1_15 = 256;
float var_1_16 = 2.7;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch13325_1loop
	if (8 >= (var_1_2 + var_1_3)) {
		var_1_1 = (min (var_1_4 , ((var_1_5 + var_1_6) + var_1_7)));
	}


	// From: Req2Batch13325_1loop
	signed short int stepLocal_0 = var_1_7;
	if (var_1_6 != stepLocal_0) {
		var_1_8 = var_1_7;
	}


	// From: Req4Batch13325_1loop
	var_1_14 = var_1_15;


	// From: Req5Batch13325_1loop
	var_1_16 = var_1_13;


	// From: Req3Batch13325_1loop
	unsigned long int stepLocal_2 = var_1_8 + var_1_14;
	signed short int stepLocal_1 = var_1_6;
	if (stepLocal_1 == var_1_5) {
		if (stepLocal_2 < var_1_14) {
			if (var_1_10) {
				if (var_1_11) {
					var_1_9 = var_1_12;
				}
			} else {
				var_1_9 = (max ((0.25f + var_1_13) , var_1_12));
			}
		} else {
			var_1_9 = var_1_12;
		}
	} else {
		var_1_9 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -8191);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((8 >= (var_1_2 + var_1_3)) ? (var_1_1 == ((signed short int) (min (var_1_4 , ((var_1_5 + var_1_6) + var_1_7))))) : 1) && ((var_1_6 != var_1_7) ? (var_1_8 == ((signed short int) var_1_7)) : 1)) && ((var_1_6 == var_1_5) ? (((var_1_8 + var_1_14) < var_1_14) ? (var_1_10 ? (var_1_11 ? (var_1_9 == ((float) var_1_12)) : 1) : (var_1_9 == ((float) (max ((0.25f + var_1_13) , var_1_12))))) : (var_1_9 == ((float) var_1_12))) : (var_1_9 == ((float) var_1_12)))) && (var_1_14 == ((unsigned long int) var_1_15))) && (var_1_16 == ((float) var_1_13))
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
