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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned char var_1_2;
	double var_1_3;
	double var_1_4;
	double var_1_5;
	double var_1_6;
	signed char var_1_7;
	signed long int var_1_9;
	signed long int var_1_10;
	signed char var_1_11;
	signed char var_1_12;
	unsigned short int var_1_13;
	unsigned char var_1_14;
	unsigned short int var_1_15;
	unsigned short int var_1_16;
	unsigned short int var_1_17;
	signed long int var_1_18;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	9999.5,
	1,
	4.5,
	2.5,
	0.0,
	999999999999.3,
	-128,
	0,
	-10,
	16,
	16,
	5,
	1,
	16,
	32647,
	128,
	-8
};

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_18 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch81Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_14;
	if ((WrapperStruct00.var_1_11 >= last_1_WrapperStruct00_var_1_18) && stepLocal_1) {
		WrapperStruct00.var_1_13 = (min (WrapperStruct00.var_1_15 , 100));
	} else {
		WrapperStruct00.var_1_13 = ((WrapperStruct00.var_1_16 - 5) + WrapperStruct00.var_1_17);
	}


	// From: Req4Batch81Wrapper_S
	unsigned short int stepLocal_2 = WrapperStruct00.var_1_16;
	if (WrapperStruct00.var_1_13 > stepLocal_2) {
		if (WrapperStruct00.var_1_3 < (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) {
			WrapperStruct00.var_1_18 = (abs (WrapperStruct00.var_1_15));
		} else {
			WrapperStruct00.var_1_18 = WrapperStruct00.var_1_13;
		}
	} else {
		WrapperStruct00.var_1_18 = WrapperStruct00.var_1_15;
	}


	// From: Req1Batch81Wrapper_S
	if (WrapperStruct00.var_1_2) {
		WrapperStruct00.var_1_1 = (max (WrapperStruct00.var_1_3 , (WrapperStruct00.var_1_4 - (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6))));
	}


	// From: Req2Batch81Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_9 ^ WrapperStruct00.var_1_10;
	if ((min (-25 , WrapperStruct00.var_1_13)) != stepLocal_0) {
		if (WrapperStruct00.var_1_2) {
			WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12);
		}
	} else {
		WrapperStruct00.var_1_7 = (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_11));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 65534);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 32767);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_18 = WrapperStruct00.var_1_18;
}

int property(void) {
	return (((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((double) (max (WrapperStruct00.var_1_3 , (WrapperStruct00.var_1_4 - (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)))))) : 1) && (((min (-25 , WrapperStruct00.var_1_13)) != (WrapperStruct00.var_1_9 ^ WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_7 == ((signed char) (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12))) : 1) : (WrapperStruct00.var_1_7 == ((signed char) (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_11)))))) && (((WrapperStruct00.var_1_11 >= last_1_WrapperStruct00_var_1_18) && WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_13 == ((unsigned short int) (min (WrapperStruct00.var_1_15 , 100)))) : (WrapperStruct00.var_1_13 == ((unsigned short int) ((WrapperStruct00.var_1_16 - 5) + WrapperStruct00.var_1_17))))) && ((WrapperStruct00.var_1_13 > WrapperStruct00.var_1_16) ? ((WrapperStruct00.var_1_3 < (WrapperStruct00.var_1_5 - WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_18 == ((signed long int) (abs (WrapperStruct00.var_1_15)))) : (WrapperStruct00.var_1_18 == ((signed long int) WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_18 == ((signed long int) WrapperStruct00.var_1_15)))
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
