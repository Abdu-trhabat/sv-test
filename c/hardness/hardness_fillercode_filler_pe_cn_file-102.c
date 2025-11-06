// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102Filler_PE_CN.c", 13, "reach_error"); }
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
float var_1_1 = 8.375;
float var_1_2 = 5.5;
float var_1_3 = 99.3;
float var_1_4 = 63.125;
float var_1_5 = 5.5;
signed char var_1_6 = 25;
signed long int var_1_7 = -1;
float var_1_8 = 10.6;
double var_1_9 = 4.8;
double var_1_10 = 10000.75;
double var_1_11 = 5.25;
signed char var_1_12 = 2;
double var_1_13 = 3.8;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 0;
signed char var_1_16 = -2;
signed char var_1_17 = -100;
double var_1_18 = 25.8;
signed char var_1_19 = -128;
signed char var_1_20 = 5;
signed char var_1_21 = 2;
signed char var_1_22 = 10;
unsigned char var_1_23 = 4;
signed long int var_1_25 = -8;
signed long int var_1_26 = -128;
unsigned char var_1_27 = 128;
signed long int var_1_28 = 16;
unsigned long int var_1_29 = 0;
unsigned long int var_1_30 = 32;
unsigned long int var_1_31 = 16;
unsigned long int var_1_32 = 8;
signed long int var_1_33 = 0;
signed long int var_1_34 = 1;
float var_1_35 = 31.8;
signed long int var_1_36 = 1275582839;
signed long int var_1_37 = 10;
signed long int var_1_38 = -128;
float var_1_39 = 100.5;
double var_1_40 = 99.5;
unsigned long int var_1_41 = 4;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 32;
unsigned long int var_1_45 = 4188189377;
unsigned long int var_1_46 = 10;
unsigned short int var_1_47 = 100;
double var_1_48 = 4.25;
unsigned short int var_1_49 = 128;
unsigned short int var_1_50 = 100;
signed short int var_1_51 = 8;
signed short int var_1_52 = 0;
signed short int var_1_53 = 10;
signed short int var_1_54 = -64;
signed long int var_1_55 = 500;
float var_1_56 = 4.875;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch102Filler_PE_CN
	/* 832L, 9L, 276L, 286L) */ var_1_1 = (
		/* 835L, 8L, 279L, 289L) */ ((
			/* 836L, 6L, 280L, 290L) */ ((
				var_1_2
			) - (
				var_1_3
			))
		) + (
			var_1_4
		))
	);


	// From: Req2Batch102Filler_PE_CN
	signed long int stepLocal_0 = /* 842L, 17L, 21L, 317L, 340L) */ ((var_1_6) * (-64));
	/* 864L, 46L, 315L, 338L) */ if (/* 847L, 19L, 20L, 316L, 339L) */ ((stepLocal_0) == (var_1_7))) {
		/* 857L, 39L, 321L, 344L) */ var_1_5 = (
			/* 856L, 38L, 324L, 347L) */ ((
				/* 854L, 36L, 325L, 348L) */ ((
					var_1_3
				) - (
					/* 853L, 35L, 327L, 350L) */ (max (
						/* 853L, 35L, 327L, 350L) */ (
							var_1_2
						) , (
							var_1_8
						)
					))
				))
			) + (
				var_1_4
			))
		);
	} else {
		/* 863L, 45L, 331L, 354L) */ var_1_5 = (
			/* 862L, 44L, 334L, 357L) */ (max (
				/* 862L, 44L, 334L, 357L) */ (
					var_1_8
				) , (
					var_1_2
				)
			))
		);
	}


	// From: Req3Batch102Filler_PE_CN
	/* 869L, 59L, 408L, 416L) */ var_1_9 = (
		/* 872L, 58L, 411L, 419L) */ (min (
			/* 872L, 58L, 411L, 419L) */ (
				var_1_10
			) , (
				var_1_4
			)
		))
	);


	// From: Req4Batch102Filler_PE_CN
	signed long int stepLocal_1 = /* 877L, 77L, 81L, 445L, 460L) */ ((var_1_6) - (var_1_12));
	/* 891L, 96L, 439L, 454L) */ if (/* 883L, 68L, 69L, 440L, 455L) */ ((var_1_10) >= (var_1_2))) {
		/* 890L, 94L, 443L, 458L) */ if (/* 885L, 79L, 80L, 444L, 459L) */ ((stepLocal_1) <= (var_1_7))) {
			/* 889L, 93L, 449L, 464L) */ var_1_11 = (
				var_1_13
			);
		}
	}


	// From: Req5Batch102Filler_PE_CN
	/* 896L, 132L, 500L, 516L) */ if (/* 897L, 108L, 109L, 501L, 517L) */ ((var_1_8) > (/* 899L, 107L, 111L, 503L, 519L) */ ((/* 900L, 105L, 112L, 504L, 520L) */ (min (/* 900L, 105L, 112L, 504L, 520L) */ (var_1_11) , (var_1_9)))) + (var_1_11))))) {
		/* 904L, 130L, 508L, 524L) */ if (var_1_15) {
			/* 906L, 129L, 510L, 526L) */ var_1_14 = (
				var_1_12
			);
		}
	}


	// From: Req6Batch102Filler_PE_CN
	/* 911L, 209L, 563L, 596L) */ if (var_1_15) {
		/* 913L, 203L, 565L, 598L) */ if (/* 914L, 145L, 146L, 566L, 599L) */ ((9.76f) > (var_1_4))) {
			/* 917L, 201L, 569L, 602L) */ if (/* 918L, 157L, 158L, 570L, 603L) */ ((var_1_11) <= (var_1_10))) {
				/* 921L, 167L, 573L, 606L) */ var_1_16 = (
					var_1_17
				);
			} else {
				/* 925L, 199L, 577L, 610L) */ if (/* 926L, 176L, 177L, 578L, 611L) */ ((/* 927L, 170L, 178L, 579L, 612L) */ ((var_1_2) + (var_1_10))) == (/* 930L, 175L, 181L, 582L, 615L) */ ((/* 931L, 173L, 182L, 583L, 616L) */ ((var_1_8) + (var_1_3))) - (var_1_18))))) {
					/* 935L, 198L, 587L, 620L) */ var_1_16 = (
						var_1_17
					);
				}
			}
		}
	} else {
		/* 939L, 208L, 591L, 624L) */ var_1_16 = (
			-1
		);
	}


	// From: Req7Batch102Filler_PE_CN
	/* 945L, 224L, 696L, 708L) */ var_1_19 = (
		/* 948L, 223L, 699L, 711L) */ ((
			var_1_20
		) + (
			/* 950L, 222L, 701L, 713L) */ ((
				var_1_21
			) + (
				/* 952L, 221L, 703L, 715L) */ ((
					var_1_22
				) + (
					4
				))
			))
		))
	);


	// From: Req8Batch102Filler_PE_CN
	/* 957L, 269L, 744L, 766L) */ if (/* 958L, 240L, 241L, 745L, 767L) */ ((/* 959L, 236L, 242L, 746L, 768L) */ ((var_1_7) % (/* 961L, 235L, 244L, 748L, 770L) */ (min (/* 961L, 235L, 244L, 748L, 770L) */ (var_1_25) , (var_1_26)))))) < (/* 964L, 239L, 247L, 751L, 773L) */ ((-5) * (var_1_21))))) {
		/* 967L, 264L, 754L, 776L) */ var_1_23 = (
			/* 970L, 263L, 757L, 779L) */ ((
				var_1_27
			) - (
				var_1_12
			))
		);
	} else {
		/* 973L, 268L, 760L, 782L) */ var_1_23 = (
			var_1_12
		);
	}


	// From: CodeObject1
	/* 30L) */ if (/* 9L, 8L) */ ((/* 10L, 6L) */ (max (/* 10L, 6L) */ (/* 11L, 4L) */ ((var_1_29) / (var_1_30))) , (var_1_31)))) < (var_1_32))) {
		/* 29L) */ var_1_28 = (
			/* 28L) */ (max (
				/* 28L) */ (
					var_1_33
				) , (
					/* 27L) */ (abs (
						var_1_34
					))
				)
			))
		);
	}


	// From: CodeObject2
	/* 65L) */ if (/* 47L, 46L) */ ((var_1_33) >= (/* 49L, 45L) */ (max (/* 49L, 45L) */ (/* 50L, 43L) */ ((var_1_38) + (var_1_31))) , (var_1_29)))))) {
		/* 64L) */ var_1_35 = (
			var_1_39
		);
	}


	// From: CodeObject3
	/* 80L) */ var_1_40 = (
		var_1_39
	);


	// From: CodeObject4
	/* 113L) */ if (/* 90L, 89L) */ ((var_1_36) <= (/* 92L, 88L) */ ((-128) | (var_1_38))))) {
		/* 111L) */ if (var_1_42) {
			/* 110L) */ var_1_41 = (
				/* 109L) */ ((
					2u
				) + (
					/* 108L) */ (abs (
						/* 107L) */ (abs (
							var_1_37
						))
					))
				))
			);
		}
	}


	// From: CodeObject5
	/* 125L) */ if (var_1_42) {
		/* 124L) */ var_1_43 = (
			/* 123L) */ (! (
				0
			))
		);
	}


	// From: CodeObject6
	/* 153L) */ if (/* 135L, 134L) */ ((var_1_40) >= (/* 137L, 133L) */ (min (/* 137L, 133L) */ (/* 138L, 131L) */ (- (var_1_35))) , (64.1)))))) {
		/* 152L) */ var_1_44 = (
			/* 151L) */ ((
				var_1_45
			) - (
				var_1_46
			))
		);
	}


	// From: CodeObject7
	/* 203L) */ if (/* 167L, 166L) */ ((/* 168L, 164L) */ (min (/* 168L, 164L) */ (var_1_35) , (/* 170L, 163L) */ (min (/* 170L, 163L) */ (var_1_40) , (var_1_39))))))) >= (var_1_48))) {
		/* 196L) */ if (/* 184L, 183L) */ ((var_1_28) <= (var_1_46))) {
			/* 195L) */ var_1_47 = (
				/* 194L) */ (min (
					/* 194L) */ (
						var_1_49
					) , (
						var_1_50
					)
				))
			);
		}
	} else {
		/* 202L) */ var_1_47 = (
			/* 201L) */ (abs (
				var_1_49
			))
		);
	}


	// From: CodeObject8
	/* 228L) */ if (var_1_42) {
		/* 221L) */ var_1_51 = (
			/* 220L) */ (min (
				/* 220L) */ (
					/* 215L) */ (abs (
						var_1_52
					))
				) , (
					/* 219L) */ ((
						var_1_53
					) + (
						/* 218L) */ (abs (
							var_1_54
						))
					))
				)
			))
		);
	} else {
		/* 227L) */ var_1_51 = (
			/* 226L) */ (min (
				/* 226L) */ (
					var_1_54
				) , (
					var_1_53
				)
			))
		);
	}


	// From: CodeObject9
	/* 235L) */ var_1_55 = (
		var_1_52
	);


	// From: CodeObject10
	/* 243L) */ var_1_56 = (
		var_1_39
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 32);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -15);
	assume_abort_if_not(var_1_22 <= 16);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483646);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1073741823);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483648);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 2147483647);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 65534);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= -32766);
	assume_abort_if_not(var_1_52 <= 32766);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= -16383);
	assume_abort_if_not(var_1_53 <= 16383);
	var_1_54 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_54 >= -16383);
	assume_abort_if_not(var_1_54 <= 16383);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 257L, 19L, 25L, 362L, 385L, 989L) */ ((/* 258L, 17L, 26L, 363L, 386L, 990L) */ ((var_1_6) * (-64))) == (var_1_7))) {
	} else {
	}
	if (/* 288L, 68L, 72L, 470L, 485L, 1020L) */ ((var_1_10) >= (var_1_2))) {
		if (/* 292L, 79L, 85L, 474L, 489L, 1024L) */ ((/* 293L, 77L, 86L, 475L, 490L, 1025L) */ ((var_1_6) - (var_1_12))) <= (var_1_7))) {
		}
	}
	if (/* 304L, 108L, 116L, 533L, 549L, 1036L) */ ((var_1_8) > (/* 306L, 107L, 118L, 535L, 551L, 1038L) */ ((/* 307L, 105L, 119L, 536L, 552L, 1039L) */ (min (/* 307L, 105L, 119L, 536L, 552L, 1039L) */ (var_1_11) , (var_1_9)))) + (var_1_11))))) {
		if (var_1_15) {
		}
	}
	if (var_1_15) {
		if (/* 321L, 145L, 149L, 632L, 665L, 1053L) */ ((9.76f) > (var_1_4))) {
			if (/* 325L, 157L, 161L, 636L, 669L, 1057L) */ ((var_1_11) <= (var_1_10))) {
			} else {
				if (/* 333L, 176L, 186L, 644L, 677L, 1065L) */ ((/* 334L, 170L, 187L, 645L, 678L, 1066L) */ ((var_1_2) + (var_1_10))) == (/* 337L, 175L, 190L, 648L, 681L, 1069L) */ ((/* 338L, 173L, 191L, 649L, 682L, 1070L) */ ((var_1_8) + (var_1_3))) - (var_1_18))))) {
				}
			}
		}
	} else {
	}
	if (/* 365L, 240L, 250L, 789L, 811L, 1097L) */ ((/* 366L, 236L, 251L, 790L, 812L, 1098L) */ ((var_1_7) % (/* 368L, 235L, 253L, 792L, 814L, 1100L) */ (min (/* 368L, 235L, 253L, 792L, 814L, 1100L) */ (var_1_25) , (var_1_26)))))) < (/* 371L, 239L, 256L, 795L, 817L, 1103L) */ ((-5) * (var_1_21))))) {
	} else {
	}
	return /* 391L) */ ((
	/* 390L) */ ((
		/* 389L) */ ((
			/* 388L) */ ((
				/* 387L) */ ((
					/* 386L) */ ((
						/* 385L) */ ((
							/* 247L, 9L, 296L, 306L, 979L) */ ((
								var_1_1
							) == (
								/* 247L, 9L, 296L, 306L, 979L) */ ((float) (
									/* 250L, 8L, 299L, 309L, 982L) */ ((
										/* 251L, 6L, 300L, 310L, 983L) */ ((
											var_1_2
										) - (
											var_1_3
										))
									) + (
										var_1_4
									))
								))
							))
						) && (
							/* 256L, 47L, 361L, 384L, 988L) */ ((
								/* 257L, 19L, 25L, 362L, 385L, 989L) */ ((
									/* 258L, 17L, 26L, 363L, 386L, 990L) */ ((
										var_1_6
									) * (
										-64
									))
								) == (
									var_1_7
								))
							) ? (
								/* 262L, 39L, 367L, 390L, 994L) */ ((
									var_1_5
								) == (
									/* 262L, 39L, 367L, 390L, 994L) */ ((float) (
										/* 265L, 38L, 370L, 393L, 997L) */ ((
											/* 266L, 36L, 371L, 394L, 998L) */ ((
												var_1_3
											) - (
												/* 268L, 35L, 373L, 396L, 1000L) */ (max (
													/* 268L, 35L, 373L, 396L, 1000L) */ (
														var_1_2
													) , (
														var_1_8
													)
												))
											))
										) + (
											var_1_4
										))
									))
								))
							) : (
								/* 272L, 45L, 377L, 400L, 1004L) */ ((
									var_1_5
								) == (
									/* 272L, 45L, 377L, 400L, 1004L) */ ((float) (
										/* 275L, 44L, 380L, 403L, 1007L) */ (max (
											/* 275L, 44L, 380L, 403L, 1007L) */ (
												var_1_8
											) , (
												var_1_2
											)
										))
									))
								))
							))
						))
					) && (
						/* 280L, 59L, 424L, 432L, 1012L) */ ((
							var_1_9
						) == (
							/* 280L, 59L, 424L, 432L, 1012L) */ ((double) (
								/* 283L, 58L, 427L, 435L, 1015L) */ (min (
									/* 283L, 58L, 427L, 435L, 1015L) */ (
										var_1_10
									) , (
										var_1_4
									)
								))
							))
						))
					))
				) && (
					/* 287L, 97L, 469L, 484L, 1019L) */ ((
						/* 288L, 68L, 72L, 470L, 485L, 1020L) */ ((
							var_1_10
						) >= (
							var_1_2
						))
					) ? (
						/* 291L, 95L, 473L, 488L, 1023L) */ ((
							/* 292L, 79L, 85L, 474L, 489L, 1024L) */ ((
								/* 293L, 77L, 86L, 475L, 490L, 1025L) */ ((
									var_1_6
								) - (
									var_1_12
								))
							) <= (
								var_1_7
							))
						) ? (
							/* 297L, 93L, 479L, 494L, 1029L) */ ((
								var_1_11
							) == (
								/* 297L, 93L, 479L, 494L, 1029L) */ ((double) (
									var_1_13
								))
							))
						) : (
							1
						))
					) : (
						1
					))
				))
			) && (
				/* 303L, 133L, 532L, 548L, 1035L) */ ((
					/* 304L, 108L, 116L, 533L, 549L, 1036L) */ ((
						var_1_8
					) > (
						/* 306L, 107L, 118L, 535L, 551L, 1038L) */ ((
							/* 307L, 105L, 119L, 536L, 552L, 1039L) */ (min (
								/* 307L, 105L, 119L, 536L, 552L, 1039L) */ (
									var_1_11
								) , (
									var_1_9
								)
							))
						) + (
							var_1_11
						))
					))
				) ? (
					/* 311L, 131L, 540L, 556L, 1043L) */ ((
						var_1_15
					) ? (
						/* 313L, 129L, 542L, 558L, 1045L) */ ((
							var_1_14
						) == (
							/* 313L, 129L, 542L, 558L, 1045L) */ ((signed short int) (
								var_1_12
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			))
		) && (
			/* 318L, 210L, 629L, 662L, 1050L) */ ((
				var_1_15
			) ? (
				/* 320L, 204L, 631L, 664L, 1052L) */ ((
					/* 321L, 145L, 149L, 632L, 665L, 1053L) */ ((
						9.76f
					) > (
						var_1_4
					))
				) ? (
					/* 324L, 202L, 635L, 668L, 1056L) */ ((
						/* 325L, 157L, 161L, 636L, 669L, 1057L) */ ((
							var_1_11
						) <= (
							var_1_10
						))
					) ? (
						/* 328L, 167L, 639L, 672L, 1060L) */ ((
							var_1_16
						) == (
							/* 328L, 167L, 639L, 672L, 1060L) */ ((signed char) (
								var_1_17
							))
						))
					) : (
						/* 332L, 200L, 643L, 676L, 1064L) */ ((
							/* 333L, 176L, 186L, 644L, 677L, 1065L) */ ((
								/* 334L, 170L, 187L, 645L, 678L, 1066L) */ ((
									var_1_2
								) + (
									var_1_10
								))
							) == (
								/* 337L, 175L, 190L, 648L, 681L, 1069L) */ ((
									/* 338L, 173L, 191L, 649L, 682L, 1070L) */ ((
										var_1_8
									) + (
										var_1_3
									))
								) - (
									var_1_18
								))
							))
						) ? (
							/* 342L, 198L, 653L, 686L, 1074L) */ ((
								var_1_16
							) == (
								/* 342L, 198L, 653L, 686L, 1074L) */ ((signed char) (
									var_1_17
								))
							))
						) : (
							1
						))
					))
				) : (
					1
				))
			) : (
				/* 346L, 208L, 657L, 690L, 1078L) */ ((
					var_1_16
				) == (
					/* 346L, 208L, 657L, 690L, 1078L) */ ((signed char) (
						-1
					))
				))
			))
		))
	) && (
		/* 352L, 224L, 720L, 732L, 1084L) */ ((
			var_1_19
		) == (
			/* 352L, 224L, 720L, 732L, 1084L) */ ((signed char) (
				/* 355L, 223L, 723L, 735L, 1087L) */ ((
					var_1_20
				) + (
					/* 357L, 222L, 725L, 737L, 1089L) */ ((
						var_1_21
					) + (
						/* 359L, 221L, 727L, 739L, 1091L) */ ((
							var_1_22
						) + (
							4
						))
					))
				))
			))
		))
	))
) && (
	/* 364L, 270L, 788L, 810L, 1096L) */ ((
		/* 365L, 240L, 250L, 789L, 811L, 1097L) */ ((
			/* 366L, 236L, 251L, 790L, 812L, 1098L) */ ((
				var_1_7
			) % (
				/* 368L, 235L, 253L, 792L, 814L, 1100L) */ (min (
					/* 368L, 235L, 253L, 792L, 814L, 1100L) */ (
						var_1_25
					) , (
						var_1_26
					)
				))
			))
		) < (
			/* 371L, 239L, 256L, 795L, 817L, 1103L) */ ((
				-5
			) * (
				var_1_21
			))
		))
	) ? (
		/* 374L, 264L, 798L, 820L, 1106L) */ ((
			var_1_23
		) == (
			/* 374L, 264L, 798L, 820L, 1106L) */ ((unsigned char) (
				/* 377L, 263L, 801L, 823L, 1109L) */ ((
					var_1_27
				) - (
					var_1_12
				))
			))
		))
	) : (
		/* 380L, 268L, 804L, 826L, 1112L) */ ((
			var_1_23
		) == (
			/* 380L, 268L, 804L, 826L, 1112L) */ ((unsigned char) (
				var_1_12
			))
		))
	))
))
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
