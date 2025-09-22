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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123has_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = 4;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
signed long int var_1_4 = 5;
signed long int var_1_5 = 100000;
signed long int var_1_6 = 0;
unsigned short int var_1_7 = 100;
unsigned short int var_1_8 = 1;
double var_1_9 = -32.0;
double var_1_10 = 5.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch123has_floats
	unsigned char stepLocal_1 = var_1_2;
	signed long int stepLocal_0 = var_1_4;
	if (stepLocal_1 || var_1_3) {
		var_1_1 = ((256 + var_1_4) - (min (var_1_5 , var_1_6)));
	} else {
		if (stepLocal_0 <= var_1_6) {
			var_1_1 = var_1_6;
		}
	}


	// From: Req2Batch123has_floats
	signed long int stepLocal_3 = var_1_1;
	unsigned char stepLocal_2 = (var_1_5 + var_1_1) < (var_1_6 * var_1_4);
	if (var_1_3) {
		if (stepLocal_3 >= var_1_4) {
			if (stepLocal_2 && var_1_2) {
				var_1_7 = var_1_8;
			} else {
				var_1_7 = 5;
			}
		} else {
			var_1_7 = var_1_8;
		}
	}


	// From: Req3Batch123has_floats
	unsigned short int stepLocal_7 = var_1_7;
	unsigned char stepLocal_6 = var_1_2;
	signed long int stepLocal_5 = var_1_4;
	signed long int stepLocal_4 = var_1_1;
	if (var_1_4 <= stepLocal_7) {
		if ((! var_1_3) && stepLocal_6) {
			if (var_1_8 > stepLocal_4) {
				if (stepLocal_5 <= var_1_6) {
					var_1_9 = var_1_10;
				} else {
					var_1_9 = 1.0;
				}
			} else {
				var_1_9 = var_1_10;
			}
		} else {
			var_1_9 = var_1_10;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 || var_1_3) ? (var_1_1 == ((signed long int) ((256 + var_1_4) - (min (var_1_5 , var_1_6))))) : ((var_1_4 <= var_1_6) ? (var_1_1 == ((signed long int) var_1_6)) : 1)) && (var_1_3 ? ((var_1_1 >= var_1_4) ? ((((var_1_5 + var_1_1) < (var_1_6 * var_1_4)) && var_1_2) ? (var_1_7 == ((unsigned short int) var_1_8)) : (var_1_7 == ((unsigned short int) 5))) : (var_1_7 == ((unsigned short int) var_1_8))) : 1)) && ((var_1_4 <= var_1_7) ? (((! var_1_3) && var_1_2) ? ((var_1_8 > var_1_1) ? ((var_1_4 <= var_1_6) ? (var_1_9 == ((double) var_1_10)) : (var_1_9 == ((double) 1.0))) : (var_1_9 == ((double) var_1_10))) : (var_1_9 == ((double) var_1_10))) : 1)
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
