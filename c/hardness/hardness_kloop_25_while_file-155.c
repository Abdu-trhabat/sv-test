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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15525_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 10;
signed short int var_1_2 = -4;
signed short int var_1_3 = 32;
unsigned short int var_1_4 = 1000;
unsigned short int var_1_5 = 64;
signed long int var_1_6 = 64;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
float var_1_10 = 100000.2;
float var_1_11 = 127.5;
float var_1_12 = 4.75;
double var_1_13 = 31.1;
unsigned long int var_1_14 = 1000;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_6 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch15525_while
	if (var_1_2 < var_1_3) {
		var_1_1 = (var_1_4 + (var_1_5 + 64));
	}


	// From: Req3Batch15525_while
	var_1_8 = (! var_1_9);


	// From: Req4Batch15525_while
	var_1_10 = (min (var_1_11 , var_1_12));


	// From: Req5Batch15525_while
	var_1_13 = var_1_11;


	// From: Req6Batch15525_while
	var_1_14 = var_1_1;


	// From: Req2Batch15525_while
	if (last_1_var_1_6 > var_1_3) {
		if (var_1_5 > last_1_var_1_6) {
			if (var_1_4 != (16 | var_1_5)) {
				if (! var_1_8) {
					if (var_1_8) {
						var_1_6 = last_1_var_1_6;
					}
				} else {
					var_1_6 = var_1_4;
				}
			}
		} else {
			var_1_6 = var_1_3;
		}
	} else {
		var_1_6 = last_1_var_1_6;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16384);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
}

int property(void) {
	return ((((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned short int) (var_1_4 + (var_1_5 + 64)))) : 1) && ((last_1_var_1_6 > var_1_3) ? ((var_1_5 > last_1_var_1_6) ? ((var_1_4 != (16 | var_1_5)) ? ((! var_1_8) ? (var_1_8 ? (var_1_6 == ((signed long int) last_1_var_1_6)) : 1) : (var_1_6 == ((signed long int) var_1_4))) : 1) : (var_1_6 == ((signed long int) var_1_3))) : (var_1_6 == ((signed long int) last_1_var_1_6)))) && (var_1_8 == ((unsigned char) (! var_1_9)))) && (var_1_10 == ((float) (min (var_1_11 , var_1_12))))) && (var_1_13 == ((double) var_1_11))) && (var_1_14 == ((unsigned long int) var_1_1))
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
