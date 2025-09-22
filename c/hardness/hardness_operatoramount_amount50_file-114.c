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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Amount50.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 10;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 10;
signed short int var_1_8 = -10;
signed short int var_1_9 = -16;
unsigned long int var_1_10 = 200;
float var_1_11 = 500.6;
float var_1_12 = 256.6;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 10;
unsigned short int var_1_16 = 49637;
unsigned long int var_1_17 = 3843750782;
unsigned long int var_1_18 = 3466749644;
unsigned long int var_1_19 = 1243012029;
float var_1_20 = 128.6;
float var_1_21 = 63.8;
unsigned long int var_1_22 = 25;
unsigned long int var_1_23 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 200;
unsigned long int last_1_var_1_22 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch114Amount50
	unsigned char stepLocal_1 = var_1_4;
	unsigned long int stepLocal_0 = last_1_var_1_10 >> var_1_5;
	if ((last_1_var_1_22 <= last_1_var_1_10) && stepLocal_1) {
		if (stepLocal_0 <= 64u) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = 0;
		}
	}


	// From: Req2Batch114Amount50
	if (var_1_1 || var_1_6) {
		var_1_7 = (min (var_1_5 , var_1_8));
	}


	// From: Req7Batch114Amount50
	var_1_20 = var_1_21;


	// From: Req8Batch114Amount50
	var_1_22 = 16u;


	// From: Req9Batch114Amount50
	var_1_23 = var_1_18;


	// From: Req4Batch114Amount50
	if ((var_1_11 - var_1_12) >= var_1_20) {
		if (var_1_1) {
			var_1_10 = var_1_5;
		}
	}


	// From: Req3Batch114Amount50
	unsigned char stepLocal_2 = var_1_1;
	if (var_1_6) {
		var_1_9 = var_1_5;
	} else {
		if (stepLocal_2 && (var_1_23 != var_1_5)) {
			var_1_9 = var_1_5;
		}
	}


	// From: Req5Batch114Amount50
	unsigned short int stepLocal_3 = var_1_5;
	if ((max ((~ 0u) , var_1_23)) > stepLocal_3) {
		var_1_14 = var_1_5;
	}


	// From: Req6Batch114Amount50
	signed long int stepLocal_6 = var_1_16 - 10;
	unsigned char stepLocal_5 = var_1_6;
	unsigned long int stepLocal_4 = var_1_23;
	if (var_1_5 < stepLocal_4) {
		if (stepLocal_5 && var_1_1) {
			if (stepLocal_6 == var_1_23) {
				var_1_15 = (min (((var_1_5 + var_1_16) + 10u) , var_1_14));
			} else {
				var_1_15 = (((max (var_1_17 , var_1_18)) - var_1_5) - var_1_14);
			}
		} else {
			var_1_15 = (var_1_14 + (var_1_19 - (min (var_1_16 , var_1_5))));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 31);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65535);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 3221225470);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 3221225470);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	return ((((((((((last_1_var_1_22 <= last_1_var_1_10) && var_1_4) ? (((last_1_var_1_10 >> var_1_5) <= 64u) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) 0))) : 1) && ((var_1_1 || var_1_6) ? (var_1_7 == ((signed short int) (min (var_1_5 , var_1_8)))) : 1)) && (var_1_6 ? (var_1_9 == ((signed short int) var_1_5)) : ((var_1_1 && (var_1_23 != var_1_5)) ? (var_1_9 == ((signed short int) var_1_5)) : 1))) && (((var_1_11 - var_1_12) >= var_1_20) ? (var_1_1 ? (var_1_10 == ((unsigned long int) var_1_5)) : 1) : 1)) && (((max ((~ 0u) , var_1_23)) > var_1_5) ? (var_1_14 == ((unsigned char) var_1_5)) : 1)) && ((var_1_5 < var_1_23) ? ((var_1_6 && var_1_1) ? (((var_1_16 - 10) == var_1_23) ? (var_1_15 == ((unsigned long int) (min (((var_1_5 + var_1_16) + 10u) , var_1_14)))) : (var_1_15 == ((unsigned long int) (((max (var_1_17 , var_1_18)) - var_1_5) - var_1_14)))) : (var_1_15 == ((unsigned long int) (var_1_14 + (var_1_19 - (min (var_1_16 , var_1_5))))))) : 1)) && (var_1_20 == ((float) var_1_21))) && (var_1_22 == ((unsigned long int) 16u))) && (var_1_23 == ((unsigned long int) var_1_18))
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
