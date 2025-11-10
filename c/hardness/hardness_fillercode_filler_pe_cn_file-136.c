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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Filler_PE_CN.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
signed long int var_1_4 = 1000;
signed long int var_1_5 = 5;
signed long int var_1_6 = 32;
float var_1_7 = 0.3;
double var_1_8 = 255.75;
unsigned char var_1_9 = 0;
double var_1_10 = 9999999.32;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 0;
signed char var_1_17 = -1;
signed char var_1_18 = 50;
signed char var_1_19 = 2;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 1516883038;
unsigned long int var_1_22 = 1086059298;
double var_1_23 = 16.85;
double var_1_24 = 127.2;
double var_1_25 = 9.65;
signed long int var_1_26 = 25;
signed short int var_1_27 = 500;
signed short int var_1_28 = 200;
signed short int var_1_29 = 4;
signed long int var_1_30 = -8;
signed char var_1_31 = 4;
unsigned char var_1_32 = 8;
signed char var_1_33 = 10;
unsigned long int var_1_34 = 128;
unsigned long int var_1_35 = 2330912839;
unsigned long int var_1_36 = 256;
unsigned long int var_1_37 = 0;
unsigned short int var_1_38 = 32;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned short int var_1_41 = 1;
double var_1_42 = 9999.25;
double var_1_43 = 63.5;
double var_1_44 = 15.2;
double var_1_45 = 24.9;
signed char var_1_46 = 1;
signed char var_1_47 = 16;
float var_1_48 = 32.9;
float var_1_49 = 7.2;
float var_1_50 = 4.5;
float var_1_51 = 128.2;
signed short int var_1_52 = 64;
signed short int var_1_53 = 100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch136Filler_PE_CN
	/* 882L, 137L, 462L, 480L) */ if (/* 883L, 118L, 119L, 463L, 481L) */ ((var_1_9) && (var_1_11))) {
		/* 886L, 135L, 466L, 484L) */ if (/* 887L, 126L, 127L, 467L, 485L) */ (! (var_1_9))) {
			/* 889L, 134L, 469L, 487L) */ var_1_10 = (
				var_1_7
			);
		}
	}


	// From: Req4Batch136Filler_PE_CN
	/* 895L, 164L, 529L, 541L) */ var_1_12 = (
		/* 898L, 163L, 532L, 544L) */ ((
			/* 899L, 159L, 533L, 545L) */ ((
				65103
			) - (
				2
			))
		) - (
			/* 902L, 162L, 536L, 548L) */ (min (
				/* 902L, 162L, 536L, 548L) */ (
					var_1_13
				) , (
					var_1_14
				)
			))
		))
	);


	// From: Req5Batch136Filler_PE_CN
	/* 906L, 202L, 576L, 601L) */ if (/* 907L, 173L, 174L, 577L, 602L) */ ((var_1_7) >= (/* 909L, 172L, 176L, 579L, 604L) */ (max (/* 909L, 172L, 176L, 579L, 604L) */ (var_1_10) , (5.25f)))))) {
		/* 912L, 195L, 582L, 607L) */ var_1_15 = (
			/* 915L, 194L, 585L, 610L) */ (max (
				/* 915L, 194L, 585L, 610L) */ (
					/* 916L, 188L, 586L, 611L) */ (min (
						/* 916L, 188L, 586L, 611L) */ (
							-5
						) , (
							var_1_16
						)
					))
				) , (
					/* 919L, 193L, 589L, 614L) */ ((
						/* 920L, 191L, 590L, 615L) */ (min (
							/* 920L, 191L, 590L, 615L) */ (
								var_1_17
							) , (
								var_1_18
							)
						))
					) + (
						var_1_19
					))
				)
			))
		);
	} else {
		/* 924L, 201L, 594L, 619L) */ var_1_15 = (
			/* 927L, 200L, 597L, 622L) */ (min (
				/* 927L, 200L, 597L, 622L) */ (
					var_1_17
				) , (
					var_1_16
				)
			))
		);
	}


	// From: Req6Batch136Filler_PE_CN
	signed long int stepLocal_1 = /* 932L, 212L, 216L, 678L, 693L) */ (min (/* 932L, 212L, 216L, 678L, 693L) */ (var_1_6) , (var_1_14)));
	/* 946L, 233L, 676L, 691L) */ if (/* 937L, 214L, 215L, 677L, 692L) */ ((stepLocal_1) == (var_1_13))) {
		/* 945L, 232L, 682L, 697L) */ var_1_20 = (
			/* 944L, 231L, 685L, 700L) */ ((
				/* 942L, 229L, 686L, 701L) */ ((
					var_1_21
				) + (
					var_1_22
				))
			) - (
				var_1_12
			))
		);
	}


	// From: Req7Batch136Filler_PE_CN
	/* 952L, 272L, 738L, 761L) */ if (/* 953L, 245L, 246L, 739L, 762L) */ ((128) < (/* 955L, 244L, 248L, 741L, 764L) */ ((/* 956L, 242L, 249L, 742L, 765L) */ (min (/* 956L, 242L, 249L, 742L, 765L) */ (var_1_13) , (var_1_14)))) << (var_1_20))))) {
		/* 960L, 265L, 746L, 769L) */ var_1_23 = (
			/* 963L, 264L, 749L, 772L) */ ((
				4.75
			) + (
				var_1_24
			))
		);
	} else {
		/* 966L, 271L, 752L, 775L) */ var_1_23 = (
			/* 969L, 270L, 755L, 778L) */ ((
				var_1_24
			) + (
				var_1_25
			))
		);
	}


	// From: Req1Batch136Filler_PE_CN
	/* 829L, 52L, 281L, 302L) */ if (/* 830L, 11L, 12L, 282L, 303L) */ ((/* 831L, 5L, 13L, 283L, 304L) */ ((/* 832L, 3L, 14L, 284L, 305L) */ (~ (var_1_20))) & (var_1_12))) <= (/* 835L, 10L, 17L, 287L, 308L) */ ((/* 836L, 8L, 18L, 288L, 309L) */ ((var_1_4) - (var_1_5))) ^ (var_1_20))))) {
		/* 840L, 35L, 292L, 313L) */ var_1_1 = (
			var_1_7
		);
	} else {
		/* 844L, 51L, 296L, 317L) */ var_1_1 = (
			32.8f
		);
	}


	// From: Req2Batch136Filler_PE_CN
	unsigned char stepLocal_0 = /* 850L, 65L, 71L, 369L, 392L) */ (! (/* 851L, 64L, 72L, 370L, 393L) */ (! (0))));
	/* 872L, 110L, 364L, 387L) */ if (/* 857L, 66L, 67L, 365L, 388L) */ ((/* 856L, 62L, 68L, 366L, 389L) */ ((var_1_7) > (var_1_10))) || (stepLocal_0))) {
		/* 867L, 104L, 372L, 395L) */ if (var_1_9) {
			/* 862L, 87L, 374L, 397L) */ var_1_8 = (
				var_1_7
			);
		} else {
			/* 866L, 103L, 378L, 401L) */ var_1_8 = (
				1.0000000000008E12
			);
		}
	} else {
		/* 871L, 109L, 382L, 405L) */ var_1_8 = (
			var_1_7
		);
	}


	// From: CodeObject1
	/* 27L) */ if (/* 9L, 8L) */ ((/* 10L, 6L) */ ((/* 11L, 4L) */ ((var_1_27) ^ (var_1_28))) * (var_1_29))) >= (var_1_30))) {
		/* 26L) */ var_1_26 = (
			var_1_28
		);
	}


	// From: CodeObject2
	/* 54L) */ if (/* 36L, 35L) */ ((/* 37L, 33L) */ ((var_1_26) >> (var_1_32))) < (var_1_29))) {
		/* 53L) */ var_1_31 = (
			/* 52L) */ (max (
				/* 52L) */ (
					/* 50L) */ (min (
						/* 50L) */ (
							var_1_32
						) , (
							var_1_33
						)
					))
				) , (
					-50
				)
			))
		);
	}


	// From: CodeObject3
	/* 77L) */ if (/* 61L, 60L) */ ((var_1_31) <= (var_1_33))) {
		/* 76L) */ var_1_34 = (
			/* 75L) */ (min (
				/* 75L) */ (
					/* 73L) */ ((
						var_1_35
					) - (
						/* 72L) */ (max (
							/* 72L) */ (
								var_1_32
							) , (
								var_1_36
							)
						))
					))
				) , (
					var_1_37
				)
			))
		);
	}


	// From: CodeObject4
	/* 103L) */ if (var_1_39) {
		/* 88L) */ var_1_38 = (
			/* 87L) */ (abs (
				var_1_32
			))
		);
	} else {
		/* 101L) */ if (var_1_40) {
			/* 100L) */ var_1_38 = (
				/* 99L) */ ((
					/* 96L) */ ((
						26042
					) - (
						var_1_32
					))
				) + (
					/* 98L) */ (abs (
						var_1_41
					))
				))
			);
		}
	}


	// From: CodeObject5
	/* 114L) */ var_1_42 = (
		/* 113L) */ (max (
			/* 113L) */ (
				var_1_43
			) , (
				/* 112L) */ (min (
					/* 112L) */ (
						var_1_44
					) , (
						var_1_45
					)
				))
			)
		))
	);


	// From: CodeObject6
	/* 158L) */ if (/* 122L, 121L) */ ((var_1_44) <= (var_1_42))) {
		/* 135L) */ var_1_46 = (
			/* 134L) */ (min (
				/* 134L) */ (
					/* 132L) */ (min (
						/* 132L) */ (
							var_1_47
						) , (
							var_1_32
						)
					))
				) , (
					var_1_33
				)
			))
		);
	} else {
		/* 156L) */ if (/* 139L, 138L) */ ((var_1_45) >= (var_1_42))) {
			/* 150L) */ var_1_46 = (
				/* 149L) */ ((
					-5
				) + (
					var_1_32
				))
			);
		} else {
			/* 155L) */ var_1_46 = (
				/* 154L) */ (abs (
					var_1_32
				))
			);
		}
	}


	// From: CodeObject7
	/* 188L) */ if (/* 167L, 166L) */ ((var_1_35) <= (/* 169L, 165L) */ ((var_1_34) / (var_1_32))))) {
		/* 187L) */ var_1_48 = (
			/* 186L) */ ((
				/* 181L) */ (abs (
					/* 180L) */ (abs (
						var_1_49
					))
				))
			) + (
				/* 185L) */ ((
					/* 183L) */ (abs (
						var_1_50
					))
				) - (
					var_1_51
				))
			))
		);
	}


	// From: CodeObject8
	/* 197L) */ var_1_52 = (
		var_1_31
	);


	// From: CodeObject9
	/* 205L) */ var_1_53 = (
		128
	);
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 1073741824);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 30);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -127);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 210L, 11L, 22L, 324L, 345L, 975L) */ ((/* 211L, 5L, 23L, 325L, 346L, 976L) */ ((/* 212L, 3L, 24L, 326L, 347L, 977L) */ (~ (var_1_20))) & (var_1_12))) <= (/* 215L, 10L, 27L, 329L, 350L, 980L) */ ((/* 216L, 8L, 28L, 330L, 351L, 981L) */ ((var_1_4) - (var_1_5))) ^ (var_1_20))))) {
	} else {
	}
	if (/* 230L, 66L, 74L, 411L, 434L, 995L) */ ((/* 231L, 62L, 75L, 412L, 435L, 996L) */ ((var_1_7) > (var_1_10))) || (/* 234L, 65L, 78L, 415L, 438L, 999L) */ (! (/* 235L, 64L, 79L, 416L, 439L, 1000L) */ (! (0))))))) {
		if (var_1_9) {
		} else {
		}
	} else {
	}
	if (/* 259L, 118L, 122L, 499L, 517L, 1024L) */ ((var_1_9) && (var_1_11))) {
		if (/* 263L, 126L, 129L, 503L, 521L, 1028L) */ (! (var_1_9))) {
		}
	}
	if (/* 283L, 173L, 179L, 627L, 652L, 1048L) */ ((var_1_7) >= (/* 285L, 172L, 181L, 629L, 654L, 1050L) */ (max (/* 285L, 172L, 181L, 629L, 654L, 1050L) */ (var_1_10) , (5.25f)))))) {
	} else {
	}
	if (/* 308L, 214L, 220L, 707L, 722L, 1073L) */ ((/* 309L, 212L, 221L, 708L, 723L, 1074L) */ (min (/* 309L, 212L, 221L, 708L, 723L, 1074L) */ (var_1_6) , (var_1_14)))) == (var_1_13))) {
	}
	if (/* 325L, 245L, 253L, 785L, 808L, 1090L) */ ((128) < (/* 327L, 244L, 255L, 787L, 810L, 1092L) */ ((/* 328L, 242L, 256L, 788L, 811L, 1093L) */ (min (/* 328L, 242L, 256L, 788L, 811L, 1093L) */ (var_1_13) , (var_1_14)))) << (var_1_20))))) {
	} else {
	}
	return /* 350L) */ ((
	/* 349L) */ ((
		/* 348L) */ ((
			/* 347L) */ ((
				/* 346L) */ ((
					/* 345L) */ ((
						/* 209L, 53L, 323L, 344L, 974L) */ ((
							/* 210L, 11L, 22L, 324L, 345L, 975L) */ ((
								/* 211L, 5L, 23L, 325L, 346L, 976L) */ ((
									/* 212L, 3L, 24L, 326L, 347L, 977L) */ (~ (
										var_1_20
									))
								) & (
									var_1_12
								))
							) <= (
								/* 215L, 10L, 27L, 329L, 350L, 980L) */ ((
									/* 216L, 8L, 28L, 330L, 351L, 981L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								) ^ (
									var_1_20
								))
							))
						) ? (
							/* 220L, 35L, 334L, 355L, 985L) */ ((
								var_1_1
							) == (
								/* 220L, 35L, 334L, 355L, 985L) */ ((float) (
									var_1_7
								))
							))
						) : (
							/* 224L, 51L, 338L, 359L, 989L) */ ((
								var_1_1
							) == (
								/* 224L, 51L, 338L, 359L, 989L) */ ((float) (
									32.8f
								))
							))
						))
					) && (
						/* 229L, 111L, 410L, 433L, 994L) */ ((
							/* 230L, 66L, 74L, 411L, 434L, 995L) */ ((
								/* 231L, 62L, 75L, 412L, 435L, 996L) */ ((
									var_1_7
								) > (
									var_1_10
								))
							) || (
								/* 234L, 65L, 78L, 415L, 438L, 999L) */ (! (
									/* 235L, 64L, 79L, 416L, 439L, 1000L) */ (! (
										0
									))
								))
							))
						) ? (
							/* 237L, 105L, 418L, 441L, 1002L) */ ((
								var_1_9
							) ? (
								/* 239L, 87L, 420L, 443L, 1004L) */ ((
									var_1_8
								) == (
									/* 239L, 87L, 420L, 443L, 1004L) */ ((double) (
										var_1_7
									))
								))
							) : (
								/* 243L, 103L, 424L, 447L, 1008L) */ ((
									var_1_8
								) == (
									/* 243L, 103L, 424L, 447L, 1008L) */ ((double) (
										1.0000000000008E12
									))
								))
							))
						) : (
							/* 247L, 109L, 428L, 451L, 1012L) */ ((
								var_1_8
							) == (
								/* 247L, 109L, 428L, 451L, 1012L) */ ((double) (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 258L, 138L, 498L, 516L, 1023L) */ ((
						/* 259L, 118L, 122L, 499L, 517L, 1024L) */ ((
							var_1_9
						) && (
							var_1_11
						))
					) ? (
						/* 262L, 136L, 502L, 520L, 1027L) */ ((
							/* 263L, 126L, 129L, 503L, 521L, 1028L) */ (! (
								var_1_9
							))
						) ? (
							/* 265L, 134L, 505L, 523L, 1030L) */ ((
								var_1_10
							) == (
								/* 265L, 134L, 505L, 523L, 1030L) */ ((double) (
									var_1_7
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
				/* 271L, 164L, 553L, 565L, 1036L) */ ((
					var_1_12
				) == (
					/* 271L, 164L, 553L, 565L, 1036L) */ ((unsigned short int) (
						/* 274L, 163L, 556L, 568L, 1039L) */ ((
							/* 275L, 159L, 557L, 569L, 1040L) */ ((
								65103
							) - (
								2
							))
						) - (
							/* 278L, 162L, 560L, 572L, 1043L) */ (min (
								/* 278L, 162L, 560L, 572L, 1043L) */ (
									var_1_13
								) , (
									var_1_14
								)
							))
						))
					))
				))
			))
		) && (
			/* 282L, 203L, 626L, 651L, 1047L) */ ((
				/* 283L, 173L, 179L, 627L, 652L, 1048L) */ ((
					var_1_7
				) >= (
					/* 285L, 172L, 181L, 629L, 654L, 1050L) */ (max (
						/* 285L, 172L, 181L, 629L, 654L, 1050L) */ (
							var_1_10
						) , (
							5.25f
						)
					))
				))
			) ? (
				/* 288L, 195L, 632L, 657L, 1053L) */ ((
					var_1_15
				) == (
					/* 288L, 195L, 632L, 657L, 1053L) */ ((signed char) (
						/* 291L, 194L, 635L, 660L, 1056L) */ (max (
							/* 291L, 194L, 635L, 660L, 1056L) */ (
								/* 292L, 188L, 636L, 661L, 1057L) */ (min (
									/* 292L, 188L, 636L, 661L, 1057L) */ (
										-5
									) , (
										var_1_16
									)
								))
							) , (
								/* 295L, 193L, 639L, 664L, 1060L) */ ((
									/* 296L, 191L, 640L, 665L, 1061L) */ (min (
										/* 296L, 191L, 640L, 665L, 1061L) */ (
											var_1_17
										) , (
											var_1_18
										)
									))
								) + (
									var_1_19
								))
							)
						))
					))
				))
			) : (
				/* 300L, 201L, 644L, 669L, 1065L) */ ((
					var_1_15
				) == (
					/* 300L, 201L, 644L, 669L, 1065L) */ ((signed char) (
						/* 303L, 200L, 647L, 672L, 1068L) */ (min (
							/* 303L, 200L, 647L, 672L, 1068L) */ (
								var_1_17
							) , (
								var_1_16
							)
						))
					))
				))
			))
		))
	) && (
		/* 307L, 234L, 706L, 721L, 1072L) */ ((
			/* 308L, 214L, 220L, 707L, 722L, 1073L) */ ((
				/* 309L, 212L, 221L, 708L, 723L, 1074L) */ (min (
					/* 309L, 212L, 221L, 708L, 723L, 1074L) */ (
						var_1_6
					) , (
						var_1_14
					)
				))
			) == (
				var_1_13
			))
		) ? (
			/* 313L, 232L, 712L, 727L, 1078L) */ ((
				var_1_20
			) == (
				/* 313L, 232L, 712L, 727L, 1078L) */ ((unsigned long int) (
					/* 316L, 231L, 715L, 730L, 1081L) */ ((
						/* 317L, 229L, 716L, 731L, 1082L) */ ((
							var_1_21
						) + (
							var_1_22
						))
					) - (
						var_1_12
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 324L, 273L, 784L, 807L, 1089L) */ ((
		/* 325L, 245L, 253L, 785L, 808L, 1090L) */ ((
			128
		) < (
			/* 327L, 244L, 255L, 787L, 810L, 1092L) */ ((
				/* 328L, 242L, 256L, 788L, 811L, 1093L) */ (min (
					/* 328L, 242L, 256L, 788L, 811L, 1093L) */ (
						var_1_13
					) , (
						var_1_14
					)
				))
			) << (
				var_1_20
			))
		))
	) ? (
		/* 332L, 265L, 792L, 815L, 1097L) */ ((
			var_1_23
		) == (
			/* 332L, 265L, 792L, 815L, 1097L) */ ((double) (
				/* 335L, 264L, 795L, 818L, 1100L) */ ((
					4.75
				) + (
					var_1_24
				))
			))
		))
	) : (
		/* 338L, 271L, 798L, 821L, 1103L) */ ((
			var_1_23
		) == (
			/* 338L, 271L, 798L, 821L, 1103L) */ ((double) (
				/* 341L, 270L, 801L, 824L, 1106L) */ ((
					var_1_24
				) + (
					var_1_25
				))
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
