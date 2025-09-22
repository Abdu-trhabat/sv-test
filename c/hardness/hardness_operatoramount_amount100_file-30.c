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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Amount100.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 256;
unsigned long int var_1_2 = 1;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 64;
unsigned long int var_1_7 = 16;
unsigned long int var_1_8 = 3645380125;
unsigned long int var_1_9 = 64;
unsigned long int var_1_10 = 256;
float var_1_11 = 0.625;
float var_1_12 = 31.2;
float var_1_13 = 0.0;
float var_1_14 = 32.8;
unsigned short int var_1_15 = 64;
unsigned short int var_1_16 = 2;
signed char var_1_17 = -16;
signed char var_1_18 = 64;
signed char var_1_19 = 16;
signed char var_1_20 = 32;
signed char var_1_21 = 0;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 100;
unsigned char var_1_24 = 50;
unsigned short int var_1_25 = 128;
unsigned short int var_1_26 = 31990;
unsigned short int var_1_27 = 26868;
double var_1_28 = 10.7;
unsigned char var_1_29 = 1;
double var_1_30 = 1.75;
double var_1_31 = 16.75;
double var_1_32 = 8.5;
unsigned long int var_1_33 = 256;
unsigned char var_1_34 = 0;
signed char var_1_35 = 10;
unsigned short int var_1_36 = 5;
unsigned short int var_1_37 = 17681;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 100;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 2;
double var_1_43 = 9.9;
unsigned short int var_1_44 = 5;
unsigned short int var_1_45 = 2;
unsigned short int var_1_46 = 50896;
signed long int var_1_47 = 32;
signed char var_1_48 = -8;
signed long int var_1_49 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch30Amount100
	if (var_1_2 == var_1_3) {
		var_1_1 = (max (var_1_4 , (max ((min (var_1_5 , var_1_6)) , var_1_7))));
	} else {
		var_1_1 = (var_1_8 - (max (var_1_9 , var_1_10)));
	}


	// From: Req2Batch30Amount100
	var_1_11 = ((127.25f + var_1_12) - (var_1_13 - var_1_14));


	// From: Req3Batch30Amount100
	unsigned long int stepLocal_1 = max (var_1_5 , var_1_9);
	unsigned long int stepLocal_0 = var_1_5;
	if (var_1_4 > stepLocal_1) {
		if (var_1_10 >= stepLocal_0) {
			var_1_15 = var_1_16;
		}
	}


	// From: Req4Batch30Amount100
	if (var_1_11 >= var_1_13) {
		var_1_17 = var_1_18;
	} else {
		var_1_17 = (var_1_19 - (64 - (min (var_1_20 , var_1_21))));
	}


	// From: Req8Batch30Amount100
	if (var_1_29 && var_1_34) {
		if (var_1_23 >= (var_1_1 / var_1_24)) {
			var_1_33 = var_1_16;
		}
	}


	// From: Req9Batch30Amount100
	if (var_1_34) {
		var_1_35 = var_1_21;
	}


	// From: Req10Batch30Amount100
	unsigned long int stepLocal_4 = 64u * 100u;
	if (var_1_33 < stepLocal_4) {
		var_1_36 = ((max (var_1_24 , var_1_20)) + var_1_23);
	} else {
		var_1_36 = ((abs (var_1_27 + var_1_37)) - var_1_26);
	}


	// From: Req11Batch30Amount100
	unsigned char stepLocal_5 = var_1_39;
	if (stepLocal_5 || var_1_34) {
		var_1_38 = ((var_1_21 + 25) + (abs (var_1_24)));
	} else {
		var_1_38 = ((var_1_40 + var_1_41) - ((var_1_24 - var_1_42) + var_1_20));
	}


	// From: Req12Batch30Amount100
	unsigned char stepLocal_6 = var_1_29;
	if (var_1_34 && stepLocal_6) {
		var_1_43 = (var_1_32 - (max (var_1_12 , var_1_14)));
	}


	// From: Req13Batch30Amount100
	var_1_44 = (8 + var_1_40);


	// From: Req14Batch30Amount100
	unsigned short int stepLocal_7 = var_1_44;
	if ((var_1_46 - var_1_40) <= stepLocal_7) {
		var_1_45 = (min ((var_1_42 + var_1_33) , (min ((max (var_1_26 , var_1_37)) , var_1_41))));
	} else {
		var_1_45 = (128 + var_1_41);
	}


	// From: Req15Batch30Amount100
	var_1_47 = 10;


	// From: Req16Batch30Amount100
	var_1_48 = var_1_18;


	// From: Req17Batch30Amount100
	var_1_49 = var_1_48;


	// From: Req5Batch30Amount100
	if ((var_1_17 | var_1_47) != var_1_16) {
		var_1_22 = ((var_1_23 + (32 + var_1_24)) - var_1_20);
	}


	// From: Req6Batch30Amount100
	unsigned long int stepLocal_2 = var_1_5;
	if (stepLocal_2 < var_1_10) {
		var_1_25 = (var_1_23 + 2);
	} else {
		var_1_25 = ((var_1_26 + var_1_27) - var_1_36);
	}


	// From: Req7Batch30Amount100
	unsigned char stepLocal_3 = var_1_14 < (var_1_43 + var_1_13);
	if (stepLocal_3 || var_1_29) {
		var_1_28 = (var_1_12 + (var_1_30 + 128.25));
	} else {
		var_1_28 = ((var_1_30 + (var_1_31 - var_1_32)) + 5.7);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 63);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 32);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 16383);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 16384);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 16384);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 63);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 64);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 32767);
	assume_abort_if_not(var_1_46 <= 65535);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((((((((var_1_2 == var_1_3) ? (var_1_1 == ((unsigned long int) (max (var_1_4 , (max ((min (var_1_5 , var_1_6)) , var_1_7)))))) : (var_1_1 == ((unsigned long int) (var_1_8 - (max (var_1_9 , var_1_10)))))) && (var_1_11 == ((float) ((127.25f + var_1_12) - (var_1_13 - var_1_14))))) && ((var_1_4 > (max (var_1_5 , var_1_9))) ? ((var_1_10 >= var_1_5) ? (var_1_15 == ((unsigned short int) var_1_16)) : 1) : 1)) && ((var_1_11 >= var_1_13) ? (var_1_17 == ((signed char) var_1_18)) : (var_1_17 == ((signed char) (var_1_19 - (64 - (min (var_1_20 , var_1_21)))))))) && (((var_1_17 | var_1_47) != var_1_16) ? (var_1_22 == ((unsigned char) ((var_1_23 + (32 + var_1_24)) - var_1_20))) : 1)) && ((var_1_5 < var_1_10) ? (var_1_25 == ((unsigned short int) (var_1_23 + 2))) : (var_1_25 == ((unsigned short int) ((var_1_26 + var_1_27) - var_1_36))))) && (((var_1_14 < (var_1_43 + var_1_13)) || var_1_29) ? (var_1_28 == ((double) (var_1_12 + (var_1_30 + 128.25)))) : (var_1_28 == ((double) ((var_1_30 + (var_1_31 - var_1_32)) + 5.7))))) && ((var_1_29 && var_1_34) ? ((var_1_23 >= (var_1_1 / var_1_24)) ? (var_1_33 == ((unsigned long int) var_1_16)) : 1) : 1)) && (var_1_34 ? (var_1_35 == ((signed char) var_1_21)) : 1)) && ((var_1_33 < (64u * 100u)) ? (var_1_36 == ((unsigned short int) ((max (var_1_24 , var_1_20)) + var_1_23))) : (var_1_36 == ((unsigned short int) ((abs (var_1_27 + var_1_37)) - var_1_26))))) && ((var_1_39 || var_1_34) ? (var_1_38 == ((unsigned char) ((var_1_21 + 25) + (abs (var_1_24))))) : (var_1_38 == ((unsigned char) ((var_1_40 + var_1_41) - ((var_1_24 - var_1_42) + var_1_20)))))) && ((var_1_34 && var_1_29) ? (var_1_43 == ((double) (var_1_32 - (max (var_1_12 , var_1_14))))) : 1)) && (var_1_44 == ((unsigned short int) (8 + var_1_40)))) && (((var_1_46 - var_1_40) <= var_1_44) ? (var_1_45 == ((unsigned short int) (min ((var_1_42 + var_1_33) , (min ((max (var_1_26 , var_1_37)) , var_1_41)))))) : (var_1_45 == ((unsigned short int) (128 + var_1_41))))) && (var_1_47 == ((signed long int) 10))) && (var_1_48 == ((signed char) var_1_18))) && (var_1_49 == ((signed long int) var_1_48))
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
