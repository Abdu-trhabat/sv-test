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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Amount100.c", 13, "reach_error"); }
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
signed long int var_1_1 = -128;
double var_1_4 = 99999999999.6;
unsigned char var_1_5 = 1;
signed long int var_1_6 = -5;
unsigned long int var_1_8 = 128;
double var_1_9 = 2.6;
unsigned long int var_1_10 = 32;
unsigned short int var_1_11 = 5;
unsigned short int var_1_12 = 5;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 2;
double var_1_15 = 999.8;
double var_1_16 = 16.4;
double var_1_17 = 100.15;
double var_1_18 = 500.4;
double var_1_19 = 1.8;
unsigned long int var_1_20 = 5;
double var_1_21 = 255.8;
double var_1_22 = 32.5;
double var_1_23 = 32.5;
double var_1_24 = 99999999999.5;
double var_1_25 = 16.725;
signed long int var_1_26 = -10;
signed short int var_1_27 = 32;
double var_1_28 = 199.15;
signed short int var_1_29 = -32;
signed short int var_1_30 = 10;
signed char var_1_31 = -5;
signed char var_1_32 = -32;
signed char var_1_33 = 64;
signed char var_1_34 = 5;
signed char var_1_35 = 5;
signed short int var_1_36 = 8;
signed short int var_1_37 = 10000;
unsigned long int var_1_38 = 50;

// Calibration values

// Last'ed variables
double last_1_var_1_15 = 999.8;
double last_1_var_1_21 = 255.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9Amount100
	if ((- last_1_var_1_15) >= (last_1_var_1_21 / var_1_4)) {
		if (var_1_5) {
			var_1_1 = 10;
		}
	}


	// From: Req4Batch9Amount100
	if (var_1_5) {
		var_1_11 = var_1_12;
	} else {
		var_1_11 = (min ((8 + var_1_13) , (min ((abs (var_1_12)) , var_1_14))));
	}


	// From: Req7Batch9Amount100
	var_1_21 = ((var_1_22 + var_1_23) + (var_1_24 - (max (1.25 , var_1_25))));


	// From: Req11Batch9Amount100
	unsigned short int stepLocal_3 = var_1_13;
	if (var_1_24 == var_1_22) {
		if (var_1_14 > stepLocal_3) {
			var_1_36 = ((max ((var_1_33 - var_1_34) , var_1_30)) + (var_1_35 - (var_1_37 - 50)));
		} else {
			var_1_36 = var_1_34;
		}
	} else {
		var_1_36 = ((abs (var_1_34)) + (max (var_1_37 , -5)));
	}


	// From: Req12Batch9Amount100
	var_1_38 = var_1_12;


	// From: Req2Batch9Amount100
	if (var_1_1 == var_1_38) {
		if ((var_1_1 > var_1_38) && var_1_5) {
			var_1_6 = (min (var_1_1 , 128));
		} else {
			var_1_6 = var_1_1;
		}
	} else {
		var_1_6 = var_1_1;
	}


	// From: Req5Batch9Amount100
	signed long int stepLocal_1 = var_1_6;
	if (var_1_5) {
		if (var_1_12 > stepLocal_1) {
			var_1_15 = (min ((var_1_16 + (abs (var_1_17))) , (var_1_18 - var_1_19)));
		}
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req8Batch9Amount100
	var_1_26 = (max (var_1_14 , (abs (max (var_1_11 , var_1_38)))));


	// From: Req9Batch9Amount100
	if (var_1_24 < (var_1_28 - var_1_19)) {
		if (var_1_5) {
			var_1_27 = (min (var_1_26 , (min (-256 , (var_1_29 + var_1_30)))));
		}
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req10Batch9Amount100
	if ((var_1_15 == var_1_21) && (var_1_29 <= var_1_13)) {
		var_1_31 = (max (var_1_32 , ((var_1_33 - var_1_34) - var_1_35)));
	} else {
		var_1_31 = var_1_35;
	}


	// From: Req3Batch9Amount100
	unsigned char stepLocal_0 = var_1_11 < var_1_26;
	if (var_1_21 <= (- (abs (var_1_4)))) {
		if ((var_1_4 <= (var_1_21 / var_1_9)) || stepLocal_0) {
			var_1_8 = 64u;
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req6Batch9Amount100
	unsigned short int stepLocal_2 = var_1_11;
	if (stepLocal_2 <= (max (16 , var_1_8))) {
		var_1_20 = (min ((abs (var_1_10)) , var_1_13));
	} else {
		if (var_1_4 < (var_1_9 + (abs (var_1_15)))) {
			var_1_20 = (min (var_1_11 , (var_1_13 + var_1_12)));
		} else {
			var_1_20 = var_1_12;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -16383);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 62);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 8191);
	assume_abort_if_not(var_1_37 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	return (((((((((((((- last_1_var_1_15) >= (last_1_var_1_21 / var_1_4)) ? (var_1_5 ? (var_1_1 == ((signed long int) 10)) : 1) : 1) && ((var_1_1 == var_1_38) ? (((var_1_1 > var_1_38) && var_1_5) ? (var_1_6 == ((signed long int) (min (var_1_1 , 128)))) : (var_1_6 == ((signed long int) var_1_1))) : (var_1_6 == ((signed long int) var_1_1)))) && ((var_1_21 <= (- (abs (var_1_4)))) ? (((var_1_4 <= (var_1_21 / var_1_9)) || (var_1_11 < var_1_26)) ? (var_1_8 == ((unsigned long int) 64u)) : (var_1_8 == ((unsigned long int) var_1_10))) : (var_1_8 == ((unsigned long int) var_1_10)))) && (var_1_5 ? (var_1_11 == ((unsigned short int) var_1_12)) : (var_1_11 == ((unsigned short int) (min ((8 + var_1_13) , (min ((abs (var_1_12)) , var_1_14)))))))) && (var_1_5 ? ((var_1_12 > var_1_6) ? (var_1_15 == ((double) (min ((var_1_16 + (abs (var_1_17))) , (var_1_18 - var_1_19))))) : 1) : (var_1_15 == ((double) var_1_17)))) && ((var_1_11 <= (max (16 , var_1_8))) ? (var_1_20 == ((unsigned long int) (min ((abs (var_1_10)) , var_1_13)))) : ((var_1_4 < (var_1_9 + (abs (var_1_15)))) ? (var_1_20 == ((unsigned long int) (min (var_1_11 , (var_1_13 + var_1_12))))) : (var_1_20 == ((unsigned long int) var_1_12))))) && (var_1_21 == ((double) ((var_1_22 + var_1_23) + (var_1_24 - (max (1.25 , var_1_25))))))) && (var_1_26 == ((signed long int) (max (var_1_14 , (abs (max (var_1_11 , var_1_38)))))))) && ((var_1_24 < (var_1_28 - var_1_19)) ? (var_1_5 ? (var_1_27 == ((signed short int) (min (var_1_26 , (min (-256 , (var_1_29 + var_1_30))))))) : 1) : (var_1_27 == ((signed short int) var_1_29)))) && (((var_1_15 == var_1_21) && (var_1_29 <= var_1_13)) ? (var_1_31 == ((signed char) (max (var_1_32 , ((var_1_33 - var_1_34) - var_1_35))))) : (var_1_31 == ((signed char) var_1_35)))) && ((var_1_24 == var_1_22) ? ((var_1_14 > var_1_13) ? (var_1_36 == ((signed short int) ((max ((var_1_33 - var_1_34) , var_1_30)) + (var_1_35 - (var_1_37 - 50))))) : (var_1_36 == ((signed short int) var_1_34))) : (var_1_36 == ((signed short int) ((abs (var_1_34)) + (max (var_1_37 , -5))))))) && (var_1_38 == ((unsigned long int) var_1_12))
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
