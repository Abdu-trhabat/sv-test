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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Amount100.c", 13, "reach_error"); }
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
double var_1_1 = 10.2;
double var_1_2 = 0.8;
double var_1_3 = 99.25;
double var_1_4 = 99.325;
double var_1_5 = 99999999999.375;
double var_1_6 = 999999999999999.6;
double var_1_7 = 9.5;
signed long int var_1_8 = 0;
signed long int var_1_11 = 4;
signed long int var_1_12 = 1;
signed long int var_1_13 = 100000;
signed long int var_1_14 = 0;
float var_1_15 = -0.5;
signed char var_1_16 = 0;
signed char var_1_17 = 5;
float var_1_18 = 10000000000000.5;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 64;
float var_1_24 = 7.125;
unsigned short int var_1_25 = 4;
float var_1_26 = 0.75;
unsigned char var_1_27 = 25;
unsigned char var_1_28 = 16;
unsigned char var_1_29 = 50;
float var_1_30 = 1.7;
unsigned short int var_1_31 = 47147;
float var_1_32 = 256.5;
float var_1_33 = 128.15;
float var_1_34 = 32.4;
signed short int var_1_35 = -5;
unsigned long int var_1_36 = 8;
unsigned long int var_1_37 = 1816211011;
unsigned char var_1_38 = 5;
unsigned short int var_1_39 = 10;
signed long int var_1_40 = 4;
unsigned short int var_1_41 = 43000;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
float var_1_44 = 15.75;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_35 = -5;
unsigned short int last_1_var_1_39 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch183Amount100
	if ((last_1_var_1_35 * last_1_var_1_39) >= (10 * var_1_11)) {
		var_1_8 = (((min (var_1_12 , var_1_13)) - var_1_14) + last_1_var_1_39);
	}


	// From: Req1Batch183Amount100
	if (var_1_2 >= var_1_3) {
		var_1_1 = ((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch183Amount100
	signed long int stepLocal_0 = var_1_16 - var_1_17;
	if (stepLocal_0 < var_1_14) {
		var_1_15 = (min ((var_1_7 - (abs (var_1_5))) , (var_1_6 - var_1_18)));
	}


	// From: Req4Batch183Amount100
	if ((var_1_20 || var_1_21) && (var_1_8 > 50)) {
		var_1_19 = ((max (var_1_22 , (var_1_23 + 100))) - var_1_17);
	} else {
		var_1_19 = 0;
	}


	// From: Req6Batch183Amount100
	if ((var_1_1 / var_1_26) > (var_1_6 - var_1_18)) {
		var_1_25 = (64 + var_1_23);
	} else {
		var_1_25 = var_1_23;
	}


	// From: Req11Batch183Amount100
	var_1_38 = (max (var_1_29 , var_1_22));


	// From: Req13Batch183Amount100
	var_1_42 = var_1_43;


	// From: Req14Batch183Amount100
	var_1_44 = var_1_33;


	// From: Req10Batch183Amount100
	signed long int stepLocal_4 = (var_1_25 ^ var_1_16) + var_1_22;
	if (var_1_12 < stepLocal_4) {
		var_1_36 = (var_1_17 + (var_1_37 - (max (var_1_8 , var_1_22))));
	} else {
		var_1_36 = var_1_23;
	}


	// From: Req12Batch183Amount100
	signed long int stepLocal_5 = var_1_23 >> var_1_40;
	if (var_1_44 >= var_1_4) {
		if ((max (var_1_8 , (- var_1_25))) >= stepLocal_5) {
			var_1_39 = (var_1_41 - var_1_17);
		} else {
			var_1_39 = var_1_41;
		}
	}


	// From: Req5Batch183Amount100
	if (var_1_42) {
		if (var_1_4 > var_1_6) {
			var_1_24 = ((var_1_6 - (min (16.25f , var_1_7))) + var_1_5);
		}
	}


	// From: Req7Batch183Amount100
	if (var_1_42) {
		if (var_1_42) {
			var_1_27 = ((var_1_28 + var_1_29) + var_1_17);
		} else {
			var_1_27 = (var_1_17 + var_1_29);
		}
	}


	// From: Req8Batch183Amount100
	unsigned short int stepLocal_1 = var_1_39;
	if (((var_1_31 - var_1_36) ^ var_1_28) < stepLocal_1) {
		var_1_30 = (((var_1_32 + var_1_33) + var_1_34) + (min (var_1_4 , var_1_7)));
	} else {
		var_1_30 = var_1_5;
	}


	// From: Req9Batch183Amount100
	unsigned char stepLocal_3 = (- var_1_5) < var_1_4;
	unsigned char stepLocal_2 = var_1_42;
	if ((var_1_33 <= var_1_24) || stepLocal_2) {
		if (stepLocal_3 && (var_1_24 >= var_1_1)) {
			if (var_1_42) {
				var_1_35 = (var_1_22 + var_1_28);
			} else {
				var_1_35 = (min (var_1_36 , (max (var_1_22 , var_1_29))));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -1);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 63);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 64);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65535);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -115292.1504606845700e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 1152921.504606845700e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -115292.1504606845700e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 1152921.504606845700e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 7);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 32767);
	assume_abort_if_not(var_1_41 <= 65534);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_39 = var_1_39;
}

int property(void) {
	return ((((((((((((((var_1_2 >= var_1_3) ? (var_1_1 == ((double) ((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7)))) : (var_1_1 == ((double) var_1_4))) && (((last_1_var_1_35 * last_1_var_1_39) >= (10 * var_1_11)) ? (var_1_8 == ((signed long int) (((min (var_1_12 , var_1_13)) - var_1_14) + last_1_var_1_39))) : 1)) && (((var_1_16 - var_1_17) < var_1_14) ? (var_1_15 == ((float) (min ((var_1_7 - (abs (var_1_5))) , (var_1_6 - var_1_18))))) : 1)) && (((var_1_20 || var_1_21) && (var_1_8 > 50)) ? (var_1_19 == ((unsigned char) ((max (var_1_22 , (var_1_23 + 100))) - var_1_17))) : (var_1_19 == ((unsigned char) 0)))) && (var_1_42 ? ((var_1_4 > var_1_6) ? (var_1_24 == ((float) ((var_1_6 - (min (16.25f , var_1_7))) + var_1_5))) : 1) : 1)) && (((var_1_1 / var_1_26) > (var_1_6 - var_1_18)) ? (var_1_25 == ((unsigned short int) (64 + var_1_23))) : (var_1_25 == ((unsigned short int) var_1_23)))) && (var_1_42 ? (var_1_42 ? (var_1_27 == ((unsigned char) ((var_1_28 + var_1_29) + var_1_17))) : (var_1_27 == ((unsigned char) (var_1_17 + var_1_29)))) : 1)) && ((((var_1_31 - var_1_36) ^ var_1_28) < var_1_39) ? (var_1_30 == ((float) (((var_1_32 + var_1_33) + var_1_34) + (min (var_1_4 , var_1_7))))) : (var_1_30 == ((float) var_1_5)))) && (((var_1_33 <= var_1_24) || var_1_42) ? ((((- var_1_5) < var_1_4) && (var_1_24 >= var_1_1)) ? (var_1_42 ? (var_1_35 == ((signed short int) (var_1_22 + var_1_28))) : (var_1_35 == ((signed short int) (min (var_1_36 , (max (var_1_22 , var_1_29))))))) : 1) : 1)) && ((var_1_12 < ((var_1_25 ^ var_1_16) + var_1_22)) ? (var_1_36 == ((unsigned long int) (var_1_17 + (var_1_37 - (max (var_1_8 , var_1_22)))))) : (var_1_36 == ((unsigned long int) var_1_23)))) && (var_1_38 == ((unsigned char) (max (var_1_29 , var_1_22))))) && ((var_1_44 >= var_1_4) ? (((max (var_1_8 , (- var_1_25))) >= (var_1_23 >> var_1_40)) ? (var_1_39 == ((unsigned short int) (var_1_41 - var_1_17))) : (var_1_39 == ((unsigned short int) var_1_41))) : 1)) && (var_1_42 == ((unsigned char) var_1_43))) && (var_1_44 == ((float) var_1_33))
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
