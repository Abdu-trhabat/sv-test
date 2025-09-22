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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Amount100.c", 13, "reach_error"); }
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
signed short int var_1_1 = 8;
double var_1_3 = 49.8;
double var_1_4 = 5.6;
signed short int var_1_6 = 8;
signed short int var_1_7 = 10;
float var_1_8 = 128.75;
double var_1_9 = 0.0;
double var_1_10 = 0.0;
double var_1_11 = 199.5;
unsigned long int var_1_12 = 1;
unsigned long int var_1_13 = 5;
unsigned long int var_1_14 = 8;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned long int var_1_18 = 2481407510;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed long int var_1_23 = -100;
signed char var_1_24 = 5;
signed char var_1_25 = -16;
double var_1_26 = 199.5;
double var_1_27 = 1.25;
double var_1_28 = 5.6;
double var_1_29 = 50.1;
double var_1_30 = 1.8;
unsigned long int var_1_31 = 0;
unsigned short int var_1_32 = 19051;
unsigned short int var_1_33 = 27325;
unsigned long int var_1_34 = 1763411467;
signed char var_1_35 = -1;
signed short int var_1_36 = 5;
signed char var_1_37 = 100;
signed char var_1_38 = -4;
signed char var_1_39 = -1;
signed char var_1_40 = -8;
signed char var_1_41 = 5;
signed char var_1_42 = 16;
double var_1_43 = -0.5;
double var_1_44 = 4.25;
double var_1_45 = 31.5;
signed char var_1_47 = 10;
signed char var_1_48 = 0;
double var_1_49 = 31.8;
double var_1_50 = 49.1;
signed long int var_1_51 = -1;
signed long int var_1_52 = 1000000000;

// Calibration values

// Last'ed variables
double last_1_var_1_43 = -0.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch181Amount100
	signed short int stepLocal_2 = var_1_7;
	if ((- last_1_var_1_43) > var_1_27) {
		if (stepLocal_2 < (var_1_33 - (max (var_1_24 , var_1_36)))) {
			var_1_35 = (min (var_1_37 , var_1_38));
		}
	} else {
		var_1_35 = (var_1_39 + (max ((max (var_1_40 , var_1_41)) , var_1_42)));
	}


	// From: Req4Batch181Amount100
	if ((var_1_15 || var_1_16) && var_1_17) {
		var_1_14 = (var_1_18 - var_1_7);
	} else {
		var_1_14 = ((var_1_7 + (min (var_1_19 , var_1_20))) + var_1_13);
	}


	// From: Req5Batch181Amount100
	if (var_1_9 != 31.5) {
		var_1_21 = var_1_22;
	}


	// From: Req7Batch181Amount100
	var_1_26 = (var_1_27 + 500.65);


	// From: Req8Batch181Amount100
	var_1_28 = (var_1_11 - var_1_29);


	// From: Req10Batch181Amount100
	if (((var_1_32 + var_1_33) - var_1_7) != var_1_19) {
		var_1_31 = (var_1_19 + (var_1_34 - var_1_20));
	} else {
		var_1_31 = 100000000u;
	}


	// From: Req13Batch181Amount100
	if (var_1_20 <= 10u) {
		var_1_51 = var_1_36;
	} else {
		var_1_51 = ((var_1_7 - (var_1_52 - var_1_36)) + var_1_19);
	}


	// From: Req2Batch181Amount100
	if (((var_1_9 - 199.9) - (var_1_10 - var_1_11)) >= var_1_28) {
		var_1_8 = (abs (127.5f));
	}


	// From: Req3Batch181Amount100
	if (var_1_4 > var_1_8) {
		var_1_12 = (var_1_7 + var_1_13);
	}


	// From: Req9Batch181Amount100
	signed short int stepLocal_1 = var_1_6;
	if ((var_1_31 / var_1_25) <= stepLocal_1) {
		var_1_30 = ((abs (var_1_27)) - var_1_11);
	} else {
		var_1_30 = var_1_11;
	}


	// From: Req12Batch181Amount100
	if ((max (var_1_33 , (var_1_19 / var_1_32))) > var_1_12) {
		var_1_43 = (max (var_1_11 , (var_1_29 - (var_1_44 + var_1_45))));
	} else {
		if (var_1_24 == (var_1_35 * (var_1_47 - var_1_48))) {
			var_1_43 = (min (var_1_49 , (min (var_1_29 , var_1_45))));
		} else {
			var_1_43 = (max (var_1_49 , var_1_50));
		}
	}


	// From: Req1Batch181Amount100
	if ((var_1_30 / var_1_3) > (max (var_1_43 , var_1_26))) {
		var_1_1 = ((min (var_1_6 , 0)) - var_1_7);
	} else {
		var_1_1 = -10;
	}


	// From: Req6Batch181Amount100
	signed long int stepLocal_0 = 1 / var_1_25;
	if (! var_1_21) {
		if (stepLocal_0 == (~ (min (var_1_7 , -2)))) {
			var_1_23 = (max (var_1_7 , (16 - var_1_24)));
		}
	} else {
		if (var_1_22) {
			var_1_23 = var_1_1;
		} else {
			var_1_23 = var_1_7;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 4611686.018427388000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 4611686.018427388000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427388000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	assume_abort_if_not(var_1_25 != 0);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 16383);
	assume_abort_if_not(var_1_32 <= 32768);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 16384);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1073741823);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -63);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -63);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -1);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -922337.2036854766000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= 536870911);
	assume_abort_if_not(var_1_52 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_43 = var_1_43;
}

int property(void) {
	return ((((((((((((((var_1_30 / var_1_3) > (max (var_1_43 , var_1_26))) ? (var_1_1 == ((signed short int) ((min (var_1_6 , 0)) - var_1_7))) : (var_1_1 == ((signed short int) -10))) && ((((var_1_9 - 199.9) - (var_1_10 - var_1_11)) >= var_1_28) ? (var_1_8 == ((float) (abs (127.5f)))) : 1)) && ((var_1_4 > var_1_8) ? (var_1_12 == ((unsigned long int) (var_1_7 + var_1_13))) : 1)) && (((var_1_15 || var_1_16) && var_1_17) ? (var_1_14 == ((unsigned long int) (var_1_18 - var_1_7))) : (var_1_14 == ((unsigned long int) ((var_1_7 + (min (var_1_19 , var_1_20))) + var_1_13))))) && ((var_1_9 != 31.5) ? (var_1_21 == ((unsigned char) var_1_22)) : 1)) && ((! var_1_21) ? (((1 / var_1_25) == (~ (min (var_1_7 , -2)))) ? (var_1_23 == ((signed long int) (max (var_1_7 , (16 - var_1_24))))) : 1) : (var_1_22 ? (var_1_23 == ((signed long int) var_1_1)) : (var_1_23 == ((signed long int) var_1_7))))) && (var_1_26 == ((double) (var_1_27 + 500.65)))) && (var_1_28 == ((double) (var_1_11 - var_1_29)))) && (((var_1_31 / var_1_25) <= var_1_6) ? (var_1_30 == ((double) ((abs (var_1_27)) - var_1_11))) : (var_1_30 == ((double) var_1_11)))) && ((((var_1_32 + var_1_33) - var_1_7) != var_1_19) ? (var_1_31 == ((unsigned long int) (var_1_19 + (var_1_34 - var_1_20)))) : (var_1_31 == ((unsigned long int) 100000000u)))) && (((- last_1_var_1_43) > var_1_27) ? ((var_1_7 < (var_1_33 - (max (var_1_24 , var_1_36)))) ? (var_1_35 == ((signed char) (min (var_1_37 , var_1_38)))) : 1) : (var_1_35 == ((signed char) (var_1_39 + (max ((max (var_1_40 , var_1_41)) , var_1_42))))))) && (((max (var_1_33 , (var_1_19 / var_1_32))) > var_1_12) ? (var_1_43 == ((double) (max (var_1_11 , (var_1_29 - (var_1_44 + var_1_45)))))) : ((var_1_24 == (var_1_35 * (var_1_47 - var_1_48))) ? (var_1_43 == ((double) (min (var_1_49 , (min (var_1_29 , var_1_45)))))) : (var_1_43 == ((double) (max (var_1_49 , var_1_50))))))) && ((var_1_20 <= 10u) ? (var_1_51 == ((signed long int) var_1_36)) : (var_1_51 == ((signed long int) ((var_1_7 - (var_1_52 - var_1_36)) + var_1_19))))
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
