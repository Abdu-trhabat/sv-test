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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119100_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 50;
unsigned char var_1_2 = 25;
signed short int var_1_3 = -100;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 5;
unsigned long int var_1_11 = 3644703036;
signed short int var_1_12 = -4;
signed short int var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
float var_1_16 = 16.5;
float var_1_17 = 64.4;
float var_1_18 = 9999999999.75;
float var_1_19 = 7.55;
float var_1_20 = 3.5;
float var_1_21 = 127.95;
unsigned long int var_1_22 = 50;
signed char var_1_23 = 50;
signed char var_1_24 = -2;
signed char var_1_25 = 2;
signed char var_1_26 = 0;
signed char var_1_27 = 25;
unsigned char var_1_28 = 128;
unsigned short int var_1_29 = 64;
unsigned short int var_1_31 = 22716;
unsigned short int var_1_32 = 55624;
unsigned short int var_1_33 = 64;
unsigned short int var_1_34 = 1;
float var_1_35 = 100.4;
signed char var_1_36 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 5;
signed short int last_1_var_1_13 = 0;
unsigned long int last_1_var_1_22 = 50;
unsigned short int last_1_var_1_29 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch119100_while
	unsigned char stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = last_1_var_1_13;
	signed long int stepLocal_0 = last_1_var_1_13;
	if (stepLocal_0 <= (last_1_var_1_13 + var_1_2)) {
		if (stepLocal_2 == last_1_var_1_9) {
			if (var_1_2 != stepLocal_1) {
				var_1_9 = 128u;
			} else {
				var_1_9 = (abs (var_1_11 - last_1_var_1_9));
			}
		} else {
			var_1_9 = (var_1_11 - var_1_2);
		}
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req2Batch119100_while
	var_1_3 = last_1_var_1_29;


	// From: Req6Batch119100_while
	unsigned long int stepLocal_3 = var_1_2 * last_1_var_1_22;
	if (((min (var_1_11 , last_1_var_1_29)) & (last_1_var_1_29 | -8)) >= stepLocal_3) {
		var_1_12 = (min (var_1_2 , last_1_var_1_29));
	} else {
		var_1_12 = last_1_var_1_29;
	}


	// From: Req1Batch119100_while
	var_1_1 = var_1_2;


	// From: Req4Batch119100_while
	var_1_7 = (! var_1_8);


	// From: Req12Batch119100_while
	var_1_28 = var_1_2;


	// From: Req14Batch119100_while
	var_1_34 = var_1_32;


	// From: Req15Batch119100_while
	var_1_35 = var_1_19;


	// From: Req16Batch119100_while
	var_1_36 = var_1_26;


	// From: Req7Batch119100_while
	var_1_13 = (max ((var_1_9 + var_1_2) , var_1_3));


	// From: Req9Batch119100_while
	signed short int stepLocal_4 = var_1_12;
	if (var_1_3 > stepLocal_4) {
		var_1_16 = (min (var_1_17 , var_1_18));
	} else {
		var_1_16 = ((var_1_19 + var_1_20) - (25.25f + var_1_21));
	}


	// From: Req10Batch119100_while
	if (var_1_6) {
		var_1_22 = (var_1_11 - ((abs (var_1_2)) + (max (var_1_28 , 100u))));
	} else {
		var_1_22 = ((2u + var_1_12) + var_1_28);
	}


	// From: Req3Batch119100_while
	if (var_1_34 <= var_1_13) {
		var_1_4 = (var_1_5 && var_1_6);
	}


	// From: Req11Batch119100_while
	if (var_1_4 && (var_1_5 && var_1_15)) {
		var_1_23 = (max ((var_1_24 + var_1_25) , ((var_1_26 + 10) - var_1_27)));
	}


	// From: Req13Batch119100_while
	unsigned short int stepLocal_6 = var_1_34;
	signed short int stepLocal_5 = var_1_12;
	if (stepLocal_6 > (var_1_3 * 25)) {
		if (stepLocal_5 <= var_1_9) {
			if (var_1_8) {
				var_1_29 = (var_1_9 + (min ((var_1_31 - var_1_3) , var_1_3)));
			} else {
				if (var_1_18 > (var_1_20 - var_1_19)) {
					var_1_29 = ((var_1_32 - var_1_3) - (max ((var_1_9 + var_1_34) , (var_1_26 + var_1_27))));
				} else {
					var_1_29 = var_1_3;
				}
			}
		}
	} else {
		if (((var_1_20 - var_1_21) + var_1_16) > (var_1_19 * var_1_18)) {
			var_1_29 = (max (var_1_33 , var_1_31));
		} else {
			var_1_29 = var_1_9;
		}
	}


	// From: Req8Batch119100_while
	if ((var_1_29 * var_1_1) != -256) {
		var_1_14 = ((! (var_1_4 && var_1_8)) && (! (var_1_6 && var_1_15)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 49150);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return (((((((((((((((var_1_1 == ((unsigned char) var_1_2)) && (var_1_3 == ((signed short int) last_1_var_1_29))) && ((var_1_34 <= var_1_13) ? (var_1_4 == ((unsigned char) (var_1_5 && var_1_6))) : 1)) && (var_1_7 == ((unsigned char) (! var_1_8)))) && ((last_1_var_1_13 <= (last_1_var_1_13 + var_1_2)) ? ((var_1_2 == last_1_var_1_9) ? ((var_1_2 != last_1_var_1_13) ? (var_1_9 == ((unsigned long int) 128u)) : (var_1_9 == ((unsigned long int) (abs (var_1_11 - last_1_var_1_9))))) : (var_1_9 == ((unsigned long int) (var_1_11 - var_1_2)))) : (var_1_9 == ((unsigned long int) var_1_11)))) && ((((min (var_1_11 , last_1_var_1_29)) & (last_1_var_1_29 | -8)) >= (var_1_2 * last_1_var_1_22)) ? (var_1_12 == ((signed short int) (min (var_1_2 , last_1_var_1_29)))) : (var_1_12 == ((signed short int) last_1_var_1_29)))) && (var_1_13 == ((signed short int) (max ((var_1_9 + var_1_2) , var_1_3))))) && (((var_1_29 * var_1_1) != -256) ? (var_1_14 == ((unsigned char) ((! (var_1_4 && var_1_8)) && (! (var_1_6 && var_1_15))))) : 1)) && ((var_1_3 > var_1_12) ? (var_1_16 == ((float) (min (var_1_17 , var_1_18)))) : (var_1_16 == ((float) ((var_1_19 + var_1_20) - (25.25f + var_1_21)))))) && (var_1_6 ? (var_1_22 == ((unsigned long int) (var_1_11 - ((abs (var_1_2)) + (max (var_1_28 , 100u)))))) : (var_1_22 == ((unsigned long int) ((2u + var_1_12) + var_1_28))))) && ((var_1_4 && (var_1_5 && var_1_15)) ? (var_1_23 == ((signed char) (max ((var_1_24 + var_1_25) , ((var_1_26 + 10) - var_1_27))))) : 1)) && (var_1_28 == ((unsigned char) var_1_2))) && ((var_1_34 > (var_1_3 * 25)) ? ((var_1_12 <= var_1_9) ? (var_1_8 ? (var_1_29 == ((unsigned short int) (var_1_9 + (min ((var_1_31 - var_1_3) , var_1_3))))) : ((var_1_18 > (var_1_20 - var_1_19)) ? (var_1_29 == ((unsigned short int) ((var_1_32 - var_1_3) - (max ((var_1_9 + var_1_34) , (var_1_26 + var_1_27)))))) : (var_1_29 == ((unsigned short int) var_1_3)))) : 1) : ((((var_1_20 - var_1_21) + var_1_16) > (var_1_19 * var_1_18)) ? (var_1_29 == ((unsigned short int) (max (var_1_33 , var_1_31)))) : (var_1_29 == ((unsigned short int) var_1_9))))) && (var_1_34 == ((unsigned short int) var_1_32))) && (var_1_35 == ((float) var_1_19))) && (var_1_36 == ((signed char) var_1_26))
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
