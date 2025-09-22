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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 100;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 100;
signed long int var_1_5 = -4;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 4;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 2;
double var_1_12 = 128.75;
double var_1_13 = 499.9;
double var_1_14 = 127.6;
double var_1_15 = 7.5;
double var_1_16 = 15.25;
unsigned char var_1_17 = 1;
double var_1_18 = 0.09999999999999998;
double var_1_19 = 1.375;
float var_1_20 = 100000000000000.5;
unsigned short int var_1_22 = 200;
signed long int var_1_23 = -10;
signed long int var_1_24 = -10;
unsigned long int var_1_25 = 64;
signed long int var_1_26 = -32;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 256;
float var_1_30 = 8.4;
float var_1_31 = 127.1;
double var_1_32 = 256.75;
double var_1_33 = 49.75;
signed char var_1_34 = -5;
signed char var_1_35 = 50;
signed char var_1_36 = 32;
signed char var_1_37 = 16;
signed char var_1_38 = 8;
signed char var_1_39 = 2;
signed char var_1_40 = -16;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 10;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 25;
unsigned long int var_1_47 = 0;
unsigned char var_1_48 = 10;
unsigned short int var_1_49 = 32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch184Filler_PE_CN
	signed long int stepLocal_0 = var_1_5;
	/* 924L, 98L, 389L, 412L) */ if (/* 905L, 73L, 74L, 390L, 413L) */ ((var_1_4) <= (stepLocal_0))) {
		/* 915L, 89L, 393L, 416L) */ var_1_8 = (
			/* 914L, 88L, 396L, 419L) */ ((
				/* 910L, 84L, 397L, 420L) */ (min (
					/* 910L, 84L, 397L, 420L) */ (
						var_1_9
					) , (
						var_1_10
					)
				))
			) - (
				/* 913L, 87L, 400L, 423L) */ ((
					64
				) - (
					var_1_11
				))
			))
		);
	} else {
		/* 923L, 97L, 403L, 426L) */ var_1_8 = (
			/* 922L, 96L, 406L, 429L) */ (max (
				/* 922L, 96L, 406L, 429L) */ (
					/* 920L, 94L, 407L, 430L) */ (min (
						/* 920L, 94L, 407L, 430L) */ (
							var_1_9
						) , (
							var_1_11
						)
					))
				) , (
					var_1_10
				)
			))
		);
	}


	// From: Req3Batch184Filler_PE_CN
	signed long int stepLocal_1 = var_1_5;
	/* 949L, 137L, 481L, 502L) */ if (/* 936L, 110L, 111L, 482L, 503L) */ ((/* 935L, 108L, 112L, 483L, 504L) */ ((/* 933L, 106L, 113L, 484L, 505L) */ ((var_1_10) | (var_1_4))) * (var_1_8))) <= (stepLocal_1))) {
		/* 942L, 130L, 489L, 510L) */ var_1_12 = (
			/* 941L, 129L, 492L, 513L) */ ((
				var_1_13
			) - (
				var_1_14
			))
		);
	} else {
		/* 948L, 136L, 495L, 516L) */ var_1_12 = (
			/* 947L, 135L, 498L, 519L) */ ((
				var_1_15
			) + (
				var_1_16
			))
		);
	}


	// From: Req4Batch184Filler_PE_CN
	/* 955L, 168L, 567L, 582L) */ if (/* 956L, 149L, 150L, 568L, 583L) */ ((var_1_14) <= (/* 958L, 148L, 152L, 570L, 585L) */ (max (/* 958L, 148L, 152L, 570L, 585L) */ (var_1_13) , (/* 960L, 147L, 154L, 572L, 587L) */ ((var_1_18) - (var_1_19)))))))) {
		/* 963L, 167L, 575L, 590L) */ var_1_17 = (
			var_1_6
		);
	}


	// From: Req1Batch184Filler_PE_CN
	/* 870L, 63L, 262L, 294L) */ if (/* 871L, 8L, 9L, 263L, 295L) */ ((/* 872L, 6L, 10L, 264L, 296L) */ ((var_1_8) / (/* 874L, 5L, 12L, 266L, 298L) */ (min (/* 874L, 5L, 12L, 266L, 298L) */ (var_1_3) , (var_1_4)))))) <= (var_1_5))) {
		/* 878L, 57L, 270L, 302L) */ if (/* 879L, 25L, 26L, 271L, 303L) */ ((var_1_4) >= (100))) {
			/* 882L, 35L, 274L, 306L) */ var_1_1 = (
				var_1_6
			);
		} else {
			/* 886L, 55L, 278L, 310L) */ if (var_1_6) {
				/* 888L, 42L, 280L, 312L) */ var_1_1 = (
					var_1_7
				);
			} else {
				/* 892L, 54L, 284L, 316L) */ var_1_1 = (
					0
				);
			}
		}
	} else {
		/* 896L, 62L, 288L, 320L) */ var_1_1 = (
			0
		);
	}


	// From: Req5Batch184Filler_PE_CN
	unsigned char stepLocal_2 = var_1_7;
	/* 990L, 211L, 625L, 647L) */ if (/* 974L, 182L, 183L, 626L, 648L) */ ((stepLocal_2) || (/* 973L, 181L, 185L, 628L, 650L) */ ((var_1_17) || (var_1_6))))) {
		/* 983L, 203L, 631L, 653L) */ if (var_1_1) {
			/* 982L, 202L, 633L, 655L) */ var_1_20 = (
				/* 981L, 201L, 636L, 658L) */ (min (
					/* 981L, 201L, 636L, 658L) */ (
						var_1_15
					) , (
						/* 980L, 200L, 638L, 660L) */ (abs (
							var_1_16
						))
					)
				))
			);
		}
	} else {
		/* 989L, 210L, 640L, 662L) */ var_1_20 = (
			/* 988L, 209L, 643L, 665L) */ ((
				var_1_16
			) + (
				var_1_15
			))
		);
	}


	// From: Req6Batch184Filler_PE_CN
	/* 995L, 255L, 766L, 792L) */ if (/* 996L, 218L, 219L, 767L, 793L) */ (! (var_1_1))) {
		/* 998L, 229L, 769L, 795L) */ var_1_22 = (
			/* 1001L, 228L, 772L, 798L) */ (abs (
				/* 1002L, 227L, 773L, 799L) */ (min (
					/* 1002L, 227L, 773L, 799L) */ (
						var_1_8
					) , (
						var_1_2
					)
				))
			))
		);
	} else {
		/* 1005L, 253L, 776L, 802L) */ if (/* 1006L, 234L, 235L, 777L, 803L) */ ((1) < (/* 1008L, 233L, 237L, 779L, 805L) */ ((var_1_3) + (var_1_5))))) {
			/* 1011L, 248L, 782L, 808L) */ var_1_22 = (
				var_1_9
			);
		} else {
			/* 1015L, 252L, 786L, 812L) */ var_1_22 = (
				var_1_8
			);
		}
	}


	// From: CodeObject1
	/* 5L) */ var_1_23 = (
		var_1_24
	);


	// From: CodeObject2
	/* 37L) */ if (/* 14L, 13L) */ ((var_1_24) > (/* 16L, 12L) */ (abs (var_1_26))))) {
		/* 35L) */ if (/* 25L, 24L) */ ((var_1_27) && (var_1_28))) {
			/* 34L) */ var_1_25 = (
				var_1_29
			);
		}
	}


	// From: CodeObject3
	/* 44L) */ var_1_30 = (
		var_1_31
	);


	// From: CodeObject4
	/* 82L) */ if (/* 63L, 62L) */ ((/* 64L, 59L) */ (- (/* 65L, 58L) */ ((var_1_26) ^ (var_1_25))))) < (/* 68L, 61L) */ (abs (var_1_29))))) {
		/* 81L) */ var_1_32 = (
			/* 80L) */ (abs (
				var_1_33
			))
		);
	}


	// From: CodeObject5
	/* 138L) */ if (/* 91L, 90L) */ ((var_1_29) <= (var_1_23))) {
		/* 125L) */ if (/* 105L, 104L) */ ((/* 106L, 102L) */ ((var_1_24) & (var_1_29))) > (var_1_23))) {
			/* 124L) */ var_1_34 = (
				/* 123L) */ ((
					/* 121L) */ (max (
						/* 121L) */ (
							/* 119L) */ (max (
								/* 119L) */ (
									var_1_35
								) , (
									var_1_36
								)
							))
						) , (
							var_1_37
						)
					))
				) + (
					var_1_38
				))
			);
		}
	} else {
		/* 137L) */ var_1_34 = (
			/* 136L) */ (max (
				/* 136L) */ (
					/* 132L) */ ((
						var_1_39
					) - (
						/* 131L) */ (abs (
							var_1_38
						))
					))
				) , (
					/* 135L) */ ((
						var_1_36
					) + (
						var_1_40
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 160L) */ if (/* 146L, 145L) */ ((var_1_39) > (/* 148L, 144L) */ (abs (var_1_37))))) {
		/* 159L) */ var_1_41 = (
			/* 158L) */ ((
				var_1_28
			) || (
				var_1_42
			))
		);
	}


	// From: CodeObject7
	/* 195L) */ if (/* 173L, 172L) */ ((var_1_34) <= (/* 175L, 171L) */ ((var_1_36) ^ (/* 177L, 170L) */ ((-4) ^ (var_1_25))))))) {
		/* 194L) */ var_1_43 = (
			/* 193L) */ (min (
				/* 193L) */ (
					var_1_44
				) , (
					/* 192L) */ ((
						var_1_45
					) + (
						var_1_46
					))
				)
			))
		);
	}


	// From: CodeObject8
	/* 236L) */ if (var_1_28) {
		/* 209L) */ var_1_47 = (
			/* 208L) */ (max (
				/* 208L) */ (
					1u
				) , (
					var_1_43
				)
			))
		);
	} else {
		/* 234L) */ if (/* 220L, 219L) */ ((var_1_36) > (/* 222L, 218L) */ (max (/* 222L, 218L) */ (-2) , (var_1_46)))))) {
			/* 233L) */ var_1_47 = (
				var_1_45
			);
		}
	}


	// From: CodeObject9
	/* 245L) */ var_1_48 = (
		var_1_44
	);


	// From: CodeObject10
	/* 253L) */ var_1_49 = (
		var_1_48
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483647);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483647);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 258L, 8L, 16L, 327L, 359L, 1022L) */ ((/* 259L, 6L, 17L, 328L, 360L, 1023L) */ ((var_1_8) / (/* 261L, 5L, 19L, 330L, 362L, 1025L) */ (min (/* 261L, 5L, 19L, 330L, 362L, 1025L) */ (var_1_3) , (var_1_4)))))) <= (var_1_5))) {
		if (/* 266L, 25L, 29L, 335L, 367L, 1030L) */ ((var_1_4) >= (100))) {
		} else {
			if (var_1_6) {
			} else {
			}
		}
	} else {
	}
	if (/* 289L, 73L, 77L, 436L, 459L, 1053L) */ ((var_1_4) <= (var_1_5))) {
	} else {
	}
	if (/* 312L, 110L, 118L, 524L, 545L, 1076L) */ ((/* 313L, 108L, 119L, 525L, 546L, 1077L) */ ((/* 314L, 106L, 120L, 526L, 547L, 1078L) */ ((var_1_10) | (var_1_4))) * (var_1_8))) <= (var_1_5))) {
	} else {
	}
	if (/* 335L, 149L, 157L, 598L, 613L, 1099L) */ ((var_1_14) <= (/* 337L, 148L, 159L, 600L, 615L, 1101L) */ (max (/* 337L, 148L, 159L, 600L, 615L, 1101L) */ (var_1_13) , (/* 339L, 147L, 161L, 602L, 617L, 1103L) */ ((var_1_18) - (var_1_19)))))))) {
	}
	if (/* 348L, 182L, 188L, 670L, 692L, 1112L) */ ((var_1_7) || (/* 350L, 181L, 190L, 672L, 694L, 1114L) */ ((var_1_17) || (var_1_6))))) {
		if (var_1_1) {
		}
	} else {
	}
	if (/* 371L, 218L, 221L, 819L, 845L, 1135L) */ (! (var_1_1))) {
	} else {
		if (/* 381L, 234L, 240L, 829L, 855L, 1145L) */ ((1) < (/* 383L, 233L, 242L, 831L, 857L, 1147L) */ ((var_1_3) + (var_1_5))))) {
		} else {
		}
	}
	return /* 399L) */ ((
	/* 398L) */ ((
		/* 397L) */ ((
			/* 396L) */ ((
				/* 395L) */ ((
					/* 257L, 64L, 326L, 358L, 1021L) */ ((
						/* 258L, 8L, 16L, 327L, 359L, 1022L) */ ((
							/* 259L, 6L, 17L, 328L, 360L, 1023L) */ ((
								var_1_8
							) / (
								/* 261L, 5L, 19L, 330L, 362L, 1025L) */ (min (
									/* 261L, 5L, 19L, 330L, 362L, 1025L) */ (
										var_1_3
									) , (
										var_1_4
									)
								))
							))
						) <= (
							var_1_5
						))
					) ? (
						/* 265L, 58L, 334L, 366L, 1029L) */ ((
							/* 266L, 25L, 29L, 335L, 367L, 1030L) */ ((
								var_1_4
							) >= (
								100
							))
						) ? (
							/* 269L, 35L, 338L, 370L, 1033L) */ ((
								var_1_1
							) == (
								/* 269L, 35L, 338L, 370L, 1033L) */ ((unsigned char) (
									var_1_6
								))
							))
						) : (
							/* 273L, 56L, 342L, 374L, 1037L) */ ((
								var_1_6
							) ? (
								/* 275L, 42L, 344L, 376L, 1039L) */ ((
									var_1_1
								) == (
									/* 275L, 42L, 344L, 376L, 1039L) */ ((unsigned char) (
										var_1_7
									))
								))
							) : (
								/* 279L, 54L, 348L, 380L, 1043L) */ ((
									var_1_1
								) == (
									/* 279L, 54L, 348L, 380L, 1043L) */ ((unsigned char) (
										0
									))
								))
							))
						))
					) : (
						/* 283L, 62L, 352L, 384L, 1047L) */ ((
							var_1_1
						) == (
							/* 283L, 62L, 352L, 384L, 1047L) */ ((unsigned char) (
								0
							))
						))
					))
				) && (
					/* 288L, 99L, 435L, 458L, 1052L) */ ((
						/* 289L, 73L, 77L, 436L, 459L, 1053L) */ ((
							var_1_4
						) <= (
							var_1_5
						))
					) ? (
						/* 292L, 89L, 439L, 462L, 1056L) */ ((
							var_1_8
						) == (
							/* 292L, 89L, 439L, 462L, 1056L) */ ((unsigned char) (
								/* 295L, 88L, 442L, 465L, 1059L) */ ((
									/* 296L, 84L, 443L, 466L, 1060L) */ (min (
										/* 296L, 84L, 443L, 466L, 1060L) */ (
											var_1_9
										) , (
											var_1_10
										)
									))
								) - (
									/* 299L, 87L, 446L, 469L, 1063L) */ ((
										64
									) - (
										var_1_11
									))
								))
							))
						))
					) : (
						/* 302L, 97L, 449L, 472L, 1066L) */ ((
							var_1_8
						) == (
							/* 302L, 97L, 449L, 472L, 1066L) */ ((unsigned char) (
								/* 305L, 96L, 452L, 475L, 1069L) */ (max (
									/* 305L, 96L, 452L, 475L, 1069L) */ (
										/* 306L, 94L, 453L, 476L, 1070L) */ (min (
											/* 306L, 94L, 453L, 476L, 1070L) */ (
												var_1_9
											) , (
												var_1_11
											)
										))
									) , (
										var_1_10
									)
								))
							))
						))
					))
				))
			) && (
				/* 311L, 138L, 523L, 544L, 1075L) */ ((
					/* 312L, 110L, 118L, 524L, 545L, 1076L) */ ((
						/* 313L, 108L, 119L, 525L, 546L, 1077L) */ ((
							/* 314L, 106L, 120L, 526L, 547L, 1078L) */ ((
								var_1_10
							) | (
								var_1_4
							))
						) * (
							var_1_8
						))
					) <= (
						var_1_5
					))
				) ? (
					/* 319L, 130L, 531L, 552L, 1083L) */ ((
						var_1_12
					) == (
						/* 319L, 130L, 531L, 552L, 1083L) */ ((double) (
							/* 322L, 129L, 534L, 555L, 1086L) */ ((
								var_1_13
							) - (
								var_1_14
							))
						))
					))
				) : (
					/* 325L, 136L, 537L, 558L, 1089L) */ ((
						var_1_12
					) == (
						/* 325L, 136L, 537L, 558L, 1089L) */ ((double) (
							/* 328L, 135L, 540L, 561L, 1092L) */ ((
								var_1_15
							) + (
								var_1_16
							))
						))
					))
				))
			))
		) && (
			/* 334L, 169L, 597L, 612L, 1098L) */ ((
				/* 335L, 149L, 157L, 598L, 613L, 1099L) */ ((
					var_1_14
				) <= (
					/* 337L, 148L, 159L, 600L, 615L, 1101L) */ (max (
						/* 337L, 148L, 159L, 600L, 615L, 1101L) */ (
							var_1_13
						) , (
							/* 339L, 147L, 161L, 602L, 617L, 1103L) */ ((
								var_1_18
							) - (
								var_1_19
							))
						)
					))
				))
			) ? (
				/* 342L, 167L, 605L, 620L, 1106L) */ ((
					var_1_17
				) == (
					/* 342L, 167L, 605L, 620L, 1106L) */ ((unsigned char) (
						var_1_6
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 347L, 212L, 669L, 691L, 1111L) */ ((
			/* 348L, 182L, 188L, 670L, 692L, 1112L) */ ((
				var_1_7
			) || (
				/* 350L, 181L, 190L, 672L, 694L, 1114L) */ ((
					var_1_17
				) || (
					var_1_6
				))
			))
		) ? (
			/* 353L, 204L, 675L, 697L, 1117L) */ ((
				var_1_1
			) ? (
				/* 355L, 202L, 677L, 699L, 1119L) */ ((
					var_1_20
				) == (
					/* 355L, 202L, 677L, 699L, 1119L) */ ((float) (
						/* 358L, 201L, 680L, 702L, 1122L) */ (min (
							/* 358L, 201L, 680L, 702L, 1122L) */ (
								var_1_15
							) , (
								/* 360L, 200L, 682L, 704L, 1124L) */ (abs (
									var_1_16
								))
							)
						))
					))
				))
			) : (
				1
			))
		) : (
			/* 362L, 210L, 684L, 706L, 1126L) */ ((
				var_1_20
			) == (
				/* 362L, 210L, 684L, 706L, 1126L) */ ((float) (
					/* 365L, 209L, 687L, 709L, 1129L) */ ((
						var_1_16
					) + (
						var_1_15
					))
				))
			))
		))
	))
) && (
	/* 370L, 256L, 818L, 844L, 1134L) */ ((
		/* 371L, 218L, 221L, 819L, 845L, 1135L) */ (! (
			var_1_1
		))
	) ? (
		/* 373L, 229L, 821L, 847L, 1137L) */ ((
			var_1_22
		) == (
			/* 373L, 229L, 821L, 847L, 1137L) */ ((unsigned short int) (
				/* 376L, 228L, 824L, 850L, 1140L) */ (abs (
					/* 377L, 227L, 825L, 851L, 1141L) */ (min (
						/* 377L, 227L, 825L, 851L, 1141L) */ (
							var_1_8
						) , (
							var_1_2
						)
					))
				))
			))
		))
	) : (
		/* 380L, 254L, 828L, 854L, 1144L) */ ((
			/* 381L, 234L, 240L, 829L, 855L, 1145L) */ ((
				1
			) < (
				/* 383L, 233L, 242L, 831L, 857L, 1147L) */ ((
					var_1_3
				) + (
					var_1_5
				))
			))
		) ? (
			/* 386L, 248L, 834L, 860L, 1150L) */ ((
				var_1_22
			) == (
				/* 386L, 248L, 834L, 860L, 1150L) */ ((unsigned short int) (
					var_1_9
				))
			))
		) : (
			/* 390L, 252L, 838L, 864L, 1154L) */ ((
				var_1_22
			) == (
				/* 390L, 252L, 838L, 864L, 1154L) */ ((unsigned short int) (
					var_1_8
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
