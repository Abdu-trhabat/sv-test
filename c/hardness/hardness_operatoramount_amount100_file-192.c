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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
signed long int var_1_3 = 256;
signed long int var_1_4 = 8;
signed long int var_1_5 = 1;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 2;
unsigned char var_1_9 = 16;
signed short int var_1_10 = 8;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 1411675778;
unsigned char var_1_13 = 0;
signed long int var_1_14 = 32;
signed long int var_1_15 = 2057988731;
signed long int var_1_16 = 1000000000;
unsigned long int var_1_17 = 1;
unsigned short int var_1_18 = 43697;
signed char var_1_19 = 50;
signed char var_1_20 = 64;
unsigned char var_1_21 = 1;
float var_1_23 = 50.5;
unsigned char var_1_24 = 0;
float var_1_25 = -0.08;
float var_1_26 = 127.75;
float var_1_27 = 64.75;
unsigned long int var_1_28 = 64;
unsigned long int var_1_29 = 3825632746;
float var_1_30 = 3.8;
float var_1_31 = 0.375;
float var_1_32 = 32.625;
float var_1_33 = 49.5;
signed short int var_1_34 = -256;
signed long int var_1_35 = 2;
float var_1_36 = 32.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_35 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch192Amount100
	if ((- (var_1_18 - var_1_6)) == (last_1_var_1_35 / -10)) {
		var_1_17 = (min (64u , var_1_8));
	}


	// From: Req2Batch192Amount100
	signed long int stepLocal_2 = var_1_8 >> var_1_11;
	if (stepLocal_2 >= ((var_1_12 - var_1_4) - var_1_6)) {
		if (var_1_13) {
			var_1_10 = var_1_8;
		} else {
			var_1_10 = var_1_11;
		}
	} else {
		var_1_10 = var_1_7;
	}


	// From: Req3Batch192Amount100
	var_1_14 = ((var_1_15 - (var_1_16 - 1)) - ((abs (var_1_9)) + (1000000000 - 256)));


	// From: Req6Batch192Amount100
	if (((var_1_14 | var_1_12) >> var_1_11) == var_1_10) {
		if (var_1_3 >= var_1_20) {
			var_1_21 = var_1_6;
		} else {
			var_1_21 = var_1_11;
		}
	} else {
		var_1_21 = var_1_20;
	}


	// From: Req7Batch192Amount100
	signed long int stepLocal_4 = var_1_3 / (min (var_1_6 , var_1_11));
	if (var_1_24) {
		var_1_23 = (max (var_1_25 , (var_1_26 - var_1_27)));
	} else {
		if (var_1_13) {
			if (stepLocal_4 >= (32 - (var_1_12 - var_1_8))) {
				var_1_23 = var_1_25;
			}
		}
	}


	// From: Req8Batch192Amount100
	var_1_28 = ((abs (var_1_29)) - (abs (var_1_11)));


	// From: Req9Batch192Amount100
	signed short int stepLocal_5 = var_1_10;
	if (var_1_13) {
		var_1_30 = (min ((255.5f + var_1_31) , var_1_27));
	} else {
		if (var_1_4 < stepLocal_5) {
			var_1_30 = ((var_1_32 - var_1_33) + var_1_31);
		} else {
			var_1_30 = (var_1_27 - var_1_32);
		}
	}


	// From: Req10Batch192Amount100
	var_1_34 = (max ((var_1_6 - var_1_11) , var_1_7));


	// From: Req12Batch192Amount100
	var_1_36 = var_1_31;


	// From: Req11Batch192Amount100
	unsigned long int stepLocal_6 = var_1_17 / var_1_20;
	if (((max (var_1_27 , var_1_32)) - var_1_26) >= (min ((min (var_1_23 , var_1_36)) , var_1_25))) {
		if (stepLocal_6 <= var_1_18) {
			var_1_35 = (max (var_1_6 , (var_1_10 + var_1_16)));
		}
	} else {
		var_1_35 = (var_1_18 - (max ((var_1_11 + var_1_8) , var_1_4)));
	}


	// From: Req1Batch192Amount100
	signed long int stepLocal_1 = var_1_14;
	signed long int stepLocal_0 = var_1_3;
	if (stepLocal_1 < (var_1_3 - (var_1_4 + var_1_5))) {
		if (stepLocal_0 >= (var_1_4 - var_1_5)) {
			var_1_1 = (min (((var_1_6 + var_1_7) - var_1_8) , var_1_9));
		} else {
			var_1_1 = (max (4 , (max (var_1_6 , var_1_7))));
		}
	}


	// From: Req5Batch192Amount100
	signed long int stepLocal_3 = var_1_3;
	if (stepLocal_3 < (var_1_28 * var_1_9)) {
		var_1_19 = (max (-32 , (8 - (var_1_20 - var_1_11))));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741824);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 63);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 64);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 7);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 1073741822);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 536870911);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65535);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return ((((((((((((var_1_14 < (var_1_3 - (var_1_4 + var_1_5))) ? ((var_1_3 >= (var_1_4 - var_1_5)) ? (var_1_1 == ((unsigned char) (min (((var_1_6 + var_1_7) - var_1_8) , var_1_9)))) : (var_1_1 == ((unsigned char) (max (4 , (max (var_1_6 , var_1_7))))))) : 1) && (((var_1_8 >> var_1_11) >= ((var_1_12 - var_1_4) - var_1_6)) ? (var_1_13 ? (var_1_10 == ((signed short int) var_1_8)) : (var_1_10 == ((signed short int) var_1_11))) : (var_1_10 == ((signed short int) var_1_7)))) && (var_1_14 == ((signed long int) ((var_1_15 - (var_1_16 - 1)) - ((abs (var_1_9)) + (1000000000 - 256)))))) && (((- (var_1_18 - var_1_6)) == (last_1_var_1_35 / -10)) ? (var_1_17 == ((unsigned long int) (min (64u , var_1_8)))) : 1)) && ((var_1_3 < (var_1_28 * var_1_9)) ? (var_1_19 == ((signed char) (max (-32 , (8 - (var_1_20 - var_1_11)))))) : 1)) && ((((var_1_14 | var_1_12) >> var_1_11) == var_1_10) ? ((var_1_3 >= var_1_20) ? (var_1_21 == ((unsigned char) var_1_6)) : (var_1_21 == ((unsigned char) var_1_11))) : (var_1_21 == ((unsigned char) var_1_20)))) && (var_1_24 ? (var_1_23 == ((float) (max (var_1_25 , (var_1_26 - var_1_27))))) : (var_1_13 ? (((var_1_3 / (min (var_1_6 , var_1_11))) >= (32 - (var_1_12 - var_1_8))) ? (var_1_23 == ((float) var_1_25)) : 1) : 1))) && (var_1_28 == ((unsigned long int) ((abs (var_1_29)) - (abs (var_1_11)))))) && (var_1_13 ? (var_1_30 == ((float) (min ((255.5f + var_1_31) , var_1_27)))) : ((var_1_4 < var_1_10) ? (var_1_30 == ((float) ((var_1_32 - var_1_33) + var_1_31))) : (var_1_30 == ((float) (var_1_27 - var_1_32)))))) && (var_1_34 == ((signed short int) (max ((var_1_6 - var_1_11) , var_1_7))))) && ((((max (var_1_27 , var_1_32)) - var_1_26) >= (min ((min (var_1_23 , var_1_36)) , var_1_25))) ? (((var_1_17 / var_1_20) <= var_1_18) ? (var_1_35 == ((signed long int) (max (var_1_6 , (var_1_10 + var_1_16))))) : 1) : (var_1_35 == ((signed long int) (var_1_18 - (max ((var_1_11 + var_1_8) , var_1_4))))))) && (var_1_36 == ((float) var_1_31))
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
